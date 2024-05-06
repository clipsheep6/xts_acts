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

interface Info {
  top?: ResourceColor | null | undefined;
  end?: ResourceColor | null | undefined;
  bottom?: ResourceColor | null | undefined;
  start?: ResourceColor | null | undefined;
}

@Entry
@Component
struct BorderColor {
  private scroller: Scroller = new Scroller()
  simpleList: Array<Info> = [
    { top: Color.Blue, end: "#ff2e83e2", bottom: $r('app.color.pink'), start: '#ffcac609' },
    { top: -2, end: "", bottom: null, start: undefined },
    { end: Color.Blue, start: Color.Pink },
    { top: Color.Blue, bottom: Color.Pink },
    { start: Color.Blue, top: Color.Pink },
  ];
  @State language: string = I18n.System.getSystemLanguage();
  @State caseName: string = '';
  @State value: EdgeWidths | null = null;
  case: string = 'ArkUIHDS_BorderColor_Test_';

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
left: ${this.value?.left}
top: ${this.value?.top}
right: ${this.value?.right}
bottom: ${this.value?.bottom}`)

      Stack({ alignContent: Alignment.End }) {
        Scroll(this.scroller) {
          Flex({ direction: FlexDirection.Column }) {
            Column({ space: 10 }) {
              ForEach(this.simpleList, (item: Info, index: number) => {
                Text('caseName: ' + Constants.getCaseName(this.case, index + 1))
                  .key(Constants.getCaseName(this.case, index + 1))
                  .borderWidth(4)
                  .borderColor({ top: item.top, end: item.end, bottom: item.bottom, start: item.start })
                Button("获取组件信息:" + Constants.getCaseName(this.case, index + 1)).onClick(() => {
                  let strJson = getInspectorByKey(Constants.getCaseName(this.case, index + 1));
                  let obj: ESObject = JSON.parse(strJson);
                  this.caseName = Constants.getCaseName(this.case, index + 1);
                  this.value = {
                    left: obj.$attrs.borderColor.left,
                    top: obj.$attrs.borderColor.top,
                    right: obj.$attrs.borderColor.right,
                    bottom: obj.$attrs.borderColor.bottom
                  };
                  console.log("borderColor " + strJson)
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