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

export default function border_radius() {
  describe('ArkUIHDSBorder_RadiusTest', () => {

    beforeAll(async (done: Function) => {
      let options: router.RouterOptions = {
        url: 'TestAbility/pages/border_radius',
      };
      try {
        router.clear();
        let pages = router.getState();
        console.info("get border_radius state success " + JSON.stringify(pages));
        if (!("border_radius" == pages.name)) {
          console.info("get border_radius state success " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          console.info("push border_radius page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push border_radius page error: " + err);
      }
      done();
    });

    /*
    *@tc.number     : ArkUIHDS_Border_Radius_Test_0100
    *@tc.name       : ArkUIHDS_Border_Radius_Test_0100
    *@tc.desc       : test assembly border radius
    *@tc.size       : MediumTest
    *@tc.type       : Function
    *@tc.level      : Level 1
    */
    it('ArkUIHDS_Border_Radius_Test_0100', 0, async (done: Function) => {
      console.info('ArkUIHDS_Border_Radius_Test_0100 START');
      I18n.System.setSystemLanguage("zh-Hans");
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('ArkUIHDS_Border_Radius_Test_0100');
          console.info('ArkUIHDS_Border_Radius_Test_0100 START  :' + JSON.stringify(strJson));
          let obj: ESObject = JSON.parse(strJson);
          console.info("ArkUIHDS_Border_Radius_Test_0100 zh-Hans component obj.$attrs.border_radius is: " +
          JSON.stringify(obj.$attrs.borderRadius));
          expect(obj.$attrs.borderRadius.topLeft).assertEqual("20.00px");
          expect(obj.$attrs.borderRadius.topRight).assertEqual("30.00vp");
          expect(obj.$attrs.borderRadius.bottomLeft).assertEqual("40.00fp");
          expect(obj.$attrs.borderRadius.bottomRight).assertEqual("50.00lpx");
          console.info('ArkUIHDS_Border_Radius_Test_0100 zh-Hans END ');
          I18n.System.setSystemLanguage("ar-EG");
          setTimeout(() => {
            try {
              let strJson = getInspectorByKey('ArkUIHDS_Border_Radius_Test_0100');
              console.info('ArkUIHDS_Border_Radius_Test_0100 START  :' + JSON.stringify(strJson));
              let obj: ESObject = JSON.parse(strJson);
              console.info("ArkUIHDS_Border_Radius_Test_0100 getSystemLanguage is: " + I18n.System.getSystemLanguage()
                .toString())
              console.info("ArkUIHDS_Border_Radius_Test_0100 ar-EG component obj.$attrs.border_radius is: " +
              JSON.stringify(obj.$attrs.borderRadius));
              expect(obj.$attrs.borderRadius.topLeft).assertEqual("30.00vp");
              expect(obj.$attrs.borderRadius.topRight).assertEqual("20.00px");
              expect(obj.$attrs.borderRadius.bottomLeft).assertEqual("50.00lpx");
              expect(obj.$attrs.borderRadius.bottomRight).assertEqual("40.00fp");
              console.info('ArkUIHDS_Border_Radius_Test_0100 ar-EG END ');
              done();
            } catch (err) {
              console.info('ArkUIHDS_Border_Radius_Test_0100 ar-EG ERR  ' + JSON.stringify(err));
              expect().assertFail();
            }
          }, 5000)
        } catch (err) {
          console.info('ArkUIHDS_Border_Radius_Test_0100 zh-Hans ERR ' + JSON.stringify(err));
          expect().assertFail();
        }
      }, 5000)
    });

    /*
    *@tc.number     : ArkUIHDS_Border_Radius_Test_0200
    *@tc.name       : ArkUIHDS_Border_Radius_Test_0200
    *@tc.desc       : test assembly border radius
    *@tc.size       : MediumTest
    *@tc.type       : Function
    *@tc.level      : Level 1
    */
    it('ArkUIHDS_Border_Radius_Test_0200', 0, async (done: Function) => {
      console.info('ArkUIHDS_Border_Radius_Test_0200 START');
      I18n.System.setSystemLanguage("zh-Hans");
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('ArkUIHDS_Border_Radius_Test_0200');
          console.info('ArkUIHDS_Border_Radius_Test_0200 START  :' + JSON.stringify(strJson));
          let obj: ESObject = JSON.parse(strJson);
          console.info("ArkUIHDS_Border_Radius_Test_0200 zh-Hans component obj.$attrs.border_radius is: " +
          JSON.stringify(obj.$attrs.borderRadius));
          expect(obj.$attrs.borderRadius.topLeft).assertEqual("-2.00px");
          expect(obj.$attrs.borderRadius.topRight).assertEqual("0.00px");
          expect(obj.$attrs.borderRadius.bottomLeft).assertEqual("0.00px");
          expect(obj.$attrs.borderRadius.bottomRight).assertEqual("0.00px");
          console.info('ArkUIHDS_Border_Radius_Test_0200 zh-Hans END ');
          I18n.System.setSystemLanguage("ar-EG");
          setTimeout(() => {
            try {
              let strJson = getInspectorByKey('ArkUIHDS_Border_Radius_Test_0200');
              console.info('ArkUIHDS_Border_Radius_Test_0200 START  :' + JSON.stringify(strJson));
              let obj: ESObject = JSON.parse(strJson);
              console.info("ArkUIHDS_Border_Radius_Test_0200 ar-EG component obj.$attrs.border_radius is: " +
              JSON.stringify(obj.$attrs.borderRadius));
              expect(obj.$attrs.borderRadius.topLeft).assertEqual("0.00px");
              expect(obj.$attrs.borderRadius.topRight).assertEqual("-2.00px");
              expect(obj.$attrs.borderRadius.bottomLeft).assertEqual("0.00px");
              expect(obj.$attrs.borderRadius.bottomRight).assertEqual("0.00px");
              console.info('ArkUIHDS_Border_Radius_Test_0200 ar-EG END ');
              done();
            } catch (err) {
              console.info('ArkUIHDS_Border_Radius_Test_0200 ar-EG ERR  ' + JSON.stringify(err));
              expect().assertFail();
            }
          }, 5000)
        } catch (err) {
          console.info('ArkUIHDS_Border_Radius_Test_0200 zh-Hans ERR ' + JSON.stringify(err));
          expect().assertFail();
        }
      }, 5000)
    });

    /*
    *@tc.number     : ArkUIHDS_Border_Radius_Test_0300
    *@tc.name       : ArkUIHDS_Border_Radius_Test_0300
    *@tc.desc       : test assembly border radius
    *@tc.size       : MediumTest
    *@tc.type       : Function
    *@tc.level      : Level 1
    */
    it('ArkUIHDS_Border_Radius_Test_0300', 0, async (done: Function) => {
      console.info('ArkUIHDS_Border_Radius_Test_0300 START');
      I18n.System.setSystemLanguage("zh-Hans");
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('ArkUIHDS_Border_Radius_Test_0300');
          console.info('ArkUIHDS_Border_Radius_Test_0300 START  :' + JSON.stringify(strJson));
          let obj: ESObject = JSON.parse(strJson);
          console.info("ArkUIHDS_Border_Radius_Test_0300 zh-Hans component obj.$attrs.border_radius is: " +
          JSON.stringify(obj.$attrs.borderRadius));
          expect(obj.$attrs.borderRadius.topLeft).assertEqual("20.00px");
          expect(obj.$attrs.borderRadius.topRight).assertEqual("30.00vp");
          expect(obj.$attrs.borderRadius.bottomLeft).assertEqual("0.00px");
          expect(obj.$attrs.borderRadius.bottomRight).assertEqual("0.00px");
          console.info('ArkUIHDS_Border_Radius_Test_0300 zh-Hans END ');
          I18n.System.setSystemLanguage("ar-EG");
          setTimeout(() => {
            try {
              let strJson = getInspectorByKey('ArkUIHDS_Border_Radius_Test_0300');
              console.info('ArkUIHDS_Border_Radius_Test_0300 START  :' + JSON.stringify(strJson));
              let obj: ESObject = JSON.parse(strJson);
              console.info("ArkUIHDS_Border_Radius_Test_0300 ar-EG component obj.$attrs.border_radius is: " +
              JSON.stringify(obj.$attrs.borderRadius));
              expect(obj.$attrs.borderRadius.topLeft).assertEqual("30.00vp");
              expect(obj.$attrs.borderRadius.topRight).assertEqual("20.00px");
              expect(obj.$attrs.borderRadius.bottomLeft).assertEqual("0.00px");
              expect(obj.$attrs.borderRadius.bottomRight).assertEqual("0.00px");
              console.info('ArkUIHDS_Border_Radius_Test_0300 ar-EG END ');
              done();
            } catch (err) {
              console.info('ArkUIHDS_Border_Radius_Test_0300 ar-EG ERR  ' + JSON.stringify(err));
              expect().assertFail();
            }
          }, 5000)
        } catch (err) {
          console.info('ArkUIHDS_Border_Radius_Test_0300 zh-Hans ERR ' + JSON.stringify(err));
          expect().assertFail();
        }
      }, 5000)
    });

    /*
    *@tc.number     : ArkUIHDS_Border_Radius_Test_0400
    *@tc.name       : ArkUIHDS_Border_Radius_Test_0400
    *@tc.desc       : test assembly border radius
    *@tc.size       : MediumTest
    *@tc.type       : Function
    *@tc.level      : Level 1
    */
    it('ArkUIHDS_Border_Radius_Test_0400', 0, async (done: Function) => {
      console.info('ArkUIHDS_Border_Radius_Test_0400 START');
      I18n.System.setSystemLanguage("zh-Hans");
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('ArkUIHDS_Border_Radius_Test_0400');
          console.info('ArkUIHDS_Border_Radius_Test_0400 START  :' + JSON.stringify(strJson));
          let obj: ESObject = JSON.parse(strJson);
          console.info("ArkUIHDS_Border_Radius_Test_0400 zh-Hans component obj.$attrs.border_radius is: " +
          JSON.stringify(obj.$attrs.borderRadius));
          expect(obj.$attrs.borderRadius.topLeft).assertEqual("20.00px");
          expect(obj.$attrs.borderRadius.topRight).assertEqual("0.00px");
          expect(obj.$attrs.borderRadius.bottomLeft).assertEqual("40.00fp");
          expect(obj.$attrs.borderRadius.bottomRight).assertEqual("0.00px");
          console.info('ArkUIHDS_Border_Radius_Test_0400 zh-Hans END ');
          I18n.System.setSystemLanguage("ar-EG");
          setTimeout(() => {
            try {
              let strJson = getInspectorByKey('ArkUIHDS_Border_Radius_Test_0400');
              console.info('ArkUIHDS_Border_Radius_Test_0400 START  :' + JSON.stringify(strJson));
              let obj: ESObject = JSON.parse(strJson);
              console.info("ArkUIHDS_Border_Radius_Test_0400 ar-EG component obj.$attrs.border_radius is: " +
              JSON.stringify(obj.$attrs.borderRadius));
              expect(obj.$attrs.borderRadius.topLeft).assertEqual("0.00px");
              expect(obj.$attrs.borderRadius.topRight).assertEqual("20.00px");
              expect(obj.$attrs.borderRadius.bottomLeft).assertEqual("0.00px");
              expect(obj.$attrs.borderRadius.bottomRight).assertEqual("40.00fp");
              console.info('ArkUIHDS_Border_Radius_Test_0400 ar-EG END ');
              done();
            } catch (err) {
              console.info('ArkUIHDS_Border_Radius_Test_0400 ar-EG ERR  ' + JSON.stringify(err));
              expect().assertFail();
            }
          }, 5000)
        } catch (err) {
          console.info('ArkUIHDS_Border_Radius_Test_0400 zh-Hans ERR ' + JSON.stringify(err));
          expect().assertFail();
        }
      }, 5000)
    });

    /*
    *@tc.number     : ArkUIHDS_Border_Radius_Test_0500
    *@tc.name       : ArkUIHDS_Border_Radius_Test_0500
    *@tc.desc       : test assembly border radius
    *@tc.size       : MediumTest
    *@tc.type       : Function
    *@tc.level      : Level 1
    */
    it('ArkUIHDS_Border_Radius_Test_0500', 0, async (done: Function) => {
      console.info('ArkUIHDS_Border_Radius_Test_0500 START');
      I18n.System.setSystemLanguage("zh-Hans");
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('ArkUIHDS_Border_Radius_Test_0500');
          console.info('ArkUIHDS_Border_Radius_Test_0500 START  :' + JSON.stringify(strJson));
          let obj: ESObject = JSON.parse(strJson);
          console.info("ArkUIHDS_Border_Radius_Test_0500 zh-Hans component obj.$attrs.border_radius is: " +
          JSON.stringify(obj.$attrs.borderRadius));
          expect(obj.$attrs.borderRadius.topLeft).assertEqual("0.00px");
          expect(obj.$attrs.borderRadius.topRight).assertEqual("30.00vp");
          expect(obj.$attrs.borderRadius.bottomLeft).assertEqual("40.00fp");
          expect(obj.$attrs.borderRadius.bottomRight).assertEqual("0.00px");
          console.info('ArkUIHDS_Border_Radius_Test_0500 zh-Hans END ');
          I18n.System.setSystemLanguage("ar-EG");
          setTimeout(() => {
            try {
              let strJson = getInspectorByKey('ArkUIHDS_Border_Radius_Test_0500');
              console.info('ArkUIHDS_Border_Radius_Test_0500 START  :' + JSON.stringify(strJson));
              let obj: ESObject = JSON.parse(strJson);
              console.info("ArkUIHDS_Border_Radius_Test_0500 ar-EG component obj.$attrs.border_radius is: " +
              JSON.stringify(obj.$attrs.borderRadius));
              expect(obj.$attrs.borderRadius.topLeft).assertEqual("30.00vp");
              expect(obj.$attrs.borderRadius.topRight).assertEqual("0.00px");
              expect(obj.$attrs.borderRadius.bottomLeft).assertEqual("0.00px");
              expect(obj.$attrs.borderRadius.bottomRight).assertEqual("40.00fp");
              console.info('ArkUIHDS_Border_Radius_Test_0500 ar-EG END ');
              done();
            } catch (err) {
              console.info('ArkUIHDS_Border_Radius_Test_0500 ar-EG ERR  ' + JSON.stringify(err));
              expect().assertFail();
            }
          }, 5000)
        } catch (err) {
          console.info('ArkUIHDS_Border_Radius_Test_0500 zh-Hans ERR ' + JSON.stringify(err));
          expect().assertFail();
        }
      }, 5000)
    });
  })
}