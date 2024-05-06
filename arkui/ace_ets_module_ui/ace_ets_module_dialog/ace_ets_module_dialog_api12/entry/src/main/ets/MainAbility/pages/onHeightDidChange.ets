
@Entry
@Component
struct SheetTransitionExample12 {
  @State isShow:boolean = false
  @State isShow2:boolean = false
  @State sheetHeight:number = 300;
  @State Height1:number = 10;

  @Builder myBuilder() {
    Column() {
      Button("change height")
        .id('ChangeHeight1')
        .margin(10)
        .fontSize(20)
        .onClick(()=>{
          this.sheetHeight = 500;
        })

      Button(''+this.Height1 )
        .id('chaKan')
        .margin(10)
        .fontSize(20)


      Button("close modal 1")
        .id('closeModal1')
        .margin(10)
        .fontSize(20)
        .onClick(()=>{
          this.isShow = false;
        })
    }
    .width('100%')
    .height('100%')
  }

  build() {
    Column() {
      Button("transition modal 1")
        .id('openModal1')
        .onClick(() => {
          this.isShow = true
        })
        .fontSize(20)
        .margin(10)
        .bindSheet(this.isShow, this.myBuilder(), {
          height: this.sheetHeight,
          onHeightDidChange:((value: number)=> {
            console.log("bind sheet shouldDismiss"+ value)
            this.Height1 = value
          }),
          backgroundColor: Color.Green,
          onWillAppear: () => {console.log("BindSheet onWillAppear.")},
          onAppear: () => {console.log("BindSheet onAppear.")},
          onWillDisappear: () => {console.log("BindSheet onWillDisappear.")},
          onDisappear: () => {console.log("BindSheet onDisappear.")}
        })
    }
    .justifyContent(FlexAlign.Center)
    .width('100%')
    .height('100%')
  }
}