import hilog from '@ohos.hilog';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import launcherBundleManager from '@ohos.bundle.launcherBundleManager';
import { BusinessError } from '@ohos.base';
import installer from '@ohos.bundle.installer';

export default function iconStartShortCutInfoIssuse() {
  describe('IconStartShortCutInfoIssuse', () => {
    /*
     * @tc.number: Sub_Bms_Framework_Icon_Start_0100
     * @tc.name: ShortcutInfoOfStartShortcutInterfaceAbnormal
     * @tc.desc: test the ShortcutInfo parameter of the startShortcut interface fail
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('Sub_Bms_Framework_Icon_Start_0100', 0, async (done: Function) => {
      installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(['/data/storage/el2/base/files/'], (err: BusinessError) => {
          console.log("install success");
          if (err) {
            console.error(`code== ${err.code}`);
            expect().assertFalse()
            done()
          }
        });
      })
      try {
        let data: Array<launcherBundleManager.ShortcutInfo> = launcherBundleManager.getShortcutInfoSync("com.hits.shortcutone");
        console.log("data is " + JSON.stringify(data));
        if (data) {
          try {
            await launcherBundleManager.startShortcut(null).then(() => {
              console.log("startShortcut success")
              expect(false).assertTrue();
              done;
            }).catch((err: BusinessError) => {
              console.error('startShortcut fail, errData is errCode: ${err.code} message:${err.message}');
              expect(false).assertTrue();
              done;
            })
          } catch (error) {
            let code = (error as BusinessError).code;
            let message = (error as BusinessError).message;
            console.error('catch1 startShortcut fail, error is errCode:${code} message:${message}');
            expect(code).assertEqual(401);
          }
        }
        if (data) {
          try {
            await launcherBundleManager.startShortcut(undefined).then(() => {
              console.log("startShortcut success")
              expect(false).assertTrue();
              done;
            }).catch((err: BusinessError) => {
              console.error('startShortcut fail, errData is errCode: ${err.code} message:${err.message}');
              expect(false).assertTrue();
              done;
            })
          } catch (error) {
            let code = (error as BusinessError).code;
            let message = (error as BusinessError).message;
            console.error('catch1 startShortcut fail, error is errCode:${code} message:${message}');
            expect(code).assertEqual(401);
          }
        }
        if (data) {
          try {
            await launcherBundleManager.startShortcut(null,{}).then(() => {
              console.log("startShortcut success")
              expect(false).assertTrue();
              done;
            }).catch((err: BusinessError) => {
              console.error('startShortcut fail, errData is errCode: ${err.code} message:${err.message}');
              expect(false).assertTrue();
              done;
            })
          } catch (error) {
            let code = (error as BusinessError).code;
            let message = (error as BusinessError).message;
            console.error('catch2 startShortcut fail, error is errCode:${code} message:${message}');
            expect(code).assertEqual(401);
          }
        }
        if (data) {
          try {
            await launcherBundleManager.startShortcut(undefined,{}).then(() => {
              console.log("startShortcut success")
              expect(false).assertTrue();
              done;
            }).catch((err: BusinessError) => {
              console.error('startShortcut fail, errData is errCode: ${err.code} message:${err.message}');
              expect(false).assertTrue();
              done;
            })
          } catch (error) {
            let code = (error as BusinessError).code;
            let message = (error as BusinessError).message;
            console.error('catch3 startShortcut fail, error is errCode:${code} message:${message}');
            expect(code).assertEqual(401);
            done;
          }
        }
      } catch (errData) {
        let code = (errData as BusinessError).code;
        let message = (errData as BusinessError).message;
        console.error(' errData is errCode:${code} message:${message}');
        expect(false).assertTrue();
        done;
      }

    })

    /*
     * @tc.number: Sub_Bms_Framework_Icon_Start_0200
     * @tc.name: StartOptionsOfStartShortcutInterfaceAbnormal
     * @tc.desc: test the StartOptions parameter of the startShortcut interface fail
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('Sub_Bms_Framework_Icon_Start_0200', 0, async (done: Function) => {
      try {
        let data: Array<launcherBundleManager.ShortcutInfo> = launcherBundleManager.getShortcutInfoSync("com.hits.shortcutone");
        console.log("data is " + JSON.stringify(data));
        if (data) {
          try {
            await launcherBundleManager.startShortcut(data[0], null).then(() => {
              console.log("startShortcut success")
              expect(true).assertTrue();
            }).catch((err: BusinessError) => {
              console.error('startShortcut fail, errData is errCode: ${err.code} message:${err.message}');
              expect(false).assertTrue();
              done;
            })
          } catch (error) {
            let code = (error as BusinessError).code;
            let message = (error as BusinessError).message;
            console.error('catch1 startShortcut fail, error is errCode:${code} message:${message}');
            expect(false).assertTrue();
            done;
          }
        }
        if (data) {
          try {
            await launcherBundleManager.startShortcut(data[0], undefined).then(() => {
              console.log("startShortcut success")
              expect(true).assertTrue();
              done;
            }).catch((err: BusinessError) => {
              console.error('startShortcut fail, errData is errCode: ${err.code} message:${err.message}');
              expect(false).assertTrue();
              done;
            })
          } catch (error) {
            let code = (error as BusinessError).code;
            let message = (error as BusinessError).message;
            console.error('catch2 startShortcut fail, error is errCode:${code} message:${message}');
            expect(false).assertTrue();
            done;
          }
        }
      } catch (errData) {
        let code = (errData as BusinessError).code;
        let message = (errData as BusinessError).message;
        console.error(' errData is errCode:${code} message:${message}');
        expect(false).assertTrue();
        done;
      }
    })
    /*
     * @tc.number: Sub_Bms_Framework_Icon_Start_0500
     * @tc.name: StartShortcutInterfaceSuccess
     * @tc.desc: test startShortcut interface success
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('Sub_Bms_Framework_Icon_Start_0500', 0, async (done: Function) => {
      try {
        let data: Array<launcherBundleManager.ShortcutInfo> = launcherBundleManager.getShortcutInfoSync("com.hits.shortcutone");
        console.log("data is " + JSON.stringify(data));
        if (data) {
          try {
            launcherBundleManager.startShortcut(data[0]).then(() => {
              console.log("startShortcut success")
              expect(true).assertTrue();
              done;
            }).catch((err: BusinessError) => {
              console.error('startShortcut fail, errData is errCode: ${err.code} message:${err.message}');
              expect(false).assertTrue();
              done;
            })
          } catch (error) {
            let code = (error as BusinessError).code;
            let message = (error as BusinessError).message;
            console.error('catch1 startShortcut fail, error is errCode:${code} message:${message}');
            expect(false).assertTrue();
            done;
          }
        }
      } catch (errData) {
        let code = (errData as BusinessError).code;
        let message = (errData as BusinessError).message;
        console.error(' errData is errCode:${code} message:${message}');
        expect(false).assertTrue();
        done;
      }
    })
  })
}