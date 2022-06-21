// @ts-nocheck
import file from '@system.file';
import {Core, ExpectExtend, InstrumentLog, ReportExtend} from "deccjsunit/index.ets"
import featureAbility from "@ohos.ability.featureAbility"
import testsuite from "../test/List.test"

@Entry
@Component
struct Index {
  @State private message: string = 'Hello World'

  onPageShow() {
    console.info("dyhlog start run testcase!!!!")
    featureAbility.getWant()
      .then((Want) => {
        const core = Core.getInstance()
        const expectExtend = new ExpectExtend({
          'id': 'extend'
        })
        core.addService('expect', expectExtend)
        const reportExtend = new ReportExtend(file)

        core.addService('report', reportExtend)
        core.init()
        core.subscribeEvent('task', reportExtend)
        const configService = core.getDefaultService('config')
        const timeout = 10000
        configService.setConfig(timeout)
        console.info('parameters---->' + JSON.stringify(Want.parameters))
        configService.setConfig(Want.parameters)
        testsuite()
        core.execute()
        console.info('Operation successful. Data: ' + JSON.stringify(Want));
        console.info('Operation successful. Data: ' + JSON.stringify(Want));
      })
      .catch((error) => {
        console.error('Operation failed. Cause: ' + JSON.stringify(error));
      })
  }

  build() {
    Row() {
      Column() {
        Text(this.message)
          .fontSize(50)
          .fontWeight(FontWeight.Bold)
      }
      .width('100%')
    }
    .height('100%')
  }
}