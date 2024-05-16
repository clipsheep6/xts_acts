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
import events_emitter from '@ohos.events.emitter'

// xxx.ets
@Entry
@Component
struct SearchXts {
  @State changeValue: string = 'Search组件测试'
  @State text1: string = ''
  // @State start: number = 0
  // @State end: number = 0
  controller: SearchController = new SearchController()
  private scroller: Scroller = new Scroller()

  build() {
    Scroll(this.scroller) {
      Column() {
        Search({
          value: this.changeValue,
          placeholder: 'Type to search...',
          controller: this.controller
        })
          .key('key_search_inputFilter')
          .inputFilter('2')
          .width('95%')
          .height(50)
          .backgroundColor('#F5F5F5F5')
          .placeholderColor(Color.Grey)
          .placeholderFont({ size: 16, weight: 400 })
          .textFont({ size: 16, weight: 400 })
          .border({ width: 1 })
          .margin(20)

        Search({
          value: this.changeValue,
          placeholder: 'Type to search...',
          controller: this.controller
        })
        .key('key_search_selectedBackgroundColor')
        .selectedBackgroundColor('#F5F5F5F5')
        .width('95%')
        .height(50)
        .backgroundColor('#F5F5F5')
        .placeholderColor(Color.Grey)
        .placeholderFont({ size: 16, weight: 400 })
        .textFont({ size: 16, weight: 400 })
        .border({ width: 1 })
        .margin(20)

        Search({
          value: this.changeValue,
          placeholder: 'Type to search...',
          controller: this.controller
        })
         
          .key('key_search_textIndent')
          .textIndent(`${5}vp`)
          .width('95%')
          .height(50)
          .backgroundColor('#F5F5F5F5')
          .placeholderColor(Color.Grey)
          .placeholderFont({ size: 16, weight: 400 })
          .textFont({ size: 16, weight: 400 })
          .border({ width: 1 })
          .margin(20)
        Search({
          value: this.changeValue,
          placeholder: 'Type to search...',
          controller: this.controller
        })
          .id('key_search_onEditChange')
          .onEditChange((isEditing: boolean) => {
            console.info("SearchXtsTest_0105 start to emit onEditChange")
            this.text1 = 'onEditChange'
          })
          .width('95%')
          .height(50)
          .backgroundColor('#F5F5F5')
          .placeholderColor(Color.Grey)
          .placeholderFont({ size: 16, weight: 400 })
          .textFont({ size: 16, weight: 400 })
          .border({ width: 1 })
          .margin(20)
        Text('' + this.text1).key("key_search_onEditChange_text1")
        // Text('' + this.start).key("key_search_setTextSelection_start")
        // Text('' + this.end).key("key_search_setTextSelection_end")
        //
        // Button('更换文本选择区域')
        //   .id('key_search_setTextSelection')
        //   .onClick(() => { // 这里
        //     this.controller.setTextSelection(2, 15)
        //     console.info("SearchXtsTest_0106 start to emit setTextSelection")
        //     this.start =  2
        //     this.end =  15
        //   })
        //   .width('100%')
      }
      .width('100%')
      .padding({ top: 5 })
    }
    .scrollable(ScrollDirection.Vertical) // 滚动方向纵向
    .scrollBar(BarState.On) // 滚动条常驻显示
    .scrollBarColor(Color.Gray) // 滚动条颜色
    .scrollBarWidth(10) // 滚动条宽度
    .friction(0.6)
    .edgeEffect(EdgeEffect.Fade)
  }
}
