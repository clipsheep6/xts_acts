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

export default function strokeRectJsunit() {
  describe('strokeRectTest', function () {
    beforeEach(async function (done) {
      console.info("strokeRect beforeEach start");
      let options = {
        uri: 'pages/strokeRect',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get strokeRect state pages:" + JSON.stringify(pages));
        if (!("strokeRect" == pages.name)) {
          console.info("get strokeRect state pages.name:" + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push strokeRect page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push strokeRect page error:" + err);
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
      var dataURL3 = globalThis.dataURL2;
      var dataURLstr3 = "data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAtAAAA+ICAYAAAA4XazGAAAABHNCSVQICAgIfAhkiAAAIABJREFUeJzs2UFqw0AUBcHv4HvZN3OOJt8sG0F2cVokDDJVMGj7VkOjmQEAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAP7DZfWAA+77ATiDbT8AvImP1QMOuI+ABs7hNu4rgLdzXT3goG1mPhdvAHjlMed86QPgB2f8Aw0AAMsIaAAACAQ0AAAEAhoAAAIBDQAAgYAGAIBAQAMAQCCgAQAgENAAABAIaAAACAQ0AAAEAhoAAAIBDQAAgYAGAIBAQAMAQCCgAQAgENAAABAIaAAACAQ0AAAEAhoAAAIBDQAAgYAGAIBAQAMAQCCgAQAgENAAABAIaAAACAQ0AAAEAhoAAAIBDQAAgYAGAIBAQAMAQCCgAQAgENAAABAIaAAACAQ0AAAEAhoAAAIBDQAAgYAGAIBAQAMAQCCgAQAgENAAABAIaAAACAQ0AAAEAhoAAAIBDQAAgYAGAIBAQAMAQCCgAQAgENAAABAIaAAACAQ0AAAEAhoAAAIBDQAAgYAGAIBAQAMAQCCgAQAgENAAABAIaAAACAQ0AAAEAhoAAAIBDQAAgYAGAIBAQAMAQCCgAQAgENAAABAIaAAACAQ0AAAEAhoAAAIBDQAAgYAGAIBAQAMAQCCgAQAgENAAABAIaAAACAQ0AAAEAhoAAAIBDQAAgYAGAIBAQAMAQCCgAQAgENAAABAIaAAACAQ0AAAEAhoAAAIBDQAAgYAGAIBAQAMAQCCgAQAgENAAABAIaAAACAQ0"
      if (dataURL3 == dataURLstr3) {
        console.info("LANYI,the0 strokeRect dataURL is ",dataURL3);
        console.info("LANYI,the0 strokeRect dataURLstr is ",dataURLstr3);
        result = true;
      } else {
        console.info("LANYI,the1 strokeRect dataURL is ",dataURL3);
        console.info("LANYI,the1 strokeRect dataURLstr is ",dataURLstr3);
        result = false;
      }
      expect(result).assertEqual(true);
      console.info('testCanvas01 END');
      done();
    });
  });
}