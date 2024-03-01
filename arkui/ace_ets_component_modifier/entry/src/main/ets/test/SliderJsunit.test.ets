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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"
import { UiDriver, UiComponent, BY, Driver, Component, ON } from '@ohos.UiTest'
import events_emitter from '@ohos.events.emitter';
import Utils from './Utils';
import router from '@system.router';

export default function sliderTest() {
    describe('sliderJsunit', function () {
      beforeEach(async function (done) {
        console.info("sliderJsunit beforeEach start");
        let options = {
          uri: 'MainAbility/pages/slider',
        }
        let result;
        try {
          router.clear();
          let pages = router.getState();
          console.info("get slider state pages: " + JSON.stringify(pages));
          if (!("slider" == pages.name)) {
            console.info("get slider state pages.name: " + JSON.stringify(pages.name));
            result = await router.push(options);
            await Utils.sleep(2000);
            console.info("push slider page result: " + JSON.stringify(result));
          }
        } catch (err) {
          console.error("push slider page error: " + err);
        }
        done()
      })

    /**
     * @tc.number ArkUX_Stage_Slider_blockBorderColor_0100
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Slider_blockBorderColor_0100', 0, async function (done) {
      console.info('[ArkUX_Stage_Slider_blockBorderColor_0100] START');
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('ArkUX_Stage_Slider_blockBorderColor_0100');
          let obj = JSON.parse(strJson);
          console.info("----ArkUX_Stage_blockBorderColor_0100 is" + JSON.stringify(obj.$attrs.blockBorderColor));
          expect(obj.$attrs.blockBorderColor).assertEqual("#FFFFA500");
          done();
        } catch (err) {
          expect().assertFail();
          console.info('ArkUX_Stage_Slider_blockBorderColor_0100 ERROR: ' + JSON.stringify(err));
          done();
        }
      }, 500)
    })

    /**
     * @tc.number ArkUX_Stage_Slider_blockBorderWidth_0100
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Slider_blockBorderWidth_0100', 0, async function (done) {
      console.info('[ArkUX_Stage_Slider_blockBorderWidth_0100] START');
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('ArkUX_Stage_Slider_blockBorderWidth_0100');
          let obj = JSON.parse(strJson);
          console.info("----ArkUX_Stage_Slider_blockBorderWidth_0100 is" + JSON.stringify(obj.$attrs.blockBorderWidth));
          expect(obj.$attrs.blockBorderWidth).assertEqual("5.00vp");
          done();
        } catch (err) {
          expect().assertFail();
          console.info('ArkUX_Stage_Slider_blockBorderWidth_1100 ERROR: ' + JSON.stringify(err));
          done();
        }
      }, 500)
    })

    /**
     * @tc.number ArkUX_Stage_Slider_stepColor_0100
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Slider_stepColor_0100', 0, async function (done) {
      console.info('[ArkUX_Stage_Slider_stepColor_0100] START');
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('ArkUX_Stage_Slider_stepColor_0100');
          let obj = JSON.parse(strJson);
          console.info("----ArkUX_Stage_Slider_stepColor_0100 is" + JSON.stringify(obj.$attrs.stepColor));
          expect(obj.$attrs.stepColor).assertEqual("#FFFFA500");
          done();
        } catch (err) {
          expect().assertFail();
          console.info('ArkUX_Stage_Slider_stepColor_0100 ERROR: ' + JSON.stringify(err));
          done();
        }
      }, 500)
    })

    /**
     * @tc.number ArkUX_Stage_Slider_trackBorderRadius_0100
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Slider_trackBorderRadius_0100', 0, async function (done) {
      console.info('[ArkUX_Stage_Slider_trackBorderRadius_0100] START');
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('ArkUX_Stage_Slider_trackBorderRadius_0100');
          let obj = JSON.parse(strJson);
          console.info("----ArkUX_Stage_Slider_trackBorderRadius_0100 is" + JSON.stringify(obj.$attrs.trackBorderRadius));
          expect(obj.$attrs.trackBorderRadius).assertEqual("0.00vp");
          done();
        } catch (err) {
          expect().assertFail();
          console.info('ArkUX_Stage_Slider_trackBorderRadius_0100 ERROR: ' + JSON.stringify(err));
          done();
        }
      }, 500)
    })

    /**
     * @tc.number ArkUX_Stage_Slider_blockSize_0100
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Slider_blockSize_0100', 0, async function (done) {
      console.info('[ArkUX_Stage_Slider_blockSize_0100] START');
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('ArkUX_Stage_Slider_blockSize_0100');
          let obj = JSON.parse(strJson);
          console.info("----ArkUX_Stage_Slider_blockSize_0100  is " + JSON.stringify(obj.$attrs.blockSize));
          let width = obj.$attrs.blockSize.width ;
          let height = obj.$attrs.blockSize.height ;
          expect(parseFloat(width)).assertEqual(12);
          expect(parseFloat(height)).assertEqual(12);
          expect(width.substr(width.length-2, 2)).assertEqual("vp");
          expect(height.substr(height.length-2, 2)).assertEqual("vp");
          done();
        } catch (err) {
          expect().assertFail();
          console.info('ArkUX_Stage_Slider_blockSize_0100 ERROR: ' + JSON.stringify(err));
          done();
        }
      }, 500)
    })

    /**
     * @tc.number ArkUX_Stage_Slider_stepSize_0100
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Slider_stepSize_0100', 0, async function (done) {
      console.info('[ArkUX_Stage_Slider_stepSize_0100] START');
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('ArkUX_Stage_Slider_stepSize_0100');
          let obj = JSON.parse(strJson);
          console.info("----ArkUX_Stage_Slider_stepSize_0100 is" + JSON.stringify(obj.$attrs.stepSize));
          expect(obj.$attrs.stepSize).assertEqual("0.00vp");
          done();
        } catch (err) {
          console.info('ArkUX_Stage_Slider_stepSize_0100 ERROR: ' + JSON.stringify(err));
          done();
        }
      }, 500)
    })

    /**
     * @tc.number ArkUX_Stage_Slider_blockStyle_0100
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Slider_blockStyle_0100', 0, async function (done) {
      console.info('[ArkUX_Stage_Slider_blockStyle_0100] START');
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('ArkUX_Stage_Slider_blockStyle_0100');
          let obj = JSON.parse(strJson);
          console.info("----ArkUX_Stage_Slider_blockStyle_0100 is" + JSON.stringify(obj.$attrs.blockType));
          expect(obj.$attrs.blockType).assertEqual("BlockStyleType.DEFAULT");
          done();
        } catch (err) {
          expect().assertFail();
          console.info('ArkUX_Stage_Slider_blockStyle_0100  ERROR: ' + JSON.stringify(err));
          done();
        }
      }, 500)
    })

    /**
     * @tc.number ArkUX_Stage_Slider_blockColor_0100
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Slider_blockColor_0100', 0, async function (done) {
      console.info('[ArkUX_Stage_Slider_blockColor_0100] START');
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('ArkUX_Stage_Slider_blockColor_0100');
          let obj = JSON.parse(strJson);
          console.info("----ArkUX_Stage_Slider_blockColor_0100 is" + JSON.stringify(obj.$attrs.blockColor));
          expect(obj.$attrs.blockColor).assertEqual("#FF0000FF");
          done();
        } catch (err) {
          expect().assertFail();
          console.info('ArkUX_Stage_Slider_blockColor_0100  ERROR: ' + JSON.stringify(err));
          done();
        }
      }, 500)
    })

    /**
     * @tc.number ArkUX_Stage_Slider_trackColor_0100
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Slider_trackColor_0100', 0, async function (done) {
      console.info('[ArkUX_Stage_Slider_trackColor_0100] START');
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('ArkUX_Stage_Slider_trackColor_0100');
          let obj = JSON.parse(strJson);
          console.info("----ArkUX_Stage_Slider_trackColor_0100 is" + JSON.stringify(obj.$attrs.trackColor));
          expect(obj.$attrs.trackColor).assertEqual("#FF808080");
          done();
        } catch (err) {
          expect().assertFail();
          console.info('ArkUX_Stage_Slider_trackColor_0100  ERROR: ' + JSON.stringify(err));
          done();
        }
      }, 500)
    })

    /**
     * @tc.number ArkUX_Stage_Slider_selectedColor_0100
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Slider_selectedColor_0100', 0, async function (done) {
      console.info('[ArkUX_Stage_Slider_selectedColor_0100] START');
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('ArkUX_Stage_Slider_selectedColor_0100');
          let obj = JSON.parse(strJson);
          console.info("----ArkUX_Stage_Slider_selectedColor_0100 is" + JSON.stringify(obj.$attrs.selectedColor));
          expect(obj.$attrs.selectedColor).assertEqual("#FF0000FF");
          done();
        } catch (err) {
          expect().assertFail();
          console.info('ArkUX_Stage_Slider_selectedColor_0100  ERROR: ' + JSON.stringify(err));
          done();
        }
      }, 500)
    })

    /**
     * @tc.number ArkUX_Stage_Slider_showSteps_0100
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Slider_showSteps_0100', 0, async function (done) {
      console.info('[ArkUX_Stage_Slider_showSteps_0100] START');
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('ArkUX_Stage_Slider_showSteps_0100');
          let obj = JSON.parse(strJson);
          console.info("----ArkUX_Stage_Slider_showSteps_0100 is" + JSON.stringify(obj.$attrs.showSteps));
          expect(obj.$attrs.showSteps).assertEqual("true");
          done();
        } catch (err) {
          expect().assertFail();
          console.info('ArkUX_Stage_Slider_showSteps_0100  ERROR: ' + JSON.stringify(err));
          done();
        }
      }, 500)
    })

    /**
     * @tc.number ArkUX_Stage_Slider_showTips_0100
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Slider_showTips_0100', 0, async function (done) {
      console.info('[ArkUX_Stage_Slider_showTips_0100] START');
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('ArkUX_Stage_Slider_showTips_0100');
          let obj = JSON.parse(strJson);
          console.info("----ArkUX_Stage_Slider_showTips_0100 is" + JSON.stringify(obj.$attrs.showTips));
          expect(obj.$attrs.showTips).assertEqual("true");
          done();
        } catch (err) {
          expect().assertFail();
          console.info('ArkUX_Stage_Slider_showTips_0100  ERROR: ' + JSON.stringify(err));
          done();
        }
      }, 500)
    })

    /**
     * @tc.number ArkUX_Stage_Slider_trackThickness_0100
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Slider_trackThickness_0100', 0, async function (done) {
      console.info('[ArkUX_Stage_Slider_trackThickness_0100] START');
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('ArkUX_Stage_Slider_trackThickness_0100');
          let obj = JSON.parse(strJson);
          console.info("----ArkUX_Stage_Slider_trackThickness_0100 is" + JSON.stringify(obj.$attrs.trackThickness));
          expect(obj.$attrs.trackThickness).assertEqual("1.00vp");
          done();
        } catch (err) {
          expect().assertFail();
          console.info('ArkUX_Stage_Slider_trackThickness_0100  ERROR: ' + JSON.stringify(err));
          done();
        }
      }, 500)
    })

    /**
     * @tc.number ArkUX_Stage_Slider_trackThickness_0110
     * @tc.name   Test the properties of components
     * @tc.desc   Change attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Slider_trackThickness_0110', 0, async function (done) {
      
      console.info('ArkUX_Stage_Slider_trackThickness_0110 START');
      let driver = Driver.create();
      let button = await driver.findComponent(ON.id('changeButton'));
      await button.click();
      await Utils.sleep(2000)

      let strJsonNew = getInspectorByKey('slider');
      let objNew = JSON.parse(strJsonNew);
      console.info("ArkUX_Stage_Slider_trackThickness_0110 component is: " + JSON.stringify(objNew.$attrs));
      
      expect(objNew.$attrs.stepSize).assertEqual("1.00vp");
      console.info('ArkUX_Stage_Slider_trackThickness_0110 END');
      done();
    });

    /**
     * @tc.number ArkUX_Stage_Slider_trackThickness_011
     * @tc.name   Test the properties of components
     * @tc.desc   Change attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Slider_trackThickness_011', 0, async function (done) {
      
      console.info('ArkUX_Stage_Slider_trackThickness_011 START');
      let strJsonNew = getInspectorByKey('slider');
      let objNew = JSON.parse(strJsonNew);
      console.info("ArkUX_Stage_Slider_trackThickness_011 component is: " + JSON.stringify(objNew.$attrs));
      
      expect(objNew.$attrs.stepColor).assertEqual("#FFFF0000");
      console.info('ArkUX_Stage_Slider_trackThickness_011 END');
      done();
    });

    /**
     * @tc.number ArkUX_Stage_Slider_trackThickness_012
     * @tc.name   Test the properties of components
     * @tc.desc   Change attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Slider_trackThickness_012', 0, async function (done) {
      
      console.info('ArkUX_Stage_Slider_trackThickness_012 START');
      let strJsonNew = getInspectorByKey('slider');
      let objNew = JSON.parse(strJsonNew);
      console.info("ArkUX_Stage_Slider_trackThickness_012 component is: " + JSON.stringify(objNew.$attrs));
      
      expect(objNew.$attrs.blockBorderWidth).assertEqual("50.00vp");
      console.info('ArkUX_Stage_Slider_trackThickness_012 END');
      done();
    });

    /**
     * @tc.number ArkUX_Stage_Slider_trackThickness_013
     * @tc.name   Test the properties of components
     * @tc.desc   Change attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Slider_trackThickness_013', 0, async function (done) {
      
      console.info('ArkUX_Stage_Slider_trackThickness_013 START');
      let strJsonNew = getInspectorByKey('slider');
      let objNew = JSON.parse(strJsonNew);
      console.info("ArkUX_Stage_Slider_trackThickness_013 component is: " + JSON.stringify(objNew.$attrs));
      
      expect(objNew.$attrs.trackBorderRadius).assertEqual("30.00vp");
      console.info('ArkUX_Stage_Slider_trackThickness_013 END');
      done();
    });

    /**
     * @tc.number ArkUX_Stage_Slider_trackThickness_014
     * @tc.name   Test the properties of components
     * @tc.desc   Change attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Slider_trackThickness_014', 0, async function (done) {
      
      console.info('ArkUX_Stage_Slider_trackThickness_014 START');
      let strJsonNew = getInspectorByKey('slider');
      let objNew = JSON.parse(strJsonNew);
      console.info("ArkUX_Stage_Slider_trackThickness_014 component is: " + JSON.stringify(objNew.$attrs));
      
      expect(objNew.$attrs.showTips).assertEqual("true");
      console.info('ArkUX_Stage_Slider_trackThickness_014 END');
      done();
    });

    /**
     * @tc.number ArkUX_Stage_Slider_trackThickness_015
     * @tc.name   Test the properties of components
     * @tc.desc   Change attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Slider_trackThickness_015', 0, async function (done) {
      
      console.info('ArkUX_Stage_Slider_trackThickness_015 START');
      let strJsonNew = getInspectorByKey('slider');
      let objNew = JSON.parse(strJsonNew);
      console.info("ArkUX_Stage_Slider_trackThickness_015 component is: " + JSON.stringify(objNew.$attrs));
      
      expect(objNew.$attrs.blockBorderColor).assertEqual("#FFFF0000");
      console.info('ArkUX_Stage_Slider_trackThickness_015 END');
      done();
    });

    /**
     * @tc.number ArkUX_Stage_Slider_trackThickness_017
     * @tc.name   Test the properties of components
     * @tc.desc   Change attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Slider_trackThickness_017', 0, async function (done) {
      
      console.info('ArkUX_Stage_Slider_trackThickness_017 START');
      let strJsonNew = getInspectorByKey('slider');
      let objNew = JSON.parse(strJsonNew);
      console.info("ArkUX_Stage_Slider_trackThickness_017 component is: " + JSON.stringify(objNew.$attrs));
      
      expect(objNew.$attrs.blockSize?.width).assertEqual('10.00px');
      expect(objNew.$attrs.blockSize?.height).assertEqual('10.00px');
      console.info('ArkUX_Stage_Slider_trackThickness_017 END');
      done();
    });

    /**
     * @tc.number ArkUX_Stage_Slider_trackThickness_018
     * @tc.name   Test the properties of components
     * @tc.desc   Change attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Slider_trackThickness_018', 0, async function (done) {
      
      console.info('ArkUX_Stage_Slider_trackThickness_018 START');
      let strJsonNew = getInspectorByKey('slider');
      let objNew = JSON.parse(strJsonNew);
      console.info("ArkUX_Stage_Slider_trackThickness_018 component is: " + JSON.stringify(objNew.$attrs));
      
      expect(objNew.$attrs.blockColor).assertEqual("#FFFF0000");
      console.info('ArkUX_Stage_Slider_trackThickness_018 END');
      done();
    });

    /**
     * @tc.number ArkUX_Stage_Slider_trackThickness_019
     * @tc.name   Test the properties of components
     * @tc.desc   Change attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Slider_trackThickness_019', 0, async function (done) {
      
      console.info('ArkUX_Stage_Slider_trackThickness_019 START');
      let strJsonNew = getInspectorByKey('slider');
      let objNew = JSON.parse(strJsonNew);
      console.info("ArkUX_Stage_Slider_trackThickness_019 component is: " + JSON.stringify(objNew.$attrs));
      
      expect(objNew.$attrs.trackColor).assertEqual("#FFFF0000");
      console.info('ArkUX_Stage_Slider_trackThickness_019 END');
      done();
    });

    /**
     * @tc.number ArkUX_Stage_Slider_trackThickness_020
     * @tc.name   Test the properties of components
     * @tc.desc   Change attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Slider_trackThickness_020', 0, async function (done) {
      
      console.info('ArkUX_Stage_Slider_trackThickness_020 START');
      let strJsonNew = getInspectorByKey('slider');
      let objNew = JSON.parse(strJsonNew);
      console.info("ArkUX_Stage_Slider_trackThickness_020 component is: " + JSON.stringify(objNew.$attrs));
      
      expect(objNew.$attrs.selectedColor).assertEqual("#FFFF0000");
      console.info('ArkUX_Stage_Slider_trackThickness_020 END');
      done();
    });

    /**
     * @tc.number ArkUX_Stage_Slider_trackThickness_021
     * @tc.name   Test the properties of components
     * @tc.desc   Change attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Slider_trackThickness_021', 0, async function (done) {
      
      console.info('ArkUX_Stage_Slider_trackThickness_021 START');
      let strJsonNew = getInspectorByKey('slider');
      let objNew = JSON.parse(strJsonNew);
      console.info("ArkUX_Stage_Slider_trackThickness_021 component is: " + JSON.stringify(objNew.$attrs));
      
      expect(objNew.$attrs.showSteps).assertEqual("false");
      console.info('ArkUX_Stage_Slider_trackThickness_021 END');
      done();
    });

    /**
     * @tc.number ArkUX_Stage_Slider_trackThickness_022
     * @tc.name   Test the properties of components
     * @tc.desc   Change attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Slider_trackThickness_022', 0, async function (done) {
      
      console.info('ArkUX_Stage_Slider_trackThickness_022 START');
      let strJsonNew = getInspectorByKey('slider');
      let objNew = JSON.parse(strJsonNew);
      console.info("ArkUX_Stage_Slider_trackThickness_022 component is: " + JSON.stringify(objNew.$attrs));
      
      expect(objNew.$attrs.trackThickness).assertEqual('2.00px');
      console.info('ArkUX_Stage_Slider_trackThickness_022 END');
      done();
    });
  })
}
