/**
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

import sim from '@ohos.telephony.sim';
import * as env from './lib/Const.js';
import { describe, it, expect, Core } from 'deccjsunit/index';

describe('SimPerformanceTest', function () {

  // set timeout
  const core = Core.getInstance();
  const config = core.getDefaultService('config');
  config.timeout = 300 * 1000;

  /**
    * @tc.number  Telephony_Sim_hasSimCard_Async_0300
    * @tc.name    Test the performance of hasSimCard (AsyncCallback) interface
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_hasSimCard_Async_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_hasSimCard_Async_0300';
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;
    const recursive = function (n) {
      if (n <= 0) {
        console.log(`${CASE_NAME} finish, useTime: ${totalTime}ms`);
        expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
        done();
        return;
      }
      startTime = new Date().getTime();
      sim.hasSimCard(env.SLOTID0, (error, data) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
    * @tc.number  Telephony_Sim_hasSimCard_Promise_0300
    * @tc.name    Test the performance of hasSimCard (Promise) interface
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_hasSimCard_Promise_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_hasSimCard_Promise_0300';
    let startTime = 0;
    let endTime = 0;
    let totalTime = 0;
    for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
      startTime = new Date().getTime();
      await sim.hasSimCard(env.SLOTID0).catch(error => console.log(error.message));
      endTime = new Date().getTime();
      totalTime += endTime - startTime;
    }
    expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
    console.log(`${CASE_NAME} finish, useTime: ${totalTime}ms`);
    done();
  });

  /**
    * @tc.number  Telephony_Sim_isSimActive_Async_0400
    * @tc.name    Test the performance of isSimActive (AsyncCallback) interface
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_isSimActive_Async_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_isSimActive_Async_0400';
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;
    const recursive = function (n) {
      if (n <= 0) {
        console.log(`${CASE_NAME} finish, useTime: ${totalTime}ms`);
        expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
        done();
        return;
      }
      startTime = new Date().getTime();
      sim.isSimActive(env.SLOTID0, (error, data) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
    * @tc.number  Telephony_Sim_isSimActive_Promise_0400
    * @tc.name    Test the performance of isSimActive (Promise) interface
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_isSimActive_Promise_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_isSimActive_Promise_0400';
    let startTime = 0;
    let endTime = 0;
    let totalTime = 0;
    for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
      startTime = new Date().getTime();
      await sim.isSimActive(env.SLOTID0).catch(error => console.log(error.message));
      endTime = new Date().getTime();
      totalTime += endTime - startTime;
    }
    expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
    console.log(`${CASE_NAME} finish, useTime: ${totalTime}ms`);
    done();
  });

  /**
    * @tc.number  Telephony_Sim_activateSim_Async_0300
    * @tc.name    Test the performance of activateSim (AsyncCallback) interface
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_activateSim_Async_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_activateSim_Async_0300';
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;
    const recursive = function (n) {
      if (n <= 0) {
        console.log(`${CASE_NAME} finish, useTime: ${totalTime}ms`);
        expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
        done();
        return;
      }
      startTime = new Date().getTime();
      sim.activateSim(env.SLOTID0, (error, data) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
    * @tc.number  Telephony_Sim_activateSim_Promise_0300
    * @tc.name    Test the performance of activateSim (Promise) interface
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_activateSim_Promise_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_activateSim_Promise_0300';
    let startTime = 0;
    let endTime = 0;
    let totalTime = 0;
    for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
      startTime = new Date().getTime();
      await sim.activateSim(env.SLOTID0).catch(error => console.log(error.message));
      endTime = new Date().getTime();
      totalTime += endTime - startTime;
    }
    expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
    console.log(`${CASE_NAME} finish, useTime: ${totalTime}ms`);
    done();
  });

  /**
    * @tc.number  Telephony_Sim_deactivateSim_Async_0300
    * @tc.name    Test the performance of deactivateSim (AsyncCallback) interface
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_deactivateSim_Async_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_deactivateSim_Async_0300';
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;
    const recursive = async function (n) {
      if (n <= 0) {
        console.log(`${CASE_NAME} finish, useTime: ${totalTime}ms`);
        expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
        await sim.activateSim(env.SLOTID0);
        done();
        return;
      }
      startTime = new Date().getTime();
      sim.deactivateSim(env.SLOTID0, (error, data) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
    * @tc.number  Telephony_Sim_deactivateSim_Promise_0300
    * @tc.name    Test the performance of deactivateSim (Promise) interface
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_deactivateSim_Promise_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_deactivateSim_Promise_0300';
    let startTime = 0;
    let endTime = 0;
    let totalTime = 0;
    for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
      startTime = new Date().getTime();
      await sim.deactivateSim(env.SLOTID0).catch(error => console.log(error.message));
      endTime = new Date().getTime();
      totalTime += endTime - startTime;
    }
    await sim.activateSim(env.SLOTID0);
    expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
    console.log(`${CASE_NAME} finish, useTime: ${totalTime}ms`);
    done();
  });

  /**
    * @tc.number  Telephony_Sim_getActiveSimAccountInfoList_Async_0300
    * @tc.name    Test the performance of getActiveSimAccountInfoList (AsyncCallback) interface
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_getActiveSimAccountInfoList_Async_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_getActiveSimAccountInfoList_Async_0300';
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;
    const recursive = function (n) {
      if (n <= 0) {
        console.log(`${CASE_NAME} finish, useTime: ${totalTime}ms`);
        expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
        done();
        return;
      }
      startTime = new Date().getTime();
      sim.getActiveSimAccountInfoList((error, data) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
    * @tc.number  Telephony_Sim_getActiveSimAccountInfoList_Promise_0300
    * @tc.name    Test the performance of getActiveSimAccountInfoList (Promise) interface
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_getActiveSimAccountInfoList_Promise_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_getActiveSimAccountInfoList_Promise_0300';
    let startTime = 0;
    let endTime = 0;
    let totalTime = 0;
    for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
      startTime = new Date().getTime();
      await sim.getActiveSimAccountInfoList().catch(error => console.log(error.message));
      endTime = new Date().getTime();
      totalTime += endTime - startTime;
    }
    expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
    console.log(`${CASE_NAME} finish, useTime: ${totalTime}ms`);
    done();
  });

  /**
    * @tc.number  Telephony_Sim_setShowName_Async_0400
    * @tc.name    Test the performance of setShowName (AsyncCallback) interface
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_setShowName_Async_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_setShowName_Async_0400';
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;
    const recursive = function (n) {
      if (n <= 0) {
        console.log(`${CASE_NAME} finish, useTime: ${totalTime}ms`);
        expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
        done();
        return;
      }
      startTime = new Date().getTime();
      sim.setShowName(env.SLOTID0, env.CARD_NAME, (error, data) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
    * @tc.number  Telephony_Sim_setShowName_Promise_0400
    * @tc.name    Test the performance of setShowName (Promise) interface
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_setShowName_Promise_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_setShowName_Promise_0400';
    let startTime = 0;
    let endTime = 0;
    let totalTime = 0;
    for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
      startTime = new Date().getTime();
      await sim.setShowName(env.SLOTID0, env.CARD_NAME).catch(error => console.log(error.message));
      endTime = new Date().getTime();
      totalTime += endTime - startTime;
    }
    expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
    console.log(`${CASE_NAME} finish, useTime: ${totalTime}ms`);
    done();
  });

  /**
    * @tc.number  Telephony_Sim_getShowName_Async_0400
    * @tc.name    Test the performance of getShowName (AsyncCallback) interface
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_getShowName_Async_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_getShowName_Async_0400';
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;
    const recursive = function (n) {
      if (n <= 0) {
        console.log(`${CASE_NAME} finish, useTime: ${totalTime}ms`);
        expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
        done();
        return;
      }
      startTime = new Date().getTime();
      sim.getShowName(env.SLOTID0, (error, data) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
    * @tc.number  Telephony_Sim_getShowName_Promise_0400
    * @tc.name    Test the performance of getShowName (Promise) interface
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_getShowName_Promise_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_getShowName_Promise_0400';
    let startTime = 0;
    let endTime = 0;
    let totalTime = 0;
    for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
      startTime = new Date().getTime();
      await sim.getShowName(env.SLOTID0).catch(error => console.log(error.message));
      endTime = new Date().getTime();
      totalTime += endTime - startTime;
    }
    expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
    console.log(`${CASE_NAME} finish, useTime: ${totalTime}ms`);
    done();
  });

  /**
    * @tc.number  Telephony_Sim_setShowNumber_Async_0400
    * @tc.name    Test the performance of setShowNumber (AsyncCallback) interface
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_setShowNumber_Async_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_setShowNumber_Async_0400';
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;
    const recursive = function (n) {
      if (n <= 0) {
        console.log(`${CASE_NAME} finish, useTime: ${totalTime}ms`);
        expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
        done();
        return;
      }
      startTime = new Date().getTime();
      sim.setShowNumber(env.SLOTID0, env.CARD_NUMBER, (error, data) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
    * @tc.number  Telephony_Sim_setShowNumber_Promise_0400
    * @tc.name    Test the performance of setShowNumber (Promise) interface
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_setShowNumber_Promise_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_setShowNumber_Promise_0400';
    let startTime = 0;
    let endTime = 0;
    let totalTime = 0;
    for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
      startTime = new Date().getTime();
      await sim.setShowNumber(env.SLOTID0, env.CARD_NUMBER).catch(error => console.log(error.message));
      endTime = new Date().getTime();
      totalTime += endTime - startTime;
    }
    expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
    console.log(`${CASE_NAME} finish, useTime: ${totalTime}ms`);
    done();
  });

  /**
    * @tc.number  Telephony_Sim_getShowNumber_Async_0300
    * @tc.name    Test the performance of getShowNumber (AsyncCallback) interface
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_getShowNumber_Async_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_getShowNumber_Async_0300';
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;
    const recursive = function (n) {
      if (n <= 0) {
        console.log(`${CASE_NAME} finish, useTime: ${totalTime}ms`);
        expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
        done();
        return;
      }
      startTime = new Date().getTime();
      sim.getShowNumber(env.SLOTID0, (error, data) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
    * @tc.number  Telephony_Sim_getShowNumber_Promise_0300
    * @tc.name    Test the performance of getShowNumber (Promise) interface
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_getShowNumber_Promise_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_getShowNumber_Promise_0300';
    let startTime = 0;
    let endTime = 0;
    let totalTime = 0;
    for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
      startTime = new Date().getTime();
      await sim.getShowNumber(env.SLOTID0).catch(error => console.log(error.message));
      endTime = new Date().getTime();
      totalTime += endTime - startTime;
    }
    expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
    console.log(`${CASE_NAME} finish, useTime: ${totalTime}ms`);
    done();
  });

  /**
    * @tc.number  Telephony_Sim_getOperatorConfigs_Async_0300
    * @tc.name    Test the performance of getOperatorConfigs (AsyncCallback) interface
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_getOperatorConfigs_Async_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_getOperatorConfigs_Async_0300';
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;
    const recursive = function (n) {
      if (n <= 0) {
        console.log(`${CASE_NAME} finish, useTime: ${totalTime}ms`);
        expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
        done();
        return;
      }
      startTime = new Date().getTime();
      sim.getOperatorConfigs(env.SLOTID0, (error, data) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
    * @tc.number  Telephony_Sim_getOperatorConfigs_Promise_0300
    * @tc.name    Test the performance of getOperatorConfigs (Promise) interface
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_getOperatorConfigs_Promise_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_getOperatorConfigs_Promise_0300';
    let startTime = 0;
    let endTime = 0;
    let totalTime = 0;
    for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
      startTime = new Date().getTime();
      await sim.getOperatorConfigs(env.SLOTID0).catch(error => console.log(error.message));
      endTime = new Date().getTime();
      totalTime += endTime - startTime;
    }
    expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
    console.log(`${CASE_NAME} finish, useTime: ${totalTime}ms`);
    done();
  });

  /**
    * @tc.number  Telephony_Sim_getSimTelephoneNumber_Async_0300
    * @tc.name    Test the performance of getSimTelephoneNumber (AsyncCallback) interface
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_getSimTelephoneNumber_Async_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_getSimTelephoneNumber_Async_0300';
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;
    const recursive = function (n) {
      if (n <= 0) {
        console.log(`${CASE_NAME} finish, useTime: ${totalTime}ms`);
        expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
        done();
        return;
      }
      startTime = new Date().getTime();
      sim.getSimTelephoneNumber(env.SLOTID0, (error, data) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
    * @tc.number  Telephony_Sim_getSimTelephoneNumber_Promise_0300
    * @tc.name    Test the performance of getSimTelephoneNumber (Promise) interface
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_getSimTelephoneNumber_Promise_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_getSimTelephoneNumber_Promise_0300';
    let startTime = 0;
    let endTime = 0;
    let totalTime = 0;
    for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
      startTime = new Date().getTime();
      await sim.getSimTelephoneNumber(env.SLOTID0).catch(error => console.log(error.message));
      endTime = new Date().getTime();
      totalTime += endTime - startTime;
    }
    expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
    console.log(`${CASE_NAME} finish, useTime: ${totalTime}ms`);
    done();
  });

  /**
    * @tc.number  Telephony_Sim_getVoiceMailIdentifier_Async_0300
    * @tc.name    Test the performance of getVoiceMailIdentifier (AsyncCallback) interface
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_getVoiceMailIdentifier_Async_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_getVoiceMailIdentifier_Async_0300';
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;
    const recursive = function (n) {
      if (n <= 0) {
        console.log(`${CASE_NAME} finish, useTime: ${totalTime}ms`);
        expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
        done();
        return;
      }
      startTime = new Date().getTime();
      sim.getVoiceMailIdentifier(env.SLOTID0, (error, data) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
    * @tc.number  Telephony_Sim_getVoiceMailIdentifier_Promise_0300
    * @tc.name    Test the performance of getVoiceMailIdentifier (Promise) interface
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_getVoiceMailIdentifier_Promise_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_getVoiceMailIdentifier_Promise_0300';
    let startTime = 0;
    let endTime = 0;
    let totalTime = 0;
    for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
      startTime = new Date().getTime();
      await sim.getVoiceMailIdentifier(env.SLOTID0).catch(error => error);
      endTime = new Date().getTime();
      totalTime += endTime - startTime;
    }
    expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
    console.log(`${CASE_NAME} finish, useTime: ${totalTime}ms`);
    done();
  });

  /**
    * @tc.number  Telephony_Sim_getVoiceMailNumber_Async_0300
    * @tc.name    Test the performance of getVoiceMailNumber (AsyncCallback) interface
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_getVoiceMailNumber_Async_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_getVoiceMailNumber_Async_0300';
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;
    const recursive = function (n) {
      if (n <= 0) {
        console.log(`${CASE_NAME} finish, useTime: ${totalTime}ms`);
        expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
        done();
        return;
      }
      startTime = new Date().getTime();
      sim.getVoiceMailNumber(env.SLOTID0, (error, data) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
    * @tc.number  Telephony_Sim_getVoiceMailNumber_Promise_0300
    * @tc.name    Test the performance of getVoiceMailNumber (Promise) interface
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_getVoiceMailNumber_Promise_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_getVoiceMailNumber_Promise_0300';
    let startTime = 0;
    let endTime = 0;
    let totalTime = 0;
    for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
      startTime = new Date().getTime();
      await sim.getVoiceMailNumber(env.SLOTID0).catch(error => error);
      endTime = new Date().getTime();
      totalTime += endTime - startTime;
    }
    expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
    console.log(`${CASE_NAME} finish, useTime: ${totalTime}ms`);
    done();
  });

  /**
    * @tc.number  Telephony_Sim_setVoiceMailInfo_Async_0800
    * @tc.name    Test the performance of setVoiceMailInfo (AsyncCallback) interface
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_setVoiceMailInfo_Async_0800', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_setVoiceMailInfo_Async_0800';
    let totalTime = 0;
    const recursive = function (n) {
      if (n <= 0) {
        console.log(`${CASE_NAME} finish, useTime: ${totalTime}ms`);
        expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
        done();
        return;
      }
      const startTime = new Date().getTime();
      sim.setVoiceMailInfo(env.SLOTID0, env.MAIL_NAME_LEN12, env.MAIL_NUMBER_LEN20, error => {
        const endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
    * @tc.number  Telephony_Sim_setVoiceMailInfo_Promise_0800
    * @tc.name    Test the performance of setVoiceMailInfo (Promise) interface
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_setVoiceMailInfo_Promise_0800', 0, async function (done) {

    const CASE_NAME = 'Telephony_Sim_setVoiceMailInfo_Promise_0800';
    let startTime = 0;
    let endTime = 0;
    let totalTime = 0;
    for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
      startTime = new Date().getTime();
      await sim.setVoiceMailInfo(env.SLOTID0, env.MAIL_NAME_LEN12, env.MAIL_NUMBER_LEN20)
        .catch(error => console.log(error.message));
      endTime = new Date().getTime();
      totalTime += endTime - startTime;
    }
    expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
    console.log(`${CASE_NAME} finish, useTime: ${totalTime}ms`);
    done();
  });
});
