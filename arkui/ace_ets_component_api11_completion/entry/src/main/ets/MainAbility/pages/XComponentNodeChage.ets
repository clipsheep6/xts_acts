import { UIContext } from '@ohos.arkui.UIContext'
import { NodeController, FrameNode, BuilderNode, NodeRenderType, XComponentNode } from '@ohos.arkui.node'
import { Callback } from '@ohos.base'
import { uiContext1 } from "../entryability/EntryAbility"

let message: string = 'init'

class XComponentNodeController extends NodeController {
  private rootNode: XComponentNode

  constructor(uiContext: UIContext) {
    super()
    this.rootNode = new XComponentNode(uiContext, {
      type: NodeRenderType.RENDER_TYPE_DISPLAY,
      surfaceId: '12345',
      selfIdealSize: { width: 300, height: 300 }
    }, "xcomponentId", XComponentType.SURFACE, "nativerender");
  }

  makeNode(uiContext: UIContext): FrameNode | null {
    return this.rootNode
  }

  changeRenderType(type: NodeRenderType) {
    let flag1 = this.rootNode.changeRenderType(NodeRenderType.RENDER_TYPE_DISPLAY)
    message = 'changeRenderType'
  }
}

@Entry
@Component
struct XComponentNodeIndex {
  @State uiContext: UIContext | undefined = this.getUIContext?.();
  private xComponentNodeController: XComponentNodeController = new XComponentNodeController(this.uiContext)
  @State falg: boolean = false

  build() {
    Row() {
      Column() {
        Button('change render type').key('xComponentNode_change')
          .onClick(() => {
            this.xComponentNodeController.changeRenderType(NodeRenderType.RENDER_TYPE_TEXTURE)
          })
        Text(message).key('xComponent_RenderType')
        // if (this.falg) {
        //   NodeContainer(this.xComponentNodeController)
        //     .width(400)
        //     .height(400)
        //     .border({ width: 1, color: Color.Green })
        // }
      }.height('100%')
    }.height('100%')
  }
}

