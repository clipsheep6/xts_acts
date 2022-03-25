import featureAbility from '@ohos.ability.featureAbility';

export default {
  onCreate() {
    console.info("Application onCreate");
    setTimeout(() => {
      featureAbility.terminateSelf().then(() => {
        console.log('--start-- : ')
      }).catch(() => {
        console.log('---end-- : ')
      })
    }, 2000)
  },
  onDestroy() {
    console.info('Application onDestroy')
  },
}