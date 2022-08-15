/*
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
 
// @ts-nocheck
import router from '@system.router'

var paramInfo = router.getParams()
console.info("cd paramInfo" + JSON.stringify(paramInfo))

@Entry
@Component
struct text_case {
  @State textAlign: TextAlign= TextAlign.End
  @State lineHeight: string= '15fp'
  @State overflow: TextOverflow = TextOverflow.Ellipsis
  @State maxLines: number = 2
  @State baselineOffset: number = 0
  @State textCase: TextCase= TextCase.Normal
  @State color: Color = Color.Red
  @State width: string= "200"
  @State height: string= "100"
  @State size: size = { width: 200, height: 100 }
  @State marginBottom: string = "10px"
  @State marginTop: string = "10px"
  @State marginLeft: string = "10px"
  @State marginRingt: string= "10px"
  @State paddingBottom: string= "5"
  @State paddingTop: string= "5"
  @State paddingLeft: string= "5"
  @State paddingRingt: string= "5"
  @State constraintSize: constraintSize = { minWidth: 20, maxWidth: 200, minHeight: 0, maxHeight: 50 }
  @State layoutPriority: string= "9px"
  @State layoutWeight: string = "10px"
  @State align: Alignment = Alignment.Center
  @State direction: Direction = Direction.Auto
  @State backgroundImageSize: ImageSize = ImageSize.Cover
  @State backgroundImagePosition: Alignment= Alignment.Center
  @State backgroundBlurStyle: BlurStyle= BlurStyle.Thin
  @State opacity: number= 1
  private content: string = "Text Page";

  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
      Text('Text Anto test,Text Anto test,Text Anto test')
        .fontSize(13)
        .align(Alignment.BottomStart)
        .width('100%')
        .key('Text8')

    }
    .key('flex')
    .width('100%')
    .height('100%')
  }
}


