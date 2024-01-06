const SEEDINIT = 74755;
const SEED_1309 = 1309;
const SEED_13849 = 13849;
const SEED_65535 = 65535;
const DIVISOR_120 = 120;
const SUBTRACT_60 = 60;
const DIVISOR_3 = 3;
const LOOP_TIMES = 5000;
const TIME_CONVERSION = 1000;
const TEST_TIMES = 15;

/* Intmm, Mm */
let rowsize = 40;

/* global */
let seed: number = 0; /* converted to long for 16 bit WR*/

let rma: number[][] = Array.from({ length: rowsize + 1 }, (v: number) =>
    Array.from({ length: rowsize + 1 }, (v: number) => 0.0)
  ),
  rmb: number[][] = Array.from({ length: rowsize + 1 }, (v: number) =>
    Array.from({ length: rowsize + 1 }, (v: number) => 0.0)
  ),
  rmr: number[][] = Array.from({ length: rowsize + 1 }, (v: number) =>
    Array.from({ length: rowsize + 1 }, (v: number) => 0.0)
  );

function initrand(): void {
  seed = SEEDINIT; /* constant to long WR*/
}

function rand(): number {
  seed = (seed * SEED_1309 + SEED_13849) & SEED_65535; /* constants to long WR*/
  return seed; /* typecast back to int WR*/
}

/* Multiplies two real matrices. */

function rInitmatrix(m: number[][]): void {
  let temp: number;
  for (let i = 1; i <= rowsize; i++) {
    for (let j = 1; j <= rowsize; j++) {
      temp = rand();
      m[i][j] = (temp - Math.floor(temp / DIVISOR_120) * DIVISOR_120 - SUBTRACT_60) / DIVISOR_3;
    }
  }
}

function rInnerproduct(result: number[][], a: number[][], b: number[][], row: number, column: number): void {
  /* computes the inner product of A[row,*] and B[*,column] */
  result[row][column] = 0.0;
  for (let i = 1; i <= rowsize; i++) {
    result[row][column] = result[row][column] + a[row][i] * b[i][column];
  }
}

function Mm(run: number): void {
  initrand();

  rInitmatrix(rma);

  rInitmatrix(rmb);
  for (let i = 1; i <= rowsize; i++) {
    for (let j = 1; j <= rowsize; j++) {
      rInnerproduct(rmr, rma, rmb, i, j);
    }
  }
  if (run < rowsize) {
    //printLog(`${rmr[run + 1][run + 1]}`)
  }
}

class Benchmark {
  /*
   * @Benchmark
   */
  runIteration(): void {
    for (let i = 0; i < LOOP_TIMES; i++) {
      Mm(i);
    }
  }
}

//以下是测试打印日志相关代码
const isDebug = false;
function printLog(str: string): void {
  if (isDebug) {
    print(str);
  }
}
declare interface ArkTools {
  timeInUs(args: number): number;
}
function startRun(times: number, ben: Benchmark = new Benchmark()) {
  let start = ArkTools.timeInUs() / TIME_CONVERSION;
  for (let i = 0; i < times; i++) {
    ben.runIteration();
  }
  let end = ArkTools.timeInUs() / TIME_CONVERSION;
  print('float-mm: ms = ' + (end - start).toString());
}

startRun(TEST_TIMES);
