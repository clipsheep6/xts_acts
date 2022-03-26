import appManager from '@ohos.application.appManager';

export default {
  onCreate() {
    console.info('Application onCreate')
    var AppStateDataList = appManager.getForegroundApplications();
    console.log(AppStateDataList);
  },
  onDestroy() {
    console.info('Application onDestroy')
  },
}