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

export default function moveToJsunit() {
  describe('moveToTest', function () {
    beforeEach(async function (done) {
      console.info("moveTo beforeEach start");
      let options = {
        uri: 'pages/moveTo',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get moveTo state pages:" + JSON.stringify(pages));
        if (!("moveTo" == pages.name)) {
          console.info("get moveTo state pages.name:" + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push moveTo page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push moveTo page error:" + err);
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
      var dataURLstr3 = "data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAtAAAA+ICAYAAAA4XazGAAAABHNCSVQICAgIfAhkiAAAIABJREFUeJzs281xXFUURtHjOCTHIUEa2MQhcBrIxAF2Gv6JwxAHeCC6qod99uTxqtaa3Ok3PnX3DAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAwP/R49EDAADgTL7MzJ8zc3/0EAAAOIu3M/PXzLw/eggAAJzJLzPz738vAABwo/fzcpF+e/QQAAA4i/t5+Rv9ZYSGAABws8cRGgIAwJrQEAAAAqEhAAAEQkMAAFgSGgIAQCA0BACAQGgIAACB0BAAAAKhIQAALAkNAQAgEBoCAEAgNAQAgEBoCAAAgdAQAACWrkPDHw7eAgAAp/E4M59HaAgAACtCQwAACISGAAAQCA0BAGBJaAgAAIHQEAAAAqEhAAAEQkMAAAiEhgAAsCQ0BACAQGgIAACB0BAAAAKhIQAABEJDAABYEhoCAEAgNAQAgEBoCAAAwSU0/PXoIQAAcCbPIzQEAIAVoSEAAARCQwAACISGAAAQCA0BACAQGgIAwJLQEAAAAqEhAAAEQkMAAAiEhgAAEAgNAQBgSWgIAACB0BAAAAKhIQAABEJDAAAIhIYAALAkNAQAgOASGn4YoSEAANzszQgNAQBgTWgIAACB0BAAAJaEhgAAEAgNAQAgEBoCAEAgNAQAgEBoCAAAS0JDAAAIhIYAABAIDQEAIBAaAgBAIDQEAIAloSEAAARCQwAACISGAAAQCA0BACB4npm/R2gIAAA3uxuhIQAArAkNAQAgEBoCAEAgNAQAgEBoCAAAS0JDAAAIhIYAABAIDQEAIBAaAgBAIDQEAIAloSEAAARCQwAACISGAAAQCA0BACAQGgIAwJLQEAAAguvQ8PXBWwAA4DTezMy3ERoCAMCK0BAA"
      if (dataURL3 == dataURLstr3) {
        console.info("LANYI,the0 moveTo dataURL is ",dataURL3);
        console.info("LANYI,the0 moveTo dataURLstr is ",dataURLstr3);
        result = true;
      } else {
        console.info("LANYI,the1 moveTo dataURL is ",dataURL3);
        console.info("LANYI,the1 moveTo dataURLstr is ",dataURLstr3);
        result = false;
      }
      expect(result).assertEqual(true);
      console.info('testCanvas01 END');
      done();
    });
  });
}