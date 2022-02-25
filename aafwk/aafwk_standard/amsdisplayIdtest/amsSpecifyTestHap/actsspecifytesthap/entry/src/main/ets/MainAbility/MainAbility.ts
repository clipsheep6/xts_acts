import Ability from '@ohos.application.Ability'
import commonEvent from '@ohos.commonevent'

var callBackSeq = "";

function publishCallBack() {
    console.debug("====>Publish CallBack ====>");
}

async function startAbilityProcess(abilityContext, options, parameters) {
    let bundleName;
    let abilityName;

    let idx = parameters.nextStep;
    switch (parameters.step[idx]) {
        case "testA":
            bundleName = "com.example.actsspecifytesthap";
            abilityName = "com.example.actsspecifytesthap.MainAbility";
            break;
        default:
            break;
    }
    parameters.nextStep = ++idx;
    abilityContext.startAbility({
        bundleName: bundleName,
        abilityName: abilityName,
        parameters: parameters,
    }, options, (error, data) => {
        console.log('startAbilityProcess result: ' + JSON.stringify(error) + ", " + JSON.stringify(data))
    })
}

async function onShowProcess() {
    var abilityWant = globalThis.abilityWant;
    var callBackData = "actsspecifytesthap:"
    callBackData += callBackSeq;

    var commonEventPublishData = {
        data: callBackData,
        parameters: {
            displayId: globalThis.abilityWant.parameters['ohos.aafwk.displayId'],
            windowMode: globalThis.abilityWant.parameters['ohos.aafwk.param.windowMode'],
}
    };

    console.log("AbilityMultiInstanceAppA abilityWant = " + JSON.stringify(abilityWant));
    if (abilityWant.parameters.nextStep >= abilityWant.parameters.stepNum) {
        commonEvent.publish("MultiInstanceStartFinish", commonEventPublishData, () => {
            console.log('============>querytestsecond success==========>>')
            callBackSeq = "";
        });
    } else {
        commonEvent.publish("MultiInstanceStartNext", commonEventPublishData, () => {
            callBackSeq = "";
            console.log('============>querytest success==========>>')
            startAbilityProcess(globalThis.abilityContext, globalThis.abilityWant.options, abilityWant.parameters);
        });
    }
}

export default class MainAbility extends Ability {
    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("actsspecifytesthap onCreate")
        callBackSeq += "onCreate";
        globalThis.abilityWant = want;
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("actsspecifytesthap onDestroy")
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("actsspecifytesthap onWindowStageCreate")
        //       callBackSeq += "onWindowStageCreate";
        globalThis.abilityContext = this.context
        windowStage.setUIContent(this.context, "pages/index", null)
        console.log("actsspecifytesthap onWindowStageCreate finish")
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("actsspecifytesthap onWindowStageDestroy")
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("actsspecifytesthap onForeground")
        callBackSeq += "onForeground";
        onShowProcess();
    }

    onBackground() {
        // Ability has back to background
        console.log("actsspecifytesthap onBackground")
    }
};
