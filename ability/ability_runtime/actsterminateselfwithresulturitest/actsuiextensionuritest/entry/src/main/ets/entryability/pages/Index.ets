// 组件使用示例：
import Want from '@ohos.app.ability.Want';
import fs from '@ohos.file.fs';
import util from '@ohos.util';
import commonEventManager from '@ohos.commonEventManager';

@Entry
@Component
struct Index {
  @State message: string = 'Hello World'
  @State audioUri: string | undefined = undefined
  @State photoUri: string | undefined = undefined
  @State docsUri: string | undefined = undefined
  private myProxy: UIExtensionProxy | null = null;
  @State fileContent: string = "NaN";
  want: Want = {
    bundleName: "com.example.uiextensionprovider",
    abilityName: "UIExtensionProvider",
    moduleName: 'entry',
    parameters: {
      'ability.want.params.uiExtensionType': 'sys/commonUI',
      "x": 12345,
      "y": "data"
    }
  }

  build() {
    Row() {
      Column() {
        UIExtensionComponent(this.want)
          .size({ width: "100%", height: "75%" })
          .borderWidth(2)
          .onRemoteReady((proxy: UIExtensionProxy) => {
            this.message = "remote ready"
            this.myProxy = proxy
          })
          .onReceive((data: Object) => {
            this.message = JSON.stringify(data)
            const obj: object = JSON.parse(this.message)
            this.audioUri = obj["audioUri"]
            this.photoUri = obj["photoUri"]
            this.docsUri = obj["docsUri"]
            console.info('DSZ:: recv audioUri:' + this.audioUri)
            console.info('DSZ:: recv photoUri:' + this.photoUri)
            console.info('DSZ:: recv docsUri:' + this.docsUri)
          })
        Column({ space: 10 }) {
          Row() {
            Text('读取的文件内容：')
            Text(this.fileContent).fontColor(Color.Red)
          }

          Row() {
            Text('文件路径：')
            Text(this.message).fontColor(Color.Red)
          }

          Row({ space: 10 }) {
            Button("访问Docs文件—读写").onClick(() => {
              this.ReadDocsFileNew(this.docsUri)
            }).height(45)
            Button("访问Audio文件-读写").onClick(() => {
              this.ReadAudioFileNew(this.audioUri)
            }).height(45)
          }

          Row({ space: 10 }) {
            Button("访问Photos文件-读写").onClick(() => {
              this.ReadPhotosFileNew(this.photoUri)
            }).height(45)
            Button("访问Bundle文件-读写").onClick(() => {
              this.ReadBundleFile()
            }).height(45)
          }

          Button("访问Bundle文件-只读").onClick(() => {
            this.ReadBundleFileReadOnly()
          }).height(45)
        }
      }
      .width("100%")
    }
    .height('80%')
  }

  ReadDocsFileNew(uri: string | undefined) {
    try {
      console.info('DSZ:: file uri:', uri)
      let file = fs.openSync(uri, fs.OpenMode.READ_WRITE);
      let buf = new ArrayBuffer(4096);
      let array = new Uint8Array(buf);
      let readLen = fs.readSync(file.fd, buf);
      console.info('DSZ:: file length:', readLen)
      let textDecoder = util.TextDecoder.create("utf-8", { ignoreBOM: true });
      this.fileContent = textDecoder.decodeWithStream(array, { stream: false });
      console.info("DSZ:: the content of file:" + this.fileContent);
      fs.closeSync(file);
      this.sendSuccess();
    } catch (err) {
      this.fileContent = JSON.stringify(err.code)
      console.error(`DSZ readFile fail: ${JSON.stringify(err)}`);
      this.sendError();
    }
  }

  ReadAudioFileNew(uri: string | undefined) {
    try {
      console.info('DSZ:: file uri:', uri)
      let file = fs.openSync(uri, fs.OpenMode.READ_WRITE);
      let buf = new ArrayBuffer(4096);
      let array = new Uint8Array(buf);
      let readLen = fs.readSync(file.fd, buf);
      console.info('DSZ:: file length:', readLen)
      let textDecoder = util.TextDecoder.create("utf-8", { ignoreBOM: true });
      this.fileContent = textDecoder.decodeWithStream(array, { stream: false });
      console.info("DSZ:: the content of file:" + this.fileContent);
      fs.closeSync(file);
      this.sendSuccess();
    } catch (err) {
      this.fileContent = JSON.stringify(err.code)
      console.error(`DSZ readFile fail: ${JSON.stringify(err)}`);
      this.sendError();
    }
  }

  ReadPhotosFileNew(uri: string | undefined) {
    try {
      console.info('DSZ:: file uri:', uri)
      let file = fs.openSync(uri, fs.OpenMode.READ_WRITE);
      let buf = new ArrayBuffer(4096);
      let array = new Uint8Array(buf);
      let readLen = fs.readSync(file.fd, buf);
      console.info('DSZ:: file length:', readLen)
      let textDecoder = util.TextDecoder.create("utf-8", { ignoreBOM: true });
      this.fileContent = textDecoder.decodeWithStream(array, { stream: false });
      console.info("DSZ:: the content of file:" + this.fileContent);
      fs.closeSync(file);
      this.sendSuccess();
    } catch (err) {
      this.fileContent = JSON.stringify(err.code)
      console.error(`DSZ readFile fail: ${JSON.stringify(err)}`);
      this.sendError();
    }
  }

  ReadBundleFile() {
    let file_dir = 'file://com.example.uiextensionprovider/data/storage/el2/base/haps/entry/files/upms_test_file.txt'
    try {
      console.info('DSZ:: file uri:', file_dir)
      let file = fs.openSync(file_dir, fs.OpenMode.READ_WRITE);
      let buf = new ArrayBuffer(4096);
      let array = new Uint8Array(buf);
      let readLen = fs.readSync(file.fd, buf);
      console.info('DSZ:: file length:', readLen)
      let textDecoder = util.TextDecoder.create("utf-8", { ignoreBOM: true });
      this.fileContent = textDecoder.decodeWithStream(array, { stream: false });
      console.info("DSZ:: the content of file:" + this.fileContent);
      fs.closeSync(file);
      this.sendSuccess();
    } catch (err) {
      this.fileContent = JSON.stringify(err.code)
      console.error(`DSZ readFile fail: ${JSON.stringify(err)}`);
      this.sendError();
    }
  }

  ReadBundleFileReadOnly() {
    let file_dir = 'file://com.example.uiextensionprovider/data/storage/el2/base/haps/entry/files/upms_test_file.txt'
    try {
      console.info('DSZ:: file uri:', file_dir)
      let file = fs.openSync(file_dir, fs.OpenMode.READ_ONLY);
      let buf = new ArrayBuffer(4096);
      let array = new Uint8Array(buf);
      let readLen = fs.readSync(file.fd, buf);
      console.info('DSZ:: file length:', readLen)
      let textDecoder = util.TextDecoder.create("utf-8", { ignoreBOM: true });
      this.fileContent = textDecoder.decodeWithStream(array, { stream: false });
      console.info("DSZ:: the content of file:" + this.fileContent);
      fs.closeSync(file);
      this.sendSuccess();
    } catch (err) {
      this.fileContent = JSON.stringify(err.code)
      console.error(`DSZ readFile fail: ${JSON.stringify(err)}`);
      this.sendError();
    }
  }

  sendSuccess() {
    let options: commonEventManager.CommonEventPublishData = {
      parameters: {
        result: 'SUCCESS'
      }
    };
    commonEventManager.publish('GET_SUCCESS', options, (err) => {
    });
  }

  sendError() {
    let options: commonEventManager.CommonEventPublishData = {
      parameters: {
        result: this.fileContent,
        code: ''
      }
    };
    commonEventManager.publish('GET_ERROR', options, (err) => {
    });
  }
}

interface ErrorObject {
  code: number;
  name: string;
  message: string;
}