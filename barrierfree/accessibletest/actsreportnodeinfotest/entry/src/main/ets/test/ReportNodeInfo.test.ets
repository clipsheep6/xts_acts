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
import { describe, beforeAll, beforeEach, afterAll, it, expect } from '@ohos/hypium'
import commonEvent from '@ohos.commonEvent'
import config from '@ohos.accessibility.config';
import accessibility from '@ohos.accessibility';

const LOG = "[xtsLog]"
const START_TIMEOUT = 5000;
const bundleName = 'com.example.myapplicationxtsd/ServiceExtAbility';
const capabilityArray: accessibility.Capability[] = [
  'retrieve'
]

const excuteCase = (caseNamePara) => {
  console.info(LOG + 'AccessibleEventTest excuteCase: ' + caseNamePara);

  function publishCallback(err) {
    console.info(LOG + caseNamePara + "on_target_change publish call back result:" + JSON.stringify(err));
  }

  var commonEventPublishData = {
    data: caseNamePara + "_AccessibilityApp_start"
  }
  commonEvent.publish("on_target_change", commonEventPublishData, publishCallback);
}
var backList = []
let subScriber = undefined;

export default function ReportNodeInfoTest() {
  describe('ActsReportNodeInfoTest', function () {
    beforeEach(async function (done) {
      console.info(LOG + 'ActsReportNodeInfoTest: beforeEach');
      setTimeout(() => {
        done();
      }, 6000);
    });
    beforeAll(async function (done) {
      console.info(LOG + 'ActsReportNodeInfoTest: beforeAll');

      subScriber = await commonEvent.createSubscriber({
        events: ['on_target_change_extra', 'on_assist_change_extra']
      });
      console.info(LOG + 'ActsReportNodeInfoTest  beforeAll subscribe send:' + JSON.stringify(subScriber));

      commonEvent.subscribe(subScriber, (err, data) => {
        console.info(LOG + ' ActsReportNodeInfoTest beforeAll subscribe data:' + JSON.stringify(data));
        if (data.data) {
          console.info(LOG + "  ActsReportNodeInfoTest CallBack:  " + data.data);
          backList.push(data.data)
        }
      });

      config.enableAbility(bundleName, capabilityArray).then(() => {
        console.info(LOG + 'ActsReportNodeInfoTest beforeAll enableAbility ' );
      });
      setTimeout(done(), START_TIMEOUT);
    });

    afterAll(async function (done) {
      console.info(LOG + 'AccessibleEventTest: afterAll');
      setTimeout(function () {
        commonEvent.unsubscribe(subScriber);
        config.disableAbility(bundleName).then(() => {
          console.info(LOG + 'ActsReportNodeInfoTest afterAll disableAbility ' );
        });
      }, 10000);
      done();
    });

    /**
    * @tc.number: ReportNodeInfo_0020
    * @tc.name: Call the accessibility api: "getwindowrootelement() to get the information of the current window root node, and then call the accessibility api:" findelement() to query the information of the accessibility node
    * @tc.desc: Call the accessibility api: "getwindowrootelement() to get the information of the current window root node, and then call the accessibility api:" findelement() to query the information of the accessibility node
    */
    it('ReportNodeInfo_0020', 1, async function (done) {
      const caseName = "ReportNodeInfo_0020";
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
      }, 6000);
    });

    /**
    * @tc.number: ReportNodeInfo_0021
    * @tc.name: Test the callback form, call the barrier free api: "getwindowrootelement() to get the current window root node information call, and then the barrier free api:" findelement() to query the barrier free node information
    * @tc.desc: Test the callback form, call the barrier free api: "getwindowrootelement() to get the current window root node information call, and then the barrier free api:" findelement() to query the barrier free node information
    */
    it('ReportNodeInfo_0021', 1, async function (done) {
      const caseName = "ReportNodeInfo_0021";
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
      }, 15000);
    });

    /**
    * @tc.number: ReportNodeInfo_0040
    * @tc.name: Test the promise form, call the barrier free api: "getwindowrootelement() to get the current window root node information call, and then the barrier free api:" findelement() to query the barrier free node information
    * @tc.desc: Test the promise form, call the barrier free api: "getwindowrootelement() to get the current window root node information call, and then the barrier free api:" findelement() to query the barrier free node information
    */
    it('ReportNodeInfo_0040', 1, async function (done) {
      const caseName = "ReportNodeInfo_0040";
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
      }, 6000);
    });

    /**
    * @tc.number: ReportNodeInfo_0041
    * @tc.name: Test the callback form, call the barrier free api: "getwindowrootelement() to get the current window root node information call, and then the barrier free api:" findelement() to query the barrier free node information
    * @tc.desc: Test the callback form, call the barrier free api: "getwindowrootelement() to get the current window root node information call, and then the barrier free api:" findelement() to query the barrier free node information
    */
    it('ReportNodeInfo_0041', 1, async function (done) {
      const caseName = "ReportNodeInfo_0041";
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
      }, 15000);
    });

    /**
    * @tc.number: ReportNodeInfo_0060
    * @tc.name: Test the promise form, call the barrier free api: "getwindowrootelement() to get the current window root node information call, and then the barrier free api:" findelement() to query the barrier free node information
    * @tc.desc: Test the promise form, call the barrier free api: "getwindowrootelement() to get the current window root node information call, and then the barrier free api:" findelement() to query the barrier free node information
    */
    it('ReportNodeInfo_0060', 1, async function (done) {
      const caseName = "ReportNodeInfo_0060";
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
      }, 6000);
    });

    /**
    * @tc.number: ReportNodeInfo_0061
    * @tc.name: Test the callback form, call the barrier free api: "getwindowrootelement() to get the current window root node information call, and then the barrier free api:" findelement() to query the barrier free node information
    * @tc.desc: Test the callback form, call the barrier free api: "getwindowrootelement() to get the current window root node information call, and then the barrier free api:" findelement() to query the barrier free node information
    */
    it('ReportNodeInfo_0061', 1, async function (done) {
      const caseName = "ReportNodeInfo_0061";
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
      }, 6000);
    });

    /**
    * @tc.number: ReportNodeInfo_0030
    * @tc.name: Test the promise form, call the barrier free api: "getwindowrootelement() to get the current window root node information call, and then the barrier free api:" findelement() to query the barrier free node information
    * @tc.desc: Test the promise form, call the barrier free api: "getwindowrootelement() to get the current window root node information call, and then the barrier free api:" findelement() to query the barrier free node information
    */
    it('ReportNodeInfo_0030', 1, async function (done) {
      const caseName = "ReportNodeInfo_0030";
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
      }, 6000);
    });

    /**
    * @tc.number: ReportNodeInfo_0031
    * @tc.name: Test the callback form, call the barrier free api: "getwindowrootelement() to get the current window root node information call, and then the barrier free api:" findelement() to query the barrier free node information
    * @tc.desc: Test the callback form, call the barrier free api: "getwindowrootelement() to get the current window root node information call, and then the barrier free api:" findelement() to query the barrier free node information
    */
    it('ReportNodeInfo_0031', 1, async function (done) {
      const caseName = "ReportNodeInfo_0031";
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
      }, 6000);
    });

    /**
    * @tc.number: ReportNodeInfo_0050
    * @tc.name: Test the promise form, call the barrier free api: "getwindowrootelement() to get the current window root node information call, and then the barrier free api:" findelement() to query the barrier free node information
    * @tc.desc: Test the promise form, call the barrier free api: "getwindowrootelement() to get the current window root node information call, and then the barrier free api:" findelement() to query the barrier free node information
    */
    it('ReportNodeInfo_0050', 1, async function (done) {
      const caseName = "ReportNodeInfo_0050";
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
      }, 6000);
    });

    /**
    * @tc.number: ReportNodeInfo_0051
    * @tc.name: Test the callback form, call the barrier free api: "getwindowrootelement() to get the current window root node information call, and then the barrier free api:" findelement() to query the barrier free node information
    * @tc.desc: Test the callback form, call the barrier free api: "getwindowrootelement() to get the current window root node information call, and then the barrier free api:" findelement() to query the barrier free node information
    */
    it('ReportNodeInfo_0051', 1, async function (done) {
      const caseName = "ReportNodeInfo_0051";
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
      }, 6000);
    });
    /**
    * @tc.number: ReportNodeInfo_0010
    * @tc.name: Test the promise form, call the barrier free api: "getwindowrootelement() to get the current window root node information call, and then the barrier free api:" findelement() to query the barrier free node information
    * @tc.desc: Test the promise form, call the barrier free api: "getwindowrootelement() to get the current window root node information call, and then the barrier free api:" findelement() to query the barrier free node information
    */
    it('ReportNodeInfo_0010', 1, async function (done) {
      const caseName = "ReportNodeInfo_0010";
      const logF = LOG + caseName;
      setTimeout(() => {
        excuteCase(caseName);
        console.info(logF + ' excuteCase : start');
      }, 5000)
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
      }, 15000);
    });

    /**
    * @tc.number: ReportNodeInfo_0011
    * @tc.name: Test the callback form, call the barrier free api: "getwindowrootelement() to get the current window root node information call, and then the barrier free api:" findelement() to query the barrier free node information
    * @tc.desc: Test the callback form, call the barrier free api: "getwindowrootelement() to get the current window root node information call, and then the barrier free api:" findelement() to query the barrier free node information
    */
    it('ReportNodeInfo_0011', 1, async function (done) {
      const caseName = "ReportNodeInfo_0011";
      const logF = LOG + caseName;
      console.info(logF + ' btnReportNodeInfoB : start');
      setTimeout(() => {
        excuteCase(caseName);
        console.info(logF + ' excuteCase : start');
      }, 5000)
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
      }, 15000);
    });
  });
}
