import { typeNode, NodeController, FrameNode } from '@ohos.arkui.node';
import { CheckboxModifier } from '@ohos.arkui.modifier';

let checkboxGroupData1: CheckboxGroupOptions = {
  group: 'checkboxGroup1'
}

let checkboxGroupData2: CheckboxGroupOptions = {
  group: 'checkboxGroup2'
}

let checkboxData1: CheckboxOptions = {
  name: 'checkbox1',
  group: 'checkboxGroup1'
}

let checkboxData2: CheckboxOptions = {
  name: 'checkbox2',
  group: 'checkboxGroup1'
}
let checkboxData3: CheckboxOptions = {
  name: 'checkbox3',
  group: 'checkboxGroup1'
}

let checkboxData4: CheckboxOptions = {
  name: 'checkbox4',
  group: 'checkboxGroup2'
}

let checkboxData5: CheckboxOptions = {
  name: 'checkbox5',
  group: 'checkboxGroup2'
}

let checkboxData6: CheckboxOptions = {
  name: 'checkbox6',
  group: 'checkboxGroup2'
}

class MyNodeController extends NodeController {
  makeNode(uiContext: UIContext): FrameNode | null{
    let node = new FrameNode(uiContext)
    let col = typeNode.createNode(uiContext, 'Column')
    col.initialize({ space: 10 }).borderColor(Color.Black).alignItems(HorizontalAlign.Center)
    let checkboxGroup = typeNode.createNode(uiContext, 'CheckboxGroup')
    checkboxGroup.initialize(checkboxGroupData1)
      .key('key_checkboxGroup_001')
      .checkboxShape(1)
      .selectedColor('#FF00FFFF')
    col.appendChild(checkboxGroup)
    let checkbox1 = typeNode.createNode(uiContext, 'Checkbox')
    checkbox1.initialize(checkboxData1).selectedColor(0xed6f21).shape(CheckBoxShape.CIRCLE).select(true)
    let checkbox2 = typeNode.createNode(uiContext, 'Checkbox')
    checkbox2.initialize(checkboxData2).selectedColor(0xed6f21).shape(CheckBoxShape.CIRCLE).select(true)
    let checkbox3 = typeNode.createNode(uiContext, 'Checkbox')
    checkbox3.initialize(checkboxData3).selectedColor(0xed6f21).shape(CheckBoxShape.CIRCLE).select(true)
    col.appendChild(checkbox1)
    col.appendChild(checkbox2)
    col.appendChild(checkbox3)
    node.appendChild(col)
    return node
  }
}

@Entry
@Component
struct checkboxGroup {
  private myNodeController: MyNodeController = new MyNodeController()
  build(){
    Column({ space: 20 }) {
      NodeContainer(this.myNodeController)
    }.width('100%')
    .alignItems(HorizontalAlign.Center)
  }
}