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

export default function shadowColorJsunit() {
  describe('shadowColorTest', function () {
    beforeEach(async function (done) {
      console.info("shadowColor beforeEach start");
      let options = {
        uri: 'pages/shadowColor',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get shadowColor state pages:" + JSON.stringify(pages));
        if (!("shadowColor" == pages.name)) {
          console.info("get shadowColor state pages.name:" + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push shadowColor page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push shadowColor page error:" + err);
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
      var dataURLstr3 = "data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAtAAAA+ICAYAAAA4XazGAAAABHNCSVQICAgIfAhkiAAAIABJREFUeJzs3e1y27jSLlDY2Td2rvxc2UzeHzOsQRB8dIOkTDlrVakIghRNKXT5SbtFf5S39PPjq8+A7+jj51efAQDwfJ9ffQIAAPBOHlDJfVk1+QGvlRd6UTVZ1RoA/jQq0AAAkPDiquxl1eanHYevdVUV+KLjqEoDwHemAg0AAAkvqMCeqjpnn/vKr8XXOlPlzT73xNdSjQaA70YFGgAAEm6qum5XnaPPu3q/s8/hdXYqutHnXL1fQzUaAL6DG8JiOjxH9l/tc8Uxzu7Pve5ou1jtc8UxGkI0ALy7C0Pi5cF5tn13W2T77r7cJxM6z4Ti3W2R7Q1BGgDe1UUBMRWedwPuVfORczi7P9e4suo82nbVfHR7RYgGgHd0QTC8LDxngnB0bvdr7u7Hta7oSc4E4ejc7tfsEKIB4N2cDIaXhOfo/F1BWoh+prPh+ergfHWluiJEA8A7OREKw+H5TGX56vXs+ZzZjz13BOdVGD67nj2fDiEaAN7FZhi8PDxfuX53iBag73XmzhfZ8PyKYD2bbwjRAPAONsJgKDxfEZyj23aek53b2Ye83fC8mouG6J3nRNZX8xUhGgCeLhkEbwvPXzXurY/mdvYh7qrwnA3Hd4x766v5ihANAE+WCIHb4TladV4F3uhcZPtq22huZx/WrgjPkSC9Cr9nnxNZH801hGgAeKorA3Q2PJ8JyaPlai46ns1lthOzc2/l3QrxbC4bpM9UoxevWYAGgKcKBsCXhudMYL4zUM/mMtuZuzs8ZwLzTqAWogHgDxMIf7eF5zuWO2F8db699ZYQvScbnjNtGqttZ8N0JmyP1kdzFSEaAJ7mjgCd6XG+Ihxnt63OqfcaRnORbYzNwuFO5Xk0Nwu7u9tm"
      if (dataURL3 == dataURLstr3) {
        console.info("LANYI,the0 shadowColor dataURL is ",dataURL3);
        console.info("LANYI,the0 shadowColor dataURLstr is ",dataURLstr3);
        result = true;
      } else {
        console.info("LANYI,the1 shadowColor dataURL is ",dataURL3);
        console.info("LANYI,the1 shadowColor dataURLstr is ",dataURLstr3);
        result = false;
      }
      expect(result).assertEqual(true);
      console.info('testCanvas01 END');
      done();
    });
  });
}