import common from '@ohos.app.ability.common'
import { counter } from 'library';
import Want from '@ohos.app.ability.Want';

class Page6 extends Component {
    constructor() {
        super();
        this.state = {
            curCount: counter.getCount()
        };
        this.context = getContext(this);
    }

    startAbilityTest() {
        let want = new Want({
            bundleName: 'com.example.moduletest',
            abilityName: 'Feature1Ability'
        });
        this.context.startAbility(want);
    }

    build() {
        return Row(
            Column(
                Text('当前位于entry，全局计数器的值：' + this.curCount)
                    .fontSize(30)
                    .fontWeight(fontWeight.Bold),
                Button('计数器加1')
                    .height(50)
                    .width('50%')
                    .margin({ bottom: 5 })
                    .onclick(() => {
                        this.curCount = counter.increase();
                    }),
                Button('计数器清零')
                    .height(50)
                    .width('50%')
                    .margin({ bottom: 5 })
                    .onclick(() => {
                        this.curCount = counter.clear();
                    }),
                Button('跳转到feature')
                    .height(50)
                    .width('50%')
                    .backgroundColor('#FFA500')
                    .margin({ bottom: 5 })
                    .onclick(() => {
                        this.startAbilityTest();
                    }),
            ).width('100%')
        ).height('100%');
    }
}