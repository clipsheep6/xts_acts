const NX_NUMBER = 120;
const LOOP_COUNT = 15;
const NUM_EIGHT = 8;
const NUM_TWO = 2;
const NUM_THREE = 3;
const MAGNIFICATION = 50;
const TIME_UNIT = 1000;
const TEST_COUNT = 80;

class Morph {
  loops: number = LOOP_COUNT;
  nx: number = NX_NUMBER;
  nz: number = NX_NUMBER;

  morph(arr: Float64Array, f: number): void {
    let PI2nx = (Math.PI * NUM_EIGHT) / this.nx;
    let f30 = -(MAGNIFICATION * Math.sin(f * Math.PI * NUM_TWO));
    for (let i = 0; i < this.nz; i++) {
      for (let j = 0; j < this.nx; j++) {
        let index = NUM_THREE * (i * this.nx + j) + 1;
        let x = (j - 1) * PI2nx;
        arr[index] = Math.sin(x) * -f30;
      }
    }
  }

  runTest(): void {
    let a: Float64Array = new Float64Array(this.nx * this.nx * NUM_THREE);
    for (let index = 0; index < this.nx * this.nx * NUM_THREE; index++) {
      a[index] = 0;
    }

    for (let i = 0; i < this.loops; i++) {
      this.morph(a, i / this.loops);
    }
    let testOutput: number = 0;
    for (let i = 0; i < this.nx; i++) {
      let index = NUM_THREE * (i * this.nx + 1) + 1;
      if (index >= a.length) {
        break;
      }
      testOutput += a[index];
    }
    //debugLog("testOutput value is" + testOutput)

    let epsilon = 1e-13;
    if (Math.abs(testOutput) >= epsilon) {
      //debugLog("Error: bad test output: expected magnitude below" + epsilon + "but got" + testOutput)
    }
  }
}

let isdebug: boolean = false;
function debugLog(msg: string): void {
  if (isdebug) {
    print(msg);
  }
}

declare interface ArkTools {
  timeInUs(args: number): number;
}

/*
 * @State
 */
class Benchmark {
  /*
   * @Benchmark
   */
  run(): void {
    let start = ArkTools.timeInUs();
    let morph = new Morph();
    for (let i = 0; i < TEST_COUNT; i++) {
      morph.runTest();
    }
    let end = ArkTools.timeInUs();
    print('3d-morph: ms = ' + (end - start) / TIME_UNIT);
  }
}

new Benchmark().run();
