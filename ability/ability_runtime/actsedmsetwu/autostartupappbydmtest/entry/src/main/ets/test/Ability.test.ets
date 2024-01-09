import hilog from '@ohos.hilog';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import AutoStartUpManager from '@ohos.app.ability.autoStartupManager';

export default function abilityTest() {
  describe('ActsAbilityTest', function () {
    beforeAll(function () {
    })
    beforeEach(function () {
    })
    afterEach(function () {
    })
    afterAll(function () {
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_1300
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Can set, cancel and query the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_1300', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_1300 start');

      AutoStartUpManager.queryAllAutoStartupApplications((err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_1300 queryAllAutoStartupApplications ok err ' + JSON.stringify(err) + ' data ' +
        JSON.stringify(data));
        expect(JSON.stringify(data)).assertContain('com.acts.autostartupnormalappbyedm');

        AutoStartUpManager.setApplicationAutoStartup({
          bundleName: 'com.acts.autostartupnormalappbyedm',
          abilityName: 'EntryAbility'
        }, (err, data) => {
          console.info('====> Acts_AutoStartupBatchByEDM_1300 setApplicationAutoStartup UI Callback OK + err: ' +
          JSON.stringify(err) + ' data: ' + JSON.stringify(data));
          expect(err.code).assertEqual(16000050);
          AutoStartUpManager.queryAllAutoStartupApplications((err, data) => {
            console.info('====> Acts_AutoStartupBatchByEDM_1300 setApplicationAutoStartup2 ok err ' +
            JSON.stringify(err) + ' data ' + JSON.stringify(data));
            expect(JSON.stringify(data)).assertContain('com.acts.autostartupnormalappbyedm');

            AutoStartUpManager.cancelApplicationAutoStartup({
              bundleName: 'com.acts.autostartupnormalappbyedm',
              abilityName: 'EntryAbility'
            }, (err, data) => {
              console.info('====> Acts_AutoStartupBatchByEDM_1300 cancelApplicationAutoStartup UI Callback OK + err: ' +
              JSON.stringify(err) + ' data: ' + JSON.stringify(data));
              done();
            })
          })
        })
      })
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_1400
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Can set, cancel and query the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_1400', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_1400 start');

      AutoStartUpManager.queryAllAutoStartupApplications((err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_1400 queryAllAutoStartupApplications1 ok err ' + JSON.stringify(err) + ' data ' +
        JSON.stringify(data));
        expect(JSON.stringify(data)).assertContain('com.acts.autostartupnormalappbyedm');

        AutoStartUpManager.setApplicationAutoStartup({
          bundleName: 'com.acts.autostartupnormalappbyedm',
          abilityName: 'ServiceAbility'
        }, (err, data) => {
          console.info('====> Acts_AutoStartupBatchByEDM_1400 setApplicationAutoStartup UI Callback OK + err: ' +
          JSON.stringify(err) + ' data: ' + JSON.stringify(data));
          expect(err.code).assertEqual(16000050);
          AutoStartUpManager.queryAllAutoStartupApplications((err, data) => {
            console.info('====> Acts_AutoStartupBatchByEDM_1400 queryAllAutoStartupApplications2 ok err ' +
            JSON.stringify(err) + ' data ' + JSON.stringify(data));
            expect(JSON.stringify(data)).assertContain('com.acts.autostartupnormalappbyedm');

            AutoStartUpManager.cancelApplicationAutoStartup({
              bundleName: 'com.acts.autostartupnormalappbyedm',
              abilityName: 'ServiceAbility'
            }, (err, data) => {
              console.info('====> Acts_AutoStartupBatchByEDM_1400 cancelApplicationAutoStartup UI Callback OK + err: ' +
              JSON.stringify(err) + ' data: ' + JSON.stringify(data));
              done();
            })
          })
        })
      })
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_2700
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Can set, cancel and query the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_2700', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_2700 start');

      AutoStartUpManager.queryAllAutoStartupApplications((err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_2700 queryAllAutoStartupApplications1 ok err ' + JSON.stringify(err) + ' data ' +
        JSON.stringify(data));
        expect(JSON.stringify(data).indexOf('com.acts.autostartupnormalappbyedm') === -1).assertTrue();

        AutoStartUpManager.setApplicationAutoStartup({
          bundleName: 'com.acts.autostartupnormalappbyedm',
          abilityName: 'EntryAbility'
        }, (err, data) => {
          console.info('====> Acts_AutoStartupBatchByEDM_2700 setApplicationAutoStartup UI Callback OK + err: ' +
          JSON.stringify(err) + ' data: ' + JSON.stringify(data));
          AutoStartUpManager.queryAllAutoStartupApplications((err, data) => {
            console.info('====> Acts_AutoStartupBatchByEDM_2700 queryAllAutoStartupApplications2 ok err ' +
            JSON.stringify(err) + ' data ' + JSON.stringify(data));
            expect(JSON.stringify(data)).assertContain('com.acts.autostartupnormalappbyedm');

            AutoStartUpManager.cancelApplicationAutoStartup({
              bundleName: 'com.acts.autostartupnormalappbyedm',
              abilityName: 'EntryAbility'
            }, (err, data) => {
              console.info('====> Acts_AutoStartupBatchByEDM_2700 cancelApplicationAutoStartup UI Callback OK + err: ' +
              JSON.stringify(err) + ' data: ' + JSON.stringify(data));
              done();
            })
          })
        })
      })
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_2800
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Can set, cancel and query the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_2800', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_2800 start');

      AutoStartUpManager.queryAllAutoStartupApplications((err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_2800 queryAllAutoStartupApplications1 ok err ' + JSON.stringify(err) + ' data ' +
        JSON.stringify(data));
        expect(JSON.stringify(data).indexOf('com.acts.autostartupnormalappbyedm') === -1).assertTrue();

        AutoStartUpManager.setApplicationAutoStartup({
          bundleName: 'com.acts.autostartupnormalappbyedm',
          abilityName: 'ServiceAbility'
        }, (err, data) => {
          console.info('====> Acts_AutoStartupBatchByEDM_2800 setApplicationAutoStartup UI Callback OK + err: ' +
          JSON.stringify(err) + ' data: ' + JSON.stringify(data));
          AutoStartUpManager.queryAllAutoStartupApplications((err, data) => {
            console.info('====> Acts_AutoStartupBatchByEDM_2800 queryAllAutoStartupApplications2 ok err ' +
            JSON.stringify(err) + ' data ' + JSON.stringify(data));
            expect(JSON.stringify(data)).assertContain('com.acts.autostartupnormalappbyedm');

            AutoStartUpManager.cancelApplicationAutoStartup({
              bundleName: 'com.acts.autostartupnormalappbyedm',
              abilityName: 'ServiceAbility'
            }, (err, data) => {
              console.info('====> Acts_AutoStartupBatchByEDM_2800 cancelApplicationAutoStartup UI Callback OK + err: ' +
              JSON.stringify(err) + ' data: ' + JSON.stringify(data));
              done();
            })
          })
        })
      })
    })
  })
}