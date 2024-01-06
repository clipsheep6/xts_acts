import { B2CircleShape, B2EdgeShape, B2PolygonShape, B2ShapeType } from '../../Collision/Shapes/b2Shape';
import { B2Transform } from '../../Common/b2Math';
import { B2WorldManifold, B2Manifold, b2TestOverlap, B2ContactFeature } from '../../Collision/b2Collision';
import { B2ContactListener } from '../b2WorldCallbacks';
import { B2Body } from '../b2Body';
import { B2Fixture } from '../b2Fixture';
import { b2CollidePolygons } from '../../Collision/b2CollidePolygon';
import { b2CollideCircles, b2CollidePolygonAndCircle } from '../../Collision/b2CollideCircles';
import { b2CollideEdgeAndCircle, b2CollideEdgeAndPolygon } from '../../Collision/b2CollideEdge';
import { hex_10, hex_2, hex_20, hex_4, hex_8 } from '../../Common/b2Settings';

function b2MixFriction(friction1: number, friction2: number): number {
  return Math.sqrt(friction1 * friction2);
}

function b2MixRestitution(restitution1: number, restitution2: number): number {
  return restitution1 > restitution2 ? restitution1 : restitution2;
}

type B2ContactCreateFcn = (fixtureA: B2Fixture, indexA: number, fixtureB: B2Fixture, indexB: number) => B2Contact;
type B2ContactDestroyFcn = (contact: B2Contact) => void;

export class B2ContactRegister {
  createFcn: B2ContactCreateFcn | null = null;
  destroyFcn: B2ContactDestroyFcn | null = null;
  primary: boolean = false;
}

export class B2ContactRegisters {
  rows: B2ShapeType;
  columns: B2ShapeType;
  grid: B2ContactRegister[] = [];
  constructor(rows: B2ShapeType, columns: B2ShapeType) {
    this.rows = rows;
    this.columns = columns;
    for (let i = 0; i < rows * columns; i++) {
      this.grid.push(new B2ContactRegister());
    }
  }
  getItem(row: B2ShapeType, column: B2ShapeType): B2ContactRegister {
    return this.grid[row * this.columns + column];
  }
  setItem(row: B2ShapeType, column: B2ShapeType, value: B2ContactRegister): void {
    this.grid[row * this.columns + column] = value;
  }
}

export class B2ContactEdge {
  other: B2Body | null = null;
  contact: B2Contact;
  prev: B2ContactEdge | null = null;
  next: B2ContactEdge | null = null;
  constructor(contact: B2Contact) {
    this.contact = contact;
  }
}

export class B2Contact {
  m_flags: number = 0;
  m_prev: B2Contact | null = null;
  m_next: B2Contact | null = null;
  m_nodeA: B2ContactEdge;
  m_nodeB: B2ContactEdge;
  m_fixtureA: B2Fixture;
  m_fixtureB: B2Fixture;
  m_indexA: number = 0;
  m_indexB: number = 0;
  m_manifold = new B2Manifold();
  m_toiCount: number = 0;
  m_toi: number = 0;
  m_friction: number = 0;
  m_restitution: number = 0;
  m_tangentSpeed: number = 0;
  get manifold(): B2Manifold {
    return this.m_manifold;
  }

  get worldManifold(): B2WorldManifold {
    let bodyA = this.m_fixtureA.body;
    let bodyB = this.m_fixtureB.body;
    let shapeA = this.m_fixtureA.shape;
    let shapeB = this.m_fixtureB.shape;
    let worldManifold = new B2WorldManifold();
    worldManifold.initialize(this.m_manifold, bodyA.transform, shapeA!.m_radius, bodyB.transform, shapeB!.m_radius);
    return worldManifold;
  }

  get isTouching(): boolean {
    return (this.m_flags & Flags_C.touchingFlag) == Flags_C.touchingFlag;
  }

  setEnabled(flag: boolean): void {
    if (flag) {
      this.m_flags |= Flags_C.enabledFlag;
    } else {
      this.m_flags &= ~Flags_C.enabledFlag;
    }
  }

  get isEnabled(): boolean {
    return (this.m_flags & Flags_C.enabledFlag) == Flags_C.enabledFlag;
  }
  getNext(): B2Contact | null {
    return this.m_next;
  }

  get fixtureA(): B2Fixture {
    return this.m_fixtureA;
  }

  get childIndexA(): number {
    return this.m_indexA;
  }

  get fixtureB(): B2Fixture {
    return this.m_fixtureB;
  }

  get childIndexB(): number {
    return this.m_indexB;
  }

  get friction(): number {
    return this.m_friction;
  }

  set setFriction(friction: number) {
    this.m_friction = friction;
  }

  resetFriction(): void {
    this.m_friction = b2MixFriction(this.m_fixtureA.m_friction, this.m_fixtureB.m_friction);
  }

  get restitution(): number {
    return this.m_restitution;
  }

  set setRestitution(restitution: number) {
    this.m_restitution = restitution;
  }

  resetRestitution(): void {
    this.m_restitution = b2MixRestitution(this.m_fixtureA.m_restitution, this.m_fixtureB.m_restitution);
  }

  setTangentSpeed(speed: number): void {
    this.m_tangentSpeed = speed;
  }

  get tangentSpeed(): number {
    return this.m_tangentSpeed;
  }

  evaluate(manifold: B2Manifold, xfA: B2Transform, xfB: B2Transform): void {
    throw new Error('must override');
  }

  flagForFiltering(): void {
    throw new Error('must override');
  }

  static addType(
    createFcn: B2ContactCreateFcn,
    destroyFcn: B2ContactDestroyFcn,
    type1: B2ShapeType,
    type2: B2ShapeType
  ): void {
    StaticVars.s_registers.getItem(type1, type2).createFcn = createFcn;
    StaticVars.s_registers.getItem(type1, type2).destroyFcn = destroyFcn;
    StaticVars.s_registers.getItem(type1, type2).primary = true;
    if (type1 != type2) {
      StaticVars.s_registers.getItem(type2, type1).createFcn = createFcn;
      StaticVars.s_registers.getItem(type2, type1).destroyFcn = destroyFcn;
      StaticVars.s_registers.getItem(type2, type1).primary = false;
    }
  }

  static initializeRegisters(): void {
    B2Contact.addType(B2PolygonContact.create, B2PolygonContact.destroy, B2ShapeType.polygon, B2ShapeType.polygon);
  }

  static create(fixtureA: B2Fixture, indexA: number, fixtureB: B2Fixture, indexB: number): B2Contact | null {
    if (StaticVars.s_initialized == false) {
      B2Contact.initializeRegisters();
      StaticVars.s_initialized = true;
    }
    let type1 = fixtureA!.fixtureType;
    let type2 = fixtureB!.fixtureType;
    let createFcn = StaticVars.s_registers.getItem(type1!, type2!).createFcn;
    if (createFcn != null) {
      if (StaticVars.s_registers.getItem(type1!, type2!).primary) {
        return createFcn(fixtureA, indexA, fixtureB, indexB);
      } else {
        return createFcn(fixtureB, indexB, fixtureA, indexA);
      }
    } else {
      return null;
    }
  }

  static destroy(contact: B2Contact): void {
    let fixtureA = contact.m_fixtureA;
    let fixtureB = contact.m_fixtureB;
    if (contact.m_manifold.pointCount > 0 && fixtureA?.isSensor == false && fixtureB?.isSensor == false) {
      fixtureA?.body.setAwake(true);
      fixtureB?.body.setAwake(true);
    }
    let typeA = fixtureA?.fixtureType;
    let typeB = fixtureB?.fixtureType;
    let destroyFcn = StaticVars.s_registers.getItem(typeA!, typeB!).destroyFcn;
    destroyFcn!(contact);
  }

  constructor(fixtureA: B2Fixture, indexA: number, fixtureB: B2Fixture, indexB: number) {
    this.m_flags = Flags_C.enabledFlag;
    this.m_fixtureA = fixtureA;
    this.m_fixtureB = fixtureB;
    this.m_indexA = indexA;
    this.m_indexB = indexB;
    this.m_manifold.points.splice(0, this.m_manifold.points.length);
    this.m_prev = null;
    this.m_next = null;
    this.m_nodeA = new B2ContactEdge(this);
    this.m_nodeA.prev = null;
    this.m_nodeA.next = null;
    this.m_nodeA.other = null;
    this.m_nodeB = new B2ContactEdge(this);
    this.m_nodeB.prev = null;
    this.m_nodeB.next = null;
    this.m_nodeB.other = null;
    this.m_toiCount = 0;
    this.m_friction = b2MixFriction(this.m_fixtureA.m_friction, this.m_fixtureB.m_friction);
    this.m_restitution = b2MixRestitution(this.m_fixtureA.m_restitution, this.m_fixtureB.m_restitution);
    this.m_tangentSpeed = 0.0;
  }

  update(listener: B2ContactListener): void {
    let oldManifold = new B2Manifold(this.m_manifold);
    this.m_flags |= Flags_C.enabledFlag;
    let touching = false;
    let wasTouching = (this.m_flags & Flags_C.touchingFlag) == Flags_C.touchingFlag;
    let sensorA = this.m_fixtureA.isSensor;
    let sensorB = this.m_fixtureB.isSensor;
    let sensor = sensorA || sensorB;
    let bodyA = this.m_fixtureA.body;
    let bodyB = this.m_fixtureB.body;
    let xfA = bodyA.transform;
    let xfB = bodyB.transform;
    if (sensor) {
      let shapeA = this.m_fixtureA.shape;
      let shapeB = this.m_fixtureB.shape;
      touching = b2TestOverlap(shapeA!, this.m_indexA, shapeB!, this.m_indexB, xfA, xfB);
      this.m_manifold.points.splice(0, this.m_manifold.points.length);
    } else {
      this.evaluate(this.m_manifold, xfA, xfB);
      touching = this.m_manifold.pointCount > 0;
      for (let i = 0; i < this.m_manifold.pointCount; i++) {
        let mp2 = this.m_manifold.points[i];
        mp2.normalImpulse = 0.0;
        mp2.tangentImpulse = 0.0;
        let id2 = mp2.id;
        for (let j = 0; j < oldManifold.pointCount; j++) {
          let mp1 = oldManifold.points[j];
          if (equalEqual(mp1.id, id2)) {
            mp2.normalImpulse = mp1.normalImpulse;
            mp2.tangentImpulse = mp1.tangentImpulse;
            break;
          }
        }
      }
      if (touching != wasTouching) {
        bodyA.setAwake(true);
        bodyB.setAwake(true);
      }
    }
  }
}

export class StaticVars {
  static s_registers = new B2ContactRegisters(B2ShapeType.typeCount, B2ShapeType.typeCount);
  static s_initialized: boolean = false;
}

enum Flags_C {
  islandFlag = 0x0001,
  touchingFlag = hex_2,
  enabledFlag = hex_4,
  filterFlag = hex_8,
  bulletHitFlag = hex_10,
  toiFlag = hex_20
}

export class B2PolygonContact extends B2Contact {
  static create(fixtureA: B2Fixture, indexA: number, fixtureB: B2Fixture, indexB: number): B2Contact {
    return new B2PolygonContact(fixtureA, fixtureB);
  }

  static destroy(contact: B2Contact): void {}

  constructor(fixtureA: B2Fixture, fixtureB: B2Fixture) {
    super(fixtureA, 0, fixtureB, 0);
  }

  evaluate(manifold: B2Manifold, xfA: B2Transform, xfB: B2Transform): void {
    b2CollidePolygons(
      manifold,
      this.m_fixtureA.shape as B2PolygonShape,
      xfA,
      this.m_fixtureB.shape as B2PolygonShape,
      xfB
    );
  }
}

export class B2CircleContact extends B2Contact {
  static create(fixtureA: B2Fixture, indexA: number, fixtureB: B2Fixture, indexB: number): B2Contact {
    return new B2CircleContact(fixtureA, fixtureB);
  }
  static destroy(contact: B2Contact): void {}
  constructor(fixtureA: B2Fixture, fixtureB: B2Fixture) {
    super(fixtureA, 0, fixtureB, 0);
  }
  evaluate(manifold: B2Manifold, xfA: B2Transform, xfB: B2Transform): void {
    b2CollideCircles(
      manifold,
      this.m_fixtureA.shape as B2CircleShape,
      xfA,
      this.m_fixtureB.shape as B2CircleShape,
      xfB
    );
  }
}

export class B2EdgeAndCircleContact extends B2Contact {
  static create(fixtureA: B2Fixture, indexA: number, fixtureB: B2Fixture, indexB: number): B2Contact {
    return new B2EdgeAndCircleContact(fixtureA, fixtureB);
  }

  static destroy(contact: B2Contact): void {}

  constructor(fixtureA: B2Fixture, fixtureB: B2Fixture) {
    super(fixtureA, 0, fixtureB, 0);
  }

  evaluate(manifold: B2Manifold, xfA: B2Transform, xfB: B2Transform): void {
    b2CollideEdgeAndCircle(
      manifold,
      this.m_fixtureA.shape as B2EdgeShape,
      xfA,
      this.m_fixtureB.shape as B2CircleShape,
      xfB
    );
  }
}

export class B2EdgeAndPolygonContact extends B2Contact {
  static create(fixtureA: B2Fixture, indexA: number, fixtureB: B2Fixture, indexB: number): B2Contact {
    return new B2EdgeAndPolygonContact(fixtureA, fixtureB);
  }

  static destroy(contact: B2Contact): void {}

  constructor(fixtureA: B2Fixture, fixtureB: B2Fixture) {
    super(fixtureA, 0, fixtureB, 0);
  }

  evaluate(manifold: B2Manifold, xfA: B2Transform, xfB: B2Transform): void {
    b2CollideEdgeAndPolygon(
      manifold,
      this.m_fixtureA.shape as B2EdgeShape,
      xfA,
      this.m_fixtureB.shape as B2PolygonShape,
      xfB
    );
  }
}

export class B2PolygonAndCircleContact extends B2Contact {
  static create(fixtureA: B2Fixture, indexA: number, fixtureB: B2Fixture, indexB: number): B2Contact {
    return new B2PolygonAndCircleContact(fixtureA, fixtureB);
  }

  static destroy(contact: B2Contact): void {}

  constructor(fixtureA: B2Fixture, fixtureB: B2Fixture) {
    super(fixtureA, 0, fixtureB, 0);
  }

  evaluate(manifold: B2Manifold, xfA: B2Transform, xfB: B2Transform): void {
    b2CollidePolygonAndCircle(
      manifold,
      this.m_fixtureA.shape as B2PolygonShape,
      xfA,
      this.m_fixtureB.shape as B2CircleShape,
      xfB
    );
  }
}

export function equalEqual(lhs: B2ContactFeature, rhs: B2ContactFeature): Boolean {
  return lhs.indexA == rhs.indexA && lhs.indexB == rhs.indexB && lhs.typeA == rhs.typeA && lhs.typeB == rhs.typeB;
}

export { Flags_C };
