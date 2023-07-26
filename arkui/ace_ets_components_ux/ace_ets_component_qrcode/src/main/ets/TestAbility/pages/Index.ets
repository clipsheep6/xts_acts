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
//@ts-nocheck
import events_emitter from '@ohos.events.emitter';
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry';
import { Hypium } from '@ohos/hypium';
import hilog from '@ohos.hilog';
import testsuite from '../../test/List.test'
@Entry
@Component
struct qrcodeTest {
  @State qrcodeOpacityNum: number = 0
  @State qrcodeOpacityRes: Resource = $r('app.float.QRCode_Opacity')

  private stateChangCallBack = (eventData) => {
      console.info("qrcode page state change called:" + JSON.stringify(eventData));
      this.qrcodeOpacityNum = eventData.data.qrcodeOpacityNum;
  }

  aboutToAppear(){
      var stateChangeEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
      }

      events_emitter.on(stateChangeEvent, this.stateChangCallBack);
  }

  build() {
    Column({ space: 5 }) {
      QRCode(this.value).width(200).height(200)
        .contentOpacity(this.qrcodeOpacityNum)
        .key('qrCodeNum')

      QRCode(this.value).width(200).height(200)
        .contentOpacity(this.qrcodeOpacityRes)
        .key('qrCodeRes')

      QRCode(this.value).width(200).height(200)
        .key('qrCodeDefault')
    }.width('100%').margin({ top: 5 })
  }
}
