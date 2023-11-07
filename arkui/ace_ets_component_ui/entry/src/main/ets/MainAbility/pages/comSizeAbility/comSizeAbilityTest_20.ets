/**
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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
import windowAnimationManager from '@ohos.animation.windowAnimationManager';
import WindowAnimationControllerImpl from './WindowAnimationControllerImpl';
import matrix4 from '@ohos.matrix4'
let matrix = matrix4.init([1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0])
@Entry
@Component
struct comSizeAbilityTest_20 {
  @State formId:number = 0;
build() {
    Scroll(){
      Column({ space: 20 }) {

          // FormComponent 组件 实现卡片功能
//         Column() {
//           FormComponent({
//             id:this.formId,
//             name:"Form1",
//             bundle:"com.example.cardexample",
//             ability:"FormAbility",
//             module:"entry",
//             dimension:FormDimension.Dimension_2_2,
//             temporary:false
//           })
//             .allowUpdate(true)
//             .size({width:360,height:360})
//             .visibility(Visibility.Visible)
//             .onAcquired((form)=>{
//               console.log(`form info : ${JSON.stringify(form)}`);
//               this.formId = form.id;
//             })
//             .size({ width: 360, height: 360 }).backgroundColor(0XBDDB69)
//             .key("FormComponent_Size")
//         }.width('100%')

        // FormLink 组件 静态卡片交互
        Column(){
          // router事件用于静态卡片跳转到对应的UIAbility
          FormLink({
            action: "router",
            abilityName: "EntryAbility",
            params: {
              'message': 'testForRouter' // 自定义要发送的message
            }
          }) {
            Button("跳转路由").width(120)
          }
          .key("FormLink_Size")
          .backgroundColor(0XBDDB69)
          .size({ width: 200, height: 100})
          // .offset({ x: 1, y: 1 })
          .translate({ x: 1, y: 1, z: 1 })
          .scale({ x: 1, y: 1, z: 1, centerX: 1, centerY: 1 })
          .rotate({ x: 1, y: 1, z: 1, angle: 0, centerX: 1, centerY: 1 })
          .transform(matrix)
        }.key('FormLink_Father')

      }.width('100%')
    }.height('100%')
  }
}


