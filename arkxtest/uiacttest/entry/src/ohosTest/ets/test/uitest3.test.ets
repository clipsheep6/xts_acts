/**
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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
import { describe, expect, it } from '@ohos/hypium'
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry'
import { DisplayRotation, Driver, MatchPattern, ON, ResizeDirection, WindowMode } from '@ohos.UiTest'
import CommonFunc from '../utils/Common';

const delegator = abilityDelegatorRegistry.getAbilityDelegator();
const bundleName = abilityDelegatorRegistry.getArguments().bundleName;
const waitUiReadyMs = 1000;


async function startAbility(bundleName: string, abilityName: string) {
  let want = {
    bundleName: `${bundleName}`,
    abilityName: `${abilityName}`,
    moduleName: "entry"
  };

  await abilityDelegatorRegistry.getAbilityDelegator().startAbility(want).then(result => {
    console.info(`UiTestCase, start abilityFinished: ${result}`)
  }).catch(err => {
    console.error(`UiTestCase, start abilityFailed: ${err}`)
  })
}

export default function UiTest3() {

  describe('UiTest3', function () {

    /*
    * @tc.number: TEST_LONGCLICK_CLICK_0139
    * @tc.name: testSwipe
    * @tc.desc: swipe on the screen between the specified points.
    * @tc.size: MediumTest
    * @tc.type: Function
    * @tc.level:2
    */
    it('TEST_LONGCLICK_CLICK_0139', 0, async function (done) {
      console.info('TEST_LONGCLICK_CLICK_0139 start')
      await startAbility('com.example.uiacttest', 'UiTestAbility')
      let driver = Driver.create()
      await driver.delayMs(3000)
      for (let i = 0; i < 1000; i++) {
        await driver.fling({
          x: 300, y: 600
        }, {
          x: 300, y: 300
        }, 20, 3000)
        await driver.click(30, 30)
        await driver.swipe(300, 600, 300, 300)
        await driver.delayMs(10)
      }
      let text = await driver.findComponent(ON.text('bottom'))
      try {
        expect(text != null).assertTrue()
        console.info('TEST_LONGCLICK_CLICK_0139 pass')
        done()
      } catch (e) {
        console.info('TEST_LONGCLICK_CLICK_0139 error' + e)
        done()
      }
    })

  })
}