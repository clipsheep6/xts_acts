import { VideoCreateComponent } from 'library';

class Page13 extends Component {
    constructor() {
        super();
        this.state = {
            message: 'Hello World'
        };
    }

    build() {
        return Row()
            .height('100%')
            .append(
                Column()
                    .width('100%')
                    .append(
                        VideoCreateComponent()
                    )
            );
    }
}

Entry(Page13);