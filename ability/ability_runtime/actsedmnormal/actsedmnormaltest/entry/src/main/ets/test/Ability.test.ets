import hilog from '@ohos.hilog';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'

export default function abilityTest() {
  describe('ActsAbilityTest', function () {
    let applicationContext = globalThis.context.getApplicationContext();
    beforeAll(function () {
    })
    beforeEach(function () {
    })
    afterEach(function () {
    })
    afterAll(function () {
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_4100
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Can set, cancel and query the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_4100', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_4100 start');

      applicationContext.isAutoStartup({
        bundleName: 'com.acts.autostartupnormalappbyedm',
        abilityName: 'EntryAbility'
      }, (err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_4100 isAutoStartup1 ok err ' + JSON.stringify(err) + ' data ' +
        JSON.stringify(data));
        expect(data).assertTrue();

        applicationContext.setAutoStartup({
          bundleName: 'com.acts.autostartupnormalappbyedm',
          abilityName: 'EntryAbility'
        }, (err, data) => {
          console.info('====> Acts_AutoStartupBatchByEDM_4100 setAutoStartup UI Callback OK + err: ' +
          JSON.stringify(err) + ' data: ' + JSON.stringify(data));
          expect(err.code).assertEqual(16000050);
          applicationContext.isAutoStartup({
            bundleName: 'com.acts.autostartupnormalappbyedm',
            abilityName: 'EntryAbility'
          }, (err, data) => {
            console.info('====> Acts_AutoStartupBatchByEDM_4100 isAutoStartup2 ok err ' +
            JSON.stringify(err) + ' data ' + JSON.stringify(data));
            expect(data).assertTrue();

            applicationContext.cancelAutoStartup({
              bundleName: 'com.acts.autostartupnormalappbyedm',
              abilityName: 'EntryAbility'
            }, (err, data) => {
              console.info('====> Acts_AutoStartupBatchByEDM_4100 cancelAutoStartup UI Callback OK + err: ' +
              JSON.stringify(err) + ' data: ' + JSON.stringify(data));
              applicationContext.isAutoStartup({
                bundleName: 'com.acts.autostartupnormalappbyedm',
                abilityName: 'EntryAbility'
              }, (err, data) => {
                expect(data).assertFalse();
              })
              done();
            })
          })
        })
      })
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_4200
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Can set, cancel and query the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_4200', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_4200 start');

      applicationContext.isAutoStartup({
        bundleName: 'com.acts.autostartupnormalappbyedm',
        abilityName: 'ServiceAbility'
      }, (err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_4200 isAutoStartup1 ok err ' + JSON.stringify(err) + ' data ' +
        JSON.stringify(data));
        expect(data).assertTrue();

        applicationContext.setAutoStartup({
          bundleName: 'com.acts.autostartupnormalappbyedm',
          abilityName: 'ServiceAbility'
        }, (err, data) => {
          console.info('====> Acts_AutoStartupBatchByEDM_4200 setAutoStartup UI Callback OK + err: ' +
          JSON.stringify(err) + ' data: ' + JSON.stringify(data));
          expect(err.code).assertEqual(16000050);
          applicationContext.isAutoStartup({
            bundleName: 'com.acts.autostartupnormalappbyedm',
            abilityName: 'ServiceAbility'
          }, (err, data) => {
            console.info('====> Acts_AutoStartupBatchByEDM_4200 isAutoStartup2 ok err ' +
            JSON.stringify(err) + ' data ' + JSON.stringify(data));
            expect(data).assertTrue();

            applicationContext.cancelAutoStartup({
              bundleName: 'com.acts.autostartupnormalappbyedm',
              abilityName: 'ServiceAbility'
            }, (err, data) => {
              console.info('====> Acts_AutoStartupBatchByEDM_4200 cancelAutoStartup UI Callback OK + err: ' +
              JSON.stringify(err) + ' data: ' + JSON.stringify(data));
              applicationContext.isAutoStartup({
                bundleName: 'com.acts.autostartupnormalappbyedm',
                abilityName: 'ServiceAbility'
              }, (err, data) => {
                expect(data).assertFalse();
              })
              done();
            })
          })
        })
      })
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_5500
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Can set, cancel and query the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_5500', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_5500 start');

      applicationContext.isAutoStartup({
        bundleName: 'com.acts.autostartupnormalappbyedm',
        abilityName: 'EntryAbility'
      }, (err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_5500 isAutoStartup1 ok err ' + JSON.stringify(err) + ' data ' +
        JSON.stringify(data));
        expect(data).assertFalse();

        applicationContext.setAutoStartup({
          bundleName: 'com.acts.autostartupnormalappbyedm',
          abilityName: 'EntryAbility'
        }, (err, data) => {
          console.info('====> Acts_AutoStartupBatchByEDM_5500 setAutoStartup UI Callback OK + err: ' +
          JSON.stringify(err) + ' data: ' + JSON.stringify(data));
          applicationContext.isAutoStartup({
            bundleName: 'com.acts.autostartupnormalappbyedm',
            abilityName: 'EntryAbility'
          }, (err, data) => {
            console.info('====> Acts_AutoStartupBatchByEDM_5500 isAutoStartup2 ok err ' +
            JSON.stringify(err) + ' data ' + JSON.stringify(data));
            expect(data).assertTrue();

            applicationContext.cancelAutoStartup({
              bundleName: 'com.acts.autostartupnormalappbyedm',
              abilityName: 'EntryAbility'
            }, (err, data) => {
              console.info('====> Acts_AutoStartupBatchByEDM_5500 cancelAutoStartup UI Callback OK + err: ' +
              JSON.stringify(err) + ' data: ' + JSON.stringify(data));
              applicationContext.isAutoStartup({
                bundleName: 'com.acts.autostartupnormalappbyedm',
                abilityName: 'EntryAbility'
              }, (err, data) => {
                expect(data).assertFalse();
              })
              done();
            })
          })
        })
      })
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_5600
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Can set, cancel and query the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_5600', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_5600 start');

      applicationContext.isAutoStartup({
        bundleName: 'com.acts.autostartupnormalappbyedm',
        abilityName: 'ServiceAbility'
      }, (err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_5600 isAutoStartup1 ok err ' + JSON.stringify(err) + ' data ' +
        JSON.stringify(data));
        expect(data).assertFalse();

        applicationContext.setAutoStartup({
          bundleName: 'com.acts.autostartupnormalappbyedm',
          abilityName: 'ServiceAbility'
        }, (err, data) => {
          console.info('====> Acts_AutoStartupBatchByEDM_5600 setAutoStartup UI Callback OK + err: ' +
          JSON.stringify(err) + ' data: ' + JSON.stringify(data));
          applicationContext.isAutoStartup({
            bundleName: 'com.acts.autostartupnormalappbyedm',
            abilityName: 'ServiceAbility'
          }, (err, data) => {
            console.info('====> Acts_AutoStartupBatchByEDM_5600 isAutoStartup2 ok err ' +
            JSON.stringify(err) + ' data ' + JSON.stringify(data));
            expect(data).assertTrue();

            applicationContext.cancelAutoStartup({
              bundleName: 'com.acts.autostartupnormalappbyedm',
              abilityName: 'ServiceAbility'
            }, (err, data) => {
              console.info('====> Acts_AutoStartupBatchByEDM_5600 cancelAutoStartup UI Callback OK + err: ' +
              JSON.stringify(err) + ' data: ' + JSON.stringify(data));
              applicationContext.isAutoStartup({
                bundleName: 'com.acts.autostartupnormalappbyedm',
                abilityName: 'ServiceAbility'
              }, (err, data) => {
                expect(data).assertFalse();
              })
              done();
            })
          })
        })
      })
    })
  })
}