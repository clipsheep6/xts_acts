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
const findTimesFormonbackList = (caseName)=>{
  let findStr = caseName + "_on_success";
  let times = 0;
  for(let item of onbackList){
    if(item === findStr){
      if(times===1){
        return false;
      }else{
        times++
      }
    }
  }
  if(times===1){
    return true;
  }
  return false;
}
const brightnessDiscountOn = (logTag, caseName) => {
  config.brightnessDiscount.on((res) => {
    console.info(logTag + " brightnessDiscountOn  res =  " + JSON.stringify(res));
    console.info(logTag + "_on_success");
    onbackList.push(caseName + "_on_success")
  });
}

const brightnessDiscountOff = (logTag) => {
  config.brightnessDiscount.off();
}

const excuteCase = (caseNamePara) => {
  console.info(LOG + 'ActsBrightnessDiscountTest excuteCase: ' + caseNamePara);

  function publishCallback(err) {
    console.info(LOG + caseNamePara + "on_target_change publish call back result:" + JSON.stringify(err));
  }

  var commonEventPublishData = {
    data: caseNamePara + "_AccessibilityApp_start"
  }
  commonEvent.publish("on_target_change", commonEventPublishData, publishCallback);
}

export default function BrightnessDiscountTest() {
  describe('ActsBrightnessDiscountTest', function () {

    beforeEach(async function (done) {
      console.info(LOG + 'ActsBrightnessDiscountTest: beforeEach');
      setTimeout(() => {
        brightnessDiscountOff(LOG)
        done();
      }, 3000);
    });

    beforeAll(async function (done) {
      console.info(LOG + 'ActsBrightnessDiscountTest: beforeAll');
      subScriber = await commonEvent.createSubscriber({
        events: ['on_target_change_extra']
      });
      console.info(LOG + 'ActsBrightnessDiscountTest  beforeAll subscribe send:' + JSON.stringify(subScriber));
      commonEvent.subscribe(subScriber, (err, data) => {
        console.info(LOG + ' ActsBrightnessDiscountTest beforeAll subscribe data:' + JSON.stringify(data));
        if (data.data) {
          console.info(LOG + "  ActsBrightnessDiscountTest CallBack:  " + data.data);
          backList.push(data.data)
        }
      });
      setTimeout(done(), START_TIMEOUT);
    });

    afterAll(async function (done) {
      console.info(LOG + 'ActsBrightnessDiscountTest: afterAll');
      setTimeout(function () {
        commonEvent.unsubscribe(subScriber);
        config.brightnessDiscount.set(0);
      }, 20000);
      done();
    });

    /**
    * @tc.number: RegisterBrightnessDiscount_0010
    * @tc.name: Call api:set() to set the brightnessDiscount parameter to "0".
    * @tc.desc: Call api:set() to set the brightnessDiscount parameter to "0".
    */
    it('RegisterBrightnessDiscount_0010', 1, async function (done) {
      const caseName = "RegisterBrightnessDiscount_0010";
      const logF = LOG + caseName;
      brightnessDiscountOn(logF, caseName)
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
    * @tc.number: RegisterBrightnessDiscount_0020
    * @tc.name: Call api:set() to set the brightnessDiscount parameter to "1".
    * @tc.desc: Call api:set() to set the brightnessDiscount parameter to "1".
    */
    it('RegisterBrightnessDiscount_0020', 1, async function (done) {
      const caseName = "RegisterBrightnessDiscount_0020";
      const logF = LOG + caseName;
      var setValue: number = 0
      config.brightnessDiscount.set(setValue, (err) => {
        if (err?.code) {
          console.info(logF + " brightnessDiscount set err = " + JSON.stringify(err))
        } else {
          setTimeout(() => {
            brightnessDiscountOn(logF, caseName)
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
    * @tc.number: RegisterBrightnessDiscount_0030
    * @tc.name: Call api:set() to set the brightnessDiscount parameter to "0.5".
    * @tc.desc: Call api:set() to set the brightnessDiscount parameter to "0.5".
    */
    it('RegisterBrightnessDiscount_0030', 1, async function (done) {
      const caseName = "RegisterBrightnessDiscount_0030";
      const logF = LOG + caseName;
      var setValue: number = 0
      config.brightnessDiscount.set(setValue, (err) => {
        if (err?.code) {
          console.info(logF + " brightnessDiscount set err = " + JSON.stringify(err))
        } else {
          setTimeout(() => {
            brightnessDiscountOn(logF, caseName)
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
    * @tc.number: RegisterBrightnessDiscount_0040
    * @tc.name: Call api:set() to set the brightnessDiscount parameter to "100".
    * @tc.desc: Call api:set() to set the brightnessDiscount parameter to "100".
    */
    it('RegisterBrightnessDiscount_0040', 1, async function (done) {
      const caseName = "RegisterBrightnessDiscount_0040";
      const logF = LOG + caseName;
      var setValue: number = 0
      config.brightnessDiscount.set(setValue, (err) => {
        if (err?.code) {
          console.info(logF + " brightnessDiscount set err = " + JSON.stringify(err))
        } else {
          setTimeout(() => {
            brightnessDiscountOn(logF, caseName)
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
    * @tc.number: UnRegisterBrightnessDiscount_0010
    * @tc.name: Call api:set() to set the brightnessDiscount parameter to "0".
    * @tc.desc: Call api:set() to set the brightnessDiscount parameter to "0".
    */
    it('UnRegisterBrightnessDiscount_0010', 1, async function (done) {
      const caseName = "UnRegisterBrightnessDiscount_0010";
      const logF = LOG + caseName;
      brightnessDiscountOn(logF, caseName)
      setTimeout(() => {
        brightnessDiscountOff(logF)
        setTimeout(() => {
          excuteCase(caseName);
        }, 2000);
      }, 2000);
      setTimeout(() => {
        var isSucceedOnBack: boolean = false;
        if (onbackList.indexOf(caseName + '_on_success') == -1) {
          isSucceedOnBack = true;
        }
        console.info(logF + ' isSucceedOnBack : ' + (isSucceedOnBack));
        expect(isSucceedOnBack).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedOnBack));
        done();
      }, 6000);
    });

    /**
    * @tc.number: UnRegisterBrightnessDiscount_0020
    * @tc.name: Call api:set() to set the brightnessDiscount parameter to "1".
    * @tc.desc: Call api:set() to set the brightnessDiscount parameter to "1".
    */
    it('UnRegisterBrightnessDiscount_0020', 1, async function (done) {
      const caseName = "UnRegisterBrightnessDiscount_0020";
      const logF = LOG + caseName;
      brightnessDiscountOn(logF, caseName)
      setTimeout(() => {
        brightnessDiscountOff(logF)
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
    * @tc.number: UnRegisterBrightnessDiscount_0030
    * @tc.name: Call api:set() to set the brightnessDiscount parameter to "0.5".
    * @tc.desc: Call api:set() to set the brightnessDiscount parameter to "0.5".
    */
    it('UnRegisterBrightnessDiscount_0030', 1, async function (done) {
      const caseName = "UnRegisterBrightnessDiscount_0030";
      const logF = LOG + caseName;
      brightnessDiscountOn(logF, caseName)
      setTimeout(() => {
        brightnessDiscountOff(logF)
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
    * @tc.number: UnRegisterBrightnessDiscount_0040
    * @tc.name: Call api:set() to set the brightnessDiscount parameter to "100".
    * @tc.desc: Call api:set() to set the brightnessDiscount parameter to "100".
    */
    it('UnRegisterBrightnessDiscount_0040', 1, async function (done) {
      const caseName = "UnRegisterBrightnessDiscount_0040";
      const logF = LOG + caseName;
      brightnessDiscountOn(logF, caseName)
      setTimeout(() => {
        brightnessDiscountOff(logF)
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
    * @tc.number: SetGetBrightnessDiscount_0010
    * @tc.name: Call api:set() to set the brightnessDiscount parameter to "0".
    * @tc.desc: Call api:set() to set the brightnessDiscount parameter to "0".
    */
    it('SetGetBrightnessDiscount_0010', 1, async function (done) {
      const caseName = "SetGetBrightnessDiscount_0010";
      const logF = LOG + caseName;
      var setValue: number = 0
      config.brightnessDiscount.set(setValue, (err) => {
        console.info(logF + " brightnessDiscount err = " + JSON.stringify(err))
        if (err?.code) {
          console.info(logF + " brightnessDiscount err = " + JSON.stringify(err))
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
    * @tc.number: SetGetBrightnessDiscount_0020
    * @tc.name: Call api:set() to set the brightnessDiscount parameter to "1".
    * @tc.desc: Call api:set() to set the brightnessDiscount parameter to "1".
    */
    it('SetGetBrightnessDiscount_0020', 1, async function (done) {
      const caseName = "SetGetBrightnessDiscount_0020";
      const logF = LOG + caseName;
      var setValue: number = 1
      config.brightnessDiscount.set(setValue, (err) => {
        console.info(logF + " brightnessDiscount err = " + JSON.stringify(err))
        if (err?.code) {
          console.info(logF + " brightnessDiscount set err = " + JSON.stringify(err))
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
    * @tc.number: SetGetBrightnessDiscount_0030
    * @tc.name: Call api:set() to set the brightnessDiscount parameter to "0.5".
    * @tc.desc: Call api:set() to set the brightnessDiscount parameter to "0.5".
    */
    it('SetGetBrightnessDiscount_0030', 1, async function (done) {
      const caseName = "SetGetBrightnessDiscount_0030";
      const logF = LOG + caseName;
      var setValue: number = 0.5
      config.brightnessDiscount.set(setValue, (err) => {
        console.info(logF + " brightnessDiscount err = " + JSON.stringify(err))
        if (err?.code) {
          console.info(logF + " brightnessDiscount set err = " + JSON.stringify(err))
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
    * @tc.number: SetGetBrightnessDiscount_0040
    * @tc.name: Call api:set() to set the brightnessDiscount parameter to "0.1".
    * @tc.desc: Call api:set() to set the brightnessDiscount parameter to "0.1".
    */
    it('SetGetBrightnessDiscount_0040', 1, async function (done) {
      const caseName = "SetGetBrightnessDiscount_0040";
      const logF = LOG + caseName;
      var setValue: number = 100
      config.brightnessDiscount.set(setValue, (err) => {
        console.info(logF + " brightnessDiscount err = " + JSON.stringify(err))
        if (err?.code) {
          console.info(logF + " brightnessDiscount set err = " + JSON.stringify(err))
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
    * @tc.number: SetGetBrightnessDiscount_0050
    * @tc.name: Call api:set() to set the brightnessDiscount parameter to "0".
    * @tc.desc: Call api:set() to set the brightnessDiscount parameter to "0".
    */
    it('SetGetBrightnessDiscount_0050', 1, async function (done) {
      const caseName = "SetGetBrightnessDiscount_0050";
      const logF = LOG + caseName;
      var setValue: number = 0
      config.brightnessDiscount.set(setValue).then(() => {
        setTimeout(() => {
          excuteCase(caseName);
        }, 2000);
      }).catch((err) => {
        console.info(logF + " brightnessDiscount set err=" + JSON.stringify(err));
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
    * @tc.number: SetGetBrightnessDiscount_0060
    * @tc.name: Call api:set() to set the brightnessDiscount parameter to "1".
    * @tc.desc: Call api:set() to set the brightnessDiscount parameter to "1".
    */
    it('SetGetBrightnessDiscount_0060', 1, async function (done) {
      const caseName = "SetGetBrightnessDiscount_0060";
      const logF = LOG + caseName;
      var setValue: number = 1
      config.brightnessDiscount.set(setValue).then(() => {
        setTimeout(() => {
          excuteCase(caseName);
        }, 2000);
      }).catch((err) => {
        console.info(logF + " brightnessDiscount set err=" + JSON.stringify(err));
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
    * @tc.number: SetGetBrightnessDiscount_0070
    * @tc.name: Call api:set() to set the brightnessDiscount parameter to "0.5".
    * @tc.desc: Call api:set() to set the brightnessDiscount parameter to "0.5".
    */
    it('SetGetBrightnessDiscount_0070', 1, async function (done) {
      const caseName = "SetGetBrightnessDiscount_0070";
      const logF = LOG + caseName;
      var setValue: number = 0.5
      config.brightnessDiscount.set(setValue).then(() => {
        setTimeout(() => {
          excuteCase(caseName);
        }, 2000);
      }).catch((err) => {
        console.info(logF + " brightnessDiscount set err=" + JSON.stringify(err));
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
    * @tc.number: SetGetBrightnessDiscount_0080
    * @tc.name: Call api:set() to set the brightnessDiscount parameter to "0.1".
    * @tc.desc: Call api:set() to set the brightnessDiscount parameter to "0.1".
    */
    it('SetGetBrightnessDiscount_0080', 1, async function (done) {
      const caseName = "SetGetBrightnessDiscount_0080";
      const logF = LOG + caseName;
      var setValue: number = 100
      config.brightnessDiscount.set(setValue).then(() => {
        setTimeout(() => {
          excuteCase(caseName);
        }, 2000);
      }).catch((err) => {
        console.info(logF + " brightnessDiscount set err=" + JSON.stringify(err));
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
    * @tc.number: SetGetBrightnessDiscount_0090
    * @tc.name: Call api:set() to set the brightnessDiscount parameter to "12345".
    * @tc.desc: Call api:set() to set the brightnessDiscount parameter to "12345".
    */
    it('SetGetBrightnessDiscount_0090', 3, async function (done) {
      const caseName = "SetGetBrightnessDiscount_0090";
      const logF = LOG + caseName;
      var setValue1: number = 0
      var setValue2: number = -1
      var setValue3: number = 1
      var setValue4: number = 0.5
      var setValue5: number = 12345
      config.brightnessDiscount.set(setValue1).then(() => {
        config.brightnessDiscount.set(setValue2).then(() => {
          config.brightnessDiscount.set(setValue3).then(() => {
            config.brightnessDiscount.set(setValue4).then(() => {
              config.brightnessDiscount.set(setValue5).then(() => {
                setTimeout(() => {
                  excuteCase(caseName);
                }, 2000);
              }).catch((err) => {
                console.info(logF + " brightnessDiscount set5 err=" + JSON.stringify(err));
              });
            }).catch((err) => {
              console.info(logF + " brightnessDiscount set4 err=" + JSON.stringify(err));
            });
          }).catch((err) => {
            console.info(logF + " brightnessDiscount set3 err=" + JSON.stringify(err));
          });
        }).catch((err) => {
          console.info(logF + " brightnessDiscount set2 err=" + JSON.stringify(err));
        });

      }).catch((err) => {
        console.info(logF + " brightnessDiscount set1 err=" + JSON.stringify(err));
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
    * @tc.number: SetGetBrightnessDiscount_0100
    * @tc.name: Test callback form: call API: set() successfully for three consecutive times to set the brightnessDiscount parameter to "0.1".
    * @tc.desc: Test callback form: call API: set() successfully for three consecutive times to set the brightnessDiscount parameter to "0.1".
    */
    it('SetGetBrightnessDiscount_0100', 3, async function (done) {
      const caseName = "SetGetBrightnessDiscount_0100";
      const logF = LOG + caseName;
      var setValue: number = 0
      var isSucceedFind: boolean = false;
      config.brightnessDiscount.set(setValue, (err) => {
        if (err?.code) {
          console.info(logF + " brightnessDiscount set err = " + JSON.stringify(err))
        } else {
          setTimeout(() => {
            brightnessDiscountOn(logF,caseName)
            setTimeout(() => {
              excuteCase(caseName);
              setTimeout(() => {
                isSucceedFind =  findTimesFormonbackList(caseName);
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
    * @tc.number: SetGetBrightnessDiscount_0110
    * @tc.name: Test promise form: call API: set() successfully for three consecutive times to set the brightnessDiscount parameter to "0.1".
    * @tc.desc: Test promise form: call API: set() successfully for three consecutive times to set the brightnessDiscount parameter to "0.1".
    */
    it('SetGetBrightnessDiscount_0110', 3, async function (done) {
      const caseName = "SetGetBrightnessDiscount_0110";
      const logF = LOG + caseName;
      var setValue: number = 0
      var isSucceedFind: boolean = false;
      config.brightnessDiscount.set(setValue).then(() => {
        console.info(logF + " brightnessDiscount set  success.");
        setTimeout(() => {
          brightnessDiscountOn(logF,caseName)
          setTimeout(() => {
            excuteCase(caseName);
            setTimeout(() => {
              isSucceedFind =  findTimesFormonbackList(caseName);
            }, 2000);
          }, 2000);
        }, 2000);
      }).catch((err) => {
        console.info(logF + " brightnessDiscount set err=" + JSON.stringify(err));
      });
      setTimeout(() => {
        expect(isSucceedFind).assertEqual(true);
        console.info(logF + ' isSucceed : ' + (isSucceedFind));
        done();
      }, 8000);
    });

  })

}
