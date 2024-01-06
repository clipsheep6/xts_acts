import { B2AABB, B2RayCastInput, b2TestOverlap2 } from './b2Collision';
import {
  B2Vec2,
  subtract,
  add,
  multM,
  b2Cross21,
  b2Abs2,
  b2Min,
  b2Max,
  b2Dot22,
  subtractEqual,
  mulEqual
} from '../Common/b2Math';
import { B2QueryWrapper, B2RayCastWrapper } from '../Common/b2Wrappers';
import { b2_aabbExtension, b2_aabbMultiplier, b2_maxFloat } from '../Common/b2Settings';
import { float_2 } from '../Common/b2Settings';

let b2_nullNode = -1;
export class B2TreeNode<T> {
  public aabb = new B2AABB();
  public userData: T | null = null;
  parentOrNext: number = b2_nullNode;
  child1: number = b2_nullNode;
  child2: number = b2_nullNode;
  height: number = -1;
  isLeaf(): boolean {
    return this.child1 == b2_nullNode;
  }
}

export class B2DynamicTree<T> {
  m_root: number;
  m_nodes: B2TreeNode<T>[];
  m_nodeCount: number;
  m_nodeCapacity: number;
  m_freeList: number;
  m_insertionCount: number;
  constructor() {
    this.m_root = b2_nullNode;
    this.m_nodeCapacity = 16;
    this.m_nodeCount = 0;
    this.m_nodes = new Array<B2TreeNode<T>>();
    for (let i = 0; i < this.m_nodeCapacity - 1; i++) {
      this.m_nodes.push(new B2TreeNode());
      this.m_nodes[this.m_nodes.length - 1].parentOrNext = i + 1;
      this.m_nodes[this.m_nodes.length - 1].height = -1;
    }
    this.m_nodes.push(new B2TreeNode());
    this.m_nodes[this.m_nodes.length - 1].parentOrNext = b2_nullNode;
    this.m_nodes[this.m_nodes.length - 1].height = -1;
    this.m_freeList = 0;
    this.m_insertionCount = 0;
  }

  public createProxy(aabb: B2AABB, userData: T): number {
    let proxyId = this.allocateNode();
    let r = new B2Vec2(b2_aabbExtension, b2_aabbExtension);
    this.m_nodes[proxyId].aabb.lowerBound = subtract(aabb.lowerBound, r);
    this.m_nodes[proxyId].aabb.upperBound = add(aabb.upperBound, r);
    this.m_nodes[proxyId].userData = userData;
    this.m_nodes[proxyId].height = 0;
    this.insertLeaf(proxyId);
    return proxyId;
  }

  public destroyProxy(proxyId: number): void {
    this.removeLeaf(proxyId);
    this.freeNode(proxyId);
  }

  public moveProxy(proxyId: number, aabb: B2AABB, displacement: B2Vec2): boolean {
    if (this.m_nodes[proxyId].aabb.contains(aabb)) {
      return false;
    }
    this.removeLeaf(proxyId);
    let b = aabb;
    let r = new B2Vec2(b2_aabbExtension, b2_aabbExtension);
    b.lowerBound = subtract(b.lowerBound, r);
    b.upperBound = add(b.upperBound, r);
    let d = multM(displacement, b2_aabbMultiplier);
    if (d.x < 0.0) {
      b.lowerBound.x += d.x;
    } else {
      b.upperBound.x += d.x;
    }
    if (d.y < 0.0) {
      b.lowerBound.y += d.y;
    } else {
      b.upperBound.y += d.y;
    }
    this.m_nodes[proxyId].aabb = b;
    this.insertLeaf(proxyId);
    return true;
  }

  public getUserData(proxyId: number): T | null {
    return this.m_nodes[proxyId].userData;
  }

  public getFatAABB(proxyId: number): B2AABB {
    return this.m_nodes[proxyId].aabb;
  }
  public query<T extends B2QueryWrapper>(callback: T, aabb: B2AABB): void {
    let stack: number[] = [];
    stack.push(this.m_root);
    while (stack.length > 0) {
      let nodeId = stack.pop();
      if (nodeId == b2_nullNode) {
        continue;
      }
      let node = this.m_nodes[nodeId!];
      if (b2TestOverlap2(node.aabb, aabb)) {
        if (node.isLeaf()) {
          let proceed = callback.queryCallback(nodeId!);
          if (proceed == false) {
            return;
          }
        } else {
          stack.push(node.child1);
          stack.push(node.child2);
        }
      }
    }
  }

  rayCast<T extends B2RayCastWrapper>(callback: T, input: B2RayCastInput): void {
    let p1 = input.p1;
    let p2 = input.p2;
    let r = subtract(p2, p1);
    r.normalize();
    let v = b2Cross21(1.0, r);
    let abs_v = b2Abs2(v);
    let maxFraction = input.maxFraction;
    let segmentAABB = new B2AABB();
    let t = add(p1, multM(subtract(p2, p1), maxFraction));
    segmentAABB.lowerBound = b2Min(p1, t);
    segmentAABB.upperBound = b2Max(p1, t);
    let stack: number[] = [];
    stack.push(this.m_root);
    while (stack.length > 0) {
      let nodeId = stack.pop();
      if (nodeId == b2_nullNode) {
        continue;
      }
      let node = this.m_nodes[nodeId!];
      if (b2TestOverlap2(node.aabb, segmentAABB) == false) {
        continue;
      }
      let c = node.aabb.center;
      let h = node.aabb.extents;
      let separation = Math.abs(b2Dot22(v, subtract(p1, c()))) - b2Dot22(abs_v, h());
      if (separation > 0.0) {
        continue;
      }
      if (node.isLeaf()) {
        let subInput = new B2RayCastInput();
        subInput.p1 = input.p1;
        subInput.p2 = input.p2;
        subInput.maxFraction = maxFraction;
        let value = callback.rayCastCallback(subInput, nodeId!);
        if (value == 0.0) {
          return;
        }
        if (value > 0.0) {
          maxFraction = value;
          add(p1, multM(subtract(p2, p1), maxFraction));
          segmentAABB.lowerBound = b2Min(p1, t);
          segmentAABB.upperBound = b2Max(p1, t);
        }
      } else {
        stack.push(node.child1);
        stack.push(node.child2);
      }
    }
  }

  public validate(): void {
    this.validateStructure(this.m_root);
    this.validateMetrics(this.m_root);
    let freeCount = 0;
    let freeIndex = this.m_freeList;
    while (freeIndex != b2_nullNode) {
      freeIndex = this.m_nodes[freeIndex].parentOrNext;
      freeCount += 1;
    }
  }

  public getHeight(): number {
    if (this.m_root == b2_nullNode) {
      return 0;
    }
    return this.m_nodes[this.m_root].height;
  }

  public getMaxBalance(): number {
    let maxBalance = 0;
    for (let i = 0; i < this.m_nodes.length; i++) {
      let node = this.m_nodes[i];
      if (node.height <= 1) {
        continue;
      }
      let child1 = node.child1;
      let child2 = node.child2;
      let balance = Math.abs(this.m_nodes[child2].height - this.m_nodes[child1].height);
      maxBalance = Math.max(maxBalance, balance);
    }
    return maxBalance;
  }

  public getAreaRatio(): number {
    if (this.m_root == b2_nullNode) {
      return 0.0;
    }
    let root = this.m_nodes[this.m_root];
    let rootArea = root.aabb.perimeter;
    let totalArea: number = 0.0;
    for (let i = 0; i < this.m_nodes.length; i++) {
      let node = this.m_nodes[i];
      if (node.height < 0) {
        continue;
      }
      totalArea += node.aabb.perimeter;
    }
    return totalArea / rootArea;
  }
  public rebuildBottomUp(): void {
    let nodes: number[] = [];
    for (let i = 0; i < this.m_nodes.length; i++) {
      nodes.push(0);
    }
    let count = 0;
    for (let i = 0; i < this.m_nodes.length; i++) {
      if (this.m_nodes[i].height < 0) {
        continue;
      }
      if (this.m_nodes[i].isLeaf()) {
        this.m_nodes[i].parentOrNext = b2_nullNode;
        nodes[count] = i;
        count += 1;
      } else {
        this.freeNode(i);
      }
    }
    while (count > 1) {
      let minCost = b2_maxFloat;
      let iMin = -1,
        jMin = -1;
      for (let i = 0; i < count; i++) {
        let aabbi = this.m_nodes[nodes[i]].aabb;
        for (let j = i + 1; j < count; j++) {
          let aabbj = this.m_nodes[nodes[j]].aabb;
          let b = new B2AABB();
          b.combine(aabbi, aabbj);
          let cost = b.perimeter;
          if (cost < minCost) {
            iMin = i;
            jMin = j;
            minCost = cost;
          }
        }
      }
      let index1 = nodes[iMin];
      let index2 = nodes[jMin];
      let child1 = this.m_nodes[index1];
      let child2 = this.m_nodes[index2];
      let parentIndex = this.allocateNode();
      let parent = this.m_nodes[parentIndex];
      parent.child1 = index1;
      parent.child2 = index2;
      parent.height = 1 + Math.max(child1.height, child2.height);
      parent.aabb.combine(child1.aabb, child2.aabb);
      parent.parentOrNext = b2_nullNode;
      child1.parentOrNext = parentIndex;
      child2.parentOrNext = parentIndex;
      nodes[jMin] = nodes[count - 1];
      nodes[iMin] = parentIndex;
      count -= 1;
    }
    this.m_root = nodes[0];
    this.validate();
  }

  public shiftOrigin(newOrigin: B2Vec2): void {
    for (let i = 0; i < this.m_nodes.length; i++) {
      subtractEqual(this.m_nodes[i].aabb.lowerBound, newOrigin);
      subtractEqual(this.m_nodes[i].aabb.upperBound, newOrigin);
    }
  }

  allocateNode(): number {
    if (this.m_freeList == b2_nullNode) {
      let node = new B2TreeNode<T>();
      node.parentOrNext = b2_nullNode;
      node.height = -1;
      this.m_nodes.push(node);
      this.m_freeList = this.m_nodes.length - 1;
    }
    let nodeId = this.m_freeList;
    this.m_freeList = this.m_nodes[nodeId].parentOrNext;
    this.m_nodes[nodeId].parentOrNext = b2_nullNode;
    this.m_nodes[nodeId].child1 = b2_nullNode;
    this.m_nodes[nodeId].child2 = b2_nullNode;
    this.m_nodes[nodeId].height = 0;
    this.m_nodes[nodeId].userData = null;
    return nodeId;
  }

  freeNode(nodeId: number): void {
    this.m_nodes[nodeId].parentOrNext = this.m_freeList;
    this.m_nodes[nodeId].height = -1;
    this.m_freeList = nodeId;
  }

  insertLeaf(leaf: number): void {
    this.m_insertionCount += 1;
    if (this.m_root == b2_nullNode) {
      this.m_root = leaf;
      this.m_nodes[this.m_root].parentOrNext = b2_nullNode;
      return;
    }
    let leafAABB = this.m_nodes[leaf].aabb;
    let index = this.m_root;
    while (this.m_nodes[index].isLeaf() == false) {
      let child1 = this.m_nodes[index].child1;
      let child2 = this.m_nodes[index].child2;
      let area = this.m_nodes[index].aabb.perimeter;
      let combinedAABB = new B2AABB();
      combinedAABB.combine(this.m_nodes[index].aabb, leafAABB);
      let combinedArea = combinedAABB.perimeter;
      let cost = float_2 * combinedArea;
      let inheritanceCost = float_2 * (combinedArea - area);
      let cost1: number;
      if (this.m_nodes[child1].isLeaf()) {
        let aabb = new B2AABB();
        aabb.combine(leafAABB, this.m_nodes[child1].aabb);
        cost1 = aabb.perimeter + inheritanceCost;
      } else {
        let aabb = new B2AABB();
        aabb.combine(leafAABB, this.m_nodes[child1].aabb);
        let oldArea = this.m_nodes[child1].aabb.perimeter;
        let newArea = aabb.perimeter;
        cost1 = newArea - oldArea + inheritanceCost;
      }
      let cost2: number;
      if (this.m_nodes[child2].isLeaf()) {
        let aabb = new B2AABB();
        aabb.combine(leafAABB, this.m_nodes[child2].aabb);
        cost2 = aabb.perimeter + inheritanceCost;
      } else {
        let aabb = new B2AABB();
        aabb.combine(leafAABB, this.m_nodes[child2].aabb);
        let oldArea = this.m_nodes[child2].aabb.perimeter;
        let newArea = aabb.perimeter;
        cost2 = newArea - oldArea + inheritanceCost;
      }
      if (cost < cost1 && cost < cost2) {
        break;
      }
      if (cost1 < cost2) {
        index = child1;
      } else {
        index = child2;
      }
    }
    let sibling = index;
    let oldParent = this.m_nodes[sibling].parentOrNext;
    let newParent = this.allocateNode();
    this.m_nodes[newParent].parentOrNext = oldParent;
    this.m_nodes[newParent].userData = null;
    this.m_nodes[newParent].aabb.combine(leafAABB, this.m_nodes[sibling].aabb);
    this.m_nodes[newParent].height = this.m_nodes[sibling].height + 1;
    if (oldParent != b2_nullNode) {
      if (this.m_nodes[oldParent].child1 == sibling) {
        this.m_nodes[oldParent].child1 = newParent;
      } else {
        this.m_nodes[oldParent].child2 = newParent;
      }
      this.m_nodes[newParent].child1 = sibling;
      this.m_nodes[newParent].child2 = leaf;
      this.m_nodes[sibling].parentOrNext = newParent;
      this.m_nodes[leaf].parentOrNext = newParent;
    } else {
      this.m_nodes[newParent].child1 = sibling;
      this.m_nodes[newParent].child2 = leaf;
      this.m_nodes[sibling].parentOrNext = newParent;
      this.m_nodes[leaf].parentOrNext = newParent;
      this.m_root = newParent;
    }
    index = this.m_nodes[leaf].parentOrNext;
    while (index != b2_nullNode) {
      index = this.balance(index);
      let child1 = this.m_nodes[index].child1;
      let child2 = this.m_nodes[index].child2;
      this.m_nodes[index].height = 1 + Math.max(this.m_nodes[child1].height, this.m_nodes[child2].height);
      this.m_nodes[index].aabb.combine(this.m_nodes[child1].aabb, this.m_nodes[child2].aabb);
      index = this.m_nodes[index].parentOrNext;
    }
  }

  removeLeaf(leaf: number): void {
    if (leaf == this.m_root) {
      this.m_root = b2_nullNode;
      return;
    }
    let parent = this.m_nodes[leaf].parentOrNext;
    let grandParent = this.m_nodes[parent].parentOrNext;
    let sibling: number;
    if (this.m_nodes[parent].child1 == leaf) {
      sibling = this.m_nodes[parent].child2;
    } else {
      sibling = this.m_nodes[parent].child1;
    }
    if (grandParent != b2_nullNode) {
      if (this.m_nodes[grandParent].child1 == parent) {
        this.m_nodes[grandParent].child1 = sibling;
      } else {
        this.m_nodes[grandParent].child2 = sibling;
      }
      this.m_nodes[sibling].parentOrNext = grandParent;
      this.freeNode(parent);
      let index = grandParent;
      while (index != b2_nullNode) {
        index = this.balance(index);
        let child1 = this.m_nodes[index].child1;
        let child2 = this.m_nodes[index].child2;
        this.m_nodes[index].aabb.combine(this.m_nodes[child1].aabb, this.m_nodes[child2].aabb);
        this.m_nodes[index].height = 1 + Math.max(this.m_nodes[child1].height, this.m_nodes[child2].height);
        index = this.m_nodes[index].parentOrNext;
      }
    } else {
      this.m_root = sibling;
      this.m_nodes[sibling].parentOrNext = b2_nullNode;
      this.freeNode(parent);
    }
  }

  balance(iA: number): number {
    let A = this.m_nodes[iA];
    if (A.isLeaf() || A.height < float_2) {
      return iA;
    }
    let iB = A.child1;
    let iC = A.child2;
    let B = this.m_nodes[iB];
    let C = this.m_nodes[iC];
    let balance = C.height - B.height;
    if (balance > 1) {
      let iF = C.child1;
      let iG = C.child2;
      let F = this.m_nodes[iF];
      let G = this.m_nodes[iG];
      C.child1 = iA;
      C.parentOrNext = A.parentOrNext;
      A.parentOrNext = iC;
      if (C.parentOrNext != b2_nullNode) {
        if (this.m_nodes[C.parentOrNext].child1 == iA) {
          this.m_nodes[C.parentOrNext].child1 = iC;
        } else {
          this.m_nodes[C.parentOrNext].child2 = iC;
        }
      } else {
        this.m_root = iC;
      }
      if (F.height > G.height) {
        C.child2 = iF;
        A.child2 = iG;
        G.parentOrNext = iA;
        A.aabb.combine(B.aabb, G.aabb);
        C.aabb.combine(A.aabb, F.aabb);
        A.height = 1 + Math.max(B.height, G.height);
        C.height = 1 + Math.max(A.height, F.height);
      } else {
        C.child2 = iG;
        A.child2 = iF;
        F.parentOrNext = iA;
        A.aabb.combine(B.aabb, F.aabb);
        C.aabb.combine(A.aabb, G.aabb);
        A.height = 1 + Math.max(B.height, F.height);
        C.height = 1 + Math.max(A.height, G.height);
      }
      return iC;
    }
    if (balance < -1) {
      let iD = B.child1;
      let iE = B.child2;
      let D = this.m_nodes[iD];
      let E = this.m_nodes[iE];
      B.child1 = iA;
      B.parentOrNext = A.parentOrNext;
      A.parentOrNext = iB;
      if (B.parentOrNext != b2_nullNode) {
        if (this.m_nodes[B.parentOrNext].child1 == iA) {
          this.m_nodes[B.parentOrNext].child1 = iB;
        } else {
          this.m_nodes[B.parentOrNext].child2 = iB;
        }
      } else {
        this.m_root = iB;
      }
      if (D.height > E.height) {
        B.child2 = iD;
        A.child1 = iE;
        E.parentOrNext = iA;
        A.aabb.combine(C.aabb, E.aabb);
        B.aabb.combine(A.aabb, D.aabb);
        A.height = 1 + Math.max(C.height, E.height);
        B.height = 1 + Math.max(A.height, D.height);
      } else {
        B.child2 = iE;
        A.child1 = iD;
        D.parentOrNext = iA;
        A.aabb.combine(C.aabb, D.aabb);
        B.aabb.combine(A.aabb, E.aabb);
        A.height = 1 + Math.max(C.height, D.height);
        B.height = 1 + Math.max(A.height, E.height);
      }
      return iB;
    }
    return iA;
  }

  validateStructure(index: number): void {
    if (index == b2_nullNode) {
      return;
    }
    let node = this.m_nodes[index];
    let child1 = node.child1;
    let child2 = node.child2;
    if (node.isLeaf()) {
      return;
    }
    this.validateStructure(child1);
    this.validateStructure(child2);
  }
  validateMetrics(index: number): void {
    if (index == b2_nullNode) {
      return;
    }
    let node = this.m_nodes[index];
    let child1 = node.child1;
    let child2 = node.child2;
    if (node.isLeaf()) {
      return;
    }
    let aabb = new B2AABB();
    aabb.combine(this.m_nodes[child1].aabb, this.m_nodes[child2].aabb);
    this.validateMetrics(child1);
    this.validateMetrics(child2);
  }
}
