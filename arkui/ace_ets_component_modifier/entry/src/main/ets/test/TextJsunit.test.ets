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

export default function textJsunit() {
  describe('textTest', function () {
    beforeEach(async function (done) {
      let options = {
        uri: 'MainAbility/pages/text',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get text state success " + JSON.stringify(pages));
        if (!("text" == pages.name)) {
          console.info("get text state success " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(1000);
          console.info("push text page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push text page error: " + err);
      }
      done();
    });

    /**
     * @tc.number textTest_0001
     * @tc.name   Test the properties of components
     * @tc.desc   Change attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textTest_0001', 0, async function (done) {

      console.info('textTest_0001 START');
      let strJsonNew = getInspectorByKey('text1');
      let objNew = JSON.parse(strJsonNew);
      console.info("textTest_0001 component is: " + JSON.stringify(objNew.$attrs));

      expect(objNew.$attrs.textAlign).assertEqual("TextAlign.Center")
      expect(JSON.parse(objNew.$attrs.font)?.size).assertEqual("12.00fp")
      expect(JSON.parse(objNew.$attrs.font)?.weight).assertEqual("FontWeight.Normal")
      console.info('textTest_0001 END');
      done();
    });

    /**
     * @tc.number textTest_0002
     * @tc.name   Test the properties of components
     * @tc.desc   Change attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textTest_0002', 0, async function (done) {

      console.info('textTest_0002 START');
      let strJsonNew = getInspectorByKey('text2');
      let objNew = JSON.parse(strJsonNew);
      console.info("textTest_0002 component is: " + JSON.stringify(objNew.$attrs));

      expect(objNew.$attrs.lineHeight).assertEqual("20.00fp")
      expect(objNew.$attrs.fontColor).assertEqual("#FF000000")
      console.info('textTest_0002 END');
      done();
    });

    /**
     * @tc.number textTest_0003
     * @tc.name   Test the properties of components
     * @tc.desc   Change attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textTest_0003', 0, async function (done) {

      console.info('textTest_0003 START');
      let strJsonNew = getInspectorByKey('text3');
      let objNew = JSON.parse(strJsonNew);
      console.info("textTest_0003 component is: " + JSON.stringify(objNew.$attrs));

      expect(objNew.$attrs.textOverflow).assertEqual("TextOverflow.None")
      expect(objNew.$attrs.fontSize).assertEqual("10.00fp")
      console.info('textTest_0003 END');
      done();
    });

    /**
     * @tc.number textTest_0004
     * @tc.name   Test the properties of components
     * @tc.desc   Change attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textTest_0004', 0, async function (done) {

      console.info('textTest_0004 START');
      let strJsonNew = getInspectorByKey('text4');
      let objNew = JSON.parse(strJsonNew);
      console.info("textTest_0004 component is: " + JSON.stringify(objNew.$attrs));

      expect(objNew.$attrs.maxLines).assertEqual("10")
      console.info('textTest_0004 END');
      done();
    });

    /**
     * @tc.number textTest_0005
     * @tc.name   Test the properties of components
     * @tc.desc   Change attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textTest_0005', 0, async function (done) {

      console.info('textTest_0005 START');
      let strJsonNew = getInspectorByKey('text5');
      let objNew = JSON.parse(strJsonNew);
      console.info("textTest_0005 component is: " + JSON.stringify(objNew.$attrs));

      expect(JSON.parse(objNew.$attrs.decoration)?.type).assertEqual("TextDecorationType.None")
      expect(JSON.parse(objNew.$attrs.decoration)?.color).assertEqual("#FF000000")
      expect(objNew.$attrs.minFontSize).assertEqual("5.00fp")
      console.info('textTest_0005 END');
      done();
    });

    /**
     * @tc.number textTest_0006
     * @tc.name   Test the properties of components
     * @tc.desc   Change attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textTest_0006', 0, async function (done) {

      console.info('textTest_0006 START');
      let strJsonNew = getInspectorByKey('text6');
      let objNew = JSON.parse(strJsonNew);
      console.info("textTest_0006 component is: " + JSON.stringify(objNew.$attrs));

      expect(objNew.$attrs.letterSpacing).assertEqual("10.00fp")
      expect(objNew.$attrs.maxFontSize).assertEqual("30.00fp")
      console.info('textTest_0006 END');
      done();
    });

    /**
     * @tc.number textTest_0007
     * @tc.name   Test the properties of components
     * @tc.desc   Change attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textTest_0007', 0, async function (done) {

      console.info('textTest_0007 START');
      let strJsonNew = getInspectorByKey('text7');
      let objNew = JSON.parse(strJsonNew);
      console.info("textTest_0007 component is: " + JSON.stringify(objNew.$attrs));

      expect(objNew.$attrs.baselineOffset).assertEqual("100")
      expect(objNew.$attrs.textCase).assertEqual("TextCase.Normal")
      expect(objNew.$attrs.fontStyle).assertEqual("FontStyle.Normal")
      console.info('textTest_0007 END');
      done();
    });

    /**
     * @tc.number textTest_0008
     * @tc.name   Test the properties of components
     * @tc.desc   Change attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textTest_0008', 0, async function (done) {

      console.info('textTest_0008 START');
      let strJsonNew = getInspectorByKey('text8');
      let objNew = JSON.parse(strJsonNew);
      console.info("textTest_0008 component is: " + JSON.stringify(objNew.$attrs));

      expect(objNew.$attrs.textShadow.radius).assertEqual("10.000000")
      expect(objNew.$attrs.textShadow.color).assertEqual("#FF0000FF")
      expect(objNew.$attrs.textShadow.offsetX).assertEqual("50.000000")
      expect(objNew.$attrs.textShadow.offsetY).assertEqual("35.000000")
      expect(objNew.$attrs.copyOption).assertEqual("CopyOptions.None")
      expect(objNew.$attrs.fontWeight).assertEqual("FontWeight.Lighter")
      expect(objNew.$attrs.textShadow.type).assertEqual("ShadowType.COLOR")
      console.info('textTest_0008 END');
      done();
    });

    /**
     * @tc.number textTest_0009
     * @tc.name   Test the properties of components
     * @tc.desc   Change attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textTest_0009', 0, async function (done) {

      console.info('textTest_0009 START');
      let strJsonNew = getInspectorByKey('text9');
      let objNew = JSON.parse(strJsonNew);
      console.info("textTest_0009 component is: " + JSON.stringify(objNew.$attrs));

      expect(objNew.$attrs.heightAdaptivePolicy).assertEqual("TextHeightAdaptivePolicy.MAX_LINES_FIRST")
      expect(objNew.$attrs.fontFamily).assertEqual('HarmonyOS Sans')
      console.info('textTest_0009 END');
      done();
    });

    /**
     * @tc.number textTest_0010
     * @tc.name   Test the properties of components
     * @tc.desc   Change attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textTest_0010', 0, async function (done) {

      console.info('textTest_0010 START');
      let strJsonNew = getInspectorByKey('text10');
      let objNew = JSON.parse(strJsonNew);
      console.info("textTest_0010 component is: " + JSON.stringify(objNew.$attrs));
      expect(objNew.$attrs.fontFamily).assertEqual('HarmonyOS Sans')
      console.info('textTest_0010 END');
      done();
    });

    /**
     * @tc.number textTest_0011
     * @tc.name   Test the properties of components
     * @tc.desc   Change attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textTest_0011', 0, async function (done) {

      console.info('textTest_0011 START');
      let driver = Driver.create();
      let button = await driver.findComponent(ON.id('changeButton'));
      await button.click();
      await Utils.sleep(2000)

      let strJsonNew = getInspectorByKey('text11');
      let objNew = JSON.parse(strJsonNew);
      console.info("textTest_0011 component is: " + JSON.stringify(objNew.$attrs));

      expect(objNew.$attrs.wordBreak).assertEqual("WordBreak.BREAK_ALL")
      console.info('textTest_0011 END');
      done();
    });
  })
}