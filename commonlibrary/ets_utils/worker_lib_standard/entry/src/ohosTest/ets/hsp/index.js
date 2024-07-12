import router from '@ohos.router';
import { normalImport } from './page1';
import { systemApi } from './page2';
import { multiHsp } from './page3'
import { multiLevelHsp } from './page4'
import { harImportLibrary } from './page5';
import { nativeso } from './page6';
import { nativeIsolationso } from './page7';

let WordSize = 15;
let ButtonWidth = '80%';
let ButtonHeight = '4.0%';
let topSize = 18;

class Index extends Component {
    constructor() {
        super();
        this.state = {
            message: 'Hello World';
        };
        this.scroller = new scroller();
    }

    build() {
        return Row().child(
            Scroll(this.scroller)
                .width('100%')
                .scrollable(ScrollDirection.Vertical)
                .scrollBar(BarState.on)
                .scrollBarColor(Color.Gray)
                .scrollBarWidth(15)
                .edgeEffect(EdgeEffect.None)
                .child(
                    Column().child(
                        new MyText({ messageTitle: '用例1：普通接口调用', result: normalImport }),
                        new MyText({ messageTitle: '用例2：系统入参接口调用', result: systemApi }),
                        new MyText({ messageTitle: '用例3：单层级多共享包调用', result: multiHsp }),
                        new MyText({ messageTitle: '用例4：多层级共享包调用', result: multiLevelHsp }),
                        new MyText({ messageTitle: '用例5：通过har调用共享包接口', result: harImportLibrary }),
                        new MyText({ messageTitle: '用例6：包含so的接口调用', result: nativeso }),
                        new MyText({ messageTitle: '用例7：isolate隔离', result: nativeIsolationso }),
                        new MyText({ messageTitle: '用例8：包含资源的组件调用', url: 'pages/hsp/page8' }),
                        new MyText({ messageTitle: '用例9：共享包装台共享', url: 'pages/hsp/page9' }),
                        new MyText({ messageTitle: '用例10：RichText', url: 'pages/hsp/page10' }),
                        new MyText({ messageTitle: '用例11：Video', url: 'pages/hsp/page11' })
                    )
                )
                .height('100%')
        );
    }
}

class Mytext extends Component {
    constructor(props) {
        super(props);
    }

    build() {
        if (this.props.result === 'success') {
            return Text(this.props.messageTitle + ' ' + this.props.result)
                .padding(10)
                .borderWidth(1);
        } else {
            return Text(this.props.messageTitle + ' ' + 'faild')
                .padding(10)
                .borderWidth(1)
                .fontColor(Color.Red);
        }
    }
}

class MyButton extends Component {
    constructor(props) {
        super(props);
    }

    build() {
        return Button()
        .height(ButtonHeight)
        .type(ButtonType.Capsule)
        .margin({
            top:topSize
        })
        .backgroundColor('#0D9FFB')
        .width(ButtonWidth)
        .child(
            Text(this.props.message)
            .fontSize(WordSize)
            .fontWeight(FontWeight.Bold)
        )
        .onclick(()=>{
            router
                .pushUrl({
                    url:this.props.url
                })
                .then(()=>{
                    //console.log('push page success')
                })
                .catch(()=>{
                    console.error('pushUrl failed in pages/hsp index');
                })
        })
    }
}

export default Index;