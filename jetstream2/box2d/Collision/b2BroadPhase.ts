import { B2Vec2 } from '../Common/b2Math';
import { B2RayCastInput, B2AABB, b2TestOverlap2 } from './b2Collision';
import { B2QueryWrapper, B2BroadPhaseWrapper, B2RayCastWrapper } from '../Common/b2Wrappers';
import { B2FixtureProxy } from '../Dynamics/b2Fixture';
import { B2DynamicTree } from './b2DynamicTree';
export class B2Pair {
  public proxyIdA: number = -1;
  public proxyIdB: number = -1;
  constructor(proxyIdA: number = -1, proxyIdB: number = -1) {
    this.proxyIdA = proxyIdA;
    this.proxyIdB = proxyIdB;
  }
}
export class B2BroadPhase implements B2QueryWrapper {
  public static nullProxy = -1;
  public m_tree = new B2DynamicTree<B2FixtureProxy>();
  public m_proxyCount: number = 0;
  public m_moveBuffer: number[] = [];
  public m_pairBuffer: B2Pair[] = [];
  public m_queryProxyId: number = 0;

  constructor() {
    this.m_proxyCount = 0;
    this.m_pairBuffer = [];
    this.m_moveBuffer = [];
  }

  public createProxy(aabb: B2AABB, userData: B2FixtureProxy): number {
    let proxyId = this.m_tree.createProxy(aabb, userData);
    this.m_proxyCount += 1;
    this.bufferMove(proxyId);
    return proxyId;
  }

  public destroyProxy(proxyId: number): void {
    this.unBufferMove(proxyId);
    this.m_proxyCount -= 1;
    this.m_tree.destroyProxy(proxyId);
  }

  public moveProxy(proxyId: number, aabb: B2AABB, displacement: B2Vec2): void {
    let buffer = this.m_tree.moveProxy(proxyId, aabb, displacement);
    if (buffer) {
      this.bufferMove(proxyId);
    }
  }

  public touchProxy(proxyId: number): void {
    this.bufferMove(proxyId);
  }

  public getFatAABB(proxyId: number): B2AABB {
    return this.m_tree.getFatAABB(proxyId);
  }

  public getUserData(proxyId: number): B2FixtureProxy | null {
    return this.m_tree.getUserData(proxyId);
  }

  public testOverlap(proxyIdA: number, proxyIdB: number): boolean {
    let aabbA = this.m_tree.getFatAABB(proxyIdA);
    let aabbB = this.m_tree.getFatAABB(proxyIdB);
    return b2TestOverlap2(aabbA, aabbB);
  }

  public getProxyCount(): number {
    return this.m_proxyCount;
  }

  public updatePairs<T extends B2BroadPhaseWrapper>(callback: T): void {
    this.m_pairBuffer.splice(0, this.m_pairBuffer.length);
    for (let i = 0; i < this.m_moveBuffer.length; i++) {
      this.m_queryProxyId = this.m_moveBuffer[i];
      if (this.m_queryProxyId == B2BroadPhase.nullProxy) {
        continue;
      }
      let fatAABB = this.m_tree.getFatAABB(this.m_queryProxyId);
      this.m_tree.query(this, fatAABB);
    }
    this.m_moveBuffer.splice(0, this.m_moveBuffer.length);
    this.m_pairBuffer.sort((a, b) => {
      if (a.proxyIdA == b.proxyIdA) {
        return a.proxyIdB - b.proxyIdB;
      } else {
        return a.proxyIdA - b.proxyIdA;
      }
    });

    let i = 0;
    while (i < this.m_pairBuffer.length) {
      let primaryPair = this.m_pairBuffer[i];
      let userDataA = this.m_tree.getUserData(primaryPair.proxyIdA)!;
      let userDataB = this.m_tree.getUserData(primaryPair.proxyIdB)!;

      callback.addPair(userDataA, userDataB);
      i += 1;

      while (i < this.m_pairBuffer.length) {
        let pair = this.m_pairBuffer[i];
        if (pair.proxyIdA != primaryPair.proxyIdA || pair.proxyIdB != primaryPair.proxyIdB) {
          break;
        }
        i += 1;
      }
    }
  }
  public query<T extends B2QueryWrapper>(callback: T, aabb: B2AABB): void {
    this.m_tree.query(callback, aabb);
  }
  public rayCast<T extends B2RayCastWrapper>(callback: T, input: B2RayCastInput): void {
    this.m_tree.rayCast(callback, input);
  }
  public getTreeHeight(): number {
    return this.m_tree.getHeight();
  }
  public getTreeBalance(): number {
    return this.m_tree.getMaxBalance();
  }
  public getTreeQuality(): number {
    return this.m_tree.getAreaRatio();
  }
  public shiftOrigin(newOrigin: B2Vec2): void {
    this.m_tree.shiftOrigin(newOrigin);
  }
  bufferMove(proxyId: number): void {
    this.m_moveBuffer.push(proxyId);
  }
  unBufferMove(proxyId: number): void {
    for (let i = 0; i < this.m_moveBuffer.length; i++) {
      if (this.m_moveBuffer[i] == proxyId) {
        this.m_moveBuffer[i] = B2BroadPhase.nullProxy;
      }
    }
  }
  public queryCallback(proxyId: number): boolean {
    if (proxyId == this.m_queryProxyId) {
      return true;
    }
    let pair = new B2Pair(Math.min(proxyId, this.m_queryProxyId), Math.max(proxyId, this.m_queryProxyId));
    this.m_pairBuffer.push(pair);
    return true;
  }
}
