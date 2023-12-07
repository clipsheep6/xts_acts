import {
  B2Vec2,
  b2Atan2,
  b2Cross,
  b2Dot22,
  b2Distance,
  subtract,
  multM,
  addEqual,
  mulEqual,
  subtractEqual,
  minus
} from '../Common/b2Math';

import { b2_pi, float_2 } from '../Common/b2Settings';
class B2RopeDef {
  vertices: B2Vec2[] | null;
  count: number;
  masses: number[] | null;
  gravity: B2Vec2 = new B2Vec2();
  damping: number;
  k2: number;
  k3: number;
  constructor() {
    this.vertices = null;
    this.count = 0;
    this.masses = null;
    this.gravity = new B2Vec2();
    this.damping = 0.1;
    this.k2 = 0.9;
    this.k3 = 0.1;
  }
}

export class B2Rope {
  m_count: number;
  m_ps: B2Vec2[] | null = null;
  m_p0s: B2Vec2[] | null = null;
  m_vs: B2Vec2[] | null = null;
  m_ims: number[] | null = null;
  m_Ls: number[] | null = null;
  m_as: number[] | null = null;
  m_gravity: B2Vec2;
  m_damping: number;
  m_k2: number;
  m_k3: number;
  constructor() {
    this.m_count = 0;
    this.m_ps = [];
    this.m_p0s = [];
    this.m_vs = [];
    this.m_ims = [];
    this.m_Ls = [];
    this.m_as = [];
    this.m_gravity = new B2Vec2(0.0, 0.0);
    this.m_damping = 0.1;
    this.m_k2 = 1.0;
    this.m_k3 = 0.1;
  }

  initialize(def: B2RopeDef): void {
    this.m_count = def.count;
    for (let i = 0; i < this.m_count; i++) {
      this.m_ps.push(new B2Vec2());
      this.m_p0s.push(new B2Vec2());
      this.m_vs.push(new B2Vec2());
      this.m_ims.push(0.0);
    }
    for (let i = 0; i < this.m_count; i++) {
      this.m_ps[i] = def.vertices[i];
      this.m_p0s[i] = def.vertices[i];
      this.m_vs[i].setZero();
      let m = def.masses[i];
      if (m > 0.0) {
        this.m_ims[i] = 1.0 / m;
      } else {
        this.m_ims[i] = 0.0;
      }
    }
    let count2 = this.m_count - 1;
    let count3 = this.m_count - float_2;
    for (let i = 0; i < count2; i++) {
      this.m_Ls.push(0.0);
    }
    for (let j = 0; j < count3; j++) {
      this.m_as.push(0.0);
    }
    for (let i = 0; i < count2; i++) {
      let p1 = this.m_ps[i];
      let p2 = this.m_ps[i + 1];
      this.m_Ls[i] = b2Distance(p1, p2);
    }
    for (let i = 0; i < count3; i++) {
      let p1 = this.m_ps[i];
      let p2 = this.m_ps[i + 1];
      let p3 = this.m_ps[i + float_2];
      let d1 = subtract(p2, p1);
      let d2 = subtract(p3, p2);
      let a = b2Cross(d1, d2);
      let b = b2Dot22(d1, d2);
      this.m_as[i] = b2Atan2(a, b);
    }
    this.m_gravity = def.gravity;
    this.m_damping = def.damping;
    this.m_k2 = def.k2;
    this.m_k3 = def.k3;
  }

  step(h: number, iterations: number): void {
    if (h == 0.0) {
      return;
    }
    let d = Math.exp(-h * this.m_damping);
    for (let i = 0; i < this.m_count; i++) {
      this.m_p0s[i] = this.m_ps[i];
      if (this.m_ims[i] > 0.0) {
        addEqual(this.m_vs[i], multM(this.m_gravity, h));
      }
      mulEqual(this.m_vs[i], d);
      addEqual(this.m_ps[i], multM(this.m_vs[i], h));
    }
    for (let _ = 0; _ < iterations; _++) {
      this.solveC2();
      this.solveC3();
      this.solveC2();
    }
    let inv_h = 1.0 / h;
    for (let i = 0; i < this.m_count; i++) {
      this.m_vs[i] = multM(subtract(this.m_ps[i], this.m_p0s[i]), inv_h);
    }
  }

  get vertexCount(): number {
    return this.m_count;
  }

  get vertices(): B2Vec2[] {
    return this.m_ps;
  }

  setAngle(angle: number): void {
    let count3 = this.m_count - float_2;
    for (let i = 0; i < count3; i++) {
      this.m_as[i] = angle;
    }
  }

  solveC2(): void {
    let count2 = this.m_count - 1;
    for (let i = 0; i < count2; i++) {
      let p1 = this.m_ps[i];
      let p2 = this.m_ps[i + 1];
      let d = subtract(p2, p1);
      let L = d.normalize();
      let im1 = this.m_ims[i];
      let im2 = this.m_ims[i + 1];
      if (im1 + im2 == 0.0) {
        continue;
      }
      let s1 = im1 / (im1 + im2);
      let s2 = im2 / (im1 + im2);
      subtractEqual(p1, multM(d, this.m_k2 * s1 * (this.m_Ls[i] - L)));
      addEqual(p2, multM(d, this.m_k2 * s2 * (this.m_Ls[i] - L)));
      this.m_ps[i] = p1;
      this.m_ps[i + 1] = p2;
    }
  }

  solveC3(): void {
    let count3 = this.m_count - float_2;
    for (let i = 0; i < count3; i++) {
      let p1 = this.m_ps[i];
      let p2 = this.m_ps[i + 1];
      let p3 = this.m_ps[i + float_2];
      let m1 = this.m_ims[i];
      let m2 = this.m_ims[i + 1];
      let m3 = this.m_ims[i + float_2];
      let d1 = subtract(p2, p1);
      let d2 = subtract(p3, p2);
      let L1sqr = d1.lengthSquared();
      let L2sqr = d2.lengthSquared();
      if (L1sqr * L2sqr == 0.0) {
        continue;
      }
      let a = b2Cross(d1, d2);
      let b = b2Dot22(d1, d2);
      let angle = b2Atan2(a, b);
      let Jd1 = multM(d1.skew(), -1.0 / L1sqr);
      let Jd2 = multM(d2.skew(), 1.0 / L2sqr);
      let J1 = minus(Jd1);
      let J2 = subtract(Jd1, Jd2);
      let J3 = Jd2;
      let mass = m1 * b2Dot22(J1, J1) + m2 * b2Dot22(J2, J2) + m3 * b2Dot22(J3, J3);
      if (mass == 0.0) {
        continue;
      }
      mass = 1.0 / mass;
      let C = angle - this.m_as[i];
      while (C > b2_pi) {
        angle -= float_2 * b2_pi;
        C = angle - this.m_as[i];
      }
      while (C < -b2_pi) {
        angle += float_2 * b2_pi;
        C = angle - this.m_as[i];
      }
      let impulse = -this.m_k3 * mass * C;
      addEqual(p1, multM(J1, m1 * impulse));
      addEqual(p2, multM(J2, m2 * impulse));
      addEqual(p3, multM(J3, m3 * impulse));
      this.m_ps[i] = p1;
      this.m_ps[i + 1] = p2;
      this.m_ps[i + float_2] = p3;
    }
  }
}
