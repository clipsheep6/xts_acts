import { B2BroadPhase } from '../Collision/b2BroadPhase';
import { B2AABB, B2RayCastInput, B2RayCastOutput } from '../Collision/b2Collision';
import { B2TOIInput, B2TOIOutput, b2TimeOfImpact, State } from '../Collision/b2TimeOfImpact';
import { multM, add, B2Vec2, subtractEqual } from '../Common/b2Math';
import { B2QueryWrapper, B2RayCastWrapper } from '../Common/b2Wrappers';
import { B2Island } from './b2Island';
import { Flags, B2Body, B2BodyDef, B2BodyType } from './b2Body';
import { B2Joint } from './Joints/b2Joint';
import { B2TimeStep } from './b2TimeStep';
import {
  B2QueryCallbackFunction,
  B2QueryCallbackProxy,
  B2ContactFilter,
  B2RayCastCallback,
  B2DestructionListener,
  B2RayCastCallbackFunction,
  B2ContactListener,
  B2QueryCallback,
  B2RayCastCallbackProxy
} from './b2WorldCallbacks';
import { B2Contact, Flags_C } from './Contacts/b2Contact';
import { B2Profile } from './b2TimeStep';
import { B2ContactManager } from './b2ContactManager';
import { b2_epsilon, b2_maxSubSteps, b2_maxTOIContacts, hex_2, hex_4, float_10, float_2 } from '../Common/b2Settings';

export class B2World {
  m_island: B2Island | null = null;
  m_TOIIsland: B2Island | null = null;
  m_flags = FlagsW.clearForces;
  m_contactManager: B2ContactManager = new B2ContactManager();
  m_bodyList: B2Body | null = null;
  m_jointList: B2Joint | null = null;
  m_bodyCount: number = 0;
  m_jointCount: number = 0;
  m_gravity: B2Vec2;
  m_allowSleep: boolean = true;
  m_destructionListener: B2DestructionListener | null = null;
  m_inv_dt0: number = 0.0;
  m_warmStarting: boolean = true;
  m_continuousPhysics: boolean = true;
  m_subStepping: boolean = false;
  m_stepComplete: boolean = true;
  m_profile: B2Profile = new B2Profile();
  constructor(gravity: B2Vec2) {
    this.m_destructionListener = null;
    this.m_bodyList = null;
    this.m_jointList = null;
    this.m_bodyCount = 0;
    this.m_jointCount = 0;
    this.m_warmStarting = true;
    this.m_continuousPhysics = true;
    this.m_subStepping = false;
    this.m_stepComplete = true;
    this.m_allowSleep = true;
    this.m_gravity = gravity;
    this.m_flags = FlagsW.clearForces;
    this.m_inv_dt0 = 0.0;
    this.m_contactManager = new B2ContactManager();
  }

  setDestructionListener(listener: B2DestructionListener): void {
    this.m_destructionListener = listener;
  }

  setContactFilter(filter: B2ContactFilter): void {
    this.m_contactManager.m_contactFilter = filter;
  }

  setContactListener(listener: B2ContactListener): void {
    this.m_contactManager.m_contactListener = listener;
  }

  public createBody(def: B2BodyDef): B2Body {
    if (this.isLocked) {
      throw new Error('world is locked');
    }
    let b = new B2Body(def, this);
    b.m_prev = null;
    b.m_next = this.m_bodyList;
    if (this.m_bodyList != null) {
      this.m_bodyList.m_prev = b;
    }
    this.m_bodyList = b;
    this.m_bodyCount += 1;
    return b;
  }

  public destroyBody(b: B2Body): void {
    if (this.isLocked) {
      return;
    }
    let je = b.m_jointList;
    while (je != null) {
      let je0 = je!;
      je = je.next;
      if (this.m_destructionListener != null) {
        this.m_destructionListener.sayGoodbye(je0.joint);
      }
      b.m_jointList = je;
    }
    b.m_jointList = null;
    let ce = b.m_contactList;
    while (ce != null) {
      let ce0 = ce!;
      ce = ce.next;
      this.m_contactManager.destroy(ce0.contact);
    }
    b.m_contactList = null;
    let f = b.m_fixtureList;
    while (f != null) {
      let f0 = f!;
      f = f.m_next!;
      if (this.m_destructionListener != null) {
        this.m_destructionListener.sayGoodbye(f0);
      }
      f0.destroyProxies(this.m_contactManager.m_broadPhase);
      f0.destroy();
      b.m_fixtureList = f;
      b.m_fixtureCount -= 1;
    }
    b.m_fixtureList = null;
    b.m_fixtureCount = 0;
    if (b.m_prev != null) {
      b.m_prev.m_next = b.m_next;
    }
    if (b.m_next != null) {
      b.m_next.m_prev = b.m_prev;
    }
    if (b === this.m_bodyList) {
      this.m_bodyList = b.m_next;
    }
    this.m_bodyCount -= 1;
  }

  public step(dt: number, velocityIterations: number, positionIterations: number): void {
    if ((this.m_flags & FlagsW.newFixture) != 0) {
      this.m_contactManager.findNewContacts();
      this.m_flags &= ~FlagsW.newFixture;
    }
    this.m_flags |= FlagsW.locked;
    let step = new B2TimeStep();
    step.dt = dt;
    step.velocityIterations = velocityIterations;
    step.positionIterations = positionIterations;
    if (dt > 0.0) {
      step.inv_dt = 1.0 / dt;
    } else {
      step.inv_dt = 0.0;
    }
    step.dtRatio = this.m_inv_dt0 * dt;
    step.warmStarting = this.m_warmStarting;
    this.m_contactManager.collide();
    if (this.m_stepComplete && step.dt > 0.0) {
      this.solve(step);
    }
    if (this.m_continuousPhysics && step.dt > 0.0) {
      this.solveTOI(step);
    }
    if (step.dt > 0.0) {
      this.m_inv_dt0 = step.inv_dt;
    }
    if ((this.m_flags & FlagsW.clearForces) != 0) {
      this.clearForces();
    }
    this.m_flags &= ~FlagsW.locked;
  }

  public clearForces(): void {
    let body = this.m_bodyList;
    while (body != null) {
      body.m_force.setZero();
      body.m_torque = 0.0;
      body = body.getNext();
    }
  }

  public queryAABB(callback: B2QueryCallback, aabb: B2AABB): void {
    let wrapper = new B2WorldQueryWrapper();
    wrapper.broadPhase = this.m_contactManager.m_broadPhase;
    wrapper.callback = callback;
    this.m_contactManager.m_broadPhase.query(wrapper, aabb);
  }

  public queryAABB2(aabb: B2AABB, callback: B2QueryCallbackFunction): void {
    this.queryAABB(new B2QueryCallbackProxy(callback), aabb);
  }

  public rayCast(callback: B2RayCastCallback, point1: B2Vec2, point2: B2Vec2): void {
    let wrapper = new B2WorldRayCastWrapper();
    wrapper.broadPhase = this.m_contactManager.m_broadPhase;
    wrapper.callback = callback;
    let input = new B2RayCastInput();
    input.maxFraction = 1.0;
    input.p1 = point1;
    input.p2 = point2;
    this.m_contactManager.m_broadPhase.rayCast(wrapper, input);
  }

  public rayCast2(point1: B2Vec2, point2: B2Vec2, callback: B2RayCastCallbackFunction): void {
    this.rayCast(new B2RayCastCallbackProxy(callback), point1, point2);
  }

  public getBodyList(): B2Body | null {
    return this.m_bodyList;
  }

  public getJointList(): B2Joint | null {
    return this.m_jointList;
  }

  public getContactList(): B2Contact | null {
    return this.m_contactManager.m_contactList;
  }

  public setAllowSleeping(flag: boolean): void {
    if (flag == this.m_allowSleep) {
      return;
    }
    this.m_allowSleep = flag;
    if (this.m_allowSleep == false) {
      let b = this.m_bodyList;
      while (b != null) {
        b.setAwake(true);
        b = b.m_next;
      }
    }
  }

  public get allowSleeping(): boolean {
    return this.m_allowSleep;
  }

  public set allowSleeping(newValue: boolean) {
    this.setAllowSleeping(newValue);
  }

  public setWarmStarting(flag: boolean): void {
    this.m_warmStarting = flag;
  }

  public get warmStarting(): boolean {
    return this.m_warmStarting;
  }

  public set warmStarting(newValue: boolean) {
    this.setWarmStarting(newValue);
  }

  public setContinuousPhysics(flag: boolean): void {
    this.m_continuousPhysics = flag;
  }

  public get continuousPhysics(): boolean {
    return this.m_continuousPhysics;
  }

  public set continuousPhysics(newValue: boolean) {
    this.setContinuousPhysics(newValue);
  }

  public setSubStepping(flag: boolean): void {
    this.m_subStepping = flag;
  }

  public get subStepping(): boolean {
    return this.m_subStepping;
  }

  public set subStepping(newValue: boolean) {
    this.setSubStepping(newValue);
  }

  public get proxyCount(): number {
    return this.m_contactManager.m_broadPhase.getProxyCount();
  }

  public get bodyCount(): number {
    return this.m_bodyCount;
  }

  public get jointCount(): number {
    return this.m_jointCount;
  }

  public get contactCount(): number {
    return this.m_contactManager.m_contactCount;
  }

  public get treeHeight(): number {
    return this.m_contactManager.m_broadPhase.getTreeHeight();
  }

  public get treeBalance(): number {
    return this.m_contactManager.m_broadPhase.getTreeBalance();
  }

  public get treeQuality(): number {
    return this.m_contactManager.m_broadPhase.getTreeQuality();
  }

  public setGravity(gravity: B2Vec2): void {
    this.m_gravity = gravity;
  }

  public get gravity(): B2Vec2 {
    return this.m_gravity;
  }

  public set gravity(newValue: B2Vec2) {
    this.setGravity(newValue);
  }

  public get isLocked(): boolean {
    return (this.m_flags & FlagsW.locked) == FlagsW.locked;
  }

  public setAutoClearForces(flag: boolean): void {
    if (flag) {
      this.m_flags |= FlagsW.clearForces;
    } else {
      this.m_flags &= ~FlagsW.clearForces;
    }
  }

  public get autoClearForces(): boolean {
    return (this.m_flags & FlagsW.clearForces) == FlagsW.clearForces;
  }

  public shiftOrigin(newOrigin: B2Vec2): void {
    if ((this.m_flags & FlagsW.locked) == FlagsW.locked) {
      return;
    }
    let b = this.m_bodyList;
    while (b != null) {
      subtractEqual(b.m_xf.p, newOrigin);
      subtractEqual(b.m_sweep.c0, newOrigin);
      subtractEqual(b.m_sweep.c, newOrigin);
      b = b.m_next;
    }
    let j = this.m_jointList;
    while (j != null) {
      j.shiftOrigin(newOrigin);
      j = j.m_next;
    }
    this.m_contactManager.m_broadPhase.shiftOrigin(newOrigin);
  }

  public get contactManager(): B2ContactManager {
    return this.m_contactManager;
  }

  public get profile(): B2Profile {
    return this.m_profile;
  }

  solve(step: B2TimeStep): void {
    this.m_profile.solveInit = 0.0;
    this.m_profile.solveVelocity = 0.0;
    this.m_profile.solvePosition = 0.0;

    if (this.m_island == null) {
      this.m_island = new B2Island(
        this.m_bodyCount,
        this.m_contactManager.m_contactCount,
        this.m_jointCount,
        this.m_contactManager.m_contactListener!
      );
    } else {
      this.m_island.reset(
        this.m_bodyCount,
        this.m_contactManager.m_contactCount,
        this.m_jointCount,
        this.m_contactManager.m_contactListener!
      );
    }
    let island = this.m_island;
    let b = this.m_bodyList;
    while (b != null) {
      b.m_flags &= ~Flags.islandFlag;
      b = b.m_next;
    }
    let c = this.m_contactManager.m_contactList;
    while (c != null) {
      c.m_flags &= ~Flags_C.islandFlag;
      c = c.m_next;
    }
    let j = this.m_jointList;
    while (j != null) {
      j.m_islandFlag = false;
      j = j.m_next;
    }
    let stack = new Array<B2Body>();
    let seed = this.m_bodyList;
    while (seed != null) {
      if ((seed.m_flags & Flags.islandFlag) != 0) {
        seed = seed.m_next;
        continue;
      }
      if (seed!.isAwake == false || seed!.isActive == false) {
        seed = seed!.m_next;
        continue;
      }
      if (seed!.type_Body == B2BodyType.staticBody) {
        seed = seed!.m_next;
        continue;
      }
      island.clear();
      stack.push(seed!);
      seed!.m_flags |= Flags.islandFlag;
      while (stack.length > 0) {
        let b = stack.pop();
        island.addB(b!);
        b!.setAwake(true);
        if (b!.type_Body == B2BodyType.staticBody) {
          continue;
        }
        let ce = b!.m_contactList;
        while (ce != null) {
          let contact = ce!.contact;
          if ((contact.m_flags & Flags_C.islandFlag) != 0) {
            ce = ce!.next;
            continue;
          }
          if (contact.isEnabled == false || contact.isTouching == false) {
            ce = ce!.next;
            continue;
          }
          let sensorA = contact.m_fixtureA.m_isSensor;
          let sensorB = contact.m_fixtureB.m_isSensor;
          if (sensorA || sensorB) {
            ce = ce!.next;
            continue;
          }
          island?.addC(contact);
          contact.m_flags |= Flags_C.islandFlag;
          let other = ce!.other;
          if ((other?.m_flags! & Flags.islandFlag) != 0) {
            ce = ce!.next;
            continue;
          }
          stack.push(other!);
          other!.m_flags |= Flags.islandFlag;
          ce = ce!.next;
        }
        let je = b!.m_jointList;
        while (je != null) {
          if (je!.joint.m_islandFlag == true) {
            je = je!.next;
            continue;
          }
          let other: B2Body = je.other!;
          if (other.isActive == false) {
            je = je.next;
            continue;
          }
          island?.addJ(je.joint);
          je!.joint.m_islandFlag = true;
          if ((other.m_flags & Flags.islandFlag) != 0) {
            je = je!.next;
            continue;
          }
          stack.push(other);
          other.m_flags |= Flags.islandFlag;
        }
      }
      let profile = new B2Profile();
      island.solve(profile, step, this.m_gravity, this.m_allowSleep);
      this.m_profile.solveInit += profile.solveInit;
      this.m_profile.solveVelocity += profile.solveVelocity;
      this.m_profile.solvePosition += profile.solvePosition;
      for (let i = 0; i < island.m_bodyCount; i++) {
        let b = island.m_bodies[i];
        if (b.type_Body == B2BodyType.staticBody) {
          b.m_flags &= ~Flags.islandFlag;
        }
      }
      seed = seed!.m_next;
    }
    stack.splice(0, stack.length);
    let loc_b = this.m_bodyList;
    while (loc_b != null) {
      if ((loc_b!.m_flags & Flags.islandFlag) == 0) {
        loc_b = loc_b!.getNext();
        continue;
      }
      if (loc_b!.type_Body == B2BodyType.staticBody) {
        loc_b = loc_b!.getNext();
        continue;
      }
      loc_b!.synchronizeFixtures();
      loc_b = loc_b!.getNext();
    }
    this.m_contactManager.findNewContacts();
  }
  solveTOI(step: B2TimeStep): void {
    if (this.m_TOIIsland == null) {
      this.m_TOIIsland = new B2Island(
        float_2 * b2_maxTOIContacts,
        b2_maxTOIContacts,
        0,
        this.m_contactManager.m_contactListener!
      );
    } else {
      this.m_TOIIsland.reset(
        float_2 * b2_maxTOIContacts,
        b2_maxTOIContacts,
        0,
        this.m_contactManager.m_contactListener!
      );
    }
    let island = this.m_TOIIsland!;
    if (this.m_stepComplete) {
      let b = this.m_bodyList;
      while (b != null) {
        b.m_flags &= ~Flags.islandFlag;
        b.m_sweep.alpha0 = 0.0;
        b = b.m_next;
      }
      let c = this.m_contactManager.m_contactList;
      while (c != null) {
        c.m_flags &= ~(Flags_C.toiFlag | Flags_C.islandFlag);
        c.m_toiCount = 0;
        c.m_toi = 1.0;
        c = c.m_next;
      }
    }
    while (true) {
      let minContact: B2Contact | null = null;
      let minAlpha: number = 1.0;
      let c = this.m_contactManager.m_contactList;
      while (c != null) {
        if (c.isEnabled == false) {
          c = c!.m_next;
          continue;
        }
        if (c.m_toiCount > b2_maxSubSteps) {
          c = c!.m_next;
          continue;
        }
        let alpha: number = 1.0;
        if ((c!.m_flags & Flags_C.toiFlag) != 0) {
          alpha = c!.m_toi;
        } else {
          let fA = c!.fixtureA;
          let fB = c!.fixtureB;
          if (fA.isSensor || fB.isSensor) {
            c = c!.m_next;
            continue;
          }
          let bA = fA.body;
          let bB = fB.body;
          let typeA = bA.m_type;
          let typeB = bB.m_type;
          let activeA = bA.isAwake && typeA != B2BodyType.staticBody;
          let activeB = bB.isAwake && typeB != B2BodyType.staticBody;
          if (activeA == false && activeB == false) {
            c = c!.m_next;
            continue;
          }
          let collideA = bA.isBullet || typeA != B2BodyType.dynamicBody;
          let collideB = bB.isBullet || typeB != B2BodyType.dynamicBody;
          if (collideA == false && collideB == false) {
            c = c!.m_next;
            continue;
          }
          let alpha0 = bA.m_sweep.alpha0;
          if (bA.m_sweep.alpha0 < bB.m_sweep.alpha0) {
            alpha0 = bB.m_sweep.alpha0;
            bA.m_sweep.advance(alpha0);
          } else if (bB.m_sweep.alpha0 < bA.m_sweep.alpha0) {
            alpha0 = bA.m_sweep.alpha0;
            bB.m_sweep.advance(alpha0);
          }
          let indexA = c!.childIndexA;
          let indexB = c!.childIndexB;
          let input = new B2TOIInput();
          input.proxyA.set(fA.shape!, indexA);
          input.proxyB.set(fB.shape!, indexB);
          input.sweepA = bA.m_sweep;
          input.sweepB = bB.m_sweep;
          input.tMax = 1.0;
          let output = new B2TOIOutput();
          b2TimeOfImpact(output, input);
          let beta = output.t;
          if (output.state == State.touching) {
            alpha = Math.min(alpha0 + (1.0 - alpha0) * beta, 1.0);
          } else {
            alpha = 1.0;
          }
          c!.m_toi = alpha;
          c!.m_flags |= Flags_C.toiFlag;
        }
        if (alpha < minAlpha) {
          minContact = c;
          minAlpha = alpha;
        }
        c = c!.m_next;
      }
      if (minContact == null || 1.0 - float_10 * b2_epsilon < minAlpha) {
        this.m_stepComplete = true;
        break;
      }
      let fA = minContact!.fixtureA;
      let fB = minContact!.fixtureB;
      let bA = fA.body;
      let bB = fB.body;
      let backup1 = bA.m_sweep;
      let backup2 = bB.m_sweep;
      bA.advance(minAlpha);
      bB.advance(minAlpha);
      minContact!.update(this.m_contactManager.m_contactListener!);
      minContact!.m_flags &= ~Flags_C.toiFlag;
      minContact!.m_toiCount += 1;
      if (minContact.isEnabled == false || minContact.isTouching == false) {
        minContact!.setEnabled(false);
        bA.m_sweep = backup1;
        bB.m_sweep = backup2;
        bA.synchronizeTransform();
        bB.synchronizeTransform();
        continue;
      }
      bA.setAwake(true);
      bB.setAwake(true);
      island.clear();
      island.addB(bA);
      island.addB(bB);
      island.addC(minContact);
      bA.m_flags |= Flags.islandFlag;
      bB.m_flags |= Flags.islandFlag;
      minContact.m_flags |= Flags_C.islandFlag;
      let bodies = [bA, bB];
      for (let i = 0; i < float_2; i++) {
        let body = bodies[i];
        if (body.m_type == B2BodyType.dynamicBody) {
          let ce = body.m_contactList;
          while (ce != null) {
            if (island.m_bodyCount == island.m_bodyCapacity) {
              break;
            }
            if (island.m_contactCount == island.m_contactCapacity) {
              break;
            }
            let contact = ce!.contact;
            if ((contact.m_flags & Flags_C.islandFlag) != 0) {
              ce = ce!.next;
              continue;
            }
            let other = ce!.other!;
            if (other.m_type == B2BodyType.dynamicBody && body.isBullet == false && other.isBullet == false) {
              ce = ce!.next;
              continue;
            }
            let sensorA = contact.m_fixtureA.m_isSensor;
            let sensorB = contact.m_fixtureB.m_isSensor;
            if (sensorA || sensorB) {
              ce = ce!.next;
              continue;
            }
            let backup = other.m_sweep;
            if ((other.m_flags & Flags.islandFlag) == 0) {
              other.advance(minAlpha);
            }
            contact.update(this.m_contactManager.m_contactListener!);
            if (contact.isEnabled == false) {
              other.m_sweep = backup;
              other.synchronizeTransform();
              ce = ce!.next;
              continue;
            }
            if (contact.isTouching == false) {
              other.m_sweep = backup;
              other.synchronizeTransform();
              ce = ce!.next;
              continue;
            }
            contact.m_flags |= Flags_C.islandFlag;
            island.addC(contact);
            if ((other.m_flags & Flags.islandFlag) != 0) {
              ce = ce!.next;
              continue;
            }
            other.m_flags |= Flags.islandFlag;
            if (other.m_type != B2BodyType.staticBody) {
              other.setAwake(true);
            }
            island.addB(other);
            ce = ce!.next;
          }
        }
      }
      let subStep = new B2TimeStep();
      subStep.dt = (1.0 - minAlpha) * step.dt;
      subStep.inv_dt = 1.0 / subStep.dt;
      subStep.dtRatio = 1.0;
      subStep.positionIterations = 20;
      subStep.velocityIterations = step.velocityIterations;
      subStep.warmStarting = false;
      island.solveTOI(subStep, bA.m_islandIndex, bB.m_islandIndex);
      for (let i = 0; i < island.m_bodyCount; i++) {
        let body = island.m_bodies[i];
        body.m_flags &= ~Flags.islandFlag;
        if (body.m_type != B2BodyType.dynamicBody) {
          continue;
        }
        body.synchronizeFixtures();
        let ce = body.m_contactList;
        while (ce != null) {
          ce!.contact.m_flags &= ~(Flags_C.toiFlag | Flags_C.islandFlag);
          ce = ce!.next;
        }
      }
      this.m_contactManager.findNewContacts();
      if (this.m_subStepping) {
        this.m_stepComplete = false;
        break;
      }
    }
  }
}
export class FlagsW {
  static newFixture: number = 0x0001;
  static locked: number = hex_2;
  static clearForces: number = hex_4;
}
export class B2WorldQueryWrapper implements B2QueryWrapper {
  broadPhase: B2BroadPhase | null = null;
  callback: B2QueryCallback | null = null;
  queryCallback(proxyId: number): boolean {
    let proxy = this.broadPhase?.getUserData(proxyId)!;
    return this.callback!.reportFixture(proxy.fixture);
  }
}
export class B2WorldRayCastWrapper implements B2RayCastWrapper {
  broadPhase: B2BroadPhase | null = null;
  callback: B2RayCastCallback | null = null;
  rayCastCallback(input: B2RayCastInput, proxyId: number): number {
    let proxy = this.broadPhase?.getUserData(proxyId)!;
    let fixture = proxy.fixture;
    let index = proxy.childIndex;
    let output = new B2RayCastOutput();
    let hit = fixture.rayCast(output, input, index);
    if (hit) {
      let fraction = output.fraction;
      let point = add(multM(input.p1, 1.0 - fraction), multM(input.p2, fraction));
      return this.callback!.reportFixture(fixture, point, output.normal, fraction);
    }
    return input.maxFraction;
  }
}
