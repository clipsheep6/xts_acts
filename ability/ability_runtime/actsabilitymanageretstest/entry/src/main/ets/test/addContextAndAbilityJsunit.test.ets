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

import { describe, beforeAll, afterAll, it, expect } from '@ohos/hypium';
import Utils from './Utils';
import ability_featureAbility from '@ohos.ability.featureAbility';
import appManager from "@ohos.app.ability.appManager";
import backgroundTaskManager from '@ohos.backgroundTaskManager';
import { BusinessError } from '@ohos.base';

const TAG_TEST_0100 = 'context_isUpdatingConfigurations_test_0100';
const TAG_TEST_0200 = 'context_isUpdatingConfigurations_test_0200';
const TAG_TEST_0300 = 'context_printDrawnCompleted_test_0100';
const TAG_TEST_0400 = 'context_printDrawnCompleted_test_0200';
const TAG_TEST_0500 = 'context_getAppMemorySize_test_0100';
const TAG_TEST_0600 = 'context_getAppMemorySize_test_0200';
const TAG_TEST_0700 = 'context_isRamConstrainedDevice_test_0100';
const TAG_TEST_0800 = 'context_isRamConstrainedDevice_test_0200';
const TAG_TEST_0900 = 'context_featureAbility_test_0100';
const TAG_TEST_0010 = 'context_featureAbility_test_0200';
const TAG_TEST_0011 = 'context_featureAbility_test_0300';
const TAG_TEST_0012 = 'context_featureAbility_test_0400';

export default function addContextAndAbilityJsunit() {
  describe('addContextTest', () => {

    /*
    *@tc.number     : Context_IsUpdatingConfigurations_Test_0100
    *@tc.name       : Context_IsUpdatingConfigurations_Test_0100
    *@tc.desc       : Check the return value of isUpdatingConfigurations (by promise)
    *@tc.size       : MediumTest
    *@tc.type       : Function
    *@tc.level      : Level 1
    */
    it('Context_IsUpdatingConfigurations_Test_0100', 0, async (done: Function) => {
      console.info(TAG_TEST_0100 + 'promise START');
      let detailed: boolean;
      let startTime = Utils.getNowTime();
      let context = ability_featureAbility.getContext();
      await context.isUpdatingConfigurations()
        .then((data) => {
          let endTime = Utils.getNowTime();
          Utils.getDurationTime(TAG_TEST_0100, startTime, endTime);
          console.info(TAG_TEST_0100 + ' promise data is:' + JSON.stringify(data));
          detailed = data;
          expect(typeof (detailed)).assertEqual("boolean");
          expect(detailed).assertEqual(false);
          console.log('------------------ ' + TAG_TEST_0100 + ' end -------------------');
          done();
        }).catch((error: BusinessError) => {
          console.error(TAG_TEST_0100 + 'promise errors is: ' + JSON.stringify(error));
          expect().assertFail();
          done();
      })
    })

    /*
    *@tc.number     : Context_IsUpdatingConfigurations_Test_0200
    *@tc.name       : Context_IsUpdatingConfigurations_Test_0200
    *@tc.desc       : Check the return value of isUpdatingConfigurations (by AsyncCallback)
    *@tc.size       : MediumTest
    *@tc.type       : Function
    *@tc.level      : Level 1
    */
    it('Context_IsUpdatingConfigurations_Test_0200', 0, async (done: Function) => {
      let detailed: boolean;
      console.info(TAG_TEST_0200 + 'callBack START');
      try {
        let startTime = await Utils.getNowTime();
        let context = ability_featureAbility.getContext();
        context.isUpdatingConfigurations((error, data) => {
          let endTime = Utils.getNowTime();
          Utils.getDurationTime(TAG_TEST_0200, startTime, endTime);
          detailed = data;
          console.info(TAG_TEST_0200 + ' callBack succeeded. data is:' + JSON.stringify(data));
          expect(typeof (detailed)).assertEqual("boolean");
          expect(detailed).assertEqual(false);
          console.log('------------------ ' + TAG_TEST_0200 + ' end -------------------');
          done();
        })
      } catch (error) {
        console.error(TAG_TEST_0200 + 'Operation failed. Cause: ' + JSON.stringify(error));
        expect().assertFail();
        done();
      }
    })

    /*
    *@tc.number     : Context_PrintDrawnCompleted_Test_0100
    *@tc.name       : Context_PrintDrawnCompleted_Test_0100
    *@tc.desc       : Check the return value of printDrawnCompleted (by promise)
    *@tc.size       : MediumTest
    *@tc.type       : Function
    *@tc.level      : Level 1
    */
    it('Context_PrintDrawnCompleted_Test_0100', 0, async (done: Function) => {
      let detailed: ESObject;
      console.info(TAG_TEST_0300 + 'callBack START');
      let startTime = await Utils.getNowTime();
      let context = ability_featureAbility.getContext();
      await context.printDrawnCompleted().then((data) => {
        let endTime = Utils.getNowTime();
        Utils.getDurationTime(TAG_TEST_0300, startTime, endTime);
        console.info(TAG_TEST_0300 + ' promise data is:' + JSON.stringify(data));
        detailed = data;
        expect(detailed).assertEqual(null);
        console.log('------------------ ' + TAG_TEST_0300 + ' end -------------------');
        done();
      }).catch((error: BusinessError) => {
        console.error(TAG_TEST_0300 + 'promise error is: ' + JSON.stringify(error));
        expect().assertFail();
        done();
      })
    })

    /*
    *@tc.number     : Context_PrintDrawnCompleted_Test_0200
    *@tc.name       : Context_PrintDrawnCompleted_Test_0200
    *@tc.desc       : Check the return value of printDrawnCompleted (by AsyncCallback)
    *@tc.size       : MediumTest
    *@tc.type       : Function
    *@tc.level      : Level 1
    */
    it('Context_PrintDrawnCompleted_Test_0200', 0, async (done: Function) => {
      let detailed: ESObject;
      console.info(TAG_TEST_0400 + 'callBack START');
      try {
        let startTime = await Utils.getNowTime();
        let context = ability_featureAbility.getContext();
        context.printDrawnCompleted((error, data) => {
          let endTime = Utils.getNowTime();
          Utils.getDurationTime(TAG_TEST_0400, startTime, endTime);
          detailed = data;
          console.info(TAG_TEST_0400 + ' callBack succeeded. data is:' + JSON.stringify(data));
          expect(detailed).assertEqual(null);
          console.log('------------------ ' + TAG_TEST_0400 + ' end -------------------');
          done();
        })
      } catch (error) {
        console.error(TAG_TEST_0400 + 'Operation failed. Cause: ' + JSON.stringify(error));
        expect().assertFail();
        done();
      }
    })

    /*
    *@tc.number     : Context_GetAppMemorySize_Test_0100
    *@tc.name       : Context_GetAppMemorySize_Test_0100
    *@tc.desc       : Check the return value of getAppMemorySize (by promise)
    *@tc.size       : MediumTest
    *@tc.type       : Function
    *@tc.level      : Level 1
    */
    it('Context_GetAppMemorySize_Test_0100', 0, async (done: Function) => {
      console.info(TAG_TEST_0500 + 'promise START');
      let detailed: number;
      let startTime = await Utils.getNowTime();
      await appManager.getAppMemorySize()
        .then((data) => {
          let endTime = Utils.getNowTime();
          Utils.getDurationTime(TAG_TEST_0500, startTime, endTime)
          console.info(TAG_TEST_0500 + ' promise data is:' + JSON.stringify(data));
          detailed = data;
          expect(typeof (detailed)).assertEqual("number");
          expect(detailed).assertLarger(0);
          console.log('------------------ ' + TAG_TEST_0500 + ' end -------------------');
          done();
        }).catch((error: BusinessError) => {
          console.error(TAG_TEST_0500 + 'promise errors is: ' + JSON.stringify(error));
          expect().assertFail();
          done();
        })
    })

    /*
    *@tc.number     : Context_GetAppMemorySize_Test_0200
    *@tc.name       : Context_GetAppMemorySize_Test_0200
    *@tc.desc       : Check the return value of getAppMemorySize (by AsyncCallback)
    *@tc.size       : MediumTest
    *@tc.type       : Function
    *@tc.level      : Level 1
    */
    it('Context_GetAppMemorySize_Test_0200', 0, async (done: Function) => {
      console.info(TAG_TEST_0600 + 'callBack START');
      let startTime = Utils.getNowTime();
      appManager.getAppMemorySize((error, data) => {
        let endTime = Utils.getNowTime();
        Utils.getDurationTime(TAG_TEST_0600, startTime, endTime)
        console.info(TAG_TEST_0600 + ' callBack error is: ' + JSON.stringify(error));
        console.info(TAG_TEST_0600 + ' callBack data is:' + JSON.stringify(data));
        expect(typeof (data)).assertEqual("number");
        expect(data).assertLarger(0);
        console.log('------------------ ' + TAG_TEST_0600 + ' end -------------------');
        done();
      })
    });

    /*
    *@tc.number     : Context_IsRamConstrainedDevice_Test_0100
    *@tc.name       : Context_IsRamConstrainedDevice_Test_0100
    *@tc.desc       : Check the return value of isRamConstrainedDevice (by promise)
    *@tc.size       : MediumTest
    *@tc.type       : Function
    *@tc.level      : Level 1
    */
    it('Context_IsRamConstrainedDevice_Test_0100', 0, async (done: Function) => {
      let detailed: boolean;
      console.info(TAG_TEST_0700 + 'promise START');
      let startTime = Utils.getNowTime();
      await appManager.isRamConstrainedDevice().then((data) => {
        let endTime = Utils.getNowTime();
        Utils.getDurationTime(TAG_TEST_0700, startTime, endTime)
        console.info(TAG_TEST_0700 + ' promise data is:' + JSON.stringify(data));
        detailed = data;
        expect(typeof (detailed)).assertEqual("boolean");
        expect(detailed).assertEqual(false);
        console.log('------------------ ' + TAG_TEST_0700 + ' end -------------------');
        done();
      }).catch((error: BusinessError) => {
        console.error(TAG_TEST_0700 + 'promise errors is: ' + JSON.stringify(error));
        expect().assertFail();
        done();
      })
    })

    /*
    *@tc.number     : Context_IsRamConstrainedDevice_Test_0200
    *@tc.name       : Context_IsRamConstrainedDevice_Test_0200
    *@tc.desc       : Check the return value of isRamConstrainedDevice (by AsyncCallback)
    *@tc.size       : MediumTest
    *@tc.type       : Function
    *@tc.level      : Level 1
    */
    it('Context_IsRamConstrainedDevice_Test_0200', 0, async (done: Function) => {
      console.info(TAG_TEST_0800 + 'callBack START');
      let startTime = await Utils.getNowTime();
      appManager.isRamConstrainedDevice((error, data) => {
        let endTime = Utils.getNowTime();
        Utils.getDurationTime(TAG_TEST_0800, startTime, endTime);
        console.info(TAG_TEST_0800 + ' callBack error is:' + error);
        console.info(TAG_TEST_0800 + ' callBack data is:' + JSON.stringify(data));
        expect(typeof (data)).assertEqual("boolean");
        expect(data).assertEqual(false);
        done();
      })
      console.log('------------------ ' + TAG_TEST_0800 + ' end -------------------');
    })

    /*
    *@tc.number     : Context_FeatureAbility_Test_0100
    *@tc.name       : Context_FeatureAbility_Test_0100
    *@tc.desc       : Check featureAbility.ErrorCode
    *@tc.size       : MediumTest
    *@tc.type       : Function
    *@tc.level      : Level 1
    */
    it('Context_FeatureAbility_Test_0100', 0, async (done: Function) => {
      console.info(TAG_TEST_0900 + ' NO_ERROR START');
      let no_error = ability_featureAbility.ErrorCode.NO_ERROR;
      console.info(TAG_TEST_0900 + ' featureAbility no_error is: ' + no_error);
      expect(typeof (no_error)).assertEqual("number");
      expect(no_error).assertEqual(0);
      done();
      console.log('------------------ ' + TAG_TEST_0900 + ' end -------------------');
    })

    /*
    *@tc.number     : Context_FeatureAbility_Test_0200
    *@tc.name       : Context_FeatureAbility_Test_0200
    *@tc.desc       : Check featureAbility.ErrorCode
    *@tc.size       : MediumTest
    *@tc.type       : Function
    *@tc.level      : Level 1
    */
    it('Context_FeatureAbility_Test_0200', 0, async (done: Function) => {
      console.info(TAG_TEST_0010 + ' INVALID_PARAMETER START');
      let invalid_parameter = ability_featureAbility.ErrorCode.INVALID_PARAMETER;
      console.info(TAG_TEST_0010 + ' featureAbility invalid_parameter is: ' + invalid_parameter);
      expect(typeof (invalid_parameter)).assertEqual("number");
      expect(invalid_parameter).assertEqual(-1);
      done();
      console.log('------------------ ' + TAG_TEST_0010 + ' end -------------------');
    })

    /*
    *@tc.number     : Context_FeatureAbility_Test_0300
    *@tc.name       : Context_FeatureAbility_Test_0300
    *@tc.desc       : Check featureAbility.ErrorCode
    *@tc.size       : MediumTest
    *@tc.type       : Function
    *@tc.level      : Level 1
    */
    it('Context_FeatureAbility_Test_0300', 0, async (done: Function) => {
      console.info(TAG_TEST_0011 + ' ABILITY_NOT_FOUND START');
      let ability_not_found = ability_featureAbility.ErrorCode.ABILITY_NOT_FOUND;
      console.info(TAG_TEST_0011 + ' featureAbility ability_not_found is: ' + ability_not_found);
      expect(typeof (ability_not_found)).assertEqual("number");
      expect(ability_not_found).assertEqual(-2);
      done();
      console.log('------------------ ' + TAG_TEST_0011 + ' end -------------------');
    })

    /*
    *@tc.number     : Context_FeatureAbility_Test_0400
    *@tc.name       : Context_FeatureAbility_Test_0400
    *@tc.desc       : Check featureAbility.ErrorCode
    *@tc.size       : MediumTest
    *@tc.type       : Function
    *@tc.level      : Level 1
    */
    it('Context_FeatureAbility_Test_0400', 0, async (done: Function) => {
      console.info(TAG_TEST_0012 + ' PERMISSION_DENY START');
      let permission_deny = ability_featureAbility.ErrorCode.PERMISSION_DENY;
      console.info(TAG_TEST_0012 + ' featureAbility permission_deny is: ' + permission_deny);
      expect(typeof (permission_deny)).assertEqual("number");
      expect(permission_deny).assertEqual(-3);
      done();
      console.log('------------------ ' + TAG_TEST_0012 + ' end -------------------');
    })
  })
}