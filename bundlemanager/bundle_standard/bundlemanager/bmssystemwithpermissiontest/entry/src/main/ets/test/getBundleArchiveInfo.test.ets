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
import bundle9 from '@ohos.bundle.bundleManager'
import { describe, beforeAll, it, expect } from 'hypium/index';

const HAP_PATH = "/data/test/bmssystemwithpermissiontest.hap"
const PATH = "/data/test/"
const ERROR = "error.hap"
const NAME = "com.example.myapplication1"
const DESCRIPTION = "$string:mainability_description"
const APPLICATION_DESCRIPTION = "$string:entry_description"
const PARAM_CHECK_ERROR = 401;
const INVALID_HAP_PATH = 17700022;

export default function getBundleArchiveInfo() {

  describe('getBundleArchiveInfo', function () {

    /*
    * @tc.number getBundleArchiveInfo_0100
    * @tc.name getBundleArchiveInfoCallBackSuccess
    * @tc.desc test getBundleArchiveInfo interfaces with hap success
    */
    it('getBundleArchiveInfoCallBackSuccess', 0, async function (done) {
      bundle9.getBundleArchiveInfo(HAP_PATH, bundle9.BundleFlag.GET_BUNDLE_INFO_WITH_ABILITY
        | bundle9.BundleFlag.GET_BUNDLE_INFO_WITH_HAP_MODULE
        | bundle9.BundleFlag.GET_BUNDLE_INFO_WITH_APPLICATION, OnReceiveEvent)
      function OnReceiveEvent(err, dataInfo) {
        expect(dataInfo.name).assertEqual(NAME)
        expect(dataInfo.vendor).assertEqual("example")
        expect(dataInfo.versionCode).assertEqual(1)
        expect(dataInfo.versionName).assertEqual("1.0")
        expect(dataInfo.appInfo.name).assertEqual(NAME)
        expect(dataInfo.appInfo.description).assertEqual(APPLICATION_DESCRIPTION)
        expect(dataInfo.appInfo.descriptionId >= 0).assertTrue()
        expect(dataInfo.appInfo.icon).assertEqual("$media:icon")
        expect(parseInt(dataInfo.appInfo.iconId)).assertLarger(0)
        expect(dataInfo.appInfo.label).assertEqual("$string:app_name")
        expect(parseInt(dataInfo.appInfo.labelId)).assertLarger(0)
        for (let j = 0; j < dataInfo.appInfo.modulesInfo.length; j++) {
          expect(dataInfo.appInfo.modulesInfo[j].moduleName).assertEqual("entry")
        }
        for (let j = 0; j < dataInfo.hapModulesInfo[0].abilitiesInfo.length; j++) {
          expect(dataInfo.hapModulesInfo[0].abilitiesInfo[j].name).assertEqual("com.example.myapplication1.MainAbility")
          expect(dataInfo.hapModulesInfo[0].abilitiesInfo[j].label).assertEqual("$string:app_name")
          expect(dataInfo.hapModulesInfo[0].abilitiesInfo[j].description).assertEqual(DESCRIPTION)
          expect(dataInfo.hapModulesInfo[0].abilitiesInfo[j].icon).assertEqual("$media:icon")
          expect(dataInfo.hapModulesInfo[0].abilitiesInfo[j].isVisible).assertEqual(false)
          expect(dataInfo.hapModulesInfo[0].abilitiesInfo[j].bundleName).assertEqual(NAME)
          expect(dataInfo.hapModulesInfo[0].abilitiesInfo[j].moduleName).assertEqual("entry")
        }
      }
      done();
    })

    /*
    * @tc.number getBundleArchiveInfo_0200
    * @tc.name getBundleArchiveInfoPromiseSuccess
    * @tc.desc test getBundleArchiveInfo interfaces with hap success
    */
    it('getBundleArchiveInfoPromiseSuccess', 0, async function (done) {
      bundle9.getBundleArchiveInfo(HAP_PATH,
        bundle9.BundleFlag.GET_BUNDLE_INFO_WITH_ABILITY
        | bundle9.BundleFlag.GET_BUNDLE_INFO_WITH_APPLICATION).then(dataInfo => {
          checkData(dataInfo);
        }).catch((err) => {
          console.info('getBundleArchiveInfo err:' + JSON.stringify(err));
          expect().assertFail();
        });
        function checkData(dataInfo) {
          expect(dataInfo.name).assertEqual(NAME)
          expect(dataInfo.vendor).assertEqual("example")
          expect(dataInfo.versionCode).assertEqual(1)
          expect(dataInfo.versionName).assertLarger(0)
          expect(dataInfo.appInfo.description).assertEqual(APPLICATION_DESCRIPTION)
          expect(dataInfo.appInfo.descriptionId >= 0).assertTrue()
          expect(dataInfo.appInfo.icon).assertEqual("$media:icon")
          expect(parseInt(dataInfo.appInfo.iconId)).assertLarger(0)
          expect(dataInfo.appInfo.label).assertEqual("$string:app_name")
          expect(parseInt(dataInfo.appInfo.labelId)).assertLarger(0)
        }
      done();
    })


    /*
    * @tc.number getBundleArchiveInfo_0300
    * @tc.name getBundleArchiveInfoCallBackWithErrorHap
    * @tc.desc test getBundleArchiveInfo interfaces with error hap
    */
    it('getBundleArchiveInfoCallBackWithErrorHap', 0, async function (done) {
      function OnReceiveEvent(err, dataInfo) {
        expect(err.code).assertEqual(INVALID_HAP_PATH);
      }
      bundle9.getBundleArchiveInfo(PATH + ERROR, bundle9.BundleFlag.GET_BUNDLE_INFO_WITH_ABILITY, OnReceiveEvent)
      done();
    })

    /**
     * @tc.number getBundleArchiveInfo_0400
     * @tc.name getBundleArchiveInfoPromiseWithErrorHap
     * @tc.desc test getBundleArchiveInfo interfaces with error hap
     */
    it('getBundleArchiveInfoPromiseWithErrorHap', 0, async function (done) {
      bundle9.getBundleArchiveInfo(PATH + ERROR, bundle9.BundleFlag.GET_BUNDLE_INFO_WITH_ABILITY).then(dataInfo => {
        expect(dataInfo).assertFail()
      }).catch(err => {
        console.info("getBundleArchiveInfo fail" + JSON.stringify(err))
        expect(err.code).assertEqual(INVALID_HAP_PATH)
      })
      done()
    })

    /*
    * @tc.number getBundleArchiveInfo_0500
    * @tc.name getBundleArchiveInfoWithErrorParam
    * @tc.desc test getBundleArchiveInfo interfaces with failed param
    */
    it('getBundleArchiveInfoWithErrorParam', 0, async function (done) {
      try {
        await bundle9.getBundleArchiveInfo(undefined,
          bundle9.BundleFlag.GET_BUNDLE_INFO_WITH_ABILITY).then(data => {
            expect(data).assertFail()
          }).catch(err => {
            console.info("getBundleArchiveInfo fail:" + JSON.stringify(err));
            expect().assertFail()
          })
        } catch (error) {
          expect(error.code).assertEqual(PARAM_CHECK_ERROR)
        }
      try {
        bundle9.getBundleArchiveInfo(undefined,
          bundle9.BundleFlag.GET_BUNDLE_INFO_WITH_ABILITY, (err, data) => {
            console.info("getBundleArchiveInfo fail:" + JSON.stringify(err));
            expect().assertFail();
            done()
          });
        } catch (error) {
          expect(error.code).assertEqual(PARAM_CHECK_ERROR);
        }
      done()
    })

  })
}