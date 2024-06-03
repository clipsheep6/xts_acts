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
struct MarqueeHorseRace6 {
  build() {
    Column({ space: 10 }) {
      Text("-----------------------我是一个长文本默认属性==================")
        .key('Marquee6')
        .textOverflow({ overflow: TextOverflow.MARQUEE })
        .border({ width: 1 })
        .maxLines(1)
        .decoration({ type: TextDecorationType.Underline, color: "#f00" })
        .marqueeOptions({
          start: true,
          step: 5000000000000000000,
          loop: 7.35,
          fromStart: true,
          delay: 5000000000,
          marqueeStartPolicy: MarqueeStartPolicy.DEFAULT,
          fadeout: false
        })
    }
    .justifyContent(FlexAlign.Center)
    .alignItems(HorizontalAlign.Center)
    .width("100%")
    .height("100%")
  }
}