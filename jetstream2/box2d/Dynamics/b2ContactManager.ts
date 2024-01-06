import { B2ContactFilter, B2DefaultContactListener, B2ContactListener } from './b2WorldCallbacks';
import { B2Contact, Flags_C } from './Contacts/b2Contact';
import { B2BroadPhaseWrapper } from '../Common/b2Wrappers';
import { B2FixtureProxy } from './b2Fixture';
import { B2BroadPhase } from '../Collision/b2BroadPhase';
import { B2BodyType } from './b2Body';

let b2_defaultFilter = new B2ContactFilter();
let b2_defaultListener = new B2DefaultContactListener();

export class B2ContactManager implements B2BroadPhaseWrapper {
  m_contactList: B2Contact | null = null;
  m_contactCount: number = 0;
  m_contactFilter: B2ContactFilter | null = b2_defaultFilter;
  m_contactListener: B2ContactListener | null = b2_defaultListener;
  constructor() {
    this.m_contactList = null;
    this.m_contactCount = 0;
    this.m_contactFilter = b2_defaultFilter;
    this.m_contactListener = b2_defaultListener;
  }

  public addPair(proxyUserDataA: B2FixtureProxy, proxyUserDataB: B2FixtureProxy): void {
    let proxyA = proxyUserDataA;
    let proxyB = proxyUserDataB;
    let fixtureA = proxyA.fixture;
    let fixtureB = proxyB.fixture;
    let indexA = proxyA.childIndex;
    let indexB = proxyB.childIndex;
    let bodyA = fixtureA.body;
    let bodyB = fixtureB.body;
    if (bodyA === bodyB) {
      return;
    }
    let edge = bodyB.getContactList();
    while (edge != null) {
      if (edge.other === bodyA) {
        let fA = edge.contact.fixtureA;
        let fB = edge.contact.fixtureB;
        let iA = edge.contact.childIndexA;
        let iB = edge.contact.childIndexB;
        if (fA === fixtureA && fB === fixtureB && iA == indexA && iB == indexB) {
          return;
        }
        if (fA === fixtureB && fB === fixtureA && iA == indexB && iB == indexA) {
          return;
        }
      }
      edge = edge!.next;
    }
    if (bodyB.shouldCollide(bodyA) == false) {
      return;
    }
    if (this.m_contactFilter != null && this.m_contactFilter.shouldCollide(fixtureA, fixtureB) == false) {
      return;
    }
    let c = B2Contact.create(fixtureA, indexA, fixtureB, indexB);
    if (c == null) {
      return;
    }
    fixtureA = c.fixtureA;
    fixtureB = c.fixtureB;
    indexA = c.childIndexA;
    indexB = c.childIndexB;
    bodyA = fixtureA.body;
    bodyB = fixtureB.body;
    c.m_prev = null;
    c.m_next = this.m_contactList;
    if (this.m_contactList != null) {
      this.m_contactList.m_prev = c;
    }
    this.m_contactList = c;
    c.m_nodeA.contact = c!;
    c.m_nodeA.other = bodyB;
    c.m_nodeA.prev = null;
    c.m_nodeA.next = bodyA.m_contactList;
    if (bodyA.m_contactList != null) {
      bodyA.m_contactList.prev = c.m_nodeA;
    }
    bodyA.m_contactList = c.m_nodeA;
    c.m_nodeB.contact = c!;
    c.m_nodeB.other = bodyA;
    c.m_nodeB.prev = null;
    c.m_nodeB.next = bodyB.m_contactList;
    if (bodyB.m_contactList != null) {
      bodyB.m_contactList.prev = c.m_nodeB;
    }
    bodyB.m_contactList = c.m_nodeB;
    if (fixtureA.isSensor == false && fixtureB.isSensor == false) {
      bodyA.setAwake(true);
      bodyB.setAwake(true);
    }
    this.m_contactCount += 1;
  }

  findNewContacts(): void {
    this.m_broadPhase.updatePairs(this);
  }

  destroy(c: B2Contact): void {
    let fixtureA = c.fixtureA;
    let fixtureB = c.fixtureB;
    let bodyA = fixtureA.body;
    let bodyB = fixtureB.body;
    if (this.m_contactListener != null && c.isTouching) {
      this.m_contactListener.endContact(c);
    }
    if (c.m_prev != null) {
      c.m_prev.m_next = c.m_next;
    }
    if (c.m_next != null) {
      c.m_next.m_prev = c.m_prev;
    }
    if (c === this.m_contactList) {
      this.m_contactList = c.m_next;
    }
    if (c.m_nodeA.prev != null) {
      c.m_nodeA.prev.next = c.m_nodeA.next;
    }
    if (c.m_nodeA.next != null) {
      c.m_nodeA.next.prev = c.m_nodeA.prev;
    }
    if (c.m_nodeA === bodyA.m_contactList) {
      bodyA.m_contactList = c.m_nodeA.next;
    }
    if (c.m_nodeB.prev != null) {
      c.m_nodeB.prev.next = c.m_nodeB.next;
    }
    if (c.m_nodeB.next != null) {
      c.m_nodeB.next.prev = c.m_nodeB.prev;
    }
    if (c.m_nodeB === bodyB.m_contactList) {
      bodyB.m_contactList = c.m_nodeB.next;
    }
    B2Contact.destroy(c);
    this.m_contactCount -= 1;
  }

  collide(): void {
    let c = this.m_contactList;
    while (c != null) {
      let fixtureA = c.fixtureA;
      let fixtureB = c.fixtureB;
      let indexA = c.childIndexA;
      let indexB = c.childIndexB;
      let bodyA = fixtureA.body;
      let bodyB = fixtureB.body;
      if ((c.m_flags & Flags_C.filterFlag) != 0) {
        if (bodyB.shouldCollide(bodyA) == false) {
          let cNuke = c!;
          c = cNuke.getNext();
          this.destroy(cNuke);
          continue;
        }
        if (this.m_contactFilter != null && this.m_contactFilter.shouldCollide(fixtureA, fixtureB) == false) {
          let cNuke = c!;
          c = cNuke.getNext();
          this.destroy(cNuke);
          continue;
        }
        c.m_flags &= ~Flags_C.filterFlag;
      }
      let activeA = bodyA.isAwake && bodyA.m_type != B2BodyType.staticBody;
      let activeB = bodyB.isAwake && bodyB.m_type != B2BodyType.staticBody;
      if (activeA == false && activeB == false) {
        c = c.getNext();
        continue;
      }
      let proxyIdA = fixtureA.m_proxies[indexA].proxyId;
      let proxyIdB = fixtureB.m_proxies[indexB].proxyId;
      let overlap = this.m_broadPhase.testOverlap(proxyIdA, proxyIdB);
      if (overlap == false) {
        let cNuke = c!;
        c = cNuke.getNext();
        this.destroy(cNuke);
        continue;
      }
      c.update(this.m_contactListener!);
      c = c.getNext();
    }
  }
  m_broadPhase = new B2BroadPhase();
  public broadPhase(): B2BroadPhase {
    return this.m_broadPhase;
  }
}
