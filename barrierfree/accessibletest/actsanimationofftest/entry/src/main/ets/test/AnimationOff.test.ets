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

const animationOffOn = (logTag, caseName) => {
  config.animationOff.on((res) => {
    console.info(logTag + " animationOff  res =  " + JSON.stringify(res));
    console.info(logTag + "_on_success");
    onbackList.push(caseName + "_on_success")
  });
}

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

const animationOffOff = (logTag) => {
  config.animationOff.off();
}

const excuteCase = (caseNamePara) => {
  console.info(LOG + 'ActsAnimationOffTest excuteCase: ' + caseNamePara);

  function publishCallback(err) {
    console.info(LOG + caseNamePara + "on_target_change publish call back result:" + JSON.stringify(err));
  }

  var commonEventPublishData = {
    data: caseNamePara + "_AccessibilityApp_start"
  }
  commonEvent.publish("on_target_change", commonEventPublishData, publishCallback);
}

export default function AnimationOffTest() {
  describe('ActsAnimationOffTest', function () {

    beforeEach(async function (done) {
      console.info(LOG + 'ActsAnimationOffTest: beforeEach');
      setTimeout(() => {
        animationOffOff(LOG)
        done();
      }, 3000);
    });

    beforeAll(async function (done) {
      console.info(LOG + 'ActsAnimationOffTest: beforeAll');
      subScriber = await commonEvent.createSubscriber({
        events: ['on_target_change_extra']
      });
      console.info(LOG + 'ActsAnimationOffTest  beforeAll subscribe send:' + JSON.stringify(subScriber));
      commonEvent.subscribe(subScriber, (err, data) => {
        console.info(LOG + ' ActsAnimationOffTest beforeAll subscribe data:' + JSON.stringify(data));
        if (data.data) {
          console.info(LOG + '  ActsAnimationOffTest CallBack:  ' + data.data);
          backList.push(data.data)
        }
      });
      setTimeout(done(), START_TIMEOUT);
    });

    afterAll(async function (done) {
      console.info(LOG + 'ActsAnimationOffTest: afterAll');
      setTimeout(function () {
        commonEvent.unsubscribe(subScriber);
        config.animationOff.set(false);
      }, 20000);
      done();
    });

    /**
    * @tc.number: RegisterAnimationOff_0010
    * @tc.name: Call api:set() to set the animation parameter to "true".
    * @tc.desc: Call api:set() to set the animation parameter to "true".
    */
    it('RegisterAnimationOff_0010', 1, async function (done) {
      const caseName = "RegisterAnimationOff_0010";
      const logF = LOG + caseName;
      var setValue: boolean = false
      config.animationOff.set(setValue, (err, data) => {
        console.info(logF + " contentTimeout err = " + JSON.stringify(err))
        console.info(logF + " contentTimeout data = " + JSON.stringify(data))
        if (err?.code) {
          console.info(logF + " contentTimeout err = " + JSON.stringify(err))
        } else {
          setTimeout(() => {
            animationOffOn(logF, caseName)
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
    * @tc.number: RegisterAnimationOff_0020
    * @tc.name: Call api:set() to set the animation parameter to "false".
    * @tc.desc: Call api:set() to set the animation parameter to "false".
    */
    it('RegisterAnimationOff_0020', 1, async function (done) {
      const caseName = "RegisterAnimationOff_0020";
      const logF = LOG + caseName;
      var setValue: boolean = true
      config.animationOff.set(setValue, (err) => {
        console.info(logF + " contentTimeout err = " + JSON.stringify(err))
        if (err?.code) {
          console.info(logF + " contentTimeout err = " + JSON.stringify(err))
        } else {
          setTimeout(() => {
            animationOffOn(logF, caseName)
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
    * @tc.number: UnRegisterAnimationOff_0010
    * @tc.name: Call api:set() to set the animation parameter to "true".
    * @tc.desc: Call api:set() to set the animation parameter to "true".
    */
    it('UnRegisterAnimationOff_0010', 1, async function (done) {
      const caseName = "UnRegisterAnimationOff_0010";
      const logF = LOG + caseName;
      animationOffOn(logF, caseName)
      setTimeout(() => {
        animationOffOff(logF)
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
    * @tc.number: UnRegisterAnimationOff_0020
    * @tc.name: Call api:set() to set the animation parameter to "false".
    * @tc.desc: Call api:set() to set the animation parameter to "false".
    */
    it('UnRegisterAnimationOff_0020', 1, async function (done) {
      const caseName = "UnRegisterAnimationOff_0020";
      const logF = LOG + caseName;
      var setValue: boolean = true
      config.animationOff.set(setValue, (err, data) => {
        console.info(logF + " contentTimeout err = " + JSON.stringify(err))
        console.info(logF + " contentTimeout data = " + JSON.stringify(data))
        if (err?.code) {
          console.info(logF + " contentTimeout err = " + JSON.stringify(err))
        } else {
          setTimeout(() => {
            animationOffOn(logF, caseName);
            setTimeout(() => {
              animationOffOff(logF)
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
    * @tc.number: SetGetAnimationOff_0010
    * @tc.name: Call api:get() to get the animation parameter value.
    * @tc.desc: Call api:get() to get the animation parameter value.
    */
    it('SetGetAnimationOff_0010', 1, async function (done) {
      const caseName = "SetGetAnimationOff_0010";
      const logF = LOG + caseName;
      var setValue: boolean = true
      config.animationOff.set(setValue, (err) => {
        console.info(logF + " AnimationOff err = " + JSON.stringify(err))
        if (err?.code) {
          console.info(logF + " AnimationOff err = " + JSON.stringify(err))
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
    * @tc.number: SetGetAnimationOff_0020
    * @tc.name: Call api:get() to get the animation parameter value.
    * @tc.desc: Call api:get() to get the animation parameter value.
    */
    it('SetGetAnimationOff_0020', 1, async function (done) {
      const caseName = "SetGetAnimationOff_0020";
      const logF = LOG + caseName;
      var setValue: boolean = false
      config.animationOff.set(setValue, (err) => {
        console.info(logF + " AnimationOff err = " + JSON.stringify(err))
        if (err?.code) {
          console.info(logF + " AnimationOff set err = " + JSON.stringify(err))
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
    * @tc.number: SetGetAnimationOff_0030
    * @tc.name: Call api:get() to get the animation parameter value.
    * @tc.desc: Call api:get() to get the animation parameter value.
    */
    it('SetGetAnimationOff_0030', 1, async function (done) {
      const caseName = "SetGetAnimationOff_0030";
      const logF = LOG + caseName;
      var setValue: boolean = true
      config.animationOff.set(setValue).then(() => {
        setTimeout(() => {
          excuteCase(caseName);
        }, 2000);
      }).catch((err) => {
        console.info(logF + " AnimationOff set err=" + JSON.stringify(err));
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
    * @tc.number: SetGetAnimationOff_0040
    * @tc.name: Call api:get() to get the animation parameter value.
    * @tc.desc: Call api:get() to get the animation parameter value.
    */
    it('SetGetAnimationOff_0040', 1, async function (done) {
      const caseName = "SetGetAnimationOff_0040";
      const logF = LOG + caseName;
      var setValue: boolean = false
      config.animationOff.set(setValue).then(() => {
        setTimeout(() => {
          excuteCase(caseName);
        }, 2000);
      }).catch((err) => {
        console.info(logF + " AnimationOff set err=" + JSON.stringify(err));
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
    * @tc.number: SetGetAnimationOff_0050
    * @tc.name: Call api:set() to set the animation parameter to "true", set the next call to "false", and set the next call to "true".
    * @tc.desc: Call api:set() to set the animation parameter to "true", set the next call to "false", and set the next call to "true".
    */
    it('SetGetAnimationOff_0050', 3, async function (done) {
      const caseName = "SetGetAnimationOff_0050";
      const logF = LOG + caseName;
      var setValue1: boolean = true
      var setValue2: boolean = false
      var setValue3: boolean = true
      config.animationOff.set(setValue1).then(() => {
        config.animationOff.set(setValue2).then(() => {
          config.animationOff.set(setValue3).then(() => {
            setTimeout(() => {
              excuteCase(caseName);
            }, 2000);
          }).catch((err) => {
            console.info(logF + " AnimationOff set3 err=" + JSON.stringify(err));
          });
        }).catch((err) => {
          console.info(logF + " AnimationOff set2 err=" + JSON.stringify(err));
        });

      }).catch((err) => {
        console.info(logF + " AnimationOff set1 err=" + JSON.stringify(err));
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
    * @tc.number: SetGetAnimationOff_0060
    * @tc.name: Test callback form: call API: set() successfully for three consecutive times to set the animation parameter to "false".
    * @tc.desc: Test callback form: call API: set() successfully for three consecutive times to set the animation parameter to "false".
    */
    it('SetGetAnimationOff_0060', 3, async function (done) {
      const caseName = "SetGetAnimationOff_0060";
      const logF = LOG + caseName;
      var setValue: boolean = true
      var isSucceedFind: boolean = false;
      config.animationOff.set(setValue, (err) => {
        if (err?.code) {
          console.info(logF + " AnimationOff set err = " + JSON.stringify(err))
        } else {
          setTimeout(() => {
            animationOffOn(logF, caseName)
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
    * @tc.number: SetGetAnimationOff_0070
    * @tc.name: Test callback form: call API: set() successfully for three consecutive times to set the animation parameter to "true".
    * @tc.desc: Test callback form: call API: set() successfully for three consecutive times to set the animation parameter to "true".
    */
    it('SetGetAnimationOff_0070', 3, async function (done) {
      const caseName = "SetGetAnimationOff_0070";
      const logF = LOG + caseName;
      var setValue: boolean = false
      var isSucceedFind: boolean = false;
      config.animationOff.set(setValue, (err) => {
        if (err?.code) {
          console.info(logF + " AnimationOff set err = " + JSON.stringify(err))
        } else {
          setTimeout(() => {
            animationOffOn(logF, caseName)
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
    * @tc.number: SetGetAnimationOff_0080
    * @tc.name: Test promise form: call API: set() successfully for three consecutive times to set the animation parameter to "false".
    * @tc.desc: Test promise form: call API: set() successfully for three consecutive times to set the animation parameter to "false".
    */
    it('SetGetAnimationOff_0080', 3, async function (done) {
      const caseName = "SetGetAnimationOff_0080";
      const logF = LOG + caseName;
      var setValue: boolean = true
      var isSucceedFind: boolean = false;
      config.animationOff.set(setValue).then(() => {
        console.info(logF + " AnimationOff set  success.");
        setTimeout(() => {
          animationOffOn(logF, caseName)
          setTimeout(() => {
            excuteCase(caseName);
            setTimeout(() => {
              isSucceedFind = findTimesFormonbackList(caseName);
            }, 2000);
          }, 2000);
        }, 2000);
      }).catch((err) => {
        console.info(logF + " AnimationOff set err=" + JSON.stringify(err));
      });
      setTimeout(() => {
        expect(isSucceedFind).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedFind));
        done();
      }, 8000);
    });
    /**
    * @tc.number: SetGetAnimationOff_0090
    * @tc.name: Test promise form: call API: set() successfully for three consecutive times to set the animation parameter to "true".
    * @tc.desc: Test promise form: call API: set() successfully for three consecutive times to set the animation parameter to "true".
    */
    it('SetGetAnimationOff_0090', 3, async function (done) {
      const caseName = "SetGetAnimationOff_0090";
      const logF = LOG + caseName;
      var setValue: boolean = false;
      var isSucceedFind: boolean = false;
      config.animationOff.set(setValue).then(() => {
        console.info(logF + " AnimationOff set  success.");
        setTimeout(() => {
          animationOffOn(logF, caseName)
          setTimeout(() => {
            excuteCase(caseName);
            setTimeout(() => {
              isSucceedFind = findTimesFormonbackList(caseName);
            }, 2000);
          }, 2000);
        }, 2000);
      }).catch((err) => {
        console.info(logF + " AnimationOff set err=" + JSON.stringify(err));
      });
      setTimeout(() => {
        expect(isSucceedFind).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedFind));
        done();
      }, 8000);
    });

  })

}
