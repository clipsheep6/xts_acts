// @ts-nocheck
/**
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "hypium/index";
import router from '@system.router';
import Utils from './Utils';

export default function lineWidthJsunit() {
  describe('lineWidthTest', function () {
    beforeEach(async function (done) {
      console.info("lineWidth beforeEach start");
      let options = {
        uri: 'pages/lineWidth',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get lineWidth state pages:" + JSON.stringify(pages));
        if (!("lineWidth" == pages.name)) {
          console.info("get lineWidth state pages.name:" + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push lineWidth page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push lineWidth page error:" + err);
      }
      done()
    });

    afterEach(async function () {
      await Utils.sleep(2000);
      console.info("Canvas after each called");
    });

    it('testCanvas01', 0, async function (done) {
      console.info('[testCanvas01] START');
      await Utils.sleep(2000);
      var result;
      var dataURL4 = globalThis.dataURL3;
      var dataURLstr3 = "data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAtAAAA+ICAYAAAA4XazGAAAABHNCSVQICAgIfAhkiAAAIABJREFUeJzs3EFRA1EQRdGGigCkRAKWUBJJEAeRMhLYJGtyF6k/Q52j4C3voqtnAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAWe1s94O5jZs6rR7BL28zcVo8AAHg4rR5wd56Z79Uj2KXrzHyuHgEA8PC+egAAAByJgAYAgEBAAwBAIKABACAQ0AAAEAhoAAAI9vLG7i9f4xfwf3YZf8ABgIM4SkDfZuZn9QheZls9AADgWU44AAAgENAAABAIaAAACAQ0AAAEAhoAAAIBDQAAgYAGAIBAQAMAQCCgAQAgENAAABAIaAAACAQ0AAAEAhoAAAIBDQAAgYAGAIBAQAMAQCCgAQAgENAAABAIaAAACAQ0AAAEAhoAAAIBDQAAgYAGAIBAQAMAQCCgAQAgENAAABAIaAAACAQ0AAAEAhoAAAIBDQAAgYAGAIBAQAMAQCCgAQAgENAAABAIaAAACAQ0AAAEAhoAAAIBDQAAgYAGAIBAQAMAQCCgAQAgENAAABAIaAAACAQ0AAAEAhoAAAIBDQAAgYAGAIBAQAMAQCCgAQAgENAAABAIaAAACAQ0AAAEAhoAAAIBDQAAgYAGAIBAQAMAQCCgAQAgENAAABAIaAAACAQ0AAAEAhoAAAIBDQAAgYAGAIBAQAMAQCCgAQAgENAAABAIaAAACAQ0AAAEAhoAAAIBDQAAgYAGAIBAQAMAQCCgAQAgENAAABAIaAAACAQ0AAAEAhoAAAIBDQAAgYAGAIBAQAMAQCCgAQAgENAAABAIaAAACAQ0AAAEAhoA"
      if (dataURL4 == dataURLstr3) {
        console.info("LANYI,the0 lineWidth dataURL is ",dataURL4);
        console.info("LANYI,the0 lineWidth dataURLstr is ",dataURLstr3);
        result = true;
      } else {
        console.info("LANYI,the1 lineWidth dataURL is ",dataURL4);
        console.info("LANYI,the1 lineWidth dataURLstr is ",dataURLstr3);
        result = false;
      }
      expect(result).assertEqual(true);
      console.info('testCanvas01 END');
      done();
    });
  });
}