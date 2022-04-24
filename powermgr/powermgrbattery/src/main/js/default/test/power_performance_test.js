   /*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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

import runningLock from '@ohos.runningLock';
import power from '@ohos.power';
import brightness from '@ohos.brightness';
import {describe, it, expect} from 'deccjsunit/index';

describe('appInfoTest', function () {

    console.log("*************Edited 2022/03/04Power Performance Test Begin*************");
    var MAXNUM = 1000;
    
    /**
     * @tc.number PowerPerformance_001
     * @tc.name createRunningLock_test
     * @tc.desc 接口正常调用
     */
    it('PowerPerformance_001', 0, async function (done) {
        let startTime = new Date().getTime();
        for (let i = 0; i < 100; i++) {
            await runningLock.createRunningLock("test", runningLock.RunningLockType.BACKGROUND)
        }
        let waitTime = new Date().getTime()-startTime;
        let avgTime = waitTime * 10; //us
        console.info(`POWER_Performance_001: Promise: createRunningLock Wait Time :  ${waitTime}`);
        if (avgTime<4000)
        {
            console.info(`POWER_Performance_001: Promise: createRunningLock Average Time: PASS : ${avgTime}`);
            expect(true).assertTrue();
        }
        else{
            console.info(`POWER_Performance_001: Promise: createRunningLock Average Time: FAIL : ${avgTime}`);
            expect(false).assertTrue();
        }
        done();
    })

    /**
     * @tc.number PowerPerformance_002
     * @tc.name isUsed_test
     * @tc.desc 接口正常调用
     */
     it('PowerPerformance_002', 0, async function (done) {
         let avgTime = 0;
        runningLock.createRunningLock("test", runningLock.RunningLockType.BACKGROUND, (error, runningLock) => {
            if (typeof error === "undefined") {
                let startTime = new Date().getTime();
                for (let i = 0; i < MAXNUM; i++) {
                runningLock.isUsed();
                }
                let waitTime = new Date().getTime()-startTime;
                avgTime = waitTime; //us
                console.info(`PowerPerformance_002: Promise: isUsed Wait Time :  ${waitTime}`);
                if (avgTime<300)
                {
                    console.info(`PowerPerformance_002: Promise: isUsed Average Time: PASS : ${avgTime}`);
                    expect(true).assertTrue();
                }
                else{
                    console.info(`PowerPerformance_002: Promise: isUsed Average Time: FAIL : ${avgTime}`);
                    expect(false).assertTrue();
                }
                done();
            } else {
                console.log('PowerPerformance_002: ' + error);
                console.info('PowerPerformance_002: isUsed is ' + runningLock);
                done();
            }
        })
    })

    /**
     * @tc.number PowerPerformance_003
     * @tc.name lock_test
     * @tc.desc 接口正常调用
     */
     it('PowerPerformance_003', 0, async function (done) {
        let avgTime = 0;
           runningLock.createRunningLock("test", runningLock.RunningLockType.BACKGROUND, (error, runningLock) => {
               if (typeof error === "undefined") {
                   
                   let startTime = new Date().getTime();
                   for (let i = 0; i < MAXNUM; i++) {
                        runningLock.lock(500);
                   }
                   let waitTime = new Date().getTime()-startTime;
                   avgTime = avgTime + waitTime; //us
                   console.info(`PowerPerformance_003: Promise: lock Wait Time :  ${waitTime}`);
                   if (avgTime<3000)
                    {
                        console.info(`PowerPerformance_003: Promise: lock Average Time: PASS : ${avgTime}`);
                        expect(true).assertTrue();
                    }
                    else{
                        console.info(`PowerPerformance_003: Promise: lock Average Time: FAIL : ${avgTime}`);
                        expect(false).assertTrue();
                    }
                   runningLock.unlock();
                   done();
               } else {
                   console.log('PowerPerformance_003: ' + error);
                   console.info('PowerPerformance_003: lock is ' + runningLock);
                   done();
               }
           }) 
   })

       /**
     * @tc.number PowerPerformance_004
     * @tc.name unlock_test
     * @tc.desc 接口正常调用
     */
        it('PowerPerformance_004', 0, async function (done) {
            let avgTime = 0;
            runningLock.createRunningLock("test", runningLock.RunningLockType.BACKGROUND, (error, runningLock) => {
                if (typeof error === "undefined") {
                    runningLock.lock(500);  
                    let startTime = new Date().getTime();
                    for (let i = 0; i < MAXNUM; i++) {
                        runningLock.unlock();
                    }
                    let waitTime = new Date().getTime()-startTime;
                    avgTime = avgTime + waitTime; //us
                    console.info(`PowerPerformance_004: Promise: lock Wait Time :  ${waitTime}`);
                    if (avgTime<3000)
                    {
                        console.info(`PowerPerformance_004: Promise: lock Average Time: PASS : ${avgTime}`);
                        expect(true).assertTrue();
                    }
                    else{
                        console.info(`PowerPerformance_004: Promise: lock Average Time: FAIL : ${avgTime}`);
                        expect(false).assertTrue();
                    }
                    done();
                } else {
                    console.log('PowerPerformance_004: ' + error);
                    console.info('PowerPerformance_004: lock is ' + runningLock);
                    done();
                }
            }) 
       })

   /**
     * @tc.number PowerPerformance_005
     * @tc.name isProximitySupported_test
     * @tc.desc 接口正常调用
     */
    it('PowerPerformance_005', 0, async function (done) {
        let startTime = new Date().getTime();
        for (let i = 0; i < MAXNUM; i++) {
            await runningLock.isRunningLockTypeSupported(runningLock.RunningLockType.PROXIMITY_SCREEN_CONTROL)
        }
        let waitTime = new Date().getTime()-startTime;
        let avgTime = waitTime; //us
        console.info(`PowerPerformance_005: Promise: isProximitySupported Wait Time :  ${waitTime}`);
        if (avgTime<300)
        {
            console.info(`PowerPerformance_005: Promise: isProximitySupported Average Time: PASS : ${avgTime}`);
            expect(true).assertTrue();
        }
        else{
            console.info(`PowerPerformance_005: Promise: isProximitySupported Average Time: FAIL : ${avgTime}`);
            expect(false).assertTrue();
        }
        done();
    })

    /**
     * @tc.number PowerPerformance_006
     * @tc.name isScreenOn_test
     * @tc.desc AsyncCallback<boolean> 判断屏幕是否点亮True返回
     */
     it('PowerPerformance_006', 0, async function (done) {
        let startTime = new Date().getTime();
        for (let i = 0; i < MAXNUM; i++) {
            await power.isScreenOn()
    }
    let waitTime = new Date().getTime()-startTime;
    let avgTime = waitTime; //us
    console.info(`PowerPerformance_006: Promise: isScreenOn Wait Time :  ${waitTime}`);
    if (avgTime<300)
    {
        console.info(`PowerPerformance_006: Promise: isScreenOn Average Time: PASS : ${avgTime}`);
        expect(true).assertTrue();
    }
    else{
        console.info(`PowerPerformance_006: Promise: isScreenOn Average Time: FAIL : ${avgTime}`);
        expect(false).assertTrue();
    }
    done();
    })

    /**
     * @tc.number PowerPerformance_007
     * @tc.name setValue_test
     * @tc.desc 接口正常调用
     */
     it('PowerPerformance_007', 0, function () {
        let startTime = new Date().getTime();
        for (let i = 0; i < MAXNUM; i++) {
            brightness.setValue(100);
        }
        let waitTime = new Date().getTime()-startTime;
        let avgTime = waitTime; //us
        console.info(`PowerPerformance_007: Promise: setValue_test Wait Time :  ${waitTime}`);
        if (avgTime<300)
        {
            console.info(`PowerPerformance_007: Promise: setValue_test Average Time: PASS : ${avgTime}`);
            expect(true).assertTrue();
        }
        else{
            console.info(`PowerPerformance_007: Promise: setValue_test Average Time: FAIL : ${avgTime}`);
            expect(false).assertTrue();
        }
        done();
    })

})
