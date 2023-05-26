import hilog from '@ohos.hilog';
import Ability from '@ohos.app.ability.UIAbility'
import Window from '@ohos.window'
import quickFixManager from '@ohos.app.ability.quickFixManager';
import commonEvent from '@ohos.commonEvent'
import commonEventManager from '@ohos.commonEventManager';

var ACTS_CallFunction = {
    events: [commonEventManager.Support.COMMON_EVENT_QUICK_FIX_REVOKE_RESULT]
};

let subscriber;

function subscribeCallBack(err, data) {

    console.info("====>subscribeCallBack data:" + JSON.stringify(data));
    if (data.event == commonEventManager.Support.COMMON_EVENT_QUICK_FIX_REVOKE_RESULT && data.parameters.revokeResult == 0){
        globalThis.showTest("Acts_applyQuickFixRevoke", "补丁已卸载")
    }
}

export default class EntryAbility extends Ability {
    onCreate(want, launchParam) {
        hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
        hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onCreate');
        hilog.info(0x0000, 'testTag', '%{public}s', 'want param:' + JSON.stringify(want) ?? '');
        hilog.info(0x0000, 'testTag', '%{public}s', 'launchParam:' + JSON.stringify(launchParam) ?? '');

        globalThis.terminate = () => {
            setTimeout(() => {
                this.context.terminateSelf().then(() => {
                    console.debug("====>terminateSelf end");
                }).catch((err) => {
                    console.debug("====>terminateSelf err:" + JSON.stringify(err));
                });
            }, 0)
        };

        globalThis.revokeQuickFixTest_Promise = (bundleName) => {
            quickFixManager.revokeQuickFix(bundleName).then(() => {
                console.info("====>revokeQuickFix " + bundleName +" ok");
            }).catch((err) => {
                console.info("====>revokeQuickFix " + bundleName +" failed, error code is ", JSON.stringify((err)));
                let commonEventData = {
                    parameters:{
                        num: err.code
                    }
                }
                commonEvent.publish("ACTS_CALL_EVENT", commonEventData, (err) => {
                    console.debug('====>revokeQuickFixTest_Promise call event publish err:' + JSON.stringify(err));
                    globalThis.terminate();
                })
            })
        }

        globalThis.revokeQuickFixTest_Callback = (bundleName) => {
            quickFixManager.revokeQuickFix(bundleName, (err) => {
                console.info("====>revokeQuickFix1 " + bundleName +" ok" + JSON.stringify(err));
                if (err.code == 201){
                    console.info("====>revokeQuickFix2 " + bundleName +" ok" + JSON.stringify(err));
                    let commonEventData = {
                        parameters:{
                            num: err.code
                        }
                    }
                    commonEvent.publish("ACTS_CALL_EVENT", commonEventData, (err) => {
                        console.debug('====>revokeQuickFixTest_Promise call event publish err:' + JSON.stringify(err));
                        globalThis.terminate();
                    })
                }
            })
        }

        commonEvent.createSubscriber(ACTS_CallFunction).then(async (data) => {
            console.info("====>Create Subscribe");
            subscriber = data;
            commonEvent.subscribe(subscriber, subscribeCallBack);
        }).catch((err) => {
            console.info("====>Create Subscribe failed, error code is ", JSON.stringify((err)));
        })

        if (want.action == "Revoke_1100") {
            globalThis.revokeQuickFixTest_Promise("com.acts.actsrevokequickfixapp")
        } else if (want.action == "Revoke_1200") {
            globalThis.revokeQuickFixTest_Callback("com.acts.actsrevokequickfixapp");
        }
    }

    onDestroy() {
        hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
        hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onDestroy');
    }

    onWindowStageCreate(windowStage: Window.WindowStage) {
        // Main window is created, set main page for this ability
        hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
        hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageCreate');

        windowStage.loadContent('pages/Index', (err, data) => {
            if (err.code) {
                hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.ERROR);
                hilog.error(0x0000, 'testTag', 'Failed to load the content. Cause: %{public}s', JSON.stringify(err) ?? '');
                return;
            }
            hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
            hilog.info(0x0000, 'testTag', 'Succeeded in loading the content. Data: %{public}s', JSON.stringify(data) ?? '');
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
        hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageDestroy');
    }

    onForeground() {
        // Ability has brought to foreground
        hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
        hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onForeground');
    }

    onBackground() {
        // Ability has back to background
        hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
        hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onBackground');
    }
}
