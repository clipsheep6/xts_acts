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
      .fontSize(50)
      .fontWeight(FontWeight.Bold)
      .margin({bottom: 36})
  }.backgroundColor('#FFF0F0F0')
}

@Entry
@Component
struct Index {
  @State message: string = "hello"
  @State closeCustomDialog: string = "init"

  build() {
    Row() {
      Column() {
        Text(this.closeCustomDialog)
          .margin(20)
          .id('closeCustomDialog')
        Button("click me")
          .id('btn')
          .onClick(() => {
            let uiContext = this.getUIContext();
            let promptAction = uiContext.getPromptAction();
            let contentNode = new ComponentContent(uiContext, wrapBuilder(buildText), new Params(this.message));
            try {
              promptAction.openCustomDialog(contentNode,{ onDidDisappear: () => {
                this.closeCustomDialog = 'closeCustomDialog'
              } });
            } catch (error) {
              let message = (error as BusinessError).message;
              let code = (error as BusinessError).code;
              console.error(`OpenCustomDialog args error code is ${code}, message is ${message}`);
            };

            setTimeout(() => {
              try {
                promptAction.closeCustomDialog(contentNode);
              } catch (error) {
                let message = (error as BusinessError).message;
                let code = (error as BusinessError).code;
                console.error(`closeCustomDialog args error code is ${code}, message is ${message}`);
              };
            }, 2000);     //2秒后自动关闭
          })
      }
      .width('100%')
      .height('100%')
    }
    .height('100%')
  }
}