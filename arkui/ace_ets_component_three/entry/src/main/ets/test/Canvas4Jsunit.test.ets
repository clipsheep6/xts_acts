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

export default function canvas4Jsunit() {
  describe('canvas4Test', function () {
    beforeEach(async function (done) {
      console.info("canvas4 beforeEach start");
      let options = {
        uri: 'pages/canvas4',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get canvas4 state pages:" + JSON.stringify(pages));
        if (!("canvas4" == pages.name)) {
          console.info("get canvas4 state pages.name:" + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push canvas4 page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push canvas4 page error:" + err);
      }
      done()
    });

    afterEach(async function () {
      await Utils.sleep(1000);
      console.info("canvas4 after each called");
    });

    it('testCanvas01', 0, async function (done) {
      console.info('[testCanvas01] START');
      await Utils.sleep(2000);
      var result;
      var dataURL3 = globalThis.dataURL2;
      var dataURLstr3 = "data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAtAAAA+ICAYAAAA4XazGAAAABHNCSVQICAgIfAhkiAAAIABJREFUeJzs1kENwDAQwLDr+HPuKCyvaqqNIM/MAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"
      if (dataURL3 == dataURLstr3) {
        console.error("LANYI,the dataURL33333 is ",dataURL3);
        console.error("LANYI,the dataURLstr444444 is ",dataURLstr3);
        result = true;
      } else {
        console.info("LANYI,the1 dataURL3333333 is ",dataURL3);
        console.info("LANYI,the1 dataURLstr44444444 is ",dataURLstr3);
        result = false;
      }
      expect(result).assertEqual(true);
      console.info('testCanvas01 END');
      done();
    });
  });
}