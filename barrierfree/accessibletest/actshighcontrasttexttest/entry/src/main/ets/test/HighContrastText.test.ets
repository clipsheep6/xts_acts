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
  console.info(LOG + 'ActsHighContrastTextTest excuteCase: ' + caseNamePara);

  function publishCallback(err) {
    console.info(LOG + caseNamePara + " on_target_change publish call back result:" + JSON.stringify(err));
  }

  var commonEventPublishData = {
    data: caseNamePara
  }
  commonEvent.publish("on_target_change", commonEventPublishData, publishCallback);
}

export default function HighContrastTextTest() {
  describe('ActsHighContrastTextTest', function () {
    beforeEach(async function (done) {
      console.info(LOG + 'ActsHighContrastTextTest: beforeEach');
      setTimeout(() => {
        config.highContrastText.off()
        isSucceed = false;
        target =false;
        done();
      }, 2000);
    });
    beforeAll(async function (done) {
      console.info(LOG + 'HighContrastTextTest: beforeAll');

      subScriber = await commonEvent.createSubscriber({
        events: ['on_target_change_extra']
      });
      commonEvent.subscribe(subScriber, (err, data) => {
        console.info(LOG + 'HighContrastTextTest beforeAll subscribe data:' + JSON.stringify(data));
        if (data.data == 'on_target_change_extra_success') {
          target =true;
        }
      });
      setTimeout(done(), START_TIMEOUT);
    });

    afterAll(async function (done) {
      console.info(LOG + 'HighContrastTextTest: afterAll');
      commonEvent.unsubscribe(subScriber);
      config.highContrastText.set(false);
      done();
    });

    /**
    * @tc.number: RegisterHighContrastText_0010
    * @tc.name: Call api:config.on() to listen the highContrastText state.
    * @tc.desc: Call api:config.on() to listen the highContrastText state.
    */
    it('RegisterHighContrastText_0010', 1, async function (done) {
      const caseName = "RegisterHighContrastText_0010";
      const logTag = LOG + caseName;
      let highContrastTextState: boolean = false;
      config.highContrastText.set(false, (err) => {
        if (err?.code) {
          console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
          return;
        }
      });
      setTimeout(() => {
        config.highContrastText.on((res) => {
          console.info(logTag + " Config listen highContrastText=" + res);
          if (res == true) {
            highContrastTextState = true;
          }
        })
        setTimeout(() => {
          excuteCase(caseName);
        }, 1000);
      }, 1000);
      setTimeout(() => {
        isSucceed = target && highContrastTextState;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: RegisterHighContrastText_0020
    * @tc.name: Call api:config.on() to listen the highContrastText state.
    * @tc.desc: Call api:config.on() to listen the highContrastText state.
    */
    it('RegisterHighContrastText_0020', 1, async function (done) {
      const caseName = "RegisterHighContrastText_0020";
      const logTag = LOG + caseName;
      let highContrastTextState: boolean = false;
      config.highContrastText.set(true, (err) => {
        if (err?.code) {
          console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
          return;
        }
      });
      setTimeout(() => {
        config.highContrastText.on((res) => {
          console.info(logTag + " Config listen highContrastText=" + res);
          if (res == false) {
            highContrastTextState = true;
          }
        })
        setTimeout(() => {
          excuteCase(caseName);
        }, 1000);
      }, 1000);

      setTimeout(() => {
        isSucceed = target && highContrastTextState;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: UnRegisterHighContrastText_0010
    * @tc.name: Call api:config.off() to cancel listening the highContrastText state.
    * @tc.desc: Call api:config.off() to cancel listening the highContrastText state.
    */
    it('UnRegisterHighContrastText_0010', 1, async function (done) {
      const caseName = "UnRegisterHighContrastText_0010";
      const logTag = LOG + caseName;
      let highContrastTextState: boolean = false;
      config.highContrastText.on((res) => {
        console.info(logTag + " Config listen highContrastText=" + res);
        highContrastTextState = res;
      })
      setTimeout(() => {
        config.highContrastText.off()
        setTimeout(() => {
          excuteCase(caseName);
        }, 1000);
      }, 1000);
      setTimeout(() => {
        isSucceed = target && !highContrastTextState;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: UnRegisterHighContrastText_0020
    * @tc.name: Call api:config.off() to cancel listening the highContrastText state.
    * @tc.desc: Call api:config.off() to cancel listening the highContrastText state.
    */
    it('UnRegisterHighContrastText_0020', 1, async function (done) {
      const caseName = "UnRegisterHighContrastText_0020";
      const logTag = LOG + caseName;
      let highContrastTextState: boolean = true;
      config.highContrastText.set(true, (err) => {
        if (err?.code) {
          console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
          return;
        }
      });
      setTimeout(() => {
        config.highContrastText.on((res) => {
          console.info(logTag + " Config listen highContrastText=" + res);
          highContrastTextState = res;
        })
        setTimeout(() => {
          config.highContrastText.off()
          setTimeout(() => {
            excuteCase(caseName);
          }, 1000);
        }, 1000);
      }, 1000);
      setTimeout(() => {
        isSucceed = target && highContrastTextState;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });

    /**
    * @tc.number: SetGetHighContrastText_0010
    * @tc.name: Call api:config.set() to set the highContrastText parameter.
    * @tc.desc: Call api:config.set() to set the highContrastText parameter.
    */
    it('SetGetHighContrastText_0010', 1, async function (done) {
      const caseName = "SetGetHighContrastText_0010";
      const logTag = LOG + caseName;
      config.highContrastText.set(true, (err) => {
        if (err?.code) {
          console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
          return;
        }
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
    * @tc.number: SetGetHighContrastText_0020
    * @tc.name: Call api:config.set() to set the highContrastText parameter.
    * @tc.desc: Call api:config.set() to set the highContrastText parameter.
    */
    it('SetGetHighContrastText_0020', 1, async function (done) {
      const caseName = "SetGetHighContrastText_0020";
      const logTag = LOG + caseName;
      config.highContrastText.set(false, (err) => {
        if (err?.code) {
          console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
          return;
        }
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
    * @tc.number: SetGetHighContrastText_0030
    * @tc.name: Call api:config.set() to set the highContrastText parameter.
    * @tc.desc: Call api:config.set() to set the highContrastText parameter.
    */
    it('SetGetHighContrastText_0030', 1, async function (done) {
      const caseName = "SetGetHighContrastText_0030";
      const logTag = LOG + caseName;
      config.highContrastText.set(true).then(() => {
        console.info(logTag + " highContrastText set true success");
      }).catch((err) => {
        console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
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
    * @tc.number: SetGetHighContrastText_0040
    * @tc.name: Call api:config.set() to set the highContrastText parameter.
    * @tc.desc: Call api:config.set() to set the highContrastText parameter.
    */
    it('SetGetHighContrastText_0040', 1, async function (done) {
      const caseName = "SetGetHighContrastText_0040";
      const logTag = LOG + caseName;
      config.highContrastText.set(false).then(() => {
        console.info(logTag + " highContrastText set false success");
      }).catch((err) => {
        console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
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
    * @tc.number: SetGetHighContrastText_0050
    * @tc.name: Call api:config.set() to set the highContrastText parameter.
    * @tc.desc: Call api:config.set() to set the highContrastText parameter.
    */
    it('SetGetHighContrastText_0050', 3, async function (done) {
      const caseName = "SetGetHighContrastText_0050";
      const logTag = LOG + caseName;
      config.highContrastText.set(true, (err) => {
        if (err?.code) {
          console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
          return;
        }
      });
      setTimeout(() => {
        config.highContrastText.set(false, (err) => {
          if (err?.code) {
            console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
            return;
          }
        });
        setTimeout(() => {
          config.highContrastText.set(true, (err) => {
            if (err?.code) {
              console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
              return;
            }
          });
          setTimeout(() => {
            excuteCase(caseName);
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
    * @tc.number: SetGetHighContrastText_0060
    * @tc.name: Call api:config.set() to set the highContrastText parameter.
    * @tc.desc: Call api:config.set() to set the highContrastText parameter.
    */
    it('SetGetHighContrastText_0060', 3, async function (done) {
      const caseName = "SetGetHighContrastText_0060";
      const logTag = LOG + caseName;
      let listenCount: number = 0;
      let highContrastTextState: boolean = false;
      config.highContrastText.set(false, (err) => {
        if (err?.code) {
          console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
          return;
        }
      });
      setTimeout(() => {
        config.highContrastText.on((res) => {
          listenCount++;
          console.info(logTag + " Config listen highContrastText listenCount=" + listenCount + " res=" + res);
        })
        setTimeout(() => {
          excuteCase(caseName);
        }, 1000);
      }, 1000);

      setTimeout(() => {
        if (listenCount === 1) {
          highContrastTextState = true;
        }
        isSucceed = target && highContrastTextState;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: SetGetHighContrastText_0070
    * @tc.name: Call api:config.set() to set the highContrastText parameter.
    * @tc.desc: Call api:config.set() to set the highContrastText parameter.
    */
    it('SetGetHighContrastText_0070', 3, async function (done) {
      const caseName = "SetGetHighContrastText_0070";
      const logTag = LOG + caseName;
      let listenCount: number = 0;
      let highContrastTextState: boolean = false;
      config.highContrastText.set(true, (err) => {
        if (err?.code) {
          console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
          return;
        }
      });
      setTimeout(() => {
        config.highContrastText.on((res) => {
          listenCount++;
          console.info(logTag + " Config listen highContrastText listenCount=" + listenCount + " res=" + res);
        })
        setTimeout(() => {
          excuteCase(caseName);
        }, 1000);
      }, 1000);

      setTimeout(() => {
        if (listenCount === 1) {
          highContrastTextState = true;
        }
        isSucceed = target && highContrastTextState;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: SetGetHighContrastText_0080
    * @tc.name: Call api:config.set() to set the highContrastText parameter.
    * @tc.desc: Call api:config.set() to set the highContrastText parameter.
    */
    it('SetGetHighContrastText_0080', 3, async function (done) {
      const caseName = "SetGetHighContrastText_0080";
      const logTag = LOG + caseName;
      let listenCount: number = 0;
      let highContrastTextState: boolean = false;
      config.highContrastText.set(false).then(() => {
        console.info(logTag + " highContrastText set false success");
      }).catch((err) => {
        console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
      })
      setTimeout(() => {
        config.highContrastText.on((res) => {
          listenCount++;
          console.info(logTag + " Config listen highContrastText listenCount=" + listenCount + " res=" + res);
        })
        setTimeout(() => {
          excuteCase(caseName);
        }, 1000);
      }, 1000);

      setTimeout(() => {
        if (listenCount === 1) {
          highContrastTextState = true;
        }
        isSucceed = target && highContrastTextState;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: SetGetHighContrastText_0090
    * @tc.name: Call api:config.set() to set the highContrastText parameter.
    * @tc.desc: Call api:config.set() to set the highContrastText parameter.
    */
    it('SetGetHighContrastText_0090', 3, async function (done) {
      const caseName = "SetGetHighContrastText_0090";
      const logTag = LOG + caseName;
      let listenCount: number = 0;
      let highContrastTextState: boolean = false;
      config.highContrastText.set(true).then(() => {
        console.info(logTag + " highContrastText set true success");
      }).catch((err) => {
        console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
      })
      setTimeout(() => {
        config.highContrastText.on((res) => {
          listenCount++;
          console.info(logTag + " Config listen highContrastText listenCount=" + listenCount + " res=" + res);
        })
        setTimeout(() => {
          excuteCase(caseName);
        }, 1000);
      }, 1000);

      setTimeout(() => {
        if (listenCount === 1) {
          highContrastTextState = true;
        }
        isSucceed = target && highContrastTextState;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });

  })
}
