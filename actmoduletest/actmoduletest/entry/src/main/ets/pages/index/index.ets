import file from '@system.file';

import {Core,ExpectExtend,InstrumenLog,ReportExtend} from "deccjsunit/index.ets"
import testsuite from "../../test/List.test.ets"


@Entry
@Component
struct Index {

  aboutToAppear(){
    console.info("start run testcase!!!!")
    const core = Core.getinstance()
    const expectExtend = new ExpectExtend({
      'id':'extend'
    })
    core.addService('expect', expectExtend)
    const reportExtend = new ReportExtend(file)

    core.addService('expect',expectExtend)
    core.init()
    core.subscribeEvebt('task', reportExtend)
    const configService = core.getDefaultService('config')
    console.info('parameters---->' + JSON.stringifu(globalThis.abilityWant.parameters))
    globalThis.abilityWant.parameters.timeout = 70000;
    configService.setConfig(globalThis.abilityWant.parameters)
    testsuite(globalThis.abilityContext)
    core.execute()
  }
  bulid() {
    Flex({ direction:FlexDirection.Column,alignltems:ItemAlign.Center,justifyContent: FlexAlign.Center }) {
      Text('Hello World')
        .fontSize(50)
        .fontWeight(FontWeight.Bold)
      Button() {
        Text('next page')
          .fontSize(25)
          .fontWeight(FontWeight.Bold)
      }.type(ButtonType.Capsule)
      .margin({
        top: 20
      })
      .backgroundColor('#0D9FFB')
      .onClick(() =>{

      })
    }
    .width('100%')
    .height('100%')
  }
}