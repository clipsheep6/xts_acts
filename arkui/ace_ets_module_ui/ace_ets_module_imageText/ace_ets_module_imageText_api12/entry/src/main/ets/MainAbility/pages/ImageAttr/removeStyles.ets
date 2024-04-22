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
import { LengthMetrics, LengthUnit } from '@ohos.arkui.node'
import promptAction from '@ohos.promptAction';
@Entry
@Component
struct styled_string_demo1 {
  @State height1:number = 450;
  @State fontSize1:number = 16;
  @State fontWeight1:number = 400;
  @State color1:Color = Color.Blue;


  scroll: Scroller = new Scroller();
  fontStyleAttr1:TextStyle = new TextStyle({fontColor:Color.Blue});
  fontStyleAttr2:StyledStringValue = new TextStyle({fontColor:Color.Orange});

  clickGestureAttr: GestureStyle = new GestureStyle({
    onClick: () => {
      promptAction.showToast({ message: 'clickGestureAttr object trigger click event' })
      this.backgroundColor1 = Color.Yellow
    }
  })
  // 创建可读写属性字符串的对象mutableStyledString1
  // 创建构造入参有字符串和样式的对象mutableStyledString2
  mutableStyledString2: MutableStyledString = new MutableStyledString("test hello world",
    [{
      start: 0,
      length: 5,
      styledKey: StyledStringKey.GESTURE,
      styledValue: this.clickGestureAttr
    }, {
      start: 0,
      length: 5,
      styledKey: StyledStringKey.DECORATION,
      styledValue: new DecorationStyle({ type: TextDecorationType.LineThrough, color: Color.Blue })
    }, {
      start: 0,
      length: 5,
      styledKey: StyledStringKey.TEXT_SHADOW,
      styledValue: new TextShadowStyle({
        radius: 5,
        type: ShadowType.COLOR,
        color: Color.Yellow,
        offsetX: 10,
        offsetY: -10
      })
    }, {
      start: 6,
      length: 5,
      styledKey: StyledStringKey.BASELINE_OFFSET,
      styledValue: new BaselineOffsetStyle(LengthMetrics.fp(10))
    }, {
      start: 0,
      length: 5,
      styledKey: StyledStringKey.LETTER_SPACING,
      styledValue: new LetterSpacingStyle(new LengthMetrics(10, LengthUnit.VP))
    }
    ]);
  // 创建只读属性字符串对象styledString2
  styledString2: StyledString = new StyledString("运动45分钟");
  spanStyle1:SpanStyle = {start:0, length:5, styledKey:StyledStringKey.FONT, styledValue: new TextStyle({ fontColor:Color.Pink})};
  spanStyle2:SpanStyle = { start:0, length:2, styledKey:StyledStringKey.FONT, styledValue: new TextStyle({fontColor:Color.Red})};
  @State string1:string = '';
  @State fontColor1:ResourceColor = Color.Red;
  @State length: number = 0
  @State backgroundColor1: ResourceColor | undefined = undefined;

  build(){
    Column(){
      Scroll(this.scroll){
        Column(){
          // 显示属性字符串
          Text(this.styledString2)
          Text(this.mutableStyledString2).key('mutableStyledString2')
          Text('' + this.length).id('lengthId')


          // 以上冲突测试对照组
          Text(){
            Span(this.string1)
              .fontColor(this.color1)
              .decoration({type:TextDecorationType.LineThrough})
            ImageSpan($r('app.media.icon'))
              .width(50).height(50)
          }
          .letterSpacing(10)
          .fontSize(32)
          .fontWeight(600)
          .fontStyle(FontStyle.Italic)
          .lineHeight(30)
          .textShadow({radius:5, color:Color.Blue, offsetX: 5, offsetY:5})
          .textCase(TextCase.UpperCase)
          .decoration({type:TextDecorationType.LineThrough, color: Color.Yellow})
          .baselineOffset(2)

          Button('初始长度')
            .onClick(() => {
              let styles = this.mutableStyledString2.getStyles(0,this.mutableStyledString2.length)
              this.length = styles.length
            }).id('firstLength')
            .margin({top: 30})

          Button('removeString掉6,5').id('endLength')
            .onClick(() => {
              this.mutableStyledString2.removeStyles(6, 5);
              let styles = this.mutableStyledString2.getStyles(0,this.mutableStyledString2.length)
              this.length = styles.length
            })
            .margin({top: 30})

        }.width('100%')

      }.expandSafeArea([SafeAreaType.KEYBOARD])
      .scrollable(ScrollDirection.Vertical)
      .scrollBar(BarState.On)
      .scrollBarColor(Color.Gray)
      .scrollBarWidth(10)
      .edgeEffect(EdgeEffect.None)
    }
    .width('100%')
  }
}