/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
import { LengthMetrics } from '@ohos.arkui.node';
@Entry
@Component
struct AlphabetIndexerDirection {
  @State text: string = '';
  @State message: string = 'Hi there';
  @State currentalignStyle: IndexerAlign |  undefined = IndexerAlign.Right;
  @State currentDirection: Direction | undefined = Direction.Auto;
  @State popupBackgroundBlurStyle : BlurStyle = BlurStyle.NONE;
  controller: TextInputController = new TextInputController();
  private arrayA: string[] = ['安'];
  private arrayB: string[] = ['卜', '白', '包', '毕', '丙'];
  private arrayC: string[] = ['曹', '成', '陈', '催']
  private arrayL: string[] = ['刘', '李', '楼', '梁', '雷', '吕', '柳', '卢'];
  private value: string[] = ['#', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
    'H', 'I', 'J', 'K', 'L', 'M', 'N',
    'O', 'P', 'Q', 'R', 'S', 'T', 'U',
    'V', 'W', 'X', 'Y', 'Z'];
  @State isNeedAutoCollapse: boolean = false;
  @State indexerHeight: number = 500;
  @State isUsingPopup: boolean = true;

  calculatePercentage(current:number, percentage:number) {
    return (current + current * percentage / 100).toFixed(2).toString();
  }

  build() {
    Row() {
      Column() {
        Row(){
          Text('direction').width('15%')
          Button('auto').onClick(() => {
            this.currentDirection = Direction.Auto
          }).backgroundColor(this.currentDirection == Direction.Auto ? Color.Red : Color.Blue).width('20%').key('Auto')
            .id('Auto')
          Button('Rtl').onClick(() => {
            this.currentDirection = Direction.Rtl
          }).backgroundColor(this.currentDirection == Direction.Rtl ? Color.Red : Color.Blue).width('20%').key('Rtl')
            .id('Rtl')
          Button('Ltr').onClick(() => {
            this.currentDirection = Direction.Ltr
          }).backgroundColor(this.currentDirection == Direction.Ltr ? Color.Red : Color.Blue).width('20%').key('Ltr')
            .id('Ltr')
        }.margin(5)
        Row(){
          Text('alignStyle:').width('17%')
          Button('Right').onClick(() => {
            this.currentalignStyle = IndexerAlign.Right
          }).backgroundColor(this.currentalignStyle == IndexerAlign.Right ? Color.Red : Color.Blue).key('Right').width('15%')
          Button('Left').onClick(() => {
            this.currentalignStyle = IndexerAlign.Left
          }).backgroundColor(this.currentalignStyle == IndexerAlign.Left ? Color.Red : Color.Blue).key('Left').width('15%')
          Button('Start').onClick(() => {
            this.currentalignStyle = IndexerAlign.START
          }).backgroundColor(this.currentalignStyle == IndexerAlign.START ? Color.Red : Color.Blue).key('Start').width('15%')
          Button('End').onClick(() => {
            this.currentalignStyle = IndexerAlign.END
          }).backgroundColor(this.currentalignStyle == IndexerAlign.END ? Color.Red : Color.Blue).key('End').width('15%')
          Button('Undefined').onClick(() => {
            this.currentalignStyle = undefined
          }).backgroundColor(this.currentalignStyle == undefined ? Color.Red : Color.Blue).key('Undefined').width('23%')
        }.margin(5)
        Row(){
          Button('折叠模式切换')
            .margin('5vp')
            .onClick(() => {
              this.isNeedAutoCollapse = !this.isNeedAutoCollapse;
            }).width('25%')
          Button('索引条高度降低(-)')
            .margin('5vp')
            .onClick(() => {

              if (this.indexerHeight >= 100) {
                this.indexerHeight -= 50

              }else {
                return
              }
            }).width('35%')
          Button('索引条高度增加(+)')
            .margin('5vp')
            .onClick(() => {
              if (this.indexerHeight < 500) {
                this.indexerHeight += 50
              }else {
                return
              }
            }).width('35%')
        }.margin(5)
        Row(){
          Button(`使用提示弹窗(${this.isUsingPopup})`).onClick(() => {
            this.isUsingPopup = !this.isUsingPopup
          }).backgroundColor(Color.Blue).width('32%')
          Text('选择模糊材质:').width('23%')
          Select([
            { value: 'Thin' },
            { value: 'Regular' },
            { value: 'Thick' },
            { value: 'BACKGROUND_THIN' },
            { value: 'BACKGROUND_REGULAR' },
            { value: 'BACKGROUND_THICK' },
            { value: 'BACKGROUND_ULTRA_THICK' },
            { value: 'COMPONENT_ULTRA_THIN' },
            { value: 'NONE' },
            { value: 'COMPONENT_THIN' },
            { value: 'COMPONENT_REGULAR' },
            { value: 'COMPONENT_THICK' },
            { value: 'COMPONENT_ULTRA_THICK' },
          ]).value('COMPONENT_REGULAR')
            .onSelect(( index: number, text?: string | undefined ) => {
              if (text == 'NONE') {
                this.popupBackgroundBlurStyle = BlurStyle.NONE
              }
              if (text == 'Thin') {
                this.popupBackgroundBlurStyle = BlurStyle.Thin
              }
              if (text == 'Regular') {
                this.popupBackgroundBlurStyle = BlurStyle.Regular
              }
              if (text == 'Thick') {
                this.popupBackgroundBlurStyle = BlurStyle.Thick
              }
              if (text == 'BACKGROUND_THIN') {
                this.popupBackgroundBlurStyle = BlurStyle.BACKGROUND_THIN
              }
              if (text == 'BACKGROUND_REGULAR') {
                this.popupBackgroundBlurStyle = BlurStyle.BACKGROUND_REGULAR
              }
              if (text == 'BACKGROUND_THICK') {
                this.popupBackgroundBlurStyle = BlurStyle.BACKGROUND_THICK
              }
              if (text == 'BACKGROUND_ULTRA_THICK') {
                this.popupBackgroundBlurStyle = BlurStyle.BACKGROUND_ULTRA_THICK
              }
              if (text == 'COMPONENT_ULTRA_THIN') {
                this.popupBackgroundBlurStyle = BlurStyle.COMPONENT_ULTRA_THIN
              }
              if (text == 'COMPONENT_THIN') {
                this.popupBackgroundBlurStyle = BlurStyle.COMPONENT_THIN
              }
              if (text == 'COMPONENT_REGULAR') {
                this.popupBackgroundBlurStyle = BlurStyle.COMPONENT_REGULAR
              }
              if (text == 'COMPONENT_THICK') {
                this.popupBackgroundBlurStyle = BlurStyle.COMPONENT_THICK
              }
              if (text == 'COMPONENT_ULTRA_THICK') {
                this.popupBackgroundBlurStyle = BlurStyle.COMPONENT_ULTRA_THICK
              }
            })
            .backgroundColor(Color.Green)
            .fontColor(Color.White)
            .selectedOptionBgColor(Color.Grey)
            .width('45%')
        }.margin(5)
        Stack({ alignContent: Alignment.Start }) { // 子组件在容器主轴上行布局
          Row() {
            List({ space: 20, initialIndex: 0 }) {
              ForEach(this.arrayA, (item: string) => {
                ListItem() {
                  Text(item)
                    .width('80%')
                    .height('5%')
                    .fontSize(30)
                    .textAlign(TextAlign.Center)
                }.direction(this.currentDirection)
              }, (item: string) => item)

              ForEach(this.arrayB, (item: string) => {
                ListItem() {
                  Text(item)
                    .width('80%')
                    .height('5%')
                    .fontSize(30)
                    .textAlign(TextAlign.Center)
                }.direction(this.currentDirection)
              }, (item: string) => item)

              ForEach(this.arrayC, (item: string) => {
                ListItem() {
                  Text(item)
                    .width('80%')
                    .height('5%')
                    .fontSize(30)
                    .textAlign(TextAlign.Center)
                }.direction(this.currentDirection)
              }, (item: string) => item)

              ForEach(this.arrayL, (item: string) => {
                ListItem() {
                  Text(item)
                    .width('80%')
                    .height('5%')
                    .fontSize(30)
                    .textAlign(TextAlign.Center)
                }.direction(this.currentDirection)
              }, (item: string) => item)
            }
            .direction(this.currentDirection)
            .width('50%')
            .height('100%')

            AlphabetIndexer({ arrayValue: this.value, selected: 0 })
              .autoCollapse(this.isNeedAutoCollapse)
              .height(this.indexerHeight)
              .direction(this.currentDirection)
              .selectedColor(0xFFFFFF) // 选中项文本颜色
              .popupColor(0xFFFAF0) // 弹出框文本颜色
              .selectedBackgroundColor(0xCCCCCC) // 选中项背景颜色
              .popupBackground(0xD2B48C) // 弹出框背景颜色
              .usingPopup(this.isUsingPopup) // 是否显示弹出框
              .selectedFont({ size: 16, weight: FontWeight.Bolder }) // 选中项字体样式
              .popupFont({ size: 30, weight: FontWeight.Bolder }) // 弹出框内容的字体样式
              .itemSize(28) // 每一项的尺寸大小
              // undefined/IndexerAlign.Right：弹出框在索引条左侧弹出  IndexerAlign.Left：弹出框在索引条左侧弹出
              .alignStyle(this.currentalignStyle) 
              .popupItemBorderRadius(24) // 设置提示弹窗索引项背板圆角半径
              .itemBorderRadius(14) // 设置索引项背板圆角半径
              .popupBackgroundBlurStyle(this.popupBackgroundBlurStyle) // 设置提示弹窗的背景模糊材质
              .popupTitleBackground(0xCCCCCC) // 设置提示弹窗首个索引项背板颜色
              .popupSelectedColor(0x00FF00)
              .popupUnselectedColor(0x0000FF)
              .popupItemFont({ size: 30, style: FontStyle.Normal })
              .popupItemBackgroundColor(0xCCCCCC)
              .onSelect((index: number) => {

                console.info(this.value[index] + ' Selected!')
              })
              .onRequestPopupData((index: number) => {
                if (this.value[index] == 'A') {
                  return this.arrayA // 当选中A时，弹出框里面的提示文本列表显示A对应的列表arrayA，选中B、C、L时也同样
                } else if (this.value[index] == 'B') {
                  return this.arrayB
                } else if (this.value[index] == 'C') {
                  return this.arrayC
                } else if (this.value[index] == 'L') {
                  return this.arrayL
                } else {
                  return [] // 选中其余子母项时，提示文本列表为空
                }
              })
              .onPopupSelect((index: number) => {
                console.info('onPopupSelected:' + index)
              })
              .key('AlphabetIndexer')
              .id('AlphabetIndexer')
          }.direction(this.currentDirection)
          .width('100%')
          .height('70%')
        }.direction(this.currentDirection)
        .backgroundColor(0xAFEEEE)
        .margin({
          top: LengthMetrics.vp(40),
          bottom: LengthMetrics.vp(20),
          start: LengthMetrics.vp(36),
          end: LengthMetrics.vp(36)
        }).padding({
          top: LengthMetrics.vp(40),
          bottom: LengthMetrics.vp(20),
          start: LengthMetrics.vp(36),
          end: LengthMetrics.vp(36)
        })
      }.direction(this.currentDirection)
      .key('Column')
      .id('Column')


    }
  }

}

