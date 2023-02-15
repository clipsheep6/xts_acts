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

export default function fill2Jsunit() {
  describe('fill2Test', function () {
    beforeEach(async function (done) {
      console.info("fill2 beforeEach start");
      let options = {
        uri: 'pages/fill2',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get fill2 state pages:" + JSON.stringify(pages));
        if (!("fill2" == pages.name)) {
          console.info("get fill2 state pages.name:" + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push fill2 page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push fill2 page error:" + err);
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
      var dataURLstr3 = "data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAtAAAA+ICAYAAAA4XazGAAAABHNCSVQICAgIfAhkiAAAIABJREFUeJzs3e11FMkVBuA7TsBkYDJYZbByBiICDxl4IwAi8HEEIyJAG8GyESAiACJYEcH4R0mWEPqYj+6uqlvPU//2sJrWtKRz53bVeyMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABoyTY2sY1N7ctgJu4vAMBEtvHiuri6WR9iGy9qXxYTKff3jzv3d+P+AgAcqhRXn+4UVzfrU2zjZe3L40jbePnE/VVEAwDsZRsnjxRXN+uv2MZJ7cvkQOX+/vXE/f3k/gIA7Or54upuEb2ufbnsaRvrHe6tD0kAADspxdUuxfPd9ab2ZbOjbbzZ8976kAQA8KjdO5MPLQkOLfv5MOi+a137WwAAaMtxxdXNcvisRY8fBvUhCQBgb8d3Ju+vL2HfbDvKfvYvE97fjQ9JAMC4putM3l9/xTZOa397w9vGWey/n32X5UkDADCg52Pqpljr2t/msI7bz75rEe1JAwAwiN1j6qZY9s0ubdotOU8tMXcAwAAOi6k7dhn/vYSfx3IvVUSva3/rAADzmP+x/lPL+O85PT6We6m1rv0WAABMa7nH+k8tj/znsOyWnKeW7ToAQALTx9Qduzzyn1LdpwoPrU3YrgMAdGu+mLoplvHfx9p/LPdSS8wdANChZWLqjl0e+R+ivacKDy0xdwBAR9rZE7troaVbuau2nyrcX/a8AwAdqBNTd+z6otDawfRjuZdY9rwDAA1r70DZvoXWae23sFnzjeVeaq1rv4UAAD9qf0+sQutQfX8wurvseQcAGtDHgTKF1qEy3lt73gGAavo6ULbv"
      if (dataURL3 == dataURLstr3) {
        console.info("LANYI,the0 fill2 dataURL is ",dataURL3);
        console.info("LANYI,the0 fill2 dataURLstr is ",dataURLstr3);
        result = true;
      } else {
        console.info("LANYI,the1 fill2 dataURL is ",dataURL3);
        console.info("LANYI,the1 fill2 dataURLstr is ",dataURLstr3);
        result = false;
      }
      expect(result).assertEqual(true);
      console.info('testCanvas01 END');
      done();
    });
  });
}