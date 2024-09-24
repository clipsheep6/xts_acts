/*
* Copyright (c) 2023 Hunan OpenValley Digital Industry Development Co., Ltd.
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

import promptAction from '@ohos.promptAction'
import router from '@ohos.router';
import xml from '@ohos.xml';
import fs from '@ohos.file.fs';
import data_preferences from '@ohos.data.preferences';
import FlushData from '../model/FlushData';
import IotHelper from './model/IotHelper';
import { common } from '@kit.AbilityKit';
import util from '@ohos.util';
import Logger from '../model/Logger';
import { PageCase, TestCaseList } from './model/IotConstants';

const TAG = 'Iot_index';
let path: string = globalThis.dir;
let path1: string = path + '/IOT';

let ColorBackPath = path + '/IOTColorBack.txt';
let txtPath = path1 + '/IOTReport.txt';
let IOTScanTxtPath = path1 + '/IOTScanReport.txt';
let ColorTxtPath = path1 + '/ColorReport.txt';
let xmlPath = path1 + '/IOTTest.xml';

@Entry
@Component
struct Iot_index {
  @State ClearAll: boolean = false;
  private current: number = 0;
  @State count: number = 0;
  @State result: string = '';
  @State TEST: number = 0;
  @State ColorObject: Object[] = [];
  @State ColorTrue: Object[] = [];
  @State ColorTrue2: Object[] = [];

  aboutToAppear(): void {
    IotHelper.getInstance().init(getContext(this) as common.UIAbilityContext);
  }

  aboutToDisappear(): void {
    IotHelper.getInstance().stopConnect();
  }

  async onPageShow() {
    let Test = 0;
    let preferences = await data_preferences.getPreferences(getContext(this), 'mystore');

    await preferences.get('IOT', 0).then((data) => {
      Test = data as number;
      Logger.info(TAG, `Succeeded in getting value of 'Wifi'. Data:  =${data}`);
    });

    if (Test != 1) {
      let fd = fs.openSync(ColorBackPath, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
      for (let i = 0; i < TestCaseList.length; i++) {
        let log = (TestCaseList[i].title + ';' + 'none ' + ';').toString();
        fs.writeSync(fd.fd, log);
      }
      fs.closeSync(fd);
    }
    preferences.put('IOT', 1).then(() => {
      Logger.info(TAG, `Succeeded in putting value of 'IOT'.`);
    });
    preferences.flush().then(() => {
      Logger.info(TAG, `Succeeded in flushing.`);
    });
    this.TEST = Test;

    let opt = fs.openSync(ColorBackPath, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
    let buff = new ArrayBuffer(40960);
    let RD = fs.readSync(opt.fd, buff);
    let uint8Array = new Uint8Array(buff, 0, RD);
    let ColorBack: string = String.fromCharCode(...uint8Array);
    let TestList = ColorBack.split(';');
    for (let i = 0; i < Math.floor(TestList.length / 2); i++) {
      this.ColorObject[i] = TestList[i * 2+1];
    }
    fs.closeSync(opt);

    if (this.count === 1) {
      let params = router.getParams() as Record<string, string>;
      this.result = params['result'];
      let titles = params['title'];
      let name1 = '刚刚点进了哪个用例：' + titles;
      let results = this.result;
      let WriteTitle = (titles).toString();
      let number = WriteTitle.length + 7;
      let Index = ColorBack.indexOf(WriteTitle);

      if (this.result === 'true ') {
        this.ColorObject[this.current] = 'true ';
        let Log = (titles + ';' + 'true ' + ';');
        let key = ColorBack.substring(Index, Index + number);
        let FD = fs.openSync(ColorBackPath, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        ColorBack = ColorBack.replace(key, Log);
        let buffer = new ArrayBuffer(4096);
        let rd = fs.readSync(FD.fd, buffer);
        let Report = ColorBack.substring(0, rd);
        fs.closeSync(FD);
        let Fd = fs.openSync(ColorBackPath, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        fs.writeSync(Fd.fd, Report);
        this.FileWrite(name1, results, titles)
      } else if (this.result === 'false') {
        this.ColorObject[this.current] = 'false';
        let Log = (titles + ';' + 'false' + ';');
        let key = ColorBack.substring(Index, Index + number);
        let FD = fs.openSync(ColorBackPath, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        ColorBack = ColorBack.replace(key, Log);
        let buffer = new ArrayBuffer(4096);
        let rd = fs.readSync(FD.fd, buffer);
        let Report = ColorBack.substring(0, rd);
        fs.closeSync(FD);
        let Fd = fs.openSync(ColorBackPath, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        fs.writeSync(Fd.fd, Report);
        this.FileWrite(name1, results, titles);
      } else {
        this.ColorObject[this.current] = this.ColorObject[this.current];
      }
    }
    for (let i = 0; i < TestList.length; i++) {
      if (this.ColorObject[i] === 'true ') {
        this.ColorTrue[i] = 0x263526
        this.ColorTrue2[i] = 0x0CB60C
      } else if (this.ColorObject[i] === 'false') {
        this.ColorTrue[i] = 0x380303
        this.ColorTrue2[i] = 0xd60a0a
      } else {
        this.ColorTrue[i] = 0x000000
        this.ColorTrue2[i] = 0x000000
      }
    }
  }

  build() {
    Column() {
      Row() {
        Button() {
          Image($r('app.media.ic_public_back'))
            .width('20vp')
            .height('18vp')
        }
        .backgroundColor(Color.Black)
        .size({ width: '40vp', height: '30vp' })
        .onClick(() => {
          router.back();
        })

        Row() {
          Text('IOT')
            .fontColor(Color.White)
            .fontSize('22fp')
        }.justifyContent(FlexAlign.SpaceAround)
        .backgroundColor(Color.Black)

        Row() {
          Button() {
            Image($r('app.media.ic_public_delete'))
              .width('30vp')
              .height('30vp')
          }.backgroundColor(Color.Black)
          .onClick(() => {
            AlertDialog.show(
              {
                message: "是否删除所有记录",
                primaryButton: {
                  value: 'Yes',
                  action: () => {
                    this.ClearAll = true;
                    this.ColorObject.forEach((value, index) => {
                      this.ColorObject[index] = 'none ';
                    });
                    this.ClearText();
                    router.replaceUrl({
                      url: 'pages/IOT/IOT_index',
                    })
                    promptAction.showToast({
                      message: '结果已删除', duration: 1000
                    });
                  }
                },
                secondaryButton: {
                  value: 'No',
                  action: () => {

                  }
                },
                cancel: () => {

                }
              }
            )
          })

          Button() {
            Image($r('app.media.ic_public_save'))
              .width('30vp')
              .height('30vp')
              .margin({ left: 30 })
          }.backgroundColor(Color.Black)
          .onClick(() => {
            this.ReadTextParseXml();
            AlertDialog.show({
              message: "报告已生成，如需查看通过命令行输入'hdc_std file recv /data/app/el2/100/base/com.example.actsvalidator/haps/entry/files/IOT/IOTTest.xml -本地路径'",
              confirm: {
                value: 'OK',
                action: () => {
                  promptAction.showToast({
                    message: '报告已生成', duration: 1000
                  })
                }
              },
              cancel: () => {
                promptAction.showToast({
                  message: '报告已生成', duration: 1000
                });
              }
            })
          })
        }
      }
      .width('100%')
      .justifyContent(FlexAlign.SpaceAround)
      .margin({ top: '15vp' })
      .height('6%')
      .backgroundColor(Color.Black)

      List() {
        ForEach(TestCaseList, (item: PageCase, index) => {
          ListItem() {
            Row() {
              Text(item.title)
                .fontSize(20)
                .fontColor(Color.White)
            }
            .width('100%')
            .height(50)
            .alignItems(VerticalAlign.Center)
            .linearGradient(
              this.count === 0 && this.TEST === 0 ?
                { angle: 90, colors: [[0x000000, 0.0], [0x000000, 1.0]] } :
                {
                  angle: 90,
                  colors: [[this.ColorTrue[index] as number, 0.0], [this.ColorTrue2[index] as number, 0.618]]
                }
            )
            .onClick(() => {
              this.count = 1;
              this.ClearAll = false;
              this.current = index;
              router.push({
                url: item.uri,
                params: { title: item.title }
              })
            })
          }
        }, (item: PageCase) => item.title)
      }
      .width('100%')
      .height('92%')
      .divider({ strokeWidth: 1, color: Color.Grey })
    }
    .width('100%')
    .height('100%')
    .backgroundColor(Color.Black)
  }

  ClearText() {
    fs.rmdirSync(path1);
    fs.mkdirSync(path1);
    fs.openSync(IOTScanTxtPath, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
    fs.openSync(ColorTxtPath, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
    let fd = fs.openSync(ColorBackPath, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
    for (let i = 0; i < TestCaseList.length; i++) {
      let log = (TestCaseList[i].title + ';' + 'none ' + ';').toString();
      fs.writeSync(fd.fd, log);
    }
    FlushData.ResetIOT();
  }

  ReadTextParseXml() {
    let ReportPath = path1 + '/IOTReport.txt';
    let dir = fs.listFileSync(path1);
    Logger.info(TAG, `ReadTextParseXml dir =${dir.join()}`);
    while (dir) {
      let OP = fs.openSync(ReportPath, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
      let buf = new ArrayBuffer(40960);
      let RD = fs.readSync(OP.fd, buf);
      Logger.info(TAG, `ReadTextParseXml RD =${RD}`);
      let report: string = String.fromCharCode(...new Uint8Array(buf));

      let str1 = report.split(";");
      let title: string[] = [];
      let result: string[] = [];
      for (let i = 0; i < Math.floor(str1.length / 2); i++) {
        title[i] = str1[i*2];
        result[i] = str1[i * 2+1];
      }
      let FailIndex = report.indexOf('false');
      let FailNum = 0;
      while (FailIndex != -1) {
        Logger.info(TAG, `FailIndex =${FailIndex}`);
        FailNum++;
        FailIndex = report.indexOf('false', FailIndex + 1);
      }
      let failNum = (FailNum).toString();
      let PassIndex = report.indexOf('true ');
      let PassNum = 0;
      while (PassIndex != -1) {
        Logger.info(TAG, `PassIndex =${PassIndex}`);
        PassNum++;
        PassIndex = report.indexOf('true ', PassIndex + 1);
      }
      let TestNum = FailNum + PassNum;
      let testNum = (TestNum).toString();
      let arrayBuffer = new ArrayBuffer(40960);
      let bufView = new DataView(arrayBuffer);
      let serializer = new xml.XmlSerializer(bufView);
      serializer.setDeclaration();
      serializer.startElement("testsuite");
      serializer.setAttributes("name", "ActsIOTTest");
      serializer.setAttributes("time", "*");
      serializer.setAttributes("errors", "0");
      serializer.setAttributes("disabled", "0");
      serializer.setAttributes("failures", failNum);
      serializer.setAttributes("ignored", "0");
      serializer.setAttributes("tests", testNum);
      serializer.setAttributes("message", "*");
      serializer.setAttributes("modulename", "ActsIOTTest");
      for (let i = 0; i < title.length; i++) {
        serializer.startElement("testcase");
        serializer.setAttributes("name", String(title[i]));
        serializer.setAttributes("status", "run");
        serializer.setAttributes("time", "*");
        serializer.setAttributes("classname", "ActsIOTTest");
        serializer.setAttributes("result", String(result[i]));
        serializer.setAttributes("level", "*");
        serializer.setAttributes("message", "*");
        serializer.endElement();
      }
      serializer.endElement();

      let that = new util.TextDecoder('utf-8');
      let array = new Uint8Array(arrayBuffer);
      let serializerStr = that.decode(array);
      console.info(xmlPath);
      try {
        console.error(TAG, "write xmlPath =" + xmlPath);
        let xmlfd = fs.openSync(xmlPath, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        fs.writeSync(xmlfd.fd, serializerStr);
      } catch (err) {
        console.error(TAG, "read xmlPath =" + xmlPath + "error:" + err);
      } finally {
        fs.closeSync(fs.openSync(xmlPath, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE));
      }
      return;
    }
  }

  FileWrite(name1: string, results: string, titles: string) {
    let fd = fs.openSync(txtPath, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
    let buf = new ArrayBuffer(4096);
    let RD = fs.readSync(fd.fd, buf);
    let uint8Array = new Uint8Array(buf, 0, RD);
    console.info("RRRRRRRRRRd" + RD);
    let report: ESObject = String.fromCharCode(...uint8Array);
    let WriteTitle = (titles).toString();
    let WriteResult = (results).toString();
    let number = WriteTitle.length + WriteResult.length + 2;
    let Index: number = report.indexOf(WriteTitle);
    let Log = (titles + ";" + results + ";").toString();
    if (Index == -1) {
      fs.writeSync(fd.fd, Log);
    } else if (Index != -1) {
      let key: string = report.substring(Index, Index + number);
      let FD = fs.openSync(txtPath, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
      report = report.replace(key, Log);
      let buffer = new ArrayBuffer(4096);
      let rd = fs.readSync(FD.fd, buffer);
      let Report: string = report.substring(0, rd);
      fs.closeSync(FD);
      let Fd = fs.openSync(txtPath, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
      fs.writeSync(Fd.fd, Report);
    }
  }
}

