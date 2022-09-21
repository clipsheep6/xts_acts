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

const contentTimeoutOn = (logTag, caseName) => {
  config.contentTimeout.on((res) => {
    console.info(logTag + " contentTimeoutOn  res =  " + JSON.stringify(res));
    console.info(logTag + "_on_success");
    onbackList.push(caseName + "_on_success")
  });
}

const contentTimeoutOff = (logTag) => {
  config.contentTimeout.off();
}

const excuteCase = (caseNamePara) => {
  console.info(LOG + 'ActsContentTimeoutTest excuteCase: ' + caseNamePara);

  function publishCallback(err) {
    console.info(LOG + caseNamePara + "on_target_change publish call back result:" + JSON.stringify(err));
  }

  var commonEventPublishData = {
    data: caseNamePara + "_AccessibilityApp_start"
  }
  commonEvent.publish("on_target_change", commonEventPublishData, publishCallback);
}

export default function ContentTimeoutTest() {
  describe('ActsContentTimeoutTest', function () {

    beforeEach(async function (done) {
      console.info(LOG + 'ActsContentTimeoutTest: beforeEach');
      setTimeout(() => {
        contentTimeoutOff(LOG)
        done();
      }, 3000);
    });

    beforeAll(async function (done) {
      console.info(LOG + 'ActsContentTimeoutTest: beforeAll');
      subScriber = await commonEvent.createSubscriber({
        events: ['on_target_change_extra']
      });
      console.info(LOG + 'ActsContentTimeoutTest  beforeAll subscribe send:' + JSON.stringify(subScriber));
      commonEvent.subscribe(subScriber, (err, data) => {
        console.info(LOG + ' ActsContentTimeoutTest beforeAll subscribe data:' + JSON.stringify(data));
        if (data.data) {
          console.info(LOG + "  ActsContentTimeoutTest CallBack:  " + data.data);
          backList.push(data.data)
        }
      });
      setTimeout(done(), START_TIMEOUT);
    });

    afterAll(async function (done) {
      console.info(LOG + 'ActsContentTimeoutTest: afterAll');
      setTimeout(function () {
        commonEvent.unsubscribe(subScriber);
        config.contentTimeout.set(-1);
      }, 20000);
      done();
    });

    /**
    * @tc.number: RegisterContentTimeout_0010
    * @tc.name: Call api:set() to set the contentTimeout parameter to "-1".
    * @tc.desc: Call api:set() to set the contentTimeout parameter to "-1".
    */
    it('RegisterContentTimeout_0010', 1, async function (done) {
      const caseName = "RegisterContentTimeout_0010";
      const logF = LOG + caseName;
      contentTimeoutOn(logF, caseName)
      setTimeout(() => {
        excuteCase(caseName);
      }, 2000);
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
    * @tc.number: RegisterContentTimeout_0020
    * @tc.name: Call api:set() to set the contentTimeout parameter to "0".
    * @tc.desc: Call api:set() to set the contentTimeout parameter to "0".
    */
    it('RegisterContentTimeout_0020', 1, async function (done) {
      const caseName = "RegisterContentTimeout_0020";
      const logF = LOG + caseName;
      var setValue: number = 1
      config.contentTimeout.set(setValue, (err) => {
        console.info(logF + " contentTimeout err = " + JSON.stringify(err))
        if (err?.code) {
          console.info(logF + " contentTimeout err = " + JSON.stringify(err))
        } else {
          setTimeout(() => {
            contentTimeoutOn(logF, caseName)
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
    * @tc.number: RegisterContentTimeout_0030
    * @tc.name: Call api:set() to set the contentTimeout parameter to "5000".
    * @tc.desc: Call api:set() to set the contentTimeout parameter to "5000".
    */
    it('RegisterContentTimeout_0030', 1, async function (done) {
      const caseName = "RegisterContentTimeout_0030";
      const logF = LOG + caseName;
      var setValue: number = 1
      config.contentTimeout.set(setValue, (err) => {
        if (err?.code) {
          console.info(logF + " contentTimeout err = " + JSON.stringify(err))
        } else {
          setTimeout(() => {
            contentTimeoutOn(logF, caseName)
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
    * @tc.number: RegisterContentTimeout_0040
    * @tc.name: Call api:set() to set the contentTimeout parameter to "10000".
    * @tc.desc: Call api:set() to set the contentTimeout parameter to "10000".
    */
    it('RegisterContentTimeout_0040', 1, async function (done) {
      const caseName = "RegisterContentTimeout_0040";
      const logF = LOG + caseName;
      var setValue: number = 1
      config.contentTimeout.set(setValue, (err) => {
        console.info(logF + " contentTimeout err = " + JSON.stringify(err))
        if (err?.code) {
          console.info(logF + " contentTimeout err = " + JSON.stringify(err))
        } else {
          setTimeout(() => {
            contentTimeoutOn(logF, caseName)
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
    * @tc.number: UnRegisterContentTimeout_0010
    * @tc.name: Call api:set() to set the contentTimeout parameter to "-1".
    * @tc.desc: Call api:set() to set the contentTimeout parameter to "-1".
    */
    it('UnRegisterContentTimeout_0010', 1, async function (done) {
      const caseName = "UnRegisterContentTimeout_0010";
      const logF = LOG + caseName;
      contentTimeoutOn(logF, caseName)
      setTimeout(() => {
        contentTimeoutOff(logF)
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
    * @tc.number: UnRegisterContentTimeout_0020
    * @tc.name: Call api:set() to set the contentTimeout parameter to "0".
    * @tc.desc: Call api:set() to set the contentTimeout parameter to "0".
    */
    it('UnRegisterContentTimeout_0020', 1, async function (done) {
      const caseName = "UnRegisterContentTimeout_0020";
      const logF = LOG + caseName;
      var setValue: number = 0
      config.contentTimeout.set(setValue, (err, data) => {
        console.info(logF + " contentTimeout err = " + JSON.stringify(err))
        console.info(logF + " contentTimeout data = " + JSON.stringify(data))
        if (err?.code) {
          console.info(logF + " contentTimeout err = " + JSON.stringify(err))
        } else {
          setTimeout(() => {
            contentTimeoutOn(logF, caseName)
            setTimeout(() => {
              contentTimeoutOff(logF)
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
    * @tc.number: UnRegisterContentTimeout_0030
    * @tc.name: Call api:set() to set the contentTimeout parameter to "5000".
    * @tc.desc: Call api:set() to set the contentTimeout parameter to "5000".
    */
    it('UnRegisterContentTimeout_0030', 1, async function (done) {
      const caseName = "UnRegisterContentTimeout_0010";
      const logF = LOG + caseName;
      contentTimeoutOn(logF, caseName)
      setTimeout(() => {
        contentTimeoutOff(logF)
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
    * @tc.number: UnRegisterContentTimeout_0040
    * @tc.name: Call api:set() to set the contentTimeout parameter to "10000".
    * @tc.desc: Call api:set() to set the contentTimeout parameter to "10000".
    */
    it('UnRegisterContentTimeout_0040', 1, async function (done) {
      const caseName = "UnRegisterContentTimeout_0040";
      const logF = LOG + caseName;
      var setValue: number = 100
      config.contentTimeout.set(setValue, (err, data) => {
        console.info(logF + " contentTimeout err = " + JSON.stringify(err))
        console.info(logF + " contentTimeout data = " + JSON.stringify(data))
        if (err?.code) {
          console.info(logF + " contentTimeout err = " + JSON.stringify(err))
        } else {
          setTimeout(() => {
            contentTimeoutOn(logF, caseName)
            setTimeout(() => {
              contentTimeoutOff(logF)
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
    * @tc.number: SetGetContentTimeout_0010
    * @tc.name: Call api:set() to set the contentTimeout parameter to "-1".
    * @tc.desc: Call api:set() to set the contentTimeout parameter to "-1".
    */
    it('SetGetContentTimeout_0010', 1, async function (done) {
      const caseName = "SetGetContentTimeout_0010";
      const logF = LOG + caseName;
      var setValue: number = -1
      config.contentTimeout.set(setValue, (err) => {
        console.info(logF + " contentTimeout err = " + JSON.stringify(err))
        if (err?.code) {
          console.info(logF + " contentTimeout err = " + JSON.stringify(err))
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
    * @tc.number: SetGetContentTimeout_0020
    * @tc.name: Call api:set() to set the contentTimeout parameter to "0".
    * @tc.desc: Call api:set() to set the contentTimeout parameter to "0".
    */
    it('SetGetContentTimeout_0020', 1, async function (done) {
      const caseName = "SetGetContentTimeout_0020";
      const logF = LOG + caseName;
      var setValue: number = 0
      config.contentTimeout.set(setValue, (err) => {
        console.info(logF + " contentTimeout err = " + JSON.stringify(err))
        if (err?.code) {
          console.info(logF + " contentTimeout err = " + JSON.stringify(err))
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
    * @tc.number: SetGetContentTimeout_0030
    * @tc.name: Call api:set() to set the contentTimeout parameter to "5000".
    * @tc.desc: Call api:set() to set the contentTimeout parameter to "5000".
    */
    it('SetGetContentTimeout_0030', 1, async function (done) {
      const caseName = "SetGetContentTimeout_0030";
      const logF = LOG + caseName;
      var setValue: number = 5000
      config.contentTimeout.set(setValue, (err) => {
        console.info(logF + " contentTimeout err = " + JSON.stringify(err))
        if (err?.code) {
          console.info(logF + " contentTimeout err = " + JSON.stringify(err))
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
    * @tc.number: SetGetContentTimeout_0040
    * @tc.name: Call api:set() to set the contentTimeout parameter to "10000".
    * @tc.desc: Call api:set() to set the contentTimeout parameter to "10000".
    */
    it('SetGetContentTimeout_0040', 1, async function (done) {
      const caseName = "SetGetContentTimeout_0040";
      const logF = LOG + caseName;
      var setValue: number = 10000
      config.contentTimeout.set(setValue, (err) => {
        console.info(logF + " contentTimeout err = " + JSON.stringify(err))
        if (err?.code) {
          console.info(logF + " contentTimeout err = " + JSON.stringify(err))
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
    * @tc.number: SetGetContentTimeout_0050
    * @tc.name: Call api:set() to set the contentTimeout parameter to "-1".
    * @tc.desc: Call api:set() to set the contentTimeout parameter to "-1".
    */
    it('SetGetContentTimeout_0050', 1, async function (done) {
      const caseName = "SetGetContentTimeout_0050";
      const logF = LOG + caseName;
      var setValue: number = -1
      config.contentTimeout.set(setValue).then(() => {
        setTimeout(() => {
          excuteCase(caseName);
        }, 2000);
      }).catch((err) => {
        console.info(logF + " contentTimeout set err=" + JSON.stringify(err));
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
    * @tc.number: SetGetContentTimeout_0060
    * @tc.name: Call api:set() to set the contentTimeout parameter to "0".
    * @tc.desc: Call api:set() to set the contentTimeout parameter to "0".
    */
    it('SetGetContentTimeout_0060', 1, async function (done) {
      const caseName = "SetGetContentTimeout_0060";
      const logF = LOG + caseName;
      var setValue: number = 0
      config.contentTimeout.set(setValue).then(() => {
        setTimeout(() => {
          excuteCase(caseName);
        }, 2000);
      }).catch((err) => {
        console.info(logF + " contentTimeout set err=" + JSON.stringify(err));
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
    * @tc.number: SetGetContentTimeout_0070
    * @tc.name: Call api:set() to set the contentTimeout parameter to "5000".
    * @tc.desc: Call api:set() to set the contentTimeout parameter to "5000".
    */
    it('SetGetContentTimeout_0070', 1, async function (done) {
      const caseName = "SetGetContentTimeout_0070";
      const logF = LOG + caseName;
      var setValue: number = 5000
      config.contentTimeout.set(setValue).then(() => {
        setTimeout(() => {
          excuteCase(caseName);
        }, 2000);
      }).catch((err) => {
        console.info(logF + " contentTimeout set err=" + JSON.stringify(err));
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
    * @tc.number: SetGetContentTimeout_0080
    * @tc.name: Call api:set() to set the contentTimeout parameter to "10000".
    * @tc.desc: Call api:set() to set the contentTimeout parameter to "10000".
    */
    it('SetGetContentTimeout_0080', 1, async function (done) {
      const caseName = "SetGetContentTimeout_0080";
      const logF = LOG + caseName;
      var setValue: number = 10000
      config.contentTimeout.set(setValue).then(() => {
        setTimeout(() => {
          excuteCase(caseName);
        }, 2000);
      }).catch((err) => {
        console.info(logF + " contentTimeout set err=" + JSON.stringify(err));
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
    * @tc.number: SetGetContentTimeout_0090
    * @tc.name: Call api:set() to set the contentTimeout parameter to "100000".
    * @tc.desc: Call api:set() to set the contentTimeout parameter to "100000".
    */
    it('SetGetContentTimeout_0090', 3, async function (done) {
      const caseName = "SetGetContentTimeout_0090";
      const logF = LOG + caseName;
      var setValue1: number = -1
      var setValue2: number = 0
      var setValue3: number = 2000
      var setValue4: number = 5000
      var setValue5: number = 1000000
      config.contentTimeout.set(setValue1).then(() => {
        config.contentTimeout.set(setValue2).then(() => {
          config.contentTimeout.set(setValue3).then(() => {
            config.contentTimeout.set(setValue4).then(() => {
              config.contentTimeout.set(setValue5).then(() => {
                setTimeout(() => {
                  excuteCase(caseName);
                }, 2000);
              }).catch((err) => {
                console.info(logF + " contentTimeout set5 err=" + JSON.stringify(err));
              });
            }).catch((err) => {
              console.info(logF + " contentTimeout set4 err=" + JSON.stringify(err));
            });
          }).catch((err) => {
            console.info(logF + " contentTimeout set3 err=" + JSON.stringify(err));
          });
        }).catch((err) => {
          console.info(logF + " contentTimeout set2 err=" + JSON.stringify(err));
        });
      }).catch((err) => {
        console.info(logF + " contentTimeout set1 err=" + JSON.stringify(err));
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
    * @tc.number: SetGetContentTimeout_0100
    * @tc.name: Test callback form: call API: set() successfully for three consecutive times to set the contentTimeout parameter to "5000".
    * @tc.desc: Test callback form: call API: set() successfully for three consecutive times to set the contentTimeout parameter to "5000".
    */
    it('SetGetContentTimeout_0100', 3, async function (done) {
      const caseName = "SetGetContentTimeout_0100";
      const logF = LOG + caseName;
      var setValue: number = 0
      var isSucceedFind: boolean = false;
      config.contentTimeout.set(setValue, (err) => {
        if (err?.code) {
          console.info(logF + " contentTimeout set err = " + JSON.stringify(err))
        } else {
          setTimeout(() => {
            contentTimeoutOn(logF, caseName)
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
    * @tc.number: SetGetContentTimeout_0110
    * @tc.name: Test promise form: call API: set() successfully for three consecutive times to set the contentTimeout parameter to "5000".
    * @tc.desc: Test promise form: call API: set() successfully for three consecutive times to set the contentTimeout parameter to "5000".
    */
    it('SetGetContentTimeout_0110', 3, async function (done) {
      const caseName = "SetGetContentTimeout_0110";
      const logF = LOG + caseName;
      var setValue: number = 0
      var isSucceedFind: boolean = false;
      config.contentTimeout.set(setValue).then(() => {
        console.info(logF + " contentTimeout set  success.");
        setTimeout(() => {
          contentTimeoutOn(logF, caseName)
          setTimeout(() => {
            excuteCase(caseName);
            setTimeout(() => {
              isSucceedFind = findTimesFormonbackList(caseName);
            }, 2000);
          }, 2000);
        }, 2000);
      }).catch((err) => {
        console.info(logF + " contentTimeout set err=" + JSON.stringify(err));
      });
      setTimeout(() => {
        expect(isSucceedFind).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedFind));
        done();
      }, 8000);
    });

    /**
    * @tc.number: SetErrorContentTimeout_0010
    * @tc.name: Call api:set() to set the contentTimeout parameter to "undefined".
    * @tc.desc: Call api:set() to set the contentTimeout parameter to "undefined".
    */
    it('SetErrorContentTimeout_0010', 1, async function (done) {
      const caseName = "SetErrorContentTimeout_0010";
      const logF = LOG + caseName;
      var setValue: number = undefined
      var isSucceed: boolean = false;
      config.contentTimeout.set(setValue, (err) => {
        console.info(logF + " contentTimeout err = " + JSON.stringify(err))
        if (err?.code) {
          console.info(logF + " contentTimeout err = " + JSON.stringify(err))
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
    * @tc.number: SetErrorContentTimeout_0030
    * @tc.name: Call api:set() to set the contentTimeout parameter to "undefined".
    * @tc.desc: Call api:set() to set the contentTimeout parameter to "undefined".
    */
    it('SetErrorContentTimeout_0030', 1, async function (done) {
      const caseName = "SetErrorContentTimeout_0030";
      const logF = LOG + caseName;
      var setValue: number = undefined
      var isSucceed: boolean = false;
      config.contentTimeout.set(setValue).then(() => {
        console.info(logF + " contentTimeout set  success.");
      }).catch((err) => {
        console.info(logF + " contentTimeout set err=" + JSON.stringify(err));
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
