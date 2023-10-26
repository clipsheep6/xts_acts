/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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
import hilog from '@ohos.hilog';
import bundleManager from "@ohos.bundle.bundleManager";
import AbilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import { describe, it, expect } from '@ohos/hypium'

export default function abilityTest() {
  describe('ActsAbilityTest', function () {

    /*
     * @tc.number: Acts_GetAppIdentifierInfo_0100
     * @tc.name: Query carrier ID
     * @tc.desc: Query carrier ID through interface
     * @tc.level:1
     */
    it('Acts_GetAppIdentifierInfo_0100', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'it begin');
      bundleManager.getAppProvisionInfo("com.example.actsgetappidentifierrely", 100, (err, data) => {
        hilog.info(0x0000, 'testTag', 'getAppProvisionInfo callback successfully. Data: %{public}s', JSON.stringify(data));
        expect(data.appIdentifier).assertEqual("E64B13B84E6D2167F73B46530C6E02E323DA43C9C2DA251D7C64D20E091B936F");
      });
      await bundleManager.getAppProvisionInfo("com.example.actsgetappidentifierrely").then(data => {
        hilog.info(0x0000, 'testTag', 'getAppProvisionInfo promise successfully. Data: %{public}s', JSON.stringify(data));
        expect(data.appIdentifier).assertEqual("E64B13B84E6D2167F73B46530C6E02E323DA43C9C2DA251D7C64D20E091B936F");
      });
      await bundleManager.getBundleInfo("com.example.actsgetappidentifierrely", bundleManager.BundleFlag.GET_BUNDLE_INFO_WITH_SIGNATURE_INFO)
        .then(data => {
          expect(data.signatureInfo.appIdentifier)
            .assertEqual("E64B13B84E6D2167F73B46530C6E02E323DA43C9C2DA251D7C64D20E091B936F");
          hilog.info(0x0000, 'testTag', 'getBundleInfo promise successfully. Data: %{public}s', JSON.stringify(data));
        });
      bundleManager.getBundleInfo("com.example.actsgetappidentifierrely", bundleManager.BundleFlag.GET_BUNDLE_INFO_WITH_SIGNATURE_INFO, (err, data) => {
        expect(data.signatureInfo.appIdentifier)
          .assertEqual("E64B13B84E6D2167F73B46530C6E02E323DA43C9C2DA251D7C64D20E091B936F");
        hilog.info(0x0000, 'testTag', 'getBundleInfo callback successfully. Data: %{public}s', JSON.stringify(data));
      });
      let data = bundleManager.getAppProvisionInfoSync("com.example.actsgetappidentifierrely", 100)
      expect(data.appIdentifier).assertEqual("E64B13B84E6D2167F73B46530C6E02E323DA43C9C2DA251D7C64D20E091B936F");
      hilog.info(0x0000, 'testTag', 'getAppProvisionInfoSync callback successfully. Data: %{public}s', JSON.stringify(data));
      let data1 = bundleManager.getBundleInfoSync("com.example.actsgetappidentifierrely", bundleManager.BundleFlag.GET_BUNDLE_INFO_WITH_SIGNATURE_INFO)
      hilog.info(0x0000, 'testTag', 'getBundleInfosync successfully. Data: %{public}s', JSON.stringify(data1));
      expect(data1.signatureInfo.appIdentifier)
        .assertEqual("E64B13B84E6D2167F73B46530C6E02E323DA43C9C2DA251D7C64D20E091B936F");
      done();
    })

    /*
     * @tc.number: Acts_GetAppIdentifierInfo_0200
     * @tc.name: Query carrier ID
     * @tc.desc: Query carrier ID through interface
     * @tc.level:1
     */
    it('Acts_GetAppIdentifierInfo_0200', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'it begin');
      bundleManager.getAppProvisionInfo("com.example.actsunappidentifierrely", 100, (err, data) => {
        hilog.info(0x0000, 'testTag', 'getAppProvisionInfo callback successfully. Data: %{public}s', JSON.stringify(data));
        expect(data.appIdentifier).assertEqual("");
      });
      await bundleManager.getAppProvisionInfo("com.example.actsunappidentifierrely").then(data => {
        hilog.info(0x0000, 'testTag', 'getAppProvisionInfo promise successfully. Data: %{public}s', JSON.stringify(data));
        expect(data.appIdentifier).assertEqual("");
      });
      await bundleManager.getBundleInfo("com.example.actsunappidentifierrely", bundleManager.BundleFlag.GET_BUNDLE_INFO_WITH_SIGNATURE_INFO)
        .then(data => {
          expect(data.signatureInfo.appIdentifier).assertEqual("");
          hilog.info(0x0000, 'testTag', 'getBundleInfo promise successfully. Data: %{public}s', JSON.stringify(data));
        });
      bundleManager.getBundleInfo("com.example.actsunappidentifierrely", bundleManager.BundleFlag.GET_BUNDLE_INFO_WITH_SIGNATURE_INFO, (err, data) => {
        expect(data.signatureInfo.appIdentifier).assertEqual("");
        hilog.info(0x0000, 'testTag', 'getBundleInfo callback successfully. Data: %{public}s', JSON.stringify(data));
      });
      let data = bundleManager.getAppProvisionInfoSync("com.example.actsunappidentifierrely", 100)
      expect(data.appIdentifier).assertEqual("");
      hilog.info(0x0000, 'testTag', 'getAppProvisionInfoSync callback successfully. Data: %{public}s', JSON.stringify(data));
      let data1 = bundleManager.getBundleInfoSync("com.example.actsunappidentifierrely", bundleManager.BundleFlag.GET_BUNDLE_INFO_WITH_SIGNATURE_INFO)
      hilog.info(0x0000, 'testTag', 'getBundleInfosync successfully. Data: %{public}s', JSON.stringify(data1));
      expect(data1.signatureInfo.appIdentifier).assertEqual("");
      done();
    })

    /*
     * @tc.number: Acts_GetAppIdentifierInfo_0300
     * @tc.name: Query carrier ID
     * @tc.desc: Query carrier ID through interface
     * @tc.level:1
     */
    it('Acts_GetAppIdentifierInfo_0300', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'it begin');
      let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
      abilityDelegator.executeShellCommand("bm dump -n com.example.actsgetappidentifierrely",
        (err: any, data: any) => {
          expect(JSON.stringify(data.stdResult))
            .assertContain('"appIdentifier": "E64B13B84E6D2167F73B46530C6E02E323DA43C9C2DA251D7C64D20E091B936F"');
          console.info('executeShellCommand : err : ' + JSON.stringify(err));
          console.info('executeShellCommand : data : ' + data.stdResult);
          console.info('executeShellCommand : data : ' + data.exitCode);
        })
      abilityDelegator.executeShellCommand("bm dump -n com.example.actsunappidentifierrely",
        (err: any, data: any) => {
          expect(JSON.stringify(data.stdResult)).assertContain('"appIdentifier": ""');
          console.info('executeShellCommand : err : ' + JSON.stringify(err));
          console.info('executeShellCommand : data : ' + data.stdResult);
          console.info('executeShellCommand : data : ' + data.exitCode);
        })
      done();
    })
  })
}
