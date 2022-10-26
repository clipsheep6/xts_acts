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
  console.info(LOG + 'ActsInvertColorTest excuteCase: ' + caseNamePara);

  function publishCallback(err) {
    console.info(LOG + caseNamePara + " on_target_change publish call back result:" + JSON.stringify(err));
  }

  var commonEventPublishData = {
    data: caseNamePara
  }
  commonEvent.publish("on_target_change", commonEventPublishData, publishCallback);
}

export default function InvertColorTest() {
  describe('ActsInvertColorTest', function () {
    beforeEach(async function (done) {
      console.info(LOG + 'ActsInvertColorTest: beforeEach');
      setTimeout(() => {
        config.invertColor.off()
        isSucceed = false;
        target =false;
        done();
      }, 2000);
    });
    beforeAll(async function (done) {
      console.info(LOG + 'InvertColorTest: beforeAll');

      subScriber = await commonEvent.createSubscriber({
        events: ['on_target_change_extra']
      });
      commonEvent.subscribe(subScriber, (err, data) => {
        console.info(LOG + 'InvertColorTest beforeAll subscribe data:' + JSON.stringify(data));
        if (data.data == 'on_target_change_extra_success') {
          target =true;
        }
      });
      setTimeout(done(), START_TIMEOUT);
    });

    afterAll(async function (done) {
      console.info(LOG + 'InvertColorTest: afterAll');
      commonEvent.unsubscribe(subScriber);
      config.invertColor.set(false);
      done();
    });

    /**
    * @tc.number: RegisterInvertColor_0010
    * @tc.name: Call api:config.on() to listen the invertColor state.
    * @tc.desc: Call api:config.on() to listen the invertColor state.
    */
    it('RegisterInvertColor_0010', 1, async function (done) {
      const caseName = "RegisterInvertColor_0010";
      const logTag = LOG + caseName;
      let invertColorState = false;
      config.invertColor.set(false, (err) => {
        if (err?.code) {
          console.info(logTag + " invertColor set err=" + JSON.stringify(err));
          return;
        }
      });
      setTimeout(() => {
        config.invertColor.on((res) => {
          console.info(logTag + " Config listen invertColor=" + res);
          if (res == true) {
            invertColorState = true;
          }
        })
        setTimeout(() => {
          excuteCase(caseName);
        }, 1000);
      }, 1000);
      setTimeout(() => {
        isSucceed = target && invertColorState;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: RegisterInvertColor_0020
    * @tc.name: Call api:config.on() to listen the invertColor state.
    * @tc.desc: Call api:config.on() to listen the invertColor state.
    */
    it('RegisterInvertColor_0020', 1, async function (done) {
      const caseName = "RegisterInvertColor_0020";
      const logTag = LOG + caseName;
      let invertColorState = false;
      config.invertColor.set(true, (err) => {
        if (err?.code) {
          console.info(logTag + " invertColor set err=" + JSON.stringify(err));
          return;
        }
      });
      setTimeout(() => {
        config.invertColor.on((res) => {
          console.info(logTag + " Config listen invertColor=" + res);
          if (res == false) {
            invertColorState = true;
          }
        })
        setTimeout(() => {
          excuteCase(caseName);
        }, 1000);
      }, 1000);

      setTimeout(() => {
        isSucceed = target && invertColorState;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: UnRegisterInvertColor_0010
    * @tc.name: Call api:config.off() to cancel listening the invertColor state.
    * @tc.desc: Call api:config.off() to cancel listening the invertColor state.
    */
    it('UnRegisterInvertColor_0010', 1, async function (done) {
      const caseName = "UnRegisterInvertColor_0010";
      const logTag = LOG + caseName;
      let invertColorState = false;
      config.invertColor.on((res) => {
        console.info(logTag + " Config listen invertColor=" + res);
        invertColorState = res;
      })
      setTimeout(() => {
        config.invertColor.off()
        setTimeout(() => {
          excuteCase(caseName);
        }, 1000);
      }, 1000);
      setTimeout(() => {
        isSucceed = target && !invertColorState;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: UnRegisterInvertColor_0020
    * @tc.name: Call api:config.off() to cancel listening the invertColor state.
    * @tc.desc: Call api:config.off() to cancel listening the invertColor state.
    */
    it('UnRegisterInvertColor_0020', 1, async function (done) {
      const caseName = "UnRegisterInvertColor_0020";
      const logTag = LOG + caseName;
      let invertColorState = true;
      config.invertColor.set(true, (err) => {
        if (err?.code) {
          console.info(logTag + " invertColor set err=" + JSON.stringify(err));
          return;
        }
      });
      setTimeout(() => {
        config.invertColor.on((res) => {
          console.info(logTag + " Config listen invertColor=" + res);
          invertColorState = res;
        })
        setTimeout(() => {
          config.invertColor.off()
          setTimeout(() => {
            excuteCase(caseName);
          }, 1000);
        }, 1000);
      }, 1000);
      setTimeout(() => {
        isSucceed = target && invertColorState;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: SetGetInvertColor_0010
    * @tc.name: Call api:config.set() to set the invertColor parameter.
    * @tc.desc: Call api:config.set() to set the invertColor parameter.
    */
    it('SetGetInvertColor_0010', 1, async function (done) {
      const caseName = "SetGetInvertColor_0010";
      const logTag = LOG + caseName;
      config.invertColor.set(true, (err) => {
        if (err?.code) {
          console.info(logTag + " invertColor set err=" + JSON.stringify(err));
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
    * @tc.number: SetGetInvertColor_0020
    * @tc.name: Call api:config.set() to set the invertColor parameter.
    * @tc.desc: Call api:config.set() to set the invertColor parameter.
    */
    it('SetGetInvertColor_0020', 1, async function (done) {
      const caseName = "SetGetInvertColor_0020";
      const logTag = LOG + caseName;
      config.invertColor.set(false, (err) => {
        if (err?.code) {
          console.info(logTag + " invertColor set err=" + JSON.stringify(err));
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
    * @tc.number: SetGetInvertColor_0030
    * @tc.name: Call api:config.set() to set the invertColor parameter.
    * @tc.desc: Call api:config.set() to set the invertColor parameter.
    */
    it('SetGetInvertColor_0030', 1, async function (done) {
      const caseName = "SetGetInvertColor_0030";
      const logTag = LOG + caseName;
      config.invertColor.set(true).then(() => {
        console.info(logTag + " invertColor set success");
      }).catch((err) => {
        console.info(logTag + " invertColor set err=" + JSON.stringify(err));
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
    * @tc.number: SetGetInvertColor_0040
    * @tc.name: Call api:config.set() to set the invertColor parameter.
    * @tc.desc: Call api:config.set() to set the invertColor parameter.
    */
    it('SetGetInvertColor_0040', 1, async function (done) {
      const caseName = "SetGetInvertColor_0040";
      const logTag = LOG + caseName;
      config.invertColor.set(false).then(() => {
        console.info(logTag + " invertColor set success");
      }).catch((err) => {
        console.info(logTag + " invertColor set err=" + JSON.stringify(err));
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
    * @tc.number: SetGetInvertColor_0050
    * @tc.name: Call api:config.set() to set the invertColor parameter.
    * @tc.desc: Call api:config.set() to set the invertColor parameter.
    */
    it('SetGetInvertColor_0050', 3, async function (done) {
      const caseName = "SetGetInvertColor_0050";
      const logTag = LOG + caseName;
      config.invertColor.set(true, (err) => {
        if (err?.code) {
          console.info(logTag + " invertColor set err=" + JSON.stringify(err));
          return;
        }
      });
      setTimeout(() => {
        config.invertColor.set(false, (err) => {
          if (err?.code) {
            console.info(logTag + " invertColor set err=" + JSON.stringify(err));
            return;
          }
        });
        setTimeout(() => {
          config.invertColor.set(true, (err) => {
            if (err?.code) {
              console.info(logTag + " invertColor set err=" + JSON.stringify(err));
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
    * @tc.number: SetGetInvertColor_0060
    * @tc.name: Call api:config.set() to set the invertColor parameter.
    * @tc.desc: Call api:config.set() to set the invertColor parameter.
    */
    it('SetGetInvertColor_0060', 3, async function (done) {
      const caseName = "SetGetInvertColor_0060";
      const logTag = LOG + caseName;
      let listenCount: number = 0;
      let invertColorState = false;
      config.invertColor.set(false, (err) => {
        if (err?.code) {
          console.info(logTag + " invertColor set err=" + JSON.stringify(err));
          return;
        }
      });
      setTimeout(() => {
        config.invertColor.on((res) => {
          listenCount++;
          console.info(logTag + " Config listen invertColor listenCount=" + listenCount + " res=" + res);
        })
        setTimeout(() => {
          excuteCase(caseName);
        }, 1000);
      }, 1000);

      setTimeout(() => {
        if (listenCount === 1) {
          invertColorState = true;
        }
        isSucceed = target && invertColorState;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: SetGetInvertColor_0070
    * @tc.name: Call api:config.set() to set the invertColor parameter.
    * @tc.desc: Call api:config.set() to set the invertColor parameter.
    */
    it('SetGetInvertColor_0070', 3, async function (done) {
      const caseName = "SetGetInvertColor_0070";
      const logTag = LOG + caseName;
      let listenCount: number = 0;
      let invertColorState = false;
      config.invertColor.set(true, (err) => {
        if (err?.code) {
          console.info(logTag + " invertColor set err=" + JSON.stringify(err));
          return;
        }
      });
      setTimeout(() => {
        config.invertColor.on((res) => {
          listenCount++;
          console.info(logTag + " Config listen invertColor listenCount=" + listenCount + " res=" + res);
        })
        setTimeout(() => {
          excuteCase(caseName);
        }, 1000);
      }, 1000);

      setTimeout(() => {
        if (listenCount === 1) {
          invertColorState = true;
        }
        isSucceed = target && invertColorState;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: SetGetInvertColor_0080
    * @tc.name: Call api:config.set() to set the invertColor parameter.
    * @tc.desc: Call api:config.set() to set the invertColor parameter.
    */
    it('SetGetInvertColor_0080', 3, async function (done) {
      const caseName = "SetGetInvertColor_0080";
      const logTag = LOG + caseName;
      let listenCount: number = 0;
      let invertColorState = false;
      config.invertColor.set(false).then(() => {
        console.info(logTag + " invertColor set false success");
      }).catch((err) => {
        console.info(logTag + " invertColor set err=" + JSON.stringify(err));
      })
      setTimeout(() => {
        config.invertColor.on((res) => {
          listenCount++;
          console.info(logTag + " Config listen invertColor listenCount=" + listenCount + " res=" + res);
        })
        setTimeout(() => {
          excuteCase(caseName);
        }, 1000);
      }, 1000);

      setTimeout(() => {
        if (listenCount === 1) {
          invertColorState = true;
        }
        isSucceed = target && invertColorState;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });
    /**
    * @tc.number: SetGetInvertColor_0090
    * @tc.name: Call api:config.set() to set the invertColor parameter.
    * @tc.desc: Call api:config.set() to set the invertColor parameter.
    */
    it('SetGetInvertColor_0090', 3, async function (done) {
      const caseName = "SetGetInvertColor_0090";
      const logTag = LOG + caseName;
      let listenCount: number = 0;
      let invertColorState = false;
      config.invertColor.set(true).then(() => {
        console.info(logTag + " invertColor set true success");
      }).catch((err) => {
        console.info(logTag + " invertColor set err=" + JSON.stringify(err));
      })
      setTimeout(() => {
        config.invertColor.on((res) => {
          listenCount++;
          console.info(logTag + " Config listen invertColor listenCount=" + listenCount + " res=" + res);
        })
        setTimeout(() => {
          excuteCase(caseName);
        }, 1000);
      }, 1000);

      setTimeout(() => {
        if (listenCount === 1) {
          invertColorState = true;
        }
        isSucceed = target && invertColorState;
        console.info(logTag + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    });

  })
}
