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

import notificationManager from '@ohos.notificationManager';
import Base from '@ohos.base';
import { Driver, ON } from '@ohos.UiTest';
import hilog from '@ohos.hilog';
import common from '@ohos.app.ability.common';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it } from '@ohos/hypium';
const DOMAIN_NUMBER: number = 0xFF00;
let context = getContext(this) as common.UIAbilityContext;

export default function ActsDenyTest() {
  describe('SUB_ACTS_DENY_TEST', () => {
    const TAG = 'SUB_ACTS_DENY_TEST ===>';

    /*
     * @tc.number    : Sub_Notification_Ans_NotificationManager_RequestEnableNotification_Deny_Test_0100
     * @tc.name      : function requestEnableNotification(context): Promise<void>
     * @tc.desc      : requestEnableNotification deny button is clicked
     */
    it('Sub_Notification_Ans_NotificationManager_RequestEnableNotification_Deny_Test_0100', 0, async (done: Function) => {
        notificationManager.isNotificationEnabled().then((data: boolean) => {
            console.info("isNotificationEnabled success, data: " + JSON.stringify(data));
            if(!data){
                notificationManager.requestEnableNotification(context).then(() => {
                hilog.info(DOMAIN_NUMBER, TAG, `[ANS] requestEnableNotification success`);
                }).catch((err : Base.BusinessError) => {
                if(1600004 == err.code){
                    hilog.error(DOMAIN_NUMBER, TAG, `[ANS] requestEnableNotification refused, code is ${err.code}, message is ${err.message}`);
                    expect(false).assertEqual(true)
                    done()
                    } else {
                        hilog.error(DOMAIN_NUMBER, TAG, `[ANS] requestEnableNotification failed, code is ${err.code}, message is ${err.message}`);
                        expect(false).assertEqual(true)
                        done()
                    }
                });
            }
        }).catch((err : Base.BusinessError) => {
            hilog.error(DOMAIN_NUMBER, TAG, `isNotificationEnabled fail: ${JSON.stringify(err)}`);
            expect(false).assertEqual(true)
            done()
        });

        let driver = Driver.create();
        await sleep(1500)
        let button = await driver.findComponent(ON.text('禁止'));

        if (button !== null) {
            await button.click();
            done()
        } else {
            console.info('null button');
            expect(false).assertEqual(true)
            done()
        }
      });
  });
};