/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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

import {describe, it, expect} from "deccjsunit/index"
import commonEvent from '@ohos.commonevent'

var eventSend = {
  events: ['MyApplication2_ServiceExtension_onCreate', 'MyApplication2_ServiceExtension_onRequest',
  'MyApplication2_ServiceExtension2_onCreate', 'MyApplication2_ServiceExtension2_onRequest',
  'MyApplication2_MainAbility_onForeground', 'MyApplication2_MainAbility_onCreate',
  'MyApplication2_MainAbility2_onCreate', 'MyApplication2_MainAbility2_onForeground',
  'MyApplication_MainAbility2_onCreate', 'MyApplication_MainAbility2_onForeground',
  'MyApplication_ServiceExtension2_onCreate', 'MyApplication_ServiceExtension2_onRequest',
  'MyApplication_ServiceExtension_onCreate', 'MyApplication_ServiceExtension_onRequest',
  'MyApplication_ServiceExtension2_onCreate', 'MyApplication_ServiceExtension2_onRequest'],
};
var eventReceive = {
  events: ['entry2_ServiceExtension_onCreate', 'entry2_ServiceExtension_onRequest', 'entry3_ServiceExtension_onCreate'
  , 'entry3_ServiceExtension_onRequest', 'entry2_ServiceExtension2_onCreate',
  'entry2_ServiceExtension2_onCreate', 'entry2_ServiceExtension2_onRequest', 'entry2_MainAbility_onCreate'
  , 'entry2_MainAbility_onForeground'],
};

var eventReceive2 = {
  events: ['entry_ServiceExtension8_onCreate', 'entry_ServiceExtension8_onRequest', 'entry_ServiceExtension10_onCreate'
  , 'entry_ServiceExtension10_onRequest', 'entry_ServiceExtension14_onCreate', 'entry_ServiceExtension14_onRequest',
  'entry_ServiceExtension12_onRequest'],
};
var START_ABILITY_TIMEOUT = 5000;
var Subscriber;
var Subscriber2;
var Subscriber3;

export default function ExtensionTest(abilityContext) {
  describe('ActsExtensionTest', function () {

    /**
         * @tc.number: SUB_AA_Extension_ServiceExtensionContext_0100
         * @tc.name: Check that context paths of different Ability in the same hap are the same.
         * @tc.desc: Check the ability context paths of the same hap are the same.
         * @tc.level   0
         */
    it('SUB_AA_Extension_ServiceExtensionContext_0100', 0, async function (done) {
      console.log("SUB_AA_Extension_ServiceExtensionContext_0100 --- start")
      abilityContext.startAbility({
        bundleName: "ohos.acts.aafwk.pldtest.myapplication",
        abilityName: "ohos.acts.aafwk.pldtest.myapplication.ServiceAbility"
      }, (error, data) => {
        console.log('SUB_AA_Extension_ServiceExtensionContext_0100 -- startAbility(ServiceAbility): '
        + JSON.stringify(error) + ", " + JSON.stringify(data))
      })
      checkLifecycleOfApplication2();
      done()
    })

    /**
         * @tc.number: SUB_AA_Extension_ServiceExtensionContext_0200
         * @tc.name:Check the ServiceExtension context paths of different Application.
         * @tc.desc: Check the ServiceExtension context paths of different Application
         * @tc.level   0
         */
    it('SUB_AA_Extension_ServiceExtensionContext_0200', 0, async function (done) {
      console.log("SUB_AA_Extension_ServiceExtensionContext_0200 --- start")
      abilityContext.startAbility({
        bundleName: "ohos.acts.aafwk.pldtest.myapplication",
        abilityName: "ohos.acts.aafwk.pldtest.myapplication.ServiceAbility2"
      }, (error, data) => {
        console.log('SUB_AA_Extension_ServiceExtensionContext_0200 -- startAbility(ServiceAbility): '
        + JSON.stringify(error) + ", " + JSON.stringify(data))
      })
      checkLifecycleOfApplication2();
      done()
    })

    /**
         * @tc.number: SUB_AA_Extension_ServiceExtensionContext_0300
         * @tc.name:Check the ServiceExtension context paths of different Application.
         * @tc.desc: Check the ServiceExtension context paths of different Application
         * @tc.level   0
         */
    it('SUB_AA_Extension_ServiceExtensionContext_0300', 0, async function (done) {
      console.log("SUB_AA_Extension_ServiceExtensionContext_0300 --- start")
      abilityContext.startAbility({
        bundleName: "ohos.acts.aafwk.pldtest.myapplication",
        abilityName: "ohos.acts.aafwk.pldtest.myapplication.ServiceAbility3"
      }, (error, data) => {
        console.log('SUB_AA_Extension_ServiceExtensionContext_0300 -- startAbility(ServiceAbility): '
        + JSON.stringify(error) + ", " + JSON.stringify(data))
      })
      setTimeout(function () {
        console.log("SUB_AA_Extension_ServiceExtensionContext_0300 ---globalThis.extensionContext "
        + globalThis.extensionContext)
        console.log('[MyApplication] SUB_AA_Extension_ServiceExtensionContext_0300 globalThis.lifecycleList'
        + JSON.stringify(globalThis.lifecycleList));
        var expectList = ['onCreate', 'onRequest'];
        checkServiceStart(expectList, globalThis.lifecycleList, 'MyApplication.MyServiceExtension3');
        console.log('SUB_AA_Extension_ServiceExtensionContext_0300 globalThis.extensionContext '
        + globalThis.extensionContext);
        globalThis.extensionContext.startAbility({
          bundleName: "ohos.acts.aufwk.pldtest.myapplication",
          abilityName: "ohos.acts.aufwk.pldtest.myapplication.MainAbility"
        }, (error, data) => {
          console.log('SUB_AA_Extension_ServiceExtensionContext_0300 -- startAbility(ServiceAbility): '
          + JSON.stringify(error) + ", " + JSON.stringify(data))
        })
      }, 4000);
      checkLifecycleOfApplication2()
      done()
    })

    /**
         * @tc.number: SUB_AA_Extension_ServiceExtensionContext_0400
         * @tc.name:Check the ServiceExtension context paths of different hap.
         * @tc.desc: Check the ServiceExtension context paths of different hap
         * @tc.level   0
         */
    it('SUB_AA_Extension_ServiceExtensionContext_0400', 0, async function (done) {
      console.log("SUB_AA_Extension_ServiceExtensionContext_0400 --- start")
      abilityContext.startAbility({
        bundleName: "ohos.acts.aafwk.pldtest.myapplication",
        abilityName: "ohos.acts.aafwk.pldtest.myapplication.ServiceAbility4"
      }, (error, data) => {
        console.log('SUB_AA_Extension_ServiceExtensionContext_0400 -- startAbility(ServiceAbility): '
        + JSON.stringify(error) + ", " + JSON.stringify(data))
      })
      setTimeout(function () {
        console.log('[MyApplication] SUB_AA_Extension_ServiceExtensionContext_0400 globalThis.lifecycleList '
        + JSON.stringify(globalThis.lifecycleList));
        var expectList = ['onCreate', 'onRequest'];
        checkServiceStart(expectList, globalThis.lifecycleList, 'MyApplication.MyServiceExtension4');
        console.log('SUB_AA_Extension_ServiceExtensionContext_0400 globalThis.extensionContext '
        + globalThis.extensionContext);
        globalThis.extensionContext.startAbility({
          bundleName: "ohos.acts.aafwk.pldtest.myapplication",
          abilityName: "com.example.entry2.ServiceAbility"
        }, (error, data) => {
          console.log('SUB_AA_Extension_ServiceExtensionContext_0400 -- startAbility(ServiceAbility): '
          + JSON.stringify(error) + ", " + JSON.stringify(data))
        })
      }, 4000);
      checkLifecycleOfEntry2()
      done()
    })

    /**
         * @tc.number: SUB_AA_Extension_ServiceExtensionContext_0500
         * @tc.name:Check the ServiceExtension context paths of different hap.
         * @tc.desc: Check the ServiceExtension context paths of different hap
         * @tc.level   0
         */
    it('SUB_AA_Extension_ServiceExtensionContext_0500', 0, async function (done) {
      console.log("SUB_AA_Extension_ServiceExtensionContext_0500 --- start")
      //启动本应用的服务
      abilityContext.startAbility({
        bundleName: "ohos.acts.aafwk.pldtest.myapplication",
        abilityName: "ohos.acts.aafwk.pldtest.myapplication.ServiceAbility5"
      }, (error, data) => {
        console.log('SUB_AA_Extension_ServiceExtensionContext_0500 -- startAbility(ServiceAbility): '
        + JSON.stringify(error) + ", " + JSON.stringify(data))
      })
      setTimeout(function () {
        console.log('[MyApplication] SUB_AA_Extension_ServiceExtensionContext_0500 globalThis.lifecycleList'
        + JSON.stringify(globalThis.lifecycleList));
        var expectList = ['onCreate', 'onRequest'];
        checkServiceStart(expectList, globalThis.lifecycleList, 'MyApplication.MyServiceExtension5');
        console.log('SUB_AA_Extension_ServiceExtensionContext_0500 globalThis.extensionContext '
        + globalThis.extensionContext);
        globalThis.extensionContext.startAbility({
          bundleName: "ohos.acts.aafwk.pldtest.myapplication",
          abilityName: "com.example.entry2.ServiceAbility2"
        }, (error, data) => {
          console.log('SUB_AA_Extension_ServiceExtensionContext_0500 -- startAbility(ServiceAbility): '
          + JSON.stringify(error) + ", " + JSON.stringify(data))
        })
      }, 4000);
      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "ohos.acts.aafwk.pldtest.myapplication",
          abilityName: "ohos.acts.aafwk.pldtest.myapplication.ServiceAbility5"
        }, (error, data) => {
          console.log('SUB_AA_Extension_ServiceExtensionContext_0500 === restartAbility(ServiceAbility): '
          + JSON.stringify(error) + ", " + JSON.stringify(data))
        })
        setTimeout(function () {
          console.log('SUB_AA_Extension_ServiceExtensionContext_0500 globalThis.extensionContext2 '
          + globalThis.extensionContext);
          globalThis.extensionContext.startAbility({
            bundleName: "ohos.acts.aafwk.pldtest.myapplication",
            abilityName: "com.example.entry2.ServiceAbility2"
          }, (error, data) => {
            console.log('SUB_AA_Extension_ServiceExtensionContext_0500 -- restartAbility(ServiceAbility): '
            + JSON.stringify(error) + ", " + JSON.stringify(data))
          })
        }, 1000)
      }, 2000);
      checkLifecycleOfEntry2()
      done()
    })

    /**
         * @tc.number: SUB_AA_Extension_ServiceExtensionContext_0600
         * @tc.name:Check the ServiceExtension context paths of different hap.
         * @tc.desc: Check the ServiceExtension context paths of different hap
         * @tc.level   0
         */
    it('SUB_AA_Extension_ServiceExtensionContext_0600', 0, async function (done) {
      console.log("SUB_AA_Extension_ServiceExtensionContext_0600 --- start")
      abilityContext.startAbility({
        bundleName: "ohos.acts.aafwk.pldtest.myapplication",
        abilityName: "ohos.acts.aafwk.pldtest.myapplication.ServiceAbility6"
      }, (error, data) => {
        console.log('SUB_AA_Extension_ServiceExtensionContext_0600 -- startAbility(ServiceAbility): '
        + JSON.stringify(error) + ", " + JSON.stringify(data))
      })
      setTimeout(function () {
        console.log("SUB_AA_Extension_ServiceExtensionContext_0600 ---globalThis.extensionContext "
        + globalThis.extensionContext)
        console.log('[MyApplication] SUB_AA_Extension_ServiceExtensionContext_0600 globalThis.lifecycleList'
        + JSON.stringify(globalThis.lifecycleList));
        var expectList = ['onCreate', 'onRequest'];
        checkServiceStart(expectList, globalThis.lifecycleList, 'MyApplication.MyServiceExtension6');
        done()
        console.log('SUB_AA_Extension_ServiceExtensionContext_0600 globalThis.extensionContext '
        + globalThis.extensionContext);
        globalThis.extensionContext.startAbility({
          bundleName: "ohos.acts.aafwk.pldtest.myapplication",
          abilityName: "com.example.entry2.MainAbility"
        }, (error, data) => {
          console.log('SUB_AA_Extension_ServiceExtensionContext_0600 -- startAbility(MainAbility): '
          + JSON.stringify(error) + ", " + JSON.stringify(data))
        })
      }, 4000);
      checkLifecycleOfEntry2()
      done()
    })

    /**
         * @tc.number: SUB_AA_Extension_ServiceExtensionContext_0700
         * @tc.name:Check the ServiceExtension context paths of same hap.
         * @tc.desc: Check the ServiceExtension context paths of same hap
         * @tc.level   0
         */
    it('SUB_AA_Extension_ServiceExtensionContext_0700', 0, async function (done) {
      console.log("SUB_AA_Extension_ServiceExtensionContext_0700 --- start")
      //启动本应用的服务
      abilityContext.startAbility({
        bundleName: "ohos.acts.aafwk.pldtest.myapplication",
        abilityName: "ohos.acts.aafwk.pldtest.myapplication.ServiceAbility13"
      }, (error, data) => {
        console.log('SUB_AA_Extension_ServiceExtensionContext_0700 -- startAbility(ServiceAbility): '
        + JSON.stringify(error) + ", " + JSON.stringify(data))
      })
      setTimeout(function () {
        console.log("SUB_AA_Extension_ServiceExtensionContext_0700 ---globalThis.extensionContext2 "
        + globalThis.extensionContext2)
        console.log('[MyApplication] SUB_AA_Extension_ServiceExtensionContext_0700 globalThis.lifecycleList2'
        + JSON.stringify(globalThis.lifecycleList2));
        var expectList = ['onCreate', 'onRequest'];
        checkServiceStart(expectList, globalThis.lifecycleList2, 'MyApplication.MyServiceExtension13');
        console.log('SUB_AA_Extension_ServiceExtensionContext_0700 globalThis.extensionContext '
        + globalThis.extensionContext);
        globalThis.extensionContext.startAbility({
          bundleName: "ohos.acts.aafwk.pldtest.myapplication",
          abilityName: "ohos.acts.aafwk.pldtest.myapplication.ServiceAbility14"
        }, (error, data) => {
          console.log('SUB_AA_Extension_ServiceExtensionContext_0700 -- startAbility(MainAbility): '
          + JSON.stringify(error) + ", " + JSON.stringify(data))
        })
      }, 4000);
      checkLifecycleOfEntry()
      done()
    })

    /**
         * @tc.number: SUB_AA_Extension_ServiceExtensionContext_0800
         * @tc.name:Check the ServiceExtension context paths of same hap.
         * @tc.desc: Check the ServiceExtension context paths of same hap
         * @tc.level   0
         */
    it('SUB_AA_Extension_ServiceExtensionContext_0800', 0, async function (done) {
      console.log("SUB_AA_Extension_ServiceExtensionContext_0800 --- start")
      abilityContext.startAbility({
        bundleName: "ohos.acts.aafwk.pldtest.myapplication",
        abilityName: "ohos.acts.aafwk.pldtest.myapplication.ServiceAbility7"
      }, (error, data) => {
        console.log('SUB_AA_Extension_ServiceExtensionContext_0800 -- startAbility(ServiceAbility): '
        + JSON.stringify(error) + ", " + JSON.stringify(data))
      })
      setTimeout(function () {
        console.log("SUB_AA_Extension_ServiceExtensionContext_0800 ---globalThis.extensionContext "
        + globalThis.extensionContext)
        console.log('[MyApplication] SUB_AA_Extension_ServiceExtensionContext_0800 globalThis.lifecycleList'
        + JSON.stringify(globalThis.lifecycleList));
        var expectList = ['onCreate', 'onRequest'];
        checkServiceStart(expectList, globalThis.lifecycleList, 'MyApplication.MyServiceExtension7');
        console.log('SUB_AA_Extension_ServiceExtensionContext_0800 globalThis.extensionContext '
        + globalThis.extensionContext);
        abilityContext.startAbility({
          bundleName: "ohos.acts.aafwk.pldtest.myapplication",
          abilityName: "ohos.acts.aafwk.pldtest.myapplication.ServiceAbility9"
        }, (error, data) => {
          console.log('SUB_AA_Extension_ServiceExtensionContext_0800 -- startAbility(ServiceAbility): '
          + JSON.stringify(error) + ", " + JSON.stringify(data))
        })
        setTimeout(function () {
          abilityContext.startAbility({
            bundleName: "ohos.acts.aafwk.pldtest.myapplication",
            abilityName: "ohos.acts.aafwk.pldtest.myapplication.ServiceAbility7"
          }, (error, data) => {
            console.log('SUB_AA_Extension_ServiceExtensionContext_0800 -- restartAbility(ServiceAbility): '
            + JSON.stringify(error) + ", " + JSON.stringify(data))
          })
          console.log("SUB_AA_Extension_ServiceExtensionContext_0800 ---globalThis.extensionContext2 "
          + globalThis.extensionContext)
          globalThis.extensionContext.startAbility({
            bundleName: "ohos.acts.aafwk.pldtest.myapplication",
            abilityName: "ohos.acts.aafwk.pldtest.myapplication.ServiceAbility9"
          }, (error, data) => {
            console.log('SUB_AA_Extension_ServiceExtensionContext_0800 -- restartAbility(ServiceAbility): '
            + JSON.stringify(error) + ", " + JSON.stringify(data))
          })
          expect(globalThis.startId == 2).assertTrue()

        }, 1000)

      }, 3000);
      checkLifecycleOfEntry()
      done()
    })

    /**
         * @tc.number: SUB_AA_Extension_ServiceExtensionContext_0900
         * @tc.name:Check the ServiceExtension context paths of same hap.
         * @tc.desc: Check the ServiceExtension context paths of same hap
         * @tc.level   0
         */
    it('SUB_AA_Extension_ServiceExtensionContext_0900', 0, async function (done) {
      console.log("SUB_AA_Extension_ServiceExtensionContext_0900 --- start")
      //启动本应用的服务
      abilityContext.startAbility({
        bundleName: "ohos.acts.aafwk.pldtest.myapplication",
        abilityName: "ohos.acts.aafwk.pldtest.myapplication.ServiceAbility10"
      }, (error, data) => {
        console.log('SUB_AA_Extension_ServiceExtensionContext_0900 -- startAbility(ServiceAbility): '
        + JSON.stringify(error) + ", " + JSON.stringify(data))
      })
      setTimeout(function () {
        console.log("SUB_AA_Extension_ServiceExtensionContext_0900 ---globalThis.extensionContext "
        + globalThis.extensionContext)
        console.log('[MyApplication] SUB_AA_Extension_ServiceExtensionContext_0900 globalThis.lifecycleList2'
        + JSON.stringify(globalThis.lifecycleList2));
        var expectList = ['onCreate', 'onRequest'];
        checkServiceStart(expectList, globalThis.lifecycleList2, 'MyApplication.MyServiceExtension10');
        //发布事件通知应用2发送收集的生命周期给本应用
        globalThis.extensionContext.startAbility({
          bundleName: "ohos.acts.aafwk.pldtest.myapplication",
          abilityName: "ohos.acts.aafwk.pldtest.myapplication.MainAbility2"
        }, (error, data) => {
          console.log('SUB_AA_Extension_ServiceExtensionContext_0900 -- startAbility(MainAbility2): '
          + JSON.stringify(error) + ", " + JSON.stringify(data))
        })
      }, 3000);
      checkLifecycleOfApplication2()
      done()
    })

    /**
         * @tc.number: SUB_AA_Extension_ServiceExtensionContext_1000
         * @tc.name:Check the ServiceExtension context paths of different Application and same hap.
         * @tc.desc: Check the ServiceExtension context paths of different Application and same hap
         * @tc.level   0
         */
    it('SUB_AA_Extension_ServiceExtensionContext_1000', 0, async function (done) {
      console.log("SUB_AA_Extension_ServiceExtensionContext_1000 --- start")
      abilityContext.startAbility({
        bundleName: "ohos.acts.aafwk.pldtest.myapplication",
        abilityName: "ohos.acts.aafwk.pldtest.myapplication.ServiceAbility11"
      }, (error, data) => {
        console.log('SUB_AA_Extension_ServiceExtensionContext_1000 -- startAbility(ServiceAbility): '
        + JSON.stringify(error) + ", " + JSON.stringify(data))
      })
      setTimeout(function () {
        console.log("SUB_AA_Extension_ServiceExtensionContext_1000 ---globalThis.extensionContext "
        + globalThis.extensionContext)
        console.log('[MyApplication] SUB_AA_Extension_ServiceExtensionContext_1000 globalThis.lifecycleList2'
        + JSON.stringify(globalThis.lifecycleList2));
        var expectList = ['onCreate', 'onRequest'];
        checkServiceStart(expectList, globalThis.lifecycleList2, 'MyApplication.MyServiceExtension11');
        console.log('SUB_AA_Extension_ServiceExtensionContext_1000 globalThis.extensionContext '
        + globalThis.extensionContext);
        globalThis.extensionContext.startAbility({
          bundleName: "ohos.acts.aafwk.pldtest.myapplication",
          abilityName: "ohos.acts.aafwk.pldtest.myapplication.ServiceAbility12"
        }, (error, data) => {
          console.log('SUB_AA_Extension_ServiceExtensionContext_1000 -- startAbility(ServiceAbility2): '
          + JSON.stringify(error) + ", " + JSON.stringify(data))
        })
      }, 2000);
      setTimeout(function () {
        var expectList = ['onCreate', 'onRequest'];
        checkServiceStart(expectList, globalThis.lifecycleList2, 'MyApplication.MyServiceExtension12');
        abilityContext.startAbility({
          bundleName: "ohos.acts.aufwk.pldtest.myapplication",
          abilityName: "ohos.acts.aufwk.pldtest.myapplication.MainAbility2"
        }, (error, data) => {
          console.log('SUB_AA_Extension_ServiceExtensionContext_1000 -- startAbility(MainAbility2): '
          + JSON.stringify(error) + ", " + JSON.stringify(data))
        })
        expect(globalThis.startId == 2).assertTrue()
      }, 2000)
      checkLifecycleOfEntry()
      setTimeout(function () {
        commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
        commonEvent.unsubscribe(Subscriber2, UnSubscribeCallback);
        commonEvent.unsubscribe(Subscriber3, UnSubscribeCallback);
      }, 10000 * 5);
      done()
    })

    function checkLifecycleOfApplication2() {
      let id;
      commonEvent.createSubscriber(eventSend).then(async (data) => {
        console.debug("SUB_AA_Extension_ServiceExtensionContext====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })

      function SubscribeCallBack(err, data) {
        console.debug("SUB_AA_Extension_ServiceExtensionContext====>Subscribe CallBack data:====>"
        + JSON.stringify(data));
        var evenList = eventSend.events;
        console.log('SUB_AA_Extension_ServiceExtensionContext====> evenList.indexOf(data.event) '
        + evenList.indexOf(data.event));
        expect(evenList.indexOf(data.event) != -1).assertTrue();

        clearTimeout(id);
      }

      function timeout() {
        expect().assertFail();
        console.debug('SUB_AA_Extension_ServiceExtensionContext - timeout');
        commonEvent.unsubscribe(Subscriber, UnSubscribeCallback)
      }

      id = setTimeout(timeout, START_ABILITY_TIMEOUT);

    }

    function UnSubscribeCallback() {
      console.debug("SUB_AA_Extension_ServiceExtensionContext====>UnSubscribe CallBack====>");
    }

    function checkLifecycleOfEntry() {
      let id;
      commonEvent.createSubscriber(eventReceive2).then(async (data) => {
        console.debug("SUB_AA_Extension_ServiceExtensionContext  Entry ====>Create Subscriber ====>");
        Subscriber2 = data;
        await commonEvent.subscribe(Subscriber2, SubscribeCallBack);
      })

      function SubscribeCallBack(err, data) {
        console.debug("SUB_AA_Extension_ServiceExtensionContext Entry ====>Subscribe CallBack data: ====>"
        + JSON.stringify(data));
        var evenList = eventSend.events;
        console.log('SUB_AA_Extension_ServiceExtensionContext Entry ====> evenList.indexOf(data.event) '
        + evenList.indexOf(data.event));
        expect(evenList.indexOf(data.event) != -1).assertTrue();
        clearTimeout(id);
      }

      function timeout() {
        expect().assertFail();
        console.debug('SUB_AA_Extension_ServiceExtensionContext Entry - timeout');

      }

      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
    }

    function checkLifecycleOfEntry2() {
      let id;
      commonEvent.createSubscriber(eventReceive).then(async (data) => {
        console.debug("SUB_AA_Extension_ServiceExtensionContext  Entry2 ====>Create Subscriber ====>");
        Subscriber3 = data;
        await commonEvent.subscribe(Subscriber3, SubscribeCallBack);
      })

      function SubscribeCallBack(err, data) {
        console.debug("SUB_AA_Extension_ServiceExtensionContext Entry2 ====>Subscribe CallBack data: ====>"
        + JSON.stringify(data));
        var evenList = eventSend.events;
        console.log('SUB_AA_Extension_ServiceExtensionContext Entry2 ====> evenList.indexOf(data.event) '
        + evenList.indexOf(data.event));
        expect(evenList.indexOf(data.event) != -1).assertTrue();
        clearTimeout(id);
      }

      function timeout() {
        expect().assertFail();
        console.debug('SUB_AA_Extension_ServiceExtensionContext Entry2 - timeout');
        commonEvent.unsubscribe(Subscriber, UnSubscribeCallback)
      }

      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
    }

    function checkServiceStart(expectList, lifecycleList, key) {
      let lifeList = getLog(lifecycleList, key);
      console.log('[MyApplication] lifeList[]' + JSON.stringify(lifeList))
      if (expectList.length == lifeList.length) {
        for (var i = 0;i < lifeList.length; i++) {
          console.log('[MyApplication] lifeList[i] expectList[i] :' + lifeList[i] + " " + expectList[i]);
          expect(expectList[i]).assertEqual(lifeList[i]);
        }
      }

    }

    function getLog(lifecycleList, key) {
      var listOfKey = [];
      for (var i = 0;i < lifecycleList.length; i++) {
        var callback = lifecycleList[i];
        console.log('[MyApplication] lifecycleList.callback :' + JSON.stringify(callback));
        if (callback[0] == key) {
          listOfKey.push(callback[1])
        }
      }
      return listOfKey;
    }
  })
}