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

export default function shadowBlurJsunit() {
  describe('shadowBlurTest', function () {
    beforeEach(async function (done) {
      console.info("shadowBlur beforeEach start");
      let options = {
        uri: 'pages/shadowBlur',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get shadowBlur state pages:" + JSON.stringify(pages));
        if (!("shadowBlur" == pages.name)) {
          console.info("get shadowBlur state pages.name:" + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push shadowBlur page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push shadowBlur page error:" + err);
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
      var dataURLstr3 = "data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAtAAAA+ICAYAAAA4XazGAAAABHNCSVQICAgIfAhkiAAAIABJREFUeJzs3eFy27iSBlDYmdr32iffJ7vJ/sjlDIJ0Aw1KdEbUOVUqAiAtkx5O1Zd2i/5orX20uWz/uP7M+erYnfM6ewzn/XjgmGh9XPtR3PeM+Wr97HEAwIv6aPtB9FlBuDJe7dtZO3MM+86G59VaNUSf+ZrKfLW+ewwA8KKyAH0mPP+pcTTP1s4cQ92zwvNuOL5iHM1X67vHAAAvKArQlTCazVeBt7pW2b/al62dOYa1Z4TnSpBehd9Hv6Yyz9bOHAMAvJgxQO+G50dCcrZdrVXHs7Wd/dSswuJOeH4kJO8G6Ueq0WeuGQB4cX2AfmZ43gnMVwbq2drOfuauDs87gflMoBaiAYCyj/ZriB73ZfNHQ/FseyaMr843mo+E6HN2A+ROm8Zq36NheidsZ/NsbWc/APBCsgC90+P8jHC8u291TtE1ZGuVfeRm4fBM5Tlbm4Xds/tm22ytMh8J0ABwIx+ttc9gLZufDcmVcXX/bDsbR/PqPnI7AboanquBeGf/I+F6dS3RvLoPAHgxY4A+W3l+dHw2YK/OcXZNESF6z9XheTcg7wbpSpjO1irzkSANADfw12TfrAWiWj0+Mz9buR7P+UyIFqD3ZIHw2eG5Epo/knl2fh/BeNw/fv3sPQGAN9EH6Ep/cTU076ydfY/ZOc2uaRy3wjqxSoDeCc/ZWhacs7Xj9REcOwbt8byzMN2Ps5AuYAPAGzgC9CpcZuH6TFDePW71/uM5RdvourRynPdo68ZO5bkSlA9jYL4iJI9rOyG6/x4AwIsaWzhmVeidFoxHXpX3y84nO+/o+qL5ap2fHmndONPXnIXm1TGrr59dXxSoV8G6FfYBAC/urzavOF8Znj8f+NrZuYznG13PuJ5d"
      if (dataURL3 == dataURLstr3) {
        console.info("LANYI,the0 shadowBlur dataURL is ",dataURL3);
        console.info("LANYI,the0 shadowBlurarc dataURLstr is ",dataURLstr3);
        result = true;
      } else {
        console.info("LANYI,the1 shadowBlur dataURL is ",dataURL3);
        console.info("LANYI,the1 shadowBlur dataURLstr is ",dataURLstr3);
        result = false;
      }
      expect(result).assertEqual(true);
      console.info('testCanvas01 END');
      done();
    });
  });
}