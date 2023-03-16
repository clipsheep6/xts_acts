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

export default function arcJsunit() {
  describe('arcTest', function () {
    beforeEach(async function (done) {
      console.info("arc beforeEach start");
      let options = {
        uri: 'pages/arc',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get arc state pages:" + JSON.stringify(pages));
        if (!("arc" == pages.name)) {
          console.info("get arc state pages.name:" + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push arc page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push arc page error:" + err);
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
      var dataURLstr3 = "data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAtAAAA+ICAYAAAA4XazGAAAABHNCSVQICAgIfAhkiAAAIABJREFUeJzs3XuwrWVdwPEvIHgBvOENZBRFjmipgxcU1DygaGLZJKkYTU3O1FRjTlHaqKVdHGe00DG7jM7U1CRdvM1UoqBy0YG8k2YiHBFMA6XAG96Q1P54DyJ60L33Wfs8613785l5Z/2357v2rD9++9nPep4CAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAYM32Gh3AbNyyOqLatvO5/c7XA6sDdvFa9eWbeXZUX9j5esPztT30PgAAdosBml05uNpeHVkd2zQo37X6eDcOvB+qvlFd2zQUf+9rTYP0rp5bVg/qxmF8W3XNzp97fnVxdV71mU18jwAAG2KApm4cmG94DmwaYM+srmwabD+1yQ2HNg3Sh1Qn7uy4dmfHDY+BGgAYzgC9dd2/OqV6WPWj3XRQ3TEq6nts66aD/QerD1enVx8bFQUAwNZxl+rU6sLqo9Xzq3sPLVqfw6sXVBc1vYdTm7aWAADAQj29elt1VXVaddTYnIU4qum9fLZ6R3Xy2BwAAFbBqdX/Vn9cnTC4ZTM9tnpJ03s9dXALAAAzc6vqD5pOyDitutPYnD3qTk3v+brq95tO+wAAgF06qHpF03nKL6z2HZsz1H7Vi6qvVy+vbjc2BwCAZfO86qzqN0aHLKHfrN5VPWd0CAAA4z2+urxp/y8/2MuqS5v2SwMAsMUcVL2xadX5sLEps3J404kdr6vuMLgFAIA95NnV1dVTRofM2FOrz1W/OjoEAJifvUcHsGb7Nu3l3a/ptIk3jc2ZtddXd6wO"
      if (dataURL3 == dataURLstr3) {
        console.info("LANYI,the0 arc dataURL is ",dataURL3);
        console.info("LANYI,the0 arc dataURLstr is ",dataURLstr3);
        result = true;
      } else {
        console.info("LANYI,the1 arc dataURL is ",dataURL3);
        console.info("LANYI,the1 arc dataURLstr is ",dataURLstr3);
        result = false;
      }
      expect(result).assertEqual(true);
      console.info('testCanvas01 END');
      done();
    });
  });
}