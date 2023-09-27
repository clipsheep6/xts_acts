@CustomDialog
struct CustomDialogExampleSafe {
  @Link textValue: string
  @Link inputValue: string
  @Link nums: number
  @Link numst: number
  @Link Edgs: Array<SafeAreaEdge>
  @Link Stypes: Array<SafeAreaType>
  @Link Edg2s: Array<SafeAreaEdge>
  @Link Stype2s: Array<SafeAreaType>
  @Link nums2 : number
  @Link numst2: number
  controller?: CustomDialogController
  cancel: () => void = () => {}
  confirm: () => void = () => {}

  build() {
    Column() {
      Text('Change text').fontSize(20).margin({ top: 10, bottom: 10 })
      TextInput({ placeholder: '', text: this.textValue }).height(60).width('90%')
        .onChange((value: string) => {
          this.textValue = value
        })
      Text('SafeAreaEdge:'+JSON.stringify(this.Edgs[this.nums])+' '+JSON.stringify(this.Edg2s[this.numst])).fontSize(16).margin({ bottom: 10 }).key('SafeAreaEdgenums')
      Text('SafeAreaType:'+JSON.stringify(this.Stypes[this.nums2])+' '+JSON.stringify(this.Stype2s[this.numst2])).fontSize(16).margin({ bottom: 10 }).key('SafeAreaTypenums')

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
    .expandSafeArea([this.Stypes[this.nums2],this.Stype2s[this.numst2]],[this.Edgs[this.nums],this.Edg2s[this.numst]]).key('CustomDialog')
    // 如果需要使用border属性或cornerRadius属性，请和borderRadius属性一起使用。
  }
}

@Entry
@Component
struct CustomDialogUserSafe {
  @State textValue: string = ''
  @State inputValue: string = 'click me'
  @State Edg : Array<SafeAreaEdge> = [SafeAreaEdge.START,SafeAreaEdge.END,SafeAreaEdge.TOP,SafeAreaEdge.BOTTOM]
  @State Edg2 : Array<SafeAreaEdge> = [SafeAreaEdge.START,SafeAreaEdge.END,SafeAreaEdge.TOP,SafeAreaEdge.BOTTOM,]
  @State num : number = 0
  @State numt : number = 0
  @State numt2 : number = 0
  @State Stype : Array<SafeAreaType> = [SafeAreaType.CUTOUT,SafeAreaType.SYSTEM,SafeAreaType.KEYBOARD]
  @State Stype2 : Array<SafeAreaType> = [SafeAreaType.CUTOUT,SafeAreaType.SYSTEM,SafeAreaType.KEYBOARD,]
  @State num2 : number = 0
  dialogController: CustomDialogController | null = new CustomDialogController({
    builder: CustomDialogExampleSafe({
      cancel: this.onCancel,
      confirm: this.onAccept,
      textValue: $textValue,
      inputValue: $inputValue,
      Edgs: $Edg,
      nums:$num,
      Stypes:$Stype,
      nums2:$num2,
      Edg2s: $Edg2,
      numst:$numt,
      Stype2s:$Stype2,
      numst2:$numt2,
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
      Column({space:10}) {
        Button('SafeAreaEdge.START').key('SafeAreaEdge.START')
          .onClick(() => {
            if (this.dialogController != null) {
              this.dialogController.open()
              this.num = 0
              this.numt = 4
              console.log(String(this.Edg[0]))
            }
          }).backgroundColor(0x317aff)
        Button('SafeAreaEdge.END').key('SafeAreaEdge.END')
          .onClick(() => {
            if (this.dialogController != null) {
              this.dialogController.open()
              this.num = 1
              this.numt = 4
              console.log(String(this.Edg[1]))
            }
          }).backgroundColor(0x317aff)
        Button('SafeAreaEdge.TOP').key('SafeAreaEdge.TOP')
          .onClick(() => {
            if (this.dialogController != null) {
              this.dialogController.open()
              this.num = 2
              this.numt =4
              console.log(String(this.Edg[2]))
            }
          }).backgroundColor(0x317aff)
        Button('SafeAreaEdge.BOTTOM').key('SafeAreaEdge.BOTTOM')
          .onClick(() => {
            if (this.dialogController != null) {
              this.dialogController.open()
              this.num = 3
              this.numt =4
              console.log(String(this.Edg[3]))
            }
          }).backgroundColor(0x317aff)
        Button('SafeAreaEdge.START.END').key('SafeAreaEdge.START.END')
          .onClick(() => {
            if (this.dialogController != null) {
              this.dialogController.open()
              this.num = 0
              this.numt = 1
              console.log(String(this.Edg[0]))
            }
          }).backgroundColor(0x317aff)
        Button('SafeAreaEdge.END.TOP').key('SafeAreaEdge.END.TOP')
          .onClick(() => {
            if (this.dialogController != null) {
              this.dialogController.open()
              this.num = 1
              this.numt = 2
              console.log(String(this.Edg[1]))
            }
          }).backgroundColor(0x317aff)
        Button('SafeAreaEdge.TOP.BOTTOM').key('SafeAreaEdge.TOP.BOTTOM')
          .onClick(() => {
            if (this.dialogController != null) {
              this.dialogController.open()
              this.num = 2
              this.numt =3
              console.log(String(this.Edg[2]))
            }
          }).backgroundColor(0x317aff)
        Button('SafeAreaEdge.BOTTOM.END').key('SafeAreaEdge.BOTTOM.END')
          .onClick(() => {
            if (this.dialogController != null) {
              this.dialogController.open()
              this.num = 3
              this.numt =0
              console.log(String(this.Edg[3]))
            }
          }).backgroundColor(0x317aff)
        Button('SafeAreaType.CUTOUT').key('SafeAreaType.CUTOUT')
          .onClick(() => {
            if (this.dialogController != null) {
              this.dialogController.open()
              this.num2 = 0
              this.numt2 = 3
              console.log(String(this.num2[0]))
            }
          }).backgroundColor(0x317aff)
        Button('SafeAreaType.SYSTEM').key('SafeAreaType.SYSTEM')
          .onClick(() => {
            if (this.dialogController != null) {
              this.dialogController.open()
              this.num2 = 1
              this.numt2 = 3
              console.log(String(this.num2[1]))
            }
          }).backgroundColor(0x317aff)
        Button('SafeAreaType.KEYBOARD').key('SafeAreaType.KEYBOARD')
          .onClick(() => {
            if (this.dialogController != null) {
              this.dialogController.open()
              this.num2 = 2
              this.numt2 = 3
              console.log(String(this.num2[2]))
            }
          }).backgroundColor(0x317aff)
        Button('SafeAreaType.KEYBOARD.SYSTEM').key('SafeAreaType.KEYBOARD.SYSTEM')
          .onClick(() => {
            if (this.dialogController != null) {
              this.dialogController.open()
              this.num2 = 2
              this.numt2 = 1
              console.log(String(this.num2[2]))
            }
          }).backgroundColor(0x317aff)
        Button('SafeAreaType.KEYBOARD.CUTOUT').key('SafeAreaType.KEYBOARD.CUTOUT')
          .onClick(() => {
            if (this.dialogController != null) {
              this.dialogController.open()
              this.num2 = 2
              this.numt2 = 0
              console.log(String(this.num2[2]))
            }
          }).backgroundColor(0x317aff)
        Button('SafeAreaType.SYSTEM.CUTOUT').key('SafeAreaType.SYSTEM.CUTOUT')
          .onClick(() => {
            if (this.dialogController != null) {
              this.dialogController.open()
              this.num2 = 1
              this.numt2 = 0
              console.log(String(this.num2[1]))
            }
          }).backgroundColor(0x317aff)
      }.width('100%').height('80%').margin({ top: 5 })
    }

  }
}