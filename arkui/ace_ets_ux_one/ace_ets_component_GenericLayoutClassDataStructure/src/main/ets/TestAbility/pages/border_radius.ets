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

import I18n from '@ohos.i18n';
import { BusinessError } from '@ohos.base'
import { Constants } from './Utils/Constants';
import { LengthMetrics, LengthUnit } from '@ohos.arkui.node';

interface Info {
  topStart?: LengthMetrics | null | undefined;
  topEnd?: LengthMetrics | null | undefined;
  bottomStart?: LengthMetrics | null | undefined;
  bottomEnd?: LengthMetrics | null | undefined;
}

@Entry
@Component
struct Border_Radius {
  private scroller: Scroller = new Scroller()
  simpleList: Array<Info> = [
    {
      topStart: LengthMetrics.px(20),
      topEnd: LengthMetrics.vp(30),
      bottomStart: LengthMetrics.fp(40),
      bottomEnd: LengthMetrics.lpx(50)
    },
    {
      topStart: LengthMetrics.px(-2),
      topEnd: LengthMetrics.px(0),
      bottomStart: LengthMetrics.percent(null),
      bottomEnd: LengthMetrics.fp(undefined)
    },
    { topStart: new LengthMetrics(20, LengthUnit.PX), topEnd: new LengthMetrics(30, LengthUnit.VP) },
    { topStart: new LengthMetrics(20, LengthUnit.PX), bottomStart: new LengthMetrics(40, LengthUnit.FP) },
    { topEnd: new LengthMetrics(30, LengthUnit.VP), bottomStart: new LengthMetrics(40, LengthUnit.FP) },
  ];
  textTimerController: TextTimerController = new TextTimerController()
  @State language: string = I18n.System.getSystemLanguage();
  @State caseName: string = '';
  @State value: BorderRadiuses | null = null;
  case: string = 'ArkUIHDS_Border_Radius_Test_';

  build() {
    Column() {
      Row() {
        Button("ar-EG(阿拉伯语)").onClick(() => {
          console.log("getSystemLanguage last " + I18n.System.getSystemLanguage());
          try {
            I18n.System.setSystemLanguage("ar-EG");
            this.language = I18n.System.getSystemLanguage();
            let val = I18n.System.getSystemLanguage();
            this.language = val;
            console.log("getSystemLanguage new " + val);
          } catch (error) {
            let err: BusinessError = error as BusinessError;
            console.error(`call System.setSystemLanguage failed, error code: ${err.code}, message: ${err.message}.`);
          }
        })
        Text("当前语言：" + Constants.LANGUAGE.get(this.language))
        Button("zh-Hans(汉语)").onClick(() => {
          console.log("getSystemLanguage last " + I18n.System.getSystemLanguage());
          try {
            I18n.System.setSystemLanguage("zh-Hans");
            let val = I18n.System.getSystemLanguage();
            this.language = val;
            console.log("getSystemLanguage new " + val);
          } catch (error) {
            let err: BusinessError = error as BusinessError;
            console.error(`call System.setSystemLanguage failed, error code: ${err.code}, message: ${err.message}.`);
          }
        })
      }

      Text(`当前caseName: ${this.caseName}
topLeft: ${this.value?.topLeft}
topRight: ${this.value?.topRight}
bottomLeft: ${this.value?.bottomLeft}
bottomRight: ${this.value?.bottomRight}`)

      Stack({ alignContent: Alignment.End }) {
        Scroll(this.scroller) {
          Flex({ direction: FlexDirection.Column }) {
            Column({ space: 10 }) {
              ForEach(this.simpleList, (item: Info, index: number) => {
                Text('caseName: ' + Constants.getCaseName(this.case, index + 1))
                TextTimer({ isCountDown: true, count: 30000, controller: this.textTimerController })
                  .format('mm:ss.SS')
                  .fontColor(Color.Black)
                  .fontSize(50)
                  .onTimer((utc: number, elapsedTime: number) => {
                    console.info('textTimer notCountDown utc is：' + utc + ', elapsedTime: ' + elapsedTime)
                  })
                  .key(Constants.getCaseName(this.case, index + 1))
                  .border({ width: 4, radius: {
                    topStart: item.topStart,
                    topEnd: item.topEnd,
                    bottomStart: item.bottomStart,
                    bottomEnd: item.bottomEnd
                  } })
                Button("获取组件信息:" + Constants.getCaseName(this.case, index + 1)).onClick(() => {
                  let strJson = getInspectorByKey(Constants.getCaseName(this.case, index + 1));
                  let obj: ESObject = JSON.parse(strJson);
                  this.caseName = Constants.getCaseName(this.case, index + 1);
                  this.value = {
                    topLeft: obj.$attrs.borderRadius.topLeft,
                    topRight: obj.$attrs.borderRadius.topRight,
                    bottomLeft: obj.$attrs.borderRadius.bottomLeft,
                    bottomRight: obj.$attrs.borderRadius.bottomRight
                  };
                })
              })
            }
          }.margin({ right: 15 })
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
    }.height('70%')
  }
}