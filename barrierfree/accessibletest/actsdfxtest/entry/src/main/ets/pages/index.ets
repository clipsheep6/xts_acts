import {Core, ExpectExtend,  ReportExtend} from "deccjsunit/index"
import testsuite from '../test/List.test'
import file from '@system.file';
@Entry
@Component
struct Index {

  aboutToAppear() {
    console.info("start run testcase!!!!");
    const core = Core.getInstance();
    const expectExtend = new ExpectExtend({
      'id': 'extend'
    });
    core.addService('expect', expectExtend);
    const reportExtend = new ReportExtend(file);

    core.addService('report', reportExtend);
    core.init();
    core.subscribeEvent('task', reportExtend);
    const configService = core.getDefaultService('config');
    console.info('parameters---->' + JSON.stringify(globalThis.abilityWant.parameters));
    globalThis.abilityWant.parameters.timeout = 70000;
    configService.setConfig(globalThis.abilityWant.parameters);
    testsuite(globalThis.abilityContext);
    core.execute();
  }
  build() {
    Row() {
      Column() {
        Text('DFX')
          .fontSize(15)
          .fontWeight(FontWeight.Bold)
          .margin(10)

        Button('Dfx_0110')
          .fontSize(15)
          .fontWeight(FontWeight.Bold)
          .margin(5)
          .onClick(() => {
          })
        Button('Dfx_0120')
          .fontSize(15)
          .fontWeight(FontWeight.Bold)
          .margin(5)
          .onClick(() => {
          })
        Button('Dfx_0170')
          .fontSize(15)
          .fontWeight(FontWeight.Bold)
          .margin(5)
          .onClick(() => {
          })
      }
      .width('100%')
    }
    .height('100%')
  }
}