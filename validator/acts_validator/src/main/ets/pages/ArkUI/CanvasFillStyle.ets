/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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
import data_preferences from '@ohos.data.preferences';
import {CustomContainer} from '../common/CanvasCustomContainer1'
@Entry
@Component
struct SetCircle {
  private settings: RenderingContextSettings = new RenderingContextSettings(true);
  private context: CanvasRenderingContext2D = new CanvasRenderingContext2D(this.settings);
  @State FillColor: string = '#FF000000';
  @State name: string = 'CanvasFillStyle';
  @State StepTips: string = '操作步骤：点击不同的颜色控件'+'\n'+'预期结果：原本默认黑色的填色区域会随点击变化';
  async aboutToAppear(){
    let context =null;
    context = globalThis.getContext();
    let preferences;
    try{
      let promise = data_preferences.getPreferences(context,'mystore');
      await promise.then((object) => {
        preferences = object;
      }).catch((err) => {

      })

    }
    catch(err){

    }
    try {
      let promise = preferences.has(this.name);
      await promise.then((val) => {
        if (val) {
          console.info("The key 'test' is contained.");
        } else {
          console.info("The key 'test' dose not contain.");
        }
      }).catch((err) => {
        console.info("Failed to check the key 'test'. code =" + err.code + ", message =" + err.message);
      })
    } catch(err) {
      await preferences.put(this.name, 0 , function (err) {
        if (err) {
          console.info("Failed to put value of 'startup'. code =" + err.code + ", message =" + err.message);
          return;
        }
        console.info("Succeeded in putting value of 'test'.");
      })
    }

    let Test = 0;
    let promise = preferences.get(this.name, 0);
    await promise.then((data) => {
      Test = data;
      console.info("Succeeded in getting value of 'startup'. Data: " + data);
    }).catch((err) => {
      console.info("Failed to get value of 'startup'. code =" + err.code + ", message =" + err.message);
    })

    if(Test != 1) {
      AlertDialog.show(
        {
          title: '操作提示',
          message: this.StepTips,
          primaryButton: {
            value: '不再提醒',fontColor:Color.Grey,
            action: () => {
              try {
                let promise = preferences.put(this.name, 1);
                promise.then(() => {
                  console.info("Succeeded in putting value of 'test'.");
                }).catch((err) => {
                  console.info("Failed to put value of 'test'. code =" + err.code +", message =" + err.message);
                })
              } catch(err) {
                console.info("Failed to put value of 'test'. code =" + err.code +", message =" + err.message);
              }
              try {
                let promise = preferences.flush();
                promise.then(() => {
                  console.info("Succeeded in flushing.");
                }).catch((err) => {
                  console.info("Failed to flush. code =" + err.code + ", message =" + err.message);
                })
              } catch (err) {
                console.info("Failed to flush. code =" + err.code + ", message =" + err.message);
              }
            }
          },
          secondaryButton: {
            value: '我已知晓',
            action: () => {

            }
          },
          cancel: () => {

          }
        }
      )
    }
    return
  }
  @Builder specificNoParam() {
    Column() {
      Flex({ direction: FlexDirection.Row, alignItems: ItemAlign.Center, justifyContent: FlexAlign.SpaceBetween }){
        Text('Red').fontSize(16).border({width:2}).size({width:'25%',height:'20%'})
          .onClick(()=>{
            this.context.clearRect(100, 160, 150, 100)
            this.FillColor = '#FFFF0000'
            this.context.fillStyle = this.FillColor
            this.context.fillRect(100, 160, 150, 100)
          })
        Text('Yellow').fontSize(16).border({width:2}).size({width:'25%',height:'20%'})
          .onClick(()=>{
            this.context.clearRect(100, 160, 150, 100)
            this.FillColor = '#fffffc3c'
            this.context.fillStyle = this.FillColor
            this.context.fillRect(100, 160, 150, 100)
          })
        Text('Green').fontSize(16).border({width:2}).size({width:'25%',height:'20%'})
          .onClick(()=>{
            this.context.clearRect(100, 160, 150, 100)
            this.FillColor = '#ff19fa00'
            this.context.fillStyle = this.FillColor
            this.context.fillRect(100, 160, 150, 100)
          })
      }.width('70%').height('30%')
      Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
        Canvas(this.context)
          .width('100%')
          .height('100%')
          .backgroundColor('#ffffffff')
          .onReady(() =>{
            this.context.fillStyle = this.FillColor
            this.context.fillRect(100, 160, 150, 100)
          })
      }.width('100%').height('70%')
    }.width('100%').height('80%').backgroundColor(Color.White)
  }
  build() {
    Column() {
      CustomContainer({
        title: this.name,
        Url:'pages/ArkUI/ArkUI_index',
        StepTips:this.StepTips,
        content: this.specificNoParam,
        FillColor:$FillColor,
        name:$name
      })
    }.width('100%').height('100%').backgroundColor(Color.Black)
  }
}

