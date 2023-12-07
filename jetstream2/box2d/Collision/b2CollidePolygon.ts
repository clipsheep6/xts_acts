import {
  B2Transform,
  b2MulT,
  b2MulR2,
  b2MulT2,
  b2MulTR2,
  b2Dot22,
  subtract,
  add,
  b2Cross12,
  multM,
  b2MulTT2,
  B2Vec2,
  minus
} from '../Common/b2Math';
import { B2PolygonShape } from './Shapes/b2Shape';
import {
  B2ClipVertex,
  B2ContactFeatureType,
  B2Manifold,
  b2ClipSegmentToLine,
  B2ManifoldPoint,
  B2ManifoldType
} from './b2Collision';
import { b2_maxFloat, b2_linearSlop, b2_maxManifoldPoints, float_2, half } from '../Common/b2Settings';
function b2FindMaxSeparation(
  poly1: B2PolygonShape,
  xf1: B2Transform,
  poly2: B2PolygonShape,
  xf2: B2Transform
): [edgeIndex: number, maxSeparation: number] {
  let count1 = poly1.m_count;
  let count2 = poly2.m_count;
  let n1s = poly1.m_normals;
  let v1s = poly1.m_vertices;
  let v2s = poly2.m_vertices;
  let xf = b2MulT(xf2, xf1);
  let bestIndex = 0;
  let maxSeparation = -b2_maxFloat;
  for (let i = 0; i < count1; i++) {
    let n = b2MulR2(xf.q, n1s.get(i));
    let v1 = b2MulT2(xf, v1s.get(i));
    let si = b2_maxFloat;
    for (let j = 0; j < count2; j++) {
      let sij = b2Dot22(n, subtract(v2s.get(j), v1));
      if (sij < si) {
        si = sij;
      }
    }
    if (si > maxSeparation) {
      maxSeparation = si;
      bestIndex = i;
    }
  }
  return [bestIndex, maxSeparation];
}
function b2FindIncidentEdge(
  poly1: B2PolygonShape,
  xf1: B2Transform,
  edge1: number,
  poly2: B2PolygonShape,
  xf2: B2Transform
): B2ClipVertex[] {
  let normals1 = poly1.m_normals;
  let count2 = poly2.m_count;
  let vertices2 = poly2.m_vertices;
  let normals2 = poly2.m_normals;
  let normal1 = b2MulTR2(xf2.q, b2MulR2(xf1.q, normals1.get(edge1)));
  let index = 0;
  let minDot = b2_maxFloat;
  for (let i = 0; i < count2; i++) {
    let dot = b2Dot22(normal1, normals2.get(i));
    if (dot < minDot) {
      minDot = dot;
      index = i;
    }
  }
  let i1 = index;
  let i2 = i1 + 1 < count2 ? i1 + 1 : 0;
  let c: B2ClipVertex[] = [];
  for (let i = 0; i < float_2; i++) {
    c.push(new B2ClipVertex());
  }
  c[0].v = b2MulT2(xf2, vertices2.get(i1));
  c[0].id.indexA = edge1;
  c[0].id.indexB = i1;
  c[0].id.typeA = B2ContactFeatureType.face;
  c[0].id.typeB = B2ContactFeatureType.vertex;
  c[1].v = b2MulT2(xf2, vertices2.get(i2));
  c[1].id.indexA = edge1;
  c[1].id.indexB = i2;
  c[1].id.typeA = B2ContactFeatureType.face;
  c[1].id.typeB = B2ContactFeatureType.vertex;
  return c;
}

function b2CollidePolygons(
  manifold: B2Manifold,
  polyA: B2PolygonShape,
  xfA: B2Transform,
  polyB: B2PolygonShape,
  xfB: B2Transform
) {
  manifold.points.splice(0, manifold.points.length);
  let totalRadius = polyA.m_radius + polyB.m_radius;
  let fm = b2FindMaxSeparation(polyA, xfA, polyB, xfB);
  let edgeA = fm[0];
  let separationA = fm[1];
  if (separationA > totalRadius) {
    return;
  }
  let fmb = b2FindMaxSeparation(polyB, xfB, polyA, xfA);
  let edgeB = fmb[0];
  let separationB = fmb[1];
  if (separationB > totalRadius) {
    return;
  }
  let ratio: number = 0.1;
  let poly1: B2PolygonShape;
  let poly2: B2PolygonShape;
  let xf1: B2Transform, xf2: B2Transform;
  let edge1: number;
  let flip: boolean;
  let k_tol: number = ratio * b2_linearSlop;
  if (separationB > separationA + k_tol) {
    poly1 = polyB;
    poly2 = polyA;
    xf1 = xfB;
    xf2 = xfA;
    edge1 = edgeB;
    manifold.type = B2ManifoldType.faceB;
    flip = true;
  } else {
    poly1 = polyA;
    poly2 = polyB;
    xf1 = xfA;
    xf2 = xfB;
    edge1 = edgeA;
    manifold.type = B2ManifoldType.faceA;
    flip = false;
  }
  let incidentEdge = b2FindIncidentEdge(poly1, xf1, edge1, poly2, xf2);
  let count1 = poly1.m_count;
  let vertices1 = poly1.m_vertices;
  let iv1 = edge1;
  let iv2 = edge1 + 1 < count1 ? edge1 + 1 : 0;
  let v11: B2Vec2 = vertices1.get(iv1);
  let v12: B2Vec2 = vertices1.get(iv2);
  let localTangent = subtract(v12, v11);
  localTangent.normalize();
  let localNormal = b2Cross12(localTangent, 1.0);
  let planePoint = multM(add(v11, v12), half);
  let tangent = b2MulR2(xf1.q, localTangent);
  let normal = b2Cross12(tangent, 1.0);
  v11 = b2MulT2(xf1, v11);
  v12 = b2MulT2(xf1, v12);
  let frontOffset = b2Dot22(normal, v11);
  let sideOffset1 = -b2Dot22(tangent, v11) + totalRadius;
  let sideOffset2 = b2Dot22(tangent, v12) + totalRadius;
  let clipPoints1 = b2ClipSegmentToLine(incidentEdge, minus(tangent), sideOffset1, iv1);
  if (clipPoints1.length < float_2) {
    return;
  }
  let clipPoints2 = b2ClipSegmentToLine(clipPoints1, tangent, sideOffset2, iv2);
  if (clipPoints2.length < float_2) {
    return;
  }
  manifold.localNormal = localNormal;
  manifold.localPoint = planePoint;
  let pointCount = 0;
  for (let i = 0; i < b2_maxManifoldPoints; i++) {
    let separation = b2Dot22(normal, clipPoints2[i].v) - frontOffset;
    if (separation <= totalRadius) {
      let cp = new B2ManifoldPoint();
      cp.localPoint = b2MulTT2(xf2, clipPoints2[i].v);
      cp.id = clipPoints2[i].id;
      if (flip) {
        let cf = cp.id;
        cp.id.indexA = cf.indexB;
        cp.id.indexB = cf.indexA;
        cp.id.typeA = cf.typeB;
        cp.id.typeB = cf.typeA;
      }
      manifold.points.push(cp);
      pointCount += 1;
    }
  }
  return;
}
export { b2CollidePolygons };
