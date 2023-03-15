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
@Entry
@Component
struct Index {
  cfm1: number[] = [
    1.0, 1.0, 1.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0
  ];
  cfm2: number[] = [
    0.0, 0.0, 0.0, 0.0, 0.0,
    0.5, 0.5, 0.5, 0.5, 0.5,
    0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0
  ];
  cfm3: number[] = [
    0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0,
    0.5, 0.5, 0.5, 0.5, 0.5,
    1.0, 1.0, 1.0, 1.0, 1.0
  ];
  cfm4: number[] = [
    0.5, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.5, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.5, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0
  ];
  cfm5: number[] = [
    0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0
  ];
  cfm6: number[] = [
    0.5, 0.5, 0.5, 0.5, 0.5,
    0.5, 0.5, 0.5, 0.5, 0.5,
    0.5, 0.5, 0.5, 0.5, 0.5,
    0.0, 0.0, 0.0, 0.0
  ];
  cfm7: number[] = [
    0.5, 0.5, 0.5, 0.5, 0.5,
    0.5, 0.5, 0.5, 0.5, 0.5,
    0.5, 0.5, 0.5, 0.5, 0.5,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0
  ];
  cfm8: number[] = [
    -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0
  ];
  cfm9: number[] = [
    2.1, 2.1, 2.1, 2.1, 2.1,
    2.1, 2.1, 2.1, 2.1, 2.1,
    2.1, 2.1, 2.1, 2.1, 2.1,
    2.1, 2.1, 2.1, 2.1, 2.1
  ];
  cfm10: number[] = [
    null, null, null, null, null,
    null, null, null, null, null,
    null, null, null, null, null,
    null, null, null, null, null
  ];
  cfm11: number[] = [
    undefined, undefined, undefined, undefined, undefined,
    undefined, undefined, undefined, undefined, undefined,
    undefined, undefined, undefined, undefined, undefined,
    undefined, undefined, undefined, undefined, undefined
  ];
  @State color1: ColorFilter = new ColorFilter(this.cfm1);
  @State color2: ColorFilter = new ColorFilter(this.cfm2);
  @State color3: ColorFilter = new ColorFilter(this.cfm3);
  @State color4: ColorFilter = new ColorFilter(this.cfm4);
  @State color5: ColorFilter = new ColorFilter(this.cfm5);
  @State color6: ColorFilter = new ColorFilter(this.cfm6);
  @State color7: ColorFilter = new ColorFilter(this.cfm7);
  @State color8: ColorFilter = new ColorFilter(this.cfm8);
  @State color9: ColorFilter = new ColorFilter(this.cfm9);
  @State color10: ColorFilter = new ColorFilter(this.cfm10);
  @State color11: ColorFilter = new ColorFilter(this.cfm11);

  async aboutToAppear() {
    console.log('in testability index')
  }

  build() {
    Column() {
      Image($r("app.media.white"))
        .width('100%').height('100px')
        .colorFilter(this.color1)
        .onComplete(async ({width,height}) => {
          console.log("onComplete" + width + ", " + height)
        })
      Image($r("app.media.white"))
        .width('100%').height('100px')
        .colorFilter(this.color2)
        .onComplete(async ({width,height}) => {
          console.log("onComplete" + width + ", " + height)
        })
      Image($r("app.media.white"))
        .width('100%').height('100px')
        .colorFilter(this.color3)
        .onComplete(async ({width,height}) => {
          console.log("onComplete" + width + ", " + height)
        })
      Image($r("app.media.white"))
        .width('100%').height('100px')
        .colorFilter(this.color4)
        .onComplete(async ({width,height}) => {
          console.log("onComplete" + width + ", " + height)
        })
      Image($r("app.media.white"))
        .width('100%').height('100px')
        .colorFilter(this.color5)
        .onComplete(async ({width,height}) => {
          console.log("onComplete" + width + ", " + height)
        })
      Image($r("app.media.white"))
        .width('100%').height('100px')
        .colorFilter(this.color6)
      Image($r("app.media.white"))
        .width('100%').height('100px')
        .colorFilter(this.color7)
      Image($r("app.media.white"))
        .width('100%').height('100px')
        .colorFilter(this.color8)
      Image($r("app.media.white"))
        .width('100%').height('100px')
        .colorFilter(this.color9)
      Image($r("app.media.white"))
        .width('100%').height('100px')
        .colorFilter(this.color10)
      Image($r("app.media.white"))
        .width('100%').height('100px')
        .colorFilter(this.color11)
    }
    .width('100%')
    .height('100%')
  }
}


