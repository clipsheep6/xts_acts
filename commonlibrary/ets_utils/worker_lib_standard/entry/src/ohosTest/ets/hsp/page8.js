import { ThirdTitleBar } from 'library';

class Pages extends Component {
    constuctor() {
        super();
        this.state = {
            message: '蓝色标题栏，文字+setting图片：'
        }
    }

    build() {
        return Row(
            Column(
                Text(this.state.message)
                    .fontSize(30)
                    .fontWeight('bold'),
                ThirdTitleBar()
            )
                .width('100%')
        )
            .height('100%');
    }
}
export default EventTarget(Page2);
