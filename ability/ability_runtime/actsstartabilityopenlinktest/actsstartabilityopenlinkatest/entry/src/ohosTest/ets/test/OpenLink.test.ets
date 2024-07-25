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

import { afterAll, afterEach, beforeAll, beforeEach, describe, expect, it } from '@ohos/hypium';
// 加载js测试框架
import abilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry';
import CommonEventManager from '@ohos.commonEventManager';
import { BusinessError } from '@ohos.base';
import AbilityConstant from '@ohos.app.ability.AbilityConstant';
import OpenLinkOptions from '@ohos.app.ability.OpenLinkOptions';
import common from '@ohos.app.ability.common';

let context: common.UIAbilityContext;
let link = 'example://www.example.com';
let linkNotExist = 'demo://www.example.com';
let invalidParamErrNo = 401;
let componentNotExistErrNo = 16000019;
let resultCode = 111;
let trueParamOptions: OpenLinkOptions = {
  appLinkingOnly: true,
  parameters: { demo_key: "demo_value" }
};
let falseParamOptions: OpenLinkOptions = {
  appLinkingOnly: false,
  parameters: { demo_key: "demo_value" }
};
let paramOptions: OpenLinkOptions = {
  parameters: { demo_key: "demo_value", demo_num: 111 }
};


export default function openLinkTest() {
  describe('ActsOpenLinkTest', () => {
    beforeAll(() => {
      context = AppStorage.get<common.UIAbilityContext>('TestAbilityContext') as common.UIAbilityContext;
    });
    afterEach((done: Function) => {
      console.log('OpenLink afterEach start');
      setTimeout(() => {
        console.log('OpenLink afterEach end');
        done();
      }, 1000);
    });
    /*
     * @tc.number : SUB_Ability_AbilityRuntime_ABILITY_StartAbility_OpenLink_0400
     * @tc.name   : The input parameter 'link' is legal uri string and target app exist
     * @tc.desc   : Call the openLink interface through context, open target app successfully
     * @tc.type   : Function
     * @tc.size   : MediumTest
     * @tc.level  : 3
     */
    it('AbilityRuntime_OpenLink_0400', 0, async (done: Function) => {
      let tag = `SUB_Ability_AbilityRuntime_ABILITY_StartAbility_OpenLink_0400`;
      console.log(`${tag}, it begin`);
      let event1 = 'AbilityRuntime_OpenLink_0400'
      let subscriberInfo: CommonEventManager.CommonEventSubscribeInfo = {
        events: [event1]
      }
      let subscriber: CommonEventManager.CommonEventSubscriber = await CommonEventManager.createSubscriber(subscriberInfo)
      console.info(`#${tag}# subscriber: ${JSON.stringify(subscriber)}`);
      CommonEventManager.subscribe(subscriber, (err, data) => {
        console.info(`#${tag}# subscriber callback: ${JSON.stringify(data)}`);
        if (data.event == event1) {
          console.log("parameters: " + JSON.stringify(data.parameters))
          expect(data.parameters?.appLinkingOnly).assertFalse()
          done()
        }
        CommonEventManager.unsubscribe(subscriber, (err, data) => {
          console.log("UnSubscribeInfoCallback : " + JSON.stringify(data));
        });
      })
      
      try {
        context.openLink(link).then(() => {
          console.info(`#${tag}# open link successful`);

        }).catch((error: BusinessError) => {
          console.info(`#${tag}# open link err : ${error}`);
          expect().assertFail();
          done();
        })
      } catch (err) {
        console.info(`#${tag}# open fail : ${err}`);
        expect().assertFail();
        done();
      }
    });

    /*
     * @tc.number : SUB_Ability_AbilityRuntime_ABILITY_StartAbility_OpenLink_0500
     * @tc.name   : The input parameter 'link' is legal uri string but target app not exist
     * @tc.desc   : Call the openLink interface through context, open target app failed
     * @tc.type   : Function
     * @tc.size   : MediumTest
     * @tc.level  : 3
     */
    it('AbilityRuntime_OpenLink_0500', 0, (done: Function) => {
      let tag = `SUB_Ability_AbilityRuntime_ABILITY_StartAbility_OpenLink_0500`;
      console.log(`${tag}, it begin`);

      try {
        context.openLink('https://123.1.1.1').then(() => {
          console.info(`#${tag}# open link successful`);
          expect().assertFail();
          done();
        }).catch((error: BusinessError) => {
          console.info(`#${tag}# open link err : ${error}`);
          expect(error.code).assertEqual(componentNotExistErrNo);
          done();
        })
      } catch (err) {
        console.info(`#${tag}# open fail : ${err}`);
        expect().assertFail();
        done();
      }
    });

    /*
     * @tc.number : SUB_Ability_AbilityRuntime_ABILITY_StartAbility_OpenLink_0600
     * @tc.name   : The input parameter 'link' is undefined
     * @tc.desc   : Call the openLink interface through context, return error code 401
     * @tc.type   : Function
     * @tc.size   : MediumTest
     * @tc.level  : 3
     */
    it('AbilityRuntime_OpenLink_0600', 0, (done: Function) => {
      let tag = `SUB_Ability_AbilityRuntime_ABILITY_StartAbility_OpenLink_0600`;
      console.log(`${tag}, it begin`);

      try {
        context.openLink(undefined).then(() => {
          console.info(`#${tag}# open link successful`);
          expect().assertFail();
          done();
        }).catch((error: BusinessError) => {
          console.info(`#${tag}# open link err : ${error}`);
          expect().assertFail();
          done();
        })
      } catch (err) {
        console.info(`#${tag}# open fail : ${JSON.stringify(err)}`);
        expect(err.code).assertEqual(invalidParamErrNo);
        done();
      }
    });

    /*
     * @tc.number : SUB_Ability_AbilityRuntime_ABILITY_StartAbility_OpenLink_0700
     * @tc.name   : The input parameter 'link' is null
     * @tc.desc   : Call the openLink interface through context, return error code 401
     * @tc.type   : Function
     * @tc.size   : MediumTest
     * @tc.level  : 3
     */
    it('AbilityRuntime_OpenLink_0700', 0, (done: Function) => {
      let tag = `SUB_Ability_AbilityRuntime_ABILITY_StartAbility_OpenLink_0700`;
      console.log(`${tag}, it begin`);

      try {
        context.openLink(null).then(() => {
          console.info(`#${tag}# open link successful`);
          expect().assertFail();
          done();
        }).catch((error: BusinessError) => {
          console.info(`#${tag}# open link err : ${error}`);
          expect().assertFail();
          done();
        })
      } catch (err) {
        console.info(`#${tag}# open fail : ${err}`);
        expect(err.code).assertEqual(invalidParamErrNo);
        done();
      }
    });

    /*
     * @tc.number : SUB_Ability_AbilityRuntime_ABILITY_StartAbility_OpenLink_0800
     * @tc.name   : The input parameter 'link' is only 'https://'
     * @tc.desc   : Call the openLink interface through context, return error code 401
     * @tc.type   : Function
     * @tc.size   : MediumTest
     * @tc.level  : 3
     */
    it('AbilityRuntime_OpenLink_0800', 0, (done: Function) => {
      let tag = `SUB_Ability_AbilityRuntime_ABILITY_StartAbility_OpenLink_0800`;
      console.log(`${tag}, it begin`);

      try {
        context.openLink('https://').then(() => {
          console.info(`#${tag}# open link successful`);
          expect().assertFail();
          done();
        }).catch((error: BusinessError) => {
          console.info(`#${tag}# open link err : ${error}`);
          expect().assertFail();
          done();
        })
      } catch (err) {
        console.info(`#${tag}# open fail : ${err}`);
        expect(err.code).assertEqual(invalidParamErrNo);
        done();
      }
    });

    /*
     * @tc.number : SUB_Ability_AbilityRuntime_ABILITY_StartAbility_OpenLink_0900
     * @tc.name   : The input parameter 'link' is a normal string
     * @tc.desc   : Call the openLink interface through context, return error code 401
     * @tc.type   : Function
     * @tc.size   : MediumTest
     * @tc.level  : 3
     */
    it('AbilityRuntime_OpenLink_0900', 0, (done: Function) => {
      let tag = `SUB_Ability_AbilityRuntime_ABILITY_StartAbility_OpenLink_0900`;
      console.log(`${tag}, it begin`);

      try {
        context.openLink('test').then(() => {
          console.info(`#${tag}# open link successful`);
          expect().assertFail();
          done();
        }).catch((error: BusinessError) => {
          console.info(`#${tag}# open link err : ${error}`);
          expect().assertFail();
          done();
        })
      } catch (err) {
        console.info(`#${tag}# open fail : ${err}`);
        expect(err.code).assertEqual(invalidParamErrNo);
        done();
      }
    });

    /*
     * @tc.number : SUB_Ability_AbilityRuntime_ABILITY_StartAbility_OpenLink_1000
     * @tc.name   : The input parameter 'link' does not start with 'https'
     * @tc.desc   : Call the openLink interface through context, open target app successfully
     * @tc.type   : Function
     * @tc.size   : MediumTest
     * @tc.level  : 3
     */
    it('AbilityRuntime_OpenLink_1000', 0, async (done: Function) => {
      let tag = `SUB_Ability_AbilityRuntime_ABILITY_StartAbility_OpenLink_1000`;
      console.log(`${tag}, it begin`);
      let event1 = 'AbilityRuntime_OpenLink_1000'
      let subscriberInfo: CommonEventManager.CommonEventSubscribeInfo = {
        events: [event1]
      }
      let subscriber: CommonEventManager.CommonEventSubscriber = await CommonEventManager.createSubscriber(subscriberInfo)
      console.info(`#${tag}# subscriber: ${JSON.stringify(subscriber)}`);
      CommonEventManager.subscribe(subscriber, (err, data) => {

        console.info(`#${tag}# subscriber callback: ${JSON.stringify(data)}, err: ${JSON.stringify(err)}`);
        if (data.event == event1) {
          console.log("parameters: " + JSON.stringify(data.parameters))
          expect(data.parameters?.appLinkingOnly).assertFalse()
          done()
        }
        CommonEventManager.unsubscribe(subscriber, (err, data) => {
          console.log("UnSubscribeInfoCallback : " + JSON.stringify(data));
        });
      })
      try {
        context.openLink('ftp://www.example.com').then(() => {
          console.info(`#${tag}# open link successful`);
        }).catch((error: BusinessError) => {
          console.info(`#${tag}# open link err : ${error}`);
          expect().assertFail();
          done();
        })
      } catch (err) {
        console.info(`#${tag}# open fail : ${err}`);
        expect().assertFail();
        done();
      }
    });


    /*
     * @tc.number : SUB_Ability_AbilityRuntime_ABILITY_StartAbility_OpenLink_1200
     * @tc.name   : The input parameter 'link' is legal uri string but target app not exist, appLinkingOnly is true, parameters not configured
     * @tc.desc   : Call the openLink interface through context, return error code 16000019
     * @tc.type   : Function
     * @tc.size   : MediumTest
     * @tc.level  : 3
     */
    it('AbilityRuntime_OpenLink_1200', 0, (done: Function) => {
      let tag = `SUB_Ability_AbilityRuntime_ABILITY_StartAbility_OpenLink_1200`;
      console.log(`${tag}, it begin`);

      try {
        context.openLink('https://test', {
          appLinkingOnly: true
        }).then(() => {
          console.info(`#${tag}# open link successful`);
          expect().assertFail();
          done();
        }).catch((error: BusinessError) => {
          console.info(`#${tag}# open link err : ${error}`);
          expect(error.code).assertEqual(componentNotExistErrNo);
          done();
        })
      } catch (err) {
        console.info(`#${tag}# open fail : ${err}`);
        expect().assertFail();
        done();
      }
    });

    /*
     * @tc.number : SUB_Ability_AbilityRuntime_ABILITY_StartAbility_OpenLink_1600
     * @tc.name   : The input parameter 'link' is legal uri string and target app exist, appLinkingOnly is false, parameters configured
     * @tc.desc   : Call the openLink interface through context, open target app successfully
     * @tc.type   : Function
     * @tc.size   : MediumTest
     * @tc.level  : 3
     */
    it('AbilityRuntime_OpenLink_1600', 0, async (done: Function) => {
      let tag = `SUB_Ability_AbilityRuntime_ABILITY_StartAbility_OpenLink_1600`;
      console.log(`${tag}, it begin`);
      let event1 = 'AbilityRuntime_OpenLink_0400'
      let subscriberInfo: CommonEventManager.CommonEventSubscribeInfo = {
        events: [event1]
      }
      let subscriber: CommonEventManager.CommonEventSubscriber = await CommonEventManager.createSubscriber(subscriberInfo)
      console.info(`#${tag}# subscriber: ${JSON.stringify(subscriber)}`);
      CommonEventManager.subscribe(subscriber, (err, data) => {
        console.info(`#${tag}# subscriber callback: ${JSON.stringify(data)}`);
        if (data.event == event1) {
          console.log("parameters: " + JSON.stringify(data.parameters))
          expect(data.parameters?.appLinkingOnly).assertFalse()
          done()
        }
        CommonEventManager.unsubscribe(subscriber, (err, data) => {
          console.log("UnSubscribeInfoCallback : " + JSON.stringify(data));
        });
      })
      try {
        context.openLink(link, {
          appLinkingOnly: false,
          parameters: {
            demo_key: "demo_value", demo_num: 111, demo_obj: {
              key: "value"
            }
          }
        }).then(() => {
          console.info(`#${tag}# open link successful`);
        }).catch((error: BusinessError) => {
          console.info(`#${tag}# open link err : ${error}`);
          expect().assertFail();
          done();
        })
      } catch (err) {
        console.info(`#${tag}# open fail : ${err}`);
        expect().assertFail();
        done();
      }
    });

    /*
     * @tc.number : SUB_Ability_AbilityRuntime_ABILITY_StartAbility_OpenLink_1700
     * @tc.name   : The input parameter 'link' is legal uri string and target app exist, appLinkingOnly is false, parameters not configured
     * @tc.desc   : Call the openLink interface through context, open target app successfully
     * @tc.type   : Function
     * @tc.size   : MediumTest
     * @tc.level  : 3
     */
    it('AbilityRuntime_OpenLink_1700', 0, async (done: Function) => {
      let tag = `SUB_Ability_AbilityRuntime_ABILITY_StartAbility_OpenLink_1700`;
      console.log(`${tag}, it begin`);
      let event1 = 'AbilityRuntime_OpenLink_0400'
      let subscriberInfo: CommonEventManager.CommonEventSubscribeInfo = {
        events: [event1]
      }
      let subscriber: CommonEventManager.CommonEventSubscriber = await CommonEventManager.createSubscriber(subscriberInfo)
      console.info(`#${tag}# subscriber: ${JSON.stringify(subscriber)}`);
      CommonEventManager.subscribe(subscriber, (err, data) => {
        console.info(`#${tag}# subscriber callback: ${JSON.stringify(data)}`);
        if (data.event == event1) {
          console.log("parameters: " + JSON.stringify(data.parameters))
          expect(data.parameters?.appLinkingOnly).assertFalse()
          done()
        }
        CommonEventManager.unsubscribe(subscriber, (err, data) => {
          console.log("UnSubscribeInfoCallback : " + JSON.stringify(data));
        });
      })
      try {
        context.openLink(link, {
          appLinkingOnly: false
        }).then(() => {
          console.info(`#${tag}# open link successful`);
        }).catch((error: BusinessError) => {
          console.info(`#${tag}# open link err : ${error}`);
          expect().assertFail();
          done();
        })
      } catch (err) {
        console.info(`#${tag}# open fail : ${err}`);
        expect().assertFail();
        done();
      }
    });

    /*
     * @tc.number : SUB_Ability_AbilityRuntime_ABILITY_StartAbility_OpenLink_1800
     * @tc.name   : The input parameter 'link' is legal uri string and target app exist, appLinkingOnly not configured, parameters configured
     * @tc.desc   : Call the openLink interface through context, open target app successfully
     * @tc.type   : Function
     * @tc.size   : MediumTest
     * @tc.level  : 3
     */
    it('AbilityRuntime_OpenLink_1800', 0, async (done: Function) => {
      let tag = `SUB_Ability_AbilityRuntime_ABILITY_StartAbility_OpenLink_1800`;
      console.log(`${tag}, it begin`);
      let event1 = 'AbilityRuntime_OpenLink_0400'
      let subscriberInfo: CommonEventManager.CommonEventSubscribeInfo = {
        events: [event1]
      }
      let subscriber: CommonEventManager.CommonEventSubscriber = await CommonEventManager.createSubscriber(subscriberInfo)
      console.info(`#${tag}# subscriber: ${JSON.stringify(subscriber)}`);
      CommonEventManager.subscribe(subscriber, (err, data) => {
        console.info(`#${tag}# subscriber callback: ${JSON.stringify(data)}`);
        if (data.event == event1) {
          console.log("parameters: " + JSON.stringify(data.parameters))
          expect(data.parameters?.appLinkingOnly).assertFalse()
          done()
        }
        CommonEventManager.unsubscribe(subscriber, (err, data) => {
          console.log("UnSubscribeInfoCallback : " + JSON.stringify(data));
        });
      })
      try {
        context.openLink(link, {
          parameters: {
            demo_key: "demo_value", demo_num: 111, demo_obj: {
              key: "value"
            }
          }
        }).then(() => {
          console.info(`#${tag}# open link successful`);
          done();
        }).catch((error: BusinessError) => {
          console.info(`#${tag}# open link err : ${error}`);
          expect().assertFail();
          done();
        })
      } catch (err) {
        console.info(`#${tag}# open fail : ${err}`);
        expect().assertFail();
        done();
      }
    });
    /*
    * @tc.number : SUB_Ability_AbilityRuntime_ABILITY_StartAbility_OpenLink_1900
    * @tc.name   : The input parameter 'link' is legal uri string and target app exist, options is undefined
    * @tc.desc   : Call the openLink interface through context, open target app successfully
    * @tc.type   : Function
    * @tc.size   : MediumTest
    * @tc.level  : 3
    */
    it('AbilityRuntime_OpenLink_1900', 0, async (done: Function) => {
      let tag = `SUB_Ability_AbilityRuntime_ABILITY_StartAbility_OpenLink_1900`;
      console.log(`${tag}, it begin`);
      let event1 = 'AbilityRuntime_OpenLink_0400'
      let subscriberInfo: CommonEventManager.CommonEventSubscribeInfo = {
        events: [event1]
      }
      let subscriber: CommonEventManager.CommonEventSubscriber = await CommonEventManager.createSubscriber(subscriberInfo)
      console.info(`#${tag}# subscriber: ${JSON.stringify(subscriber)}`);
      CommonEventManager.subscribe(subscriber, (err, data) => {
        console.info(`#${tag}# subscriber callback: ${JSON.stringify(data)}`);
        if (data.event == event1) {
          console.log("parameters: " + JSON.stringify(data.parameters))
          expect(data.parameters?.appLinkingOnly).assertFalse()
          done()
        }
        CommonEventManager.unsubscribe(subscriber, (err, data) => {
          console.log("UnSubscribeInfoCallback : " + JSON.stringify(data));
        });
      })
      try {
        context.openLink(link, undefined).then(() => {
          console.info(`#${tag}# open link successful`);
        }).catch((error: BusinessError) => {
          console.info(`#${tag}# open link err : ${error}`);
          expect().assertFail();
          done();
        })
      } catch (err) {
        console.info(`#${tag}# open fail : ${err}`);
        expect().assertFail();
        done();
      }
    });

    /*
     * @tc.number : SUB_Ability_AbilityRuntime_ABILITY_StartAbility_OpenLink_2000
     * @tc.name   : The input parameter 'link' is legal uri string and target app exist, options is null
     * @tc.desc   : Call the openLink interface through context, open target app successfully
     * @tc.type   : Function
     * @tc.size   : MediumTest
     * @tc.level  : 3
     */
    it('AbilityRuntime_OpenLink_2000', 0, async (done: Function) => {
      let tag = `SUB_Ability_AbilityRuntime_ABILITY_StartAbility_OpenLink_2000`;
      console.log(`${tag}, it begin`);
      let event1 = 'AbilityRuntime_OpenLink_0400'
      let subscriberInfo: CommonEventManager.CommonEventSubscribeInfo = {
        events: [event1]
      }
      let subscriber: CommonEventManager.CommonEventSubscriber = await CommonEventManager.createSubscriber(subscriberInfo)
      console.info(`#${tag}# subscriber: ${JSON.stringify(subscriber)}`);
      CommonEventManager.subscribe(subscriber, (err, data) => {
        console.info(`#${tag}# subscriber callback: ${JSON.stringify(data)}`);
        if (data.event == event1) {
          console.log("parameters: " + JSON.stringify(data.parameters))
          expect(data.parameters?.appLinkingOnly).assertFalse()
          done()
        }
        CommonEventManager.unsubscribe(subscriber, (err, data) => {
          console.log("UnSubscribeInfoCallback : " + JSON.stringify(data));
        });
      })
      try {
        context.openLink(link, null).then(() => {
          console.info(`#${tag}# open link successful`);
        }).catch((error: BusinessError) => {
          console.info(`#${tag}# open link err : ${error}`);
          expect().assertFail();
          done();
        })
      } catch (err) {
        console.info(`#${tag}# open fail : ${err}`);
        expect().assertFail();
        done();
      }
    });

    /*
     * @tc.number : SUB_Ability_AbilityRuntime_ABILITY_StartAbility_OpenLink_3000
     * @tc.name   : startAbility with appLinkingOnly set to false
     * @tc.desc   : Call the startAbility interface with appLinkingOnly set to false, and check the result
     * @tc.type   : Function
     * @tc.size   : MediumTest
     * @tc.level  : 3
     */
    it('AbilityRuntime_OpenLink_3000', 0, async (done: Function) => {
      let tag = `SUB_Ability_AbilityRuntime_ABILITY_StartAbility_OpenLink_3000`;
      console.log(`${tag}, it begin`);
      let event1 = 'AbilityRuntime_OpenLink_0400'
      let subscriberInfo: CommonEventManager.CommonEventSubscribeInfo = {
        events: [event1]
      }
      let subscriber: CommonEventManager.CommonEventSubscriber = await CommonEventManager.createSubscriber(subscriberInfo)
      console.info(`#${tag}# subscriber: ${JSON.stringify(subscriber)}`);
      CommonEventManager.subscribe(subscriber, (err, data) => {
        console.info(`#${tag}# subscriber callback: ${JSON.stringify(data)}`);
        if (data.event == event1) {
          console.log("parameters: " + JSON.stringify(data.parameters))
          expect(data.parameters?.appLinkingOnly).assertFalse()
          expect(data.parameters?.demo_key).assertEqual("demo_value")
          expect(data.parameters?.demo_num).assertEqual(111)
          done()
        }
        CommonEventManager.unsubscribe(subscriber, (err, data) => {
          console.log("UnSubscribeInfoCallback : " + JSON.stringify(data));
        });
      })
      try {
        context.startAbility({
          uri: link,
          parameters: {
            appLinkingOnly: false, demo_key: "demo_value", demo_num: 111
          }
        }).then(() => {
          console.info(`#${tag}# start ability successful`);
        }).catch((error: BusinessError) => {
          console.info(`#${tag}# start ability err : ${error}`);
          expect().assertFail();
          done();
        })
      } catch (err) {
        console.info(`#${tag}# start fail : ${err}`);
        expect().assertFail();
        done();
      }
    });
  })
}

async function sleep(time: number) {
  return new Promise<void>((resolve, reject) => {
    setTimeout(resolve, time)
  });
}