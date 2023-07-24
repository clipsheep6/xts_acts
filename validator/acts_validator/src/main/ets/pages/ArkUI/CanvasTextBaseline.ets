/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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
<<<<<<< HEAD
=======
import router from '@ohos.router';
>>>>>>> hw/master
import {CustomContainer} from '../common/CanvasCustomContainer1';
import FirstDialog from '../model/FirstDialog';
@Entry
@Component
struct SetCircle {
  private settings: RenderingContextSettings = new RenderingContextSettings(true);
  private context: CanvasRenderingContext2D = new CanvasRenderingContext2D(this.settings);
  @State FillColor: string = '#FF000000';
  @State name: string = 'CanvasTextBaseline';
  @State StepTips: string = '操作步骤：点击不同的水平对齐方式'+'\n'+'预期结果：原本默认水平对齐方式会随点击变化';
<<<<<<< HEAD
=======
  @State Vue: boolean = false;
  @State num1: number = 0;
  @State num2: number = 0;
  @State num3: number = 0;
  @State num4: number = 0;
  @State num5: number = 0;
>>>>>>> hw/master
  async aboutToAppear(){
    await FirstDialog.ChooseDialog(this.StepTips,this.name);
  }
  @Builder specificNoParam() {
    Column() {
      Flex({ direction: FlexDirection.Row, alignItems: ItemAlign.Center, justifyContent: FlexAlign.SpaceBetween }){
        Text('Top').fontSize(13).border({width:2}).size({width:'18%',height:'20%'})
          .onClick(()=>{
<<<<<<< HEAD
            this.context.clearRect(0, 10, 350, 300);
=======
            this.context.clearRect(0, 10, 500, 500);
>>>>>>> hw/master
            this.context.strokeStyle = '#0000ff';
            this.context.lineWidth = 2;
            this.context.moveTo(0, 120);
            this.context.lineTo(400, 120);
            this.context.stroke();
<<<<<<< HEAD
            this.context.textBaseline = 'top';
            this.context.fillText('Top', 160, 120);
          })
        Text('Bottom').fontSize(13).border({width:2}).size({width:'18%',height:'20%'})
          .onClick(()=>{
            this.context.clearRect(0, 10, 350, 300);
=======
            this.context.font = '60px sans-serif';
            this.context.textBaseline = 'top';
            this.context.fillText('Top', 160, 120);
            this.num1 = 1;
            if ( this.num1 == 1 && this.num2 == 1 && this.num3 == 1 && this.num4 == 1 && this.num5 == 1 ){
              this.Vue = true;
            }
          })
        Text('Bottom').fontSize(13).border({width:2}).size({width:'18%',height:'20%'})
          .onClick(()=>{
            this.context.clearRect(0, 10, 500, 500);
>>>>>>> hw/master
            this.context.strokeStyle = '#0000ff';
            this.context.lineWidth = 2;
            this.context.moveTo(0, 120);
            this.context.lineTo(400, 120);
            this.context.stroke();
            this.context.textBaseline = 'bottom';
            this.context.fillText('Bottom', 160, 120);
<<<<<<< HEAD
          })
        Text('Middle').fontSize(13).border({width:2}).size({width:'18%',height:'20%'})
          .onClick(()=>{
            this.context.clearRect(0, 10, 350, 300);
=======
            this.num2 = 1;
            if ( this.num1 == 1 && this.num2 == 1 && this.num3 == 1 && this.num4 == 1 && this.num5 == 1 ){
              this.Vue = true;
            }
          })
        Text('Middle').fontSize(13).border({width:2}).size({width:'18%',height:'20%'})
          .onClick(()=>{
            this.context.clearRect(0, 10, 500, 500);
>>>>>>> hw/master
            this.context.strokeStyle = '#0000ff';
            this.context.lineWidth = 2;
            this.context.moveTo(0, 120);
            this.context.lineTo(400, 120);
            this.context.stroke();
            this.context.textBaseline = 'middle';
            this.context.fillText('Middle', 160, 120);
<<<<<<< HEAD
          })
        Text('Alphabetic').fontSize(13).border({width:2}).size({width:'18%',height:'20%'})
          .onClick(()=>{
            this.context.clearRect(0, 10, 350, 300);
=======
            this.num3 = 1;
            if ( this.num1 == 1 && this.num2 == 1 && this.num3 == 1 && this.num4 == 1 && this.num5 == 1 ){
              this.Vue = true;
            }
          })
        Text('Alphabetic').fontSize(13).border({width:2}).size({width:'18%',height:'20%'})
          .onClick(()=>{
            this.context.clearRect(0, 10, 500, 500);
>>>>>>> hw/master
            this.context.strokeStyle = '#0000ff';
            this.context.lineWidth = 2;
            this.context.moveTo(0, 120);
            this.context.lineTo(400, 120);
            this.context.stroke();
            this.context.textBaseline = 'alphabetic';
            this.context.fillText('Alphabetic', 160, 120);
<<<<<<< HEAD
          })
        Text('Hanging').fontSize(13).border({width:2}).size({width:'18%',height:'20%'})
          .onClick(()=> {
            this.context.clearRect(0, 10, 350, 300);
=======
            this.num4 = 1;
            if ( this.num1 == 1 && this.num2 == 1 && this.num3 == 1 && this.num4 == 1 && this.num5 == 1 ){
              this.Vue = true;
            }
          })
        Text('Hanging').fontSize(13).border({width:2}).size({width:'18%',height:'20%'})
          .onClick(()=> {
            this.context.clearRect(0, 10, 500, 500);
>>>>>>> hw/master
            this.context.strokeStyle = '#0000ff';
            this.context.lineWidth = 2;
            this.context.moveTo(0, 120);
            this.context.lineTo(400, 120);
            this.context.stroke();
            this.context.textBaseline = 'hanging';
            this.context.fillText('Hanging', 160, 120);
<<<<<<< HEAD
=======
            this.num5 = 1;
            if ( this.num1 == 1 && this.num2 == 1 && this.num3 == 1 && this.num4 == 1 && this.num5 == 1 ){
              this.Vue = true;
            }
>>>>>>> hw/master
          })
      }.width('90%').height('30%')
      Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
        Canvas(this.context)
          .width('100%')
          .height('100%')
          .backgroundColor('#ffffffff')
          .onReady(() =>{
            this.context.strokeStyle = '#0000ff';
            this.context.lineWidth = 2;
            this.context.moveTo(0, 120);
<<<<<<< HEAD
            this.context.lineTo(400, 120);
            this.context.stroke();
            this.context.font = '60px sans-serif';
            this.context.textBaseline = 'top';
            this.context.fillText('Top', 160, 120);
=======
            this.context.lineTo(500, 120);
            this.context.stroke();
>>>>>>> hw/master
          })
      }.width('100%').height('70%')
    }.width('100%').height('80%').backgroundColor(Color.White)
  }
  build() {
    Column() {
      CustomContainer({
        title: this.name,
<<<<<<< HEAD
        Url:'pages/ArkUI/ArkUI_index',
        StepTips:this.StepTips,
        content: this.specificNoParam,
        FillColor:$FillColor,
        name:$name
      })
    }.width('100%').height('100%').backgroundColor(Color.Black)
  }
=======
        Url: 'pages/ArkUI/ArkUI_index',
        StepTips: this.StepTips,
        content: this.specificNoParam,
        FillColor: $FillColor,
        name: $name,
        Vue: $Vue,
      })
    }.width('100%').height('100%').backgroundColor(Color.Black)
  }
  onBackPress(){
    router.replaceUrl({
      url:'pages/ArkUI/ArkUI_index',
    })
  }
>>>>>>> hw/master
}
