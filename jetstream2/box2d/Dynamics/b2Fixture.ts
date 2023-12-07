import { B2Shape } from '../Collision/Shapes/b2Shape';
import { B2AABB, B2RayCastOutput, B2RayCastInput } from '../Collision/b2Collision';
import { B2ShapeType, B2MassData } from '../Collision/Shapes/b2Shape';
import { B2Vec2, B2Transform, subtract } from '../Common/b2Math';
import { B2BroadPhase } from '../Collision/b2BroadPhase';
import { B2Body } from './b2Body';

export class B2Filter {
  constructor() {
    this.categoryBits = 0x0001;
    this.maskBits = 0xffff;
    this.groupIndex = 0;
  }
  public categoryBits: number;
  public maskBits: number;
  public groupIndex: number;
}
export class B2FixtureDef {
  constructor() {
    this.shape = null;
    this.userData = null;
    this.friction = 0.2;
    this.restitution = 0.0;
    this.density = 0.0;
    this.isSensor = false;
    this.filter = new B2Filter();
  }
  shape: B2Shape | null;
  userData?: object | null;
  friction: number;
  restitution: number;
  density: number;
  isSensor: boolean;
  filter: B2Filter;
}

export class B2FixtureProxy {
  constructor(fixture: B2Fixture) {
    this.fixture = fixture;
  }
  aabb = new B2AABB();
  fixture: B2Fixture;
  childIndex = 0;
  proxyId = 0;
}

export class B2Fixture {
  m_density: number = 0.0;
  m_next: B2Fixture | null = null;
  m_body: B2Body;
  m_shape: B2Shape | null = null;
  m_friction: number = 0.0;
  m_restitution: number = 0.0;
  m_proxies: B2FixtureProxy[] = [];
  m_filter = new B2Filter();
  m_isSensor: boolean = false;
  m_userData?: object | null = null;

  constructor(body: B2Body, def: B2FixtureDef) {
    this.m_userData = def.userData;
    this.m_friction = def.friction;
    this.m_restitution = def.restitution;
    this.m_body = body;
    this.m_next = null;
    this.m_filter = def.filter;
    this.m_isSensor = def.isSensor;
    this.m_shape = def.shape!.clone();
    this.m_proxies = [];
    this.m_density = def.density;
  }

  get m_proxyCount(): number {
    return this.m_proxies.length;
  }

  get fixtureType(): B2ShapeType {
    return this.m_shape!.type();
  }

  get shape(): B2Shape {
    return this.m_shape!;
  }

  get isSensor(): boolean {
    return this.m_isSensor;
  }

  set isSensor(newValue) {
    this.setSensor(newValue);
  }

  setSensor(sensor: boolean): void {
    if (sensor != this.m_isSensor) {
      this.m_body.setAwake(true);
      this.m_isSensor = sensor;
    }
  }

  get filterData(): B2Filter {
    return this.m_filter;
  }

  set filterData(newValue) {
    this.setFilterData(newValue);
  }

  setFilterData(filter: B2Filter): void {
    this.m_filter = filter;
    this.refilter();
  }

  refilter(): void {
    let edge = this.m_body.getContactList();
    while (edge != null) {
      let contact = edge!.contact;
      let fixtureA = contact.fixtureA;
      let fixtureB = contact.fixtureB;
      if (fixtureA === this || fixtureB === this) {
        contact.flagForFiltering();
      }
      edge = edge!.next;
    }
    let world = this.m_body.world;
    if (world == null) {
      return;
    }
    let broadPhase = world.m_contactManager.m_broadPhase;
    for (let i = 0; i < this.m_proxyCount; i++) {
      broadPhase.touchProxy(this.m_proxies[i].proxyId);
    }
  }

  get body(): B2Body {
    return this.m_body;
  }

  getNext(): B2Fixture | undefined {
    if (this.m_next != null) {
      return this.m_next;
    }
    return undefined;
  }

  get userData(): object | undefined {
    if (this.m_userData != null) {
      return this.m_userData;
    }
    return undefined;
  }

  set userData(newValue) {
    this.setUserData(newValue);
  }

  setUserData(data?: object): void {
    this.m_userData = data;
  }

  testPoint(p: B2Vec2): boolean {
    return this.m_shape!.testPoint(this.m_body.transform, p);
  }

  rayCast(output: B2RayCastOutput, input: B2RayCastInput, childIndex: number): boolean {
    return this.m_shape!.rayCast(output, input, this.m_body.transform, childIndex);
  }

  get massData(): B2MassData {
    return this.m_shape!.computeMass(this.m_density);
  }

  get density(): number {
    return this.m_density;
  }

  set density(newValue) {
    this.setDensity(newValue);
  }

  setDensity(density: number): void {
    this.m_density = density;
  }

  get friction(): number {
    return this.m_friction;
  }

  set friction(newValue) {
    this.setFriction(newValue);
  }

  setFriction(friction: number): void {
    this.m_friction = friction;
  }

  get restitution(): number {
    return this.m_restitution;
  }

  set restitution(newValue) {
    this.setRestitution(newValue);
  }

  setRestitution(restitution: number): void {
    this.m_restitution = restitution;
  }

  getAABB(childIndex: number): B2AABB {
    return this.m_proxies[childIndex].aabb;
  }

  destroy(): void {
    this.m_proxies.splice(0, this.m_proxies.length);
    this.m_shape = null;
  }

  createProxies(broadPhase: B2BroadPhase, xf: B2Transform): void {
    if (this.m_shape != null) {
      let proxyCount = this.m_shape.childCount();
      for (let i = 0; i < proxyCount; i++) {
        let proxy = new B2FixtureProxy(this);
        this.m_shape!.computeAABB(proxy.aabb, xf, i);
        proxy.childIndex = i;
        proxy.proxyId = broadPhase.createProxy(proxy.aabb, proxy);
        this.m_proxies.push(proxy);
      }
    }
  }

  destroyProxies(broadPhase: B2BroadPhase): void {
    for (let i = 0; i < this.m_proxyCount; i++) {
      let proxy = this.m_proxies[i];
      broadPhase.destroyProxy(proxy.proxyId);
    }
    this.m_proxies.splice(0, this.m_proxies.length);
  }

  synchronize(broadPhase: B2BroadPhase, transform1: B2Transform, transform2: B2Transform): void {
    if (this.m_proxyCount == 0) {
      return;
    }
    for (let i = 0; i < this.m_proxyCount; i++) {
      let proxy = this.m_proxies[i];
      let aabb1 = new B2AABB(),
        aabb2 = new B2AABB();
      this.m_shape!.computeAABB(aabb1, transform1, proxy.childIndex);
      this.m_shape!.computeAABB(aabb2, transform2, proxy.childIndex);
      proxy.aabb.combine(aabb1, aabb2);
      let displacement = subtract(transform2.p, transform1.p);
      broadPhase.moveProxy(proxy.proxyId, proxy.aabb, displacement);
    }
  }
}
