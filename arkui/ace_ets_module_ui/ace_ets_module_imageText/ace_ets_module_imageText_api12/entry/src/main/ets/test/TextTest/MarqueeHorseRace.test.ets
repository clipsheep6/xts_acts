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

import router from '@ohos.router';
import commFunc from '../../MainAbility/utils/Common';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';


export default function MarqueeHorseRace() {

  describe('MarqueeHorseRace', () => {
    beforeEach(async (done: Function) => {
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/Text/MarqueeHorseRace',
      }
      try {
        router.clear();
        let pages: router.RouterState = router.getState();
        if (pages == null || !("MarqueeHorseRace" == pages.name)) {
          console.info("get onComplete pages.name:" + JSON.stringify(pages.name));
          let result = await router.push(options);
          await commFunc.sleep(2000);
          console.info("push onComplete page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push MarqueeHorseRace page error: " + err);
      }
      console.info("onComplete beforeEach end");
      done();
    });

    afterEach(async () => {
      await commFunc.sleep(1000);
      console.info("MarqueeHorseRace after each called");
    });
    /**
     * @tc.number hore_race_test_001
     * @tc.name start
     * @tc.desc marqueeOptions:{start:true}
     * @tc.level Level 1
     * @tc.type
     * @tc.size
     */
    it('hore_race_test_001', 0, async (done: Function) => {
      console.info("hore_race_test_001 START");
      let strJson: string = getInspectorByKey('Marquee');
      let marq: ESObject = JSON.parse(JSON.parse(strJson).$attrs.marqueeOptions);
      expect(marq.start).assertTrue();
      console.info('hore_race_test_001 END');
      done()
    });
    /**
     * @tc.number hore_race_test_002
     * @tc.name step
     * @tc.desc marqueeOptions:{step:9}
     * @tc.level Level 1
     * @tc.type
     * @tc.size
     */
    it('hore_race_test_002', 0, async (done: Function) => {
      console.info("hore_race_test_002 START");
      let strJson: string = getInspectorByKey('Marquee');
      let marq: ESObject = JSON.parse(JSON.parse(strJson).$attrs.marqueeOptions);
      expect(marq.step / 1.5).assertEqual(9);
      console.info('hore_race_test_002 END');
      done()
    });
    /**
     * @tc.number hore_race_test_003
     * @tc.name loop
     * @tc.desc marqueeOptions:{loop:2}
     * @tc.level Level 1
     * @tc.type
     * @tc.size
     */
    it('hore_race_test_003', 0, async (done: Function) => {
      console.info("hore_race_test_003 START");
      let strJson: string = getInspectorByKey('Marquee');
      let marq: ESObject = JSON.parse(JSON.parse(strJson).$attrs.marqueeOptions);
      expect(marq.loop).assertEqual("2");
      console.info('hore_race_test_003 END');
      done()
    });
    /**
     * @tc.number hore_race_test_004
     * @tc.name fromStart
     * @tc.desc marqueeOptions:{fromStart:true}
     * @tc.level Level 1
     * @tc.type
     * @tc.size
     */
    it('hore_race_test_004', 0, async (done: Function) => {
      console.info("hore_race_test_004 START");
      let strJson: string = getInspectorByKey('Marquee');
      let marq: ESObject = JSON.parse(JSON.parse(strJson).$attrs.marqueeOptions);
      expect(marq.direction).assertEqual("MarqueeDirection.LEFT");
      console.info('hore_race_test_004 END');
      done()
    });
    /**
     * @tc.number hore_race_test_005
     * @tc.name delay
     * @tc.desc marqueeOptions:{delay:1000}
     * @tc.level Level 1
     * @tc.type
     * @tc.size
     */
    it('hore_race_test_005', 0, async (done: Function) => {
      console.info("hore_race_test_005 START");
      let strJson: string = getInspectorByKey('Marquee');
      let marq: ESObject = JSON.parse(JSON.parse(strJson).$attrs.marqueeOptions);
      expect(marq.delay).assertEqual('1000');
      console.info('hore_race_test_005 END');
      done()
    });
    /**
     * @tc.number hore_race_test_006
     * @tc.name fadeout
     * @tc.desc marqueeOptions:{fadeout:true}
     * @tc.level Level 1
     * @tc.type
     * @tc.size
     */
    it('hore_race_test_006', 0, async (done: Function) => {
      console.info("hore_race_test_006 START");
      let strJson: string = getInspectorByKey('Marquee');
      let marq: ESObject = JSON.parse(JSON.parse(strJson).$attrs.marqueeOptions);
      expect(marq.fadeout).assertTrue();
      console.info('hore_race_test_006 END');
      done()
    });
    /**
     * @tc.number hore_race_test_007
     * @tc.name marqueeStartPolicy
     * @tc.desc marqueeOptions:{marqueeStartPolicy:MarqueeStartPolicy.DEFAULT}
     * @tc.level Level 1
     * @tc.type
     * @tc.size
     */
    it('hore_race_test_007', 0, async (done: Function) => {
      console.info("hore_race_test_007 START");
      let strJson: string = getInspectorByKey('Marquee');
      let marq: ESObject = JSON.parse(JSON.parse(strJson).$attrs.marqueeOptions);
      expect(marq.startPolicy).assertEqual('MarqueeStartPolicy.DEFAULT');
      console.info('hore_race_test_007 END');
      done()
    });
    /**
     * @tc.number hore_race_test_008
     * @tc.name MarqueeState.START
     * @tc.desc onMarqueeStateChange:(state: MarqueeState)=>MarqueeState.START
     * @tc.level Level 1
     * @tc.type
     * @tc.size
     */
    it('hore_race_test_008', 0, async (done: Function) => {
      console.info("hore_race_test_008 START");
      await commFunc.sleep(3000);
      let strJson: string = getInspectorByKey('text_start');
      console.info('hore_race_test_-----08', JSON.parse(strJson).$attrs.content);
      expect(JSON.parse(strJson).$attrs.content).assertEqual('MarqueeState.START');
      console.info('hore_race_test_008 END');
      done()
    });
    /**
     * @tc.number hore_race_test_009
     * @tc.name MarqueeState.BOUNCE
     * @tc.desc onMarqueeStateChange:(state: MarqueeState)=>MarqueeState.BOUNCE
     * @tc.level Level 1
     * @tc.type
     * @tc.size
     */
    it('hore_race_test_009', 0, async (done: Function) => {
      await commFunc.sleep(3000);
      console.info("hore_race_test_009 START");
      let strJson: string = getInspectorByKey('text_bounce');
      console.info('hore_race_test_-----09', JSON.parse(strJson).$attrs.content);
      expect(JSON.parse(strJson).$attrs.content).assertEqual('MarqueeState.BOUNCE');
      console.info('hore_race_test_009 END');
      done()
    });
    /**
     * @tc.number hore_race_test_010
     * @tc.name MarqueeState.FINISH
     * @tc.desc onMarqueeStateChange:(state: MarqueeState)=>MarqueeState.FINISH
     * @tc.level Level 1
     * @tc.type
     * @tc.size
     */
    it('hore_race_test_010', 0, async (done: Function) => {
      await commFunc.sleep(3000);
      console.info("hore_race_test_010 START");
      let strJson: string = getInspectorByKey('text_finsh');
      console.info('hore_race_test_-----10', JSON.parse(strJson).$attrs.content);
      expect(JSON.parse(strJson).$attrs.content).assertEqual('MarqueeState.FINISH');
      console.info('hore_race_test_010 END');
      done()
    });

  })
}