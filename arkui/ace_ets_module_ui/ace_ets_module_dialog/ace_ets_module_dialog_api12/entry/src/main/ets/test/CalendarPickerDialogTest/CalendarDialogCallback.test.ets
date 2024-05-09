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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"
import router from '@system.router';
import { Driver, ON } from '@ohos.UiTest';
import CommonFunc from '../../MainAbility/utils/Common';
import events_emitter from '@ohos.events.emitter';


export default function CalendarDialogCallback() {
  describe('CalendarDialogCallback', function () {
    beforeEach(async function (done) {
      console.info("CalendarDialogAJsunit beforeEach start");
      let options = {
        uri: 'MainAbility/pages/CalendarPickerDialog/CalendarDialogCallback',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get CalendarDialogCallback state pages: " + JSON.stringify(pages));
        if (!("CalendarDialogCallback" == pages.name)) {
          console.info("get CalendarDialogCallback state pages.name: " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await CommonFunc.sleep(2000);
          console.info("push CalendarDialogCallback page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push CalendarDialogCallback page error: " + err);
        expect().assertFail();
      }
      done()
    });

    /**
     * @tc.number    : SUB_ACE_ARKUI_CALENDAR_PICKER_DIALOG_CALLBACK_0100
     * @tc.name      : test calendarPicker dialog callback function
     * @tc.desc      : onWillAppear,onDidAppear,onWillDisappear,onDidDisappear
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : level 0
     */
    it('CalendarPickerDialogCallback_0100', 0, async (done) => {
      let driver1 = Driver.create();
      await new Promise((res, rej) => setTimeout(res, 1500, '1'))
      let button = await driver1.findComponent(ON.id('Calendar_dialog_A'));
      await button.click();

      let callback = (event) => {
        expect(event.data.action).assertEqual('1234');
        console.info('CalendarPickerDialogCallback_0100 event04: ' + event.data.action);
        done();
      }
      let event3 = {
        eventId: 50004,
        priority: events_emitter.EventPriority.LOW
      }
      events_emitter.on(event3, callback);
      console.info('CalendarPickerDialogCallback_0100 START');
      await new Promise((res, rej) => setTimeout(res, 1000, '1'))
      await driver1.pressBack();
    });
  })
}
