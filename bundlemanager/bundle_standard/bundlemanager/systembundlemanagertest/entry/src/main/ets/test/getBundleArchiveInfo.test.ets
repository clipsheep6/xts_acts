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
// @ts-nocheck
import bundle from '@ohos.bundle';
import bundle9 from '@ohos.bundle.bundleManager'
import { describe, beforeAll, it, expect } from 'hypium/index';

const HAP_PATH = "/data/test/systembundlemanagertest.hap"
const PATH = "/data/test/"
const ERROR = "error.hap"
const BMSJSTEST1 = "bmsJstest1.hap"
const BMSJSTEST2 = "bmsJstest2.hap"
const BMSJSTEST4 = "bmsJstest4.hap"
const BMSJSTEST5 = "bmsJstest5.hap"
const BMSJSTEST6 = "bmsJstest6.hap"
const NAME1 = "com.example.myapplication1"
const NAME2 = "com.example.myapplication2"
const NAME3 = "com.example.myapplication4"
const NAME4 = "com.example.myapplication5"
const NAME5 = "com.example.myapplication6"
const DESCRIPTION = "$string:mainability_description"
const APPLICATION_DESCRIPTION = "$string:entry_description"
const PARAM_CHECK_ERROR = 401;
const PERMISSION_DENIED_ERROR = 201;
const INTERNAL_ERROR = 17700022;

export default function getBundleArchiveInfo() {

  describe('getBundleArchiveInfo', function () {

    /**
     * @tc.number getBundleArchiveInfo_0100
     * @tc.name BUNDLE::getBundleArchiveInfo
     * @tc.desc Test getBundleArchiveInfo interfaces with one hap.
     */
    it('getBundleArchiveInfo_0100', 0, async function (done) {
      bundle9.getBundleArchiveInfo(HAP_PATH, bundle9.BundleFlag.GET_BUNDLE_INFO_WITH_ABILITY
        | bundle9.BundleFlag.GET_BUNDLE_INFO_WITH_HAP_MODULE
        | bundle9.BundleFlag.GET_BUNDLE_INFO_WITH_APPLICATION, OnReceiveEvent)
      function OnReceiveEvent(err, dataInfo) {
        expect(dataInfo.name).assertEqual(NAME1)
        expect(dataInfo.vendor).assertEqual("example")
        expect(dataInfo.versionCode).assertEqual(1)
        expect(dataInfo.versionName).assertEqual("1.0")
        expect(dataInfo.appInfo.name).assertEqual(NAME1)
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
          expect(dataInfo.hapModulesInfo[0].abilitiesInfo[j].bundleName).assertEqual(NAME1)
          expect(dataInfo.hapModulesInfo[0].abilitiesInfo[j].moduleName).assertEqual("entry")
        }
      }
      done();
    })

    /**
     * @tc.number getBundleArchiveInfo_0200
     * @tc.name BUNDLE::getBundleArchiveInfo
     * @tc.desc Test getBundleArchiveInfo interfaces with one hap.
     */
    it('getBundleArchiveInfo_0200', 0, async function (done) {
      bundle9.getBundleArchiveInfo(HAP_PATH,
        bundle9.BundleFlag.GET_BUNDLE_INFO_WITH_ABILITY
        | bundle9.BundleFlag.GET_BUNDLE_INFO_WITH_APPLICATION).then(dataInfo => {
          checkData(dataInfo);
        }).catch((err) => {
          console.info('getBundleArchiveInfo err:' + JSON.stringify(err));
          expect().assertFail();
        });
        function checkData(dataInfo) {
          expect(dataInfo.name).assertEqual(NAME1)
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

    /**
     * @tc.number getBundleArchiveInfo_0300
     * @tc.name getBundleArchiveInfoUnPermission
     * @tc.desc test getBundleArchiveInfo no permission
     */
    it('getBundleArchiveInfo_0300', 0, async function (done) {
      await bundle9.getBundleArchiveInfo(PATH + BMSJSTEST1, bundle9.BundleFlag.GET_BUNDLE_INFO_DEFAULT).then(data => {
          expect().assertFail();
      }).catch(err => {
          expect(err.code).assertEqual(INTERNAL_ERROR);
      });
      bundle9.getBundleArchiveInfo(PATH + BMSJSTEST1, bundle9.BundleFlag.GET_BUNDLE_INFO_DEFAULT, (err, data) => {
          expect(err.code).assertEqual(INTERNAL_ERROR);
      });
      done();
    })

    /**
     * @tc.number getBundleArchiveInfo_0400
     * @tc.name BUNDLE::getBundleArchiveInfo
     * @tc.desc Test getBundleArchiveInfo interfaces with error hap.
     */
    it('getBundleArchiveInfo_0400', 0, async function (done) {
      function OnReceiveEvent(err, dataInfo) {
        expect(err.code).assertEqual(INTERNAL_ERROR);
      }
      bundle9.getBundleArchiveInfo(PATH + ERROR, bundle9.BundleFlag.GET_BUNDLE_INFO_WITH_ABILITY, OnReceiveEvent)
      done();
    })

    /**
     * @tc.number getBundleArchiveInfo_0500
     * @tc.name BUNDLE::getBundleArchiveInfo
     * @tc.desc Test getBundleArchiveInfo interfaces with error hap.
     */
    it('getBundleArchiveInfo_0500', 0, async function (done) {
      bundle9.getBundleArchiveInfo(PATH + ERROR, bundle9.BundleFlag.GET_BUNDLE_INFO_WITH_ABILITY).then(dataInfo => {
        expect(dataInfo).assertFail()
      }).catch(err => {
        console.info("getBundleArchiveInfo fail" + JSON.stringify(err))
        expect(err.code).assertEqual(INTERNAL_ERROR)
      })
      done()
    })

    /**
     * @tc.number getBundleArchiveInfo_0600
     * @tc.name BUNDLE::getBundleArchiveInfo
     * @tc.desc Test getBundleArchiveInfo interfaces with none hap.
     */
    it('getBundleArchiveInfo_0600', 0, async function (done) {
      bundle9.getBundleArchiveInfo(' ', bundle9.BundleFlag.GET_BUNDLE_INFO_WITH_ABILITY, OnReceiveEvent)
      function OnReceiveEvent(err, dataInfo) {
        expect(err.code).assertEqual(PERMISSION_DENIED_ERROR);
      }
      done();
    })

    /**
     * @tc.number getBundleArchiveInfo_0900
     * @tc.name BUNDLE::getBundleArchiveInfo
     * @tc.desc Test getBundleArchiveInfo interfaces with none hap.
     */
    it('getBundleArchiveInfo_0900', 0, async function (done) {
      bundle9.getBundleArchiveInfo(PATH + BMSJSTEST1, bundle9.BundleFlag.GET_BUNDLE_INFO_WITH_ABILITY, OnReceiveEvent)
      function OnReceiveEvent(err, dataInfo) {
        expect(err.code).assertEqual(PERMISSION_DENIED_ERROR);
      }
      done();
    })

    /**
     * @tc.number getBundleArchiveInfo_0700
     * @tc.name BUNDLE::getBundleArchiveInfo
     * @tc.desc Test getBundleArchiveInfo interfaces with none hap.
     */
    it('getBundleArchiveInfo_0700', 0, async function (done) {
      let dataInfo = await bundle9.getBundleArchiveInfo(' ', bundle9.BundleFlag.GET_BUNDLE_INFO_WITH_ABILITY).then(dataInfo => {
        console.info("jun3333 " + JSON.stringify(err))
        expect(dataInfo).assertFail()
      }).catch((err) => {
        console.info("getBundleArchiveInfo fail" + JSON.stringify(err))
        console.info("jun1111l " + JSON.stringify(err))
        console.info("jun0000 " + JSON.stringify(err.code))
        expect(err.code).assertEqual(17700022)
        console.info("jun22222 " + JSON.stringify(err))
      })
      done()
    })

    /**
     * @tc.number getBundleArchiveInfo_0800
     * @tc.name BUNDLE::getBundleArchiveInfo
     * @tc.desc Test getBundleArchiveInfo interfaces with failed param.
     */
    it('getBundleArchiveInfo_0800', 0, async function (done) {
      try {
        await bundle9.getBundleArchiveInfo('').then(data => {
          expect(data).assertFail()
        }).catch(err => {
          console.info("getBundleArchiveInfo fail:" + JSON.stringify(err));
          expect().assertFail()
        })
      } catch (error) {
        expect(error.code).assertEqual(PARAM_CHECK_ERROR)
      }
      try {
        bundle9.getBundleArchiveInfo('', (err, data) => {
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