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
import hilog from '@ohos.hilog'

const DOMAIN_CODE = 0x0001;
const TAG = 'common';

function randomString(num) {
  var $chars = 'hello,world';
  var maxPos = $chars.length;
  var pwd = '';
  for (var i = 0; i < num; i++) {
    pwd += $chars.charAt(Math.floor(Math.random() * maxPos));
  }
  return pwd;
}

function sleep(millisecond) {
  var start = new Date().getTime();
  while (true) {
    if (new Date().getTime() - start > millisecond) {
      break;
    }
  }
}

function listFile(uri, filter) {
  try {
    let filesArr = [];
    let isDone = false;
    let fileInfo = globalThis.filesArrData.find(item => item.uri == uri);
    let fileIterator = null;
    if (filter) {
      fileIterator = fileInfo.listFile(filter);
    } else {
      fileIterator = fileInfo.listFile();
    }
    while (!isDone) {
      try {
        let result = fileIterator.next();
        if (result) {
          isDone = result.done;
          if (!isDone) {
            filesArr.push({
              "uri": result.value.uri,
              "name": result.value.fileName,
            })
            globalThis.filesArrData.push(result.value);
          }
        } else {
          isDone = true;
        }
      } catch (e) {
        isDone = true;
      }
    }
    return filesArr;
  } catch (e) {
    hilog.error(DOMAIN_CODE, TAG, 'listFile' + e.message);
  }
}

function scanFile(uri, filter) {
  try {
    let isDone = false;
    let count = 0;
    let fileInfo = globalThis.filesArrData.find(item => item.uri == uri);
    let fileIterator = null;
    if (filter) {
      fileIterator = fileInfo.scanFile(filter);
    } else {
      fileIterator = fileInfo.scanFile();
    }
    while (!isDone) {
      try {
        let result = fileIterator.next();
        if (result) {
          isDone = result.done;
          if (!isDone) {
            count++;
          }
        } else {
          isDone = true;
        }
      } catch (e) {
        isDone = true;
      }
    }
    return count;
  } catch (e) {
    hilog.error(DOMAIN_CODE, TAG, 'scanFile' + e.message);
  }
}

async function getDownloadUri(helper) {
  try{
    let rootIterator = await helper.getRoots();
    let filesData = [];
    let isDone = false;
    while (!isDone) {
      let rootData = rootIterator.next();
      if (rootData) {
        isDone = rootData.done;
        if (!isDone) {
          let rootUri = rootData.value.uri;
          if (rootUri.indexOf('media') != -1) {
            globalThis.filesArrData = [];
            globalThis.filesArrData.push(rootData.value);
            let rootFiles = listFile(rootUri, false);
            let dir = rootFiles.find(item => item.name == "MEDIA_TYPE_FILE");
            filesData = listFile(dir.uri, false);
            break;
          }
        }
      }
    }
    let file = filesData.find(item => item.name == "Download");
    if (file != null) {
      hilog.info(DOMAIN_CODE, TAG, 'DownloadUri is' + file.uri);
      return file.uri;
    }else{
      hilog.error(DOMAIN_CODE, TAG, 'file is undefined');
      return "";
    }
  } catch(err) {
    hilog.error(DOMAIN_CODE, TAG, 'getUri' + err.message);
  }
}

export { randomString, sleep, listFile, scanFile, getDownloadUri }