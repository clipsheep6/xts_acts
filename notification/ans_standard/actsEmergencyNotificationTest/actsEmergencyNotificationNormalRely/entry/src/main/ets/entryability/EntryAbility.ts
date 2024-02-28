/*
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

import UIAbility from '@ohos.app.ability.UIAbility';
import hilog from '@ohos.hilog';
import window from '@ohos.window';
import Base from '@ohos.base';
import notification from '@ohos.notificationManager'


export default class EntryAbility extends UIAbility {
  onCreate(want, launchParam) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onCreate');
    if (want.action == 'FirstCase') {
      let pubishErrcode;
      let addSlotErrcode;
      let publishCallback = (err: Base.BusinessError): void => {
        if (err) {
          console.error(`ActsEmergencyNotificationTest_0900 publish failed, code is ${err.code}, message is ${err.message}`);
          pubishErrcode = err.code;
        } else {
          console.info('ActsEmergencyNotificationTest_0900 publish success');
        }
      }
      let notificationRequest: notification.NotificationRequest = {
        id: 1,
        content: {
          notificationContentType: notification.ContentType.NOTIFICATION_CONTENT_BASIC_TEXT,
          normal: {
            title: "test_title",
            text: "test_text",
            additionalText: "test_additionalText"
          }
        },
        notificationSlotType:notification.SlotType.EMERGENCY_INFORMATION
      };
      notification.publish(notificationRequest, publishCallback);
      notification.addSlot(notification.SlotType.EMERGENCY_INFORMATION).then(() => {
        console.info("ActsEmergencyNotificationTest_0200 addSlot success");
      }).catch((err: Base.BusinessError) => {
        console.error(`ActsEmergencyNotificationTest_0200 addSlot fail: ${JSON.stringify(err)}`);
        addSlotErrcode = err.code;
      });
      setTimeout(() => {
        console.info("ActsNotificationNoPermissionSystemRely start terminateSelfWithResult");
        console.info("ActsNotificationNoPermissionSystemRely pubishErrcode is :" + pubishErrcode);
        this.context.terminateSelfWithResult({
          resultCode: 0,
          want: {
            parameters: {
              PubishErrcode:pubishErrcode,
              AddSlotErrcode:addSlotErrcode
            }
          }
        }, (err) => {
          console.info("ActsNotificationNoPermissionSystemRelyterminateSelfWithResult err is :" + JSON.stringify(err));
        });
      }, 2000);
    }

    if (want.action == 'SecondCase') {
      let pubishErrcode;
      let publishCallback = (err: Base.BusinessError): void => {
        if (err) {
          console.error(`ActsEmergencyNotificationTest_1100 publish failed, code is ${err.code}, message is ${err.message}`);
          pubishErrcode = err.code;
        } else {
          console.info('ActsEmergencyNotificationTest_1100 publish success');
        }
      }
      let notificationRequest: notification.NotificationRequest = {
        id: 1,
        content: {
          notificationContentType: notification.ContentType.NOTIFICATION_CONTENT_BASIC_TEXT,
          normal: {
            title: "test_title",
            text: "test_text",
            additionalText: "test_additionalText"
          }
        },
        notificationSlotType:notification.SlotType.SOCIAL_COMMUNICATION,
        notificationControlFlags:notification.NotificationControlFlagStatus.NOTIFICATION_STATUS_CLOSE_BANNER
      };
      notification.publish(notificationRequest, publishCallback);
      setTimeout(() => {
        this.context.terminateSelf().then(() => {
          console.info("ActsEmergencyNotificationTest_1100 terminateSelf end");
        }).catch((err: Base.BusinessError) => {
          console.info("ActsEmergencyNotificationTest_1100 terminateSelf err:" + JSON.stringify(err));
        });
      }, 50)
    }
  }

  onDestroy() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onDestroy');
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageCreate');

    windowStage.loadContent('pages/Index', (err, data) => {
      if (err.code) {
        hilog.error(0x0000, 'testTag', 'Failed to load the content. Cause: %{public}s', JSON.stringify(err) ?? '');
        return;
      }
      hilog.info(0x0000, 'testTag', 'Succeeded in loading the content. Data: %{public}s', JSON.stringify(data) ?? '');
    });
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageDestroy');
  }

  onForeground() {
    // Ability has brought to foreground
      console.info("ActsEmergencyNotificationNormalRely is onForeground");
  }

  onBackground() {
    // Ability has back to background
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onBackground');
  }
}
