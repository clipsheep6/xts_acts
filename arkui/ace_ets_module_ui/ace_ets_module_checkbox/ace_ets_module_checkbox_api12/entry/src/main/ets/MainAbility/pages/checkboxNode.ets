import { typeNode, NodeController, FrameNode } from '@ohos.arkui.node';
import { CheckboxModifier } from '@ohos.arkui.modifier';

let checkboxData: CheckboxOptions = {
  name: 'checkbox1',
  group: 'checkboxGroup'
}

class MyNodeController extends NodeController {
  makeNode(uiContext: UIContext): FrameNode | null{
    let node = new FrameNode(uiContext)
    let col = typeNode.createNode(uiContext, 'Column')
    col.initialize({ space: 10 }).borderColor(Color.Black).alignItems(HorizontalAlign.Center)

    let checkbox = typeNode.createNode(uiContext, 'Checkbox')
    checkbox.initialize(checkboxData)
      .select(true)
      .selectedColor('#FF00FFFF')
      .shape(1)
      .key('key_checkbox_001')
    col.appendChild(checkbox)
    node.appendChild(col)
    return node
  }
}

@Entry
@Component
struct checkbox {
  private myNodeController: MyNodeController = new MyNodeController()
  build(){
    Column({ space: 20 }) {
      NodeContainer(this.myNodeController)
    }.width('100%')
    .alignItems(HorizontalAlign.Center)
  }
}