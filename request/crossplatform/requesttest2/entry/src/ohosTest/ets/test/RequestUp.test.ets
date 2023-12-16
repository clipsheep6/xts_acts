import request from '@ohos.request';
import { describe, it, expect } from '@ohos/hypium'
import { BusinessError } from '@ohos.base'
import common from '@ohos.app.ability.common';
import fs from '@ohos.file.fs';

// 移除任务
function removeTask(id: string, flag: string) {
  console.log('接收到id？：', id)
  request.agent.remove(id, (err: BusinessError) => {
    if (err) {
      console.error(`remove requestTest-${flag} task fail:`, JSON.stringify(err));
    } else {
      console.log(`remove requestTest-${flag} task success!`, err);
    }
  });
}


export default function requestUpTest() {
  describe('requestTest', () => {
    let baseContext: common.Context = AppStorage.get('context') as common.Context

    /*
     * @tc.number: requestUpTest001
     * @tc.name: requestUpTest_001
     * @tc.desc: request.agent.create and request.agent.remove  (upload/callback)
     */
    it('requestUpTest001', 0, async (done: Function) => {
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      request.agent.create(baseContext, config, (err: BusinessError, task: request.agent.Task) => {
        if (err) {
          console.log('001Failed to create a upload task:', JSON.stringify(err));
          expect(err).assertFail()
        } else {
          console.log('001Succeeded in creating a upload task:', JSON.stringify(task));
          expect(task instanceof Object).assertTrue()
          // 移除任务
          request.agent.remove(task.tid, (err: BusinessError) => {
            if (err) {
              console.log('001Failed to removing a upload task:', JSON.stringify(err));
            } else {
              console.log(`001Succeeded in removing a upload task.`,err);
              expect(err).assertNull()
              done()
            }
          })
        }
      })
    })

    /*
     * @tc.number: requestUpTest002
     * @tc.name: requestUpTest_002
     * @tc.desc: request.agent.create and request.agent.remove  (upload/promise)
     */
    it('requestUpTest002', 0, async (done: Function) => {
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      request.agent.create(baseContext, config).then((task: request.agent.Task) => {
        console.log('002Succeeded in creating a upload task:',JSON.stringify(task));
        expect(task instanceof Object).assertTrue()
        // 移除任务
        request.agent.remove(task.tid).then((res) => {
          console.log('002Succeeded in removing a upload task:',res);
          expect(res).assertFalse()
          done()
        }).catch((err: BusinessError) => {
          console.log('002Failed to remove a upload task:',JSON.stringify(err));
          expect(err).assertFail()
        });
      }).catch((err: BusinessError) => {
        console.log('002Failed to create a upload task:',JSON.stringify(err));
        expect(err).assertFail()
      })
    })

    /*
     * @tc.number: requestUpTest003
     * @tc.name: requestUpTest_003
     * @tc.desc: request.agent.remove tid not found (callback)
     */
    it('requestUpTest003', 0, async (done: Function) => {
      request.agent.remove("创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。", (err: BusinessError) => {
        if (err) {
          console.log('003remove requestTest task fail', JSON.stringify(err));
          expect(err.code).assertEqual(21900006)
          done()
        } else {
          console.log('003remove requestTest task success!', err);
        }
      })
    })

    /*
     * @tc.number: requestUpTest004
     * @tc.name: requestUpTest_004
     * @tc.desc: request.agent.remove tid not found (promise)
     */
    it('requestUpTest004', 0, async (done: Function) => {
      request.agent.remove("创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。").then((res) => {
        console.log('004remove requestTest task success!', res);
        expect(res).assertFail()
      }).catch((err: BusinessError) => {
        console.log('004remove requestTest task fail', JSON.stringify(err));
        expect(err.code).assertEqual(21900006)
        done()
      })
    })

    /*
     * @tc.number: requestUpTest005
     * @tc.name: requestUpTest_005
     * @tc.desc: request.agent.show (upload/callback)
     */
    it('requestUpTest005', 0, async (done: Function) => {
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      request.agent.create(baseContext, config, (err: BusinessError, task: request.agent.Task) => {
        if (err) {
          console.log('005Failed to create a upload task:',JSON.stringify(err));
          expect(err).assertFail()
        } else {
          console.log('005Succeeded in creating a upload task:',JSON.stringify(task));
          // show查询任务
          request.agent.show(task.tid, (err: BusinessError, taskInfo: request.agent.TaskInfo) => {
            if (err) {
              console.log('005Failed to show a upload task:',JSON.stringify(err));
              expect(err).assertFail()
            } else {
              console.log('005Succeeded in showing a upload task.',taskInfo);
              expect(taskInfo.tid).assertEqual(task.tid)
              // 移除任务
              request.agent.remove(task.tid, (err: BusinessError) => {
                if (err) {
                  console.log(`005requestTest removeTask fail:`, JSON.stringify(err));
                } else {
                  console.log('005requestTest removeTask success:', err)
                }
              });
              done()
            }
          });
        }
      })
    })

    /*
     * @tc.number: requestUpTest006
     * @tc.name: requestUpTest_006
     * @tc.desc: request.agent.show (upload/promise)
     */
    it('requestUpTest006', 0, async (done: Function) => {
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      request.agent.create(baseContext, config, (err: BusinessError, task: request.agent.Task) => {
        if (err) {
          console.log('006Failed to create a upload task:',JSON.stringify(err));
          expect(err).assertFail()
        } else {
          console.log('006Succeeded in creating a upload task:',JSON.stringify(task));
          // show查询任务
          request.agent.show(task.tid).then((taskInfo: request.agent.TaskInfo) => {
            console.log(`006Succeeded in showing a upload task.`);
            expect(taskInfo.tid).assertEqual(task.tid)
            request.agent.remove(task.tid, (err: BusinessError) => {
              if (err) {
                console.log(`006requestTest removeTask fail:`, JSON.stringify(err));
              } else {
                console.log('006requestTest removeTask success:')
              }
            });
            done()
          }).catch((err: BusinessError) => {
            console.log(`006Failed to show a upload task, Code: ${err.code}, message: ${err.message}`);
          });
        }
      })
    })

    /*
     * @tc.number: requestUpTest007
     * @tc.name: requestUpTest_007
     * @tc.desc: request.agent.show (upload task not found/callback)
     */
    it('requestUpTest007', 0, async (done: Function) => {
      request.agent.show('task.tid',(err: BusinessError, taskInfo: request.agent.TaskInfo) => {
        if (err) {
          console.log('007requestTest showTask fail:', JSON.stringify(err))
          expect(err.code).assertEqual(21900006)
          done()
        } else {
          console.log('007requestTest showTask success:',taskInfo.tid)
        }
      });
    })

    /*
     * @tc.number: requestUpTest008
     * @tc.name: requestUpTest_008
     * @tc.desc: request.agent.show (upload task not found/promise)
     */
    it('requestUpTest008', 0, async (done: Function) => {
      request.agent.show('task.tid').then((res)=> {
        console.log('008requestTest showTask success:',res)
      }).catch((err:BusinessError) => {
        console.log('008requestTest showTask fail:', JSON.stringify(err))
        expect(err.code).assertEqual(21900006)
        done()
      });
    })

    /*
     * @tc.number: requestUpTest009
     * @tc.name: requestUpTest_009
     * @tc.desc: request.agent.touch (upload/callback)
     */
    it('requestUpTest009', 0, async (done: Function) => {
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      request.agent.create(baseContext, config, (err: BusinessError, task: request.agent.Task) => {
        if (err) {
          console.log('009Failed to create a upload task:',JSON.stringify(err));
          expect(err).assertFail()
        } else {
          console.log('009Succeeded in creating a upload task:',JSON.stringify(task));
          // touch查询任务
          request.agent.touch(task.tid, config.token, (err: BusinessError, taskInfo: request.agent.TaskInfo) => {
            if (err) {
              console.log(`009Failed to touch a upload task, Code: ${err.code}, message: ${err.message}`);
              expect(err).assertFail()
            } else {
              console.log(`009Succeeded in touching a upload task.`);
              expect(taskInfo.tid).assertEqual(task.tid)
              request.agent.remove(task.tid, (err: BusinessError) => {
                if (err) {
                  console.log(`009requestTest removeTask fail:`, JSON.stringify(err));
                } else {
                  console.log('009requestTest removeTask success:', err)
                }
              });
              done()
            }
          });
        }
      })
    })

    /*
     * @tc.number: requestUpTest010
     * @tc.name: requestUpTest_010
     * @tc.desc: request.agent.touch (upload/promise)
     */
    it('requestUpTest010', 0, async (done: Function) => {
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      request.agent.create(baseContext, config, (err: BusinessError, task: request.agent.Task) => {
        if (err) {
          console.log('010Failed to create a upload task:',JSON.stringify(err));
          expect(err).assertFail()
        } else {
          console.log('010Succeeded in creating a upload task:',JSON.stringify(task));
          // touch查询任务
          request.agent.touch(task.tid, config.token).then((taskInfo: request.agent.TaskInfo) => {
            console.log(`010Succeeded in touching a upload task. `);
            expect(taskInfo.tid).assertEqual(task.tid)
            request.agent.remove(task.tid, (err: BusinessError) => {
              if (err) {
                console.log(`010requestTest removeTask fail:`, JSON.stringify(err));
              } else {
                console.log('010requestTest removeTask success:', err)
              }
            });
            done()
          }).catch((err: BusinessError) => {
            console.log(`010Failed to touch a upload task, Code: ${err.code}, message: ${err.message}`);
          });
        }
      })
    })

    /*
     * @tc.number: requestUpTest011
     * @tc.name: requestUpTest_011
     * @tc.desc: request.agent.touch (upload token is wrong/callback)
     */
    it('requestUpTest011', 0, async (done: Function) => {
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      request.agent.create(baseContext, config, (err: BusinessError, task: request.agent.Task) => {
        if (err) {
          console.log('011Failed to create a upload task:',JSON.stringify(err));
          expect(err).assertFail()
        } else {
          console.log('011Succeeded in creating a upload task:',JSON.stringify(task));
          // touch查询任务
          try {
            request.agent.touch(task.tid, 'wrong', (err: BusinessError, taskInfo: request.agent.TaskInfo) => {
              if (err) {
                console.log('011requestTest touchTask fail:', JSON.stringify(err))
              } else {
                console.log('011requestTest touchTask success:', taskInfo.tid)
              }
            })
          } catch (err) {
            console.log('011requestTest11 touchTask catch:', JSON.stringify(err))
            expect(err.code).assertEqual(401)
            // 移除任务
            request.agent.remove(task.tid, (err: BusinessError) => {
              if (err) {
                console.log(`011requestTest removeTask fail:`, JSON.stringify(err));
              } else {
                console.log('011requestTest removeTask success:' + task.tid, err)
              }
            });
            done()
          }
        }
      })
    })

    /*
     * @tc.number: requestUpTest012
     * @tc.name: requestUpTest_012
     * @tc.desc: request.agent.touch (upload token is wrong/promise)
     */
    it('requestUpTest012', 0, async (done: Function) => {
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      request.agent.create(baseContext, config, (err: BusinessError, task: request.agent.Task) => {
        if (err) {
          console.log('012Failed to create a upload task:',JSON.stringify(err));
          expect(err).assertFail()
        } else {
          console.log('012Succeeded in creating a upload task:',JSON.stringify(task));
          // touch查询任务
          try {
            request.agent.touch(task.tid,'wrong').then((taskInfo: request.agent.TaskInfo) => {
              console.log('012requestTest touchTask success:', taskInfo.tid)
              expect(taskInfo.tid).assertEqual(task.tid)
            }).catch((err: BusinessError) => {
              console.log('012requestTest touchTask fail:', JSON.stringify(err))
            })
          } catch (err) {
            console.log('012requestTest touchTask catch:', JSON.stringify(err))
            expect(err.code).assertEqual(401)
            // 移除任务
            request.agent.remove(task.tid, (err: BusinessError) => {
              if (err) {
                console.log(`012requestTest removeTask fail:`, JSON.stringify(err));
              } else {
                console.log('012requestTest removeTask success:' + task.tid, err)
              }
            });
            done()
          }
        }
      })
    })

    /*
     * @tc.number: requestUpTest013
     * @tc.name: requestUpTest_013
     * @tc.desc: request.agent.touch (upload task not found/callback)
     */
    it('requestUpTest013', 0, async (done: Function) => {
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      request.agent.create(baseContext, config, (err: BusinessError, task: request.agent.Task) => {
        if (err) {
          console.log('013Failed to create a upload task:',JSON.stringify(err));
          expect(err).assertFail()
        } else {
          console.log('013Succeeded in creating a upload task:',JSON.stringify(task));
          // touch查询任务
          try {
            request.agent.touch('123', config.token, (err: BusinessError, taskInfo: request.agent.TaskInfo) => {
              if (err) {
                console.log('013requestTest touchTask fail:', JSON.stringify(err))
                expect(err.code).assertEqual(21900006)
                // 移除任务
                request.agent.remove(task.tid, (err: BusinessError) => {
                  if (err) {
                    console.log(`013requestTest removeTask fail:`, JSON.stringify(err));
                  } else {
                    console.log('013requestTest removeTask success:' + task.tid, err)
                  }
                });
                done()
              } else {
                console.log('013requestTest touchTask success:', taskInfo.tid)
              }
            })
          } catch (err) {
            console.log('013requestTest touchTask catch:', JSON.stringify(err))
          }
        }
      })
    })

    /*
     * @tc.number: requestUpTest014
     * @tc.name: requestUpTest_014
     * @tc.desc: request.agent.search (upload default Filter/callback)
     */
    it('requestUpTest014', 0, async (done: Function) => {
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      request.agent.create(baseContext, config, (err: BusinessError, task: request.agent.Task) => {
        if (err) {
          console.log('014Failed to create a upload task:',JSON.stringify(err));
          expect(err).assertFail()
        } else {
          console.log('014Succeeded in creating a upload task:',JSON.stringify(task));
          try {
            request.agent.search((err: BusinessError, data: Array<string>) => {
              if (err) {
                console.log('014requestTest searchTask fail:', JSON.stringify(err))
              } else {
                console.log('014requestTest searchTask success:' +data.length + '个：', data);
                expect(data instanceof Array).assertTrue()
                request.agent.remove(task.tid, (err: BusinessError) => {
                  if (err) {
                    console.log(`014requestTest removeTask fail:`, JSON.stringify(err));
                  } else {
                    console.log('014requestTest removeTask success:' + task.tid, err)
                  }
                });
                done()
              }
            });
          } catch (err) {
            console.log('014requestTest searchTask catch:', JSON.stringify(err))
          }
        }
      })
    })

    /*
     * @tc.number: requestUpTest015
     * @tc.name: requestUpTest_015
     * @tc.desc: request.agent.search (upload set Filter/callback)
     */
    it('requestUpTest015', 0, async (done: Function) => {
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      let filter: request.agent.Filter = {
        state: request.agent.State.INITIALIZED,
        action: request.agent.Action.UPLOAD,
        mode: request.agent.Mode.BACKGROUND,
      }
      request.agent.create(baseContext, config, (err: BusinessError, task: request.agent.Task) => {
        if (err) {
          console.log('015Failed to create a upload task:',JSON.stringify(err));
          expect(err).assertFail()
        } else {
          console.log('015Succeeded in creating a upload task:',JSON.stringify(task));
          try {
            request.agent.search(filter,(err: BusinessError, data: Array<string>) => {
              if (err) {
                console.log('015requestTest searchTask fail:', JSON.stringify(err))
              } else {
                console.log('015requestTest searchTask success:' + data.length + '个：',data);
                expect(data instanceof Array).assertTrue()
                request.agent.remove(task.tid, (err: BusinessError) => {
                  if (err) {
                    console.log(`015requestTest removeTask fail:`, JSON.stringify(err));
                  } else {
                    console.log('015requestTest removeTask success:' + task.tid, err)
                  }
                });
                done()
              }
            });
          } catch (err) {
            console.log('015requestTest searchTask catch:', JSON.stringify(err))
          }
        }
      })
    })

    /*
     * @tc.number: requestUpTest016
     * @tc.name: requestUpTest_016
     * @tc.desc: request.agent.search (upload set Filter/promise)
     */
    it('requestUpTest016', 0, async (done: Function) => {
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      let filter: request.agent.Filter = {
        state: request.agent.State.INITIALIZED,
        action: request.agent.Action.UPLOAD,
        mode: request.agent.Mode.BACKGROUND,
      }
      request.agent.create(baseContext, config, (err: BusinessError, task: request.agent.Task) => {
        if (err) {
          console.log('016Failed to create a upload task:',JSON.stringify(err));
          expect(err).assertFail()
        } else {
          console.log('016Succeeded in creating a upload task:',JSON.stringify(task));
          try {
            request.agent.search(filter).then((data: Array<string>) => {
              console.log('016requestTest searchTask success:' + data.length + '个：', data);
              expect(data instanceof Array).assertTrue()
              request.agent.remove(task.tid, (err: BusinessError) => {
                if (err) {
                  console.log(`016requestTest removeTask fail:`, JSON.stringify(err));
                } else {
                  console.log('016requestTest removeTask success:' + task.tid, err)
                }
              });
              done()
            }).catch((err: BusinessError) => {
              console.log('016requestTest searchTask fail:', JSON.stringify(err))
            });
          } catch (err) {
            console.log('016requestTest searchTask catch:', JSON.stringify(err))
          }
        }
      })
    })

    /*
     * @tc.number: requestUpTest017
     * @tc.name: requestUpTest_017
     * @tc.desc: uploadTask.start (callback)
     */
    it('requestUpTest017', 0, async (done: Function) => {
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      request.agent.create(baseContext, config, (err: BusinessError, task: request.agent.Task) => {
        if (err) {
          console.log('017Failed to create a upload task:',JSON.stringify(err));
          expect(err).assertFail()
        } else {
          console.log('017Succeeded in creating a upload task:',JSON.stringify(task));
          task.start((err: BusinessError) => {
            if (err) {
              console.log(`017Failed to start the download task, Code: ${err.code}, message: ${err.message}`);
            } else {
              console.log(`017Succeeded in starting a download task.`);
              expect(err).assertNull()
              removeTask(task.tid, '017')
              done()
            }
          });
        }
      })
    })

    /*
     * @tc.number: requestUpTest018
     * @tc.name: requestUpTest_018
     * @tc.desc: uploadTask.start (promise)
     */
    it('requestUpTest018', 0, async (done: Function) => {
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      request.agent.create(baseContext, config, (err: BusinessError, task: request.agent.Task) => {
        if (err) {
          console.log('018Failed to create a upload task:',JSON.stringify(err));
          expect(err).assertFail()
        } else {
          console.log('018Succeeded in creating a upload task:',JSON.stringify(task));
          task.start().then((res) => {
            console.log(`018Succeeded in starting a download task.`,res);
            expect(res).assertTrue()
            removeTask(task.tid, '018')
            done()
          }).catch((err: BusinessError) => {
            console.log(`018Failed to start the download task, Code: ${err.code}, message: ${err.message}`);
          });
        }
      })
    })

    /*
     * @tc.number: requestUpTest019
     * @tc.name: requestUpTest_019
     * @tc.desc: uploadTask.pause (callback)
     */
    it('requestUpTest019', 0, async (done: Function) => {
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      let task = await request.agent.create(baseContext, config)
      console.log('019requestTest create Task success:', task.tid)
      try {
        await task.start().then()
        console.log('019requestTest start success')
        task.pause((err: BusinessError) => {
          if (err) {
            console.log('019requestTest pause fail', JSON.stringify(err))
          } else {
            console.log('019requestTest pause success',err)
            expect(err).assertNull()
            // 移除任务
            removeTask(task.tid, '019')
            done()
          }
        })
      } catch (err) {
        console.log('019requestTest pause catch', JSON.stringify(err))
      }
    })

    /*
     * @tc.number: requestUpTest020
     * @tc.name: requestUpTest_020
     * @tc.desc: uploadTask.pause (promise)
     */
    it('requestUpTest020', 0, async (done: Function) => {
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      // 创建任务
      let task = await request.agent.create(baseContext, config)
      console.log('020requestTest create Task success:', task.tid)
      task.start().then(() => {
        console.log('020requestTest start success')
        task.pause().then((res) => {
          console.log('020requestTest pause success',res)
          expect(res).assertTrue()
          // 移除任务
          removeTask(task.tid, '020')
          done()
        }).catch((err: BusinessError) => {
          console.log('020requestTest pause fail:', JSON.stringify(err))
        })
      }).catch((err: BusinessError) => {
        console.log('020requestTest start fail:', JSON.stringify(err))
      })
    })

    /*
     * @tc.number: requestUpTest021
     * @tc.name: requestUpTest_021
     * @tc.desc: task.resume (callback)
     */
    it('requestUpTest021', 0, async (done: Function) => {
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      // 创建任务
      let task = await request.agent.create(baseContext, config)
      console.log('021requestTest create Task success:', task.tid)
      let start = await task.start()
      console.log('021requestTest start success', start)
      let pause = await task.pause()
      console.log('021requestTest pause success', pause)
      task.resume((err: BusinessError) => {
        if (err) {
          console.log('021requestTest resume fail', JSON.stringify(err))
        } else {
          console.log('021requestTest resume success', err)
          // 移除任务
          expect(err).assertNull()
          removeTask(task.tid, '021')
          done()
        }
      })
    })

    /*
     * @tc.number: requestUpTest022
     * @tc.name: requestUpTest_022
     * @tc.desc: task.resume (promise)
     */
    it('requestUpTest022', 0, async (done: Function) => {
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      // 创建任务
      let task = await request.agent.create(baseContext, config)
      console.log('022requestTest create Task success:', task.tid)
      let start = await task.start()
      console.log('022requestTest start success', start)
      let pause = await task.pause()
      console.log('022requestTest pause success', pause)
      task.resume().then((res) => {
        console.log('022requestTest resume success',res)
        expect(res).assertTrue()
        // 移除任务
        removeTask(task.tid, '022')
        done()
      }).catch((err: BusinessError) => {
        console.log('022requestTest resume fail:', JSON.stringify(err))
      })
    })

    /*
     * @tc.number: requestUpTest023
     * @tc.name: requestUpTest_023
     * @tc.desc: task.stop (callback)
     */
    it('requestUpTest023', 0, async (done: Function) => {
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      // 创建任务
      let task = await request.agent.create(baseContext, config)
      console.log('023requestTest create Task success:', task.tid)
      let start = await task.start()
      console.log('023requestTest start success', start)
      task.stop((err: BusinessError) => {
        if (err) {
          console.log('023requestTest stop fail', JSON.stringify(err))
        } else {
          console.log('023requestTest stop success', err)
          expect(err).assertNull()
          // 移除任务
          removeTask(task.tid, '023')
          done()
        }
      })
    })

    /*
     * @tc.number: requestUpTest024
     * @tc.name: requestUpTest_024
     * @tc.desc: task.stop (promise)
     */
    it('requestUpTest024', 0, async (done: Function) => {
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      // 创建任务
      let task = await request.agent.create(baseContext, config)
      console.log('024requestTest create Task success:', task.tid)
      let start = await task.start()
      console.log('024requestTest start success', start)
      task.stop().then((res) => {
        console.log('024requestTest stop success', res)
        expect(res).assertTrue()
        // 移除任务
        removeTask(task.tid, '024')
        done()
      }).catch((err: BusinessError) => {
        console.log('024requestTest stop fail:', JSON.stringify(err))
      })
    })

    /*
     * @tc.number: requestUpTest025
     * @tc.name: requestUpTest_025
     * @tc.desc: task.start()  /task state error. (callback)
     */
    it('requestUpTest025', 0, async (done: Function) => {
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      // 创建任务
      let task = await request.agent.create(baseContext, config)
      console.log('025requestTest create Task success:', task.tid)
      let remove = request.agent.remove(task.tid)
      console.log('025requestTest remove success:', remove)
      task.start((err: BusinessError) => {
        if (err) {
          console.log('025requestTest start fail:', err.code)
          expect(err.code).assertEqual(21900007)
          console.log('025task',JSON.stringify(task))
          // 移除任务
          removeTask(task.tid, '025')
        } else {
          console.log('025requestTest start success:', err)
        }
      });
      done()
    })

    /*
     * @tc.number: requestUpTest026
     * @tc.name: requestUpTest_026
     * @tc.desc: task.start()  /task state error. (promise)
     */
    it('requestUpTest026', 0, async (done: Function) => {
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      // 创建任务
      let task = await request.agent.create(baseContext, config)
      console.log('026requestTest create Task success:', task.tid)
      let remove = request.agent.remove(task.tid)
      console.log('026requestTest remove success:', remove)
      task.start().then(res => {
        console.log('026requestTest start success:', res)
      }).catch((err: BusinessError) => {
        console.log('026requestTest start fail:', err.code)
        expect(err.code).assertEqual(21900007)
        // 移除任务
        removeTask(task.tid, '026')
      })
      done()
    })

    /*
     * @tc.number: requestUpTest027
     * @tc.name: requestUpTest_027
     * @tc.desc: task.pause() /task state error. (callback)
     */
    it('requestUpTest027', 0, async (done: Function) => {
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      // 创建任务
      let task = await request.agent.create(baseContext, config)
      console.log('027requestTest create Task success:', task.tid)
      task.pause((err: BusinessError) => {
        if (err) {
          console.log('027requestTest pause fail:', err.code)
          expect(err.code).assertEqual(21900007)
          // 移除任务
          removeTask(task.tid, '027')
        } else {
          console.log('027requestTest pause success:', err)
        }
      });
      done()
    })

    /*
     * @tc.number: requestUpTest028
     * @tc.name: requestUpTest_028
     * @tc.desc: task.pause()  /task state error. (promise)
     */
    it('requestUpTest028', 0, async (done: Function) => {
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      // 创建任务
      let task = await request.agent.create(baseContext, config)
      console.log('028requestTest create Task success:', task.tid)
      task.pause().then(res => {
        console.log('028requestTest pause success:', res)
      }).catch((err: BusinessError) => {
        console.log('028requestTest pause fail:', err.code)
        expect(err.code).assertEqual(21900007)
        // 移除任务
        removeTask(task.tid, '028')
      })
      done()
    })

    /*
     * @tc.number: requestUpTest029
     * @tc.name: requestUpTest_029
     * @tc.desc: task.resume() /task state error. (callback)
     */
    it('requestUpTest029', 0, async (done: Function) => {
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      // 创建任务
      let task = await request.agent.create(baseContext, config)
      console.log('029requestTest create Task success:', task.tid)
      task.resume((err: BusinessError) => {
        if (err) {
          console.log('029requestTest resume fail:', err.code)
          expect(err.code).assertEqual(21900007)
          // 移除任务
          removeTask(task.tid, '029')
        } else {
          console.log('029requestTest resume success:', err)
        }
      });
      done()
    })

    /*
     * @tc.number: requestUpTest030
     * @tc.name: requestUpTest_030
     * @tc.desc: task.resume()  /task state error. (promise)
     */
    it('requestUpTest030', 0, async (done: Function) => {
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      // 创建任务
      let task = await request.agent.create(baseContext, config)
      console.log('030requestTest create Task success:', task.tid)
      task.resume().then(res => {
        console.log('030requestTest resume success:', res)
      }).catch((err: BusinessError) => {
        console.log('030requestTest resume fail:', err.code)
        expect(err.code).assertEqual(21900007)
        // 移除任务
        removeTask(task.tid, '030')
      })
      done()
    })

    /*
     * @tc.number: requestUpTest031
     * @tc.name: requestUpTest_031
     * @tc.desc: task.stop() /task state error. (callback)
     */
    it('requestUpTest031', 0, async (done: Function) => {
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      // 创建任务
      let task = await request.agent.create(baseContext, config)
      console.log('031requestTest create Task success:', task.tid)
      task.stop((err: BusinessError) => {
        if (err) {
          console.log('031requestTest stop fail:', err.code)
          expect(err.code).assertEqual(21900007)
          // 移除任务
          removeTask(task.tid, '031')
        } else {
          console.log('031requestTest stop success:', err)
        }
      });
      done()
    })

    /*
     * @tc.number: requestUpTest032
     * @tc.name: requestUpTest_032
     * @tc.desc: task.stop()  /task state error. (promise)
     */
    it('requestUpTest032', 0, async (done: Function) => {
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      // 创建任务
      let task = await request.agent.create(baseContext, config)
      console.log('032requestTest create Task success:', task.tid)
      task.stop().then(res => {
        console.log('032requestTest stop success:', res)
      }).catch((err: BusinessError) => {
        console.log('032requestTest stop fail:', err.code)
        expect(err.code).assertEqual(21900007)
        // 移除任务
        removeTask(task.tid, '032')
      })
      done()
    })

    /*
     * @tc.number: requestUpTest033
     * @tc.name: requestUpTest_033
     * @tc.desc:  task.on('progress')
     */
    it('requestUpTest033', 0, async (done: Function) => {
      let flag:Boolean = false
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      let createOnProgress = (progress: request.agent.Progress) => {
        console.log('033upload task progress.',progress);
        flag = true
        expect(flag).assertTrue()
      };
      let task = await request.agent.create(baseContext, config)
      console.log('033requestTest create Task success:', task.tid)
      task.on('progress', createOnProgress);
      // 启动任务
      let start = await task.start()
      console.log('033Succeeded in starting a upload task',start)
      removeTask(task.tid, '033')
      done()
    })

    /*
     * @tc.number: requestUpTest034
     * @tc.name: requestUpTest_034
     * @tc.desc:  task.on('completed')
     */
    it('requestUpTest034', 0, async (done: Function) => {
      let flag:Boolean = false
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      let createOnCompleted = (progress: request.agent.Progress) => {
        console.log('034upload task completed.',progress);
        flag = true
        expect(flag).assertTrue()
      };
      let task = await request.agent.create(baseContext, config)
      console.log('034requestTest create Task success:', task.tid)
      task.on('completed', createOnCompleted);
      // 启动任务
      let start = await task.start()
      console.log('034Succeeded in starting a upload task',start)
      removeTask(task.tid, '034')
      done()
    })

    /*
     * @tc.number: requestUpTest035
     * @tc.name: requestUpTest_035
     * @tc.desc:  task.on('failed')
     */
    it('requestUpTest035', 0, async (done: Function) => {
      let flag:Boolean = false
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      let createOnFailed = (progress: request.agent.Progress) => {
        console.log('035upload task failed.',progress);
        flag = true
        expect(flag).assertTrue()
      };
      let task = await request.agent.create(baseContext, config)
      console.log('035requestTest create Task success:', task.tid)
      task.on('failed', createOnFailed);
      // 启动任务
      let start = await task.start()
      console.log('035Succeeded in starting a upload task',start)
      removeTask(task.tid, '035')
      done()
    })

    /*
     * @tc.number: requestUpTest036
     * @tc.name: requestUpTest_036
     * @tc.desc:  task.off('progress')
     */
    it('requestUpTest036', 0, async (done: Function) => {
      let flag:Boolean = false
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      let createOnProgress = (progress: request.agent.Progress) => {
        console.log('036upload task progress.',progress);
        flag = true
        expect(flag).assertTrue()
      };
      let task = await request.agent.create(baseContext, config)
      console.log('036requestTest create Task success:', task.tid)
      task.on('progress', createOnProgress);
      task.off('progress', createOnProgress);
      // 启动任务
      let start = await task.start()
      console.log('036Succeeded in starting a upload task',start)
      removeTask(task.tid, '036')
      done()
    })

    /*
     * @tc.number: requestUpTest037
     * @tc.name: requestUpTest_037
     * @tc.desc:  task.off('completed')
     */
    it('requestUpTest037', 0, async (done: Function) => {
      let flag:Boolean = false
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      let createOnCompleted = (progress: request.agent.Progress) => {
        console.log('037upload task completed.',progress);
        flag = true
        expect(flag).assertTrue()
      };
      let task = await request.agent.create(baseContext, config)
      console.log('037requestTest create Task success:', task.tid)
      task.on('completed', createOnCompleted);
      task.off('completed', createOnCompleted);
      // 启动任务
      let start = await task.start()
      console.log('037Succeeded in starting a upload task',start)
      removeTask(task.tid, '037')
      done()
    })

    /*
     * @tc.number: requestUpTest038
     * @tc.name: requestUpTest_038
     * @tc.desc:  task.off('failed')
     */
    it('requestUpTest038', 0, async (done: Function) => {
      let flag:Boolean = false
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      let createOnFailed = (progress: request.agent.Progress) => {
        console.log('038upload task failed.',progress);
        flag = true
        expect(flag).assertTrue()
      };
      let task = await request.agent.create(baseContext, config)
      console.log('038requestTest create Task success:', task.tid)
      task.on('failed', createOnFailed);
      task.off('failed', createOnFailed);
      // 启动任务
      let start = await task.start()
      console.log('038Succeeded in starting a upload task',start)
      removeTask(task.tid, '038')
      done()
    })

    /*
     * @tc.number: requestUpTest039
     * @tc.name: requestUpTest_039
     * @tc.desc:  task.off('failed')/unsubscribe all
     */
    it('requestUpTest039', 0, async (done: Function) => {
      let flag1:Boolean = false
      let flag2:Boolean = false
      let file = fs.openSync(baseContext.cacheDir + '/createUploadTest.txt', 0o100 | 0o2)
      fs.writeSync(file.fd, '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。')
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
      }
      let createOnFailed1 = (progress: request.agent.Progress) => {
        console.log('039upload task failed.',progress);
        flag1 = true
        expect(flag1).assertTrue()
      };
      let createOnFailed2 = (progress: request.agent.Progress) => {
        console.log('039upload task failed.',progress);
        flag2 = true
        expect(flag2).assertTrue()
      };
      let task = await request.agent.create(baseContext, config)
      console.log('039requestTest create Task success:', task.tid)
      task.on('failed', createOnFailed1);
      task.on('failed', createOnFailed2);
      task.off('failed');
      // 启动任务
      let start = await task.start()
      console.log('039Succeeded in starting a upload task',start)
      removeTask(task.tid, '039')
      done()
    })
  })
}