/**
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

import bundle from '@ohos.bundle';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"

const MODULE_NAME = "phone"
const MODULE_NAME_TEST = "phone1"
const ABILITY_NAME = "ohos.acts.bundle.stage.test.MainAbility"
const ABILITY_NAME1 = "ohos.acts.bundle.stage.test.MainAbility1"
const ABILITY_NAME_TEST = "ohos.acts.bundle.stage.test.MainAbilityTest"
const METADATA_NAME = "ohos.ability.form"
const METADATA_NAME1 = "ohos.ability.form1"
const METADATA_NAME2 = "ohos.ability.form2"
const METADATA_NAME3 = "ohos.ability.form3"
const METADATA_NAME4 = "ohos.ability.form4"
const METADATA_NAME_TEST = "ohos.test.form"
const PROFILE_JSON_STRING = "{\"src\":[\"MainAbility/pages/index/index\",\"MainAbility/pages/second/second\"]}"

export default function getProfileByAbility() {
  describe('getProfileByAbility', function () {
    /*
     * @tc.number: SUB_BMS_APPINFO_QUERYMETAFILE_0021
     * @tc.name: GetProfileByAbilityInvalidModuleName
     * @tc.desc: Check the invalid moduleName
     * @tc.level   0
     */
    it('GetProfileByAbilityInvalidModuleName', 0, async function (done) {
      await bundle.getProfileByAbility(MODULE_NAME_TEST, ABILITY_NAME, METADATA_NAME).then(data => {
        console.info("getProfileByAbility_0400 success" + JSON.stringify(data))
        expect(data).assertFail()
      }).catch(err => {
        console.info("getProfileByAbility_0400 failed" + JSON.stringify(err))
        expect(err).assertEqual(1)
      })
      await bundle.getProfileByAbility(MODULE_NAME_TEST, ABILITY_NAME ).then(data => {
        console.info("getProfileByAbility_0400 success" + JSON.stringify(data))
        expect(data).assertFail()
      }).catch(err => {
        console.info("getProfileByAbility_0400 failed" + JSON.stringify(err))
        expect(err).assertEqual(1)
      })
      bundle.getProfileByAbility(MODULE_NAME_TEST, ABILITY_NAME, METADATA_NAME, (err, data) => {
        console.error('[getProfileByAbility_0600]Operation failed. Cause: ' + JSON.stringify(err));
        console.info('[getProfileByAbility_0600] getApplicationInfo callback data is: ' + JSON.stringify(data));
        expect(typeof data).assertEqual("string");
        expect(data).assertEqual("GetProfile failed");
        expect(err).assertEqual(1);
        done();
      });
    })

    /*
     * @tc.number: getProfileByAbility_0500
     * @tc.name: getProfileByAbility : The profile is obtained by specified ability
     * @tc.desc: Check the invalid moduleName
     * @tc.level   0
     */
    it('getProfileByAbility_0500', 0, async function (done) {
      await bundle.getProfileByAbility('', ABILITY_NAME, METADATA_NAME).then(data => {
        console.info("getProfileByAbility_0500 success" + JSON.stringify(data))
        expect(data).assertFail()
      }).catch(err => {
        console.info("getProfileByAbility_0500 failed" + JSON.stringify(err))
        expect(err).assertEqual(1)
      })
      bundle.getProfileByAbility('', ABILITY_NAME, METADATA_NAME, (err, data) => {
        console.error('[getProfileByAbility_0700]Operation failed. Cause: ' + JSON.stringify(err));
        console.info('[getProfileByAbility_0700] getApplicationInfo callback data is: ' + JSON.stringify(data));
        expect(typeof data).assertEqual("string");
        expect(data).assertEqual("GetProfile failed");
        expect(err).assertEqual(1);
        done();
      });
    })

    /*
     * @tc.number: SUB_BMS_APPINFO_QUERYMETAFILE_0012
     * @tc.name: GetProfileByAbilityInvalidAbilityName
     * @tc.desc: Check the invalid abilityName
     * @tc.level   0
     */
    it('GetProfileByAbilityInvalidAbilityName', 0, async function (done) {
      await bundle.getProfileByAbility(MODULE_NAME, ABILITY_NAME_TEST, METADATA_NAME).then(data => {
        console.info("getProfileByAbility_0800 success" + JSON.stringify(data))
        expect(data).assertFail()
      }).catch(err => {
        console.info("getProfileByAbility_0800 failed" + JSON.stringify(err))
        expect(err).assertEqual(1)
      })
      await bundle.getProfileByAbility(MODULE_NAME, ABILITY_NAME_TEST).then(data => {
        console.info("getProfileByAbility_0800 success" + JSON.stringify(data))
        expect(data).assertFail()
      }).catch(err => {
        console.info("getProfileByAbility_0800 failed" + JSON.stringify(err))
        expect(err).assertEqual(1)
      })
      bundle.getProfileByAbility(MODULE_NAME, ABILITY_NAME_TEST, METADATA_NAME, (err, data) => {
        console.error('[getProfileByAbility_1000]Operation failed. Cause: ' + JSON.stringify(err));
        console.info('[getProfileByAbility_1000] getApplicationInfo callback data is: ' + JSON.stringify(data));
        expect(typeof data).assertEqual("string");
        expect(data).assertEqual("GetProfile failed");
        expect(err).assertEqual(1);
        done();
      });
    })

    /*
     * @tc.number: getProfileByAbility_0900
     * @tc.name: getProfileByAbility : The profile is obtained by specified ability
     * @tc.desc: Check the invalid abilityName
     * @tc.level   0
     */
    it('getProfileByAbility_0900', 0, async function (done) {
      await bundle.getProfileByAbility(MODULE_NAME, '', METADATA_NAME).then(data => {
        console.info("getProfileByAbility_0900 success" + JSON.stringify(data))
        expect(data).assertFail()
      }).catch(err => {
        console.info("getProfileByAbility_0900 failed" + JSON.stringify(err))
        expect(err).assertEqual(1)
      })
      bundle.getProfileByAbility(MODULE_NAME, '', METADATA_NAME, (err, data) => {
        console.error('[getProfileByAbility_1100]Operation failed. Cause: ' + JSON.stringify(err));
        console.info('[getProfileByAbility_1100] getApplicationInfo callback data is: ' + JSON.stringify(data));
        expect(typeof data).assertEqual("string");
        expect(data).assertEqual("GetProfile failed");
        expect(err).assertEqual(1);
        done();
      });
    })

    /*
     * @tc.number: SUB_BMS_APPINFO_QUERYMETAFILE_0002
     * @tc.name: TestGetProfileByAbility
     * @tc.desc: Check the valid metadataName
     * @tc.level   0
     */
    it('TestGetProfileByAbility', 0, async function (done) {
      await bundle.getProfileByAbility(MODULE_NAME, ABILITY_NAME, METADATA_NAME).then(data => {
        console.info('[getProfileByAbility_1500] getApplicationInfo callback data is: ' + JSON.stringify(data));
        expect(Array.isArray(data)).assertTrue();
        expect(typeof data[0]).assertEqual("string");
        expect(data[0]).assertEqual(PROFILE_JSON_STRING);
      }).catch(err => {
        console.error('[getProfileByAbility_1500]Operation failed. Cause: ' + JSON.stringify(err));
        expect(err).assertFail();
      })
      bundle.getProfileByAbility(MODULE_NAME, ABILITY_NAME, METADATA_NAME, (err, data) => {
        console.error('[getProfileByAbility_1200]Operation failed. Cause: ' + JSON.stringify(err));
        console.info('[getProfileByAbility_1200] getApplicationInfo callback data is: ' + JSON.stringify(data));
        expect(Array.isArray(data)).assertTrue();
        expect(typeof data[0]).assertEqual("string");
        expect(data[0]).assertEqual(PROFILE_JSON_STRING);
        expect(err).assertEqual(0);
        done();
      });
    })

    /*
     * @tc.number: SUB_BMS_APPINFO_QUERYMETAFILE_0004
     * @tc.name: GetProfileByAbilityInvalidMetadataName
     * @tc.desc: Check the invalid metadataName
     * @tc.level   0
     */
    it('GetProfileByAbilityInvalidMetadataName', 0, async function (done) {
      await bundle.getProfileByAbility(MODULE_NAME, ABILITY_NAME, METADATA_NAME_TEST).then(data => {
        console.info('[getProfileByAbility_1600] getApplicationInfo callback data is: ' + JSON.stringify(data));
        expect(data).assertFail()
      }).catch(err => {
        console.error('[getProfileByAbility_1600]Operation failed. Cause: ' + JSON.stringify(err));
        expect(err).assertEqual(1);
      })
      bundle.getProfileByAbility(MODULE_NAME, ABILITY_NAME, METADATA_NAME_TEST, (err, data) => {
        console.error('[getProfileByAbility_1300]Operation failed. Cause: ' + JSON.stringify(err));
        console.info('[getProfileByAbility_1300] getApplicationInfo callback data is: ' + JSON.stringify(data));
        expect(typeof data).assertEqual("string");
        expect(data).assertEqual("GetProfile failed");
        expect(err).assertEqual(1);
        done();
      });
    })

    /*
     * @tc.number: getProfileByAbility_1700
     * @tc.name: getProfileByAbility : The profile is obtained by specified ability
     * @tc.desc: Check the empty metadataName
     * @tc.level   0
     */
    it('getProfileByAbility_1700', 0, async function (done) {
      await bundle.getProfileByAbility(MODULE_NAME, ABILITY_NAME, '').then(data => {
        console.info('[getProfileByAbility_1700] getApplicationInfo callback data is: ' + JSON.stringify(data));
        expect(Array.isArray(data)).assertTrue();
        expect(typeof data[0]).assertEqual("string");
        expect(data[0]).assertEqual(PROFILE_JSON_STRING);
        expect(typeof data[1]).assertEqual("string");
        expect(data[1]).assertEqual(PROFILE_JSON_STRING);
      }).catch(err => {
        console.error('[getProfileByAbility_1700]Operation failed. Cause: ' + JSON.stringify(err));
        expect(err).assertFail();
      })
      bundle.getProfileByAbility(MODULE_NAME, ABILITY_NAME, '', (err, data) => {
        console.error('[getProfileByAbility_1400]Operation failed. Cause: ' + JSON.stringify(err));
        console.info('[getProfileByAbility_1400] getApplicationInfo callback data is: ' + JSON.stringify(data));
        expect(Array.isArray(data)).assertTrue();
        expect(typeof data[0]).assertEqual("string");
        expect(data[0]).assertEqual(PROFILE_JSON_STRING);
        expect(typeof data[1]).assertEqual("string");
        expect(data[1]).assertEqual(PROFILE_JSON_STRING);
        expect(err).assertEqual(0);
        done();
      });
    })

    /*
     * @tc.number: SUB_BMS_APPINFO_QUERYMETAFILE_0009
     * @tc.name: GetProfileByAbilityWithoutMetadataName
     * @tc.desc: without metadataName (by promise)
     * @tc.level   0
     */
    it('GetProfileByAbilityWithoutMetadataName', 0, async function (done) {
      await bundle.getProfileByAbility(MODULE_NAME, ABILITY_NAME).then(data => {
        console.info('[getProfileByAbility_1800] getApplicationInfo callback data is: ' + JSON.stringify(data));
        expect(Array.isArray(data)).assertTrue();
        expect(typeof data[0]).assertEqual("string");
        expect(data[0]).assertEqual(PROFILE_JSON_STRING);
        expect(typeof data[1]).assertEqual("string");
        expect(data[1]).assertEqual(PROFILE_JSON_STRING);
        done();
      }).catch(err => {
        console.error('[getProfileByAbility_1800]Operation failed. Cause: ' + JSON.stringify(err));
        expect(err).assertFail();
        done();
      })
    })

    /*
     * @tc.number: getProfileByAbility_1900
     * @tc.name: getProfileByAbility : The profile is obtained by specified ability
     * @tc.desc: no profile configured under the ability (by promise)
     * @tc.level   0
     */
    it('getProfileByAbility_1900', 0, async function (done) {
      await bundle.getProfileByAbility(MODULE_NAME, ABILITY_NAME1).then(data => {
        console.info('[getProfileByAbility_1900] getApplicationInfo callback data is: ' + JSON.stringify(data));
        expect(data).assertFail();
        done();
      }).catch(err => {
        console.error('[getProfileByAbility_1900]Operation failed. Cause: ' + JSON.stringify(err));
        expect(err).assertEqual(1);
        done();
      })
    })

    /*
     * @tc.number: getProfileByAbility_2000
     * @tc.name: getProfileByAbility : The profile is obtained by specified ability
     * @tc.desc: resource has no prefix '$profile:'
     * @tc.level   0
     */
    it('getProfileByAbility_2000', 0, async function (done) {
      await bundle.getProfileByAbility(MODULE_NAME, ABILITY_NAME, METADATA_NAME2).then(data => {
        console.info('[getProfileByAbility_2000] getApplicationInfo callback data is: ' + JSON.stringify(data));
        expect(data).assertFail()
      }).catch(err => {
        console.error('[getProfileByAbility_2000]Operation failed. Cause: ' + JSON.stringify(err));
        expect(err).assertEqual(1);
      })
      bundle.getProfileByAbility(MODULE_NAME, ABILITY_NAME, METADATA_NAME2, (err, data) => {
        console.error('[getProfileByAbility_2100]Operation failed. Cause: ' + JSON.stringify(err));
        console.info('[getProfileByAbility_2100] getApplicationInfo callback data is: ' + JSON.stringify(data));
        expect(typeof data).assertEqual("string");
        expect(data).assertEqual("GetProfile failed");
        expect(err).assertEqual(1);
        done();
      });
    })

    /*
     * @tc.number: SUB_BMS_APPINFO_QUERYMETAFILE_0008
     * @tc.name: GetProfileByAbilityNotFormat
     * @tc.desc: profile is not json-format
     * @tc.level   0
     */
    it('GetProfileByAbilityNotFormat', 0, async function (done) {
      await bundle.getProfileByAbility(MODULE_NAME, ABILITY_NAME, METADATA_NAME4).then(data => {
        console.info('[getProfileByAbility_2200] getApplicationInfo callback data is: ' + JSON.stringify(data));
        expect(data).assertFail()
      }).catch(err => {
        console.error('[getProfileByAbility_2200]Operation failed. Cause: ' + JSON.stringify(err));
        expect(err).assertEqual(1);
      })
      bundle.getProfileByAbility(MODULE_NAME, ABILITY_NAME, METADATA_NAME4, (err, data) => {
        console.error('[getProfileByAbility_2300]Operation failed. Cause: ' + JSON.stringify(err));
        console.info('[getProfileByAbility_2300] getApplicationInfo callback data is: ' + JSON.stringify(data));
        expect(typeof data).assertEqual("string");
        expect(data).assertEqual("GetProfile failed");
        expect(err).assertEqual(1);
        done();
      });
    })

  })
}