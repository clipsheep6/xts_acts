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

export default function MarqueeHorseRace4() {
  const SUITE: string = 'MarqueeHorseRace4';

  describe('MarqueeHorseRace4', () => {
    beforeEach(async (done: Function) => {
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/Text/MarqueeHorseRace4',
      }
      try {
        router.clear();
        let pages: router.RouterState = router.getState();
        if (pages == null || !("MarqueeHorseRace4" == pages.name)) {
          await router.pushUrl(options).then(() => {
            console.info(`${SUITE} router.pushUrl success`);
          }).catch((err: BusinessError) => {
            console.error(`${SUITE} router.pushUrl failed, code is ${err.code}, message is ${err.message}`);
          })
        }
      } catch (err) {
        console.error("push MarqueeHorseRace4 page error: " + err);
      }
      done();
    });
    afterEach(async () => {
      console.info("MarqueeHorseRace4 after each called");
    });
    /**
     * @tc.number hore_race_test_002
     * @tc.name step
     * @tc.desc marqueeOptions:{step:-1}
     * @tc.level Level 1
     * @tc.type
     * @tc.size
     */
    it('hore_race_test_002', 0, async (done: Function) => {
      console.info("hore_race_test_002 START");
      await commFunc.sleep(1000);
      let strJson: string = getInspectorByKey('Marquee4');
      let marq: ESObject = JSON.parse(JSON.parse(strJson).$attrs.marqueeOptions);
      expect(marq.step / 1.5).assertEqual(4);
      console.info('hore_race_test_002 END');
      done()
    });
    /**
     * @tc.number hore_race_test_003
     * @tc.name loop
     * @tc.desc marqueeOptions:{loop:-1}
     * @tc.level Level 1
     * @tc.type
     * @tc.size
     */
    it('hore_race_test_003', 0, async (done: Function) => {
      console.info("hore_race_test_003 START");
      let strJson: string = getInspectorByKey('Marquee4');
      let marq: ESObject = JSON.parse(JSON.parse(strJson).$attrs.marqueeOptions);
      expect(marq.loop).assertEqual("-1");
      console.info('hore_race_test_003 END');
      done()
    });
    /**
     * @tc.number hore_race_test_005
     * @tc.name delay
     * @tc.desc marqueeOptions:{delay:5.63}
     * @tc.level Level 1
     * @tc.type
     * @tc.size
     */
    it('hore_race_test_005', 0, async (done: Function) => {
      console.info("hore_race_test_005 START");
      let strJson: string = getInspectorByKey('Marquee4');
      let marq: ESObject = JSON.parse(JSON.parse(strJson).$attrs.marqueeOptions);
      expect(marq.delay).assertEqual('5');
      console.info('hore_race_test_005 END');
      done()
    });

  })
}