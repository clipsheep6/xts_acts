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
import Curves from '@ohos.curves'
import events_emitter from '@ohos.events.emitter';
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry';
import { Hypium } from '@ohos/hypium';
import hilog from '@ohos.hilog';
import testsuite from '../../test/List.test'
@Entry
@Component
struct ImageComponent {
  @State widthSize: number = 50
  @State heightSize: number = 50
  @State widthSize1: number = 50
  @State heightSize1: number = 50
  @State widthSize2: number = 50
  @State heightSize2: number = 50
  @State widthSize3: number = 50
  @State heightSize3: number = 50
  @State setFraction: number = 0

  aboutToAppear(){
    var abilityDelegator: any
    abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
    var abilityDelegatorArguments: any
    abilityDelegatorArguments = AbilityDelegatorRegistry.getArguments()
    hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
    hilog.info(0x0000, 'testTag', '%{public}s', 'start run testcase!!!');
    Hypium.hypiumTest(abilityDelegator, abilityDelegatorArguments, testsuite)
  }
  onFinish() {}
  interpolate(fraction) {
    return fraction;
  }
  interpolate1(fraction) {
    return 2*fraction;
  }
  interpolate2(fraction) {
    return fraction*fraction;
  }
  interpolate3(fraction) {
    this.interpolate4(fraction)
    return this.setFraction
  }
  interpolate4(fraction){
    this.setFraction=fraction
  }
  build() {
    Column() {
      Text('textAlign').fontSize(9).fontColor(0xCCCCCC)
      // Text()
      //   .key("curvesText")
      //   .margin({top:100})
      //   .width(this.widthSize)
      //   .height(this.heightSize)
      //   .backgroundColor(Color.Red)
      //   .onClick(()=> {
      //     globalThis.fraction = Curves.customCurve(this.interpolate3).interpolate(0.1)
      //     this.widthSize = 2*this.widthSize;
      //     this.heightSize = 2*this.heightSize;
      //   })
      //   .animation({ duration: 2000 , curve: Curves.customCurve(this.interpolate) ,onFinish:this.onFinish })
//      Text()
//        .key("curvesText1")
//        .margin({top:100})
//        .width(this.widthSize1)
//        .height(this.heightSize1)
//        .backgroundColor(Color.Red)
//        .onClick(()=> {
//          globalThis.fraction1 = Curves.customCurve(this.interpolate1).interpolate(0.1)
//          console.log( "1111134511111",Curves.customCurve(this.interpolate1).interpolate(0.1))
//          this.widthSize1 = 2*this.widthSize1;
//          this.heightSize1 = 2*this.heightSize1;
//        })
//        .animation({ duration: 2000 , curve: Curves.customCurve(this.interpolate1) ,onFinish:this.onFinish })
//      Text()
//        .key("curvesText2")
//        .margin({top:100})
//        .width(this.widthSize2)
//        .height(this.heightSize2)
//        .backgroundColor(Color.Red)
//        .onClick(()=> {
//          globalThis.fraction2 =  Curves.customCurve(this.interpolate2).interpolate(0.1)
//          this.widthSize2 = 2*this.widthSize2;
//          this.heightSize2 = 2*this.heightSize2;
//        })
//        .animation({ duration: 2000 , curve: Curves.customCurve(this.interpolate2) ,onFinish:this.onFinish })

    }.width("100%").height("100%")
  }
}