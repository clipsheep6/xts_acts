/**
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
@Entry
@Component
struct MarqueeHorseRace {
  @State start: boolean = true;
  @State mar_start: string = "";
  @State mar_finish: string = "";
  @State mar_bounce: string = "";

  build() {
    Column({ space: 10 }) {
      Text("我是一个长文本默认属性长文本默认属性的13213243215431543265432653246尾部尾部")
        .key('Marquee')
        .textOverflow({ overflow: TextOverflow.MARQUEE })
        .border({ width: 1 })
        .height(30)
        .marqueeOptions({
          start: this.start,
          step: 9,
          loop: 2,
          fromStart: true,
          delay: 1000,
          marqueeStartPolicy: MarqueeStartPolicy.DEFAULT,
          fadeout: true

        })
        .onMarqueeStateChange((state: MarqueeState) => {
          if (state == MarqueeState.START) {
            this.mar_start = 'MarqueeState.START'
          } else if (state == MarqueeState.BOUNCE) {
            this.mar_bounce = 'MarqueeState.BOUNCE'
            this.start = false
          } else if (state == MarqueeState.FINISH) {
            this.mar_finish = 'MarqueeState.FINISH'
          }
        })
      Text('' + this.mar_start).key('text_start')
      Text('' + this.mar_bounce).key('text_bounce')
      Text('' + this.mar_finish).key('text_finsh')

    }
    .justifyContent(FlexAlign.Center)
    .alignItems(HorizontalAlign.Center)
    .width("100%")
    .height("100%")
  }
}