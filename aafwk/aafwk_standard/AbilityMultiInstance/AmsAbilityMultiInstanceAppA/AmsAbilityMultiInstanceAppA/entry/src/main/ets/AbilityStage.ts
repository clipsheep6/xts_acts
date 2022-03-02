import AbilityStage from "@ohos.application.AbilityStage"

const ONACCEPTWANT_KEY_NOTSET_ID = -1;
const ONACCEPTWANT_KEY_UNDEFINED_ID = -2;
var onAcceptWantCalledSeq;

export default class MyAbilityStage extends AbilityStage {
    onCreate() {
        console.log("AbilityMultiInstanceAppA MyAbilityStage onCreate")
        globalThis.stageOnCreateRun = 1;
        globalThis.stageContext = this.context;
    }

    onAcceptWant(want) {
        console.log("AbilityMultiInstanceAppA onAcceptWant called want:" + JSON.stringify(want));
        if ((want.parameters == undefined) || (want.parameters.startId == undefined)) {
            console.log("AbilityMultiInstanceAppA specified param err");
            return;
        }

        if (want.parameters.startId == ONACCEPTWANT_KEY_NOTSET_ID) {
            return;
        } else if (want.parameters.startId == ONACCEPTWANT_KEY_UNDEFINED_ID) {
           return undefined;
        }

        var abilityId = want.parameters.startId.toString();
        onAcceptWantCalledSeq = "onAcceptWantCalled";
        onAcceptWantCalledSeq += "Id";
        onAcceptWantCalledSeq += abilityId;
        globalThis.onAcceptWantCalledSeq = onAcceptWantCalledSeq;
        globalThis.abilityWant = want;
        console.log("AbilityMultiInstanceAppA set globalThis result :" + globalThis.onAcceptWantCalledSeq);
        return abilityId;
    }
}