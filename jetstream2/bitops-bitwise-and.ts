/*
 * Copyright (C) 2007 Apple Inc.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

const BASE_VALUE = 1000;
const LOOP_I_MAX_600000 = 600000;
const NUMBER_100000 = 100000;
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

function run(): void {
  let bitwiseAndValue = 4294967296;
  for (let i = 0; i < LOOP_I_MAX_600000; i++) {
    bitwiseAndValue = bitwiseAndValue & i;
    if (inDebug && i % NUMBER_100000 == 0) {
      //log(`bitops-bitwise-and: i = ${i} bitwiseAndValue = ${bitwiseAndValue}`)
    }
  }

  let result = bitwiseAndValue;
  let expected = 0;
  if (result != expected) {
    throw new Error(
      `ERROR: bad result: expected ${expected} but got ${result}`
    );
  }
}

let startTime = currentTimestamp13();
for (let i = 0; i < EXECUTION_MAX_80; i++) {
  let startTimeInLoop = currentTimestamp13();
  run();
  let endTimeInLoop = currentTimestamp13();
  //log(`bitops-bitwise-and: ms = ${endTimeInLoop - startTimeInLoop} i = ${i}`)
}
let endTime = currentTimestamp13();
print(`bitops-bitwise-and: ms = ${endTime - startTime}`);

declare interface ArkTools {
  timeInUs(args: number): number;
}