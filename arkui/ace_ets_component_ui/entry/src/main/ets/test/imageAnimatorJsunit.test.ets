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

export default function imageAniamtorJsunit() {
  describe('imageAniamtorJsunit', () => {
    beforeEach(async (done: Function) => {
      console.info("imageAniamtorJsunit beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/imageAnimator',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get imageAniamtorJsunit state pages:" + JSON.stringify(pages));
        if (!("imageAnimator" == pages.name)) {
          console.info("get imageAniamtor state pages.name:" + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          console.info("push imageAniamtorJsunit success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push imageAniamtorJsunit page error:" + err);
        expect().assertFail();
      }
      done();
    });

    it('imageAniamtorJsunit_0100', 0, async (done: Function) => {
      console.info('[imageAnimatorJsunit_0100] START');
      await CommonFunc.sleep(1000);
      // get the text imageAnimator component and test attribute
      let strJson: string = getInspectorByKey('imageAnimator');

      console.info('[imageAnimatorJsunit_0100] component JSON.parse(strJson) is: ' + JSON.stringify(JSON.parse(strJson)));
      console.info('[imageAnimatorJsunit_0100] images: ' + JSON.parse(strJson).$attrs.images)
      console.info('[imageAnimatorJsunit_0100] state: ' + JSON.parse(strJson).$attrs.state)
      console.info('[imageAnimatorJsunit_0100] duration: ' + JSON.parse(strJson).$attrs.duration)
      console.info('[imageAnimatorJsunit_0100] reverse: ' + JSON.parse(strJson).$attrs.reverse)
      console.info('[imageAnimatorJsunit_0100] fixedSize: ' + JSON.parse(strJson).$attrs.fixedSize)
      console.info('[imageAnimatorJsunit_0100] fillMode: ' + JSON.parse(strJson).$attrs.fillMode)
      console.info('[imageAnimatorJsunit_0100] iterations: ' + JSON.parse(strJson).$attrs.iterations)
      expect(JSON.parse(strJson).$attrs.images)
        .assertEqual('[{"src":"resource://RAWFILE/img1.png","left":"20.00vp","top":"20.00vp","width":"20.00vp","height":"20.00vp","duration":"0"},{"src":"resource://RAWFILE/img2.png","left":"20.00vp","top":"20.00vp","width":"30.00vp","height":"20.00vp","duration":"0"},{"src":"resource://RAWFILE/img3.png","left":"20.00vp","top":"20.00vp","width":"20.00vp","height":"20.00vp","duration":"0"}]');
      expect(JSON.parse(strJson).$attrs.state).assertEqual('AnimationStatus.Initial');
      expect(JSON.parse(strJson).$attrs.reverse).assertEqual('false');
      expect(JSON.parse(strJson).$attrs.fixedSize).assertEqual('true');
      expect(JSON.parse(strJson).$attrs.fillMode).assertEqual('FillMode.None');
      expect(JSON.parse(strJson).$attrs.iterations).assertEqual('1');
      expect(JSON.parse(strJson).$attrs.duration).assertEqual('2000');
      console.info('[imageAnimatorJsunit_0100] END');
      done();
    });

    it('imageAniamtorJsunit_0200', 0, async (done: Function) => {
      console.info('[imageAniamtorJsunit_0200] START');
      // test the enum of state of animator
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'state', value: AnimationStatus.Running
      })
      await CommonFunc.sleep(800);
      let strJson: string = getInspectorByKey('imageAnimator');

      console.info('[imageAniamtorJsunit_0200] component JSON.parse(strJson) is: ' + JSON.parse(strJson).$attrs.state);
      expect(JSON.parse(strJson).$attrs.state).assertEqual('AnimationStatus.Running');

      globalThis.value.message.notify({
        name: 'state', value: AnimationStatus.Paused
      })
      await CommonFunc.sleep(800);
      let strJson2 = getInspectorByKey('imageAnimator');

      console.info('[imageAniamtorJsunit_0200] component JSON.parse(strJson2) is: ' + JSON.parse(strJson2)
        .$attrs
        .state);
      expect(JSON.parse(strJson2).$attrs.state).assertEqual('AnimationStatus.Paused');

      globalThis.value.message.notify({
        name: 'state', value: AnimationStatus.Stopped
      })
      await CommonFunc.sleep(800);
      let strJson3 = getInspectorByKey('imageAnimator');

      console.info('[imageAniamtorJsunit_0200] component JSON.parse(strJson3) is: ' + JSON.parse(strJson3)
        .$attrs
        .state);
      expect(JSON.parse(strJson3).$attrs.state).assertEqual('AnimationStatus.Stopped');
      console.info('[imageAniamtorJsunit_0200] END');
      done();
    });

    it('imageAniamtorJsunit_0300', 0, async (done: Function) => {
      console.info('imageAniamtorJsunit_0300 START');
      // test the illegal value of imageAnimator
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'state', value: 4
      })
      await CommonFunc.sleep(2000);
      let strJson: string = getInspectorByKey('imageAnimator');

      console.info('imageAniamtorJsunit_0300 component JSON.parse(strJson) is: ' + JSON.parse(strJson).$attrs.state);
      expect(JSON.parse(strJson).$attrs.state).assertEqual('AnimationStatus.Initial');
      done();
    });

    it('imageAniamtorJsunit_0400', 0, async (done: Function) => {
      console.info('imageAniamtorJsunit_0400 START');
      // test the value of FillMode
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'fillMode', value: FillMode.Forwards
      })
      await CommonFunc.sleep(5000);
      let strJson: string = getInspectorByKey('imageAnimator');

      console.info('imageAniamtorJsunit_0400 component JSON.parse(strJson) is: ' + JSON.parse(strJson).$attrs.fillMode);
      expect(JSON.parse(strJson).$attrs.fillMode).assertEqual('FillMode.Forwards');

      globalThis.value.message.notify({
        name: 'fillMode', value: FillMode.Backwards
      })
      await CommonFunc.sleep(5000);
      let strJson2 = getInspectorByKey('imageAnimator');

      console.info('imageAniamtorJsunit_0400 component JSON.parse(strJson2) is: ' + JSON.parse(strJson2)
        .$attrs
        .fillMode);
      expect(JSON.parse(strJson2).$attrs.fillMode).assertEqual('FillMode.Backwards');

      globalThis.value.message.notify({
        name: 'fillMode', value: FillMode.Both
      })
      await CommonFunc.sleep(5000);
      let strJson3 = getInspectorByKey('imageAnimator');

      console.info('imageAniamtorJsunit_0400 component JSON.parse(strJson3) is: ' + JSON.parse(strJson3)
        .$attrs
        .fillMode);
      expect(JSON.parse(strJson3).$attrs.fillMode).assertEqual('FillMode.Both');
      done();
    });

    it('imageAniamtorJsunit_0500', 0, async (done: Function) => {
      console.info('imageAniamtorJsunit_0500 START');
      // test the illegal value of imageAnimator
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'fillMode', value: 8
      })
      await CommonFunc.sleep(2000);
      let strJson: string = getInspectorByKey('imageAnimator');

      console.info('imageAniamtorJsunit_0500 component JSON.parse(strJson) is: ' + JSON.parse(strJson).$attrs.fillMode);
      expect(JSON.parse(strJson).$attrs.fillMode).assertEqual('FillMode.Forwards');
      done();
    });

    it('imageAniamtorJsunit_0600', 0, async (done: Function) => {
      console.info('[imageAniamtorJsunit_0600] START');
      // test the boolean attribute  of imageAnimator
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'duration', value: 700
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'reverse', value: true
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'fixedSize', value: false
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'iterations', value: 2
      })
      await CommonFunc.sleep(2000);
      let strJson: string = getInspectorByKey('imageAnimator');

      console.info('[imageAniamtorJsunit_0600] component JSON.parse(strJson) is: ' + JSON.parse(strJson).$attrs.duration
        + "---" + JSON.parse(strJson).$attrs.reverse + "---" + JSON.parse(strJson)
        .$attrs
        .fixedSize + "----" + JSON.parse(strJson).$attrs.iterations);
      expect(JSON.parse(strJson).$attrs.duration).assertEqual('700');
      expect(JSON.parse(strJson).$attrs.reverse).assertEqual('true');
      expect(JSON.parse(strJson).$attrs.fixedSize).assertEqual('false');
      expect(JSON.parse(strJson).$attrs.iterations).assertEqual('2');
      console.info('[imageAniamtorJsunit_0600] END');
      done();
    });

    it('imageAniamtorJsunit_0700', 0, async (done: Function) => {
      console.info('imageAniamtorJsunit_0700 START');
      // test the image event start and Finish
      let driver = await UiDriver.create()
      let btn = await driver.findComponent(BY.key('start'));
      expect(btn != null).assertTrue();
      await btn.click();
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('t1');

      console.info("[imageAniamtorJsunit_0700] JSON.parse(strJson): " + JSON.stringify(JSON.parse(strJson)));
      expect(JSON.parse(strJson).$attrs.content).assertEqual('start');
      await CommonFunc.sleep(3000);
      let strJson1 = getInspectorByKey('t5');

      console.info("[imageAniamtorJsunit_0700] JSON.parse(strJson1): " + JSON.stringify(JSON.parse(strJson1)));
      expect(JSON.parse(strJson1).$attrs.content).assertEqual('onFinish');
      console.info('imageAniamtorJsunit_0700 END');
      done();
    });

    it('imageAniamtorJsunit_0800', 0, async (done: Function) => {
      console.info('imageAniamtorJsunit_0370 START');
      // test the image event of pause and repeat
      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('infinite'));
      expect(btn != null).assertTrue();
      await btn.click();
      await CommonFunc.sleep(2000);
      let btn2 = await driver.findComponent(ON.id('start'));
      expect(btn2 != null).assertTrue();
      await btn2.click();
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('t3');

      console.info('imageAnimatorJsunit_0800 component JSON.parse(strJson) is: ' + JSON.parse(strJson).$attrs.content);
      expect(JSON.parse(strJson).$attrs.content).assertEqual('onRepeat');

      let btn3 = await driver.findComponent(ON.id('pause'));
      expect(btn3 != null).assertTrue();
      await btn3.click();
      await CommonFunc.sleep(1000);
      let strJson2 = getInspectorByKey('t2');

      console.info('imageAnimatorJsunit_0800 component JSON.parse(strJson2) is: ' + JSON.parse(strJson2)
        .$attrs
        .content);
      expect(JSON.parse(strJson2).$attrs.content).assertEqual('pause');
      done();
    });
  })
}