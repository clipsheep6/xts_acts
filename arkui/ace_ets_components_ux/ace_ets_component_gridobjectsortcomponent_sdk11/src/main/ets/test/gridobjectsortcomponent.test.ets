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
import { Driver, ON, Component } from '@ohos.UiTest'
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry'
import router from '@system.router'

const abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();

export default function abilityTest() {
  describe('ActsGridObjectSortComponentTest', function () {
    beforeAll(async (done: Function) => {
      try {
        router.clear();
        let pages = router.getState();
        if (pages == null || !("Index" == pages.name)) {
          let driver = Driver.create()
          await router.push({
            uri: 'testability/pages/Index'
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
    *@tc.number Advanced_ui_GridObjectSortComponent_0100
    *@tc.name   click the text mode button of the gridobjectsortcomponent component
    *@tc.desc   Click the text mode button to enter the text mode.
    */
    it("Advanced_ui_GridObjectSortComponent_0100", 0, async (done: Function) => {
      try {
        let driver: Driver = Driver.create()
        await driver.delayMs(1000)
        await driver.assertComponentExist(ON.id('text_mode'))
        const text_mode_button: Component = await driver.findComponent(ON.id('text_mode'))
        await text_mode_button.click();
        await driver.delayMs(1000)
      } finally {
        done()
      }
    });
    /*
    *@tc.number Advanced_ui_GridObjectSortComponent_0200
    *@tc.name   Drag and drop the gridobjectsortcomponent component
    *@tc.desc   Drag-and-drop function in text mode
    */
    it("Advanced_ui_GridObjectSortComponent_0200", 0, async (done: Function) => {
      try {
        let driver: Driver = Driver.create()
        await driver.delayMs(1000)
        await driver.assertComponentExist(ON.text('影视'))
        await driver.assertComponentExist(ON.text('动漫'))
        const component1: Component = await driver.findComponent(ON.text('影视'))
        const component2: Component = await driver.findComponent(ON.text('动漫'))
        await component1.longClick();
        await driver.delayMs(1000)
        await component1.dragTo(component2);
        await driver.delayMs(1000)
      } finally {
        done()
      }
    });
    /*
    *@tc.number Advanced_ui_GridObjectSortComponent_0300
    *@tc.name   Drag and drop the gridobjectsortcomponent component
    *@tc.desc   Drag-and-drop function in text mode
    */
    it("Advanced_ui_GridObjectSortComponent_0300", 0, async (done: Function) => {
      try {
        let driver: Driver = Driver.create()
        await driver.delayMs(1000)
        await driver.assertComponentExist(ON.text('科技'))
        await driver.assertComponentExist(ON.text('军事'))
        const component1: Component = await driver.findComponent(ON.text('科技'))
        const component2: Component = await driver.findComponent(ON.text('军事'))
        await component1.longClick();
        await driver.delayMs(1000)
        await component1.dragTo(component2);
        await driver.delayMs(1000)
      } finally {
        done()
      }
    });
    /*
    *@tc.number Advanced_ui_GridObjectSortComponent_0400
    *@tc.name   Click to add data in text mode the gridobjectsortcomponent component
    *@tc.desc   Click to add data in text mode.
    */
    it("Advanced_ui_GridObjectSortComponent_0400", 0, async (done: Function) => {
      try {
        let driver: Driver = Driver.create()
        await driver.delayMs(1000)
        await driver.assertComponentExist(ON.text('宇宙'))
        const component: Component = await driver.findComponent(ON.text('宇宙'))
        await component.click();
        await driver.delayMs(1000)
      } finally {
        done()
      }
    });
    /*
    *@tc.number Advanced_ui_GridObjectSortComponent_0500
    *@tc.name   Click to add data in text mode the gridobjectsortcomponent component
    *@tc.desc   Click to add data in text mode.
    */
    it("Advanced_ui_GridObjectSortComponent_0500", 0, async (done: Function) => {
      try {
        let driver: Driver = Driver.create()
        await driver.delayMs(1000)
        await driver.assertComponentExist(ON.text('游戏'))
        const component: Component = await driver.findComponent(ON.text('游戏'))
        await component.click();
        await driver.delayMs(1000)
      } finally {
        done()
      }
    });
    /*
    *@tc.number Advanced_ui_GridObjectSortComponent_0600
    *@tc.name   Click to add data in text mode the gridobjectsortcomponent component
    *@tc.desc   Click to add data in text mode.
    */
    it("Advanced_ui_GridObjectSortComponent_0600", 0, async (done: Function) => {
      try {
        let driver: Driver = Driver.create()
        await driver.delayMs(1000)
        await driver.assertComponentExist(ON.text('课程'))
        const component: Component = await driver.findComponent(ON.text('课程'))
        await component.click();
        await driver.delayMs(1000)
      } finally {
        done()
      }
    });
    /*
    *@tc.number Advanced_ui_GridObjectSortComponent_0700
    *@tc.name   Click to add data in text mode the gridobjectsortcomponent component
    *@tc.desc   Click to add data in text mode.
    */
    it("Advanced_ui_GridObjectSortComponent_0700", 0, async (done: Function) => {
      try {
        let driver: Driver = Driver.create()
        await driver.delayMs(1000)
        await driver.pressBack();
        await driver.delayMs(1000)
      } finally {
        done()
      }
    });
    /*
    *@tc.number Advanced_ui_GridObjectSortComponent_0800
    *@tc.name   Click to add data in text mode the gridobjectsortcomponent component
    *@tc.desc   Click to add data in text mode.
    */
    it("Advanced_ui_GridObjectSortComponent_0800", 0, async (done: Function) => {
      try {
        let driver: Driver = Driver.create()
        await driver.delayMs(1000)
        await driver.assertComponentExist(ON.id('graphic_mode'))
        const graphic_mode_button: Component = await driver.findComponent(ON.id('graphic_mode'))
        await graphic_mode_button.click();
        await driver.delayMs(1000)
      } finally {
        done()
      }
    });
    /*
    *@tc.number Advanced_ui_GridObjectSortComponent_0900
    *@tc.name   Drag and drop in graphic mode the gridobjectsortcomponent component
    *@tc.desc   Drag and drop in graphic mode
    */
    it("Advanced_ui_GridObjectSortComponent_0900", 0, async (done: Function) => {
      try {
        let driver: Driver = Driver.create()
        await driver.delayMs(1000)
        await driver.assertComponentExist(ON.text('热门'))
        await driver.assertComponentExist(ON.text('美食'))
        const component1: Component = await driver.findComponent(ON.text('热门'))
        const component2: Component = await driver.findComponent(ON.text('美食'))
        await component1.longClick();
        await driver.delayMs(1000)
        await component1.dragTo(component2);
        await driver.delayMs(1000)
      } finally {
        done()
      }
    });
    /*
    *@tc.number Advanced_ui_GridObjectSortComponent_1000
    *@tc.name   Drag and drop in graphic mode the gridobjectsortcomponent component
    *@tc.desc   Drag and drop in graphic mode
    */
    it("Advanced_ui_GridObjectSortComponent_1000", 0, async (done: Function) => {
      try {
        let driver: Driver = Driver.create()
        await driver.delayMs(1000)
        await driver.assertComponentExist(ON.text('油管'))
        await driver.assertComponentExist(ON.text('军事'))
        const component1: Component = await driver.findComponent(ON.text('油管'))
        const component2: Component = await driver.findComponent(ON.text('军事'))
        await component1.longClick();
        await driver.delayMs(1000)
        await component1.dragTo(component2);
        await driver.delayMs(1000)
        await driver.pressBack();
        await driver.delayMs(2000)
      } finally {
        done()
      }
    });

  })
}