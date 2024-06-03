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

export default function MarqueeHorseRace6() {
  const SUITE: string = 'MarqueeHorseRace5';

  describe('MarqueeHorseRace6', () => {
    beforeEach(async (done: Function) => {
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/Text/MarqueeHorseRace6',
      }
      try {
        router.clear();
        let pages: router.RouterState = router.getState();
        if (pages == null || !("MarqueeHorseRace6" == pages.name)) {
          await router.pushUrl(options).then(() => {
            console.info(`${SUITE} router.pushUrl success`);
          }).catch((err: BusinessError) => {
            console.error(`${SUITE} router.pushUrl failed, code is ${err.code}, message is ${err.message}`);
          })
        }
      } catch (err) {
        console.error("push MarqueeHorseRace6 page error: " + err);
      }
      done();
    });
    afterEach(async () => {
      console.info("MarqueeHorseRace6 after each called");
    });
    /**
     * @tc.number hore_race_test_002
     * @tc.name step
     * @tc.desc marqueeOptions:{step:5000000000000000000}
     * @tc.level Level 1
     * @tc.type
     * @tc.size
     */
    it('hore_race_test_002', 0, async (done: Function) => {
      console.info("hore_race_test_002 START");
      await commFunc.sleep(1000)
      let strJson: string = getInspectorByKey('Marquee6');
      let marq: ESObject = JSON.parse(JSON.parse(strJson).$attrs.marqueeOptions);
      expect((marq.step / 1.5).toFixed(2)).assertEqual('5000000000000000000.00')
      console.info('hore_race_test_002 END');
      done()
    });
  })
}