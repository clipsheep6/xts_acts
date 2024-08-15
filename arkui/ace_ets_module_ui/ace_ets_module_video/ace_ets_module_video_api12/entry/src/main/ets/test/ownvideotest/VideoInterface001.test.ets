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
import Utils from '../Utils';
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

export default function VideoInterface001() {
  describe('VideoInterface001', () => {
    const routerPush = async (target: string) => {
      let options: UrlObject = {
        url: `MainAbility/pages/ownvideo/${target}`,
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

    it('SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_ONSTOP_001', 0, async (done: Function) => {
      await routerPush('VideoInterface001')
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0050] START');
      let driver: Driver = Driver.create();
      await Utils.sleep(2000);
      let button01: Component = await driver.findComponent(ON.id('button_01'));
      let button02: Component = await driver.findComponent(ON.id('button_02'));
      await button01.click();
      await button02.click();
      await button01.click();
      await button02.click();
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('VideoInterface001_001');
      expect(JSON.parse(strJson).$attrs.content).assertEqual('回调次数为：2');
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0050] END');
      done();
    });

    it('SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_ONSTOP_002', 0, async (done: Function) => {
      await routerPush('VideoInterface002')
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0050] START');
      let driver: Driver = Driver.create();
      await Utils.sleep(2000);
      let button03: Component = await driver.findComponent(ON.id('button_03'));
      let button04: Component = await driver.findComponent(ON.id('button_04'));
      let button05: Component = await driver.findComponent(ON.id('button_05'));
      await button03.click();
      await Utils.sleep(1000);
      await button04.click();
      await Utils.sleep(1000);
      await button05.click();
      await Utils.sleep(1000);
      let strJson = getInspectorByKey('VideoInterface001_002');
      expect(JSON.parse(strJson).$attrs.content).assertEqual('回调次数为：2');
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0050] END');
      done();
    });

    it('SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_ONSTOP_003', 0, async (done: Function) => {
      await routerPush('VideoInterface003')
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0050] START');
      let driver: Driver = Driver.create();
      await Utils.sleep(2000);
      let button01: Component = await driver.findComponent(ON.id('button_06'));
      let button02: Component = await driver.findComponent(ON.id('button_07'));
      await button01.click();
      await button02.click();
      await button02.click();
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('VideoInterface001_003');
      expect(JSON.parse(strJson).$attrs.content).assertEqual('回调次数为：1');
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0050] END');
      done();
    });

    it('SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_ONSTOP_009', 0, async (done: Function) => {
      await routerPush('VideoInterface009')
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0050] START');
      let driver: Driver = Driver.create();
      await Utils.sleep(2000);
      let button01: Component = await driver.findComponent(ON.id('button_10'));
      let button02: Component = await driver.findComponent(ON.id('button_12'));
      let button03: Component = await driver.findComponent(ON.id('button_11'));
      await button01.click();
      await button02.click();
      await button03.click();
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('VideoInterface001_009');
      expect(JSON.parse(strJson).$attrs.content).assertEqual('回调次数为：1');
      console.info('[SUB_ACE_UI_COMPONENT_MEDIA_IMAGEANIMATOR_INTERFACE_0050] END');
      done();
    });

  }
  )
}


