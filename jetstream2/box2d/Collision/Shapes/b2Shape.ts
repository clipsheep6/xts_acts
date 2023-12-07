import {
  B2Vec2,
  B2Transform,
  add,
  b2MulR2,
  subtract,
  b2Dot22,
  b2Sqrt,
  multM,
  b2MulT2,
  b2Min,
  b2Max,
  addEqual,
  mulEqual,
  b2Cross
} from '../../Common/b2Math';

import { float_2 } from '../../Common/b2Settings';
import { half } from '../../Common/b2Settings';
import { float_025 } from '../../Common/b2Settings';
import { float_3 } from '../../Common/b2Settings';
import { int_4 } from '../../Common/b2Settings';
import { b2_epsilon, b2_pi, b2_polygonRadius } from '../../Common/b2Settings';
import { B2Array } from '../../Dynamics/b2TimeStep';
import { B2RayCastInput, B2RayCastOutput, B2AABB } from '../b2Collision';

export class B2MassData {
  public mass: number = 0;
  public center = new B2Vec2();
  public I: number = 0;
}

enum B2ShapeType {
  circle = 0,
  edge = 1,
  polygon = float_2,
  chain = float_3,
  typeCount = int_4
}

export class B2Shape {
  constructor() {
    this.m_type = B2ShapeType.circle;
    this.m_radius = 0;
  }

  public clone(): B2Shape {
    throw new Error('must override');
  }

  public type(): B2ShapeType {
    return this.m_type;
  }

  public childCount(): number {
    throw new Error('must override');
  }

  public testPoint(transform: B2Transform, point: B2Vec2): boolean {
    throw new Error('must override');
  }

  public rayCast(output: B2RayCastOutput, input: B2RayCastInput, transform: B2Transform, childIndex: number): boolean {
    throw new Error('must override');
  }

  public computeAABB(aabb: B2AABB, transform: B2Transform, childIndex: number): void {
    throw new Error('must override');
  }

  public computeMass(density: number): B2MassData {
    throw new Error('must override');
  }

  public m_type: B2ShapeType;
  public m_radius: number;
  get radius() {
    return this.m_radius;
  }
  set radius(newValue) {
    this.m_radius = newValue;
  }
}

export class B2CircleShape extends B2Shape {
  constructor() {
    super();
    this.m_type = B2ShapeType.circle;
    this.m_radius = 0.0;
    this.m_p = new B2Vec2(0.0, 0.0);
  }

  public clone(): B2Shape {
    let clone = new B2CircleShape();
    clone.m_radius = this.m_radius;
    clone.m_p = this.m_p;
    return clone;
  }

  public childCount(): number {
    return 1;
  }

  public testPoint(transform: B2Transform, point: B2Vec2): boolean {
    let center = add(transform.p, b2MulR2(transform.q, this.m_p));
    let d = subtract(this.p, center);
    return b2Dot22(d, d) <= this.m_radius * this.m_radius;
  }

  public rayCast(output: B2RayCastOutput, input: B2RayCastInput, transform: B2Transform, childIndex: number): boolean {
    let position = add(transform.p, b2MulR2(transform.q, this.m_p));
    let s = subtract(input.p1, position);
    let b = b2Dot22(s, s) - this.m_radius * this.m_radius;
    let r = subtract(input.p2, input.p1);
    let c = b2Dot22(s, r);
    let rr = b2Dot22(r, r);
    let sigma = c * c - rr * b;
    if (sigma < 0.0 || rr < b2_epsilon) {
      return false;
    }
    let a = -(c + b2Sqrt(sigma));
    if (0.0 <= a && a <= input.maxFraction * rr) {
      a /= rr;
      output.fraction = a;
      output.normal = add(s, multM(r, a));
      output.normal.normalize();
      return true;
    }
    return false;
  }

  public computeAABB(aabb: B2AABB, transform: B2Transform, childIndex: number): void {
    let p = add(transform.p, b2MulR2(transform.q, this.m_p));
    aabb.lowerBound.set(p.x - this.m_radius, p.y - this.m_radius);
    aabb.upperBound.set(p.x + this.m_radius, p.y + this.m_radius);
  }

  public computeMass(density: number): B2MassData {
    let massData = new B2MassData();
    massData.mass = density * b2_pi * this.m_radius * this.m_radius;
    massData.center = this.m_p;
    massData.I = massData.mass * (half * this.m_radius * this.m_radius + b2Dot22(this.m_p, this.m_p));
    return massData;
  }

  public getSupport(direction: B2Vec2): number {
    return 0;
  }

  public getSupportVertex(direction: B2Vec2): B2Vec2 {
    return this.m_p;
  }

  public vertexCount(): number {
    return 1;
  }

  public vertex(index: number): B2Vec2 {
    return this.m_p;
  }

  get p() {
    return this.m_p_.get(0);
  }
  set p(newValue: B2Vec2) {
    this.m_p_.set(0, newValue);
  }
  m_p_ = new B2Array<B2Vec2>(1, new B2Vec2());
  get m_p() {
    return this.m_p_.get(0);
  }
  set m_p(newValue: B2Vec2) {
    this.m_p_.set(0, newValue);
  }
}

export class B2EdgeShape extends B2Shape {
  constructor() {
    super();
    this.m_vertex0 = new B2Vec2(0.0, 0.0);
    this.m_vertex3 = new B2Vec2(0.0, 0.0);
    this.m_hasVertex0 = false;
    this.m_hasVertex3 = false;
    this.m_type = B2ShapeType.edge;
    this.m_radius = b2_polygonRadius;
  }

  public set(v1: B2Vec2, v2: B2Vec2): void {
    this.m_vertex1 = v1;
    this.m_vertex2 = v2;
    this.m_hasVertex0 = false;
    this.m_hasVertex3 = false;
  }

  public clone(): B2Shape {
    let clone = new B2EdgeShape();
    clone.m_radius = this.m_radius;
    clone.m_vertices = this.m_vertices.clone();
    clone.m_vertex0 = this.m_vertex0;
    clone.m_vertex3 = this.m_vertex3;
    clone.m_hasVertex0 = this.m_hasVertex0;
    clone.m_hasVertex3 = this.m_hasVertex3;
    return clone;
  }

  public childCount(): number {
    return 1;
  }

  public testPoint(transform: B2Transform, point: B2Vec2): boolean {
    return false;
  }

  public computeAABB(aabb: B2AABB, transform: B2Transform, childIndex: number): void {
    let v1 = b2MulT2(transform, this.m_vertex1);
    let v2 = b2MulT2(transform, this.m_vertex2);
    let lower = b2Min(v1, v2);
    let upper = b2Max(v1, v2);
    let r = new B2Vec2(this.m_radius, this.m_radius);
    aabb.lowerBound = subtract(lower, r);
    aabb.upperBound = add(upper, r);
  }

  public computeMass(density: number): B2MassData {
    let massData = new B2MassData();
    massData.mass = 0.0;
    massData.center = multM(add(this.m_vertex1, this.m_vertex2), half);
    massData.I = 0.0;
    return massData;
  }

  get vertex1(): B2Vec2 {
    return this.m_vertices.get(0);
  }
  set vertex1(newValue: B2Vec2) {
    this.m_vertices.set(0, newValue);
  }

  get vertex2(): B2Vec2 {
    return this.m_vertices.get(1);
  }
  set vertex2(newValue: B2Vec2) {
    this.m_vertices.set(1, newValue);
  }

  get vertex0(): B2Vec2 {
    return this.m_vertex0;
  }
  set vertex0(newValue) {
    this.m_vertex0 = newValue;
  }

  get vertex3(): B2Vec2 {
    return this.m_vertex3;
  }
  set vertex3(newValue) {
    this.m_vertex3 = newValue;
  }

  get hasVertex0(): boolean {
    return this.m_hasVertex0;
  }
  set hasVertex0(newValue) {
    this.m_hasVertex0 = newValue;
  }

  get hasVertex3(): boolean {
    return this.m_hasVertex3;
  }
  set hasVertex3(newValue) {
    this.m_hasVertex3 = newValue;
  }

  public m_vertices = new B2Array<B2Vec2>(float_2, new B2Vec2());
  get m_vertex1(): B2Vec2 {
    return this.m_vertices.get(0);
  }
  set m_vertex1(newValue: B2Vec2) {
    this.m_vertices.set(0, newValue);
  }
  get m_vertex2(): B2Vec2 {
    return this.m_vertices.get(1);
  }
  set m_vertex2(newValue: B2Vec2) {
    this.m_vertices.set(1, newValue);
  }

  public m_vertex0: B2Vec2;
  public m_vertex3: B2Vec2;
  public m_hasVertex0: boolean;
  public m_hasVertex3: boolean;
}

export class B2PolygonShape extends B2Shape {
  constructor() {
    super();
    this.m_centroid = new B2Vec2(0.0, 0.0);
    this.m_type = B2ShapeType.polygon;
    this.m_radius = b2_polygonRadius;
  }

  public clone(): B2Shape {
    let clone = new B2PolygonShape();
    clone.m_centroid = this.m_centroid;
    clone.m_vertices = this.m_vertices.clone();
    clone.m_normals = this.m_normals.clone();
    clone.m_radius = this.m_radius;
    return clone;
  }

  public childCount(): number {
    return 1;
  }

  public setAsEdge(v1: B2Vec2, v2: B2Vec2) {
    this.m_vertices.append(v1);
    this.m_vertices.append(v2);
    this.m_centroid.x = half * (v1.x + v2.x);
    this.m_centroid.y = half * (v1.y + v2.y);
    this.m_normals.append(this.crossVF(this.subtractVV(v2, v1), 1.0));
    let mn0 = this.m_normals.get(0);
    mn0.normalize();
    this.m_normals.append(new B2Vec2(-this.m_normals.get(0).x, -this.m_normals.get(0).y));
  }

  public setAsBox(hx: number, hy: number) {
    this.m_vertices.removeAll();
    this.m_vertices.append(new B2Vec2(-hx, -hy));
    this.m_vertices.append(new B2Vec2(hx, -hy));
    this.m_vertices.append(new B2Vec2(hx, hy));
    this.m_vertices.append(new B2Vec2(-hx, hy));
    this.m_normals.removeAll();
    this.m_normals.append(new B2Vec2(0.0, -1.0));
    this.m_normals.append(new B2Vec2(1.0, 0.0));
    this.m_normals.append(new B2Vec2(0.0, 1.0));
    this.m_normals.append(new B2Vec2(-1.0, 0.0));
    this.m_centroid.setZero();
  }

  public subtractVV(a: B2Vec2, b: B2Vec2): B2Vec2 {
    let v = new B2Vec2(a.x - b.x, a.y - b.y);
    return v;
  }

  public crossVV(a: B2Vec2, b: B2Vec2): number {
    return a.x * b.y - a.y * b.x;
  }

  public crossVF(a: B2Vec2, s: number): B2Vec2 {
    let v = new B2Vec2(s * a.y, -s * a.x);
    return v;
  }

  public computeAABB(aabb: B2AABB, transform: B2Transform, childIndex: number) {
    let lower = b2MulT2(transform, this.m_vertices.get(0));
    let upper = lower;
    for (let i = 1; i < this.m_count; i++) {
      let v = b2MulT2(transform, this.m_vertices.get(i));
      lower = b2Min(lower, v);
      upper = b2Max(upper, v);
    }
    let r = new B2Vec2(this.m_radius, this.m_radius);
    aabb.lowerBound = subtract(lower, r);
    aabb.upperBound = add(r, upper);
  }

  public computeMass(density: number): B2MassData {
    let center = new B2Vec2(0.0, 0.0);
    let area: number = 0.0;
    let I: number = 0.0;
    let s = new B2Vec2(0.0, 0.0);
    for (let i = 0; i < this.m_count; i++) {
      addEqual(s, this.m_vertices.get(i));
    }
    mulEqual(s, 1.0 / this.m_vertices.count);
    let k_inv3: number = 1.0 / float_3;
    for (let i = 0; i < this.m_count; i++) {
      let e1: B2Vec2 = subtract(this.m_vertices.get(i), s);
      let e2: B2Vec2 =
        i + 1 < this.m_count ? subtract(this.m_vertices.get(i + 1), s) : subtract(this.m_vertices.get(0), s);
      let D = b2Cross(e1, e2);
      let triangleArea = half * D;
      area += triangleArea;
      addEqual(center, multM(add(e1, e2), k_inv3 * triangleArea));
      let ex1 = e1.x,
        ey1 = e1.y;
      let ex2 = e2.x,
        ey2 = e2.y;
      let intx2 = ex1 * ex1 + ex2 * ex1 + ex2 * ex2;
      let inty2 = ey1 * ey1 + ey2 * ey1 + ey2 * ey2;
      I += float_025 * k_inv3 * D * (intx2 + inty2);
    }
    let massData = new B2MassData();
    massData.mass = density * area;
    mulEqual(center, 1.0 / area);
    massData.center = add(center, s);
    massData.I = density * I;
    massData.I += massData.mass * (b2Dot22(massData.center, massData.center) - b2Dot22(center, center));
    return massData;
  }

  public vertexCount(): number {
    return this.m_count;
  }

  public vertex(index: number): B2Vec2 {
    return this.m_vertices.get(index);
  }
  public validate(): boolean {
    for (let i = 0; i < this.m_vertices.count; i++) {
      let i1 = i;
      let i2 = i < this.m_vertices.count - 1 ? i1 + 1 : 0;
      let p: B2Vec2 = this.m_vertices.get(i1);
      let e: B2Vec2 = subtract(this.m_vertices.get(i2), p);
      for (let j = 0; j < this.m_count; j++) {
        if (j == i1 || j == i2) {
          continue;
        }
        let v: B2Vec2 = subtract(this.m_vertices.get(j), p);
        let c = b2Cross(e, v);
        if (c < 0.0) {
          return false;
        }
      }
    }
    return true;
  }

  get vertices(): B2Array<B2Vec2> {
    return this.m_vertices;
  }

  get count(): number {
    return this.m_count;
  }

  m_centroid = new B2Vec2();
  m_vertices = new B2Array<B2Vec2>();
  m_normals = new B2Array<B2Vec2>();
  get m_count(): number {
    return this.m_vertices.count;
  }
}

export { B2ShapeType };
