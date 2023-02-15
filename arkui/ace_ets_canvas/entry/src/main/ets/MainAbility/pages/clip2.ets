// @ts-nocheck
/**
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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
struct clip2Example {
  private scroller: Scroller = new Scroller();
  private settings: RenderingContextSettings = new RenderingContextSettings(true);
  private context: CanvasRenderingContext2D = new CanvasRenderingContext2D(this.settings);
  @State dataURL: string = undefined;
  build() {
    Flex({ direction: FlexDirection.Row, alignItems: ItemAlign.Start, justifyContent: FlexAlign.Start }) {
      Scroll(this.scroller) {
        Column() {
          Canvas(this.context)
            .width('100%')
            .height('100%')
            .backgroundColor('#ffff00')
            .onReady(() => {
              let region = new Path2D()
              region.rect(80,10,20,130)
              region.rect(40,50,100,50)
              this.context.clip(region,"evenodd")
              this.context.fillStyle = "rgb(255,0,0)"
              this.context.fillRect(0, 0, this.context.width, this.context.height)
              this.dataURL = this.context.toDataURL().substring(0,970)
              globalThis.dataURL2 = this.dataURL;
              console.log("LANYI,the clip2 dataurl is ",this.dataURL);
            })
            .key('clip2')
        }.width('100%').height('350%')
      }.scrollable(ScrollDirection.Vertical).scrollBar(BarState.On)
      .scrollBarColor(Color.Gray).scrollBarWidth(10)
    }
    .width('100%')
    .height('100%')
  }
}