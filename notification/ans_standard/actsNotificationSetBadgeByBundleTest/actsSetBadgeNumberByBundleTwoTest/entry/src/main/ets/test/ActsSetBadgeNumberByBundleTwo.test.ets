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
let TAG = '==== notificationManager.setBadgeNumberByBundleTwoTest ===';
let subscribeCallback = (err: Base.BusinessError) => {
  if (err) {
    hilog.error(domain, TAG, 'failed to subscribe notification: %{public}s', JSON.stringify(err));
  } else {
    hilog.info(domain, TAG, 'subscribeCallback');
  }
};

let bundle_invalid_delegate: notificationManager.BundleOption = {
  bundle: 'com.acts.setbadgenumberbybundleonetest'
};

export default function ActsSetBadgeNumberByBundleTwoTest() {
describe('ActsSetBadgeNumberByBundleTwoTest', function () {
    let badgeNumber = 10;
    hilog.info(domain, TAG, ' START');
    /*
     * @tc.number: ActsSetBadgeNumberByBundleTwoTest_0100
     * @tc.name: setBadgeNumberByBundle without relationship
     * @tc.desc: The test application has neither AGENT permission nor delegate relationship with the specified bundle.
     *           Expect error code 1600017.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('ActsSetBadgeNumberByBundleTwoTest_0100', 0, async function (done) {
        let onBadgeChangedCallback = (data) => {
            hilog.info(domain, TAG, 'onbadge changed: %{public}s', JSON.stringify(data));
            expect(false).assertTrue();
            done();
        }

        let subscriber: notificationSubscribe.NotificationSubscriber = {
            onBadgeChanged: onBadgeChangedCallback,
        };
        notificationSubscribe.subscribe(subscriber, subscribeCallback);

        await notificationManager.setBadgeNumberByBundle(bundle_invalid_delegate, badgeNumber)
          .then(() => {
            hilog.info(domain, TAG, 'setBadgeNumberByBundle success');
            expect(false).assertTrue();
            done();
          })
          .catch((err) => {
            hilog.error(domain, TAG, 'setBadgeNumberByBundle failed, error : %{public}s', JSON.stringify(err));
            expect(err.code == 1600017).assertTrue();
            notificationSubscribe.unsubscribe(subscriber);
            done();
          })
    })
})
}
