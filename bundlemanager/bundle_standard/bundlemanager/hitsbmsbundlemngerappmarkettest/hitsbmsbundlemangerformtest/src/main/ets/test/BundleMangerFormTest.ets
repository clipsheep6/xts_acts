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


import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import bundleManager from '@ohos.bundle.bundleManager';


export default function bundleMangerFormTest() {
  describe('ActsBundleMangerFormTest', function () {

    /**
     * @tc.number Acts_SetAdditionalInfoTest_0100
     * @tc.name Testing the functionality of the setAdditionalInfo interface.
     * @tc.desc Set the parameters to bundleName: 'com.example.bundleMangerFormTest' and additionalInfo: 'abc: 123'.
     */
    it('Acts_SetAdditionalInfoTest_0100', 0, async function (done) {
      console.info('Acts_SetAdditionalInfoTest_0100 START');
      let bundleName = 'com.example.bundleMangerFormTest';
      let additionalInfo = 'abc:123';

      try {
        bundleManager.setAdditionalInfo(bundleName, additionalInfo);
        console.info('setAdditionalInfo successfully.');
        let info = bundleManager.getAdditionalInfo(bundleName);
        console.info('getAdditionalInfo successfully, additionInfo:' + info);
        expect(additionalInfo).assertEqual(info);
        done();
      } catch (err) {
        expect().assertFail();
        console.info('setAdditionalInfo failed: %{public}s', err.code);
        done();
      }
      console.info('Acts_SetAdditionalInfoTest_0100 END');
    })

    /**
     * @tc.number Acts_SetAdditionalInfoTest_0200
     * @tc.name Testing the functionality of the setAdditionalInfo interface.
     * @tc.desc Set the parameters to bundleName: 'com.example.bundleMangerFormTest' and additionalInfo: null.
     */
    it('Acts_SetAdditionalInfoTest_0200', 0, async function (done) {
      console.info('Acts_SetAdditionalInfoTest_0200 START');

      let bundleName = 'com.example.bundleMangerFormTest';
      let additionalInfo = null

      try {
        bundleManager.setAdditionalInfo(bundleName, additionalInfo);
        console.info('setAdditionalInfo successfully.');
        done();
      } catch (err) {
        console.info('setAdditionalInfo failed: %{public}s', err.code);
        expect(err.code).assertEqual(401);
        done();
      }
      console.info('Acts_SetAdditionalInfoTest_0200 END');
    })

    /**
     * @tc.number Acts_SetAdditionalInfoTest_0300
     * @tc.name Testing the functionality of the setAdditionalInfo interface.
     * @tc.desc Set the parameters to bundleName: 'com.example.form' and additionalInfo: 'abc:123'.
     */
    it('Acts_SetAdditionalInfoTest_0300', 0, async function (done) {
      console.info('Acts_SetAdditionalInfoTest_0300 START');

      let bundleName = 'com.example.form';
      let additionalInfo = 'abc:123';

      try {
        bundleManager.setAdditionalInfo(bundleName, additionalInfo);
        console.info('setAdditionalInfo successfully.');
        done();
      } catch (err) {
        console.info('setAdditionalInfo failed: %{public}s', err.code);
        expect(err.code).assertEqual(17700001);
        done();
      }
      console.info('Acts_SetAdditionalInfoTest_0300 END');
    })

    /**
     * @tc.number Acts_SetAdditionalInfoTest_0400
     * @tc.name Testing the functionality of the setAdditionalInfo interface.
     * @tc.desc Set the parameters to bundleName: null and additionalInfo: 'abc:123'.
     */
    it('Acts_SetAdditionalInfoTest_0400', 0, async function (done) {
      console.info('Acts_SetAdditionalInfoTest_0400 START');

      let additionalInfo = 'abc:123';

      try {
        bundleManager.setAdditionalInfo(null, additionalInfo);
        console.info('setAdditionalInfo successfully.');
        done();
      } catch (err) {
        console.info('setAdditionalInfo failed: %{public}s', err.code);
        expect(err.code).assertEqual(401);
        done();
      }
      console.info('Acts_SetAdditionalInfoTest_0400 END');
    })

    /**
     * @tc.number Acts_SetAdditionalInfoTest_0500
     * @tc.name Testing the functionality of the setAdditionalInfo interface.
     * @tc.desc Set the parameters to bundleName: undefined and additionalInfo: undefined.
     */
    it('Acts_SetAdditionalInfoTest_0500', 0, async function (done) {
      console.info('Acts_SetAdditionalInfoTest_0500 START');

      let additionalInfo = 'abc:123';

      try {
        bundleManager.setAdditionalInfo(undefined, additionalInfo);
        console.info('setAdditionalInfo successfully.');
        done();
      } catch (err) {
        console.info('setAdditionalInfo failed: %{public}s', err.code);
        expect(err.code).assertEqual(401);
        done();
      }
      console.info('Acts_SetAdditionalInfoTest_0500 END');
    })

    /**
     * @tc.number Acts_SetAdditionalInfoTest_0600
     * @tc.name Testing the functionality of the setAdditionalInfo interface.
     * @tc.desc Set the parameters to bundleName: '' and additionalInfo: 'abc:123'.
     */
    it('Acts_SetAdditionalInfoTest_0600', 0, async function (done) {
      console.info('Acts_SetAdditionalInfoTest_0600 START');

      let additionalInfo = 'abc:123';

      try {
        bundleManager.setAdditionalInfo('', additionalInfo);
        console.info('setAdditionalInfo successfully.');
        done();
      } catch (err) {
        console.info('setAdditionalInfo failed: %{public}s', err.code);
        expect(err.code).assertEqual(401);
        done();
      }
      console.info('Acts_SetAdditionalInfoTest_0600 END');
    })

    /**
     * @tc.number Acts_SetAdditionalInfoTest_0700
     * @tc.name Testing the functionality of the setAdditionalInfo interface.
     * @tc.desc Disable bundleName and Set the parameters to
     *               bundleName: 'com.example.callui' and additionalInfo: 'abc:123'.
     */
    it('Acts_SetAdditionalInfoTest_0700', 0, async function (done) {
      console.info('Acts_SetAdditionalInfoTest_0700 START');
      let bundleName = 'com.ohos.callui';
      let additionalInfo = 'abc:123';

      try {
        bundleManager.setApplicationEnabledSync(bundleName, false);
        console.info('setApplicationEnabledSync successfully.');
      } catch (err) {
        console.info('setApplicationEnabledSync failed: %{public}s', err.code);
      }

      try {
        bundleManager.setAdditionalInfo(bundleName, additionalInfo);
        console.info('setAdditionalInfo successfully.');
        let info = bundleManager.getAdditionalInfo(bundleName);
        console.info('getAdditionalInfo successfully, additionInfo:' + info);
        expect(additionalInfo).assertEqual(info);
        done();
      } catch (err) {
        expect().assertFail();
        console.info('setAdditionalInfo failed: %{public}s', err.code);
        done();
      }

      try {
        bundleManager.setApplicationEnabledSync(bundleName, true);
        console.info('setApplicationEnabledSync successfully.');
      } catch (err) {
        console.info('setApplicationEnabledSync failed: %{public}s', err.code);
      }

      console.info('Acts_SetAdditionalInfoTest_0700 END');
    })

    /**
     * @tc.number Acts_SetAdditionalInfoTest_1000
     * @tc.name Testing the functionality of the setAdditionalInfo interface.
     * @tc.desc Set the parameters to bundleName: 'com.example.bundleMangerFormTest' and additionalInfo: undefined.
     */
    it('Acts_SetAdditionalInfoTest_1000', 0, async function (done) {
      console.info('Acts_SetAdditionalInfoTest_0400 START');

      let bundleName = 'com.example.bundleMangerFormTest';

      try {
        bundleManager.setAdditionalInfo(bundleName, undefined);
        console.info('setAdditionalInfo successfully.');
        done();
      } catch (err) {
        console.info('setAdditionalInfo failed: %{public}s', err.code);
        expect(err.code).assertEqual(401);
        done();
      }
      console.info('Acts_SetAdditionalInfoTest_1000 END');
    })

    /**
     * @tc.number Acts_SetAdditionalInfoTest_1100
     * @tc.name Testing the functionality of the setAdditionalInfo interface.
     * @tc.desc Set the parameters to bundleName: 'com.example.bundleMangerFormTest' and additionalInfo: ''.
     */
    it('Acts_SetAdditionalInfoTest_1100', 0, async function (done) {
      console.info('Acts_SetAdditionalInfoTest_0500 START');

      let bundleName = 'com.example.bundleMangerFormTest';

      try {
        bundleManager.setAdditionalInfo(bundleName, '')
        console.info('setAdditionalInfo successfully.');
        done();
      } catch (err) {
        console.info('setAdditionalInfo failed: %{public}s', err.code);
        expect(err.code).assertEqual(401);
        done();
      }
      console.info('Acts_SetAdditionalInfoTest_1100 END');
    })
  })
}