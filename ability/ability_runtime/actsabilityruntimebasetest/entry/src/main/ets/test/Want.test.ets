/**
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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

import { describe, it, expect } from '@ohos/hypium'
import common from '@ohos.app.ability.common';
import fs from '@ohos.file.fs';
import hilog from '@ohos.hilog';

const TAG: string = 'ActsAbilityRunTimeBaseTest';


export default function WantTest() {
  describe('ActsWantTest', function () {
    const TEST_SUITE_NAME: string = 'ActsWantTest'

    function sleep(time) {
      return new Promise((resolve) => setTimeout(resolve, time))
    }

    function getParameterFd(fd) {
      return {
        'keyFd': {
          'type': 'FD', 'value': fd
        }
      }
    }

    async function startAbilityTest(parameters) {
      let wantInfo = {
        'deviceId': '',
        "bundleName": "com.ohos.wantxtstest",
        "abilityName": "WantAbility",
        "parameters": parameters
      }
      return globalThis.abilityDelegator.startAbility(wantInfo)
    }

    /**
     * @tc.number    : SUB_Ability_AbilityBase_WantParam_WantParametersJs_0200
     * @tc.name      : AbilityBase_WantParam_WantParametersJs_0500
     * @tc.desc      : test startAbility  want FD
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityBase_WantParam_WantParametersJs_0200', 0, async function (done) {
      const TEST_CASE_NAME: string = 'SUB_Ability_AbilityBase_WantParam_WantParametersJs_0200';

      let fd: number = 0;
      let filePath = '/data/storage/el2/base/haps/test_pic.png';

      try {
        let file = fs.openSync(filePath, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        fs.writeSync(fd, `dadas342412`);
        fd = file.fd
        hilog.info(0x000, `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} file fd: ${JSON.stringify(fd)}`);
        expect(fd).assertLargerOrEqual(1)

        await  startAbilityTest(getParameterFd(fd)).then(() => {
          hilog.info(0x000, `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start successful..`);
        }).catch((error) => {
          hilog.info(0x000, `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} error:${JSON.stringify(error)}`);
          expect().assertFail();
          done();
        })

        await sleep(1500);
        const parameters = globalThis.parameters;
        hilog.info(0x000, `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} parameters: ${JSON.stringify(parameters)}`);
        expect(parameters.keyFd.type).assertEqual("FD");
        expect(parameters.keyFd.value).assertEqual(fd);
        let abilityWantContext: common.UIAbilityContext = globalThis.abilityWantContext;
        abilityWantContext.terminateSelf();
        await sleep(1000);

        hilog.info(0x000, `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} success`);
        done();
      } catch (err) {
        hilog.error(0x000, `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} err:${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      } finally {
        fs.unlink(filePath).then(() => {
          hilog.info(0x000, `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} remove file succeed`);
        }).catch((err) => {
          hilog.error(0x000, `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME}  remove file failed with error:${JSON.stringify(err)}`);
        });
      }
    })

    /**
     * @tc.number    : SUB_Ability_AbilityBase_WantParam_WantParametersJs_0500
     * @tc.name      : AbilityBase_WantParam_WantParametersJs_0500
     * @tc.desc      : test startAbility  want Array
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityBase_WantParam_WantParametersJs_0500', 0, async function (done) {
      const TEST_CASE_NAME: string = 'SUB_Ability_AbilityBase_WantParam_WantParametersJs_0500';
      try {
        let arrayParameter = {
          'keyArrayObj': {
            'data': [1, 2, 3]
          }
        }

        await  startAbilityTest(arrayParameter).then(() => {
          hilog.info(0x000, `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start successful`);
        }).catch((error) => {
          hilog.info(0x000, `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} error:${JSON.stringify(error)}`);
        })
        await sleep(1500);
        const parameters = globalThis.parameters;
        hilog.info(0x000, `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} parameters: ${JSON.stringify(parameters)}`);
        expect(parameters.keyArrayObj.data[0]).assertEqual(1);
        expect(parameters.keyArrayObj.data[1]).assertEqual(2);
        expect(parameters.keyArrayObj.data[2]).assertEqual(3);
        let abilityWantContext: common.UIAbilityContext = globalThis.abilityWantContext;
        abilityWantContext.terminateSelf();
        await sleep(1000);
        hilog.info(0x000, `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} success`);
        done();

      } catch (err) {
        hilog.error(0x000, `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} err:${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }

    })

    /**
     * @tc.number    : SUB_Ability_AbilityBase_WantParam_WantParametersJs_0700
     * @tc.name      : AbilityBase_WantParam_WantParametersJs_0700
     * @tc.desc      : test startAbility wrong want parameters为："keyFd":{"type":"FD", "value":0}
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityBase_WantParam_WantParametersJs_0700', 0, async function (done) {
      const TEST_CASE_NAME: string = 'SUB_Ability_AbilityBase_WantParam_WantParametersJs_0700';
      try {
        await  startAbilityTest(getParameterFd(0)).then(() => {
          hilog.info(0x000, `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start successful`);
          expect().assertFail();
          done()
        }).catch((error) => {
          hilog.error(0x000, `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} error:${JSON.stringify(error)}`);
          expect(error.code === undefined).assertFalse();
          expect(error.code).assertEqual(2097167)
          done()
        })
      } catch (err) {
        hilog.error(0x000, `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} err:${JSON.stringify(err)}`);
        done();
      }
    })

    /**
     * @tc.number    : SUB_Ability_AbilityBase_WantParam_WantParametersJs_0800
     * @tc.name      : AbilityBase_WantParam_WantParametersJs_0800
     * @tc.desc      : test startAbility wrong want parameters为："keyFd":{"type":"FD", "value":-1}
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityBase_WantParam_WantParametersJs_0800', 0, async function (done) {
      const TEST_CASE_NAME: string = 'SUB_Ability_AbilityBase_WantParam_WantParametersJs_0800';
      try {
        await  startAbilityTest(getParameterFd(-1)).then(() => {
          hilog.info(0x000, `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start successful`);
          expect().assertFail();
          done()
        }).catch((error) => {
          hilog.info(0x000, `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} error :${JSON.stringify(error)}}`);
          expect(error.code === undefined).assertFalse();
          expect(error.code).assertEqual(2097167)
          done()
        })
      } catch (err) {
        hilog.info(0x000, `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} fail: ${err}`);
        done();
      }
    })

    /**
     * @tc.number    : SUB_Ability_AbilityBase_WantParam_WantParametersJs_0900
     * @tc.name      : AbilityBase_WantParam_WantParametersJs_0900
     * @tc.desc      : test startAbility wrong want : err parameters为："keyFd":{"type":"FD", "value":"err"}
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityBase_WantParam_WantParametersJs_0900', 0, async function (done) {
      const TEST_CASE_NAME: string = 'SUB_Ability_AbilityBase_WantParam_WantParametersJs_0900';
      try {
        await  startAbilityTest(getParameterFd("err")).then(() => {
          hilog.info(0x000, `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start successful. `);
          expect().assertFail();
          done()
        }).catch((error) => {
          hilog.error(0x000, `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} error :${JSON.stringify(error)}}`);
          expect(error.code === undefined).assertFalse();
          expect(error.code).assertEqual(2097167)
          done()
        })

      } catch (err) {
        hilog.error(0x000, `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} err :${JSON.stringify(err)}}`);
        done();
      }
    })

  })
}