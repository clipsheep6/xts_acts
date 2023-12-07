import {
  B2Vec2,
  B2Transform,
  b2DistanceSquared,
  b2MulT2,
  b2Dot22,
  add,
  subtract,
  mulEqual,
  multM
} from '../Common/b2Math';

import { B2Manifold, B2ManifoldType, B2ManifoldPoint } from './b2Collision';
import { B2CircleShape, B2PolygonShape } from './Shapes/b2Shape';
import { b2_epsilon, b2_maxFloat, half } from '../Common/b2Settings';

function b2CollideCircles(
  manifold: B2Manifold,
  circleA: B2CircleShape,
  xfA: B2Transform,
  circleB: B2CircleShape,
  xfB: B2Transform
): void {
  manifold.points.splice(0, manifold.points.length);
  let pA = b2MulT2(xfA, circleA.m_p);
  let pB = b2MulT2(xfB, circleB.m_p);
  let d = subtract(pB, pA);
  let distSqr = b2Dot22(d, d);
  let rA = circleA.m_radius;
  let rB = circleB.m_radius;
  let radius = rA + rB;
  if (distSqr > radius * radius) {
    return;
  }
  manifold.type = B2ManifoldType.circles;
  manifold.localPoint = circleA.m_p;
  manifold.localNormal.setZero();
  let cp = new B2ManifoldPoint();
  cp.localPoint = circleB.m_p;
  cp.id.setZero();
  manifold.points.push(cp);
}
function b2CollidePolygonAndCircle(
  manifold: B2Manifold,
  polygonA: B2PolygonShape,
  xfA: B2Transform,
  circleB: B2CircleShape,
  xfB: B2Transform
): void {
  manifold.points.splice(0, manifold.points.length);
  let c = b2MulT2(xfB, circleB.m_p);
  let cLocal = b2MulT2(xfA, c);
  let normalIndex = 0;
  let separation = -b2_maxFloat;
  let radius = polygonA.m_radius + circleB.m_radius;
  let vertexCount = polygonA.m_count;
  let vertices = polygonA.m_vertices;
  let normals = polygonA.m_normals;
  for (let i = 0; i < vertexCount; i++) {
    let n = subtract(cLocal, vertices.get(i));
    let s = b2Dot22(normals.get(i), n);
    if (s > radius) {
      return;
    }
    if (s > separation) {
      separation = s;
      normalIndex = i;
    }
  }
  let vertIndex1 = normalIndex;
  let vertIndex2 = vertIndex1 + 1 < vertexCount ? vertIndex1 + 1 : 0;
  let v1: B2Vec2 = vertices.get(vertIndex1);
  let v2: B2Vec2 = vertices.get(vertIndex2);
  if (separation < b2_epsilon) {
    manifold.type = B2ManifoldType.faceA;
    manifold.localNormal = normals.get(normalIndex);
    manifold.localPoint = multM(add(v1, v2), half);
    let cp = new B2ManifoldPoint();
    cp.localPoint = circleB.m_p;
    cp.id.setZero();
    manifold.points.push(cp);
    return;
  }
  let u1 = b2Dot22(subtract(cLocal, v1), subtract(v2, v1));
  let u2 = b2Dot22(subtract(cLocal, v2), subtract(v1, v2));
  if (u1 <= 0.0) {
    if (b2DistanceSquared(cLocal, v1) > radius * radius) {
      return;
    }
    manifold.type = B2ManifoldType.faceA;
    manifold.localNormal = subtract(cLocal, v1);
    manifold.localNormal.normalize();
    manifold.localPoint = v1;
    let cp = new B2ManifoldPoint();
    cp.localPoint = circleB.m_p;
    cp.id.setZero();
    manifold.points.push(cp);
  } else if (u2 <= 0.0) {
    if (b2DistanceSquared(cLocal, v2) > radius * radius) {
      return;
    }
    manifold.type = B2ManifoldType.faceA;
    manifold.localNormal = subtract(cLocal, v2);
    manifold.localNormal.normalize();
    manifold.localPoint = v2;
    let cp = new B2ManifoldPoint();
    cp.localPoint = circleB.m_p;
    cp.id.setZero();
    manifold.points.push(cp);
  } else {
    let faceCenter = multM(add(v1, v2), half);
    let separation = b2Dot22(subtract(cLocal, faceCenter), normals.get(vertIndex1));
    if (separation > radius) {
      return;
    }
    manifold.type = B2ManifoldType.faceA;
    manifold.localNormal = normals.get(vertIndex1);
    manifold.localPoint = faceCenter;
    let cp = new B2ManifoldPoint();
    cp.localPoint = circleB.m_p;
    cp.id.setZero();
    manifold.points.push(cp);
  }
  return;
}
export { b2CollideCircles, b2CollidePolygonAndCircle };
