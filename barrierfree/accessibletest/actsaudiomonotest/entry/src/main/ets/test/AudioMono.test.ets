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
const audioMonoOn = (logTag, caseName) => {
  config.audioMono.on((res) => {
    console.info(logTag + " audioMono  res =  " + JSON.stringify(res));
    console.info(logTag + "_on_success");
    onbackList.push(caseName + "_on_success")
  });
}

const audioMonoOff = (logTag) => {
  config.audioMono.off((res) => {
    console.info(logTag + " audioMono res =  " + JSON.stringify(res));
  });
}

const excuteCase = (caseNamePara) => {
  console.info(LOG + 'ActsAudioMonoTest excuteCase: ' + caseNamePara);

  function publishCallback(err) {
    console.info(LOG + caseNamePara + "on_target_change publish call back result:" + JSON.stringify(err));
  }

  var commonEventPublishData = {
    data: caseNamePara + "_AccessibilityApp_start"
  }
  commonEvent.publish("on_target_change", commonEventPublishData, publishCallback);
}

export default function audioMonoTest() {
  describe('ActsAudioMonoTest', function () {

    beforeEach(async function (done) {
      console.info(LOG + 'ActsAudioMonoTest: beforeEach');
      setTimeout(() => {
        audioMonoOff(LOG)
        done();
      }, 3000);
    });

    beforeAll(async function (done) {
      console.info(LOG + 'ActsAudioMonoTest: beforeAll');
      subScriber = await commonEvent.createSubscriber({
        events: ['on_target_change_extra']
      });
      console.info(LOG + 'ActsAudioMonoTest  beforeAll subscribe send:' + JSON.stringify(subScriber));
      commonEvent.subscribe(subScriber, (err, data) => {
        console.info(LOG + ' ActsAudioMonoTest beforeAll subscribe data:' + JSON.stringify(data));
        if (data.data) {
          console.info(LOG + "  ActsAudioMonoTest CallBack:  " + data.data);
          backList.push(data.data)
        }
      });
      setTimeout(done(), START_TIMEOUT);
    });

    afterAll(async function (done) {
      console.info(LOG + 'ActsAudioMonoTest: afterAll');
      setTimeout(function () {
        commonEvent.unsubscribe(subScriber);
        config.audioMono.set(false);
      }, 20000);
      done();
    });

    /**
    * @tc.number: RegisterAudioMono_0010
    * @tc.name: Call api:set() to set the audioMono parameter to "true".
    * @tc.desc: Call api:set() to set the audioMono parameter to "true".
    */
    it('RegisterAudioMono_0010', 1, async function (done) {
      const caseName = "RegisterAudioMono_0010";
      const logF = LOG + caseName;
      var setValue: boolean = false
      config.audioMono.set(setValue, (err) => {
        if (err?.code) {
          console.info(logF + " contentTimeout err = " + JSON.stringify(err))
        } else {
          setTimeout(() => {
            audioMonoOn(logF, caseName)
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
    * @tc.number: RegisterAudioMono_0020
    * @tc.name: Call api:set() to set the audioMono parameter to "false".
    * @tc.desc: Call api:set() to set the audioMono parameter to "false".
    */
    it('RegisterAudioMono_0020', 1, async function (done) {
      const caseName = "RegisterAudioMono_0020";
      const logF = LOG + caseName;
      var setValue: boolean = true
      config.audioMono.set(setValue, (err) => {
        console.info(logF + " contentTimeout err = " + JSON.stringify(err))
        if (err?.code) {
          console.info(logF + " contentTimeout err = " + JSON.stringify(err))
        } else {
          setTimeout(() => {
            audioMonoOn(logF, caseName)
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
    * @tc.number: UnRegisterAudioMono_0010
    * @tc.name: Call api:set() to set the audioMono parameter to "true".
    * @tc.desc: Call api:set() to set the audioMono parameter to "true".
    */
    it('UnRegisterAudioMono_0010', 1, async function (done) {
      const caseName = "UnRegisterAudioMono_0010";
      const logF = LOG + caseName;
      audioMonoOn(logF, caseName)
      setTimeout(() => {
        audioMonoOff(logF)
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
    * @tc.number: UnRegisterAudioMono_0020
    * @tc.name: Call api:set() to set the audioMono parameter to "false".
    * @tc.desc: Call api:set() to set the audioMono parameter to "false".
    */
    it('UnRegisterAudioMono_0020', 1, async function (done) {
      const caseName = "UnRegisterAudioMono_0020";
      const logF = LOG + caseName;
      var setValue: boolean = true
      config.audioMono.set(setValue, (err, data) => {
        console.info(logF + " contentTimeout err = " + JSON.stringify(err))
        console.info(logF + " contentTimeout data = " + JSON.stringify(data))
        if (err?.code) {
          console.info(logF + " contentTimeout err = " + JSON.stringify(err))
        } else {
          setTimeout(() => {
            audioMonoOn(logF, caseName)
            setTimeout(() => {
              audioMonoOff(logF)
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
    * @tc.number: SetGetAudioMono_0010
    * @tc.name: Call api:set() to set the audioMono parameter to "true".
    * @tc.desc: Call api:set() to set the audioMono parameter to "true".
    */
    it('SetGetAudioMono_0010', 1, async function (done) {
      const caseName = "SetGetAudioMono_0010";
      const logF = LOG + caseName;
      var setValue: boolean = true
      config.audioMono.set(setValue, (err) => {
        console.info(logF + " audioMono err = " + JSON.stringify(err))
        if (err?.code) {
          console.info(logF + " audioMono err = " + JSON.stringify(err))
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
    * @tc.number: SetGetAudioMono_0020
    * @tc.name: Call api:set() to set the audioMono parameter to "false".
    * @tc.desc: Call api:set() to set the audioMono parameter to "false".
    */
    it('SetGetAudioMono_0020', 1, async function (done) {
      const caseName = "SetGetAudioMono_0020";
      const logF = LOG + caseName;
      var setValue: boolean = false
      config.audioMono.set(setValue, (err) => {
        console.info(logF + " audioMono err = " + JSON.stringify(err))
        if (err?.code) {
          console.info(logF + " audioMono set err = " + JSON.stringify(err))
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
    * @tc.number: SetGetAudioMono_0030
    * @tc.name: Call api:set() to set the audioMono parameter to "true".
    * @tc.desc: Call api:set() to set the audioMono parameter to "true".
    */
    it('SetGetAudioMono_0030', 1, async function (done) {
      const caseName = "SetGetAudioMono_0030";
      const logF = LOG + caseName;
      var setValue: boolean = true
      config.audioMono.set(setValue).then(() => {
        setTimeout(() => {
          excuteCase(caseName);
        }, 2000);
      }).catch((err) => {
        console.info(logF + " audioMono set err=" + JSON.stringify(err));
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
    * @tc.number: SetGetAudioMono_0040
    * @tc.name: Call api:set() to set the audioMono parameter to "false".
    * @tc.desc: Call api:set() to set the audioMono parameter to "false".
    */
    it('SetGetAudioMono_0040', 1, async function (done) {
      const caseName = "SetGetAudioMono_0040";
      const logF = LOG + caseName;
      var setValue: boolean = false
      config.audioMono.set(setValue).then(() => {
        setTimeout(() => {
          excuteCase(caseName);
        }, 2000);
      }).catch((err) => {
        console.info(logF + " audioMono set err=" + JSON.stringify(err));
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
    * @tc.number: SetGetAudioMono_0050
    * @tc.name: Call api:set() to set the audioMono parameter to "true"、"false"、"true".
    * @tc.desc: Call api:set() to set the audioMono parameter to "true"、"false"、"true".
    */
    it('SetGetAudioMono_0050', 1, async function (done) {
      const caseName = "SetGetAudioMono_0050";
      const logF = LOG + caseName;
      var setValue1: boolean = true
      var setValue2: boolean = false
      var setValue3: boolean = true
      config.audioMono.set(setValue1).then(() => {
        config.audioMono.set(setValue2).then(() => {
          config.audioMono.set(setValue3).then(() => {
            setTimeout(() => {
              excuteCase(caseName);
            }, 2000);
          }).catch((err) => {
            console.info(logF + " audioMono set3 err=" + JSON.stringify(err));
          });
        }).catch((err) => {
          console.info(logF + " audioMono set2 err=" + JSON.stringify(err));
        });

      }).catch((err) => {
        console.info(logF + " audioMono set1 err=" + JSON.stringify(err));
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
    * @tc.number: SetGetAudioMono_0060
    * @tc.name: Test callback form: call API: set() successfully for three consecutive times to set the audioMono parameter to "false".
    * @tc.desc: Test callback form: call API: set() successfully for three consecutive times to set the audioMono parameter to "false".
    */
    it('SetGetAudioMono_0060', 3, async function (done) {
      const caseName = "SetGetAudioMono_0060";
      const logF = LOG + caseName;
      var setValue: boolean = true
      var isSucceedFind: boolean = false;
      config.audioMono.set(setValue, (err) => {
        if (err?.code) {
          console.info(logF + " audioMono set err = " + JSON.stringify(err))
        } else {
          setTimeout(() => {
            audioMonoOn(logF, caseName)
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
    * @tc.number: SetGetAudioMono_0070
    * @tc.name: Test callback form: call API: set() successfully for three consecutive times to set the audioMono parameter to "true".
    * @tc.desc: Test callback form: call API: set() successfully for three consecutive times to set the audioMono parameter to "true".
    */
    it('SetGetAudioMono_0070', 3, async function (done) {
      const caseName = "SetGetAudioMono_0070";
      const logF = LOG + caseName;
      var setValue: boolean = false
      var isSucceedFind: boolean = false;
      config.audioMono.set(setValue, (err) => {
        if (err?.code) {
          console.info(logF + " audioMono set err = " + JSON.stringify(err))
        } else {
          setTimeout(() => {
            audioMonoOn(logF, caseName)
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
    * @tc.number: SetGetAudioMono_0080
    * @tc.name: Test promise form: call API: set() successfully for three consecutive times to set the audioMono parameter to "false".
    * @tc.desc: Test promise form: call API: set() successfully for three consecutive times to set the audioMono parameter to "false".
    */
    it('SetGetAudioMono_0080', 3, async function (done) {
      const caseName = "SetGetAudioMono_0080";
      const logF = LOG + caseName;
      var setValue: boolean = true
      var isSucceedFind: boolean = false;
      config.audioMono.set(setValue).then(() => {
        console.info(logF + " audioMono set  success.");
        setTimeout(() => {
          audioMonoOn(logF, caseName)
          setTimeout(() => {
            excuteCase(caseName);
            setTimeout(() => {
              isSucceedFind = findTimesFormonbackList(caseName);
            }, 2000);
          }, 2000);
        }, 2000);
      }).catch((err) => {
        console.info(logF + " audioMono set err=" + JSON.stringify(err));
      });
      setTimeout(() => {
        expect(isSucceedFind).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedFind));
        done();
      }, 8000);
    });
    /**
    * @tc.number: SetGetAudioMono_0090
    * @tc.name: Test promise form: call API: set() successfully for three consecutive times to set the audioMono parameter to "true".
    * @tc.desc: Test promise form: call API: set() successfully for three consecutive times to set the audioMono parameter to "true".
    */
    it('SetGetAudioMono_0090', 3, async function (done) {
      const caseName = "SetGetAudioMono_0090";
      const logF = LOG + caseName;
      var setValue: boolean = false;
      var isSucceedFind: boolean = false;
      config.audioMono.set(setValue).then(() => {
        console.info(logF + " audioMono set  success.");
        setTimeout(() => {
          audioMonoOn(logF, caseName)
          setTimeout(() => {
            excuteCase(caseName);
            setTimeout(() => {
              isSucceedFind = findTimesFormonbackList(caseName);
            }, 2000);
          }, 2000);
        }, 2000);
      }).catch((err) => {
        console.info(logF + " audioMono set err=" + JSON.stringify(err));
      });
      setTimeout(() => {
        expect(isSucceedFind).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedFind));
        done();
      }, 8000);
    });
    /**
    * @tc.number: SetErrorAudioMono_0010
    * @tc.name: Call api:set() to set the audioMono parameter to "undefined".
    * @tc.desc: Call api:set() to set the audioMono parameter to "undefined".
    */
    it('SetErrorAudioMono_0010', 2, async function (done) {
      const caseName = "SetErrorAudioMono_0010";
      const logF = LOG + caseName;
      var setValue: boolean = undefined
      var isSucceed: boolean = false;
      config.audioMono.set(setValue, (err) => {
        console.info(logF + " audioMono err = " + JSON.stringify(err))
        if (err?.code) {
          console.info(logF + " audioMono err = " + JSON.stringify(err))
          isSucceed = true
        }
      })
      setTimeout(() => {
        expect(isSucceed).assertEqual(true);
        console.info(logF + ' isSucceed : ' + isSucceed);
        done();
      }, 3000);
    });

    /**
    * @tc.number: SetErrorAudioMono_0030
    * @tc.name: Call api:set() to set the audioMono parameter to "undefined".
    * @tc.desc: Call api:set() to set the audioMono parameter to "undefined".
    */
    it('SetErrorAudioMono_0030', 2, async function (done) {
      const caseName = "SetErrorAudioMono_0030";
      const logF = LOG + caseName;
      var setValue: boolean = undefined
      var isSucceed: boolean = false;
      config.audioMono.set(setValue).then(() => {
        console.info(logF + " audioMono set  success.");
      }).catch((err) => {
        console.info(logF + " audioMono set err=" + JSON.stringify(err));
        isSucceed = true
      });
      setTimeout(() => {
        expect(isSucceed).assertEqual(true);
        console.info(logF + ' isSucceed : ' + isSucceed);
        done();
      }, 3000);
    });

  })

}
