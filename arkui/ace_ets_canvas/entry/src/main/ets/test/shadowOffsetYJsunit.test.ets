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

export default function shadowOffsetYJsunit() {
  describe('shadowOffsetYTest', function () {
    beforeEach(async function (done) {
      console.info("shadowOffsetY beforeEach start");
      let options = {
        uri: 'pages/shadowOffsetY',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get shadowOffsetY state pages:" + JSON.stringify(pages));
        if (!("shadowOffsetY" == pages.name)) {
          console.info("get shadowOffsetY state pages.name:" + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push shadowOffsetY page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push shadowOffsetY page error:" + err);
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
      var dataURLstr3 = "data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAtAAAA+ICAYAAAA4XazGAAAABHNCSVQICAgIfAhkiAAAIABJREFUeJzs3etu20gSgNHyLZld7OW593H3gk3i6/6Qe1RuNylXdhTS6nMAQrLsaBigB/hSbpERAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACwsautT+BnvES8bH0OXJ6rT/r/AwDwa11vfQIAAPCZCGgAACgQ0AAAUCCgAQCgQEADAECBgAYAgAIBDQAABQIaAAAKBDQAABQIaAAAKBDQAABQIKABAKBAQAMAQIGABgCAgtutT+CDrrY+AabQr7OXTc4CANi1vQb0UjALac6pra+X7uvoXgcAJrbHLRyjSL5Kr4toziWvsaV1CABMbm8T6D5Q+mgWMJxTC+d+0vzS/YxJNABMbE8BfTV4PpoIimjO5ToOcbwUyXlrh4gGgEntJaCX4rl/vvSrdfgjtIBeiuccziIaACa1h4Bei+d8XIeA5rxu4hjQz/E+pkU0ALB5QH8knq/jGM/tOZzDbRzC+TkO6609z0Q0AExu64DujSbOLZpvQkBzXjmgn9LrbSKdvwYAJrWXgB5t2WjxfJMe2wHncBeHcG7x3H4r8hzjrUNCGgAmtJeAzvqpcz5uY5/nzGX4EhGPcfwH3FP3/bYvGgCY2JYxeuoDgzmib9Nx98vPlFl8ifdXe8kfJHyJ95PotcveAQAXaE/T3H7vcz95vns9vmx1gly8r7Eez9fd1wDAhLYO6KUbpoymzy2eBTTnktfWS3f0N1npHwGASWwd0BHjrRx9QOd4/rrBOTKH"
      if (dataURL3 == dataURLstr3) {
        console.info("LANYI,the0 shadowOffsetY dataURL is ",dataURL3);
        console.info("LANYI,the0 shadowOffsetY dataURLstr is ",dataURLstr3);
        result = true;
      } else {
        console.info("LANYI,the1 shadowOffsetY dataURL is ",dataURL3);
        console.info("LANYI,the1 shadowOffsetY dataURLstr is ",dataURLstr3);
        result = false;
      }
      expect(result).assertEqual(true);
      console.info('testCanvas01 END');
      done();
    });
  });
}