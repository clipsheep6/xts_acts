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

export default function outline_color() {
  describe('ArkUIHDSOutline_ColorTest', () => {

    beforeAll(async (done: Function) => {
      let options: router.RouterOptions = {
        url: 'TestAbility/pages/outline_color',
      };
      try {
        router.clear();
        let pages = router.getState();
        console.info("get outline_color state success " + JSON.stringify(pages));
        if (!("outline_color" == pages.name)) {
          console.info("get outline_color state success " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          console.info("push outline_color page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push outline_color page error: " + err);
      }
      done();
    });

    /*
    *@tc.number     : ArkUIHDS_Outline_Color_Test_0100
    *@tc.name       : ArkUIHDS_Outline_Color_Test_0100
    *@tc.desc       : test assembly common outline_color
    *@tc.size       : MediumTest
    *@tc.type       : Function
    *@tc.level      : Level 1
    */
    it('ArkUIHDS_Outline_Color_Test_0100', 0, async (done: Function) => {
      console.info('ArkUIHDS_Outline_Color_Test_0100 START');
      I18n.System.setSystemLanguage("zh-Hans");
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('ArkUIHDS_Outline_Color_Test_0100');
          console.info('ArkUIHDS_Outline_Color_Test_0100 START  :' + JSON.stringify(strJson));
          let obj: ESObject = JSON.parse(strJson);
          console.info("ArkUIHDS_Outline_Color_Test_0100 zh-Hans component obj.$attrs.outline_color is: " +
          JSON.stringify(obj.$attrs.outlineColor));
          expect(obj.$attrs.outlineColor.left).assertEqual("#FFCAC609");
          expect(obj.$attrs.outlineColor.top).assertEqual("#FF0000FF");
          expect(obj.$attrs.outlineColor.right).assertEqual("#FF2E83E2");
          expect(obj.$attrs.outlineColor.bottom).assertEqual("#FFFF00B8");
          console.info('ArkUIHDS_Outline_Color_Test_0100 zh-Hans END ');
          I18n.System.setSystemLanguage("ar-EG");
          setTimeout(() => {
            try {
              let strJson = getInspectorByKey('ArkUIHDS_Outline_Color_Test_0100');
              console.info('ArkUIHDS_Outline_Color_Test_0100 START  :' + JSON.stringify(strJson));
              let obj: ESObject = JSON.parse(strJson);
              console.info("ArkUIHDS_Outline_Color_Test_0100 ar-EG component obj.$attrs.outline_color is: " +
              JSON.stringify(obj.$attrs.outlineColor));
              expect(obj.$attrs.outlineColor.left).assertEqual("#FF2E83E2");
              expect(obj.$attrs.outlineColor.top).assertEqual("#FF0000FF");
              expect(obj.$attrs.outlineColor.right).assertEqual("#FFCAC609");
              expect(obj.$attrs.outlineColor.bottom).assertEqual("#FFFF00B8");
              console.info('ArkUIHDS_Outline_Color_Test_0100 ar-EG END ');
              done();
            } catch (err) {
              console.info('ArkUIHDS_Outline_Color_Test_0100 ar-EG ERR  ' + JSON.stringify(err));
              expect().assertFail();
            }
          }, 5000)
        } catch (err) {
          console.info('ArkUIHDS_Outline_Color_Test_0100 zh-Hans ERR ' + JSON.stringify(err));
          expect().assertFail();
        }
      }, 5000)
    });

    /*
     *@tc.number     : ArkUIHDS_Outline_Color_Test_0200
     *@tc.name       : ArkUIHDS_Outline_Color_Test_0200
     *@tc.desc       : test assembly common outline_color
     *@tc.size       : MediumTest
     *@tc.type       : Function
     *@tc.level      : Level 1
     */
    it('ArkUIHDS_Outline_Color_Test_0200', 0, async (done: Function) => {
      console.info('ArkUIHDS_Outline_Color_Test_0200 START');
      I18n.System.setSystemLanguage("zh-Hans");
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('ArkUIHDS_Outline_Color_Test_0200');
          console.info('ArkUIHDS_Outline_Color_Test_0200 START  :' + JSON.stringify(strJson));
          let obj: ESObject = JSON.parse(strJson);
          console.info("ArkUIHDS_Outline_Color_Test_0200 zh-Hans component obj.$attrs.outline_color is: " +
          JSON.stringify(obj.$attrs.outlineColor));
          expect(obj.$attrs.outlineColor.left).assertEqual("#FF000000");
          expect(obj.$attrs.outlineColor.top).assertEqual("#FFFFFFFE");
          expect(obj.$attrs.outlineColor.right).assertEqual("#FF000000");
          expect(obj.$attrs.outlineColor.bottom).assertEqual("#FF000000");
          console.info('ArkUIHDS_Outline_Color_Test_0200 zh-Hans END ');
          I18n.System.setSystemLanguage("ar-EG");
          setTimeout(() => {
            try {
              strJson = getInspectorByKey('ArkUIHDS_Outline_Color_Test_0200');
              console.info('ArkUIHDS_Outline_Color_Test_0200 START  :' + JSON.stringify(strJson));
              obj = JSON.parse(strJson);
              console.info("ArkUIHDS_Outline_Color_Test_0200 ar-EG component obj.$attrs.outline_color is: " +
              JSON.stringify(obj.$attrs.outlineColor));
              expect(obj.$attrs.outlineColor.left).assertEqual("#FF000000");
              expect(obj.$attrs.outlineColor.top).assertEqual("#FFFFFFFE");
              expect(obj.$attrs.outlineColor.right).assertEqual("#FF000000");
              expect(obj.$attrs.outlineColor.bottom).assertEqual("#FF000000");
              console.info('ArkUIHDS_Outline_Color_Test_0200 ar-EG END ');
              done();
            } catch (err) {
              console.info('ArkUIHDS_Outline_Color_Test_0200 ar-EG ERR  ' + JSON.stringify(err));
              expect().assertFail();
            }
            done();
          }, 5000)
        } catch (err) {
          console.info('ArkUIHDS_Outline_Color_Test_0200 zh-Hans ERR ' + JSON.stringify(err));
          expect().assertFail();
        }
      }, 5000)
    });

    /*
     *@tc.number     : ArkUIHDS_Outline_Color_Test_0300
     *@tc.name       : ArkUIHDS_Outline_Color_Test_0300
     *@tc.desc       : test assembly common outline_color
     *@tc.size       : MediumTest
     *@tc.type       : Function
     *@tc.level      : Level 1
     */
    it('ArkUIHDS_Outline_Color_Test_0300', 0, async (done: Function) => {
      console.info('ArkUIHDS_Outline_Color_Test_0300 START');
      I18n.System.setSystemLanguage("zh-Hans");
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('ArkUIHDS_Outline_Color_Test_0300');
          console.info('ArkUIHDS_Outline_Color_Test_0300 START  :' + JSON.stringify(strJson));
          let obj: ESObject = JSON.parse(strJson);
          console.info("ArkUIHDS_Outline_Color_Test_0300 zh-Hans component obj.$attrs.outline_color is: " +
          JSON.stringify(obj.$attrs.outlineColor));
          expect(obj.$attrs.outlineColor.left).assertEqual("#FFFFC0CB");
          expect(obj.$attrs.outlineColor.top).assertEqual("#FF000000");
          expect(obj.$attrs.outlineColor.right).assertEqual("#FF0000FF");
          expect(obj.$attrs.outlineColor.bottom).assertEqual("#FF000000");
          console.info('ArkUIHDS_Outline_Color_Test_0300 zh-Hans END ');
          I18n.System.setSystemLanguage("ar-EG");
          setTimeout(() => {
            try {
              strJson = getInspectorByKey('ArkUIHDS_Outline_Color_Test_0300');
              console.info('ArkUIHDS_Outline_Color_Test_0300 START  :' + JSON.stringify(strJson));
              obj = JSON.parse(strJson);
              console.info("ArkUIHDS_Outline_Color_Test_0300 ar-EG component obj.$attrs.outline_color is: " +
              JSON.stringify(obj.$attrs.outlineColor));
              expect(obj.$attrs.outlineColor.left).assertEqual("#FF0000FF");
              expect(obj.$attrs.outlineColor.top).assertEqual("#FF000000");
              expect(obj.$attrs.outlineColor.right).assertEqual("#FFFFC0CB");
              expect(obj.$attrs.outlineColor.bottom).assertEqual("#FF000000");
              console.info('ArkUIHDS_Outline_Color_Test_0300 ar-EG END ');
              done();
            } catch (err) {
              console.info('ArkUIHDS_Outline_Color_Test_0300 ar-EG ERR  ' + JSON.stringify(err));
              expect().assertFail();
            }
          }, 5000)
        } catch (err) {
          console.info('ArkUIHDS_Outline_Color_Test_0300 zh-Hans ERR ' + JSON.stringify(err));
          expect().assertFail();
        }
      }, 5000)
    });

    /*
     *@tc.number     : ArkUIHDS_Outline_Color_Test_0400
     *@tc.name       : ArkUIHDS_Outline_Color_Test_0400
     *@tc.desc       : test assembly common outline_color
     *@tc.size       : MediumTest
     *@tc.type       : Function
     *@tc.level      : Level 1
     */
    it('ArkUIHDS_Outline_Color_Test_0400', 0, async (done: Function) => {
      console.info('ArkUIHDS_Outline_Color_Test_0400 START');
      I18n.System.setSystemLanguage("zh-Hans");
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('ArkUIHDS_Outline_Color_Test_0400');
          console.info('ArkUIHDS_Outline_Color_Test_0400 START  :' + JSON.stringify(strJson));
          let obj: ESObject = JSON.parse(strJson);
          console.info("ArkUIHDS_Outline_Color_Test_0400 zh-Hans component obj.$attrs.outline_color is: " +
          JSON.stringify(obj.$attrs.outlineColor));
          expect(obj.$attrs.outlineColor.left).assertEqual("#FF000000");
          expect(obj.$attrs.outlineColor.top).assertEqual("#FF0000FF");
          expect(obj.$attrs.outlineColor.right).assertEqual("#FF000000");
          expect(obj.$attrs.outlineColor.bottom).assertEqual("#FFFFC0CB");
          console.info('ArkUIHDS_Outline_Color_Test_0400 zh-Hans END ');
          I18n.System.setSystemLanguage("ar-EG");
          setTimeout(() => {
            try {
              strJson = getInspectorByKey('ArkUIHDS_Outline_Color_Test_0400');
              console.info('ArkUIHDS_Outline_Color_Test_0400 START  :' + JSON.stringify(strJson));
              obj = JSON.parse(strJson);
              console.info("ArkUIHDS_Outline_Color_Test_0400 ar-EG component obj.$attrs.outline_color is: " +
              JSON.stringify(obj.$attrs.outlineColor));
              expect(obj.$attrs.outlineColor.left).assertEqual("#FF000000");
              expect(obj.$attrs.outlineColor.top).assertEqual("#FF0000FF");
              expect(obj.$attrs.outlineColor.right).assertEqual("#FF000000");
              expect(obj.$attrs.outlineColor.bottom).assertEqual("#FFFFC0CB");
              console.info('ArkUIHDS_Outline_Color_Test_0400 ar-EG END ');
              done();
            } catch (err) {
              console.info('ArkUIHDS_Outline_Color_Test_0400 ar-EG ERR  ' + JSON.stringify(err));
              expect().assertFail();
            }
          }, 5000)
        } catch (err) {
          console.info('ArkUIHDS_Outline_Color_Test_0400 zh-Hans ERR ' + JSON.stringify(err));
          expect().assertFail();
        }
      }, 5000)
    });

    /*
     *@tc.number     : ArkUIHDS_Outline_Color_Test_0500
     *@tc.name       : ArkUIHDS_Outline_Color_Test_0500
     *@tc.desc       : test assembly common outline_color
     *@tc.size       : MediumTest
     *@tc.type       : Function
     *@tc.level      : Level 1
     */
    it('ArkUIHDS_Outline_Color_Test_0500', 0, async (done: Function) => {
      console.info('ArkUIHDS_Outline_Color_Test_0500 START');
      I18n.System.setSystemLanguage("zh-Hans");
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('ArkUIHDS_Outline_Color_Test_0500');
          console.info('ArkUIHDS_Outline_Color_Test_0500 START  :' + JSON.stringify(strJson));
          let obj: ESObject = JSON.parse(strJson);
          console.info("ArkUIHDS_Outline_Color_Test_0500 zh-Hans component obj.$attrs.outline_color is: " +
          JSON.stringify(obj.$attrs.outlineColor));
          expect(obj.$attrs.outlineColor.left).assertEqual("#FF0000FF");
          expect(obj.$attrs.outlineColor.top).assertEqual("#FFFFC0CB");
          expect(obj.$attrs.outlineColor.right).assertEqual("#FF000000");
          expect(obj.$attrs.outlineColor.bottom).assertEqual("#FF000000");
          console.info('ArkUIHDS_Outline_Color_Test_0500 zh-Hans END ');
          I18n.System.setSystemLanguage("ar-EG");
          setTimeout(() => {
            try {
              strJson = getInspectorByKey('ArkUIHDS_Outline_Color_Test_0500');
              console.info('ArkUIHDS_Outline_Color_Test_0500 START  :' + JSON.stringify(strJson));
              obj = JSON.parse(strJson);
              console.info("ArkUIHDS_Outline_Color_Test_0500 ar-EG component obj.$attrs.outline_color is: " +
              JSON.stringify(obj.$attrs.outlineColor));
              expect(obj.$attrs.outlineColor.left).assertEqual("#FF000000");
              expect(obj.$attrs.outlineColor.top).assertEqual("#FFFFC0CB");
              expect(obj.$attrs.outlineColor.right).assertEqual("#FF0000FF");
              expect(obj.$attrs.outlineColor.bottom).assertEqual("#FF000000");
              console.info('ArkUIHDS_Outline_Color_Test_0500 ar-EG END ');
              done();
            } catch (err) {
              console.info('ArkUIHDS_Outline_Color_Test_0500 ar-EG ERR  ' + JSON.stringify(err));
              expect().assertFail();
            }
          }, 5000)
        } catch (err) {
          console.info('ArkUIHDS_Outline_Color_Test_0500 zh-Hans ERR ' + JSON.stringify(err));
          expect().assertFail();
        }
      }, 5000)
    });
  })
}