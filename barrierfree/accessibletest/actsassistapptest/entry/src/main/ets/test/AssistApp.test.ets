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
import { describe, beforeAll, beforeEach, it, expect } from '@ohos/hypium'
import commonEvent from '@ohos.commonEvent'
import config from '@ohos.accessibility.config';
import accessibility from '@ohos.accessibility'

const logTag = "[xtsLog]"
const AssistAppA_bundleNameAndAbilityName = 'com.example.assistappa.hmservice/ServiceExtAbility';
const AssistAppB_bundleNameAndAbilityName = 'com.example.assistappb.hmservice/ServiceExtAbility';
let subScriber = undefined;

const CapabilityArray: accessibility.Capability[] = [
  'retrieve',
  'keyEventObserver',
  'gesture',
  'touchGuide'
]
var backList = []

const excuteCase = async (caseNamePara) => {
  console.info(logTag + 'ActsAssistAppTest excuteCase: ' + caseNamePara);

  function publishCallback(err) {
    console.info(logTag + caseNamePara + "on_assist_change publish call back result:" + JSON.stringify(err));
  }
  var commonEventPublishData = {
    data: caseNamePara + "_on_assist_change_success"
  }
  commonEvent.publish("on_assist_change", commonEventPublishData, publishCallback);
}

const setExtentionEnabled = (logTag, bundleNameAndabilityName) => {
  config.enableAbility(bundleNameAndabilityName, CapabilityArray).then(() => {
    console.info(logTag  + bundleNameAndabilityName + "  setExtentionDfxEnabled ");
  });
}

const setExtentionDisabled = (logTag, bundleNameAndabilityName) => {
  config.disableAbility(bundleNameAndabilityName).then(() => {
    console.info(logTag  + bundleNameAndabilityName + " extentionDisabled ");
  });
}

export default function AssistAppTest() {
  describe('ActsAssistAppTest', function () {

    beforeEach(async function (done) {
      console.info(logTag + 'ActsAssistAppTest: beforeEach');
      setTimeout(() => {
        done()
      }, 6000);
    });


    beforeAll(async function (done) {
      console.info(logTag + 'ActsAssistAppTest: beforeAll');
      subScriber = await commonEvent.createSubscriber({ events: ['on_assist_change_extra'] });
      console.info(logTag + 'ActsAssistAppTest beforeAll subscribe send:' + JSON.stringify(subScriber));
      commonEvent.subscribe(subScriber, (err, data) => {
        console.info(logTag + 'ActsAssistAppTest beforeAll subscribe callback:' + JSON.stringify(data));
        if (data.data) {
          console.info(logTag + "  Event CallBack:  " + data.data);
          backList.push(data.data)
        }
      });
      setExtentionDisabled(logTag, AssistAppA_bundleNameAndAbilityName)
      setExtentionDisabled(logTag, AssistAppB_bundleNameAndAbilityName)
      setTimeout(done(), 4000);
    });

    /**
    * @tc.number: AssistApp_0010
    * @tc.name: The test application calls the accessibility API: "enableability()" to start the auxiliary application.
    * @tc.desc: The test application calls the accessibility API: "enableability()" to start the auxiliary application
    */
    it('AssistApp_0010', 1, async function (done) {
      const caseName = "AssistApp_0010";
      const logF = logTag + caseName;
      setTimeout(() => {
        setExtentionEnabled(logF, AssistAppA_bundleNameAndAbilityName)
        setTimeout(() => {
          excuteCase(caseName)
          setTimeout(() => {
            var isSucceed: boolean = false;
            if (backList.indexOf(caseName + '_onConnect_on_assist_change_extra_success') !== -1) {
              isSucceed = true;
            }
            expect(isSucceed).assertEqual(true);
            console.info(logF + ' isSucceed : ' + isSucceed);
            done();
          }, 6000);
        }, 2000);
      }, 2000);
    });

    /**
    * @tc.number: AssistApp_0020
    * @tc.name: Call api: "disableability()" to close the auxiliary application
    * @tc.desc: Call api: "disableability()" to close the auxiliary application
    */
    it('AssistApp_0020', 1, async function (done) {
      const caseName = "AssistApp_0020";
      const logF = logTag + caseName;
      let isSucceed = false;
      setTimeout(() => {
        setExtentionEnabled(logF, AssistAppA_bundleNameAndAbilityName)
        setTimeout(() => {
          config.disableAbility(AssistAppA_bundleNameAndAbilityName).then(() => {
            console.info(logTag + caseName + AssistAppA_bundleNameAndAbilityName + " extentionDisabled ");
            isSucceed = true;
          }).catch((err) => {
            isSucceed = false;
          });
          setTimeout(() => {
            expect(isSucceed).assertEqual(true);
            console.info(logF + ' isSucceed : ' + isSucceed);
            done();
          }, 3000);
        }, 2000);
      }, 2000);
    });

    /**
    * @tc.number: AssistApp_0030
    * @tc.name: Call the accessibility API: "enableability()" to start the auxiliary application
    * @tc.desc: Call the accessibility API: "enableability()" to start the auxiliary application
    */
    it('AssistApp_0030', 1, async function (done) {
      const caseName = "AssistApp_0030";
      const logF = logTag + caseName;
      setTimeout(() => {
        setExtentionEnabled(logF, AssistAppA_bundleNameAndAbilityName)
        setTimeout(() => {
          setExtentionDisabled(logF, AssistAppA_bundleNameAndAbilityName)
          setTimeout(() => {
            setExtentionEnabled(logF, AssistAppA_bundleNameAndAbilityName)
            setTimeout(() => {
              excuteCase(caseName)
              setTimeout(() => {
                var isSucceed: boolean = false;
                if (backList.indexOf(caseName + '_onConnect_on_assist_change_extra_success') !== -1) {
                  isSucceed = true;
                }
                expect(isSucceed).assertEqual(true);
                console.info(logF + ' isSucceed : ' + isSucceed);
                done();
              }, 6000);
            }, 2000);
          }, 2000);
        }, 2000);
      }, 2000);
    });

    /**
    * @tc.number: AssistApp_0040
    * @tc.name: Call the accessibility API: "disableability()" to close the auxiliary application ab
    * @tc.desc: Call the accessibility API: "disableability()" to close the auxiliary application ab
    */
    it('AssistApp_0040', 1, async function (done) {
      const caseName = "AssistApp_0040";
      const logF = logTag + caseName;
      setTimeout(() => {
        setExtentionEnabled(logF, AssistAppA_bundleNameAndAbilityName)
        setTimeout(() => {
          setExtentionEnabled(logF, AssistAppB_bundleNameAndAbilityName)
          setTimeout(() => {
            excuteCase(caseName)
            setTimeout(() => {
              var isSucceedA: boolean = false;
              var isSucceedB: boolean = false;
              if (backList.indexOf(caseName + '_onConnect_A_on_assist_change_extra_success_A') !== -1) {
                isSucceedA = true;
              }
              if (backList.indexOf(caseName + '_onConnect_B_on_assist_change_extra_success_B') !== -1) {
                isSucceedB = true;
              }
              expect(isSucceedA && isSucceedB).assertEqual(true);
              console.info(logF + ' isSucceed : ' + (isSucceedA && isSucceedB));
              done();
            }, 6000);
          }, 2000);
        }, 2000);
      }, 2000);
    });

    /**
    * @tc.number: AssistApp_0050
    * @tc.name: Call the accessibility API: "enableability()" to start the auxiliary application
    * @tc.desc: Call the accessibility API: "enableability()" to start the auxiliary application
    */
    it('AssistApp_0050', 1, async function (done) {
      const caseName = "AssistApp_0050";
      const logF = logTag + caseName;
      let flagA = false
      let flagB = false
      setTimeout(() => {
        setExtentionEnabled(logF, AssistAppA_bundleNameAndAbilityName)
        setExtentionEnabled(logF, AssistAppB_bundleNameAndAbilityName)
        setTimeout(() => {
          setTimeout(() => {
            config.disableAbility(AssistAppA_bundleNameAndAbilityName).then(() => {
              console.info(logTag + caseName + AssistAppA_bundleNameAndAbilityName + " extentionDisabled ");
              flagA = true;
            }).catch((err) => {
              flagA = false;
            });
            config.disableAbility(AssistAppB_bundleNameAndAbilityName).then(() => {
              console.info(logTag + caseName + AssistAppB_bundleNameAndAbilityName + " extentionDisabled ");
              flagB = true;
            }).catch((err) => {
              flagB = false;
            });
            setTimeout(() => {
              let isSucceed = (flagA) && (flagB);
              expect(isSucceed).assertEqual(true);
              console.info(logF + ' isSucceed : ' + isSucceed);
              done();
            }, 4000);
          }, 5000);
        }, 2000);
      }, 2000);
    });

    /**
    * @tc.number: AssistApp_0060
    * @tc.name: Call the accessibility API: "enableability()" to start the auxiliary application
    * @tc.desc: Call the accessibility API: "enableability()" to start the auxiliary application
    */
    it('AssistApp_0060', 1, async function (done) {
      const caseName = "AssistApp_0060";
      const logF = logTag + caseName;
      setTimeout(() => {
        setExtentionDisabled(logF, AssistAppA_bundleNameAndAbilityName)
        setExtentionDisabled(logF, AssistAppB_bundleNameAndAbilityName)
        setTimeout(() => {
          setExtentionEnabled(logF, AssistAppA_bundleNameAndAbilityName)
          setExtentionEnabled(logF, AssistAppA_bundleNameAndAbilityName)
          setExtentionEnabled(logF, AssistAppA_bundleNameAndAbilityName)
          setTimeout(() => {
            excuteCase(caseName)
            setTimeout(() => {
              var isSucceed: boolean = false;
              if (backList.indexOf(caseName + '_onConnect_on_assist_change_extra_success') !== -1) {
                isSucceed = true;
              }
              expect(isSucceed).assertEqual(true);
              console.info(logF + ' isSucceed : ' + isSucceed);
              done();
            }, 6000);
          }, 2000);
        }, 2000);
      }, 2000);
    });

    /**
    * @tc.number: AssistApp_0070
    * @tc.name: Call the accessibility API: "disableability()" to close the auxiliary application
    * @tc.desc: Call the accessibility API: "disableability()" to close the auxiliary application
    */
    it('AssistApp_0070', 1, async function (done) {
      const caseName = "AssistApp_0070";
      const logF = logTag + caseName;
      let isSucceed: boolean = false;
      setExtentionEnabled(logF, AssistAppA_bundleNameAndAbilityName)
      setTimeout(() => {
        setExtentionDisabled(logF, AssistAppA_bundleNameAndAbilityName)
        setTimeout(() => {
          config.disableAbility(AssistAppA_bundleNameAndAbilityName).then(() => {
            console.info(logF + caseName + AssistAppA_bundleNameAndAbilityName + " extentionDisabled2 ");
            isSucceed = false;
          }).catch((err) => {
            console.info(logF + caseName + AssistAppA_bundleNameAndAbilityName + " extentionDisabled2 err=" +JSON.stringify(err));
            isSucceed = true;
          });
          setTimeout(() => {
            expect(isSucceed).assertEqual(true);
            console.info(logF + ' isSucceed : ' + isSucceed);
            done()
          }, 4000)
        }, 2000);
      }, 3000);
    });
  })
}
