/*
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

import { describe, beforeEach, afterEach, it, expect } from '@ohos/hypium'
import router from '@system.router';
import Utils from './Utils';
import { UiDriver, UiComponent, BY, Driver, Component, ON } from '@ohos.UiTest'
import events_emitter from '@ohos.events.emitter';

export default function hyperLinkJsunit() {
  describe('hyperLinkJsunit', function () {
    beforeEach(async function (done) {
      console.info("hyperLinkJsunit beforeEach start");
      let options = {
        uri: 'MainAbility/pages/hyperlink',
      }
      let result;
      try {
        router.clear();
        let pages = router.getState();
        console.info("get hyperLink state pages: " + JSON.stringify(pages));
        if (!("hyperlink" == pages.name)) {
          console.info("get hyperLink state pages.name: " + JSON.stringify(pages.name));
          result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push hyperLink page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push hyperLink page error: " + err);
      }
      done();
    })

    /**
     * @tc.number ArkUX_Stage_hyperLink_attrs_0100
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_hyperLink_attrs_0100', 0, async function (done) {
      console.info('ArkUX_Stage_hyperLink_attrs_0100 START');
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('HyperlinkKey1');
          console.info('ArkUX_Stage_hyperLink_attrs_0100 START  :' + JSON.stringify(strJson));
          let obj = JSON.parse(strJson);
          console.info("ArkUX_Stage_hyperLink_attrs_0100 component obj is: " + JSON.stringify(obj));
          expect(obj.$attrs.color).assertEqual("#FF789456");
          console.info('ArkUX_Stage_hyperLink_attrs_0100 END ');
        } catch (err) {
          console.info('ArkUX_Stage_hyperLink_attrs_0100 ERR  ' + JSON.stringify(err));
        }
        done();
      }, 500)
    });

    /**
     * @tc.number ArkUX_Stage_hyperLink_attrs_0200
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_hyperLink_attrs_0200', 0, async function (done) {
      console.info('ArkUX_Stage_hyperLink_attrs_0200 START');
      try {
        let callBack = (backData: events_emitter.EventData) => {
          try {
            console.info(`ArkUX_Stage_hyperLink_attrs_0200 get result is:` + JSON.stringify(backData));
            expect(backData?.data?.ACTION).assertEqual(true)
            console.info(`ArkUX_Stage_hyperLink_attrs_0200 END`);
          } catch (err) {
            console.info(`ArkUX_Stage_hyperLink_attrs_0200 err:` + JSON.stringify(err));
          }
          done()
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 79001,
          priority: events_emitter.EventPriority.LOW
        }
        events_emitter.on(innerEvent, callBack)
      } catch (err) {
        console.info(`ArkUX_Stage_hyperLink_attrs_0200 err:` + JSON.stringify(err));
      }

      // 获取 hyperlink 坐标
      let hyperlinkKey = Utils.getComponentRect('HyperlinkKey1');
      console.info(`ArkUX_Stage_hyperLink_attrs_0200 HyperlinkKey1 is:` + JSON.stringify(hyperlinkKey));
      let xhyperlink = Math.floor(Utils.getRectHorizontalCenterX(hyperlinkKey));
      let yhyperlink = Math.floor(Utils.getRectVerticalCenterY(hyperlinkKey));
      // 获取 list 坐标
      let testlist = Utils.getComponentRect('Testlist');
      console.info(`ArkUX_Stage_hyperLink_attrs_0200 testlist is:` + JSON.stringify(testlist));
      let xtest = Math.floor(Utils.getRectHorizontalCenterX(testlist));
      let ytest = Math.floor(Utils.getRectVerticalCenterY(testlist));
      //拖拽
      console.info(`ArkUX_Stage_hyperLink_attrs_0200 testlist is:` + xhyperlink + "##" + yhyperlink + "##" + xtest + "##" + ytest);
      let driver = Driver.create();
      await driver.drag(xhyperlink, yhyperlink, xtest, ytest);
      console.info(`ArkUX_Stage_hyperLink_attrs_0200 driver.drag END`)
    });

  })
}
