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
let TAG = 'onBadgeEnabledChangedOneTest()====';
let subscribeCallback = (err: Base.BusinessError) => {
  if (err) {
    hilog.error(domain, TAG, 'failed to subscribe notification: %{public}s', JSON.stringify(err));
  } else {
    hilog.info(domain, TAG, 'subscribeCallback');
  }
};

let bundle_valid: notificationManager.BundleOption = {
  bundle: 'com.acts.onbadgeenabledchangedonetest'
};
let bundle_invalid: notificationManager.BundleOption = {
  bundle: 'com.acts.onbadgeenabledchangedonetestinvalid'
};

export default function ActsOnBadgeEnabledChangedOneTest() {
describe('ActsOnBadgeEnabledChangedOneTest', function () {
    hilog.info(domain, TAG, ' START');
    /*
     * @tc.number: ActsOnBadgeEnabledChangedOneTest_0100
     * @tc.name: onBadgeEnabledChangedOneTest_0100
     * @tc.desc: Test onBadgeEnabledChanged, given valid bundleOption and badgeShow change to true.
     *           Expect to trigger onBadgeEnabledChanged.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('ActsOnBadgeEnabledChangedOneTest_0100', 0, async function (done) {
        let badgeShow = true;
        TAG = 'onBadgeEnabledChangedOne====';

        let onBadgeEnabledChangedCallback = (data) => {
            hilog.info(domain, TAG, 'onbadge changed: %{public}s', JSON.stringify(data));
            expect(data.bundle == bundle_valid.bundle).assertTrue();
            expect(data.enable = badgeShow).assertTrue();
            notificationSubscribe.unsubscribe(subscriber);
            done();
        }
        let subscriber: notificationSubscribe.NotificationSubscriber = {
            onBadgeEnabledChanged: onBadgeEnabledChangedCallback,
        };
        notificationSubscribe.subscribe(subscriber, subscribeCallback);

        await notificationManager.displayBadge(bundle_valid, badgeShow)
          .then(() => {
            hilog.info(domain, TAG, 'displayBadge success');
          })
          .catch((err) => {
            hilog.error(domain, TAG, 'displayBadge failed, error : %{public}s', JSON.stringify(err));
            expect(false).assertTrue();
            done();
          })
    })

    /*
     * @tc.number: ActsOnBadgeEnabledChangedOneTest_0200
     * @tc.name: onBadgeEnabledChangedOneTest_0200
     * @tc.desc: Test onBadgeEnabledChanged, given valid bundleOption and badgeShow change to false.
     *           Expect to trigger onBadgeEnabledChanged.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('ActsOnBadgeEnabledChangedOneTest_0200', 0, async function (done) {
        let badgeShow = false;
        let TAG = 'onBadgeEnabledChangedTwo====';

        let onBadgeEnabledChangedCallback = (data) => {
            hilog.info(domain, TAG, 'onbadge changed: %{public}s', JSON.stringify(data));
            expect(data.bundle == bundle_valid.bundle).assertTrue();
            expect(data.enable == badgeShow).assertTrue();
            notificationSubscribe.unsubscribe(subscriber);
            done();
        }
        let subscriber: notificationSubscribe.NotificationSubscriber = {
            onBadgeEnabledChanged: onBadgeEnabledChangedCallback
        };
        notificationSubscribe.subscribe(subscriber, subscribeCallback);

        await notificationManager.displayBadge(bundle_valid, badgeShow)
          .then(() => {
            hilog.info(domain, TAG, 'displayBadge success');
          })
          .catch((err) => {
            hilog.error(domain, TAG, 'displayBadge failed, error : %{public}s', JSON.stringify(err));
            expect(false).assertTrue();
            done();
          })
    })
})
}
