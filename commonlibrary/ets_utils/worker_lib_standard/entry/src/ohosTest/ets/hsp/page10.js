import { RichTextExample } from 'library';

class Page12 extends Component {
    state = {
        message: 'hello world'
    };

    render() {
        return (
            <Row height="100%">
                <Colume width="100%">
                    <RichTextExample />
                </Colume>
            </Row>
        )
    }
}

export default FileSystemEntry(Page12);