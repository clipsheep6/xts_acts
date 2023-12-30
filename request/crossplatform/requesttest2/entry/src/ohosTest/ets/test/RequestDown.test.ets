import { describe, it, expect } from '@ohos/hypium'
import request from '@ohos.request';
import { BusinessError } from '@ohos.base';
import common from '@ohos.app.ability.common';

export default function requestDownTest() {
  describe('requestDownTest', () => {
    let baseContext: common.Context = AppStorage.get('context') as common.Context
    const NO_TASK:number = 21900006
    const TASK_STATE_ERROR:number = 21900007
    const QUEUE_FULL_ERROR:number = 21900004
    const PARAMS_WRONG:number = 401

    /*
     * @tc.number: requestTest001
     * @tc.name: requestDownTest_001
     * @tc.desc: request.agent.Action
     */
    it('requestDownTest_001', 0, (done: Function) => {
      let download: Number = request.agent.Action.DOWNLOAD
      let upload: Number = request.agent.Action.UPLOAD
      console.log('download:' + download + '--upload:' + upload)
      expect(download).assertEqual(0)
      expect(upload).assertEqual(1)
      done()
    })

    /*
     * @tc.number: requestTest002
     * @tc.name: requestDownTest_002
     * @tc.desc: request.agent.Mode
     */
    it('requestDownTest_002', 0, (done: Function) => {
      let background: Number = request.agent.Mode.BACKGROUND
      let foreground: Number = request.agent.Mode.FOREGROUND
      console.log('background:' + background + '--foreground:' + foreground)
      expect(background).assertEqual(0)
      expect(foreground).assertEqual(1)
      done()
    })

    /*
     * @tc.number: requestTest003
     * @tc.name: requestDownTest_003
     * @tc.desc: request.agent.Network
     */
    it('requestDownTest_003', 0, (done: Function) => {
      let any: Number = request.agent.Network.ANY
      let wifi: Number = request.agent.Network.WIFI
      let cellular: Number = request.agent.Network.CELLULAR
      console.log('any:' + any + '--wifi:' + wifi + '--cellular:' + cellular)
      expect(any).assertEqual(0)
      expect(wifi).assertEqual(1)
      expect(cellular).assertEqual(2)
      done()
    })

    /*
     * @tc.number: requestTest004
     * @tc.name: requestDownTest_004
     * @tc.desc: request.agent.State
     */
    it('requestDownTest_004', 0, (done: Function) => {
      let initialized: Number = request.agent.State.INITIALIZED
      let waiting: Number = request.agent.State.WAITING
      let running: Number = request.agent.State.RUNNING
      let retrying: Number = request.agent.State.RETRYING
      let paused: Number = request.agent.State.PAUSED
      let stopped: Number = request.agent.State.STOPPED
      let completed: Number = request.agent.State.COMPLETED
      let failed: Number = request.agent.State.FAILED
      let removed: Number = request.agent.State.REMOVED
      console.log('initialized:' + initialized + '--waiting:' + waiting + '--running:' + running)
      console.log('retrying:' + retrying + '--paused:' + paused + '--stopped:' + stopped)
      console.log('completed:' + completed + '--failed:' + failed + '--removed:' + removed)
      expect(initialized).assertEqual(0x00)
      expect(waiting).assertEqual(0x10)
      expect(running).assertEqual(0x20)
      expect(retrying).assertEqual(0x21)
      expect(paused).assertEqual(0x30)
      expect(stopped).assertEqual(0x31)
      expect(completed).assertEqual(0x40)
      expect(failed).assertEqual(0x41)
      expect(removed).assertEqual(0x50)
      done()
    })

    /*
     * @tc.number: requestTest005
     * @tc.name: requestDownTest_005
     * @tc.desc: request.agent.Faults
     */
    it('requestDownTest_005', 0, (done: Function) => {
      let others: Number = request.agent.Faults.OTHERS
      let disconnected: Number = request.agent.Faults.DISCONNECTED
      let timeout: Number = request.agent.Faults.TIMEOUT
      let protocol: Number = request.agent.Faults.PROTOCOL
      let fsio: Number = request.agent.Faults.FSIO
      console.log('others:' + others + '--disconnected:' + disconnected + '--timeout:' + timeout)
      console.log('protocol:' + protocol + '--fsio:' + fsio)
      expect(others).assertEqual(0xFF)
      expect(disconnected).assertEqual(0x00)
      expect(timeout).assertEqual(0x10)
      expect(protocol).assertEqual(0x20)
      expect(fsio).assertEqual(0x40)
      done()
    })

    /*
     * @tc.number: requestTest006
     * @tc.name: requestDownTest006
     * @tc.desc: request.agent.create and request.agent.remove  (promise)
     */
    it('requestDownTest006', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './test006',
        overwrite: true,
      };
      // create Task
      request.agent.create(baseContext, config).then((task: request.agent.Task) => {
        console.log('requestTest006 create Task success:', JSON.stringify(task.tid));
        expect(task instanceof Object).assertTrue()
        // remove Task
        request.agent.remove(task.tid).then((res) => {
          console.info('remove requestTest006 task success!', res);
          expect(res).assertFalse()
          done()
        }).catch((err: BusinessError) => {
          console.error('remove requestTest006 task fail', JSON.stringify(err));
          expect(err).assertFail()
          done()
        });
      }).catch((err: BusinessError) => {
        console.error('requestTest006 create Task fail:', JSON.stringify(err));
        expect(err).assertFail()
        done()
      });
    })

    /*
     * @tc.number: requestTest007
     * @tc.name: requestDownTest007
     * @tc.desc:  request.agent.create and request.agent.remove (callback)
     */
    it('requestDownTest007', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './test007',
        overwrite: true,
      };
      try {
        // create Task
        request.agent.create(baseContext, config, (err: BusinessError, task: request.agent.Task) => {
          if (err) {
            console.error('requestTest007 create Task fail:', JSON.stringify(err));
            expect(err).assertFail()
          } else {
            console.log('requestTest007 create Task success:', JSON.stringify(task));
            expect(task instanceof Object).assertTrue()
            // remove Task
            request.agent.remove(task.tid, (err: BusinessError) => {
              if (err) {
                console.error('remove requestTest007 task fail', JSON.stringify(err));
                expect(err).assertFail()
                done()
              } else {
                console.log('remove requestTest007 task success!', err);
                expect(err).assertNull()
                done()
              }
            });
          }
        });
      } catch (err) {
        console.log('007catch:', err)
        expect(err).assertFail()
        done()
      }
    })

    /*
     * @tc.number: requestTest008
     * @tc.name: requestDownTest008
     * @tc.desc: request.agent.remove  /task not found (promise)
     */
    it('requestDownTest008', 0, async (done: Function) => {
      request.agent.remove('12345').then((res) => {
        console.info('remove requestTest008 task success!', res);
        expect(res).assertFail()
      }).catch((err: BusinessError) => {
        console.error('remove requestTest008 task fail', JSON.stringify(err));
        // expect(err.code).assertEqual(NO_TASK)
        expect(err.code).assertEqual(NO_TASK)
        done()
      });
    })

    /*
     * @tc.number: requestTest009
     * @tc.name: requestDownTest009
     * @tc.desc: request.agent.remove  /task not found (callback)
     */
    it('requestDownTest009', 0, async (done: Function) => {
      try {
        request.agent.remove('12345', (err: BusinessError) => {
          if (err) {
            console.error('remove requestTest009 task fail', JSON.stringify(err));
            expect(err.code).assertEqual(NO_TASK)
            done()
          } else {
            console.info('remove requestTest009 task success!', err);
            expect(err).assertFail()
            done()
          }
        })
      } catch (err) {
        console.info('remove requestTest009 task catch!', err);
        expect(err).assertFail()
        done()
      }

    })

    /*
     * @tc.number: requestTest010
     * @tc.name: requestDownTest010
     * @tc.desc: request.agent.show (promise)
     */
    it('requestDownTest010', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './test010',
        overwrite: true,
      };
      let task:request.agent.Task = await request.agent.create(baseContext, config)
      console.log('requestTest010 create Task success:', task.tid)
      request.agent.show(task.tid).then(async (taskInfo: request.agent.TaskInfo) => {
        console.log('requestTest010 showTask success:', JSON.stringify(taskInfo))
        expect(taskInfo.tid).assertEqual(task.tid)
        // remove Task
        await request.agent.remove(task.tid)
        done()
      }).catch((err: BusinessError) => {
        console.error('requestTest010 showTask fail:', JSON.stringify(err))
        expect(err).assertFail()
        done()
      })
    })

    /*
     * @tc.number: requestTest011
     * @tc.name: requestDownTest011
     * @tc.desc: request.agent.show (callback)
     */
    it('requestDownTest011', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './test011',
        overwrite: true,
      };
      try {
        let task:request.agent.Task = await request.agent.create(baseContext, config)
        console.log('requestTest011 create Task success:', task.tid)
        request.agent.show(task.tid, async (err: BusinessError, taskInfo: request.agent.TaskInfo) => {
          if (err) {
            console.error('requestTest011 showTask fail:', JSON.stringify(err))
          } else {
            console.log('requestTest011 showTask success:', taskInfo.tid)
            expect(taskInfo.tid).assertEqual(task.tid)
            // remove Task
            await request.agent.remove(task.tid)
            done()
          }
        });
      } catch (err) {
        console.log('requestTest011 showTask catch:', err)
        expect(err).assertFail()
        done()
      }
    })

    /*
     * @tc.number: requestTest012
     * @tc.name: requestDownTest012
     * @tc.desc: request.agent.show /task not found (promise)
     */
    it('requestDownTest012', 0, async (done: Function) => {
      request.agent.show('task.tid').then((res) => {
        console.log('requestTest012 showTask success:', res)
      }).catch((err: BusinessError) => {
        console.error('requestTest012 showTask fail:', JSON.stringify(err))
        expect(err.code).assertEqual(NO_TASK)
        done()
      });
    })

    /*
     * @tc.number: requestTest013
     * @tc.name: requestDownTest013
     * @tc.desc: request.agent.show /task not found (callback)
     */
    it('requestDownTest013', 0, async (done: Function) => {
      try {
        request.agent.show('task.tid', (err: BusinessError, taskInfo: request.agent.TaskInfo) => {
          if (err) {
            console.error('requestTest013 showTask fail:', JSON.stringify(err))
            expect(err.code).assertEqual(NO_TASK)
            done()
          } else {
            console.log('requestTest013 showTask success:', taskInfo.tid)
          }
        })
      } catch (err) {
        console.log('requestTest013 showTask success:', err)
        expect(err).assertFail()
        done()
      }
    })

    /*
     * @tc.number: requestTest014
     * @tc.name: requestDownTest014
     * @tc.desc: request.agent.touch (promise)
     */
    it('requestDownTest014', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './test014',
        token: "is test014",
        overwrite: true,
      };
      let task:request.agent.Task = await request.agent.create(baseContext, config)
      console.log('requestTest014 create Task success:', task.tid)
      request.agent.touch(task.tid, config.token).then(async (taskInfo: request.agent.TaskInfo) => {
        console.log('requestTest014 touchTask success:', taskInfo.tid)
        expect(taskInfo.tid).assertEqual(task.tid)
        // remove Task
        await request.agent.remove(task.tid)
        done()
      }).catch(async (err: BusinessError) => {
        console.error('requestTest014 touchTask fail:', JSON.stringify(err))
        await request.agent.remove(task.tid)
        expect(err).assertFail()
        done()
      })
    })

    /*
     * @tc.number: requestTest015
     * @tc.name: requestDownTest015
     * @tc.desc: request.agent.touch (callback)
     */
    it('requestDownTest015', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './test015',
        token: 'is test015',
        overwrite: true,
      };
      let task:request.agent.Task = await request.agent.create(baseContext, config)
      console.log('requestTest015 create Task success:', task.tid)
      try {
        request.agent.touch(task.tid, config.token, async (err: BusinessError, taskInfo: request.agent.TaskInfo) => {
          if (err) {
            console.error('requestTest015 touchTask fail:', JSON.stringify(err))
            await request.agent.remove(task.tid)
            expect(err).assertFail()
            done()
          } else {
            console.log('requestTest015 touchTask success:', taskInfo.tid)
            expect(taskInfo.tid).assertEqual(task.tid)
            // remove Task
            await request.agent.remove(task.tid)
            done()
          }
        })
      } catch (err) {
        console.log('requestTest015 touchTask catch:', err)
        await request.agent.remove(task.tid)
        expect(err).assertFail()
        done()
      }
    })

    /*
     * @tc.number: requestTest016
     * @tc.name: requestDownTest016
     * @tc.desc: request.agent.touch /token is wrong (promise)
     */
    it('requestDownTest016', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './test016',
        token: "is test016",
        overwrite: true,
      };
      let task:request.agent.Task = await request.agent.create(baseContext, config)
      console.log('requestTest016 create Task success:', task.tid)
      try {
        request.agent.touch(task.tid, 'wrong').then((taskInfo: request.agent.TaskInfo) => {
          console.log('requestTest016 touchTask success:', taskInfo.tid)
          expect(taskInfo.tid).assertEqual(task.tid)
        }).catch(async (err: BusinessError) => {
          console.error('requestTest016 touchTask fail:', JSON.stringify(err))
          expect(err).assertFail()
          await request.agent.remove(task.tid)
          done()
        })
      } catch (err) {
        console.error('requestTest016 touchTask catch:', JSON.stringify(err))
        expect(err.code).assertEqual(PARAMS_WRONG)
        // remove Task
        await request.agent.remove(task.tid)
        done()
      }
    })

    /*
     * @tc.number: requestTest017
     * @tc.name: requestDownTest017
     * @tc.desc: request.agent.touch /token is wrong (callback)
     */
    it('requestDownTest017', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './test017',
        token: "is test017",
        overwrite: true,
      };
      let task:request.agent.Task = await request.agent.create(baseContext, config)
      console.log('requestTest017 create Task success:', task.tid)
      try {
        request.agent.touch(task.tid, 'wrong', (err: BusinessError, taskInfo: request.agent.TaskInfo) => {
          if (err) {
            console.error('requestTest017 touchTask fail:', JSON.stringify(err))
          } else {
            console.log('requestTest017 touchTask success:', taskInfo.tid)
          }
        })
      } catch (err) {
        console.error('requestTest017 touchTask catch:', JSON.stringify(err))
        expect(err.code).assertEqual(PARAMS_WRONG)
        // remove Task
        await request.agent.remove(task.tid)
        done()
      }
    })

    /*
     * @tc.number: requestTest018
     * @tc.name: requestDownTest018
     * @tc.desc: request.agent.touch /task not found (callback)
     */
    it('requestDownTest018', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './test018',
        token: "is test018",
        overwrite: true,
      };
      let task:request.agent.Task = await request.agent.create(baseContext, config)
      console.log('requestTest018 create Task success:', task.tid)
      try {
        request.agent.touch('123', config.token, async (err: BusinessError, taskInfo: request.agent.TaskInfo) => {
          if (err) {
            console.error('requestTest018 touchTask fail:', JSON.stringify(err))
            expect(err.code).assertEqual(NO_TASK)
            // remove Task
            await request.agent.remove(task.tid)
            done()
          } else {
            console.log('requestTest018 touchTask success:', taskInfo.tid)
          }
        })
      } catch (err) {
        console.error('requestTest018 touchTask catch:', JSON.stringify(err))
        await request.agent.remove(task.tid)
        expect(err).assertFail()
        done()
      }
    })

    /*
     * @tc.number: requestTest019
     * @tc.name: requestDownTest019
     * @tc.desc: request.agent.search /default Filter (callback)
     */
    it('requestDownTest019', 0, async (done: Function) => {
      try {
        request.agent.search((err: BusinessError, data: Array<string>) => {
          if (err) {
            console.error('requestTest019 searchTask fail:', JSON.stringify(err))
            expect(err).assertFail()
            done()
          } else {
            console.log('requestTest019 searchTask success:' + data.length + '个：', data);
            expect(data instanceof Array).assertTrue()
            done()
          }
        });
      } catch (err) {
        console.error('requestTest019 searchTask catch:', JSON.stringify(err))
        expect(err).assertFail()
        done()
      }
    })


    /*
     * @tc.number: requestTest020
     * @tc.name: requestDownTest020
     * @tc.desc: request.agent.search /set Filter (callback)
     */
    it('requestDownTest020', 0, async (done: Function) => {
      let filter: request.agent.Filter = {
        state: request.agent.State.INITIALIZED,
        action: request.agent.Action.DOWNLOAD,
        mode: request.agent.Mode.BACKGROUND,
      }
      try {
        request.agent.search(filter, (err: BusinessError, data: Array<string>) => {
          if (err) {
            console.error('requestTest020 searchTask fail:', JSON.stringify(err))
            expect(err).assertFail()
          } else {
            console.log('requestTest020 searchTask success:' + data.length + '个：', data);
            expect(data instanceof Array).assertTrue()
            done()
          }
        });
      } catch (err) {
        console.error('requestTest020 searchTask catch:', JSON.stringify(err))
        expect(err).assertFail()
        done()
      }
    })

    /*
     * @tc.number: requestTest021
     * @tc.name: requestDownTest021
     * @tc.desc: request.agent.search /set Filter (promise)
     */
    it('requestDownTest021', 0, async (done: Function) => {
      let filter: request.agent.Filter = {
        state: request.agent.State.INITIALIZED,
        action: request.agent.Action.DOWNLOAD,
        mode: request.agent.Mode.BACKGROUND,
      }
      try {
        request.agent.search(filter).then((data: Array<string>) => {
          console.log('requestTest021 searchTask success:' + data.length + '个：', data);
          expect(data instanceof Array).assertTrue()
          done()
        }).catch((err: BusinessError) => {
          console.error('requestTest021 searchTask fail:', JSON.stringify(err))
          expect(err).assertFail()
          done()
        });
      } catch (err) {
        console.error('requestTest021 searchTask catch:', JSON.stringify(err))
        expect(err).assertFail()
        done()
      }
    })

    /*
     * @tc.number: requestTest0026
     * @tc.name: requestDownTest026
     * @tc.desc: task.start (promise)
     */
    it('requestDownTest026', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './test026',
        overwrite: true,
        headers: {
          "Content-Type": "text/plain"
        }
      };
      // create Task
      let task:request.agent.Task = await request.agent.create(baseContext, config)
      console.log('requestTest026 create Task success:', task.tid)
      task.start().then(async (res) => {
        console.log('requestTest026 start success:', res)
        expect(res).assertTrue()
        // remove Task
        await request.agent.remove(task.tid)
        done()
      }).catch((err: BusinessError) => {
        console.error('requestTest026 start fail:', JSON.stringify(err))
        expect(err).assertFail()
        done()
      })
    })

    /*
     * @tc.number: requestTest0027
     * @tc.name: requestDownTest027
     * @tc.desc: task.start (callback)
     */
    it('requestDownTest027', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './test027',
        overwrite: true,
      };
      // create Task
      let task:request.agent.Task = await request.agent.create(baseContext, config)
      console.log('requestTest027 create Task success:', task.tid)
      try {
        task.start(async (err: BusinessError) => {
          if (err) {
            console.error('requestTest027 start fail:', JSON.stringify(err))
          } else {
            console.log('requestTest027 start success', err)
            expect(err).assertNull()
            // remove Task
            await request.agent.remove(task.tid)
            done()
          }
        })
      } catch (err) {
        console.log('requestTest027 start catch', err)
        await request.agent.remove(task.tid)
        done()
      }

    })

    /*
     * @tc.number: requestTest0028
     * @tc.name: requestDownTest028
     * @tc.desc: task.pause (promise)
     */
    it('requestDownTest028', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './test028',
        overwrite: true,
      };
      // create Task
      let task:request.agent.Task = await request.agent.create(baseContext, config)
      console.log('requestTest028 create Task success:', task.tid)
      task.start().then(() => {
        console.log('requestTest028 start success')
        task.pause().then(async (res) => {
          console.log('requestTest028 pause success')
          expect(res).assertTrue()
          // remove Task
          await request.agent.remove(task.tid)
          done()
        }).catch(async (err: BusinessError) => {
          console.error('requestTest028 pause fail:', JSON.stringify(err))
          await request.agent.remove(task.tid)
          expect(err).assertFail()
          done()
        })
      }).catch(async (err: BusinessError) => {
        console.error('requestTest028 start fail:', JSON.stringify(err))
        await request.agent.remove(task.tid)
        expect(err).assertFail()
        done()
      })
    })

    /*
     * @tc.number: requestTest0029
     * @tc.name: requestDownTest029
     * @tc.desc: task.pause (callback)
     */
    it('requestDownTest029', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './test029',
        overwrite: true,
      };
      // create Task
      let task:request.agent.Task = await request.agent.create(baseContext, config)
      console.log('requestTest029 create Task success:', task.tid)
      try {
        await task.start().then()
        console.log('requestTest029 start success')
        task.pause(async (err: BusinessError) => {
          if (err) {
            console.log('requestTest029 pause fail', JSON.stringify(err))
            await request.agent.remove(task.tid)
            expect(err).assertFail()
            done()
          } else {
            console.log('requestTest029 pause success')
            expect(err).assertNull()
            // remove Task
            await request.agent.remove(task.tid)
            done()
          }
        })
      } catch (err) {
        console.log('requestTest029 pause catch', JSON.stringify(err))
        await request.agent.remove(task.tid)
        expect(err).assertFail()
        done()
      }
    })

    /*
     * @tc.number: requestTest0030
     * @tc.name: requestDownTest030
     * @tc.desc: task.resume (promise)
     */
    it('requestDownTest030', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './test030',
        overwrite: true,
        headers: {
          "Content-Type": 'text/plain'
        },
      };
      // create Task
      let task:request.agent.Task = await request.agent.create(baseContext, config)
      console.log('requestTest030 create Task success:', task.tid)
      let start:void = await task.start()
      console.log('requestTest030 start success', start)
      let pause:void = await task.pause()
      console.log('requestTest030 pause success', pause)
      task.resume().then(async (res) => {
        console.log('requestTest030 resume success')
        expect(res).assertTrue()
        // remove Task
        await request.agent.remove(task.tid)
        done()
      }).catch(async (err: BusinessError) => {
        console.error('requestTest030 resume fail:', JSON.stringify(err))
        await request.agent.remove(task.tid)
        expect(err).assertFail()
        done()
      })
    })

    /*
     * @tc.number: requestTest0031
     * @tc.name: requestDownTest031
     * @tc.desc: task.resume (callback)
     */
    it('requestDownTest031', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './test031',
        overwrite: true,
      };
      try {
        // create Task
        let task:request.agent.Task = await request.agent.create(baseContext, config)
        console.log('requestTest031 create Task success:', task.tid)
        let start:void = await task.start()
        console.log('requestTest031 start success', start)
        let pause:void = await task.pause()
        console.log('requestTest031 pause success', pause)
        task.resume(async (err: BusinessError) => {
          if (err) {
            console.log('requestTest031 resume fail', JSON.stringify(err))
            await request.agent.remove(task.tid)
            expect(err).assertFail()
            done()
          } else {
            console.log('requestTest031 resume success', err)
            // remove Task
            await request.agent.remove(task.tid)
            expect(err).assertNull()
            done()
          }
        })
      } catch (err) {
        console.log('requestTest031 resume catch', err)
        expect(err).assertFail()
        done()
      }
    })

    /*
     * @tc.number: requestTest0032
     * @tc.name: requestDownTest032
     * @tc.desc: task.stop (promise)
     */
    it('requestDownTest032', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './test032',
        overwrite: true,
      };
      // create Task
      let task:request.agent.Task = await request.agent.create(baseContext, config)
      console.log('requestTest032 create Task success:', task.tid)
      let start:void = await task.start()
      console.log('requestTest032 start success', start)
      task.stop().then((res) => {
        console.log('requestTest032 stop success', res)
        expect(res).assertTrue()
        done()
      }).catch((err: BusinessError) => {
        console.error('requestTest032 stop fail:', JSON.stringify(err))
        expect(err.code).assertEqual(NO_TASK)
        done()
      })
    })

    /*
     * @tc.number: requestTest0033
     * @tc.name: requestDownTest033
     * @tc.desc: task.stop (callback)
     */
    it('requestDownTest033', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './test033',
        overwrite: true,
      };
      try {
        // create Task
        let task:request.agent.Task = await request.agent.create(baseContext, config)
        console.log('requestTest033 create Task success:', task.tid)
        let start:void = await task.start()
        console.log('requestTest033 start success', start)
        task.stop((err: BusinessError) => {
          if (err) {
            console.log('requestTest033 stop fail', JSON.stringify(err))
            expect(err).assertFail()
            done()
          } else {
            console.log('requestTest033 stop success', err)
            expect(err).assertNull()
            done()
          }
        })
      } catch (err) {
        console.log('033catch', JSON.stringify(err))
        expect(err).assertFail()
        done()
      }

    })

    /*
     * @tc.number: requestTest0034
     * @tc.name: requestDownTest034
     * @tc.desc: task.start()  /task state error. (promise)
     */
    it('requestDownTest034', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './test034',
        overwrite: true,
      };
      // create Task
      let task:request.agent.Task = await request.agent.create(baseContext, config)
      console.log('requestTest034 create Task success:', task.tid)
      let remove:void = await request.agent.remove(task.tid)
      console.log('requestTest034 remove success:', remove)
      task.start().then(res => {
        console.log('requestTest034 start success:', res)
      }).catch(async (err: BusinessError) => {
        console.log('requestTest034 start fail:', err.code)
        expect(err.code).assertEqual(TASK_STATE_ERROR)
        done()
      })
    })

    /*
     * @tc.number: requestTest0035
     * @tc.name: requestDownTest035
     * @tc.desc: task.start() /task state error. (callback)
     */
    it('requestDownTest035', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './test035',
        overwrite: true,
      };
      // create Task
      try {
        let task:request.agent.Task = await request.agent.create(baseContext, config)
        console.log('requestTest035 create Task success:', task.tid)
        let remove:void = await request.agent.remove(task.tid)
        console.log('requestTest035 remove success:', remove)
        task.start((err: BusinessError) => {
          if (err) {
            console.log('requestTest035 start fail:', err.code)
            expect(err.code).assertEqual(TASK_STATE_ERROR)
            done()
          } else {
            console.log('requestTest035 start success:')
          }
        });
      } catch (err) {
        console.log('requestTest035 start catch:', err.code)
        expect(err).assertFail()
        done()
      }

    })

    /*
     * @tc.number: requestTest0036
     * @tc.name: requestDownTest036
     * @tc.desc: task.pause()  /task state error. (promise)
     */
    it('requestDownTest036', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './test036',
        overwrite: true,
      };
      // create Task
      let task:request.agent.Task = await request.agent.create(baseContext, config)
      console.log('requestTest036 create Task success:', task.tid)
      task.pause().then(res => {
        console.log('requestTest036 pause success:', res)
      }).catch(async (err: BusinessError) => {
        console.log('requestTest036 pause fail:', err.code)
        expect(err.code).assertEqual(TASK_STATE_ERROR)
        // remove Task
        await request.agent.remove(task.tid)
        done()
      })
    })

    /*
     * @tc.number: requestTest0037
     * @tc.name: requestDownTest037
     * @tc.desc: task.pause() /task state error. (callback)
     */
    it('requestDownTest037', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './test037',
        overwrite: true,
      };
      try {
        // create Task
        let task:request.agent.Task = await request.agent.create(baseContext, config)
        console.log('requestTest037 create Task success:', task.tid)
        task.pause(async (err: BusinessError) => {
          if (err) {
            console.log('requestTest037 pause fail:', err.code)
            expect(err.code).assertEqual(TASK_STATE_ERROR)
            // remove Task
            await request.agent.remove(task.tid)
            done()
          } else {
            console.log('requestTest037 pause success:')
          }
        });
      } catch (err) {
        console.log('requestTest037 pause catch:', err)
        expect(err).assertFail()
        done()
      }

    })

    /*
     * @tc.number: requestTest0038
     * @tc.name: requestDownTest038
     * @tc.desc: task.resume()  /task state error. (promise)
     */
    it('requestDownTest038', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './test038',
        overwrite: true,
      };
      // create Task
      let task:request.agent.Task = await request.agent.create(baseContext, config)
      console.log('requestTest038 create Task success:', task.tid)
      task.resume().then(res => {
        console.log('requestTest038 resume success:', res)
      }).catch(async (err: BusinessError) => {
        console.log('requestTest038 resume fail:', err.code)
        expect(err.code).assertEqual(TASK_STATE_ERROR)
        // remove Task
        await request.agent.remove(task.tid)
        done()
      })

    })

    /*
     * @tc.number: requestTest0039
     * @tc.name: requestDownTest039
     * @tc.desc: task.resume() /task state error. (callback)
     */
    it('requestDownTest039', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './test039',
        overwrite: true,
      };
      try {
        // create Task
        let task:request.agent.Task = await request.agent.create(baseContext, config)
        console.log('requestTest039 create Task success:', task.tid)
        task.resume(async (err: BusinessError) => {
          if (err) {
            console.log('requestTest039 resume fail:', err.code)
            expect(err.code).assertEqual(TASK_STATE_ERROR)
            // remove Task
            await request.agent.remove(task.tid)
            done()
          } else {
            console.log('requestTest039 resume success:')
          }
        })
      } catch (err) {
        console.log('requestTest039 resume catch:', err)
        expect(err).assertFail()
        done()
      }
    })

    /*
     * @tc.number: requestTest0040
     * @tc.name: requestDownTest040
     * @tc.desc: task.stop()  /task state error. (promise)
     */
    it('requestDownTest040', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './test040',
        overwrite: true,
      };
      // create Task
      let task:request.agent.Task = await request.agent.create(baseContext, config)
      console.log('requestTest040 create Task success:', task.tid)
      task.stop().then(res => {
        console.log('requestTest040 stop success:', res)
      }).catch(async (err: BusinessError) => {
        console.log('requestTest040 stop fail:', err.code)
        expect(err.code).assertEqual(TASK_STATE_ERROR)
        // remove Task
        await request.agent.remove(task.tid)
        done()
      })
    })

    /*
     * @tc.number: requestTest0041
     * @tc.name: requestDownTest041
     * @tc.desc: task.stop() /task state error. (callback)
     */
    it('requestDownTest041', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './test041',
        overwrite: true,
      };
      try {
        // create Task
        let task:request.agent.Task = await request.agent.create(baseContext, config)
        console.log('requestTest041 create Task success:', task.tid)
        task.stop(async (err: BusinessError) => {
          if (err) {
            console.log('requestTest041 stop fail:', err.code)
            expect(err.code).assertEqual(TASK_STATE_ERROR)
            // remove Task
            await request.agent.remove(task.tid)
            done()
          } else {
            console.log('requestTest041 stop success:')
          }
        });
      } catch (err) {
        console.log('requestTest041 stop catch:', err)
        expect(err).assertFail()
        done()
      }
    })

    /*
     * @tc.number: requestTest0042
     * @tc.name: requestDownTest042
     * @tc.desc: request.agent.create() /application task queue full error.
     */
    it('requestDownTest042', 0, async (done: Function) => {
      let removeArr: Array<string> = []
      let arr: Array<number> = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
      for (let item of arr) {
        let config: request.agent.Config = {
          action: request.agent.Action.DOWNLOAD,
          url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
          saveas: `./testList${item}`,
          overwrite: true,
        };
        // create Task
        let task:request.agent.Task = await request.agent.create(baseContext, config)
        console.log(`testList${item} create Task success:`, task.tid)
        removeArr.push(task.tid)
      }
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './test042',
        overwrite: true,
      };
      console.log('042数组1', removeArr)
      // create Task
      request.agent.create(baseContext, config).then(async (task: request.agent.Task) => {
        console.log('requestTest042 create Task success:', task.tid)
        await request.agent.remove(task.tid)
        expect().assertFail()
      }).catch((err: BusinessError) => {
        console.log('requestTest042 create Task fail:', err)
        expect(err.code).assertEqual(QUEUE_FULL_ERROR)
        removeArr.forEach(async (item) => {
          await request.agent.remove(item)
        });
        removeArr = []
        done()
      })
    })

    /*
     * @tc.number: requestTest043
     * @tc.name: requestDownTest043
     * @tc.desc: task.on('progress')
     */
    it('requestDownTest043', 0, async (done: Function) => {
      let flag: boolean = false
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        mode: request.agent.Mode.FOREGROUND,
        saveas: './test043',
        overwrite: true,
      };
      let callbackProgress1 = (progress: request.agent.Progress):void => {
        flag = true
        console.log('requestTest043 progress:', progress.state)
      }
      let callbackProgress2 = (progress: request.agent.Progress):void => {
        if (flag) {
          console.log('requestTest043 progress:', progress.state)
          console.log('flag----', flag)
          expect(flag).assertTrue()
          done()
        }
      }
      // create Task
      let task:request.agent.Task = await request.agent.create(baseContext, config)
      console.log('requestTest043 create Task success:', task.tid, JSON.stringify(task))
      task.on('progress', callbackProgress1)
      task.on('progress', callbackProgress2)
      let start:void = await task.start()
      console.log('requestTest043 start success', start)
    })

    /*
     * @tc.number: requestTest044
     * @tc.name: requestDownTest044
     * @tc.desc: task.on('completed')
     */
    it('requestDownTest044', 0, async (done: Function) => {
      let flag: boolean = false
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        mode: request.agent.Mode.FOREGROUND,
        saveas: './test044',
        overwrite: true,
      };
      let callbackCompleted = (progress: request.agent.Progress):void => {
        flag = true
        console.log('requestTest044 completed:', progress.state)
        expect(flag).assertTrue()
        done()
      }
      // create Task
      let task:request.agent.Task = await request.agent.create(baseContext, config)
      console.log('requestTest044 create Task success:', task.tid, JSON.stringify(task))
      task.on('completed', callbackCompleted)
      let start:void = await task.start()
      console.log('requestTest044 start success', start)
    })

    /*
     * @tc.number: requestTest045
     * @tc.name: requestDownTest045
     * @tc.desc: task.on('failed')
     */
    it('requestDownTest045', 0, async (done: Function) => {
      let flag: boolean = false
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/te',
        mode: request.agent.Mode.FOREGROUND,
        saveas: './test045',
        overwrite: true,
      };
      let callbackFailed = (progress: request.agent.Progress):void => {
        flag = true
        console.log('requestTest045 failed:', progress.state)
        expect(flag).assertTrue()
        done()
      }
      // create Task
      let task:request.agent.Task = await request.agent.create(baseContext, config)
      console.log('requestTest045 create Task success:', task.tid, JSON.stringify(task))
      task.on('failed', callbackFailed)
      let start:void = await task.start()
      console.log('requestTest045 start success', start)
    })

    /*
     * @tc.number: requestTest046
     * @tc.name: requestDownTest046
     * @tc.desc: task.off('progress') /remove one
     */
    it('requestDownTest046', 0, async (done: Function) => {
      let flag: boolean = false
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        mode: request.agent.Mode.FOREGROUND,
        saveas: './test046',
        overwrite: true,
      };
      let callbackProgress1 = (progress: request.agent.Progress):void => {
        flag = true
        console.log('requestTest046 Progress1:', progress.state)
      }
      let callbackProgress2 = (progress: request.agent.Progress):void => {
        console.log('requestTest046 Progress2:', progress.state)
        expect(flag).assertFalse()
        done()
      }
      // create Task
      let task:request.agent.Task = await request.agent.create(baseContext, config)
      console.log('requestTest046 create Task success:', task.tid, JSON.stringify(task))
      task.on('progress', callbackProgress1)
      task.on('progress', callbackProgress2)
      task.off('progress', callbackProgress1)
      let start:void = await task.start()
      console.log('requestTest046 start success', start)
    })

    /*
     * @tc.number: requestTest047
     * @tc.name: requestDownTest047
     * @tc.desc: task.off('failed') /remove one
     */
    it('requestDownTest047', 0, async (done: Function) => {
      let flag: boolean = false
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/te',
        mode: request.agent.Mode.FOREGROUND,
        saveas: './test047',
        overwrite: true,
      };
      let callbackFailed1 = (progress: request.agent.Progress):void => {
        flag = true
        console.log('requestTest047 Progress1:', progress.state)
      }
      let callbackFailed2 = (progress: request.agent.Progress):void => {
        console.log('requestTest047 Progress2:', progress.state)
        expect(flag).assertFalse()
        done()
      }
      // create Task
      let task:request.agent.Task = await request.agent.create(baseContext, config)
      console.log('requestTest047 create Task success:', task.tid, JSON.stringify(task))
      task.on('failed', callbackFailed1)
      task.on('failed', callbackFailed2)
      task.off('failed', callbackFailed1)
      let start:void = await task.start()
      console.log('requestTest047 start success', start)
    })

    /*
     * @tc.number: requestTest048
     * @tc.name: requestDownTest048
     * @tc.desc: task.off('progress') /remove all
     */
    it('requestDownTest048', 0, async (done: Function) => {
      let flag1: boolean = false
      let flag2: boolean = false
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        mode: request.agent.Mode.FOREGROUND,
        saveas: './test048',
        overwrite: true,
      };
      let callbackProgress1 = (progress: request.agent.Progress):void => {
        flag1 = true
        console.log('requestTest048 Progress1:', progress.state)
      }
      let callbackProgress2 = (progress: request.agent.Progress):void => {
        flag2 = true
        console.log('requestTest048 Progress2:', progress.state)
      }
      // create Task
      let task:request.agent.Task = await request.agent.create(baseContext, config)
      console.log('requestTest048 create Task success:', task.tid, JSON.stringify(task))
      task.on('progress', callbackProgress1)
      task.on('progress', callbackProgress2)
      task.off('progress')
      let start:void = await task.start()
      console.log('requestTest048 start success', start)
      expect(flag1).assertFalse()
      expect(flag2).assertFalse()
      done()
    })

    /*
     * @tc.number: requestTest049
     * @tc.name: requestDownTest049
     * @tc.desc: task.off('failed') /remove all
     */
    it('requestDownTest049', 0, async (done: Function) => {
      let flag1: boolean = false
      let flag2: boolean = false
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/te',
        mode: request.agent.Mode.FOREGROUND,
        saveas: './test049',
        overwrite: true,
      };
      let callbackFailed1 = (progress: request.agent.Progress):void => {
        flag1 = true
        console.log('requestTest049 Progress1:', progress.state)
      }
      let callbackFailed2 = (progress: request.agent.Progress):void => {
        flag2 = true
        console.log('requestTest049 Progress2:', progress.state)
      }
      // create Task
      let task:request.agent.Task = await request.agent.create(baseContext, config)
      console.log('requestTest049 create Task success:', task.tid, JSON.stringify(task))
      task.on('failed', callbackFailed1)
      task.on('failed', callbackFailed2)
      task.off('failed')
      let start:void = await task.start()
      console.log('requestTest049 start success', start)
      expect(flag1).assertFalse()
      expect(flag2).assertFalse()
      done()
    })

    /*
     * @tc.number: requestTest050
     * @tc.name: requestDownTest050
     * @tc.desc: task.off('completed') /remove all
     */
    it('requestDownTest050', 0, async (done: Function) => {
      let flag2: boolean = false
      let flag1: boolean = false
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        mode: request.agent.Mode.FOREGROUND,
        saveas: './test050',
        overwrite: true,
      };
      let callbackCompleted1 = (progress: request.agent.Progress):void => {
        flag1 = true
        console.log('requestTest050 Progress1:', progress.state)
      }
      let callbackCompleted2 = (progress: request.agent.Progress):void => {
        flag2 = true
        console.log('requestTest050 Progress2:', progress.state)
      }
      // create Task
      let task:request.agent.Task = await request.agent.create(baseContext, config)
      console.log('requestTest050 create Task success:', task.tid, JSON.stringify(task))
      task.on('completed', callbackCompleted1)
      task.on('completed', callbackCompleted2)
      task.off('completed')
      let start:void = await task.start()
      console.log('requestTest050 start success', start)
      expect(flag1).assertFalse()
      expect(flag2).assertFalse()
      done()
    })
  })
}