import { NavigationView } from '../../view/size/NavigationView';
import attrsManager from '../../common/AttrsManager';
import router from '@ohos.router'

/**
 * Test page of common attribute: position
 */
@Entry
@Component
struct MultiContainerPage {
  @State _position: Position = { x: 0, y: 0 };
  @State targetView: string = router.getParams() ? router.getParams()['view']['targetView'] : ""
  @State containerView: string = router.getParams() ? router.getParams()['view']['containerView'] : ""
  @State componentKey: string = router.getParams() ? router.getParams()['view']['componentKey'] : ""
  @State parentWidth: number = router.getParams() ? router.getParams()['view']['parentWidth'] : 0
  @State parentHeight: number = router.getParams() ? router.getParams()['view']['parentHeight'] : 0
  @State parentComponentKey: string = router.getParams() ? router.getParams()['view']['parentComponentKey'] : ""

  onPageShow() {
    console.info('[ButtonDimensionsOne] page show called ')

    //Register data change call back.
    attrsManager.registerDataChange(value => this._position = value)
  }

  /**
   * Set common style.
   */
  @Styles commonStyle(){
    .position(this._position)
    .key(this.componentKey)
  }

  @Builder buildTargetView() {
    //Set view by page config.
    if (this.targetView == "Button") {
      Button('button1').commonStyle()
    } else if (this.targetView == "Radio") {
      Radio({ value: 'Radio1', group: 'radioGroup' }).commonStyle()
    } else if (this.targetView == "Select") {
      Select([{ value: 'aaa', icon: "/common/public_icon.svg" },
        { value: 'bbb', icon: "/common/public_icon.svg" }]).commonStyle()
    } else if (this.targetView == "Navigation") {
      NavigationView().position(this._position).key(this.componentKey)
    }
  }

  build() {
    Column() {
      if (this.containerView == "Row") {
        Row() {
          this.buildTargetView();
          Button("button2")
          Button("button3")
        }
        .width(this.parentWidth)
        .height(this.parentHeight)
        .key(this.parentComponentKey)
        .backgroundColor(Color.Green)
      } else if (this.containerView == "Column") {
        Column() {
          this.buildTargetView();
          Button("button4")
          Button("button5")
        }
        .width(this.parentWidth)
        .height(this.parentHeight)
        .key(this.parentComponentKey)
        .backgroundColor(Color.Green)
      } else {
        Flex() {
          this.buildTargetView();
          Button("button6")
          Button("button7")
        }
        .width(this.parentWidth)
        .height(this.parentHeight)
        .key(this.parentComponentKey)
        .backgroundColor(Color.Green)
      }
    }.width('100%').height('100%').backgroundColor(Color.Yellow)
  }
}