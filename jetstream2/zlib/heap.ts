import { replace16NumberCount } from './bitstream';

export class PopObject {
  index: number;
  value: number;
  length: number;
}
const Number_2 = 2;
const Number_4 = 4;

export class Heap {
  public buffer: Uint16Array;
  public length: number;

  constructor(length: number) {
    this.buffer = replace16NumberCount(length * Number_2);
    this.length = 0;
  }

  public getParent(index: number): number {
    return (((index - Number_2) / Number_4) | 0) * Number_2;
  }

  public getChild(index: number): number {
    return Number_2 * index + Number_2;
  }

  public push(index: number, value: number): number {
    let current: number = this.length;
    let parent: number;
    let heap = this.buffer;
    let swap: number;

    heap[this.length] = value;
    heap[this.length + 1] = index;
    this.length += 2;

    while (current > 0) {
      parent = this.getParent(current);

      if (heap[current] > heap[parent]) {
        swap = heap[current];
        heap[current] = heap[parent];
        heap[parent] = swap;

        swap = heap[current + 1];
        heap[current + 1] = heap[parent + 1];
        heap[parent + 1] = swap;

        current = parent;
      } else {
        break;
      }
    }
    return this.length;
  }

  public pop(): PopObject {
    let index: number = 0;
    let value: number = 0;
    let swap: number = 0;
    let current: number = 0;
    let parent: number = 0;
    let heap: Uint16Array = this.buffer;
    value = heap[0];
    index = heap[1];

    this.length -= 2;
    heap[0] = heap[this.length];
    heap[1] = heap[this.length + 1];

    parent = 0;
    while (true) {
      current = this.getChild(parent);

      if (current >= this.length) {
        break;
      }

      if (current + Number_2 < this.length && heap[current + Number_2] > heap[current]) {
        current += Number_2;
      }

      if (heap[current] > heap[parent]) {
        swap = heap[parent];
        heap[parent] = heap[current];
        heap[current] = swap;

        swap = heap[parent + 1];
        heap[parent + 1] = heap[current + 1];
        heap[current + 1] = swap;
      } else {
        break;
      }

      parent = current;
    }

    return { index: index, value: value, length: this.length };
  }
}
