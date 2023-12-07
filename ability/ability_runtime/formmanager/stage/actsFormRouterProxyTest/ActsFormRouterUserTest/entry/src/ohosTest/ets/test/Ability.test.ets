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
import commonEventManager from '@ohos.commonEventManager';

let driver = Driver.create();
let value = 0;

function sleep(delay: Number) {
  let start = (new Date()).getTime();
  while ((new Date()).getTime() - start < delay) {
    continue;
  }
}

let subscribe: commonEventManager.CommonEventSubscriber;
let testAbilityContext: common.UIAbilityContext;
let commonEvent: commonEventManager.CommonEventSubscribeInfo = {
  events: ['GetCurrentTopAbility']
};

export default function abilityTest() {
  describe('ActsAbilityTest', async (done: Function) => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll((done: Function) => {
      testAbilityContext = AppStorage.get<common.UIAbilityContext>('TestAbilityContext') as common.UIAbilityContext;
      done();
    })
    beforeEach(async (done: Function) => {
    })
    afterEach((done: Function) => {
      commonEventManager.unsubscribe(subscribe, () => {
        done();
      });
    })
    afterAll((done: Function) => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_0800
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: AsyncCallback method set does not exist formId and has been added card formId in formIds array.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_0800', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_0800 Start');
      let formId = AppStorage.get<string>('formId1');
      hilog.info(0x0000, 'testTag', 'get formID:' + formId);
      if (formId != null) {
        try {
          formHost.setRouterProxy(['123', formId.toString()], (want: Want) => {
            if (want.parameters) {
              hilog.info(0x0000, 'testTag', 'formID : ' + want.parameters['formID']);
              expect(formId).assertEqual(want.parameters['formID']);
              expect(want.bundleName).assertEqual('com.example.formprovider');
              expect(want.abilityName).assertEqual('EntryAbility');
              expect(want.parameters['message']).assertEqual('add detail');
              hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_0800 END');
              done();
            }
          }, (err: Base.BusinessError) => {
            if (err) {
              hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
              expect().assertFail();
              done();
            } else {
              hilog.info(0x0000, 'testTag', 'set router proxy sucess. ');
            }
          })
        } catch (err) {
          expect().assertFail();
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
          done();
        }
      } else {
        hilog.error(0x0000, 'testTag', 'the formId has been used is null');
        expect().assertFail();
      }
      hilog.info(0x0000, 'testTag', 'driver is ' + JSON.stringify(driver));
      await driver.assertComponentExist(ON.type('FormComponent'));
      let component = await driver.findComponents(ON.type('FormComponent'));
      hilog.info(0x0000, 'testTag', 'component is ' + JSON.stringify(component));
      if (component !== null) {
        await component[0].click();
        sleep(500);
      } else {
        hilog.info(0x0000, 'testTag', 'component is null');
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_2000
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: Promise method set does not exist formId and has been added card formId in formIds array
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_2000', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_2000 Start');
      let formId = AppStorage.get<string>('formId1');
      hilog.info(0x0000, 'testTag', 'get formID:' + formId);
      if (formId != null) {
        formHost.setRouterProxy(['123', formId.toString()], (want: Want) => {
          if (want.parameters) {
            hilog.info(0x0000, 'testTag', 'formID : ' + want.parameters['formID']);
            expect(formId).assertEqual(want.parameters['formID']);
            expect(want.bundleName).assertEqual('com.example.formprovider');
            expect(want.abilityName).assertEqual('EntryAbility');
            expect(want.parameters['message']).assertEqual('add detail');
            hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_2000 END');
            done();
          }
        }).then(async () => {
          hilog.info(0x0000, 'testTag', 'driver is ' + JSON.stringify(driver));
          await driver.assertComponentExist(ON.type('FormComponent'));
          let component = await driver.findComponents(ON.type('FormComponent'));
          hilog.info(0x0000, 'testTag', 'component is ' + JSON.stringify(component));
          if (component !== null) {
            await component[0].click();
          } else {
            hilog.info(0x0000, 'testTag', 'component is null');
            expect().assertFail();
            done();
          }
        }).catch((err: Base.BusinessError) => {
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
          hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_2000 End');
          done();
        });
      } else {
        hilog.error(0x0000, 'testTag', 'the formId has been used is null');
        expect().assertFail();
      }
    })

    /**
     * @tc.number Acts_Form_OnRouterExtension_3300
     * @tc.name Testing the functionality of the clearRouterProxy interface.
     * @tc.desc AsyncCallback method calls clearRouterProxy interface,Set the added card ID
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_3300', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_3300 START');

      commonEventManager.createSubscriber(commonEvent).then(data => {
        subscribe = data;

        commonEventManager.subscribe(subscribe, async (error: Base.BusinessError, data: commonEventManager.CommonEventData) => {
          if (data.event === "GetCurrentTopAbility" && data.parameters) {
            let bundleName: string = data.parameters['bundleName'];
            hilog.info(0x0000, 'testTag', 'bundleName is ' + JSON.stringify(bundleName));
            expect(bundleName).assertEqual('com.example.formprovider');
            hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_3300 END');
            done();
          } else {
            hilog.error(0x0000, 'testTag', 'onclick error');
            expect().assertFail();
            done();
          }
        })
      })

      let formId = AppStorage.get<string>('formId1');
      hilog.info(0x0000, 'testTag', 'get formID:' + formId);
      if (formId != null) {
        let formIds: string[] = [formId.toString()];
        try {
          formHost.clearRouterProxy(formIds, (err: Base.BusinessError) => {
            if (err) {
              hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err);
              expect().assertFail();
              done();
            } else {
              hilog.info(0x0000, 'testTag', 'clear router proxy success.');
            }
          })
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err.code);
          expect().assertFail();
          done();
        }
      } else {
        hilog.error(0x0000, 'testTag', 'the formId has been used is null');
        expect().assertFail();
        done();
      }
      hilog.info(0x0000, 'testTag', 'driver is ' + JSON.stringify(driver));
      await driver.assertComponentExist(ON.type('FormComponent'));
      let component = await driver.findComponents(ON.type('FormComponent'));
      hilog.info(0x0000, 'testTag', 'component is ' + JSON.stringify(component));
      if (component !== null) {
        await component[0].click();
      } else {
        hilog.info(0x0000, 'testTag', 'component is null');
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number Acts_Form_OnRouterExtension_3400
     * @tc.name Testing the functionality of the clearRouterProxy interface.
     * @tc.desc AsyncCallback method calls setRouterProxy interface,Set the added card ID,
     *          AsyncCallback method calls clearRouterProxy interface,Set the IDs for Card 1 and Card 2
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_3400', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_3400 START');
      let num = 0;
      commonEventManager.createSubscriber(commonEvent).then(data => {
        subscribe = data;

        commonEventManager.subscribe(subscribe, async (error: Base.BusinessError, data: commonEventManager.CommonEventData) => {
          if (data.event === "GetCurrentTopAbility" && data.parameters) {
            let bundleName: string = data.parameters['bundleName'];
            hilog.info(0x0000, 'testTag', 'bundleName is ' + JSON.stringify(bundleName));
            expect(bundleName).assertEqual('com.example.formprovider');
            num += 1;
            if (num == 2) {
              hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_3400 END');
              done();
            }
          } else {
            hilog.error(0x0000, 'testTag', 'onclick error');
            expect().assertFail();
            done();
          }
        })
      })

      let formId = AppStorage.get<string>('formId1');
      let formId2 = AppStorage.get<string>('formId2');
      hilog.info(0x0000, 'testTag', 'get formID:' + formId);
      if (formId != null && formId2 != null) {
        let formIds: string[] = [formId.toString()];
        let formIds2: string[] = [formId.toString(), formId2.toString()];

        try {
          formHost.setRouterProxy(formIds, (want: Want) => {
            hilog.info(0x0000, 'testTag', 'formHost recv router event, want:' + JSON.stringify(want));
            if (want.parameters) {
              hilog.info(0x0000, 'testTag', 'formID : ' + want.parameters['formID']);
            }
          }, (err: Base.BusinessError) => {
            if (err) {
              hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
              expect().assertFail();
              done();
            } else {
              hilog.info(0x0000, 'testTag', 'set router proxy success.');
            }
          })
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'set router proxy error.code: ' + err.code);
          expect().assertFail();
          done();
        }

        try {
          formHost.clearRouterProxy(formIds2, (err: Base.BusinessError) => {
            if (err) {
              hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err);
              expect().assertFail();
              done();
            } else {
              hilog.info(0x0000, 'testTag', 'clear router proxy success.');
            }
          })
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'clear router proxy error.code: ' + err.code);
          expect().assertFail();
          done();
        }
      } else {
        hilog.error(0x0000, 'testTag', 'the formId has been used is null');
        expect().assertFail();
        done();
      }
      hilog.info(0x0000, 'testTag', 'driver is ' + JSON.stringify(driver));
      await driver.assertComponentExist(ON.type('FormComponent'));
      let component = await driver.findComponents(ON.type('FormComponent'));
      hilog.info(0x0000, 'testTag', 'component is ' + JSON.stringify(component));
      if (component !== null) {
        await component[0].click();
        sleep(1500);
        await component[1].click();
      } else {
        hilog.info(0x0000, 'testTag', 'component is null');
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number Acts_Form_OnRouterExtension_3500
     * @tc.name Testing the functionality of the clearRouterProxy interface.
     * @tc.desc The AsyncCallback method calls the setRouterProxy interface to set the formId,
     *          while the AsyncCallback method calls the clearRouterProxy interface to set the formId in the
     *          formIds array to a non-existent formId and the formId to add the card to.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_3500', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_3500 START');
      commonEventManager.createSubscriber(commonEvent).then(data => {
        subscribe = data;

        commonEventManager.subscribe(subscribe, async (error: Base.BusinessError, data: commonEventManager.CommonEventData) => {
          if (data.event === "GetCurrentTopAbility" && data.parameters) {
            let bundleName: string = data.parameters['bundleName'];
            hilog.info(0x0000, 'testTag', 'bundleName is ' + JSON.stringify(bundleName));
            expect(bundleName).assertEqual('com.example.formprovider');
            hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_3500 END');
            done();
          } else {
            hilog.error(0x0000, 'testTag', 'onclick error');
            expect().assertFail();
            done();
          }
        })
      })

      let formId = AppStorage.get<string>('formId1');
      hilog.info(0x0000, 'testTag', 'get formID:' + formId);
      if (formId != null) {
        let formIds: string[] = [formId.toString()];

        try {
          formHost.setRouterProxy(formIds, (want: Want) => {
            hilog.info(0x0000, 'testTag', 'formHost recv router event, want:' + JSON.stringify(want));
            if (want.parameters) {
              hilog.info(0x0000, 'testTag', 'formID : ' + want.parameters['formID']);
            }
          }, (err: Base.BusinessError) => {
            if (err) {
              hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
              expect().assertFail();
              done();
            } else {
              hilog.info(0x0000, 'testTag', 'set router proxy success.');
            }
          })
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'set router proxy error.code: ' + err.code);
          expect().assertFail();
          done();
        }

        try {
          formHost.clearRouterProxy(['123', formId.toString()], (err: Base.BusinessError) => {
            if (err) {
              hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err);
              expect().assertFail();
              done();
            } else {
              hilog.info(0x0000, 'testTag', 'clear router proxy success.');
            }
          })
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'clear router proxy error.code: ' + err.code);
          expect().assertFail();
          done();
        }
      } else {
        hilog.error(0x0000, 'testTag', 'the formId has been used is null');
        expect().assertFail();
        done();
      }
      hilog.info(0x0000, 'testTag', 'driver is ' + JSON.stringify(driver));
      await driver.assertComponentExist(ON.type('FormComponent'));
      let component = await driver.findComponents(ON.type('FormComponent'));
      hilog.info(0x0000, 'testTag', 'component is ' + JSON.stringify(component));
      if (component !== null) {
        await component[0].click();
      } else {
        hilog.info(0x0000, 'testTag', 'component is null');
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number Acts_Form_OnRouterExtension_4500
     * @tc.name Testing the functionality of the clearRouterProxy interface.
     * @tc.desc Promise method calls clearRouterProxy interface,Set the added card ID
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_4500', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_4500 START');

      commonEventManager.createSubscriber(commonEvent).then(data => {
        subscribe = data;

        commonEventManager.subscribe(subscribe, async (error: Base.BusinessError, data: commonEventManager.CommonEventData) => {
          if (data.event === "GetCurrentTopAbility" && data.parameters) {
            let bundleName: string = data.parameters['bundleName'];
            hilog.info(0x0000, 'testTag', 'bundleName is ' + JSON.stringify(bundleName));
            expect(bundleName).assertEqual('com.example.formprovider');
            hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_4500 END');
            done();
          } else {
            hilog.error(0x0000, 'testTag', 'onclick error');
            expect().assertFail();
            done();
          }
        })
      })

      let formId = AppStorage.get<string>('formId1');
      hilog.info(0x0000, 'testTag', 'get formID:' + formId);
      if (formId != null) {
        let formIds: string[] = [formId.toString()];
        try {
          formHost.clearRouterProxy(formIds)
            .then(() => {
              hilog.info(0x0000, 'testTag', 'formHost clear router proxy succes');
            }).catch((err: Base.BusinessError) => {
            hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
            expect().assertFail();
            done();
          });
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err.code);
          expect().assertFail();
          done();
        }
      } else {
        hilog.error(0x0000, 'testTag', 'the formId has been used is null');
        expect().assertFail();
        done();
      }
      hilog.info(0x0000, 'testTag', 'driver is ' + JSON.stringify(driver));
      await driver.assertComponentExist(ON.type('FormComponent'));
      let component = await driver.findComponents(ON.type('FormComponent'));
      hilog.info(0x0000, 'testTag', 'component is ' + JSON.stringify(component));
      if (component !== null) {
        await component[0].click();
      } else {
        hilog.info(0x0000, 'testTag', 'component is null');
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number Acts_Form_OnRouterExtension_4600
     * @tc.name Testing the functionality of the clearRouterProxy interface.
     * @tc.desc Promise method calls setRouterProxy interface,Set the added card ID,
     *          Promise method calls clearRouterProxy interface,Set the IDs for Card 1 and Card 2
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_4600', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_4600 START');
      let num = 0;
      commonEventManager.createSubscriber(commonEvent).then(data => {
        subscribe = data;

        commonEventManager.subscribe(subscribe, async (error: Base.BusinessError, data: commonEventManager.CommonEventData) => {
          if (data.event === "GetCurrentTopAbility" && data.parameters) {
            let bundleName: string = data.parameters['bundleName'];
            hilog.info(0x0000, 'testTag', 'bundleName is ' + JSON.stringify(bundleName));
            expect(bundleName).assertEqual('com.example.formprovider');
            num += 1;
            if (num == 2) {
              hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_4600 END');
              done();
            }
          } else {
            hilog.error(0x0000, 'testTag', 'onclick error');
            expect().assertFail();
            done();
          }
        })
      })

      let formId = AppStorage.get<string>('formId1');
      let formId2 = AppStorage.get<string>('formId2');
      hilog.info(0x0000, 'testTag', 'get formID:' + formId);
      if (formId != null && formId2 != null) {
        let formIds: string[] = [formId.toString()];
        let formIds2: string[] = [formId.toString(), formId2.toString()];

        try {
          formHost.setRouterProxy(formIds, (want: Want) => {
            hilog.info(0x0000, 'testTag', 'formHost recv router event, want:' + JSON.stringify(want));
            if (want.parameters) {
              hilog.info(0x0000, 'testTag', 'formID : ' + want.parameters['formID']);
            }
          }).then(() => {
            hilog.info(0x0000, 'testTag', 'formHost set router proxy succes');
          }).catch((err: Base.BusinessError) => {
            hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
            expect().assertFail();
            done();
          });
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'set router proxy error.code: ' + err.code);
          expect().assertFail();
          done();
        }

        try {
          formHost.clearRouterProxy(formIds2)
            .then(() => {
              hilog.info(0x0000, 'testTag', 'formHost clear router proxy succes');
            }).catch((err: Base.BusinessError) => {
            hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
            expect().assertFail();
            done();
          });
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'clear router proxy error.code: ' + err.code);
          expect().assertFail();
          done();
        }
      } else {
        hilog.error(0x0000, 'testTag', 'the formId has been used is null');
        expect().assertFail();
        done();
      }
      hilog.info(0x0000, 'testTag', 'driver is ' + JSON.stringify(driver));
      await driver.assertComponentExist(ON.type('FormComponent'));
      let component = await driver.findComponents(ON.type('FormComponent'));
      hilog.info(0x0000, 'testTag', 'component is ' + JSON.stringify(component));
      if (component !== null) {
        await component[0].click();
        sleep(1500);
        await component[1].click();
      } else {
        hilog.info(0x0000, 'testTag', 'component is null');
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number Acts_Form_OnRouterExtension_4700
     * @tc.name Testing the functionality of the clearRouterProxy interface.
     * @tc.desc The Promise method calls the setRouterProxy interface to set the formId,
     *          while the Promise method calls the clearRouterProxy interface to set the formId in the
     *          formIds array to a non-existent formId and the formId to add the card to.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_4700', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_4700 START');
      commonEventManager.createSubscriber(commonEvent).then(data => {
        subscribe = data;

        commonEventManager.subscribe(subscribe, async (error: Base.BusinessError, data: commonEventManager.CommonEventData) => {
          if (data.event === "GetCurrentTopAbility" && data.parameters) {
            let bundleName: string = data.parameters['bundleName'];
            hilog.info(0x0000, 'testTag', 'bundleName is ' + JSON.stringify(bundleName));
            expect(bundleName).assertEqual('com.example.formprovider');
            hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_4700 END');
            done();
          } else {
            hilog.error(0x0000, 'testTag', 'onclick error');
            expect().assertFail();
            done();
          }
        })
      })

      let formId = AppStorage.get<string>('formId1');
      hilog.info(0x0000, 'testTag', 'get formID:' + formId);
      if (formId != null) {
        let formIds: string[] = [formId.toString()];

        try {
          formHost.setRouterProxy(formIds, (want: Want) => {
            hilog.info(0x0000, 'testTag', 'formHost recv router event, want:' + JSON.stringify(want));
            if (want.parameters) {
              hilog.info(0x0000, 'testTag', 'formID : ' + want.parameters['formID']);
            }
          }).then(() => {
            hilog.info(0x0000, 'testTag', 'formHost set router proxy succes');
          }).catch((err: Base.BusinessError) => {
            hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
            expect().assertFail();
            done();
          });
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'set router proxy error.code: ' + err.code);
          expect().assertFail();
          done();
        }

        try {
          formHost.clearRouterProxy(['123', formId.toString()])
            .then(() => {
              hilog.info(0x0000, 'testTag', 'formHost clear router proxy succes');
            })
            .catch((err: Base.BusinessError) => {
              hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err);
              expect().assertFail();
              done();
            });
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'clear router proxy error.code: ' + err.code);
          expect().assertFail();
          done();
        }
      } else {
        hilog.error(0x0000, 'testTag', 'the formId has been used is null');
        expect().assertFail();
        done();
      }
      hilog.info(0x0000, 'testTag', 'driver is ' + JSON.stringify(driver));
      await driver.assertComponentExist(ON.type('FormComponent'));
      let component = await driver.findComponents(ON.type('FormComponent'));
      hilog.info(0x0000, 'testTag', 'component is ' + JSON.stringify(component));
      if (component !== null) {
        await component[0].click();
      } else {
        hilog.info(0x0000, 'testTag', 'component is null');
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number Acts_Form_OnRouterExtension_4800
     * @tc.name Testing the functionality of the clearRouterProxy interface.
     * @tc.desc The Promise method calls the setRouterProxy interface to set the formId,
     *          while the Promise method calls the clearRouterProxy interface to set the formId in the
     *          formIds array to undefined, null, empty string, and the formId for adding cards.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_4800', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_4800 START');

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
              expect(want.bundleName).assertEqual('com.example.formprovider');
              expect(want.abilityName).assertEqual('EntryAbility');
              expect(want.parameters['message']).assertEqual('add detail');
              hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_4800 END');
              done();
            }
          }).then(() => {
            hilog.info(0x0000, 'testTag', 'formHost set router proxy succes');
          }).catch((err: Base.BusinessError) => {
            hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
            expect().assertFail();
            done();
          });
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'set router proxy error.code: ' + err.code);
          expect().assertFail();
          done();
        }

        try {
          formHost.clearRouterProxy([undefined, null, '', formId.toString()])
            .then(() => {
              hilog.info(0x0000, 'testTag', 'formHost clear router proxy succes');
              expect().assertFail();
              done();
            })
            .catch((err: Base.BusinessError) => {
              hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err);
            });
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'clear router proxy error.code: ' + err.code);
        }
      } else {
        hilog.error(0x0000, 'testTag', 'the formId has been used is null');
        expect().assertFail();
        done();
      }
      hilog.info(0x0000, 'testTag', 'driver is ' + JSON.stringify(driver));
      await driver.assertComponentExist(ON.type('FormComponent'));
      let component = await driver.findComponents(ON.type('FormComponent'));
      hilog.info(0x0000, 'testTag', 'component is ' + JSON.stringify(component));
      if (component !== null) {
        await component[0].click();
      } else {
        hilog.info(0x0000, 'testTag', 'component is null');
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number Acts_Form_OnRouterExtension_5700
     * @tc.name Testing the functionality of the setRouterProxy interface.
     * @tc.desc AsyncCallback method calls setRouterProxy interface,The provider Dynamic Card only has a abilityName set
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_5700', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_5700 START');

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
              expect(want.bundleName).assertEqual('com.example.formprovider');
              expect(want.abilityName).assertEqual('EntryAbility');
              expect(want.parameters['message']).assertEqual('add detail');
              hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_5700 END');
              done();
            }
          }, (err: Base.BusinessError) => {
            if (err) {
              hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
              expect().assertFail();
              done();
            } else {
              hilog.info(0x0000, 'testTag', 'set router proxy success.');
            }
          })
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err.code);
          expect().assertFail();
          done();
        }
      } else {
        hilog.error(0x0000, 'testTag', 'the formId has been used is null');
        expect().assertFail();
        done();
      }
      hilog.info(0x0000, 'testTag', 'driver is ' + JSON.stringify(driver));
      await driver.assertComponentExist(ON.type('FormComponent'));
      let component = await driver.findComponents(ON.type('FormComponent'));
      hilog.info(0x0000, 'testTag', 'component is ' + JSON.stringify(component));
      if (component !== null) {
        await component[0].click();
      } else {
        hilog.info(0x0000, 'testTag', 'component is null');
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number Acts_Form_OnRouterExtension_5800
     * @tc.name Testing the functionality of the setRouterProxy interface.
     * @tc.desc AsyncCallback method calls setRouterProxy interface,The provider Dynamic Card only has a uri set
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_5800', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_5800 START');

      let formId = AppStorage.get<string>('formId2');
      hilog.info(0x0000, 'testTag', 'get formID:' + formId);
      if (formId != null) {
        let formIds: string[] = [formId.toString()];
        try {
          formHost.setRouterProxy(formIds, (want: Want) => {
            hilog.info(0x0000, 'testTag', 'formHost recv router event, want:' + JSON.stringify(want));
            if (want.parameters) {
              hilog.info(0x0000, 'testTag', 'formID : ' + want.parameters['formID']);
              expect(formId).assertEqual(want.parameters['formID']);
              expect(want.uri).assertEqual('schemeStr://hostStr:portStr/pathStartWithStr');
              expect(want.parameters['message']).assertEqual('add detail');
              hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_5800 END');
              done();
            }
          }, (err: Base.BusinessError) => {
            if (err) {
              hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
              expect().assertFail();
              done();
            } else {
              hilog.info(0x0000, 'testTag', 'set router proxy success.');
            }
          })
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err.code);
          expect().assertFail();
          done();
        }
      } else {
        hilog.error(0x0000, 'testTag', 'the formId has been used is null');
        expect().assertFail();
        done();
      }
      hilog.info(0x0000, 'testTag', 'driver is ' + JSON.stringify(driver));
      await driver.assertComponentExist(ON.type('FormComponent'));
      let component = await driver.findComponents(ON.type('FormComponent'));
      hilog.info(0x0000, 'testTag', 'component is ' + JSON.stringify(component));
      if (component !== null) {
        await component[1].click();
      } else {
        hilog.info(0x0000, 'testTag', 'component is null');
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number Acts_Form_OnRouterExtension_5900
     * @tc.name Testing the functionality of the setRouterProxy interface.
     * @tc.desc Promise method calls setRouterProxy interface,The provider Dynamic Card only has a abilityName set
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_5900', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_5900 START');

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
              expect(want.bundleName).assertEqual('com.example.formprovider');
              expect(want.abilityName).assertEqual('EntryAbility');
              expect(want.parameters['message']).assertEqual('add detail');
              hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_5900 END');
              done();
            }
          }).then(async () => {
            hilog.info(0x0000, 'testTag', 'driver is ' + JSON.stringify(driver));
            await driver.assertComponentExist(ON.type('FormComponent'));
            let component = await driver.findComponents(ON.type('FormComponent'));
            hilog.info(0x0000, 'testTag', 'component is ' + JSON.stringify(component));
            if (component !== null) {
              await component[0].click();
            } else {
              hilog.info(0x0000, 'testTag', 'component is null');
              expect().assertFail();
              done();
            }
          }).catch(
            (err: Base.BusinessError) => {
              hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
              expect().assertFail();
              done();
            })
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
          expect().assertFail();
          done();
        }
      } else {
        hilog.error(0x0000, 'testTag', 'the formId has been used is null');
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number Acts_Form_OnRouterExtension_6000
     * @tc.name Testing the functionality of the setRouterProxy interface.
     * @tc.desc Promise method calls setRouterProxy interface,The provider Dynamic Card only has a uri set
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_6000', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_6000 START');

      let formId = AppStorage.get<string>('formId2');
      hilog.info(0x0000, 'testTag', 'get formID:' + formId);
      if (formId != null) {
        let formIds: string[] = [formId.toString()];
        try {
          formHost.setRouterProxy(formIds, (want: Want) => {
            hilog.info(0x0000, 'testTag', 'formHost recv router event, want:' + JSON.stringify(want));
            if (want.parameters) {
              hilog.info(0x0000, 'testTag', 'formID : ' + want.parameters['formID']);
              expect(formId).assertEqual(want.parameters['formID']);
              expect(want.uri).assertEqual('schemeStr://hostStr:portStr/pathStartWithStr');
              expect(want.parameters['message']).assertEqual('add detail');
              hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_6000 END');
              done();
            }
          }).then(async () => {
            hilog.info(0x0000, 'testTag', 'driver is ' + JSON.stringify(driver));
            await driver.assertComponentExist(ON.type('FormComponent'));
            let component = await driver.findComponents(ON.type('FormComponent'));
            hilog.info(0x0000, 'testTag', 'component is ' + JSON.stringify(component));
            if (component !== null) {
              await component[1].click();
            } else {
              hilog.info(0x0000, 'testTag', 'component is null');
              expect().assertFail();
              done();
            }
          }).catch(
            (err: Base.BusinessError) => {
              hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
              expect().assertFail();
              done();
            })
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
          expect().assertFail();
          done();
        }
      } else {
        hilog.error(0x0000, 'testTag', 'the formId has been used is null');
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number Acts_Form_OnRouterExtension_6100
     * @tc.name Testing the functionality of the setRouterProxy interface.
     * @tc.desc AsyncCallback method calls setRouterProxy interface,The provider Static Card only has a abilityName set
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_6100', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_6100 START');

      let formId = AppStorage.get<string>('formId3');
      hilog.info(0x0000, 'testTag', 'get formID:' + formId);
      if (formId != null) {
        let formIds: string[] = [formId.toString()];
        try {
          formHost.setRouterProxy(formIds, (want: Want) => {
            hilog.info(0x0000, 'testTag', 'formHost recv router event, want:' + JSON.stringify(want));
            if (want.parameters) {
              hilog.info(0x0000, 'testTag', 'formID : ' + want.parameters['formID']);
              expect(formId).assertEqual(want.parameters['formID']);
              expect(want.bundleName).assertEqual('com.example.formprovider');
              expect(want.abilityName).assertEqual('EntryAbility');
              expect(want.parameters['message']).assertEqual('add detail');
              hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_6100 END');
              done();
            }
          }, (err: Base.BusinessError) => {
            if (err) {
              hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
              expect().assertFail();
              done();
            } else {
              hilog.info(0x0000, 'testTag', 'set router proxy success.');
            }
          })
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err.code);
          expect().assertFail();
          done();
        }
      } else {
        hilog.error(0x0000, 'testTag', 'the formId has been used is null');
        expect().assertFail();
        done();
      }
      hilog.info(0x0000, 'testTag', 'driver is ' + JSON.stringify(driver));
      await driver.assertComponentExist(ON.type('FormComponent'));
      let component = await driver.findComponents(ON.type('FormComponent'));
      hilog.info(0x0000, 'testTag', 'component is ' + JSON.stringify(component));
      if (component !== null) {
        await component[2].click();
      } else {
        hilog.info(0x0000, 'testTag', 'component is null');
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number Acts_Form_OnRouterExtension_6200
     * @tc.name Testing the functionality of the setRouterProxy interface.
     * @tc.desc AsyncCallback method calls setRouterProxy interface,The provider Static Card only has a uri set
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_6200', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_6200 START');

      let formId = AppStorage.get<string>('formId4');
      hilog.info(0x0000, 'testTag', 'get formID:' + formId);
      if (formId != null) {
        let formIds: string[] = [formId.toString()];
        try {
          formHost.setRouterProxy(formIds, (want: Want) => {
            hilog.info(0x0000, 'testTag', 'formHost recv router event, want:' + JSON.stringify(want));
            if (want.parameters) {
              hilog.info(0x0000, 'testTag', 'formID : ' + want.parameters['formID']);
              expect(formId).assertEqual(want.parameters['formID']);
              expect(want.uri).assertEqual('schemeStr://hostStr:portStr/pathStartWithStr');
              expect(want.parameters['message']).assertEqual('add detail');
              hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_6200 END');
              done();
            }
          }, (err: Base.BusinessError) => {
            if (err) {
              hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
              expect().assertFail();
              done();
            } else {
              hilog.info(0x0000, 'testTag', 'set router proxy success.');
            }
          })
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err.code);
          expect().assertFail();
          done();
        }
      } else {
        hilog.error(0x0000, 'testTag', 'the formId has been used is null');
        expect().assertFail();
        done();
      }
      hilog.info(0x0000, 'testTag', 'driver is ' + JSON.stringify(driver));
      await driver.assertComponentExist(ON.type('FormComponent'));
      let component = await driver.findComponents(ON.type('FormComponent'));
      hilog.info(0x0000, 'testTag', 'component is ' + JSON.stringify(component));
      if (component !== null) {
        await component[3].click();
      } else {
        hilog.info(0x0000, 'testTag', 'component is null');
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number Acts_Form_OnRouterExtension_6300
     * @tc.name Testing the functionality of the setRouterProxy interface.
     * @tc.desc Promise method calls setRouterProxy interface,The provider Static Card only has a abilityName set
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_6300', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_6300 START');

      let formId = AppStorage.get<string>('formId3');
      hilog.info(0x0000, 'testTag', 'get formID:' + formId);
      if (formId != null) {
        let formIds: string[] = [formId.toString()];
        try {
          formHost.setRouterProxy(formIds, (want: Want) => {
            hilog.info(0x0000, 'testTag', 'formHost recv router event, want:' + JSON.stringify(want));
            if (want.parameters) {
              hilog.info(0x0000, 'testTag', 'formID : ' + want.parameters['formID']);
              expect(formId).assertEqual(want.parameters['formID']);
              expect(want.bundleName).assertEqual('com.example.formprovider');
              expect(want.abilityName).assertEqual('EntryAbility');
              expect(want.parameters['message']).assertEqual('add detail');
              hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_6300 END');
              done();
            }
          }).then(async () => {
            hilog.info(0x0000, 'testTag', 'driver is ' + JSON.stringify(driver));
            await driver.assertComponentExist(ON.type('FormComponent'));
            let component = await driver.findComponents(ON.type('FormComponent'));
            hilog.info(0x0000, 'testTag', 'component is ' + JSON.stringify(component));
            if (component !== null) {
              await component[2].click();
            } else {
              hilog.info(0x0000, 'testTag', 'component is null');
              expect().assertFail();
              done();
            }
          }).catch(
            (err: Base.BusinessError) => {
              hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
              expect().assertFail();
              done();
            })
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
          expect().assertFail();
          done();
        }
      } else {
        hilog.error(0x0000, 'testTag', 'the formId has been used is null');
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number Acts_Form_OnRouterExtension_6400
     * @tc.name Testing the functionality of the setRouterProxy interface.
     * @tc.desc Promise method calls setRouterProxy interface,The provider Static Card only has a uri set
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_6400', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_6400 START');

      let formId = AppStorage.get<string>('formId4');
      hilog.info(0x0000, 'testTag', 'get formId ' + formId)
      if (formId != null) {
        let formIds: string[] = [formId.toString()];
        try {
          formHost.setRouterProxy(formIds, (want: Want) => {
            hilog.info(0x0000, 'testTag', 'formHost recv router event, want:' + JSON.stringify(want));
            if (want.parameters) {
              hilog.info(0x0000, 'testTag', 'formID : ' + want.parameters['formID']);
              expect(formId).assertEqual(want.parameters['formID']);
              expect(want.uri).assertEqual('schemeStr://hostStr:portStr/pathStartWithStr');
              expect(want.parameters['message']).assertEqual('add detail');
              hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_6400 END');
              done();
            }
          }).then(async () => {
            hilog.info(0x0000, 'testTag', 'driver is ' + JSON.stringify(driver));
            await driver.assertComponentExist(ON.type('FormComponent'));
            let component = await driver.findComponents(ON.type('FormComponent'));
            hilog.info(0x0000, 'testTag', 'component is ' + JSON.stringify(component));
            if (component !== null) {
              await component[3].click();
            } else {
              hilog.info(0x0000, 'testTag', 'component is null');
              expect().assertFail();
              done();
            }
          }).catch(
            (err: Base.BusinessError) => {
              hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
              expect().assertFail();
              done();
            })
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
          expect().assertFail();
          done();
        }
      } else {
        hilog.error(0x0000, 'testTag', 'the formId has been used is null');
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number Acts_Form_OnRouterExtension_6500
     * @tc.name Testing the functionality of the clearRouterProxy interface.
     * @tc.desc AsyncCallback method calls setRouterProxy interface two times,
     *          then AsyncCallback method calls clearRouterProxy.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_6500', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_6500 START');
      commonEventManager.createSubscriber(commonEvent).then(data => {
        subscribe = data;

        commonEventManager.subscribe(subscribe, async (error: Base.BusinessError, data: commonEventManager.CommonEventData) => {
          if (data.event === "GetCurrentTopAbility" && data.parameters) {
            let bundleName: string = data.parameters['bundleName'];
            hilog.info(0x0000, 'testTag', 'bundleName is ' + JSON.stringify(bundleName));
            expect(bundleName).assertEqual('com.example.formprovider');
            hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_6500 END');
            done();
          } else {
            hilog.error(0x0000, 'testTag', 'onclick error');
            expect().assertFail();
            done();
          }
        })
      })
      let formId = AppStorage.get<string>('formId1');
      hilog.info(0x0000, 'testTag', 'get formID:' + formId);
      if (formId != null) {
        let formIds: string[] = [formId.toString()];
        try {
          formHost.setRouterProxy(formIds, (want: Want) => {
            value = 1;
            hilog.info(0x0000, 'testTag', 'formHost recv router event, want:' + JSON.stringify(want));
            if (want.parameters) {
              hilog.info(0x0000, 'testTag', 'formID : ' + want.parameters['formID']);
            }
            expect().assertFail();
            done();
          }, (err: Base.BusinessError) => {
            if (err) {
              hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
              expect().assertFail();
              done();
            } else {
              hilog.info(0x0000, 'testTag', 'set router proxy success.');
            }
          })
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'set router proxy error.code: ' + err.code);
          expect().assertFail();
          done();
        }

        try {
          formHost.setRouterProxy(formIds, (want: Want) => {
            value = 2;
            hilog.info(0x0000, 'testTag', 'formHost recv router event, want:' + JSON.stringify(want));
            expect(value).assertEqual(2);
            if (want.parameters) {
              hilog.info(0x0000, 'testTag', 'formID : ' + want.parameters['formID']);
            }
          }, (err: Base.BusinessError) => {
            if (err) {
              hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
              expect().assertFail();
              done();
            } else {
              hilog.info(0x0000, 'testTag', 'set router proxy success.');
            }
          })
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'set router proxy error.code: ' + err.code);
          expect().assertFail();
          done();
        }
        hilog.info(0x0000, 'testTag', 'driver is ' + JSON.stringify(driver));
        await driver.assertComponentExist(ON.type('FormComponent'));
        let component = await driver.findComponents(ON.type('FormComponent'));
        hilog.info(0x0000, 'testTag', 'component is ' + JSON.stringify(component));
        if (component !== null) {
          await component[0].click();
        } else {
          hilog.info(0x0000, 'testTag', 'component is null');
          expect().assertFail();
          done();
        }
        try {
          formHost.clearRouterProxy(formIds, (err: Base.BusinessError) => {
            if (err) {
              hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err);
              expect().assertFail();
              done();
            } else {
              hilog.info(0x0000, 'testTag', 'clear router proxy success.');
            }
          })
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'clear router proxy error.code: ' + err.code);
          expect().assertFail();
          done();
        }
      } else {
        hilog.error(0x0000, 'testTag', 'the formId has been used is null');
        expect().assertFail();
        done();
      }
      hilog.info(0x0000, 'testTag', 'driver is ' + JSON.stringify(driver));
      await driver.assertComponentExist(ON.type('FormComponent'));
      let component = await driver.findComponents(ON.type('FormComponent'));
      hilog.info(0x0000, 'testTag', 'component is ' + JSON.stringify(component));
      if (component !== null) {
        await component[0].click();
      } else {
        hilog.info(0x0000, 'testTag', 'component is null');
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number Acts_Form_OnRouterExtension_6600
     * @tc.name Testing the functionality of the clearRouterProxy interface.
     * @tc.desc The AsyncCallback method calls the setRouterProxy interface to set the formId of Card 1 and Card 2,
     *          while the AsyncCallback method calls the clearRouterProxy interface to set the formId of Card 2
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_6600', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_6600 START');
      commonEventManager.createSubscriber(commonEvent).then(data => {
        subscribe = data;

        commonEventManager.subscribe(subscribe, async (error: Base.BusinessError, data: commonEventManager.CommonEventData) => {
          if (data.event === "GetCurrentTopAbility" && data.parameters) {
            let bundleName: string = data.parameters['bundleName'];
            hilog.info(0x0000, 'testTag', 'bundleName is ' + JSON.stringify(bundleName));
            expect(bundleName).assertEqual('com.example.formprovider');
            hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_6600 END');
            done();
          } else {
            hilog.error(0x0000, 'testTag', 'onclick error');
            expect().assertFail();
            done();
          }
        })
      })

      let formId = AppStorage.get<string>('formId1');
      let formId2 = AppStorage.get<string>('formId2');
      hilog.info(0x0000, 'testTag', 'get formID:' + formId);
      if (formId != null && formId2 != null) {
        try {
          formHost.clearRouterProxy([formId.toString(), formId2.toString()], (err: Base.BusinessError) => {
            if (err) {
              hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err);
              expect().assertFail();
              done();
            } else {
              hilog.info(0x0000, 'testTag', 'clear router proxy success.');
            }
          })
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'clear router proxy error.code: ' + err.code);
          expect().assertFail();
          done();
        }
        try {
          formHost.setRouterProxy([formId.toString(), formId2.toString()], (want: Want) => {
            hilog.info(0x0000, 'testTag', 'formHost recv router event, want:' + JSON.stringify(want));
            if (want.parameters) {
              hilog.info(0x0000, 'testTag', 'formID : ' + want.parameters['formID']);
            }
          }, (err: Base.BusinessError) => {
            if (err) {
              hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
              expect().assertFail();
              done();
            } else {
              hilog.info(0x0000, 'testTag', 'set router proxy success.');
            }
          })
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'set router proxy error.code: ' + err.code);
          expect().assertFail();
          done();
        }
        hilog.info(0x0000, 'testTag', 'driver is ' + JSON.stringify(driver));
        await driver.assertComponentExist(ON.type('FormComponent'));
        let component = await driver.findComponents(ON.type('FormComponent'));
        hilog.info(0x0000, 'testTag', 'component is ' + JSON.stringify(component));
        if (component !== null) {
          await component[0].click();
          sleep(1500);
          await component[1].click();
        } else {
          hilog.info(0x0000, 'testTag', 'component is null');
          expect().assertFail();
          done();
        }

        try {
          formHost.clearRouterProxy([formId2.toString()], (err: Base.BusinessError) => {
            if (err) {
              hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err);
              expect().assertFail();
              done();
            } else {
              hilog.info(0x0000, 'testTag', 'clear router proxy success.');
            }
          })
        } catch (err) {
          hilog.error(0x0000, 'testTag', 'clear router proxy error.code: ' + err.code);
          expect().assertFail();
          done();
        }
        hilog.info(0x0000, 'testTag', 'driver is ' + JSON.stringify(driver));
        await driver.assertComponentExist(ON.type('FormComponent'));
        component = await driver.findComponents(ON.type('FormComponent'));
        hilog.info(0x0000, 'testTag', 'component is ' + JSON.stringify(component));
        if (component !== null) {
          await component[0].click();
          sleep(1500);
          await component[1].click();
        } else {
          hilog.info(0x0000, 'testTag', 'component is null');
          expect().assertFail();
          done();
        }
      } else {
        hilog.error(0x0000, 'testTag', 'the formId has been used is null');
        expect().assertFail();
        done();
      }
    })

  })
}
