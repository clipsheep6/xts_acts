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

const bundleName = 'com.example.accessibilitydfx.hmservice/ServiceExtAbility';
const LOG = "[xtsLog]"
var backList = []
let subScriber = undefined;

function sleep(delay) {
  var start = (new Date()).getTime();
  while ((new Date()).getTime() - start < delay) {
    continue;
  }
}

const capabilityArray: accessibility.Capability[] = [
  'retrieve',
  'keyEventObserver',
  'gesture',
]

const capabilityArray2: accessibility.Capability[] = [
  'retrieve',
  'keyEventObserver',
  'gesture',
  'touchGuide'
]

const setEnabledAndDisabledTimes = (caseName, logTag, bundleNameAndabilityName, times) => {
  config.enableAbility(bundleNameAndabilityName, capabilityArray).then(() => {
    console.info(logTag + caseName + "  times:" + times + " extentionEnabled" )
    setTimeout(() => {
      config.disableAbility(bundleNameAndabilityName).then(() => {
        console.info(logTag + caseName + "  times:" + times + " extentionDisabled " );
      });
    }, 500)
  });
}

const onAndOffAccessibility = (times, logTag) => {
  config.on('enabledAccessibilityExtensionListChange', () => {
    console.info(logTag + " times: " + times + "   onAccessibility");
      config.off('enabledAccessibilityExtensionListChange', () => {
        console.info(logTag + " times: " + times + "   offAccessibility");
      });
  });
}

const onehundredTimesOnAndOffAccessibility = (caseName, logF, thisBundleName) => {
  let times = 1;
  let id = setInterval(() => {
    onAndOffAccessibility(times, logF);
    times++;
    if (times > 100) {
      clearInterval(id)
    }
  }, 50);
};

const commonEventPublishOnTargetChangeExtra = (caseName) => {

  function publishCallback(err) {
    console.info(LOG + caseName + " on_target_change_extra  publish call back result:" + JSON.stringify(err));
  }

  var commonEventPublishData = {
    data: caseName + "_on_target_change_extra_success",
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback);
}

const setExtentionDfxEnabled = (caseName, logTag, bundleNameAndabilityName) => {
  config.enableAbility(bundleNameAndabilityName, capabilityArray).then(() => {
    console.info(logTag + caseName + bundleNameAndabilityName + "  setExtentionDfxEnabled ");
  });
}

const setExtentionDfxEnabled2 = (caseName, logTag, bundleNameAndabilityName) => {
  config.enableAbility(bundleNameAndabilityName, capabilityArray2).then(() => {
    console.info(logTag + caseName + bundleNameAndabilityName + "  setExtentionDfxEnabled ");
  });
}
const setEnabledAndnDisabledAndPublishOnTargetChange2 = (caseName, logTag, bundleNameAndabilityName) => {
  config.enableAbility(bundleNameAndabilityName, capabilityArray2).then(() => {
    console.info(logTag + caseName + " extentionEnabled ");
    config.disableAbility(bundleNameAndabilityName).then(() => {
      console.info(logTag + caseName + " extentionDisabled ");
      commonEventPublishOnTargetChangeExtra(caseName)
    });
  });
}

const setEnabledAndnDisabledAndPublishOnTargetChange = (caseName, logTag, bundleNameAndabilityName) => {
  config.enableAbility(bundleNameAndabilityName, capabilityArray).then(() => {
    console.info(logTag + caseName + " extentionEnabled ");
    config.disableAbility(bundleNameAndabilityName).then(() => {
      console.info(logTag + caseName + " extentionDisabled ");
      commonEventPublishOnTargetChangeExtra(caseName)
    });
  });

}

const commonEventPublishExecuteAccessibilityEvent = (caseName) => {

  function publishCallback(err) {
    console.info(LOG + " execute_accessibility_event  publish call back result:" + JSON.stringify(err));
  }

  var commonEventPublishData = {
    data: caseName + "_execute_accessibility_event_success",
  }
  commonEvent.publish("execute_accessibility_event", commonEventPublishData, publishCallback);
}

const setExtentionDisabled = (logTag, bundleNameAndabilityName) => {
  config.disableAbility(bundleNameAndabilityName).then(() => {
    console.info(logTag  + bundleNameAndabilityName + " extentionDisabled ");
  })
}

export default function PerformanceTest() {

  describe('ActsDfxTest', function () {
    beforeEach(async function (done) {
      console.info(LOG + 'ActsDfxTest: beforeEach');
      setTimeout(() => {
        done();
      }, 8000);
    });

    beforeAll(async function (done) {
      console.info(LOG + 'ActsDfxTest: beforeAll');
      subScriber = await commonEvent.createSubscriber({
        events: ['on_target_change_extra', 'on_assist_change_extra']
      });
      console.info(LOG + 'ActsDfxTest  beforeAll subscribe send:' + JSON.stringify(subScriber));
      commonEvent.subscribe(subScriber, (err, data) => {
        console.info(LOG + ' ActsDfxTest beforeAll subscribe data:' + JSON.stringify(data));
        if (data.data) {
          console.info(LOG + "  Event CallBack:  " + data.data);
          backList.push(data.data)
        }
      });
      setTimeout(done(), 3000);
    });

    afterAll(async function (done) {
      setTimeout(function () {
        console.info(LOG + 'ActsDfxTest: afterAll');
        commonEvent.unsubscribe(subScriber);
        config.disableAbility(bundleName).then(() => {
          console.info(LOG + 'ActsDfxTest afterAll disableAbility ' );
        });
        setTimeout(done(), 3000);
      }, 25000);
    });
    /**
    * @tc.number: Dfx_0050
    * @tc.name: Call api:on() to subscribe to the barrier free state change event, call api:off() to unsubscribe from the barrier free state change event, and call it repeatedly for 100 times
    * @tc.desc: Call api:on() to subscribe to the barrier free state change event, call api:off() to unsubscribe from the barrier free state change event, and call it repeatedly for 100 times
    */
    it('Dfx_0050', 4, async function (done) {
      const caseName = 'Dfx_0050';
      const logF = LOG + caseName;
      var onBackIsSucceed: boolean = false;
      var isSucceedTarget: boolean = false;
      onehundredTimesOnAndOffAccessibility(caseName, logF, bundleName);
      setTimeout(() => {
        config.on('enabledAccessibilityExtensionListChange', () => {
          onBackIsSucceed = true
          config.off('enabledAccessibilityExtensionListChange', () => {
          });
        });
        setTimeout(() => {
          setEnabledAndnDisabledAndPublishOnTargetChange(caseName, logF, bundleName);
          setTimeout(() => {
            if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
              isSucceedTarget = true;
            }
            expect(isSucceedTarget && onBackIsSucceed).assertEqual(true);
            console.info(logF + ' isSucceed : ' + (isSucceedTarget && onBackIsSucceed));
            done();
          }, 3000);
        }, 2000)
      }, 6000);
    });


    /**
    * @tc.number: Dfx_0060
    * @tc.name: Call api:on() to subscribe to the barrier free state change event, call api:off() to unsubscribe from the barrier free state change event, and call it repeatedly for 100 times
    * @tc.desc: Call api:on() to subscribe to the barrier free state change event, call api:off() to unsubscribe from the barrier free state change event, and call it repeatedly for 100 times
    */
    it('Dfx_0060', 4, async function (done) {
      const caseName = 'Dfx_0060';
      const logF = LOG + caseName;
      var onBackIsSucceed: boolean = false;
      var isSucceedTarget: boolean = false;
      onehundredTimesOnAndOffAccessibility(caseName, logF, bundleName);
      setTimeout(() => {
        config.on('enabledAccessibilityExtensionListChange', () => {
          onBackIsSucceed = true
          config.off('enabledAccessibilityExtensionListChange', () => {
          });
        });
        setTimeout(() => {
          setEnabledAndnDisabledAndPublishOnTargetChange2(caseName, logF, bundleName);
          setTimeout(() => {
            if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
              isSucceedTarget = true;
            }
            expect(isSucceedTarget && onBackIsSucceed).assertEqual(true);
            console.info(logF + ' isSucceed : ' + (isSucceedTarget && onBackIsSucceed));
            done();
          }, 3000);
        }, 2000)
      }, 6000);
    });

    /**
    * @tc.number: Dfx_0070
    * @tc.name: Callback. Call the barrier free API: "getwindowrootelement()" to obtain the barrier free root node information, and call it repeatedly for 100 times
    * @tc.desc: Callback. Call the barrier free API: "getwindowrootelement()" to obtain the barrier free root node information, and call it repeatedly for 100 times
    */
    it('Dfx_0070', 4, async function (done) {
      const caseName = 'Dfx_0070';
      const logF = LOG + caseName;
      setExtentionDfxEnabled(caseName, logF, bundleName)
      setTimeout(() => {
        commonEventPublishExecuteAccessibilityEvent(caseName)
      }, 2000);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        expect(isSucceedTarget).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget));
        done();
      }, 15000);
    });

    /**
    * @tc.number: Dfx_0080
    * @tc.name: Promise. Call the barrier free API: "getwindowrootelement()" to obtain the barrier free root node information, and call it repeatedly for 100 times
    * @tc.desc: Promise. Call the barrier free API: "getwindowrootelement()" to obtain the barrier free root node information, and call it repeatedly for 100 times
    */
    it('Dfx_0080', 4, async function (done) {
      const caseName = 'Dfx_0080';
      const logF = LOG + caseName;
      setExtentionDfxEnabled(caseName, logF, bundleName)
      setTimeout(() => {
        commonEventPublishExecuteAccessibilityEvent(caseName)
      }, 2000);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        expect(isSucceedTarget).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget));
        done();
      }, 15000);
    });

    /**
    * @tc.number: Dfx_0090
    * @tc.name: Callback. Call the barrier free API: "getwindow()" to obtain the information of the active window node, and call it repeatedly for 100 times
    * @tc.desc: Callback. Call the barrier free API: "getwindow()" to obtain the information of the active window node, and call it repeatedly for 100 times
    */
    it('Dfx_0090', 4, async function (done) {
      const caseName = 'Dfx_0090';
      const logF = LOG + caseName;
      setExtentionDfxEnabled(caseName, logF, bundleName)
      setTimeout(() => {
        commonEventPublishExecuteAccessibilityEvent(caseName)
      }, 2000);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        expect(isSucceedTarget).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget));
        done();
      }, 15000);
    });

    /**
    * @tc.number: Dfx_0100
    * @tc.name: Promise. Call the barrier free API: "getwindow()" to obtain the information of the active window node, and call it repeatedly for 100 times
    * @tc.desc: Promise. Call the barrier free API: "getwindow()" to obtain the information of the active window node, and call it repeatedly for 100 times
    */
    it('Dfx_0100', 4, async function (done) {
      const caseName = 'Dfx_0100';
      const logF = LOG + caseName;
      setExtentionDfxEnabled(caseName, logF, bundleName)
      setTimeout(() => {
        commonEventPublishExecuteAccessibilityEvent(caseName)
      }, 2000);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        expect(isSucceedTarget).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget));
        done();
      }, 15000);
    });

    /**
    * @tc.number: Dfx_0130
    * @tc.name: Callback. Call the accessibility API: "disableability()" close the auxiliary application and call it for 100 times
    * @tc.desc: Callback. Call the accessibility API: "disableability()" close the auxiliary application and call it for 100 times
    */
    it('Dfx_0130', 4, async function (done) {
      const caseName = 'Dfx_0130';
      const logF = LOG + caseName;
      let times = 0;
      for (times =0; times < 100; times++){
        setEnabledAndDisabledTimes(caseName, logF, bundleName, times);
      }
      if (times == 100) {
        //clearInterval(id)
        setTimeout(() => {
          setExtentionDisabled(logF, bundleName);
          setTimeout(() => {
            accessibility.getAbilityLists('all', 'disable', (err, res) => {
              if (err?.code) {
                console.info(logF + "getAbilityLists err=" + JSON.stringify(err));
              } else {
                console.info(logF + "getAbilityLists res=" + JSON.stringify(res));
                commonEventPublishOnTargetChangeExtra(caseName);
                setTimeout(() => {
                  var isSucceedTarget: boolean = false;
                  if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
                    isSucceedTarget = true;
                  }
                  expect(isSucceedTarget).assertEqual(true);
                  console.info(logF + ' isSucceed : ' + (isSucceedTarget));
                  done();
                }, 2000);
              }
            });
          }, 2000)
        }, 13000)
      }
    });
    /**
    * @tc.number: Dfx_0140
    * @tc.name: Promise. Call the accessibility API: "disableability()" close the auxiliary application and call it for 100 times
    * @tc.desc: Promise. Call the accessibility API: "disableability()" close the auxiliary application and call it for 100 times
    */
    it('Dfx_0140', 4, async function (done) {
      const caseName = 'Dfx_0140';
      const logF = LOG + caseName;
      let times = 0;
      for (times =0; times < 100; times++){
        setEnabledAndDisabledTimes(caseName, logF, bundleName, times);
      }
      if (times == 100) {
        setTimeout(() => {
          setExtentionDisabled(logF, bundleName);
          setTimeout(() => {
            accessibility.getAbilityLists('all', 'disable').then((AccessibilityAbilityInfoArray) => {
              console.info(logF + "getAbilityLists success=" + JSON.stringify(AccessibilityAbilityInfoArray));
              commonEventPublishOnTargetChangeExtra(caseName);
              setTimeout(() => {
                var isSucceedTarget: boolean = false;
                if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
                  isSucceedTarget = true;
                }
                expect(isSucceedTarget).assertEqual(true);
                console.info(logF + ' isSucceed : ' + (isSucceedTarget));
                done();
              }, 2000);
            }).catch((AccessibilityAbilityInfoError) => {
              console.info(logF + "getAbilityLists err=" + JSON.stringify(AccessibilityAbilityInfoError));
            });
          }, 2000)
        }, 13000)
      }
    });

    /**
    * @tc.number: Dfx_0150
    * @tc.name: Call the accessibility api: "enableability()" to start the accessibility auxiliary application, call the accessibility api: "disableability()" to close the auxiliary application, and call it repeatedly for 100 times
    * @tc.desc: Call the accessibility api: "enableability()" to start the accessibility auxiliary application, call the accessibility api: "disableability()" to close the auxiliary application, and call it repeatedly for 100 times
    */
    it('Dfx_0150', 4, async function (done) {
      const caseName = 'Dfx_0150';
      const logF = LOG + caseName;
      let times = 0;
      for (times =0; times < 100; times++){
        setEnabledAndDisabledTimes(caseName, logF, bundleName, times);
      }
      if (times == 100) {
        setTimeout(() => {
          setExtentionDfxEnabled(caseName, logF, bundleName);
          setTimeout(() => {
            accessibility.getAbilityLists('all', 'enable', (err, res) => {
              if (err?.code) {
                console.info(logF + "getAbilityLists err=" + JSON.stringify(err));
              } else {
                console.info(logF + "getAbilityLists res=" + JSON.stringify(res));
                commonEventPublishOnTargetChangeExtra(caseName);
              }
            });
          }, 2000)
        }, 3000)
        setTimeout(() => {
          var isSucceedTarget: boolean = false;
          if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
            isSucceedTarget = true;
          }
          expect(isSucceedTarget).assertEqual(true);
          console.info(logF + ' isSucceed : ' + (isSucceedTarget));
          done();
        }, 10000);
      }
    });
    /**
    * @tc.number: Dfx_0160
    * @tc.name: Call the accessibility api: "enableability()" to start the accessibility auxiliary application, call the accessibility api: "disableability()" to close the auxiliary application, and call it repeatedly for 100 times
    * @tc.desc: Call the accessibility api: "enableability()" to start the accessibility auxiliary application, call the accessibility api: "disableability()" to close the auxiliary application, and call it repeatedly for 100 times
    */
    it('Dfx_0160', 4, async function (done) {
      const caseName = 'Dfx_0160';
      const logF = LOG + caseName;
      let times = 1;
      let id = setInterval(() => {
        setExtentionDfxEnabled(caseName, logF, bundleName);
        times++;
        if (times > 100) {
          clearInterval(id)
          setTimeout(() => {
            setExtentionDfxEnabled(caseName, logF, bundleName);
            setTimeout(() => {
              accessibility.getAbilityLists('all', 'enable').then((AccessibilityAbilityInfoArray) => {
                console.info(logF + "getAbilityLists success=" + JSON.stringify(AccessibilityAbilityInfoArray));
                commonEventPublishOnTargetChangeExtra(caseName);
              }).catch((AccessibilityAbilityInfoError) => {
                console.info(logF + "getAbilityLists err=" + JSON.stringify(AccessibilityAbilityInfoError));
              });
            }, 2000)
          }, 3000)
          setTimeout(() => {
            var isSucceedTarget: boolean = false;
            if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
              isSucceedTarget = true;
            }
            expect(isSucceedTarget).assertEqual(true);
            console.info(logF + ' isSucceed : ' + (isSucceedTarget));
            done();
          }, 10000);
        }
      }, 50);
    });
    /**
    * @tc.number: Dfx_0180
    * @tc.name: Call the barrier free API: "gestureinject()" set and send the click gesture coordinate point and path, and execute the cycle 100 times.
    * @tc.desc: Call the barrier free API: "gestureinject()" set and send the click gesture coordinate point and path, and execute the cycle 100 times.
    */
    it('Dfx_0180', 4, async function (done) {
      const caseName = 'Dfx_0180';
      const logF = LOG + caseName;
      setExtentionDfxEnabled(caseName, logF, bundleName)
      setTimeout(() => {
        commonEventPublishExecuteAccessibilityEvent(caseName)
      }, 2000);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        expect(isSucceedTarget).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget));
        done();
      }, 15000);
    });
    /**
    * @tc.number: Dfx_0190
    * @tc.name: Call the barrier free API: "gestureinject()" set and send the click gesture coordinate point and path, and execute the cycle 100 times.
    * @tc.desc: Call the barrier free API: "gestureinject()" set and send the click gesture coordinate point and path, and execute the cycle 100 times.
    */
    it('Dfx_0190', 4, async function (done) {
      const caseName = 'Dfx_0190';
      const logF = LOG + caseName;
      setExtentionDfxEnabled(caseName, logF, bundleName)
      setTimeout(() => {
        commonEventPublishExecuteAccessibilityEvent(caseName)
      }, 2000);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        expect(isSucceedTarget).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget));
        done();
      }, 15000);
    });
    /**
    * @tc.number: Dfx_0110
    * @tc.name: Call the barrier free API: "getwindowrootelement()" to obtain the barrier free root node information, and call it repeatedly for 100 times.
    * @tc.desc: Call the barrier free API: "getwindowrootelement()" to obtain the barrier free root node information, and call it repeatedly for 100 times.
    */
    it('Dfx_0110', 4, async function (done) {
      const caseName = 'Dfx_0110';
      const logF = LOG + caseName;
      setTimeout(() => {
        setExtentionDisabled(logF, bundleName);
        setTimeout(() => {
          setExtentionDfxEnabled2(caseName, logF, bundleName);
          setTimeout(() => {
            commonEventPublishExecuteAccessibilityEvent(caseName)
            setTimeout(() => {
              var isSucceedTarget: boolean = false;
              if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
                isSucceedTarget = true;
              }
              expect(isSucceedTarget).assertEqual(true);
              console.info(logF + ' isSucceed : ' + (isSucceedTarget));
              done();
            }, 15000);
          }, 2000);
        }, 1000);
      }, 1000);
    });
    /**
    * @tc.number: Dfx_0120
    * @tc.name: Call the barrier free API: "getwindowrootelement()" to obtain the barrier free root node information, and call it repeatedly for 100 times.
    * @tc.desc: Call the barrier free API: "getwindowrootelement()" to obtain the barrier free root node information, and call it repeatedly for 100 times.
    */
    it('Dfx_0120', 4, async function (done) {
      const caseName = 'Dfx_0120';
      const logF = LOG + caseName;
      setExtentionDfxEnabled2(caseName, logF, bundleName)
      setTimeout(() => {
        commonEventPublishExecuteAccessibilityEvent(caseName)
      }, 2000);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        expect(isSucceedTarget).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget));
        done();
      }, 15000);
    });
    /**
    * @tc.number: Dfx_0170
    * @tc.name: Call the accessibility API: "performaction()" specify the action actionname= "accessibilityfocus", and execute the control operation 100 times.
    * @tc.desc: Call the accessibility API: "performaction()" specify the action actionname= "accessibilityfocus", and execute the control operation 100 times.
    */
    it('Dfx_0170', 4, async function (done) {
      const caseName = 'Dfx_0170';
      const logF = LOG + caseName;
      setExtentionDfxEnabled2(caseName, logF, bundleName)
      setTimeout(() => {
        commonEventPublishExecuteAccessibilityEvent(caseName)
      }, 2000);
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        if (backList.indexOf(caseName + '_on_assist_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        expect(isSucceedTarget).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedTarget));
        done();
      }, 25000);
    });
  })
}
