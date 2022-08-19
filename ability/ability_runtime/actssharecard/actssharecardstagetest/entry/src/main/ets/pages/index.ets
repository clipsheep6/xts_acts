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
let formId;
let commonEventData = {
  parameters: {
    formId:formId
  }
}

@Entry
@Component
struct Index {
  @State message: string = 'Hello World'

  build() {
    Row() {
      Column() {
        Text(this.message)
          .fontSize(50)
          .fontWeight(FontWeight.Bold)
        FormComponent({
                id: 0,
                name: "widget",
                bundle: "com.example.sharecardexceptionparameterstagetest",
                ability: "FormAbility",
                module: "entry",
                dimension: FormDimension.Dimension_2_4,
                temporary: false
              })
                .allowUpdate(true)
                .visibility(Visibility.Visible)
                .onAcquired((form) => {
                  console.log(`[FormMgrService]form info:` + JSON.stringify(form));
                  commonEventData.parameters.formId= form.id;
                  commonEvent.publish("FMS_SHARE_FROM_CommonEvent", commonEventData, (err) => {
                    console.log('======>FormMgrService FormId:'+commonEventData.parameters.formId)
                    setTimeout(()=>{
                      globalThis.abilityContext.terminateSelf()
                    },5000)
                  })
                })
                .onError((err) => {
                  console.log(`[FormMgrService]failed to add form, err:` + JSON.stringify(err));
                })
                .size({ width: 400, height: 200 })
                .margin({ top: '5%' })
      }
      .width('100%')
    }
    .height('100%')
  }
}