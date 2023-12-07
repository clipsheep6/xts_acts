/*
 * Copyright (C) 2018 Apple Inc. All rights reserved.
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
import {setupUserWaypoints,faaWaypoints} from "./flight-planner"
import {expectedFlightPlans} from './expectations';
import {_faaWaypoints} from  './waypoints'
declare interface ArkTools {
  timeInUs(args: number): number;
}
export  class Benchmark {
    async runIteration(): Promise<void> {
      faaWaypoints.waypoints = await _faaWaypoints()
      let before = ArkTools.timeInUs()/1000;
    for (let i = 0; i < 1000; i++) {
      setupUserWaypoints();
      for (let flightPlan of expectedFlightPlans) {
        flightPlan.reset();
        flightPlan.resolveRoute();
      }
    }
    let after = ArkTools.timeInUs()/1000;
    console.log("flight_planner: ms = "+(after - before));
  }

  validate(): void {
    for (let flightPlan of expectedFlightPlans) {
      flightPlan.calculate();
      flightPlan.checkExpectations();
    }
  }
}
export  let benchmark = new Benchmark();
benchmark.runIteration();
