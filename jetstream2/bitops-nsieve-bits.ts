// The Great Computer Language Shootout
//  http://shootout.alioth.debian.org
//
//  Contributed by Ian Osgood

const BASE_VALUE = 1000;
const LOOP_I_MAX_600000 = 600000;
const LOOP_MAX_4 = 4;
const NUMBER_31 = 31;
const NUMBER_32 = 32;
const NUMBER_1000 = 1000;
const NUMBER_100000 = 100000;
const NUMBER_2147483647 = 2147483647;
const NUMBER__2147483648 = -2147483648;
const BIT_BINARY_NUMBER_5 = 5;
const BIT_BINARY_NUMBER_10000 = 10000;
const EXECUTION_MAX_80 = 80;

let inDebug = false;
function log(str: string): void {
  if (inDebug) {
    print(str);
  }
}
function currentTimestamp13(): number {
  return ArkTools.timeInUs() / BASE_VALUE;
}

function pad(number: number, width: number): string {
  let s = number.toString();
  let prefixWidth = width - s.length;
  if (prefixWidth > 0) {
    for (let i = 0; i < prefixWidth; i++) {
      s = ' ' + s;
    }
  }
  return s;
}

function primes(isPrime: number[], n: number): void {
  let count = 0;
  let m = BIT_BINARY_NUMBER_10000 << n;
  let size = (m + NUMBER_31) >> BIT_BINARY_NUMBER_5;
  for (let i = 0; i < size; i++) {
    isPrime[i] = 0xffffffff;
  }
  for (let i = 2; i < m; i++) {
    if ((isPrime[i >> BIT_BINARY_NUMBER_5] & (1 << i % NUMBER_32)) != 0) {
      let j = i + i;
      while (j < m) {
        let tmp = transBigInt32(isPrime[j >> BIT_BINARY_NUMBER_5]);
        tmp &= transBigInt32(~(1 << (j & NUMBER_31)));
        isPrime[j >> BIT_BINARY_NUMBER_5] = tmp;
        j += i;
      }
      count += 1;
    }
  }
}

function sieve(): number[] {
  let isPrime = new Array<number>();
  for (let i = LOOP_MAX_4; i <= LOOP_MAX_4; i++) {
    isPrime = new Array<number>(((BIT_BINARY_NUMBER_10000 << i) + NUMBER_31) >> BIT_BINARY_NUMBER_5);
    primes(isPrime, i);
  }

  return isPrime;
}

function run(): void {
  let result = sieve();
  let sum = 0;
  for (let i = 0; i < result.length; i++) {
    sum += result[i];
    if (inDebug && i % NUMBER_1000 == 0) {
      //log(`bitops-nsieve-bits: i = ${i} sum= ${sum}`)
    }
  }

  let expected = -1286749544853;
  if (sum != expected) {
    throw new Error('ERROR: bad result: expected ' + expected + ' but got ' + sum);
  }
}

let startTime = currentTimestamp13();
for (let i = 0; i < EXECUTION_MAX_80; i++) {
  let startTimeInLoop = currentTimestamp13();
  run();
  let endTimeInLoop = currentTimestamp13();
  //log(`bitops-nsieve-bits: ms = ${endTimeInLoop - startTimeInLoop} i = ${i}`)
}
let endTime = currentTimestamp13();
print(`bitops-nsieve-bits: ms = ${endTime - startTime}`);

declare interface ArkTools {
  timeInUs(args: number): number;
}
function transBigInt32(bigInt32Num: number): number {
  let tmp = bigInt32Num;
  if (tmp > NUMBER_2147483647) {
    let max = 4294967295;
    tmp = tmp % (max + 1);
    if (tmp > NUMBER_2147483647) {
      tmp = tmp - max - 1;
    }
  } else if (tmp < NUMBER__2147483648) {
    let max = 4294967295;
    tmp = tmp % (max + 1);
    if (tmp < NUMBER__2147483648) {
      tmp = tmp + max + 1;
    }
  }
  return tmp;
}
