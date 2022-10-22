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
import accessibility from '@ohos.accessibility';

const bundleNameA = 'com.example.accessibilitygestured.hmservice/ServiceExtAbility';
const bundleNameB = 'com.example.accessibilitygesture2d.hmservice/ServiceExtAbility';

const LOG = "[xtsLog]"
var backList = []
let subScriber = undefined;
const capabilityArray: accessibility.Capability[] = [
  'retrieve',
  'gesture',
  'touchGuide'
]

const excuteCase = (caseName) => {
  console.info(LOG + 'ActsTouchInterceptTest excuteCase: ' + caseName);

  function publishCallback(err) {
      console.info(LOG + caseName + "on_target_change publish call back result:" + JSON.stringify(err));
    }

  var commonEventPublishData = {
    data: caseName + "_AccessibilityApp_start"
  }
  commonEvent.publish("on_target_change", commonEventPublishData, publishCallback);
}

export default function TouchInterceptTest() {
  describe('ActsTouchInterceptTest', function () {

    beforeEach(async function (done) {
      console.info(LOG + 'ActsTouchInterceptTest: beforeEach');
      setTimeout(() => {
        done();
      }, 3000);
    });

    beforeAll(async function (done) {
      console.info(LOG + 'ActsTouchInterceptTest: beforeAll');
      subScriber = await commonEvent.createSubscriber({
        events: ['on_target_change_extra', 'on_assist_change_extra']
      });
      console.info(LOG + 'ActsTouchInterceptTest  beforeAll subscribe send:' + JSON.stringify(subScriber));

      commonEvent.subscribe(subScriber, (err, data) => {
        console.info(LOG + ' ActsTouchInterceptTest beforeAll subscribe data:' + JSON.stringify(data));
        if (data.data) {
          console.info(LOG + "  ActsTouchInterceptTest CallBack:  " + data.data);
          backList.push(data.data)
        }

      });

      config.enableAbility(bundleNameA, capabilityArray).then(() => {
        console.info(LOG + 'ActsTouchInterceptTest beforeAll enableAbility ' );
      });
      config.enableAbility(bundleNameB, capabilityArray).then(() => {
        console.info(LOG + 'ActsTouchInterceptTest beforeAll enableAbility ' );
      });
      setTimeout(done(), 3000);
    });

    afterAll(async function (done) {
      setTimeout(function () {
        console.info(LOG + 'ActsTouchInterceptTest: afterAll');
        commonEvent.unsubscribe(subScriber);
        config.disableAbility(bundleNameA).then(() => {
          console.info(LOG + 'ActsTouchInterceptTest afterAll disableAbility ' );
        });
        config.disableAbility(bundleNameB).then(() => {
          console.info(LOG + 'ActsTouchInterceptTest afterAll disableAbility ' );
        });
        done();
      }, 10000);
    });
 /**
  * @tc.number: TouchIntercept_0170
  * @tc.name: Call the barrier free API: "gestureinject()" to set the coordinate points and paths of left, leftthenright, leftthenup and leftthendown gestures respectively and send them
  * @tc.desc: Call the barrier free API: "gestureinject()" to set the coordinate points and paths of left, leftthenright, leftthenup and leftthendown gestures respectively and send them
  */    
    it('TouchIntercept_0170', 3, async function (done) {
      const caseName = 'TouchIntercept_0170';
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
  * @tc.number: TouchIntercept_0180
  * @tc.name: Call the barrier free API: "gestureinject()" set the coordinate points and paths of right, rightthenleft, rightthenup and rightthendown gestures respectively and send them
  * @tc.desc: Call the barrier free API: "gestureinject()" set the coordinate points and paths of right, rightthenleft, rightthenup and rightthendown gestures respectively and send them
  */  
    it('TouchIntercept_0180', 3, async function (done) {
      const caseName = 'TouchIntercept_0180';
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
  * @tc.number: TouchIntercept_0190
  * @tc.name: Call barrier free API: "gestureinject()" set down, downthenleft, downthenright and downthenup gesture coordinate points and paths respectively and send them
  * @tc.desc: Call barrier free API: "gestureinject()" set down, downthenleft, downthenright and downthenup gesture coordinate points and paths respectively and send them
  */     
    it('TouchIntercept_0190', 3, async function (done) {
      const caseName = 'TouchIntercept_0190';
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
  * @tc.number: TouchIntercept_0200
  * @tc.name: Call barrier free API: "gestureinject()" set down, downthenleft, downthenright and downthenup gesture coordinate points and paths respectively and send them
  * @tc.desc: Call barrier free API: "gestureinject()" set down, downthenleft, downthenright and downthenup gesture coordinate points and paths respectively and send them
  */  
    it('TouchIntercept_0200', 3, async function (done) {
      const caseName = 'TouchIntercept_0200';
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
  * @tc.number: TouchIntercept_0210
  * @tc.name: Call barrier free API: "gestureinject()" set up gesture coordinate points and paths and send them
  * @tc.desc: Call barrier free API: "gestureinject()" set up gesture coordinate points and paths and send them
  */     
    it('TouchIntercept_0210', 3, async function (done) {
      const caseName = 'TouchIntercept_0210';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssistA: boolean = false;
        var isSucceedAssistB: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success_A') !== -1) {
          isSucceedAssistA = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success_B') !== -1) {
          isSucceedAssistB = true;
        }
        expect(isSucceedTarget && isSucceedAssistA && isSucceedAssistB).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssistA && isSucceedAssistB));
        done();
      }, 15000);
    });

   /**
  * @tc.number: TouchIntercept_0220
  * @tc.name: Call the barrier free API: "gestureinject()" set the left, right, up and down gesture coordinate points and paths respectively and send them
  * @tc.desc: Call the barrier free API: "gestureinject()" set the left, right, up and down gesture coordinate points and paths respectively and send them
  */       
    it('TouchIntercept_0220', 3, async function (done) {
      const caseName = 'TouchIntercept_0220';
      const logF = LOG + caseName;

      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssistA: boolean = false;
        var isSucceedAssistB: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success_A') !== -1) {
          isSucceedAssistA = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success_B') !== -1) {
          isSucceedAssistB = true;
        }
        expect(isSucceedTarget && isSucceedAssistA && isSucceedAssistB).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssistA && isSucceedAssistB));
        done();
      }, 15000);;
    });

   /**
  * @tc.number: TouchIntercept_0230
  * @tc.name: Call the barrier free API: "gestureinject()" set left, leftthenright, leftthenup, leftthendown, right, rightthenleft, rightthenup, rightthendown, up, upthenleft, upthenright, upthendown, down, downthenleft, downthenright, downthenup gesture coordinate points and paths respectively, and send
  * @tc.desc: Call the barrier free API: "gestureinject()" set left, leftthenright, leftthenup, leftthendown, right, rightthenleft, rightthenup, rightthendown, up, upthenleft, upthenright, upthendown, down, downthenleft, downthenright, downthenup gesture coordinate points and paths respectively, and send
  */       
    it('TouchIntercept_0230', 3, async function (done) {
      const caseName = 'TouchIntercept_0230';
      const logF = LOG + caseName;

      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssistA: boolean = false;
        var isSucceedAssistB: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success_A') !== -1) {
          isSucceedAssistA = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success_B') !== -1) {
          isSucceedAssistB = true;
        }
        expect(isSucceedTarget && isSucceedAssistA && isSucceedAssistB).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssistA && isSucceedAssistB));
        done();
      }, 15000);
    });

  /**
  * @tc.number: TouchIntercept_0240
  * @tc.name: Call accessibility API: "seteventtypefilter()" to set and filter click events, call accessibility api: "gestureinject()" to set up gesture coordinate points and paths and send them
  * @tc.desc: Call accessibility API: "seteventtypefilter()" to set and filter click events, call accessibility api: "gestureinject()" to set up gesture coordinate points and paths and send them
  */       
    it('TouchIntercept_0240', 3, async function (done) {
      const caseName = 'TouchIntercept_0240';
      const logF = LOG + caseName;
      excuteCase(caseName);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        var isSucceedAssistA: boolean = false;
        var isSucceedAssistB: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success_A') === -1) {
          isSucceedAssistA = true;
        }
        if (backList.indexOf(caseName + '_on_assist_change_extra_success_B') === -1) {
          isSucceedAssistB = true;
        }
        expect(isSucceedTarget && isSucceedAssistA && isSucceedAssistB).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget && isSucceedAssistA && isSucceedAssistB));
        done();
      }, 16000);
    })

  /**
  * @tc.number: TouchIntercept_0010
  * @tc.name: Call barrier free API: "gestureinject()" set left gesture coordinate points and paths and send them
  * @tc.desc: Call barrier free API: "gestureinject()" set left gesture coordinate points and paths and send them
  */       
    it('TouchIntercept_0010', 1, async function (done) {
      const caseName = 'TouchIntercept_0010';
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
  * @tc.number: TouchIntercept_0020
  * @tc.name: Call barrier free API: "gestureinject()" set leftThenRight gesture coordinate points and paths and send them
  * @tc.desc: Call barrier free API: "gestureinject()" set leftThenRight gesture coordinate points and paths and send them
  */      
    it('TouchIntercept_0020', 1, async function (done) {
      const caseName = 'TouchIntercept_0020';
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
  * @tc.number: TouchIntercept_0030
  * @tc.name: Call barrier free API: "gestureinject()" set leftThenUp gesture coordinate points and paths and send them
  * @tc.desc: Call barrier free API: "gestureinject()" set leftThenUp gesture coordinate points and paths and send them
  */       
    it('TouchIntercept_0030', 1, async function (done) {
      const caseName = 'TouchIntercept_0030';
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
  * @tc.number: TouchIntercept_0040
  * @tc.name: Call barrier free API: "gestureinject()" set leftThenDown gesture coordinate points and paths and send them
  * @tc.desc: Call barrier free API: "gestureinject()" set leftThenDown gesture coordinate points and paths and send them
  */       
    it('TouchIntercept_0040', 1, async function (done) {
      const caseName = 'TouchIntercept_0040';
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
  * @tc.number: TouchIntercept_0050
  * @tc.name: Call barrier free API: "gestureinject()" set rightThenLeft gesture coordinate points and paths and send them
  * @tc.desc: Call barrier free API: "gestureinject()" set rightThenLeft gesture coordinate points and paths and send them
  */   
    it('TouchIntercept_0050', 1, async function (done) {
      const caseName = 'TouchIntercept_0050';
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
  * @tc.number: TouchIntercept_0060
  * @tc.name: Call barrier free API: "gestureinject()" set rightThenUp gesture coordinate points and paths and send them
  * @tc.desc: Call barrier free API: "gestureinject()" set rightThenUp gesture coordinate points and paths and send them
  */   
    it('TouchIntercept_0060', 1, async function (done) {
      const caseName = 'TouchIntercept_0060';
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
  * @tc.number: TouchIntercept_0070
  * @tc.name: Call barrier free API: "gestureinject()" set up gesture coordinate points and paths and send them
  * @tc.desc: Call barrier free API: "gestureinject()" set up gesture coordinate points and paths and send them
  */       
    it('TouchIntercept_0070', 1, async function (done) {
      const caseName = 'TouchIntercept_0070';
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
  * @tc.number: TouchIntercept_0080
  * @tc.name: Call barrier free API: "gestureinject()" set LeftThenUp gesture coordinate points and paths and send them
  * @tc.desc: Call barrier free API: "gestureinject()" set LeftThenUp gesture coordinate points and paths and send them
  */       
    it('TouchIntercept_0080', 1, async function (done) {
      const caseName = 'TouchIntercept_0080';
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
  * @tc.number: TouchIntercept_0090
  * @tc.name: Call barrier free API: "gestureinject()" set rightThenDown gesture coordinate points and paths and send them
  * @tc.desc: Call barrier free API: "gestureinject()" set rightThenDown gesture coordinate points and paths and send them
  */ 
    it('TouchIntercept_0090', 1, async function (done) {
      const caseName = 'TouchIntercept_0090';
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
  * @tc.number: TouchIntercept_0100
  * @tc.name: Call barrier free API: "gestureinject()" set upThenLeft gesture coordinate points and paths and send them
  * @tc.desc: Call barrier free API: "gestureinject()" set upThenLeft gesture coordinate points and paths and send them
  */   
    it('TouchIntercept_0100', 1, async function (done) {
      const caseName = 'TouchIntercept_0100';
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
  * @tc.number: TouchIntercept_0110
  * @tc.name: Call barrier free API: "gestureinject()" set RightThenUp gesture coordinate points and paths and send them
  * @tc.desc: Call barrier free API: "gestureinject()" set RightThenUp gesture coordinate points and paths and send them
  */ 
    it('TouchIntercept_0110', 1, async function (done) {
      const caseName = 'TouchIntercept_0110';
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
  * @tc.number: TouchIntercept_0120
  * @tc.name: Call barrier free API: "gestureinject()" set upThenDown gesture coordinate points and paths and send them
  * @tc.desc: Call barrier free API: "gestureinject()" set upThenDown gesture coordinate points and paths and send them
  */       
    it('TouchIntercept_0120', 1, async function (done) {
      const caseName = 'TouchIntercept_0120';
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
  * @tc.number: TouchIntercept_0130
  * @tc.name: Call barrier free API: "gestureinject()" set down gesture coordinate points and paths and send them
  * @tc.desc: Call barrier free API: "gestureinject()" set down gesture coordinate points and paths and send them
  */   
    it('TouchIntercept_0130', 1, async function (done) {
      const caseName = 'TouchIntercept_0130';
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
  * @tc.number: TouchIntercept_0140
  * @tc.name: Call barrier free API: "gestureinject()" set downThenLeft gesture coordinate points and paths and send them
  * @tc.desc: Call barrier free API: "gestureinject()" set downThenLeft gesture coordinate points and paths and send them
  */   
    it('TouchIntercept_0140', 1, async function (done) {
      const caseName = 'TouchIntercept_0140';
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
  * @tc.number: TouchIntercept_0150
  * @tc.name: Call barrier free API: "gestureinject()" set downThenRight gesture coordinate points and paths and send them
  * @tc.desc: Call barrier free API: "gestureinject()" set downThenRight gesture coordinate points and paths and send them
  */       
    it('TouchIntercept_0150', 1, async function (done) {
      const caseName = 'TouchIntercept_0150';
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
  * @tc.number: TouchIntercept_0160
  * @tc.name: Call barrier free API: "gestureinject()" set downThenUp gesture coordinate points and paths and send them
  * @tc.desc: Call barrier free API: "gestureinject()" set downThenUp gesture coordinate points and paths and send them
  */       
    it('TouchIntercept_0160', 1, async function (done) {
      const caseName = 'TouchIntercept_0160';
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
