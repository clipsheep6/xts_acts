import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry'
import { Hypium } from '@ohos/hypium'
import testsuite from '../test/List.test'
import WindowExtensionAbility from '@ohos.application.WindowExtensionAbility'

export default class MainAbility extends WindowExtensionAbility {
    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("ActsSystemAPITest  MainAbility onCreate");
        globalThis.abilityWant = want;
        globalThis.abilityContext = this.context;
        let abilityDelegator: any;
        abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
        let abilityDelegatorArguments: any;
        abilityDelegatorArguments = AbilityDelegatorRegistry.getArguments();
        console.info('start run testcase!!!');
        Hypium.hypiumTest(abilityDelegator, abilityDelegatorArguments, testsuite);
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("ActsSystemAPITest  MainAbility onDestroy");
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("ActsSystemAPITest  MainAbility onWindowStageCreate");
        windowStage.setUIContent(this.context, "pages/index/index", null);
        console.log("ActsSystemAPITest  MainAbility onWindowStageCreate finish");
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("ActsSystemAPITest  MainAbility onWindowStageDestroy");
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("ActsSystemAPITest  MainAbility onForeground");
    }

    onBackground() {
        // Ability has back to background
        console.log("ActsSystemAPITest  MainAbility onBackground");
    }
};