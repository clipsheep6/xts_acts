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
@CustomDialog
struct CustomDialogAlignment {
  @Link textValue: string
  @Link inputValue: string

  controller?: CustomDialogController
  // 若尝试在CustomDialog中传入多个其他的Controller，以实现在CustomDialog中打开另一个或另一些CustomDialog，那么此处需要将指向自己的controller放在最后
  cancel: () => void = () => {}
  confirm: () => void = () => {}

  build() {
    Column() {
      Text('Change text').fontSize(20).margin({ top: 10, bottom: 10 })
      TextInput({ placeholder: '', text: this.textValue }).height(60).width('90%')
        .onChange((value: string) => {
          this.textValue = value
        })
      Text('Whether to change a text?').fontSize(16).margin({ bottom: 10 })
      Flex({ justifyContent: FlexAlign.SpaceAround }) {
        Button('cancel')
          .onClick(() => {
            if (this.controller != undefined) {
              this.controller.close()
              this.cancel()
            }
          }).backgroundColor(0xffffff).fontColor(Color.Black)
        Button('confirm')
          .onClick(() => {
            if (this.controller != undefined) {
              this.inputValue = this.textValue
              this.controller.close()
              this.confirm()
            }
          }).backgroundColor(0xffffff).fontColor(Color.Red)
      }.margin({ bottom: 10 })
    }.borderRadius(10)
    // 如果需要使用border属性或cornerRadius属性，请和borderRadius属性一起使用。
  }
}

@Entry
@Component
struct CustomDialogUserAlignment {
  @State textValue: string = ''
  @State inputValue: string = 'click me'
  dialogController: CustomDialogController | null = new CustomDialogController({
    builder: CustomDialogAlignment({
      cancel: this.onCancel,
      confirm: this.onAccept,
      textValue: $textValue,
      inputValue: $inputValue
    }),
    cancel: this.existApp,
    autoCancel: true,
    alignment: DialogAlignment.Bottom,
    offset: { dx: 0, dy: -20 },
    gridCount: 4,
    customStyle: false,
    backgroundColor: 0xd9ffffff,
    cornerRadius: 10,
  })

  // 在自定义组件即将析构销毁时将dialogControlle置空
  aboutToDisappear() {
    this.dialogController = null // 将dialogController置空
  }

  onCancel() {
    console.info('Callback when the first button is clicked')
  }

  onAccept() {
    console.info('Callback when the second button is clicked')
  }

  existApp() {
    console.info('Click the callback in the blank area')
  }

  build() {
    Column(){
      Row().height(10)
      Column({space:15}) {
        Button('Bottom')
          .onClick(() => {
            if (this.dialogController != null) {
              this.dialogController.open()
            }
          }).backgroundColor(0x317aff).key('Bottom')
        Button('BottomStart')
          .onClick(() => {
            this.dialogController = new CustomDialogController({
              builder: CustomDialogAlignment({
                cancel: this.onCancel,
                confirm: this.onAccept,
                textValue: $textValue,
                inputValue: $inputValue
              }),
              cancel: this.existApp,
              autoCancel: true,
              alignment: DialogAlignment.BottomStart,
              offset: { dx: 0, dy: -20 },
			  maskColor:Color.Red,
              gridCount: 4,
              customStyle: false,
              backgroundColor: 0xd9ffffff,
              cornerRadius: 10,
            })
            if (this.dialogController != null) {

              this.dialogController.open()
            }
          }).backgroundColor(0x317aff).key('BottomStart')
        Button('Top')
          .onClick(() => {
            this.dialogController = new CustomDialogController({
              builder: CustomDialogAlignment({
                cancel: this.onCancel,
                confirm: this.onAccept,
                textValue: $textValue,
                inputValue: $inputValue
              }),
              cancel: this.existApp,
              autoCancel: true,
              alignment: DialogAlignment.Top,
              offset: { dx: 0, dy: -20 },
			  maskColor:Color.Blue,
              gridCount: 4,
              customStyle: false,
              backgroundColor: 0xd9ffffff,
              cornerRadius: 10,
            })
            if (this.dialogController != null) {

              this.dialogController.open()
            }
          }).backgroundColor(0x317aff).key('Top')
        Button('Default')
          .onClick(() => {
            this.dialogController = new CustomDialogController({
              builder: CustomDialogAlignment({
                cancel: this.onCancel,
                confirm: this.onAccept,
                textValue: $textValue,
                inputValue: $inputValue
              }),
              cancel: this.existApp,
              autoCancel: true,
              alignment: DialogAlignment.Default,
              offset: { dx: 0, dy: -20 },
			  maskColor:Color.Green,
              gridCount: 4,
              customStyle: false,
              backgroundColor: 0xd9ffffff,
              cornerRadius: 10,
            })
            if (this.dialogController != null) {

              this.dialogController.open()
            }
          }).backgroundColor(0x317aff).key('Default')
        Button('TopStart')
          .onClick(() => {
            this.dialogController = new CustomDialogController({
              builder: CustomDialogAlignment({
                cancel: this.onCancel,
                confirm: this.onAccept,
                textValue: $textValue,
                inputValue: $inputValue
              }),
              cancel: this.existApp,
              autoCancel: true,
              alignment: DialogAlignment.TopStart,
              offset: { dx: 0, dy: -20 },
			  maskColor:Color.Orange,
              gridCount: 4,
              customStyle: false,
              backgroundColor: 0xd9ffffff,
              cornerRadius: 10,
            })
            if (this.dialogController != null) {

              this.dialogController.open()
            }
          }).backgroundColor(0x317aff).key('TopStart')
        Button('TopEnd')
          .onClick(() => {
            this.dialogController = new CustomDialogController({
              builder: CustomDialogAlignment({
                cancel: this.onCancel,
                confirm: this.onAccept,
                textValue: $textValue,
                inputValue: $inputValue
              }),
              cancel: this.existApp,
              autoCancel: true,
              alignment: DialogAlignment.TopEnd,
              offset: { dx: 0, dy: -20 },
			  maskColor:Color.Pink,
              gridCount: 4,
              customStyle: false,
              backgroundColor: 0xd9ffffff,
              cornerRadius: 10,
            })
            if (this.dialogController != null) {

              this.dialogController.open()
            }
          }).backgroundColor(0x317aff).key('TopEnd')
        Button('CenterStart')
          .onClick(() => {
            this.dialogController = new CustomDialogController({
              builder: CustomDialogAlignment({
                cancel: this.onCancel,
                confirm: this.onAccept,
                textValue: $textValue,
                inputValue: $inputValue
              }),
              cancel: this.existApp,
              autoCancel: true,
              alignment: DialogAlignment.CenterStart,
              offset: { dx: 0, dy: -20 },
			  maskColor:Color.Yellow,
              gridCount: 4,
              customStyle: false,
              backgroundColor: 0xd9ffffff,
              cornerRadius: 10,
            })
            if (this.dialogController != null) {

              this.dialogController.open()
            }
          }).backgroundColor(0x317aff).key('CenterStart')
        Button('CenterEnd')
          .onClick(() => {
            this.dialogController = new CustomDialogController({
              builder: CustomDialogAlignment({
                cancel: this.onCancel,
                confirm: this.onAccept,
                textValue: $textValue,
                inputValue: $inputValue
              }),
              cancel: this.existApp,
              autoCancel: true,
              alignment: DialogAlignment.CenterEnd,
              offset: { dx: 0, dy: -20 },
			  maskColor:Color.Brown,
              gridCount: 4,
              customStyle: false,
              backgroundColor: 0xd9ffffff,
              cornerRadius: 10,
            })
            if (this.dialogController != null) {

              this.dialogController.open()
            }
          }).backgroundColor(0x317aff).key('CenterEnd')
        Button('BottomStart')
          .onClick(() => {
            this.dialogController = new CustomDialogController({
              builder: CustomDialogAlignment({
                cancel: this.onCancel,
                confirm: this.onAccept,
                textValue: $textValue,
                inputValue: $inputValue
              }),
              cancel: this.existApp,
              autoCancel: true,
              alignment: DialogAlignment.BottomStart,
              offset: { dx: 0, dy: -20 },
			  maskColor:'#ff000000',
              gridCount: 4,
              customStyle: false,
              backgroundColor: 0xd9ffffff,
              cornerRadius: 10,
            })
            if (this.dialogController != null) {

              this.dialogController.open()
            }
          }).backgroundColor(0x317aff).key('BottomStart')
        Button('BottomEnd')
          .onClick(() => {
            this.dialogController = new CustomDialogController({
              builder: CustomDialogAlignment({
                cancel: this.onCancel,
                confirm: this.onAccept,
                textValue: $textValue,
                inputValue: $inputValue
              }),
              cancel: this.existApp,
              autoCancel: true,
              alignment: DialogAlignment.BottomEnd,
              offset: { dx: 0, dy: -20 },
              gridCount: 4,
              customStyle: false,
              backgroundColor: 0xd9ffffff,
              cornerRadius: 10,
            })
            if (this.dialogController != null) {

              this.dialogController.open()
            }
          }).backgroundColor(0x317aff).key('BottomEnd')
      }.width('100%').height('80%').margin({ top: 5 })
    }

  }
}