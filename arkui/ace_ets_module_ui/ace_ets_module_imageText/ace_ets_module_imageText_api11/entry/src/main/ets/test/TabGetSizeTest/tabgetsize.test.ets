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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import router from '@ohos.router';
import Utils from '../Utils';
import {UiComponent, UiDriver, Component, Driver, UiWindow, ON, BY, MatchPattern, DisplayRotation, ResizeDirection, WindowMode, PointerMatrix} from '@ohos.UiTest';
interface UrlObject {
  url: string;
}
export default function tabgetsize() {
  describe('tabgetsize', () => {
    const routerPush = async (target:string) => {
      let options:UrlObject  = {
        url: `MainAbility/pages/tab/${target}`,
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
 * @tc.number  SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0780
 * @tc.name    SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0780
 * @tc.desc     set barWidth>width
 */
    it('SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0780', 0, async (done:Function) => {
      await routerPush('tabmax')
      console.info('[SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0780] START');
      let strJson: string = getInspectorByKey('getbarwidthtwo');
      console.info('[stepperLayout0010] component status strJson:' + strJson);
      expect(JSON.parse(strJson).$attrs.width).assertEqual('360.00vp');
      console.info('[stepperLayout0010] status value :' + JSON.parse(strJson).$attrs.status);
      done();
    });

    /*
 * @tc.number  SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0770
 * @tc.name    SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0770
 * @tc.desc     set barWidth<0
 */
    it('SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0770', 0, async (done:Function) => {
      await routerPush('tabfu')
      console.info('[SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0770] START');
      let strJson: string = getInspectorByKey('getbarwidthone');
      console.info('[stepperLayout0010] component status strJson:' + strJson);
      expect(JSON.parse(strJson).$attrs.width).assertEqual('360.00vp');
      console.info('[stepperLayout0010] status value :' + JSON.parse(strJson).$attrs.status);
      done();
    });

    /*
 * @tc.number  SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0810
 * @tc.name    SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0810
 * @tc.desc    set barWidth=100%
 */
    it('SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0810', 0, async (done:Function) => {
      await routerPush('tabhundred')
      console.info('[SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0810] START');
      let strJson: string = getInspectorByKey('getbarwidthlast');
      console.info('[stepperLayout0010] component status strJson:' + strJson);
      expect(JSON.parse(strJson).$attrs.width).assertEqual('200.00vp');
      console.info('[stepperLayout0010] status value :' + JSON.parse(strJson).$attrs.status);
      done();
    });

    /*
 * @tc.number  SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0800
 * @tc.name    SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0800
 * @tc.desc     set barWidth=10px
 */
    it('SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0800', 0, async (done:Function) => {
      await routerPush('tabpx')
      console.info('[SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0520] START');
      let strJson: string = getInspectorByKey('getbarwidthpx');
      console.info('[stepperLayout0010] component status strJson:' + strJson);
      expect(JSON.parse(strJson).$attrs.width).assertEqual('6.66vp');
      console.info('[stepperLayout0010] status value :' + JSON.parse(strJson).$attrs.status);
      done();
    });

    /*
 * @tc.number  SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0790
 * @tc.name    SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0790
 * @tc.desc    set barWidth=250
 */
    it('SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0790', 0, async (done:Function) => {
      await routerPush('tabtfz')
      console.info('[SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0790] START');
      let strJson: string = getInspectorByKey('getbarwidththree');
      console.info('[stepperLayout0010] component status strJson:' + strJson);
      expect(JSON.parse(strJson).$attrs.width).assertEqual('250.00vp');
      console.info('[stepperLayout0010] status value :' + JSON.parse(strJson).$attrs.status);
      done();
    });

    /*
 * @tc.number  SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0820
 * @tc.name    SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0820
 * @tc.desc     set barWidth=360
 */
    it('SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0820', 0, async (done:Function) => {
      await routerPush('tabtsz')
      console.info('[SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0820] START');
      let strJson: string = getInspectorByKey('getbarwidthfour');
      console.info('[stepperLayout0010] component status strJson:' + strJson);
      expect(JSON.parse(strJson).$attrs.width).assertEqual('360.00vp');
      console.info('[stepperLayout0010] status value :' + JSON.parse(strJson).$attrs.status);
      done();
    });

    /*
 * @tc.number  SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0750
 * @tc.name    SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0750
 * @tc.desc     set scrollable=true
 */
    it('SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0750', 0, async (done:Function) => {
      await routerPush('owntab1')
      console.info('[SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0750] START');
      let driver: Driver = Driver.create();
      let scrollBar: Component = await driver.findComponent(ON.id('scrollable_true'));
      if(await scrollBar.isScrollable()) {
        console.info('This scrollBar can be operated');
      } else {
        console.info('This scrollBar can not be operated');
      }
      done();
    });

    /*
 * @tc.number  SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0760
 * @tc.name    SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0760
 * @tc.desc    set scrollable=false
 */
    it('SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0760', 0, async (done:Function) => {
      await routerPush('owntab2')
      console.info('[SUB_ACE_UI_COMPONENT_NAV_MODIFIER_0760] START');
      let driver: Driver = Driver.create();
      let scrollBar: Component = await driver.findComponent(ON.id('scrollable_false'));
      if(await scrollBar.isScrollable()) {
        console.info('This scrollBar can be operated');
      } else {
        console.info('This scrollBar can not be operated');
      }
      done();
    });
  }
  )
}


