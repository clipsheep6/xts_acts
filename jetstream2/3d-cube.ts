/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

const LOOP_MAX = 50;
const VARRAY_LENGHT = 9;
const NORMAL_LENGHT = 6;
const HALF_NUMBER = 2;
const ARRAY_MAX_COUNT_FOUR = 4;
const ARRAY_MAX_COUNT_THR = 3;
const ARRAY_INDEX_TWO = 2;
const ARRAY_INDEX_THREE = 3;
const ARRAY_INDEX_FIVE = 5;
const ARRAY_INDEX_SIX = 6;
const ARRAY_INDEX_EIGHT = 8;
const ARRAY_INDEX_SEVEN = 7;
const ARRAY_INDEX_NINE = 9;
const ARRAY_INDEX_TEN = 10;
const ARRAY_INDEX_ELEVEN = 11;
const LINEAR_MEASURE = 180;
const VALIDATION_TWENTY = 20;
const VALIDATION_TWENTY_VALUE = 2889.0000000000045;
const VALIDATION_FORTY = 40;
const VALIDATION_FORTY_VALUE = 2889.0000000000055;
const VALIDATION_EIGHT = 80;
const VALIDATION_EIGHT_VALUE = 2889.000000000005;
const VALIDATION_OHS = 160;
const VALIDATION_OHS_VALUE = 2889.0000000000055;
const QARRAY_ONE_VALUE = 150;
const TIME_UNIT = 1000;

class Object2 {
  V: number[] = new Array();
}

class Object1 {
  LoopCount: number = 0;
  LoopMax: number = LOOP_MAX;
  TimeMax: number = 0;
  TimeAvg: number = 0;
  TimeMin: number = 0;
  TimeTemp: number = 0;
  TimeTotal: number = 0;
  Init: Boolean = false;
}

class CreateP {
  V: number[];
  constructor(X: number, Y: number, Z: number) {
    this.V = [X, Y, Z, 1];
  }
}

class Q {
  VArray: CreateP[] = new Array(VARRAY_LENGHT);
  Edge: number[][] = new Array();
  Normal: number[][] = new Array(NORMAL_LENGHT);
  Line: boolean[] = new Array();
  NumPx: number = 0;
  LastPx: number = 0;
}

class Cube {
  DrawLine(from: CreateP, to: CreateP): void {
    let x1 = from.V[0];
    let x2 = to.V[0];
    let y1 = from.V[1];
    let y2 = to.V[1];
    let dx = Math.abs(x2 - x1);
    let dy = Math.abs(y2 - y1);
    let x = x1;
    let y = y1;
    let IncX1: number, IncY1: number;
    let IncX2: number, IncY2: number;
    let Den: number;
    let Num: number;
    let NumAdd: number;
    let NumPix: number;

    if (x2 >= x1) {
      IncX1 = 1;
      IncX2 = 1;
    } else {
      IncX1 = -1;
      IncX2 = -1;
    }

    if (y2 >= y1) {
      IncY1 = 1;
      IncY2 = 1;
    } else {
      IncY1 = -1;
      IncY2 = -1;
    }

    if (dx >= dy) {
      IncX1 = 0;
      IncY2 = 0;
      Den = dx;
      Num = dx / HALF_NUMBER;
      NumAdd = dy;
      NumPix = dx;
    } else {
      IncX2 = 0;
      IncY1 = 0;
      Den = dy;
      Num = dy / HALF_NUMBER;
      NumAdd = dx;
      NumPix = dy;
    }
    NumPix = this.q.LastPx + NumPix;

    for (let i = this.q.LastPx; i < NumPix; i++) {
      Num += NumAdd;
      if (Num >= Den) {
        x += IncX1;
        y += IncY1;
      }
      x += IncX2;
      y += IncY2;
    }
    this.q.LastPx = NumPix;
  }

  CalcCross(V0: number[], V1: number[]): number[] {
    let Cross: number[] = [0, 0, 0, 0];
    Cross[0] = V0[1] * V1[ARRAY_INDEX_TWO] - V0[ARRAY_INDEX_TWO] * V1[1];
    Cross[1] = V0[ARRAY_INDEX_TWO] * V1[0] - V0[0] * V1[ARRAY_INDEX_TWO];
    Cross[ARRAY_INDEX_TWO] = V0[0] * V1[1] - V0[1] * V1[0];
    return Cross;
  }

  CalcNormal(V0: number[], V1: number[], V2: number[]): number[] {
    let A: number[] = [0, 0, 0, 0];
    let B: number[] = [0, 0, 0, 0];
    for (let i = 0; i < ARRAY_MAX_COUNT_THR; i++) {
      A[i] = V0[i] - V1[i];
      B[i] = V2[i] - V1[i];
    }
    A = this.CalcCross(A, B);
    let x = A[0] * A[0] + A[1] * A[1] + A[ARRAY_INDEX_TWO] * A[ARRAY_INDEX_TWO];
    let Length = Math.sqrt(x);
    for (let i = 0; i < ARRAY_MAX_COUNT_THR; i++) {
      A[i] = A[i] / Length;
    }
    A[ARRAY_INDEX_THREE] = 1;
    return A;
  }

  MMulti(M1: number[][], M2: number[][]): number[][] {
    let M: number[][] = [
      [0, 0, 0, 0],
      [0, 0, 0, 0],
      [0, 0, 0, 0],
      [0, 0, 0, 0]
    ];
    for (let i = 0; i < ARRAY_MAX_COUNT_FOUR; i++) {
      for (let j = 0; j < ARRAY_MAX_COUNT_FOUR; j++) {
        M[i][j] =
          M1[i][0] * M2[0][j] +
          M1[i][1] * M2[1][j] +
          M1[i][ARRAY_INDEX_TWO] * M2[ARRAY_INDEX_TWO][j] +
          M1[i][ARRAY_INDEX_THREE] * M2[ARRAY_INDEX_THREE][j];
      }
    }
    return M;
  }

  VMulti(M: number[][], V: number[]): number[] {
    let Vect: number[] = [0, 0, 0, 0];
    for (let i = 0; i < ARRAY_MAX_COUNT_FOUR; i++) {
      Vect[i] =
        M[i][0] * V[0] + M[i][1] * V[1] + M[i][ARRAY_INDEX_TWO] * V[ARRAY_INDEX_TWO] + M[i][ARRAY_INDEX_THREE] * V[ARRAY_INDEX_THREE];
    }
    return Vect;
  }

  VMulti2(M: number[][], V: number[]): number[] {
    let Vect: number[] = [0, 0, 0, 0];
    for (let i = 0; i < ARRAY_MAX_COUNT_FOUR; i++) {
      Vect[i] = M[i][0] * V[0] + M[i][1] * V[1] + M[i][ARRAY_INDEX_TWO] * V[ARRAY_INDEX_TWO];
    }
    return Vect;
  }

  Translate(
    M: number[][],
    Dx: number,
    Dy: number,
    Dz: number
  ): number[][] {
    let T = [
      [1, 0, 0, Dx],
      [0, 1, 0, Dy],
      [0, 0, 1, Dz],
      [0, 0, 0, 1]
    ];
    return this.MMulti(T, M);
  }

  RotateX(M: number[][], Phi: number): number[][] {
    let a = Phi;
    a *= Math.PI / LINEAR_MEASURE;
    let Cos = Math.cos(a);
    let Sin = Math.sin(a);
    let R: number[][] = [
      [1, 0, 0, 0],
      [0, Cos, -Sin, 0],
      [0, Sin, Cos, 0],
      [0, 0, 0, 1]
    ];
    return this.MMulti(R, M);
  }

  RotateY(M: number[][], Phi: number): number[][] {
    let a = Phi;
    a *= Math.PI / LINEAR_MEASURE;
    let Cos = Math.cos(a);
    let Sin = Math.sin(a);
    let R: number[][] = [
      [Cos, 0, Sin, 0],
      [0, 1, 0, 0],
      [-Sin, 0, Cos, 0],
      [0, 0, 0, 1]
    ];
    return this.MMulti(R, M);
  }

  RotateZ(M: number[][], Phi: number): number[][] {
    let a = Phi;
    a *= Math.PI / LINEAR_MEASURE;
    let Cos = Math.cos(a);
    let Sin = Math.sin(a);
    let R = [
      [Cos, -Sin, 0, 0],
      [Sin, Cos, 0, 0],
      [0, 0, 1, 0],
      [0, 0, 0, 1]
    ];
    return this.MMulti(R, M);
  }

  DrawQube(): void {
    let CurN: number[][] = new Array();
    this.q.LastPx = 0;
    for (let i = 5; i >= 0; i--) {
      CurN.push(this.VMulti2(this.MQube, this.q.Normal[i]));
    }
    if (CurN[0][ARRAY_INDEX_TWO] < 0) {
      if (!this.q.Line[0]) {
        this.DrawLine(this.q.VArray[0], this.q.VArray[1]);
        this.q.Line[0] = true;
      }
      if (!this.q.Line[1]) {
        this.DrawLine(this.q.VArray[1], this.q.VArray[ARRAY_INDEX_TWO]);
        this.q.Line[1] = true;
      }
      if (!this.q.Line[ARRAY_INDEX_TWO]) {
        this.DrawLine(this.q.VArray[ARRAY_INDEX_TWO], this.q.VArray[ARRAY_INDEX_TWO]);
        this.q.Line[ARRAY_INDEX_TWO] = true;
      }
      if (!this.q.Line[ARRAY_INDEX_TWO]) {
        this.DrawLine(this.q.VArray[ARRAY_INDEX_THREE], this.q.VArray[0]);
        this.q.Line[ARRAY_INDEX_TWO] = true;
      }
    }
    if (CurN[1][ARRAY_INDEX_TWO] < 0) {
      if (!this.q.Line[ARRAY_INDEX_TWO]) {
        this.DrawLine(this.q.VArray[ARRAY_INDEX_THREE], this.q.VArray[ARRAY_INDEX_TWO]);
        this.q.Line[ARRAY_INDEX_TWO] = true;
      }
      if (!this.q.Line[ARRAY_INDEX_NINE]) {
        this.DrawLine(this.q.VArray[ARRAY_INDEX_THREE], this.q.VArray[ARRAY_INDEX_SIX]);
        this.q.Line[ARRAY_INDEX_NINE] = true;
      }
      if (!this.q.Line[ARRAY_INDEX_SIX]) {
        this.DrawLine(this.q.VArray[ARRAY_INDEX_SIX], this.q.VArray[ARRAY_INDEX_SEVEN]);
        this.q.Line[ARRAY_INDEX_SIX] = true;
      }
      if (!this.q.Line[ARRAY_INDEX_TEN]) {
        this.DrawLine(this.q.VArray[ARRAY_INDEX_SEVEN], this.q.VArray[ARRAY_INDEX_THREE]);
        this.q.Line[ARRAY_INDEX_TEN] = true;
      }
    }
    if (CurN[ARRAY_INDEX_THREE][ARRAY_INDEX_THREE] < 0) {
      if (!this.q.Line[ARRAY_MAX_COUNT_FOUR]) {
        this.DrawLine(this.q.VArray[ARRAY_MAX_COUNT_FOUR], this.q.VArray[ARRAY_INDEX_FIVE]);
        this.q.Line[ARRAY_MAX_COUNT_FOUR] = true;
      }
      if (!this.q.Line[ARRAY_INDEX_FIVE]) {
        this.DrawLine(this.q.VArray[ARRAY_INDEX_FIVE], this.q.VArray[ARRAY_INDEX_SIX]);
        this.q.Line[ARRAY_INDEX_FIVE] = true;
      }
      if (!this.q.Line[ARRAY_INDEX_SIX]) {
        this.DrawLine(this.q.VArray[ARRAY_INDEX_SIX], this.q.VArray[ARRAY_INDEX_SEVEN]);
        this.q.Line[ARRAY_INDEX_SIX] = true;
      }
      if (!this.q.Line[ARRAY_INDEX_SEVEN]) {
        this.DrawLine(this.q.VArray[ARRAY_INDEX_SEVEN], this.q.VArray[ARRAY_MAX_COUNT_FOUR]);
        this.q.Line[ARRAY_INDEX_SEVEN] = true;
      }
    }
    if (CurN[ARRAY_INDEX_THREE][ARRAY_INDEX_THREE] < 0) {
      if (!this.q.Line[ARRAY_MAX_COUNT_FOUR]) {
        this.DrawLine(this.q.VArray[ARRAY_MAX_COUNT_FOUR], this.q.VArray[ARRAY_INDEX_FIVE]);
        this.q.Line[ARRAY_MAX_COUNT_FOUR] = true;
      }
      if (!this.q.Line[ARRAY_INDEX_EIGHT]) {
        this.DrawLine(this.q.VArray[ARRAY_INDEX_FIVE], this.q.VArray[1]);
        this.q.Line[ARRAY_INDEX_EIGHT] = true;
      }
      if (!this.q.Line[0]) {
        this.DrawLine(this.q.VArray[1], this.q.VArray[0]);
        this.q.Line[0] = true;
      }
      if (!this.q.Line[ARRAY_INDEX_ELEVEN]) {
        this.DrawLine(this.q.VArray[0], this.q.VArray[ARRAY_MAX_COUNT_FOUR]);
        this.q.Line[ARRAY_INDEX_ELEVEN] = true;
      }
    }
    if (CurN[ARRAY_MAX_COUNT_FOUR][ARRAY_INDEX_TWO] < 0) {
      if (!this.q.Line[ARRAY_INDEX_ELEVEN]) {
        this.DrawLine(this.q.VArray[ARRAY_MAX_COUNT_FOUR], this.q.VArray[0]);
        this.q.Line[ARRAY_INDEX_ELEVEN] = true;
      }
      if (!this.q.Line[ARRAY_INDEX_THREE]) {
        this.DrawLine(this.q.VArray[0], this.q.VArray[ARRAY_INDEX_THREE]);
        this.q.Line[ARRAY_INDEX_THREE] = true;
      }
      if (!this.q.Line[ARRAY_INDEX_TEN]) {
        this.DrawLine(this.q.VArray[ARRAY_INDEX_THREE], this.q.VArray[ARRAY_INDEX_SEVEN]);
        this.q.Line[ARRAY_INDEX_TEN] = true;
      }
      if (!this.q.Line[ARRAY_INDEX_SEVEN]) {
        this.DrawLine(this.q.VArray[ARRAY_INDEX_SEVEN], this.q.VArray[ARRAY_MAX_COUNT_FOUR]);
        this.q.Line[ARRAY_INDEX_SEVEN] = true;
      }
    }
    if (CurN[ARRAY_INDEX_FIVE][ARRAY_INDEX_TWO] < 0) {
      if (!this.q.Line[ARRAY_INDEX_EIGHT]) {
        this.DrawLine(this.q.VArray[1], this.q.VArray[ARRAY_INDEX_FIVE]);
        this.q.Line[ARRAY_INDEX_EIGHT] = true;
      }
      if (!this.q.Line[ARRAY_INDEX_FIVE]) {
        this.DrawLine(this.q.VArray[ARRAY_INDEX_FIVE], this.q.VArray[ARRAY_INDEX_SIX]);
        this.q.Line[ARRAY_INDEX_FIVE] = true;
      }
      if (!this.q.Line[ARRAY_INDEX_NINE]) {
        this.DrawLine(this.q.VArray[ARRAY_INDEX_SIX], this.q.VArray[ARRAY_INDEX_THREE]);
        this.q.Line[ARRAY_INDEX_NINE] = true;
      }
      if (!this.q.Line[1]) {
        this.DrawLine(this.q.VArray[ARRAY_INDEX_THREE], this.q.VArray[1]);
        this.q.Line[1] = true;
      }
    }
    this.q.Line = [
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false
    ];
    this.q.LastPx = 0;
  }

  Loop(): void {
    if (this.Testing.LoopCount > this.Testing.LoopMax) {
      return;
    }
    let TestingStr = String(this.Testing.LoopCount);
    while (TestingStr.length < ARRAY_MAX_COUNT_THR) {
      TestingStr = '0' + TestingStr;
    }
    this.MTrans = this.Translate(
      this.I,
      -this.q.VArray[ARRAY_INDEX_EIGHT].V[0],
      -this.q.VArray[ARRAY_INDEX_EIGHT].V[1],
      -this.q.VArray[ARRAY_INDEX_EIGHT].V[ARRAY_INDEX_TWO]
    );
    this.MTrans = this.RotateX(this.MTrans, 1);
    this.MTrans = this.RotateY(this.MTrans, ARRAY_MAX_COUNT_THR);
    this.MTrans = this.RotateZ(this.MTrans, ARRAY_INDEX_FIVE);
    this.MTrans = this.Translate(
      this.MTrans,
      this.q.VArray[ARRAY_INDEX_EIGHT].V[0],
      this.q.VArray[ARRAY_INDEX_EIGHT].V[1],
      this.q.VArray[ARRAY_INDEX_EIGHT].V[ARRAY_INDEX_TWO]
    );
    this.MQube = this.MMulti(this.MTrans, this.MQube);
    for (let i = 8; i >= 0; i--) {
      this.q.VArray[i].V = this.VMulti(this.MTrans, this.q.VArray[i].V);
    }
    this.DrawQube();
    this.Testing.LoopCount += 1;
    this.Loop();
  }

  q = new Q();
  // transformation matrix
  MTrans: number[][] = new Array();
  // position information of qube
  MQube: number[][] = new Array();
  // entity matrix
  I: number[][] = new Array();
  Origin = new Object2();
  Testing = new Object1();
  validation = new Map<number, number>([
    [VALIDATION_TWENTY, VALIDATION_TWENTY_VALUE],
    [VALIDATION_FORTY, VALIDATION_FORTY_VALUE],
    [VALIDATION_EIGHT, VALIDATION_EIGHT_VALUE],
    [VALIDATION_OHS, VALIDATION_OHS_VALUE]
  ]);

  creat(CubeSize: number): void {
    // init/reset vars
    this.Origin.V = [QARRAY_ONE_VALUE, QARRAY_ONE_VALUE, VALIDATION_TWENTY, 1];
    this.Testing.LoopCount = 0;
    this.Testing.LoopMax = 50;
    this.Testing.TimeMax = 0;
    this.Testing.TimeAvg = 0;
    this.Testing.TimeMin = 0;
    this.Testing.TimeTemp = 0;
    this.Testing.TimeTotal = 0;
    this.Testing.Init = false;
    // transformation matrix
    this.MTrans = [
      [1, 0, 0, 0],
      [0, 1, 0, 0],
      [0, 0, 1, 0],
      [0, 0, 0, 1]
    ];

    // position information of qube
    this.MQube = [
      [1, 0, 0, 0],
      [0, 1, 0, 0],
      [0, 0, 1, 0],
      [0, 0, 0, 1]
    ];

    // entity matrix
    this.I = [
      [1, 0, 0, 0],
      [0, 1, 0, 0],
      [0, 0, 1, 0],
      [0, 0, 0, 1]
    ];

    // create qube
    this.q.VArray[0] = new CreateP(-CubeSize, -CubeSize, CubeSize);
    this.q.VArray[1] = new CreateP(-CubeSize, CubeSize, CubeSize);
    this.q.VArray[ARRAY_INDEX_TWO] = new CreateP(CubeSize, CubeSize, CubeSize);
    this.q.VArray[ARRAY_INDEX_THREE] = new CreateP(CubeSize, -CubeSize, CubeSize);
    this.q.VArray[ARRAY_MAX_COUNT_FOUR] = new CreateP(-CubeSize, -CubeSize, -CubeSize);
    this.q.VArray[ARRAY_INDEX_FIVE] = new CreateP(-CubeSize, CubeSize, -CubeSize);
    this.q.VArray[ARRAY_INDEX_SIX] = new CreateP(CubeSize, CubeSize, -CubeSize);
    this.q.VArray[ARRAY_INDEX_SEVEN] = new CreateP(CubeSize, -CubeSize, -CubeSize);
    this.q.VArray[ARRAY_INDEX_EIGHT] = new CreateP(0, 0, 0);

    // anti-clockwise edge check
    this.q.Edge = [
      [0, 1, ARRAY_INDEX_TWO],
      [ARRAY_INDEX_THREE, ARRAY_INDEX_TWO, ARRAY_INDEX_SIX],
      [ARRAY_INDEX_SEVEN, ARRAY_INDEX_SIX, ARRAY_INDEX_FIVE],
      [ARRAY_MAX_COUNT_FOUR, ARRAY_INDEX_FIVE, 1],
      [ARRAY_MAX_COUNT_FOUR, 0, ARRAY_INDEX_THREE],
      [1, ARRAY_INDEX_FIVE, ARRAY_INDEX_SIX]
    ];

    for (let i = 0; i < this.q.Edge.length; i++) {
      this.q.Normal[i] = this.CalcNormal(
        this.q.VArray[this.q.Edge[i][0]].V,
        this.q.VArray[this.q.Edge[i][1]].V,
        this.q.VArray[this.q.Edge[i][ARRAY_INDEX_TWO]].V
      );
    }
    this.q.Line = [
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false
    ];
    this.q.NumPx = ARRAY_INDEX_NINE * ARRAY_INDEX_TWO * CubeSize;
    for (let i = 0; i < this.q.NumPx; i++) {
      new CreateP(0, 0, 0);
    }

    this.MTrans = this.Translate(
      this.MTrans,
      this.Origin.V[0],
      this.Origin.V[1],
      this.Origin.V[ARRAY_INDEX_TWO]
    );
    this.MQube = this.MMulti(this.MTrans, this.MQube);

    for (let i = 0; i < 9; i++) {
      this.q.VArray[i].V = this.VMulti(this.MTrans, this.q.VArray[i].V);
    }

    this.DrawQube();
    this.Testing.Init = true;
    this.Loop();

    //debugLog('CubeSize is' + CubeSize + 'this.MTrans value is' + this.MTrans[0][0] + this.MTrans[0][1] + this.MTrans[0][ARRAY_INDEX_TWO] + this.MTrans[0][ARRAY_INDEX_THREE])
    //debugLog('CubeSize is' + CubeSize + 'this.MQube value is' + this.MQube[0][0] + this.MQube[0][1] + this.MQube[0][ARRAY_INDEX_TWO] + this.MQube[0][ARRAY_INDEX_THREE])

    // Perform a simple sum-based verification.
    let sum: number = 0;
    for (let i = 0; i < this.q.VArray.length; i++) {
      let vector = this.q.VArray[i].V;
      for (let j = 0; j < vector.length; j++) {
        sum += vector[j];
      }
    }
    if (sum != this.validation.get(CubeSize)) {
      //debugLog("Error: bad vector sum for CubeSize = " + CubeSize + "; expected " + this.validation.get(CubeSize) + " but got " + sum)
    }
  }

  runTest(): void {
    let i = VALIDATION_TWENTY;
    while (i <= VALIDATION_OHS) {
      this.creat(i);
      i *= ARRAY_INDEX_TWO;
    }
  }
}

let isdebug: boolean = false;
function debugLog(msg: string): void {
  if (isdebug) {
    print(msg);
  }
}

/*
 * @State
 */
class Benchmark {
  
  /*
   * @Benchmark
   */
  runIterationTime(): void {
    let start = ArkTools.timeInUs() / TIME_UNIT;
    let cube = new Cube();
    for (let i = 0; i < ARRAY_INDEX_EIGHT; i++) {
      cube.runTest();
    }
    let end = ArkTools.timeInUs() / TIME_UNIT;
    print('3d-cube: ms = ' + (end - start));
  }

}

new Benchmark().runIterationTime();
