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
import { describe, beforeEach, afterEach, it, expect } from "@ohos/hypium";
import router from '@ohos.router';
import { BusinessError } from '@ohos.base';
import commFunc from '../../MainAbility/utils/Common';

export default function MarqueeHorseRace2() {
  const SUITE: string = 'MarqueeHorseRace2';

  describe('MarqueeHorseRace2', () => {
    beforeEach(async (done: Function) => {
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/Text/MarqueeHorseRace2',
      }
      try {
        router.clear();
        let pages: router.RouterState = router.getState();
        if (pages == null || !("MarqueeHorseRace2" == pages.name)) {
          await router.pushUrl(options).then(() => {
            console.info(`${SUITE} router.pushUrl success`);
          }).catch((err: BusinessError) => {
            console.error(`${SUITE} router.pushUrl failed, code is ${err.code}, message is ${err.message}`);
          })
        }
      } catch (err) {
        console.error("push MarqueeHorseRace2 page error: " + err);
      }
      done();
    });
    afterEach(async () => {
      console.info("MarqueeHorseRace2 after each called");
    });
    /**
     * @tc.number hore_race_test_001
     * @tc.name start
     * @tc.desc marqueeOptions:{start:false}
     * @tc.level Level 1
     * @tc.type
     * @tc.size
     */
    it('hore_race_test_001', 0, async (done: Function) => {
      console.info("hore_race_test_001 START");
      await commFunc.sleep(1000);
      let strJson: string = getInspectorByKey('Marquee2');
      let marq: ESObject = JSON.parse(JSON.parse(strJson).$attrs.marqueeOptions);
      expect(marq.start).assertFalse();
      console.info('hore_race_test_001 END');
      done()
    });
    /**
     * @tc.number hore_race_test_002
     * @tc.name step
     * @tc.desc marqueeOptions:{step:Null}
     * @tc.level Level 1
     * @tc.type
     * @tc.size
     */
    it('hore_race_test_002', 0, async (done: Function) => {
      console.info("hore_race_test_002 START");
      await commFunc.sleep(1000);
      let strJson: string = getInspectorByKey('Marquee2');
      let marq: ESObject = JSON.parse(JSON.parse(strJson).$attrs.marqueeOptions);
      expect(marq.step / 1.5).assertEqual(4);
      console.info('hore_race_test_002 END');
      done()
    });
    /**
     * @tc.number hore_race_test_003
     * @tc.name loop
     * @tc.desc marqueeOptions:{loop:Null}
     * @tc.level Level 1
     * @tc.type
     * @tc.size
     */
    it('hore_race_test_003', 0, async (done: Function) => {
      console.info("hore_race_test_003 START");
      let strJson: string = getInspectorByKey('Marquee2');
      let marq: ESObject = JSON.parse(JSON.parse(strJson).$attrs.marqueeOptions);
      expect(marq.loop).assertEqual("-1");
      console.info('hore_race_test_003 END');
      done()
    });
    /**
     * @tc.number hore_race_test_004
     * @tc.name fromStart
     * @tc.desc marqueeOptions:{fromStart:Null}
     * @tc.level Level 1
     * @tc.type
     * @tc.size
     */
    it('hore_race_test_004', 0, async (done: Function) => {
      console.info("hore_race_test_004 START");
      let strJson: string = getInspectorByKey('Marquee2');
      let marq: ESObject = JSON.parse(JSON.parse(strJson).$attrs.marqueeOptions);
      expect(marq.direction).assertEqual("MarqueeDirection.LEFT");
      console.info('hore_race_test_004 END');
      done()
    });
    /**
     * @tc.number hore_race_test_005
     * @tc.name delay
     * @tc.desc marqueeOptions:{delay:Null}
     * @tc.level Level 1
     * @tc.type
     * @tc.size
     */
    it('hore_race_test_005', 0, async (done: Function) => {
      console.info("hore_race_test_005 START");
      let strJson: string = getInspectorByKey('Marquee2');
      let marq: ESObject = JSON.parse(JSON.parse(strJson).$attrs.marqueeOptions);
      expect(marq.delay).assertEqual('0');
      console.info('hore_race_test_005 END');
      done()
    });
    /**
     * @tc.number hore_race_test_006
     * @tc.name fadeout
     * @tc.desc marqueeOptions:{fadeout:Null}
     * @tc.level Level 1
     * @tc.type
     * @tc.size
     */
    it('hore_race_test_006', 0, async (done: Function) => {
      console.info("hore_race_test_006 START");
      let strJson: string = getInspectorByKey('Marquee2');
      let marq: ESObject = JSON.parse(JSON.parse(strJson).$attrs.marqueeOptions);
      expect(marq.fadeout).assertEqual(false);
      console.info('hore_race_test_006 END');
      done()
    });
    /**
     * @tc.number hore_race_test_007
     * @tc.name marqueeStartPolicy
     * @tc.desc marqueeOptions:{marqueeStartPolicy:Null}
     * @tc.level Level 1
     * @tc.type
     * @tc.size
     */
    it('hore_race_test_007', 0, async (done: Function) => {
      console.info("hore_race_test_007 START");
      let strJson: string = getInspectorByKey('Marquee2');
      let marq: ESObject = JSON.parse(JSON.parse(strJson).$attrs.marqueeOptions);
      expect(marq.startPolicy).assertEqual('MarqueeStartPolicy.DEFAULT');
      console.info('hore_race_test_007 END');
      done()
    });
  })
}