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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import abilityManager from '@ohos.app.ability.abilityManager';
import errorManager from '@ohos.app.ability.errorManager';
import { BusinessError } from '@ohos.base';
import { Configuration } from '@ohos.app.ability.Configuration';

function sleep(time: number) {
  return new Promise<void>((resolve) => setTimeout(resolve, time));
}

export default function NewApiCoverTest() {
  describe('NewApiCoverTestTest', () => {
    afterEach(async (done: Function) => {
      setTimeout(() => {
        done();
      }, 2500);
    })

    /*
     * @tc.number  SUB_AA_ReisterLoopObserver_0100
     * @tc.name    Test ReisterLoopObserver.
     * @tc.desc    Function test
     * @tc.level   3
     */
    it('SUB_AA_ReisterLoopObserver_0100', 0, async (done: Function) => {
      console.info("SUB_AA_ReisterLoopObserver_0100 start");
      try {
        let observer: errorManager.LoopObserver = {
          onLoopTimeOut(timeout: number) {
            console.info('Duration timeout: ' + timeout);
          }
        };
        errorManager.on("loopObserver", 1, observer);
        setTimeout(() => {
          done();
        }, 2500);
        errorManager.off("loopObserver");
        done();
      } catch (error) {
        console.info("SUB_AA_ReisterLoopObserver_0100 error: " + JSON.stringify(error));
        expect(error.code == 16200001).assertTrue();
        done();
      }
    });

    /*
     * @tc.number  SUB_AA_ReisterErrorObserver_New_0100
     * @tc.name    Test ReisterErrorObserver.
     * @tc.desc    Function test
     * @tc.level   3
     */
    it('SUB_AA_ReisterErrorObserver_New_0100', 0, async (done: Function) => {
      console.info("SUB_AA_ReisterErrorObserver_New_0100 start");
      let errorObserver: errorManager.ErrorObserver;
      errorObserver = {
        onUnhandledException: (errMessage) => {
          console.info("SUB_AA_ReisterErrorObserver_0100" + JSON.stringify(errMessage));
        }
      }
      try {
        let errCodeId = errorManager.on("error", errorObserver);
        console.info("SUB_AA_ReisterErrorObserver_New_0100 errCodeId=" + errCodeId);
        expect(errCodeId).assertEqual(0);
        errorManager.off("error", errCodeId)
          .then((data) => {
            console.info("SUB_AA_ReisterErrorObserver_New_0100 data=" + data);
            expect(data).assertEqual(undefined);
            done();
          })
          .catch((err: BusinessError) => {
            expect().assertFail();
            console.info("SUB_AA_ReisterErrorObserver_New_0100 catch err, err=" + JSON.stringify(err));
            done();
          })
      } catch (error) {
        expect().assertFail();
        done();
      }

    });

    /*
     * @tc.number  SUB_AA_ReisterErrorObserver_0200
     * @tc.name    Test unregisterErrorObserver with error number.
     * @tc.desc    Function test
     * @tc.level   3
     */
    it('SUB_AA_ReisterErrorObserver_New_0200', 0, async (done: Function) => {
      console.info("SUB_AA_ReisterErrorObserver_New_0200 start");
      try {
        errorManager.off("error", -1)
          .then((data) => {
            console.info("SUB_AA_ReisterErrorObserver_New_0200 off error with -1 success, " + JSON.stringify(data));
            expect().assertFail();
            done();
          })
          .catch((err: BusinessError) => {
            console.info("SUB_AA_ReisterErrorObserver_New_0200 off error with -1 catch error, " + JSON.stringify(err));
            expect(err.code).assertEqual(401);
            done();
          })
      } catch (error) {
        console.info("SUB_AA_ReisterErrorObserver_New_0200 off error with -1 catch error2, " + JSON.stringify(error));
        expect().assertFail();
        done();
      }
    });

    /*
     * @tc.number  SUB_AA_GetExtensionRunningInfos_0100
     * @tc.name    Test getExtensionRunningInfos.
     * @tc.desc    Function test
     * @tc.level   3
     */
    it('SUB_AA_GetExtensionRunningInfos_0100', 0, async (done: Function) => {
      console.info("SUB_AA_GetExtensionRunningInfos_0100 start");
      try {
        let upperLimit = 1;
        await abilityManager.getExtensionRunningInfos(upperLimit)
          .then((data) => {
            console.info("SUB_AA_GetExtensionRunningInfos_0100 getExtensionRunningInfos success");
            expect(true).assertTrue();
            done();
          })
          .catch((err: BusinessError) => {
            console.info("SUB_AA_GetExtensionRunningInfos_0100 getExtensionRunningInfos fail " + JSON.stringify(err));
            expect().assertFail();
            done();
          })
      } catch (error) {
        console.info("SUB_AA_GetExtensionRunningInfos_0100 getExtensionRunningInfos fail2 " + JSON.stringify(error));
        expect().assertFail();
        done();
      }
    });

    /*
     * @tc.number  SUB_AA_UpdateConfiguration_0100
     * @tc.name    Test updateConfiguration.
     * @tc.desc    Function test
     * @tc.level   3
     */
    it('SUB_AA_UpdateConfiguration_0100', 0, async (done: Function) => {
      console.info("SUB_AA_UpdateConfiguration_0100 start");
      try {
        // init for repeat test
        let configInit: Configuration = {
          language: 'english'
        }
        abilityManager.updateConfiguration(configInit, (err, data) => {
          console.info("SUB_AA_UpdateConfiguration_0100 updateConfiguration en success " + JSON.stringify(data));
        });

        let config: Configuration = {
          language: 'chinese'
        }
        await abilityManager.updateConfiguration(config)
          .then((data) => {
            console.info("SUB_AA_UpdateConfiguration_0100 updateConfiguration ch success " + JSON.stringify(data));
            expect(true).assertTrue();
            done();
          })
          .catch((err: BusinessError) => {
            console.info("SUB_AA_UpdateConfiguration_0100 updateConfiguration ch fail " + JSON.stringify(err));
            expect().assertFail();
            done();
          })
      } catch (error) {
        console.info("SUB_AA_UpdateConfiguration_0100 updateConfiguration fail " + JSON.stringify(error));
        expect().assertFail();
        done();
      }
    });

    /*
     * @tc.number  SUB_AA_UpdateConfiguration_0200
     * @tc.name    Test updateConfiguration.
     * @tc.desc    Function test
     * @tc.level   3
     */
    it('SUB_AA_UpdateConfiguration_0200', 0, async (done: Function) => {
      console.info("SUB_AA_UpdateConfiguration_0200 start");

      // set language to english
      await new Promise<void>((resolve, reject) => {
        AppStorage.setOrCreate<Function>("UpdateConfiguration_0200_prepare_resolve", () => {
          console.info("SUB_AA_UpdateConfiguration_0200 ----> succees to set language(english).");
        });
        console.info("SUB_AA_UpdateConfiguration_0200 ----> before set language to english.");
        abilityManager.updateConfiguration({language: 'English'})
          .then(() => {
            console.info("SUB_AA_UpdateConfiguration_0200 ----> set language to english succeed.");
          })
          .catch((err: BusinessError) => {
            console.info("SUB_AA_UpdateConfiguration_0200 ----> failed to set language to english: " + err);
            AppStorage.get<Function>("UpdateConfiguration_0200_prepare_resolve")!();
          });
      })
        .then(() => {
          AppStorage.get<Function>("UpdateConfiguration_0200_prepare_resolve")!();
        })
        .catch((err: BusinessError) => {
          console.info("SUB_AA_UpdateConfiguration_0200 ----> failed to set language(english): " + err);
        })
        .finally(() => {
          AppStorage.setOrCreate<Function>("UpdateConfiguration_0200_prepare_resolve", null);
          AppStorage.setOrCreate<Function>("UpdateConfiguration_0200_resolve", null);
          AppStorage.setOrCreate<Function>("UpdateConfiguration_0200_reject", null);
          console.info("SUB_AA_UpdateConfiguration_0200 ----> set promise to null after all");
        });


      // set language to chinese
      await new Promise<void>((resolve, reject) => {
        AppStorage.setOrCreate<Function>("UpdateConfiguration_0200_resolve", () => {
          console.info("SUB_AA_UpdateConfiguration_0200 ----> succees to set language(chinese).");
          expect(true).assertTrue();
        });
        AppStorage.setOrCreate<Function>("UpdateConfiguration_0200_reject", (err: BusinessError) => {
          console.info("SUB_AA_UpdateConfiguration_0200 ----> failed to set language(chinese): " + err);
          expect(false).assertTrue();
        });
        console.info("SUB_AA_UpdateConfiguration_0200 ----> before set language to chinese.");
        abilityManager.updateConfiguration({language: 'chinese'})
          .then(() => {
            console.info("SUB_AA_UpdateConfiguration_0200 ----> set language to chinese succeed.");
          })
          .catch((err: BusinessError) => {
            console.info("SUB_AA_UpdateConfiguration_0200 ----> failed to set language to chinese: " + err);
          });
      })
        .then(() => {
          AppStorage.get<Function>("UpdateConfiguration_0200_resolve")!();
        })
        .catch((err: BusinessError) => {
          AppStorage.get<Function>("UpdateConfiguration_0200_reject")!(err);
        })
        .finally(() => {
          AppStorage.setOrCreate<Function>("UpdateConfiguration_0200_resolve", null);
          AppStorage.setOrCreate<Function>("UpdateConfiguration_0200_reject", null);
          expect(AppStorage.get<string>("UpdateConfiguration_0200")!).assertEqual('chinese');
          console.info("SUB_AA_UpdateConfiguration_0200 ----> set promise to null after all");
          done();
        });
    })
  })
}
