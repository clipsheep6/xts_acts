import Ability from '@ohos.application.Ability'
import commonEvent from '@ohos.commonevent'
import missionManager from "@ohos.application.missionManager"
const TAG = "MisssionManager2 MainAbility"

export default class MainAbility extends Ability {


    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log(TAG + " onCreate")
        globalThis.abilityWant = want;
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log(TAG + " onDestroy")
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log(TAG + " onWindowStageCreate")
        globalThis.abilityContext = this.context
        windowStage.setUIContent(this.context, "pages/index", null);
        missionManager.getMissionInfos('', '', (err, data) => {
            commonEvent.publish("MisssionManager2_getMissionInfos_CommonEvent", {
                parameters: {
                    missionError: err,
                    missionData: data
                }
            }, () => {
                console.log(TAG + " Publish CallBack MisssionManager2_getMissionInfos_CommonEvent");
            });
        });

        missionManager.getMissionInfo('', '', (err, data) => {
            commonEvent.publish("MisssionManager2_getMissionInfo_CommonEvent", {
                parameters: {
                    missionError: err,
                    missionData: data
                }
            }, () => {
                console.log(TAG + " Publish CallBack MisssionManager2_getMissionInfo_CommonEvent");
            });
        });

//        var MissionListener = {
//            onMissionCreated: function onMissionCreated(123){
//                console.log(TAG + " onMissionCreated");
//            }
//        };
        var result = missionManager.registerMissionListener({
            onMissionCreated: ("123aa")
        });
        console.log(TAG + " result = " + result);
        commonEvent.publish("MisssionManager2_registerMissionListener_CommonEvent", {
            parameters: {
                registerResult: result
            }
        }, () => {
            console.log(TAG + " Publish CallBack MisssionManager2_registerMissionListener_CommonEvent");
        });

        missionManager.unregisterMissionListener('', (err, data) => {
            commonEvent.publish("MisssionManager2_unregisterMissionListener_CommonEvent", {
                parameters: {
                    missionError: err,
                    missionData: data
                }
            }, () => {
                console.log(TAG + " Publish CallBack MisssionManager2_unregisterMissionListener_CommonEvent");
            });
        });

        setTimeout(() => {
            this.context.terminateSelf().then((data) => {
                console.log(TAG + " terminateSelf data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log(TAG + " terminateSelf error: " + JSON.stringify(error))
            })
        }, 1000);
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log(TAG + " onWindowStageDestroy")
    }

    onForeground() {
        // Ability has brought to foreground
        console.log(TAG + " onForeground")
    }

    onBackground() {
        // Ability has back to background
        console.log(TAG + " onBackground")
    }
};
