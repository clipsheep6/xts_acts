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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"
import router from '@system.router';
import Utils from './Utils';
import { UiDriver, UiComponent, BY, Driver, Component, ON } from '@ohos.UiTest'

export default function textInput() {
  describe('textInputJsunit', function () {
    beforeEach(async function (done) {
      console.info("textInputJsunit beforeEach start");
      let options = {
        uri: 'MainAbility/pages/textInput',
      }
      let result;
      try {
        router.clear();
        let pages = router.getState();
        console.info("get textInput state pages: " + JSON.stringify(pages));
        if (!("textInput" == pages.name)) {
          console.info("get textInput state pages.name: " + JSON.stringify(pages.name));
          result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push textInput page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push textInput page error: " + err);
      }
      done();
    });

    /**
     * @tc.number textInputJsunit_0100
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textInputJsunit_0100',0,async function (done){
      console.info('textInputJsunit_0100 START');
      let strJson = getInspectorByKey('textInputKey1');
      let obj = JSON.parse(strJson);
      console.info("[textInputJsunit_0100] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.maxLines).assertEqual('3');
      console.info('textInputJsunit_0100 END');
      done();
    });
    /**
     * @tc.number textInputJsunit_0101
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textInputJsunit_0101',0,async function (done){
      console.info('textInputJsunit_0101 START');
      let strJson = getInspectorByKey('textInputKey1');
      let obj = JSON.parse(strJson);
      console.info("[textInputJsunit_0101] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.showUnderline).assertEqual('true');
      console.info('textInputJsunit_0101 END');
      done();
    });
    /**
     * @tc.number textInputJsunit_0102
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textInputJsunit_0102',0,async function (done){
      console.info('textInputJsunit_0102 START');
      let strJson = getInspectorByKey('textInputKey1');
      let obj = JSON.parse(strJson);
      console.info("[textInputJsunit_0102] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.showError).assertEqual('Error');
      console.info('textInputJsunit_0102 END');
      done();
    });
    /**
     * @tc.number textInputJsunit_0103
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textInputJsunit_0103',0,async function (done){
      console.info('textInputJsunit_0103 START');
      let strJson = getInspectorByKey('textInputKey1');
      let obj = JSON.parse(strJson);
      console.info("[textInputJsunit_0103] obj is: " + JSON.stringify(obj.$attrs));
      let passwordIcon = obj.$attrs.passwordIcon;
      expect(passwordIcon.onIconSrc).assertEqual('begin');
      expect(passwordIcon.offIconSrc).assertEqual('end');
      console.info('textInputJsunit_0103 END');
      done();
    });
    /**
     * @tc.number textInputJsunit_0104
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textInputJsunit_0104',0,async function (done){
      console.info('textInputJsunit_0104 START');
      let strJson = getInspectorByKey('textInputKey1');
      let obj = JSON.parse(strJson);
      console.info("[textInputJsunit_0104] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.style).assertEqual('TextInputStyle.Inline');
      console.info('textInputJsunit_0104 END');
      done();
    });
    /**
     * @tc.number textInputJsunit_0105
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textInputJsunit_0105',0,async function (done){
      console.info('textInputJsunit_0105 START');
      let strJson = getInspectorByKey('textInputKey1');
      let obj = JSON.parse(strJson);
      console.info("[textInputJsunit_0105] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.selectionMenuHidden).assertEqual('true');
      console.info('textInputJsunit_0105 END');
      done();
    });
    /**
     * @tc.number textInputJsunit_0106
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textInputJsunit_0106',0,async function (done){
      console.info('textInputJsunit_0106 START');
      let strJson = getInspectorByKey('textInputKey1');
      let obj = JSON.parse(strJson);
      console.info("[textInputJsunit_0106] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.barState).assertEqual('BarState.Auto');
      console.info('textInputJsunit_0106 END');
      done();
    });
    /**
     * @tc.number textInputJsunit_0107
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textInputJsunit_0107',0,async function (done){
      console.info('textInputJsunit_0107 START');
      let strJson = getInspectorByKey('textInputKey1');
      let obj = JSON.parse(strJson);
      console.info("[textInputJsunit_0107] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.enableKeyboardOnFocus).assertEqual('true');
      console.info('textInputJsunit_0107 END');
      done();
    });
    /**
     * @tc.number textInputJsunit_0108
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textInputJsunit_0108',0,async function (done){
      console.info('textInputJsunit_0108 START');
      let strJson = getInspectorByKey('textInputKey1');
      let obj = JSON.parse(strJson);
      console.info("[textInputJsunit_0108] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.fontSize).assertEqual('14');
      console.info('textInputJsunit_0108 END');
      done();
    });
    /**
     * @tc.number textInputJsunit_0109
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textInputJsunit_0109',0,async function (done){
      console.info('textInputJsunit_0109 START');
      let strJson = getInspectorByKey('textInputKey1');
      let obj = JSON.parse(strJson);
      console.info("[textInputJsunit_0109] obj is: " + JSON.stringify(obj.$attrs));
      let caretStyle = obj.$attrs.caretStyle;
      expect(caretStyle.width).assertEqual('12');
      console.info('textInputJsunit_0109 END');
      done();
    });
    /**
     * @tc.number textInputJsunit_0110
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textInputJsunit_0110',0,async function (done){
      console.info('textInputJsunit_0110 START');
      let strJson = getInspectorByKey('textInputKey1');
      let obj = JSON.parse(strJson);
      console.info("[textInputJsunit_0110] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.selectedBackgroundColor).assertEqual('Color.Blue');
      console.info('textInputJsunit_0110 END');
      done();
    });
    /**
     * @tc.number textInputJsunit_0111
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textInputJsunit_0111',0,async function (done){
      console.info('textInputJsunit_0111 START');
      let strJson = getInspectorByKey('textInputKey1');
      let obj = JSON.parse(strJson);
      console.info("[textInputJsunit_0111] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.caretPosition).assertEqual('1');
      console.info('textInputJsunit_0111 END');
      done();
    });
    /**
     * @tc.number textInputJsunit_0112
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textInputJsunit_0112',0,async function (done){
      console.info('textInputJsunit_0112 START');
      let strJson = getInspectorByKey('textInputKey1');
      let obj = JSON.parse(strJson);
      console.info("[textInputJsunit_0112] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.caretColor).assertEqual('#007DFF');
      console.info('textInputJsunit_0112 END');
      done();
    });
    /**
     * @tc.number textInputJsunit_0113
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textInputJsunit_0113',0,async function (done){
      console.info('textInputJsunit_0113 START');
      let strJson = getInspectorByKey('textInputKey1');
      let obj = JSON.parse(strJson);
      console.info("[textInputJsunit_0113] obj is: " + JSON.stringify(obj.$attrs));
      let placeholderFont = obj.$attrs.placeholderFont;
      expect(placeholderFont.size).assertEqual('14');
      expect(placeholderFont.weight).assertEqual('400');
      console.info('textInputJsunit_0113 END');
      done();
    });
    /**
     * @tc.number textInputJsunit_0114
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textInputJsunit_0114',0,async function (done){
      console.info('textInputJsunit_0114 START');
      let strJson = getInspectorByKey('textInputKey1');
      let obj = JSON.parse(strJson);
      console.info("[textInputJsunit_0114] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.placeholderColor).assertEqual('Color.Grey');
      console.info('textInputJsunit_0114 END');
      done();
    });
    /**
     * @tc.number textInputJsunit_0115
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textInputJsunit_0115',0,async function (done){
      console.info('textInputJsunit_0115 START');
      let strJson = getInspectorByKey('textInputKey1');
      let obj = JSON.parse(strJson);
      console.info("[textInputJsunit_0115] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.type).assertEqual('InputType.Password');
      console.info('textInputJsunit_0115 END');
      done();
    });
    /**
     * @tc.number textInputJsunit_0116
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textInputJsunit_0116',0,async function (done){
      console.info('textInputJsunit_0116 START');
      let strJson = getInspectorByKey('textInputKey1');
      let obj = JSON.parse(strJson);
      console.info("[textInputJsunit_0116] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.enterKeyType).assertEqual('EnterKeyType.Done');
      console.info('textInputJsunit_0116 END');
      done();
    });
    /**
     * @tc.number textInputJsunit_0117
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textInputJsunit_0117',0,async function (done){
      console.info('textInputJsunit_0117 START');
      let strJson = getInspectorByKey('textInputKey1');
      let obj = JSON.parse(strJson);
      console.info("[textInputJsunit_0117] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.maxLength).assertEqual('9');
      console.info('textInputJsunit_0117 END');
      done();
    });
    /**
     * @tc.number textInputJsunit_0118
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textInputJsunit_0118',0,async function (done){
      console.info('textInputJsunit_0118 START');
      let strJson = getInspectorByKey('textInputKey1');
      let obj = JSON.parse(strJson);
      console.info("[textInputJsunit_0118] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.fontColor).assertEqual('#182431');
      console.info('textInputJsunit_0118 END');
      done();
    });    /**
     * @tc.number textInputJsunit_0119
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textInputJsunit_0119',0,async function (done){
      console.info('textInputJsunit_0119 START');
      let strJson = getInspectorByKey('textInputKey1');
      let obj = JSON.parse(strJson);
      console.info("[textInputJsunit_0119] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.fontSize).assertEqual('14');
      console.info('textInputJsunit_0119 END');
      done();
    });    /**
     * @tc.number textInputJsunit_0120
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textInputJsunit_0120',0,async function (done){
      console.info('textInputJsunit_0120 START');
      let strJson = getInspectorByKey('textInputKey1');
      let obj = JSON.parse(strJson);
      console.info("[textInputJsunit_0120] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.fontStyle).assertEqual('FontStyle.Normal');
      console.info('textInputJsunit_0120 END');
      done();
    });    /**
     * @tc.number textInputJsunit_0121
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textInputJsunit_0121',0,async function (done){
      console.info('textInputJsunit_0121 START');
      let strJson = getInspectorByKey('textInputKey1');
      let obj = JSON.parse(strJson);
      console.info("[textInputJsunit_0121] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.fontWeight).assertEqual('FontWeight.Bold');
      console.info('textInputJsunit_0121 END');
      done();
    });    /**
     * @tc.number textInputJsunit_0122
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textInputJsunit_0122',0,async function (done){
      console.info('textInputJsunit_0122 START');
      let strJson = getInspectorByKey('textInputKey1');
      let obj = JSON.parse(strJson);
      console.info("[textInputJsunit_0122] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.fontFamily).assertEqual('Arial) HarmonyOS Sans');
      console.info('textInputJsunit_0122 END');
      done();
    });    /**
     * @tc.number textInputJsunit_0123
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textInputJsunit_0123',0,async function (done){
      console.info('textInputJsunit_0123 START');
      let strJson = getInspectorByKey('textInputKey1');
      let obj = JSON.parse(strJson);
      console.info("[textInputJsunit_0123] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.copyOption).assertEqual('CopyOptions.None');
      console.info('textInputJsunit_0123 END');
      done();
    });    /**
     * @tc.number textInputJsunit_0124
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textInputJsunit_0124',0,async function (done){
      console.info('textInputJsunit_0124 START');
      let strJson = getInspectorByKey('textInputKey1');
      let obj = JSON.parse(strJson);
      console.info("[textInputJsunit_0124] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.showPasswordIcon).assertEqual('true');
      console.info('textInputJsunit_0124 END');
      done();
    });    /**
     * @tc.number textInputJsunit_0125
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textInputJsunit_0125',0,async function (done){
      console.info('textInputJsunit_0125 START');
      let strJson = getInspectorByKey('textInputKey1');
      let obj = JSON.parse(strJson);
      console.info("[textInputJsunit_0125] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.textAlign).assertEqual('TextAlign.Center');
      console.info('textInputJsunit_0125 END');
      done();
    });

  })
}
