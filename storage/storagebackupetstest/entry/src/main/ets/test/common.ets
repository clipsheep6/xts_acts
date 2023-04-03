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
import hilog from '@ohos.hilog'
import fileAccess from '@ohos.file.fileAccess'
import fileIO from '@ohos.file.fs';

const DOMAIN_CODE = 0x0001;
const TAG = 'backupTest';
const BUFF_LEN = 2048000;

function isIntNum(val) {
  return typeof val === 'number' && val % 1 === 0;
}

async function untarAppHap(helper, appName) {
  try {
    let value = await globalThis.abilityResource.getRawFd(appName);
    let fileInfo = await helper.getFileInfoFromRelativePath("Download");
    let fileUri = await helper.createFile(fileInfo.uri, appName);
    hilog.info(DOMAIN_CODE, TAG, `file uri is: ${fileUri}`);
    let newFd = await helper.openFile(fileUri, fileAccess.OPENFLAGS.WRITE_READ);
    let buffer = new ArrayBuffer(BUFF_LEN);
    let bytesRead = fileIO.readSync(value.fd, buffer, {
      offset: value.offset,
      length: value.length
    });
    fileIO.writeSync(newFd, buffer, { length: bytesRead });
    fileIO.closeSync(value.fd);
    fileIO.closeSync(newFd);
  } catch (err) {
    hilog.error(DOMAIN_CODE, TAG, "restore " + err.message);
  }
}

async function installApp(appName) {
  try {
    let cmd = "bm install -p /storage/media/100/local/files/Download/" + appName;
    hilog.info(DOMAIN_CODE, TAG, "install app " + cmd);
    await globalThis.abilityDelegator.executeShellCommand(cmd);
  } catch (err) {
    hilog.error(DOMAIN_CODE, TAG, "install app err, " + err.message);
  }
}

async function uninstallApp(appName) {
  try {
    let cmd = "bm uninstall -n " + appName;
    hilog.info(DOMAIN_CODE, TAG, "uninstall app " + cmd);
    await globalThis.abilityDelegator.executeShellCommand(cmd);
  } catch (err) {
    hilog.error(DOMAIN_CODE, TAG, "install app err, " + err.message);
  }
}

export { isIntNum, untarAppHap, installApp, uninstallApp }