import { B2Body } from '../b2Body';
import {
  add,
  addEqual,
  addEqual3,
  b2ClampF,
  b2Cross,
  b2Cross21,
  b2Dot22,
  B2Mat22,
  B2Mat33,
  b2Mul22,
  b2Mul32,
  b2Mul33,
  b2MulR2,
  b2MulTR2,
  b2MulTT2,
  B2Rot,
  B2Vec2,
  B2Vec3,
  minus,
  minus3,
  mulEqual,
  mulMEqual3,
  multM,
  subtract,
  subtract3,
  subtractEqual
} from '../../Common/b2Math';
import { B2SolverData } from '../b2TimeStep';
import {
  b2_angularSlop,
  b2_linearSlop,
  b2_maxAngularCorrection,
  b2_maxLinearCorrection,
  b2_pi
} from '../../Common/b2Settings';

enum B2JointType {
  unknownJoint,
  revoluteJoint,
  prismaticJoint,
  distanceJoint,
  pulleyJoint,
  mouseJoint,
  gearJoint,
  wheelJoint,
  weldJoint,
  frictionJoint,
  ropeJoint,
  motorJoint
}
enum B2LimitState {
  inactiveLimit,
  atLowerLimit,
  atUpperLimit,
  equalLimits
}
export class B2JointEdge {
  constructor(joint: B2Joint) {
    this.joint = joint;
  }
  other: B2Body | null = null;
  joint: B2Joint;
  prev: B2JointEdge | null = null;
  next: B2JointEdge | null = null;
}
export class B2JointDef {
  constructor() {
    this.type = B2JointType.unknownJoint;
    this.userData = null;
    this.bodyA = null;
    this.bodyB = null;
    this.collideConnected = false;
  }
  public type: B2JointType;
  public userData: Object | null;
  public bodyA: B2Body | null;
  public bodyB: B2Body | null;
  public collideConnected: boolean;
}
export class B2Joint {
  m_type: B2JointType = B2JointType.unknownJoint;
  m_prev: B2Joint | null = null;
  m_next: B2Joint | null = null;
  m_edgeA: B2JointEdge;
  m_edgeB: B2JointEdge;
  m_bodyA: B2Body | null;
  m_bodyB: B2Body | null;
  m_index: number = 0;
  m_islandFlag: boolean = false;
  m_collideConnected: boolean = false;
  m_userData: Object | null = null;
  public get type_Joint(): B2JointType {
    return this.m_type;
  }
  public get bodyA(): B2Body | null {
    return this.m_bodyA;
  }
  public get bodyB(): B2Body | null {
    return this.m_bodyB;
  }
  public get anchorA(): B2Vec2 {
    throw new Error('must override');
  }
  public get anchorB(): B2Vec2 {
    throw new Error('must override');
  }
  constructor(def: B2JointDef) {
    this.m_type = def.type;
    this.m_prev = null;
    this.m_next = null;
    this.m_bodyA = def.bodyA;
    this.m_bodyB = def.bodyB;
    this.m_index = 0;
    this.m_collideConnected = def.collideConnected;
    this.m_islandFlag = false;
    this.m_userData = def.userData;
    this.m_edgeA = new B2JointEdge(this);
    this.m_edgeA.other = null;
    this.m_edgeA.prev = null;
    this.m_edgeA.next = null;
    this.m_edgeB = new B2JointEdge(this);
    this.m_edgeB.other = null;
    this.m_edgeB.prev = null;
    this.m_edgeB.next = null;
  }
  public getReactionForce(inv_dt: number): B2Vec2 {
    throw new Error('must override');
  }
  public getReactionTorque(inv_dt: number): number {
    throw new Error('must override');
  }
  public getNext(): B2Joint | null {
    return this.m_next;
  }
  public get userData(): Object | null {
    return this.m_userData;
  }
  public set userData(value: Object | null) {
    this.setUserData(value);
  }
  setUserData(data: Object | null): void {
    this.m_userData = data;
  }
  get isActive(): boolean {
    return this.m_bodyA!.isActive && this.m_bodyB!.isActive;
  }
  collideConnected(): boolean {
    return this.m_collideConnected;
  }
  public shiftOrigin(newOrigin: B2Vec2): void {}
  static create(def: B2JointDef): B2Joint {
    let joint: B2Joint;
    switch (def.type) {
      case B2JointType.distanceJoint:
        joint = new B2DistanceJoint(def as B2DistanceJointDef);
        break;
      case B2JointType.mouseJoint:
        joint = new B2MouseJoint(def as B2MouseJointDef);
        break;
      case B2JointType.prismaticJoint:
        joint = new B2PrismaticJoint(def as B2PrismaticJointDef);
        break;
      case B2JointType.revoluteJoint:
        joint = new B2RevoluteJoint(def as B2RevoluteJointDef);
        break;
      case B2JointType.pulleyJoint:
        joint = new B2PulleyJoint(def as B2PulleyJointDef);
        break;
      case B2JointType.gearJoint:
        joint = new B2GearJoint(def as B2GearJointDef);
        break;
      case B2JointType.weldJoint:
        joint = new B2WeldJoint(def as B2WeldJointDef);
        break;
      case B2JointType.frictionJoint:
        joint = new B2FrictionJoint(def as B2FrictionJointDef);
        break;
      default:
        throw new Error('Unknown joint type');
    }
    return joint;
  }
  static destroy(joint: B2Joint): void {}
  initVelocityConstraints(data: B2SolverData): void {
    throw new Error('must override');
  }
  solveVelocityConstraints(data: B2SolverData): void {
    throw new Error('must override');
  }
  solvePositionConstraints(data: B2SolverData): boolean {
    throw new Error('must override');
  }
}

export class B2WeldJointDef extends B2JointDef {
  public constructor() {
    super();
    this.localAnchorA = new B2Vec2(0.0, 0.0);
    this.localAnchorB = new B2Vec2(0.0, 0.0);
    this.referenceAngle = 0.0;
    this.frequencyHz = 0.0;
    this.dampingRatio = 0.0;
    this.type = B2JointType.weldJoint;
  }
  public initialize(bodyA: B2Body, bodyB: B2Body, anchor: B2Vec2): void {
    this.bodyA = bodyA;
    this.bodyB = bodyB;
    this.localAnchorA = bodyA.getLocalPoint(anchor);
    this.localAnchorB = bodyB.getLocalPoint(anchor);
    this.referenceAngle = bodyB.angle - bodyA.angle;
  }
  public localAnchorA: B2Vec2;
  public localAnchorB: B2Vec2;
  public referenceAngle: number;
  public frequencyHz: number;
  public dampingRatio: number;
}
export class B2WeldJoint extends B2Joint {
  m_frequencyHz: number = 0.0;
  m_dampingRatio: number = 0.0;
  m_bias: number = 0.0;
  m_localAnchorA = new B2Vec2();
  m_localAnchorB = new B2Vec2();
  m_referenceAngle: number = 0.0;
  m_gamma: number = 0.0;
  m_impulse = new B2Vec3();
  m_indexA: number = 0;
  m_indexB: number = 0;
  m_rA = new B2Vec2();
  m_rB = new B2Vec2();
  m_localCenterA = new B2Vec2();
  m_localCenterB = new B2Vec2();
  m_invMassA: number = 0.0;
  m_invMassB: number = 0.0;
  m_invIA: number = 0.0;
  m_invIB: number = 0.0;
  m_mass = new B2Mat33();
  public get anchorA(): B2Vec2 {
    return this.m_bodyA!.getWorldPoint(this.m_localAnchorA);
  }
  public get anchorB(): B2Vec2 {
    return this.m_bodyB!.getWorldPoint(this.m_localAnchorB);
  }
  public getReactionForce(inv_dt: number): B2Vec2 {
    let P = new B2Vec2(this.m_impulse.x, this.m_impulse.y);
    return multM(P, inv_dt);
  }
  public getReactionTorque(inv_dt: number): number {
    return inv_dt * this.m_impulse.z;
  }
  public get localAnchorA(): B2Vec2 {
    return this.m_localAnchorA;
  }
  public get localAnchorB(): B2Vec2 {
    return this.m_localAnchorB;
  }
  public get referenceAngle(): number {
    return this.m_referenceAngle;
  }
  public setFrequency(hz: number): void {
    this.m_frequencyHz = hz;
  }
  public get frequency(): number {
    return this.m_frequencyHz;
  }
  public setDampingRatio(ratio: number): void {
    this.m_dampingRatio = ratio;
  }
  public get dampingRatio(): number {
    return this.m_dampingRatio;
  }
  constructor(def: B2WeldJointDef) {
    super(def);
    this.m_localAnchorA = def.localAnchorA;
    this.m_localAnchorB = def.localAnchorB;
    this.m_referenceAngle = def.referenceAngle;
    this.m_frequencyHz = def.frequencyHz;
    this.m_dampingRatio = def.dampingRatio;
    this.m_impulse = new B2Vec3(0.0, 0.0, 0.0);
  }
  initVelocityConstraints(data: B2SolverData): void {
    let initveltwo: number = 2.0;
    this.m_indexA = this.m_bodyA!.m_islandIndex;
    this.m_indexB = this.m_bodyB!.m_islandIndex;
    this.m_localCenterA = this.m_bodyA!.m_sweep.localCenter;
    this.m_localCenterB = this.m_bodyB!.m_sweep.localCenter;
    this.m_invMassA = this.m_bodyA!.m_invMass;
    this.m_invMassB = this.m_bodyB!.m_invMass;
    this.m_invIA = this.m_bodyA!.m_invI;
    this.m_invIB = this.m_bodyB!.m_invI;
    let aA: number = data.positions.get(this.m_indexA).a;
    let vA: B2Vec2 = data.velocities.get(this.m_indexA).v;
    let wA: number = data.velocities.get(this.m_indexA).w;
    let aB: number = data.positions.get(this.m_indexB).a;
    let vB: B2Vec2 = data.velocities.get(this.m_indexB).v;
    let wB: number = data.velocities.get(this.m_indexB).w;
    let qA = new B2Rot(aA),
      qB = new B2Rot(aB);
    this.m_rA = b2MulR2(qA, subtract(this.m_localAnchorA, this.m_localCenterA));
    this.m_rB = b2MulR2(qB, subtract(this.m_localAnchorB, this.m_localCenterB));
    let mA = this.m_invMassA,
      mB = this.m_invMassB;
    let iA = this.m_invIA,
      iB = this.m_invIB;
    let K = new B2Mat33();
    K.ex.x = mA + mB + this.m_rA.y * this.m_rA.y * iA + this.m_rB.y * this.m_rB.y * iB;
    K.ey.x = -this.m_rA.y * this.m_rA.x * iA - this.m_rB.y * this.m_rB.x * iB;
    K.ez.x = -this.m_rA.y * iA - this.m_rB.y * iB;
    K.ex.y = K.ey.x;
    K.ey.y = mA + mB + this.m_rA.x * this.m_rA.x * iA + this.m_rB.x * this.m_rB.x * iB;
    K.ez.y = this.m_rA.x * iA + this.m_rB.x * iB;
    K.ex.z = K.ez.x;
    K.ey.z = K.ez.y;
    K.ez.z = iA + iB;
    if (this.m_frequencyHz > 0.0) {
      this.m_mass = K.getInverse22();
      let invM = iA + iB;
      let m = invM > 0.0 ? 1.0 / invM : 0.0;
      let C = aB - aA - this.m_referenceAngle;
      let omega = initveltwo * b2_pi * this.m_frequencyHz;
      let d = initveltwo * m * this.m_dampingRatio * omega;
      let k = m * omega * omega;
      let h = data.step.dt;
      this.m_gamma = h * (d + h * k);
      this.m_gamma = this.m_gamma != 0.0 ? 1.0 / this.m_gamma : 0.0;
      this.m_bias = C * h * k * this.m_gamma;
      invM += this.m_gamma;
      this.m_mass.ez.z = invM != 0.0 ? 1.0 / invM : 0.0;
    } else {
      this.m_mass = K.getSymInverse33();
      this.m_gamma = 0.0;
      this.m_bias = 0.0;
    }
    if (data.step.warmStarting) {
      mulMEqual3(this.m_impulse, data.step.dtRatio);
      let P = new B2Vec2(this.m_impulse.x, this.m_impulse.y);
      subtractEqual(vA, multM(P, mA));
      wA -= iA * (b2Cross(this.m_rA, P) + this.m_impulse.z);
      addEqual(vB, multM(P, mB));
      wB += iB * (b2Cross(this.m_rB, P) + this.m_impulse.z);
    } else {
      this.m_impulse.setZero();
    }
    data.velocities.get(this.m_indexA).v = vA;
    data.velocities.get(this.m_indexA).w = wA;
    data.velocities.get(this.m_indexB).v = vB;
    data.velocities.get(this.m_indexB).w = wB;
  }
  solveVelocityConstraints(data: B2SolverData): void {
    let vA: B2Vec2 = data.velocities.get(this.m_indexA).v;
    let wA: number = data.velocities.get(this.m_indexA).w;
    let vB: B2Vec2 = data.velocities.get(this.m_indexB).v;
    let wB: number = data.velocities.get(this.m_indexB).w;
    let mA = this.m_invMassA,
      mB = this.m_invMassB;
    let iA = this.m_invIA,
      iB = this.m_invIB;
    if (this.m_frequencyHz > 0.0) {
      let Cdot2 = wB - wA;
      let impulse2 = -this.m_mass.ez.z * (Cdot2 + this.m_bias + this.m_gamma * this.m_impulse.z);
      this.m_impulse.z += impulse2;
      wA -= iA * impulse2;
      wB += iB * impulse2;
      let Cdot1 = subtract(subtract(add(vB, b2Cross21(wB, this.m_rB)), vA), b2Cross21(wA, this.m_rA));
      let impulse1 = minus(b2Mul32(this.m_mass, Cdot1));
      this.m_impulse.x += impulse1.x;
      this.m_impulse.y += impulse1.y;
      let P = impulse1;
      subtractEqual(vA, multM(P, mA));
      wA -= iA * b2Cross(this.m_rA, P);
      addEqual(vB, multM(P, mB));
      wB += iB * b2Cross(this.m_rB, P);
    } else {
      let Cdot1 = subtract(subtract(add(vB, b2Cross21(wB, this.m_rB)), vA), b2Cross21(wA, this.m_rA));
      let Cdot2 = wB - wA;
      let Cdot = new B2Vec3(Cdot1.x, Cdot1.y, Cdot2);
      let impulse = minus3(b2Mul33(this.m_mass, Cdot));
      addEqual3(this.m_impulse, impulse);
      let P = new B2Vec2(impulse.x, impulse.y);
      subtractEqual(vA, multM(P, mA));
      wA -= iA * (b2Cross(this.m_rA, P) + impulse.z);
      addEqual(vB, multM(P, mB));
      wB += iB * (b2Cross(this.m_rB, P) + impulse.z);
    }
    data.velocities.get(this.m_indexA).v = vA;
    data.velocities.get(this.m_indexA).w = wA;
    data.velocities.get(this.m_indexB).v = vB;
    data.velocities.get(this.m_indexB).w = wB;
  }
  solvePositionConstraints(data: B2SolverData): boolean {
    let cA: B2Vec2 = data.positions.get(this.m_indexA).c;
    let aA: number = data.positions.get(this.m_indexA).a;
    let cB: B2Vec2 = data.positions.get(this.m_indexB).c;
    let aB: number = data.positions.get(this.m_indexB).a;
    let qA = new B2Rot(aA),
      qB = new B2Rot(aB);
    let mA = this.m_invMassA,
      mB = this.m_invMassB;
    let iA = this.m_invIA,
      iB = this.m_invIB;
    let rA = b2MulR2(qA, subtract(this.m_localAnchorA, this.m_localCenterA));
    let rB = b2MulR2(qB, subtract(this.m_localAnchorB, this.m_localCenterB));
    let positionError: number, angularError: number;
    let K = new B2Mat33();
    K.ex.x = mA + mB + rA.y * rA.y * iA + rB.y * rB.y * iB;
    K.ey.x = -rA.y * rA.x * iA - rB.y * rB.x * iB;
    K.ez.x = -rA.y * iA - rB.y * iB;
    K.ex.y = K.ey.x;
    K.ey.y = mA + mB + rA.x * rA.x * iA + rB.x * rB.x * iB;
    K.ez.y = rA.x * iA + rB.x * iB;
    K.ex.z = K.ez.x;
    K.ey.z = K.ez.y;
    K.ez.z = iA + iB;
    if (this.m_frequencyHz > 0.0) {
      let C1 = subtract(subtract(add(cB, rB), cA), rA);
      positionError = C1.length();
      angularError = 0.0;
      let P = minus(K.solve22(C1));
      subtractEqual(cA, multM(P, mA));
      aA -= iA * b2Cross(rA, P);
      addEqual(cB, multM(P, mB));
      aB += iB * b2Cross(rB, P);
    } else {
      let C1 = subtract(subtract(add(cB, rB), cA), rA);
      let C2 = aB - aA - this.m_referenceAngle;
      positionError = C1.length();
      angularError = Math.abs(C2);
      let C = new B2Vec3(C1.x, C1.y, C2);
      let impulse = minus3(K.solve33(C));
      let P = new B2Vec2(impulse.x, impulse.y);
      subtractEqual(cA, multM(P, mA));
      aA -= iA * (b2Cross(rA, P) + impulse.z);
      addEqual(cB, multM(P, mB));
      aB += iB * (b2Cross(rB, P) + impulse.z);
    }
    data.positions.get(this.m_indexA).c = cA;
    data.positions.get(this.m_indexA).a = aA;
    data.positions.get(this.m_indexB).c = cB;
    data.positions.get(this.m_indexB).a = aB;
    return positionError <= b2_linearSlop && angularError <= b2_angularSlop;
  }
}

export class B2RevoluteJointDef extends B2JointDef {
  public constructor() {
    super();
    this.localAnchorA = new B2Vec2(0.0, 0.0);
    this.localAnchorB = new B2Vec2(0.0, 0.0);
    this.referenceAngle = 0.0;
    this.lowerAngle = 0.0;
    this.upperAngle = 0.0;
    this.maxMotorTorque = 0.0;
    this.motorSpeed = 0.0;
    this.enableLimit = false;
    this.enableMotor = false;
    this.type = B2JointType.revoluteJoint;
  }

  public initialize(bodyA: B2Body, bodyB: B2Body, anchor: B2Vec2): void {
    this.bodyA = bodyA;
    this.bodyB = bodyB;
    this.localAnchorA = bodyA.getLocalPoint(anchor);
    this.localAnchorB = bodyB.getLocalPoint(anchor);
    this.referenceAngle = bodyB.angle - bodyA.angle;
  }
  public localAnchorA: B2Vec2;
  public localAnchorB: B2Vec2;
  public referenceAngle: number;
  public maxMotorTorque: number;
  public motorSpeed: number;
  public lowerAngle: number;
  public upperAngle: number;
  public enableLimit: boolean;
  public enableMotor: boolean;
}
export class B2RevoluteJoint extends B2Joint {
  public get anchorA(): B2Vec2 {
    return this.m_bodyA!.getWorldPoint(this.m_localAnchorA);
  }
  public get anchorB(): B2Vec2 {
    return this.m_bodyB!.getWorldPoint(this.m_localAnchorB);
  }
  public get localAnchorA(): B2Vec2 {
    return this.m_localAnchorA;
  }
  public get localAnchorB(): B2Vec2 {
    return this.m_localAnchorB;
  }
  public get referenceAngle(): number {
    return this.m_referenceAngle;
  }
  public get jointAngle(): number {
    let bA = this.m_bodyA;
    let bB = this.m_bodyB;
    return bB!.m_sweep.a - bA!.m_sweep.a - this.m_referenceAngle;
  }
  public get jointSpeed(): number {
    let bA = this.m_bodyA;
    let bB = this.m_bodyB;
    return bB!.m_angularVelocity - bA!.m_angularVelocity;
  }
  public get isLimitEnabled(): boolean {
    return this.m_enableLimit;
  }
  public set isLimitEnabled(newValue: boolean) {
    this.enableLimit(newValue);
  }
  public enableLimit(flag: boolean): void {
    if (flag != this.m_enableLimit) {
      this.m_bodyA!.setAwake(true);
      this.m_bodyB!.setAwake(true);
      this.m_enableLimit = flag;
      this.m_impulse.z = 0.0;
    }
  }
  public get lowerLimit(): number {
    return this.m_lowerAngle;
  }
  public get upperLimit(): number {
    return this.m_upperAngle;
  }
  public setLimits(lower: number, upper: number): void {
    if (lower != this.m_lowerAngle || upper != this.m_upperAngle) {
      this.m_bodyA!.setAwake(true);
      this.m_bodyB!.setAwake(true);
      this.m_impulse.z = 0.0;
      this.m_lowerAngle = lower;
      this.m_upperAngle = upper;
    }
  }
  public get isMotorEnabled(): boolean {
    return this.m_enableMotor;
  }
  public enableMotor(flag: boolean): void {
    this.m_bodyA!.setAwake(true);
    this.m_bodyB!.setAwake(true);
    this.m_enableMotor = flag;
  }
  public setMotorSpeed(speed: number): void {
    this.m_bodyA!.setAwake(true);
    this.m_bodyB!.setAwake(true);
    this.m_motorSpeed = speed;
  }
  public get motorSpeed(): number {
    return this.m_motorSpeed;
  }
  public set motorSpeed(newValue: number) {
    this.setMotorSpeed(newValue);
  }
  public setMaxMotorTorque(torque: number): void {
    this.m_bodyA!.setAwake(true);
    this.m_bodyB!.setAwake(true);
    this.m_maxMotorTorque = torque;
  }
  public get maxMotorTorque(): number {
    return this.m_maxMotorTorque;
  }
  public set maxMotorTorque(newValue: number) {
    this.setMaxMotorTorque(newValue);
  }
  public getReactionForce(inv_dt: number): B2Vec2 {
    let P = new B2Vec2(this.m_impulse.x, this.m_impulse.y);
    return multM(P, inv_dt);
  }
  public getReactionTorque(inv_dt: number): number {
    return inv_dt * this.m_impulse.z;
  }
  public getMotorTorque(inv_dt: number): number {
    return inv_dt * this.m_motorImpulse;
  }
  constructor(def: B2RevoluteJointDef) {
    super(def);
    this.m_localAnchorA = def.localAnchorA;
    this.m_localAnchorB = def.localAnchorB;
    this.m_referenceAngle = def.referenceAngle;
    this.m_impulse = new B2Vec3(0.0, 0.0, 0.0);
    this.m_motorImpulse = 0.0;
    this.m_lowerAngle = def.lowerAngle;
    this.m_upperAngle = def.upperAngle;
    this.m_maxMotorTorque = def.maxMotorTorque;
    this.m_motorSpeed = def.motorSpeed;
    this.m_enableLimit = def.enableLimit;
    this.m_enableMotor = def.enableMotor;
    this.m_limitState = B2LimitState.inactiveLimit;
  }
  initVelocityConstraints(data: B2SolverData): void {
    let initvelotwo: number = 2.0;
    this.m_indexA = this.m_bodyA!.m_islandIndex;
    this.m_indexB = this.m_bodyB!.m_islandIndex;
    this.m_localCenterA = this.m_bodyA!.m_sweep.localCenter;
    this.m_localCenterB = this.m_bodyB!.m_sweep.localCenter;
    this.m_invMassA = this.m_bodyA!.m_invMass;
    this.m_invMassB = this.m_bodyB!.m_invMass;
    this.m_invIA = this.m_bodyA!.m_invI;
    this.m_invIB = this.m_bodyB!.m_invI;
    let aA: number = data.positions.get(this.m_indexA).a;
    let vA: B2Vec2 = data.velocities.get(this.m_indexA).v;
    let wA: number = data.velocities.get(this.m_indexA).w;
    let aB: number = data.positions.get(this.m_indexB).a;
    let vB: B2Vec2 = data.velocities.get(this.m_indexB).v;
    let wB: number = data.velocities.get(this.m_indexB).w;
    let qA = new B2Rot(aA),
      qB = new B2Rot(aB);
    this.m_rA = b2MulR2(qA, subtract(this.m_localAnchorA, this.m_localCenterA));
    this.m_rB = b2MulR2(qB, subtract(this.m_localAnchorB, this.m_localCenterB));
    let mA = this.m_invMassA,
      mB = this.m_invMassB;
    let iA = this.m_invIA,
      iB = this.m_invIB;
    let fixedRotation = iA + iB == 0.0;
    this.m_mass.ex.x = mA + mB + this.m_rA.y * this.m_rA.y * iA + this.m_rB.y * this.m_rB.y * iB;
    this.m_mass.ey.x = -this.m_rA.y * this.m_rA.x * iA - this.m_rB.y * this.m_rB.x * iB;
    this.m_mass.ez.x = -this.m_rA.y * iA - this.m_rB.y * iB;
    this.m_mass.ex.y = this.m_mass.ey.x;
    this.m_mass.ey.y = mA + mB + this.m_rA.x * this.m_rA.x * iA + this.m_rB.x * this.m_rB.x * iB;
    this.m_mass.ez.y = this.m_rA.x * iA + this.m_rB.x * iB;
    this.m_mass.ex.z = this.m_mass.ez.x;
    this.m_mass.ey.z = this.m_mass.ez.y;
    this.m_mass.ez.z = iA + iB;
    this.m_motorMass = iA + iB;
    if (this.m_motorMass > 0.0) {
      this.m_motorMass = 1.0 / this.m_motorMass;
    }
    if (this.m_enableMotor == false || fixedRotation) {
      this.m_motorImpulse = 0.0;
    }
    if (this.m_enableLimit && fixedRotation == false) {
      let jointAngle = aB - aA - this.m_referenceAngle;
      if (Math.abs(this.m_upperAngle - this.m_lowerAngle) < initvelotwo * b2_angularSlop) {
        this.m_limitState = B2LimitState.equalLimits;
      } else if (jointAngle <= this.m_lowerAngle) {
        if (this.m_limitState != B2LimitState.atLowerLimit) {
          this.m_impulse.z = 0.0;
        }
        this.m_limitState = B2LimitState.atLowerLimit;
      } else if (jointAngle >= this.m_upperAngle) {
        if (this.m_limitState != B2LimitState.atUpperLimit) {
          this.m_impulse.z = 0.0;
        }
        this.m_limitState = B2LimitState.atUpperLimit;
      } else {
        this.m_limitState = B2LimitState.inactiveLimit;
        this.m_impulse.z = 0.0;
      }
    } else {
      this.m_limitState = B2LimitState.inactiveLimit;
    }
    if (data.step.warmStarting) {
      mulMEqual3(this.m_impulse, data.step.dtRatio);
      this.m_motorImpulse *= data.step.dtRatio;
      let P = new B2Vec2(this.m_impulse.x, this.m_impulse.y);
      subtractEqual(vA, multM(P, mA));
      wA -= iA * (b2Cross(this.m_rA, P) + this.m_motorImpulse + this.m_impulse.z);
      addEqual(vB, multM(P, mB));
      wB += iB * (b2Cross(this.m_rB, P) + this.m_motorImpulse + this.m_impulse.z);
    } else {
      this.m_impulse.setZero();
      this.m_motorImpulse = 0.0;
    }
    data.velocities.get(this.m_indexA).v = vA;
    data.velocities.get(this.m_indexA).w = wA;
    data.velocities.get(this.m_indexB).v = vB;
    data.velocities.get(this.m_indexB).w = wB;
  }
  solveVelocityConstraints(data: B2SolverData): void {
    let vA: B2Vec2 = data.velocities.get(this.m_indexA).v;
    let wA: number = data.velocities.get(this.m_indexA).w;
    let vB: B2Vec2 = data.velocities.get(this.m_indexB).v;
    let wB: number = data.velocities.get(this.m_indexB).w;
    let mA = this.m_invMassA,
      mB = this.m_invMassB;
    let iA = this.m_invIA,
      iB = this.m_invIB;
    let fixedRotation = iA + iB == 0.0;
    if (this.m_enableMotor && this.m_limitState != B2LimitState.equalLimits && fixedRotation == false) {
      let Cdot = wB - wA - this.m_motorSpeed;
      let impulse = -this.m_motorMass * Cdot;
      let oldImpulse = this.m_motorImpulse;
      let maxImpulse = data.step.dt * this.m_maxMotorTorque;
      this.m_motorImpulse = b2ClampF(this.m_motorImpulse + impulse, -maxImpulse, maxImpulse);
      impulse = this.m_motorImpulse - oldImpulse;
      wA -= iA * impulse;
      wB += iB * impulse;
    }
    if (this.m_enableLimit && this.m_limitState != B2LimitState.inactiveLimit && fixedRotation == false) {
      let Cdot1 = subtract(subtract(add(vB, b2Cross21(wB, this.m_rB)), vA), b2Cross21(wA, this.m_rA));
      let Cdot2 = wB - wA;
      let Cdot = new B2Vec3(Cdot1.x, Cdot1.y, Cdot2);
      let impulse = minus3(this.m_mass.solve33(Cdot));
      if (this.m_limitState == B2LimitState.equalLimits) {
        addEqual3(this.m_impulse, impulse);
      } else if (this.m_limitState == B2LimitState.atLowerLimit) {
        let newImpulse = this.m_impulse.z + impulse.z;
        if (newImpulse < 0.0) {
          let rhs = add(minus(Cdot1), multM(new B2Vec2(this.m_mass.ez.x, this.m_mass.ez.y), this.m_impulse.z));
          let reduced = this.m_mass.solve22(rhs);
          impulse.x = reduced.x;
          impulse.y = reduced.y;
          impulse.z = -this.m_impulse.z;
          this.m_impulse.x += reduced.x;
          this.m_impulse.y += reduced.y;
          this.m_impulse.z = 0.0;
        } else {
          addEqual3(this.m_impulse, impulse);
        }
      } else if (this.m_limitState == B2LimitState.atUpperLimit) {
        let newImpulse = this.m_impulse.z + impulse.z;
        if (newImpulse > 0.0) {
          let mass = new B2Vec2(this.m_mass.ez.x, this.m_mass.ez.y);
          let rhs = add(minus(Cdot1), multM(mass, this.m_impulse.z));
          let reduced = this.m_mass.solve22(rhs);
          impulse.x = reduced.x;
          impulse.y = reduced.y;
          impulse.z = -this.m_impulse.z;
          this.m_impulse.x += reduced.x;
          this.m_impulse.y += reduced.y;
          this.m_impulse.z = 0.0;
        } else {
          addEqual3(this.m_impulse, impulse);
        }
      }
      let P = new B2Vec2(impulse.x, impulse.y);
      subtractEqual(vA, multM(P, mA));
      wA -= iA * (b2Cross(this.m_rA, P) + impulse.z);
      addEqual(vB, multM(P, mB));
      wB += iB * (b2Cross(this.m_rB, P) + impulse.z);
    } else {
      let Cdot = subtract(subtract(add(vB, b2Cross21(wB, this.m_rB)), vA), b2Cross21(wA, this.m_rA));
      let impulse = this.m_mass.solve22(minus(Cdot));
      this.m_impulse.x += impulse.x;
      this.m_impulse.y += impulse.y;
      subtractEqual(vA, multM(impulse, mA));
      wA -= iA * b2Cross(this.m_rA, impulse);
      addEqual(vB, multM(impulse, mB));
      wB += iB * b2Cross(this.m_rB, impulse);
    }
    data.velocities.get(this.m_indexA).v = vA;
    data.velocities.get(this.m_indexA).w = wA;
    data.velocities.get(this.m_indexB).v = vB;
    data.velocities.get(this.m_indexB).w = wB;
  }
  solvePositionConstraints(data: B2SolverData): boolean {
    let cA: B2Vec2 = data.positions.get(this.m_indexA).c;
    let aA: number = data.positions.get(this.m_indexA).a;
    let cB: B2Vec2 = data.positions.get(this.m_indexB).c;
    let aB: number = data.positions.get(this.m_indexB).a;
    let qA = new B2Rot(aA),
      qB = new B2Rot(aB);
    let angularError: number = 0.0;
    let positionError: number = 0.0;
    let fixedRotation = this.m_invIA + this.m_invIB == 0.0;
    if (this.m_enableLimit && this.m_limitState != B2LimitState.inactiveLimit && fixedRotation == false) {
      let angle = aB - aA - this.m_referenceAngle;
      let limitImpulse: number = 0.0;
      if (this.m_limitState == B2LimitState.equalLimits) {
        let C = b2ClampF(angle - this.m_lowerAngle, -b2_maxAngularCorrection, b2_maxAngularCorrection);
        limitImpulse = -this.m_motorMass * C;
        angularError = Math.abs(C);
      } else if (this.m_limitState == B2LimitState.atLowerLimit) {
        let C = angle - this.m_lowerAngle;
        angularError = -C;
        C = b2ClampF(C + b2_angularSlop, -b2_maxAngularCorrection, 0.0);
        limitImpulse = -this.m_motorMass * C;
      } else if (this.m_limitState == B2LimitState.atUpperLimit) {
        let C = angle - this.m_upperAngle;
        angularError = C;
        C = b2ClampF(C - b2_angularSlop, 0.0, b2_maxAngularCorrection);
        limitImpulse = -this.m_motorMass * C;
      }
      aA -= this.m_invIA * limitImpulse;
      aB += this.m_invIB * limitImpulse;
    }
    qA.set(aA);
    qB.set(aB);
    let rA = b2MulR2(qA, subtract(this.m_localAnchorA, this.m_localCenterA));
    let rB = b2MulR2(qB, subtract(this.m_localAnchorB, this.m_localCenterB));
    let cC = subtract(subtract(add(cB, rB), cA), rA);
    positionError = cC.length();
    let mA = this.m_invMassA,
      mB = this.m_invMassB;
    let iA = this.m_invIA,
      iB = this.m_invIB;
    let K = new B2Mat22();
    K.ex.x = mA + mB + iA * rA.y * rA.y + iB * rB.y * rB.y;
    K.ex.y = -iA * rA.x * rA.y - iB * rB.x * rB.y;
    K.ey.x = K.ex.y;
    K.ey.y = mA + mB + iA * rA.x * rA.x + iB * rB.x * rB.x;
    let impulse = minus(K.solve(cC));
    subtractEqual(cA, multM(impulse, mA));
    aA -= iA * b2Cross(rA, impulse);
    addEqual(cB, multM(impulse, mB));
    aB += iB * b2Cross(rB, impulse);
    data.positions.get(this.m_indexA).c = cA;
    data.positions.get(this.m_indexA).a = aA;
    data.positions.get(this.m_indexB).c = cB;
    data.positions.get(this.m_indexB).a = aB;
    return positionError <= b2_linearSlop && angularError <= b2_angularSlop;
  }
  m_localAnchorA: B2Vec2;
  m_localAnchorB: B2Vec2;
  m_impulse: B2Vec3;
  m_motorImpulse: number;
  m_enableMotor: boolean;
  m_maxMotorTorque: number;
  m_motorSpeed: number;
  m_enableLimit: boolean;
  m_referenceAngle: number;
  m_lowerAngle: number;
  m_upperAngle: number;
  m_indexA: number = 0;
  m_indexB: number = 0;
  m_rA = new B2Vec2();
  m_rB = new B2Vec2();
  m_localCenterA = new B2Vec2();
  m_localCenterB = new B2Vec2();
  m_invMassA: number = 0.0;
  m_invMassB: number = 0.0;
  m_invIA: number = 0.0;
  m_invIB: number = 0.0;
  m_mass = new B2Mat33();
  m_motorMass: number = 0.0;
  m_limitState = B2LimitState.inactiveLimit;
}

let b2_minPulleyLength: number = 2.0;
export class B2PulleyJointDef extends B2JointDef {
  constructor() {
    super();
    this.groundAnchorA = new B2Vec2(-1.0, 1.0);
    this.groundAnchorB = new B2Vec2(1.0, 1.0);
    this.localAnchorA = new B2Vec2(-1.0, 0.0);
    this.localAnchorB = new B2Vec2(1.0, 0.0);
    this.lengthA = 0.0;
    this.lengthB = 0.0;
    this.ratio = 1.0;
    this.type = B2JointType.pulleyJoint;
    this.collideConnected = true;
  }
  public initialize(
    bodyA: B2Body,
    bodyB: B2Body,
    groundAnchorA: B2Vec2,
    groundAnchorB: B2Vec2,
    anchorA: B2Vec2,
    anchorB: B2Vec2,
    ratio: number
  ): void {
    this.bodyA = bodyA;
    this.bodyB = bodyB;
    this.groundAnchorA = groundAnchorA;
    this.groundAnchorB = groundAnchorB;
    this.localAnchorA = this.bodyA.getLocalPoint(anchorA);
    this.localAnchorB = this.bodyB.getLocalPoint(anchorB);
    let dA = subtract(anchorA, groundAnchorA);
    this.lengthA = dA.length();
    let dB = subtract(anchorB, groundAnchorB);
    this.lengthB = dB.length();
    this.ratio = ratio;
  }
  groundAnchorA: B2Vec2;
  groundAnchorB: B2Vec2;
  localAnchorA: B2Vec2;
  localAnchorB: B2Vec2;
  lengthA: number;
  lengthB: number;
  ratio: number;
}
export class B2PulleyJoint extends B2Joint {
  m_groundAnchorA: B2Vec2;
  m_groundAnchorB: B2Vec2;
  m_lengthA: number;
  m_lengthB: number;
  m_localAnchorA: B2Vec2;
  m_localAnchorB: B2Vec2;
  m_constant: number;
  m_ratio: number;
  m_impulse: number;
  m_indexA: number = 0;
  m_indexB: number = 0;
  m_uA = new B2Vec2();
  m_uB = new B2Vec2();
  m_rA = new B2Vec2();
  m_rB = new B2Vec2();
  m_localCenterA = new B2Vec2();
  m_localCenterB = new B2Vec2();
  m_invMassA: number = 0.0;
  m_invMassB: number = 0.0;
  m_invIA: number = 0.0;
  m_invIB: number = 0.0;
  m_mass: number = 0.0;
  public get anchorA(): B2Vec2 {
    return this.m_bodyA!.getWorldPoint(this.m_localAnchorA);
  }
  public get anchorB(): B2Vec2 {
    return this.m_bodyB!.getWorldPoint(this.m_localAnchorB);
  }
  public getReactionForce(inv_dt: number): B2Vec2 {
    let P = multM(this.m_uB, this.m_impulse);
    return multM(P, inv_dt);
  }
  public getReactionTorque(inv_dt: number): number {
    return 0.0;
  }
  public get groundAnchorA(): B2Vec2 {
    return this.m_groundAnchorA;
  }
  public get groundAnchorB(): B2Vec2 {
    return this.m_groundAnchorB;
  }
  public get lengthA(): number {
    return this.m_lengthA;
  }
  public get lengthB(): number {
    return this.m_lengthB;
  }
  public get ratio(): number {
    return this.m_ratio;
  }
  public get currentLengthA(): number {
    let p = this.m_bodyA!.getWorldPoint(this.m_localAnchorA);
    let s = this.m_groundAnchorA;
    let d = subtract(p, s);
    return d.length();
  }
  public get currentLengthB(): number {
    let p = this.m_bodyB!.getWorldPoint(this.m_localAnchorB);
    let s = this.m_groundAnchorB;
    let d = subtract(p, s);
    return d.length();
  }
  public shiftOrigin(newOrigin: B2Vec2): void {
    subtractEqual(this.m_groundAnchorA, newOrigin);
    subtractEqual(this.m_groundAnchorB, newOrigin);
  }
  constructor(def: B2PulleyJointDef) {
    super(def);
    this.m_groundAnchorA = def.groundAnchorA;
    this.m_groundAnchorB = def.groundAnchorB;
    this.m_localAnchorA = def.localAnchorA;
    this.m_localAnchorB = def.localAnchorB;
    this.m_lengthA = def.lengthA;
    this.m_lengthB = def.lengthB;
    this.m_ratio = def.ratio;
    this.m_constant = def.lengthA + this.m_ratio * def.lengthB;
    this.m_impulse = 0.0;
  }
  initVelocityConstraints(data: B2SolverData): void {
    let initten: number = 10.0;
    this.m_indexA = this.m_bodyA!.m_islandIndex;
    this.m_indexB = this.m_bodyB!.m_islandIndex;
    this.m_localCenterA = this.m_bodyA!.m_sweep.localCenter;
    this.m_localCenterB = this.m_bodyB!.m_sweep.localCenter;
    this.m_invMassA = this.m_bodyA!.m_invMass;
    this.m_invMassB = this.m_bodyB!.m_invMass;
    this.m_invIA = this.m_bodyA!.m_invI;
    this.m_invIB = this.m_bodyB!.m_invI;
    let cA: B2Vec2 = data.positions.get(this.m_indexA).c;
    let aA: number = data.positions.get(this.m_indexA).a;
    let vA: B2Vec2 = data.velocities.get(this.m_indexA).v;
    let wA: number = data.velocities.get(this.m_indexA).w;
    let cB: B2Vec2 = data.positions.get(this.m_indexB).c;
    let aB: number = data.positions.get(this.m_indexB).a;
    let vB: B2Vec2 = data.velocities.get(this.m_indexB).v;
    let wB: number = data.velocities.get(this.m_indexB).w;
    let qA = new B2Rot(aA),
      qB = new B2Rot(aB);
    this.m_rA = b2MulR2(qA, subtract(this.m_localAnchorA, this.m_localCenterA));
    this.m_rB = b2MulR2(qB, subtract(this.m_localAnchorB, this.m_localCenterB));
    this.m_uA = subtract(add(cA, this.m_rA), this.m_groundAnchorA);
    this.m_uB = subtract(add(cB, this.m_rB), this.m_groundAnchorB);
    let lengthA = this.m_uA.length();
    let lengthB = this.m_uB.length();
    if (lengthA > initten * b2_linearSlop) {
      mulEqual(this.m_uA, 1.0 / lengthA);
    } else {
      this.m_uA.setZero();
    }
    if (lengthB > initten * b2_linearSlop) {
      mulEqual(this.m_uB, 1.0 / lengthB);
    } else {
      this.m_uB.setZero();
    }
    let ruA = b2Cross(this.m_rA, this.m_uA);
    let ruB = b2Cross(this.m_rB, this.m_uB);
    let mA = this.m_invMassA + this.m_invIA * ruA * ruA;
    let mB = this.m_invMassB + this.m_invIB * ruB * ruB;
    this.m_mass = mA + this.m_ratio * this.m_ratio * mB;
    if (this.m_mass > 0.0) {
      this.m_mass = 1.0 / this.m_mass;
    }
    if (data.step.warmStarting) {
      this.m_impulse *= data.step.dtRatio;
      let PA = multM(this.m_uA, -this.m_impulse);
      let PB = multM(this.m_uB, -this.m_ratio * this.m_impulse);
      addEqual(vA, multM(PA, this.m_invMassA));
      wA += this.m_invIA * b2Cross(this.m_rA, PA);
      addEqual(vB, multM(PB, this.m_invMassB));
      wB += this.m_invIB * b2Cross(this.m_rB, PB);
    } else {
      this.m_impulse = 0.0;
    }
    data.velocities.get(this.m_indexA).v = vA;
    data.velocities.get(this.m_indexA).w = wA;
    data.velocities.get(this.m_indexB).v = vB;
    data.velocities.get(this.m_indexB).w = wB;
  }
  solveVelocityConstraints(data: B2SolverData): void {
    let vA: B2Vec2 = data.velocities.get(this.m_indexA).v;
    let wA: number = data.velocities.get(this.m_indexA).w;
    let vB: B2Vec2 = data.velocities.get(this.m_indexB).v;
    let wB: number = data.velocities.get(this.m_indexB).w;
    let vpA = add(vA, b2Cross21(wA, this.m_rA));
    let vpB = add(vB, b2Cross21(wB, this.m_rB));
    let Cdot = -b2Dot22(this.m_uA, vpA) - this.m_ratio * b2Dot22(this.m_uB, vpB);
    let impulse = -this.m_mass * Cdot;
    this.m_impulse += impulse;
    let PA = multM(this.m_uA, -impulse);
    let PB = multM(this.m_uB, -this.m_ratio * impulse);
    addEqual(vA, multM(PA, this.m_invMassA));
    wA += this.m_invIA * b2Cross(this.m_rA, PA);
    addEqual(vB, multM(PB, this.m_invMassB));
    wB += this.m_invIB * b2Cross(this.m_rB, PB);
    data.velocities.get(this.m_indexA).v = vA;
    data.velocities.get(this.m_indexA).w = wA;
    data.velocities.get(this.m_indexB).v = vB;
    data.velocities.get(this.m_indexB).w = wB;
  }
  solvePositionConstraints(data: B2SolverData): boolean {
    let solvten: number = 10.0;
    let cA: B2Vec2 = data.positions.get(this.m_indexA).c;
    let aA: number = data.positions.get(this.m_indexA).a;
    let cB: B2Vec2 = data.positions.get(this.m_indexB).c;
    let aB: number = data.positions.get(this.m_indexB).a;
    let qA = new B2Rot(aA),
      qB = new B2Rot(aB);
    let rA = b2MulR2(qA, subtract(this.m_localAnchorA, this.m_localCenterA));
    let rB = b2MulR2(qB, subtract(this.m_localAnchorB, this.m_localCenterB));
    let uA = subtract(add(cA, rA), this.m_groundAnchorA);
    let uB = subtract(add(cB, rB), this.m_groundAnchorB);
    let lengthA = uA.length();
    let lengthB = uB.length();
    if (lengthA > solvten * b2_linearSlop) {
      mulEqual(uA, 1.0 / lengthA);
    } else {
      uA.setZero();
    }
    if (lengthB > solvten * b2_linearSlop) {
      mulEqual(uB, 1.0 / lengthB);
    } else {
      uB.setZero();
    }
    let ruA = b2Cross(rA, uA);
    let ruB = b2Cross(rB, uB);
    let mA = this.m_invMassA + this.m_invIA * ruA * ruA;
    let mB = this.m_invMassB + this.m_invIB * ruB * ruB;
    let mass = mA + this.m_ratio * this.m_ratio * mB;
    if (mass > 0.0) {
      mass = 1.0 / mass;
    }
    let C = this.m_constant - lengthA - this.m_ratio * lengthB;
    let linearError = Math.abs(C);
    let impulse = -mass * C;
    let PA = multM(uA, impulse);
    let PB = multM(uB, -this.m_ratio * impulse);
    addEqual(cA, multM(PA, this.m_invMassA));
    aA += this.m_invIA * b2Cross(rA, PA);
    addEqual(cB, multM(PB, this.m_invMassB));
    aB += this.m_invIB * b2Cross(rB, PB);
    data.positions.get(this.m_indexA).c = cA;
    data.positions.get(this.m_indexA).a = aA;
    data.positions.get(this.m_indexB).c = cB;
    data.positions.get(this.m_indexB).a = aB;
    return linearError < b2_linearSlop;
  }
}

export class B2PrismaticJointDef extends B2JointDef {
  constructor() {
    super();
    this.localAnchorA = new B2Vec2();
    this.localAnchorB = new B2Vec2();
    this.localAxisA = new B2Vec2(1.0, 0.0);
    this.referenceAngle = 0.0;
    this.enableLimit = false;
    this.lowerTranslation = 0.0;
    this.upperTranslation = 0.0;
    this.enableMotor = false;
    this.maxMotorForce = 0.0;
    this.motorSpeed = 0.0;
    this.type = B2JointType.prismaticJoint;
  }
  public initialize(bA: B2Body, bB: B2Body, anchor: B2Vec2, axis: B2Vec2): void {
    this.bodyA = bA;
    this.bodyB = bB;
    this.localAnchorA = this.bodyA.getLocalPoint(anchor);
    this.localAnchorB = this.bodyB.getLocalPoint(anchor);
    this.localAxisA = this.bodyA.getLocalVector(axis);
    this.referenceAngle = this.bodyB.angle - this.bodyA.angle;
  }
  localAnchorA: B2Vec2;
  localAnchorB: B2Vec2;
  localAxisA: B2Vec2;
  referenceAngle: number;
  enableLimit: boolean;
  lowerTranslation: number;
  upperTranslation: number;
  enableMotor: boolean;
  maxMotorForce: number;
  motorSpeed: number;
}
export class B2PrismaticJoint extends B2Joint {
  public get anchorA(): B2Vec2 {
    return this.m_bodyA!.getWorldPoint(this.m_localAnchorA);
  }
  public get anchorB(): B2Vec2 {
    return this.m_bodyB!.getWorldPoint(this.m_localAnchorB);
  }
  public getReactionForce(inv_dt: number): B2Vec2 {
    return multM(
      add(multM(this.m_perp, this.m_impulse.x), multM(this.m_axis, this.m_motorImpulse + this.m_impulse.z)),
      inv_dt
    );
  }
  public getReactionTorque(inv_dt: number): number {
    return inv_dt * this.m_impulse.y;
  }
  public get localAnchorA(): B2Vec2 {
    return this.m_localAnchorA;
  }
  public get localAnchorB(): B2Vec2 {
    return this.m_localAnchorB;
  }
  public get localAxisA(): B2Vec2 {
    return this.m_localXAxisA;
  }
  public get referenceAngle(): number {
    return this.m_referenceAngle;
  }
  public jointTranslation(): number {
    let pA = this.m_bodyA!.getWorldPoint(this.m_localAnchorA);
    let pB = this.m_bodyB!.getWorldPoint(this.m_localAnchorB);
    let d = subtract(pB, pA);
    let axis = this.m_bodyA!.getWorldVector(this.m_localXAxisA);
    let translation = b2Dot22(d, axis);
    return translation;
  }
  public jointSpeed(): number {
    let bA = this.m_bodyA;
    let bB = this.m_bodyB;
    let rA = b2MulR2(bA!.m_xf.q, subtract(this.m_localAnchorA, bA!.m_sweep.localCenter));
    let rB = b2MulR2(bB!.m_xf.q, subtract(this.m_localAnchorB, bB!.m_sweep.localCenter));
    let p1 = add(bA!.m_sweep.c, rA);
    let p2 = add(bB!.m_sweep.c, rB);
    let d = subtract(p2, p1);
    let axis = b2MulR2(bA!.m_xf.q, this.m_localXAxisA);
    let vA = bA!.m_linearVelocity;
    let vB = bB!.m_linearVelocity;
    let wA = bA!.m_angularVelocity;
    let wB = bB!.m_angularVelocity;
    let speed =
      b2Dot22(d, b2Cross21(wA, axis)) +
      b2Dot22(axis, subtract(subtract(add(vB, b2Cross21(wB, rB)), vA), b2Cross21(wA, rA)));
    return speed;
  }
  get isLimitEnabled() {
    return this.m_enableLimit;
  }
  setisLimitEnabled(newValue: boolean): void {
    this.enableLimit(newValue);
  }
  public enableLimit(flag: boolean): void {
    if (flag != this.m_enableLimit) {
      this.m_bodyA!.setAwake(true);
      this.m_bodyB!.setAwake(true);
      this.m_enableLimit = flag;
      this.m_impulse.z = 0.0;
    }
  }
  public get lowerLimit(): number {
    return this.m_lowerTranslation;
  }
  public get upperLimit(): number {
    return this.m_upperTranslation;
  }
  public setLimits(lower: number, upper: number): void {
    if (lower != this.m_lowerTranslation || upper != this.m_upperTranslation) {
      this.m_bodyA!.setAwake(true);
      this.m_bodyB!.setAwake(true);
      this.m_lowerTranslation = lower;
      this.m_upperTranslation = upper;
      this.m_impulse.z = 0.0;
    }
  }
  get isMotorEnabled(): boolean {
    return this.m_enableMotor;
  }
  setisMotorEnabled(newValue: boolean): void {
    this.enableMotor(newValue);
  }
  public enableMotor(flag: boolean): void {
    this.m_bodyA!.setAwake(true);
    this.m_bodyB!.setAwake(true);
    this.m_enableMotor = flag;
  }
  setMotorSpeed(speed: number): void {
    this.m_bodyA!.setAwake(true);
    this.m_bodyB!.setAwake(true);
    this.m_motorSpeed = speed;
  }
  get motorSpeed(): number {
    return this.m_motorSpeed;
  }
  set motorSpeed(newValue: number) {
    this.setMotorSpeed(newValue);
  }
  setMaxMotorForce(force: number): void {
    this.m_bodyA!.setAwake(true);
    this.m_bodyB!.setAwake(true);
    this.m_maxMotorForce = force;
  }
  get maxMotorForce(): number {
    return this.m_maxMotorForce;
  }
  set maxMotorForce(newValue: number) {
    this.setMaxMotorForce(newValue);
  }
  getMotorForce(inv_dt: number): number {
    return inv_dt * this.m_motorImpulse;
  }
  constructor(def: B2PrismaticJointDef) {
    super(def);
    this.m_localAnchorA = def.localAnchorA;
    this.m_localAnchorB = def.localAnchorB;
    this.m_localXAxisA = def.localAxisA;
    this.m_localXAxisA.normalize();
    this.m_localYAxisA = b2Cross21(1.0, this.m_localXAxisA);
    this.m_referenceAngle = def.referenceAngle;
    this.m_impulse = new B2Vec3(0.0, 0.0, 0.0);
    this.m_motorMass = 0.0;
    this.m_motorImpulse = 0.0;
    this.m_lowerTranslation = def.lowerTranslation;
    this.m_upperTranslation = def.upperTranslation;
    this.m_maxMotorForce = def.maxMotorForce;
    this.m_motorSpeed = def.motorSpeed;
    this.m_enableLimit = def.enableLimit;
    this.m_enableMotor = def.enableMotor;
    this.m_limitState = B2LimitState.inactiveLimit;
    this.m_axis = new B2Vec2(0.0, 0.0);
    this.m_perp = new B2Vec2(0.0, 0.0);
  }
  initVelocityConstraints(data: B2SolverData): void {
    let initvctwo: number = 2.0;
    this.m_indexA = this.m_bodyA!.m_islandIndex;
    this.m_indexB = this.m_bodyB!.m_islandIndex;
    this.m_localCenterA = this.m_bodyA!.m_sweep.localCenter;
    this.m_localCenterB = this.m_bodyB!.m_sweep.localCenter;
    this.m_invMassA = this.m_bodyA!.m_invMass;
    this.m_invMassB = this.m_bodyB!.m_invMass;
    this.m_invIA = this.m_bodyA!.m_invI;
    this.m_invIB = this.m_bodyB!.m_invI;
    let cA: B2Vec2 = data.positions.get(this.m_indexA).c;
    let aA: number = data.positions.get(this.m_indexA).a;
    let vA: B2Vec2 = data.velocities.get(this.m_indexA).v;
    let wA: number = data.velocities.get(this.m_indexA).w;
    let cB: B2Vec2 = data.positions.get(this.m_indexB).c;
    let aB: number = data.positions.get(this.m_indexB).a;
    let vB: B2Vec2 = data.velocities.get(this.m_indexB).v;
    let wB: number = data.velocities.get(this.m_indexB).w;
    let qA = new B2Rot(aA),
      qB = new B2Rot(aB);
    let rA = b2MulR2(qA, subtract(this.m_localAnchorA, this.m_localCenterA));
    let rB = b2MulR2(qB, subtract(this.m_localAnchorB, this.m_localCenterB));
    let d = subtract(add(subtract(cB, cA), rB), rA);
    let mA = this.m_invMassA,
      mB = this.m_invMassB;
    let iA = this.m_invIA,
      iB = this.m_invIB;
    this.m_axis = b2MulR2(qA, this.m_localXAxisA);
    this.m_a1 = b2Cross(add(d, rA), this.m_axis);
    this.m_a2 = b2Cross(rB, this.m_axis);
    this.m_motorMass = mA + mB + iA * this.m_a1 * this.m_a1 + iB * this.m_a2 * this.m_a2;
    if (this.m_motorMass > 0.0) {
      this.m_motorMass = 1.0 / this.m_motorMass;
    }
    this.m_perp = b2MulR2(qA, this.m_localYAxisA);
    this.m_s1 = b2Cross(add(d, rA), this.m_perp);
    this.m_s2 = b2Cross(rB, this.m_perp);
    let k11 = mA + mB + iA * this.m_s1 * this.m_s1 + iB * this.m_s2 * this.m_s2;
    let k12 = iA * this.m_s1 + iB * this.m_s2;
    let k13 = iA * this.m_s1 * this.m_a1 + iB * this.m_s2 * this.m_a2;
    let k22 = iA + iB;
    if (k22 == 0.0) {
      k22 = 1.0;
    }
    let k23 = iA * this.m_a1 + iB * this.m_a2;
    let k33 = mA + mB + iA * this.m_a1 * this.m_a1 + iB * this.m_a2 * this.m_a2;
    this.m_K.ex.set(k11, k12, k13);
    this.m_K.ey.set(k12, k22, k23);
    this.m_K.ez.set(k13, k23, k33);
    if (this.m_enableLimit) {
      let jointTranslation = b2Dot22(this.m_axis, d);
      if (Math.abs(this.m_upperTranslation - this.m_lowerTranslation) < initvctwo * b2_linearSlop) {
        this.m_limitState = B2LimitState.equalLimits;
      } else if (jointTranslation <= this.m_lowerTranslation) {
        if (this.m_limitState != B2LimitState.atLowerLimit) {
          this.m_limitState = B2LimitState.atLowerLimit;
          this.m_impulse.z = 0.0;
        }
      } else if (jointTranslation >= this.m_upperTranslation) {
        if (this.m_limitState != B2LimitState.atUpperLimit) {
          this.m_limitState = B2LimitState.atUpperLimit;
          this.m_impulse.z = 0.0;
        }
      } else {
        this.m_limitState = B2LimitState.inactiveLimit;
        this.m_impulse.z = 0.0;
      }
    } else {
      this.m_limitState = B2LimitState.inactiveLimit;
      this.m_impulse.z = 0.0;
    }
    if (this.m_enableMotor == false) {
      this.m_motorImpulse = 0.0;
    }
    if (data.step.warmStarting) {
      mulMEqual3(this.m_impulse, data.step.dtRatio);
      this.m_motorImpulse *= data.step.dtRatio;
      let P = add(multM(this.m_perp, this.m_impulse.x), multM(this.m_axis, this.m_motorImpulse + this.m_impulse.z));
      let LA = this.m_impulse.x * this.m_s1 + this.m_impulse.y + (this.m_motorImpulse + this.m_impulse.z) * this.m_a1;
      let LB = this.m_impulse.x * this.m_s2 + this.m_impulse.y + (this.m_motorImpulse + this.m_impulse.z) * this.m_a2;
      subtractEqual(vA, multM(P, mA));
      wA -= iA * LA;
      addEqual(vB, multM(P, mB));
      wB += iB * LB;
    } else {
      this.m_impulse.setZero();
      this.m_motorImpulse = 0.0;
    }
    data.velocities.get(this.m_indexA).v = vA;
    data.velocities.get(this.m_indexA).w = wA;
    data.velocities.get(this.m_indexB).v = vB;
    data.velocities.get(this.m_indexB).w = wB;
  }
  solveVelocityConstraints(data: B2SolverData): void {
    let vA: B2Vec2 = data.velocities.get(this.m_indexA).v;
    let wA: number = data.velocities.get(this.m_indexA).w;
    let vB: B2Vec2 = data.velocities.get(this.m_indexB).v;
    let wB: number = data.velocities.get(this.m_indexB).w;
    let mA = this.m_invMassA,
      mB = this.m_invMassB;
    let iA = this.m_invIA,
      iB = this.m_invIB;
    if (this.m_enableMotor && this.m_limitState != B2LimitState.equalLimits) {
      let Cdot = b2Dot22(this.m_axis, subtract(vB, vA)) + this.m_a2 * wB - this.m_a1 * wA;
      let impulse = this.m_motorMass * (this.m_motorSpeed - Cdot);
      let oldImpulse = this.m_motorImpulse;
      let maxImpulse = data.step.dt * this.m_maxMotorForce;
      this.m_motorImpulse = b2ClampF(this.m_motorImpulse + impulse, -maxImpulse, maxImpulse);
      impulse = this.m_motorImpulse - oldImpulse;
      let P = multM(this.m_axis, impulse);
      let LA = impulse * this.m_a1;
      let LB = impulse * this.m_a2;
      subtractEqual(vA, multM(P, mA));
      wA -= iA * LA;
      addEqual(vB, multM(P, mB));
      wB += iB * LB;
    }
    let Cdot1 = new B2Vec2();
    Cdot1.x = b2Dot22(this.m_perp, subtract(vB, vA)) + this.m_s2 * wB - this.m_s1 * wA;
    Cdot1.y = wB - wA;
    if (this.m_enableLimit && this.m_limitState != B2LimitState.inactiveLimit) {
      let Cdot2 = b2Dot22(this.m_axis, subtract(vB, vA)) + this.m_a2 * wB - this.m_a1 * wA;
      let Cdot = new B2Vec3(Cdot1.x, Cdot1.y, Cdot2);
      let f1 = this.m_impulse;
      let df = this.m_K.solve33(minus3(Cdot));
      addEqual3(this.m_impulse, df);
      if (this.m_limitState == B2LimitState.atLowerLimit) {
        this.m_impulse.z = Math.max(this.m_impulse.z, 0.0);
      } else if (this.m_limitState == B2LimitState.atUpperLimit) {
        this.m_impulse.z = Math.min(this.m_impulse.z, 0.0);
      }
      let mkk = new B2Vec2(this.m_K.ez.x, this.m_K.ez.y);
      let b = subtract(minus(Cdot1), multM(mkk, this.m_impulse.z - f1.z));
      let ffx = new B2Vec2(f1.x, f1.y);
      let f2r = add(this.m_K.solve22(b), ffx);
      this.m_impulse.x = f2r.x;
      this.m_impulse.y = f2r.y;
      df = subtract3(this.m_impulse, f1);
      let P = add(multM(this.m_perp, df.x), multM(this.m_axis, df.z));
      let LA = df.x * this.m_s1 + df.y + df.z * this.m_a1;
      let LB = df.x * this.m_s2 + df.y + df.z * this.m_a2;
      subtractEqual(vA, multM(P, mA));
      wA -= iA * LA;
      addEqual(vB, multM(P, mB));
      wB += iB * LB;
    } else {
      let df = this.m_K.solve22(minus(Cdot1));
      this.m_impulse.x += df.x;
      this.m_impulse.y += df.y;
      let P = multM(this.m_perp, df.x);
      let LA = df.x * this.m_s1 + df.y;
      let LB = df.x * this.m_s2 + df.y;
      subtractEqual(vA, multM(P, mA));
      wA -= iA * LA;
      addEqual(vB, multM(P, mB));
      wB += iB * LB;
    }
    data.velocities.get(this.m_indexA).v = vA;
    data.velocities.get(this.m_indexA).w = wA;
    data.velocities.get(this.m_indexB).v = vB;
    data.velocities.get(this.m_indexB).w = wB;
  }
  solvePositionConstraints(data: B2SolverData): boolean {
    let solptwo: number = 2.0;
    let cA: B2Vec2 = data.positions.get(this.m_indexA).c;
    let aA: number = data.positions.get(this.m_indexA).a;
    let cB: B2Vec2 = data.positions.get(this.m_indexB).c;
    let aB: number = data.positions.get(this.m_indexB).a;
    let qA = new B2Rot(aA),
      qB = new B2Rot(aB);
    let mA = this.m_invMassA,
      mB = this.m_invMassB;
    let iA = this.m_invIA,
      iB = this.m_invIB;
    let rA = b2MulR2(qA, subtract(this.m_localAnchorA, this.m_localCenterA));
    let rB = b2MulR2(qB, subtract(this.m_localAnchorB, this.m_localCenterB));
    let d = subtract(subtract(add(cB, rB), cA), rA);
    let axis = b2MulR2(qA, this.m_localXAxisA);
    let a1 = b2Cross(add(d, rA), axis);
    let a2 = b2Cross(rB, axis);
    let perp = b2MulR2(qA, this.m_localYAxisA);
    let s1 = b2Cross(add(d, rA), perp);
    let s2 = b2Cross(rB, perp);
    let impulse = new B2Vec3();
    let C1 = new B2Vec2();
    C1.x = b2Dot22(perp, d);
    C1.y = aB - aA - this.m_referenceAngle;
    let linearError = Math.abs(C1.x);
    let angularError = Math.abs(C1.y);
    let active = false;
    let C2: number = 0.0;
    if (this.m_enableLimit) {
      let translation = b2Dot22(axis, d);
      if (Math.abs(this.m_upperTranslation - this.m_lowerTranslation) < solptwo * b2_linearSlop) {
        C2 = b2ClampF(translation, -b2_maxLinearCorrection, b2_maxLinearCorrection);
        linearError = Math.max(linearError, Math.abs(translation));
        active = true;
      } else if (translation <= this.m_lowerTranslation) {
        C2 = b2ClampF(translation - this.m_lowerTranslation + b2_linearSlop, -b2_maxLinearCorrection, 0.0);
        linearError = Math.max(linearError, this.m_lowerTranslation - translation);
        active = true;
      } else if (translation >= this.m_upperTranslation) {
        C2 = b2ClampF(translation - this.m_upperTranslation - b2_linearSlop, 0.0, b2_maxLinearCorrection);
        linearError = Math.max(linearError, translation - this.m_upperTranslation);
        active = true;
      }
    }
    if (active) {
      let k11 = mA + mB + iA * s1 * s1 + iB * s2 * s2;
      let k12 = iA * s1 + iB * s2;
      let k13 = iA * s1 * a1 + iB * s2 * a2;
      let k22 = iA + iB;
      if (k22 == 0.0) {
        k22 = 1.0;
      }
      let k23 = iA * a1 + iB * a2;
      let k33 = mA + mB + iA * a1 * a1 + iB * a2 * a2;
      let K = new B2Mat33();
      K.ex.set(k11, k12, k13);
      K.ey.set(k12, k22, k23);
      K.ez.set(k13, k23, k33);
      let C = new B2Vec3();
      C.x = C1.x;
      C.y = C1.y;
      C.z = C2;
      impulse = K.solve33(minus3(C));
    } else {
      let k11 = mA + mB + iA * s1 * s1 + iB * s2 * s2;
      let k12 = iA * s1 + iB * s2;
      let k22 = iA + iB;
      if (k22 == 0.0) {
        k22 = 1.0;
      }
      let K = new B2Mat22();
      K.ex.set(k11, k12);
      K.ey.set(k12, k22);
      let impulse1 = K.solve(minus(C1));
      impulse.x = impulse1.x;
      impulse.y = impulse1.y;
      impulse.z = 0.0;
    }
    let P = add(multM(perp, impulse.x), multM(axis, impulse.z));
    let LA = impulse.x * s1 + impulse.y + impulse.z * a1;
    let LB = impulse.x * s2 + impulse.y + impulse.z * a2;
    subtractEqual(cA, multM(P, mA));
    aA -= iA * LA;
    addEqual(cB, multM(P, mB));
    aB += iB * LB;
    data.positions.get(this.m_indexA).c = cA;
    data.positions.get(this.m_indexA).a = aA;
    data.positions.get(this.m_indexB).c = cB;
    data.positions.get(this.m_indexB).a = aB;
    return linearError <= b2_linearSlop && angularError <= b2_angularSlop;
  }
  m_localAnchorA: B2Vec2;
  m_localAnchorB: B2Vec2;
  m_localXAxisA: B2Vec2;
  m_localYAxisA: B2Vec2;
  m_referenceAngle: number;
  m_impulse: B2Vec3;
  m_motorImpulse: number;
  m_lowerTranslation: number;
  m_upperTranslation: number;
  m_maxMotorForce: number;
  m_motorSpeed: number;
  m_enableLimit: boolean;
  m_enableMotor: boolean;
  m_limitState: B2LimitState;
  m_indexA: number = 0;
  m_indexB: number = 0;
  m_localCenterA = new B2Vec2();
  m_localCenterB = new B2Vec2();
  m_invMassA: number = 0.0;
  m_invMassB: number = 0.0;
  m_invIA: number = 0.0;
  m_invIB: number = 0.0;
  m_axis = new B2Vec2();
  m_perp = new B2Vec2();
  m_s1: number = 0.0;
  m_s2: number = 0.0;
  m_a1: number = 0.0;
  m_a2: number = 0.0;
  m_K = new B2Mat33();
  m_motorMass: number = 0.0;
}

export class B2MouseJointDef extends B2JointDef {
  public constructor() {
    super();
    this.target = new B2Vec2();
    this.maxForce = 0.0;
    this.frequencyHz = 5.0;
    this.dampingRatio = 0.7;
    this.type = B2JointType.mouseJoint;
  }
  public target: B2Vec2;
  public maxForce: number;
  public frequencyHz: number;
  public dampingRatio: number;
}
export class B2MouseJoint extends B2Joint {
  public get anchorA(): B2Vec2 {
    return this.m_targetA;
  }
  public get anchorB(): B2Vec2 {
    return this.m_bodyB!.getWorldPoint(this.m_localAnchorB);
  }
  public getReactionForce(inv_dt: number): B2Vec2 {
    return multM(this.m_impulse, inv_dt);
  }
  public getReactionTorque(inv_dt: number): number {
    return inv_dt * 0.0;
  }
  public setTarget(target: B2Vec2): void {
    if (this.m_bodyB!.isAwake == false) {
      this.m_bodyB!.setAwake(true);
    }
    this.m_targetA = target;
  }
  get target(): B2Vec2 {
    return this.m_targetA;
  }
  set target(newValue: B2Vec2) {
    this.setTarget(newValue);
  }
  public setMaxForce(force: number): void {
    this.m_maxForce = force;
  }
  get force(): number {
    return this.m_maxForce;
  }
  set force(newValue: number) {
    this.setMaxForce(newValue);
  }
  public setFrequency(hz: number): void {
    this.m_frequencyHz = hz;
  }
  get hz(): number {
    return this.m_frequencyHz;
  }
  set hz(newValue: number) {
    this.setFrequency(newValue);
  }
  public setDampingRatio(ratio: number): void {
    this.m_dampingRatio = ratio;
  }
  get ratio(): number {
    return this.m_dampingRatio;
  }
  set ratio(newValue: number) {
    this.setDampingRatio(newValue);
  }
  public shiftOrigin(newOrigin: B2Vec2): void {
    subtractEqual(this.m_targetA, newOrigin);
  }
  constructor(def: B2MouseJointDef) {
    super(def);
    this.m_targetA = def.target;
    this.m_maxForce = def.maxForce;
    this.m_impulse = new B2Vec2(0.0, 0.0);
    this.m_frequencyHz = def.frequencyHz;
    this.m_dampingRatio = def.dampingRatio;
    this.m_beta = 0.0;
    this.m_gamma = 0.0;
    this.m_localAnchorB = b2MulTT2(this.m_bodyB!.transform, this.m_targetA);
  }
  initVelocityConstraints(data: B2SolverData): void {
    let initvcstwo: number = 2.0;
    let initvcsninee: number = 0.98;
    this.m_indexB = this.m_bodyB!.m_islandIndex;
    this.m_localCenterB = this.m_bodyB!.m_sweep.localCenter;
    this.m_invMassB = this.m_bodyB!.m_invMass;
    this.m_invIB = this.m_bodyB!.m_invI;
    let cB: B2Vec2 = data.positions.get(this.m_indexB).c;
    let aB: number = data.positions.get(this.m_indexB).a;
    let vB: B2Vec2 = data.velocities.get(this.m_indexB).v;
    let wB: number = data.velocities.get(this.m_indexB).w;
    let qB = new B2Rot(aB);
    let mass = this.m_bodyB!.mass;
    let omega = initvcstwo * b2_pi * this.m_frequencyHz;
    let d = initvcstwo * mass * this.m_dampingRatio * omega;
    let k = mass * (omega * omega);
    let h = data.step.dt;
    this.m_gamma = h * (d + h * k);
    if (this.m_gamma !== 0.0) {
      this.m_gamma = 1.0 / this.m_gamma;
    }
    this.m_beta = h * k * this.m_gamma;
    this.m_rB = b2MulR2(qB, subtract(this.m_localAnchorB, this.m_localCenterB));
    let K = new B2Mat22();
    K.ex.x = this.m_invMassB + this.m_invIB * this.m_rB.y * this.m_rB.y + this.m_gamma;
    K.ex.y = -this.m_invIB * this.m_rB.x * this.m_rB.y;
    K.ey.x = K.ex.y;
    K.ey.y = this.m_invMassB + this.m_invIB * this.m_rB.x * this.m_rB.x + this.m_gamma;
    this.m_mass = K.getInverse();
    this.m_C = subtract(add(cB, this.m_rB), this.m_targetA);
    mulEqual(this.m_C, this.m_beta);
    wB *= initvcsninee;
    if (data.step.warmStarting) {
      mulEqual(this.m_impulse, data.step.dtRatio);
      addEqual(vB, multM(this.m_impulse, this.m_invMassB));
      wB += this.m_invIB * b2Cross(this.m_rB, this.m_impulse);
    } else {
      this.m_impulse.setZero();
    }
    data.velocities.get(this.m_indexB).v = vB;
    data.velocities.get(this.m_indexB).w = wB;
  }
  solveVelocityConstraints(data: B2SolverData): void {
    let vB: B2Vec2 = data.velocities.get(this.m_indexB).v;
    let wB: number = data.velocities.get(this.m_indexB).w;
    let Cdot = add(vB, b2Cross21(wB, this.m_rB));
    let impulse = b2Mul22(this.m_mass, minus(add(add(Cdot, this.m_C), multM(this.m_impulse, this.m_gamma))));
    let oldImpulse = this.m_impulse;
    addEqual(this.m_impulse, impulse);
    let maxImpulse = data.step.dt * this.m_maxForce;
    if (this.m_impulse.lengthSquared() > maxImpulse * maxImpulse) {
      mulEqual(this.m_impulse, maxImpulse / this.m_impulse.length());
    }
    impulse = subtract(this.m_impulse, oldImpulse);
    addEqual(vB, multM(impulse, this.m_invMassB));
    wB += this.m_invIB * b2Cross(this.m_rB, impulse);
    data.velocities.get(this.m_indexB).v = vB;
    data.velocities.get(this.m_indexB).w = wB;
  }
  solvePositionConstraints(data: B2SolverData): boolean {
    return true;
  }
  m_localAnchorB: B2Vec2;
  m_targetA: B2Vec2;
  m_frequencyHz: number;
  m_dampingRatio: number;
  m_beta: number;
  m_impulse: B2Vec2;
  m_maxForce: number;
  m_gamma: number;
  m_indexA: number = 0;
  m_indexB: number = 0;
  m_rB = new B2Vec2();
  m_localCenterB = new B2Vec2();
  m_invMassB: number = 0.0;
  m_invIB: number = 0.0;
  m_mass = new B2Mat22();
  m_C = new B2Vec2();
}

export class B2GearJointDef extends B2JointDef {
  public constructor() {
    super();
    this.joint1 = null;
    this.joint2 = null;
    this.ratio = 1.0;
    this.type = B2JointType.gearJoint;
  }
  joint1: B2Joint | null = null;
  joint2: B2Joint | null = null;
  ratio: number = 1.0;
}
export class B2GearJoint extends B2Joint {
  public get anchorA(): B2Vec2 {
    return this.m_bodyA!.getWorldPoint(this.m_localAnchorA);
  }
  public get anchorB(): B2Vec2 {
    return this.m_bodyB!.getWorldPoint(this.m_localAnchorB);
  }
  public getReactionForce(inv_dt: number): B2Vec2 {
    let P = multM(this.m_JvAC, this.m_impulse);
    return multM(P, inv_dt);
  }
  public getReactionTorque(inv_dt: number): number {
    let L = this.m_impulse * this.m_JwA;
    return inv_dt * L;
  }
  public get joint1(): B2Joint | null {
    return this.m_joint1;
  }
  public get joint2(): B2Joint | null {
    return this.m_joint2;
  }
  public setRatio(ratio: number) {
    this.m_ratio = ratio;
  }
  public get ratio(): number {
    return this.m_ratio;
  }
  public set ratio(newValue: number) {
    this.setRatio(newValue);
  }
  constructor(def: B2GearJointDef) {
    super(def);
    this.m_joint1 = def.joint1;
    this.m_joint2 = def.joint2;
    this.m_typeA = this.m_joint1!.type_Joint;
    this.m_typeB = this.m_joint2!.type_Joint;
    let coordinateA: number, coordinateB: number;
    this.m_bodyC = this.m_joint1!.bodyA!;
    this.m_bodyA = this.m_joint1!.bodyB!;
    let xfA = this.m_bodyA!.m_xf;
    let aA = this.m_bodyA!.m_sweep.a;
    let xfC = this.m_bodyC.m_xf;
    let aC = this.m_bodyC.m_sweep.a;
    if (this.m_typeA == B2JointType.revoluteJoint) {
      let revolute = def.joint1 as B2RevoluteJoint;
      this.m_localAnchorC = revolute.m_localAnchorA;
      this.m_localAnchorA = revolute.m_localAnchorB;
      this.m_referenceAngleA = revolute.m_referenceAngle;
      this.m_localAxisC.setZero();
      coordinateA = aA - aC - this.m_referenceAngleA;
    } else {
      let prismatic = def.joint1 as B2PrismaticJoint;
      this.m_localAnchorC = prismatic.m_localAnchorA;
      this.m_localAnchorA = prismatic.m_localAnchorB;
      this.m_referenceAngleA = prismatic.m_referenceAngle;
      this.m_localAxisC = prismatic.m_localXAxisA;
      let pC = this.m_localAnchorC;
      let pA = b2MulTR2(xfC.q, add(b2MulR2(xfA.q, this.m_localAnchorA), subtract(xfA.p, xfC.p)));
      coordinateA = b2Dot22(subtract(pA, pC), this.m_localAxisC);
    }
    this.m_bodyD = this.m_joint2!.bodyA!;
    this.m_bodyB = this.m_joint2!.bodyB;
    let xfB = this.m_bodyB!.m_xf;
    let aB = this.m_bodyB!.m_sweep.a;
    let xfD = this.m_bodyD.m_xf;
    let aD = this.m_bodyD.m_sweep.a;
    if (this.m_typeB == B2JointType.revoluteJoint) {
      let revolute = def.joint2 as B2RevoluteJoint;
      this.m_localAnchorD = revolute.m_localAnchorA;
      this.m_localAnchorB = revolute.m_localAnchorB;
      this.m_referenceAngleB = revolute.m_referenceAngle;
      this.m_localAxisD.setZero();
      coordinateB = aB - aD - this.m_referenceAngleB;
    } else {
      let prismatic = def.joint2 as B2PrismaticJoint;
      this.m_localAnchorD = prismatic.m_localAnchorA;
      this.m_localAnchorB = prismatic.m_localAnchorB;
      this.m_referenceAngleB = prismatic.m_referenceAngle;
      this.m_localAxisD = prismatic.m_localXAxisA;
      let pD = this.m_localAnchorD;
      let pB = b2MulTR2(xfD.q, add(b2MulR2(xfB.q, this.m_localAnchorB), subtract(xfB.p, xfD.p)));
      coordinateB = b2Dot22(subtract(pB, pD), this.m_localAxisD);
    }
    this.m_ratio = def.ratio;
    this.m_constant = coordinateA + this.m_ratio * coordinateB;
    this.m_impulse = 0.0;
  }
  initVelocityConstraints(data: B2SolverData): void {
    this.m_indexA = this.m_bodyA!.m_islandIndex;
    this.m_indexB = this.m_bodyB!.m_islandIndex;
    this.m_indexC = this.m_bodyC.m_islandIndex;
    this.m_indexD = this.m_bodyD.m_islandIndex;
    this.m_lcA = this.m_bodyA!.m_sweep.localCenter;
    this.m_lcB = this.m_bodyB!.m_sweep.localCenter;
    this.m_lcC = this.m_bodyC.m_sweep.localCenter;
    this.m_lcD = this.m_bodyD.m_sweep.localCenter;
    this.m_mA = this.m_bodyA!.m_invMass;
    this.m_mB = this.m_bodyB!.m_invMass;
    this.m_mC = this.m_bodyC.m_invMass;
    this.m_mD = this.m_bodyD.m_invMass;
    this.m_iA = this.m_bodyA!.m_invI;
    this.m_iB = this.m_bodyB!.m_invI;
    this.m_iC = this.m_bodyC.m_invI;
    this.m_iD = this.m_bodyD.m_invI;
    let aA: number = data.positions.get(this.m_indexA).a;
    let vA: B2Vec2 = data.velocities.get(this.m_indexA).v;
    let wA: number = data.velocities.get(this.m_indexA).w;
    let aB: number = data.positions.get(this.m_indexB).a;
    let vB: B2Vec2 = data.velocities.get(this.m_indexB).v;
    let wB: number = data.velocities.get(this.m_indexB).w;
    let aC: number = data.positions.get(this.m_indexC).a;
    let vC: B2Vec2 = data.velocities.get(this.m_indexC).v;
    let wC: number = data.velocities.get(this.m_indexC).w;
    let aD: number = data.positions.get(this.m_indexD).a;
    let vD: B2Vec2 = data.velocities.get(this.m_indexD).v;
    let wD: number = data.velocities.get(this.m_indexD).w;
    let qA = new B2Rot(aA),
      qB = new B2Rot(aB),
      qC = new B2Rot(aC),
      qD = new B2Rot(aD);
    this.m_mass = 0.0;
    if (this.m_typeA == B2JointType.revoluteJoint) {
      this.m_JvAC.setZero();
      this.m_JwA = 1.0;
      this.m_JwC = 1.0;
      this.m_mass += this.m_iA + this.m_iC;
    } else {
      let u = b2MulR2(qC, this.m_localAxisC);
      let rC = b2MulR2(qC, subtract(this.m_localAnchorC, this.m_lcC));
      let rA = b2MulR2(qA, subtract(this.m_localAnchorA, this.m_lcA));
      this.m_JvAC = u;
      this.m_JwC = b2Cross(rC, u);
      this.m_JwA = b2Cross(rA, u);
      this.m_mass += this.m_mC + this.m_mA + this.m_iC * this.m_JwC * this.m_JwC + this.m_iA * this.m_JwA * this.m_JwA;
    }
    if (this.m_typeB == B2JointType.revoluteJoint) {
      this.m_JvBD.setZero();
      this.m_JwB = this.m_ratio;
      this.m_JwD = this.m_ratio;
      this.m_mass += this.m_ratio * this.m_ratio * (this.m_iB + this.m_iD);
    } else {
      let u = b2MulR2(qD, this.m_localAxisD);
      let rD = b2MulR2(qD, subtract(this.m_localAnchorD, this.m_lcD));
      let rB = b2MulR2(qB, subtract(this.m_localAnchorB, this.m_lcB));
      this.m_JvBD = multM(u, this.m_ratio);
      this.m_JwD = this.m_ratio * b2Cross(rD, u);
      this.m_JwB = this.m_ratio * b2Cross(rB, u);
      let mass1 = this.m_ratio * this.m_ratio * (this.m_mD + this.m_mB);
      let mass2 = this.m_iD * this.m_JwD * this.m_JwD + this.m_iB * this.m_JwB * this.m_JwB;
      let mass = mass1 + mass2;
      this.m_mass += mass;
    }
    this.m_mass = this.m_mass > 0.0 ? 1.0 / this.m_mass : 0.0;
    if (data.step.warmStarting) {
      addEqual(vA, multM(this.m_JvAC, this.m_mA * this.m_impulse));
      wA += this.m_iA * this.m_impulse * this.m_JwA;
      addEqual(vB, multM(this.m_JvBD, this.m_mB * this.m_impulse));
      wB += this.m_iB * this.m_impulse * this.m_JwB;
      subtractEqual(vC, multM(this.m_JvAC, this.m_mC * this.m_impulse));
      wC -= this.m_iC * this.m_impulse * this.m_JwC;
      subtractEqual(vD, multM(this.m_JvBD, this.m_mD * this.m_impulse));
      wD -= this.m_iD * this.m_impulse * this.m_JwD;
    } else {
      this.m_impulse = 0.0;
    }
    data.velocities.get(this.m_indexA).v = vA;
    data.velocities.get(this.m_indexA).w = wA;
    data.velocities.get(this.m_indexB).v = vB;
    data.velocities.get(this.m_indexB).w = wB;
    data.velocities.get(this.m_indexC).v = vC;
    data.velocities.get(this.m_indexC).w = wC;
    data.velocities.get(this.m_indexD).v = vD;
    data.velocities.get(this.m_indexD).w = wD;
  }
  solveVelocityConstraints(data: B2SolverData): void {
    let vA: B2Vec2 = data.velocities.get(this.m_indexA).v;
    let wA: number = data.velocities.get(this.m_indexA).w;
    let vB: B2Vec2 = data.velocities.get(this.m_indexB).v;
    let wB: number = data.velocities.get(this.m_indexB).w;
    let vC: B2Vec2 = data.velocities.get(this.m_indexC).v;
    let wC: number = data.velocities.get(this.m_indexC).w;
    let vD: B2Vec2 = data.velocities.get(this.m_indexD).v;
    let wD: number = data.velocities.get(this.m_indexD).w;
    let Cdot = b2Dot22(this.m_JvAC, subtract(vA, vC)) + b2Dot22(this.m_JvBD, subtract(vB, vD));
    Cdot += this.m_JwA * wA - this.m_JwC * wC + (this.m_JwB * wB - this.m_JwD * wD);
    let impulse = -this.m_mass * Cdot;
    this.m_impulse += impulse;
    addEqual(vA, multM(this.m_JvAC, this.m_mA * impulse));
    wA += this.m_iA * impulse * this.m_JwA;
    addEqual(vB, multM(this.m_JvBD, this.m_mB * impulse));
    wB += this.m_iB * impulse * this.m_JwB;
    subtractEqual(vC, multM(this.m_JvAC, this.m_mC * impulse));
    wC -= this.m_iC * impulse * this.m_JwC;
    subtractEqual(vD, multM(this.m_JvBD, this.m_mD * impulse));
    wD -= this.m_iD * impulse * this.m_JwD;
    data.velocities.get(this.m_indexA).v = vA;
    data.velocities.get(this.m_indexA).w = wA;
    data.velocities.get(this.m_indexB).v = vB;
    data.velocities.get(this.m_indexB).w = wB;
    data.velocities.get(this.m_indexC).v = vC;
    data.velocities.get(this.m_indexC).w = wC;
    data.velocities.get(this.m_indexD).v = vD;
    data.velocities.get(this.m_indexD).w = wD;
  }
  solvePositionConstraints(data: B2SolverData): boolean {
    let cA: B2Vec2 = data.positions.get(this.m_indexA).c;
    let aA: number = data.positions.get(this.m_indexA).a;
    let cB: B2Vec2 = data.positions.get(this.m_indexB).c;
    let aB: number = data.positions.get(this.m_indexB).a;
    let cC: B2Vec2 = data.positions.get(this.m_indexC).c;
    let aC: number = data.positions.get(this.m_indexC).a;
    let cD: B2Vec2 = data.positions.get(this.m_indexD).c;
    let aD: number = data.positions.get(this.m_indexD).a;
    let qA = new B2Rot(aA),
      qB = new B2Rot(aB),
      qC = new B2Rot(aC),
      qD = new B2Rot(aD);
    let linearError: number = 0.0;
    let coordinateA: number = 0,
      coordinateB: number = 0;
    let JvAC = new B2Vec2(),
      JvBD = new B2Vec2();
    let JwA: number = 0,
      JwB: number = 0,
      JwC: number = 0,
      JwD: number = 0;
    let mass: number = 0.0;
    if (this.m_typeA == B2JointType.revoluteJoint) {
      JvAC.setZero();
      JwA = 1.0;
      JwC = 1.0;
      mass += this.m_iA + this.m_iC;
      coordinateA = aA - aC - this.m_referenceAngleA;
    } else {
      let u = b2MulR2(qC, this.m_localAxisC);
      let rC = b2MulR2(qC, subtract(this.m_localAnchorC, this.m_lcC));
      let rA = b2MulR2(qA, subtract(this.m_localAnchorA, this.m_lcA));
      JvAC = u;
      JwC = b2Cross(rC, u);
      JwA = b2Cross(rA, u);
      mass += this.m_mC + this.m_mA + this.m_iC * JwC * JwC + this.m_iA * JwA * JwA;
      let pC = subtract(this.m_localAnchorC, this.m_lcC);
      let pA = b2MulTR2(qC, add(rA, subtract(cA, cC)));
      coordinateA = b2Dot22(subtract(pA, pC), this.m_localAxisC);
    }
    if (this.m_typeB == B2JointType.revoluteJoint) {
      JvBD.setZero();
      JwB = this.m_ratio;
      JwD = this.m_ratio;
      mass += this.m_ratio * this.m_ratio * (this.m_iB + this.m_iD);
      coordinateB = aB - aD - this.m_referenceAngleB;
    } else {
      let u = b2MulR2(qD, this.m_localAxisD);
      let rD = b2MulR2(qD, subtract(this.m_localAnchorD, this.m_lcD));
      let rB = b2MulR2(qB, subtract(this.m_localAnchorB, this.m_lcB));
      JvBD = multM(u, this.m_ratio);
      JwD = this.m_ratio * b2Cross(rD, u);
      JwB = this.m_ratio * b2Cross(rB, u);
      mass += this.m_ratio * this.m_ratio * (this.m_mD + this.m_mB) + this.m_iD * JwD * JwD + this.m_iB * JwB * JwB;
      let pD = subtract(this.m_localAnchorD, this.m_lcD);
      let pB = b2MulTR2(qD, add(rB, subtract(cB, cD)));
      coordinateB = b2Dot22(subtract(pB, pD), this.m_localAxisD);
    }
    let C = coordinateA + this.m_ratio * coordinateB - this.m_constant;
    let impulse: number = 0.0;
    if (mass > 0.0) {
      impulse = -C / mass;
    }
    addEqual(cA, multM(JvAC, this.m_mA * impulse));
    aA += this.m_iA * impulse * JwA;
    addEqual(cB, multM(JvBD, this.m_mB * impulse));
    aB += this.m_iB * impulse * JwB;
    subtractEqual(cC, multM(JvAC, this.m_mC * impulse));
    aC -= this.m_iC * impulse * JwC;
    subtractEqual(cD, multM(JvBD, this.m_mD * impulse));
    aD -= this.m_iD * impulse * JwD;
    data.positions.get(this.m_indexA).c = cA;
    data.positions.get(this.m_indexA).a = aA;
    data.positions.get(this.m_indexB).c = cB;
    data.positions.get(this.m_indexB).a = aB;
    data.positions.get(this.m_indexC).c = cC;
    data.positions.get(this.m_indexC).a = aC;
    data.positions.get(this.m_indexD).c = cD;
    data.positions.get(this.m_indexD).a = aD;
    return linearError < b2_linearSlop;
  }
  m_joint1: B2Joint | null;
  m_joint2: B2Joint | null;
  m_typeA: B2JointType;
  m_typeB: B2JointType;
  m_bodyC: B2Body;
  m_bodyD: B2Body;
  m_localAnchorA = new B2Vec2();
  m_localAnchorB = new B2Vec2();
  m_localAnchorC = new B2Vec2();
  m_localAnchorD = new B2Vec2();
  m_localAxisC = new B2Vec2();
  m_localAxisD = new B2Vec2();
  m_referenceAngleA: number = 0.0;
  m_referenceAngleB: number = 0.0;
  m_constant: number = 0.0;
  m_ratio: number = 0.0;
  m_impulse: number = 0.0;
  m_indexA: number = 0;
  m_indexB: number = 0;
  m_indexC: number = 0;
  m_indexD: number = 0;
  m_lcA = new B2Vec2();
  m_lcB = new B2Vec2();
  m_lcC = new B2Vec2();
  m_lcD = new B2Vec2();
  m_mA: number = 0.0;
  m_mB: number = 0.0;
  m_mC: number = 0.0;
  m_mD: number = 0.0;
  m_iA: number = 0.0;
  m_iB: number = 0.0;
  m_iC: number = 0.0;
  m_iD: number = 0.0;
  m_JvAC = new B2Vec2();
  m_JvBD = new B2Vec2();
  m_JwA: number = 0.0;
  m_JwB: number = 0.0;
  m_JwC: number = 0.0;
  m_JwD: number = 0.0;
  m_mass: number = 0.0;
}

export class B2FrictionJointDef extends B2JointDef {
  constructor() {
    super();
    this.localAnchorA = new B2Vec2();
    this.localAnchorB = new B2Vec2();
    this.maxForce = 0.0;
    this.maxTorque = 0.0;
    this.type = B2JointType.frictionJoint;
  }

  public initialize(bA: B2Body, bB: B2Body, anchor: B2Vec2): void {
    this.bodyA = bA;
    this.bodyB = bB;
    this.localAnchorA = this.bodyA.getLocalPoint(anchor);
    this.localAnchorB = this.bodyB.getLocalPoint(anchor);
  }

  public localAnchorA: B2Vec2;
  public localAnchorB: B2Vec2;
  public maxForce: number;
  public maxTorque: number;
}
export class B2FrictionJoint extends B2Joint {
  m_localAnchorA: B2Vec2;
  m_localAnchorB: B2Vec2;
  m_linearImpulse: B2Vec2;
  m_angularImpulse: number;
  m_maxForce: number;
  m_maxTorque: number;
  m_indexA: number = 0;
  m_indexB: number = 0;
  m_rA = new B2Vec2();
  m_rB = new B2Vec2();
  m_localCenterA = new B2Vec2();
  m_localCenterB = new B2Vec2();
  m_invMassA: number = 0.0;
  m_invMassB: number = 0.0;
  m_invIA: number = 0.0;
  m_invIB: number = 0.0;
  m_linearMass = new B2Mat22();
  m_angularMass: number = 0.0;

  public get anchorA(): B2Vec2 {
    return this.m_bodyA!.getWorldPoint(this.m_localAnchorA);
  }

  public get anchorB(): B2Vec2 {
    return this.m_bodyB!.getWorldPoint(this.m_localAnchorB);
  }

  public getReactionForce(inv_dt: number): B2Vec2 {
    return multM(this.m_linearImpulse, inv_dt);
  }

  public getReactionTorque(inv_dt: number): number {
    return inv_dt * this.m_angularImpulse;
  }

  public get localAnchorA(): B2Vec2 {
    return this.m_localAnchorA;
  }

  public get localAnchorB(): B2Vec2 {
    return this.m_localAnchorB;
  }

  public setMaxForce(force: number): void {
    this.m_maxForce = force;
  }

  public get maxForce(): number {
    return this.m_maxForce;
  }

  public setMaxTorque(torque: number): void {
    this.m_maxTorque = torque;
  }

  public get maxTorque(): number {
    return this.m_maxTorque;
  }

  constructor(def: B2FrictionJointDef) {
    super(def);
    this.m_localAnchorA = def.localAnchorA;
    this.m_localAnchorB = def.localAnchorB;
    this.m_linearImpulse = new B2Vec2(0.0, 0.0);
    this.m_angularImpulse = 0.0;
    this.m_maxForce = def.maxForce;
    this.m_maxTorque = def.maxTorque;
  }

  initVelocityConstraints(data: B2SolverData): void {
    this.m_indexA = this.m_bodyA!.m_islandIndex;
    this.m_indexB = this.m_bodyB!.m_islandIndex;
    this.m_localCenterA = this.m_bodyA!.m_sweep.localCenter;
    this.m_localCenterB = this.m_bodyB!.m_sweep.localCenter;
    this.m_invMassA = this.m_bodyA!.m_invMass;
    this.m_invMassB = this.m_bodyB!.m_invMass;
    this.m_invIA = this.m_bodyA!.m_invI;
    this.m_invIB = this.m_bodyB!.m_invI;
    let aA: number = data.positions.get(this.m_indexA).a;
    let vA: B2Vec2 = data.velocities.get(this.m_indexA).v;
    let wA: number = data.velocities.get(this.m_indexA).w;
    let aB: number = data.positions.get(this.m_indexB).a;
    let vB: B2Vec2 = data.velocities.get(this.m_indexB).v;
    let wB: number = data.velocities.get(this.m_indexB).w;
    let qA = new B2Rot(aA),
      qB = new B2Rot(aB);
    this.m_rA = b2MulR2(qA, subtract(this.m_localAnchorA, this.m_localCenterA));
    this.m_rB = b2MulR2(qB, subtract(this.m_localAnchorB, this.m_localCenterB));
    let mA = this.m_invMassA,
      mB = this.m_invMassB;
    let iA = this.m_invIA,
      iB = this.m_invIB;
    let K = new B2Mat22();
    K.ex.x = mA + mB + iA * this.m_rA.y * this.m_rA.y + iB * this.m_rB.y * this.m_rB.y;
    K.ex.y = -iA * this.m_rA.x * this.m_rA.y - iB * this.m_rB.x * this.m_rB.y;
    K.ey.x = K.ex.y;
    K.ey.y = mA + mB + iA * this.m_rA.x * this.m_rA.x + iB * this.m_rB.x * this.m_rB.x;
    this.m_linearMass = K.getInverse();
    this.m_angularMass = iA + iB;
    if (this.m_angularMass > 0.0) {
      this.m_angularMass = 1.0 / this.m_angularMass;
    }
    if (data.step.warmStarting) {
      mulEqual(this.m_linearImpulse, data.step.dtRatio);
      this.m_angularImpulse *= data.step.dtRatio;
      let P = new B2Vec2(this.m_linearImpulse.x, this.m_linearImpulse.y);
      subtractEqual(vA, multM(P, mA));
      wA -= iA * (b2Cross(this.m_rA, P) + this.m_angularImpulse);
      addEqual(vB, multM(P, mB));
      wB += iB * (b2Cross(this.m_rB, P) + this.m_angularImpulse);
    } else {
      this.m_linearImpulse.setZero();
      this.m_angularImpulse = 0.0;
    }
    data.velocities.get(this.m_indexA).v = vA;
    data.velocities.get(this.m_indexA).w = wA;
    data.velocities.get(this.m_indexB).v = vB;
    data.velocities.get(this.m_indexB).w = wB;
  }

  solveVelocityConstraints(data: B2SolverData): void {
    let vA: B2Vec2 = data.velocities.get(this.m_indexA).v;
    let wA: number = data.velocities.get(this.m_indexA).w;
    let vB: B2Vec2 = data.velocities.get(this.m_indexB).v;
    let wB: number = data.velocities.get(this.m_indexB).w;
    let mA = this.m_invMassA,
      mB = this.m_invMassB;
    let iA = this.m_invIA,
      iB = this.m_invIB;
    let h = data.step.dt;
    let Cdot = wB - wA;
    let impulse = -this.m_angularMass * Cdot;
    let oldImpulse = this.m_angularImpulse;
    let maxImpulse = h * this.m_maxTorque;
    this.m_angularImpulse = b2ClampF(this.m_angularImpulse + impulse, -maxImpulse, maxImpulse);
    impulse = this.m_angularImpulse - oldImpulse;
    wA -= iA * impulse;
    wB += iB * impulse;
    let loc_Cdot = subtract(subtract(add(vB, b2Cross21(wB, this.m_rB)), vA), b2Cross21(wA, this.m_rA));
    let loc_impulse = minus(b2Mul22(this.m_linearMass, loc_Cdot));
    let loc_oldImpulse = this.m_linearImpulse;
    addEqual(this.m_linearImpulse, loc_impulse);
    let loc_maxImpulse = h * this.m_maxForce;
    if (this.m_linearImpulse.lengthSquared() > loc_maxImpulse * loc_maxImpulse) {
      this.m_linearImpulse.normalize();
      mulEqual(this.m_linearImpulse, loc_maxImpulse);
    }
    loc_impulse = subtract(this.m_linearImpulse, loc_oldImpulse);
    subtractEqual(vA, multM(loc_impulse, mA));
    wA -= iA * b2Cross(this.m_rA, loc_impulse);
    addEqual(vB, multM(loc_impulse, mB));
    wB += iB * b2Cross(this.m_rB, loc_impulse);
    data.velocities.get(this.m_indexA).v = vA;
    data.velocities.get(this.m_indexA).w = wA;
    data.velocities.get(this.m_indexB).v = vB;
    data.velocities.get(this.m_indexB).w = wB;
  }

  solvePositionConstraints(data: B2SolverData): boolean {
    return true;
  }
}

export class B2DistanceJointDef extends B2JointDef {
  constructor(bodyA?: B2Body, bodyB?: B2Body, anchorA?: B2Vec2, anchorB?: B2Vec2) {
    super();
    if (bodyA != null && bodyB != null && anchorA != null && anchorB != null) {
      this.initialize(bodyA, bodyB, anchorA, anchorB);
    } else {
      this.localAnchorA = new B2Vec2(0.0, 0.0);
      this.localAnchorB = new B2Vec2(0.0, 0.0);
      this.length = 1.0;
      this.frequencyHz = 0.0;
      this.dampingRatio = 0.0;
      this.type = B2JointType.distanceJoint;
    }
  }
  initialize(bA: B2Body, bB: B2Body, anchorA: B2Vec2, anchorB: B2Vec2): void {
    this.bodyA = bA;
    this.bodyB = bB;
    this.localAnchorA = this.bodyA.getLocalPoint(anchorA);
    this.localAnchorB = this.bodyB.getLocalPoint(anchorB);
    let d = subtract(anchorB, anchorA);
    this.length = d.length();
  }
  public localAnchorA: B2Vec2 = new B2Vec2();
  public localAnchorB: B2Vec2 = new B2Vec2();
  public length: number = 1.0;
  public frequencyHz: number = 0.0;
  public dampingRatio: number = 0.0;
}
export class B2DistanceJoint extends B2Joint {
  m_frequencyHz: number;
  m_dampingRatio: number;
  m_bias: number;
  m_localAnchorA: B2Vec2;
  m_localAnchorB: B2Vec2;
  m_gamma: number;
  m_impulse: number;
  m_length: number;
  m_indexA: number = 0;
  m_indexB: number = 0;
  m_u = new B2Vec2();
  m_rA = new B2Vec2();
  m_rB = new B2Vec2();
  m_localCenterA = new B2Vec2();
  m_localCenterB = new B2Vec2();
  m_invMassA: number = 0.0;
  m_invMassB: number = 0.0;
  m_invIA: number = 0.0;
  m_invIB: number = 0.0;
  m_mass: number = 0.0;
  public get anchorA(): B2Vec2 {
    return this.m_bodyA!.getWorldPoint(this.m_localAnchorA);
  }
  public get anchorB(): B2Vec2 {
    return this.m_bodyB!.getWorldPoint(this.m_localAnchorB);
  }
  public getReactionForce(inv_dt: number): B2Vec2 {
    let F = multM(this.m_u, inv_dt * this.m_impulse);
    return F;
  }
  public getReactionTorque(inv_dt: number): number {
    return 0.0;
  }
  public get localAnchorA(): B2Vec2 {
    return this.m_localAnchorA;
  }
  public get localAnchorB(): B2Vec2 {
    return this.m_localAnchorB;
  }
  setLength(length: number): void {
    this.m_length = length;
  }
  public get length(): number {
    return this.m_length;
  }
  setFrequency(hz: number): void {
    this.m_frequencyHz = hz;
  }
  public get frequency(): number {
    return this.m_frequencyHz;
  }
  setDampingRatio(ratio: number): void {
    this.m_dampingRatio = ratio;
  }
  public get dampingRatio(): number {
    return this.m_dampingRatio;
  }
  constructor(def: B2DistanceJointDef) {
    super(def);
    this.m_localAnchorA = def.localAnchorA;
    this.m_localAnchorB = def.localAnchorB;
    this.m_length = def.length;
    this.m_frequencyHz = def.frequencyHz;
    this.m_dampingRatio = def.dampingRatio;
    this.m_impulse = 0.0;
    this.m_gamma = 0.0;
    this.m_bias = 0.0;
  }
  public initVelocityConstraints(data: B2SolverData): void{
    let initvcsttwo: number = 2.0;
    this.m_indexA = this.m_bodyA!.m_islandIndex;
    this.m_indexB = this.m_bodyB!.m_islandIndex;
    this.m_localCenterA = this.m_bodyA!.m_sweep.localCenter;
    this.m_localCenterB = this.m_bodyB!.m_sweep.localCenter;
    this.m_invMassA = this.m_bodyA!.m_invMass;
    this.m_invMassB = this.m_bodyB!.m_invMass;
    this.m_invIA = this.m_bodyA!.m_invI;
    this.m_invIB = this.m_bodyB!.m_invI;
    let cA: B2Vec2 = data.positions.get(this.m_indexA).c;
    let aA: number = data.positions.get(this.m_indexA).a;
    let vA: B2Vec2 = data.velocities.get(this.m_indexA).v;
    let wA: number = data.velocities.get(this.m_indexA).w;
    let cB: B2Vec2 = data.positions.get(this.m_indexB).c;
    let aB: number = data.positions.get(this.m_indexB).a;
    let vB: B2Vec2 = data.velocities.get(this.m_indexB).v;
    let wB: number = data.velocities.get(this.m_indexB).w;
    let qA = new B2Rot(aA),
      qB = new B2Rot(aB);
    this.m_rA = b2MulR2(qA, subtract(this.m_localAnchorA, this.m_localCenterA));
    this.m_rB = b2MulR2(qB, subtract(this.m_localAnchorB, this.m_localCenterB));
    this.m_u = subtract(subtract(add(cB, this.m_rB), cA), this.m_rA);
    let length = this.m_u.length();
    if (length > b2_linearSlop) {
      mulEqual(this.m_u, 1.0 / length);
    } else {
      this.m_u.set(0.0, 0.0);
    }
    let crAu = b2Cross(this.m_rA, this.m_u);
    let crBu = b2Cross(this.m_rB, this.m_u);
    let invMass = this.m_invMassA + this.m_invIA * crAu * crAu + this.m_invMassB + this.m_invIB * crBu * crBu;
    this.m_mass = invMass != 0.0 ? 1.0 / invMass : 0.0;
    if (this.m_frequencyHz > 0.0) {
      let C = length - this.m_length;
      let omega = initvcsttwo * b2_pi * this.m_frequencyHz;
      let d = initvcsttwo * this.m_mass * this.m_dampingRatio * omega;
      let k = this.m_mass * omega * omega;
      let h = data.step.dt;
      this.m_gamma = h * (d + h * k);
      this.m_gamma = this.m_gamma != 0.0 ? 1.0 / this.m_gamma : 0.0;
      this.m_bias = C * h * k * this.m_gamma;
      invMass += this.m_gamma;
      this.m_mass = invMass != 0.0 ? 1.0 / invMass : 0.0;
    } else {
      this.m_gamma = 0.0;
      this.m_bias = 0.0;
    }
    if (data.step.warmStarting) {
      this.m_impulse *= data.step.dtRatio;
      let P = multM(this.m_u, this.m_impulse);
      subtractEqual(vA, multM(P, this.m_invMassA));
      wA -= this.m_invIA * b2Cross(this.m_rA, P);
      addEqual(vB, multM(P, this.m_invMassB));
      wB += this.m_invIB * b2Cross(this.m_rB, P);
    } else {
      this.m_impulse = 0.0;
    }
    data.velocities.get(this.m_indexA).v = vA;
    data.velocities.get(this.m_indexA).w = wA;
    data.velocities.get(this.m_indexB).v = vB;
    data.velocities.get(this.m_indexB).w = wB;
  }
  public solveVelocityConstraints(data: B2SolverData): void {
    let vA: B2Vec2 = data.velocities.get(this.m_indexA).v;
    let wA: number = data.velocities.get(this.m_indexA).w;
    let vB: B2Vec2 = data.velocities.get(this.m_indexB).v;
    let wB: number = data.velocities.get(this.m_indexB).w;
    let vpA = add(vA, b2Cross21(wA, this.m_rA));
    let vpB = add(vB, b2Cross21(wB, this.m_rB));
    let Cdot = b2Dot22(this.m_u, subtract(vpB, vpA));
    let impulse = -this.m_mass * (Cdot + this.m_bias + this.m_gamma * this.m_impulse);
    this.m_impulse += impulse;
    let P = multM(this.m_u, impulse);
    subtractEqual(vA, multM(P, this.m_invMassA));
    wA -= this.m_invIA * b2Cross(this.m_rA, P);
    addEqual(vB, multM(P, this.m_invMassB));
    wB += this.m_invIB * b2Cross(this.m_rB, P);
    data.velocities.get(this.m_indexA).v = vA;
    data.velocities.get(this.m_indexA).w = wA;
    data.velocities.get(this.m_indexB).v = vB;
    data.velocities.get(this.m_indexB).w = wB;
  }
  public solvePositionConstraints(data: B2SolverData): boolean {
    if (this.m_frequencyHz > 0.0) {
      return true;
    }
    let cA: B2Vec2 = data.positions.get(this.m_indexA).c;
    let aA: number = data.positions.get(this.m_indexA).a;
    let cB: B2Vec2 = data.positions.get(this.m_indexB).c;
    let aB: number = data.positions.get(this.m_indexB).a;
    let qA = new B2Rot(aA),
      qB = new B2Rot(aB);
    let rA = b2MulR2(qA, subtract(this.m_localAnchorA, this.m_localCenterA));
    let rB = b2MulR2(qB, subtract(this.m_localAnchorB, this.m_localCenterB));
    let u = subtract(subtract(add(cB, rB), cA), rA);
    let length = u.normalize();
    let C = length - this.m_length;
    C = b2ClampF(C, -b2_maxLinearCorrection, b2_maxLinearCorrection);
    let impulse = -this.m_mass * C;
    let P = multM(u, impulse);
    subtractEqual(cA, multM(P, this.m_invMassA));
    aA -= this.m_invIA * b2Cross(rA, P);
    addEqual(cB, multM(P, this.m_invMassB));
    aB += this.m_invIB * b2Cross(rB, P);
    data.positions.get(this.m_indexA).c = cA;
    data.positions.get(this.m_indexA).a = aA;
    data.positions.get(this.m_indexB).c = cB;
    data.positions.get(this.m_indexB).a = aB;
    return Math.abs(C) < b2_linearSlop;
  }
}
export { B2JointType, B2LimitState };
