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
 
import commonEvent from '@ohos.commonEvent'
let formIdA;
@Entry
@Component
struct Index{
  @StorageLink('action') action: boolean = false;
  @StorageLink('bundleName') bundleName: string = "com.example.inapploadcard";
  @StorageLink('abilityName') abilityName: string = "FormAbility";
  @StorageLink('moduleName') moduleName: string = "entry";
  @StorageLink('formName') formName: string = "widget";
  @StorageLink('dimension') dimension: FormDimension = FormDimension.Dimension_2_2;
  @State message: string = 'Load CardA'

  build() {
    Row() {
      Column() {
        Text(this.message)
          .fontSize(50)
          .fontWeight(FontWeight.Bold)
        Row(){
          Column(){
            FormComponent({
              id: 0,
              name:this.formName,
              bundle: this.bundleName,
              ability: this.abilityName,
              module: this.moduleName,
              dimension: this.dimension,
              temporary: false
            })
              .allowUpdate(true)
              .visibility(Visibility.Visible)
              .onAcquired((form) => {
                formIdA = form.id;
                console.log("ACTS_InAppLoadCard ====> formIdA: "+ formIdA)
                console.log("ACTS_InAppLoadCard ====> action: "+ this.action)
                if(this.action){
                  let parameter = {
                      bundleName: "com.example.inapploadcard",
                      abilityName: "MainAbility1",
                      parameters:{"fromId": formIdA}
                  }
                  globalThis.abilityContext.startAbility(parameter,((err,data)=>{
                    console.log("ACTS_InAppLoadCard_0200 ====> startAbility index, err: "+JSON.stringify(err))
                    console.log("ACTS_InAppLoadCard_0200 ====> startAbility index, data:"+JSON.stringify(data))
                  }))
                }
                else{
                  let commonEventData = {
                    parameters: {
                      "formId": form.id
                    }
                  };
                  commonEvent.publish("ACTS_FormIdA",commonEventData,(err,data)=>{
                    console.log('ACTS_InAppLoadCard_0100 ====>publish:data:' + JSON.stringify(data));
                    console.log('ACTS_InAppLoadCard_0100 ====>publish:err:' + JSON.stringify(err));
                  })
                }
              })
              .onError((err) => {
                console.log('ACTS_InAppLoadCard_0100 failed to add form, err:'+ JSON.stringify(err));
              })
              .size({ width: 350, height: 175 })
              .margin({ top: '5%' })
          }
        }
        .width('100%')
        .height('30%')

      }
      .width('100%')
    }
    .height('100%')
  }
}