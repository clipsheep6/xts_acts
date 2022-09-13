import bundle from '@ohos.bundle';
import resourceManager from '@ohos.resourceManager';

export default {
  onCreate() {
    console.info('Application onCreate')

    // 使用applicationInfo中的资源ID
    Promise.all([
      resourceManager.getResourceManager(),
      bundle.getApplicationInfo("com.example.fa_app", 0)
    ]).then(results => {
      return results[0].getString(Number(results[1].labelId))
    }).then(str => {
      console.info("fa_app ApplicationInfo label: " + str)
    }).catch(e => {
      console.info("fa_app ApplicationInfo error: " + e)
    })

    // 使用abilityInfo中的资源ID
    Promise.all([
      resourceManager.getResourceManager(),
      bundle.getAbilityInfo("com.example.fa_app", "com.example.entry.MainAbility")
    ]).then(results => {
      return results[0].getString(Number(results[1].labelId))
    }).then(str => {
      console.info("fa_app AbilityInfo label: " + str)
    }).catch(e => {
      console.info("fa_app AbilityInfo error: " + e)
    })
  },
  onDestroy() {
    console.info('Application onDestroy')
  },
}