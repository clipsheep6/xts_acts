/*
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

import common from '@ohos.app.ability.common';
import window from '@ohos.window';
import { Skip } from './Utils/Skip';
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry';
import { Hypium } from '@ohos/hypium';
import hilog from '@ohos.hilog';
import testsuite from '../../test/List.test'

interface Info {
  caseName: string;
  pageUrl: string;
}

@Entry
@Component
struct Index {
  aboutToAppear() {
    let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
    let abilityDelegatorArguments = AbilityDelegatorRegistry.getArguments()
    hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
    hilog.info(0x0000, 'testTag', '%{public}s', 'start run testcase!!!');
    Hypium.hypiumTest(abilityDelegator, abilityDelegatorArguments, testsuite)
  }

  private scroller: Scroller = new Scroller()
  @State simpleList: Array<Info> = [
    { caseName: "borderWidth", pageUrl: "pages/borderWidth" },
    { caseName: "borderColor", pageUrl: "pages/borderColor" },
    { caseName: "borderRadius", pageUrl: "pages/borderRadius" },
    { caseName: "margin", pageUrl: "pages/margin" },
    { caseName: "padding", pageUrl: "pages/padding" },
    { caseName: "outlineColor", pageUrl: "pages/outlineColor" },
    { caseName: "borderImage", pageUrl: "pages/borderImage" },
    { caseName: "border", pageUrl: "pages/border" },
    { caseName: "bindSheet", pageUrl: "pages/bindSheet" },
  ];

  build() {
    Column() {
      Stack({ alignContent: Alignment.End }) {
        Scroll(this.scroller) {
          Flex({ direction: FlexDirection.Column }) {
            ForEach(this.simpleList, (item: Info) => {
              Skip({ butName: item.caseName, pushUrl: item.pageUrl })
            })
          }.margin({ right: 15 }).borderColor("rgba(0,0,0,0)")
        }
        .width('100%')
        .scrollBar(BarState.Off)
        .scrollable(ScrollDirection.Vertical)

        ScrollBar({ scroller: this.scroller, direction: ScrollBarDirection.Vertical, state: BarState.Auto }) {
          Text()
            .width(20)
            .height(100)
            .borderRadius(10)
            .backgroundColor('#C0C0C0')
        }.width(20).backgroundColor('#ededed')
      }
    }.height('90%')
  }
}

