/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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

import { describe, it, expect} from '@ohos/hypium';
import request from '@ohos.request';
import { BusinessError } from '@ohos.base';
import common from '@ohos.app.ability.common';

export default function requestDownTest() {
  describe('requestDownTest', () => {
    let baseContext: common.Context = AppStorage.get('context') as common.Context;
    /*
     * @tc.number: SUB_Request_RequestDown_Action_Func_0100
     * @tc.name: SUB_Request_RequestDown_Action_Func_0100
     * @tc.desc: request.agent.Action
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 1
     */
    it('SUB_Request_RequestDown_Action_Func_0100', 0, (done: Function) => {
      let download: Number = request.agent.Action.DOWNLOAD;
      let upload: Number = request.agent.Action.UPLOAD;
      expect(download).assertEqual(0);
      expect(upload).assertEqual(1);
      done();
    });

    /*
     * @tc.number: SUB_Request_RequestDown_Mode_Func_0200
     * @tc.name: SUB_Request_RequestDown_Mode_Func_0200
     * @tc.desc: request.agent.Mode
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 1
     */
    it('SUB_Request_RequestDown_Mode_Func_0200', 0, (done: Function) => {
      let foreground: Number = request.agent.Mode.FOREGROUND;
      expect(foreground).assertEqual(1);
      done();
    });

    /*
     * @tc.number: SUB_Request_RequestDown_Network_Func_0300
     * @tc.name: SUB_Request_RequestDown_Network_Func_0300
     * @tc.desc: request.agent.Network
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 1
     */
    it('SUB_Request_RequestDown_Network_Func_0300', 0, (done: Function) => {
      let any: Number = request.agent.Network.ANY;
      let wifi: Number = request.agent.Network.WIFI;
      let cellular: Number = request.agent.Network.CELLULAR;
      expect(any).assertEqual(0);
      expect(wifi).assertEqual(1);
      expect(cellular).assertEqual(2);
      done();
    });

    /*
     * @tc.number: SUB_Request_RequestDown_State_Func_0400
     * @tc.name: SUB_Request_RequestDown_State_Func_0400
     * @tc.desc: request.agent.State
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 1
     */
    it('SUB_Request_RequestDown_State_Func_0400', 0, (done: Function) => {
      let initialized: Number = request.agent.State.INITIALIZED;
      let waiting: Number = request.agent.State.WAITING;
      let running: Number = request.agent.State.RUNNING;
      let retrying: Number = request.agent.State.RETRYING;
      let paused: Number = request.agent.State.PAUSED;
      let stopped: Number = request.agent.State.STOPPED;
      let completed: Number = request.agent.State.COMPLETED;
      let failed: Number = request.agent.State.FAILED;
      let removed: Number = request.agent.State.REMOVED;
      expect(initialized).assertEqual(0x00);
      expect(waiting).assertEqual(0x10);
      expect(running).assertEqual(0x20);
      expect(retrying).assertEqual(0x21);
      expect(paused).assertEqual(0x30);
      expect(stopped).assertEqual(0x31);
      expect(completed).assertEqual(0x40);
      expect(failed).assertEqual(0x41);
      expect(removed).assertEqual(0x50);
      done();
    });

    /*
     * @tc.number: SUB_Request_RequestDown_Faults_Func_0500
     * @tc.name: SUB_Request_RequestDown_Faults_Func_0500
     * @tc.desc: request.agent.Faults
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 1
     */
    it('SUB_Request_RequestDown_Faults_Func_0500', 0, (done: Function) => {
      let others: Number = request.agent.Faults.OTHERS;
      let disconnected: Number = request.agent.Faults.DISCONNECTED;
      let timeout: Number = request.agent.Faults.TIMEOUT;
      let protocol: Number = request.agent.Faults.PROTOCOL;
      let fsio: Number = request.agent.Faults.FSIO;
      expect(others).assertEqual(0xFF);
      expect(disconnected).assertEqual(0x00);
      expect(timeout).assertEqual(0x10);
      expect(protocol).assertEqual(0x20);
      expect(fsio).assertEqual(0x40);
      done();
    });

    /*
     * @tc.number: SUB_Request_RequestDown_create_remove_Func_0600
     * @tc.name: SUB_Request_RequestDown_create_remove_Func_0600
     * @tc.desc: request.agent.create and request.agent.remove (promise)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestDown_create_remove_Func_0600', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas:'./',
        overwrite: true,
      };
      // create Task
      try {
        request.agent.create(baseContext, config).then((task: request.agent.Task) => {
          console.log(`requestTest006 create Task success:${JSON.stringify(task)}`);
          expect(task instanceof Object).assertTrue();
          // remove Task
          request.agent.remove(task.tid).then(() => {
            console.info(`remove requestTest006 task success!`);
            done();
          }).catch((err: BusinessError) => {
            console.error(`remove requestTest006 task fail:${err}`);
            expect(err).assertFail();
            done();
          });
        }).catch((err: BusinessError) => {
          console.error(`requestTest006 create Task fail:${err}`);
          expect(err).assertFail();
          done();
        });
      }catch (err) {
        console.log(`requestTest006 Catch:${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      };
    });

    /*
     * @tc.number: SUB_Request_RequestDown_create_remove_Func_0700
     * @tc.name: SUB_Request_RequestDown_create_remove_Func_0700
     * @tc.desc: request.agent.create and request.agent.remove (callback)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestDown_create_remove_Func_0700', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './',
        overwrite: true,
        mode:request.agent.Mode.BACKGROUND,
      };
      try {
        // create Task
        request.agent.create(baseContext, config, (err: BusinessError, task: request.agent.Task) => {
          if (err) {
            console.error(`requestTest007 create Task fail:${err}`);
            expect(err).assertFail();
          } else {
            console.log(`requestTest007 create Task success:${task.tid}`);
            expect(task instanceof Object).assertTrue();
            // remove Task
            request.agent.remove(task.tid, (err: BusinessError) => {
              if (err) {
                console.error(`remove requestTest007 task fail:${JSON.stringify(err)}`);
                expect(err).assertFail();
                done();
              } else {
                console.log(`remove requestTest007 task success!:${err}`);
                expect(err).assertNull();
                done();
              };
            });
          };
        });
      } catch (err) {
        console.log(`requestTest007 catch:${JSON.stringify(err)}`);
        expect(err).assertFail();
        done();
      };
    });

    /*
     * @tc.number: SUB_Request_RequestDown_remove_Func_0800
     * @tc.name: SUB_Request_RequestDown_remove_Func_0800
     * @tc.desc: request.agent.remove /task not found (promise)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestDown_remove_Func_0800', 0, async (done: Function) => {
      request.agent.remove('task.tid').then(() => {
        console.info('remove requestTest008 task success!');
        expect().assertFail();
      }).catch((err: BusinessError) => {
        console.error(`remove requestTest008 task fail:${JSON.stringify(err)}`);
        expect(err.code).assertEqual(21900006);
        done();
      });
    });

    /*
     * @tc.number: SUB_Request_RequestDown_remove_Func_0900
     * @tc.name: SUB_Request_RequestDown_remove_Func_0900
     * @tc.desc: request.agent.remove /task not found (callback)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestDown_remove_Func_0900', 0, async (done: Function) => {
      try {
        request.agent.remove('task.tid', (err: BusinessError) => {
          if (err) {
            console.error(`remove requestTest009 task fail:${JSON.stringify(err)}`);
            expect(err.code).assertEqual(21900006);
            done();
          } else {
            console.info('remove requestTest009 task success!');
            expect(err).assertFail();
            done();
          };
        });
      } catch (err) {
        console.info('remove requestTest009 task catch!');
        expect(err).assertFail();
        done();
      };
    });

    /*
     * @tc.number: SUB_Request_RequestDown_show_Func_1000
     * @tc.name: SUB_Request_RequestDown_show_Func_1000
     * @tc.desc: request.agent.show (promise)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 1
     */
    it('SUB_Request_RequestDown_show_Func_1000', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: `./`,
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND,
        network: request.agent.Network.WIFI
      };
      let task: request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`requestTest010 create Task success:${task.tid}`);
      request.agent.show(task.tid).then(async (taskInfo: request.agent.TaskInfo) => {
        console.log(`requestTest010 showTask success:${JSON.stringify(taskInfo)}`);
        expect(taskInfo instanceof Object).assertTrue();
        // remove Task
        await request.agent.remove(task.tid);
        done();
      }).catch(async (err: BusinessError) => {
        console.error(`requestTest010 showTask fail:${JSON.stringify(err)}`);
        await request.agent.remove(task.tid);
        expect(err).assertFail();
        done();
      });
    });

    /*
     * @tc.number: SUB_Request_RequestDown_show_Func_1100
     * @tc.name: SUB_Request_RequestDown_show_Func_1100
     * @tc.desc: request.agent.show (callback)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 1
     */
    it('SUB_Request_RequestDown_show_Func_1100', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: `./`,
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND
      };
      try {
        let task: request.agent.Task = await request.agent.create(baseContext, config);
        console.log(`requestTest011 create Task success:${task.tid}`);
        request.agent.show(task.tid, async (err: BusinessError, taskInfo: request.agent.TaskInfo) => {
          if (err) {
            console.error(`requestTest011 showTask fail:${JSON.stringify(err)}`);
            expect().assertFail();
            done();
          } else {
            console.log(`requestTest011 showTask success:${JSON.stringify(taskInfo)}`);
            expect(taskInfo instanceof Object).assertTrue();
            // remove Task
            await request.agent.remove(task.tid);
            done();
          };
        });
      } catch (err) {
        console.log(`requestTest011 showTask catch:${err}`);
        expect().assertFail();
        done();
      };
    });

    /*
     * @tc.number: SUB_Request_RequestDown_show_Func_1200
     * @tc.name: SUB_Request_RequestDown_show_Func_1200
     * @tc.desc: request.agent.show /task not found (promise)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestDown_show_Func_1200', 0, async (done: Function) => {
      request.agent.show('task.tid').then((res) => {
        console.log('requestTest012 showTask success');
        expect(res).assertFail();
        done();
      }).catch((err: BusinessError) => {
        console.error(`requestTest012 showTask fail:${JSON.stringify(err)}`);
        expect(err.code).assertEqual(21900006);
        done();
      });
    });

    /*
     * @tc.number: SUB_Request_RequestDown_show_Func_1300
     * @tc.name: SUB_Request_RequestDown_show_Func_1300
     * @tc.desc: request.agent.show /task not found (callback)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestDown_show_Func_1300', 0, async (done: Function) => {
      try {
        request.agent.show('task.tid', (err: BusinessError, taskInfo: request.agent.TaskInfo) => {
          if (err) {
            console.error(`requestTest013 showTask fail:${ JSON.stringify(err)}`);
            expect(err.code).assertEqual(21900006);
            done();
          } else {
            console.log(`requestTest013 showTask success:${taskInfo.tid}`);
            expect().assertFail();
            done();
          };
        });
      } catch (err) {
        console.log(`requestTest013 showTask success:${err}`);
        expect(err).assertFail();
        done();
      };
    });

    /*
     * @tc.number: SUB_Request_RequestDown_touch_Func_1400
     * @tc.name: SUB_Request_RequestDown_touch_Func_1400
     * @tc.desc:request.agent.touch (promise)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 1
     */
    it('SUB_Request_RequestDown_touch_Func_1400', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: `./`,
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND,
        token: "is test014"
      };
      let task: request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`requestTest014 create Task success:${task.tid}`);
      request.agent.touch(task.tid, config.token).then(async (taskInfo: request.agent.TaskInfo) => {
        console.log(`requestTest014 touchTask success:${taskInfo.tid}`);
        expect(taskInfo instanceof Object).assertTrue();
        // remove Task
        await request.agent.remove(task.tid);
        done();
      }).catch(async (err: BusinessError) => {
        console.error(`requestTest014 touchTask fail:${JSON.stringify(err)}`);
        await request.agent.remove(task.tid);
        expect(err).assertFail();
        done();
      });
    });

    /*
     * @tc.number: SUB_Request_RequestDown_touch_Func_1500
     * @tc.name: SUB_Request_RequestDown_touch_Func_1500
     * @tc.desc:request.agent.touch (callback)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 1
     */
    it('SUB_Request_RequestDown_touch_Func_1500', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: `./`,
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND,
        token: 'is test015'
      };
      let task: request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`requestTest015 create Task success:${task.tid}`);
      try {
        request.agent.touch(task.tid, config.token, async (err: BusinessError, taskInfo: request.agent.TaskInfo) => {
          if (err) {
            console.log(`requestTest015 touchTask fail:${JSON.stringify(err)}`);
            await request.agent.remove(task.tid);
            expect(err).assertFail();
            done();
          } else {
            console.log(`requestTest015 touchTask success:${taskInfo.tid}`);
            expect(taskInfo instanceof Object).assertTrue();
            // remove Task
            await request.agent.remove(task.tid);
            done();
          };
        });
      } catch (err) {
        console.log(`requestTest015 touchTask catch:${err}`);
        await request.agent.remove(task.tid);
        expect(err).assertFail();
        done();
      };
    });

    /*
     * @tc.number: SUB_Request_RequestDown_touch_Func_1600
     * @tc.name: SUB_Request_RequestDown_touch_Func_1600
     * @tc.desc: request.agent.touch /token is wrong (promise)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestDown_touch_Func_1600', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: `./`,
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND,
        token: "is test016"
      };
      let task: request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`requestTest016 create Task success:${task.tid}`);
      try {
        request.agent.touch(task.tid, 'wrong').then(async (taskInfo: request.agent.TaskInfo) => {
          console.log(`requestTest016 touchTask success:${taskInfo}`);
          expect().assertFail();
          await request.agent.remove(task.tid);
          done();
        }).catch(async (err: BusinessError) => {
          console.error(`'requestTest016 touchTask fail:' ${JSON.stringify(err)}`);
          expect(err).assertFail();
          await request.agent.remove(task.tid);
          done();
        });
      } catch (err) {
        console.error(`'requestTest016 touchTask catch:' ${JSON.stringify(err)}`);
        expect(err.code).assertEqual(401);
        await request.agent.remove(task.tid);
        done();
      };
    });

    /*
     * @tc.number: SUB_Request_RequestDown_touch_Func_1700
     * @tc.name: SUB_Request_RequestDown_touch_Func_1700
     * @tc.desc: request.agent.touch /token is wrong (callback)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestDown_touch_Func_1700', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: `./`,
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND,
        token: "is test017"
      };
      let task: request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`requestTest017 create Task success: ${task.tid}`);
      try {
        request.agent.touch(task.tid, 'wrong', async (err: BusinessError, taskInfo: request.agent.TaskInfo) => {
          if (err) {
            console.error(`requestTest017 touchTask fail:${JSON.stringify(err)}`);
            expect().assertFail();
            await request.agent.remove(task.tid);
            done();
          } else {
            console.log(`requestTest017 touchTask success:${taskInfo.tid}`);
            expect().assertFail();
            await request.agent.remove(task.tid);
            done();
          };
        });
      } catch (err) {
        console.error(`requestTest017 touchTask catch:${JSON.stringify(err)}`);
        expect(err.code).assertEqual(401);
        await request.agent.remove(task.tid);
        done();
      };
    });

    /*
     * @tc.number: SUB_Request_RequestDown_touch_Func_1800
     * @tc.name: SUB_Request_RequestDown_touch_Func_1800
     * @tc.desc: request.agent.touch /task not found (callback)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestDown_touch_Func_1800', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: `./`,
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND,
        token: "is test018"
      };
      let task: request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`requestTest018 create Task success:${task.tid}`);
      try {
        request.agent.touch('task.tid', config.token, async (err: BusinessError, taskInfo: request.agent.TaskInfo) => {
          if (err) {
            console.error(`requestTest018 touchTask fail:${JSON.stringify(err)}`);
            expect(err.code).assertEqual(21900006);
            await request.agent.remove(task.tid);
            done();
          } else {
            console.log(`requestTest018 touchTask success:${taskInfo.tid}`);
            await request.agent.remove(task.tid);
            expect().assertFail();
            done();
          };
        });
      } catch (err) {
        console.error(`requestTest018 touchTask catch:${JSON.stringify(err)}`);
        await request.agent.remove(task.tid);
        expect(err).assertFail();
        done();
      };
    });

    /*
     * @tc.number: SUB_Request_RequestDown_search_Func_1900
     * @tc.name: SUB_Request_RequestDown_search_Func_1900
     * @tc.desc: request.agent.search /default Filter (callback)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 1
     */
    it('SUB_Request_RequestDown_search_Func_1900', 0, async (done: Function) => {
      try {
        request.agent.search((err: BusinessError, data: Array<string>) => {
          if (err) {
            console.error(`requestTest019 searchTask fail:${JSON.stringify(err)}`);
            expect(err).assertFail();
            done();
          } else {
            console.log(`requestTest019 searchTask success: ${typeof data}`);
            expect(data instanceof Array).assertTrue();
            done();
          };
        });
      } catch (err) {
        console.error(`requestTest019 searchTask catch:${JSON.stringify(err)}`);
        expect(err).assertFail();
        done();
      };
    });

    /*
    * @tc.number: SUB_Request_RequestDown_search_Func_2000
    * @tc.name: SUB_Request_RequestDown_search_Func_2000
    * @tc.desc: request.agent.search /set Filter (callback)
    * @tc.size: MediumTest
    * @tc.type: Method
    * @tc.level: Level 1
    */
    it('SUB_Request_RequestDown_search_Func_2000', 0, async (done: Function) => {
      let filter: request.agent.Filter = {
        state: request.agent.State.INITIALIZED,
        action: request.agent.Action.DOWNLOAD,
        mode: request.agent.Mode.BACKGROUND,
      };
      try {
        request.agent.search(filter, (err: BusinessError, data: Array<string>) => {
          if (err) {
            console.error(`requestTest020 searchTask fail:${JSON.stringify(err)}`);
            expect(err).assertFail();
            done();
          } else {
            console.log('requestTest020 searchTask success');
            expect(data instanceof Array).assertTrue();
            done();
          };
        });
      } catch (err) {
        console.error(`requestTest020 searchTask catch:${JSON.stringify(err)}`);
        expect(err).assertFail();
        done();
      };
    });

    /*
    * @tc.number: SUB_Request_RequestDown_search_Func_2100
    * @tc.name: SUB_Request_RequestDown_search_Func_2100
    * @tc.desc: request.agent.search /set Filter (promise)
    * @tc.size: MediumTest
    * @tc.type: Method
    * @tc.level: Level 1
    */
    it('SUB_Request_RequestDown_search_Func_2100', 0, async (done: Function) => {
      let filter: request.agent.Filter = {
        state: request.agent.State.INITIALIZED,
        action: request.agent.Action.DOWNLOAD,
        mode: request.agent.Mode.BACKGROUND,
      };
      try {
        request.agent.search(filter).then((data: Array<string>) => {
          console.log('requestTest021 searchTask success');
          expect(data instanceof Array).assertTrue();
          done();
        }).catch((err: BusinessError) => {
          console.error(`requestTest021 searchTask fail:${JSON.stringify(err)}`);
          expect(err).assertFail();
          done();
        });
      } catch (err) {
        console.error(`requestTest021 searchTask catch:${JSON.stringify(err)}`);
        expect(err).assertFail();
        done();
      };
    });

    /*
    * @tc.number: SUB_Request_RequestDown_start_Func_2200
    * @tc.name: SUB_Request_RequestDown_start_Func_2200
    * @tc.desc: task.start (promise)
    * @tc.size: MediumTest
    * @tc.type: Method
    * @tc.level: Level 1
    */
    it('SUB_Request_RequestDown_start_Func_2200', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: `./`,
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND,
      };
      // create Task
      let task: request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`requestTest022 create Task success:${task.tid}`);
      task.start().then(async () => {
        console.log(`requestTest022 start success!`);
        // remove Task
        await request.agent.remove(task.tid);
        done();
      }).catch((err: BusinessError) => {
        console.error(`requestTest022 start fail:${JSON.stringify(err)}`);
        expect(err).assertFail();
        done();
      });
    });

    /*
    * @tc.number: SUB_Request_RequestDown_start_Func_2300
    * @tc.name: SUB_Request_RequestDown_start_Func_2300
    * @tc.desc: task.start (callback)
    * @tc.size: MediumTest
    * @tc.type: Method
    * @tc.level: Level 1
    */
    it('SUB_Request_RequestDown_start_Func_2300', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: `./`,
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND,
      };
      // create Task
      let task: request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`requestTest023 create Task success:${task.tid}`);
      try {
        task.start(async (err: BusinessError) => {
          if (err) {
            console.error(`requestTest023 start fail:${JSON.stringify(err)}`);
            expect().assertFail();
            done();
          } else {
            console.log(`requestTest023 start success:${err}`);
            expect(err).assertNull();
            await request.agent.remove(task.tid);
            done();
          };
        });
      } catch (err) {
        console.log(`requestTest023 start catch:${err}`);
        await request.agent.remove(task.tid);
        expect().assertFail();
        done();
      };
    });

    /*
    * @tc.number: SUB_Request_RequestDown_stop_Func_2400
    * @tc.name: SUB_Request_RequestDown_stop_Func_2400
    * @tc.desc: task.stop (promise)
    * @tc.size: MediumTest
    * @tc.type: Method
    * @tc.level: Level 1
    */
    it('SUB_Request_RequestDown_stop_Func_2400', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './',
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND,
      };
      // create Task
      let task: request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`requestTest024 create Task success:${task.tid}`);
      await task.start();
      console.log('requestTest024 start success');
      task.stop().then(() => {
        console.log(`requestTest024 stop success!`)
        done();
      }).catch((err: BusinessError) => {
        console.error(`requestTest024 stop fail:${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      });
    });

    /*
    * @tc.number: SUB_Request_RequestDown_stop_Func_2500
    * @tc.name: SUB_Request_RequestDown_stop_Func_2500
    * @tc.desc: task.stop (callback)
    * @tc.size: MediumTest
    * @tc.type: Method
    * @tc.level: Level 1
    */
    it('SUB_Request_RequestDown_stop_Func_2500', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './',
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND,
      };
      try {
        // create Task
        let task: request.agent.Task = await request.agent.create(baseContext, config);
        console.log(`requestTest025 create Task success:${task.tid}`);
        await task.start();
        console.log('requestTest025 start success');
        task.stop((err: BusinessError) => {
          if (err) {
            console.log(`requestTest025 stop fail:${JSON.stringify(err)}`);
            expect(err).assertFail();
            done();
          } else {
            console.log('requestTest025 stop success');
            expect(err).assertNull();
            done();
          };
        });
      } catch (err) {
        console.log(`requestTest025 catch: ${JSON.stringify(err)}`);
        expect(err).assertFail();
        done();
      };
    });

    /*
    * @tc.number: SUB_Request_RequestDown_start_Func_2600
    * @tc.name: SUB_Request_RequestDown_start_Func_2600
    * @tc.desc: task.start()  /task state error. (promise)
    * @tc.size: MediumTest
    * @tc.type: Method
    * @tc.level: Level 2
    */
    it('SUB_Request_RequestDown_start_Func_2600', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './',
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND,
      };
      // create Task
      let task: request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`requestTest026 create Task success:${task.tid}`);
      await request.agent.remove(task.tid);
      console.log('requestTest026 remove success');
      task.start().then(res => {
        console.log(`requestTest026 start success:${res}`);
        expect().assertFail()
        done()
      }).catch(async (err: BusinessError) => {
        console.log(`requestTest026 start fail:${err}--${err.code}`);
        expect(err.code).assertEqual(21900007);
        done();
      });
    });

    /*
    * @tc.number: SUB_Request_RequestDown_start_Func_2700
    * @tc.name: SUB_Request_RequestDown_start_Func_2700
    * @tc.desc: task.start()  /task state error. (callback)
    * @tc.size: MediumTest
    * @tc.type: Method
    * @tc.level: Level 2
    */
    it('SUB_Request_RequestDown_start_Func_2700', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './',
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND,
      };
      // create Task
      try {
        let task: request.agent.Task = await request.agent.create(baseContext, config);
        console.log(`requestTest027 create Task success:${task.tid}`);
        await request.agent.remove(task.tid);
        console.log('requestTest027 remove success');
        task.start((err: BusinessError) => {
          if (err) {
            console.log(`requestTest027 start fail:${err.code}`);
            expect(err.code).assertEqual(21900007);
            done();
          } else {
            console.log('requestTest027 start success');
            expect().assertFail();
            done();
          };
        });
      } catch (err) {
        console.log(`requestTest027 start catch:${err.code}`);
        expect(err).assertFail();
        done();
      };
    });

    /*
     * @tc.number: SUB_Request_RequestDown_stop_Func_2800
     * @tc.name: SUB_Request_RequestDown_stop_Func_2800
     * @tc.desc: task.stop()  /task state error. (promise)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestDown_stop_Func_2800', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './',
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND,
      };
      // create Task
      let task: request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`requestTest028 create Task success:${task.tid}`);
      task.stop().then(async () => {
        console.log(`requestTest028 stop success!`);
        await request.agent.remove(task.tid);
        expect().assertFail();
        done();
      }).catch(async (err: BusinessError) => {
        console.log(`requestTest028 stop fail:${err.code}`);
        expect(err.code).assertEqual(21900007);
        // remove Task
        await request.agent.remove(task.tid);
        done();
      });
    });

    /*
     * @tc.number: SUB_Request_RequestDown_stop_Func_2900
     * @tc.name: SUB_Request_RequestDown_stop_Func_2900
     * @tc.desc: task.stop()  /task state error. (callback)
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 2
     */
    it('SUB_Request_RequestDown_stop_Func_2900', 0, async (done: Function) => {
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './',
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND,
      };
      try {
        // create Task
        let task: request.agent.Task = await request.agent.create(baseContext, config);
        console.log(`requestTest029 create Task success:${task.tid}`);
        task.stop(async (err: BusinessError) => {
          if (err) {
            console.log(`requestTest029 stop fail:${err}`);
            expect(err.code).assertEqual(21900007);
            // remove Task
            await request.agent.remove(task.tid);
            done();
          } else {
            console.log('requestTest029 stop success');
            await request.agent.remove(task.tid);
            expect().assertFail();
            done();
          };
        });
      } catch (err) {
        console.log(`requestTest029 stop catch:${err} `);
        expect(err).assertFail();
        done();
      }
    })

    /*
     * @tc.number: SUB_Request_RequestDown_on_Func_3000
     * @tc.name: SUB_Request_RequestDown_on_Func_3000
     * @tc.desc: task.on('progress')
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 1
     */
    it('SUB_Request_RequestDown_on_Func_3000', 0, async (done: Function) => {
      let flag: boolean = false;
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        saveas: './',
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND
      };
      let callbackProgress1 = (progress: request.agent.Progress): void => {
        flag = true;
        console.log(`requestTest030 progress1:${progress.state}`);
      };
      let callbackProgress2 = (progress: request.agent.Progress): void => {
        if (flag) {
          console.log(`requestTest030 progress2:${progress.state}`);
          console.log(`flag----${flag}`);
          expect(flag).assertTrue();
          done();
        };
      };
      // create Task
      let task: request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`requestTest030 create Task success:${task.tid}`);
      task.on('progress', callbackProgress1);
      task.on('progress', callbackProgress2);
      await task.start();
      console.log('requestTest030 start success');
    });

    /*
     * @tc.number: SUB_Request_RequestDown_on_Func_3100
     * @tc.name: SUB_Request_RequestDown_on_Func_3100
     * @tc.desc: task.on('completed')
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 1
     */
    it('SUB_Request_RequestDown_on_Func_3100', 0, async (done: Function) => {
      let flag: boolean = false;
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://repo.huaweicloud.com/ubuntu-releases/20.04/ubuntu-20.04.6-live-server-amd64.iso.zsync',
        saveas: './',
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND,
        network: request.agent.Network.WIFI,
        headers: {
          "Range": "bytes=0-1000"
        },
        index: 0,
        begins: 10,
        ends: 500
      };
      let callbackCompleted = (progress: request.agent.Progress): void => {
        flag = true;
        console.log(`requestTest031 completed:${progress.state}`);
        expect(flag).assertTrue();
        done();
      };
      // create Task
      let task: request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`requestTest031 create Task success:${task.tid}`);
      task.on('completed', callbackCompleted);
      await task.start();
      console.log('requestTest031 start success');
    });

    /*
     * @tc.number: SUB_Request_RequestDown_on_Func_3200
     * @tc.name: SUB_Request_RequestDown_on_Func_3200
     * @tc.desc: task.on('failed')
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 1
     */
    it('SUB_Request_RequestDown_on_Func_3200', 0, async (done: Function) => {
      let flag: boolean = false;
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/te',
        saveas: './',
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND,
        network: request.agent.Network.WIFI,
        redirect: false
      };
      let callbackFailed = (progress: request.agent.Progress): void => {
        flag = true;
        console.log(`requestTest032 failed:${progress.state}`);
        expect(flag).assertTrue();
        done();
      };
      // create Task
      let task: request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`requestTest032 create Task success:${task.tid}`);
      task.on('failed', callbackFailed);
      await task.start();
      console.log('requestTest032 start success');
    });

    /*
     * @tc.number: SUB_Request_RequestDown_off_Func_3300
     * @tc.name: SUB_Request_RequestDown_off_Func_3300
     * @tc.desc: task.off('progress') /remove one
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 1
     */
    it('SUB_Request_RequestDown_off_Func_3300', 0, async (done: Function) => {
      let flag: boolean = false
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        mode: request.agent.Mode.FOREGROUND,
        network: request.agent.Network.WIFI,
        saveas: './',
        overwrite: true
      };
      let callbackProgress1 = (progress: request.agent.Progress): void => {
        flag = true;
        console.log(`requestTest033 Progress1:${progress.state}`);
      };
      let callbackProgress2 = (progress: request.agent.Progress): void => {
        console.log(`requestTest033 Progress2:${progress.state}`);
        expect(flag).assertFalse();
        done();
      };
      // create Task
      let task: request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`requestTest033 create Task success:${task.tid}`);
      task.on('progress', callbackProgress1);
      task.on('progress', callbackProgress2);
      task.off('progress', callbackProgress1);
      await task.start();
      console.log('requestTest033 start success');
    });

    /*
     * @tc.number: SUB_Request_RequestDown_off_Func_3400
     * @tc.name: SUB_Request_RequestDown_off_Func_3400
     * @tc.desc: task.off('failed') /remove one
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 1
     */
    it('SUB_Request_RequestDown_off_Func_3400', 0, async (done: Function) => {
      let flag: boolean = false;
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/te',
        mode: request.agent.Mode.FOREGROUND,
        network: request.agent.Network.WIFI,
        saveas: './',
        overwrite: true,
        redirect: false
      };
      let callbackFailed1 = (progress: request.agent.Progress): void => {
        flag = true;
        console.log(`requestTest034 Progress1:${progress.state}`);
      };
      let callbackFailed2 = (progress: request.agent.Progress): void => {
        console.log(`requestTest034 Progress2:${progress.state}`);
        expect(flag).assertFalse();
        done();
      };
      // create Task
      let task: request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`requestTest034 create Task success:${task.tid}`);
      task.on('failed', callbackFailed1);
      task.on('failed', callbackFailed2);
      task.off('failed', callbackFailed1);
      await task.start();
      console.log('requestTest034 start success');
    });

    /*
     * @tc.number: SUB_Request_RequestDown_off_Func_3500
     * @tc.name: SUB_Request_RequestDown_off_Func_3500
     * @tc.desc: task.off('progress') /remove all
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 1
     */
    it('SUB_Request_RequestDown_off_Func_3500', 0, async (done: Function) => {
      let flag1: boolean = false;
      let flag2: boolean = false;
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        mode: request.agent.Mode.FOREGROUND,
        saveas: './',
        overwrite: true
      };
      let callbackProgress1 = (progress: request.agent.Progress): void => {
        flag1 = true;
        console.log(`requestTest035 Progress1:${progress.state}`);
      };
      let callbackProgress2 = (progress: request.agent.Progress): void => {
        flag2 = true;
        console.log(`requestTest035 Progress2:${progress.state}`);
      };
      // create Task
      let task: request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`requestTest035 create Task success:${task.tid}`);
      task.on('progress', callbackProgress1);
      task.on('progress', callbackProgress2);
      task.off('progress');
      await task.start();
      console.log('requestTest035 start success');
      expect(flag1).assertFalse();
      expect(flag2).assertFalse();
      done();
    });

    /*
     * @tc.number: SUB_Request_RequestDown_off_Func_3600
     * @tc.name: SUB_Request_RequestDown_off_Func_3600
     * @tc.desc: task.off('failed') /remove all
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 1
     */
    it('SUB_Request_RequestDown_off_Func_3600', 0, async (done: Function) => {
      let flag1: boolean = false;
      let flag2: boolean = false;
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/te',
        mode: request.agent.Mode.FOREGROUND,
        saveas: './',
        overwrite: true
      };
      let callbackFailed1 = (progress: request.agent.Progress): void => {
        flag1 = true;
        console.log(`requestTest036 Progress1:${progress.state}`);
      };
      let callbackFailed2 = (progress: request.agent.Progress): void => {
        flag2 = true;
        console.log(`requestTest036 Progress2:${progress.state}`);
      };
      // create Task
      let task: request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`requestTest036 create Task success:${task.tid}`);
      task.on('failed', callbackFailed1);
      task.on('failed', callbackFailed2);
      task.off('failed');
      await task.start();
      console.log('requestTest036 start success');
      expect(flag1).assertFalse();
      expect(flag2).assertFalse();
      done();
    });

    /*
     * @tc.number: SUB_Request_RequestDown_off_Func_3700
     * @tc.name: SUB_Request_RequestDown_off_Func_3700
     * @tc.desc: task.off('completed') /remove all
     * @tc.size: MediumTest
     * @tc.type: Method
     * @tc.level: Level 1
     */
    it('SUB_Request_RequestDown_off_Func_3700', 0, async (done: Function) => {
      let flag2: boolean = false;
      let flag1: boolean = false;
      let config: request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        mode: request.agent.Mode.FOREGROUND,
        saveas: './',
        overwrite: true
      };
      let callbackCompleted1 = (progress: request.agent.Progress): void => {
        flag1 = true;
        console.log(`requestTest037 Progress1:${progress.state}`);
      };
      let callbackCompleted2 = (progress: request.agent.Progress): void => {
        flag2 = true;
        console.log(`requestTest037 Progress2:${progress.state}`);
      };
      // create Task
      let task: request.agent.Task = await request.agent.create(baseContext, config);
      console.log(`requestTest037 create Task success:${task.tid}`);
      task.on('completed', callbackCompleted1);
      task.on('completed', callbackCompleted2);
      task.off('completed');
      await task.start();
      console.log('requestTest037 start success');
      expect(flag1).assertFalse();
      expect(flag2).assertFalse();
      done();
    });
  });
};