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

export default function shadowOffsetXJsunit() {
  describe('shadowOffsetXTest', function () {
    beforeEach(async function (done) {
      console.info("shadowOffsetX beforeEach start");
      let options = {
        uri: 'pages/shadowOffsetX',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get shadowOffsetX state pages:" + JSON.stringify(pages));
        if (!("shadowOffsetX" == pages.name)) {
          console.info("get shadowOffsetX state pages.name:" + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push shadowOffsetX page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push shadowOffsetX page error:" + err);
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
      var dataURLstr3 = "data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAtAAAA+ICAYAAAA4XazGAAAABHNCSVQICAgIfAhkiAAAIABJREFUeJzs3Vtz27oVgFFIzq2dXn73+bm9TJPjax8sjLcRQPQ+dOoCXGuGQ0UyaSvjhy87EFkKAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAALOn00T/ABzjie+bXe/roHwAA+N84f/QPAAAAMxHQAACQIKABACDhCOuBt97jEf4OeH9ba56tiQaARa0Yj6P31D7f+7oV/z54P70obp8bhbOgBoBFrBaMW1F8uvLc1nk4rq1wfrry3NZ5AIDJrBSKowlzdj86H8c0mjBn96PzAQCTWSUSr02ZT53Ho9dG5+KYrk2ZnzqPR6+NzgUATOjTR/8A72AUz71oPpXnK4+0z/WO6Z2f4xjFcy+an0opj83r7blO4bXT4OsAgAnMHtDX4nkUzefOc6Ogbr8HxzGaOI/C+dR5ro1wEQ0AC5g5oN8Sz+fyOph729ZUuv1erG8rnh/DvredwuP2vCIaACY3c0C3ehPnGsk3ncfxuRjT10KaY7g2dW5j+aHZ18fxXI/NnwGAia0Q0KNlGG0sX9tGE+nS2bO23vS5N3F+aLZzeFzKy+/LY+n/7ghpAJjUCgEdtVPnuH0K201nf20aXYqAPore9Lk3db7v7O/Ly+/MQ3mtRjgAMLlZA3rrA4MxomM4f75s8c81oNtp9GgSzdquTZ7jxPm+lHJXXsK594+u9qod7e9QuyYaAJjArAHdatc+t5PnGs5fLtvnZouT6Tai2yhibaM1zzGcazzHLf6+xPPUx+fy8/IQAGBCMwf06IYpvelzjOev4XEb0/WYa0s5WNto6UZdqhGj+ba8/INrdI4Yz6fBHgCYyMwBXUp/KUcb0G08f7vs6xYjOk6iexHN+nrx3Js835bXvyvXznEu"
      if (dataURL3 == dataURLstr3) {
        console.info("LANYI,the0 shadowOffsetX dataURL is ",dataURL3);
        console.info("LANYI,the0 shadowOffsetX dataURLstr is ",dataURLstr3);
        result = true;
      } else {
        console.info("LANYI,the1 shadowOffsetX dataURL is ",dataURL3);
        console.info("LANYI,the1 shadowOffsetX dataURLstr is ",dataURLstr3);
        result = false;
      }
      expect(result).assertEqual(true);
      console.info('testCanvas01 END');
      done();
    });
  });
}