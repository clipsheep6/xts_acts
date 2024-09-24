/**
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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
import UIExtensionAbility from '@ohos.app.ability.UIExtensionAbility';
import UIExtensionContentSession from '@ohos.app.ability.UIExtensionContentSession';
import Want from '@ohos.app.ability.Want';
import type { Configuration } from '@ohos.app.ability.Configuration';
import commonEventManager from '@ohos.commonEventManager';

const TAG: string = '[testTag] UIExtAbilityC';
const DOMAIN = 0x0000;
const BUNDLE = 'UIExtAbilityC_';

export default class UIExtAbilityA extends UIExtensionAbility {
  onCreate() {
    hilog.info(DOMAIN, TAG, BUNDLE + 'onCreate direction: ' + this.context.config.direction);
    hilog.info(DOMAIN, TAG, BUNDLE + 'onCreate screenDensity: ' + this.context.config.screenDensity);
    hilog.info(DOMAIN, TAG, BUNDLE + 'onCreate displayId: ' + this.context.config.displayId);
    hilog.info(DOMAIN, TAG, BUNDLE + 'onCreate resourceManager direction: ' +
    this.context.resourceManager.getConfigurationSync().direction);
    hilog.info(DOMAIN, TAG, BUNDLE + 'onCreate resourceManager screenDensity: ' +
    this.context.resourceManager.getConfigurationSync().screenDensity);
    let commonEventPublishData = {
      parameters: {
        "direction": this.context.config.direction,
        "screenDensity": this.context.config.screenDensity,
        "displayId": this.context.config.displayId,
        "resourceManagerDirection": this.context.resourceManager.getConfigurationSync().direction,
        "resourceManagerScreenDensity": this.context.resourceManager.getConfigurationSync().screenDensity
      }
    }
    commonEventManager.publish(
      'Rely_UIExtAbilityC_Create', commonEventPublishData, (err) => {
      if (err) {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Rely_UIExtAbilityC_Create error');
      } else {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Rely_UIExtAbilityC_Create successful');
      }
    })
  }

  onForeground() {
    hilog.info(DOMAIN, TAG, BUNDLE + 'onForeground');
  }

  onBackground() {
    hilog.info(DOMAIN, TAG, BUNDLE + 'onBackground');
  }

  onDestroy() {
    hilog.info(DOMAIN, TAG, BUNDLE + 'onDestroy');
  }

  onSessionCreate(want: Want, session: UIExtensionContentSession) {
    hilog.info(DOMAIN, TAG, BUNDLE + 'onSessionCreate, want:' + JSON.stringify(want));
    let storage: LocalStorage = new LocalStorage();
    storage.setOrCreate('session', session);
    session.loadContent('pages/UIExtAbilityPageC', storage);
  }

  onSessionDestroy(session: UIExtensionContentSession) {
    hilog.info(DOMAIN, TAG, BUNDLE + 'onSessionDestroy');
  }

  onConfigurationUpdate(newConfig: Configuration): void {
    hilog.info(DOMAIN, TAG, BUNDLE + 'onConfigurationUpdate direction: ' + newConfig.direction);
    hilog.info(DOMAIN, TAG, BUNDLE + 'onConfigurationUpdate screenDensity: ' + newConfig.screenDensity);
    hilog.info(DOMAIN, TAG, BUNDLE + 'onConfigurationUpdate displayId: ' + newConfig.displayId);
    hilog.info(DOMAIN, TAG, BUNDLE + 'onConfigurationUpdate resourceManager direction: ' +
    this.context.resourceManager.getConfigurationSync().direction);
    hilog.info(DOMAIN, TAG, BUNDLE + 'onConfigurationUpdate resourceManager screenDensity: ' +
    this.context.resourceManager.getConfigurationSync().screenDensity);

    let commonEventPublishData = {
      parameters: {
        "direction": newConfig.direction,
        "screenDensity": newConfig.screenDensity,
        "displayId": newConfig.displayId,
        "resourceManagerDirection": this.context.resourceManager.getConfigurationSync().direction,
        "resourceManagerScreenDensity": this.context.resourceManager.getConfigurationSync().screenDensity
      }
    }
    commonEventManager.publish(
      'Rely_UIExtAbilityC_ConfigurationUpdate', commonEventPublishData, (err) => {
      if (err) {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Rely_UIExtAbilityC_ConfigurationUpdate error');
      } else {
        hilog.info(DOMAIN, TAG, BUNDLE + 'Rely_UIExtAbilityC_ConfigurationUpdate successful');
      }
    })
  }
}