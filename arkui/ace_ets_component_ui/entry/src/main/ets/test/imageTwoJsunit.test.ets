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
import router from '@ohos.router';
import {
  UiComponent,
  UiDriver,
  Component,
  Driver,
  UiWindow,
  ON,
  BY,
  MatchPattern,
  DisplayRotation,
  ResizeDirection,
  WindowMode,
  PointerMatrix
} from '@ohos.UiTest';
import CommonFunc from '../MainAbility/utils/Common';
import { MessageManager, Callback } from '../MainAbility/utils/MessageManager';

const waitUiReadyMs = 1000;

export default function imageTwoJsunit() {
  describe('imageTwoJsunit', () => {
    beforeEach(async (done: Function) => {
      console.info("imageTwoJsunit beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/imageTwo',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get imageTwoJsunit state pages:" + JSON.stringify(pages));
        if (!("imageTwo" == pages.name)) {
          console.info("get imageTwoJsunit state pages.name:" + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          console.info("push imageTwoJsunit success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push imageTwoJsunit page error:" + err);
        expect().assertFail();
      }
      done();
    });

    it('imageTwoJsunit_0100', 0, async (done: Function) => {
      console.info('imageTwoJsunit_0100 START');
      await CommonFunc.sleep(1000);
      // get the image component and test attribute
      let strJson: string = getInspectorByKey('image1');

      console.info('imageTwoJsunit_0100 component JSON.parse(strJson) is: ' + JSON.parse(strJson)
        .$attrs
        .renderMode + "--" + JSON.parse(strJson).$attrs.interpolation + "--" + JSON.parse(strJson)
        .$attrs
        .fillColor + "---" +
      JSON.parse(strJson).$attrs.autoResize + "---" + JSON.parse(strJson).$attrs.syncLoad + "----" + JSON.parse(strJson)
        .$attrs
        .copyOption + "--" + JSON.parse(strJson).$attrs.colorFilter + "--" + JSON.parse(strJson).$attrs.draggable);
      expect(JSON.parse(strJson).$attrs.renderMode).assertEqual('ImageRenderMode.Original');
      expect(JSON.parse(strJson).$attrs.interpolation).assertEqual('ImageInterpolation.None');
      expect(JSON.parse(strJson).$attrs.fillColor).assertEqual('#FFFF0000');
      expect(JSON.parse(strJson).$attrs.autoResize).assertEqual('true');
      expect(JSON.parse(strJson).$attrs.syncLoad).assertEqual('false');
      expect(JSON.parse(strJson).$attrs.copyOption).assertEqual('CopyOptions.InApp');
      expect(JSON.parse(strJson).$attrs.colorFilter)
        .assertEqual('1.000000 0.000000 0.000000 0.000000 0.000000 0.000000 ' +
          '1.000000 0.000000 0.000000 0.000000 0.000000 0.000000 1.000000 0.000000 0.000000 0.000000 0.000000 ' +
          '0.000000 1.000000 0.000000 ');
      expect(JSON.parse(strJson).$attrs.draggable).assertEqual('false');
      done();
    });

    it('imageTwoJsunit_0200', 0, async (done: Function) => {
      console.info('imageOneJsunit_0200 START');
      await CommonFunc.sleep(1000);
      // modify the image rendermode
      globalThis.value.message.notify({
        name: 'renderMode', value: ImageRenderMode.Template
      })
      await CommonFunc.sleep(200);
      let strJson: string = getInspectorByKey('image1');

      console.info('imageTwoJsunit_0200 component JSON.parse(strJson) is: ' + JSON.parse(strJson).$attrs.renderMode);
      expect(JSON.parse(strJson).$attrs.renderMode).assertEqual('ImageRenderMode.Template');
      done();
    });

    it('imageTwoJsunit_0300', 0, async (done: Function) => {
      console.info('imageTwoJsunit_0300 START');
      await CommonFunc.sleep(1000);
      // modify the image rendermode
      globalThis.value.message.notify({
        name: 'renderMode', value: undefined
      })
      await CommonFunc.sleep(200);
      let strJson: string = getInspectorByKey('image1');

      console.info('imageTwoJsunit_0300 component JSON.parse(strJson) is: ' + JSON.parse(strJson).$attrs.renderMode);
      expect(JSON.parse(strJson).$attrs.renderMode).assertEqual('ImageRenderMode.Original');
      done();
    });

    it('imageTwoJsunit_0400', 0, async (done: Function) => {
      console.info('imageTwoJsunit_0400 START');
      await CommonFunc.sleep(1000);
      // test the enum of interpolation
      globalThis.value.message.notify({
        name: 'interpolation', value: ImageInterpolation.Low
      })
      await CommonFunc.sleep(300);
      let strJson: string = getInspectorByKey('image1');

      console.info('imageTwoJsunit_0300  component JSON.parse(strJson) is: ' + JSON.parse(strJson)
        .$attrs
        .interpolation);
      expect(JSON.parse(strJson).$attrs.interpolation).assertEqual('ImageInterpolation.Low');

      globalThis.value.message.notify({
        name: 'interpolation', value: ImageInterpolation.Medium
      })
      await CommonFunc.sleep(300);
      let strJson2 = getInspectorByKey('image1');

      console.info('imageTwoJsunit_0400  component JSON.parse(strJson2) is: ' + JSON.parse(strJson2)
        .$attrs
        .interpolation);
      expect(JSON.parse(strJson2).$attrs.interpolation).assertEqual('ImageInterpolation.Medium');

      globalThis.value.message.notify({
        name: 'interpolation', value: ImageInterpolation.High
      })
      await CommonFunc.sleep(300);
      let strJson3 = getInspectorByKey('image1');

      console.info('imageTwoJsunit_0400  component JSON.parse(strJson3) is: ' + JSON.parse(strJson3)
        .$attrs
        .interpolation);
      expect(JSON.parse(strJson3).$attrs.interpolation).assertEqual('ImageInterpolation.High');
      done();
    });

    it('imageTwoJsunit_0500', 0, async (done: Function) => {
      console.info('imageTwoJsunit_0500 START');
      await CommonFunc.sleep(1000);
      // test the enum of interpolation
      globalThis.value.message.notify({
        name: 'interpolation', value: undefined
      })
      await CommonFunc.sleep(200);
      let strJson: string = getInspectorByKey('image1');

      console.info('imageTwoJsunit_0500  component JSON.parse(strJson) is: ' + JSON.parse(strJson)
        .$attrs
        .interpolation);
      expect(JSON.parse(strJson).$attrs.interpolation).assertEqual('ImageInterpolation.None');
      done();
    });

    it('imageTwoJsunit_0600', 0, async (done: Function) => {
      console.info('imageOneJsunit_0600 START');
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'fillColor', value: "#FFEEAA"
      })
      await CommonFunc.sleep(200);
      let strJson: string = getInspectorByKey('image1');

      console.info('imageOneJsunit_0600 component JSON.parse(strJson) is: ' + JSON.parse(strJson).$attrs.fillColor);
      expect(JSON.parse(strJson).$attrs.fillColor).assertEqual('#FFFFEEAA');

      globalThis.value.message.notify({
        name: 'fillColor', value: "rgb(238, 130, 238)"
      })
      await CommonFunc.sleep(2000);
      let strJson2 = getInspectorByKey('image1');

      console.info('imageTwoJsunit_0600  component JSON.parse(strJson2) is: ' + JSON.parse(strJson2).$attrs.fillColor);
      expect(JSON.parse(strJson2).$attrs.fillColor).assertEqual('#FFEE82EE');

      globalThis.value.message.notify({
        name: 'fillColor', value: Color.Green
      })
      await CommonFunc.sleep(2000);
      let strJson3 = getInspectorByKey('image1');

      console.info('imageTwoJsunit_0600  component JSON.parse(strJson3) is: ' + JSON.parse(strJson3).$attrs.fillColor);
      expect(JSON.parse(strJson3).$attrs.fillColor).assertEqual('#FF008000');
      done();
    });
  })
}