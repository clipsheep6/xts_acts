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

export default function getImageDataJsunit() {
  describe('getImageDataTest', function () {
    beforeEach(async function (done) {
      console.info("getImageData beforeEach start");
      let options = {
        uri: 'pages/getImageData',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get getImageData state pages:" + JSON.stringify(pages));
        if (!("getImageData" == pages.name)) {
          console.info("get getImageData state pages.name:" + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push getImageData page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push getImageData page error:" + err);
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
      var dataURLstr3 = "data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAtAAAA+ICAYAAAA4XazGAAAABHNCSVQICAgIfAhkiAAAIABJREFUeJzsvduyJEuyJKRm5hG5VlXtS3fPuTCMDCD8DB/DI1/FP8ELwgwCD0OfPr1rZYSbGQ9m5uGRVd27ZAThgXFtWV3rkhnX3CLqGmqq9D/+z//RAYCZoaoQYpAD5goigBlwc8Aw4O5gZhgT3B1ggsJhZiB1CDOICETxdyICABBRvCb/FWkgAswN7goRAnUDEcPM0doOM4OTwKCxX8ljUkMzBgAYHA5A4WjEcPex3zqn1hpUFUR0natsUD3BQiAC3A3u17UoiAjO88S2bei9g4ggIrFvs/EaAGMfdc7uDgjDu2IDx7bdQIRxTAqPM2CCsMQ5m4FBeQA8rqWZYds2aO+xbyI89j3+1juE5NrvAME9byAZRASqisfjgefzCREZ26rrVu9nZlheizovM0MjhhkBcIg98dPbhn/84xf89pc/47EDf/q849/9m8/4w88N++bYpUGY4QyoG9AJh3UoAaYOAeNQAovDTHGY4F++Ev7X//1f8L/8h/+EJ73D2wMPcaAfMGvY9x29HxCJ62QUny3ktSMiOBzEcd3nzyIQ5yfEcFUAjv/pf/hnwsLCwsLCwsLC74DrG1VFaw2WRMvMoKow80GYi1gVWUQSVQAgBDFtImDOzSZZsSQuvfdBApkZZobeO4CLtLk7zG2Q1iBsOt7j7nlcF8Gs97XWruPhFxJo13nVOZgZKLc5E+Ei+UW2zAyPx2NcoyJidUwzOfuWqMW1qWsBip8995G/AjxfhyCQTPE9YFDXuFMEsDCcHCAC5T1RM6hZbWncm7gF90UME4/zLPI8PgNmsRDJf5ELkDrHsS0A7Ap2A1nH+77hl5/e8cunDf/8D7+gP39D70+8vz9AxHleBLiDYGAyCDmaMBrH"
      if (dataURL3 == dataURLstr3) {
        console.info("LANYI,the0 getImageData dataURL is ",dataURL3);
        console.info("LANYI,the0 getImageData dataURLstr is ",dataURLstr3);
        result = true;
      } else {
        console.info("LANYI,the1 getImageData dataURL is ",dataURL3);
        console.info("LANYI,the1 getImageData dataURLstr is ",dataURLstr3);
        result = false;
      }
      expect(result).assertEqual(true);
      console.info('testCanvas01 END');
      done();
    });
  });
}