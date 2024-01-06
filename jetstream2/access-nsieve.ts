const SIEVE_COMMON_NUMBER = 10000;
const CURRENT_LOOP_COUNT = 3;
const MAX_LOOP_COUNT = 80;
const MS_CONVERSION_RATIO = 1000;

function pad(number: number, width: number): string {
  let s = number.toString();
  let prefixWidth = width - s.length;
  if (prefixWidth > 0) {
    for (let i = 1; i <= prefixWidth; i++) {
      s = ' ' + s;
    }
  }
  return s;
}

function nsieve(m: number, isPrime: Array<boolean | null>): number {
  let count;

  for (let i = 2; i <= m; i++) {
    isPrime[i] = true;
  }
  count = 0;

  for (let i = 2; i <= m; i++) {
    if (isPrime[i]) {
      for (let k = i + i; k <= m; k += i) {
        isPrime[k] = false;
      }
      count++;
    }
  }
  return count;
}

function sieve(): void {
  let sum = 0;
  for (let i = 1; i <= CURRENT_LOOP_COUNT; i++) {
    let m = (1 << i) * SIEVE_COMMON_NUMBER;
    let flags = new Array(m + 1).fill(null);
    sum += nsieve(m, flags);
  }
  return sum;
}

declare interface ArkTools {
  timeInUs(args: any): number;
}

/*
 *@State
 */
class Benchmark {
  run(): void {
    let result = sieve();
    let expected = 14302;
    if (result != expected) {
      print('ERROR: bad result: expected ' + expected + ' but got ' + result);
    }
  }

  /*
   * @Benchmark
   */
  runIterationTime(): void {
    let start = ArkTools.timeInUs();
    for (let i = 0; i < MAX_LOOP_COUNT; i++) {
      this.run();
    }
    let end = ArkTools.timeInUs();
    print('access-nsieve: ms = ' + (end - start) / MS_CONVERSION_RATIO);
  }
}

new Benchmark().runIterationTime();
