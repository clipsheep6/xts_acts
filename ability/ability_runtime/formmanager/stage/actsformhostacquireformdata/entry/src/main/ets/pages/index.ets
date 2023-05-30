/*
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
import formHost from '@ohos.app.form.formHost';
import commonEvent from '@ohos.commonEvent';

let commonEventData = {
  parameters: {
    formId: 0
  }
}

@Entry
@Component
struct Index {
  @State formId: number = 0;
  @State bundle: string = "com.example.acquireformdatatest";
  @State ability: string = "MainAbility";
  @State moduleName: string = "entry";
  @State name: string = "acquireFormData";
  @State allowUpate: boolean = true;
  @State isShowing: boolean = true;
  @State canCreateForm: boolean = false;

  private dimension: FormDimension = FormDimension.Dimension_2_2;
  private temporary = false;

  build() {
      Column() {
        Text('form component test begin')
        Column() {
          if (this.canCreateForm) {
            FormComponent({
            id: this.formId,
            name: this.name,
            bundle: this.bundle,
            ability: this.ability,
            module: this.moduleName,
            dimension: this.dimension,
            temporary: this.temporary,
          })
            .size({width:360,height:360})
            .allowUpdate(this.allowUpate)
            .visibility(this.isShowing ? Visibility.Visible : Visibility.Hidden)
            .onAcquired((form) => {
              console.log("[FormComponent.host] get form, form id:" + form.id);
              commonEventData.parameters.formId = form.id;
              commonEvent.publish("FMS_FORM_ACQUIRE_DATA_commonEvent", commonEventData, (err) => {
                console.log('======>FormMgrService FormId:' + commonEventData.parameters.formId)
                setTimeout(()=>{
                  globalThis.abilitycontext.terminateSelf()
                },5000)
              })
            })
            .onError((error) => {
              console.log("[FormComponent.host] error code:" + error.errcode);
              console.log("[FormComponent.host] error msg:" + error.msg);
            })
          }
        }
        .backgroundColor(Color.White)
        Text('form component test end')
      }
      .backgroundColor(Color.White)
  }
}