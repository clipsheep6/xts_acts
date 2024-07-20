import { FrameNode, ComponentContent } from "@kit.ArkUI";
import { BusinessError } from '@kit.BasicServicesKit';

class Params {
  text: string = ""

  constructor(text: string) {
    this.text = text;
  }
}

let contentNode: ComponentContent<Params>;
let gUIContext: UIContext;

@Builder
function buildText(params: Params) {
  Column() {
    Text(params.text)
    Button('Update BindSheet')
      .fontSize(20)
      .onClick(() => {
        gUIContext.updateBindSheet(contentNode, {
          backgroundColor: Color.Pink,
        }, true)
          .then(() => {
            console.info('updateBindSheet success');
          })
          .catch((err: BusinessError) => {
            console.info('updateBindSheet error: ' + err.code + ' ' + err.message);
          })
      })

    Button('Close BindSheet')
      .id('close')
      .fontSize(20)
      .onClick(() => {
        gUIContext.closeBindSheet(contentNode)
          .then(() => {
            console.info('closeBindSheet success');
          })
          .catch((err: BusinessError) => {
            console.info('closeBindSheet error: ' + err.code + ' ' + err.message);
          })
      })
  }
}

@Entry
@Component
struct UIContextBindSheet {
  @State message: string = 'BindSheet';
  @State updateBindSheet: string = 'init';

  aboutToAppear() {
    gUIContext = this.getUIContext();
    contentNode = new ComponentContent(this.getUIContext(), wrapBuilder(buildText), new Params(this.message));
  }

  build() {
    RelativeContainer() {
      Row() {
        Column() {
          Text(this.updateBindSheet)
            .id('updateBindSheet')
          Button('Open BindSheet')
            .id('btn')
            .fontSize(20)
            .onClick(() => {
              let uiContext = this.getUIContext();
              let uniqueId = this.getUniqueId();
              let frameNode: FrameNode | null = uiContext.getFrameNodeByUniqueId(uniqueId);
              let targetId = frameNode?.getFirstChild()?.getUniqueId();
              uiContext.openBindSheet(contentNode, {
                height: SheetSize.MEDIUM,
                backgroundColor: Color.Green,
                title: { title: "Title", subtitle: "subtitle" }
              }, targetId)
                .then(() => {
                  console.info('openBindSheet success');
                })
                .catch((err: BusinessError) => {
                  console.info('openBindSheet error: ' + err.code + ' ' + err.message);
                })
              setTimeout(() => {
                gUIContext.updateBindSheet(contentNode, {
                  backgroundColor: Color.Pink,
                }, true)
                  .then(() => {
                    this.updateBindSheet = 'updateBindSheet'
                    console.info('updateBindSheet success');
                  })
                  .catch((err: BusinessError) => {
                    console.info('updateBindSheet error: ' + err.code + ' ' + err.message);
                  })
              }, 2000);
              setTimeout(() => {
                gUIContext.closeBindSheet(contentNode)
              }, 3000); //3秒后自动关闭
            })
        }.width('100%')
      }.height('100%')
    }
    .height('100%')
    .width('100%')
  }
}