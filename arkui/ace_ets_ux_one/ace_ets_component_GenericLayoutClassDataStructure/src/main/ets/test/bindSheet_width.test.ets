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

import { describe, beforeAll, it, expect } from '@ohos/hypium'
import router from '@ohos.router';
import I18n from '@ohos.i18n';

export default function bindSheet_width() {
  describe('ArkUIHDSBindSheet_WidthTest', () => {

    beforeAll(async (done: Function) => {
      let options: router.RouterOptions = {
        url: 'TestAbility/pages/bindSheet_width',
      };
      try {
        router.clear();
        let pages = router.getState();
        console.info("get bindSheet_width state success " + JSON.stringify(pages));
        if (!("bindSheet_width" == pages.name)) {
          console.info("get bindSheet_width state success " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          console.info("push bindSheet_width page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push bindSheet_width page error: " + err);
      }
      done();
    });

    /*
     *tc.number ArkUIHDS_BindSheet_Width_Test_0100
     *tc.name   Supports modifying the color of gauge components and supports segmented color settings
     *tc.desc   Set the colors attribute parameter to $r('app.color.gaugeColor1')
     */
    it('ArkUIHDS_BindSheet_Width_Test_0100', 0, async (done: Function) => {
      console.info('ArkUIHDS_BindSheet_Width_Test_0100 START');
      I18n.System.setSystemLanguage("zh-Hans");
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('ArkUIHDS_BindSheet_Width_Test_0100');
          console.info('ArkUIHDS_BindSheet_Width_Test_0100 START  :' + JSON.stringify(strJson));
          let obj: ESObject = JSON.parse(strJson);
          console.info("ArkUIHDS_BindSheet_Width_Test_0100 zh-Hans component obj.$attrs.bindSheet_width is: " +
          JSON.stringify(obj.$attrs.bindSheet_width));
          expect(obj.$attrs.bindSheet_width.left).assertEqual("5.00vp");
          expect(obj.$attrs.bindSheet_width.top).assertEqual("2.00vp");
          expect(obj.$attrs.bindSheet_width.right).assertEqual("3.00px");
          expect(obj.$attrs.bindSheet_width.bottom).assertEqual("0.00vp");

          I18n.System.setSystemLanguage("ar-EG");
          setTimeout(() => {
            try {
              strJson = getInspectorByKey('ArkUIHDS_BindSheet_Width_Test_0100');
              console.info('ArkUIHDS_BindSheet_Width_Test_0100 START  :' + JSON.stringify(strJson));
              obj = JSON.parse(strJson);
              console.info("ArkUIHDS_BindSheet_Width_Test_0100 ar-EG component obj.$attrs.bindSheet_width is: " +
              JSON.stringify(obj.$attrs.bindSheet_width));
              expect(obj.$attrs.bindSheet_width.left).assertEqual("3.00px");
              expect(obj.$attrs.bindSheet_width.top).assertEqual("2.00vp");
              expect(obj.$attrs.bindSheet_width.right).assertEqual("5.00vp");
              expect(obj.$attrs.bindSheet_width.bottom).assertEqual("0.00vp");
              console.info('ArkUIHDS_BindSheet_Width_Test_0100 ar-EG END ');
            } catch (err) {
              console.info('ArkUIHDS_BindSheet_Width_Test_0100 ar-EG ERR  ' + JSON.stringify(err));
              expect().assertFail();
            }
            done();
          }, 1000)

          console.info('ArkUIHDS_BindSheet_Width_Test_0100 zh-Hans END ');
        } catch (err) {
          console.info('ArkUIHDS_BindSheet_Width_Test_0100 zh-Hans ERR ' + JSON.stringify(err));
          expect().assertFail();
        }
        done();
      }, 1000)
    });
  })
}