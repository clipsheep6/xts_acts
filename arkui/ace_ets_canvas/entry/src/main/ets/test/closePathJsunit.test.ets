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

export default function closePathJsunit() {
  describe('closePathTest', function () {
    beforeEach(async function (done) {
      console.info("closePath beforeEach start");
      let options = {
        uri: 'pages/closePath',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get closePath state pages:" + JSON.stringify(pages));
        if (!("closePath" == pages.name)) {
          console.info("get closePath state pages.name:" + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push closePath page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push closePath page error:" + err);
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
      var dataURLstr3 = "data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAtAAAA+ICAYAAAA4XazGAAAABHNCSVQICAgIfAhkiAAAIABJREFUeJzs2sFxE0EQhtE25EAQToKAHIRNPERBEHAiA4KAg7UYmfJa0u7sTPe8V6UquKnKl55fXwQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAANDCXe8vcKPH3l+Apr70/gIAAG/50PsL3OA+Ih7i+fj3qfd5OP2NAQDY0VNYoSt6jOe/LQAADXwPS2Ul9/H8NwUAoBEHVy0eRABACh97f4ENfkXEp4j4HBHfOn8XtnmMiB8R8bX3FwEAmIHlMje/JAAAHMwBlpsHEACQSuaEYyHlyEu6AQDQkSUzF78cAAB05iDLxYMHAEipQsKxkHLkId0AABiIZXNsfikAABiMA21sHjgAQGqVEo6FlGNc0g0AgIFZOsfilwEAgME52MbiQQMAlFAx4VhIOcYh3QAASMTy2ZdfAgAAknHA9eUBAwCUUjnhWEg5+pFuAAAkZgk9luUfACA5B92xPFgAgJJmSDgWUo7jSDcAAAqxjLZl6QcAKMaB15YHCgBQ2kwJx0LK0Y50AwCgMEvpviz7AADFOfj25UECAExhxoRjIeXYj3QDAGAiltNtLPkAAJNxAG7jAQIATGXmhGMh5biddAMAYGKW1OtY7gEAJucgvI4HBwAwJQnHCynH5aQbAAD8ZVldZ6kHAOCMA3GdBwYAMDUJx/+kHG+TbgAA8CZL6znLPAAAqxyM5zwoAABCwrFGyvFCugEAwMVmX14t8QAAXGX2A3L2BwQAwBkJx/tmTjmkGwAA"
      if (dataURL3 == dataURLstr3) {
        console.info("LANYI,the0 closePath dataURL is ",dataURL3);
        console.info("LANYI,the0 closePath dataURLstr is ",dataURLstr3);
        result = true;
      } else {
        console.info("LANYI,the1 closePath dataURL is ",dataURL3);
        console.info("LANYI,the1 closePath dataURLstr is ",dataURLstr3);
        result = false;
      }
      expect(result).assertEqual(true);
      console.info('testCanvas01 END');
      done();
    });
  });
}