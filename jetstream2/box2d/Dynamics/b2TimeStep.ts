import { B2Vec2 } from '../Common/b2Math';

export class B2Profile {
  public step: number = 0.0;
  public collide: number = 0.0;
  public solve: number = 0.0;
  public solveInit: number = 0.0;
  public solveVelocity: number = 0.0;
  public solvePosition: number = 0.0;
  public broadPhase: number = 0.0;
  public solveTOI: number = 0.0;
  constructor() {}
}

export class B2TimeStep {
  public dt: number = 0.0;
  public inv_dt: number = 0.0;
  public dtRatio: number = 0.0;
  public velocityIterations: number = 0;
  public positionIterations: number = 0;
  public warmStarting: boolean = false;
}

export class B2Array<T> {
  array: T[] = [];
  constructor(count: number | null = null, repeatedValue: T | null = null) {
    if (count != null && repeatedValue != null) {
      for (let i = 0; i < count; i++) {
        this.array.push(repeatedValue);
      }
    }
  }
  public append(newElement: T): void {
    this.array.push(newElement);
  }
  public insert(newElement: T, i: number): void {
    this.array.splice(i, 0, newElement);
  }
  public removeAtIndex(index: number): T[] {
    return this.array.splice(index, 1);
  }
  public removeLast(): void {
    this.array.pop();
  }
  public removeAll(keepCapacity: boolean = true): void {
    this.array.splice(0, this.array.length);
  }
  public get(index: number): T {
    return this.array[index];
  }
  public set(index: number, newValue: T): void {
    this.array[index] = newValue;
  }
  public clone(): B2Array<T> {
    let clone = new B2Array<T>();
    for (let e of this.array) {
      clone.array.push(e);
    }
    return clone;
  }
  public get count(): number {
    return this.array.length;
  }
}

export class B2Position {
  constructor(c: B2Vec2, a: number) {
    this.c = c;
    this.a = a;
  }
  c: B2Vec2;
  a: number;
}
export class B2Velocity {
  constructor(v: B2Vec2, w: number) {
    this.v = v;
    this.w = w;
  }
  v: B2Vec2;
  w: number;
}
export class B2SolverData {
  step = new B2TimeStep();
  positions = new B2Array<B2Position>();
  velocities = new B2Array<B2Velocity>();
}
