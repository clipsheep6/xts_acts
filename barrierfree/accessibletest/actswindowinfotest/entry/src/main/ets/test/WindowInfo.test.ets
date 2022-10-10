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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import commonEvent from '@ohos.commonEvent'
import config from '@ohos.accessibility.config';
import router from '@system.router';
import accessibility from '@ohos.accessibility';

const LOG = "[xtsLog]"
var backList = []
let subScriber = undefined;
const bundleName = 'com.example.accessibilitywindowinfo.hmservice/ServiceExtAbility';
const bundleNameAllD = 'com.example.myapplicationxtsd/ServiceExtAbility';
const CapabilityArray: accessibility.Capability[] = [
  "retrieve",
  'touchGuide'
]
const excuteCase = (caseName) => {
  console.info(LOG + 'ActsWindowinfoTest excuteCase: ' + caseName);
  function publishCallback(err) {
    console.info(LOG + caseName + "on_target_change publish call back result:" + JSON.stringify(err));
  }
  var commonEventPublishData = {
    data: caseName + "_AccessibilityApp_start"
  }
  commonEvent.publish("on_target_change", commonEventPublishData, publishCallback);
};

const routerWindowInfoChild = () => {
  router.push({
    uri: 'pages/WindowInfoChild',
    params: {},
  });
};;

const routerWindowInfoParent = () => {
  router.push({
    uri: 'pages/WindowInfoParent',
    params: {},
  });
};

export default function WindowInfoTest() {
  describe('ActsWindowinfoTest', function () {

    beforeEach(async function (done) {
      console.info(LOG + 'ActsWindowinfoTest: beforeEach');
      setTimeout(() => {
        done();
      }, 5000);
    });

    beforeAll(async function (done) {
      console.info(LOG + 'ActsWindowinfoTest: beforeAll');
      subScriber = await commonEvent.createSubscriber({
        events: ['on_target_change_extra', 'on_assist_change_extra']
      });
      console.info(LOG + 'ActsWindowinfoTest  beforeAll subscribe send:' + JSON.stringify(subScriber));
      commonEvent.subscribe(subScriber, (err, data) => {
        console.info(LOG + ' ActsWindowinfoTest beforeAll subscribe data:' + JSON.stringify(data));
        if (data.data) {
          console.info(LOG + "  ActsWindowinfoTest CallBack:  " + data.data);
          backList.push(data.data)
        }
      });
      config.enableAbility(bundleName, CapabilityArray).then(() => {
        console.info(LOG + 'ActsWindowinfoTest beforeAll enableAbility ' );
      });

      config.enableAbility(bundleNameAllD, CapabilityArray).then(() => {
        console.info(LOG + 'ActsWindowinfoTest beforeAll enableAbility ' );
      });
      setTimeout(done(), 3000);
    });

    afterAll(async function (done) {
      setTimeout(function () {
        console.info(LOG + 'ActsWindowinfoTest: afterAll');
        commonEvent.unsubscribe(subScriber);
        config.disableAbility(bundleName).then(() => {
          console.info(LOG + 'ActsWindowinfoTest afterAll disableAbility: ' );
        });
        config.disableAbility(bundleNameAllD).then(() => {
          console.info(LOG + 'ActsWindowinfoTest afterAll disableAbility: '  );
        });
        done();
      }, 20000);
    });

  /**
  * @tc.number: WindowInfoGet_0010
  * @tc.name: Callback form call accessibility API: getwindows() "specify the parameter displayid to obtain the default window accessibility information
  * @tc.desc: Callback form call accessibility API: getwindows() "specify the parameter displayid to obtain the default window accessibility information
  */
    it('WindowInfoGet_0010', 1, async function (done) {
      const caseName = 'WindowInfoGet_0010';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

 /**
  * @tc.number: WindowInfoGet_0011
  * @tc.name: Callback form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  * @tc.desc: Callback form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  */
    it('WindowInfoGet_0011', 1, async function (done) {
      const caseName = 'WindowInfoGet_0011';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });
     /**
  * @tc.number: WindowInfoGet_0020
  * @tc.name: Promise form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  * @tc.desc: Promise form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  */
    it('WindowInfoGet_0020', 1, async function (done) {
      const caseName = 'WindowInfoGet_0020';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

 /**
  * @tc.number: WindowInfoGet_0190
  * @tc.name: Callback form call accessibility API: "getwindows()" get the default window barrier free point information
  * @tc.desc: Callback form call accessibility API: "getwindows()" get the default window barrier free point information
  */
    it('WindowInfoGet_0190', 1, async function (done) {
      const caseName = 'WindowInfoGet_0190';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

  /**
  * @tc.number: WindowInfoGet_0200
  * @tc.name: Callback form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  * @tc.desc: Callback form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  */   
    it('WindowInfoGet_0200', 1, async function (done) {
      const caseName = 'WindowInfoGet_0200';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });
 
 /**
  * @tc.number: WindowInfoGet_0210
  * @tc.name: Promise form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  * @tc.desc: Promise form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  */    
    it('WindowInfoGet_0210', 1, async function (done) {
      const caseName = 'WindowInfoGet_0210';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

 /**
  * @tc.number: WindowInfoGet_0301
  * @tc.name: Promise form call call accessibility API: "getwindows()" get the  windowId
  * @tc.desc: Promise form call call accessibility API: "getwindows()" get the  windowId 
  */
    it('WindowInfoGet_0301', 1, async function (done) {
      const caseName = 'WindowInfoGet_0301';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });
 /**
  * @tc.number: WindowInfoGet_0302
  * @tc.name: Promise form call call accessibility API: "getwindows()" get the default window barrier free point information
  * @tc.desc: Promise form call call accessibility API: "getwindows()" get the default window barrier free point information
  */
    it('WindowInfoGet_0302', 1, async function (done) {
      const caseName = 'WindowInfoGet_0302';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

 /**
  * @tc.number: WindowInfoGet_0303
  * @tc.name: Promise form call call accessibility API: "getwindows()" get the default window barrier free point information
  * @tc.desc: Promise form call call accessibility API: "getwindows()" get the default window barrier free point information
  */
    it('WindowInfoGet_0303', 1, async function (done) {
      const caseName = 'WindowInfoGet_0303';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });
 /**
  * @tc.number: WindowInfoGet_0304
  * @tc.name: Promise form call call accessibility API: "getwindows()" get the default window barrier free point information
  * @tc.desc: Promise form call call accessibility API: "getwindows()" get the default window barrier free point information
  */
    it('WindowInfoGet_0304', 1, async function (done) {
      const caseName = 'WindowInfoGet_0304';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

  /**
  * @tc.number: WindowInfoGet_0305
  * @tc.name: Promise form call call accessibility API: "getwindows()" get the default window barrier free point information
  * @tc.desc: Promise form call call accessibility API: "getwindows()" get the default window barrier free point information
  */   
    it('WindowInfoGet_0305', 1, async function (done) {
      const caseName = 'WindowInfoGet_0305';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

 /**
  * @tc.number: WindowInfoGet_0307
  * @tc.name: Promise form call call accessibility API: "getwindows()" get the default window barrier free point information
  * @tc.desc: Promise form call call accessibility API: "getwindows()" get the default window barrier free point information
  */
    it('WindowInfoGet_0307', 1, async function (done) {
      const caseName = 'WindowInfoGet_0307';
      const logF = LOG + caseName;

      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

  /**
  * @tc.number: WindowInfoGet_0030
  * @tc.name: Callback form call accessibility API: "getwindows()" get the default window barrier free point information
  * @tc.desc: Callback form call accessibility API: "getwindows()" get the default window barrier free point information
  */
    it('WindowInfoGet_0030', 1, async function (done) {
      const caseName = 'WindowInfoGet_0030';
      const logF = LOG + caseName;
      setTimeout(() => {
        routerWindowInfoChild()
      }, 3000);
      setTimeout(() => {
        excuteCase(caseName);
      }, 3000);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

  /**
  * @tc.number: WindowInfoGet_0031
  * @tc.name: Callback form call accessibility API: "getwindows()" get the default window barrier free point information
  * @tc.desc: Callback form call accessibility API: "getwindows()" get the default window barrier free point information
  */   
    it('WindowInfoGet_0031', 1, async function (done) {
      const caseName = 'WindowInfoGet_0031';
      const logF = LOG + caseName;
      setTimeout(() => {
        excuteCase(caseName);
      }, 3000);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

 /**
  * @tc.number: WindowInfoGet_0040
  * @tc.name: Promise form call call accessibility API: "getwindows()" get the default window barrier free point information
  * @tc.desc: Promise form call call accessibility API: "getwindows()" get the default window barrier free point information
  */   
    it('WindowInfoGet_0040', 1, async function (done) {
      const caseName = 'WindowInfoGet_0040';
      const logF = LOG + caseName;
      setTimeout(() => {
        excuteCase(caseName);
      }, 3000);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

  /**
  * @tc.number: WindowInfoGet_0070
  * @tc.name: Callback form call accessibility API: "getwindows()" get the default window barrier free point information
  * @tc.desc: Callback form call accessibility API: "getwindows()" get the default window barrier free point information
  */   
    it('WindowInfoGet_0070', 1, async function (done) {
      const caseName = 'WindowInfoGet_0070';
      const logF = LOG + caseName;
      setTimeout(() => {
        routerWindowInfoChild()
        routerWindowInfoParent()
        routerWindowInfoChild()
      }, 3000);
      setTimeout(() => {
        excuteCase(caseName);
      }, 3000);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 12000);
    });
 /**
  * @tc.number: WindowInfoGet_0071
  * @tc.name: Callback form call accessibility API: "getwindows()" get the default window barrier free point informatio
  * @tc.desc: Callback form call accessibility API: "getwindows()" get the default window barrier free point informatio
  */
    it('WindowInfoGet_0071', 1, async function (done) {
      const caseName = 'WindowInfoGet_0071';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });
 /**
  * @tc.number: WindowInfoGet_0080
  * @tc.name: Promise form call call accessibility API: "getwindows()" get the default window barrier free point information
  * @tc.desc: Promise form call call accessibility API: "getwindows()" get the default window barrier free point information
  */    
    it('WindowInfoGet_0080', 1, async function (done) {
      const caseName = 'WindowInfoGet_0080';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

 /**
  * @tc.number: WindowInfoGet_0050
  * @tc.name: Callback form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  * @tc.desc: Callback form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  */
    it('WindowInfoGet_0050', 1, async function (done) {
      const caseName = 'WindowInfoGet_0050';
      const logF = LOG + caseName;
      globalThis.abilityContext.startAbility({
        bundleName: "ohos.samples.airquality",
        abilityName: "ohos.samples.airquality.default"
      }, (error, data) => {
        console.info(LOG + 'startAbility  airquality: '
          + JSON.stringify(error) + ", " + JSON.stringify(data));
      });
      setTimeout(() => {
        excuteCase(caseName);
      }, 3000);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') == -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

  /**
  * @tc.number: WindowInfoGet_0051
  * @tc.name: Callback form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  * @tc.desc: Callback form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  */   
    it('WindowInfoGet_0051', 1, async function (done) {
      const caseName = 'WindowInfoGet_0051';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') == -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

  /**
  * @tc.number: WindowInfoGet_0060
  * @tc.name: Promise form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  * @tc.desc: Promise form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  */   
    it('WindowInfoGet_0060', 1, async function (done) {
      const caseName = 'WindowInfoGet_0060';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') == -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

  /**
  * @tc.number: WindowInfoGet_0090
  * @tc.name: Callback form call accessibility API: "getwindows()" get the default window barrier free point information
  * @tc.desc: Callback form call accessibility API: "getwindows()" get the default window barrier free point information
  */   
    it('WindowInfoGet_0090', 1, async function (done) {
      const caseName = 'WindowInfoGet_0090';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') == -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

  /**
  * @tc.number: WindowInfoGet_0091
  * @tc.name: Callback form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  * @tc.desc: Callback form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  */   
    it('WindowInfoGet_0091', 1, async function (done) {
      const caseName = 'WindowInfoGet_0091';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') == -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

  /**
  * @tc.number: WindowInfoGet_0100
  * @tc.name: Promise form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  * @tc.desc: Promise form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  */   
    it('WindowInfoGet_0100', 1, async function (done) {
      const caseName = 'WindowInfoGet_0100';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') == -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

 /**
  * @tc.number: WindowInfoGet_0110
  * @tc.name: Callback form call accessibility API: "getwindows()" get the default window barrier free point information
  * @tc.desc: Callback form call accessibility API: "getwindows()" get the default window barrier free point information
  */    
    it('WindowInfoGet_0110', 1, async function (done) {
      const caseName = 'WindowInfoGet_0110';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

  /**
  * @tc.number: WindowInfoGet_0111
  * @tc.name: Callback form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  * @tc.desc: Callback form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  */   
    it('WindowInfoGet_0111', 1, async function (done) {
      const caseName = 'WindowInfoGet_0111';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

  /**
  * @tc.number: WindowInfoGet_0120
  * @tc.name: Promise form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  * @tc.desc: Promise form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  */   
    it('WindowInfoGet_0120', 1, async function (done) {
      const caseName = 'WindowInfoGet_0120';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

 /**
  * @tc.number: WindowInfoGet_0130
  * @tc.name: Callback form call accessibility API: "getwindows()" get the default window barrier free point information
  * @tc.desc: Callback form call accessibility API: "getwindows()" get the default window barrier free point information
  */    
    it('WindowInfoGet_0130', 1, async function (done) {
      const caseName = 'WindowInfoGet_0130';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

  /**
  * @tc.number: WindowInfoGet_0131
  * @tc.name: Callback form call accessibility API: "getwindows()" get the default window barrier free point information
  * @tc.desc: Callback form call accessibility API: "getwindows()" get the default window barrier free point information
  */   
    it('WindowInfoGet_0131', 1, async function (done) {
      const caseName = 'WindowInfoGet_0131';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

 /**
  * @tc.number: WindowInfoGet_0140
  * @tc.name: Promise form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  * @tc.desc: Promise form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  */    
    it('WindowInfoGet_0140', 1, async function (done) {
      const caseName = 'WindowInfoGet_0140';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

  /**
  * @tc.number: WindowInfoGet_0150
  * @tc.name: Callback form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  * @tc.desc: Callback form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  */   
    it('WindowInfoGet_0150', 1, async function (done) {
      const caseName = 'WindowInfoGet_0150';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

  /**
  * @tc.number: WindowInfoGet_0151
  * @tc.name: Callback form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  * @tc.desc: Callback form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  */   
    it('WindowInfoGet_0151', 1, async function (done) {
      const caseName = 'WindowInfoGet_0151';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

  /**
  * @tc.number: WindowInfoGet_0160
  * @tc.name: Promise form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  * @tc.desc: Promise form call accessibility API: getwindows() specify the parameter displayid to obtain the default window accessibility information
  */   
    it('WindowInfoGet_0160', 1, async function (done) {
      const caseName = 'WindowInfoGet_0160';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

 /**
  * @tc.number: WindowInfoGet_0250
  * @tc.name: Promise form call call accessibility API: "getwindows()" get the default window barrier free point information
  * @tc.desc: Promise form call call accessibility API: "getwindows()" get the default window barrier free point information
  */    
    it('WindowInfoGet_0250', 1, async function (done) {
      const caseName = 'WindowInfoGet_0250';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

 /**
  * @tc.number: WindowInfoGet_0260
  * @tc.name: Promise form call call accessibility API: "getwindows()" get the default window barrier free point information
  * @tc.desc: Promise form call call accessibility API: "getwindows()" get the default window barrier free point information
  */    
    it('WindowInfoGet_0260', 1, async function (done) {
      const caseName = 'WindowInfoGet_0260';
      const logF = LOG + caseName;

      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });

 /**
  * @tc.number: WindowInfoGet_0270
  * @tc.name: Promise form call call accessibility API: "getwindows()" get the default window barrier free point information
  * @tc.desc: Promise form call call accessibility API: "getwindows()" get the default window barrier free point information
  */    
    it('WindowInfoGet_0270', 1, async function (done) {
      const caseName = 'WindowInfoGet_0270';
      const logF = LOG + caseName;

      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssist: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedAssist = true;
        }
        expect(isSucceedTarget && isSucceedAssist).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssist));
        done();
      }, 10000);
    });
  })
}
