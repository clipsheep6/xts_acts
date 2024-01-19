/*
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
import { describe, beforeAll, afterEach, it } from '@ohos/hypium'
import router from '@system.router'
import { Driver, ON, Component } from '@ohos.UiTest'
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry'
import router from '@system.router'

const abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();

export default function abilityTest() {
  describe('ActsExceptionPromptTest', function () {
    beforeAll(async (done: Function) => {
      try {
        router.clear();
        let pages = router.getState();
        if (pages == null || !("Index" == pages.name)) {
          let driver = Driver.create()
          await router.push({
            uri: '../testability/pages/Index'
          });
          await driver.delayMs(2000);
        }
      } catch (err) {
        console.error("beforeEach error:" + JSON.stringify(err));
      }
      done()
    })
    afterEach(async (done: Function) => {
      let driver = Driver.create()
      await driver.delayMs(2);
      done()
    })
    /*
    *tc.number Advanced_ui_ExceptionPrompt_0100
    *tc.name   customized prompt text ExceptionPrompt UI test
    *tc.desc   Enter the prompt text in the customized prompt text box.
    */
    it("Advanced_ui_ExceptionPrompt_0100", 0, async (done: Function) => {
      try {
        let driver: Driver = Driver.create()
        await driver.delayMs(1000)
        await driver.assertComponentExist(ON.id('tip_input'))
        const tip_input: Component = await driver.findComponent(ON.id('tip_input'))
        await tip_input.inputText('提示文字');
        await driver.pressBack()
        await driver.delayMs(1000)
      }
      finally {
        console.log('====ssss')
        done()
      }
    });
    /*
    *tc.number Advanced_ui_ExceptionPrompt_0200
    *tc.name   Customized actionText content ExceptionPrompt UI test
    *tc.desc   Set the network in the custom actionText text box ExceptionPrompt UI
    */
    it("Advanced_ui_ExceptionPrompt_0200", 0, async (done: Function) => {
      try {
        let driver: Driver = Driver.create()
        await driver.delayMs(1000)
        await driver.assertComponentExist(ON.id('actionText_input'))
        const actionText_input: Component = await driver.findComponent(ON.id('actionText_input'))
        await actionText_input.inputText('设置网络');
        await driver.delayMs(1000)
        await driver.pressBack()
        await driver.delayMs(1000)
      }
      finally {
        done()
      }
    });
    /*
    *tc.number Advanced_ui_ExceptionPrompt_0300
    *tc.name   Click the option button ExceptionPrompt UI test
    *tc.desc   Click the Adaptable Margin radio button ExceptionPrompt UI
    */
    it("Advanced_ui_ExceptionPrompt_0300", 0, async (done: Function) => {
      try {
        let driver: Driver = Driver.create()
        await driver.delayMs(1000)
        await driver.assertComponentExist(ON.id('FIT_MARGIN'))
        const FIT_MARGIN_Radio: Component = await driver.findComponent(ON.id('FIT_MARGIN'))
        await FIT_MARGIN_Radio.click();
        await driver.delayMs(1000)
      }
      finally {
        done()
      }
    });
    /*
    *tc.number Advanced_ui_ExceptionPrompt_0400
    *tc.name   Click the option button ExceptionPrompt uI test
    *tc.desc   Click the default margin radio button ExceptionPrompt UI
    */
    it("Advanced_ui_ExceptionPrompt_0400", 0, async (done: Function) => {
      try {
        let driver: Driver = Driver.create()
        await driver.delayMs(1000)
        await driver.assertComponentExist(ON.id('DEFAULT_MARGIN'))
        const DEFAULT_MARGIN_Radio: Component = await driver.findComponent(ON.id('DEFAULT_MARGIN'))
        await DEFAULT_MARGIN_Radio.click();
        await driver.delayMs(1000)
      }
      finally {
        done()
      }
    });
    /*
    *tc.number Advanced_ui_ExceptionPrompt_0500
    *tc.name   Click the option button ExceptionPrompt UI test
    *tc.desc   Click the second status radio button ExceptionPrompt UI
    */
    it("Advanced_ui_ExceptionPrompt_0500", 0, async (done: Function) => {
      try {
        let driver: Driver = Driver.create()
        await driver.delayMs(1000)
        await driver.assertComponentExist(ON.id('second_status'))
        const second_status_Radio: Component = await driver.findComponent(ON.id('second_status'))
        await second_status_Radio.click();
        await driver.delayMs(1000)
      }
      finally {
        done()
      }
    });
    /*
    *tc.number Advanced_ui_ExceptionPrompt_0600
    *tc.name   Click the option button ExceptionPrompt UI test
    *tc.desc   Click the option button of the third state ExceptionPrompt UI
    */
    it("Advanced_ui_ExceptionPrompt_0600", 0, async (done: Function) => {
      try {
        let driver: Driver = Driver.create()
        await driver.delayMs(1000)
        await driver.assertComponentExist(ON.id('third_status'))
        const third_status_Radio: Component = await driver.findComponent(ON.id('third_status'))
        await third_status_Radio.click();
        await driver.delayMs(1000)
      }
      finally {
        done()
      }
    });
    /*
    *tc.number Advanced_ui_ExceptionPrompt_0700
    *tc.name   Click the option button ExceptionPrompt UI test
    *tc.desc   Click the option button of the fourth state ExceptionPrompt UI
    */
    it("Advanced_ui_ExceptionPrompt_0700", 0, async (done: Function) => {
      try {
        let driver: Driver = Driver.create()
        await driver.delayMs(1000)
        await driver.assertComponentExist(ON.id('fourth_status'))
        const fourth_status_Radio: Component = await driver.findComponent(ON.id('fourth_status'))
        await fourth_status_Radio.click();
        await driver.delayMs(1000)
      }
      finally {
        done()
      }
    });
    /*
    *tc.number Advanced_ui_ExceptionPrompt_0800
    *tc.name   Click the option button ExceptionPrompt UI test
    *tc.desc   Click the first state option button ExceptionPrompt UI
    */
    it("Advanced_ui_ExceptionPrompt_0800", 0, async (done: Function) => {
      try {
        let driver: Driver = Driver.create()
        await driver.delayMs(1000)
        await driver.assertComponentExist(ON.id('first_status'))
        const first_status_Radio: Component = await driver.findComponent(ON.id('first_status'))
        await first_status_Radio.click();
        await driver.delayMs(1000)
      }
      finally {
        done()
      }
    });
    /*
    *tc.number Advanced_ui_ExceptionPrompt_0900
    *tc.name   Click the button ExceptionPrompt uI test
    *tc.desc   Click the button with the icon ExceptionPrompt UI
    */
    it("Advanced_ui_ExceptionPrompt_0900", 0, async (done: Function) => {
      try {
        let driver: Driver = Driver.create()
        await driver.delayMs(1000)
        await driver.assertComponentExist(ON.id('icon_button'))
        const icon_button: Component = await driver.findComponent(ON.id('icon_button'))
        await icon_button.click();
        await driver.delayMs(1000)
      }
      finally {
        done()
      }
    });
    /*
    *tc.number Advanced_ui_ExceptionPrompt_1000
    *tc.name   Press the ActionText button ExceptionPrompt UI test
    *tc.desc   Touch and hold the ActionText button ExceptionPrompt UI
    */
    it("Advanced_ui_ExceptionPrompt_1000", 0, async (done: Function) => {
      try {
        let driver: Driver = Driver.create()
        await driver.delayMs(1000)
        await driver.assertComponentExist(ON.text('设置网络'))
        const ActionText_component: Component = await driver.findComponent(ON.text('设置网络'))
        await ActionText_component.longClick();
        await driver.delayMs(1000)
      }
      finally {
        done()
      }
    });
    /*
    *tc.number Advanced_ui_ExceptionPrompt_1100
    *tc.name   Click the button ExceptionPrompt UI test
    *tc.desc   Click the button for customizing the prompt content ExceptionPrompt UI
    */
    it("Advanced_ui_ExceptionPrompt_1100", 0, async (done: Function) => {
      try {
        let driver: Driver = Driver.create()
        await driver.delayMs(1000)
        await driver.assertComponentExist(ON.id('fit_content_button'))
        const fit_content_button: Component = await driver.findComponent(ON.id('fit_content_button'))
        await fit_content_button.click();
        await driver.delayMs(1000)
        const tip_input: Component = await driver.findComponent(ON.id('tip_input'))
        await tip_input.inputText("提示文字");
        await driver.pressBack()
        await driver.delayMs(1000)
      }
      finally {
        done()
      }
    });
    /*
    *tc.number Advanced_ui_ExceptionPrompt_1200
    *tc.name  Click the prompt text ExceptionPrompt uI test
    *tc.desc   Click the prompt text ExceptionPrompt UI
    */
    it("Advanced_ui_ExceptionPrompt_1200", 0, async (done: Function) => {
      try {
        let driver: Driver = Driver.create()
        await driver.delayMs(1000)
        await driver.assertComponentExist(ON.text('提示文字'))
        const tip_component: Component = await driver.findComponent(ON.text('提示文字'))
        await tip_component.click();
        await driver.delayMs(1000)
      }
      finally {
        done()
      }
    });
    /*
    *tc.number Advanced_ui_ExceptionPrompt_1300
    *ttc.name  Click the Hide button ExceptionPrompt uI test
    *tc.desc   Click the Hide button ExceptionPrompt UI
    */
    it("Advanced_ui_ExceptionPrompt_1300", 0, async (done: Function) => {
      try {
        let driver: Driver = Driver.create()
        await driver.delayMs(1000)
        await driver.assertComponentExist(ON.id('hide_button'))
        const hide_button: Component = await driver.findComponent(ON.id('hide_button'))
        await hide_button.click();
        await driver.delayMs(1000)
        done()
      }
      finally {
        done()
      }
    });
  })
}