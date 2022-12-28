/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
import prompt from '@ohos.prompt';
import router from '@ohos.router';
import fileio from '@ohos.fileio';
import xml from '@ohos.xml';
import fileIO from '@ohos.fileio';
import util from '@ohos.util';

const TAG = 'ParseXML';
let path = globalThis.dir;
let path1;
path1 = path + '/report1';



@Entry
@Component
struct IndexPage {
  @State BackColor: string = '#ff808080'
  @State ClearAll : boolean = false
  private current : number = undefined
  @State count : number = 0
  @State result : string = ''
  private TestCaseList = [
    {title:'Scroll List',MainTitle:false,uri:'pages/ArkUI/ScrollListTest',bgc:'#ff808080'},
    {title:'TouchMove',MainTitle:false,uri:'pages/ArkUI/TouchMoveTest',bgc:'#ff808080'},
    {title:'PinchGesture',MainTitle:false,uri:'pages/ArkUI/PinchGestureTest',bgc:'#ff808080'},
    {title:'RotationGesture',MainTitle:false,uri:'pages/ArkUI/RotationGestureTest',bgc:'#ff808080'},
    {title:'SwipeGesture',MainTitle:false,uri:'pages/ArkUI/SwipeGestureTest',bgc:'#ff808080'},
    {title:'LongPressGesture',MainTitle:false,uri:'pages/ArkUI/LongPressGesture',bgc:'#ff808080'},
    {title:'TapGesture',MainTitle:false,uri:'pages/ArkUI/TapGesture',bgc:'#ff808080'},
    {title:'PanGesture',MainTitle:false,uri:'pages/ArkUI/PanGesture',bgc:'#ff808080'},
    {title:'CanvasFillStyle',MainTitle:false,uri:'pages/ArkUI/CanvasFillStyle',bgc:'#ff808080'},
    //*在此处继续填充用例title、uri等信息
    {title:'CanvasLineWidth',MainTitle:false,uri:'pages/ArkUI/CanvasLineWidth',bgc:'#ff808080'},
    {title:'CanvasStrokeStyle',MainTitle:false,uri:'pages/ArkUI/CanvasStrokeStyle',bgc:'#ff808080'},
    {title:'CanvasLineCap',MainTitle:false,uri:'pages/ArkUI/CanvasLineCap',bgc:'#ff808080'},
    {title:'CanvasLineJoin',MainTitle:false,uri:'pages/ArkUI/CanvasLineJoin',bgc:'#ff808080'},
    {title:'CanvasMiterLimit',MainTitle:false,uri:'pages/ArkUI/CanvasMiterLimit',bgc:'#ff808080'},
    {title:'CanvasFont',MainTitle:false,uri:'pages/ArkUI/CanvasFont',bgc:'#ff808080'},
    {title:'CanvasTextAlign',MainTitle:false,uri:'pages/ArkUI/CanvasTextAlign',bgc:'#ff808080'},
    {title:'CanvasGlobalAlpha',MainTitle:false,uri:'pages/ArkUI/CanvasGlobalAlpha',bgc:'#ff808080'},
    {title:'CanvasLineDashOffset',MainTitle:false,uri:'pages/ArkUI/CanvasLineDashOffset',bgc:'#ff808080'},
    {title:'CanvasGlobalCompositeOperation',MainTitle:false,uri:'pages/ArkUI/CanvasGlobalCompositeOperation',bgc:'#ff808080'},
    {title:'CanvasShadowBlur',MainTitle:false,uri:'pages/ArkUI/CanvasShadowBlur',bgc:'#ff808080'},
    {title:'CanvasShadowColor',MainTitle:false,uri:'pages/ArkUI/CanvasShadowColor',bgc:'#ff808080'},
    {title:'CanvasShadowOffsetX',MainTitle:false,uri:'pages/ArkUI/CanvasShadowOffsetX',bgc:'#ff808080'},
    {title:'CanvasShadowOffsetY',MainTitle:false,uri:'pages/ArkUI/CanvasShadowOffsetY',bgc:'#ff808080'},
    {title:'CanvasImageSmoothingEnabled',MainTitle:false,uri:'pages/ArkUI/CanvasImageSmoothingEnabled',bgc:'#ff808080'},
  ]
  onPageShow(){
    if (this.count === 1){
      // var result : boolean = router.getParams()['result'];
      this.result = router.getParams()['result'];
      let titles = router.getParams()['title'];
      let name1 = '刚刚点进了哪个用例：'+ titles;
      let results = this.result;
      filewrite(name1,results,titles)
      if (this.result === 'Pass'){
        this.BackColor = '#ff008000'
      }
      else if (this.result === 'Fail'){
        this.BackColor = '#ffff0000'
      }
      else if (this.result === 'None'){
        this.BackColor = '#ff808080'
      }
      this.TestCaseList[this.current].bgc = this.BackColor
      console.info('是否改变：' +this.BackColor)
      console.info('list颜色：'+ this.TestCaseList[this.current].bgc)
    }

  }
  build(){
    Column(){
      Row() {
        Button() {
          Image($r('app.media.ic_public_back')).width('20vp').height('18vp')
        }.backgroundColor(Color.Black)
        .onClick(() => {
          router.back()
        })
        Row(){
          Text('ArkUI SubSystem')
            .fontColor(Color.White)
            .fontSize('22fp')
        }.justifyContent(FlexAlign.SpaceAround).backgroundColor(Color.Black)
        Row() {
          Button(){
            Image($r('app.media.ic_public_delete'))
              .width('30vp')
              .height('30vp')
          }.backgroundColor(Color.Black)
          .onClick(() => {
            this.ClearAll = true;
            this.TestCaseList.forEach((value, index) => {
              this.TestCaseList[index].bgc =  '#ff808080'
            });
            this.ClearText();
            prompt.showToast({
              message: '结果已删除', duration: 1000
            })
          })
          Button(){
            Image($r('app.media.ic_public_save'))
              .width('30vp')
              .height('30vp')
              .margin({ left: 30 })
          }.backgroundColor(Color.Black)
          .onClick(() => {
            this.ReadTextParseXml();
            prompt.showToast({
              message: '报告已生成', duration: 1000
            })
          })
        }
      }.width('100%').justifyContent(FlexAlign.SpaceAround).margin({top:'15vp'}).height('6%')
      List({space:5}){
        ForEach(this.TestCaseList,(item,index) => {
          ListItem(){
            Row(){
              Text(item.title).fontSize(16).fontColor(Color.Black)
              Text(this.BackColor.toString()).visibility(Visibility.None)
            }.width('100%').height(50).alignItems(VerticalAlign.Center).backgroundColor(this.ClearAll===true?'#ff808080':this.TestCaseList[index].bgc)
            .onClick(( )=>{
              this.count = 1
              this.ClearAll=false
              this.current = index
              console.info('current:'+this.current+'当前背景色：'+this.TestCaseList[index].bgc+'Index:'+index)
              router.push({
                url: item.uri,
              })
            })
          }
        },item  => item.title)
      }.width('100%')
    }.width('100%').height('100%').backgroundColor(Color.Black)
  }
  ClearText(){
    fileio.rmdirSync(path1);
    fileio.mkdirSync(path1);
  }
  ReadTextParseXml(){
    let ReportPath = path1 + '/report1.txt';
//    try {
//      fileio.accessSync(ReportPath);
//    } catch(err) {
//      console.info("accessSync failed with error:"+ err);
//    }
    let dir = fileio.opendirSync(path1);
    console.info("ssssss"+dir);
    while (dir) {
      let OP = fileio.openSync(ReportPath, 0o100 | 0o2002, 0o664);
      let buf = new ArrayBuffer(40960);
      let RD = fileio.readSync(OP,buf);
      console.info("ddddd"+RD);
      let report;
      function ab2str(buf) {
        return report = String.fromCharCode.apply(null,new Uint8Array(buf));
      }
      ab2str(buf);
      let str1 = report.split(";");
      let title = [];
      let result = [];
      for(let i=0; i<Math.floor(str1.length/2); i++){
        title[i] = str1[i*2];
        result[i] = str1[i*2+1];
      }
      let arrayBuffer = new ArrayBuffer(40960);
      let bufView = new DataView(arrayBuffer);
      let serializer = new xml.XmlSerializer(bufView);
      serializer.setDeclaration();
      serializer.startElement("testsuite");
      serializer.setAttributes("name","ActsArkUITest");
      for(let i=0; i<title.length; i++){
        serializer.startElement("testcase");
        serializer.setAttributes("name",String(title[i]));
        serializer.setAttributes("result",String(result[i]));
        serializer.endElement();
      }
      serializer.endElement();

      let that = new util.TextDecoder('utf-8');
      let array = new Uint8Array(arrayBuffer);
      let serializerStr = that.decode(array);
      let xmlPath = path1 + "/ArkUITest.xml";
      console.info(xmlPath);
      try{
        console.error(TAG,"write xmlPath =" +xmlPath);
        var xmlfd = fileIO.openSync(xmlPath, 0o102, 0o666);
        fileIO.writeSync(xmlfd,serializerStr);
      }catch(err){
        console.error(TAG,"read xmlPath =" + xmlPath + "error:" + err);
      }finally{
        fileIO.closeSync(xmlfd);
      }
      return
    }
  }
}
function filewrite(name1,results,titles){
  let txtpath = path1 + '/report1.txt';
  let fd = fileio.openSync(txtpath, 0o100 | 0o2002, 0o664);
  let Log = (titles+";"+results+";").toString();
  let num = fileio.writeSync(fd,Log);
  console.info('aaaaaaaaa'+num);
}