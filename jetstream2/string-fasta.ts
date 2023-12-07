// The Great Computer Language Shootout
//  http://shootout.alioth.debian.org
//
//  Contributed by Ian Osgood

let last: number = 42;
let ret: number = 0;
let A: number = 3877;
let C: number = 29573;
let M: number = 139968;
const TOBASE_NUMBER_60 = 60;
const TOBASE_NUMBER_0_27 = 0.27;
const TOBASE_NUMBER_0_12 = 0.12;
const TOBASE_NUMBER_0_02 = 0.02;
const TOBASE_NUMBER_0_3029549426680 = 0.302954942668;
const TOBASE_NUMBER_0_1979883004921 = 0.1979883004921;
const TOBASE_NUMBER_0_1975473066391 = 0.1975473066391;
const TOBASE_NUMBER_0_3015094502008 = 0.3015094502008;
const TOBASE_NUMBER_100000 = 100000;
const TOBASE_NUMBER_3 = 3;
const TOBASE_NUMBER_2 = 2;
const TOBASE_NUMBER_5 = 5;
const TOBASE_NUMBER_1000 = 1000;

function rand(max: number): number {
  last = (last * A + C) % M;
  return (max * last) / M;
}

function makeCumulative(table: Map<string, number>): void {
  let last: string | null = null;
  for (let key of table.keys()) {
    if (last) {
      table.set(key, (table.get(key) || 0) + (table.get(last) || 0));
    }
    last = key;
  }
}

function fastaRepeat(m: number, seq: string): void {
  let n: number = m;
  let seqi: number = 0;
  let lenOut: number = 60;
  while (n > 0) {
    if (n < lenOut) {
      lenOut = n;
    }
    if (seqi + lenOut < seq.length) {
      ret += lenOut;
      seqi += lenOut;
    } else {
      let s: string = seq.substring(seqi);
      seqi = lenOut - s.length;
      ret += (s + seq.substring(0, seqi)).length;
    }
    n -= lenOut;
  }
}

function fastaRandom(m: number, table: Map<string, number>): void {
  let n: number = m;
  let line: string[] = new Array(TOBASE_NUMBER_60);
  makeCumulative(table);
  while (n > 0) {
    if (n < line.length) {
      line = new Array(n);
    }
    for (let i: number = 0; i < line.length; i++) {
      let r = rand(1);
      for (let item of table) {
        if (r < item[1]) {
          line[i] = item[0];
          break;
        }
      }
    }
    ret += line.length;
    n -= line.length;
  }
}

class BenchMark {
  /*
   *  @Benchmark
   */
  runIteration(): void {
    const count: number = 7;

    let alu: string =
      'GGCCGGGCGCGGTGGCTCACGCCTGTAATCCCAGCACTTTGG' + //string 1
      'GAGGCCGAGGCGGGCGGATCACCTGAGGTCAGGAGTTCGAGA' + //string 2
      'CCAGCCTGGCCAACATGGTGAAACCCCGTCTCTACTAAAAAT' + //string 3
      'ACAAAAATTAGCCGGGCGTGGTGGCGCGCGCCTGTAATCCCA' + //string 4
      'GCTACTCGGGAGGCTGAGGCAGGAGAATCGCTTGAACCCGGG' + //string 5
      'AGGCGGAGGTTGCAGTGAGCCGAGATCGCGCCACTGCACTCC' + //string 6
      'AGCCTGGGCGACAGAGCGAGACTCCGTCTCAAAAA';

    let iub: Map<string, number> = new Map();
    iub.set('a', TOBASE_NUMBER_0_27);
    iub.set('c', TOBASE_NUMBER_0_12);
    iub.set('g', TOBASE_NUMBER_0_12);
    iub.set('t', TOBASE_NUMBER_0_27);
    iub.set('B', TOBASE_NUMBER_0_02);
    iub.set('D', TOBASE_NUMBER_0_02);
    iub.set('H', TOBASE_NUMBER_0_02);
    iub.set('K', TOBASE_NUMBER_0_02);
    iub.set('M', TOBASE_NUMBER_0_02);
    iub.set('N', TOBASE_NUMBER_0_02);
    iub.set('R', TOBASE_NUMBER_0_02);
    iub.set('S', TOBASE_NUMBER_0_02);
    iub.set('V', TOBASE_NUMBER_0_02);
    iub.set('W', TOBASE_NUMBER_0_02);
    iub.set('Y', TOBASE_NUMBER_0_02);

    let homoSap: Map<string, number> = new Map();
    homoSap.set('a', TOBASE_NUMBER_0_3029549426680);
    homoSap.set('c', TOBASE_NUMBER_0_1979883004921);
    homoSap.set('g', TOBASE_NUMBER_0_1975473066391);
    homoSap.set('t', TOBASE_NUMBER_0_3015094502008);

    fastaRepeat(TOBASE_NUMBER_2 * count * TOBASE_NUMBER_100000, alu);
    fastaRandom(TOBASE_NUMBER_3 * count * TOBASE_NUMBER_1000, iub);
    fastaRandom(TOBASE_NUMBER_5 * count * TOBASE_NUMBER_1000, homoSap);

    let expected: number = 1456000;
    if (ret != expected) {
      throw new Error(
        'ERROR: bad result: expected ' + expected + ' but got ' + ret
      );
    }
  }
}

declare interface ArkTools {
  timeInUs(args: number): number;
}

let start = ArkTools.timeInUs() / TOBASE_NUMBER_1000;
new BenchMark().runIteration();
let end = ArkTools.timeInUs() / TOBASE_NUMBER_1000;
print(`string-fasta: ms = ${end - start}`);
