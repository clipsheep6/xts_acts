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
import config from '@ohos.accessibility.config'

const LOG = "[xtsLog] "
const START_TIMEOUT = 5000;
const EXPECT_TIMEOUT = 6000;
let target: boolean = false;
let subScriber = undefined;
let isSucceed: boolean = false;

const excuteCase = (caseNamePara) => {
  console.info(LOG + 'ActsDaltonizationColorFilterTest excuteCase: ' + caseNamePara);

  function publishCallback(err) {
    console.info(LOG + caseNamePara + " on_target_change publish call back result:" + JSON.stringify(err));
  }

  var commonEventPublishData = {
    data: caseNamePara
  }
  commonEvent.publish("on_target_change", commonEventPublishData, publishCallback);
}

export default function DaltonizationColorFilterTest() {
  describe('ActsDaltonizationColorFilterTest', function () {
    beforeEach(async function (done) {
      console.info(LOG + 'ActsDaltonizationColorFilterTest: beforeEach');
      setTimeout(() => {
        config.daltonizationColorFilter.off()
        isSucceed = false;
        target =false;
        done();
      }, 2000);
    });
    beforeAll(async function (done) {
      console.info(LOG + 'DaltonizationColorFilterTest: beforeAll');

      subScriber = await commonEvent.createSubscriber({
        events: ['on_target_change_extra']
      });
      commonEvent.subscribe(subScriber, (err, data) => {
        console.info(LOG + 'DaltonizationColorFilterTest beforeAll subscribe data:' + JSON.stringify(data));
        if (data.data == 'on_target_change_extra_success') {
          target =true;
        }
      });
      setTimeout(done(), START_TIMEOUT);
    });

    afterAll(async function (done) {
      console.info(LOG + 'DaltonizationColorFilterTest: afterAll');
      commonEvent.unsubscribe(subScriber);
      config.daltonizationColorFilter.set('Normal');
      done();
    });

    /**
    * @tc.number: RegisterDaltonizationColorFilter_0010
    * @tc.name: Call api:config.on() to listen the daltonizationColorFilter state.
    * @tc.desc: Call api:config.on() to listen the daltonizationColorFilter state.
    */
    it('RegisterDaltonizationColorFilter_0010', 1, async function (done) {
      const caseName = "RegisterDaltonizationColorFilter_0010";
      const logTag = LOG + caseName;
      let daltonizationColorFilterState = false;
      config.daltonizationColorFilter.set('Tritanomaly', (err) => {
        if (err?.code) {
          console.info(logTag + " daltonizationColorFilter set err=" + JSON.stringify(err));
          return;
        }
      });
      setTimeout(() => {
        config.daltonizationColorFilter.on((res) => {
          console.info(logTag + " Config listen daltonizationColorFilter=" + res);
          if (res == 'Normal') {
            daltonizationColorFilterState = true
          }
        })
        setTimeout(() => {
          excuteCase(caseName);
        }, 1000);
      }, 1000);
      setTimeout(() => {
        isSucceed = target && daltonizationColorFilterState;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: RegisterDaltonizationColorFilter_0020
    * @tc.name: Call api:config.on() to listen the daltonizationColorFilter state.
    * @tc.desc: Call api:config.on() to listen the daltonizationColorFilter state.
    */
    it('RegisterDaltonizationColorFilter_0020', 1, async function (done) {
      const caseName = "RegisterDaltonizationColorFilter_0020";
      const logTag = LOG + caseName;
      let daltonizationColorFilterState = false;
      config.daltonizationColorFilter.on((res) => {
        console.info(logTag + " Config listen daltonizationColorFilter=" + res);
        if (res == 'Protanomaly') {
          daltonizationColorFilterState = true
        }
      })
      setTimeout(() => {
        excuteCase(caseName);
      }, 1000);
      setTimeout(() => {
        isSucceed = target && daltonizationColorFilterState;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: RegisterDaltonizationColorFilter_0030
    * @tc.name: Call api:config.on() to listen the daltonizationColorFilter state.
    * @tc.desc: Call api:config.on() to listen the daltonizationColorFilter state.
    */
    it('RegisterDaltonizationColorFilter_0030', 1, async function (done) {
      const caseName = "RegisterDaltonizationColorFilter_0030";
      const logTag = LOG + caseName;
      let daltonizationColorFilterState = false;
      config.daltonizationColorFilter.on((res) => {
        console.info(logTag + " Config listen daltonizationColorFilter=" + res);
        if (res == 'Deuteranomaly') {
          daltonizationColorFilterState = true
        }
      })
      setTimeout(() => {
        excuteCase(caseName);
      }, 1000);
      setTimeout(() => {
        isSucceed = target && daltonizationColorFilterState;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: RegisterDaltonizationColorFilter_0040
    * @tc.name: Call api:config.on() to listen the daltonizationColorFilter state.
    * @tc.desc: Call api:config.on() to listen the daltonizationColorFilter state.
    */
    it('RegisterDaltonizationColorFilter_0040', 1, async function (done) {
      const caseName = "RegisterDaltonizationColorFilter_0040";
      const logTag = LOG + caseName;
      let daltonizationColorFilterState = false;
      config.daltonizationColorFilter.on((res) => {
        console.info(logTag + " Config listen daltonizationColorFilter=" + res);
        if (res == 'Tritanomaly') {
          daltonizationColorFilterState = true
        }
      })
      setTimeout(() => {
        excuteCase(caseName);
      }, 1000);
      setTimeout(() => {
        isSucceed = target && daltonizationColorFilterState;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: UnRegisterDaltonizationColorFilter_0010
    * @tc.name: Call api:config.off() to cancel listening the daltonizationColorFilter state.
    * @tc.desc: Call api:config.off() to cancel listening the daltonizationColorFilter state.
    */
    it('UnRegisterDaltonizationColorFilter_0010', 1, async function (done) {
      const caseName = "UnRegisterDaltonizationColorFilter_0010";
      const logTag = LOG + caseName;
      let daltonizationColorFilterState = false;
      config.daltonizationColorFilter.on((res) => {
        console.info(logTag + " Config listen daltonizationColorFilter=" + res);
        if (res == 'Normal') {
          daltonizationColorFilterState = true
        }
      })
      setTimeout(() => {
        config.daltonizationColorFilter.off()
        setTimeout(() => {
          excuteCase(caseName);
        }, 1000);
      }, 1000);
      setTimeout(() => {
        isSucceed = target && !daltonizationColorFilterState;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: UnRegisterDaltonizationColorFilter_0020
    * @tc.name: Call api:config.off() to cancel listening the daltonizationColorFilter state.
    * @tc.desc: Call api:config.off() to cancel listening the daltonizationColorFilter state.
    */
    it('UnRegisterDaltonizationColorFilter_0020', 1, async function (done) {
      const caseName = "UnRegisterDaltonizationColorFilter_0020";
      const logTag = LOG + caseName;
      let daltonizationColorFilterState = false;
      config.daltonizationColorFilter.on((res) => {
        console.info(logTag + " Config listen daltonizationColorFilter=" + res);
        if (res == 'Protanomaly') {
          daltonizationColorFilterState = true
        }
      })
      setTimeout(() => {
        config.daltonizationColorFilter.off()
        setTimeout(() => {
          excuteCase(caseName);
        }, 1000);
      }, 1000);
      setTimeout(() => {
        isSucceed = target && !daltonizationColorFilterState;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: UnRegisterDaltonizationColorFilter_0030
    * @tc.name: Call api:config.off() to cancel listening the daltonizationColorFilter state.
    * @tc.desc: Call api:config.off() to cancel listening the daltonizationColorFilter state.
    */
    it('UnRegisterDaltonizationColorFilter_0030', 1, async function (done) {
      const caseName = "UnRegisterDaltonizationColorFilter_0030";
      const logTag = LOG + caseName;
      let daltonizationColorFilterState = false;
      config.daltonizationColorFilter.on((res) => {
        console.info(logTag + " Config listen daltonizationColorFilter=" + res);
        if (res == 'Deuteranomaly') {
          daltonizationColorFilterState = true
        }
      })
      setTimeout(() => {
        config.daltonizationColorFilter.off()
        setTimeout(() => {
          excuteCase(caseName);
        }, 1000);
      }, 1000);
      setTimeout(() => {
        isSucceed = target && !daltonizationColorFilterState;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: UnRegisterDaltonizationColorFilter_0040
    * @tc.name: Call api:config.off() to cancel listening the daltonizationColorFilter state.
    * @tc.desc: Call api:config.off() to cancel listening the daltonizationColorFilter state.
    */
    it('UnRegisterDaltonizationColorFilter_0040', 1, async function (done) {
      const caseName = "UnRegisterDaltonizationColorFilter_0040";
      const logTag = LOG + caseName;
      let daltonizationColorFilterState = false;
      config.daltonizationColorFilter.on((res) => {
        console.info(logTag + " Config listen daltonizationColorFilter=" + res);
        if (res == 'Tritanomaly') {
          daltonizationColorFilterState = true
        }
      })
      setTimeout(() => {
        config.daltonizationColorFilter.off()
        setTimeout(() => {
          excuteCase(caseName);
        }, 1000);
      }, 1000);
      setTimeout(() => {
        isSucceed = target && !daltonizationColorFilterState;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });

    /**
    * @tc.number: SetGetDaltonizationColorFilter_0010
    * @tc.name: Call api:config.set() to set the daltonizationColorFilter parameter.
    * @tc.desc: Call api:config.set() to set the daltonizationColorFilter parameter.
    */
    it('SetGetDaltonizationColorFilter_0010', 1, async function (done) {
      const caseName = "SetGetDaltonizationColorFilter_0010";
      const logTag = LOG + caseName;
      config.daltonizationColorFilter.set('Normal', (err) => {
        if (err?.code) {
          console.info(logTag + " daltonizationColorFilter set Normal err=" + JSON.stringify(err));
          return;
        }
        console.info(logTag + " daltonizationColorFilter set Normal success");
      });
      setTimeout(() => {
        excuteCase(caseName);
      }, 1000);
      setTimeout(() => {
        isSucceed = target;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: SetGetDaltonizationColorFilter_0020
    * @tc.name: Call api:config.set() to set the daltonizationColorFilter parameter.
    * @tc.desc: Call api:config.set() to set the daltonizationColorFilter parameter.
    */
    it('SetGetDaltonizationColorFilter_0020', 1, async function (done) {
      const caseName = "SetGetDaltonizationColorFilter_0020";
      const logTag = LOG + caseName;
      config.daltonizationColorFilter.set('Protanomaly', (err) => {
        if (err?.code) {
          console.info(logTag + " daltonizationColorFilter set Protanomaly err=" + JSON.stringify(err));
          return;
        }
        console.info(logTag + " daltonizationColorFilter set Protanomaly success");
      });
      setTimeout(() => {
        excuteCase(caseName);
      }, 1000);
      setTimeout(() => {
        isSucceed = target;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: SetGetDaltonizationColorFilter_0030
    * @tc.name: Call api:config.set() to set the daltonizationColorFilter parameter.
    * @tc.desc: Call api:config.set() to set the daltonizationColorFilter parameter.
    */
    it('SetGetDaltonizationColorFilter_0030', 1, async function (done) {
      const caseName = "SetGetDaltonizationColorFilter_0030";
      const logTag = LOG + caseName;
      config.daltonizationColorFilter.set('Deuteranomaly', (err) => {
        if (err?.code) {
          console.info(logTag + " daltonizationColorFilter set Deuteranomaly err=" + JSON.stringify(err));
          return;
        }
        console.info(logTag + " daltonizationColorFilter set Deuteranomaly success");
      });
      setTimeout(() => {
        excuteCase(caseName);
      }, 1000);
      setTimeout(() => {
        isSucceed = target;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: SetGetDaltonizationColorFilter_0040
    * @tc.name: Call api:config.set() to set the daltonizationColorFilter parameter.
    * @tc.desc: Call api:config.set() to set the daltonizationColorFilter parameter.
    */
    it('SetGetDaltonizationColorFilter_0040', 1, async function (done) {
      const caseName = "SetGetDaltonizationColorFilter_0040";
      const logTag = LOG + caseName;
      config.daltonizationColorFilter.set('Tritanomaly', (err) => {
        if (err?.code) {
          console.info(logTag + " daltonizationColorFilter set Tritanomaly err=" + JSON.stringify(err));
          return;
        }
        console.info(logTag + " daltonizationColorFilter set Tritanomaly success");
      });
      setTimeout(() => {
        excuteCase(caseName);
      }, 1000);
      setTimeout(() => {
        isSucceed = target;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: SetGetDaltonizationColorFilter_0050
    * @tc.name: Call api:config.set() to set the daltonizationColorFilter parameter.
    * @tc.desc: Call api:config.set() to set the daltonizationColorFilter parameter.
    */
    it('SetGetDaltonizationColorFilter_0050', 1, async function (done) {
      const caseName = "SetGetDaltonizationColorFilter_0050";
      const logTag = LOG + caseName;
      config.daltonizationColorFilter.set('Normal').then(() => {
        console.info(logTag + " daltonizationColorFilter set Normal success");
      }).catch((err) => {
        console.info(logTag + " daltonizationColorFilter set Normal err=" + JSON.stringify(err));
      })
      setTimeout(() => {
        excuteCase(caseName);
      }, 1000);
      setTimeout(() => {
        isSucceed = target;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: SetGetDaltonizationColorFilter_0060
    * @tc.name: Call api:config.set() to set the daltonizationColorFilter parameter.
    * @tc.desc: Call api:config.set() to set the daltonizationColorFilter parameter.
    */
    it('SetGetDaltonizationColorFilter_0060', 1, async function (done) {
      const caseName = "SetGetDaltonizationColorFilter_0060";
      const logTag = LOG + caseName;
      config.daltonizationColorFilter.set('Protanomaly').then(() => {
        console.info(logTag + " daltonizationColorFilter set Protanomaly success");
      }).catch((err) => {
        console.info(logTag + " daltonizationColorFilter set Protanomaly err=" + JSON.stringify(err));
      })
      setTimeout(() => {
        excuteCase(caseName);
      }, 1000);
      setTimeout(() => {
        isSucceed = target;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: SetGetDaltonizationColorFilter_0070
    * @tc.name: Call api:config.set() to set the daltonizationColorFilter parameter.
    * @tc.desc: Call api:config.set() to set the daltonizationColorFilter parameter.
    */
    it('SetGetDaltonizationColorFilter_0070', 1, async function (done) {
      const caseName = "SetGetDaltonizationColorFilter_0070";
      const logTag = LOG + caseName;
      config.daltonizationColorFilter.set('Deuteranomaly').then(() => {
        console.info(logTag + " daltonizationColorFilter set Deuteranomaly success");
      }).catch((err) => {
        console.info(logTag + " daltonizationColorFilter set Deuteranomaly err=" + JSON.stringify(err));
      })
      setTimeout(() => {
        excuteCase(caseName);
      }, 1000);
      setTimeout(() => {
        isSucceed = target;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: SetGetDaltonizationColorFilter_0080
    * @tc.name: Call api:config.set() to set the daltonizationColorFilter parameter.
    * @tc.desc: Call api:config.set() to set the daltonizationColorFilter parameter.
    */
    it('SetGetDaltonizationColorFilter_0080', 1, async function (done) {
      const caseName = "SetGetDaltonizationColorFilter_0080";
      const logTag = LOG + caseName;
      config.daltonizationColorFilter.set('Tritanomaly').then(() => {
        console.info(logTag + " daltonizationColorFilter set Tritanomaly success");
      }).catch((err) => {
        console.info(logTag + " daltonizationColorFilter set Tritanomaly err=" + JSON.stringify(err));
      })
      setTimeout(() => {
        excuteCase(caseName);
      }, 1000);
      setTimeout(() => {
        isSucceed = target;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: SetGetDaltonizationColorFilter_0090
    * @tc.name: Call api:config.set() to set the daltonizationColorFilter parameter.
    * @tc.desc: Call api:config.set() to set the daltonizationColorFilter parameter.
    */
    it('SetGetDaltonizationColorFilter_0090', 3, async function (done) {
      const caseName = "SetGetDaltonizationColorFilter_0090";
      const logTag = LOG + caseName;
      config.daltonizationColorFilter.set('Normal', (err) => {
        if (err?.code) {
          console.info(logTag + " daltonizationColorFilter set Normal err=" + JSON.stringify(err));
          return;
        }
      });
      setTimeout(() => {
        config.daltonizationColorFilter.set('Protanomaly', (err) => {
          if (err?.code) {
            console.info(logTag + " daltonizationColorFilter set Protanomaly err=" + JSON.stringify(err));
            return;
          }
        });
        setTimeout(() => {
          config.daltonizationColorFilter.set('Tritanomaly', (err) => {
            if (err?.code) {
              console.info(logTag + " daltonizationColorFilter set Tritanomaly err=" + JSON.stringify(err));
              return;
            }
          });
          setTimeout(() => {
            config.daltonizationColorFilter.set('Deuteranomaly', (err) => {
              if (err?.code) {
                console.info(logTag + " daltonizationColorFilter set Deuteranomaly err=" + JSON.stringify(err));
                return;
              }
              console.info(logTag + " daltonizationColorFilter set Deuteranomaly success");
            });
            setTimeout(() => {
              excuteCase(caseName);
            }, 1000);
          }, 1000);
        }, 1000);
      }, 1000);

      setTimeout(() => {
        isSucceed = target;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: SetGetDaltonizationColorFilter_0100
    * @tc.name: Call api:config.set() to set the daltonizationColorFilter parameter.
    * @tc.desc: Call api:config.set() to set the daltonizationColorFilter parameter.
    */
    it('SetGetDaltonizationColorFilter_0100', 3, async function (done) {
      const caseName = "SetGetDaltonizationColorFilter_0100";
      const logTag = LOG + caseName;
      let listenCount: number = 0;
      let colorFilterState = false;
      config.daltonizationColorFilter.set('Normal', (err) => {
        if (err?.code) {
          console.info(logTag + " daltonizationColorFilter set Normal err=" + JSON.stringify(err));
          return;
        }
        console.info(logTag + " daltonizationColorFilter set Normal success");
      });
      setTimeout(() => {
        config.daltonizationColorFilter.on((res) => {
          listenCount++;
          console.info(logTag + " Config listen daltonizationColorFilter listenCount=" + listenCount + " res=" + res);
        })
        setTimeout(() => {
          excuteCase(caseName);
        }, 1000);
      }, 1000);

      setTimeout(() => {
        if (listenCount === 1) {
          colorFilterState = true;
        }
        isSucceed = target && colorFilterState;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: SetGetDaltonizationColorFilter_0110
    * @tc.name: Call api:config.set() to set the daltonizationColorFilter parameter.
    * @tc.desc: Call api:config.set() to set the daltonizationColorFilter parameter.
    */
    it('SetGetDaltonizationColorFilter_0110', 3, async function (done) {
      const caseName = "SetGetDaltonizationColorFilter_0110";
      const logTag = LOG + caseName;
      let listenCount: number = 0;
      let colorFilterState = false;
      config.daltonizationColorFilter.set('Normal').then(() => {
        console.info(logTag + " daltonizationColorFilter set Normal success");
      }).catch((err) => {
        console.info(logTag + " daltonizationColorFilter set Normal err=" + JSON.stringify(err));
      })
      setTimeout(() => {
        config.daltonizationColorFilter.on((res) => {
          listenCount++;
          console.info(logTag + " Config listen daltonizationColorFilter listenCount=" + listenCount + " res=" + res);
        })
        setTimeout(() => {
          excuteCase(caseName);
        }, 1000);
      }, 1000);

      setTimeout(() => {
        if (listenCount === 1) {
          colorFilterState = true;
        }
        isSucceed = target && colorFilterState;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: SetErrorDaltonizationColorFilter_0010
    * @tc.name: Call api:config.set() to set the daltonizationColorFilter error parameter.
    * @tc.desc: Call api:config.set() to set the daltonizationColorFilter error parameter.
    */
    it('SetErrorDaltonizationColorFilter_0010', 2, async function (done) {
      const caseName = "SetErrorDaltonizationColorFilter_0010";
      const logTag = LOG + caseName;
      let setResult: boolean = false;
      config.daltonizationColorFilter.set(undefined, (err) => {
        if (err?.code) {
          console.info(logTag + " daltonizationColorFilter set err=" + JSON.stringify(err));
          setResult = true
        }
      });
      setTimeout(() => {
        isSucceed = setResult;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: SetErrorDaltonizationColorFilter_0030
    * @tc.name: Call api:config.set() to set the daltonizationColorFilter error parameter.
    * @tc.desc: Call api:config.set() to set the daltonizationColorFilter error parameter.
    */
    it('SetErrorDaltonizationColorFilter_0030', 2, async function (done) {
      const caseName = "SetErrorDaltonizationColorFilter_0030";
      const logTag = LOG + caseName;
      let setResult: boolean = false;
      config.daltonizationColorFilter.set(undefined).then(() => {
        console.info(logTag + " daltonizationColorFilter set undefined success");
      }).catch((err) => {
        console.info(logTag + " daltonizationColorFilter set err=" + JSON.stringify(err));
        setResult = true
      })
      setTimeout(() => {
        isSucceed = setResult;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });

  })
}
