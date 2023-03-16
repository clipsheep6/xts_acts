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

export default function fillRectJsunit() {
  describe('fillRectTest', function () {
    beforeEach(async function (done) {
      console.info("fillRect beforeEach start");
      let options = {
        uri: 'pages/fillRect',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get fillRect state pages:" + JSON.stringify(pages));
        if (!("fillRect" == pages.name)) {
          console.info("get fillRect state pages.name:" + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push fillRect page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push fillRect page error:" + err);
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
      var dataURLstr3 = "data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAtAAAA+ICAYAAAA4XazGAAAABHNCSVQICAgIfAhkiAAAIABJREFUeJzs1sENgEAMwLAe++8MM+SBKpA9QZ6ZAQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACAZWdm7u0IfulsBwAAvOHaDgAAgC8x0AAAEBhoAAAIDDQAAAQGGgAAAgMNAACBgQYAgMBAAwBAYKABACAw0AAAEBhoAAAIDDQAAAQGGgAAAgMNAACBgQYAgMBAAwBAYKABACAw0AAAEBhoAAAIDDQAAAQGGgAAAgMNAACBgQYAgMBAAwBAYKABACAw0AAAEBhoAAAIDDQAAAQGGgAAAgMNAACBgQYAgMBAAwBAYKABACAw0AAAEBhoAAAIDDQAAAQGGgAAAgMNAACBgQYAgMBAAwBAYKABACAw0AAAEBhoAAAIDDQAAAQGGgAAAgMNAACBgQYAgMBAAwBAYKABACAw0AAAEBhoAAAIDDQAAAQGGgAAAgMNAACBgQYAgMBAAwBAYKABACAw0AAAEBhoAAAIDDQAAAQGGgAAAgMNAACBgQYAgMBAAwBAYKABACAw0AAAEBhoAAAIDDQAAAQGGgAAAgMNAACBgQYAgMBAAwBAYKABACAw0AAAEBhoAAAIDDQAAAQGGgAAAgMNAACBgQYAgMBAAwBAYKABACAw0AAAEBhoAAAIDDQAAAQGGgAAAgMNAACBgQYAgMBAAwBAYKABACAw0AAAEBhoAAAIDDQAAAQGGgAAAgMNAACBgQYAgMBAAwBAYKABACAw0AAAEBhoAAAIDDQAAAQG"
      if (dataURL3 == dataURLstr3) {
        console.info("LANYI,the0 fillRect dataURL is ",dataURL3);
        console.info("LANYI,the0 fillRect dataURLstr is ",dataURLstr3);
        result = true;
      } else {
        console.info("LANYI,the1 fillRect dataURL is ",dataURL3);
        console.info("LANYI,the1 fillRect dataURLstr is ",dataURLstr3);
        result = false;
      }
      expect(result).assertEqual(true);
      console.info('testCanvas01 END');
      done();
    });
  });
}