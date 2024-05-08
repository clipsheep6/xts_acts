/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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
// @ts-nocheck
import { describe, beforeEach, afterEach, it, expect } from '@ohos/hypium'
import events_emitter from '@ohos.events.emitter';
import Utils from './Utils.ets';

let emitKey = "emitUserAgent";

export default function AlphabetIndexer() {
  describe('ActsAlphabetIndexerTest', function () {
    beforeEach(async function (done) {
      await Utils.sleep(2000);
      console.info("AlphabetIndexer beforeEach start");
      done();
    })

    afterEach(async function (done) {
      console.info("AlphabetIndexer afterEach start");
      try {
        var eventData = {
          data: {
            "popupItemBorderRadiusNum": '24.00vp',
            "itemBorderRadiusNum": 12,
            "popupBackgroundBlurStyleBlu": BlurStyle.Thin,
            "popupTitleBackgroundStr": '#FF0000FF',
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      done();
    })

    /**
    * @tc.number    ArkUI_AlphabetIndexer_3200
    * @tc.name      Test the alphabetIndexer of components
    * @tc.desc      Set popupItemBorderRadius values
    */
    it('ArkUI_AlphabetIndexer_3200', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_3200 start");
      let strJson = getInspectorByKey('alphabetIndexerTest8');
      console.log("[ArkUI_AlphabetIndexer_3200] strJson " + strJson)
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.popupItemBorderRadius).assertEqual("24.00vp");
      done();
    });

    /**
    * @tc.number    ArkUI_AlphabetIndexer_3300
    * @tc.name      Test the alphabetIndexer of components
    * @tc.desc      Set itemBorderRadius values
    */
    it('ArkUI_AlphabetIndexer_3300', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_3300 start");
      let strJson = getInspectorByKey('alphabetIndexerTest9');
      console.log("[ArkUI_AlphabetIndexer_3300] strJson " + strJson)
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.itemBorderRadius).assertEqual("12.00vp");
      done();
    });

    /**
    * @tc.number    ArkUI_AlphabetIndexer_3300
    * @tc.name      Test the alphabetIndexer of components
    * @tc.desc      Set popupBackgroundBlurStyle values
    */
    it('ArkUI_AlphabetIndexer_3400', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_3400 start");
      let strJson = getInspectorByKey('alphabetIndexerTest10');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.popupBackgroundBlurStyle).assertEqual('BlurStyle.Thin');
      done();
    });

    /**
   * @tc.number    ArkUI_AlphabetIndexer_3300
   * @tc.name      Test the alphabetIndexer of components
   * @tc.desc      Set popupTitleBackground values
   */
    it('ArkUI_AlphabetIndexer_3500', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_3500 start");
      let strJson = getInspectorByKey('alphabetIndexerTest11');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.popupTitleBackground).assertEqual('#FF0000FF');
      done();
    });

  })
}