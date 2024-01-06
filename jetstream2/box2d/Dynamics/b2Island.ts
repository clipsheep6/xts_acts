import { B2Vec2, b2Dot22, multM, add, addEqual, mulEqual } from '../Common/b2Math';
import { B2Contact } from './Contacts/b2Contact';
import { B2ContactSolver, B2ContactSolverDef, B2ContactVelocityConstraint } from './Contacts/b2ContactSolver';
import { B2Joint } from './Joints/b2Joint';
import { B2Body, B2BodyType, Flags } from './b2Body';
import { B2Array, B2Position, B2Profile, B2SolverData, B2TimeStep, B2Velocity } from './b2TimeStep';
import { B2ContactImpulse, B2ContactListener } from './b2WorldCallbacks';
import {
  b2_angularSleepTolerance,
  b2_linearSleepTolerance,
  b2_maxFloat,
  b2_maxRotation,
  b2_maxRotationSquared,
  b2_maxTranslation,
  b2_maxTranslationSquared,
  b2_timeToSleep
} from '../Common/b2Settings';

export class B2Island {
  m_listener: B2ContactListener;
  m_bodies: Array<B2Body>;
  m_contacts: Array<B2Contact>;
  m_joints: Array<B2Joint>;
  m_positions: B2Array<B2Position>;
  m_velocities: B2Array<B2Velocity>;
  get m_bodyCount(): number {
    return this.m_bodies.length;
  }
  get m_jointCount(): number {
    return this.m_joints.length;
  }
  get m_contactCount(): number {
    return this.m_contacts.length;
  }
  m_bodyCapacity: number;
  m_contactCapacity: number;
  m_jointCapacity: number;
  constructor(bodyCapacity: number, contactCapacity: number, jointCapacity: number, listener: B2ContactListener) {
    this.m_bodyCapacity = bodyCapacity;
    this.m_contactCapacity = contactCapacity;
    this.m_jointCapacity = jointCapacity;
    this.m_listener = listener;
    this.m_bodies = Array<B2Body>();
    this.m_contacts = Array<B2Contact>();
    this.m_joints = Array<B2Joint>();
    this.m_velocities = new B2Array<B2Velocity>();
    this.m_positions = new B2Array<B2Position>();
  }

  reset(bodyCapacity: number, contactCapacity: number, jointCapacity: number, listener: B2ContactListener): void {
    this.m_bodyCapacity = bodyCapacity;
    this.m_contactCapacity = contactCapacity;
    this.m_jointCapacity = jointCapacity;
    this.m_listener = listener;
    this.m_bodies.splice(0, this.m_bodies.length);
    this.m_contacts.splice(0, this.m_contacts.length);
    this.m_joints.splice(0, this.m_joints.length);
    this.m_velocities.removeAll(true);
    this.m_positions.removeAll(true);
  }

  clear(): void {
    this.m_bodies.splice(0, this.m_bodies.length);
    this.m_contacts.splice(0, this.m_contacts.length);
    this.m_joints.splice(0, this.m_joints.length);
  }

  solve(profile: B2Profile, step: B2TimeStep, gravity: B2Vec2, allowSleep: boolean): void {
    let h = step.dt;
    this.m_positions.removeAll(true);
    this.m_velocities.removeAll(true);
    for (let i = 0; i < this.m_bodyCount; i++) {
      let b = this.m_bodies[i];
      let c = b.m_sweep.c;
      let a = b.m_sweep.a;
      let v = b.m_linearVelocity;
      let w = b.m_angularVelocity;
      b.m_sweep.c0 = b.m_sweep.c;
      b.m_sweep.a0 = b.m_sweep.a;
      if (b.m_type == B2BodyType.dynamicBody) {
        addEqual(v, multM(add(multM(gravity, b.m_gravityScale), multM(b.m_force, b.m_invMass)), h));
        w += h * b.m_invI * b.m_torque;
        mulEqual(v, 1.0 / (1.0 + h * b.m_linearDamping));
        w *= 1.0 / (1.0 + h * b.m_angularDamping);
      }
      this.m_positions.append(new B2Position(c, a));
      this.m_velocities.append(new B2Velocity(v, w));
    }
    let solverData = new B2SolverData();
    solverData.step = step;
    solverData.positions = this.m_positions;
    solverData.velocities = this.m_velocities;
    let contactSolverDef = new B2ContactSolverDef();
    contactSolverDef.step = step;
    contactSolverDef.contacts = this.m_contacts;
    contactSolverDef.count = this.m_contactCount;
    contactSolverDef.positions = this.m_positions;
    contactSolverDef.velocities = this.m_velocities;
    let contactSolver = new B2ContactSolver(contactSolverDef);
    contactSolver.initializeVelocityConstraints();
    if (step.warmStarting) {
      contactSolver.warmStart();
    }
    for (let i = 0; i < this.m_jointCount; i++) {
      this.m_joints[i].initVelocityConstraints(solverData);
    }
    for (let i = 0; i < step.velocityIterations; i++) {
      for (let j = 0; j < this.m_jointCount; j++) {
        this.m_joints[j].solveVelocityConstraints(solverData);
      }
      contactSolver.solveVelocityConstraints();
    }
    contactSolver.storeImpulses();
    for (let i = 0; i < this.m_bodyCount; i++) {
      let c: B2Vec2 = this.m_positions.get(i).c;
      let a: number = this.m_positions.get(i).a;
      let v: B2Vec2 = this.m_velocities.get(i).v;
      let w: number = this.m_velocities.get(i).w;
      let translation = multM(v, h);
      if (b2Dot22(translation, translation) > b2_maxTranslationSquared) {
        let ratio = b2_maxTranslation / translation.length();
        mulEqual(v, ratio);
      }
      let rotation = h * w;
      if (rotation * rotation > b2_maxRotationSquared) {
        let ratio = b2_maxRotation / Math.abs(rotation);
        w *= ratio;
      }
      c = add(c, multM(v, h));
      a += h * w;
      this.m_positions.get(i).c = c;
      this.m_positions.get(i).a = a;
      this.m_velocities.get(i).v = v;
      this.m_velocities.get(i).w = w;
      let b = this.m_bodies[i];
      b.m_sweep.c0.set(b.m_sweep.c.x, b.m_sweep.c.y);
      b.m_sweep.a0 = b.m_sweep.a;
      b.m_sweep.c.x += step.dt * b.m_linearVelocity.x;
      b.m_sweep.c.y += step.dt * b.linearVelocity.y;
      b.m_sweep.a += step.dt * b.angularVelocity;
      b.synchronizeTransform();
    }

    let positionSolved = false;
    for (let i = 0; i < step.positionIterations; i++) {
      let contactsOkay = contactSolver.solvePositionConstraints();
      let jointsOkay = true;
      for (let i2 = 0; i2 < this.m_jointCount; i2++) {
        let jointOkay = this.m_joints[i2].solvePositionConstraints(solverData);
        jointsOkay = jointsOkay && jointOkay;
      }
      if (contactsOkay && jointsOkay) {
        positionSolved = true;
        break;
      }
    }
    for (let i = 0; i < this.m_bodyCount; i++) {
      let body = this.m_bodies[i];
      body.m_sweep.c = this.m_positions.get(i).c;
      body.m_sweep.a = this.m_positions.get(i).a;
      body.m_linearVelocity = this.m_velocities.get(i).v;
      body.m_angularVelocity = this.m_velocities.get(i).w;
      body.synchronizeTransform();
    }
    this.report(contactSolver.m_velocityConstraints);
    if (allowSleep) {
      let minSleepTime = b2_maxFloat;
      let linTolSqr = b2_linearSleepTolerance * b2_linearSleepTolerance;
      let angTolSqr = b2_angularSleepTolerance * b2_angularSleepTolerance;
      for (let i = 0; i < this.m_bodyCount; i++) {
        let b = this.m_bodies[i];
        if (b.type_Body == B2BodyType.staticBody) {
          continue;
        }
        if (
          (b.m_flags & Flags.autoSleepFlag) == 0 ||
          b.m_angularVelocity * b.m_angularVelocity > angTolSqr ||
          b2Dot22(b.m_linearVelocity, b.m_linearVelocity) > linTolSqr
        ) {
          b.m_sleepTime = 0.0;
          minSleepTime = 0.0;
        } else {
          b.m_sleepTime += h;
          minSleepTime = Math.min(minSleepTime, b.m_sleepTime);
        }
      }
      if (minSleepTime >= b2_timeToSleep && positionSolved) {
        for (let i = 0; i < this.m_bodyCount; i++) {
          let b = this.m_bodies[i];
          b.setAwake(false);
        }
      }
    }
  }

  solveTOI(subStep: B2TimeStep, toiIndexA: number, toiIndexB: number): void {
    this.m_positions.removeAll(true);
    this.m_velocities.removeAll(true);
    for (let i = 0; i < this.m_bodyCount; i++) {
      let b = this.m_bodies[i];
      this.m_positions.append(new B2Position(b.m_sweep.c, b.m_sweep.a));
      this.m_velocities.append(new B2Velocity(b.m_linearVelocity, b.m_angularVelocity));
    }
    let contactSolverDef = new B2ContactSolverDef();
    contactSolverDef.contacts = this.m_contacts;
    contactSolverDef.count = this.m_contactCount;
    contactSolverDef.step = subStep;
    contactSolverDef.positions = this.m_positions;
    contactSolverDef.velocities = this.m_velocities;
    let contactSolver = new B2ContactSolver(contactSolverDef);
    for (let i = 0; i < subStep.positionIterations; i++) {
      let contactsOkay = contactSolver.solveTOIPositionConstraints(toiIndexA, toiIndexB);
      if (contactsOkay) {
        break;
      }
    }
    this.m_bodies[toiIndexA].m_sweep.c0 = this.m_positions.get(toiIndexA).c;
    this.m_bodies[toiIndexA].m_sweep.a0 = this.m_positions.get(toiIndexA).a;
    this.m_bodies[toiIndexB].m_sweep.c0 = this.m_positions.get(toiIndexB).c;
    this.m_bodies[toiIndexB].m_sweep.a0 = this.m_positions.get(toiIndexB).a;
    contactSolver.initializeVelocityConstraints();
    for (let i = 0; i < subStep.velocityIterations; i++) {
      contactSolver.solveVelocityConstraints();
    }
    let h = subStep.dt;
    for (let i = 0; i < this.m_bodyCount; i++) {
      let c: B2Vec2 = this.m_positions.get(i).c;
      let a: number = this.m_positions.get(i).a;
      let v: B2Vec2 = this.m_velocities.get(i).v;
      let w: number = this.m_velocities.get(i).w;
      let translation = multM(v, h);
      if (b2Dot22(translation, translation) > b2_maxTranslationSquared) {
        let ratio = b2_maxTranslation / translation.length();
        mulEqual(v, ratio);
      }
      let rotation = h * w;
      if (rotation * rotation > b2_maxRotationSquared) {
        let ratio = b2_maxRotation / Math.abs(rotation);
        w *= ratio;
      }
      addEqual(c, multM(v, h));
      a += h * w;
      this.m_positions.get(i).c = c;
      this.m_positions.get(i).a = a;
      this.m_velocities.get(i).v = v;
      this.m_velocities.get(i).w = w;
      let body = this.m_bodies[i];
      body.m_sweep.c = c;
      body.m_sweep.a = a;
      body.m_linearVelocity = v;
      body.m_angularVelocity = w;
      body.synchronizeTransform();
    }
    this.report(contactSolver.m_velocityConstraints);
  }

  addB(body: B2Body): void {
    body.m_islandIndex = this.m_bodyCount;
    this.m_bodies.push(body);
  }

  addC(contact: B2Contact): void {
    this.m_contacts.push(contact);
  }

  addJ(joint: B2Joint): void {
    this.m_joints.push(joint);
  }
  report(constraints: Array<B2ContactVelocityConstraint>): void {
    if (this.m_listener == null) {
      return;
    }
    for (let i = 0; i < this.m_contactCount; i++) {
      let c = this.m_contacts[i];
      let vc = constraints[i];
      let impulse = new B2ContactImpulse();
      impulse.count = vc.pointCount;
      for (let j = 0; j < vc.pointCount; j++) {
        impulse.normalImpulses[j] = vc.points[j].normalImpulse;
        impulse.tangentImpulses[j] = vc.points[j].tangentImpulse;
      }
      this.m_listener?.postSolve(c, impulse);
    }
  }
}
