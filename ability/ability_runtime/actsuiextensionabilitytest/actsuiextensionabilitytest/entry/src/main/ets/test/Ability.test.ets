/**
 * Copyright (c) 2024 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http:www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import hilog from '@ohos.hilog';
import { describe, beforeAll, it, expect } from '@ohos/hypium';
import screen from '@ohos.screen';
import { BusinessError } from '@ohos.base';
import display from '@ohos.display';
import commonEventManager from '@ohos.commonEventManager';
import ConfigurationConstant from '@ohos.app.ability.ConfigurationConstant';
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import resourceManager from '@ohos.resourceManager';

const TAG = '[testTag] UIExtentionAbilityTest';
const DOMAIN = 0x0000;
const BUNDLE = 'Acts_UIExtAbility_';

let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
let screenClass: screen.Screen | null = null;
let relyHapUIExtAbilityOne = 'com.example.actsuiextabilityone';
let relyHapUIExtAbilityTwo = 'com.example.actsuiextabilitytwo';
let relyHapShareExtAbilityOne = 'com.example.actsshareextabilityone';
let relyHapShareExtAbilityTwo = 'com.example.actsshareextabilitytwo';
let relyHapActionExtAbilityOne = 'com.example.actsactionextabilityone';
let relyHapActionExtAbilityTwo = 'com.example.actsactionextabilitytwo';
let relyHapEmbeddedUIExtAbilityOne = 'com.example.actsembeddeduiextabilityone';
let relyHapEmbeddedUIExtAbilityTwo = 'com.example.actsembeddeduiextabilitytwo';

function sleep(time: number) {
  return new Promise((resolve: (value: string) => void) => {
    setTimeout(() => {
      resolve('ok');
    }, time)
  });
}

export default function abilityTest() {
  describe('ActsAbilityTest', () => {
    beforeAll(async () => {
      let densityDpi = 200;
      screen.getAllScreens().then(data => {
        screenClass = data[0];
        screenClass.setDensityDpi(densityDpi);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens. Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_001
     * @tc.name       : Create UIExtensionAbility
     * @tc.desc       : UIExtensionAbility can receive density and orientation
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_001', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_001 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let eventCount = 0;
      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_UIExtAbilityA_Create', 'Rely_UIExtAbilityB_Create']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_UIExtAbilityA_Create') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let direction: ConfigurationConstant.Direction = data.parameters?.direction;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCount++;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_001 receive success, eventCount is: ' +
              JSON.stringify(eventCount));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_001 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_001 receive success, direction is: ' + JSON.stringify(direction));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_001 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            expect(direction).assertEqual(display.Orientation.PORTRAIT);
            expect(screenDensity).assertEqual(240);
            expect(displayId).assertEqual(currentDisplayId);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_LDPI);
          } else if (data.event == 'Rely_UIExtAbilityB_Create') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let direction: ConfigurationConstant.Direction = data.parameters?.direction;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCount++;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_001 receive success, eventCount is: ' +
              JSON.stringify(eventCount));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_001 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_001 receive success, direction is: ' + JSON.stringify(direction));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_001 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            expect(direction).assertEqual(display.Orientation.PORTRAIT);
            expect(screenDensity).assertEqual(240);
            expect(displayId).assertEqual(currentDisplayId);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_LDPI);
          }
          if (eventCount === 2) {
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      abilityDelegator.startAbility({
        bundleName: relyHapUIExtAbilityOne,
        abilityName: 'EntryAbility'
      }, (err, data) => {
        hilog.info(DOMAIN, TAG, BUNDLE +
          'startAbility callback err: %{public}s; data: %{public}s', JSON.stringify(err), JSON.stringify(data));
      })
      await sleep(2000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_001 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_002
     * @tc.name       : UIExtensionAbility change density on foreground
     * @tc.desc       : UIExtensionAbility can receive density change
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_002', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_002 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_UIExtAbilityA_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_UIExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_002 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_002 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            expect(screenDensity).assertEqual(640);
            expect(displayId).assertEqual(currentDisplayId);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      let densityDpi = 600;
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(densityDpi);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_002 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_003
     * @tc.name       : UIExtensionAbility change density on background
     * @tc.desc       : UIExtensionAbility cannot receive density change
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_003', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_003 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_UIExtAbilityC_Create', 'Rely_UIExtAbilityC_ConfigurationUpdate',
          'Rely_UIExtAbilityA_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_UIExtAbilityC_Create') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_003 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_003 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            expect(screenDensity).assertEqual(640);
            expect(displayId).assertEqual(currentDisplayId);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
          } else if (data.event == 'Rely_UIExtAbilityC_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_003 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_003 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            expect(screenDensity).assertEqual(240);
            expect(displayId).assertEqual(currentDisplayId);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_LDPI);
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          } else if (data.event == 'Rely_UIExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            expect().assertFail();
            done();
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      abilityDelegator.startAbility({
        bundleName: relyHapUIExtAbilityTwo,
        abilityName: 'EntryAbility'
      }, (err, data) => {
        hilog.info(DOMAIN, TAG, BUNDLE +
          'startAbility callback err: %{public}s; data: %{public}s', JSON.stringify(err), JSON.stringify(data));
      })
      await sleep(2000);

      let densityDpi = 200;
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(densityDpi);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_003 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_004
     * @tc.name       : UIExtensionAbility return to foreground
     * @tc.desc       : UIExtensionAbility can receive density change
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_004', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_004 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_UIExtAbilityA_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_UIExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_004 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_004 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(displayId).assertEqual(currentDisplayId);
            expect(screenDensity).assertEqual(240);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_LDPI);
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      abilityDelegator.startAbility({
        bundleName: relyHapUIExtAbilityOne,
        abilityName: 'EntryAbility'
      }, (err, data) => {
        hilog.info(DOMAIN, TAG, BUNDLE +
          'startAbility callback err: %{public}s; data: %{public}s', JSON.stringify(err), JSON.stringify(data));
      })
      await sleep(2000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_004 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_005
     * @tc.name       : UIExtensionAbilities change density on foreground
     * @tc.desc       : Each UIExtensionAbility can receive density change
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_005', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_005 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let eventCount = 0;
      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_UIExtAbilityA_ConfigurationUpdate', 'Rely_UIExtAbilityB_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_UIExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCount++;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_005 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_005 receive success, eventCount is: ' + JSON.stringify(eventCount));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_005 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(screenDensity).assertEqual(640);
            expect(displayId).assertEqual(currentDisplayId);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
          } else if (data.event == 'Rely_UIExtAbilityB_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCount++;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_005 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_005 receive success, eventCount is: ' + JSON.stringify(eventCount));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_005 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(screenDensity).assertEqual(640);
            expect(displayId).assertEqual(currentDisplayId);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
          }
          if (eventCount === 2) {
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      let densityDpi = 600;
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(densityDpi);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_005 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_006
     * @tc.name       : UIExtensionAbilities change density on background
     * @tc.desc       : Each UIExtensionAbility cannot receive density change
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_006', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_006 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let eventCountC = 0;
      let eventCountD = 0;
      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_UIExtAbilityC_ConfigurationUpdate', 'Rely_UIExtAbilityD_ConfigurationUpdate',
          'Rely_UIExtAbilityA_ConfigurationUpdate', 'Rely_UIExtAbilityB_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_UIExtAbilityC_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCountC++;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_006 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_006 receive success, eventCountC is: ' +
              JSON.stringify(eventCountC));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_006 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            if (eventCountC === 1) {
              expect(screenDensity).assertEqual(640);
              expect(displayId).assertEqual(currentDisplayId);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
            } else if (eventCountC === 2) {
              expect(screenDensity).assertEqual(240);
              expect(displayId).assertEqual(currentDisplayId);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_LDPI);
            }
          } else if (data.event == 'Rely_UIExtAbilityD_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCountD++;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_006 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_006 receive success, eventCountD is: ' +
              JSON.stringify(eventCountD));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_006 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            if (eventCountD === 1) {
              expect(screenDensity).assertEqual(640);
              expect(displayId).assertEqual(currentDisplayId);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
            } else if (eventCountD === 2) {
              expect(screenDensity).assertEqual(240);
              expect(displayId).assertEqual(currentDisplayId);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_LDPI);
            }
          } else if (data.event == 'Rely_UIExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            expect().assertFail();
            done();
          } else if (data.event == 'Rely_UIExtAbilityB_ConfigurationUpdate') {
            sleep(1000);
            expect().assertFail();
            done();
          }
          if (eventCountC === 2 && eventCountD === 2) {
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      abilityDelegator.startAbility({
        bundleName: relyHapUIExtAbilityTwo,
        abilityName: 'EntryAbility'
      }, (err, data) => {
        hilog.info(DOMAIN, TAG, BUNDLE +
          'startAbility callback err: %{public}s; data: %{public}s', JSON.stringify(err), JSON.stringify(data));
      })
      await sleep(2000);

      let densityDpi = 200;
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(densityDpi);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_006 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_007
     * @tc.name       : UIExtensionAbilities return to foreground
     * @tc.desc       : Each UIExtensionAbility can receive density change
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_007', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_007 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let eventCount = 0;
      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_UIExtAbilityA_ConfigurationUpdate', 'Rely_UIExtAbilityB_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_UIExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            eventCount++;
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_007 receive success, eventCount is: ' + JSON.stringify(eventCount));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_007 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_007 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(displayId).assertEqual(currentDisplayId);
            expect(screenDensity).assertEqual(240);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_LDPI);
          } else if (data.event == 'Rely_UIExtAbilityB_ConfigurationUpdate') {
            sleep(1000);
            eventCount++;
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_007 receive success, eventCount is: ' + JSON.stringify(eventCount));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_007 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_007 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(displayId).assertEqual(currentDisplayId);
            expect(screenDensity).assertEqual(240);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_LDPI);
          }
          if (eventCount === 2) {
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      abilityDelegator.startAbility({
        bundleName: relyHapUIExtAbilityOne,
        abilityName: 'EntryAbility'
      }, (err, data) => {
        hilog.info(DOMAIN, TAG, BUNDLE +
          'startAbility callback err: %{public}s; data: %{public}s', JSON.stringify(err), JSON.stringify(data));
      })
      await sleep(2000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_007 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_008
     * @tc.name       : UIExtensionAbility change density many times on foreground
     * @tc.desc       : UIExtensionAbility can receive density changes
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_008', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_008 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let eventCount = 0;
      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_UIExtAbilityA_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_UIExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCount++;
            expect(displayId).assertEqual(currentDisplayId);
            if (eventCount === 1) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_008 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_008 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_008 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(320);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XLDPI);
            } else if (eventCount === 2) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_008 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_008 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_008 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(640);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
            } else if (eventCount === 3) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_008 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_008 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_008 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(120);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_SDPI);
            } else if (eventCount === 4) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_008 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_008 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_008 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(640);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
              commonEventManager.unsubscribe(subscriber, unsubscribeCB);
            }
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(300);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(600);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(100);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(600);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_008 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_009
     * @tc.name       : UIExtensionAbility change density many times on background
     * @tc.desc       : UIExtensionAbility cannot receive density changes
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_009', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_009 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let eventCount = 0;
      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_UIExtAbilityC_ConfigurationUpdate', 'Rely_UIExtAbilityA_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_UIExtAbilityC_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCount++;
            expect(displayId).assertEqual(currentDisplayId);
            if (eventCount === 1) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_009 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_009 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_009 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(640);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
            } else if (eventCount === 2) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_009 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_009 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_009 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(320);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XLDPI);
            } else if (eventCount === 3) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_009 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_009 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_009 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(640);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
            } else if (eventCount === 4) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_009 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_009 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_009 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(120);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_SDPI);
              commonEventManager.unsubscribe(subscriber, unsubscribeCB);
            }
          } else if (data.event == 'Rely_UIExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            expect().assertFail();
            done();
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      abilityDelegator.startAbility({
        bundleName: relyHapUIExtAbilityTwo,
        abilityName: 'EntryAbility'
      }, (err, data) => {
        hilog.info(DOMAIN, TAG, BUNDLE +
          'startAbility callback err: %{public}s; data: %{public}s', JSON.stringify(err), JSON.stringify(data));
      })
      await sleep(2000);

      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(300);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(600);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(100);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_009 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_010
     * @tc.name       : UIExtensionAbility return to foreground
     * @tc.desc       : UIExtensionAbility can receive the last density change
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_010', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_010 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_UIExtAbilityA_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_UIExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_010 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_010 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(displayId).assertEqual(currentDisplayId);
            expect(screenDensity).assertEqual(120);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_SDPI);
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      abilityDelegator.startAbility({
        bundleName: relyHapUIExtAbilityOne,
        abilityName: 'EntryAbility'
      }, (err, data) => {
        hilog.info(DOMAIN, TAG, BUNDLE +
          'startAbility callback err: %{public}s; data: %{public}s', JSON.stringify(err), JSON.stringify(data));
      })
      await sleep(2000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_010 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_011
     * @tc.name       : Create ShareExtAbility
     * @tc.desc       : ShareExtAbility can receive density and orientation
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_011', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_011 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let eventCount = 0;
      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_ShareExtAbilityA_Create', 'Rely_ShareExtAbilityB_Create']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_ShareExtAbilityA_Create') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let direction: ConfigurationConstant.Direction = data.parameters?.direction;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCount++;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_011 receive success, eventCount is: ' +
              JSON.stringify(eventCount));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_011 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_011 receive success, direction is: ' + JSON.stringify(direction));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_011 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            expect(direction).assertEqual(display.Orientation.PORTRAIT);
            expect(screenDensity).assertEqual(120);
            expect(displayId).assertEqual(currentDisplayId);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_SDPI);
          } else if (data.event == 'Rely_ShareExtAbilityB_Create') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let direction: ConfigurationConstant.Direction = data.parameters?.direction;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCount++;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_011 receive success, eventCount is: ' +
              JSON.stringify(eventCount));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_011 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_011 receive success, direction is: ' + JSON.stringify(direction));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_011 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            expect(direction).assertEqual(display.Orientation.PORTRAIT);
            expect(screenDensity).assertEqual(120);
            expect(displayId).assertEqual(currentDisplayId);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_SDPI);
          }
          if (eventCount === 2) {
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      abilityDelegator.startAbility({
        bundleName: relyHapShareExtAbilityOne,
        abilityName: 'EntryAbility'
      }, (err, data) => {
        hilog.info(DOMAIN, TAG, BUNDLE +
          'startAbility callback err: %{public}s; data: %{public}s', JSON.stringify(err), JSON.stringify(data));
      })
      await sleep(2000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_011 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_012
     * @tc.name       : ShareExtAbility change density on foreground
     * @tc.desc       : ShareExtAbility can receive density change
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_012', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_012 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_ShareExtAbilityA_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_ShareExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_012 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_012 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(screenDensity).assertEqual(640);
            expect(displayId).assertEqual(currentDisplayId);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      let densityDpi = 600;
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(densityDpi);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_012 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_013
     * @tc.name       : ShareExtAbility change density on background
     * @tc.desc       : ShareExtAbility cannot receive density change
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_013', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_013 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_ShareExtAbilityC_Create', 'Rely_ShareExtAbilityC_ConfigurationUpdate',
          'Rely_ShareExtAbilityA_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_ShareExtAbilityC_Create') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_013 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_013 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(screenDensity).assertEqual(640);
            expect(displayId).assertEqual(currentDisplayId);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
          } else if (data.event == 'Rely_ShareExtAbilityC_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_013 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_013 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            expect(screenDensity).assertEqual(240);
            expect(displayId).assertEqual(currentDisplayId);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_LDPI);
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          } else if (data.event == 'Rely_ShareExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            expect().assertFail();
            done();
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      abilityDelegator.startAbility({
        bundleName: relyHapShareExtAbilityTwo,
        abilityName: 'EntryAbility'
      }, (err, data) => {
        hilog.info(DOMAIN, TAG, BUNDLE +
          'startAbility callback err: %{public}s; data: %{public}s', JSON.stringify(err), JSON.stringify(data));
      })
      await sleep(2000);

      let densityDpi = 200;
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(densityDpi);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_013 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_014
     * @tc.name       : ShareExtAbility return to foreground
     * @tc.desc       : ShareExtAbility can receive density change
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_014', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_014 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_ShareExtAbilityA_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_ShareExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_014 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_014 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(displayId).assertEqual(currentDisplayId);
            expect(screenDensity).assertEqual(240);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_LDPI);
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      abilityDelegator.startAbility({
        bundleName: relyHapShareExtAbilityOne,
        abilityName: 'EntryAbility'
      }, (err, data) => {
        hilog.info(DOMAIN, TAG, BUNDLE +
          'startAbility callback err: %{public}s; data: %{public}s', JSON.stringify(err), JSON.stringify(data));
      })
      await sleep(2000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_014 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_015
     * @tc.name       : ShareExtAbilities change density on foreground
     * @tc.desc       : Each ShareExtAbility can receive density change
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_015', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_015 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let eventCount = 0;
      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_ShareExtAbilityA_ConfigurationUpdate', 'Rely_ShareExtAbilityB_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_ShareExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCount++;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_015 receive success, eventCount is: ' + JSON.stringify(eventCount));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_015 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_015 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(screenDensity).assertEqual(640);
            expect(displayId).assertEqual(currentDisplayId);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
          } else if (data.event == 'Rely_ShareExtAbilityB_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCount++;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_015 receive success, eventCount is: ' + JSON.stringify(eventCount));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_015 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_015 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(screenDensity).assertEqual(640);
            expect(displayId).assertEqual(currentDisplayId);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
          }
          if (eventCount === 2) {
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      let densityDpi = 600;
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(densityDpi);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_015 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_016
     * @tc.name       : ShareExtAbilities change density on background
     * @tc.desc       : Each ShareExtAbility cannot receive density change
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_016', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_016 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let eventCountC = 0;
      let eventCountD = 0;
      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_ShareExtAbilityC_ConfigurationUpdate', 'Rely_ShareExtAbilityD_ConfigurationUpdate',
          'Rely_ShareExtAbilityA_ConfigurationUpdate', 'Rely_ShareExtAbilityB_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_ShareExtAbilityC_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCountC++;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_016 receive success, eventCountC is: ' +
              JSON.stringify(eventCountC));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_016 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_016 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            if (eventCountC === 1) {
              expect(screenDensity).assertEqual(640);
              expect(displayId).assertEqual(currentDisplayId);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
            } else if (eventCountC === 2) {
              expect(screenDensity).assertEqual(240);
              expect(displayId).assertEqual(currentDisplayId);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_LDPI);
            }
          } else if (data.event == 'Rely_ShareExtAbilityD_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCountD++;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_016 receive success, eventCountD is: ' +
              JSON.stringify(eventCountD));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_016 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_016 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            if (eventCountD === 1) {
              expect(screenDensity).assertEqual(640);
              expect(displayId).assertEqual(currentDisplayId);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
            } else if (eventCountD === 2) {
              expect(screenDensity).assertEqual(240);
              expect(displayId).assertEqual(currentDisplayId);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_LDPI);
            }
          } else if (data.event == 'Rely_ShareExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            expect().assertFail();
            done();
          } else if (data.event == 'Rely_ShareExtAbilityB_ConfigurationUpdate') {
            sleep(1000);
            expect().assertFail();
            done();
          }
          if (eventCountC === 2 && eventCountD === 2) {
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      abilityDelegator.startAbility({
        bundleName: relyHapShareExtAbilityTwo,
        abilityName: 'EntryAbility'
      }, (err, data) => {
        hilog.info(DOMAIN, TAG, BUNDLE +
          'startAbility callback err: %{public}s; data: %{public}s', JSON.stringify(err), JSON.stringify(data));
      })
      await sleep(2000);

      let densityDpi = 200;
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(densityDpi);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_016 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_017
     * @tc.name       : ShareExtAbilities return to foreground
     * @tc.desc       : Each ShareExtAbility can receive density change
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_017', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_017 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let eventCount = 0;
      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_ShareExtAbilityA_ConfigurationUpdate', 'Rely_ShareExtAbilityB_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_ShareExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            eventCount++;
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_017 receive success, eventCount is: ' + JSON.stringify(eventCount));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_017 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_017 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(displayId).assertEqual(currentDisplayId);
            expect(screenDensity).assertEqual(240);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_LDPI);
          } else if (data.event == 'Rely_ShareExtAbilityB_ConfigurationUpdate') {
            sleep(1000);
            eventCount++;
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_017 receive success, eventCount is: ' + JSON.stringify(eventCount));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_017 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_017 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(displayId).assertEqual(currentDisplayId);
            expect(screenDensity).assertEqual(240);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_LDPI);
          }
          if (eventCount === 2) {
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      abilityDelegator.startAbility({
        bundleName: relyHapShareExtAbilityOne,
        abilityName: 'EntryAbility'
      }, (err, data) => {
        hilog.info(DOMAIN, TAG, BUNDLE +
          'startAbility callback err: %{public}s; data: %{public}s', JSON.stringify(err), JSON.stringify(data));
      })
      await sleep(2000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_017 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_018
     * @tc.name       : ShareExtAbility change density many times on foreground
     * @tc.desc       : ShareExtAbility can receive density changes
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_018', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_018 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let eventCount = 0;
      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_ShareExtAbilityA_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_ShareExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCount++;
            expect(displayId).assertEqual(currentDisplayId);
            if (eventCount === 1) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_018 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_018 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_018 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(320);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XLDPI);
            } else if (eventCount === 2) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_018 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_018 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_018 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(640);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
            } else if (eventCount === 3) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_018 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_018 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_018 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(120);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_SDPI);
            } else if (eventCount === 4) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_018 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_018 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_018 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(640);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
              commonEventManager.unsubscribe(subscriber, unsubscribeCB);
            }
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(300);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(600);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(100);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(600);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_018 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_019
     * @tc.name       : ShareExtAbility change density many times on background
     * @tc.desc       : ShareExtAbility cannot receive density changes
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_019', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_019 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let eventCount = 0;
      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_ShareExtAbilityC_ConfigurationUpdate', 'Rely_ShareExtAbilityA_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_ShareExtAbilityC_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCount++;
            expect(displayId).assertEqual(currentDisplayId);
            if (eventCount === 1) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_019 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_019 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_019 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(640);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
            } else if (eventCount === 2) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_019 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_019 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_019 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(320);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XLDPI);
            } else if (eventCount === 3) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_019 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_019 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_019 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(640);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
            } else if (eventCount === 4) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_019 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_019 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_019 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(120);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_SDPI);
              commonEventManager.unsubscribe(subscriber, unsubscribeCB);
            }
          } else if (data.event == 'Rely_UIExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            expect().assertFail();
            done();
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      abilityDelegator.startAbility({
        bundleName: relyHapShareExtAbilityTwo,
        abilityName: 'EntryAbility'
      }, (err, data) => {
        hilog.info(DOMAIN, TAG, BUNDLE +
          'startAbility callback err: %{public}s; data: %{public}s', JSON.stringify(err), JSON.stringify(data));
      })
      await sleep(2000);

      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(300);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(600);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(100);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_019 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_020
     * @tc.name       : ShareExtAbility return to foreground
     * @tc.desc       : ShareExtAbility can receive the last density change
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_020', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_020 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_ShareExtAbilityA_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_ShareExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_020 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_020 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(displayId).assertEqual(currentDisplayId);
            expect(screenDensity).assertEqual(120);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_SDPI);
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      abilityDelegator.startAbility({
        bundleName: relyHapShareExtAbilityOne,
        abilityName: 'EntryAbility'
      }, (err, data) => {
        hilog.info(DOMAIN, TAG, BUNDLE +
          'startAbility callback err: %{public}s; data: %{public}s', JSON.stringify(err), JSON.stringify(data));
      })
      await sleep(2000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_020 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_021
     * @tc.name       : Create ActionExtAbility
     * @tc.desc       : ActionExtAbility can receive density and orientation
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_021', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_021 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let eventCount = 0;
      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_ActionExtAbilityA_Create', 'Rely_ActionExtAbilityB_Create']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_ActionExtAbilityA_Create') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let direction: ConfigurationConstant.Direction = data.parameters?.direction;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCount++;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_021 receive success, eventCount is: ' +
              JSON.stringify(eventCount));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_021 receive success, direction is: ' + JSON.stringify(direction));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_021 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_021 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            expect(direction).assertEqual(display.Orientation.PORTRAIT);
            expect(screenDensity).assertEqual(120);
            expect(displayId).assertEqual(currentDisplayId);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_SDPI);
          } else if (data.event == 'Rely_ActionExtAbilityB_Create') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let direction: ConfigurationConstant.Direction = data.parameters?.direction;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCount++;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_021 receive success, eventCount is: ' +
              JSON.stringify(eventCount));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_021 receive success, direction is: ' + JSON.stringify(direction));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_021 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_021 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            expect(direction).assertEqual(display.Orientation.PORTRAIT);
            expect(screenDensity).assertEqual(120);
            expect(displayId).assertEqual(currentDisplayId);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_SDPI);
          }
          if (eventCount === 2) {
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      abilityDelegator.startAbility({
        bundleName: relyHapActionExtAbilityOne,
        abilityName: 'EntryAbility'
      }, (err, data) => {
        hilog.info(DOMAIN, TAG, BUNDLE +
          'startAbility callback err: %{public}s; data: %{public}s', JSON.stringify(err), JSON.stringify(data));
      })
      await sleep(2000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_021 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_022
     * @tc.name       : ActionExtAbility change density on foreground
     * @tc.desc       : ActionExtAbility can receive density change
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_022', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_022 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_ActionExtAbilityA_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_ActionExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_022 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_022 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(screenDensity).assertEqual(640);
            expect(displayId).assertEqual(currentDisplayId);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      let densityDpi = 600;
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(densityDpi);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_022 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_023
     * @tc.name       : ActionExtAbility change density on background
     * @tc.desc       : ActionExtAbility cannot receive density change
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_023', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_023 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_ActionExtAbilityC_Create', 'Rely_ActionExtAbilityC_ConfigurationUpdate',
          'Rely_ActionExtAbilityA_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_ActionExtAbilityC_Create') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_023 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_023 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(screenDensity).assertEqual(640);
            expect(displayId).assertEqual(currentDisplayId);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
          } else if (data.event == 'Rely_ActionExtAbilityC_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_023 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_023 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            expect(screenDensity).assertEqual(240);
            expect(displayId).assertEqual(currentDisplayId);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_LDPI);
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          } else if (data.event == 'Rely_ActionExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            expect().assertFail();
            done();
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      abilityDelegator.startAbility({
        bundleName: relyHapActionExtAbilityTwo,
        abilityName: 'EntryAbility'
      }, (err, data) => {
        hilog.info(DOMAIN, TAG, BUNDLE +
          'startAbility callback err: %{public}s; data: %{public}s', JSON.stringify(err), JSON.stringify(data));
      })
      await sleep(2000);

      let densityDpi = 200;
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(densityDpi);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_023 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_024
     * @tc.name       : ActionExtAbility return to foreground
     * @tc.desc       : ActionExtAbility can receive density change
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_024', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_024 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_ActionExtAbilityA_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_ActionExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_024 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_024 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(displayId).assertEqual(currentDisplayId);
            expect(screenDensity).assertEqual(240);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_LDPI);
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      abilityDelegator.startAbility({
        bundleName: relyHapActionExtAbilityOne,
        abilityName: 'EntryAbility'
      }, (err, data) => {
        hilog.info(DOMAIN, TAG, BUNDLE +
          'startAbility callback err: %{public}s; data: %{public}s', JSON.stringify(err), JSON.stringify(data));
      })
      await sleep(2000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_024 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_025
     * @tc.name       : ActionExtAbilities change density on foreground
     * @tc.desc       : Each ActionExtAbility can receive density change
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_025', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_025 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let eventCount = 0;
      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_ActionExtAbilityA_ConfigurationUpdate', 'Rely_ActionExtAbilityB_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_ActionExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCount++;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_025 receive success, eventCount is: ' + JSON.stringify(eventCount));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_025 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_025 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(screenDensity).assertEqual(640);
            expect(displayId).assertEqual(currentDisplayId);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
          } else if (data.event == 'Rely_ActionExtAbilityB_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCount++;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_025 receive success, eventCount is: ' + JSON.stringify(eventCount));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_025 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_025 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(screenDensity).assertEqual(640);
            expect(displayId).assertEqual(currentDisplayId);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
          }
          if (eventCount === 2) {
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      let densityDpi = 600;
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(densityDpi);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_025 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_026
     * @tc.name       : ActionExtAbilities change density on background
     * @tc.desc       : Each ActionExtAbility cannot receive density change
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_026', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_026 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let eventCountC = 0;
      let eventCountD = 0;
      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_ActionExtAbilityC_ConfigurationUpdate', 'Rely_ActionExtAbilityD_ConfigurationUpdate',
          'Rely_ActionExtAbilityA_ConfigurationUpdate', 'Rely_ActionExtAbilityB_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_ActionExtAbilityC_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCountC++;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_026 receive success, eventCountC is: ' +
              JSON.stringify(eventCountC));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_026 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_026 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            if (eventCountC === 1) {
              expect(screenDensity).assertEqual(640);
              expect(displayId).assertEqual(currentDisplayId);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
            } else if (eventCountC === 2) {
              expect(screenDensity).assertEqual(240);
              expect(displayId).assertEqual(currentDisplayId);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_LDPI);
            }
          } else if (data.event == 'Rely_ActionExtAbilityD_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCountD++;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_026 receive success, eventCountD is: ' +
              JSON.stringify(eventCountD));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_026 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_026 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            if (eventCountD === 1) {
              expect(screenDensity).assertEqual(640);
              expect(displayId).assertEqual(currentDisplayId);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
            } else if (eventCountD === 2) {
              expect(screenDensity).assertEqual(240);
              expect(displayId).assertEqual(currentDisplayId);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_LDPI);
            }
          } else if (data.event == 'Rely_ActionExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            expect().assertFail();
            done();
          } else if (data.event == 'Rely_ActionExtAbilityB_ConfigurationUpdate') {
            sleep(1000);
            expect().assertFail();
            done();
          }
          if (eventCountC === 2 && eventCountD === 2) {
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      abilityDelegator.startAbility({
        bundleName: relyHapActionExtAbilityTwo,
        abilityName: 'EntryAbility'
      }, (err, data) => {
        hilog.info(DOMAIN, TAG, BUNDLE +
          'startAbility callback err: %{public}s; data: %{public}s', JSON.stringify(err), JSON.stringify(data));
      })
      await sleep(2000);

      let densityDpi = 200;
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(densityDpi);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_026 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_027
     * @tc.name       : ActionExtAbilities return to foreground
     * @tc.desc       : Each ActionExtAbility can receive density change
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_027', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_027 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let eventCount = 0;
      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_ActionExtAbilityA_ConfigurationUpdate', 'Rely_ActionExtAbilityB_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_ActionExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            eventCount++;
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_027 receive success, eventCount is: ' + JSON.stringify(eventCount));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_027 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_027 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(displayId).assertEqual(currentDisplayId);
            expect(screenDensity).assertEqual(240);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_LDPI);
          } else if (data.event == 'Rely_ActionExtAbilityB_ConfigurationUpdate') {
            sleep(1000);
            eventCount++;
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_027 receive success, eventCount is: ' + JSON.stringify(eventCount));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_027 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_027 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(displayId).assertEqual(currentDisplayId);
            expect(screenDensity).assertEqual(240);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_LDPI);
          }
          if (eventCount === 2) {
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      abilityDelegator.startAbility({
        bundleName: relyHapActionExtAbilityOne,
        abilityName: 'EntryAbility'
      }, (err, data) => {
        hilog.info(DOMAIN, TAG, BUNDLE +
          'startAbility callback err: %{public}s; data: %{public}s', JSON.stringify(err), JSON.stringify(data));
      })
      await sleep(2000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_027 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_028
     * @tc.name       : ActionExtAbility change density many times on foreground
     * @tc.desc       : ActionExtAbility can receive density changes
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_028', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_028 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let eventCount = 0;
      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_ActionExtAbilityA_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_ActionExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCount++;
            expect(displayId).assertEqual(currentDisplayId);
            if (eventCount === 1) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_028 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_028 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_028 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(320);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XLDPI);
            } else if (eventCount === 2) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_028 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_028 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_028 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(640);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
            } else if (eventCount === 3) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_028 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_028 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_028 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(120);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_SDPI);
            } else if (eventCount === 4) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_028 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_028 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_028 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(640);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
              commonEventManager.unsubscribe(subscriber, unsubscribeCB);
            }
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(300);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(600);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(100);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(600);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_028 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_029
     * @tc.name       : ActionExtAbility change density many times on background
     * @tc.desc       : ActionExtAbility cannot receive density changes
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_029', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_029 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let eventCount = 0;
      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_ActionExtAbilityC_ConfigurationUpdate', 'Rely_ActionExtAbilityA_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_ActionExtAbilityC_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCount++;
            expect(displayId).assertEqual(currentDisplayId);
            if (eventCount === 1) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_029 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_029 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_029 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(640);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
            } else if (eventCount === 2) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_029 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_029 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_029 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(320);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XLDPI);
            } else if (eventCount === 3) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_029 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_029 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_029 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(640);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
            } else if (eventCount === 4) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_029 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_029 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_029 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(120);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_SDPI);
              commonEventManager.unsubscribe(subscriber, unsubscribeCB);
            }
          } else if (data.event == 'Rely_ActionExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            expect().assertFail();
            done();
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      abilityDelegator.startAbility({
        bundleName: relyHapActionExtAbilityTwo,
        abilityName: 'EntryAbility'
      }, (err, data) => {
        hilog.info(DOMAIN, TAG, BUNDLE +
          'startAbility callback err: %{public}s; data: %{public}s', JSON.stringify(err), JSON.stringify(data));
      })
      await sleep(2000);

      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(300);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(600);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(100);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_029 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_030
     * @tc.name       : ActionExtAbility return to foreground
     * @tc.desc       : ActionExtAbility can receive the last density change
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_030', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_030 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_ActionExtAbilityA_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_ActionExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_030 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_030 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(displayId).assertEqual(currentDisplayId);
            expect(screenDensity).assertEqual(120);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_SDPI);
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);
      abilityDelegator.startAbility({
        bundleName: relyHapActionExtAbilityOne,
        abilityName: 'EntryAbility'
      }, (err, data) => {
        hilog.info(DOMAIN, TAG, BUNDLE +
          'startAbility callback err: %{public}s; data: %{public}s', JSON.stringify(err), JSON.stringify(data));
      })
      await sleep(2000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_030 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_031
     * @tc.name       : Create EmbeddedUIExtAbility
     * @tc.desc       : EmbeddedUIExtAbility can receive density and orientation
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_031', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_031 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let eventCount = 0;
      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_EmbeddedUIExtAbilityA_Create', 'Rely_EmbeddedUIExtAbilityB_Create']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_EmbeddedUIExtAbilityA_Create') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let direction: ConfigurationConstant.Direction = data.parameters?.direction;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCount++;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_031 receive success, eventCount is: ' +
              JSON.stringify(eventCount));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_031 receive success, direction is: ' + JSON.stringify(direction));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_031 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_031 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            expect(direction).assertEqual(display.Orientation.PORTRAIT);
            expect(screenDensity).assertEqual(120);
            expect(displayId).assertEqual(currentDisplayId);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_SDPI);
          } else if (data.event == 'Rely_EmbeddedUIExtAbilityB_Create') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let direction: ConfigurationConstant.Direction = data.parameters?.direction;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCount++;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_031 receive success, eventCount is: ' +
              JSON.stringify(eventCount));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_031 receive success, direction is: ' + JSON.stringify(direction));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_031 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_031 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            expect(direction).assertEqual(display.Orientation.PORTRAIT);
            expect(screenDensity).assertEqual(120);
            expect(displayId).assertEqual(currentDisplayId);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_SDPI);
          }
          if (eventCount === 2) {
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      abilityDelegator.startAbility({
        bundleName: relyHapEmbeddedUIExtAbilityOne,
        abilityName: 'EntryAbility'
      }, (err, data) => {
        hilog.info(DOMAIN, TAG, BUNDLE +
          'startAbility callback err: %{public}s; data: %{public}s', JSON.stringify(err), JSON.stringify(data));
      })
      await sleep(2000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_031 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_032
     * @tc.name       : EmbeddedUIExtAbility change density on foreground
     * @tc.desc       : EmbeddedUIExtAbility can receive density change
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_032', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_032 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_EmbeddedUIExtAbilityA_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_EmbeddedUIExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_032 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_032 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(screenDensity).assertEqual(640);
            expect(displayId).assertEqual(currentDisplayId);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      let densityDpi = 600;
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(densityDpi);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_032 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_033
     * @tc.name       : EmbeddedUIExtAbility change density on background
     * @tc.desc       : EmbeddedUIExtAbility cannot receive density change
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_033', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_033 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_EmbeddedUIExtAbilityC_Create', 'Rely_EmbeddedUIExtAbilityC_ConfigurationUpdate',
          'Rely_EmbeddedUIExtAbilityA_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_EmbeddedUIExtAbilityC_Create') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_033 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_033 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(screenDensity).assertEqual(640);
            expect(displayId).assertEqual(currentDisplayId);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
          } else if (data.event == 'Rely_EmbeddedUIExtAbilityC_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_033 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_033 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            expect(screenDensity).assertEqual(240);
            expect(displayId).assertEqual(currentDisplayId);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_LDPI);
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          } else if (data.event == 'Rely_EmbeddedUIExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            expect().assertFail();
            done();
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      abilityDelegator.startAbility({
        bundleName: relyHapEmbeddedUIExtAbilityTwo,
        abilityName: 'EntryAbility'
      }, (err, data) => {
        hilog.info(DOMAIN, TAG, BUNDLE +
          'startAbility callback err: %{public}s; data: %{public}s', JSON.stringify(err), JSON.stringify(data));
      })
      await sleep(2000);

      let densityDpi = 200;
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(densityDpi);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_033 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_034
     * @tc.name       : EmbeddedUIExtAbility return to foreground
     * @tc.desc       : EmbeddedUIExtAbility can receive density change
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_034', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_034 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_EmbeddedUIExtAbilityA_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_EmbeddedUIExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_034 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_034 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(displayId).assertEqual(currentDisplayId);
            expect(screenDensity).assertEqual(240);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_LDPI);
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      abilityDelegator.startAbility({
        bundleName: relyHapEmbeddedUIExtAbilityOne,
        abilityName: 'EntryAbility'
      }, (err, data) => {
        hilog.info(DOMAIN, TAG, BUNDLE +
          'startAbility callback err: %{public}s; data: %{public}s', JSON.stringify(err), JSON.stringify(data));
      })
      await sleep(2000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_034 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_035
     * @tc.name       : EmbeddedUIExtAbilities change density on foreground
     * @tc.desc       : Each EmbeddedUIExtAbility can receive density change
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_035', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_035 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let eventCount = 0;
      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_EmbeddedUIExtAbilityA_ConfigurationUpdate', 'Rely_EmbeddedUIExtAbilityB_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_EmbeddedUIExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCount++;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_035 receive success, eventCount is: ' + JSON.stringify(eventCount));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_035 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_035 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(screenDensity).assertEqual(640);
            expect(displayId).assertEqual(currentDisplayId);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
          } else if (data.event == 'Rely_EmbeddedUIExtAbilityB_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCount++;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_035 receive success, eventCount is: ' + JSON.stringify(eventCount));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_035 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_035 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(screenDensity).assertEqual(640);
            expect(displayId).assertEqual(currentDisplayId);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
          }
          if (eventCount === 2) {
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      let densityDpi = 600;
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(densityDpi);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_035 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_036
     * @tc.name       : EmbeddedUIExtAbilities change density on background
     * @tc.desc       : Each EmbeddedUIExtAbility cannot receive density change
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_036', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_036 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let eventCountC = 0;
      let eventCountD = 0;
      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_EmbeddedUIExtAbilityC_ConfigurationUpdate', 'Rely_EmbeddedUIExtAbilityD_ConfigurationUpdate',
          'Rely_EmbeddedUIExtAbilityA_ConfigurationUpdate', 'Rely_EmbeddedUIExtAbilityB_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_EmbeddedUIExtAbilityC_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCountC++;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_036 receive success, eventCountC is: ' +
              JSON.stringify(eventCountC));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_036 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_036 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            if (eventCountC === 1) {
              expect(screenDensity).assertEqual(640);
              expect(displayId).assertEqual(currentDisplayId);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
            } else if (eventCountC === 2) {
              expect(screenDensity).assertEqual(240);
              expect(displayId).assertEqual(currentDisplayId);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_LDPI);
            }
          } else if (data.event == 'Rely_EmbeddedUIExtAbilityD_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCountD++;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_036 receive success, eventCountD is: ' +
              JSON.stringify(eventCountD));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_036 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_036 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            if (eventCountD === 1) {
              expect(screenDensity).assertEqual(640);
              expect(displayId).assertEqual(currentDisplayId);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
            } else if (eventCountD === 2) {
              expect(screenDensity).assertEqual(240);
              expect(displayId).assertEqual(currentDisplayId);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_LDPI);
            }
          } else if (data.event == 'Rely_EmbeddedUIExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            expect().assertFail();
            done();
          } else if (data.event == 'Rely_EmbeddedUIExtAbilityB_ConfigurationUpdate') {
            sleep(1000);
            expect().assertFail();
            done();
          }
          if (eventCountC === 2 && eventCountD === 2) {
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      abilityDelegator.startAbility({
        bundleName: relyHapEmbeddedUIExtAbilityTwo,
        abilityName: 'EntryAbility'
      }, (err, data) => {
        hilog.info(DOMAIN, TAG, BUNDLE +
          'startAbility callback err: %{public}s; data: %{public}s', JSON.stringify(err), JSON.stringify(data));
      })
      await sleep(2000);

      let densityDpi = 200;
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(densityDpi);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_036 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_037
     * @tc.name       : EmbeddedUIExtAbilities return to foreground
     * @tc.desc       : Each EmbeddedUIExtAbility can receive density change
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_037', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_037 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let eventCount = 0;
      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_EmbeddedUIExtAbilityA_ConfigurationUpdate', 'Rely_EmbeddedUIExtAbilityB_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_EmbeddedUIExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            eventCount++;
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_037 receive success, eventCount is: ' + JSON.stringify(eventCount));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_037 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_037 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(displayId).assertEqual(currentDisplayId);
            expect(screenDensity).assertEqual(240);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_LDPI);
          } else if (data.event == 'Rely_EmbeddedUIExtAbilityB_ConfigurationUpdate') {
            sleep(1000);
            eventCount++;
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_037 receive success, eventCount is: ' + JSON.stringify(eventCount));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_037 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_037 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(displayId).assertEqual(currentDisplayId);
            expect(screenDensity).assertEqual(240);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_LDPI);
          }
          if (eventCount === 2) {
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      abilityDelegator.startAbility({
        bundleName: relyHapEmbeddedUIExtAbilityOne,
        abilityName: 'EntryAbility'
      }, (err, data) => {
        hilog.info(DOMAIN, TAG, BUNDLE +
          'startAbility callback err: %{public}s; data: %{public}s', JSON.stringify(err), JSON.stringify(data));
      })
      await sleep(2000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_037 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_038
     * @tc.name       : EmbeddedUIExtAbility change density many times on foreground
     * @tc.desc       : EmbeddedUIExtAbility can receive density changes
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_038', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_038 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let eventCount = 0;
      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_EmbeddedUIExtAbilityA_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_EmbeddedUIExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCount++;
            expect(displayId).assertEqual(currentDisplayId);
            if (eventCount === 1) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_038 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_038 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_038 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(320);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XLDPI);
            } else if (eventCount === 2) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_038 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_038 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_038 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(640);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
            } else if (eventCount === 3) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_038 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_038 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_038 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(120);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_SDPI);
            } else if (eventCount === 4) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_038 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_038 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_038 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(640);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
              commonEventManager.unsubscribe(subscriber, unsubscribeCB);
            }
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(300);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(600);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(100);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(600);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_038 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_039
     * @tc.name       : EmbeddedUIExtAbility change density many times on background
     * @tc.desc       : EmbeddedUIExtAbility cannot receive density changes
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_039', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_039 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let eventCount = 0;
      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_EmbeddedUIExtAbilityC_ConfigurationUpdate', 'Rely_EmbeddedUIExtAbilityA_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_EmbeddedUIExtAbilityC_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            eventCount++;
            expect(displayId).assertEqual(currentDisplayId);
            if (eventCount === 1) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_039 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_039 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_039 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(640);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
            } else if (eventCount === 2) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_039 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_039 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_039 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(320);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XLDPI);
            } else if (eventCount === 3) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_039 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_039 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_039 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(640);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_XXXLDPI);
            } else if (eventCount === 4) {
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_039 receive success, eventCount is: ' +
                JSON.stringify(eventCount));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_039 receive success, resourceManagerScreenDensity is: ' +
                JSON.stringify(resourceManagerScreenDensity));
              hilog.info(DOMAIN, TAG,
                BUNDLE + 'Acts_UIExtensionAbilityTest_039 receive success, screenDensity is: ' +
                JSON.stringify(screenDensity));
              expect(screenDensity).assertEqual(120);
              expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_SDPI);
              commonEventManager.unsubscribe(subscriber, unsubscribeCB);
            }
          } else if (data.event == 'Rely_EmbeddedUIExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            expect().assertFail();
            done();
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);

      abilityDelegator.startAbility({
        bundleName: relyHapEmbeddedUIExtAbilityTwo,
        abilityName: 'EntryAbility'
      }, (err, data) => {
        hilog.info(DOMAIN, TAG, BUNDLE +
          'startAbility callback err: %{public}s; data: %{public}s', JSON.stringify(err), JSON.stringify(data));
      })
      await sleep(2000);

      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(300);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(600);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      screen.getAllScreens().then((data) => {
        screenClass = data[0];
        screenClass.setDensityDpi(100);
        hilog.info(DOMAIN, TAG, BUNDLE + 'Succeeded in getting all screens. Data: ' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Failed to get all screens . Cause: ' + JSON.stringify(err));
      });
      await sleep(1000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_039 end');
    })

    /**
     * @tc.number     : Acts_UIExtensionAbilityTest_040
     * @tc.name       : EmbeddedUIExtAbility return to foreground
     * @tc.desc       : EmbeddedUIExtAbility can receive the last density change
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('Acts_UIExtensionAbilityTest_040', 0, async (done: Function) => {
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_040 begin');
      let unsubscribeCB = () => {
        clearTimeout(timer);
        done();
      };
      let timer = setTimeout(() => {
        commonEventManager.unsubscribe(subscriber, unsubscribeCB);
        expect().assertFail();
      }, 10000);

      let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
        events: ['Rely_EmbeddedUIExtAbilityA_ConfigurationUpdate']
      };
      let subscriber = commonEventManager.createSubscriberSync(commonEventSubscribeInfo);
      let subscribeCB = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          hilog.info(DOMAIN, TAG, BUNDLE + 'receive event failed, code is: ' + JSON.stringify(err.code));
          expect().assertFail();
          done();
        } else {
          if (data.event == 'Rely_EmbeddedUIExtAbilityA_ConfigurationUpdate') {
            sleep(1000);
            let screenDensity: ConfigurationConstant.ScreenDensity = data.parameters?.screenDensity;
            let displayId: number = data.parameters?.displayId;
            let currentDisplayId = display.getDefaultDisplaySync().id;
            let resourceManagerScreenDensity: resourceManager.ScreenDensity =
              data.parameters?.resourceManagerScreenDensity;
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_040 receive success, resourceManagerScreenDensity is: ' +
              JSON.stringify(resourceManagerScreenDensity));
            hilog.info(DOMAIN, TAG,
              BUNDLE + 'Acts_UIExtensionAbilityTest_040 receive success, screenDensity is: ' +
              JSON.stringify(screenDensity));
            expect(displayId).assertEqual(currentDisplayId);
            expect(screenDensity).assertEqual(120);
            expect(resourceManagerScreenDensity).assertEqual(resourceManager.ScreenDensity.SCREEN_SDPI);
            commonEventManager.unsubscribe(subscriber, unsubscribeCB);
          }
        }
      }
      commonEventManager.subscribe(subscriber, subscribeCB);
      await sleep(1000);
      abilityDelegator.startAbility({
        bundleName: relyHapEmbeddedUIExtAbilityOne,
        abilityName: 'EntryAbility'
      }, (err, data) => {
        hilog.info(DOMAIN, TAG, BUNDLE +
          'startAbility callback err: %{public}s; data: %{public}s', JSON.stringify(err), JSON.stringify(data));
      })
      await sleep(2000);
      hilog.info(DOMAIN, TAG, BUNDLE + 'Acts_UIExtensionAbilityTest_040 end');
    })
  })
}