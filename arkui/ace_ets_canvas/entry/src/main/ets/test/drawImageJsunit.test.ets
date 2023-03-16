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

export default function drawImageJsunit() {
  describe('drawImageTest', function () {
    beforeEach(async function (done) {
      console.info("drawImage beforeEach start");
      let options = {
        uri: 'pages/drawImage',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get drawImage state pages:" + JSON.stringify(pages));
        if (!("drawImage" == pages.name)) {
          console.info("get drawImage state pages.name:" + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push drawImage page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push drawImage page error:" + err);
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
      var dataURLstr3 = "data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAtAAAA+ICAYAAAA4XazGAAAABHNCSVQICAgIfAhkiAAAIABJREFUeJzsvd2SLEeupfcB7pFZtUl290zLTCObuZHpbfQsutZD6cVGP3bmTHeT3FUZ7oAuAHh4FnkkXehCYidom/WXPxEeERkLCwsL8j/9L//ZRQR3X/9EBAAc1EFV828TBNwdVUHyezFBVRERzAwzQ1XXVweGG7135pzxOwEzwzXey8yQ6dyOAzMDQETWa9Y27dtnZrTW4nXy97UvIg2RbZ8U3C0fE48dHw/e7nfmnLjHc1V77p8iNB5zgID55DgOxhy4G/f7jc/PD8Dp0ugea4Q70hrTDFG59tGhbftQX2+3G5+fn+s9lXhMa40xBq21tWbXcQIR5TgO5jwZY6CNXJd67fh5jEHvfa3hOia5Xu5Oaw1V5TzPta6qut5/f76qMudc27i/Tu1XPV9VAdbjJY+7T0OAA13HOdbYQQWxOFfGnPHaOFbHXhUnHte0MceIYwq4xfu3OgdaY7qt7ahtrTXpvfP5+bn+Vudnay3OqznR/NryyNRz1z7lMa01sNyGujZaU8yv41fHstZujLG2b79u5raeIoKKYLn9vbV4fK4PsF7/8XjQWotjPSdHU3DBrM69ibpx78Khxg/f3vjzD2+835Rffv2Vv//tXxE7uR/Kf/+f/lv++qdv/PitIQyO7nRVurY4lyX3U8Ex3EBccXMGzgQcZ5iBgYogLgyUcxi3QzEbzGm4NM6pPIbyt18f/G//5YP/9b/8zD8+TkzfOL1B62CDowmMB8dx4/GINTmOg/N80JribrQWawrgeq2l5rliZhytQx5TVNZ1sX921XGtY1rXhLvjMz5/cMfXsRv8z//jfxRe8YpXvOIVf+joPi3uDCJgAejOxyOBr2N5gx5miAuKIwgqSlPlcT4wzRvl"
      if (dataURL3 == dataURLstr3) {
        console.info("LANYI,the0 drawImage dataURL is ",dataURL3);
        console.info("LANYI,the0 drawImage dataURLstr is ",dataURLstr3);
        result = true;
      } else {
        console.info("LANYI,the1 drawImage dataURL is ",dataURL3);
        console.info("LANYI,the1 drawImage dataURLstr is ",dataURLstr3);
        result = false;
      }
      expect(result).assertEqual(true);
      console.info('testCanvas01 END');
      done();
    });
  });
}