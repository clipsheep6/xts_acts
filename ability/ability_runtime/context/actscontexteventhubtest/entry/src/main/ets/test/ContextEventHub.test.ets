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

import { describe, it, expect, beforeAll } from '@ohos/hypium'

let a: string = "a";
let b: string = "b";
let a_: string = "a";
let b_: string = "b";

export default function stageAppContextTest(abilityContext) {
  describe('ActsStageAppContextTest', function () {

    beforeAll(async (done) => {
      console.log("ActsStageContextPropertiesTest afterAll called");
      await abilityContext.startAbility({
        bundleName: "com.example.contexteventhubtest",
        abilityName: "ServiceAbility",
      }).then((data) => {
        console.log('ActsStageContextPropertiesTest - ServiceAbility: ' + JSON.stringify(data));
      }).catch((err) => {
        console.log("ActsStageContextPropertiesTest - ServiceAbility failed: "
          + JSON.stringify(err));
        done();
      })

      setTimeout(function () {
        console.log("ActsStageContextPropertiesTest afterAll end");
        done();
      }, 1000);
    })


    /*
     * @tc.number  SUB_AA_OpenHarmony_SendContext_0100
     * @tc.name    Test on, off and emit of a single event
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_SendContext_0100', 0, function (done) {
      let caseName: string = "SUB_AA_OpenHarmony_SendContext_0100";
      console.log(`${caseName} START`);
      let eventName = "even100";
      let callCount = 0;
      abilityContext.eventHub.on(eventName, callback100);


      abilityContext.eventHub.emit(eventName, a, b);

      abilityContext.eventHub.off(eventName, callback100);

      abilityContext.eventHub.emit(eventName, a, b);

      function callback100(data1: string, data2: string) {
        console.log(`${caseName} data1=${data1} === data2=${data2}`);
        expect(data1 === "a").assertTrue();
        expect(data2 === "b").assertTrue();
        callCount++;
        if (callCount > 1) {
          expect().assertFail();
          done();
        }
        console.log(`${caseName} END`);
        done();
      }
    });


    /*
     * @tc.number  SUB_AA_OpenHarmony_SendContext_0200
     * @tc.name    Test on, off and emit of multiple events
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_SendContext_0200', 0, function (done) {
      let caseName: string = "SUB_AA_OpenHarmony_SendContext_0200";
      console.log(`${caseName} START`);
      let eventName1 = "even200";
      let eventName2 = "even200_1";
      let callCount = 0;
      let callCount2 = 0;
      abilityContext.eventHub.on(eventName1, callback200);

      abilityContext.eventHub.on(eventName2, callback200_1);

      abilityContext.eventHub.emit(eventName1, a, b);

      abilityContext.eventHub.off(eventName1, callback200);

      abilityContext.eventHub.emit(eventName2, a_, b_);

      abilityContext.eventHub.off(eventName2, callback200_1);

      abilityContext.eventHub.emit(eventName1, a, b);

      function callback200(data1: string, data2: string) {
        console.log(`${caseName} callback200 data1=${data1} === data2=${data2}`);
        expect(data1 === "a").assertTrue();
        expect(data2 === "b").assertTrue();
        if (callCount > 0) {
          console.log(`${caseName} callback200 callCount= ${callCount} fail`);
          expect().assertFail();
          done();
        }
        callCount++;
      }

      function callback200_1(data1: string, data2: string) {
        console.log(`${caseName} callback200_1 data1=${data1} === data2=${data2}`);
        expect(data1 === "a").assertTrue();
        expect(data2 === "b").assertTrue();
        callCount2++
      }

      setTimeout(() => {
        if (callCount == 1 && callCount2 == 1) {
          done()
        }
      }, 1000)
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_SendContext_0300
     * @tc.name    Test on register anonymous function
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_SendContext_0300', 0, function (done) {
      let caseName: string = "SUB_AA_OpenHarmony_SendContext_0300";
      console.log(`${caseName} START`);
      let eventName = "even300";
      console.log(`${caseName} ======step1======`);
      abilityContext.eventHub.on(eventName, (data1: string, data2: string) => {
        console.log(`${caseName} callback2 data1=${data1} === data2=${data2}`);
        expect(data1 === "a").assertTrue();
        expect(data2 === "b").assertTrue();
        abilityContext.eventHub.off(eventName, (data1: string, data2: string) => {
          console.log(`${caseName} eventHub off callback data1=${data1} === data2=${data2}`);
        })
        console.log(`${caseName} END`);
        done();
      });

      abilityContext.eventHub.emit(eventName, a, b);
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_SendContext_0400
     * @tc.name    Test on registered member function
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_SendContext_0400', 0, function (done) {
      let caseName: string = "SUB_AA_OpenHarmony_SendContext_0400";
      console.log(`${caseName} START`);
      let eventName = "even400";
      abilityContext.eventHub.on(eventName, callback400);

      abilityContext.eventHub.emit(eventName, a, b);

      function callback400(data1: string, data2: string) {
        console.log(`${caseName} data1=${data1} === data2=${data2}`);
        expect(data1 === "a").assertTrue();
        expect(data2 === "b").assertTrue();
        abilityContext.eventHub.off(eventName, callback400)
        console.log(`${caseName} END`);
        done();
      }
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_SendContext_0500
     * @tc.name    Test off unregister a single callback
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_SendContext_0500', 0, function (done) {
      let caseName: string = "SUB_AA_OpenHarmony_SendContext_0500";
      console.log(`${caseName} START`);
      let eventName = "even500";
      abilityContext.eventHub.on(eventName, callback500);

      abilityContext.eventHub.on(eventName, callback500_2);

      abilityContext.eventHub.off(eventName, callback500);

      abilityContext.eventHub.emit(eventName, a, b);

      function callback500(data1: string, data2: string) {
        console.log(`${caseName} callback500 data1=${data1} === data2=${data2}`);
        expect().assertFail();
        done();
      }

      function callback500_2(data1: string, data2: string) {
        console.log(`${caseName} callback500_2 data1=${data1} === data2=${data2}`);
        expect(data1 === "a").assertTrue();
        expect(data2 === "b").assertTrue();
        abilityContext.eventHub.off(eventName, callback500_2)
        console.log(`${caseName} END`);
        done();
      }
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_SendContext_0600
     * @tc.name    Test off unregister a single callback
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_SendContext_0600', 0, function (done) {
      let caseName: string = "SUB_AA_OpenHarmony_SendContext_0600";
      console.log(`${caseName} START`);
      let eventName = "even600";
      abilityContext.eventHub.on(eventName, callback600);

      abilityContext.eventHub.on(eventName, callback600_2);

      abilityContext.eventHub.off(eventName);

      abilityContext.eventHub.emit(eventName, a, b);

      function callback600(data1: string, data2: string) {
        console.log(`${caseName} callback600 data1=${data1} === data2=${data2}`);
        expect().assertFail();
        done();
      }

      function callback600_2(data1: string, data2: string) {
        console.log(`${caseName} callback600_2 data1=${data1} === data2=${data2}`);
        expect().assertFail();
        done();
      }

      console.log(`${caseName} END`);
      done();
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_SendContext_0700
     * @tc.name    Test the callback input parameters of different numbers of emit
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_SendContext_0700', 0, function (done) {
      let caseName: string = "SUB_AA_OpenHarmony_SendContext_0700";
      console.log(`${caseName} START`);
      let eventName = "even700";
      let callCount = 0;
      abilityContext.eventHub.on(eventName, callback700);

      abilityContext.eventHub.emit(eventName);

      abilityContext.eventHub.emit(eventName, a);

      abilityContext.eventHub.emit(eventName, a, b);

      let c: string = "c";
      abilityContext.eventHub.emit(eventName, a, b, c);

      function callback700(data1: string, data2: string) {
        console.log(`${caseName} callback700 data1=${data1} === data2=${data2}`);
        if (callCount == 0) {
          expect(data1 === undefined).assertTrue();
          expect(data2 === undefined).assertTrue();
        }
        if (callCount == 1) {
          expect(data1 === "a").assertTrue();
          expect(data2 === undefined).assertTrue();
        }
        if (callCount == 2) {
          expect(data1 === "a").assertTrue();
          expect(data2 === "b").assertTrue();
        }
        if (callCount == 3) {
          expect(data1 === "a").assertTrue();
          expect(data2 === "b").assertTrue();
        }
        callCount++;
      }

      console.log(`${caseName} END`);
      done();
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_SendContext_0800
     * @tc.name    Test off unregister a single callback
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_SendContext_0800', 0, function (done) {
      let caseName: string = "SUB_AA_OpenHarmony_SendContext_0800";
      console.log(`${caseName} START`);
      let context1 = globalThis.abilityContext;
      let context2 = globalThis.abilityContext;
      let eventName = "even800";
      context1.eventHub.on(eventName, callback800);

      context2.eventHub.on(eventName, callback2);

      context2.eventHub.emit(eventName, a, b);

      function callback800(data1: string, data2: string) {
        console.log(`${caseName} callback800 data1=${data1} === data2=${data2}`);
      }

      function callback2(data1: string, data2: string) {
        console.log(`${caseName} callback2 data1=${data1} === data2=${data2}`);
        expect(data1 === "a").assertTrue();
        expect(data2 === "b").assertTrue();
        context2.eventHub.off(eventName);
        console.log(`${caseName} END`);
        done();
      }
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_SendContext_0900
     * @tc.name    Test exception scenario, no parameters
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_SendContext_0900', 0, function (done) {
      let caseName: string = "SUB_AA_OpenHarmony_SendContext_0900";
      console.log(`${caseName} START`);
      let eventName = "even900";
      abilityContext.eventHub.on(eventName);

      abilityContext.eventHub.emit(eventName, a, b);

      abilityContext.eventHub.off(eventName);

      abilityContext.eventHub.emit(eventName, a, b);

      abilityContext.eventHub.on(eventName, callback900);

      abilityContext.eventHub.emit();

      abilityContext.eventHub.off(eventName);

      function callback900() {
        console.log(`${caseName} callback900`);
        expect().assertFail();
        done();
      }

      console.log(`${caseName} END`);
      done();
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_SendContext_1000
     * @tc.name    Test exception scenario, incorrect parameter type
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_SendContext_1000', 0, function (done) {
      let caseName: string = "SUB_AA_OpenHarmony_SendContext_1000";
      console.log(`${caseName} START`);
      let eventName1 = 100;
      abilityContext.eventHub.on(eventName1, callback1000);

      abilityContext.eventHub.emit(eventName1, a, b);

      abilityContext.eventHub.off(eventName1, callback1000);

      abilityContext.eventHub.emit(eventName1, a, b);

      abilityContext.eventHub.on(callback1000);

      abilityContext.eventHub.emit(eventName1, a, b);

      function callback1000(data1: string, data2: string) {
        console.log(`${caseName} callback1000 data1=${data1} === data2=${data2}`);
        expect().assertFail();
        done();
      }

      console.log(`${caseName} END`);
      done();
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_SendContext_1100
     * @tc.name    Test the exception scenario. The same callback is registered multiple times
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_SendContext_1100', 0, function (done) {
      let caseName: string = "SUB_AA_OpenHarmony_SendContext_1100";
      console.log(`${caseName} START`);
      let eventName = "even1100";
      let callCount = 0;
      abilityContext.eventHub.on(eventName, callback1100);

      abilityContext.eventHub.on(eventName, callback1100);

      abilityContext.eventHub.emit(eventName, a, b);

      function callback1100(data1: string, data2: string) {
        console.log(`${caseName} callback1100 `);
        console.log(`${caseName} callback1100 data1=${data1} === data2=${data2}`);
        expect(data1 === "a").assertTrue();
        expect(data2 === "b").assertTrue();
        callCount++;
      }

      setTimeout(() => {
        if (callCount == 2) {
          console.log(`${caseName} callback1100 failed`);
          expect().assertFail();
        }
        abilityContext.eventHub.off(eventName);
        console.log(`${caseName} END`);
        done();
      }, 2000);

    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_SendContext_1200
     * @tc.name    Test the abilitystage scenario
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_SendContext_1200', 0, function (done) {
      let caseName: string = "SUB_AA_OpenHarmony_SendContext_1200";
      console.log(`${caseName} START`);
      let eventName = "even1200";
      globalThis.abilityStageContext.eventHub.on(eventName, callback1200);

      globalThis.abilityStageContext.eventHub.emit(eventName, a, b);

      function callback1200(data1: string, data2: string) {
        console.log(`${caseName} callback1200 data1=${data1} === data2=${data2}`);
        expect(data1 === "a").assertTrue();
        expect(data2 === "b").assertTrue();
        globalThis.abilityStageContext.eventHub.off(eventName);
        console.log(`${caseName} END`);
        done();
      }
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_SendContext_1300
     * @tc.name    Test serviceextension scenario
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_SendContext_1300', 0, function (done) {
      let caseName: string = "SUB_AA_OpenHarmony_SendContext_1300";
      console.log(`${caseName} START`);
      let eventName = "even1300";
      globalThis.serviceExtenxionAbilityContext.eventHub.on(eventName, callback1200);

      globalThis.serviceExtenxionAbilityContext.eventHub.emit(eventName, a, b);

      function callback1200(data1: string, data2: string) {
        console.log(`${caseName} callback1200 data1=${data1} === data2=${data2}`);
        expect(data1 === "a").assertTrue();
        expect(data2 === "b").assertTrue();
        globalThis.serviceExtenxionAbilityContext.eventHub.off(eventName);
        console.log(`${caseName} END`);
        done();
      }
    });
  })
}