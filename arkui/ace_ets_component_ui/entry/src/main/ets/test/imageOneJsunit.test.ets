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

export default function imageOneJsunit() {
  describe('imageOneJsunit', () => {
    beforeEach(async (done: Function) => {
      console.info("imageOneJsunit beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/imageOne',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get imageOneJsunit state pages:" + JSON.stringify(pages));
        if (!("imageOne" == pages.name)) {
          console.info("get imageOneJsunit state pages.name:" + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          console.info("push imageOneJsunit success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push imageOneJsunit page error:" + err);
        expect().assertFail();
      }
      done();
    });

    it('imageOneJsunit_0100', 0, async (done: Function) => {
      console.info('imageOneJsunit_0100 START');
      await CommonFunc.sleep(1000);
      // get the image component and test attribute
      let strJson: string = getInspectorByKey('image1');

      console.info('textimageOneJsunit_0100 component JSON.parse(strJson) is: ' + JSON.parse(strJson).$attrs.src);
      expect(JSON.parse(strJson).$attrs.src).assertEqual('resource://rawfile/test3.png');

      let strJson2 = getInspectorByKey('objectFit');
      console.info('textimageOneJsunit_0100 component obj2 is: ' + JSON.parse(strJson2).$attrs.objectFit);
      expect(JSON.parse(strJson2).$attrs.objectFit).assertEqual('ImageFit.None');

      let strJson3 = getInspectorByKey('repeat');

      console.info('textimageOneJsunit_0100 component JSON.parse(strJson3) is: ' + JSON.parse(strJson3)
        .$attrs
        .objectFit);
      expect(JSON.parse(strJson).$attrs.objectRepeat).assertEqual('ImageRepeat.NoRepeat');
      done();
    });

    it('imageOneJsunit_0200', 0, async (done: Function) => {
      console.info('imageOneJsunit_0200 START');
      await CommonFunc.sleep(1000);
      // modify the image format
      globalThis.value.message.notify({
        name: 'imageNamePng', value: 'test2.svg'
      })
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('image1');

      console.info('textimageOneJsunit_0200 component JSON.parse(strJson) is: ' + JSON.parse(strJson).$attrs.src);
      expect(JSON.parse(strJson).$attrs.src).assertEqual('resource://rawfile/test2.svg');

      globalThis.value.message.notify({
        name: 'imageNamePng', value: 'test.gif'
      })
      await CommonFunc.sleep(1000);
      let strJson2 = getInspectorByKey('image1');

      console.info('textimageOneJsunit_0200 component JSON.parse(strJson2) is: ' + JSON.parse(strJson2).$attrs.src);
      expect(JSON.parse(strJson2).$attrs.src).assertEqual('resource://rawfile/test.gif');

      globalThis.value.message.notify({
        name: 'imageNamePng', value: 'bm.bmp'
      })
      await CommonFunc.sleep(1000);
      let strJson3 = getInspectorByKey('image1');

      console.info('textimageOneJsunit_0100 component JSON.parse(strJson3) is: ' + JSON.parse(strJson3).$attrs.src);
      expect(JSON.parse(strJson3).$attrs.src).assertEqual('resource://rawfile/bm.bmp');

      globalThis.value.message.notify({
        name: 'imageNamePng', value: 'bm.jpg'
      })
      await CommonFunc.sleep(1000);
      let strJson4 = getInspectorByKey('image1');

      console.info('textimageOneJsunit_0100 component JSON.parse(strJson4) is: ' + JSON.parse(strJson4).$attrs.src);
      expect(JSON.parse(strJson4).$attrs.src).assertEqual('resource://rawfile/bm.jpg');
      done();
    });

    it('imageOneJsunit_0300', 0, async (done: Function) => {
      console.info('imageOneJsunit_0300 START');
      await CommonFunc.sleep(1000);
      // modify the image of not exit
      globalThis.value.message.notify({
        name: 'imageNamePng', value: 'aaa.png'
      })
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('image1');

      console.info('textimageOneJsunit_0300 component JSON.parse(strJson) is: ' + JSON.parse(strJson).$attrs.src);
      expect(JSON.parse(strJson).$attrs.src).assertEqual('resource://rawfile/aaa.png');
      done();
    });

    it('imageOneJsunit_0400', 0, async (done: Function) => {
      console.info('imageOneJsunit_0400 START');
      await CommonFunc.sleep(1000);
      // test the enum of objectFit
      globalThis.value.message.notify({
        name: 'objectFit', value: ImageFit.Cover
      })
      await CommonFunc.sleep(500);
      let strJson: string = getInspectorByKey('objectFit');

      console.info('textimageOneJsunit_0400 component JSON.parse(strJson) is: ' + JSON.parse(strJson).$attrs.objectFit);
      expect(JSON.parse(strJson).$attrs.objectFit).assertEqual('ImageFit.Cover');

      globalThis.value.message.notify({
        name: 'objectFit', value: ImageFit.Auto
      })
      await CommonFunc.sleep(500);
      let strJson2 = getInspectorByKey('objectFit');

      console.info('textimageOneJsunit_0400 component JSON.parse(strJson2) is: ' + JSON.parse(strJson2)
        .$attrs
        .objectFit);
      expect(JSON.parse(strJson2).$attrs.objectFit).assertEqual('ImageFit.Auto');

      globalThis.value.message.notify({
        name: 'objectFit', value: ImageFit.Fill
      })
      await CommonFunc.sleep(500);
      let strJson3 = getInspectorByKey('objectFit');

      console.info('textimageOneJsunit_0400 component JSON.parse(strJson3) is: ' + JSON.parse(strJson3)
        .$attrs
        .objectFit);
      expect(JSON.parse(strJson3).$attrs.objectFit).assertEqual('ImageFit.Fill');

      globalThis.value.message.notify({
        name: 'objectFit', value: ImageFit.ScaleDown
      })
      await CommonFunc.sleep(500);
      let strJson4 = getInspectorByKey('objectFit');

      console.info('textimageOneJsunit_0400 component JSON.parse(strJson4) is: ' + JSON.parse(strJson4)
        .$attrs
        .objectFit);
      expect(JSON.parse(strJson4).$attrs.objectFit).assertEqual('ImageFit.ScaleDown');

      globalThis.value.message.notify({
        name: 'objectFit', value: ImageFit.None
      })
      await CommonFunc.sleep(500);
      let strJson5 = getInspectorByKey('objectFit');
      console.info('textimageOneJsunit_0400 component JSON.parse(strJson)5 is: ' + JSON.parse(strJson5)
        .$attrs
        .objectFit);
      expect(JSON.parse(strJson5).$attrs.objectFit).assertEqual('ImageFit.None');

      globalThis.value.message.notify({
        name: 'objectFit', value: ImageFit.Contain
      })
      await CommonFunc.sleep(500);
      let strJson6 = getInspectorByKey('objectFit');
      console.info('textimageOneJsunit_0400 component JSON.parse(strJson)6 is: ' + JSON.parse(strJson6)
        .$attrs
        .objectFit);
      expect(JSON.parse(strJson6).$attrs.objectFit).assertEqual('ImageFit.Contain');
      done();
    });

    it('imageOneJsunit_0500', 0, async (done: Function) => {
      console.info('imageOneJsunit_0500 START');
      await CommonFunc.sleep(1000);
      // test the illegal enum of objectFit
      globalThis.value.message.notify({
        name: 'objectFit', value: 9
      })
      await CommonFunc.sleep(2000);
      let strJson: string = getInspectorByKey('image1');

      console.info('textimageOneJsunit_0500 component JSON.parse(strJson) is: ' + JSON.parse(strJson).$attrs.objectFit);
      expect(JSON.parse(strJson).$attrs.objectFit).assertEqual('ImageFit.Cover');
      done();
    });

    it('imageOneJsunit_0600', 0, async (done: Function) => {
      console.info('imageOneJsunit_0600 START');
      await CommonFunc.sleep(1000);
      // test the enum of ImageRepeat
      globalThis.value.message.notify({
        name: 'objectRepeat', value: ImageRepeat.X
      })
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('repeat');

      console.info('textimageOneJsunit_0600 component JSON.parse(strJson) is: ' + JSON.parse(strJson)
        .$attrs
        .objectRepeat);
      expect(JSON.parse(strJson).$attrs.objectRepeat).assertEqual('ImageRepeat.X');

      globalThis.value.message.notify({
        name: 'objectRepeat', value: ImageRepeat.Y
      })
      await CommonFunc.sleep(1000);
      let strJson1 = getInspectorByKey('repeat');

      console.info('textimageOneJsunit_0600 component JSON.parse(strJson1) is: ' + JSON.parse(strJson1)
        .$attrs
        .objectRepeat);
      expect(JSON.parse(strJson1).$attrs.objectRepeat).assertEqual('ImageRepeat.Y');

      globalThis.value.message.notify({
        name: 'objectRepeat', value: ImageRepeat.XY
      })
      await CommonFunc.sleep(1000);
      let strJson2 = getInspectorByKey('repeat');

      console.info('textimageOneJsunit_0600 component JSON.parse(strJson2) is: ' + JSON.parse(strJson2)
        .$attrs
        .objectRepeat);
      expect(JSON.parse(strJson2).$attrs.objectRepeat).assertEqual('ImageRepeat.XY');

      globalThis.value.message.notify({
        name: 'objectRepeat', value: ImageRepeat.NoRepeat
      })
      await CommonFunc.sleep(1000);
      let strJson3 = getInspectorByKey('repeat');

      console.info('textimageOneJsunit_0600 component JSON.parse(strJson3) is: ' + JSON.parse(strJson3)
        .$attrs
        .objectRepeat);
      expect(JSON.parse(strJson3).$attrs.objectRepeat).assertEqual('ImageRepeat.NoRepeat');
      done();
    });

    it('imageOneJsunit_0700', 0, async (done: Function) => {
      console.info('imageOneJsunit_0700 START');
      await CommonFunc.sleep(1000);
      // test the illegal enum of ImageRepeat
      globalThis.value.message.notify({
        name: 'objectRepeat', value: undefined
      })
      await CommonFunc.sleep(3000);
      let strJson: string = getInspectorByKey('repeat');

      console.info('textimageOneJsunit_0700 component JSON.parse(strJson) is: ' + JSON.parse(strJson)
        .$attrs
        .objectRepeat);
      expect(JSON.parse(strJson).$attrs.objectRepeat).assertEqual('ImageRepeat.NoRepeat');
      done();
    });
  })
}
