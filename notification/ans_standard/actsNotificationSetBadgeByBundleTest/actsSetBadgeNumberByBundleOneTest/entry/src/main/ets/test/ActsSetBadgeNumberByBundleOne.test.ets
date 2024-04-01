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
let TAG = 'setBadgeNumberByBundleOneTest()===';
let subscribeCallback = (err: Base.BusinessError) => {
  if (err) {
    hilog.error(domain, TAG, 'failed to subscribe notification: %{public}s', JSON.stringify(err));
  } else {
    hilog.info(domain, TAG, 'subscribeCallback');
  }
};

let bundle_valid: notificationManager.BundleOption = {
  bundle: 'com.acts.setbadgenumberbybundleonetest'
};
let bundle_invalid_option: notificationManager.BundleOption = {
  bundle: ''
};
let bundle_invalid_bundle_name: notificationManager.BundleOption = {
  bundle: 'com.acts.setbadgenumberbybundleinvalid'
};
let bundle_invalid_inconsistent: notificationManager.BundleOption = {
  bundle: 'com.acts.setbadgenumberbybundleonetest',
  uid: 1234567
};

export default function ActsSetBadgeByBundleOneTest() {
describe('ActsSetBadgeNumberByBundleOneTest', function () {
    let badgeNumber = 10;
    hilog.info(domain, TAG, ' START');

    /*
     * @tc.number: ActsSetBadgeNumberByBundleOneTest_0100
     * @tc.name: SetBadgeNumberByBundle with AGENT permission
     * @tc.desc: Test SetBadgeNumberByBundle with AGENT permission, expect callback function to be called.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('ActsSetBadgeNumberByBundleOneTest_0100', 0, async function (done) {
        let onBadgeChangedCallback = (data) => {
            hilog.info(domain, TAG, 'onbadge changed: %{public}s', JSON.stringify(data));
            expect(data.bundle == bundle_valid.bundle).assertTrue();
            notificationSubscribe.unsubscribe(subscriber);
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
            expect(false).assertTrue();
            done();
          })
    })

    /*
     * @tc.number: ActsSetBadgeNumberByBundleOneTest_0200
     * @tc.name: SetBadgeNumberByBundle with invalid bundleOption
     * @tc.desc: Test SetBadgeNumberByBundle with null bundle name, expect error code to be 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('ActsSetBadgeNumberByBundleOneTest_0200', 0, async function (done) {
        let onBadgeChangedCallback = (data) => {
            hilog.info(domain, TAG, 'onbadge changed: %{public}s', JSON.stringify(data));
            expect(false).assertTrue();
            notificationSubscribe.unsubscribe(subscriber);
            done();
        }

        let subscriber: notificationSubscribe.NotificationSubscriber = {
            onBadgeChanged: onBadgeChangedCallback,
        };
        notificationSubscribe.subscribe(subscriber, subscribeCallback);
        await notificationManager.setBadgeNumberByBundle(bundle_invalid_option, badgeNumber)
          .then(() => {
            hilog.info(domain, TAG, 'setBadgeNumberByBundle success');
          })
          .catch((err) => {
            hilog.error(domain, TAG, 'setBadgeNumberByBundle failed, error : %{public}s', JSON.stringify(err));
            expect(err.code == 401).assertTrue();
            notificationSubscribe.unsubscribe(subscriber);
            done();
          })
    })

    /*
     * @tc.number: ActsSetBadgeNumberByBundleOneTest_0300
     * @tc.name: SetBadgeNumberByBundle with invalid bundleOption
     * @tc.desc: Test SetBadgeNumberByBundle with invalid bundle name, expect error code to be 17700001.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('ActsSetBadgeNumberByBundleOneTest_0300', 0, async function (done) {
        let onBadgeChangedCallback = (data) => {
            hilog.info(domain, TAG, 'onbadge changed: %{public}s', JSON.stringify(data));
            expect(false).assertTrue();
            notificationSubscribe.unsubscribe(subscriber);
            done();
        }
        let subscriber: notificationSubscribe.NotificationSubscriber = {
            onBadgeChanged: onBadgeChangedCallback,
        };
        notificationSubscribe.subscribe(subscriber, subscribeCallback);
        await notificationManager.setBadgeNumberByBundle(bundle_invalid_bundle_name, badgeNumber)
          .then(() => {
            hilog.info(domain, TAG, 'setBadgeNumberByBundle success');
          })
          .catch((err) => {
            hilog.error(domain, TAG, 'setBadgeNumberByBundle failed, error : %{public}s', JSON.stringify(err));
            expect(err.code == 17700001).assertTrue();
            notificationSubscribe.unsubscribe(subscriber);
            done();
          })
    })

    /*
     * @tc.number: ActsSetBadgeNumberByBundleOneTest_0400
     * @tc.name: SetBadgeNumberByBundle with invalid bundleOption
     * @tc.desc: Test SetBadgeNumberByBundle with inconsistent bundle name and uid, expect error code to be 17700001.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('ActsSetBadgeNumberByBundleOneTest_0400', 0, async function (done) {
        let onBadgeChangedCallback = (data) => {
            hilog.info(domain, TAG, 'onbadge changed: %{public}s', JSON.stringify(data));
            expect(false).assertTrue();
            notificationSubscribe.unsubscribe(subscriber);
            done();
        }
        let subscriber: notificationSubscribe.NotificationSubscriber = {
            onBadgeChanged: onBadgeChangedCallback,
        };
        notificationSubscribe.subscribe(subscriber, subscribeCallback);
        await notificationManager.setBadgeNumberByBundle(bundle_invalid_inconsistent, badgeNumber)
          .then(() => {
            hilog.info(domain, TAG, 'setBadgeNumberByBundle success');
          })
          .catch((err) => {
            hilog.error(domain, TAG, 'setBadgeNumberByBundle failed, error : %{public}s', JSON.stringify(err));
            expect(err.code == 17700001).assertTrue();
            notificationSubscribe.unsubscribe(subscriber);
            done();
          })
    })
})
}
