import Ability from '@ohos.application.Ability'
import commonEvent from '@ohos.commonevent'

export default class MainAbility2 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MainAbility2 onCreate");
        //    globalThis.abilityWant = want;
        commonEvent.publish("mainAbility2_onCreate", () => {
            console.log("MainAbility2 Publish CallBack mainAbility2_onCreate")
        });

        var that = this;
        function SubscribeCallBack_Stop(err, data) {
            console.log("MainAbility2 Stop CallBack data:" + JSON.stringify(data));
            if(data.event == "mainAbility2_stop"){
                that.context.terminateSelf().then((data) => {
                    console.log("MainAbility2EventTest terminateSelf data: " + JSON.stringify(data))
                }).catch((error) => {
                    console.log("MainAbility2EventTest terminateSelf error: " + JSON.stringify(error))
                })
            }
        }
        var subscriberInfo_Stop = {
            events: ["mainAbility2_stop"]
        }
        var Subscriber2 = "";
        commonEvent.createSubscriber(subscriberInfo_Stop).then(async (data) => {
            console.log("====>Create MainAbility2 Stop====>");
            Subscriber2 = data;
            await commonEvent.subscribe(Subscriber2, SubscribeCallBack_Stop);
        });
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("MainAbility2 onDestroy");
        commonEvent.publish("mainAbility2_onDestroy", () => {
            console.log("MainAbility2 Publish CallBack mainAbility2_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("MainAbility2 onWindowStageCreate");
        commonEvent.publish("mainAbility2_onWindowStageCreate", () => {
            console.log("MainAbility2 Publish CallBack mainAbility2_onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("MainAbility2 onWindowStageDestroy") ;
        commonEvent.publish("mainAbility2_onWindowStageDestroy", () => {
            console.log("MainAbility2 Publish CallBack mainAbility2_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("MainAbility2 onForeground");
        commonEvent.publish("mainAbility2_onForeground", () => {
            console.log("MainAbility2 Publish CallBack mainAbility2_onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("MainAbility2 onBackground");
        commonEvent.publish("mainAbility2_onBackground", () => {
            console.log("MainAbility2 Publish CallBack mainAbility2_onBackground")
        });
    }
};
