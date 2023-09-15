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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"
import commonEventManager from '@ohos.commonEvent';
let array = []
export default function applicationLifecycleTest() {
  describe('SendContextTest', function () {

    let TAG = "";

    /*
    * @tc.number  SUB_AA_OpenHarmony_SendContext_1200
    * @tc.name    abilityStageContext on and emit callback.
    * @tc.desc    Function test
    * @tc.level   0
    */
    it("SUB_AA_OpenHarmony_SendContext_1200", 0, async function (done) {
      console.log("------------SUB_AA_OpenHarmony_SendContext_1200 START-------------");
      TAG = "SUB_AA_OpenHarmony_SendContext_1200";
      function func1(a, b){
        console.log(TAG + "eventHub.emit is callback:" + JSON.stringify(a) + JSON.stringify(b))
        array.push(a)
        array.push(b)
      }
      globalThis.abilityStageContext.eventHub.on("contextEvent", func1)
      globalThis.abilityStageContext.eventHub.emit("contextEvent", "a", "b")
      await sleep(500)
      expect("a").assertEqual(array[0])
      expect("b").assertEqual(array[1])
      array = []
      done()
    });

    /*
    * @tc.number  SUB_AA_OpenHarmony_SendContext_0700
    * @tc.name    abilityStageContext on and emit callback many times.
    * @tc.desc    Function test
    * @tc.level   0
    */
    it("SUB_AA_OpenHarmony_SendContext_0700", 0, async function (done) {
      console.log("------------SUB_AA_OpenHarmony_SendContext_0700 START-------------");
      TAG = "SUB_AA_OpenHarmony_SendContext_0700";
      function func1(a, b){
        console.log(TAG + "eventHub.emit is callback:" + JSON.stringify(a) + JSON.stringify(b))
        array.push(a)
        array.push(b)
      }
      
      globalThis.abilitycontext.eventHub.on("contextEvent", func1)
      globalThis.abilitycontext.eventHub.emit("contextEvent")
      await sleep(500)
      expect(array.length).assertEqual(0)
      array = []
      globalThis.abilitycontext.eventHub.emit("contextEvent", "a")
      await sleep(500)
      expect("a").assertEqual(array[0])
      expect(undefined).assertEqual(array[1])
      array = []
      globalThis.abilitycontext.eventHub.emit("contextEvent", "a", "b")
      await sleep(500)
      expect("a").assertEqual(array[0])
      expect("b").assertEqual(array[1])
      array = []
      globalThis.abilitycontext.eventHub.emit("contextEvent", "a", "b", "c")
      await sleep(500)
      expect("a").assertEqual(array[0])
      expect("b").assertEqual(array[1])
      expect(array.length).assertEqual(2)
      array = []
      done()
    });
    /*
    * @tc.number  SUB_AA_OpenHarmony_SendContext_0500
    * @tc.name    abilityStageContext on and emit callback many times.
    * @tc.desc    Function test
    * @tc.level   0
    */
      it("SUB_AA_OpenHarmony_SendContext_0500", 0, async function (done) {
        console.log("------------SUB_AA_OpenHarmony_SendContext_0500 START-------------");
        TAG = "SUB_AA_OpenHarmony_SendContext_0500";
        let array2 = [];
        function func1(a, b){
          console.log(TAG + "eventHub.emit is callback:" + JSON.stringify(a) + JSON.stringify(b));
          array.push(a);
          array.push(b)
        }
        function func2(a, b){
          console.log(TAG + "eventHub.emit is callback2:" + JSON.stringify(a) + JSON.stringify(b));
          array.push(a);
          array.push(b);
        }
        globalThis.abilitycontext.eventHub.on("contextEvent", func1);
        globalThis.abilitycontext.eventHub.on("contextEvent", func2);

        globalThis.abilitycontext.eventHub.emit("contextEvent", "a", "b");
        await sleep(500);
        expect("a").assertEqual(array[0]);
        expect("b").assertEqual(array[1]);
        expect("a").assertEqual(array2[0]);
        expect("b").assertEqual(array2[1]);
        array = [];
        array2 = [];
        await globalThis.abilitycontext.eventHub.off("contextEvent", func1)
        await sleep(1000)
        globalThis.abilitycontext.eventHub.emit("contextEvent", "a", "b");
        await sleep(500);
        expect("a").assertEqual(array2[0]);
        expect("b").assertEqual(array2[1]);
        expect(array.length).assertEqual(0)
        array = [];
        done();
      });

      /*
      * @tc.number  SUB_AA_OpenHarmony_SendContext_0600
      * @tc.name    abilityStageContext on and emit callback many times.
      * @tc.desc    Function test
      * @tc.level   0
      */
      it("SUB_AA_OpenHarmony_SendContext_0600", 0, async function (done) {
        console.log("------------SUB_AA_OpenHarmony_SendContext_0600 START-------------");
        TAG = "SUB_AA_OpenHarmony_SendContext_0600";
        let array2 = [];
        function func1(a, b){
          console.log(TAG + "eventHub.emit is callback:" + JSON.stringify(a) + JSON.stringify(b));
          array.push(a);
          array.push(b)
        }
        function func2(a, b){
          console.log(TAG + "eventHub.emit is callback2:" + JSON.stringify(a) + JSON.stringify(b));
          array.push(a);
          array.push(b);
        }
        globalThis.abilitycontext.eventHub.on("contextEvent", func1);
        globalThis.abilitycontext.eventHub.on("contextEvent", func2);

        globalThis.abilitycontext.eventHub.emit("contextEvent", "a", "b");
        await sleep(500);
        expect("a").assertEqual(array[0]);
        expect("b").assertEqual(array[1]);
        expect("a").assertEqual(array2[0]);
        expect("b").assertEqual(array2[1]);
        array = [];
        array2 = [];
        await globalThis.abilitycontext.eventHub.off("contextEvent")
        await sleep(1000)
        globalThis.abilitycontext.eventHub.emit("contextEvent", "a", "b");
        await sleep(500);
        array = [];
        array2 = [];
        done();
      });

     /*
      * @tc.number  SUB_AA_OpenHarmony_SendContext_0300
      * @tc.name    abilityStageContext on and emit callback many times.
      * @tc.desc    Function test
      * @tc.level   0
      */
      it("SUB_AA_OpenHarmony_SendContext_0300", 0, async function (done) {
        console.log("------------SUB_AA_OpenHarmony_SendContext_0300 START-------------");
        TAG = "SUB_AA_OpenHarmony_SendContext_0300";        
        globalThis.abilitycontext.eventHub.on("contextEvent", (param1, param2)=>{
          console.log(TAG + "eventHub.emit is callback:" + JSON.stringify(param1) + JSON.stringify(param2));
          expect(param1).assertEqual('a');
          expect(param2).assertEqual('b');
          done();
        });
        globalThis.abilitycontext.eventHub.emit("contextEvent", "a", "b");
      });

    /*
    * @tc.number  SUB_AA_OpenHarmony_SendContext_0400
    * @tc.name    abilityStageContext on and emit callback.
    * @tc.desc    Function test
    * @tc.level   0
    */
    it("SUB_AA_OpenHarmony_SendContext_0400", 0, async function (done) {
      console.log("------------SUB_AA_OpenHarmony_SendContext_0400 START-------------");
      TAG = "SUB_AA_OpenHarmony_SendContext_0400";
      function func1(a, b){
        console.log(TAG + "eventHub.emit is callback:" + JSON.stringify(a) + JSON.stringify(b))
        array.push(a)
        array.push(b)
      }
      globalThis.abilitycontext.eventHub.on("contextEvent", func1)
      globalThis.abilitycontext.eventHub.emit("contextEvent", "a", "b")
      await sleep(500)
      expect("a").assertEqual(array[0])
      expect("b").assertEqual(array[1])
      array = []
      done()
    });

   /*
    * @tc.number  SUB_AA_OpenHarmony_SendContext_0100
    * @tc.name    abilityStageContext on and emit callback.
    * @tc.desc    Function test
    * @tc.level   0
    */
    it("SUB_AA_OpenHarmony_SendContext_0100", 0, async function (done) {
      console.log("------------SUB_AA_OpenHarmony_SendContext_0100 START-------------");
      TAG = "SUB_AA_OpenHarmony_SendContext_0100";
      function func1(a, b){
        console.log(TAG + "eventHub.emit is callback:" + JSON.stringify(a) + JSON.stringify(b))
        array.push(a)
        array.push(b)
      }
      globalThis.abilitycontext.eventHub.on("contextEvent", func1)
      globalThis.abilitycontext.eventHub.emit("contextEvent", "a", "b")
      await sleep(500)
      expect("a").assertEqual(array[0])
      expect("b").assertEqual(array[1])
      array = []
      await globalThis.abilitycontext.eventHub.off("contextEvent", func1)
      globalThis.abilitycontext.eventHub.emit("contextEvent", "a", "b");
      await sleep(500);
      array = [];
      done()
    });

       /*
    * @tc.number  SUB_AA_OpenHarmony_SendContext_0800
    * @tc.name    abilityStageContext on and emit callback.
    * @tc.desc    Function test
    * @tc.level   0
    */
       it("SUB_AA_OpenHarmony_SendContext_0800", 0, async function (done) {
        console.log("------------SUB_AA_OpenHarmony_SendContext_0800 START-------------");
        TAG = "SUB_AA_OpenHarmony_SendContext_0800";
        let want = {
          "bundleName":"com.example.sendContext",
          "abilityName":"MainAbility2"
        }
        let array2 = [];
        globalThis.abilitycontext.startAbility(want, (err, data)=>{
          console.log(TAG + "startAbility is callback:" + JSON.stringify(err))
        })
        await sleep(2000)
        function func1(a, b){
          console.log(TAG + "eventHub.emit is callback:" + JSON.stringify(a) + JSON.stringify(b))
          array.push(a)
          array.push(b)
        }
        function func2(a, b){
          console.log(TAG + "eventHub.emit is callback2:" + JSON.stringify(a) + JSON.stringify(b))
          array2.push(a)
          array2.push(b)
        }
        globalThis.abilitycontext.eventHub.on("contextEvent", func1)
        globalThis.abilitycontext2.eventHub.on("contextEvent", func2)
        globalThis.abilitycontext2.eventHub.emit("contextEvent", "a", "b")
        await sleep(500)
        expect("a").assertEqual(array2[0])
        expect("b").assertEqual(array2[1])
        expect(array.length).assertEqual(0)
        array = []
        done()
      });
       /*
    * @tc.number  SUB_AA_OpenHarmony_SendContext_0200
    * @tc.name    abilityStageContext on and emit callback.
    * @tc.desc    Function test
    * @tc.level   0
    */
       it("SUB_AA_OpenHarmony_SendContext_0200", 0, async function (done) {
        console.log("------------SUB_AA_OpenHarmony_SendContext_0200 START-------------");
        TAG = "SUB_AA_OpenHarmony_SendContext_0200";
        let want = {
          "bundleName":"com.example.sendContext",
          "abilityName":"MainAbility2"
        }
        let array2 = [];
        globalThis.abilitycontext.startAbility(want, (err, data)=>{
          console.log(TAG + "startAbility is callback:" + JSON.stringify(err))
        })
        await sleep(2000)
        function func1(a, b){
          console.log(TAG + "eventHub.emit is callback:" + JSON.stringify(a) + JSON.stringify(b))
          array.push(a)
          array.push(b)
        }
        function func2(a, b){
          console.log(TAG + "eventHub.emit is callback2:" + JSON.stringify(a) + JSON.stringify(b))
          array2.push(a)
          array2.push(b)
        }
        globalThis.abilitycontext.eventHub.on("contextEvent", func1)
        globalThis.abilitycontext.eventHub.on("contextEvent2", func2)
        globalThis.abilitycontext.eventHub.emit("contextEvent", "a", "b")
        globalThis.abilitycontext.eventHub.emit("contextEvent2", "a", "b")
        await sleep(500)
        expect("a").assertEqual(array[0])
        expect("b").assertEqual(array[1])
        expect("a").assertEqual(array2[0])
        expect("b").assertEqual(array2[1])
        array = []
        array2 = []
        globalThis.abilitycontext.eventHub.off("contextEvent", func1)
        globalThis.abilitycontext.eventHub.emit("contextEvent", "a", "b")
        globalThis.abilitycontext.eventHub.emit("contextEvent2", "a", "b")
        await sleep(500)
        expect(array.length).assertEqual(0)
        expect("a").assertEqual(array2[0])
        expect("b").assertEqual(array2[1])
        array = []
        array2 = []
        globalThis.abilitycontext.eventHub.off("contextEvent2", func2)
        globalThis.abilitycontext.eventHub.emit("contextEvent", "a", "b")
        globalThis.abilitycontext.eventHub.emit("contextEvent2", "a", "b")
        expect(array.length).assertEqual(0)
        expect(array2.length).assertEqual(0)
        done()
      });
    //    /*
    // * @tc.number  SUB_AA_OpenHarmony_SendContext_1000
    // * @tc.name    abilityStageContext on and emit callback.
    // * @tc.desc    Function test
    // * @tc.level   0
    // */
    //    it("SUB_AA_OpenHarmony_SendContext_1000", 0, async function (done) {
    //     console.log("------------SUB_AA_OpenHarmony_SendContext_1000 START-------------");
    //     TAG = "SUB_AA_OpenHarmony_SendContext_1000";
    //     await sleep(2000)
    //     function func1(a, b){
    //       console.log(TAG + "eventHub.emit is callback:" + JSON.stringify(a) + JSON.stringify(b))
    //       array.push(a)
    //       array.push(b)
    //     }
    //     try{
    //       globalThis.abilitycontext.eventHub.on(2, func1)
    //     }catch(ERR){
    //       console.log(TAG + "eventHub.on is catch err:" + JSON.stringify(ERR))
    //     }

    //     try{
    //       globalThis.abilitycontext.eventHub.emit("contextEvent", "a", "b")
    //     }catch(ERR){
    //       console.log(TAG + "eventHub.emit is catch err:" + JSON.stringify(ERR))
    //     }
    //     done()
    //   });

   /*
    * @tc.number  SUB_AA_OpenHarmony_SendContext_1100
    * @tc.name    abilityStageContext on and emit callback.
    * @tc.desc    Function test
    * @tc.level   0
    */
       it("SUB_AA_OpenHarmony_SendContext_1100", 0, async function (done) {
        console.log("------------SUB_AA_OpenHarmony_SendContext_1100 START-------------");
        TAG = "SUB_AA_OpenHarmony_SendContext_1100";
        function func1(a, b){
          console.log(TAG + "eventHub.emit is callback:" + JSON.stringify(a) + JSON.stringify(b))
          array.push(a)
          array.push(b)
        }
        globalThis.abilitycontext.eventHub.on("contextEvent", func1)
        globalThis.abilitycontext.eventHub.on("contextEvent", func1)
        globalThis.abilitycontext.eventHub.emit("contextEvent", "a", "b")
        await sleep(500)
        expect("a").assertEqual(array[0])
        expect("b").assertEqual(array[1])
        expect(array.length).assertEqual(2)
        array = []
        done()
      });
    //    /*
    // * @tc.number  SUB_AA_OpenHarmony_SendContext_1100
    // * @tc.name    abilityStageContext on and emit callback.
    // * @tc.desc    Function test
    // * @tc.level   0
    // */
    //    it("SUB_AA_OpenHarmony_SendContext_1100", 0, async function (done) {
    //     console.log("------------SUB_AA_OpenHarmony_SendContext_1100 START-------------");
    //     TAG = "SUB_AA_OpenHarmony_SendContext_1100";
    //     await sleep(2000);
    //     function func1(a, b){
    //       console.log(TAG + "eventHub.emit is callback:" + JSON.stringify(a) + JSON.stringify(b));
    //       array.push(a);
    //       array.push(b);
    //     }
    //     try{
    //       globalThis.abilitycontext.eventHub.on(undefined, func1);
    //     }catch(ERR){
    //       console.log(TAG + "eventHub.on is catch err:" + JSON.stringify(ERR));
    //     }

    //     try{
    //       globalThis.abilitycontext.eventHub.emit("contextEvent", "a", "b");
    //     }catch(ERR){
    //       console.log(TAG + "eventHub.emit is catch err:" + JSON.stringify(ERR));
    //     }
    //     await sleep(500);
    //     try{
    //       globalThis.abilitycontext.eventHub.off(undefined, func1);
    //     }catch(ERR){
    //       console.log(TAG + "eventHub.emit is catch err:" + JSON.stringify(ERR));
    //     }

    //     try{
    //       globalThis.abilitycontext.eventHub.on("contextEvent", func1);
    //     }catch(ERR){
    //       console.log(TAG + "eventHub.on is catch err:" + JSON.stringify(ERR));
    //     }

    //     try{
    //       globalThis.abilitycontext.eventHub.emit(undefined, "a", "b");
    //     }catch(ERR){
    //       console.log(TAG + "eventHub.emit is catch err:" + JSON.stringify(ERR));
    //     }
    //     expect(array.length).assertEqual(0);
    //     done();
    //   });
  })
}