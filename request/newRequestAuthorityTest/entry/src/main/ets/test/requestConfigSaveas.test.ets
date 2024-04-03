/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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

import { describe, it, expect, beforeAll } from '@ohos/hypium';
import request from '@ohos.request';
import { BusinessError } from '@ohos.base';
import common from '@ohos.app.ability.common';
import fs from  '@ohos.file.fs';

export default function requestConfigSavesTest() {
  describe('requestConfigSavesTest', () => {
    let baseContext: common.Context;
    /**
     * beforeAll: Prerequisites at the test suite level, which are executed before the test suite is executed.
     */
    beforeAll((done: Function) => {
      try {
        baseContext = AppStorage.get('context');
        console.info('====>beforeAll baseContext:'+JSON.stringify(baseContext))
        done();
      } catch (err) {
        console.info('====>beforeAll catch err:'+JSON.stringify(err))
        done();
      }
    });

    /*
     * @tc.number: SUB_Request_Agnet_TaskSaveas_0100
     * @tc.name: different saveas of config
     * @tc.desc: request config saveas validate
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('SUB_Request_Agnet_TaskSaveas_0100', 0, (done: Function) => {
      console.info("====>-----------------------SUB_Request_Agnet_TaskSaveas_0100 is starting-----------------------");
      let config:request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        title: 'createTest',
        description: 'XTS download test!',
        saveas: undefined,
        network: request.agent.Network.WIFI,
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND
      };
      try {
        request.agent.create(baseContext, config, async (err: BusinessError, task: request.agent.Task) => {
          let on_completedCallback = (pro: request.agent.Progress) => {
            try {
              task.off('completed', on_completedCallback);
              console.info("====>SUB_Request_Agnet_TaskSaveas_0100 completed task.config.saveas: " + JSON.stringify(task.config.saveas));
              let path: string = '/data/storage/el2/base/haps/entry_test/cache/test.apk';
              let ifExit: boolean = fs.accessSync(path);
              console.info("====>SUB_Request_Agnet_TaskSaveas_0100 ifExit: " + ifExit);
              expect(ifExit).assertTrue();
              if(ifExit){
                fs.unlinkSync(path);
                console.info("====>SUB_Request_Agnet_TaskSaveas_0100 delete file success");
              }
              done();
            } catch (err) {
              console.info("====>SUB_Request_Agnet_TaskSaveas_0100 catch err: " + JSON.stringify(err));
              done();
            }
          }
          try {
            if(err){
              console.info("====>SUB_Request_Agnet_TaskSaveas_0100 create err: " + JSON.stringify(err));
              expect().assertFail();
            }
            task.on('completed', on_completedCallback);
            await task.start();
            console.info("====>SUB_Request_Agnet_TaskSaveas_0100 start success: " + JSON.stringify(config.saveas));
          } catch (err) {
            console.info("====>SUB_Request_Agnet_TaskSaveas_0100 catch err: " + JSON.stringify(err));
            await request.agent.remove(task.tid);
            done();
          }
        });
      } catch (err) {
        console.info("====>SUB_Request_Agnet_TaskSaveas_0100 create catch err: " + JSON.stringify(err));
        expect().assertFail();
        done();
      }
    });

    /*
     * @tc.number: SUB_Request_Agnet_TaskSaveas_0200
     * @tc.name: different saveas of config
     * @tc.desc: request config saveas validate
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('SUB_Request_Agnet_TaskSaveas_0200', 0, (done: Function) => {
      console.info("====>-----------------------SUB_Request_Agnet_TaskSaveas_0200 is starting-----------------------");
      let config:request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        title: 'createTest',
        description: 'XTS download test!',
        saveas: './',
        network: request.agent.Network.WIFI,
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND
      };
      try {
        request.agent.create(baseContext, config, async (err: BusinessError, task: request.agent.Task) => {
          let on_completedCallback = (pro: request.agent.Progress) => {
            try {
              task.off('completed', on_completedCallback);
              console.info("====>SUB_Request_Agnet_TaskSaveas_0200 completed task.config.saveas: " + JSON.stringify(task.config.saveas));
              let path: string = '/data/storage/el2/base/haps/entry_test/cache/test.apk';
              let ifExit: boolean = fs.accessSync(path);
              console.info("====>SUB_Request_Agnet_TaskSaveas_0200 ifExit: " + ifExit);
              expect(ifExit).assertTrue();
              if(ifExit){
                fs.unlinkSync(path);
                console.info("====>SUB_Request_Agnet_TaskSaveas_0200 delete file success");
              }
              done();
            } catch (err) {
              console.info("====>SUB_Request_Agnet_TaskSaveas_0200 catch err: " + JSON.stringify(err));
              done();
            }
          }
          try {
            if(err){
              console.info("====>SUB_Request_Agnet_TaskSaveas_0200 create err: " + JSON.stringify(err));
              expect().assertFail();
            }
            task.on('completed', on_completedCallback);
            await task.start();
            console.info("====>SUB_Request_Agnet_TaskSaveas_0200 start success: " + JSON.stringify(config.saveas));
          } catch (err) {
            console.info("====>SUB_Request_Agnet_TaskSaveas_0200 catch err: " + JSON.stringify(err));
            await request.agent.remove(task.tid);
            done();
          }
        });
      } catch (err) {
        console.info("====>SUB_Request_Agnet_TaskSaveas_0200 create catch err: " + JSON.stringify(err));
        expect().assertFail();
        done();
      }
    });

    /*
     * @tc.number: SUB_Request_Agnet_TaskSaveas_0300
     * @tc.name: different saveas of config
     * @tc.desc: request config saveas validate
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('SUB_Request_Agnet_TaskSaveas_0300', 0, (done: Function) => {
      console.info("====>-----------------------SUB_Request_Agnet_TaskSaveas_0300 is starting-----------------------");
      let config:request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        title: 'createTest',
        description: 'XTS download test!',
        saveas: './request/SUB_Request_Agnet_TaskSaveas_0300',
        network: request.agent.Network.WIFI,
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND
      };
      try {
        request.agent.create(baseContext, config, async (err: BusinessError, task: request.agent.Task) => {
          let on_completedCallback = (pro: request.agent.Progress) => {
            try {
              task.off('completed', on_completedCallback);
              console.info("====>SUB_Request_Agnet_TaskSaveas_0300 completed task.config.saveas: " + JSON.stringify(task.config.saveas));
              let path: string = '/data/storage/el2/base/haps/entry_test/cache/' + task.config.saveas;
              console.info("====>SUB_Request_Agnet_TaskSaveas_0300 path: " + path);
              let ifExit: boolean = fs.accessSync(path);
              console.info("====>SUB_Request_Agnet_TaskSaveas_0300 ifExit: " + ifExit);
              expect(ifExit).assertTrue();
              done();
            } catch (err) {
              console.info("====>SUB_Request_Agnet_TaskSaveas_0300 catch err: " + JSON.stringify(err));
              done();
            }
          }
          try {
            if(err){
              console.info("====>SUB_Request_Agnet_TaskSaveas_0300 create err: " + JSON.stringify(err));
              expect().assertFail();
            }
            task.on('completed', on_completedCallback);
            await task.start();
            console.info("====>SUB_Request_Agnet_TaskSaveas_0300 start success: " + JSON.stringify(config.saveas));
          } catch (err) {
            console.info("====>SUB_Request_Agnet_TaskSaveas_0300 catch err: " + JSON.stringify(err));
            await request.agent.remove(task.tid);
            done();
          }
        });
      } catch (err) {
        console.info("====>SUB_Request_Agnet_TaskSaveas_0300 create catch err: " + JSON.stringify(err));
        expect().assertFail();
        done();
      }
    });

    /*
     * @tc.number: SUB_Request_Agnet_TaskSaveas_0400
     * @tc.name: different saveas of config
     * @tc.desc: request config saveas validate
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('SUB_Request_Agnet_TaskSaveas_0400', 0, (done: Function) => {
      console.info("====>-----------------------SUB_Request_Agnet_TaskSaveas_0400 is starting-----------------------");
      let config:request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        title: 'createTest',
        description: 'XTS download test!',
        saveas: './SUB_Request_Agnet_TaskSaveas_0400',
        network: request.agent.Network.WIFI,
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND
      };
      try {
        request.agent.create(baseContext, config, async (err: BusinessError, task: request.agent.Task) => {
          let on_completedCallback = (pro: request.agent.Progress) => {
            try {
              task.off('completed', on_completedCallback);
              console.info("====>SUB_Request_Agnet_TaskSaveas_0400 completed task.config.saveas: " + JSON.stringify(task.config.saveas));
              let path: string = '/data/storage/el2/base/haps/entry_test/cache/' + task.config.saveas;
              console.info("====>SUB_Request_Agnet_TaskSaveas_0400 path: " + path);
              let ifExit: boolean = fs.accessSync(path);
              console.info("====>SUB_Request_Agnet_TaskSaveas_0400 ifExit: " + ifExit);
              expect(ifExit).assertTrue();
              done();
            } catch (err) {
              console.info("====>SUB_Request_Agnet_TaskSaveas_0400 catch err: " + JSON.stringify(err));
              done();
            }
          }
          try {
            if(err){
              console.info("====>SUB_Request_Agnet_TaskSaveas_0400 create err: " + JSON.stringify(err));
              expect().assertFail();
            }
            task.on('completed', on_completedCallback);
            await task.start();
            console.info("====>SUB_Request_Agnet_TaskSaveas_0400 start success: " + JSON.stringify(config.saveas));
          } catch (err) {
            console.info("====>SUB_Request_Agnet_TaskSaveas_0400 catch err: " + JSON.stringify(err));
            await request.agent.remove(task.tid);
            done();
          }
        });
      } catch (err) {
        console.info("====>SUB_Request_Agnet_TaskSaveas_0400 create catch err: " + JSON.stringify(err));
        expect().assertFail();
        done();
      }
    });

    /*
     * @tc.number: SUB_Request_Agnet_TaskSaveas_0500
     * @tc.name: different saveas of config
     * @tc.desc: request config saveas validate
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('SUB_Request_Agnet_TaskSaveas_0500', 0, async (done: Function) => {
      console.info("====>-----------------------SUB_Request_Agnet_TaskSaveas_0400 is starting-----------------------");
      let config:request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        title: 'createTest',
        description: 'XTS download test!',
        saveas: '/ request/SUB_Request_Agnet_TaskSaveas_0500',
        network: request.agent.Network.WIFI,
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND
      };
      try {
        await request.agent.create(baseContext, config);
        console.info("====>SUB_Request_Agnet_TaskSaveas_0500 create not err");
        expect().assertFail();
      } catch (err) {
        console.info("====>SUB_Request_Agnet_TaskSaveas_0500 create catch err: " + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    });

    /*
     * @tc.number: SUB_Request_Agnet_TaskSaveas_0600
     * @tc.name: different saveas of config
     * @tc.desc: request config saveas validate
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('SUB_Request_Agnet_TaskSaveas_0600', 0, (done: Function) => {
      console.info("====>-----------------------SUB_Request_Agnet_TaskSaveas_0600 is starting-----------------------");
      let config:request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        title: 'createTest',
        description: 'XTS download test!',
        saveas: 'SUB_Request_Agnet_TaskSaveas_0600',
        network: request.agent.Network.WIFI,
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND
      };
      try {
        request.agent.create(baseContext, config, async (err: BusinessError, task: request.agent.Task) => {
          let on_completedCallback = (pro: request.agent.Progress) => {
            try {
              task.off('completed', on_completedCallback);
              console.info("====>SUB_Request_Agnet_TaskSaveas_0600 completed task.config.saveas: " + JSON.stringify(task.config.saveas));
              let path: string = '/data/storage/el2/base/haps/entry_test/cache/' + task.config.saveas;
              console.info("====>SUB_Request_Agnet_TaskSaveas_0600 path: " + path);
              let ifExit: boolean = fs.accessSync(path);
              console.info("====>SUB_Request_Agnet_TaskSaveas_0600 ifExit: " + ifExit);
              expect(ifExit).assertTrue();
              done();
            } catch (err) {
              console.info("====>SUB_Request_Agnet_TaskSaveas_0600 catch err: " + JSON.stringify(err));
              done();
            }
          }
          try {
            if(err){
              console.info("====>SUB_Request_Agnet_TaskSaveas_0600 create err: " + JSON.stringify(err));
              expect().assertFail();
            }
            task.on('completed', on_completedCallback);
            await task.start();
            console.info("====>SUB_Request_Agnet_TaskSaveas_0600 start success: " + JSON.stringify(config.saveas));
          } catch (err) {
            console.info("====>SUB_Request_Agnet_TaskSaveas_0600 catch err: " + JSON.stringify(err));
            await request.agent.remove(task.tid);
            done();
          }
        });
      } catch (err) {
        console.info("====>SUB_Request_Agnet_TaskSaveas_0600 create catch err: " + JSON.stringify(err));
        expect().assertFail();
        done();
      }
    });

    /*
     * @tc.number: SUB_Request_Agnet_TaskSaveas_0700
     * @tc.name: different saveas of config
     * @tc.desc: request config saveas validate
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('SUB_Request_Agnet_TaskSaveas_0700', 0, (done: Function) => {
      console.info("====>-----------------------SUB_Request_Agnet_TaskSaveas_0700 is starting-----------------------");
      let config:request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        title: 'createTest',
        description: 'XTS download test!',
        saveas: 'request/SUB_Request_Agnet_TaskSaveas_0700',
        network: request.agent.Network.WIFI,
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND
      };
      try {
        request.agent.create(baseContext, config, async (err: BusinessError, task: request.agent.Task) => {
          let on_completedCallback = (pro: request.agent.Progress) => {
            try {
              task.off('completed', on_completedCallback);
              console.info("====>SUB_Request_Agnet_TaskSaveas_0700 completed task.config.saveas: " + JSON.stringify(task.config.saveas));
              let path: string = '/data/storage/el2/base/haps/entry_test/cache/' + task.config.saveas;
              console.info("====>SUB_Request_Agnet_TaskSaveas_0700 path: " + path);
              let ifExit: boolean = fs.accessSync(path);
              console.info("====>SUB_Request_Agnet_TaskSaveas_0700 ifExit: " + ifExit);
              expect(ifExit).assertTrue();
              done();
            } catch (err) {
              console.info("====>SUB_Request_Agnet_TaskSaveas_0700 catch err: " + JSON.stringify(err));
              done();
            }
          }
          try {
            if(err){
              console.info("====>SUB_Request_Agnet_TaskSaveas_0700 create err: " + JSON.stringify(err));
              expect().assertFail();
            }
            task.on('completed', on_completedCallback);
            await task.start();
            console.info("====>SUB_Request_Agnet_TaskSaveas_0700 start success: " + JSON.stringify(config.saveas));
          } catch (err) {
            console.info("====>SUB_Request_Agnet_TaskSaveas_0700 catch err: " + JSON.stringify(err));
            await request.agent.remove(task.tid);
            done();
          }
        });
      } catch (err) {
        console.info("====>SUB_Request_Agnet_TaskSaveas_0700 create catch err: " + JSON.stringify(err));
        expect().assertFail();
        done();
      }
    });

    /*
     * @tc.number: SUB_Request_Agnet_TaskSaveas_0800
     * @tc.name: different saveas of config
     * @tc.desc: request config saveas validate
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('SUB_Request_Agnet_TaskSaveas_0800', 0, (done: Function) => {
      console.info("====>-----------------------SUB_Request_Agnet_TaskSaveas_0800 is starting-----------------------");
      let config:request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        title: 'createTest',
        description: 'XTS download test!',
        saveas: 'internal://cache/test.apk',
        network: request.agent.Network.WIFI,
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND
      };
      try {
        request.agent.create(baseContext, config, async (err: BusinessError, task: request.agent.Task) => {
          let on_completedCallback = (pro: request.agent.Progress) => {
            try {
              task.off('completed', on_completedCallback);
              console.info("====>SUB_Request_Agnet_TaskSaveas_0800 completed task.config.saveas: " + JSON.stringify(task.config.saveas));
              let path: string = '/data/storage/el2/base/haps/entry_test/cache/test.apk';
              let ifExit: boolean = fs.accessSync(path);
              console.info("====>SUB_Request_Agnet_TaskSaveas_0800 ifExit: " + ifExit);
              expect(ifExit).assertTrue();
              if(ifExit){
                fs.unlinkSync(path);
                console.info("====>SUB_Request_Agnet_TaskSaveas_0800 delete file success");
              }
              done();
            } catch (err) {
              console.info("====>SUB_Request_Agnet_TaskSaveas_0800 catch err: " + JSON.stringify(err));
              done();
            }
          }
          try {
            if(err){
              console.info("====>SUB_Request_Agnet_TaskSaveas_0800 create err: " + JSON.stringify(err));
              expect().assertFail();
            }
            task.on('completed', on_completedCallback);
            await task.start();
            console.info("====>SUB_Request_Agnet_TaskSaveas_0800 start success: " + JSON.stringify(config.saveas));
          } catch (err) {
            console.info("====>SUB_Request_Agnet_TaskSaveas_0800 catch err: " + JSON.stringify(err));
            await request.agent.remove(task.tid);
            done();
          }
        });
      } catch (err) {
        console.info("====>SUB_Request_Agnet_TaskSaveas_0800 create catch err: " + JSON.stringify(err));
        expect().assertFail();
        done();
      }
    });

    /*
     * @tc.number: SUB_Request_Agnet_TaskSaveas_0900
     * @tc.name: different saveas of config
     * @tc.desc: request config saveas validate
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('SUB_Request_Agnet_TaskSaveas_0900', 0, (done: Function) => {
      console.info("====>-----------------------SUB_Request_Agnet_TaskSaveas_0900 is starting-----------------------");
      let config:request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        title: 'createTest',
        description: 'XTS download test!',
        saveas: '/data/storage/el2/base/SUB_Request_Agnet_TaskSaveas_0900',
        network: request.agent.Network.WIFI,
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND
      };
      try {
        request.agent.create(baseContext, config, async (err: BusinessError, task: request.agent.Task) => {
          let on_completedCallback = (pro: request.agent.Progress) => {
            try {
              task.off('completed', on_completedCallback);
              console.info("====>SUB_Request_Agnet_TaskSaveas_0900 completed task.config.saveas: " + JSON.stringify(task.config.saveas));
              let path: string = task.config.saveas;
              console.info("====>SUB_Request_Agnet_TaskSaveas_0900 path: " + path);
              let ifExit: boolean = fs.accessSync(path);
              console.info("====>SUB_Request_Agnet_TaskSaveas_0900 ifExit: " + ifExit);
              expect(ifExit).assertTrue();
              done();
            } catch (err) {
              console.info("====>SUB_Request_Agnet_TaskSaveas_0900 catch err: " + JSON.stringify(err));
              done();
            }
          }
          try {
            if(err){
              console.info("====>SUB_Request_Agnet_TaskSaveas_0900 create err: " + JSON.stringify(err));
              expect().assertFail();
            }
            task.on('completed', on_completedCallback);
            await task.start();
            console.info("====>SUB_Request_Agnet_TaskSaveas_0900 start success: " + JSON.stringify(config.saveas));
          } catch (err) {
            console.info("====>SUB_Request_Agnet_TaskSaveas_0900 catch err: " + JSON.stringify(err));
            await request.agent.remove(task.tid);
            done();
          }
        });
      } catch (err) {
        console.info("====>SUB_Request_Agnet_TaskSaveas_0900 create catch err: " + JSON.stringify(err));
        expect().assertFail();
        done();
      }
    });

    /*
     * @tc.number: SUB_Request_Agnet_TaskSaveas_1000
     * @tc.name: different saveas of config
     * @tc.desc: request config saveas validate
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('SUB_Request_Agnet_TaskSaveas_1000', 0, async (done: Function) => {
      console.info("====>-----------------------SUB_Request_Agnet_TaskSaveas_1000 is starting-----------------------");
      let config:request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        title: 'createTest',
        description: 'XTS download test!',
        saveas: '/data/storage/el2/base',
        network: request.agent.Network.WIFI,
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND
      };
      try {
        await request.agent.create(baseContext, config);
        console.info("====>SUB_Request_Agnet_TaskSaveas_1000 create not err");
        expect().assertFail();
      } catch (err) {
        console.info("====>SUB_Request_Agnet_TaskSaveas_1000 create catch err: " + JSON.stringify(err));
        expect(err.code).assertEqual(13400001);
        done();
      }
    });

    /*
     * @tc.number: SUB_Request_Agnet_TaskSaveas_1100
     * @tc.name: different saveas of config
     * @tc.desc: request config saveas validate
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('SUB_Request_Agnet_TaskSaveas_1100', 0, (done: Function) => {
      console.info("====>-----------------------SUB_Request_Agnet_TaskSaveas_1100 is starting-----------------------");
      let config:request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        title: 'createTest',
        description: 'XTS download test!',
        saveas: '/data/storage/../../data/storage/el1/../el2/base/SUB_Request_Agnet_TaskSaveas_1100',
        network: request.agent.Network.WIFI,
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND
      };
      try {
        request.agent.create(baseContext, config, async (err: BusinessError, task: request.agent.Task) => {
          let on_completedCallback = (pro: request.agent.Progress) => {
            try {
              task.off('completed', on_completedCallback);
              console.info("====>SUB_Request_Agnet_TaskSaveas_1100 completed task.config.saveas: " + JSON.stringify(task.config.saveas));
              let path: string = '/data/storage/el2/base/SUB_Request_Agnet_TaskSaveas_1100';
              console.info("====>SUB_Request_Agnet_TaskSaveas_1100 path: " + path);
              let ifExit: boolean = fs.accessSync(path);
              console.info("====>SUB_Request_Agnet_TaskSaveas_1100 ifExit: " + ifExit);
              expect(ifExit).assertTrue();
              done();
            } catch (err) {
              console.info("====>SUB_Request_Agnet_TaskSaveas_1100 catch err: " + JSON.stringify(err));
              done();
            }
          }
          try {
            if(err){
              console.info("====>SUB_Request_Agnet_TaskSaveas_1100 create err: " + JSON.stringify(err));
              expect().assertFail();
            }
            task.on('completed', on_completedCallback);
            await task.start();
            console.info("====>SUB_Request_Agnet_TaskSaveas_1100 start success: " + JSON.stringify(config.saveas));
          } catch (err) {
            console.info("====>SUB_Request_Agnet_TaskSaveas_1100 catch err: " + JSON.stringify(err));
            await request.agent.remove(task.tid);
            done();
          }
        });
      } catch (err) {
        console.info("====>SUB_Request_Agnet_TaskSaveas_1100 create catch err: " + JSON.stringify(err));
        expect().assertFail();
        done();
      }
    });

    /*
     * @tc.number: SUB_Request_Agnet_TaskSaveas_1200
     * @tc.name: different saveas of config
     * @tc.desc: request config saveas validate
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('SUB_Request_Agnet_TaskSaveas_1200', 0, async (done: Function) => {
      console.info("====>-----------------------SUB_Request_Agnet_TaskSaveas_1200 is starting-----------------------");
      let config:request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        title: 'createTest',
        description: 'XTS download test!',
        saveas: '/data/storage/../../el2/base/SUB_Request_Agnet_TaskSaveas_1200',
        network: request.agent.Network.WIFI,
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND
      };
      try {
        await request.agent.create(baseContext, config);
        console.info("====>SUB_Request_Agnet_TaskSaveas_1200 create not err");
        expect().assertFail();
      } catch (err) {
        console.info("====>SUB_Request_Agnet_TaskSaveas_1200 create catch err: " + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    });

    /*
     * @tc.number: SUB_Request_Agnet_TaskSaveas_1300
     * @tc.name: different saveas of config
     * @tc.desc: request config saveas validate
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('SUB_Request_Agnet_TaskSaveas_1300', 0, (done: Function) => {
      console.info("====>-----------------------SUB_Request_Agnet_TaskSaveas_1300 is starting-----------------------");
      let config:request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        title: 'createTest',
        description: 'XTS download test!',
        saveas: 'file://com.acts.newRequestAuthority.test/data/storage/el2/base/SUB_Request_Agnet_TaskSaveas_1300',
        network: request.agent.Network.WIFI,
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND
      };
      try {
        request.agent.create(baseContext, config, async (err: BusinessError, task: request.agent.Task) => {
          let on_completedCallback = (pro: request.agent.Progress) => {
            try {
              task.off('completed', on_completedCallback);
              console.info("====>SUB_Request_Agnet_TaskSaveas_1300 completed task.config.saveas: " + JSON.stringify(task.config.saveas));
              let path: string = '/data/storage/el2/base/SUB_Request_Agnet_TaskSaveas_1300';
              console.info("====>SUB_Request_Agnet_TaskSaveas_1300 path: " + path);
              let ifExit: boolean = fs.accessSync(path);
              console.info("====>SUB_Request_Agnet_TaskSaveas_1300 ifExit: " + ifExit);
              expect(ifExit).assertTrue();
              done();
            } catch (err) {
              console.info("====>SUB_Request_Agnet_TaskSaveas_1300 catch err: " + JSON.stringify(err));
              done();
            }
          }
          try {
            if(err){
              console.info("====>SUB_Request_Agnet_TaskSaveas_1300 create err: " + JSON.stringify(err));
              expect().assertFail();
            }
            task.on('completed', on_completedCallback);
            await task.start();
            console.info("====>SUB_Request_Agnet_TaskSaveas_1300 start success: " + JSON.stringify(config.saveas));
          } catch (err) {
            console.info("====>SUB_Request_Agnet_TaskSaveas_1300 catch err: " + JSON.stringify(err));
            await request.agent.remove(task.tid);
            done();
          }
        });
      } catch (err) {
        console.info("====>SUB_Request_Agnet_TaskSaveas_1300 create catch err: " + JSON.stringify(err));
        expect().assertFail();
        done();
      }
    });

    /*
     * @tc.number: SUB_Request_Agnet_TaskSaveas_1400
     * @tc.name: different saveas of config
     * @tc.desc: request config saveas validate
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('SUB_Request_Agnet_TaskSaveas_1400', 0, async (done: Function) => {
      console.info("====>-----------------------SUB_Request_Agnet_TaskSaveas_1400 is starting-----------------------");
      let config:request.agent.Config = {
        action: request.agent.Action.DOWNLOAD,
        url: 'https://gitee.com/chenzhixue/downloadTest/releases/download/v1.0/test.apk',
        title: 'createTest',
        description: 'XTS download test!',
        saveas: 'file://com.examples.app123/data/storage/el2/base/SUB_Request_Agnet_TaskSaveas_1300',
        network: request.agent.Network.WIFI,
        overwrite: true,
        mode:request.agent.Mode.FOREGROUND
      };
      try {
        await request.agent.create(baseContext, config);
        console.info("====>SUB_Request_Agnet_TaskSaveas_1400 create not err");
        expect().assertFail();
      } catch (err) {
        console.info("====>SUB_Request_Agnet_TaskSaveas_1400 create catch err: " + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    });

  });
};