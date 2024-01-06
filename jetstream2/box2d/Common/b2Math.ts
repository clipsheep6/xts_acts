import { int_4, b2_epsilon, b2_pi, float_2 , float_8, int_16 } from './b2Settings';

function b2IsValid(x: number): boolean {
  return Number.isNaN(x) == false && Number.isFinite(x) == false;
}

function b2Sqrt(x: number): number {
  return Math.sqrt(x);
}

function b2Atan2(y: number, x: number): number {
  return Math.atan2(y, x);
}

export class B2Vec2 {
  public x: number;
  public y: number;
  constructor(x_: number = 0, y_: number = 0) {
    if (x_ != null && y_ != null) {
      this.x = x_;
      this.y = y_;
    } else {
      this.x = 0;
      this.y = 0;
    }
  }

  public setZero(): void {
    this.x = 0.0;
    this.y = 0.0;
  }
  public set(x_: number, y_: number): void {
    this.x = x_;
    this.y = y_;
  }
  getSubscript(index: number): number {
    if (index == 0) {
      return this.x;
    } else {
      return this.y;
    }
  }
  setSubscript(index: number, newValue: number): void {
    if (index == 0) {
      this.x = newValue;
    } else {
      this.y = newValue;
    }
  }
  public length(): number {
    return Math.sqrt(this.x * this.x + this.y * this.y);
  }
  public lengthSquared(): number {
    return this.x * this.x + this.y * this.y;
  }
  public normalize(): number {
    let length = this.length();
    if (length < b2_epsilon) {
      return 0.0;
    }
    let invLength = 1.0 / length;
    this.x *= invLength;
    this.y *= invLength;
    return length;
  }
  public isValid(): boolean {
    return b2IsValid(this.x) && b2IsValid(this.y);
  }
  public skew(): B2Vec2 {
    return new B2Vec2(-this.y, this.x);
  }
}

export function minus(v: B2Vec2): B2Vec2 {
  let _v = new B2Vec2(-v.x, -v.y);
  return _v;
}

export function addEqual(a: B2Vec2, b: B2Vec2): void {
  a.x += b.x;
  a.y += b.y;
}

export function subtractEqual(a: B2Vec2, b: B2Vec2): void {
  a.x -= b.x;
  a.y -= b.y;
}

export function mulEqual(a: B2Vec2, b: number): void {
  a.x *= b;
  a.y *= b;
}

export class B2Vec3 {
  x: number;
  y: number;
  z: number;
  constructor(x_: number = 0, y_: number = 0, z_: number = 0) {
    if (x_ != null && y_ != null && z_ != null) {
      this.x = x_;
      this.y = y_;
      this.z = z_;
    } else {
      this.x = 0.0;
      this.y = 0.0;
      this.z = 0.0;
    }
  }
  setZero(): void {
    this.x = 0.0;
    this.y = 0.0;
  }

  set(x_: number, y_: number, z_: number): void {
    this.x = x_;
    this.y = y_;
    this.z = z_;
  }
}

export function minus3(v: B2Vec3): B2Vec3 {
  let _v = new B2Vec3(-v.x, -v.y, -v.z);
  return _v;
}

export function addEqual3(a: B2Vec3, b: B2Vec3): void {
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
}

export function mulMEqual3(a: B2Vec3, b: number): void {
  a.x *= b;
  a.y *= b;
  a.z *= b;
}

export class B2Mat22 {
  public ex: B2Vec2;
  public ey: B2Vec2;
  public set_1(angle: number): void {
    let c = Math.cos(angle);
    let s = Math.sin(angle);
    this.ex.set(c, s);
    this.ey.set(-s, c);
  }
  constructor(c1: B2Vec2 | null = null, c2: B2Vec2 | null = null) {
    if (c1 != null && c2 != null) {
      this.ex = c1;
      this.ey = c2;
    } else {
      this.ex = new B2Vec2(0.0, 0.0);
      this.ey = new B2Vec2(0.0, 0.0);
    }
  }
  public set(c1: B2Vec2, c2: B2Vec2): void {
    this.ex = c1;
    this.ey = c2;
  }
  public setIdentity(): void {
    this.ex.x = 1.0;
    this.ey.x = 0.0;
    this.ex.y = 0.0;
    this.ey.y = 1.0;
  }
  public setZero(): void {
    this.ex.x = 0.0;
    this.ey.x = 0.0;
    this.ex.y = 0.0;
    this.ey.y = 0.0;
  }
  public getInverse(): B2Mat22 {
    let a = this.ex.x,
      b = this.ey.x,
      c = this.ex.y,
      d = this.ey.y;
    let B = new B2Mat22();
    let det = a * d - b * c;
    if (det != 0.0) {
      det = 1.0 / det;
    }
    B.ex.x = det * d;
    B.ey.x = -det * b;
    B.ex.y = -det * c;
    B.ey.y = det * a;
    return B;
  }
  public solve(b: B2Vec2): B2Vec2 {
    let a11 = this.ex.x,
      a12 = this.ey.x,
      a21 = this.ex.y,
      a22 = this.ey.y;
    let det = a11 * a22 - a12 * a21;
    if (det != 0.0) {
      det = 1.0 / det;
    }
    let x = new B2Vec2();
    x.x = det * (a22 * b.x - a12 * b.y);
    x.y = det * (a11 * b.y - a21 * b.x);
    return x;
  }
}
export class B2Mat33 {
  public ex: B2Vec3;
  public ey: B2Vec3;
  public ez: B2Vec3;
  constructor(c1: B2Vec3 | null = null, c2: B2Vec3 | null = null, c3: B2Vec3 | null = null) {
    if (c1 != null && c2 != null && c3 != null) {
      this.ex = c1;
      this.ey = c2;
      this.ez = c3;
    } else {
      this.ex = new B2Vec3();
      this.ey = new B2Vec3();
      this.ez = new B2Vec3();
    }
  }
  public setZero(): void {
    this.ex.setZero();
    this.ey.setZero();
    this.ez.setZero();
  }
  public solve33(b: B2Vec3): B2Vec3 {
    let det = b2Dot33(this.ex, b2Cross33(this.ey, this.ez));
    if (det != 0.0) {
      det = 1.0 / det;
    }
    let x = new B2Vec3();
    x.x = det * b2Dot33(b, b2Cross33(this.ey, this.ez));
    x.y = det * b2Dot33(this.ex, b2Cross33(b, this.ez));
    x.z = det * b2Dot33(this.ex, b2Cross33(this.ey, b));
    return x;
  }
  public solve22(b: B2Vec2): B2Vec2 {
    let a11 = this.ex.x,
      a12 = this.ey.x,
      a21 = this.ex.y,
      a22 = this.ey.y;
    let det = a11 * a22 - a12 * a21;
    if (det != 0.0) {
      det = 1.0 / det;
    }
    let x = new B2Vec2();
    x.x = det * (a22 * b.x - a12 * b.y);
    x.y = det * (a11 * b.y - a21 * b.x);
    return x;
  }
  public getInverse22(): B2Mat33 {
    let a = this.ex.x,
      b = this.ey.x,
      c = this.ex.y,
      d = this.ey.y;
    let det = a * d - b * c;
    if (det != 0.0) {
      det = 1.0 / det;
    }
    let M = new B2Mat33();
    M.ex.x = det * d;
    M.ey.x = -det * b;
    M.ex.z = 0.0;
    M.ex.y = -det * c;
    M.ey.y = det * a;
    M.ey.z = 0.0;
    M.ez.x = 0.0;
    M.ez.y = 0.0;
    M.ez.z = 0.0;
    return M;
  }
  public getSymInverse33(): B2Mat33 {
    let det = b2Dot33(this.ex, b2Cross33(this.ey, this.ez));
    if (det != 0.0) {
      det = 1.0 / det;
    }
    let a11 = this.ex.x,
      a12 = this.ey.x,
      a13 = this.ez.x;
    let a22 = this.ey.y,
      a23 = this.ez.y;
    let a33 = this.ez.z;
    let M = new B2Mat33();
    M.ex.x = det * (a22 * a33 - a23 * a23);
    M.ex.y = det * (a13 * a23 - a12 * a33);
    M.ex.z = det * (a12 * a23 - a13 * a22);
    M.ey.x = M.ex.y;
    M.ey.y = det * (a11 * a33 - a13 * a13);
    M.ey.z = det * (a13 * a12 - a11 * a23);
    M.ez.x = M.ex.z;
    M.ez.y = M.ey.z;
    M.ez.z = det * (a11 * a22 - a12 * a12);
    return M;
  }
}
export class B2Rot {
  public s: number;
  public c: number;
  constructor(angle: number | null = null) {
    if (angle != null) {
      this.s = Math.sin(angle);
      this.c = Math.cos(angle);
    } else {
      this.s = 0.0;
      this.c = 0.0;
    }
  }
  public set(angle: number): void {
    this.s = Math.sin(angle);
    this.c = Math.cos(angle);
  }
  public setIdentity(): void {
    this.s = 0.0;
    this.c = 1.0;
  }
  public angle(): number {
    return b2Atan2(this.s, this.c);
  }
  public xAxis(): B2Vec2 {
    return new B2Vec2(this.c, this.s);
  }
  public yAxis(): B2Vec2 {
    return new B2Vec2(-this.s, this.c);
  }
}
export class B2Transform {
  public p: B2Vec2;
  public q: B2Rot;
  constructor(position: B2Vec2 | null = null, rotation: B2Rot | null = null) {
    if (position != null && rotation != null) {
      this.p = position;
      this.q = rotation;
    } else {
      this.p = new B2Vec2();
      this.q = new B2Rot();
    }
  }
  public setIdentity(): void {
    this.p.setZero();
    this.q.setIdentity();
  }
  public set(position: B2Vec2, angle: number): void {
    this.p = position;
    this.q.set(angle);
  }
}
export class B2Sweep {
  public localCenter = new B2Vec2();
  public m_c0 = new B2Vec2();
  get c0(): B2Vec2 {
    return this.m_c0;
  }
  set c0(value: B2Vec2) {
    this.m_c0 = value;
  }
  public c = new B2Vec2();
  public a0: number = 0;
  public a: number = 0;
  public alpha0: number = 0;
  constructor() {}
  public getTransform(beta: number): B2Transform {
    let xf = new B2Transform();
    xf.p = add(multM(this.c0, 1.0 - beta), multM(this.c, beta));
    let angle = (1.0 - beta) * this.a0 + beta * this.a;
    xf.q.set(angle);
    subtractEqual(xf.p, b2MulR2(xf.q, this.localCenter));
    return xf;
  }
  public advance(alpha: number): void {
    let beta = (alpha - this.alpha0) / (1.0 - this.alpha0);
    addEqual(this.c0, multM(subtract(this.c, this.c0), beta));
    this.a0 += beta * (this.a - this.a0);
    this.alpha0 = alpha;
  }
  public normalize(): void {
    let twoPi = float_2 * b2_pi;
    let d = twoPi * Math.floor(this.a0 / twoPi);
    this.a0 -= d;
    this.a -= d;
  }
}
let b2Vec2_zero = new B2Vec2(0.0, 0.0);
function b2Dot22(a: B2Vec2, b: B2Vec2): number {
  return a.x * b.x + a.y * b.y;
}
function b2Cross(a: B2Vec2, b: B2Vec2): number {
  return a.x * b.y - a.y * b.x;
}
function b2Cross12(a: B2Vec2, s: number): B2Vec2 {
  return new B2Vec2(s * a.y, -s * a.x);
}
function b2Cross21(s: number, a: B2Vec2): B2Vec2 {
  return new B2Vec2(-s * a.y, s * a.x);
}
function b2Mul22(A: B2Mat22, v: B2Vec2): B2Vec2 {
  return new B2Vec2(b2Dot22(v, A.ex), b2Dot22(v, A.ey));
}
function b2MulTM2(A: B2Mat22, v: B2Vec2): B2Vec2 {
  return new B2Vec2(b2Dot22(v, A.ex), b2Dot22(v, A.ey));
}
function add(a: B2Vec2, b: B2Vec2): B2Vec2 {
  return new B2Vec2(a.x + b.x, a.y + b.y);
}
function subtract(a: B2Vec2, b: B2Vec2): B2Vec2 {
  return new B2Vec2(a.x - b.x, a.y - b.y);
}
function multM(a: B2Vec2, b: number): B2Vec2 {
  return new B2Vec2(a.x * b, a.y * b);
}
function b2Distance(a: B2Vec2, b: B2Vec2): number {
  let c = new B2Vec2(a.x - b.x, a.y - b.y);
  return c.length();
}
function b2DistanceSquared(a: B2Vec2, b: B2Vec2): number {
  let c = new B2Vec2(a.x - b.x, a.y - b.y);
  return b2Dot22(c, c);
}
function multM3(s: number, a: B2Vec3): B2Vec3 {
  return new B2Vec3(s * a.x, s * a.y, s * a.z);
}
function add3(a: B2Vec3, b: B2Vec3): B2Vec3 {
  return new B2Vec3(a.x + b.x, a.y + b.y, a.z + b.z);
}
function subtract3(a: B2Vec3, b: B2Vec3): B2Vec3 {
  return new B2Vec3(a.x - b.x, a.y - b.y, a.z - b.z);
}
function b2Dot33(a: B2Vec3, b: B2Vec3): number {
  return a.x * b.x + a.y * b.y + a.z * b.z;
}
function b2Cross33(a: B2Vec3, b: B2Vec3): B2Vec3 {
  return new B2Vec3(a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x);
}
function b2Mul(A: B2Mat22, B: B2Mat22): B2Mat22 {
  return new B2Mat22(b2Mul22(A, B.ex), b2Mul22(A, B.ey));
}
function b2MulTMM(A: B2Mat22, B: B2Mat22): B2Mat22 {
  let c1 = new B2Vec2(b2Dot22(A.ex, B.ex), b2Dot22(A.ey, B.ex));
  let c2 = new B2Vec2(b2Dot22(A.ex, B.ey), b2Dot22(A.ey, B.ey));
  return new B2Mat22(c1, c2);
}
function b2Mul33(A: B2Mat33, v: B2Vec3): B2Vec3 {
  return add3(add3(multM3(v.x, A.ex), multM3(v.y, A.ey)), multM3(v.z, A.ez));
}

function b2Mul32(A: B2Mat33, v: B2Vec2): B2Vec2 {
  return new B2Vec2(A.ex.x * v.x + A.ey.x * v.y, A.ex.y * v.x + A.ey.y * v.y);
}

function b2MulRR(q: B2Rot, r: B2Rot): B2Rot {
  let qr = new B2Rot();
  qr.s = q.s * r.c + q.c * r.s;
  qr.c = q.c * r.c - q.s * r.s;
  return qr;
}
function b2MulTRR(q: B2Rot, r: B2Rot): B2Rot {
  let qr = new B2Rot();
  qr.s = q.c * r.s - q.s * r.c;
  qr.c = q.c * r.c + q.s * r.s;
  return qr;
}
function b2MulR2(q: B2Rot, v: B2Vec2): B2Vec2 {
  return new B2Vec2(q.c * v.x - q.s * v.y, q.s * v.x + q.c * v.y);
}
function b2MulTR2(q: B2Rot, v: B2Vec2): B2Vec2 {
  return new B2Vec2(q.c * v.x + q.s * v.y, -q.s * v.x + q.c * v.y);
}
function b2MulT2(T: B2Transform, v: B2Vec2): B2Vec2 {
  let x = T.q.c * v.x - T.q.s * v.y + T.p.x;
  let y = T.q.s * v.x + T.q.c * v.y + T.p.y;
  return new B2Vec2(x, y);
}
function b2MulTT2(T: B2Transform, v: B2Vec2): B2Vec2 {
  let px = v.x - T.p.x;
  let py = v.y - T.p.y;
  let x = T.q.c * px + T.q.s * py;
  let y = -T.q.s * px + T.q.c * py;
  return new B2Vec2(x, y);
}
function b2MulTT(A: B2Transform, B: B2Transform): B2Transform {
  let C = new B2Transform();
  C.q = b2MulRR(A.q, B.q);
  let a = b2MulR2(A.q, B.p);
  C.p.x = a.x + A.p.x;
  C.p.y = a.y + A.p.y;
  return C;
}
function b2MulT(A: B2Transform, B: B2Transform): B2Transform {
  let C = new B2Transform();
  C.q = b2MulTRR(A.q, B.q);
  let a = new B2Vec2(B.p.x - A.p.x, B.p.y - A.p.y);
  C.p = b2MulTR2(A.q, a);
  return C;
}
function b2Abs2(a: B2Vec2): B2Vec2 {
  return new B2Vec2(Math.abs(a.x), Math.abs(a.y));
}
function b2Abs22(A: B2Mat22): B2Mat22 {
  return new B2Mat22(b2Abs2(A.ex), b2Abs2(A.ey));
}
function b2Min(a: B2Vec2, b: B2Vec2): B2Vec2 {
  return new B2Vec2(Math.min(a.x, b.x), Math.min(a.y, b.y));
}
function b2Max(a: B2Vec2, b: B2Vec2): B2Vec2 {
  return new B2Vec2(Math.max(a.x, b.x), Math.max(a.y, b.y));
}
function b2ClampF(a: number, low: number, high: number): number {
  return Math.max(low, Math.min(a, high));
}
function b2Clamp(a: B2Vec2, low: B2Vec2, high: B2Vec2): B2Vec2 {
  return b2Max(low, b2Min(a, high));
}
export function b2NextPowerOfTwo(_x: number): number {
  let x = _x;
  x = x | (x >> 1);
  x = x | (x >> float_2);
  x = x | (x >> int_4);
  x = x | (x >> float_8);
  x = x | (x >> int_16);
  return x + 1;
}
function b2IsPowerOfTwo(x: number): boolean {
  let result = x > 0 && (x & (x - 1)) == 0;
  return result;
}

export { b2MulT, add, add3, b2Mul32, b2Mul33, subtract, multM, b2MulTT2, multM3, subtract3, b2MulTM2 };
export { b2Vec2_zero, b2DistanceSquared, b2Min, b2Max, b2Abs2, b2ClampF, b2Mul22, b2Atan2 };
export { b2Mul, b2MulR2, b2Dot22, b2Sqrt, b2Cross, b2MulT2, b2Distance, b2MulTR2, b2Cross21, b2Cross12 };
