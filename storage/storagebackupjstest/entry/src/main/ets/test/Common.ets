/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import abilityAccessCtrl from "@ohos.abilityAccessCtrl";
import bundle from "@ohos.bundle";
import { Driver, ON } from '@ohos.UiTest';

export async function sleep(times) {
    if (!times) {
        times = 10;
    }
    await new Promise((res) => setTimeout(res, times));
};

export async function getPermission (name, context) {
    if (!name) {
        name = "ohos.acts.storage.backup";
    }
    console.info("getPermission start", name);
    let permissions = [
        "ohos.permission.READ_MEDIA",
        "ohos.permission.WRITE_MEDIA"
    ];
    context.requestPermissionsFromUser(permissions, 666, (data) => {
        console.info(`getPermission requestPermissionsFromUser ${JSON.stringify(data)}`);
    });
    await sleep(200);

    let driver = Driver.create();
    await driver.delayMs(1000);

    let button = await driver.findComponent(ON.text("允许").clickable(true));
    if (button != undefined) {
        await button.click();
        await driver.delayMs(1000);
    }

    let appInfo = await bundle.getApplicationInfo(name, 0, 100);
    let tokenID = appInfo.accessTokenId;
    let atManager = abilityAccessCtrl.createAtManager();
    let isGranted1 = await atManager.checkAccessToken(tokenID, "ohos.permission.READ_MEDIA");
    let isGranted2 = await atManager.checkAccessToken(tokenID, "ohos.permission.WRITE_MEDIA");
    if (!(isGranted1 == 0 && isGranted2 == 0)) {
        console.info("getPermission failed");
    }
    console.info("getPermission end");
};

export function isIntNum(val) {
  return typeof val === 'number' && val % 1 === 0;
}
