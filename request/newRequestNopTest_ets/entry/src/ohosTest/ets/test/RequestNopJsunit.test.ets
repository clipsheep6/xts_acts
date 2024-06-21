/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect, Level, Size, TestType } from '@ohos/hypium';
import common from '@ohos.app.ability.common';
import fs from '@ohos.file.fs';
import request from '@ohos.request';
import { BusinessError } from '@ohos.base';
import userAuth from '@ohos.userIAM.userAuth'

const PERMISSION_DENIED_CODE = 201

export default function request_nop_Test() {
  describe('request_nop_Test', async (done: Function) => {
    let context: common.UIAbilityContext;
    let uploadConfig: request.UploadConfig;
    let downloadConfig: request.DownloadConfig;


    beforeAll(() => {
      try{
        // 获取应用文件路径
        context = globalThis.ablityContext;
        let cacheDir = context.cacheDir;

        // 新建一个本地应用文件
        let file = fs.openSync(cacheDir + '/test.txt', fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        fs.writeSync(file.fd, 'upload file test');
        fs.closeSync(file);

        // 上传任务配置项
        let header = new Map<Object, string>();
        header.set('key1', 'value1');
        header.set('key2', 'value2');
        let files: Array<request.File> = [
        //uri前缀internal://cache 对应cacheDir目录
          {
            filename: 'test.txt', name: 'test', uri: 'internal://cache/test.txt', type: 'txt'
          }
        ]
        let data: Array<request.RequestData> = [{
          name: 'name', value: 'value'
        }];
        uploadConfig = {
          url: 'https://xxx',
          header: header,
          method: 'POST',
          files: files,
          data: data
        }
        downloadConfig = {
          url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
          header: {
            headers: 'http'
          },
          enableMetered: false,
          enableRoaming: false,
          description: 'XTS download test!',
          filePath: "downloadFilePath",
          title: 'XTS download test!',
        }
      } catch (err) {
        console.error(`test request beforeAll failed, code is ${err.code}, message is ${err.message}`);
        done();
      }
    })

    /**
     * @tc.number    : SUB_REQUEST_uploadFile_NOP_0001
     * @tc.desc      : text uploadFile without permission.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_REQUEST_uploadFile_NOP_0001', 0, async (done: Function) => {
      try {
        request.uploadFile(context, uploadConfig)
          .then((uploadTask: request.UploadTask) => {
            console.error(`uploadFile success without permission`);
            expect().assertFail();
            done();
          })
          .catch((err: BusinessError) => {
            expect(err.code).assertEqual(PERMISSION_DENIED_CODE);
            done();
          })
      } catch (err) {
        console.error(`Invoke uploadFile failed, code is ${err.code}, message is ${err.message}`);
        expect().assertFail();
        done();
      }
    });

    /**
     * @tc.number    : SUB_REQUEST_uploadFile_Callback_NOP_0001
     * @tc.desc      : text uploadFile without permission.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_REQUEST_uploadFile_Callback_NOP_0001', 0, async (done: Function) => {
      try {
        request.uploadFile(context, uploadConfig, (err, uploadTask)=>{
          expect(err.code).assertEqual(PERMISSION_DENIED_CODE);
          done();
        })
      } catch (err) {
        console.error(`Invoke uploadFile failed, code is ${err.code}, message is ${err.message}`);
        expect().assertFail();
        done();
      }
    });

    /**
     * @tc.number    : SUB_REQUEST_downloadFile_NOP_0001
     * @tc.desc      : text downloadFile without permission.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_REQUEST_downloadFile_NOP_0001', 0, async (done: Function) => {
      try {
        request.downloadFile(context, downloadConfig)
          .then((downloadTask: request.DownloadTask) => {
            console.error(`downloadFile success without permission`);
            expect().assertFail();
            done();
          })
          .catch((err: BusinessError) => {
            expect(err.code).assertEqual(PERMISSION_DENIED_CODE);
            done();
          })
      } catch (err) {
        console.error(`Invoke downloadFile failed, code is ${err.code}, message is ${err.message}`);
        expect().assertFail();
        done();
      }
    });

    /**
     * @tc.number    : SUB_REQUEST_downloadFile_Callback_NOP_0001
     * @tc.desc      : text downloadFile without permission.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_REQUEST_downloadFile_Callback_NOP_0001', 0, async (done: Function) => {
      try {
        request.downloadFile(context, downloadConfig, (err, downloadTask)=>{
          expect(err.code).assertEqual(PERMISSION_DENIED_CODE);
          done();
        })
      } catch (err) {
        console.error(`Invoke downloadFile failed, code is ${err.code}, message is ${err.message}`);
        expect().assertFail();
        done();
      }
    });

  })
}