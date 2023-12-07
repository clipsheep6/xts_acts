/*
 * Copyright (C) 2017 Apple Inc. All rights reserved.
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

import { resetAST, Sequence } from './ast';
import { parse } from './parser';
import LowLevelInterpreter from './LowLevelInterpreter';
import LowLevelInterpreter32_64 from './LowLevelInterpreter32_64';
import LowLevelInterpreter64 from './LowLevelInterpreter64';
import InitBytecodes from './InitBytecodes';
import { expectedASTDumpedAsLines } from './expected';

"use strict";

class Benchmark {
  ast: Sequence | null;

  constructor() {
    this.ast = null;
  }

  runIteration(){
    resetAST();
    this.ast = parse("LowLevelInterpreter.asm");
  }

  validate(): void {
    let astDumpedAsLines: Array<string> = this.ast!.dump().split("\n");

    if (astDumpedAsLines.length != expectedASTDumpedAsLines.length) {
      print("Actual number of lines (" + astDumpedAsLines.length + ") differs from expected number of lines(" + expectedASTDumpedAsLines.length + ")");
    }

    let index: number = 0;
    for (let line of astDumpedAsLines) {
      let expectedLine = expectedASTDumpedAsLines[index];
      if (line != expectedLine){
        print("Line #" + (index + 1) + " differs.  Expected: \"" + expectedLine + "\", got \"" + line + "\"");
      }
      index += 1;
    }
  }
}


declare interface ArkTools {
  timeInUs(args: number): number;
}

function run(): void {
  let startTime = ArkTools.timeInUs() / 1000;

  InitBytecodes();
  LowLevelInterpreter();
  LowLevelInterpreter64();
  LowLevelInterpreter32_64();

  let benchmark = new Benchmark();
  benchmark.runIteration();
  benchmark.validate();
  let endTime =ArkTools.timeInUs() / 1000;

  print('OfflineAssembler: ms = ', endTime - startTime);
}

run()
