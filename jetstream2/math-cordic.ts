/**
 ** Copyright (C) Rich Moore.  All rights reserved.
 *
 ** Redistribution and use in source and binary forms, with or without
 ** modification, are permitted provided that the following conditions
 ** are met:
 ** 1. Redistributions of source code must retain the above copyright
 **    notice, this list of conditions and the following disclaimer.
 ** 2. Redistributions in binary form must reproduce the above copyright
 **    notice, this list of conditions and the following disclaimer in the
 **    documentation and/or other materials provided with the distribution.
 *
 ** THIS SOFTWARE IS PROVIDED BY CONTRIBUTORS ``AS IS'' AND ANY
 ** EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 ** IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 ** PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
 ** CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 ** EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 ** PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 ** PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 ** OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 ** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 ** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 **/

/////. Start CORDIC
const FI_CONST = 65536.0;
const DEG_CONST = 0.017453;
const AG_CONST = 0.607252935;
const ANGLE_1_CONST = 45.0;
const ANGLE_2_CONST = 26.565;
const ANGLE_3_CONST = 14.0362;
const ANGLE_4_CONST = 7.12502;
const ANGLE_5_CONST = 3.57633;
const ANGLE_6_CONST = 1.78991;
const ANGLE_7_CONST = 0.895174;
const ANGLE_8_CONST = 0.447614;
const ANGLE_9_CONST = 0.223811;
const ANGLE_10_CONST = 0.111906;
const ANGLE_11_CONST = 0.055953;
const ANGLE_12_CONST = 0.027977;
const STEP_CONST = 12;
const CORDIC_CONST = 25000;
const NUM_1000_CONST = 1000;
const NUM_TIME_LOOP1_CONST = 80;
function FIXED(X: number): number {
  return X * FI_CONST;
}

function FLOAT(X: number): number {
  return X / FI_CONST;
}

function DEG2RAD(X: number): number {
  return DEG_CONST * X;
}

let Angles: number[] = [
  FIXED(ANGLE_1_CONST),
  FIXED(ANGLE_2_CONST),
  FIXED(ANGLE_3_CONST),
  FIXED(ANGLE_4_CONST),
  FIXED(ANGLE_5_CONST),
  FIXED(ANGLE_6_CONST),
  FIXED(ANGLE_7_CONST),
  FIXED(ANGLE_8_CONST),
  FIXED(ANGLE_9_CONST),
  FIXED(ANGLE_10_CONST),
  FIXED(ANGLE_11_CONST),
  FIXED(ANGLE_12_CONST)
];

let Target: number = 28.027;

function cordicsincos(Target: number): number {
  let x: number;
  let y: number;
  let TargetAngle: number;
  let CurrAngle: number;

  x = FIXED(AG_CONST); /* AG_CONST * cos(0) */
  y = 0; /* AG_CONST * sin(0) */

  TargetAngle = FIXED(Target);
  CurrAngle = 0;

  for (let Step = 0; Step < STEP_CONST; Step++) {
    let NewX: number;
    if (TargetAngle > CurrAngle) {
      NewX = x - (y >> Step);
      y = (x >> Step) + y;
      x = NewX;
      CurrAngle += Angles[Step];
    } else {
      NewX = x + (y >> Step);
      y = -(x >> Step) + y;
      x = NewX;
      CurrAngle -= Angles[Step];
    }
  }
  return FLOAT(x) * FLOAT(y);
}

///// End CORDIC
let total: number = 0.0;

function cordic(runs: number): number {
  let start = new Date().getTime();
  for (let i = 0; i < runs; i++) {
    total += cordicsincos(Target);
  }
  let end = new Date().getTime();
  return end - start;
}

declare interface ArkTools {
  timeInUs(args: number): number;
}

/**
 * @State
 */
class Benchmark {
  run(): void {
    cordic(CORDIC_CONST);
    let expected = 10362.570468755888;
    if (total != expected) {
      print('ERROR: bad result: expected  (expected)   but got (total)');
    }
  }

  /**
   * @Benchmark
   */
  runIterationTime(): void {
    let start = ArkTools.timeInUs() / NUM_1000_CONST;
    for (let i = 0; i < NUM_TIME_LOOP1_CONST; i++) {
      total = 0.0;
      this.run();
    }
    let end = ArkTools.timeInUs() / NUM_1000_CONST;
    print('math-cordic: ms = ' + (end - start));
  }
}

new Benchmark().runIterationTime();
