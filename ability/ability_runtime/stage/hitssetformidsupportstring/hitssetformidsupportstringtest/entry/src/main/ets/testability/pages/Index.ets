/*
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

import formHost from '@ohos.app.form.formHost';

@Entry
@Component
struct TestIndex {
  @State message: string = 'Hello World'
  @State fullFormID: string = '';
  @State showStrForm: boolean = false;
  @State showStrTwoForm: Boolean = false;
  @State showEmptyForm: Boolean = false;
  @State showNullForm: Boolean = false;
  @State showUndefineForm: Boolean = false;
  @State showNumberForm: Boolean = false;
  @State showSingleForm: Boolean = false;
  @State showForm: Boolean = false;
  @State showBigNumForm: Boolean = false;
  @State showFormCardNull: Boolean = false;
  @State showFormCardUndefine: Boolean = false;
  @State showStr: Boolean = false;
  @State showNumber: Boolean = false;
  @State showZeroStr: Boolean = false;
  @State showAaaForm: Boolean = false;
  @State showUppercaseForm: Boolean = false;
  @State showBigStrForm: Boolean = false;
  @State showNegativeForm: Boolean = false;
  @State strFormID: string = '';
  @State strTwoFormID: string = '';
  @State strTwoNewFormID: string = '';
  @State emptyFormID: string = '';
  @State nullFormID: String = '';
  @State undefineFormID: String = '';
  @State numberFormID: String = '';
  @State SingleFormID: String = '';
  @State showFormID: String = '';
  @State showBigNumFormID: String = '';
  @State nullID: String = '';
  @State undefineID: String = '';
  @State strID: String = '';
  @State numID: String = '';
  @State zeroStrID: String = '';
  @State aaaFormID: String = '';
  @State uppercaseFormID: String = '';
  @State showBigStrFormID: String = '';
  @State negativeFormID: String = '';

  build() {
    Row() {
      Column() {
        Row() {
          Column() {
            Button('添加id为str+' + this.strFormID)
              .id('addStrButton')
              .onClick(() => {
                this.showStrForm = true;
              })
              .margin({ bottom: 10 })
            Button('删除id为str')
              .id('delStrButton')
              .onClick(() => {
                this.strFormID && formHost.deleteForm(this.strFormID.toString(), (err) => {
                  if (err) {
                    return;
                  }
                  this.showStrForm = false;
                  this.strFormID = ''
                })
              })
              .margin({ bottom: 10 })
          }

          Column() {
            Button('添加id为str两张+' + this.strTwoFormID)
              .id('addStrTwoButton')
              .onClick(() => {
                this.showStrTwoForm = true;
              })
              .margin({ bottom: 10 })
            Button('删除id为str两张+' + this.strTwoNewFormID)
              .id('delStrTwoButton')
              .onClick(() => {
                this.strTwoFormID && formHost.deleteForm(this.strTwoFormID.toString(), (err) => {
                  if (err) {
                    return;
                  }
                  this.strTwoNewFormID && formHost.deleteForm(this.strTwoNewFormID.toString(), (err) => {
                    if (err) {
                      return;
                    }
                    this.showStrTwoForm = false;
                    this.strTwoFormID = ''
                    this.strTwoNewFormID = ''
                  })
                })
              })
              .margin({ bottom: 10 })
          }

          Column() {
            Button('添加id为空+' + this.emptyFormID)
              .id('addEmptyButton')
              .onClick(() => {
                this.showEmptyForm = true;
              })
              .margin({ bottom: 10 })
            Button('删除id为空')
              .id('delEmptyButton')
              .onClick(() => {
                this.showEmptyForm = false;
              })
              .margin({ bottom: 10 })
          }
        }

        Row() {
          Column() {
            Button('添加id为0aaa+' + this.aaaFormID)
              .id('addAaaButton')
              .onClick(() => {
                this.showAaaForm = true;
              })
              .margin({ bottom: 10 })
            Button('删除id为0aaa')
              .id('delAaaButton')
              .onClick(() => {
                this.showAaaForm = false;
              })
              .margin({ bottom: 10 })
          }

          Column() {
            Button('添加id为aaA+' + this.uppercaseFormID)
              .id('addUppercaseButton')
              .onClick(() => {
                this.showUppercaseForm = true;
              })
              .margin({ bottom: 10 })
            Button('删除id为aaA')
              .id('delUppercaseButton')
              .onClick(() => {
                this.uppercaseFormID && formHost.deleteForm(this.uppercaseFormID.toString(), (err) => {
                  if (err) {
                    return;
                  }
                  this.showUppercaseForm = false;
                  this.uppercaseFormID = ''
                })
              })
              .margin({ bottom: 10 })
          }

          Column() {
            Button('添加id为数字极限值+' + this.numberFormID)
              .id('addNumberButton')
              .onClick(() => {
                this.showNumberForm = true;
              })
              .margin({ bottom: 10 })
            Button('删除id为数字极限值')
              .id('delNumberButton')
              .onClick(() => {
                this.numberFormID && formHost.deleteForm(this.numberFormID.toString(), (err) => {
                  if (err) {
                    return;
                  }
                  this.showNumberForm = false;
                  this.numberFormID = ''
                })
              })
              .margin({ bottom: 10 })
          }
        }

        Row() {
          Column() {
            Button('添加id为字符串极限值+' + this.SingleFormID)
              .id('addSingleButton')
              .onClick(() => {
                this.showSingleForm = true;
              })
              .margin({ bottom: 10 })
            Button('删除id为字符串极限值')
              .id('delSingleButton')
              .onClick(() => {
                console.log('1234567890', this.SingleFormID)
                this.SingleFormID && formHost.deleteForm(this.SingleFormID.toString(), (err) => {
                  if (err) {
                    return;
                  }
                  this.showSingleForm = false;
                  this.SingleFormID = ''
                })
              })
              .margin({ bottom: 10 })
          }

          Column() {
            Button('添加id为@+' + this.showFormID)
              .id('addButton')
              .onClick(() => {
                this.showForm = true;
              })
              .margin({ bottom: 10 })
            Button('删除id为@')
              .id('delButton')
              .onClick(() => {
                this.showForm = false;
              })
              .margin({ bottom: 10 })
          }

          Column() {
            Button('添加id为字符串2^63+' + this.showBigStrFormID)
              .id('addBigStrButton')
              .onClick(() => {
                this.showBigStrForm = true;
              })
              .margin({ bottom: 10 })
            Button('删除id为字符串2^63')
              .id('delBigStrButton')
              .onClick(() => {
                this.showBigStrForm = false;
              })
              .margin({ bottom: 10 })
          }
        }

        Row() {
          Column() {
            Button('添加id为null+' + this.nullFormID)
              .id('addNullButton')
              .onClick(() => {
                this.showNullForm = true;
              })
              .margin({ bottom: 10 })
            Button('删除id为null')
              .id('delNullButton')
              .onClick(() => {
                this.nullFormID && formHost.deleteForm(this.nullFormID.toString(), (err) => {
                  if (err) {
                    return;
                  }
                  this.showNullForm = false;
                  this.nullFormID = ''
                })
              })
              .margin({ bottom: 10 })
          }

          Column() {
            Button('添加id为undefine+' + this.undefineFormID)
              .id('addUndefineButton')
              .onClick(() => {
                this.showUndefineForm = true;
              })
              .margin({ bottom: 10 })
            Button('删除id为undefine')
              .id('delUndefineButton')
              .onClick(() => {
                this.undefineFormID && formHost.deleteForm(this.undefineFormID.toString(), (err) => {
                  if (err) {
                    return;
                  }
                  this.showUndefineForm = false;
                  this.undefineFormID = ''
                })
              })
              .margin({ bottom: 10 })
          }

          Column() {
            Button('添加id为字符串-1+' + this.negativeFormID)
              .id('addNegativeButton')
              .onClick(() => {
                this.showNegativeForm = true;
              })
              .margin({ bottom: 10 })
            Button('删除id为字符串-1')
              .id('delNegativeButton')
              .onClick(() => {
                this.showNegativeForm = false;
              })
              .margin({ bottom: 10 })
          }
        }

        Row() {
          Column() {
            Button('添加id为数字-1+' + this.numID)
              .id('numButton')
              .onClick(() => {
                this.showNumber = true;
              })
              .margin({ bottom: 10 })
            Button('删除id为数字-1')
              .id('delNum')
              .onClick(() => {
                this.numID && formHost.deleteForm(this.numID.toString(), (err) => {
                  if (err) {
                    return;
                  }
                  this.showNumber = false;
                  this.numID = ''
                })
              })
              .margin({ bottom: 10 })
          }

          Column() {
            Button('添加id为字符串000+' + this.zeroStrID)
              .id('zeroButton')
              .onClick(() => {
                this.showZeroStr = true;
              })
              .margin({ bottom: 10 })
            Button('删除id为字符串000')
              .id('delZero')
              .onClick(() => {
                this.zeroStrID && formHost.deleteForm(this.zeroStrID.toString(), (err) => {
                  if (err) {
                    return;
                  }
                  this.showZeroStr = false;
                  this.zeroStrID = ''
                })
              })
              .margin({ bottom: 10 })
          }
        }

        Row() {
          Column() {
            if (this.showStrForm) {
              FormComponent({
                id: '0',
                name: 'widget',
                bundle: 'com.hits.setformidsupportstringprovider',
                ability: 'EntryFormAbility',
                module: 'entry',
              })
                .onAcquired((formInfo: FormCallbackInfo) => {
                  this.strFormID = formInfo.id.toString();
                  console.log('strFormID', this.strFormID)
                })
                .visibility(Visibility.Visible)
                .width(200)
                .height(100)
                .onUninstall(() => {
                  this.showStrForm = false;
                })
            }
            if (this.showStrTwoForm) {
              FormComponent({
                id: '0',
                name: 'widget',
                bundle: 'com.hits.setformidsupportstringprovider',
                ability: 'EntryFormAbility',
                module: 'entry',
              })
                .onAcquired((formInfo: FormCallbackInfo) => {
                  this.strTwoFormID = formInfo.id.toString();
                  console.log('strTwoFormID', this.strTwoFormID)
                })
                .visibility(Visibility.Visible)
                .width(200)
                .height(100)
                .onUninstall(() => {
                  this.showStrTwoForm = false;
                })
              FormComponent({
                id: '0',
                name: 'widget',
                bundle: 'com.hits.setformidsupportstringprovider',
                ability: 'EntryFormAbility',
                module: 'entry',
              })
                .onAcquired((formInfo: FormCallbackInfo) => {
                  this.strTwoNewFormID = formInfo.id.toString();
                  console.log('strTwoNewFormID', this.strTwoNewFormID)
                })
                .visibility(Visibility.Visible)
                .width(200)
                .height(100)
                .onUninstall(() => {
                  this.showStrTwoForm = false;
                })
            }
            if (this.showEmptyForm) {
              FormComponent({
                id: '',
                name: 'widget',
                bundle: 'com.hits.setformidsupportstringprovider',
                ability: 'EntryFormAbility',
                module: 'entry',
                want: {
                  parameters: { "ohos.extra.param.key.migrate_form": true }
                }
              })
                .onAcquired((formInfo: FormCallbackInfo) => {
                  this.emptyFormID = formInfo.idString;
                  console.log('emptyFormID', this.emptyFormID)
                })
                .visibility(Visibility.Visible)
                .width(200)
                .height(100)
                .onError(()=>{
                  console.log('emptyFormID', this.emptyFormID)
                })
            }
            if (this.showAaaForm) {
              FormComponent({
                id: '0aaa',
                name: 'widget',
                bundle: 'com.hits.setformidsupportstringprovider',
                ability: 'EntryFormAbility',
                module: 'entry',
                want: {
                  parameters: { "ohos.extra.param.key.migrate_form": true }
                }
              })
                .onAcquired((formInfo: FormCallbackInfo) => {
                  this.aaaFormID = formInfo.id.toString();
                  console.log('aaaFormID', this.aaaFormID)
                })
                .visibility(Visibility.Visible)
                .width(200)
                .height(100)
            }
            if (this.showUppercaseForm) {
              FormComponent({
                id: 'aaA',
                name: 'widget',
                bundle: 'com.hits.setformidsupportstringprovider',
                ability: 'EntryFormAbility',
                module: 'entry',
                want: {
                  parameters: { "ohos.extra.param.key.migrate_form": true }
                }
              })
                .onAcquired((formInfo: FormCallbackInfo) => {
                  this.uppercaseFormID = formInfo.id.toString();
                  console.log('uppercaseFormID', this.uppercaseFormID)
                })
                .visibility(Visibility.Visible)
                .width(200)
                .height(100)
                .onUninstall(() => {
                  this.showUppercaseForm = false;
                })
            }
            if (this.showNumberForm) {
              FormComponent({
                id: 4503599627370495,
                name: 'widget',
                bundle: 'com.hits.setformidsupportstringprovider',
                ability: 'EntryFormAbility',
                module: 'entry',
                want: {
                  parameters: { "ohos.extra.param.key.migrate_form": true }
                }
              })
                .onAcquired((formInfo: FormCallbackInfo) => {
                  this.numberFormID = formInfo.id.toString();
                  console.log('numberFormID', this.numberFormID)
                })
                .visibility(Visibility.Visible)
                .width(200)
                .height(100)
                .onUninstall(() => {
                  this.showNumberForm = false;
                })
            }
            if (this.showSingleForm) {
              FormComponent({
                id: '9223372036854775807',
                name: 'widget',
                bundle: 'com.hits.setformidsupportstringprovider',
                ability: 'EntryFormAbility',
                module: 'entry',
                want: {
                  parameters: { "ohos.extra.param.key.migrate_form": true }
                }
              })
                .onAcquired((formInfo: FormCallbackInfo) => {
                  this.SingleFormID = formInfo.idString.toString();
                  console.log('SingleFormID', this.SingleFormID)
                })
                .visibility(Visibility.Visible)
                .width(200)
                .height(100)
                .onUninstall(() => {
                  this.showSingleForm = false;
                })
            }
            if (this.showForm) {
              FormComponent({
                id: '@',
                name: 'widget',
                bundle: 'com.hits.setformidsupportstringprovider',
                ability: 'EntryFormAbility',
                module: 'entry',
                want: {
                  parameters: { "ohos.extra.param.key.migrate_form": true }
                }
              })
                .onAcquired((formInfo: FormCallbackInfo) => {
                  this.showFormID = formInfo.id.toString();
                  console.log('showFormID', this.showFormID)
                })
                .visibility(Visibility.Visible)
                .width(200)
                .height(100)
                .onUninstall(() => {
                  this.showForm = false;
                })
            }
            if (this.showBigStrForm) {
              FormComponent({
                id: '9223372036854775808',
                name: 'widget',
                bundle: 'com.hits.setformidsupportstringprovider',
                ability: 'EntryFormAbility',
                module: 'entry',
                want: {
                  parameters: { "ohos.extra.param.key.migrate_form": true }
                }
              })
                .onAcquired((formInfo: FormCallbackInfo) => {
                  this.showBigStrFormID = formInfo.id.toString();
                  console.log('showBigStrFormID', this.showBigStrFormID)
                })
                .visibility(Visibility.Visible)
                .width(200)
                .height(100)
                .onUninstall(() => {
                  this.showBigStrForm = false;
                })
            }
            if (this.showNullForm) {
              FormComponent({
                id: null,
                name: 'widget',
                bundle: 'com.hits.setformidsupportstringprovider',
                ability: 'EntryFormAbility',
                module: 'entry',
                want: {
                  parameters: { "ohos.extra.param.key.migrate_form": true }
                }
              })
                .onAcquired((formInfo: FormCallbackInfo) => {
                  this.nullFormID = formInfo.id.toString();
                  console.log('nullFormID', this.nullFormID)
                })
                .visibility(Visibility.Visible)
                .width(200)
                .height(100)
                .onUninstall(() => {
                  this.showNullForm = false;
                })
            }
            if (this.showUndefineForm) {
              FormComponent({
                id: undefined,
                name: 'widget',
                bundle: 'com.hits.setformidsupportstringprovider',
                ability: 'EntryFormAbility',
                module: 'entry',
                want: {
                  parameters: { "ohos.extra.param.key.migrate_form": true }
                }
              })
                .onAcquired((formInfo: FormCallbackInfo) => {
                  this.undefineFormID = formInfo.id.toString();
                  console.log('undefineFormID', this.undefineFormID)
                })
                .visibility(Visibility.Visible)
                .width(200)
                .height(100)
                .onUninstall(() => {
                  this.showUndefineForm = false;
                })
            }
            if (this.showNegativeForm) {
              FormComponent({
                id: '-1',
                name: 'widget',
                bundle: 'com.hits.setformidsupportstringprovider',
                ability: 'EntryFormAbility',
                module: 'entry',
                want: {
                  parameters: { "ohos.extra.param.key.migrate_form": true }
                }
              })
                .onAcquired((formInfo: FormCallbackInfo) => {
                  this.negativeFormID = formInfo.id.toString();
                  console.log('negativeFormID', this.negativeFormID)
                })
                .visibility(Visibility.Visible)
                .width(200)
                .height(100)
                .onUninstall(() => {
                  this.showNegativeForm = false;
                })
            }
            if (this.showNumber) {
              FormComponent({
                id: -1,
                name: 'widget',
                bundle: 'com.hits.setformidsupportstringprovider',
                ability: 'EntryFormAbility',
                module: 'entry',
                want: {
                  parameters: { "ohos.extra.param.key.migrate_form": true }
                }
              })
                .onAcquired((formInfo: FormCallbackInfo) => {
                  this.numID = formInfo.id.toString();
                  console.log('numID', this.numID)
                })
                .visibility(Visibility.Visible)
                .width(200)
                .height(100)
                .onUninstall(() => {
                  this.showNumber = false;
                })
            }
            if (this.showZeroStr) {
              FormComponent({
                id: '000',
                name: 'widget',
                bundle: 'com.hits.setformidsupportstringprovider',
                ability: 'EntryFormAbility',
                module: 'entry',
                want: {
                  parameters: { "ohos.extra.param.key.migrate_form": true }
                }
              })
                .onAcquired((formInfo: FormCallbackInfo) => {
                  this.zeroStrID = formInfo.id.toString();
                  console.log('zeroStrID', this.zeroStrID)
                })
                .visibility(Visibility.Visible)
                .width(200)
                .height(100)
                .onUninstall(() => {
                  this.showZeroStr = false;
                })
            }

          }
          .height('100%')
        }
      }
      .width('100%')
    }
    .height('100%')
    .backgroundImageSize({ width: '100%', height: '100%' })
  }
}