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

import Base from '@ohos.base';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import hilog from '@ohos.hilog';
import notificationManager from '@ohos.notificationManager';
import notificationSubscribe from '@ohos.notificationSubscribe';

let domain: number = 0x0000;
let TAG = '==== notificationManager.setBadgeNumberByBundleThreeTest ===';

let subscribeCallback = (err: Base.BusinessError) => {
  if (err) {
    hilog.error(domain, TAG, 'failed to subscribe notification: %{public}s', JSON.stringify(err));
  } else {
    hilog.info(domain, TAG, 'subscribeCallback');
  }
};

let bundle_valid: notificationManager.BundleOption = {
  bundle: 'com.acts.setbadgenumberbybundlethreetest'
};

export default function ActsNotificationSetBadgeByBundleThreeTest() {
describe('ActsSetBadgeNumberByBundleThreeTest', function () {
    let badgeNumber = 10;

    /*
     * @tc.number: ActsSetBadgeNumberByBundleThreeTest_0100
     * @tc.name: SetBadgeNumberByBundle without non-system application
     * @tc.desc: The test application is non-system application expect to fail.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('ActsSetBadgeNumberByBundleThreeTest_0100', 0, async function (done) {
        let onBadgeChangedCallback = (data) => {
            hilog.info(domain, TAG, 'onbadge changed: %{public}s', JSON.stringify(data));
            expect(false).assertTrue();
            done();
        }

        let subscriber: notificationSubscribe.NotificationSubscriber = {
            onBadgeChanged: onBadgeChangedCallback,
        };
        notificationSubscribe.subscribe(subscriber, subscribeCallback);
        await notificationManager.setBadgeNumberByBundle(bundle_valid, badgeNumber)
          .then(() => {
            hilog.info(domain, TAG, 'setBadgeNumberByBundle success');
          })
          .catch((err) => {
            hilog.error(domain, TAG, 'setBadgeNumberByBundle failed, error : %{public}s', JSON.stringify(err));
            expect(err.code == 202).assertTrue();
            done();
          })
    })
})
}
