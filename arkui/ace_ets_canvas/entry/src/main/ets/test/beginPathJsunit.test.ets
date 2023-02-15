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

export default function beginPathJsunit() {
  describe('beginPathTest', function () {
    beforeEach(async function (done) {
      console.info("beginPath beforeEach start");
      let options = {
        uri: 'pages/beginPath',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get beginPath state pages:" + JSON.stringify(pages));
        if (!("beginPath" == pages.name)) {
          console.info("get beginPath state pages.name:" + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push beginPath page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push beginPath page error:" + err);
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
      var dataURLstr3 = "data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAtAAAA+ICAYAAAA4XazGAAAABHNCSVQICAgIfAhkiAAAIABJREFUeJzs3VFtGwkQgOGBYAiGsAxiBjEDH4OUQcIgZeAwcBjEDHwMYgYug7mHXW1WVaW75hpPpv0+yW992N2nUfR3JgIAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAOCzyFVErqufAgAAmsgvEZkReYrI+4gcqp8IAAA+sTxOA/Ty9xqRjxF5W/10AADwieTqB8Pz979LRB4icjf+ewAA+GPlX/9hgP7+d4rIO6kHAAB/oHx6xwAt9QAA4E+Vl/85QH+feuylHgAA/KZy8wuH5x/9XqbUY139pgAA8Avk1w8eoH+UetxUvzUAALxTbiPy+YpDtNQDAIDfRW5j/A+F54KB+iD1AACgsRwi8iEi/y4Ypk9T6mFFHgAAHeU6xlPflanHrdQDAICGcrVIPb5JPQAA4KfkEOMmj6rU417qAQBAU6Wpx+tb6gEAAO3kKiL/Kk49dlIPAACays2UepylHgAA8FPm1ONYlHo8"
      if (dataURL3 == dataURLstr3) {
        console.info("LANYI,the0 beginPath dataURL is ",dataURL3);
        console.info("LANYI,the0 beginPath dataURLstr is ",dataURLstr3);
        result = true;
      } else {
        console.info("LANYI,the1 beginPath dataURL is ",dataURL3);
        console.info("LANYI,the1 beginPath dataURLstr is ",dataURLstr3);
        result = false;
      }
      expect(result).assertEqual(true);
      console.info('testCanvas01 END');
      done();
    });
  });
}