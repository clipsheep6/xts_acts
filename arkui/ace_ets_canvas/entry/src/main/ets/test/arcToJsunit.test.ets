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

export default function arcToJsunit() {
  describe('arcToTest', function () {
    beforeEach(async function (done) {
      console.info("arcTo beforeEach start");
      let options = {
        uri: 'pages/arcTo',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get arcTo state pages:" + JSON.stringify(pages));
        if (!("arcTo" == pages.name)) {
          console.info("get arcTo state pages.name:" + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push arcTo page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push arcTo page error:" + err);
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
      var dataURLstr3 = "data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAtAAAA+ICAYAAAA4XazGAAAABHNCSVQICAgIfAhkiAAAIABJREFUeJzs3cGrpmUZwOHfTDkymcoIBhJRBim6DApkymYqKbFtiEEbN2KL1rlp0aLWCvUHBEWbFmFgEchYU9CiVTiE7iYElTDNUUanmhafC5NRv0/POXfP6brg5d3+ljcP9/s+BQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAHEpHpgM4tB6qLlQvX+H99+qvc2kAAO/dB6cDOLSurW564/3ht7zPV3dVT73N87eBXgCArTiBZsrV1S1XeP5R3VydedPz7EQgAMCVGKD5X3RrdepNz0ttBunfVL+o/jmTBQAAa7i1eqB6pLpU/az62mgRAAAs5N7q0erF6ofVHbM5AACwhuurb1V/qH5ZPTibAwAA6/h49aM2+9LfGW4BAIBlXFf9oLpcfb/Nb/MAAIAtPNTmt3jfnQ4BAICV3F+9Wn1zOgQAAFZxvPpxdba6fbgFAACWcbJ6snp4OgQAAFby7eqJ6gvTIQAAsIqr2lwR/r3hDgBgIUenA2DQperUG++z1bHRGgAAWMjJ6rXqq9MhAACwksdykyEA8A6scMB/u7t6ofrpdAgAAKzkvurx6QgAAFjJ6ercdAQAAKzktjYrHVdPhwAAwCpOVBerI9MhAACwktfyr2gAANjaiTbrHAAAwJZuy4eFAACwk9P5xR0AAOzkG9VPpiMAgIP3gekAWNSfqxuru6qzwy0AALCMX1VfmY4AAICVvF5dNR0BAACr+Fz1u+kIAOBg2IGG9+989bHqi9WZ2RQAAFjHE9Wd0xEAALCKY9VvpyMAgP1lhQP2zr+q66t7q18PtwAA"
      if (dataURL3 == dataURLstr3) {
        console.info("LANYI,the0 arcTo dataURL is ",dataURL3);
        console.info("LANYI,the0 arcTo dataURLstr is ",dataURLstr3);
        result = true;
      } else {
        console.info("LANYI,the1 arcTo dataURL is ",dataURL3);
        console.info("LANYI,the1 arcTo dataURLstr is ",dataURLstr3);
        result = false;
      }
      expect(result).assertEqual(true);
      console.info('testCanvas01 END');
      done();
    });
  });
}