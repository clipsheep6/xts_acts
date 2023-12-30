import request from '@ohos.request';
import { describe, it, expect } from '@ohos/hypium'
import { BusinessError } from '@ohos.base'
import common from '@ohos.app.ability.common';
import fs from '@ohos.file.fs';

export default function requestUpTest() {
  describe('requestTest', () => {
    let baseContext: common.Context = AppStorage.get('context') as common.Context
    let wenBen:string = '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。'+
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。'+
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。'+
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。'+
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。'+
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。'+
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。'+
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。'+
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。'+
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。'+
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。'+
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。'+
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。'+
      '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。'

    /*
     * @tc.number: SUB_Request_RequestTest_Create_Remove_Func_0100
     * @tc.name: SUB_Request_RequestTest_Create_Remove_Func_0100
     * @tc.desc: request.agent.create and request.agent.remove  (upload/callback)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_Create_Remove_Func_0100', 0, async (done: Function) => {
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments,
        network: request.agent.Network.WIFI
      };
      request.agent.create(baseContext, config, (err: BusinessError, task: request.agent.Task) => {
        if (err) {
          console.log(`001Failed to create a upload task:${err}`);
          expect(err).assertFail();
          done();
        } else {
          console.log(`001Succeeded in creating a upload task:${task}`);
          expect(task instanceof Object).assertTrue();
          // remove task
          request.agent.remove(task.tid, (err: BusinessError) => {
            if (err) {
              console.log(`001Failed to removing a upload task:${err}`);
              expect(err).assertFail();
              done();
            } else {
              console.log(`001Succeeded in removing a upload task:${err}`);
              expect(err).assertNull();
              done();
            }
          })
        }
      })
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Create_Remove_Func_0200
     * @tc.name: SUB_Request_RequestTest_Create_Remove_Func_0200
     * @tc.desc: request.agent.create and request.agent.remove  (upload/promise)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_Create_Remove_Func_0200', 0, async (done: Function) => {
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments,
        network: request.agent.Network.WIFI
      };
      request.agent.create(baseContext, config).then((task: request.agent.Task) => {
        console.log(`002Succeeded in creating a upload task:${task}`);
        expect(task instanceof Object).assertTrue();
        // remove task
        request.agent.remove(task.tid).then((res) => {
          console.log(`002Succeeded in removing a upload task:${res}`);
          expect(res).assertFalse();
          done();
        }).catch((err: BusinessError) => {
          console.log(`002Failed to remove a upload task:${err}`);
          expect(err).assertFail();
          done();
        })
      }).catch((err: BusinessError) => {
        console.log(`002Failed to create a upload task:${err}`);
        expect(err).assertFail();
        done();
      })
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Remove_Func_0300
     * @tc.name: SUB_Request_RequestTest_Remove_Func_0300
     * @tc.desc: request.agent.remove tid not found (callback)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 1
     */
    it('SUB_Request_RequestTest_Remove_Func_0300', 0, async (done: Function) => {
      request.agent.remove("创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。", (err: BusinessError) => {
        if (err) {
          console.log(`003remove requestTest task fail:${err}`);
          expect(err.code).assertEqual(21900006);
          done();
        } else {
          console.log(`003remove requestTest task success!${err}`);
        }
      })
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Remove_Func_0400
     * @tc.name: SUB_Request_RequestTest_Remove_Func_0400
     * @tc.desc: request.agent.remove tid not found (promise)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 1
     */
    it('SUB_Request_RequestTest_Remove_Func_0400', 0, async (done: Function) => {
      request.agent.remove("创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。").then((res) => {
        console.log(`004remove requestTest task success!${res}`);
        expect(res).assertFail();
        done();
      }).catch((err: BusinessError) => {
        console.log(`004remove requestTest task fail:${err}`);
        expect(err.code).assertEqual(21900006);
        done();
      })
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Show_Func_0500
     * @tc.name: SUB_Request_RequestTest_Show_Func_0500
     * @tc.desc: request.agent.show (upload/callback)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_Show_Func_0500', 0, async (done: Function) => {
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments,
        network: request.agent.Network.WIFI
      };
      request.agent.create(baseContext, config, (err: BusinessError, task: request.agent.Task) => {
        if (err) {
          console.log(`005Failed to create a upload task:${err}`);
          expect(err).assertFail();
          done();
        } else {
          console.log(`005Succeeded in creating a upload task:${task}`);
          // show task
          request.agent.show(task.tid, async (err: BusinessError, taskInfo: request.agent.TaskInfo) => {
            if (err) {
              console.log(`005Failed to show a upload task:${err}`);
              expect(err).assertFail();
              done();
            } else {
              console.log(`005Succeeded in showing a upload task:${taskInfo}`);
              expect(taskInfo.tid).assertEqual(task.tid);
              // remove task
              await request.agent.remove(task.tid);
              done();
            }
          })
        }
      })
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Show_Func_0600
     * @tc.name: SUB_Request_RequestTest_Show_Func_0600
     * @tc.desc: request.agent.show (upload/promise)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_Show_Func_0600', 0, async (done: Function) => {
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments,
        network: request.agent.Network.WIFI
      };
      request.agent.create(baseContext, config, (err: BusinessError, task: request.agent.Task) => {
        if (err) {
          console.log(`006Failed to create a upload task:${err}`);
          expect(err).assertFail();
          done();
        } else {
          console.log(`006Succeeded in creating a upload task:${task}`);
          // show task
          request.agent.show(task.tid).then(async (taskInfo: request.agent.TaskInfo) => {
            console.log(`006Succeeded in showing a upload task.`);
            expect(taskInfo.tid).assertEqual(task.tid);
            await request.agent.remove(task.tid);
            done();
          }).catch((err: BusinessError) => {
            console.log(`006Failed to show a upload task, Code: ${err.code}, message: ${err.message}`);
            expect(err).assertFail();
            done();
          })
        }
      })
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Show_Func_0700
     * @tc.name: SUB_Request_RequestTest_Show_Func_0700
     * @tc.desc: request.agent.show (upload task not found/callback)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 1
     */
    it('SUB_Request_RequestTest_Show_Func_0700', 0, async (done: Function) => {
      request.agent.show('task.tid',(err: BusinessError, taskInfo: request.agent.TaskInfo) => {
        if (err) {
          console.log(`007requestTest showTask fail:${err}`);
          expect(err.code).assertEqual(21900006);
          done();
        } else {
          console.log(`007requestTest showTask success:${taskInfo.tid}`);
        }
      });
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Show_Func_0800
     * @tc.name: SUB_Request_RequestTest_Show_Func_0800
     * @tc.desc: request.agent.show (upload task not found/promise)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 1
     */
    it('SUB_Request_RequestTest_Show_Func_0800', 0, async (done: Function) => {
      request.agent.show('task.tid').then((res)=> {
        console.log(`008requestTest showTask success:${res}`);
        expect(res).assertFail();
        done();
      }).catch((err:BusinessError) => {
        console.log(`008requestTest showTask fail:${err}`);
        expect(err.code).assertEqual(21900006);
        done();
      })
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Touch_Func_0900
     * @tc.name: SUB_Request_RequestTest_Touch_Func_0900
     * @tc.desc: request.agent.touch (upload/callback)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_Touch_Func_0900', 0, async (done: Function) => {
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments,
        token: 'is test009'
      };
      request.agent.create(baseContext, config, (err: BusinessError, task: request.agent.Task) => {
        if (err) {
          console.log(`009Failed to create a upload task:${err}`);
          expect(err).assertFail();
          done();
        } else {
          console.log(`009Succeeded in creating a upload task:${task}`);
          // touch task
          request.agent.touch(task.tid, config.token, async (err: BusinessError, taskInfo: request.agent.TaskInfo) => {
            if (err) {
              console.log(`009Failed to touch a upload task, Code: ${err.code}, message: ${err.message}`);
              expect(err).assertFail();
              done();
            } else {
              console.log(`009Succeeded in touching a upload task.`);
              expect(taskInfo.tid).assertEqual(task.tid);
              await request.agent.remove(task.tid);
              done();
            }
          })
        }
      })
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Touch_Func_1000
     * @tc.name: SUB_Request_RequestTest_Touch_Func_1000
     * @tc.desc: request.agent.touch (upload/promise)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_Touch_Func_1000', 0, async (done: Function) => {
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments,
        token: "is test010"
      };
      request.agent.create(baseContext, config, (err: BusinessError, task: request.agent.Task) => {
        if (err) {
          console.log(`010Failed to create a upload task:${err}`);
          expect(err).assertFail();
          done();
        } else {
          console.log(`010Succeeded in creating a upload task:${task}`);
          // touch task
          request.agent.touch(task.tid, config.token).then(async (taskInfo: request.agent.TaskInfo) => {
            console.log(`010Succeeded in touching a upload task.`);
            expect(taskInfo.tid).assertEqual(task.tid);
            await request.agent.remove(task.tid);
            done();
          }).catch((err: BusinessError) => {
            console.log(`010Failed to touch a upload task, Code: ${err.code}, message: ${err.message}`);
            expect(err).assertFail();
            done();
          })
        }
      })
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Touch_Func_1100
     * @tc.name: SUB_Request_RequestTest_Touch_Func_1100
     * @tc.desc: request.agent.touch (upload token is wrong/callback)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_Touch_Func_1100', 0, async (done: Function) => {
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments,
        token: "is test011"
      };
      request.agent.create(baseContext, config, async (err: BusinessError, task: request.agent.Task) => {
        if (err) {
          console.log(`011Failed to create a upload task:${err}`);
          expect(err).assertFail();
          done();
        } else {
          console.log(`011Succeeded in creating a upload task:${task}`);
          // touch task
          try {
            request.agent.touch(task.tid, 'wrong', (err: BusinessError, taskInfo: request.agent.TaskInfo) => {
              if (err) {
                console.log(`011requestTest touchTask fail:${err}`);
              } else {
                console.log(`011requestTest touchTask success:${taskInfo.tid}`);
              }
            })
          } catch (err) {
            console.log(`011requestTest11 touchTask catch:${err}`);
            expect(err.code).assertEqual(401);
            // remove task
            await request.agent.remove(task.tid);
            done();
          }
        }
      })
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Touch_Func_1200
     * @tc.name: SUB_Request_RequestTest_Touch_Func_1200
     * @tc.desc: request.agent.touch (upload token is wrong/promise)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_Touch_Func_1200', 0, async (done: Function) => {
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments,
        token: "is test012"
      };
      request.agent.create(baseContext, config, async (err: BusinessError, task: request.agent.Task) => {
        if (err) {
          console.log(`012Failed to create a upload task:${err}`);
          expect(err).assertFail();
          done();
        } else {
          console.log(`012Succeeded in creating a upload task:${task}`);
          // touch task
          try {
            request.agent.touch(task.tid,'wrong').then((taskInfo: request.agent.TaskInfo) => {
              console.log(`012requestTest touchTask success:${taskInfo.tid}`);
              expect(taskInfo.tid).assertEqual(task.tid);
            }).catch((err: BusinessError) => {
              console.log(`012requestTest touchTask fail:${err}`);
            })
          } catch (err) {
            console.log(`012requestTest touchTask catch:${err}`);
            expect(err.code).assertEqual(401);
            // remove task
            await request.agent.remove(task.tid);
            done();
          }
        }
      })
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Touch_Func_1300
     * @tc.name: SUB_Request_RequestTest_Touch_Func_1300
     * @tc.desc: request.agent.touch (upload task not found/callback)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_Touch_Func_1300', 0, async (done: Function) => {
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments,
        token: "is test013"
      };
      request.agent.create(baseContext, config, (err: BusinessError, task: request.agent.Task) => {
        if (err) {
          console.log(`013Failed to create a upload task:${err}`);
          expect(err).assertFail();
          done();
        } else {
          console.log(`013Succeeded in creating a upload task:${task}`);
          // touch task
          try {
            request.agent.touch('123', config.token, async (err: BusinessError, taskInfo: request.agent.TaskInfo) => {
              if (err) {
                console.log(`013requestTest touchTask fail:${err}`);
                expect(err.code).assertEqual(21900006);
                // remove task
                await request.agent.remove(task.tid);
                done();
              } else {
                console.log(`013requestTest touchTask success:${taskInfo.tid}`);
              }
            })
          } catch (err) {
            console.log(`013requestTest touchTask catch:${err}`);
            expect(err).assertFail();
            done();
          }
        }
      })
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Search_Func_1400
     * @tc.name: SUB_Request_RequestTest_Search_Func_1400
     * @tc.desc: request.agent.search (upload default Filter/callback)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_Search_Func_1400', 0, async (done: Function) => {
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments
      };
      request.agent.create(baseContext, config, (err: BusinessError, task: request.agent.Task) => {
        if (err) {
          console.log(`014Failed to create a upload task:${err}`);
          expect(err).assertFail();
          done();
        } else {
          console.log(`014Succeeded in creating a upload task:${task}`);
          try {
            request.agent.search(async (err: BusinessError, data: Array<string>) => {
              if (err) {
                console.log(`014requestTest searchTask fail:${err}`);
                expect(err).assertFail();
                done();
              } else {
                console.log(`014requestTest searchTask success:${data}`);
                expect(data instanceof Array).assertTrue();
                await request.agent.remove(task.tid);
                done();
              }
            })
          } catch (err) {
            console.log(`014requestTest searchTask catch:${err}`);
            expect(err).assertFail();
            done();
          }
        }
      })
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Search_Func_1500
     * @tc.name: SUB_Request_RequestTest_Search_Func_1500
     * @tc.desc: request.agent.search (upload set Filter/callback)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_Search_Func_1500', 0, async (done: Function) => {
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments
      };
      let filter: request.agent.Filter = {
        state: request.agent.State.INITIALIZED,
        action: request.agent.Action.UPLOAD,
        mode: request.agent.Mode.BACKGROUND,
      };
      request.agent.create(baseContext, config, (err: BusinessError, task: request.agent.Task) => {
        if (err) {
          console.log(`015Failed to create a upload task:${err}`);
          expect(err).assertFail();
          done();
        } else {
          console.log(`015Succeeded in creating a upload task:${task}`);
          try {
            request.agent.search(filter,async (err: BusinessError, data: Array<string>) => {
              if (err) {
                console.log(`015requestTest searchTask fail:${err}`);
                expect(err).assertFail();
                done();
              } else {
                console.log(`015requestTest searchTask success:${data}`);
                expect(data instanceof Array).assertTrue();
                await request.agent.remove(task.tid);
                done();
              }
            })
          } catch (err) {
            console.log(`015requestTest searchTask catch:${err}`);
            expect(err).assertFail();
            done();
          }
        }
      })
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Search_Func_1600
     * @tc.name: SUB_Request_RequestTest_Search_Func_1600
     * @tc.desc: request.agent.search (upload set Filter/promise)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_Search_Func_1600', 0, async (done: Function) => {
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments
      };
      let filter: request.agent.Filter = {
        state: request.agent.State.INITIALIZED,
        action: request.agent.Action.UPLOAD,
        mode: request.agent.Mode.BACKGROUND,
      };
      request.agent.create(baseContext, config, (err: BusinessError, task: request.agent.Task) => {
        if (err) {
          console.log(`016Failed to create a upload task:${err}`);
          expect(err).assertFail();
          done();
        } else {
          console.log(`016Succeeded in creating a upload task:${task}`);
          try {
            request.agent.search(filter).then(async (data: Array<string>) => {
              console.log(`016requestTest searchTask success:${data}`);
              expect(data instanceof Array).assertTrue();
              await request.agent.remove(task.tid);
              done();
            }).catch((err: BusinessError) => {
              console.log(`016requestTest searchTask fail:${err}`);
              expect(err).assertFail();
              done();
            })
          } catch (err) {
            console.log(`016requestTest searchTask catch:${err}`);
            expect(err).assertFail();
            done();
          }
        }
      })
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Start_Func_1700
     * @tc.name: SUB_Request_RequestTest_Start_Func_1700
     * @tc.desc: uploadTask.start (callback)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_Start_Func_1700', 0, async (done: Function) => {
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments
      };
      request.agent.create(baseContext, config, (err: BusinessError, task: request.agent.Task) => {
        if (err) {
          console.log(`017Failed to create a upload task:${JSON.stringify(err)}`);
          expect(err).assertFail();
          done();
        } else {
          console.log(`017Succeeded in creating a upload task:${JSON.stringify(task)}`);
          task.start(async (err: BusinessError) => {
            if (err) {
              console.log(`017Failed to start the download task, Code: ${err.code}, message: ${err.message}`);
              expect(err).assertFail();
              done();
            } else {
              console.log(`017Succeeded in starting a download task.`);
              expect(err).assertNull();
              await request.agent.remove(task.tid);
              done();
            }
          })
        }
      })
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Start_Func_1800
     * @tc.name: SUB_Request_RequestTest_Start_Func_1800
     * @tc.desc: uploadTask.start (promise)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_Start_Func_1800', 0, async (done: Function) => {
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments
      };
      request.agent.create(baseContext, config, (err: BusinessError, task: request.agent.Task) => {
        if (err) {
          console.log(`018Failed to create a upload task:${err}`);
          expect(err).assertFail();
          done();
        } else {
          console.log(`018Succeeded in creating a upload task:${task}`);
          task.start().then(async (res) => {
            console.log(`018Succeeded in starting a download task.${res}`);
            expect(res).assertTrue();
            await request.agent.remove(task.tid);
            done();
          }).catch((err: BusinessError) => {
            console.log(`018Failed to start the download task, Code: ${err.code}, message: ${err.message}`);
            expect(err.code).assertEqual(21900006);
            done();
          })
        }
      })
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Pause_Func_1900
     * @tc.name: SUB_Request_RequestTest_Pause_Func_1900
     * @tc.desc: uploadTask.pause (callback)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_Pause_Func_1900', 0, async (done: Function) => {
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments
      };
      let task:request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`019requestTest create Task success:${task.tid}`);
      try {
        await task.start().then();
        console.log(`019requestTest start success`);
        task.pause(async (err: BusinessError) => {
          if (err) {
            console.log(`019requestTest pause fail${err}`);
            expect(err.code).assertEqual(21900007);
            done();
          } else {
            console.log(`019requestTest pause success${err}`);
            expect(err).assertNull();
            // remove task
            await request.agent.remove(task.tid);
            done();
          }
        })
      } catch (err) {
        console.log(`019requestTest pause catch${err}`);
        expect(err).assertFail();
        done();
      }
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Pause_Func_2000
     * @tc.name: SUB_Request_RequestTest_Pause_Func_2000
     * @tc.desc: uploadTask.pause (promise)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_Pause_Func_2000', 0, async (done: Function) => {
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments
      };
      let task:request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`020requestTest create Task success:${task.tid}`);
      task.start().then( async () => {
        console.log(`020requestTest start success${task}`);
        task.pause().then(async (res) => {
          console.log(`020requestTest pause success${res}`);
          expect(res).assertTrue();
          // remove task
          await request.agent.remove(task.tid);
          done();
        }).catch((err: BusinessError) => {
          console.log(`020requestTest pause fail:${err}`);
          expect(err.code).assertEqual(21900007);
          done();
        })
      }).catch((err: BusinessError) => {
        console.log(`020requestTest start fail:${err}`);
        expect(err).assertFail();
        done();
      })
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Resume_Func_2100
     * @tc.name: SUB_Request_RequestTest_Resume_Func_2100
     * @tc.desc: task.resume (callback)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_Resume_Func_2100', 0, async (done: Function) => {
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments
      };
      try {
        let task:request.agent.Task = await request.agent.create(baseContext, config);
        console.log(`021requestTest create Task success:${task.tid}`);
        let start:void = await task.start();
        console.log(`021requestTest start success${start}`);
        let pause:void = await task.pause();
        console.log(`021requestTest pause success${pause}`);
        task.resume(async (err: BusinessError) => {
          if (err) {
            console.log(`021requestTest resume fail${err}`);
            await request.agent.remove(task.tid);
            expect(err).assertFail();
            done();
          } else {
            console.log(`021requestTest resume success${err}`);
            // remove task
            await request.agent.remove(task.tid);
            expect(err).assertNull();
            done();
          }
        })
      } catch (err) {
        console.log(`requestTest031 resume catch${err}`);
        expect(err).assertFail();
        done();
      }
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Resume_Func_2200
     * @tc.name: SUB_Request_RequestTest_Resume_Func_2200
     * @tc.desc: task.resume (promise)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_Resume_Func_2200', 0, async (done: Function) => {
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments
      };
      let task:request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`022requestTest create Task success:${task.tid}`);
      let start:void = await task.start();
      console.log(`022requestTest start success${start}`);
      let pause:void = await task.pause();
      console.log(`022requestTest pause success${pause}`);
      task.resume().then(async (res) => {
        console.log(`022requestTest resume success${res}`);
        expect(res).assertTrue();
        // remove task
        await request.agent.remove(task.tid);
        done();
      }).catch(async (err: BusinessError) => {
        console.log(`022requestTest resume fail:${err}`);
        expect(err.code).assertEqual(21900006);
        await request.agent.remove(task.tid);
        done();
      })
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Stop_Func_2300
     * @tc.name: SUB_Request_RequestTest_Stop_Func_2300
     * @tc.desc: task.stop (callback)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_Stop_Func_2300', 0, async (done: Function) => {
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments
      };
      let task:request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`023requestTest create Task success:${task.tid}`);
      let start:void = await task.start();
      console.log(`023requestTest start success${start}`);
      task.stop(async (err: BusinessError) => {
        if (err) {
          console.log(`023requestTest stop fail${err}`);
          expect(err.code).assertEqual(21900007);
          done();
        } else {
          console.log(`023requestTest stop success${err}`);
          expect(err).assertNull();
          done();
        }
      })
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Stop_Func_2400
     * @tc.name: SUB_Request_RequestTest_Stop_Func_2400
     * @tc.desc: task.stop (promise)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_Stop_Func_2400', 0, async (done: Function) => {
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments
      };
      let task:request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`024requestTest create Task success:${task.tid}`);
      let start:void = await task.start();
      console.log(`024requestTest start success${start}`);
      task.stop().then(async (res) => {
        console.log(`024requestTest stop success${res}`);
        expect(res).assertTrue();
        done();
      }).catch((err: BusinessError) => {
        console.log(`024requestTest stop fail:${err}`);
        expect(err.code).assertEqual(21900007);
        done();
      })
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Start_Func_2500
     * @tc.name: SUB_Request_RequestTest_Start_Func_2500
     * @tc.desc: task.start()  /task state error. (callback)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_Start_Func_2500', 0, async (done: Function) => {
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments
      };
      let task:request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`025requestTest create Task success:${task.tid}`);
      let remove:void = await request.agent.remove(task.tid);
      console.log(`025requestTest remove success:${remove}`);
      task.start((err: BusinessError) => {
        if (err) {
          console.log(`025requestTest start fail:${err.code}`);
          expect(err.code).assertEqual(21900007);
          done();
        } else {
          console.log(`025requestTest start success:${err}`);
        }
      });
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Start_Func_2600
     * @tc.name: SUB_Request_RequestTest_Start_Func_2600
     * @tc.desc: task.start()  /task state error. (promise)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_Start_Func_2600', 0, async (done: Function) => {
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments
      };
      let task:request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`026requestTest create Task success:${task.tid}`);
      let remove:void = await request.agent.remove(task.tid);
      console.log(`026requestTest remove success:${remove}`);
      task.start().then(res => {
        console.log(`026requestTest start success:${res}`);
      }).catch((err: BusinessError) => {
        console.log(`026requestTest start fail:${err.code}`);
        expect(err.code).assertEqual(21900007);
        done();
      })
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Pause_Func_2700
     * @tc.name: SUB_Request_RequestTest_Pause_Func_2700
     * @tc.desc: task.pause() /task state error. (callback)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_Pause_Func_2700', 0, async (done: Function) => {
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments
      };
      let task:request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`027requestTest create Task success:${task.tid}`);
      task.pause(async (err: BusinessError) => {
        if (err) {
          console.log(`027requestTest pause fail:${err.code}`);
          expect(err.code).assertEqual(21900007);
          // remove task
          await request.agent.remove(task.tid);
          done();
        } else {
          console.log(`027requestTest pause success:${err}`);
        }
      })
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Pause_Func_2800
     * @tc.name: SUB_Request_RequestTest_Pause_Func_2800
     * @tc.desc: task.pause()  /task state error. (promise)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_Pause_Func_2800', 0, async (done: Function) => {
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments
      };
      let task:request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`028requestTest create Task success:${task.tid}`);
      task.pause().then(res => {
        console.log(`028requestTest pause success:${res}`);
      }).catch(async (err: BusinessError) => {
        console.log(`028requestTest pause fail:${err.code}`);
        expect(err.code).assertEqual(21900007);
        // remove task
        await request.agent.remove(task.tid);
        done();
      })
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Resume_Func_2900
     * @tc.name: SUB_Request_RequestTest_Resume_Func_2900
     * @tc.desc: task.resume() /task state error. (callback)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_Resume_Func_2900', 0, async (done: Function) => {
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments
      };
      let task:request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`029requestTest create Task success:${task.tid}`);
      task.resume(async (err: BusinessError) => {
        if (err) {
          console.log(`029requestTest resume fail:${err.code}`);
          expect(err.code).assertEqual(21900007);
          // remove task
          await request.agent.remove(task.tid);
          done();
        } else {
          console.log(`029requestTest resume success:${err}`);
        }
      })
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Resume_Func_3000
     * @tc.name: SUB_Request_RequestTest_Resume_Func_3000
     * @tc.desc: task.resume()  /task state error. (promise)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_Resume_Func_3000', 0, async (done: Function) => {
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments
      };
      let task:request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`030requestTest create Task success:${task.tid}`);
      task.resume().then(res => {
        console.log(`030requestTest resume success:${res}`);
      }).catch(async (err: BusinessError) => {
        console.log(`030requestTest resume fail:${err.code}`);
        expect(err.code).assertEqual(21900007);
        // remove task
        await request.agent.remove(task.tid);
        done();
      })
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Stop_Func_3100
     * @tc.name: SUB_Request_RequestTest_Stop_Func_3100
     * @tc.desc: task.stop() /task state error. (callback)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_Stop_Func_3100', 0, async (done: Function) => {
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments
      };
      let task:request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`031requestTest create Task success:${task.tid}`);
      task.stop(async (err: BusinessError) => {
        if (err) {
          console.log(`031requestTest stop fail:${err.code}`);
          expect(err.code).assertEqual(21900007);
          // remove task
          await request.agent.remove(task.tid);
          done();
        } else {
          console.log(`031requestTest stop success:${err}`);
        }
      })
    })

    /*
     * @tc.number: SUB_Request_RequestTest_Stop_Func_3200
     * @tc.name: SUB_Request_RequestTest_Stop_Func_3200
     * @tc.desc: task.stop()  /task state error. (promise)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_Stop_Func_3200', 0, async (done: Function) => {
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments
      };
      let task:request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`032requestTest create Task success:${task.tid}`);
      task.stop().then(res => {
        console.log(`032requestTest stop success:${res}`);
      }).catch(async (err: BusinessError) => {
        console.log(`032requestTest stop fail:${err.code}`);
        expect(err.code).assertEqual(21900007);
        // remove task
        await request.agent.remove(task.tid);
        done();
      })
    })

    /*
     * @tc.number: SUB_Request_RequestTest_OnProgress_Func_3300
     * @tc.name: SUB_Request_RequestTest_OnProgress_Func_3300
     * @tc.desc:  task.on('progress')
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_OnProgress_Func_3300', 0, async (done: Function) => {
      let flag:Boolean = false;
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments,
        mode: request.agent.Mode.FOREGROUND
      };
      let createOnProgress = (progress: request.agent.Progress):void => {
        console.log(`033upload task progress.${progress}`);
        flag = true;
        expect(flag).assertTrue();
      };
      let task:request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`033requestTest create Task success:${task.tid}`);
      task.on('progress', createOnProgress);
      // start task
      let start:void = await task.start();
      console.log(`033Succeeded in starting a upload task${start}`);
      done();
    })

    /*
     * @tc.number: SUB_Request_RequestTest_OnCompleted_Func_3400
     * @tc.name: SUB_Request_RequestTest_OnCompleted_Func_3400
     * @tc.desc:  task.on('completed')
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_OnCompleted_Func_3400', 0, async (done: Function) => {
      let flag:Boolean = false;
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments,
        mode: request.agent.Mode.FOREGROUND,
        index: 0,
        begins: 10,
        ends: 100
      };
      let createOnCompleted = (progress: request.agent.Progress):void => {
        console.log(`034upload task completed.${progress}`);
        flag = true
        expect(flag).assertTrue()
      };
      let task:request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`034requestTest create Task success:${task.tid}`);
      task.on('completed', createOnCompleted);
      // start task
      let start:void = await task.start();
      console.log(`034Succeeded in starting a upload task${start}`);
      done();
    })

    /*
     * @tc.number: SUB_Request_RequestTest_OnFailed_Func_3500
     * @tc.name: SUB_Request_RequestTest_OnFailed_Func_3500
     * @tc.desc: task.on('failed')
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_OnFailed_Func_3500', 0, async (done: Function) => {
      let flag:Boolean = false;
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments,
        mode: request.agent.Mode.FOREGROUND
      };
      let createOnFailed = (progress: request.agent.Progress):void => {
        console.log(`035upload task failed.${progress}`);
        flag = true
        expect(flag).assertTrue()
      };
      let task:request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`035requestTest create Task success:${task.tid}`);
      task.on('failed', createOnFailed);
      // start task
      let start:void = await task.start();
      console.log(`035Succeeded in starting a upload task${start}`);
      done();
    })

    /*
     * @tc.number: SUB_Request_RequestTest_OffProgress_Func_3600
     * @tc.name: SUB_Request_RequestTest_OffProgress_Func_3600
     * @tc.desc: task.off('progress')
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_OffProgress_Func_3600', 0, async (done: Function) => {
      let flag:Boolean = false;
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments,
        mode: request.agent.Mode.FOREGROUND
      };
      let createOnProgress = (progress: request.agent.Progress):void => {
        console.log(`036upload task progress.${progress}`);
        flag = true
        expect(flag).assertTrue()
      };
      let task:request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`036requestTest create Task success:${task.tid}`);
      task.on('progress', createOnProgress);
      task.off('progress', createOnProgress);
      // start task
      let start:void = await task.start();
      console.log(`036Succeeded in starting a upload task${start}`);
      done();
    })

    /*
     * @tc.number: SUB_Request_RequestTest_OffCompleted_Func_3700
     * @tc.name: SUB_Request_RequestTest_OffCompleted_Func_3700
     * @tc.desc:  task.off('completed')
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_OffCompleted_Func_3700', 0, async (done: Function) => {
      let flag:Boolean = false;
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments,
        mode: request.agent.Mode.FOREGROUND
      };
      let createOnCompleted = (progress: request.agent.Progress):void => {
        console.log(`037upload task completed.${progress}`);
        flag = true
        expect(flag).assertTrue()
      };
      let task:request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`037requestTest create Task success:${task.tid}`);
      task.on('completed', createOnCompleted);
      task.off('completed', createOnCompleted);
      // start task
      let start:void = await task.start();
      console.log(`037Succeeded in starting a upload task${start}`);
      done();
    })

    /*
     * @tc.number: SUB_Request_RequestTest_OffFailed_Func_3800
     * @tc.name: SUB_Request_RequestTest_OffFailed_Func_3800
     * @tc.desc:  task.off('failed')
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_OffFailed_Func_3800', 0, async (done: Function) => {
      let flag:Boolean = false;
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments,
        mode: request.agent.Mode.FOREGROUND
      };
      let createOnFailed = (progress: request.agent.Progress):void => {
        console.log(`038upload task failed.${progress}`);
        flag = true
        expect(flag).assertTrue()
      };
      let task:request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`038requestTest create Task success:${task.tid}`);
      task.on('failed', createOnFailed);
      task.off('failed', createOnFailed);
      // start task
      let start:void = await task.start();
      console.log(`038Succeeded in starting a upload task${start}`);
      done();
    })

    /*
     * @tc.number: SUB_Request_RequestTest_OffFailed_Func_3900
     * @tc.name: SUB_Request_RequestTest_OffFailed_Func_3900
     * @tc.desc:  task.off('failed')/unsubscribe all
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestTest_OffFailed_Func_3900', 0, async (done: Function) => {
      let flag1:Boolean = false;
      let flag2:Boolean = false;
      let file:fs.File = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2);
      fs.writeSync(file.fd, wenBen);
      let attachments: Array<request.agent.FormItem> = [{
        name: "createUploadTest",
        value: {
          filename: "createUploadTest.txt",
          mimeType: "application/octet-stream",
          path: "./createUploadTest.txt",
        }
      }];
      let config: request.agent.Config = {
        action: request.agent.Action.UPLOAD,
        url: 'http://127.0.0.1',
        data: attachments,
        mode: request.agent.Mode.FOREGROUND
      };
      let createOnFailed1 = (progress: request.agent.Progress):void => {
        console.log(`039upload task failed.${progress}`);
        flag1 = true
        expect(flag1).assertTrue()
      };
      let createOnFailed2 = (progress: request.agent.Progress):void => {
        console.log(`039upload task failed.${progress}`);
        flag2 = true
        expect(flag2).assertTrue()
      };
      let task:request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`039requestTest create Task success:${task.tid}`);
      task.on('failed', createOnFailed1);
      task.on('failed', createOnFailed2);
      task.off('failed');
      // start task
      let start:void = await task.start();
      console.log(`039Succeeded in starting a upload task${start}`);
      done();
    })
  })
}