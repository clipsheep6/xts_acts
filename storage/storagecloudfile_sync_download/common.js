/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
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
import abilityAccessCtrl from "@ohos.abilityAccessCtrl";
import bundle from "@ohos.bundle";
import uitest from "@ohos.UiTest";

const sleep = async function sleep(times) {
    if (!times) {
        times = 10;
    }
    await new Promise((res) => setTimeout(res, times));
};

const getPermission = async function (name, context) {
    if (!name) {
        name = "ohos.acts.multimedia.mediaLibrary";
    }
    console.info("getPermission start", name);

    let permissions = ["ohos.permission.MEDIA_LOCATION", "ohos.permission.READ_MEDIA", "ohos.permission.WRITE_MEDIA"];

    let atManager = abilityAccessCtrl.createAtManager();
    try {
        atManager.requestPermissionsFromUser(context, permissions, (err, data) => {
            console.info(`getPermission requestPermissionsFromUser ${JSON.stringify(data)}`);
        });
    } catch (err) {
        console.log(`get permission catch err -> ${JSON.stringify(err)}`);
    }
    await sleep(1000);
    let driver = uitest.Driver.create();
    
    await sleep(2000);
    let button = await driver.findComponent(uitest.ON.text("允许"));
    await button.click();
    await sleep(2000);

    let appInfo = await bundle.getApplicationInfo(name, 0, 100);
    let tokenID = appInfo.accessTokenId;
    
    let isGranted1 = await atManager.verifyAccessToken(tokenID, "ohos.permission.MEDIA_LOCATION");
    let isGranted2 = await atManager.verifyAccessToken(tokenID, "ohos.permission.READ_MEDIA");
    let isGranted3 = await atManager.verifyAccessToken(tokenID, "ohos.permission.WRITE_MEDIA");
    if (!(isGranted1 == 0 && isGranted2 == 0 && isGranted3 == 0)) {
        console.info("getPermission failed");
    }
    console.info("getPermission end");
};

export {
    getPermission,
    sleep
};
