import hilog from '@ohos.hilog';

export default {
  onCreate() {
    hilog.info(0x0000, '1031xmj testTag', '%{public}s', 'Application onCreate');
  },
  onDestroy() {
      hilog.info(0x0000, '1031xmj testTag', '%{public}s', 'Application onDestroy');
  },
}