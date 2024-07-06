/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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

import fs from  '@ohos.file.fs';
import common from '@ohos.app.ability.common';
import request from "@ohos.request";
import Server from '../common/Server'
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';

export default function requestUploadJSUnit() {
  describe('requestUploadJSUnit', function () {
    console.info('====>################################request upload Test start');
    let baseContext: common.Context;
    /**
     * beforeAll: Prerequisites at the test suite level, which are executed before the test suite is executed.
     */
    beforeAll(function (done) {
      try {

        let t = setTimeout(() => {
          clearTimeout(t);
          console.info('====>beforeAll: startServer');
          new Server().startServer();
          console.info('====>beforeAll: startServer success!');
          baseContext = AppStorage.get('context');
          console.info('====>beforeAll baseContext:'+JSON.stringify(baseContext))
          let pathDir = baseContext.cacheDir;
          let filePath = pathDir + `/test.txt`;
          let file1 = fs.openSync(filePath, 0o100 | 0o2);
          let test1 = ''.padEnd(1 * 1024, 'Hello world!');
          fs.writeSync(file1.fd, test1);
          fs.closeSync(file1);
          console.info('====>beforeAll: text.txt file generate');
          let filePath1 = pathDir + `/test1.txt`;
          let file2 = fs.openSync(filePath1, 0o100 | 0o2);
          let test2 = ''.padEnd(1 * 1024, 'Hello world!');
          fs.writeSync(file2.fd, test2);
          fs.closeSync(file2)
          console.info('====>beforeAll: text1.txt file generate');
          done();
        },500)
      } catch (err) {
        console.info('====>beforeAll: text.txt file generate failed' + err);
        done();
      }
    })

    /**
     * beforeEach: Prerequisites at the test case level, which are executed before each test case is executed.
     */
    beforeEach(function () {
      console.info('====>beforeEach: Prerequisites is executed.');
    });

    /**
     * afterEach: Test case-level clearance conditions, which are executed after each test case is executed.
     */
    afterEach(function () {
      console.info('====>afterEach: Test case-level clearance conditions is executed.');
    });

    /**
     * afterAll: Test suite-level cleanup condition, which is executed after the test suite is executed.
     */
    afterAll(function () {
      console.info('====>afterAll: Test suite-level cleanup condition is executed');
    });

    let deleteTask = async (task: request.UploadTask): Promise<void> => {
      try {
        let ifDelete = await task.delete();
        console.info('====>if task delete: ' + ifDelete);
      } catch (err) {
        console.info('====>task delete failed, possibly the task delete err: ' + JSON.stringify(err));
      }
    }

    let RequestData = {
      name: 'name',
      value: '123'
    }

    let File: request.File = {
      filename: 'test',
      name: 'test',
      uri: 'internal://cache/test.txt',
      type: 'txt'
    }

    let uploadConfig: request.UploadConfig = {
      url: 'http://127.0.0.1:8080',
      header: {
        'Accept': '*/*',
      },
      method: 'POST',
      files: [File],
      data: [RequestData]
    };

    /**
     * @tc.number    SUB_REQUEST_FileUpload_UploadTaskCreation_0300
     * @tc.name      SUB_REQUEST_FileUpload_UploadTaskCreation_0300
     * @tc.desc      multiples files upload.
     * @tc.size      MEDIUMTEST
     * @tc.type      Function
     * @tc.level     Level 2
     */
    it('SUB_REQUEST_FileUpload_UploadTaskCreation_0300', 0, async function (done) {
      console.info('-----------------------SUB_REQUEST_FileUpload_UploadTaskCreation_0300 is starting-----------------------');
      let uploadConfig1: request.UploadConfig = uploadConfig;
      uploadConfig1.files = [{
        filename: 'test',
        name: 'test',
        uri: 'internal://cache/test.txt',
        type: 'txt'
      },
        {
          filename: 'test1',
          name: 'test1',
          uri: 'internal://cache/test1.txt',
          type: 'txt'
        }]
      try {
        request.uploadFile(baseContext, uploadConfig1, async (err, uploadTask)=>{
          console.info('====>SUB_REQUEST_FileUpload_UploadTaskCreation_0300 uploadFile: ' + uploadTask);
          try{
            let completeCallback = async (taskStates: Array<request.TaskState>) => {
              try {
                uploadTask.off('complete', completeCallback);
                console.info('====>SUB_REQUEST_FileUpload_UploadTaskCreation_0300 complete: ' + JSON.stringify(taskStates));
                expect(taskStates[0].responseCode).assertEqual(0);
                await deleteTask(uploadTask);
                done();
              } catch (err) {
                console.info('====>SUB_REQUEST_FileUpload_UploadTaskCreation_0300 catch err: ' + JSON.stringify(err));
                await deleteTask(uploadTask);
                done();
              }
            }
            if (err) {
              console.info('====>SUB_REQUEST_FileUpload_UploadTaskCreation_0300 downloadFile fail: ' + JSON.stringify(err));
              expect().assertFail();
            }
            uploadTask.on('complete', completeCallback);
            console.info('====>SUB_REQUEST_FileUpload_UploadTaskCreation_0300 on completeCallback success');
          }catch(err){
            console.info('====>SUB_REQUEST_FileUpload_UploadTaskCreation_0300 except err: ' + err);
            await deleteTask(uploadTask);
            done();
          }
        });
      } catch (err) {
        console.error('====>SUB_REQUEST_FileUpload_UploadTaskCreation_0300 error: ' + err);
        done();
      }
    });

    /**
     * @tc.number    SUB_REQUEST_FileUpload_UploadTaskCreation_0700
     * @tc.name      SUB_REQUEST_FileUpload_UploadTaskCreation_0700
     * @tc.desc      upload multiples tasks.
     * @tc.size      MEDIUM
     * @tc.type      Function
     * @tc.level     Level 2
     */
    it('SUB_REQUEST_FileUpload_UploadTaskCreation_0700', 0, async function (done) {
      console.info('-----------------------SUB_REQUEST_FileUpload_UploadTaskCreation_0700 is starting-----------------------');
      let complete1: boolean = false;
      let complete2: boolean = false;
      let uploadTask1 = await request.uploadFile(baseContext, uploadConfig);
      let uploadTask2 = await request.uploadFile(baseContext, uploadConfig);
      console.info('====>SUB_REQUEST_FileUpload_UploadTaskCreation_0700 create tow tasks success' );
      let completeProgress1 = async () => {
        complete1 = true;
        uploadTask1.off('complete', completeProgress1);
        console.info('====>SUB_REQUEST_FileUpload_UploadTaskCreation_0700 completeProgress1 success');
        await deleteTask(uploadTask1);
        if(complete2){
          console.info('====>SUB_REQUEST_FileUpload_UploadTaskCreation_0700 both complete1');
          expect(uploadTask1 !== null).assertTrue();
          done();
        } else  {
          console.info('====>SUB_REQUEST_FileUpload_UploadTaskCreation_0700 completeProgress1 complete');
        }
      }

      let completeProgress2 = async () => {
        complete2 = true;
        uploadTask2.off('complete', completeProgress2);
        console.info('====>SUB_REQUEST_FileUpload_UploadTaskCreation_0700 completeProgress2 success: ');
        await deleteTask(uploadTask2);
        if(complete1){
          console.info('====>SUB_REQUEST_FileUpload_UploadTaskCreation_0700 both complete2');
          expect(uploadTask1 !== null).assertTrue();
          done();
        } else  {
          console.info('====>SUB_REQUEST_FileUpload_UploadTaskCreation_0700 completeProgress2 complete');
        }
      }
      uploadTask1.on('complete', completeProgress1);
      uploadTask2.on('complete', completeProgress2);
      console.info('====>SUB_REQUEST_FileUpload_UploadTaskCreation_0700 on complete' );
    });

    /**
     * @tc.number    SUB_REQUEST_FileUpload_other_0100
     * @tc.name      SUB_REQUEST_FileUpload_other_0100
     * @tc.desc      the not POST or PUT method.
     * @tc.size      MEDIUMTEST
     * @tc.type      Function
     * @tc.level     Level 2
     */
    it('SUB_REQUEST_FileUpload_other_0100', 0, async function (done) {
      console.info('-----------------------SUB_REQUEST_FileUpload_other_0100 is starting-----------------------');
      let uploadConfig1: request.UploadConfig = uploadConfig;
      uploadConfig1.method = 'GET'
      try {
        request.uploadFile(baseContext, uploadConfig1, async (err, uploadTask)=>{
          console.info('====>SUB_REQUEST_FileUpload_other_0100 uploadFile: ' + uploadTask);
          try{
            let completeCallback = async (taskStates: Array<request.TaskState>) => {
              try {
                uploadTask.off('complete', completeCallback);
                expect(true).assertEqual(uploadTask != undefined);
                console.info('====>SUB_REQUEST_FileUpload_other_0100 into completeCallback: ' + JSON.stringify(taskStates));
                await deleteTask(uploadTask);
                done();
              } catch (err) {
                console.info('====>SUB_REQUEST_FileUpload_other_0100 err: ' + JSON.stringify(err));
                await deleteTask(uploadTask);
                done();
              }
            }
            if (err) {
              console.info('====>SUB_REQUEST_FileUpload_other_0100 downloadFile fail: ' + JSON.stringify(err));
              expect().assertFail();
            }
            uploadTask.on('complete', completeCallback);
            console.info('====>SUB_REQUEST_FileUpload_other_0100 completeCallback');
          }catch(err){
            console.info('====>SUB_REQUEST_FileUpload_other_0100 catch err: ' + err);
            await deleteTask(uploadTask);
            done();
          }
        });
      } catch (err) {
        console.error('====>SUB_REQUEST_FileUpload_other_0100 error: ' + err);
        done();
      }
    });

    /**
     * @tc.number    SUB_REQUEST_FileUpload_post_0100
     * @tc.name      SUB_REQUEST_FileUpload_post_0100
     * @tc.desc      POST method upload.
     * @tc.size      MEDIUMTEST
     * @tc.type      Function
     * @tc.level     Level 2
     */
    it('SUB_REQUEST_FileUpload_post_0100', 0, async function (done) {
      console.info('-----------------------SUB_REQUEST_FileUpload_post_0100 is starting-----------------------');
      let uploadConfig1: request.UploadConfig = uploadConfig;
      uploadConfig1.method = 'POST'
      try {
        request.uploadFile(baseContext, uploadConfig1, async (err, uploadTask)=>{
          console.info('====>SUB_REQUEST_FileUpload_post_0100 uploadFile: ' + uploadTask);
          try{
            let completeCallback = async (taskStates: Array<request.TaskState>) => {
              try {
                uploadTask.off('complete', completeCallback);
                console.info('====>SUB_REQUEST_FileUpload_post_0100 complete: ' + JSON.stringify(taskStates));
                expect(taskStates[0].responseCode).assertEqual(0);
                await deleteTask(uploadTask);
                done();
              } catch (err) {
                console.info('====>SUB_REQUEST_FileUpload_post_0100 catch err: ' + JSON.stringify(err));
                await deleteTask(uploadTask);
                done();
              }
            }
            if (err) {
              console.info('====>SUB_REQUEST_FileUpload_post_0100 downloadFile fail: ' + JSON.stringify(err));
              expect().assertFail();
            }
            uploadTask.on('complete', completeCallback);
            console.info('====>SUB_REQUEST_FileUpload_post_0100 on completeCallback success');
          }catch(err){
            console.info('====>SUB_REQUEST_FileUpload_post_0100 except err: ' + err);
            await deleteTask(uploadTask);
            done();
          }
        });
      } catch (err) {
        console.error('====>SUB_REQUEST_FileUpload_post_0100 error: ' + err);
        done();
      }
    });

    /**
     * @tc.number    SUB_REQUEST_FileUpload_OnSuccess_0100
     * @tc.name      SUB_REQUEST_FileUpload_OnSuccess_0100
     * @tc.desc      the onComplete opens.
     * @tc.size      MEDIUMTEST
     * @tc.type      Function
     * @tc.level     Level 2
     */
    it('SUB_REQUEST_FileUpload_OnSuccess_0100', 0, async function (done) {
      console.info('-----------------------SUB_REQUEST_FileUpload_OnSuccess_0100 is starting-----------------------');
      try {
        request.uploadFile(baseContext, uploadConfig, async (err, uploadTask)=>{
          console.info('====>SUB_REQUEST_FileUpload_OnSuccess_0100 uploadFile: ' + uploadTask);
          try{
            let completeCallback = async (taskStates: Array<request.TaskState>) => {
              try {
                uploadTask.off('complete', completeCallback);
                console.info('====>SUB_REQUEST_FileUpload_OnSuccess_0100 complete: ' + JSON.stringify(taskStates));
                expect(taskStates[0].responseCode).assertEqual(0);
                await deleteTask(uploadTask);
                done();
              } catch (err) {
                console.info('====>SUB_REQUEST_FileUpload_OnSuccess_0100 catch err: ' + JSON.stringify(err));
                await deleteTask(uploadTask);
                done();
              }
            }
            if (err) {
              console.info('====>SUB_REQUEST_FileUpload_OnSuccess_0100 downloadFile fail: ' + JSON.stringify(err));
              expect().assertFail();
            }
            uploadTask.on('complete', completeCallback);
            console.info('====>SUB_REQUEST_FileUpload_OnSuccess_0100 on completeCallback success');
          }catch(err){
            console.info('====>SUB_REQUEST_FileUpload_OnSuccess_0100 except err: ' + err);
            await deleteTask(uploadTask);
            done();
          }
        });
      } catch (err) {
        console.error('====>SUB_REQUEST_FileUpload_OnSuccess_0100 error: ' + err);
        done();
      }
    });

    /**
     * @tc.number    SUB_REQUEST_FileUpload_MonitoringProgress_0100
     * @tc.name      SUB_REQUEST_FileUpload_MonitoringProgress_0100
     * @tc.desc      the onProgress interfaces.
     * @tc.size      MEDIUMTEST
     * @tc.type      Function
     * @tc.level     Level 2
     */
    it('SUB_REQUEST_FileUpload_MonitoringProgress_0100', 0, async function (done) {
      console.info('-----------------------SUB_REQUEST_FileUpload_MonitoringProgress_0100 is starting-----------------------');
      try {
        request.uploadFile(baseContext, uploadConfig, async (err, uploadTask)=>{
          console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0100 uploadFile: ' + uploadTask);
          try{
            let progressCallback = async (uploadedSize: number, totalSize: number) => {
              try {
                uploadTask.off('progress', progressCallback);
                console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0100 uploadedSize: ' + uploadedSize + ';totalSize: '+ totalSize);
                expect(true).assertEqual(uploadTask != undefined);
                await deleteTask(uploadTask);
                done();
              } catch (err) {
                console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0100 catch err: ' + JSON.stringify(err));
                await deleteTask(uploadTask);
                done();
              }
            }
            if (err) {
              console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0100 downloadFile fail: ' + JSON.stringify(err));
              expect().assertFail();
            }
            uploadTask.on('progress', progressCallback);
            console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0100 on progress success');
          }catch(err){
            console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0100 except err: ' + err);
            await deleteTask(uploadTask);
            done();
          }
        });
      } catch (err) {
        console.error('====>SUB_REQUEST_FileUpload_MonitoringProgress_0100 error: ' + err);
        done();
      }
    });

    /**
     * @tc.number    SUB_REQUEST_FileUpload_MonitoringProgress_0200
     * @tc.name      SUB_REQUEST_FileUpload_MonitoringProgress_0200
     * @tc.desc      the on-off progress interfaces.
     * @tc.size      MEDIUMTEST
     * @tc.type      Function
     * @tc.level     Level 2
     */
    it('SUB_REQUEST_FileUpload_MonitoringProgress_0200', 0, async function (done) {
      console.info('-----------------------SUB_REQUEST_FileUpload_MonitoringProgress_0200 is starting-----------------------');
      try {
        request.uploadFile(baseContext, uploadConfig, async (err, uploadTask)=>{
          console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0200 uploadFile: ' + uploadTask);
          let flags: boolean = true;
          try{
            let progressCallback = (uploadedSize: number, totalSize: number) => {
              flags = false;
              console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0200 into progressCallback');
            }
            if (err) {
              console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0200 downloadFile fail: ' + JSON.stringify(err));
              expect().assertFail();
            }
            expect(true).assertEqual(uploadTask != undefined);
            uploadTask.on('progress', progressCallback);
            console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0200 onProgress');
            uploadTask.off('progress', progressCallback);
            console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0200 offProgress');
            expect(flags).assertTrue();
            await deleteTask(uploadTask);
            done();
          }catch(err){
            console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0200 except err: ' + err);
            await deleteTask(uploadTask);
            done();
          }
        });
      } catch (err) {
        console.error('====>SUB_REQUEST_FileUpload_MonitoringProgress_0200 error: ' + err);
        done();
      }
    });

    /**
     * @tc.number    SUB_REQUEST_FileUpload_MonitoringProgress_0300
     * @tc.name      SUB_REQUEST_FileUpload_MonitoringProgress_0300
     * @tc.desc      the onHeaderReceive interfaces.
     * @tc.size      MEDIUMTEST
     * @tc.type      Function
     * @tc.level     Level 2
     */
    it('SUB_REQUEST_FileUpload_MonitoringProgress_0300', 0, async function (done) {
      console.info('-----------------------SUB_REQUEST_FileUpload_MonitoringProgress_0300 is starting-----------------------');
      try {
        request.uploadFile(baseContext, uploadConfig, async (err, uploadTask)=>{
          console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0300 uploadFile: ' + uploadTask);
          try{
            let headerCallback = async (header) => {
              try {
                uploadTask.off('headerReceive', headerCallback);
                console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0300 headerCallback: ' + JSON.stringify(header));
                expect(header['body']).assertEqual('upload successful!');
                await deleteTask(uploadTask);
                done();
              } catch (err) {
                console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0300 catch err: ' + JSON.stringify(err));
                await deleteTask(uploadTask);
                done();
              }
            }
            if (err) {
              console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0300 downloadFile fail: ' + JSON.stringify(err));
              expect().assertFail();
            }
            uploadTask.on('headerReceive', headerCallback);
            console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0300 on headerReceive success');
          }catch(err){
            console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0300 except err: ' + err);
            await deleteTask(uploadTask);
            done();
          }
        });
      } catch (err) {
        console.error('====>SUB_REQUEST_FileUpload_MonitoringProgress_0300 error: ' + err);
        done();
      }
    });

    /**
     * @tc.number    SUB_REQUEST_FileUpload_MonitoringProgress_0400
     * @tc.name      SUB_REQUEST_FileUpload_MonitoringProgress_0400
     * @tc.desc      the offHeaderReceive interfaces.
     * @tc.size      MEDIUMTEST
     * @tc.type      Function
     * @tc.level     Level 2
     */
    it('SUB_REQUEST_FileUpload_MonitoringProgress_0400', 0, async function (done) {
      console.info('-----------------------SUB_REQUEST_FileUpload_MonitoringProgress_0400 is starting-----------------------');
      try {
        request.uploadFile(baseContext, uploadConfig, async (err, uploadTask)=>{
          console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0400 uploadFile: ' + uploadTask);
          let flags: boolean = true;
          try{
            let headerCallback = (taskStates: Array<request.TaskState>) => {
              flags = false;
              console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0400 into headerCallback');
            }
            if (err) {
              console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0400 downloadFile fail: ' + JSON.stringify(err));
              expect().assertFail();
            }
            expect(true).assertEqual(uploadTask != undefined);
            uploadTask.on('headerReceive', headerCallback);
            console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0400 onHeader');
            uploadTask.off('headerReceive', headerCallback);
            console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0400 offHeader');
            expect(flags).assertTrue();
            await deleteTask(uploadTask);
            done();
          }catch(err){
            console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0400 except err: ' + err);
            await deleteTask(uploadTask);
            done();
          }
        });
      } catch (err) {
        console.error('====>SUB_REQUEST_FileUpload_MonitoringProgress_0400 error: ' + err);
        done();
      }
    });

    /**
     * @tc.number    SUB_REQUEST_FileUpload_MonitoringProgress_0600
     * @tc.name      SUB_REQUEST_FileUpload_MonitoringProgress_0600
     * @tc.desc      the off interfaces.
     * @tc.size      MEDIUMTEST
     * @tc.type      Function
     * @tc.level     Level 2
     */
    it('SUB_REQUEST_FileUpload_MonitoringProgress_0600', 0, async function (done) {
      console.info('-----------------------SUB_REQUEST_FileUpload_MonitoringProgress_0600 is starting-----------------------');
      try {
        request.uploadFile(baseContext, uploadConfig, async (err, uploadTask)=>{
          console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0600 uploadFile: ' + uploadTask);
          let flags: boolean = true;
          try{
            let failCallback = (taskStates: Array<request.TaskState>) => {
              flags = false;
              console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0600 into failCallback');
            }
            if (err) {
              console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0600 downloadFile fail: ' + JSON.stringify(err));
              expect().assertFail();
            }
            expect(true).assertEqual(uploadTask != undefined);
            uploadTask.on('fail', failCallback);
            console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0600 onFailed');
            uploadTask.off('fail', failCallback);
            console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0600 offFailed');
            expect(flags).assertTrue();
            await deleteTask(uploadTask);
            done();
          }catch(err){
            console.info('====>SUB_REQUEST_FileUpload_MonitoringProgress_0600 except err: ' + err);
            await deleteTask(uploadTask);
            done();
          }
        });
      } catch (err) {
        console.error('====>SUB_REQUEST_FileUpload_MonitoringProgress_0600 error: ' + err);
        done();
      }
    });

    /**
     * @tc.number    SUB_REQUESdT_FileUpload_OnFail_0100
     * @tc.name      SUB_REQUESdT_FileUpload_OnFail_0100
     * @tc.desc      the onFailed pass.
     * @tc.size      MEDIUMTEST
     * @tc.type      Function
     * @tc.level     Level 2
     */
    it('SUB_REQUEST_FileUpload_OnFail_0100', 0, async function (done) {
      console.info('-----------------------SUB_REQUEST_FileUpload_OnFail_0100 is starting-----------------------');
      let uploadConfig1: request.UploadConfig = uploadConfig;
      uploadConfig1.url = 'http://127.1.1.1:808'
      try {
        request.uploadFile(baseContext, uploadConfig1, async (err, uploadTask)=>{
          console.info('====>SUB_REQUEST_FileUpload_OnFail_0100 uploadFile: ' + uploadTask);
          try{
            let failCallback = (taskStates: Array<request.TaskState>) => {
              uploadTask.off('fail', failCallback);
              try {
                console.info("====>SUB_REQUEST_FileUpload_OnFail_0100 fail TaskState = " + JSON.stringify(taskStates[0]));
                expect(typeof (taskStates[0].path) == "string").assertEqual(true);
                expect(typeof (taskStates[0].responseCode) == "number").assertEqual(true);
                expect(typeof (taskStates[0].message) == "string").assertEqual(true);
                console.info("====>SUB_REQUEST_FileUpload_OnFail_0100 TaskState is correct");
                done();
              } catch (err) {
                console.info("====>SUB_REQUEST_FileUpload_OnFail_0100 TaskState err: " + JSON.stringify(err));
                done();
              }
            }

            if (err) {
              console.info('====>SUB_REQUEST_FileUpload_OnFail_0100 downloadFile fail: ' + JSON.stringify(err));
              expect().assertFail();
            }

            uploadTask.on('fail', failCallback);
          }catch(err){
            console.info('====>SUB_REQUEST_FileUpload_OnFail_0100 except err: ' + err);
            await deleteTask(uploadTask);
            done();
          }
        });
      } catch (err) {
        console.error('====>SUB_REQUEST_FileUpload_OnFail_0100 error: ' + err);
        done();
      }
    });

    /**
     * @tc.number    SUB_REQUEST_FileUpload_OffFail_0100
     * @tc.name      SUB_REQUEST_FileUpload_OffFail_0100
     * @tc.desc      the offFailed fail.
     * @tc.size      MEDIUMTEST
     * @tc.type      Function
     * @tc.level     Level 2
     */
    it('SUB_REQUEST_FileUpload_OffFail_0100', 0, async function (done) {
      console.info('-----------------------SUB_REQUEST_FileUpload_OffFail_0100 is starting-----------------------');
      let uploadConfig1: request.UploadConfig = uploadConfig;
      uploadConfig1.url = 'http://127.1.1.1:808'
      try {
        request.uploadFile(baseContext, uploadConfig1, async (err, uploadTask)=>{
          console.info('====>SUB_REQUEST_FileUpload_OffFail_0100 uploadFile: ' + uploadTask);
          let flags: boolean = true;
          try{
            let failCallback = (taskStates: Array<request.TaskState>) => {
              flags = false;
              console.info('====>SUB_REQUEST_FileUpload_OffFail_0100 into failCallback');
            }
            if (err) {
              console.info('====>SUB_REQUEST_FileUpload_OffFail_0100 downloadFile fail: ' + JSON.stringify(err));
              expect().assertFail();
            }
            expect(true).assertEqual(uploadTask != undefined);
            uploadTask.on('fail', failCallback);
            console.info('====>SUB_REQUEST_FileUpload_OffFail_0100 onFailed');
            uploadTask.off('fail', failCallback);
            console.info('====>SUB_REQUEST_FileUpload_OffFail_0100 offFailed');
            expect(flags).assertTrue();
            await deleteTask(uploadTask);
            done();
          }catch(err){
            console.info('====>SUB_REQUEST_FileUpload_OffFail_0100 except err: ' + err);
            await deleteTask(uploadTask);
            done();
          }
        });
      } catch (err) {
        console.error('====>SUB_REQUEST_FileUpload_OffFail_0100 error: ' + err);
        done();
      }
    });

    /**
     * @tc.number    SUB_REQUEST_FileUpload_offSuccess_0100
     * @tc.name      SUB_REQUEST_FileUpload_offSuccess_0100
     * @tc.desc      the onComplete close.
     * @tc.size      MEDIUMTEST
     * @tc.type      Function
     * @tc.level     Level 2
     */
    it('SUB_REQUEST_FileUpload_offSuccess_0100', 0, async function (done) {
      console.info('-----------------------SUB_REQUEST_FileUpload_offSuccess_0100 is starting-----------------------');
      try {
        request.uploadFile(baseContext, uploadConfig, async (err, uploadTask)=>{
          console.info('====>SUB_REQUEST_FileUpload_offSuccess_0100 uploadFile: ' + uploadTask);
          let flags: boolean = true;
          try{
            let completeCallback = (taskStates: Array<request.TaskState>) => {
              flags = false;
              console.info('====>SUB_REQUEST_FileUpload_offSuccess_0100 into completeCallback');
            }
            if (err) {
              console.info('====>SUB_REQUEST_FileUpload_offSuccess_0100 downloadFile fail: ' + JSON.stringify(err));
              expect().assertFail();
            }
            expect(true).assertEqual(uploadTask != undefined);
            uploadTask.on('complete', completeCallback);
            console.info('====>SUB_REQUEST_FileUpload_offSuccess_0100 onComplete');
            uploadTask.off('complete', completeCallback);
            console.info('====>SUB_REQUEST_FileUpload_offSuccess_0100 offComplete');
            expect(flags).assertTrue();
            await deleteTask(uploadTask);
            done();
          }catch(err){
            console.info('====>SUB_REQUEST_FileUpload_offSuccess_0100 except err: ' + err);
            await deleteTask(uploadTask);
            done();
          }
        });
      } catch (err) {
        console.error('====>SUB_REQUEST_FileUpload_offSuccess_0100 error: ' + err);
        done();
      }
    });

    /**
     * @tc.number    SUB_REQUEST_FileUpload_DeletingTask_0100
     * @tc.name      SUB_REQUEST_FileUpload_DeletingTask_0100
     * @tc.desc      the remove task.
     * @tc.size      MEDIUMTEST
     * @tc.type      Function
     * @tc.level     Level 2
     */
    it('SUB_REQUEST_FileUpload_DeletingTask_0100', 0, async function (done) {
      console.info('-----------------------SUB_REQUEST_FileUpload_DeletingTask_0100 is starting-----------------------');
      try {
        request.uploadFile(baseContext, uploadConfig, async (err, uploadTask)=>{
          console.info('====>SUB_REQUEST_FileUpload_DeletingTask_0100 uploadFile: ' + uploadTask);
          try{
            if (err) {
              console.info('====>SUB_REQUEST_FileUpload_DeletingTask_0100 downloadFile fail: ' + JSON.stringify(err));
              expect().assertFail();
            }
            let ifRemove = await uploadTask.remove();
            console.info('====>SUB_REQUEST_FileUpload_DeletingTask_0100 on remove success: ' + JSON.stringify(ifRemove));
            expect(ifRemove).assertTrue();
            done();
          }catch(err){
            console.info('====>SUB_REQUEST_FileUpload_DeletingTask_0100 except err: ' + err);
            await deleteTask(uploadTask);
            done();
          }
        });
      } catch (err) {
        console.error('====>SUB_REQUEST_FileUpload_DeletingTask_0100 error: ' + err);
        done();
      }
    });
    
    /**
     * @tc.number    SUB_REQUEST_uploadFile_STAGE_API_CALLBACK_0001
     * @tc.name    SUB_REQUEST_uploadFile_STAGE_API_CALLBACK_0001
     * @tc.desc      Starts a upload task.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_REQUEST_uploadFile_STAGE_API_CALLBACK_0001', 0, async function (done) {
      console.info("-----------------------SUB_REQUEST_uploadFile_STAGE_API_CALLBACK_0001 is starting-----------------------");
      try {
        let uploadConfig_ = uploadConfig;
        uploadConfig_.url = 'http://127.1.1.1'
        request.uploadFile(globalThis.abilityContext, uploadConfig_, (err, uploadTask)=>{
          console.info("====>SUB_REQUEST_uploadFile_STAGE_API_CALLBACK_0001 uploadFile: " + uploadTask);
          try{
            expect(true).assertEqual(uploadTask != undefined);
            uploadTask.on('fail', (TaskState) => {
              try {
                for (let i = 0; i < TaskState.length; i++) {
                  console.info("====>SUB_REQUEST_uploadFile_STAGE_API_CALLBACK_0001 fail TaskState = " + JSON.stringify(TaskState[i]));
                  console.info("====>SUB_REQUEST_uploadFile_STAGE_API_CALLBACK_0001 fail TaskState.path = " + TaskState[i].path);
                  console.info("====>SUB_REQUEST_uploadFile_STAGE_API_CALLBACK_0001 fail TaskState.responseCode = " + TaskState[i].responseCode);
                  console.info("====>SUB_REQUEST_uploadFile_STAGE_API_CALLBACK_0001 fail TaskState.TaskState.message = " + TaskState[i].message);
                  expect(typeof (TaskState[i].path) == "string").assertEqual(true);
                  expect(typeof (TaskState[i].responseCode) == "number").assertEqual(true);
                  expect(typeof (TaskState[i].message) == "string").assertEqual(true);
                }
                console.info("====>SUB_REQUEST_uploadFile_STAGE_API_CALLBACK_0001 TaskState is correct");
              } catch (err) {
                console.info("====>SUB_REQUEST_uploadFile_STAGE_API_CALLBACK_0001 TaskState err: " + JSON.stringify(err));
              }
            });
            uploadTask.off('fail');
          }catch(e){
            console.info("====>SUB_REQUEST_uploadFile_STAGE_API_CALLBACK_0001 except error: " + e);
          }
        });
      } catch (err) {
        console.error("====>SUB_REQUEST_uploadFile_STAGE_API_CALLBACK_0001 error: " + err);
      };
      let t = setTimeout(()=>{
        console.info("-----------------------SUB_REQUEST_uploadFile_STAGE_API_CALLBACK_0001 end-----------------------");
        clearTimeout(t);
        done();
      }, 10000);
    });

    /**
     * @tc.number    SUB_REQUEST_uploadFile_STAGE_API_PROMISE_0001
     * @tc.name    SUB_REQUEST_uploadFile_STAGE_API_PROMISE_0001
     * @tc.desc      Starts a upload task.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_REQUEST_uploadFile_STAGE_API_PROMISE_0001', 0, async function (done) {
      console.info("-----------------------SUB_REQUEST_uploadFile_STAGE_API_PROMISE_0001 is starting-----------------------");
      try{
        request.uploadFile(globalThis.abilityContext, uploadConfig).then(uploadTask => {
          console.info("====>SUB_REQUEST_uploadFile_STAGE_API_PROMISE_0001 uploadFile: " + uploadTask);
          try{
            expect(true).assertEqual(uploadTask != undefined);
          }catch(e){
            console.info("====>SUB_REQUEST_uploadFile_STAGE_API_PROMISE_0001 except error: " + e);
          }
        }).catch(err => {
          console.error("====>SUB_REQUEST_uploadFile_STAGE_API_PROMISE_0001 error: " + err);
          expect().assertFail();
        })
      }catch(err){
        console.error("====>SUB_REQUEST_uploadFile_STAGE_API_PROMISE_0001 catch error: " + err);
      }
      let t = setTimeout(()=>{
        console.info("-----------------------SUB_REQUEST_uploadFile_STAGE_API_PROMISE_0001 end-----------------------");
        clearTimeout(t);
        done();
      }, 10000);
    });

    /**
     * @tc.number    SUB_REQUEST_UPLOAD_API_DELETE_0001
     * @tc.name    SUB_REQUEST_UPLOAD_API_DELETE_0001
     * @tc.desc      Delete the upload task.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_REQUEST_UPLOAD_API_DELETE_0001', 0, async function (done) {
      console.info("====>-----------------------SUB_REQUEST_UPLOAD_API_DELETE_0001 is starting-----------------------");
      request.uploadFile(globalThis.abilityContext, uploadConfig, (err, uploadTask) => {
        try{
          console.info("====>SUB_REQUEST_UPLOAD_API_DELETE_0001 uploadTask: " + uploadTask);
          expect(uploadTask != undefined).assertEqual(true);
          uploadTask.delete((err, data) => {
            try{
              if (err) {
                console.error('====>SUB_REQUEST_UPLOAD_API_DELETE_0001 Failed to delete the uploadTask task.');
                expect().assertFail();
                done();
              }
              expect(typeof data == "boolean").assertTrue();
              console.info('====>SUB_REQUEST_UPLOAD_API_DELETE_0001 uploadTask task delete success.');
              done();
              console.info("====>-----------------------SUB_REQUEST_UPLOAD_API_DELETE_0001 end-----------------------");
            }catch(err){
              console.error('====>SUB_REQUEST_UPLOAD_API_DELETE_0001 delete error' + err);
              done();
            }
          });
        } catch (error) {
          console.error('====>SUB_REQUEST_UPLOAD_API_DELETE_0001 delete catch error' + error);
          done();
        }        
      })      
    });

    /**
     * @tc.number    SUB_REQUEST_UPLOAD_API_DELETE_0002
     * @tc.name    SUB_REQUEST_UPLOAD_API_DELETE_0002
     * @tc.desc      Delete the upload task.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_REQUEST_UPLOAD_API_DELETE_0002', 0, async function (done) {
      console.info("====>-----------------------SUB_REQUEST_UPLOAD_API_DELETE_0002 is starting-----------------------");
      request.uploadFile(globalThis.abilityContext, uploadConfig, (err, uploadTask) => {
        console.info("====>SUB_REQUEST_UPLOAD_API_DELETE_0002 uploadTask: " + uploadTask);
        try{
          expect(uploadTask != undefined).assertEqual(true);
          uploadTask.delete().then(data => {
            console.info('====>SUB_REQUEST_UPLOAD_API_DELETE_0002 delete data:' + JSON.stringify(data));
            expect(data).assertEqual(true);
            done();
          }).catch((err) => {
            console.info('====>SUB_REQUEST_UPLOAD_API_DELETE_0002 Failed to delete the uploadTask task.');
            expect().assertFail();
            done();
          })
        }catch(err){
          console.error('====>SUB_REQUEST_UPLOAD_API_DELETE_0002 delete catch err');
          done();
        }     
      })
    });
  })
}
