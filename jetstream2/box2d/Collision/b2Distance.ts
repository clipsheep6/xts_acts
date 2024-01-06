import {
  B2Vec2,
  B2Transform,
  b2Dot22,
  subtractEqual,
  b2Cross,
  b2Distance,
  b2Vec2_zero,
  b2Cross21,
  b2Cross12,
  b2MulT2,
  b2MulTR2,
  multM,
  add,
  subtract,
  addEqual,
  minus
} from '../Common/b2Math';
import { B2Shape, B2CircleShape, B2PolygonShape, B2EdgeShape } from './Shapes/b2Shape';
import { b2_epsilon, b2_maxFloat } from '../Common/b2Settings';
import { B2Array } from '../Dynamics/b2TimeStep';
import { float_2 } from '../Common/b2Settings';
import { half } from '../Common/b2Settings';
import { float_3 } from '../Common/b2Settings';

export class B2DistanceProxy {
  public m_buffer: B2Array<B2Vec2> = new B2Array(float_2, new B2Vec2());
  public m_vertices: B2Array<B2Vec2> = new B2Array(1, new B2Vec2());
  public m_count = 0;
  public m_radius: number = 0;
  public constructor(shape: B2Shape | null = null, index: number | null = null) {
    for (let i = 0; i < float_2; i++) {
      this.m_buffer.append(new B2Vec2());
    }
    if (shape != null && index != null) {
      this.set(shape, index);
    }
  }

  public set(shape: B2Shape, index: number): void {
    switch (shape.type.name) {
      case 'circle':
        let circle = shape as B2CircleShape;
        this.m_vertices = circle.m_p_;
        this.m_count = 1;
        this.m_radius = circle.m_radius;
        break;
      case 'polygon':
        let polygon = shape as B2PolygonShape;
        this.m_vertices = polygon.m_vertices;
        this.m_count = polygon.m_count;
        this.m_radius = polygon.m_radius;
        break;
      case 'edge':
        let edge = shape as B2EdgeShape;
        this.m_vertices = edge.m_vertices;
        this.m_count = 2;
        this.m_radius = edge.m_radius;
        break;
      default:
        break;
    }
  }

  public getSupport(d: B2Vec2): number {
    let bestIndex = 0;
    let bestValue = b2Dot22(this.m_vertices.get(0), d);
    for (let i = 1; i < this.m_count; i++) {
      let value = b2Dot22(this.m_vertices!.get(i), d);
      if (value > bestValue) {
        bestIndex = i;
        bestValue = value;
      }
    }
    return bestIndex;
  }

  public getSupportVertex(d: B2Vec2): B2Vec2 {
    let bestIndex = 0;
    let bestValue = b2Dot22(this.m_vertices.get(0), d);
    for (let i = 1; i < this.m_count; i++) {
      let value = b2Dot22(this.m_vertices!.get(i), d);
      if (value > bestValue) {
        bestIndex = i;
        bestValue = value;
      }
    }
    return this.m_vertices!.get(bestIndex);
  }

  public get getVertexCount(): number {
    return this.m_count;
  }

  public getVertex(index: number): B2Vec2 {
    return this.m_vertices.get(index);
  }
}

export class B2SimplexVertex {
  wA = new B2Vec2();
  wB = new B2Vec2();
  w = new B2Vec2();
  a: number = 0;
  indexA: number = 0;
  indexB: number = 0;
  set(other: B2SimplexVertex): void {
    this.wA = other.wA;
    this.wB = other.wB;
    this.w = other.w;
    this.a = other.a;
    this.indexA = other.indexA;
    this.indexB = other.indexB;
  }
}

export class B2Simplex {
  m_count: number = 0;
  constructor() {
    for (let i = 0; i < float_3; i++) {
      this.m_v.push(new B2SimplexVertex());
    }
  }

  readCache(
    cache: B2SimplexCache,
    proxyA: B2DistanceProxy,
    transformA: B2Transform,
    proxyB: B2DistanceProxy,
    transformB: B2Transform
  ): void {
    this.m_count = cache.count;
    for (let i = 0; i < this.m_count; i++) {
      let v = this.m_v[i];
      v.indexA = cache.indexA[i];
      v.indexB = cache.indexB[i];
      let wALocal = proxyA.getVertex(v.indexA);
      let wBLocal = proxyB.getVertex(v.indexB);
      v.wA = b2MulT2(transformA, wALocal);
      v.wB = b2MulT2(transformB, wBLocal);
      v.w = subtract(v.wB, v.wA);
      v.a = 0.0;
    }
    if (this.m_count > 1) {
      let metric1 = cache.metric;
      let metric2 = this.getMetric();
      if (metric2 < half * metric1 || float_2 * metric1 < metric2 || metric2 < b2_epsilon) {
        this.m_count = 0;
      }
    }
    if (this.m_count == 0) {
      let v = this.m_v[0];
      v.indexA = 0;
      v.indexB = 0;
      let wALocal = proxyA.getVertex(0);
      let wBLocal = proxyB.getVertex(0);
      v.wA = b2MulT2(transformA, wALocal);
      v.wB = b2MulT2(transformB, wBLocal);
      v.w = subtract(v.wB, v.wA);
      v.a = 1.0;
      this.m_count = 1;
    }
  }

  writeCache(cache: B2SimplexCache): void {
    cache.metric = this.getMetric();
    cache.count = this.m_count;
    for (let i = 0; i < this.m_count; i++) {
      cache.indexA[i] = this.m_v[i].indexA;
      cache.indexB[i] = this.m_v[i].indexB;
    }
  }

  getSearchDirection(): B2Vec2 {
    switch (this.m_count) {
      case 1:
        return minus(this.m_v1.w);
      case float_2:
        let e12 = subtract(this.m_v2.w, this.m_v1.w);
        let sgn = b2Cross(e12, minus(this.m_v1.w));
        if (sgn > 0.0) {
          return b2Cross21(1.0, e12);
        } else {
          return b2Cross12(e12, 1.0);
        }
      default:
        return b2Vec2_zero;
    }
  }

  getClosestPoint(): B2Vec2 {
    switch (this.m_count) {
      case 0:
        return b2Vec2_zero;
      case 1:
        return this.m_v1.w;
      case float_2:
        return add(multM(this.m_v1.w, this.m_v1.a), multM(this.m_v2.w, this.m_v2.a));
      case float_3:
        return b2Vec2_zero;
      default:
        return b2Vec2_zero;
    }
  }

  getWitnessPoints(): [B2Vec2, B2Vec2] {
    let pA = new B2Vec2();
    let pB = new B2Vec2();
    switch (this.m_count) {
      case 0:
        throw new Error('illegal state');
      case 1:
        pA = this.m_v1.wA;
        pB = this.m_v1.wB;
        break;
      case float_2:
        pA = add(multM(this.m_v1.wA, this.m_v1.a), multM(this.m_v2.wA, this.m_v2.a));
        pB = add(multM(this.m_v1.wB, this.m_v1.a), multM(this.m_v2.wB, this.m_v2.a));
        break;
      case float_3:
        pA = add(
          add(multM(this.m_v1.wA, this.m_v1.a), multM(this.m_v2.wA, this.m_v2.a)),
          multM(this.m_v3.wA, this.m_v3.a)
        );
        pB = pA;
        break;
      default:
        throw new Error('illegal state');
    }
    return [pA, pB];
  }

  getMetric(): number {
    switch (this.m_count) {
      case 0:
        return 0.0;
      case 1:
        return 0.0;
      case float_2:
        return b2Distance(this.m_v1.w, this.m_v2.w);
      case float_3:
        return b2Cross(subtract(this.m_v2.w, this.m_v1.w), subtract(this.m_v3.w, this.m_v1.w));
      default:
        return 0.0;
    }
  }

  solve2(): void {
    let w1 = this.m_v1.w;
    let w2 = this.m_v2.w;
    let e12 = subtract(w2, w1);
    let d12_2 = -b2Dot22(w1, e12);
    if (d12_2 <= 0.0) {
      this.m_v1.a = 1.0;
      this.m_count = 1;
      return;
    }
    let d12_1 = b2Dot22(w2, e12);
    if (d12_1 <= 0.0) {
      this.m_v2.a = 1.0;
      this.m_count = 1;
      this.m_v1 = this.m_v2;
      return;
    }
    let inv_d12 = 1.0 / (d12_1 + d12_2);
    this.m_v1.a = d12_1 * inv_d12;
    this.m_v2.a = d12_2 * inv_d12;
    this.m_count = 2;
  }

  solve3(): void {
    let w1 = this.m_v1.w;
    let w2 = this.m_v2.w;
    let w3 = this.m_v3.w;
    let e12 = subtract(w2, w1);
    let w1e12 = b2Dot22(w1, e12);
    let w2e12 = b2Dot22(w2, e12);
    let d12_1 = w2e12;
    let d12_2 = -w1e12;
    let e13 = subtract(w3, w1);
    let w1e13 = b2Dot22(w1, e13);
    let w3e13 = b2Dot22(w3, e13);
    let d13_1 = w3e13;
    let d13_2 = -w1e13;
    let e23 = subtract(w3, w2);
    let w2e23 = b2Dot22(w2, e23);
    let w3e23 = b2Dot22(w3, e23);
    let d23_1 = w3e23;
    let d23_2 = -w2e23;
    let n123 = b2Cross(e12, e13);
    let d123_1 = n123 * b2Cross(w2, w3);
    let d123_2 = n123 * b2Cross(w3, w1);
    let d123_3 = n123 * b2Cross(w1, w2);
    if (d12_2 <= 0.0 && d13_2 <= 0.0) {
      this.m_v1.a = 1.0;
      this.m_count = 1;
      return;
    }
    if (d12_1 > 0.0 && d12_2 > 0.0 && d123_3 <= 0.0) {
      let inv_d12 = 1.0 / (d12_1 + d12_2);
      this.m_v1.a = d12_1 * inv_d12;
      this.m_v2.a = d12_2 * inv_d12;
      this.m_count = 2;
      return;
    }
    if (d13_1 > 0.0 && d13_2 > 0.0 && d123_2 <= 0.0) {
      let inv_d13 = 1.0 / (d13_1 + d13_2);
      this.m_v1.a = d13_1 * inv_d13;
      this.m_v3.a = d13_2 * inv_d13;
      this.m_count = 2;
      this.m_v2 = this.m_v3;
      return;
    }
    if (d12_1 <= 0.0 && d23_2 <= 0.0) {
      this.m_v2.a = 1.0;
      this.m_count = 1;
      this.m_v1 = this.m_v2;
      return;
    }
    if (d13_1 <= 0.0 && d23_1 <= 0.0) {
      this.m_v3.a = 1.0;
      this.m_count = 1;
      this.m_v1 = this.m_v3;
      return;
    }
    if (d23_1 > 0.0 && d23_2 > 0.0 && d123_1 <= 0.0) {
      let inv_d23 = 1.0 / (d23_1 + d23_2);
      this.m_v2.a = d23_1 * inv_d23;
      this.m_v3.a = d23_2 * inv_d23;
      this.m_count = 2;
      this.m_v1 = this.m_v3;
      return;
    }
    let inv_d123 = 1.0 / (d123_1 + d123_2 + d123_3);
    this.m_v1.a = d123_1 * inv_d123;
    this.m_v2.a = d123_2 * inv_d123;
    this.m_v3.a = d123_3 * inv_d123;
    this.m_count = 3;
  }

  m_v: B2SimplexVertex[] = [];
  get m_v1() {
    return this.m_v[0];
  }

  set m_v1(newValue) {
    this.m_v[0].set(newValue);
  }

  get m_v2() {
    return this.m_v[1];
  }

  set m_v2(newValue) {
    this.m_v[1].set(newValue);
  }

  get m_v3() {
    return this.m_v[float_2];
  }

  set m_v3(newValue) {
    this.m_v[float_2].set(newValue);
  }
}

export class B2SimplexCache {
  public metric: number;
  public count: number;
  public indexA: number[];
  public indexB: number[];
  public constructor() {
    this.metric = 0;
    this.count = 0;
    this.indexA = [0, 0, 0];
    this.indexB = [0, 0, 0];
  }
}

export class B2DistanceInput {
  public proxyA: B2DistanceProxy;
  public proxyB: B2DistanceProxy;
  public transformA: B2Transform;
  public transformB: B2Transform;
  public useRadii: boolean;
  public constructor() {
    this.proxyA = new B2DistanceProxy();
    this.proxyB = new B2DistanceProxy();
    this.transformA = new B2Transform();
    this.transformB = new B2Transform();
    this.useRadii = false;
  }
}

export class B2DistanceOutput {
  public pointA: B2Vec2;
  public pointB: B2Vec2;
  public distance: number;
  public iterations: number;
  public constructor() {
    this.pointA = new B2Vec2();
    this.pointB = new B2Vec2();
    this.distance = 0;
    this.iterations = 0;
  }
}

function b2DistanceM(output: B2DistanceOutput, cache: B2SimplexCache, input: B2DistanceInput): void {
  b2_gjkCalls += 1;
  let proxyA = input.proxyA;
  let proxyB = input.proxyB;
  let transformA = input.transformA;
  let transformB = input.transformB;
  let simplex = new B2Simplex();
  simplex.readCache(cache, proxyA, transformA, proxyB, transformB);
  let k_maxIters = 20;
  let saveA = [0, 0, 0],
    saveB = [0, 0, 0];
  let saveCount = 0;
  let distanceSqr1 = b2_maxFloat;
  let distanceSqr2 = distanceSqr1;
  let iter = 0;
  while (iter < k_maxIters) {
    saveCount = simplex.m_count;
    for (let i = 0; i < saveCount; i++) {
      saveA[i] = simplex.m_v[i].indexA;
      saveB[i] = simplex.m_v[i].indexB;
    }
    switch (simplex.m_count) {
      case 1:
        break;
      case float_2:
        simplex.solve2();
        break;
      case float_3:
        simplex.solve3();
        break;
      default:
        break;
    }
    if (simplex.m_count == float_3) {
      break;
    }
    let p = simplex.getClosestPoint();
    distanceSqr2 = p.lengthSquared();
    distanceSqr1 = distanceSqr2;
    let d = simplex.getSearchDirection();
    if (d.lengthSquared() < b2_epsilon * b2_epsilon) {
      break;
    }
    let vertex = simplex.m_v[simplex.m_count];
    vertex.indexA = proxyA.getSupport(b2MulTR2(transformA.q, minus(d)));
    vertex.wA = b2MulT2(transformA, proxyA.getVertex(vertex.indexA));
    vertex.indexB = proxyB.getSupport(b2MulTR2(transformB.q, d));
    vertex.wB = b2MulT2(transformB, proxyB.getVertex(vertex.indexB));
    vertex.w = subtract(vertex.wB, vertex.wA);
    iter += 1;
    b2_gjkIters += 1;
    let duplicate = false;
    for (let i = 0; i < saveCount; i++) {
      if (vertex.indexA == saveA[i] && vertex.indexB == saveB[i]) {
        duplicate = true;
        break;
      }
    }
    if (duplicate) {
      break;
    }
    simplex.m_count += 1;
  }
  b2_gjkMaxIters = Math.max(b2_gjkMaxIters, iter);
  let sget = simplex.getWitnessPoints();
  output.pointA = sget[0];
  output.pointB = sget[1];
  output.distance = b2Distance(output.pointA, output.pointB);
  output.iterations = iter;
  simplex.writeCache(cache);
  if (input.useRadii) {
    let rA = proxyA.m_radius;
    let rB = proxyB.m_radius;
    if (output.distance > rA + rB && output.distance > b2_epsilon) {
      output.distance -= rA + rB;
      let normal = subtract(output.pointB, output.pointA);
      normal.normalize();
      addEqual(output.pointA, multM(normal, rA));
      subtractEqual(output.pointB, multM(normal, rB));
    } else {
      let p = multM(add(output.pointA, output.pointB), half);
      output.pointA = p;
      output.pointB = p;
      output.distance = 0.0;
    }
  }
  return;
}
let b2_gjkCalls: number = 0;
let b2_gjkIters: number = 0;
let b2_gjkMaxIters: number = 0;

export { b2DistanceM };
