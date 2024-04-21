/**
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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
import { describe, beforeEach, afterEach, it, expect } from "@ohos/hypium"
import router from '@ohos.router';
import { BusinessError } from '@ohos.base'
import json from '@ohos.util.json';

export default function MarqueeHorseRace() {
  const SUITE: string = 'MarqueeHorseRace'

  describe('MarqueeHorseRaceTest', () => {
    console.info("1111111111111111start---");
    beforeEach(async (done: Function) => {
      console.info("11111111111112222start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/MarqueeHorseRace/MarqueeHorseRace',
      }
      try {
        router.clear();
        let pages: router.RouterState = router.getState();
        if (pages == null || !("MarqueeHorseRace" == pages.name)) {

          await router.pushUrl(options).then(() => {
            console.info(`${SUITE} router.pushUrl success`);
          }).catch((err: BusinessError) => {
            console.error(`${SUITE} router.pushUrl failed, code is ${err.code}, message is ${err.message}`);
          })
        }
      } catch (err) {
        console.error("push MarqueeHorseRace page error: " + err);
      }
      done()
    });

    afterEach(async () => {
      console.info("MarqueeHorseRace after each called");
    });

     it('hore_race_test_001', 0, async (done: Function) => {
      console.info("hore_race_test_001 START");
      let strJson: string = getInspectorByKey('Marquee');
      let marq: ESObject = JSON.parse(JSON.parse(strJson).$attrs.marqueeOptions);
      expect(marq.start).assertTrue();
      console.info('hore_race_test_001 END');
      done()
    });
    it('hore_race_test_002', 0, async (done: Function) => {
      console.info("hore_race_test_002 START");
      let strJson: string = getInspectorByKey('Marquee');
      let marq: ESObject = JSON.parse(JSON.parse(strJson).$attrs.marqueeOptions);
      expect(marq.step / 1.5).assertEqual(9)
      console.info('hore_race_test_002 END');
      done()
    });
    it('hore_race_test_003', 0, async (done: Function) => {
      console.info("hore_race_test_003 START");
      let strJson: string = getInspectorByKey('Marquee');
      let marq: ESObject = JSON.parse(JSON.parse(strJson).$attrs.marqueeOptions);
      expect(marq.loop).assertEqual("-1")
      console.info('hore_race_test_003 END');
      done()
    });
    it('hore_race_test_004', 0, async (done: Function) => {
      console.info("hore_race_test_004 START");
      let strJson: string = getInspectorByKey('Marquee');
      let marq: ESObject = JSON.parse(JSON.parse(strJson).$attrs.marqueeOptions);
      expect(marq.direction).assertEqual("MarqueeDirection.LEFT")
      console.info('hore_race_test_004 END');
      done()
    });
    it('hore_race_test_005', 0, async (done: Function) => {
      console.info("hore_race_test_005 START");
      let strJson: string = getInspectorByKey('Marquee');
      let marq: ESObject = JSON.parse(JSON.parse(strJson).$attrs.marqueeOptions);
      expect(marq.delay).assertEqual('0')
      console.info('hore_race_test_005 END');
      done()
    });
    it('hore_race_test_006', 0, async (done: Function) => {
      console.info("hore_race_test_006 START");
      let strJson: string = getInspectorByKey('Marquee');
      let marq: ESObject = JSON.parse(JSON.parse(strJson).$attrs.marqueeOptions);
      expect(marq.fadeout).assertEqual(false)
      console.info('hore_race_test_006 END');
      done()
    });
    it('hore_race_test_007', 0, async (done: Function) => {
      console.info("hore_race_test_007 START");
      let strJson: string = getInspectorByKey('Marquee');
      let marq: ESObject = JSON.parse(JSON.parse(strJson).$attrs.marqueeOptions);
      expect(marq.startPolicy).assertEqual('MarqueeStartPolicy.DEFAULT')
      console.info('hore_race_test_007 END');
      done()
    });

  })
}