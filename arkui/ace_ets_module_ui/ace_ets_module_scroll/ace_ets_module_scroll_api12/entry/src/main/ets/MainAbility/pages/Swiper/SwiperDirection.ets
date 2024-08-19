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
// xxx.ets
class MyDataSource implements IDataSource {
  private list: number[] = []

  constructor(list: number[]) {
    this.list = list
  }

  totalCount(): number {
    return this.list.length
  }

  getData(index: number): number {
    return this.list[index]
  }

  registerDataChangeListener(listener: DataChangeListener): void {
  }

  unregisterDataChangeListener() {
  }
}

@Entry
@Component
struct SwiperDirection {
  private swiperController: SwiperController = new SwiperController();
  private data: MyDataSource = new MyDataSource([]);
  @State currentDirection?: Direction = Direction.Auto;

  aboutToAppear(): void {
    let list: number[] = []
    for (let i = 1; i <= 10; i++) {
      list.push(i);
    }
    this.data = new MyDataSource(list)
  }

  build() {
    Column({ space: 5 }) {
      Row(){
        Text('direction:').width('30%')
        Button('Auto').onClick(() => {
          this.currentDirection = Direction.Auto
        }).backgroundColor(this.currentDirection == Direction.Auto ? Color.Red : Color.Blue).key('Auto').id('Auto')
        Button('Rtl').onClick(() => {
          this.currentDirection = Direction.Rtl
        }).backgroundColor(this.currentDirection == Direction.Rtl ? Color.Red : Color.Blue).key('Rtl').id('Rtl')
        Button('Ltr').onClick(() => {
          this.currentDirection = Direction.Ltr
        }).backgroundColor(this.currentDirection == Direction.Ltr ? Color.Red : Color.Blue).key('Ltr').id('Ltr')
        Button('Undefined').onClick(() => {
          this.currentDirection = undefined
        }).backgroundColor(this.currentDirection == undefined ? Color.Red : Color.Blue).key('Undefined').id('Undefined')
      }.margin(5)
      Swiper(this.swiperController) {
        LazyForEach(this.data, (item: string) => {
          Text('第'+item.toString()+'页')
            .width('90%')
            .height(160)
            .backgroundColor(0xAFEEEE)
            .textAlign(TextAlign.Center)
            .fontSize(30)
        }, (item: string) => item)
      }
      .direction(this.currentDirection)
      .cachedCount(2)
      .index(1)
      .autoPlay(false)
      .interval(4000)
      .indicator(Indicator.digit() // 设置数字导航点样式
        .right('43%')
        .top(200)
        .fontColor(Color.Gray)
        .selectedFontColor(Color.Gray)
        .digitFont({ size: 20, weight: FontWeight.Bold })
        .selectedDigitFont({ size: 20, weight: FontWeight.Normal }))
      .loop(false)
      .duration(1000)
      .itemSpace(0)
      .displayArrow(true, false)
      .key('Swiper')
      .id('Swiper')

      Row({ space: 12 }) {
        Button('showNext')
          .onClick(() => {
            this.swiperController.showNext()
          })
          .key('showNext')
          .id('showNext')
        Button('showPrevious')
          .onClick(() => {
            this.swiperController.showPrevious()
          })
          .key('showPrevious')
          .id('showPrevious')
      }.margin(5)
    }.width('100%')
    .margin({ top: 5 })
  }
}