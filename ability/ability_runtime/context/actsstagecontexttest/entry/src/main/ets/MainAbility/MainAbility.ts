import Ability from '@ohos.application.Ability'
import bundle from '@ohos.bundle';

export default class MainAbility extends Ability {
    onCreate(want, launchParam) {
        console.log("[Demo] MainAbility onCreate")
        globalThis.abilityWant = want;

// 资源ID
        // 当前moduleContext中的resourceManager获取applicationInfo中的资源ID对应资源
        bundle.getApplicationInfo("com.example.stage_app", 0).then(appInfo => {
            return this.context.resourceManager.getString(Number(appInfo.labelId))
        }).then(str => {
            console.info("stage_app ApplicationInfo labelId: " + str)
        }).catch(e => {
            console.info("stage_app ApplicationInfo error: " + e)
        })

        // 当前moduleContext中的resourceManager获取abilityInfo中的资源ID对应资源
        bundle.getAbilityInfo("com.example.stage_app", "MainAbility").then(abilityInfo => {
            return this.context.resourceManager.getString(Number(abilityInfo.labelId))
        }).then(str => {
            console.info("stage_app AbilityInfo labelId: " + str)
        }).catch(e => {
            console.info("stage_app AbilityInfo error: " + e)
        })

        // 当前applicationContext中的resourceManager获取application中的资源ID对应资源
        bundle.getApplicationInfo("com.example.stage_app", 0).then(appInfo => {
            return this.context.getApplicationContext().resourceManager.getString(Number(appInfo.labelId))
        }).then(str => {
            console.info("stage_app ApplicationInfo labelId from application: " + str)
        }).catch(e => {
            console.info("stage_app ApplicationInfo error: " + e)
        })

        // 当前applicationContext中的resourceManager获取abilityInfo中的资源ID对应资源
        bundle.getAbilityInfo("com.example.stage_app", "MainAbility").then(abilityInfo => {
            return this.context.resourceManager.getString(Number(abilityInfo.labelId))
        }).then(str => {
            console.info("stage_app AbilityInfo labelId from application: " + str)
        }).catch(e => {
            console.info("stage_app AbilityInfo error: " + e)
        })

// 资源对象
        // 当前moduleContext中的resourceManager获取applicationInfo中的资源对象对应资源
        bundle.getApplicationInfo("com.example.stage_app", 0).then(appInfo => {
            return this.context.resourceManager.getString(appInfo.labelResource)
        }).then(str => {
            console.info("stage_app ApplicationInfo labelResource: " + str)
        }).catch(e => {
            console.info("stage_app ApplicationInfo error: " + e)
        })

        // 当前applicationContext中的resourceManager获取applicationInfo中的资源对象对应资源
        bundle.getApplicationInfo("com.example.stage_app", 0).then(appInfo => {
            return this.context.getApplicationContext().resourceManager.getString(appInfo.labelResource)
        }).then(str => {
            console.info("stage_app ApplicationInfo labelResource from ApplicationContext: " + str)
        }).catch(e => {
            console.info("stage_app ApplicationInfo error from ApplicationContext: " + e)
        })

        // 其他moduleContext中的resourceManager获取applicationInfo中的资源对象对应资源
        bundle.getApplicationInfo("com.example.stage_app", 0,).then(appInfo => {
            return this.context.createModuleContext("myapplication").resourceManager.getString(appInfo.labelResource)
        }).then(str => {
            console.info("stage_app ApplicationInfo labelResource from other moduleContext: " + str)
        }).catch(e => {
            console.info("stage_app ApplicationInfo error from other moduleContext: " + e)
        })
    }

    onDestroy() {
        console.log("[Demo] MainAbility onDestroy")
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("[Demo] MainAbility onWindowStageCreate")

        windowStage.loadContent("pages/index", (err, data) => {
            if (err.code) {
                console.error('Failed to load the content. Cause:' + JSON.stringify(err));
                return;
            }
            console.info('Succeeded in loading the content. Data: ' + JSON.stringify(data))
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("[Demo] MainAbility onWindowStageDestroy")
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("[Demo] MainAbility onForeground")
    }

    onBackground() {
        // Ability has back to background
        console.log("[Demo] MainAbility onBackground")
    }
};
