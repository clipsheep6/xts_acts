import {
  B2Transform,
  B2Vec2,
  b2MulT,
  b2MulT2,
  subtract,
  b2Dot22,
  multM,
  b2Cross,
  b2MulR2,
  b2MulTT2,
  add,
  minus
} from '../Common/b2Math';
import {
  B2Manifold,
  B2ContactFeature,
  B2ContactFeatureType,
  B2ManifoldType,
  B2ManifoldPoint,
  B2ClipVertex,
  b2ClipSegmentToLine
} from './b2Collision';
import { B2EdgeShape, B2CircleShape, B2PolygonShape } from './Shapes/b2Shape';
import {
  b2_maxPolygonVertices,
  b2_polygonRadius,
  b2_maxManifoldPoints,
  b2_angularSlop,
  b2_maxFloat,
  float_2
} from '../Common/b2Settings';

function b2CollideEdgeAndCircle(
  manifold: B2Manifold,
  edgeA: B2EdgeShape,
  xfA: B2Transform,
  circleB: B2CircleShape,
  xfB: B2Transform
): void {
  manifold.points.splice(0, manifold.points.length);
  let Q = b2MulTT2(xfA, b2MulT2(xfB, circleB.m_p));

  let A: B2Vec2 = edgeA.m_vertex1;
  let B: B2Vec2 = edgeA.m_vertex2;
  let e = subtract(B, A);

  let u = b2Dot22(e, subtract(B, Q));
  let v = b2Dot22(e, subtract(Q, A));

  let radius = edgeA.m_radius + circleB.m_radius;

  let cf = new B2ContactFeature();
  cf.indexB = 0;
  cf.typeB = B2ContactFeatureType.vertex;

  if (v <= 0.0) {
    let P = A;
    let d = subtract(Q, P);
    let dd = b2Dot22(d, d);
    if (dd > radius * radius) {
      return;
    }
    if (edgeA.m_hasVertex0) {
      let A1 = edgeA.m_vertex0;
      let B1 = A;
      let e1 = subtract(B1, A1);
      let u1 = b2Dot22(e1, subtract(B1, Q));

      if (u1 > 0.0) {
        return;
      }
    }

    cf.indexA = 0;
    cf.typeA = B2ContactFeatureType.vertex;
    manifold.type = B2ManifoldType.circles;
    manifold.localNormal.setZero();
    manifold.localPoint = P;
    let cp = new B2ManifoldPoint();
    cp.id.setZero();
    cp.id = cf;
    cp.localPoint = circleB.m_p;
    manifold.points.push(cp);
    return;
  }
  if (u <= 0.0) {
    let P = B;
    let d = subtract(Q, P);
    let dd = b2Dot22(d, d);
    if (dd > radius * radius) {
      return;
    }
    if (edgeA.m_hasVertex3) {
      let B2 = edgeA.m_vertex3;
      let A2 = B;
      let e2 = subtract(B2, A2);
      let v2 = b2Dot22(e2, subtract(Q, A2));
      if (v2 > 0.0) {
        return;
      }
    }

    cf.indexA = 1;
    cf.typeA = B2ContactFeatureType.vertex;
    manifold.type = B2ManifoldType.circles;
    manifold.localNormal.setZero();
    manifold.localPoint = P;
    let cp = new B2ManifoldPoint();
    cp.id.setZero();
    cp.id = cf;
    cp.localPoint = circleB.m_p;
    manifold.points.push(cp);
    return;
  }

  let den = b2Dot22(e, e);
  let P = multM(add(multM(A, u), multM(B, v)), 1.0 / den);
  let d = subtract(Q, P);
  let dd = b2Dot22(d, d);
  if (dd > radius * radius) {
    return;
  }
  let n = new B2Vec2(-e.y, e.x);
  if (b2Dot22(n, subtract(Q, A)) < 0.0) {
    n.set(-n.x, -n.y);
  }
  n.normalize();

  cf.indexA = 0;
  cf.typeA = B2ContactFeatureType.face;
  manifold.type = B2ManifoldType.faceA;
  manifold.localNormal = n;
  manifold.localPoint = A;
  let cp = new B2ManifoldPoint();
  cp.id.setZero();
  cp.id = cf;
  cp.localPoint = circleB.m_p;
  manifold.points.push(cp);
  return;
}

enum B2EPAxisType {
  unknown,
  edgeA,
  edgeB
}

export class B2EPAxis {
  type = B2EPAxisType.unknown;
  index = 0;
  separation: number = 0;
}

export class B2TempPolygon {
  vertices: B2Vec2[] = [];
  normals: B2Vec2[] = [];
  count = 0;

  constructor() {
    for (let i = 0; i < b2_maxPolygonVertices; i++) {
      this.vertices.push(new B2Vec2());
      this.normals.push(new B2Vec2());
    }
  }
}

export class B2ReferenceFace {
  i1 = 0;
  i2 = 0;
  v1 = new B2Vec2();
  v2 = new B2Vec2();
  normal = new B2Vec2();
  sideNormal1 = new B2Vec2();
  sideOffset1: number = 0;
  sideNormal2 = new B2Vec2();
  sideOffset2: number = 0;
}
export class B2EPCollider {
  m_polygonB = new B2TempPolygon();
  m_xf = new B2Transform();
  m_centroidB = new B2Vec2();
  m_v0 = new B2Vec2();
  m_v1 = new B2Vec2();
  m_v2 = new B2Vec2();
  m_v3 = new B2Vec2();
  m_normal0 = new B2Vec2();
  m_normal1 = new B2Vec2();
  m_normal2 = new B2Vec2();
  m_normal = new B2Vec2();
  m_type1 = VertexType.isolated;
  m_type2 = VertexType.isolated;
  m_lowerLimit = new B2Vec2();
  m_upperLimit = new B2Vec2();
  m_radius: number = 0;
  m_front = false;

  public collide(edgeA: B2EdgeShape, xfA: B2Transform, polygonB: B2PolygonShape, xfB: B2Transform): B2Manifold {
    let manifold = new B2Manifold();
    this.m_xf = b2MulT(xfA, xfB);
    this.m_centroidB = b2MulT2(this.m_xf, polygonB.m_centroid);
    this.m_v0 = edgeA.m_vertex0;
    this.m_v1 = edgeA.m_vertex1;
    this.m_v2 = edgeA.m_vertex2;
    this.m_v3 = edgeA.m_vertex3;
    let hasVertex0 = edgeA.m_hasVertex0;
    let hasVertex3 = edgeA.m_hasVertex3;
    let edge1 = subtract(this.m_v2, this.m_v1);
    edge1.normalize();
    this.m_normal1.set(edge1.y, -edge1.x);
    let offset1 = b2Dot22(this.m_normal1, subtract(this.m_centroidB, this.m_v1));
    let offset0: number = 0.0,
      offset2: number = 0.0;
    let convex1 = false,
      convex2 = false;
    if (hasVertex0) {
      let edge0 = subtract(this.m_v1, this.m_v0);
      edge0.normalize();
      this.m_normal0.set(edge0.y, -edge0.x);
      convex1 = b2Cross(edge0, edge1) >= 0.0;
      offset0 = b2Dot22(this.m_normal0, subtract(this.m_centroidB, this.m_v0));
    }
    if (hasVertex3) {
      let edge2 = subtract(this.m_v3, this.m_v2);
      edge2.normalize();
      this.m_normal2.set(edge2.y, -edge2.x);
      convex2 = b2Cross(edge1, edge2) > 0.0;
      offset2 = b2Dot22(this.m_normal2, subtract(this.m_centroidB, this.m_v2));
    }
    if (hasVertex0 && hasVertex3) {
      if (convex1 && convex2) {
        this.m_front = offset0 >= 0.0 || offset1 >= 0.0 || offset2 >= 0.0;
        if (this.m_front) {
          this.m_normal = this.m_normal1;
          this.m_lowerLimit = this.m_normal0;
          this.m_upperLimit = this.m_normal2;
        } else {
          this.m_normal = minus(this.m_normal1);
          this.m_lowerLimit = minus(this.m_normal1);
          this.m_upperLimit = minus(this.m_normal1);
        }
      } else if (convex1) {
        this.m_front = offset0 >= 0.0 || (offset1 >= 0.0 && offset2 >= 0.0);
        if (this.m_front) {
          this.m_normal = this.m_normal1;
          this.m_lowerLimit = this.m_normal0;
          this.m_upperLimit = this.m_normal1;
        } else {
          this.m_normal = minus(this.m_normal1);
          this.m_lowerLimit = minus(this.m_normal2);
          this.m_upperLimit = minus(this.m_normal1);
        }
      } else if (convex2) {
        this.m_front = offset2 >= 0.0 || (offset0 >= 0.0 && offset1 >= 0.0);
        if (this.m_front) {
          this.m_normal = this.m_normal1;
          this.m_lowerLimit = this.m_normal1;
          this.m_upperLimit = this.m_normal2;
        } else {
          this.m_normal = minus(this.m_normal1);
          this.m_lowerLimit = minus(this.m_normal1);
          this.m_upperLimit = minus(this.m_normal0);
        }
      } else {
        this.m_front = offset0 >= 0.0 && offset1 >= 0.0 && offset2 >= 0.0;
        if (this.m_front) {
          this.m_normal = this.m_normal1;
          this.m_lowerLimit = this.m_normal1;
          this.m_upperLimit = this.m_normal1;
        } else {
          this.m_normal = minus(this.m_normal1);
          this.m_lowerLimit = minus(this.m_normal2);
          this.m_upperLimit = minus(this.m_normal0);
        }
      }
    } else if (hasVertex0) {
      if (convex1) {
        this.m_front = offset0 >= 0.0 || offset1 >= 0.0;
        if (this.m_front) {
          this.m_normal = this.m_normal1;
          this.m_lowerLimit = this.m_normal0;
          this.m_upperLimit = minus(this.m_normal1);
        } else {
          this.m_normal = minus(this.m_normal1);
          this.m_lowerLimit = this.m_normal1;
          this.m_upperLimit = minus(this.m_normal1);
        }
      } else {
        this.m_front = offset0 >= 0.0 && offset1 >= 0.0;
        if (this.m_front) {
          this.m_normal = this.m_normal1;
          this.m_lowerLimit = this.m_normal1;
          this.m_upperLimit = minus(this.m_normal1);
        } else {
          this.m_normal = minus(this.m_normal1);
          this.m_lowerLimit = this.m_normal1;
          this.m_upperLimit = minus(this.m_normal0);
        }
      }
    } else if (hasVertex3) {
      if (convex2) {
        this.m_front = offset1 >= 0.0 || offset2 >= 0.0;
        if (this.m_front) {
          this.m_normal = this.m_normal1;
          this.m_lowerLimit = minus(this.m_normal1);
          this.m_upperLimit = this.m_normal2;
        } else {
          this.m_normal = minus(this.m_normal1);
          this.m_lowerLimit = minus(this.m_normal1);
          this.m_upperLimit = this.m_normal1;
        }
      } else {
        this.m_front = offset1 >= 0.0 && offset2 >= 0.0;
        if (this.m_front) {
          this.m_normal = this.m_normal1;
          this.m_lowerLimit = minus(this.m_normal1);
          this.m_upperLimit = this.m_normal1;
        } else {
          this.m_normal = minus(this.m_normal1);
          this.m_lowerLimit = minus(this.m_normal2);
          this.m_upperLimit = this.m_normal1;
        }
      }
    } else {
      this.m_front = offset1 >= 0.0;
      if (this.m_front) {
        this.m_normal = this.m_normal1;
        this.m_lowerLimit = minus(this.m_normal1);
        this.m_upperLimit = minus(this.m_normal1);
      } else {
        this.m_normal = minus(this.m_normal1);
        this.m_lowerLimit = this.m_normal1;
        this.m_upperLimit = this.m_normal1;
      }
    }
    this.m_polygonB.count = polygonB.m_count;
    for (let i = 0; i < polygonB.m_count; i++) {
      this.m_polygonB.vertices[i] = b2MulT2(this.m_xf, polygonB.m_vertices.get(i));
      this.m_polygonB.normals[i] = b2MulR2(this.m_xf.q, polygonB.m_normals.get(i));
    }
    this.m_radius = float_2 * b2_polygonRadius;
    manifold.points.splice(0, manifold.points.length);
    let edgeAxis = this.computeEdgeSeparation();
    if (edgeAxis.type == B2EPAxisType.unknown) {
      return manifold;
    }
    if (edgeAxis.separation > this.m_radius) {
      return manifold;
    }
    let polygonAxis = this.computePolygonSeparation();
    if (polygonAxis.type != B2EPAxisType.unknown && polygonAxis.separation > this.m_radius) {
      return manifold;
    }
    let k_relativeTol: number = 0.98;
    let k_absoluteTol: number = 0.001;
    let primaryAxis: B2EPAxis;
    if (polygonAxis.type == B2EPAxisType.unknown) {
      primaryAxis = edgeAxis;
    } else if (polygonAxis.separation > k_relativeTol * edgeAxis.separation + k_absoluteTol) {
      primaryAxis = polygonAxis;
    } else {
      primaryAxis = edgeAxis;
    }
    let ie: B2ClipVertex[] = [];
    for (let i = 0; i < float_2; i++) {
      ie.push(new B2ClipVertex());
    }
    let rf = new B2ReferenceFace();
    if (primaryAxis.type == B2EPAxisType.edgeA) {
      manifold.type = B2ManifoldType.faceA;
      let bestIndex = 0;
      let bestValue = b2Dot22(this.m_normal, this.m_polygonB.normals[0]);
      for (let i = 1; i < this.m_polygonB.count; i++) {
        let value = b2Dot22(this.m_normal, this.m_polygonB.normals[i]);
        if (value < bestValue) {
          bestValue = value;
          bestIndex = i;
        }
      }
      let i1 = bestIndex;
      let i2 = i1 + 1 < this.m_polygonB.count ? i1 + 1 : 0;
      ie[0].v = this.m_polygonB.vertices[i1];
      ie[0].id.indexA = 0;
      ie[0].id.indexB = i1;
      ie[0].id.typeA = B2ContactFeatureType.face;
      ie[0].id.typeB = B2ContactFeatureType.vertex;
      ie[1].v = this.m_polygonB.vertices[i2];
      ie[1].id.indexA = 0;
      ie[1].id.indexB = i2;
      ie[1].id.typeA = B2ContactFeatureType.face;
      ie[1].id.typeB = B2ContactFeatureType.vertex;
      if (this.m_front) {
        rf.i1 = 0;
        rf.i2 = 1;
        rf.v1 = this.m_v1;
        rf.v2 = this.m_v2;
        rf.normal = this.m_normal1;
      } else {
        rf.i1 = 1;
        rf.i2 = 0;
        rf.v1 = this.m_v2;
        rf.v2 = this.m_v1;
        rf.normal = minus(this.m_normal1);
      }
    } else {
      manifold.type = B2ManifoldType.faceB;
      ie[0].v = this.m_v1;
      ie[0].id.indexA = 0;
      ie[0].id.indexB = primaryAxis.index;
      ie[0].id.typeA = B2ContactFeatureType.vertex;
      ie[0].id.typeB = B2ContactFeatureType.face;
      ie[1].v = this.m_v2;
      ie[1].id.indexA = 0;
      ie[1].id.indexB = primaryAxis.index;
      ie[1].id.typeA = B2ContactFeatureType.vertex;
      ie[1].id.typeB = B2ContactFeatureType.face;
      rf.i1 = primaryAxis.index;
      rf.i2 = rf.i1 + 1 < this.m_polygonB.count ? rf.i1 + 1 : 0;
      rf.v1 = this.m_polygonB.vertices[rf.i1];
      rf.v2 = this.m_polygonB.vertices[rf.i2];
      rf.normal = this.m_polygonB.normals[rf.i1];
    }
    rf.sideNormal1.set(rf.normal.y, -rf.normal.x);
    rf.sideNormal2 = minus(rf.sideNormal1);
    rf.sideOffset1 = b2Dot22(rf.sideNormal1, rf.v1);
    rf.sideOffset2 = b2Dot22(rf.sideNormal2, rf.v2);
    let clipPoints1 = b2ClipSegmentToLine(ie, rf.sideNormal1, rf.sideOffset1, rf.i1);
    if (clipPoints1.length < b2_maxManifoldPoints) {
      return manifold;
    }
    let clipPoints2 = b2ClipSegmentToLine(clipPoints1, rf.sideNormal2, rf.sideOffset2, rf.i2);
    if (clipPoints2.length < b2_maxManifoldPoints) {
      return manifold;
    }
    if (primaryAxis.type == B2EPAxisType.edgeA) {
      manifold.localNormal = rf.normal;
      manifold.localPoint = rf.v1;
    } else {
      manifold.localNormal = polygonB.m_normals.get(rf.i1);
      manifold.localPoint = polygonB.m_vertices.get(rf.i1);
    }
    let pointCount = 0;
    for (let i = 0; i < b2_maxManifoldPoints; i++) {
      let separation = b2Dot22(rf.normal, subtract(clipPoints2[i].v, rf.v1));
      if (separation <= this.m_radius) {
        let cp = new B2ManifoldPoint();
        if (primaryAxis.type == B2EPAxisType.edgeA) {
          cp.localPoint = b2MulTT2(this.m_xf, clipPoints2[i].v);
          cp.id = clipPoints2[i].id;
        } else {
          cp.localPoint = clipPoints2[i].v;
          cp.id.typeA = clipPoints2[i].id.typeB;
          cp.id.typeB = clipPoints2[i].id.typeA;
          cp.id.indexA = clipPoints2[i].id.indexB;
          cp.id.indexB = clipPoints2[i].id.indexA;
        }
        manifold.points.push(cp);
        pointCount += 1;
      }
    }
    return manifold;
  }

  public computeEdgeSeparation(): B2EPAxis {
    let axis = new B2EPAxis();
    axis.type = B2EPAxisType.edgeA;
    axis.index = this.m_front ? 0 : 1;
    axis.separation = b2_maxFloat;
    for (let i = 0; i < this.m_polygonB.count; i++) {
      let s = b2Dot22(this.m_normal, subtract(this.m_polygonB.vertices[i], this.m_v1));
      if (s < axis.separation) {
        axis.separation = s;
      }
    }
    return axis;
  }

  public computePolygonSeparation(): B2EPAxis {
    let axis = new B2EPAxis();
    axis.type = B2EPAxisType.unknown;
    axis.index = -1;
    axis.separation = -b2_maxFloat;
    let perp = new B2Vec2(-this.m_normal.y, this.m_normal.x);
    for (let i = 0; i < this.m_polygonB.count; i++) {
      let n = minus(this.m_polygonB.normals[i]);
      let s1 = b2Dot22(n, subtract(this.m_polygonB.vertices[i], this.m_v1));
      let s2 = b2Dot22(n, subtract(this.m_polygonB.vertices[i], this.m_v2));
      let s = Math.min(s1, s2);
      if (s > this.m_radius) {
        axis.type = B2EPAxisType.edgeB;
        axis.index = i;
        axis.separation = s;
        return axis;
      }
      if (b2Dot22(n, perp) >= 0.0) {
        if (b2Dot22(subtract(n, this.m_upperLimit), this.m_normal) < -b2_angularSlop) {
          continue;
        }
      } else {
        if (b2Dot22(subtract(n, this.m_lowerLimit), this.m_normal) < -b2_angularSlop) {
          continue;
        }
      }
      if (s > axis.separation) {
        axis.type = B2EPAxisType.edgeB;
        axis.index = i;
        axis.separation = s;
      }
    }
    return axis;
  }
}

enum VertexType {
  isolated,
  concave,
  convex
}

function b2CollideEdgeAndPolygon(
  manifold: B2Manifold,
  edgeA: B2EdgeShape,
  xfA: B2Transform,
  polygonB: B2PolygonShape,
  xfB: B2Transform
): void {
  let collider = new B2EPCollider();
  manifold = collider.collide(edgeA, xfA, polygonB, xfB);
}

export { b2CollideEdgeAndCircle, b2CollideEdgeAndPolygon };
