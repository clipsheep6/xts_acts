const NUM_1000 = 1000;
const NUM_2 = 2;
const NUM_3 = 3;
const NUM_4 = 4;
const NUM_121 = 121;
const NUM_501 = 501;
const NUM_120 = 120;
const NUM_500 = 500;

class Test {
  arr = new Int32Array(NUM_1000);

  constructor(num1: number, num2: number) {
    for (let i = 0; i < NUM_1000; i++) {
      switch (i % NUM_4) {
        case 0:
          this.arr[i] = this.add(num1, num2);
          break;
        case 1:
          this.arr[i] = this.subtract(num1, num2);
          break;
        case NUM_2:
          this.arr[i] = this.multiply(num1, num2);
          break;
        case NUM_3:
          this.arr[i] = this.divide(num1, num2);
          break;
        default:
          break;
      }
    }
  }
  add(num1: number, num2: number): number {
    return num1 + num2;
  }
  subtract(num1: number, num2: number): number {
    return num1 - num2;
  }
  multiply(num1: number, num2: number): number {
    return num1 * num2;
  }
  divide(num1: number, num2: number): number {
    return num1 / num2;
  }
}

class Benchmark {
  test?: Test;
  /*
   * @Benchmark
   */
  runIteration(): void {
    let startTime = ArkTools.timeInUs() / NUM_1000;
    for (let i = 1; i < NUM_121; i++) {
      for (let j = 1; j < NUM_501; j++) {
        let test = new Test(i, j);
        if (i === NUM_120 && j === NUM_500) {
          this.test = test;
        }
      }
    }
    let endTime = ArkTools.timeInUs() / NUM_1000;
    print(`code-first-load: ms = ${endTime - startTime}`);
    //deBugLog("对象创建完成");
    this.test!.arr[0] = 0;
  }
}
declare interface ArkTools {
  timeInUs(args: number): number;
}
let isDebug: boolean = false;
function deBugLog(msg: string): void {
  if (isDebug) {
    print(msg);
  }
}
new Benchmark().runIteration();