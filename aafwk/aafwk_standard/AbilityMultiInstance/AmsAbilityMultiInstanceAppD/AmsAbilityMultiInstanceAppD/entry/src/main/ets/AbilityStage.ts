import AbilityStage from "@ohos.application.AbilityStage"

var onAcceptWantCalledSeq;

export default class MyAbilityStage extends AbilityStage {
    onCreate() {
        console.log("AbilityMultiInstanceAppD MyAbilityStage onCreate")
        globalThis.stageOnCreateRun = 1;
        globalThis.stageContext = this.context;
    }

    onAcceptWant(want) {
        console.log("AbilityMultiInstanceAppD onAcceptWant called want:" + JSON.stringify(want));
        var abilityId = want.parameters.startId.toString();
        onAcceptWantCalledSeq = "onAcceptWantCalled";
        onAcceptWantCalledSeq += "Id";
        onAcceptWantCalledSeq += abilityId;
        globalThis.onAcceptWantCalledSeq = onAcceptWantCalledSeq;
        globalThis.abilityWant = want;
        console.log("AbilityMultiInstanceAppD set globalThis result :" + globalThis.onAcceptWantCalledSeq);
        return abilityId;
    }
}