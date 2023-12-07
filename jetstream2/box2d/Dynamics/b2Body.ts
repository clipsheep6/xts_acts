import {
  B2Vec2,
  b2MulTT2,
  b2MulTR2,
  B2Mat22,
  B2Transform,
  b2Vec2_zero,
  subtract,
  multM,
  add,
  b2Cross,
  b2Cross21,
  b2MulT2,
  b2MulR2,
  B2Sweep,
  b2Dot22,
  addEqual,
  mulEqual
} from '../Common/b2Math';
import { B2FixtureDef, B2Fixture } from './b2Fixture';
import { B2Shape, B2MassData } from '../Collision/Shapes/b2Shape';
import { B2World, FlagsW } from './b2World';
import { B2ContactEdge } from './Contacts/b2Contact';
import { B2JointEdge } from './Joints/b2Joint';
import { hex_1, hex_10, hex_2, hex_20, hex_4, hex_40, hex_8 } from '../Common/b2Settings';
enum B2BodyType {
  staticBody = 0,
  kinematicBody,
  dynamicBody
}
export class B2BodyDef {
  type = B2BodyType.staticBody;
  position = new B2Vec2();
  angle: number = 0.0;
  linearVelocity = new B2Vec2();
  angularVelocity: number = 0.0;
  linearDamping: number = 0.0;
  angularDamping: number = 0.0;
  allowSleep = true;
  awake = true;
  fixedRotation = false;
  bullet = false;
  active = true;
  userData?: object | null = null;
  gravityScale: number = 1.0;
  constructor() {}
}
export class B2Body {
  m_type: B2BodyType;
  m_flags: number = 0;
  m_islandIndex = 0;
  m_xf: B2Transform;
  m_sweep: B2Sweep;
  m_linearVelocity: B2Vec2;
  m_angularVelocity: number;
  m_force: B2Vec2;
  m_torque: number;
  m_world: B2World;
  m_prev: B2Body | null = null;
  m_next: B2Body | null = null;
  m_fixtureList: B2Fixture | null = null;
  m_fixtureCount: number = 0;
  m_jointList: B2JointEdge | null = null;
  m_contactList: B2ContactEdge | null = null;
  m_mass: number;
  m_invMass: number;
  m_I: number;
  m_invI: number;
  m_linearDamping: number;
  m_angularDamping: number;
  m_gravityScale: number;
  m_sleepTime: number;
  m_userData: object | null;
  createFixture(def: B2FixtureDef): B2Fixture {
    if (this.m_world.isLocked == true) {
      throw new Error('world is locked');
    }
    let fixture = new B2Fixture(this, def);
    if ((this.m_flags & Flags.activeFlag) != 0) {
      let broadPhase = this.m_world.m_contactManager.m_broadPhase;
      fixture.createProxies(broadPhase, this.m_xf);
    }
    fixture.m_next = this.m_fixtureList;
    this.m_fixtureList = fixture;
    this.m_fixtureCount += 1;
    fixture.m_body = this;
    if (fixture.m_density > 0.0) {
      this.resetMassData();
    }
    this.m_world.m_flags |= FlagsW.newFixture;
    return fixture;
  }
  createFixture2(shape: B2Shape, density: number): B2Fixture {
    let def = new B2FixtureDef();
    def.shape = shape;
    def.density = density;
    return this.createFixture(def);
  }
  destroyFixture(fixture: B2Fixture): void {
    if (this.m_world.isLocked == true) {
      return;
    }
    let found = false;
    let prev: B2Fixture | null = null;
    let f = this.m_fixtureList;
    while (f != null) {
      if (f === fixture) {
        if (prev != null) {
          prev.m_next = f!.m_next;
        } else {
          this.m_fixtureList = f.m_next;
        }
        found = true;
      }
      prev = f;
      f = f.m_next;
    }
    let edge: B2ContactEdge | null = this.m_contactList;
    while (edge != null) {
      let c = edge!.contact;
      edge = edge!.next;
      let fixtureA = c.fixtureA;
      let fixtureB = c.fixtureB;
      if (fixture === fixtureA || fixture === fixtureB) {
        this.m_world.m_contactManager.destroy(c);
      }
    }
    if ((this.m_flags & Flags.activeFlag) != 0) {
      let broadPhase = this.m_world.m_contactManager.m_broadPhase;
      fixture.destroyProxies(broadPhase);
    }
    fixture.destroy();
    fixture.m_next = null;
    this.m_fixtureCount -= 1;
    this.resetMassData();
  }
  setTransform(position: B2Vec2, angle: number): void {
    if (this.m_world.isLocked == true) {
      return;
    }
    this.m_xf.q.set(angle);
    this.m_xf.p = position;
    this.m_sweep.c = b2MulT2(this.m_xf, this.m_sweep.localCenter);
    this.m_sweep.a = angle;
    this.m_sweep.c0 = this.m_sweep.c;
    this.m_sweep.a0 = angle;
    let broadPhase = this.m_world.m_contactManager.m_broadPhase;
    let f: B2Fixture | null = this.m_fixtureList;
    while (f != null) {
      f.synchronize(broadPhase, this.m_xf, this.m_xf);
      f = f!.m_next;
    }
  }
  get transform(): B2Transform {
    return this.m_xf;
  }
  get position(): B2Vec2 {
    return this.m_xf.p;
  }
  get angle(): number {
    return this.m_sweep.a;
  }
  get worldCenter(): B2Vec2 {
    return this.m_sweep.c;
  }
  get localCenter(): B2Vec2 {
    return this.m_sweep.localCenter;
  }
  setLinearVelocity(v: B2Vec2): void {
    if (this.m_type == B2BodyType.staticBody) {
      return;
    }
    if (b2Dot22(v, v) > 0.0) {
      this.setAwake(true);
    }
    this.m_linearVelocity = v;
  }
  get linearVelocity(): B2Vec2 {
    return this.m_linearVelocity;
  }
  set linearVelocity(newValue) {
    this.setLinearVelocity(newValue);
  }
  setAngularVelocity(omega: number): void {
    if (this.m_type == B2BodyType.staticBody) {
      return;
    }
    if (omega * omega > 0.0) {
      this.setAwake(true);
    }
    this.m_angularVelocity = omega;
  }
  get angularVelocity(): number {
    return this.m_angularVelocity;
  }
  set angularVelocity(newValue) {
    this.setAngularVelocity(newValue);
  }
  applyForce(force: B2Vec2, point: B2Vec2, wake: boolean): void {
    if (this.m_type != B2BodyType.dynamicBody) {
      return;
    }
    if (wake && (this.m_flags & Flags.awakeFlag) == 0) {
      this.setAwake(true);
    }
    if ((this.m_flags & Flags.awakeFlag) != 0) {
      addEqual(this.m_force, force);
      this.m_torque += b2Cross(subtract(point, this.m_sweep.c), force);
    }
  }
  applyForceToCenter(force: B2Vec2, wake: boolean): void {
    if (this.m_type != B2BodyType.dynamicBody) {
      return;
    }
    if (wake && (this.m_flags & Flags.awakeFlag) == 0) {
      this.setAwake(true);
    }
    if ((this.m_flags & Flags.awakeFlag) != 0) {
      addEqual(this.m_force, force);
    }
  }
  applyTorque(torque: number, wake: boolean): void {
    if (this.m_type != B2BodyType.dynamicBody) {
      return;
    }
    if (wake && (this.m_flags & Flags.awakeFlag) == 0) {
      this.setAwake(true);
    }
    if ((this.m_flags & Flags.awakeFlag) != 0) {
      this.m_torque += torque;
    }
  }
  applyLinearImpulse(impulse: B2Vec2, point: B2Vec2, wake: boolean): void {
    if (this.m_type != B2BodyType.dynamicBody) {
      return;
    }
    if (wake && (this.m_flags & Flags.awakeFlag) == 0) {
      this.setAwake(true);
    }
    if ((this.m_flags & Flags.awakeFlag) != 0) {
      addEqual(this.m_linearVelocity, multM(impulse, this.m_invMass));
      this.m_angularVelocity += this.m_invI * b2Cross(subtract(point, this.m_sweep.c), impulse);
    }
  }
  applyAngularImpulse(impulse: number, wake: boolean): void {
    if (this.m_type != B2BodyType.dynamicBody) {
      return;
    }
    if (wake && (this.m_flags & Flags.awakeFlag) == 0) {
      this.setAwake(true);
    }
    if ((this.m_flags & Flags.awakeFlag) != 0) {
      this.m_angularVelocity += this.m_invI * impulse;
    }
  }
  get mass(): number {
    return this.m_mass;
  }
  get inertia(): number {
    return this.m_I + this.m_mass * b2Dot22(this.m_sweep.localCenter, this.m_sweep.localCenter);
  }

  get massData() {
    let data = new B2MassData();
    data.mass = this.m_mass;
    data.I = this.m_I + this.m_mass * b2Dot22(this.m_sweep.localCenter, this.m_sweep.localCenter);
    data.center = this.m_sweep.localCenter;
    return data;
  }
  set massData(newValue) {
    this.setMassData(newValue);
  }
  setMassData(massData: B2MassData): void {
    if (this.m_world.isLocked == true) {
      return;
    }
    if (this.m_type != B2BodyType.dynamicBody) {
      return;
    }
    this.m_invMass = 0.0;
    this.m_I = 0.0;
    this.m_invI = 0.0;
    this.m_mass = massData.mass;
    if (this.m_mass <= 0.0) {
      this.m_mass = 1.0;
    }
    this.m_invMass = 1.0 / this.m_mass;
    if (massData.I > 0.0 && (this.m_flags & Flags.fixedRotationFlag) == 0) {
      this.m_I = massData.I - this.m_mass * b2Dot22(massData.center, massData.center);
      this.m_invI = 1.0 / this.m_I;
    }
    let oldCenter = this.m_sweep.c;
    this.m_sweep.localCenter = massData.center;
    this.m_sweep.c0 = b2MulT2(this.m_xf, this.m_sweep.localCenter);
    this.m_sweep.c = this.m_sweep.c0;
    addEqual(this.m_linearVelocity, b2Cross21(this.m_angularVelocity, subtract(this.m_sweep.c, oldCenter)));
  }
  resetMassData(): void {
    this.m_mass = 0.0;
    this.m_invMass = 0.0;
    this.m_I = 0.0;
    this.m_invI = 0.0;
    this.m_sweep.localCenter.setZero();
    if (this.m_type == B2BodyType.staticBody || this.m_type == B2BodyType.kinematicBody) {
      this.m_sweep.c0 = this.m_xf.p;
      this.m_sweep.c = this.m_xf.p;
      this.m_sweep.a0 = this.m_sweep.a;
      return;
    }
    let localCenter = b2Vec2_zero;
    let f: B2Fixture | null = this.m_fixtureList;
    while (f != null) {
      if (f.m_density == 0.0) {
        f = f!.m_next;
        continue;
      }
      let massData = f.massData;
      this.m_mass += massData.mass;
      addEqual(localCenter, multM(massData.center, massData.mass));
      this.m_I += massData.I;
      f = f!.m_next;
    }
    if (this.m_mass > 0.0) {
      this.m_invMass = 1.0 / this.m_mass;
      mulEqual(localCenter, this.m_invMass);
    } else {
      this.m_mass = 1.0;
      this.m_invMass = 1.0;
    }
    if (this.m_I > 0.0 && (this.m_flags & Flags.fixedRotationFlag) == 0) {
      this.m_I -= this.m_mass * b2Dot22(localCenter, localCenter);
      this.m_invI = 1.0 / this.m_I;
    } else {
      this.m_I = 0.0;
      this.m_invI = 0.0;
    }
    let oldCenter = this.m_sweep.c;
    this.m_sweep.localCenter = localCenter;
    this.m_sweep.c0 = b2MulT2(this.m_xf, this.m_sweep.localCenter);
    this.m_sweep.c = this.m_sweep.c0;
    addEqual(this.m_linearVelocity, b2Cross21(this.m_angularVelocity, subtract(this.m_sweep.c, oldCenter)));
  }
  getWorldPoint(localPoint: B2Vec2): B2Vec2 {
    return b2MulT2(this.m_xf, localPoint);
  }
  getWorldVector(localVector: B2Vec2): B2Vec2 {
    return b2MulR2(this.m_xf.q, localVector);
  }
  getLocalPoint(worldPoint: B2Vec2): B2Vec2 {
    return b2MulTT2(this.m_xf, worldPoint);
  }
  getLocalVector(worldVector: B2Vec2): B2Vec2 {
    return b2MulTR2(this.m_xf.q, worldVector);
  }
  getLinearVelocityFromWorldPoint(worldPoint: B2Vec2): B2Vec2 {
    return add(this.m_linearVelocity, b2Cross21(this.m_angularVelocity, subtract(worldPoint, this.m_sweep.c)));
  }
  getLinearVelocityFromLocalPoint(localPoint: B2Vec2): B2Vec2 {
    return this.getLinearVelocityFromWorldPoint(this.getWorldPoint(localPoint));
  }

  get linearDamping() {
    return this.m_linearDamping;
  }
  set linearDamping(newValue) {
    this.setLinearDamping(newValue);
  }
  setLinearDamping(linearDamping: number): void {
    this.m_linearDamping = linearDamping;
  }

  get angularDamping() {
    return this.m_gravityScale;
  }
  set angularDamping(newValue) {
    this.setAngularDamping(newValue);
  }
  setAngularDamping(angularDamping: number): void {
    this.m_angularDamping = angularDamping;
  }

  get gravityScale() {
    return this.m_gravityScale;
  }
  set gravityScale(newValue) {
    this.setGravityScale(newValue);
  }
  setGravityScale(scale: number): void {
    this.m_gravityScale = scale;
  }
  setType(type: B2BodyType): void {
    if (this.m_world.isLocked == true) {
      return;
    }
    if (this.m_type == type) {
      return;
    }
    this.m_type = type;
    this.resetMassData();
    if (this.m_type == B2BodyType.staticBody) {
      this.m_linearVelocity.setZero();
      this.m_angularVelocity = 0.0;
      this.m_sweep.a0 = this.m_sweep.a;
      this.m_sweep.c0 = this.m_sweep.c;
      this.synchronizeFixtures();
    }
    this.setAwake(true);
    this.m_force.setZero();
    this.m_torque = 0.0;
    let ce: B2ContactEdge | null = this.m_contactList;
    while (ce != null) {
      let ce0 = ce!;
      ce = ce!.next;
      this.m_world.m_contactManager.destroy(ce0.contact);
    }
    this.m_contactList = null;
    let broadPhase = this.m_world.m_contactManager.m_broadPhase;
    let f: B2Fixture | null = this.m_fixtureList;
    while (f != null) {
      let proxyCount = f!.m_proxyCount;
      for (let i = 0; i < proxyCount; i++) {
        broadPhase.touchProxy(f!.m_proxies[i].proxyId);
      }
      f = f!.m_next;
    }
  }

  get type_Body(): B2BodyType {
    return this.m_type;
  }
  set type_Body(newValue) {
    this.setType(newValue);
  }
  setBullet(flag: boolean): void {
    if (flag) {
      this.m_flags |= Flags.bulletFlag;
    } else {
      this.m_flags &= ~Flags.bulletFlag;
    }
  }

  get isBullet() {
    return (this.m_flags & Flags.bulletFlag) == Flags.bulletFlag;
  }
  set isBullet(newValue) {
    this.setBullet(newValue);
  }
  setSleepingAllowed(flag: boolean): void {
    if (flag) {
      this.m_flags |= Flags.autoSleepFlag;
    } else {
      this.m_flags &= ~Flags.autoSleepFlag;
      this.setAwake(true);
    }
  }

  get isSleepingAllowed(): boolean {
    return (this.m_flags & Flags.autoSleepFlag) == Flags.autoSleepFlag;
  }
  set isSleepingAllowed(newValue) {
    this.setSleepingAllowed(newValue);
  }
  setAwake(flag: boolean): void {
    if (flag) {
      if ((this.m_flags & Flags.awakeFlag) == 0) {
        this.m_flags |= Flags.awakeFlag;
        this.m_sleepTime = 0.0;
      }
    } else {
      this.m_flags &= ~Flags.awakeFlag;
      this.m_sleepTime = 0.0;
      this.m_linearVelocity.setZero();
      this.m_angularVelocity = 0.0;
      this.m_force.setZero();
      this.m_torque = 0.0;
    }
  }
  get isAwake(): boolean {
    return (this.m_flags & Flags.awakeFlag) == Flags.awakeFlag;
  }
  setActive(flag: boolean): void {
    if (flag == this.isActive) {
      return;
    }
    if (flag) {
      this.m_flags |= Flags.activeFlag;
      let broadPhase = this.m_world.m_contactManager.m_broadPhase;
      let f: B2Fixture | null = this.m_fixtureList;
      while (f != null) {
        f!.createProxies(broadPhase, this.m_xf);
        f = f!.m_next;
      }
    } else {
      this.m_flags &= ~Flags.activeFlag;
      let broadPhase = this.m_world.m_contactManager.m_broadPhase;
      let f: B2Fixture | null = this.m_fixtureList;
      while (f != null) {
        f!.destroyProxies(broadPhase);
        if (f!.m_next != null) {
          f = f!.m_next;
        } else {
          break;
        }
      }
      let ce = this.m_contactList;
      while (ce != null) {
        let ce0 = ce!;
        ce = ce!.next;
        this.m_world.m_contactManager.destroy(ce0.contact);
      }
      this.m_contactList = null;
    }
  }
  get isActive(): boolean {
    return (this.m_flags & Flags.activeFlag) == Flags.activeFlag;
  }
  setFixedRotation(flag: boolean): void {
    let status = (this.m_flags & Flags.fixedRotationFlag) == Flags.fixedRotationFlag;
    if (status == flag) {
      return;
    }
    if (flag) {
      this.m_flags |= Flags.fixedRotationFlag;
    } else {
      this.m_flags &= ~Flags.fixedRotationFlag;
    }
    this.m_angularVelocity = 0.0;
    this.resetMassData();
  }
  public isFixedRotation(): boolean {
    return (this.m_flags & Flags.fixedRotationFlag) == Flags.fixedRotationFlag;
  }
  public getFixtureList(): B2Fixture | null {
    return this.m_fixtureList;
  }
  public getJointList(): B2JointEdge | null {
    return this.m_jointList;
  }
  public getContactList(): B2ContactEdge | null {
    return this.m_contactList;
  }
  public getNext(): B2Body | null {
    return this.m_next;
  }
  get userData(): object | null {
    return this.m_userData;
  }
  set userData(newValue) {
    this.setUserData(newValue);
  }
  public setUserData(data: object | null) {
    this.m_userData = data;
  }
  get world(): B2World | null {
    return this.m_world;
  }
  constructor(def: B2BodyDef, world: B2World) {
    this.m_flags = 0;
    if (def.bullet) {
      this.m_flags |= Flags.bulletFlag;
    }
    if (def.fixedRotation) {
      this.m_flags |= Flags.fixedRotationFlag;
    }
    if (def.allowSleep) {
      this.m_flags |= Flags.autoSleepFlag;
    }
    if (def.awake) {
      this.m_flags |= Flags.awakeFlag;
    }
    if (def.active) {
      this.m_flags |= Flags.activeFlag;
    }
    this.m_world = world;
    this.m_xf = new B2Transform();
    this.m_xf.p = def.position;
    this.m_xf.q.set(def.angle);
    this.m_sweep = new B2Sweep();
    this.m_sweep.localCenter = new B2Vec2(0.0, 0.0);
    this.m_sweep.c0 = this.m_xf.p;
    this.m_sweep.c = this.m_xf.p;
    this.m_sweep.a0 = def.angle;
    this.m_sweep.a = def.angle;
    this.m_sweep.alpha0 = 0.0;
    this.m_prev = null;
    this.m_next = null;
    this.m_linearVelocity = def.linearVelocity;
    this.m_angularVelocity = def.angularVelocity;
    this.m_linearDamping = def.linearDamping;
    this.m_angularDamping = def.angularDamping;
    this.m_gravityScale = def.gravityScale;
    this.m_force = new B2Vec2(0.0, 0.0);
    this.m_torque = 0.0;
    this.m_sleepTime = 0.0;
    this.m_type = def.type;
    if (this.m_type == B2BodyType.dynamicBody) {
      this.m_mass = 1.0;
      this.m_invMass = 1.0;
    } else {
      this.m_mass = 0.0;
      this.m_invMass = 0.0;
    }
    this.m_I = 0.0;
    this.m_invI = 0.0;
    this.m_userData = def.userData!;
    this.m_fixtureList = null;
    this.m_fixtureCount = 0;
  }

  synchronizeFixtures(): void {
    let xf1 = new B2Transform();
    xf1.q.set(this.m_sweep.a0);
    xf1.p = subtract(this.m_sweep.c0, b2MulR2(xf1.q, this.m_sweep.localCenter));
    let broadPhase = this.m_world.m_contactManager.m_broadPhase;
    let f: B2Fixture | null = this.m_fixtureList;
    while (f != null) {
      f!.synchronize(broadPhase, xf1, this.m_xf);
      f = f!.m_next;
    }
  }
  synchronizeTransform(): void {
    this.m_xf.q.set(this.m_sweep.a);
    this.m_xf.p = subtract(this.m_sweep.c, b2MulR2(this.m_xf.q, this.m_sweep.localCenter));
    let tVec = this.m_sweep.localCenter;
    let tMat = new B2Mat22();
    tMat.set_1(this.m_sweep.a);
    this.m_xf.p.y = this.m_sweep.c.y - (tMat.ex.y * tVec.x + tMat.ey.y * tVec.y);
  }
  shouldCollide(other: B2Body): boolean {
    if (this.m_type != B2BodyType.dynamicBody && other.m_type != B2BodyType.dynamicBody) {
      return false;
    }
    let jn: B2JointEdge | null = this.m_jointList;
    while (jn != null) {
      if (jn!.other === other) {
        if (jn!.joint.m_collideConnected == false) {
          return false;
        }
      }
      jn = jn!.next;
    }
    return true;
  }
  advance(alpha: number): void {
    this.m_sweep.advance(alpha);
    this.m_sweep.c = this.m_sweep.c0;
    this.m_sweep.a = this.m_sweep.a0;
    this.m_xf.q.set(this.m_sweep.a);
    this.m_xf.p = subtract(this.m_sweep.c, b2MulR2(this.m_xf.q, this.m_sweep.localCenter));
  }
}
export class Flags {
  static islandFlag = hex_1;
  static awakeFlag = hex_2;
  static autoSleepFlag = hex_4;
  static bulletFlag = hex_8;
  static fixedRotationFlag = hex_10;
  static activeFlag = hex_20;
  static toiFlag = hex_40;
}
export { B2BodyType };
