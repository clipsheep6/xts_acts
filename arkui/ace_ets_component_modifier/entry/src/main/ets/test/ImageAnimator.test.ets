/**
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"
import router from '@system.router';
import Utils from './Utils';
import { UiDriver, UiComponent, BY, Driver, Component, ON } from '@ohos.UiTest'
import events_emitter from '@ohos.events.emitter';

export default function imageAnimatorJsunit() {
  describe('imageAnimatorTest', function () {
    beforeEach(async function (done) {
      let options = {
        uri: 'MainAbility/pages/imageAnimator',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get imageAnimator state success " + JSON.stringify(pages));
        if (!("imageAnimator" == pages.name)) {
          console.info("get imageAnimator state success " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(1000);
          console.info("push imageAnimator page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push imageAnimator page error: " + err);
      }
      done();
    });

    /**
     * @tc.number imageAnimatorTest_0001
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('imageAnimatorTest_0001', 0, async function (done) {
      console.info('imageAnimatorTest_0001 START');
      let strJsonNew = getInspectorByKey('imageAnimator');
      let objNew = JSON.parse(strJsonNew);
      console.info("imageAnimatorTest_0001 component  is: " + JSON.stringify(objNew.$attrs));

      expect(objNew.$attrs.iterations).assertEqual("1");
      console.info('imageAnimatorTest_0001 END');
      done();
    });

    /**
     * @tc.number imageAnimatorTest_0002
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('imageAnimatorTest_0002', 0, async function (done) {
      console.info('imageAnimatorTest_0002 START');
      let strJsonNew = getInspectorByKey('imageAnimator');
      let objNew = JSON.parse(strJsonNew);
      console.info("imageAnimatorTest_0002 component  is: " + JSON.stringify(objNew.$attrs));

      expect(objNew.$attrs.FillMode).assertEqual(FillMode.None);
      console.info('imageAnimatorTest_0002 END');
      done();
    });

    /**
     * @tc.number imageAnimatorTest_0003
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('imageAnimatorTest_0003', 0, async function (done) {
      console.info('imageAnimatorTest_0003 START');
      let strJsonNew = getInspectorByKey('imageAnimator');
      let objNew = JSON.parse(strJsonNew);
      console.info("imageAnimatorTest_0003 component  is: " + JSON.stringify(objNew.$attrs));

      expect(objNew.$attrs.FixedSize).assertEqual(true);
      console.info('imageAnimatorTest_0003 END');
      done();
    });

    /**
     * @tc.number imageAnimatorTest_0004
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('imageAnimatorTest_0004', 0, async function (done) {
      console.info('imageAnimatorTest_0004 START');
      let strJsonNew = getInspectorByKey('imageAnimator');
      let objNew = JSON.parse(strJsonNew);
      console.info("imageAnimatorTest_0004 component  is: " + JSON.stringify(objNew.$attrs));

      expect(objNew.$attrs.Reverse).assertEqual(true);
      console.info('imageAnimatorTest_0004 END');
      done();
    });

    /**
     * @tc.number imageAnimatorTest_0005
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('imageAnimatorTest_0005', 0, async function (done) {
      console.info('imageAnimatorTest_0005 START');
      let strJsonNew = getInspectorByKey('imageAnimator');
      let objNew = JSON.parse(strJsonNew);
      console.info("imageAnimatorTest_0005 component  is: " + JSON.stringify(objNew.$attrs));

      expect(objNew.$attrs.Duration).assertEqual("2000");
      console.info('imageAnimatorTest_0005 END');
      done();
    });

    /**
     * @tc.number imageAnimatorTest_0006
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('imageAnimatorTest_0006', 0, async function (done) {
      console.info('imageAnimatorTest_0006 START');
      let strJsonNew = getInspectorByKey('imageAnimator');
      let objNew = JSON.parse(strJsonNew);
      console.info("imageAnimatorTest_0006 component  is: " + JSON.stringify(objNew.$attrs));

      expect(objNew.$attrs.State).assertEqual(AnimationStatus.Initial);
      console.info('imageAnimatorTest_0006 END');
      done();
    });

    /**
     * @tc.number imageAnimatorTest_0007
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('imageAnimatorTest_0007', 0, async function (done) {
      console.info('imageAnimatorTest_0007 START');
      let strJsonNew = getInspectorByKey('imageAnimator');
      let objNew = JSON.parse(strJsonNew);
      console.info("imageAnimatorTest_0007 component  is: " + JSON.stringify(objNew.$attrs));

      expect(true).assertEqual(true);
      console.info('imageAnimatorTest_0007 END');
      done();
    });

    /**
     * @tc.number imageAnimatorTest_0008
     * @tc.name   Test the properties of components
     * @tc.desc   Change attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('imageAnimatorTest_0008', 0, async function (done) {

      console.info('imageAnimatorTest_0008 START');
      let driver = Driver.create();
      let button = await driver.findComponent(ON.id('changeButton'));
      await button.click();
      await Utils.sleep(2000)

      let strJsonNew = getInspectorByKey('imageAnimator');
      let objNew = JSON.parse(strJsonNew);
      console.info("imageAnimatorTest_0008 component  is: " + JSON.stringify(objNew.$attrs));

      expect(objNew.$attrs.sideLength).assertEqual("0");
      console.info('imageAnimatorTest_0008 END');
      done();
    });
  })
}