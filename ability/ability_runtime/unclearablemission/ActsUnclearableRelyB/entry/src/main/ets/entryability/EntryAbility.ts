import hilog from '@ohos.hilog';
import Ability from '@ohos.app.ability.UIAbility'
import Window from '@ohos.window'
import missionManager from '@ohos.app.ability.missionManager' //missionManager 和 Storage 获取

export default class EntryAbility extends Ability {
    onCreate(want, launchParam) {
        console.info('MissionB has been oncreated!');
        missionManager.getMissionInfos("", 10, (error, missions) => {
            console.log("missionsB = " + JSON.stringify(missions,null,2));
            missionManager.getMissionInfo("",missions[0].missionId , (error, mission) => {
                console.log("missionB = " + JSON.stringify(mission,null,2));
                globalThis.missioninfos = "bundlename : " + JSON.stringify(mission.want.bundleName) + "\n" +
                "missionB.unclearable : " +  JSON.stringify(mission.unclearable);
            });
        });
        //发个通知
    }

    onDestroy() {
        console.info('MissionB has been ondestroyed');
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
