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
import hilog from '@ohos.hilog';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import queryExtension from '@ohos.bundle.bundleManager';
import commonEvent from '@ohos.commonEventManager';

let ACTS_CallFunction = {
  events: ['ACTS_CALL_EVENT']
};

const GET_EXTENSION_ABILITY_INFO_DEFAULT = 0;
const GET_EXTENSION_ABILITY_INFO_WITH_PERMISSION = 1;
const GET_EXTENSION_ABILITY_INFO_WITH_APPLICATION = 2;
const GET_EXTENSION_ABILITY_INFO_WITH_METADATA = 4;
const ERROR_ABILITY_NOT_EXIST = 17700003;
const ERROR_PARAM_CHECK_ERROR = 401;
const ERROR_INVALID_USER_ID = 17700004;
const ERROR_BUNDLE_NOT_EXIST = 17700001;
const ERROR_NOT_SYSTEM_APP = 202;
const ERROR_PERMISSION_DENIED_ERROR = 201;

export default function abilityTest() {
  describe('ActsAbilityTest', function () {
    beforeAll(function () {
    })
    beforeEach(function () {
    })
    afterEach(function () {
    })
    afterAll(function () {
    })

    it('Acts_QueryExtensionAbilityInfos_0200', 0, function (done) {
      console.info(`====>Acts_QueryExtensionAbilityInfos_0200 begin`);

      let clear = setTimeout(() => {
        expect().assertFail();
      }, 5000);

      try {
        let want = {
          bundleName: 'com.example.queryextensionabilityinfowithtypenamerelyxxx',
          abilityName: 'ActsShareExtensionAbility',
          moduleName: 'entry'
        };
        let data = queryExtension.queryExtensionAbilityInfoSync(want, 'share',
          GET_EXTENSION_ABILITY_INFO_DEFAULT, 100);
        console.info("====> queryExtensionAbilityInfo ok" + JSON.stringify(data));
      } catch (err) {
        console.info("catch queryExtensionAbilityInfo ng" + JSON.stringify(err));
        expect(err).assertContain(ERROR_BUNDLE_NOT_EXIST);
        clearTimeout(clear);
        done();
      }
    })

    it('Acts_QueryExtensionAbilityInfos_0300', 0, function (done) {
      console.info(`====>Acts_QueryExtensionAbilityInfos_0300 begin`);

      let clear = setTimeout(() => {
        expect().assertFail();
      }, 5000);

      try {
        let want = {
          bundleName: 'com.example.queryextensionabilityinfowithtypenamerely',
          abilityName: 'ActsShareExtensionAbility',
          moduleName: 'entryxxx'
        };
        let data = queryExtension.queryExtensionAbilityInfoSync(want, 'share',
          GET_EXTENSION_ABILITY_INFO_DEFAULT, 100);
        console.info("====> queryExtensionAbilityInfo ok" + JSON.stringify(data));
      } catch (err) {
        console.info("catch queryExtensionAbilityInfo ng" + JSON.stringify(err));
        expect(err).assertContain(ERROR_ABILITY_NOT_EXIST);
        clearTimeout(clear);
        done();
      }
    })

    it('Acts_QueryExtensionAbilityInfos_0400', 0, function (done) {
      console.info(`====>Acts_QueryExtensionAbilityInfos_0400 begin`);

      let clear = setTimeout(() => {
        expect().assertFail();
      }, 5000);

      try {
        let want = {
          bundleName: 'com.example.queryextensionabilityinfowithtypenamerely',
          abilityName: 'ActsShareExtensionAbility',
          moduleName: 'entry'
        };
        let data = queryExtension.queryExtensionAbilityInfoSync(want, 'sharexxx',
          GET_EXTENSION_ABILITY_INFO_DEFAULT, 100);
        console.info("====> queryExtensionAbilityInfo ok" + JSON.stringify(data));
      } catch (err) {
        console.info("catch queryExtensionAbilityInfo ng" + JSON.stringify(err));
        expect(err).assertContain(ERROR_ABILITY_NOT_EXIST);
        clearTimeout(clear);
        done();
      }
    })

    it('Acts_QueryExtensionAbilityInfos_0500', 0, function (done) {
      console.info(`====>Acts_QueryExtensionAbilityInfos_0500 begin`);

      let clear = setTimeout(() => {
        expect().assertFail();
      }, 5000);

      try {
        let data = queryExtension.queryExtensionAbilityInfoSync(undefined, 'share',
          GET_EXTENSION_ABILITY_INFO_DEFAULT, 100);
        console.info("====> queryExtensionAbilityInfo ok" + JSON.stringify(data));
      } catch (err) {
        console.info("catch queryExtensionAbilityInfo ng" + JSON.stringify(err));
        expect(err).assertContain(ERROR_PARAM_CHECK_ERROR);
        clearTimeout(clear);
        done();
      }
    })

    it('Acts_QueryExtensionAbilityInfos_0600', 0, function (done) {
      console.info(`====>Acts_QueryExtensionAbilityInfos_0600 begin`);

      let clear = setTimeout(() => {
        expect().assertFail();
      }, 5000);

      try {
        let want = {
          bundleName: 'com.example.queryextensionabilityinfowithtypenamerely',
          abilityName: 'ActsShareExtensionAbility',
          moduleName: 'entry'
        };
        let data = queryExtension.queryExtensionAbilityInfoSync(want, undefined,
          GET_EXTENSION_ABILITY_INFO_DEFAULT, 100);
        console.info("====> queryExtensionAbilityInfo ok" + JSON.stringify(data));
      } catch (err) {
        console.info("catch queryExtensionAbilityInfo ng" + JSON.stringify(err));
        expect(err).assertContain(ERROR_PARAM_CHECK_ERROR);
        clearTimeout(clear);
        done();
      }
    })

    it('Acts_QueryExtensionAbilityInfos_0700', 0, function (done) {
      console.info(`====>Acts_QueryExtensionAbilityInfos_0700 begin`);

      let clear = setTimeout(() => {
        expect().assertFail();
      }, 5000);

      try {
        let want = {
          bundleName: 'com.example.queryextensionabilityinfowithtypenamerely',
          abilityName: 'ActsShareExtensionAbility',
          moduleName: 'entry'
        };
        console.info(`====>Acts_QueryExtensionAbilityInfos_0700 try`);
        let data = queryExtension.queryExtensionAbilityInfoSync(want, 'share',
          GET_EXTENSION_ABILITY_INFO_DEFAULT, 100);
        console.info("====> queryExtensionAbilityInfo ok" + JSON.stringify(data));
        expect(JSON.stringify(data)).assertContain('"extensionAbilityTypeName":"share"');
        clearTimeout(clear);
        done()
      } catch (err) {
        console.info("catch queryExtensionAbilityInfo ng" + JSON.stringify(err));
        expect().assertFail();
      }
    })

    it('Acts_QueryExtensionAbilityInfos_0800', 0, function (done) {
      console.info(`====>Acts_QueryExtensionAbilityInfos_0800 begin`);

      let clear = setTimeout(() => {
        expect().assertFail();
      }, 5000);

      try {
        let want = {
          bundleName: 'com.example.queryextensionabilityinfowithtypenamerely',
          abilityName: 'ActsShareExtensionAbility',
          moduleName: 'entry'
        };
        let data = queryExtension.queryExtensionAbilityInfoSync(want, 'share', undefined, 100);
        console.info("====> queryExtensionAbilityInfo ok" + JSON.stringify(data));
      } catch (err) {
        console.info("catch queryExtensionAbilityInfo ng" + JSON.stringify(err));
        expect(err).assertContain(ERROR_PARAM_CHECK_ERROR);
        clearTimeout(clear);
        done();
      }
    })

    it('Acts_QueryExtensionAbilityInfos_0900', 0, function (done) {
      console.info(`====>Acts_QueryExtensionAbilityInfos_0900 begin`);

      let clear = setTimeout(() => {
        expect().assertFail();
      }, 5000);

      try {
        let want = {
          bundleName: 'com.example.queryextensionabilityinfowithtypenamerely',
          abilityName: 'ActsShareExtensionAbility',
          moduleName: 'entry'
        };
        let data = queryExtension.queryExtensionAbilityInfoSync(want, 'share',
          GET_EXTENSION_ABILITY_INFO_DEFAULT, -1);
        console.info("====> queryExtensionAbilityInfo ok" + JSON.stringify(data));
      } catch (err) {
        console.info("catch queryExtensionAbilityInfo ng" + JSON.stringify(err));
        expect(err).assertContain(ERROR_INVALID_USER_ID);
        clearTimeout(clear);
        done();
      }
    })

    it('Acts_QueryExtensionAbilityInfos_1100', 0, function (done) {
      console.info(`====>Acts_QueryExtensionAbilityInfos_1100 begin`);

      let clear = setTimeout(() => {
        expect().assertFail();
      }, 5000);

      try {
        let want = {
          bundleName: 'com.example.queryextensionabilityinfowithtypenamerely',
          abilityName: 'ActsShareExtensionAbility',
          moduleName: 'entry'
        };
        let data = queryExtension.queryExtensionAbilityInfoSync(want, '', GET_EXTENSION_ABILITY_INFO_DEFAULT, 100);
        console.info("====> queryExtensionAbilityInfo ok" + JSON.stringify(data));
        expect(JSON.stringify(data)).assertContain('"extensionAbilityTypeName":"share"');
        clearTimeout(clear);
        done();
      } catch (err) {
        console.info("catch queryExtensionAbilityInfo ng" + JSON.stringify(err));
        expect().assertFail();
      }
    })

    it('Acts_QueryExtensionAbilityInfos_1400', 0, function (done) {
      console.info(`====>Acts_QueryExtensionAbilityInfos_1400 begin`);

      let clear = setTimeout(() => {
        expect().assertFail();
      }, 5000);

      try {
        let want = {
          type: "application/pdf",
          action: "ohos.want.action.viewDataxxx"
        };
        let data = queryExtension.queryExtensionAbilityInfoSync(want, 'custom',
          GET_EXTENSION_ABILITY_INFO_DEFAULT, 100);
        console.info("====> queryExtensionAbilityInfo ok" + JSON.stringify(data));
      } catch (err) {
        console.info("catch queryExtensionAbilityInfo ng" + JSON.stringify(err));
        expect(err).assertContain(ERROR_ABILITY_NOT_EXIST);
        clearTimeout(clear);
        done();
      }
    })

    it('Acts_QueryExtensionAbilityInfos_1500', 0, function (done) {
      console.info(`====>Acts_QueryExtensionAbilityInfos_1500 begin`);

      let clear = setTimeout(() => {
        expect().assertFail();
      }, 5000);

      try {
        let want = {
          type: "application/pdf",
          action: "ohos.want.action.viewData"
        };
        let data = queryExtension.queryExtensionAbilityInfoSync(want, 'sharexxx',
          GET_EXTENSION_ABILITY_INFO_DEFAULT, 100);
        console.info("====> queryExtensionAbilityInfo ok" + JSON.stringify(data));
      } catch (err) {
        console.info("catch queryExtensionAbilityInfo ng" + JSON.stringify(err));
        expect(err).assertContain(ERROR_ABILITY_NOT_EXIST);
        clearTimeout(clear);
        done();
      }
    })

    it('Acts_QueryExtensionAbilityInfos_1600', 0, function (done) {
      console.info(`====>Acts_QueryExtensionAbilityInfos_1600 begin`);

      let clear = setTimeout(() => {
        expect().assertFail();
      }, 5000);

      try {
        let want = {
          bundleName: 'com.example.queryextensionabilityinfowithtypenamerely',
          abilityName: 'ActsShareExtensionAbility',
          moduleName: 'entry'
        };
        let data = queryExtension.queryExtensionAbilityInfoSync(want, 'share',
          GET_EXTENSION_ABILITY_INFO_WITH_PERMISSION, 100);
        console.info("====> queryExtensionAbilityInfo ok" + JSON.stringify(data));
        expect(JSON.stringify(data)).assertContain('"extensionAbilityTypeName":"share"');
        clearTimeout(clear);
        done();
      } catch (err) {
        console.info("catch queryExtensionAbilityInfo ng" + JSON.stringify(err));
        expect().assertFail();
      }
    })

    it('Acts_QueryExtensionAbilityInfos_1700', 0, function (done) {
      console.info(`====>Acts_QueryExtensionAbilityInfos_1700 begin`);

      let clear = setTimeout(() => {
        expect().assertFail();
      }, 5000);

      try {
        let want = {
          bundleName: 'com.example.queryextensionabilityinfowithtypenamerely',
          abilityName: 'ActsShareExtensionAbility',
          moduleName: 'entry'
        };
        let data = queryExtension.queryExtensionAbilityInfoSync(want, 'share',
          GET_EXTENSION_ABILITY_INFO_WITH_APPLICATION, 100);
        console.info("====> queryExtensionAbilityInfo ok" + JSON.stringify(data));
        expect(JSON.stringify(data)).assertContain('"extensionAbilityTypeName":"share"');
        clearTimeout(clear);
        done();
      } catch (err) {
        console.info("catch queryExtensionAbilityInfo ng" + JSON.stringify(err));
        expect().assertFail();
      }
    })

    it('Acts_QueryExtensionAbilityInfos_1800', 0, function (done) {
      console.info(`====>Acts_QueryExtensionAbilityInfos_1800 begin`);

      let clear = setTimeout(() => {
        expect().assertFail();
      }, 5000);

      try {
        let want = {
          bundleName: 'com.example.queryextensionabilityinfowithtypenamerely',
          abilityName: 'ActsShareExtensionAbility',
          moduleName: 'entry'
        };
        let data = queryExtension.queryExtensionAbilityInfoSync(want, 'share',
          GET_EXTENSION_ABILITY_INFO_WITH_METADATA, 100);
        console.info("====> queryExtensionAbilityInfo ok" + JSON.stringify(data));
        expect(JSON.stringify(data)).assertContain('"extensionAbilityTypeName":"share"');
        clearTimeout(clear);
        done();
      } catch (err) {
        console.info("catch queryExtensionAbilityInfo ng" + JSON.stringify(err));
        expect().assertFail();
      }
    })

    it('Acts_QueryExtensionAbilityInfos_1900', 0, function (done) {
      console.info(`====>Acts_QueryExtensionAbilityInfos_1900 begin`);

      let clear = setTimeout(() => {
        expect().assertFail();
        commonEvent.unsubscribe(subscriber, unSubscribeCallback);
      }, 5000);

      let subscriber;
      commonEvent.createSubscriber(ACTS_CallFunction).then(async (data) => {
        console.info(`====>Acts_QueryExtensionAbilityInfos_1900 createSubscriber  ${data}`);
        subscriber = data;
        commonEvent.subscribe(data, subscribeCallBack);
        globalThis.context.startAbility({
          bundleName: 'com.example.queryextensionabilityinfowithtypenamerely',
          abilityName: 'EntryAbility',
          action: 'Acts_QueryExtensionAbilityInfos_1900'
        }, (err) => {
          console.info('====> Acts_QueryExtensionAbilityInfos_1900 startAbility err:' + JSON.stringify(err));
        });
      })

      function subscribeCallBack(err, data) {
        if (data.event == 'ACTS_CALL_EVENT') {
          console.info(`====>Acts_QueryExtensionAbilityInfos_1900 subscribeCallBack 'ACTS_CALL_EVENT_CLOSE'  ${data}`)
          expect(data.parameters.num).assertEqual(ERROR_NOT_SYSTEM_APP);
          clearTimeout(clear);
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      }

      function unSubscribeCallback() {
        console.info(`====>Acts_QueryExtensionAbilityInfos_1900 unSubscribeCallback`);
        done();
      }

    })

    it('Acts_QueryExtensionAbilityInfos_2000', 0, function (done) {
      console.info(`====>Acts_QueryExtensionAbilityInfos_2000 begin`);

      let clear = setTimeout(() => {
        expect().assertFail();
        commonEvent.unsubscribe(subscriber, unSubscribeCallback);
      }, 5000);

      let subscriber;
      commonEvent.createSubscriber(ACTS_CallFunction).then(async (data) => {
        console.info(`====>Acts_QueryExtensionAbilityInfos_2000 createSubscriber  ${data}`);
        subscriber = data;
        commonEvent.subscribe(data, subscribeCallBack);
        globalThis.context.startAbility({
          bundleName: 'com.example.queryextensiontestnopermission',
          abilityName: 'EntryAbility',
          action: 'Acts_QueryExtensionAbilityInfos_2000'
        }, (err) => {
          console.info('====> Acts_QueryExtensionAbilityInfos_2000 startAbility err:' + JSON.stringify(err));
        });
      })

      function subscribeCallBack(err, data) {
        if (data.event == 'ACTS_CALL_EVENT') {
          console.info(`====>Acts_QueryExtensionAbilityInfos_2000 subscribeCallBack 'ACTS_CALL_EVENT_CLOSE'  ${data}`)
          expect(data.parameters.num).assertEqual(ERROR_PERMISSION_DENIED_ERROR);
          clearTimeout(clear);
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      }

      function unSubscribeCallback() {
        console.info(`====>Acts_QueryExtensionAbilityInfos_2000 unSubscribeCallback`);
        done();
      }

    })

    it('Acts_QueryExtensionAbilityInfos_2100', 0, function (done) {
      console.info(`====>Acts_QueryExtensionAbilityInfos_2100 begin`);

      let clear = setTimeout(() => {
        expect().assertFail();
      }, 5000);

      try {
        let want = {
          type: "application/pdf",
          action: "ohos.want.action.viewData"
        };
        let data = queryExtension.queryExtensionAbilityInfoSync(want, undefined,
          GET_EXTENSION_ABILITY_INFO_DEFAULT, 100);
        console.info("====> queryExtensionAbilityInfo ok" + JSON.stringify(data));
      } catch (err) {
        console.info("catch queryExtensionAbilityInfo ng" + JSON.stringify(err));
        expect(err).assertContain(ERROR_PARAM_CHECK_ERROR);
        clearTimeout(clear);
        done();
      }
    })

    it('Acts_QueryExtensionAbilityInfos_2200', 0, function (done) {
      console.info(`====>Acts_QueryExtensionAbilityInfos_2200 begin`);

      let clear = setTimeout(() => {
        expect().assertFail();
      }, 5000);

      try {
        let want = {
          type: "application/pdf",
          action: "ohos.want.action.viewData"
        };
        let data = queryExtension.queryExtensionAbilityInfoSync(want, 'share',
          GET_EXTENSION_ABILITY_INFO_DEFAULT, 100);
        console.info("====> queryExtensionAbilityInfo ok" + JSON.stringify(data));
        expect(JSON.stringify(data)).assertContain('"extensionAbilityTypeName":"share"');
        clearTimeout(clear);
        done();
      } catch (err) {
        console.info("catch queryExtensionAbilityInfo ng" + JSON.stringify(err));
        expect().assertFail();
      }
    })

    it('Acts_QueryExtensionAbilityInfos_1000', 0, function (done) {
      console.info(`====>Acts_QueryExtensionAbilityInfos_1000 begin`);

      let clear = setTimeout(() => {
        expect().assertFail();
      }, 5000);

      try {
        let want = {
          bundleName: 'com.example.queryextensionabilityinfowithtypenamerely',
          abilityName: 'ActsShareExtensionAbilityxxx',
          moduleName: 'entry'
        };
        let data = queryExtension.queryExtensionAbilityInfoSync(want, 'share',
          GET_EXTENSION_ABILITY_INFO_DEFAULT, 100);
        console.info("====> queryExtensionAbilityInfo ok" + JSON.stringify(data));
      } catch (err) {
        console.info("catch queryExtensionAbilityInfo ng" + JSON.stringify(err));
        expect(err).assertContain(ERROR_ABILITY_NOT_EXIST);
        clearTimeout(clear);
        done();
      }
    })

    it('Acts_QueryExtensionAbilityInfos_2300', 0, function (done) {
      console.info(`====>Acts_QueryExtensionAbilityInfos_2300 begin`);

      let clear = setTimeout(() => {
        expect().assertFail();
      }, 5000);

      try {
        let want = {
          bundleName: 'com.example.queryextensionabilityinfowithtypenamerely',
          abilityName: 'ActsShareExtensionAbility',
          moduleName: 'entry'
        };
        var data = queryExtension.queryExtensionAbilityInfoSync(want, 'share', GET_EXTENSION_ABILITY_INFO_DEFAULT, 200);
        console.info("====> queryExtensionAbilityInfo ok" + JSON.stringify(data));
      } catch (err) {
        console.info("catch queryExtensionAbilityInfo ng" + JSON.stringify(err));
        expect(err).assertContain(ERROR_INVALID_USER_ID);
        clearTimeout(clear);
        done();
      }
    })

    it('Acts_QueryExtensionAbilityInfos_2400', 0, function (done) {
      console.info(`====>Acts_QueryExtensionAbilityInfos_2400 begin`)

      let clear = setTimeout(() => {
        expect().assertFail();
      }, 5000);

      try {
        let want = {
          bundleName: 'com.example.queryextensionabilityinfowithtypenamerely',
          abilityName: 'ActsShareExtensionAbility',
          moduleName: 'entry'
        };
        console.info(`====>Acts_QueryExtensionAbilityInfos_2400 try`);
        var data = queryExtension.queryExtensionAbilityInfoSync(want, 'share', GET_EXTENSION_ABILITY_INFO_DEFAULT, undefined);
        console.info("====> queryExtensionAbilityInfo ok" + JSON.stringify(data));
        expect(JSON.stringify(data)).assertContain('"name":"ActsShareExtensionAbility"');
        clearTimeout(clear);
        done();
      } catch (err) {
        console.info("catch queryExtensionAbilityInfo ng" + JSON.stringify(err));
        expect().assertFail();
      }
    })
  })
}