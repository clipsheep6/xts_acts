import {
  B2Vec2,
  B2Transform,
  b2MulT2,
  b2DistanceSquared,
  b2Dot22,
  b2MulR2,
  b2Min,
  b2Max,
  b2Abs2,
  add,
  subtract,
  multM,
  minus
} from '../Common/b2Math';

import { B2Shape } from './Shapes/b2Shape';
import { B2DistanceInput, B2SimplexCache, B2DistanceOutput, b2DistanceM } from './b2Distance';
import { b2_maxManifoldPoints, b2_minFloat, b2_maxFloat, b2_epsilon } from '../Common/b2Settings';
import { float_2 } from '../Common/b2Settings';
import { half } from '../Common/b2Settings';
import { float_10 } from '../Common/b2Settings';
enum B2ContactFeatureType {
  vertex = 0,
  face = 1
}

export class B2ContactFeature {
  public indexA: number = 0;
  public indexB: number = 0;
  public typeA: B2ContactFeatureType = B2ContactFeatureType.vertex;
  public typeB: B2ContactFeatureType = B2ContactFeatureType.vertex;
  constructor() {}
  public setZero(): void {
    this.indexA = 0;
    this.indexB = 0;
    this.typeA = B2ContactFeatureType.vertex;
    this.typeB = B2ContactFeatureType.vertex;
  }
}

export class B2ManifoldPoint {
  localPoint = new B2Vec2();
  public normalImpulse: number = 0.0;
  public tangentImpulse: number = 0.0;
  public id = new B2ContactFeature();
  constructor(copyFrom: B2ManifoldPoint | null = null) {
    if (copyFrom != null) {
      this.localPoint = copyFrom.localPoint;
      this.normalImpulse = copyFrom.normalImpulse;
      this.tangentImpulse = copyFrom.tangentImpulse;
      this.id = copyFrom.id;
    }
  }
}

enum B2ManifoldType {
  circles,
  faceA,
  faceB
}

export class B2Manifold {
  public points: B2ManifoldPoint[] = [];
  public localNormal = new B2Vec2();
  public localPoint = new B2Vec2();
  public type = B2ManifoldType.circles;
  public get pointCount(): number {
    return this.points.length;
  }
  constructor(copyFrom: B2Manifold | null = null) {
    if (copyFrom != null) {
      this.points = [];
      for (let i = 0; i < copyFrom.points.length; i++) {
        this.points.push(new B2ManifoldPoint(copyFrom.points[i]));
      }
      this.localNormal = copyFrom.localNormal;
      this.localPoint = copyFrom.localPoint;
      this.type = copyFrom.type;
    }
  }
}

export class B2WorldManifold {
  public normal = new B2Vec2();
  public points: B2Vec2[];
  public separations: number[];
  constructor() {
    this.points = [];
    this.separations = [];
    for (let i = 0; i < b2_maxManifoldPoints; i++) {
      this.points.push(new B2Vec2(0, 0));
      this.separations.push(0);
    }
  }
  public initialize(manifold: B2Manifold, xfA: B2Transform, radiusA: number, xfB: B2Transform, radiusB: number): void {
    if (manifold.pointCount == 0) {
      return;
    }
    switch (manifold.type) {
      case B2ManifoldType.circles:
        this.normal.set(1.0, 0.0);
        let pointA = b2MulT2(xfA, manifold.localPoint);
        let pointB = b2MulT2(xfB, manifold.points[0].localPoint);
        if (b2DistanceSquared(pointA, pointB) > b2_epsilon * b2_epsilon) {
          this.normal = subtract(pointB, pointA);
          this.normal.normalize();
        }
        let cA = add(pointA, multM(this.normal, radiusA));
        let cB = subtract(pointB, multM(this.normal, radiusB));
        this.points[0] = multM(add(cA, cB), half);
        this.separations[0] = b2Dot22(subtract(cB, cA), this.normal);
        break;
      case B2ManifoldType.faceA:
        this.normal = b2MulR2(xfA.q, manifold.localNormal);
        let planePointA = b2MulT2(xfA, manifold.localPoint);
        for (let i = 0; i < manifold.pointCount; i++) {
          let clipPoint = b2MulT2(xfB, manifold.points[i].localPoint);
          let cA = add(clipPoint, multM(this.normal, radiusA - b2Dot22(subtract(clipPoint, planePointA), this.normal)));
          let cB = subtract(clipPoint, multM(this.normal, radiusB));
          this.points[i] = multM(add(cA, cB), half);
          this.separations[i] = b2Dot22(subtract(cB, cA), this.normal);
        }
        break;
      case B2ManifoldType.faceB:
        this.normal = b2MulR2(xfB.q, manifold.localNormal);
        let planePointB = b2MulT2(xfB, manifold.localPoint);
        for (let i = 0; i < manifold.pointCount; i++) {
          let clipPoint = b2MulT2(xfA, manifold.points[i].localPoint);
          let cB = add(clipPoint, multM(this.normal, radiusB - b2Dot22(subtract(clipPoint, planePointB), this.normal)));
          let cA = subtract(clipPoint, multM(this.normal, radiusB));
          this.points[i] = multM(add(cA, cB), half);
          this.separations[i] = b2Dot22(subtract(cA, cB), this.normal);
        }
        this.normal = minus(this.normal);
        break;
      default:
        break;
    }
  }
}

export class B2ClipVertex {
  constructor() {}
  public v = new B2Vec2();
  public id = new B2ContactFeature();
}

export class B2RayCastInput {
  constructor() {}
  public p1 = new B2Vec2();
  public p2 = new B2Vec2();
  public maxFraction: number = 0;
}

export class B2RayCastOutput {
  constructor() {}
  public normal = new B2Vec2();
  public fraction: number = 0;
}

export class B2AABB {
  public lowerBound = new B2Vec2();
  public upperBound = new B2Vec2();
  constructor(lowerBound: B2Vec2 | null = null, upperBound: B2Vec2 | null = null) {
    if (lowerBound != null && upperBound != null) {
      this.lowerBound = lowerBound;
      this.upperBound = upperBound;
    }
  }

  public isValid(): boolean {
    let d = subtract(this.upperBound, this.lowerBound);
    let valid = d.x >= 0.0 && d.y >= 0.0;
    valid = valid && this.lowerBound.isValid() && this.upperBound.isValid();
    return valid;
  }

  public center(): B2Vec2 {
    return multM(add(this.lowerBound, this.upperBound), half);
  }

  public extents(): B2Vec2 {
    return multM(subtract(this.upperBound, this.lowerBound), half);
  }

  get perimeter(): number {
    let wx = this.upperBound.x - this.lowerBound.x;
    let wy = this.upperBound.y - this.lowerBound.y;
    return float_2 * (wx + wy);
  }

  public combine(aabb1: B2AABB, aabb2: B2AABB): void {
    this.lowerBound = b2Min(aabb1.lowerBound, aabb2.lowerBound);
    this.upperBound = b2Max(aabb1.upperBound, aabb2.upperBound);
  }

  public contains(aabb: B2AABB): boolean {
    let result = true;
    result = result && this.lowerBound.x <= aabb.lowerBound.x;
    result = result && this.lowerBound.y <= aabb.lowerBound.y;
    result = result && aabb.upperBound.x <= this.upperBound.x;
    result = result && aabb.upperBound.y <= this.upperBound.y;
    return result;
  }

  public rayCast(input: B2RayCastInput): B2RayCastOutput | null {
    let tmin = b2_minFloat;
    let tmax = b2_maxFloat;
    let p = input.p1;
    let d = subtract(input.p2, input.p1);
    let absD: B2Vec2 = b2Abs2(d);
    let normal = new B2Vec2();
    for (let i = 0; i < float_2; i++) {
      if (absD.getSubscript(i) < b2_epsilon) {
        if (
          p.getSubscript(i) < this.lowerBound.getSubscript(i) ||
          this.upperBound.getSubscript(i) < p.getSubscript(i)
        ) {
          return null;
        }
      } else {
        let inv_d = 1.0 / d.getSubscript(i);
        let t1 = (this.lowerBound.getSubscript(i) - p.getSubscript(i)) * inv_d;
        let t2 = (this.upperBound.getSubscript(i) - p.getSubscript(i)) * inv_d;
        let s: number = -1.0;
        if (t1 > t2) {
          t1 = t2;
          t2 = t1;
          s = 1.0;
        }
        if (t1 > tmin) {
          normal.setZero();
          normal.setSubscript(i, s);
          tmin = t1;
        }
        tmax = Math.min(tmax, t2);
        if (tmin > tmax) {
          return null;
        }
      }
    }
    if (tmin < 0.0 || input.maxFraction < tmin) {
      return null;
    }
    let output = new B2RayCastOutput();
    output.fraction = tmin;
    output.normal = normal;
    return output;
  }
}

function b2ClipSegmentToLine(
  vIn: B2ClipVertex[],
  normal: B2Vec2,
  offset: number,
  vertexIndexA: number
): B2ClipVertex[] {
  let vOut: B2ClipVertex[] = [];
  let distance0 = b2Dot22(normal, vIn[0].v) - offset;
  let distance1 = b2Dot22(normal, vIn[1].v) - offset;
  if (distance0 <= 0.0) {
    vOut.push(vIn[0]);
  }
  if (distance1 <= 0.0) {
    vOut.push(vIn[1]);
  }
  if (distance0 * distance1 < 0.0) {
    let interp = distance0 / (distance0 - distance1);
    let v = new B2ClipVertex();
    v.v = add(vIn[0].v, multM(subtract(vIn[1].v, vIn[0].v), interp));
    v.id.indexA = vertexIndexA;
    v.id.indexB = vIn[0].id.indexB;
    v.id.typeA = B2ContactFeatureType.vertex;
    v.id.typeB = B2ContactFeatureType.face;
    vOut.push(v);
  }
  return vOut;
}

function b2TestOverlap(
  shapeA: B2Shape,
  indexA: number,
  shapeB: B2Shape,
  indexB: number,
  xfA: B2Transform,
  xfB: B2Transform
): boolean {
  let input = new B2DistanceInput();
  input.proxyA.set(shapeA, indexA);
  input.proxyB.set(shapeB, indexB);
  input.transformA = xfA;
  input.transformB = xfB;
  input.useRadii = true;
  let cache = new B2SimplexCache();
  cache.count = 0;
  let output = new B2DistanceOutput();
  b2DistanceM(output, cache, input);
  return output.distance < float_10 * b2_epsilon;
}

function b2TestOverlap2(a: B2AABB, b: B2AABB): boolean {
  let d1 = subtract(b.lowerBound, a.upperBound);
  let d2 = subtract(a.lowerBound, b.upperBound);
  if (d1.x > 0.0 || d1.y > 0.0) {
    return false;
  }
  if (d2.x > 0.0 || d2.y > 0.0) {
    return false;
  }
  return true;
}

export { B2ManifoldType, b2TestOverlap, b2ClipSegmentToLine, b2TestOverlap2, B2ContactFeatureType };
