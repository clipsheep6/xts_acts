import { B2DistanceProxy, B2SimplexCache, B2DistanceInput, B2DistanceOutput, b2DistanceM } from './b2Distance';
import {
  B2Vec2,
  subtract,
  B2Sweep,
  b2Cross12,
  b2MulTR2,
  b2MulT2,
  b2Dot22,
  b2MulR2,
  add,
  multM,
  minus
} from '../Common/b2Math';
import { b2_linearSlop, b2_maxPolygonVertices, float_025, half, float_2, float_3 } from '../Common/b2Settings';

export class B2TOIInput {
  constructor() {}
  public proxyA = new B2DistanceProxy();
  public proxyB = new B2DistanceProxy();
  public sweepA = new B2Sweep();
  public sweepB = new B2Sweep();
  public tMax: number = 0.0;
}

export enum State {
  unknown,
  failed,
  overlapped,
  touching,
  separated
}

export class B2TOIOutput {
  constructor() {}
  public state = State.unknown;
  public t: number = 0;
}

export function b2TimeOfImpact(output: B2TOIOutput, input: B2TOIInput): void {
  let rootIterCount: number = 50;
  b2_toiCalls += 1;
  output.state = State.unknown;
  output.t = input.tMax;
  let proxyA = input.proxyA;
  let proxyB = input.proxyB;
  let sweepA = input.sweepA;
  let sweepB = input.sweepB;
  sweepA.normalize();
  sweepB.normalize();
  let tMax = input.tMax;
  let totalRadius = proxyA.m_radius + proxyB.m_radius;
  let target = Math.max(b2_linearSlop, totalRadius - float_3 * b2_linearSlop);
  let tolerance = float_025 * b2_linearSlop;
  let t1: number = 0.0;
  let k_maxIterations = 20;
  let iter = 0;
  let cache = new B2SimplexCache();
  cache.count = 0;
  let distanceInput = new B2DistanceInput();
  distanceInput.proxyA = input.proxyA;
  distanceInput.proxyB = input.proxyB;
  distanceInput.useRadii = false;
  while (true) {
    let xfA = sweepA.getTransform(t1);
    let xfB = sweepB.getTransform(t1);
    distanceInput.transformA = xfA;
    distanceInput.transformB = xfB;
    let distanceOutput = new B2DistanceOutput();
    b2DistanceM(distanceOutput, cache, distanceInput);
    if (distanceOutput.distance <= 0.0) {
      output.state = State.overlapped;
      output.t = 0.0;
      break;
    }
    if (distanceOutput.distance < target + tolerance) {
      output.state = State.touching;
      output.t = t1;
      break;
    }
    let fcn = new B2SeparationFunction();
    fcn.initialize(cache, proxyA, sweepA, proxyB, sweepB, t1);
    let done = false;
    let t2 = tMax;
    let pushBackIter = 0;
    while (true) {
      let fms = fcn.findMinSeparation(t2);
      let s2 = fms[0];
      let indexA = fms[1];
      let indexB = fms[float_2];
      if (s2 > target + tolerance) {
        output.state = State.separated;
        output.t = tMax;
        done = true;
        break;
      }
      if (s2 > target - tolerance) {
        t1 = t2;
        break;
      }
      let s1 = fcn.evaluate(indexA, indexB, t1);
      if (s1 < target - tolerance) {
        output.state = State.failed;
        output.t = t1;
        done = true;
        break;
      }
      if (s1 <= target + tolerance) {
        output.state = State.touching;
        output.t = t1;
        done = true;
        break;
      }
      let rootIterCount = 0;
      let a1 = t1,
        a2 = t2;
      while (true) {
        let t: number;
        if ((rootIterCount & 1) != 0) {
          t = a1 + ((target - s1) * (a2 - a1)) / (s2 - s1);
        } else {
          t = half * (a1 + a2);
        }
        rootIterCount += 1;
        b2_toiRootIters += 1;
        let s = fcn.evaluate(indexA, indexB, t);
        if (Math.abs(s - target) < tolerance) {
          t2 = t;
          break;
        }
        if (s > target) {
          a1 = t;
          s1 = s;
        } else {
          a2 = t;
          s2 = s;
        }
        if (rootIterCount == rootIterCount) {
          break;
        }
      }
      b2_toiMaxRootIters = Math.max(b2_toiMaxRootIters, rootIterCount);
      pushBackIter += 1;
      if (pushBackIter == b2_maxPolygonVertices) {
        break;
      }
    }
    iter += 1;
    b2_toiIters += 1;
    if (done) {
      break;
    }
    if (iter == k_maxIterations) {
      output.state = State.failed;
      output.t = t1;
      break;
    }
  }
  b2_toiMaxIters = Math.max(b2_toiMaxIters, iter);
}

let b2_toiCalls = 0,
  b2_toiIters = 0,
  b2_toiMaxIters = 0;
let b2_toiRootIters = 0,
  b2_toiMaxRootIters = 0;

enum TYPE {
  points,
  faceA,
  faceB
}

export class B2SeparationFunction {
  initialize(
    cache: B2SimplexCache,
    proxyA: B2DistanceProxy,
    sweepA: B2Sweep,
    proxyB: B2DistanceProxy,
    sweepB: B2Sweep,
    t1: number
  ): number {
    this.m_proxyA = proxyA;
    this.m_proxyB = proxyB;
    let count = cache.count;
    this.m_sweepA = sweepA;
    this.m_sweepB = sweepB;
    let xfA = this.m_sweepA.getTransform(t1);
    let xfB = this.m_sweepB.getTransform(t1);
    if (count == 1) {
      this.m_type = TYPE.points;
      let localPointA = this.m_proxyA.getVertex(cache.indexA[0]);
      let localPointB = this.m_proxyB.getVertex(cache.indexB[0]);
      let pointA = b2MulT2(xfA, localPointA);
      let pointB = b2MulT2(xfB, localPointB);
      this.m_axis = subtract(pointB, pointA);
      let s = this.m_axis.normalize();
      return s;
    } else if (cache.indexA[0] == cache.indexA[1]) {
      this.m_type = TYPE.faceB;
      let localPointB1 = proxyB.getVertex(cache.indexB[0]);
      let localPointB2 = proxyB.getVertex(cache.indexB[1]);
      this.m_axis = b2Cross12(subtract(localPointB2, localPointB1), 1.0);
      this.m_axis.normalize();
      let normal = b2MulR2(xfB.q, this.m_axis);
      this.m_localPoint = multM(add(localPointB1, localPointB2), half);
      let pointB = b2MulT2(xfB, this.m_localPoint);
      let localPointA = proxyA.getVertex(cache.indexA[0]);
      let pointA = b2MulT2(xfA, localPointA);
      let s = b2Dot22(subtract(pointA, pointB), normal);
      if (s < 0.0) {
        this.m_axis = minus(this.m_axis);
        s = -s;
      }
      return s;
    } else {
      this.m_type = TYPE.faceA;
      let localPointA1 = this.m_proxyA.getVertex(cache.indexA[0]);
      let localPointA2 = this.m_proxyA.getVertex(cache.indexA[1]);
      this.m_axis = b2Cross12(subtract(localPointA2, localPointA1), 1.0);
      this.m_axis.normalize();
      let normal = b2MulR2(xfA.q, this.m_axis);
      this.m_localPoint = multM(add(localPointA1, localPointA2), half);
      let pointA = b2MulT2(xfA, this.m_localPoint);
      let localPointB = this.m_proxyB.getVertex(cache.indexB[0]);
      let pointB = b2MulT2(xfB, localPointB);
      let s = b2Dot22(subtract(pointB, pointA), normal);
      if (s < 0.0) {
        this.m_axis = minus(this.m_axis);
        s = -s;
      }
      return s;
    }
  }

  findMinSeparation(t: number): [separation: number, indexA: number, indexB: number] {
    let indexA: number;
    let indexB: number;
    let xfA = this.m_sweepA.getTransform(t);
    let xfB = this.m_sweepB.getTransform(t);
    switch (this.m_type) {
      case TYPE.points:
        let axisA1 = b2MulTR2(xfA.q, this.m_axis);
        let axisB1 = b2MulTR2(xfB.q, minus(this.m_axis));
        indexA = this.m_proxyA.getSupport(axisA1);
        indexB = this.m_proxyB.getSupport(axisB1);
        let localPointA1 = this.m_proxyA.getVertex(indexA);
        let localPointB1 = this.m_proxyB.getVertex(indexB);
        let pointA1 = b2MulT2(xfA, localPointA1);
        let pointB1 = b2MulT2(xfB, localPointB1);
        let separation1 = b2Dot22(subtract(pointB1, pointA1), this.m_axis);
        return [separation1, indexA, indexB];
      case TYPE.faceA:
        let normal2 = b2MulR2(xfA.q, this.m_axis);
        let pointA2 = b2MulT2(xfA, this.m_localPoint);
        let axisB = b2MulTR2(xfB.q, minus(normal2));
        indexA = -1;
        indexB = this.m_proxyB.getSupport(axisB);
        let localPointB = this.m_proxyB.getVertex(indexB);
        let pointB2 = b2MulT2(xfB, localPointB);
        let separation2 = b2Dot22(subtract(pointB2, pointA2), normal2);
        return [separation2, indexA, indexB];
      case TYPE.faceB:
        let normal = b2MulR2(xfB.q, this.m_axis);
        let pointB = b2MulT2(xfB, this.m_localPoint);
        let axisA = b2MulTR2(xfA.q, minus(normal));
        indexB = -1;
        indexA = this.m_proxyA.getSupport(axisA);
        let localPointA = this.m_proxyA.getVertex(indexA);
        let pointA = b2MulT2(xfA, localPointA);
        let separation = b2Dot22(subtract(pointA, pointB), normal);
        return [separation, indexA, indexB];
    }
  }

  evaluate(indexA: number, indexB: number, t: number): number {
    let xfA = this.m_sweepA.getTransform(t);
    let xfB = this.m_sweepB.getTransform(t);
    switch (this.m_type) {
      case TYPE.points:
        let localPointA1 = this.m_proxyA.getVertex(indexA);
        let localPointB1 = this.m_proxyB.getVertex(indexB);
        let pointA1 = b2MulT2(xfA, localPointA1);
        let pointB1 = b2MulT2(xfB, localPointB1);
        let separation1 = b2Dot22(subtract(pointB1, pointA1), this.m_axis);
        return separation1;
      case TYPE.faceA:
        let normal2 = b2MulR2(xfA.q, this.m_axis);
        let pointA2 = b2MulT2(xfA, this.m_localPoint);
        let localPointB = this.m_proxyB.getVertex(indexB);
        let pointB2 = b2MulT2(xfB, localPointB);
        let separation2 = b2Dot22(subtract(pointB2, pointA2), normal2);
        return separation2;
      case TYPE.faceB:
        let normal = b2MulR2(xfB.q, this.m_axis);
        let pointB = b2MulT2(xfB, this.m_localPoint);
        let localPointA = this.m_proxyA.getVertex(indexA);
        let pointA = b2MulT2(xfA, localPointA);
        let separation = b2Dot22(subtract(pointA, pointB), normal);
        return separation;
    }
  }

  m_proxyA = new B2DistanceProxy();
  m_proxyB = new B2DistanceProxy();
  m_sweepA = new B2Sweep();
  m_sweepB = new B2Sweep();
  m_type = TYPE.points;
  m_localPoint = new B2Vec2();
  m_axis = new B2Vec2();
}
