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

@Entry
@Component
struct Index {
  build() {
    Row() {
      Column() {
        Button() {
          Text("DIALOG")
            .fontSize(15)
            .fontWeight(FontWeight.Bold)
        }
        .backgroundColor('#00FFFF')
        .width('80%')
        .height('30vp')
        .margin({ top: '2%' })
        .onClick(() => {
          globalThis.dialog();
        })

        Button() {
          Text("SYSTEM_ALERT")
            .fontSize(15)
            .fontWeight(FontWeight.Bold)
        }
        .backgroundColor('#00FFFF')
        .width('80%')
        .height('30vp')
        .margin({ top: '2%' })
        .onClick(() => {
          globalThis.systemAlert();
        })

        Button() {
          Text("INPUT_METHOD")
            .fontSize(15)
            .fontWeight(FontWeight.Bold)
        }
        .backgroundColor('#00FFFF')
        .width('80%')
        .height('30vp')
        .margin({ top: '2%' })
        .onClick(() => {
          globalThis.inputMethod();
        })

        Button() {
          Text("STATUS_BAR")
            .fontSize(15)
            .fontWeight(FontWeight.Bold)
        }
        .backgroundColor('#00FFFF')
        .width('80%')
        .height('30vp')
        .margin({ top: '2%' })
        .onClick(() => {
          globalThis.statusBar();
        })

        Button() {
          Text("PANEL")
            .fontSize(15)
            .fontWeight(FontWeight.Bold)
        }
        .backgroundColor('#00FFFF')
        .width('80%')
        .height('30vp')
        .margin({ top: '2%' })
        .onClick(() => {
          globalThis.panel();
        })

        Button() {
          Text("KEYGUARD")
            .fontSize(15)
            .fontWeight(FontWeight.Bold)
        }
        .backgroundColor('#00FFFF')
        .width('80%')
        .height('30vp')
        .margin({ top: '2%' })
        .onClick(() => {
          globalThis.keyguard();
        })

        Button() {
          Text("VOLUME_OVERLAY")
            .fontSize(15)
            .fontWeight(FontWeight.Bold)
        }
        .backgroundColor('#00FFFF')
        .width('80%')
        .height('30vp')
        .margin({ top: '2%' })
        .onClick(() => {
          globalThis.volumeOverlay();
        })

        Button() {
          Text("NAVIGATION_BAR")
            .fontSize(15)
            .fontWeight(FontWeight.Bold)
        }
        .backgroundColor('#00FFFF')
        .width('80%')
        .height('30vp')
        .margin({ top: '2%' })
        .onClick(() => {
          globalThis.navigationBar();
        })

        Button() {
          Text("FLOAT")
            .fontSize(15)
            .fontWeight(FontWeight.Bold)
        }
        .backgroundColor('#00FFFF')
        .width('80%')
        .height('30vp')
        .margin({ top: '2%' })
        .onClick(() => {
          globalThis.startAbilityFloat();
        })

        Button() {
          Text("LAUNCHER_RECENT")
            .fontSize(15)
            .fontWeight(FontWeight.Bold)
        }
        .backgroundColor('#00FFFF')
        .width('80%')
        .height('30vp')
        .margin({ top: '2%' })
        .onClick(() => {
          globalThis.launcherRecent();
        })

        Button() {
          Text("LAUNCHER_DOCK")
            .fontSize(15)
            .fontWeight(FontWeight.Bold)
        }
        .backgroundColor('#00FFFF')
        .width('80%')
        .height('30vp')
        .margin({ top: '2%' })
        .onClick(() => {
          globalThis.launcherDock();
        })

        Button() {
          Text("VOICE_INTERACTION")
            .fontSize(15)
            .fontWeight(FontWeight.Bold)
        }
        .backgroundColor('#00FFFF')
        .width('80%')
        .height('30vp')
        .margin({ top: '2%' })
        .onClick(() => {
          globalThis.voiceInteraction();
        })

        Button() {
          Text("POINTER")
            .fontSize(15)
            .fontWeight(FontWeight.Bold)
        }
        .backgroundColor('#00FFFF')
        .width('80%')
        .height('30vp')
        .margin({ top: '2%' })
        .onClick(() => {
          globalThis.pointer();
        })

        Button() {
          Text("FLOAT_CAMERA")
            .fontSize(15)
            .fontWeight(FontWeight.Bold)
        }
        .backgroundColor('#00FFFF')
        .width('80%')
        .height('30vp')
        .margin({ top: '2%' })
        .onClick(() => {
          globalThis.floatCamera();
        })

        Button() {
          Text("SCREENSHOT")
            .fontSize(15)
            .fontWeight(FontWeight.Bold)
        }
        .backgroundColor('#00FFFF')
        .width('80%')
        .height('30vp')
        .margin({ top: '2%' })
        .onClick(() => {
          globalThis.screenshot();
        })
      }
      .width('100%')
    }
    .height('100%')
  }
}