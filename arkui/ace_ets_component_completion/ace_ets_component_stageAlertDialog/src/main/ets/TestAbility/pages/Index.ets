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
struct AlertDialogExample  {
  aboutToAppear(){
    var abilityDelegator: any
    abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
    var abilityDelegatorArguments: any
    abilityDelegatorArguments = AbilityDelegatorRegistry.getArguments()
    hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
    hilog.info(0x0000, 'testTag', '%{public}s', 'start run testcase!!!');
    Hypium.hypiumTest(abilityDelegator, abilityDelegatorArguments, testsuite)
  }
  build() {
    Row() {
      Column() {
        Text("AlertDialog1")
          .width(100)
          .height(70)
          .fontSize(20)
          .opacity(1)
          .align(Alignment.TopStart)
          .fontColor(0xCCCCCC)
          .lineHeight(25)
          .border({ width: 1 })
          .padding(10)
          .textAlign(TextAlign.Center)
          .textOverflow({ overflow: TextOverflow.None })
          .key("AlertDialog1")
          .onClick(() => {
            try {
              globalThis.uiContent.showAlertDialog(
                {
                  title: 'title',
                  message: 'text',
                  autoCancel: true,
                  alignment: DialogAlignment.Bottom,
                  offset: { dx: 0, dy: -20 },
                  gridCount: 3,
                  confirm: {
                    value: 'button',
                    action: () => {
                      console.info('Button-clicking callback')
                    }
                  },
                  cancel: () => {
                    console.info('Closed callbacks')
                  }
                }
              )
              var backData = {
                data: {
                  "STATUS": true
                }
              }
              let backEvent = {
                eventId: 60220,
                priority: events_emitter.EventPriority.LOW
              }
              console.info("showDialog start to emit action state")
              events_emitter.emit(backEvent, backData)
            } catch (error) {
              console.error("showToast emit action state err:" + JSON.stringify(error.message));
            };
          })

        Text("AlertDialog2")
          .width(100)
          .height(70)
          .fontSize(20)
          .opacity(1)
          .align(Alignment.TopStart)
          .fontColor(0xCCCCCC)
          .lineHeight(25)
          .border({ width: 1 })
          .padding(10)
          .textAlign(TextAlign.Center)
          .textOverflow({ overflow: TextOverflow.None })
          .key("AlertDialog2")
          .onClick(() => {
            try {
              globalThis.uiContent.showAlertDialog(
                {
                  title: 'title',
                  message: 'text',
                  autoCancel: true,
                  alignment: DialogAlignment.Bottom,
                  offset: { dx: 0, dy: -20 },
                  gridCount: 3,
                  confirm: {
                    value: 'button',
                    action: () => {
                      console.info('Button-clicking callback')
                    }
                  },
                  cancel: () => {
                    console.info('Closed callbacks')
                  }
                }
              )
              var backData1 = {
                data: {
                  "STATUS": 10
                }
              }
              let backEvent1 = {
                eventId: 60221,
                priority: events_emitter.EventPriority.LOW
              }
              console.info("showActionMenu start to emit action state")
              events_emitter.emit(backEvent1, backData1)
            } catch (error) {

            };
          })

        Text("AlertDialog3")
          .width(100)
          .height(70)
          .fontSize(20)
          .opacity(1)
          .align(Alignment.TopStart)
          .fontColor(0xCCCCCC)
          .lineHeight(25)
          .border({ width: 1 })
          .padding(10)
          .textAlign(TextAlign.Center)
          .textOverflow({ overflow: TextOverflow.None })
          .key("AlertDialog3")
          .onClick(() => {
            try {
              globalThis.uiContent.showAlertDialog(
                {
                  title: 'title',
                  message: 'text',
                  autoCancel: true,
                  alignment: DialogAlignment.Bottom,
                  offset: { dx: 0, dy: -20 },
                  gridCount: 3,
                  confirm: {
                    value: 'button',
                    action: () => {
                      console.info('Button-clicking callback')
                    }
                  },
                  cancel: () => {
                    console.info('Closed callbacks')
                  }
                }
              )
              var backData2 = {
                data: {
                  "STATUS": "STATUS"
                }
              }
              let backEvent2 = {
                eventId: 60222,
                priority: events_emitter.EventPriority.LOW
              }
              console.info("showActionMenu start to emit action state")
              events_emitter.emit(backEvent2, backData2)
            } catch (error) {
              console.error(`showActionMenu args error code is ${error.code}, message is ${error.message}`);
            };
          })

      }
      .height('100%')
    }
  }
}