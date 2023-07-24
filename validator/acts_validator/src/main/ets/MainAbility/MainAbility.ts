import Ability from '@ohos.app.ability.UIAbility'
import abilityAccessCtrl from '@ohos.abilityAccessCtrl';

export default class MainAbility extends Ability {
    onCreate(want, launchParam) {
        globalThis.dir=this.context.filesDir;
        console.log("[Demo] MainAbility onCreate")
        globalThis.abilityWant = want;
<<<<<<< HEAD
=======
        globalThis.abilityContext = this.context;
>>>>>>> hw/master
    }

    onDestroy() {
        console.log("[Demo] MainAbility onDestroy")
    }

    onWindowStageCreate(windowStage) {

        console.log("[Demo] MainAbility onWindowStageCreate")
        let AtManager = abilityAccessCtrl.createAtManager();
<<<<<<< HEAD
        AtManager.requestPermissionsFromUser(this.context,["ohos.permission.READ_MEDIA","ohos.permission.WRITE_MEDIA",
        "ohos.permission.CAPTURE_SCREEN"]).then(() => {})

        windowStage.loadContent("pages/index", (err, data) => {
            if (err.code) {
                console.error('Failed to load the content. Cause:' + JSON.stringify(err));
                return;
            }
            console.info('Succeeded in loading the content. Data: ' + JSON.stringify(data))
=======
        AtManager.requestPermissionsFromUser(this.context,['ohos.permission.READ_MEDIA', 'ohos.permission.WRITE_MEDIA',
        'ohos.permission.CAPTURE_SCREEN', 'ohos.permission.INTERNET', 'ohos.permission.CAMERA',
        'ohos.permission.MICROPHONE', 'ohos.permission.START_INVISIBLE_ABILITY']).then( () => {} );
        windowStage.loadContent('pages/index', (err, data) => {
            if (err.code) {
                console.error( 'Failed to load the content. Cause:' + JSON.stringify(err) );
                return;
            }
            console.info( 'Succeeded in loading the content. Data: ' + JSON.stringify(data) );
>>>>>>> hw/master
        });
    }

    onWindowStageDestroy() {
<<<<<<< HEAD
        // Main window is destroyed, release UI related resources
=======
>>>>>>> hw/master
        console.log("[Demo] MainAbility onWindowStageDestroy")
    }

    onForeground() {
<<<<<<< HEAD
        // Ability has brought to foreground
=======
>>>>>>> hw/master
        console.log("[Demo] MainAbility onForeground")
    }

    onBackground() {
<<<<<<< HEAD
        // Ability has back to background
=======
>>>>>>> hw/master
        console.log("[Demo] MainAbility onBackground")
    }
};
