// Copyright (c) 2004 by Arthur Langereis (arthur_ext at domain xfinitegames, tld com)

const BASE_VALUE = 1000;
const DECIMALISM_256 = 0x100;
const LOOP_I_MAX_350 = 350;
const LOOP_Y_MAX_256 = 256;
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

let result = 0;

// 1 op = 2 assigns, 16 compare/branches, 8 ANDs, (0-8) ADDs, 8 SHLs
// O(n)
function bitSinByte(b: number): number {
  let m = 1;
  let c = 0;
  while (m < DECIMALISM_256) {
    if ((b & m) != 0) {
      c += 1;
    }
    m <<= 1;
  }
  return c;
}

function timeFunc(): number {
  let sum = 0;
  for (let i = 0; i < LOOP_I_MAX_350; i++) {
    for (let y = 0; y < LOOP_Y_MAX_256; y++) {
      sum += bitSinByte(y);
    }
  }
  return sum;
}
/// @Benchmark
function run(): void {
  result = timeFunc();
  let expected = 358400;
  if (result != expected) {
    throw new Error('ERROR: bad result: expected ' + expected + ' but got ' + result);
  }
}

let startTime = currentTimestamp13();
for (let i = 0; i < EXECUTION_MAX_80; i++) {
  let startTimeInLoop = currentTimestamp13();
  run();
  let endTimeInLoop = currentTimestamp13();
  //log("bitops_bits_in_byte: ms = " +  (endTimeInLoop - startTimeInLoop) + " i= " + i)
}
let endTime = currentTimestamp13();
print('bitops-bits-in-byte: ms = ' + (endTime - startTime));
