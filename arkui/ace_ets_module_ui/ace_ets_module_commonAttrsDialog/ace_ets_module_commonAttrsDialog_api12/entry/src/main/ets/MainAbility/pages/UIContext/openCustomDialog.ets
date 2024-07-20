import { BusinessError } from '@kit.BasicServicesKit';
import { ComponentContent } from '@kit.ArkUI';

class Params {
  text: string = ""
  constructor(text: string) {
    this.text = text;
  }
}

@Builder
function buildText(params: Params) {
  Column() {
    Text(params.text)
      .id('openCustomDialog')
      .fontSize(50)
      .fontWeight(FontWeight.Bold)
      .margin({bottom: 36})
  }.backgroundColor('#FFF0F0F0').onTouch(() => {
    params.text = 'change1111'
  })
}

@Entry
@Component
struct Index {
  @State message: string = "hello"
  @State openCustomDialog: string = "init"

  build() {
    Row() {
      Column() {
        Text(this.openCustomDialog)
          .margin(20)
          .id('openCustomDialog')
        Button("click me")
          .id('btn')
          .onClick(() => {
            let uiContext = this.getUIContext();
            let promptAction = uiContext.getPromptAction();
            let contentNode = new ComponentContent(uiContext, wrapBuilder(buildText), new Params(this.message));
            try {
              promptAction.openCustomDialog(contentNode, { onDidAppear: () => {
                this.openCustomDialog = 'openCustomDialog'
              } });
            } catch (error) {
              let message = (error as BusinessError).message;
              let code = (error as BusinessError).code;
              console.error(`OpenCustomDialog args error code is ${code}, message is ${message}`);
            };
            setTimeout(() => {
              promptAction.closeCustomDialog(contentNode);
            }, 2000);     //2秒后自动关闭
          })
      }
      .width('100%')
    }
    .height('100%')
  }
}