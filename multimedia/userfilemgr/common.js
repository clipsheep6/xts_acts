/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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

// @ts-nocheck
import abilityAccessCtrl from "@ohos.abilityAccessCtrl";
import bundle from "@ohos.bundle";
import uitest from "@ohos.UiTest";

const JPG_HEIGHT = 1706;
const JPG_WIDTH = 1279;
const sleep = async function sleep(times) {
    if (!times) {
        times = 10;
    }
    await new Promise((res) => setTimeout(res, times));
};

const getUserFileMgrPermission = async function (name, context) {
    if (!name) {
        name = "ohos.acts.multimedia.userfilemgr";
    }
    console.info("userfilemgr getPermission start", name);
    let permissions = [
        "ohos.permission.MEDIA_LOCATION",
        "ohos.permission.READ_IMAGEVIDEO",
        "ohos.permission.READ_AUDIO",
        "ohos.permission.READ_DOCUMENT",
        "ohos.permission.WRITE_IMAGEVIDEO",
        "ohos.permission.WRITE_AUDIO",
        "ohos.permission.WRITE_DOCUMENT"
    ];

    let atManager = abilityAccessCtrl.createAtManager();
    try {
        atManager.requestPermissionsFromUser(context, permissions, (err, data) => {
            console.info(`getPermission requestPermissionsFromUser ${JSON.stringify(data)}`);
        });
    } catch (err) {
        console.info(`getPermission catch err -> ${JSON.stringify(err)}`);
    }
    await sleep(500);
    let driver = uitest.Driver.create();
    await sleep(1000);
    let button = await driver.findComponent(uitest.ON.text("允许"));
    while (button) {
        await button.click();
        await sleep(1000);

        button = await driver.findComponent(uitest.ON.text("允许"));
    }
    await sleep(1000);
    let appInfo = await bundle.getApplicationInfo(name, 0, 100);
    let tokenID = appInfo.accessTokenId;

    let isGranted1 = await atManager.verifyAccessToken(tokenID, "ohos.permission.MEDIA_LOCATION");
    let isGranted2 = await atManager.verifyAccessToken(tokenID, "ohos.permission.WRITE_IMAGEVIDEO");
    let isGranted3 = await atManager.verifyAccessToken(tokenID, "ohos.permission.READ_IMAGEVIDEO");
    let isGranted4 = await atManager.verifyAccessToken(tokenID, "ohos.permission.WRITE_AUDIO");
    let isGranted5 = await atManager.verifyAccessToken(tokenID, "ohos.permission.READ_AUDIO");
    if (!(isGranted1 == 0 && isGranted2 == 0 && isGranted3 == 0 && isGranted4 == 0 && isGranted5 == 0)) {
        console.info("getPermission failed");
    }
    await sleep(1000);
    console.info("getPermission end");
};

const isNum = function (value) {
    return typeof value === "number" && !isNaN(value);
};

export {
    getUserFileMgrPermission,
    sleep,
    JPG_HEIGHT,
    JPG_WIDTH,
    isNum,
};
