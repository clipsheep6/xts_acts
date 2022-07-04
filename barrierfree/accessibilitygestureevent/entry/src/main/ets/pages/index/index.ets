import file from '@system.file';
import {Core, ExpectExtend, InstrumentLog, ReportExtend} from "deccjsunit/index"
import testsuite from "../../test/List.test"

@Entry
@Component
struct Index {
    @State message: string = 'accessibilityEvent For Gesture';

    aboutToAppear(){
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
                Text(this.message)
                    .fontSize(50)
                    .fontWeight(FontWeight.Bold)
            }
            .width('100%')
        }
        .height('100%')
    }
}