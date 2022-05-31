import commonEvent from "@ohos.commonevent"
import featureAbility from '@ohos.ability.featureAbility'
export default {
    onStart() {
        console.info('ServiceAbility onStart');
        commonEvent.publish("ACTS_InterfaceMultiUsers_0100_Start_CommonEvent", () => {
            console.log(" Publish ACTS_InterfaceMultiUsersExtension_CommonEvent callback")
            featureAbility.terminateSelf().then(() => {
                console.log('terminateSelf promise');
                commonEvent.publish("ACTS_TerminateSelf_CommonEvent", () => {
                    console.log(" Publish ACTS_TerminateSelf_CommonEvent callback")
                })
            });
        })
    },
    onStop() {
        console.info('ServiceAbility onStop');
    },
    onCommand(want, startId) {
        console.info('ServiceAbility onCommand');
    }
};