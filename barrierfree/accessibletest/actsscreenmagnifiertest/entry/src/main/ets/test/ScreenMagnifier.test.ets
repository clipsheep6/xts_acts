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

const LOG = "[xtsLog]"
const START_TIMEOUT = 5000;
var backList = []
let subScriber = undefined;
var onbackList = []
const findTimesFormonbackList = (caseName) => {
  let findStr = caseName + "_on_success";
  let times = 0;
  for (let item of onbackList) {
    if (item === findStr) {
      if (times === 1) {
        return false;
      } else {
        times++
      }
    }
  }
  if (times === 1) {
    return true;
  }
  return false;
}
const screenMagnifierOn = (logTag, caseName) => {
  config.screenMagnifier.on((res) => {
    console.info(logTag + " ScreenMagnifier  res =  " + JSON.stringify(res));
    console.info(logTag + "_on_success");
    onbackList.push(caseName + "_on_success")
  });
}

const screenMagnifierOff = (logTag) => {
  config.screenMagnifier.off((res) => {
    console.info(logTag + " ScreenMagnifier res =  " + JSON.stringify(res));
  });
}

const excuteCase = (caseNamePara) => {
  console.info(LOG + 'ActsScreenMagnifierTest excuteCase: ' + caseNamePara);
  function publishCallback(err) {
    console.info(LOG + caseNamePara + "on_target_change publish call back result:" + JSON.stringify(err));
  }
  var commonEventPublishData = {
    data: caseNamePara + "_AccessibilityApp_start"
  }
  commonEvent.publish("on_target_change", commonEventPublishData, publishCallback);
}

export default function ScreenMagnifierTest() {
  describe('ActsScreenMagnifierTest', function () {

    beforeEach(async function (done) {
      console.info(LOG + 'ActsScreenMagnifierTest: beforeEach');
      setTimeout(() => {
        screenMagnifierOff(LOG)
        done();
      }, 3000);
    });

    beforeAll(async function (done) {
      console.info(LOG + 'ActsScreenMagnifierTest: beforeAll');
      subScriber = await commonEvent.createSubscriber({
        events: ['on_target_change_extra']
      });
      console.info(LOG + 'ActsScreenMagnifierTest  beforeAll subscribe send:' + JSON.stringify(subScriber));
      commonEvent.subscribe(subScriber, (err, data) => {
        console.info(LOG + ' ActsScreenMagnifierTest beforeAll subscribe data:' + JSON.stringify(data));
        if (data.data) {
          console.info(LOG + "  ActsScreenMagnifierTest CallBack:  " + data.data);
          backList.push(data.data)
        }
      });
      setTimeout(done(), START_TIMEOUT);
    });

    afterAll(async function (done) {
      console.info(LOG + 'ActsScreenMagnifierTest: afterAll');
      setTimeout(function () {
        commonEvent.unsubscribe(subScriber);
        config.screenMagnifier.set(false);
      }, 20000);
      done();
    });

    /**
    * @tc.number: RegisterScreenMagnifier_0010
    * @tc.name: Call api:set() to set the screenMagnifier parameter to "true".
    * @tc.desc: Call api:set() to set the screenMagnifier parameter to "true".
    */
    it('RegisterScreenMagnifier_0010', 1, async function (done) {
      const caseName = "RegisterScreenMagnifier_0010";
      const logF = LOG + caseName;
      var setValue: boolean = false
      config.screenMagnifier.set(setValue, (err) => {
        if (err?.code) {
          console.info(logF + " screenMagnifier err = " + JSON.stringify(err))
        } else {
          setTimeout(() => {
            screenMagnifierOn(logF, caseName)
            setTimeout(() => {
              excuteCase(caseName);
            }, 2000);
          }, 2000);
        }
      })
      setTimeout(() => {
        var isSucceedOnBack: boolean = false;
        if (onbackList.indexOf(caseName + '_on_success') !== -1) {
          isSucceedOnBack = true;
        }
        expect(isSucceedOnBack).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedOnBack));
        done();
      }, 6000);
    });
    /**
    * @tc.number: RegisterScreenMagnifier_0010
    * @tc.name: Call api:set() to set the screenMagnifier parameter to "false".
    * @tc.desc: Call api:set() to set the screenMagnifier parameter to "false".
    */
    it('RegisterScreenMagnifier_0020', 1, async function (done) {
      const caseName = "RegisterScreenMagnifier_0020";
      const logF = LOG + caseName;
      var setValue: boolean = true
      config.screenMagnifier.set(setValue, (err) => {
        console.info(logF + " screenMagnifier err = " + JSON.stringify(err))
        if (err?.code) {
          console.info(logF + " screenMagnifier err = " + JSON.stringify(err))
        } else {
          setTimeout(() => {
            screenMagnifierOn(logF, caseName)
            setTimeout(() => {
              excuteCase(caseName);
            }, 2000);
          }, 2000);
        }
      })
      setTimeout(() => {
        var isSucceedOnBack: boolean = false;
        if (onbackList.indexOf(caseName + '_on_success') !== -1) {
          isSucceedOnBack = true;
        }
        expect(isSucceedOnBack).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedOnBack));
        done();
      }, 6000);
    });

    /**
    * @tc.number: UnRegisterScreenMagnifier_0010
    * @tc.name: Call api:set() to set the screenMagnifier parameter to "true".
    * @tc.desc: Call api:set() to set the screenMagnifier parameter to "true".
    */
    it('UnRegisterScreenMagnifier_0010', 1, async function (done) {
      const caseName = "UnRegisterScreenMagnifier_0010";
      const logF = LOG + caseName;
      screenMagnifierOn(logF, caseName)
      setTimeout(() => {
        screenMagnifierOff(logF)
        setTimeout(() => {
          excuteCase(caseName);
        }, 2000);
      }, 2000);
      setTimeout(() => {
        var isSucceedOnBack: boolean = false;
        if (onbackList.indexOf(caseName + '_on_success') == -1) {
          isSucceedOnBack = true;
        }
        expect(isSucceedOnBack).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedOnBack));
        done();
      }, 6000);
    });

    /**
    * @tc.number: UnRegisterScreenMagnifier_0020
    * @tc.name: Call api:set() to set the screenMagnifier parameter to "false".
    * @tc.desc: Call api:set() to set the screenMagnifier parameter to "false".
    */
    it('UnRegisterScreenMagnifier_0020', 1, async function (done) {
      const caseName = "UnRegisterScreenMagnifier_0020";
      const logF = LOG + caseName;
      var setValue: boolean = true
      config.screenMagnifier.set(setValue, (err, data) => {
        console.info(logF + " screenMagnifier err = " + JSON.stringify(err))
        console.info(logF + " screenMagnifier data = " + JSON.stringify(data))
        if (err?.code) {
          console.info(logF + " screenMagnifier err = " + JSON.stringify(err))
        } else {
          setTimeout(() => {
            screenMagnifierOn(logF, caseName)
            setTimeout(() => {
              screenMagnifierOff(logF)
              setTimeout(() => {
                excuteCase(caseName);
              }, 2000);
            }, 1000);
          }, 1000);
        }
      })
      setTimeout(() => {
        var isSucceedOnBack: boolean = false;
        if (onbackList.indexOf(caseName + '_on_success') == -1) {
          isSucceedOnBack = true;
        }
        expect(isSucceedOnBack).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedOnBack));
        done();
      }, 6000);
    });

    /**
    * @tc.number: SetGetScreenMagnifier_0010
    * @tc.name: Call api:set() to set the screenMagnifier parameter to "true".
    * @tc.desc: Call api:set() to set the screenMagnifier parameter to "true".
    */
    it('SetGetScreenMagnifier_0010', 1, async function (done) {
      const caseName = "SetGetScreenMagnifier_0010";
      const logF = LOG + caseName;
      var setValue: boolean = true
      config.screenMagnifier.set(setValue, (err) => {
        console.info(logF + " ScreenMagnifier err = " + JSON.stringify(err))
        if (err?.code) {
          console.info(logF + " ScreenMagnifier err = " + JSON.stringify(err))
        } else {
          setTimeout(() => {
            excuteCase(caseName);
          }, 2000);
        }
      })
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        expect(isSucceedTarget).assertEqual(true);
        console.info(logF + ' isSucceed : ' + isSucceedTarget);
        done();
      }, 6000);
    });

    /**
    * @tc.number: SetGetScreenMagnifier_0020
    * @tc.name: Call api:set() to set the screenMagnifier parameter to "false".
    * @tc.desc: Call api:set() to set the screenMagnifier parameter to "false".
    */
    it('SetGetScreenMagnifier_0020', 1, async function (done) {
      const caseName = "SetGetScreenMagnifier_0020";
      const logF = LOG + caseName;
      var setValue: boolean = false
      config.screenMagnifier.set(setValue, (err) => {
        console.info(logF + " ScreenMagnifier err = " + JSON.stringify(err))
        if (err?.code) {
          console.info(logF + " ScreenMagnifier set err = " + JSON.stringify(err))
        } else {
          setTimeout(() => {
            excuteCase(caseName);
          }, 2000);
        }
      })
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        expect(isSucceedTarget).assertEqual(true);
        console.info(logF + ' isSucceed : ' + isSucceedTarget);
        done();
      }, 4000);
    });

    /**
    * @tc.number: SetGetScreenMagnifier_0030
    * @tc.name: Call api:set() to set the screenMagnifier parameter to "true".
    * @tc.desc: Call api:set() to set the screenMagnifier parameter to "true".
    */
    it('SetGetScreenMagnifier_0030', 1, async function (done) {
      const caseName = "SetGetScreenMagnifier_0030";
      const logF = LOG + caseName;
      var setValue: boolean = true
      config.screenMagnifier.set(setValue).then(() => {
        setTimeout(() => {
          excuteCase(caseName);
        }, 2000);
      }).catch((err) => {
        console.info(logF + " ScreenMagnifier set err=" + JSON.stringify(err));
      });
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        expect(isSucceedTarget).assertEqual(true);
        console.info(logF + ' isSucceed : ' + isSucceedTarget);
        done();
      }, 4000);
    });

    /**
    * @tc.number: SetGetScreenMagnifier_0040
    * @tc.name: Call api:set() to set the screenMagnifier parameter to "false".
    * @tc.desc: Call api:set() to set the screenMagnifier parameter to "false".
    */
    it('SetGetScreenMagnifier_0040', 1, async function (done) {
      const caseName = "SetGetScreenMagnifier_0040";
      const logF = LOG + caseName;
      var setValue: boolean = false
      config.screenMagnifier.set(setValue).then(() => {
        setTimeout(() => {
          excuteCase(caseName);
        }, 2000);
      }).catch((err) => {
        console.info(logF + " ScreenMagnifier set err=" + JSON.stringify(err));
      });
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        expect(isSucceedTarget).assertEqual(true);
        console.info(logF + ' isSucceed : ' + isSucceedTarget);
        done();
      }, 4000);
    });

    /**
    * @tc.number: SetGetScreenMagnifier_0050
    * @tc.name: Call api:set() to set the screenMagnifier parameter to "true"、"false"、"true".
    * @tc.desc: Call api:set() to set the screenMagnifier parameter to "true"、"false"、"true".
    */
    it('SetGetScreenMagnifier_0050', 3, async function (done) {
      const caseName = "SetGetScreenMagnifier_0050";
      const logF = LOG + caseName;
      var setValue1: boolean = true
      var setValue2: boolean = false
      var setValue3: boolean = true
      config.screenMagnifier.set(setValue1).then(() => {
        config.screenMagnifier.set(setValue2).then(() => {
          config.screenMagnifier.set(setValue3).then(() => {
            setTimeout(() => {
              excuteCase(caseName);
            }, 2000);
          }).catch((err) => {
            console.info(logF + " ScreenMagnifier set3 err=" + JSON.stringify(err));
          });
        }).catch((err) => {
          console.info(logF + " ScreenMagnifier set2 err=" + JSON.stringify(err));
        });

      }).catch((err) => {
        console.info(logF + " ScreenMagnifier set1 err=" + JSON.stringify(err));
      });
      setTimeout(() => {
        var isSucceedTarget: boolean = false;
        if (backList.indexOf(caseName + '_on_target_change_extra_success') !== -1) {
          isSucceedTarget = true;
        }
        expect(isSucceedTarget).assertEqual(true);
        console.info(logF + ' isSucceed : ' + isSucceedTarget);
        done();
      }, 4000);
    });

    /**
    * @tc.number: SetGetScreenMagnifier_0060
    * @tc.name: Test callback form: call API: set() successfully for three consecutive times to set the screenMagnifier parameter to "false".
    * @tc.desc: Test callback form: call API: set() successfully for three consecutive times to set the screenMagnifier parameter to "false".
    */
    it('SetGetScreenMagnifier_0060', 3, async function (done) {
      const caseName = "SetGetScreenMagnifier_0060";
      const logF = LOG + caseName;
      var setValue: boolean = true
      var isSucceedFind: boolean = false;
      config.screenMagnifier.set(setValue, (err) => {
        if (err?.code) {
          console.info(logF + " screenMagnifier set err = " + JSON.stringify(err))
        } else {
          setTimeout(() => {
            screenMagnifierOn(logF, caseName)
            setTimeout(() => {
              excuteCase(caseName);
              setTimeout(() => {
                isSucceedFind = findTimesFormonbackList(caseName);
              }, 2000);
            }, 2000);
          }, 2000);
        }
      })
      setTimeout(() => {
        expect(isSucceedFind).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedFind));
        done();
      }, 8000);
    });

    /**
    * @tc.number: SetGetScreenMagnifier_0070
    * @tc.name: Test callback form: call API: set() successfully for three consecutive times to set the screenMagnifier parameter to "true".
    * @tc.desc: Test callback form: call API: set() successfully for three consecutive times to set the screenMagnifier parameter to "true".
    */
    it('SetGetScreenMagnifier_0070', 3, async function (done) {
      const caseName = "SetGetScreenMagnifier_0070";
      const logF = LOG + caseName;
      var setValue: boolean = false
      var isSucceedFind: boolean = false;
      config.screenMagnifier.set(setValue, (err) => {
        if (err?.code) {
          console.info(logF + " screenMagnifier set err = " + JSON.stringify(err))
        } else {
          setTimeout(() => {
            screenMagnifierOn(logF, caseName)
            setTimeout(() => {
              excuteCase(caseName);
              setTimeout(() => {
                isSucceedFind = findTimesFormonbackList(caseName);
              }, 2000);
            }, 2000);
          }, 2000);
        }
      })
      setTimeout(() => {
        expect(isSucceedFind).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedFind));
        done();
      }, 8000);
    });
    /**
    * @tc.number: SetGetScreenMagnifier_0080
    * @tc.name: Test promise form: call API: set() successfully for three consecutive times to set the screenMagnifier parameter to "false".
    * @tc.desc: Test promise form: call API: set() successfully for three consecutive times to set the screenMagnifier parameter to "false".
    */
    it('SetGetScreenMagnifier_0080', 3, async function (done) {
      const caseName = "SetGetScreenMagnifier_0080";
      const logF = LOG + caseName;
      var setValue: boolean = true
      var isSucceedFind: boolean = false;
      config.screenMagnifier.set(setValue).then(() => {
        console.info(logF + " screenMagnifier set  success.");
        setTimeout(() => {
          screenMagnifierOn(logF, caseName)
          setTimeout(() => {
            excuteCase(caseName);
            setTimeout(() => {
              isSucceedFind = findTimesFormonbackList(caseName);
            }, 2000);
          }, 2000);
        }, 2000);
      }).catch((err) => {
        console.info(logF + " screenMagnifier set err=" + JSON.stringify(err));
      });
      setTimeout(() => {
        expect(isSucceedFind).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedFind));
        done();
      }, 8000);
    });
    /**
    * @tc.number: SetGetScreenMagnifier_0090
    * @tc.name: Test promise form: call API: set() successfully for three consecutive times to set the screenMagnifier parameter to "true".
    * @tc.desc: Test promise form: call API: set() successfully for three consecutive times to set the screenMagnifier parameter to "true".
    */
    it('SetGetScreenMagnifier_0090', 3, async function (done) {
      const caseName = "SetGetScreenMagnifier_0090";
      const logF = LOG + caseName;
      var setValue: boolean = false;
      var isSucceedFind: boolean = false;
      config.screenMagnifier.set(setValue).then(() => {
        console.info(logF + " screenMagnifier set  success.");
        setTimeout(() => {
          screenMagnifierOn(logF, caseName)
          setTimeout(() => {
            excuteCase(caseName);
            setTimeout(() => {
              isSucceedFind = findTimesFormonbackList(caseName);
            }, 2000);
          }, 2000);
        }, 2000);
      }).catch((err) => {
        console.info(logF + " screenMagnifier set err=" + JSON.stringify(err));
      });
      setTimeout(() => {
        expect(isSucceedFind).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedFind));
        done();
      }, 8000);
    });

  })

}
