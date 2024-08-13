/**
 * Copyright (c) 2024 Shenzhen Kaihong Digital Industry Development Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import { afterAll, afterEach, beforeAll, beforeEach, describe, expect, it } from '@ohos/hypium';
import router from '@ohos.router';
import Utils from '../../Utils';
import {
  BY,
  Component,
  DisplayRotation,
  Driver,
  MatchPattern,
  ON,
  PointerMatrix,
  ResizeDirection,
  UiComponent,
  UiDriver,
  UiWindow,
  WindowMode
} from '@ohos.UiTest';

interface UrlObject {
  url: string;
}

export default function ownfillmode() {
  describe('ownfillmode', () => {
    const routerPush = async (target: string) => {
      let options: UrlObject = {
        url: `MainAbility/pages/ImageAnimator/ownimageanimator/${target}`,
      }
      await Utils.sleep(1000);
      try {
        router.clear();
        let pages = router.getState();
        console.info(`get ${target} state pages:` + JSON.stringify(pages));
        console.info(`get ${target} pages.name:` + JSON.stringify(pages.name));
        if (!(target == pages.name)) {
          router.pushUrl(options);
          await Utils.sleep(1000);
          let pages = router.getState();
          expect(pages.name).assertContain(target)
        }
      } catch (err) {
        console.error(`push ${target} page error:` + err);
      }
    }

    /*
    * @tc.number  SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0050
    * @tc.name    SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0050
    * @tc.desc    set FillMode.Backwards
    */
    it('SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0050', 0, async (done: Function) => {
      await routerPush('fillmodeback')
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0050] START');
      let strJson = getInspectorByKey('fillmodeback001');
      expect(JSON.parse(strJson).$attrs.fillMode).assertEqual('FillMode.Backwards');
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0050] END');
      done();
    });

    /*
        * @tc.number  SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0060
        * @tc.name    SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0060
        * @tc.desc    set FillMode.Both
        */
    it('SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0060', 0, async (done: Function) => {
      await routerPush('fillmodeboth')
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0060] START');
      let strJson = getInspectorByKey('fillmodeboth001');
      expect(JSON.parse(strJson).$attrs.fillMode).assertEqual('FillMode.Both');
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0060] END');
      done();
    });

    /*
        * @tc.number  SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0070
        * @tc.name    SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0070
        * @tc.desc    set FillMode.Forwards
        */
    it('SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0070', 0, async (done: Function) => {
      await routerPush('fillmodeforward')
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0070] START');
      let strJson = getInspectorByKey('fillmodeforwards001');
      expect(JSON.parse(strJson).$attrs.fillMode).assertEqual('FillMode.Forwards');
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0070] END');
      done();
    });

    /*
        * @tc.number  SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0080
        * @tc.name    SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0080
        * @tc.desc    set FillMode.None
        */
    it('SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0080', 0, async (done: Function) => {
      await routerPush('fillmodenone')
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0080] START');
      let strJson = getInspectorByKey('fillmodenone001');
      expect(JSON.parse(strJson).$attrs.fillMode).assertEqual('FillMode.None');
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0080] END');
      done();
    });

    /*
        * @tc.number  SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0090
        * @tc.name    SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0090
        * @tc.desc    set fixedsize=false
        */
    it('SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0090', 0, async (done: Function) => {
      await routerPush('fixedsizefalse')
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0090] START');
      let strJson = getInspectorByKey('fixedsizefalse001');
      expect(JSON.parse(strJson).$attrs.fixedSize).assertEqual('false');
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0090] END');
      done();
    });

    /*
        * @tc.number  SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0100
        * @tc.name    SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0100
        * @tc.desc    set fixedsize=true
        */
    it('SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0100', 0, async (done: Function) => {
      await routerPush('fixedsizetrue')
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0100] START');
      let strJson = getInspectorByKey('fixedsizetrue001');
      expect(JSON.parse(strJson).$attrs.fixedSize).assertEqual('true');
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0100] END');
      done();
    });

    /*
        * @tc.number  SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0110
        * @tc.name    SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0110
        * @tc.desc    not set fixedsize
        */
    it('SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0110', 0, async (done: Function) => {
      await routerPush('fixedsizemr')
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0110] START');
      let strJson = getInspectorByKey('fixedsizemr001');
      expect(JSON.parse(strJson).$attrs.fixedSize).assertEqual('true');
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0110] END');
      done();
    });

    /*
        * @tc.number  SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0470
        * @tc.name    SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0470
        * @tc.desc    set reverse=true
        */
    it('SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0470', 0, async (done: Function) => {
      await routerPush('reversetrue')
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0470] START');
      let strJson = getInspectorByKey('reversetrue001');
      expect(JSON.parse(strJson).$attrs.reverse).assertEqual('true');
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0470] END');
      done();
    });

    /*
        * @tc.number  SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0480
        * @tc.name    SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0480
        * @tc.desc    set reverse=false
        */
    it('SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0480', 0, async (done: Function) => {
      await routerPush('reversemr')
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0480] START');
      let strJson = getInspectorByKey('reversemr001');
      expect(JSON.parse(strJson).$attrs.reverse).assertEqual('false');
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0480] END');
      done();
    });

    /*
    * @tc.number  SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0490
    * @tc.name    SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0490
    * @tc.desc    set state=Initial
    */
    it('SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0490', 0, async (done: Function) => {
      await routerPush('ownstateone')
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0490] START');
      let driver: Driver = Driver.create();
      await Utils.sleep(2000);
      let button01: Component = await driver.findComponent(ON.id('statechange001'));
      await button01.click();
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('ownstate001');
      expect(JSON.parse(strJson).$attrs.state).assertEqual('AnimationStatus.Initial');
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0490] END');
      done();
    });

    /*
        * @tc.number  SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0500
        * @tc.name    SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0500
        * @tc.desc    set state=Paused
        */
    it('SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0500', 0, async (done: Function) => {
      await routerPush('ownstatetwo')
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0500] START');
      let driver: Driver = Driver.create();
      await Utils.sleep(2000);
      let button02: Component = await driver.findComponent(ON.id('ownstart002'));
      let button03: Component = await driver.findComponent(ON.id('ownpause002'));
      await button02.click();
      await Utils.sleep(2000);
      await button03.click();
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('ownstate002');
      let strJson2: string = getInspectorByKey('imageanimator001_001');
      expect(JSON.parse(strJson).$attrs.state).assertEqual('AnimationStatus.Paused');
      expect(JSON.parse(strJson2).$attrs.content).assertEqual('回调次数为：2');
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0500] END');
      done();
    });

    /*
    * @tc.number  SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0510
    * @tc.name    SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0510
    * @tc.desc    set state=Running
    */
    it('SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0510', 0, async (done: Function) => {
      await routerPush('ownstatethree')
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0510] START');
      let driver: Driver = Driver.create();
      await Utils.sleep(2000);
      let button01: Component = await driver.findComponent(ON.id('statechange002'));
      await button01.click();
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('ownstate003');
      expect(JSON.parse(strJson).$attrs.state).assertEqual('AnimationStatus.Running');
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0510] END');
      done();
    });

    /*
    * @tc.number  SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0520
    * @tc.name    SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0520
    * @tc.desc    set state=Stopped
    */
    it('SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0520', 0, async (done: Function) => {
      await routerPush('ownstatefour')
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0520] START');
      let driver: Driver = Driver.create();
      await Utils.sleep(2000);
      let button04: Component = await driver.findComponent(ON.id('ownstart004'));
      let button05: Component = await driver.findComponent(ON.id('ownstop004'));
      await button04.click();
      await Utils.sleep(2000);
      await button05.click();
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('ownstate004');
      let strJson2: string = getInspectorByKey('imageanimator001_002');
      expect(JSON.parse(strJson).$attrs.state).assertEqual('AnimationStatus.Stopped');
      expect(JSON.parse(strJson2).$attrs.content).assertEqual('回调次数为：2');
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0520] END');
      done();
    });

    /*
    * @tc.number  SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0530
    * @tc.name    SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0530
    * @tc.desc    set state=Initial
    */
    it('SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0530', 0, async (done: Function) => {
      await routerPush('ownstatefive')
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0530] START');
      let strJson = getInspectorByKey('ownstate005');
      expect(JSON.parse(strJson).$attrs.state).assertEqual('AnimationStatus.Initial');
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0530] END');
      done();
    });

    /*
    * @tc.number  SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0540
    * @tc.name    SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0540
    * @tc.desc    set state=Running
    */
    it('SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0540', 0, async (done: Function) => {
      await routerPush('ownstatesix')
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0540] START');
      let strJson = getInspectorByKey('ownstate006');
      expect(JSON.parse(strJson).$attrs.state).assertEqual('AnimationStatus.Running');
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0540] END');
      done();
    });

    /*
    * @tc.number  SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0550
    * @tc.name    SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0550
    * @tc.desc    not set state
    */
    it('SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0550', 0, async (done: Function) => {
      await routerPush('ownstateseven')
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0550] START');
      let strJson = getInspectorByKey('ownstate007');
      expect(JSON.parse(strJson).$attrs.state).assertEqual('AnimationStatus.Initial');
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0550] END');
      done();
    });
  }
  )
}

