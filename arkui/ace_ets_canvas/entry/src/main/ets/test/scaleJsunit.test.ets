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

export default function scaleJsunit() {
  describe('scaleTest', function () {
    beforeEach(async function (done) {
      console.info("scale beforeEach start");
      let options = {
        uri: 'pages/scale',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get scale state pages:" + JSON.stringify(pages));
        if (!("scale" == pages.name)) {
          console.info("get scale state pages.name:" + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push scale page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push scale page error:" + err);
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
      var dataURLstr3 = "data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAtAAAA+ICAYAAAA4XazGAAAABHNCSVQICAgIfAhkiAAAIABJREFUeJzs3cFNHFkYRtHfFgE4A0JgMqAnEpPCRMCE4BAgk54MCMEhOAO8MJLHg6XhGlU/V3OOVBtU6vpgdReP6hkAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAIC37t3qAcGHmflj9Ygde5iZL6tHAABwOoeZeXT98nWof3AAAJ57v3oAAADsiYAGAIBAQAMAQHCxesAr/TXf/jmOH13NzKfVIwAAztHeA/phZo6rR/yGHlcPAAA4V45wAABAIKABACAQ0AAAEAhoAAAIBDQAAAQCGgAAAgENAACBgAYAgEBAAwBAIKABACAQ0AAAEAhoAAAIBDQAAAQCGgAAAgENAACBgAYAgEBAAwBAIKABACAQ0AAAEAhoAAAIBDQAAAQCGgAAAgENAACBgAYAgEBAAwBAIKABACAQ0AAAEAhoAAAIBDQAAAQCGgAAAgENAACBgAYAgEBAAwBAIKABACAQ0AAAEAhoAAAILlYPOFOHp2uVy5/87GbWbuI0jk8XALARAb2Nw8zcrh7xHx9XD+BkjqsHAMA5c4QDAAACAQ0AAIGABgCAQEADAEAgoAEAIBDQAAAQCGgAAAi8B3qdf2a79/VezrcvTvm3+5n5vNHzOI3r8WU4ALCcgF7nODN/b/TZ1/M8oO/GF2zs3e0IaABYzhEOAAAIBDQAAAQCGgAAAgENAACBgAYAgEBAAwBAIKABACAQ0AAAEAhoAAAIBDQAAAQCGgAAAgENAACBgAYAgEBAAwBAIKAB"
      if (dataURL3 == dataURLstr3) {
        console.info("LANYI,the0 scale dataURL is ",dataURL3);
        console.info("LANYI,the0 scale dataURLstr is ",dataURLstr3);
        result = true;
      } else {
        console.info("LANYI,the1 scale dataURL is ",dataURL3);
        console.info("LANYI,the1 scale dataURLstr is ",dataURLstr3);
        result = false;
      }
      expect(result).assertEqual(true);
      console.info('testCanvas01 END');
      done();
    });
  });
}