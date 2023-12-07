/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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

import hilog from '@ohos.hilog';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import { Driver, ON } from '@ohos.UiTest';
import formHost from '@ohos.app.form.formHost';
import Want from '@ohos.app.ability.Want';
import Base from '@ohos.base';
import common from '@ohos.app.ability.common';

let driver = Driver.create();

function sleep(delay: Number) {
  let start = (new Date()).getTime();
  while ((new Date()).getTime() - start < delay) {
    continue;
  }
}

let testAbilityContext: common.UIAbilityContext;

export default function FormRouterUserErrCodeTest() {
  describe('FormRouterUserErrCodeTest', (done: Function) => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(async (done: Function) => {
      testAbilityContext = AppStorage.get<common.UIAbilityContext>('TestAbilityContext') as common.UIAbilityContext;
      done();
    })
    beforeEach(async (done: Function) => {
    })
    afterEach(async (done: Function) => {
    })
    afterAll(async(done: Function) => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_0100
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: AsyncCallback method set empty string in formId array Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_0100', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_0100 Start');
      try {
        formHost.setRouterProxy([''], (want: Want) => {
          hilog.info(0x0000, 'testTag', 'formHost recv router event, want: %{public}s', JSON.stringify(want) ?? '');
        }, (err: Base.BusinessError) => {
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err.code);
          expect(err.code).assertEqual(401);
          hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_0100 End');
          done();
        })
      } catch (err) {
        expect().assertFail();
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
        done();
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_0200
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: AsyncCallback method set formId array undefined Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_0200', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_0200 Start');
      try {
        formHost.setRouterProxy(undefined, (want: Want) => {
          hilog.info(0x0000, 'testTag', 'formHost recv router event, want: %{public}s', JSON.stringify(want) ?? '');
        }, (err: Base.BusinessError) => {
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err.code);
          expect(err.code).assertEqual(401);
          hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_0200 End');
          done();
        })
      } catch (err) {
        expect().assertFail();
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
        done();
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_0300
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: AsyncCallback method set formId array null Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_0300', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_0300 Start');
      try {
        formHost.setRouterProxy(null, (want: Want) => {
          hilog.info(0x0000, 'testTag', 'formHost recv router event, want: %{public}s', JSON.stringify(want) ?? '');
        }, (err: Base.BusinessError) => {
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err.code);
          expect(err.code).assertEqual(401);
          hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_0300 End');
          done();
        })
      } catch (err) {
        expect().assertFail();
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
        done();
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_0400
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: AsyncCallback method set formId array null Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_0400', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_0400 Start');
      try {
        formHost.setRouterProxy([], (want: Want) => {
          hilog.info(0x0000, 'testTag', 'formHost recv router event, want: %{public}s', JSON.stringify(want) ?? '');
        }, (err: Base.BusinessError) => {
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err.code);
          expect(err.code).assertEqual(401);
          hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_0400 End');
          done();
        })
      } catch (err) {
        expect().assertFail();
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
        done();
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_0500
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: AsyncCallback method set formId in fromIds array is undefined Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_0500', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_0500 Start');
      try {
        formHost.setRouterProxy([undefined], (want: Want) => {
          hilog.info(0x0000, 'testTag', 'formHost recv router event, want: %{public}s', JSON.stringify(want) ?? '');
        }, (err: Base.BusinessError) => {
          expect().assertFail();
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
          done();
        })
      } catch (err) {
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err.code);
        expect(err.code).assertEqual(401);
        hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_0500 End');
        done();
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_0600
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: AsyncCallback method set formId in fromIds array is null Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_0600', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_0600 Start');
      try {
        formHost.setRouterProxy([null], (want: Want) => {
          hilog.info(0x0000, 'testTag', 'formHost recv router event, want: %{public}s', JSON.stringify(want) ?? '');
        }, (err: Base.BusinessError) => {
          expect().assertFail();
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
          done();
        })
      } catch (err) {
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err.code);
        expect(err.code).assertEqual(401);
        hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_0600 End');
        done();
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_0700
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: AsyncCallback method set formId not exist Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_0700', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_0700 Start');
      try {
        formHost.setRouterProxy(['123'], (want: Want) => {
          hilog.info(0x0000, 'testTag', 'formHost recv router event, want: %{public}s', JSON.stringify(want) ?? '');
        }, (err: Base.BusinessError) => {
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err.code);
          expect(err.code).assertEqual(401);
          hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_0700 End');
          done();
        })
      } catch (err) {
        expect().assertFail();
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
        done();
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_0900
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: AsyncCallback method set undefined,null,empty string and has been added card formId in formIds array.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_0900', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_0900 Start');
      let formId = AppStorage.get<string>('formId1');
      hilog.info(0x0000, 'testTag', 'get formID:' + formId);
      if (formId != null) {
        formHost.clearRouterProxy([formId], (err: Base.BusinessError) => {
          hilog.error(0x0000, 'testTag', 'clear router proxy err : ' + err)
        })
        try {
          formHost.setRouterProxy([undefined, null, '', formId.toString()], (want: Want) => {
            hilog.info(0x0000, 'testTag', 'formHost recv router event, want: %{public}s', JSON.stringify(want) ?? '');
          }, (err: Base.BusinessError) => {
            expect().assertFail();
            hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
            done();
          })
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
          expect(err.code).assertEqual(401);
          hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_0900 End');
          done();
        }
      }
      sleep(1000);
      hilog.info(0x0000, 'testTag', 'driver is ' + JSON.stringify(driver));
      await driver.assertComponentExist(ON.type('FormComponent'));
      let component = await driver.findComponents(ON.type('FormComponent'));
      hilog.info(0x0000, 'testTag', 'component is ' + JSON.stringify(component));
      if (component !== null) {
        await component[0].click();
        sleep(1500);
      } else {
        hilog.info(0x0000, 'testTag', 'component is null');
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_1000
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: AsyncCallback method set error formId array Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_1000', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_1000 Start');
      try {
        formHost.setRouterProxy(['abc'], (want: Want) => {
          hilog.info(0x0000, 'testTag', 'formHost recv router event, want: %{public}s', JSON.stringify(want) ?? '');
        }, (err: Base.BusinessError) => {
          expect().assertFail();
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
          done();
        })
      } catch (err) {
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err.code);
        expect(err.code).assertEqual(401);
        hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_1000 End');
        done();
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_1100
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: AsyncCallback method set proxy is undefined Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_1100', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_1100 Start');
      let formId = AppStorage.get<string>('formId1');
      hilog.info(0x0000, 'testTag', 'get formID:' + formId);
      if (formId != null) {
        let formIds: string[] = [formId.toString()];
        try {
          formHost.setRouterProxy(formIds, undefined, (err: Base.BusinessError) => {
            hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err.code);
          })
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
          expect(err.code).assertEqual(401);
          hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_1100 End');
          done();
        }
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_1200
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: AsyncCallback method set proxy is null Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_1200', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_1200 Start');
      let formId = AppStorage.get<string>('formId1');
      hilog.info(0x0000, 'testTag', 'get formID:' + formId);
      if (formId != null) {
        let formIds: string[] = [formId.toString()];
        try {
          formHost.setRouterProxy(formIds, null, (err: Base.BusinessError) => {
            hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err.code);
          })
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
          expect(err.code).assertEqual(401);
          hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_1200 End');
          done();
        }
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_1300
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: Promise method set empty string in formId array Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_1300', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_1300 Start');
      formHost.setRouterProxy([''], (want: Want) => {
        hilog.info(0x0000, 'testTag', 'formHost recv router event, want: %{public}s', JSON.stringify(want) ?? '');
      }).then(() => {
        hilog.info(0x0000, 'testTag', 'formHost set router proxy succes');
        expect().assertFail();
        done();
      }).catch((err: Base.BusinessError) => {
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err.code);
        expect(err.code).assertEqual(401);
        hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_1300 End');
        done();
      });
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_1400
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: Promise method set formId array undefined Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_1400', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_1400 Start');
      formHost.setRouterProxy(undefined, (want: Want) => {
        hilog.info(0x0000, 'testTag', 'formHost recv router event, want: %{public}s', JSON.stringify(want) ?? '');
      }).then(() => {
        hilog.info(0x0000, 'testTag', 'formHost set router proxy succes');
        expect().assertFail();
        done();
      }).catch((err: Base.BusinessError) => {
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err.code);
        expect(err.code).assertEqual(401);
        hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_1400 End');
        done();
      });
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_1500
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: Promise method set formId array null Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_1500', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_1500 Start');
      formHost.setRouterProxy(null, (want: Want) => {
        hilog.info(0x0000, 'testTag', 'formHost recv router event, want: %{public}s', JSON.stringify(want) ?? '');
      }).then(() => {
        hilog.info(0x0000, 'testTag', 'formHost set router proxy succes');
        expect().assertFail();
        done();
      }).catch((err: Base.BusinessError) => {
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err.code);
        expect(err.code).assertEqual(401);
        hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_1500 End');
        done();
      });
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_1600
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: Promise method set formId array null Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_1600', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_1600 Start');
      formHost.setRouterProxy([], (want: Want) => {
        hilog.info(0x0000, 'testTag', 'formHost recv router event, want: %{public}s', JSON.stringify(want) ?? '');
      }).then(() => {
        hilog.info(0x0000, 'testTag', 'formHost set router proxy succes');
        expect().assertFail();
        done();
      }).catch((err: Base.BusinessError) => {
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err.code);
        expect(err.code).assertEqual(401);
        hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_1600 End');
        done();
      });
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_1700
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: Promise method set formId in formId array is undefined Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_1700', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_1700 Start');
      try {
        formHost.setRouterProxy([undefined], (want: Want) => {
          hilog.info(0x0000, 'testTag', 'formHost recv router event, want: %{public}s', JSON.stringify(want) ?? '');
        }).then(() => {
          hilog.info(0x0000, 'testTag', 'formHost set router proxy succes');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          expect().assertFail();
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
          done();
        });
      } catch (err) {
        console.log('formHost setRouterProxy catch exception: ' + JSON.stringify(err));
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err.code);
        expect(err.code).assertEqual(401);
        hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_1700 End');
        done();
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_1800
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: Promise method set formId in formId array is null Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_1800', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_1800 Start');
      try {
        formHost.setRouterProxy([null], (want: Want) => {
          hilog.info(0x0000, 'testTag', 'formHost recv router event, want: %{public}s', JSON.stringify(want) ?? '');
        }).then(() => {
          hilog.info(0x0000, 'testTag', 'formHost set router proxy succes');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          expect().assertFail();
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
          done();
        });
      } catch (err) {
        console.log('formHost setRouterProxy catch exception: ' + JSON.stringify(err));
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err.code);
        expect(err.code).assertEqual(401);
        hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_1800 End');
        done();
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_1900
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: Promise method set formId not exist Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_1900', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_1900 Start');
      formHost.setRouterProxy(['123'], (want: Want) => {
        hilog.info(0x0000, 'testTag', 'formHost recv router event, want: %{public}s', JSON.stringify(want) ?? '');
      }).then(() => {
        hilog.info(0x0000, 'testTag', 'formHost set router proxy succes');
        expect().assertFail();
        done();
      }).catch((err: Base.BusinessError) => {
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err.code);
        expect(err.code).assertEqual(401);
        hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_1900 End');
        done();
      });
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_2100
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: Promise method set undefined,null,empty string and has been added card formId in formIds array.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_2100', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_2100 Start');
      let formId = AppStorage.get<string>('formId1');
      hilog.info(0x0000, 'testTag', 'get formID:' + formId);
      if (formId != null) {
        formHost.clearRouterProxy([formId.toString()], (err: Base.BusinessError) => {
          hilog.error(0x0000, 'testTag', 'clear router proxy err : ' + err)
        })
        try {
          formHost.setRouterProxy([undefined, null, '', formId.toString()], (want: Want) => {
            hilog.info(0x0000, 'testTag', 'formHost recv router event, want: %{public}s', JSON.stringify(want) ?? '');
          }).then(async () => {
            hilog.info(0x0000, 'testTag', 'driver is ' + JSON.stringify(driver));
            await driver.assertComponentExist(ON.type('FormComponent'));
            let component = await driver.findComponents(ON.type('FormComponent'));
            hilog.info(0x0000, 'testTag', 'component is ' + JSON.stringify(component));
            if (component !== null) {
              await component[0].click();
              sleep(1000);
            } else {
              hilog.info(0x0000, 'testTag', 'component is null');
            }
          }).catch((err: Base.BusinessError) => {
            hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
            hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_2100 End');
          });
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err.code);
          expect(err.code).assertEqual(401);
          hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_2100 End');
          done();
        }
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_2200
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: Promise method set error formId array null Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_2200', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_2200 Start');
      try {
        formHost.setRouterProxy(['abc'], (want: Want) => {
          hilog.info(0x0000, 'testTag', 'formHost recv router event, want: %{public}s', JSON.stringify(want) ?? '');
        }).then(() => {
          hilog.info(0x0000, 'testTag', 'formHost set router proxy succes');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          expect().assertFail();
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
          done();
        });
      } catch (err) {
        hilog.error(0x0000, 'testTag', 'set router proxy error2: ' + err.code);
        expect(err.code).assertEqual(401);
        hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_2200 End');
        done();
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_2300
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: Promise method set proxy is undefined Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_2300', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_2300 Start');
      let formId = AppStorage.get<string>('formId1');
      hilog.info(0x0000, 'testTag', 'get formID:' + formId);
      try {
        if (formId != null) {
          let formIds: string[] = [formId.toString()];
          formHost.setRouterProxy(formIds, undefined).then(() => {
            hilog.info(0x0000, 'testTag', 'formHost set router proxy succes');
          }).catch((err: Base.BusinessError) => {
            expect().assertFail();
            hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
            done();
          });
        }
      } catch (err) {
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err.code);
        expect(err.code).assertEqual(401);
        hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_2300 End');
        done();
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_2400
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: Promise method set proxy is null Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_2400', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_2400 Start');
      let formId = AppStorage.get<string>('formId1');
      hilog.info(0x0000, 'testTag', 'get formID:' + formId);
      try {
        if (formId != null) {
          let formIds: string[] = [formId.toString()];
          formHost.setRouterProxy(formIds, null).then(() => {
            hilog.info(0x0000, 'testTag', 'formHost set router proxy succes');
          }).catch((err: Base.BusinessError) => {
            expect().assertFail();
            hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
            done();
          });
        }
      } catch (err) {
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err.code);
        expect(err.code).assertEqual(401);
        hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_2400 End');
        done();
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_2500
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: AsyncCallback method set empty string in formId array Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_2500', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_2500 Start');
      try {
        formHost.clearRouterProxy([''], (err: Base.BusinessError) => {
          hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err.code);
          expect(err.code).assertEqual(401);
          hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_2500 End');
          done();
        });
      } catch (err) {
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_2600
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: AsyncCallback method set formId array undefined Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_2600', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_2600 Start');
      try {
        formHost.clearRouterProxy(undefined, (err: Base.BusinessError) => {
          hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err.code);
          expect(err.code).assertEqual(401);
          hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_2600 End');
          done();
        });
      } catch (err) {
        expect().assertFail();
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
        done();
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_2700
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: AsyncCallback method set formId array null Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_2700', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_2700 Start');
      try {
        formHost.clearRouterProxy(null, (err: Base.BusinessError) => {
          expect(err.code).assertEqual(401);
          hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err.code);
          hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_2700 End');
          done();
        });
      } catch (err) {
        expect().assertFail();
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
        done();
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_2800
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: AsyncCallback method set formId array empty Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_2800', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_2800 Start');
      try {
        formHost.clearRouterProxy([], (err: Base.BusinessError) => {
          hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err.code);
          expect(err.code).assertEqual(401);
          hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_2800 End');
          done();
        });
      } catch (err) {
        expect().assertFail();
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
        done();
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_2900
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: AsyncCallback method set formId in formIds array is undefined Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_2900', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_2900 Start');
      try {
        formHost.clearRouterProxy([undefined], (err: Base.BusinessError) => {
          expect().assertFail();
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
          done();
        });
      } catch (err) {
        hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err.code);
        expect(err.code).assertEqual(401);
        hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_2900 End');
        done();
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_3000
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: AsyncCallback method set formId in formIds array is null Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_3000', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_3000 Start');
      try {
        formHost.clearRouterProxy([null], (err: Base.BusinessError) => {

          expect().assertFail();
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
          done();
        });
      } catch (err) {
        hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err.code);
        expect(err.code).assertEqual(401);
        hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_3000 End');
        done();
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_3100
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: AsyncCallback method set formId not exist Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_3100', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_3100 Start');
      try {
        formHost.clearRouterProxy(['123'], (err: Base.BusinessError) => {
          hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err.code);
          expect(err.code).assertEqual(401);
          hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_3100 End');
          done();
        });
      } catch (err) {
        expect().assertFail();
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
        done();
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_3200
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: AsyncCallback method set error formId array Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_3200', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_3200 Start');
      try {
        formHost.clearRouterProxy(['abc'], (err: Base.BusinessError) => {
          expect().assertFail();
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
          done();
        });
      } catch (err) {
        hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err.code);
        expect(err.code).assertEqual(401);
        hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_3200 End');
        done();
      }
    })

    /**
     * @tc.number Acts_Form_OnRouterExtension_3600
     * @tc.name Testing the functionality of the clearRouterProxy interface.
     * @tc.desc The AsyncCallback method calls the setRouterProxy interface to set the formId,
     *          while the AsyncCallback method calls the clearRouterProxy interface to set the formId in the
     *          formIds array to undefined, null, empty string, and the formId for adding cards.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_3600', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_3600 START');

      let formId = AppStorage.get<string>('formId1');
      hilog.info(0x0000, 'testTag', 'get formID:' + formId);
      if (formId != null) {
        let formIds: string[] = [formId.toString()];

        try {
          formHost.setRouterProxy(formIds, (want: Want) => {
            hilog.info(0x0000, 'testTag', 'formHost recv router event, want:' + JSON.stringify(want));
            if (want.parameters) {
              hilog.info(0x0000, 'testTag', 'formID : ' + want.parameters['formID']);
              expect(formId).assertEqual(want.parameters['formID']);
            }
          }, (err: Base.BusinessError) => {
            if (err) {
              hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
            } else {
              hilog.info(0x0000, 'testTag', 'set router proxy success.');
            }
          })
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'set router proxy error.code: ' + err.code);
        }

        try {
          formHost.clearRouterProxy([undefined, null, '', formId.toString()], (err: Base.BusinessError) => {
            if (err) {
              hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err);
            } else {
              hilog.info(0x0000, 'testTag', 'clear router proxy success.');
            }
          })
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'clear router proxy error.code: ' + err.code);
          expect(err.code).assertEqual(401);
          done();
        }
      }
      hilog.info(0x0000, 'testTag', 'driver is ' + JSON.stringify(driver));
      await driver.assertComponentExist(ON.type('FormComponent'));
      let component = await driver.findComponents(ON.type('FormComponent'));
      hilog.info(0x0000, 'testTag', 'component is ' + JSON.stringify(component));
      if (component !== null) {
        await component[0].click();
      } else {
        hilog.info(0x0000, 'testTag', 'component is null');
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_3700
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: Promise method set empty string in formId array Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_3700', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_3700 Start');
      try {
        formHost.clearRouterProxy([''])
          .then(() => {
            hilog.info(0x0000, 'testTag', 'formHost clear router proxy succes');
          })
          .catch((err: Base.BusinessError) => {
            hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err.code);
            expect(err.code).assertEqual(401);
            hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_3700 End');
            done();
          });
      } catch (err) {
        expect().assertFail();
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
        done();
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_3800
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: Promise method set formId array undefined Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_3800', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_3800 Start');
      formHost.clearRouterProxy(undefined)
        .then(() => {
          hilog.info(0x0000, 'testTag', 'formHost clear router proxy succes');
          expect().assertFail();
          done();
        })
        .catch((err: Base.BusinessError) => {
          hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err.code);
          expect(err.code).assertEqual(401);
          hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_3800 End');
          done();
        });
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_3900
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: Promise method set formId array null Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_3900', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_3900 Start');
      formHost.clearRouterProxy(null)
        .then(() => {
          hilog.info(0x0000, 'testTag', 'formHost clear router proxy succes');
          expect().assertFail();
          done();
        })
        .catch((err: Base.BusinessError) => {
          hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err.code);
          expect(err.code).assertEqual(401);
          hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_3900 End');
          done();
        });
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_4000
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: Promise method set formId array null Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_4000', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_4000 Start');
      formHost.clearRouterProxy([])
        .then(() => {
          hilog.info(0x0000, 'testTag', 'formHost clear router proxy succes');
          expect().assertFail();
          done();
        })
        .catch((err: Base.BusinessError) => {
          hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err.code);
          expect(err.code).assertEqual(401);
          hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_4000 End');
          done();
        });
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_4100
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: Promise method set set formId in fromIds array is undefined Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_4100', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_4100 Start');
      try {
        formHost.clearRouterProxy([undefined])
          .then(() => {
            hilog.info(0x0000, 'testTag', 'formHost clear router proxy succes');
            expect().assertFail();
            done();
          })
          .catch((err: Base.BusinessError) => {
            hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err);
            expect().assertFail();
            done();
          });
      } catch (err) {
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err.code);
        expect(err.code).assertEqual(401);
        hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_4100 End');
        done();
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_4200
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: Promise method set set formId in fromIds array is null Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_4200', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_4200 Start');
      try {
        formHost.clearRouterProxy([null])
          .then(() => {
            hilog.info(0x0000, 'testTag', 'formHost clear router proxy succes');
            expect().assertFail();
            done();
          })
          .catch((err: Base.BusinessError) => {
            hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err);
            expect().assertFail();
            done();
          });
      } catch (err) {
        hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err.code);
        expect(err.code).assertEqual(401);
        hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_4200 End');
        done();
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_4300
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: Promise method set formId not exist Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_4300', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_4300 Start');
      formHost.clearRouterProxy(['123'])
        .then(() => {
          hilog.info(0x0000, 'testTag', 'formHost clear router proxy succes');
          expect().assertFail();
          done();
        })
        .catch((err: Base.BusinessError) => {
          hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err.code);
          expect(err.code).assertEqual(401);
          hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_4300 End');
          done();
        });
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_4400
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: Promise method set error formId array null Return 401 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_4400', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_4400 Start');
      try {
        formHost.clearRouterProxy(['abc'])
          .then(() => {
            hilog.info(0x0000, 'testTag', 'formHost clear router proxy succes');
            expect().assertFail();
            done();
          })
          .catch((err: Base.BusinessError) => {
            hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err);
            expect().assertFail();
            done();
          });
      } catch (err) {
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err.code);
        expect(err.code).assertEqual(401);
        hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_4400 End');
        done();
      }
    })
  })
}
