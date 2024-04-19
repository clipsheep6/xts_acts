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

export default function DatePickerDialogCallback() {
  describe('DatePickerDialogCallback', function () {
    beforeEach(async function (done) {
      console.info("DatePickerDialogAJsunit beforeEach start");
      let options = {
        uri: 'MainAbility/pages/DatePickerDialog/DatePickerDialogCallback',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get DatePickerDialogCallback state pages: " + JSON.stringify(pages));
        if (!("DatePickerDialogCallback" == pages.name)) {
          console.info("get DatePickerDialogCallback state pages.name: " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await CommonFunc.sleep(2000);
          console.info("push DatePickerDialogCallback page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push DatePickerDialogCallback page error: " + err);
        expect().assertFail();
      }
      done()
    });

    /**
     * @tc.number    : SUB_ACE_ARKUI_DATE_PICKER_DIALOG_CALLBACK_0100
     * @tc.name      : test datePicker dialog callback function
     * @tc.desc      : onWillAppear,onDidAppear,onWillDisappear,onDidDisappear
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : level 0
     */
    it('DatePickerDialogCallback_0100', 0, async (done) => {
      let driver1 = Driver.create();
      let button = await driver1.findComponent(ON.id('DatePicker_dialog_B'));
      await button.click();
      await new Promise((res, rej) => setTimeout(res, 3000, '1'))

      let callback = (event) => {
        expect(event.data.action).assertEqual('1234');
        console.info('DatePickerDialogCallback_0100 event04: ' + event.data.action);
        done();
      }
      let event3 = {
        eventId: 50004,
        priority: events_emitter.EventPriority.LOW
      }
      events_emitter.on(event3, callback);
      await new Promise((res, rej) => setTimeout(res, 3000, '1'))
      await driver1.pressBack();

    });

  })
}
