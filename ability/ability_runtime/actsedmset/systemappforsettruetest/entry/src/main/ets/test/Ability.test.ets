import hilog from '@ohos.hilog';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
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
     * @tc.number: Acts_AutoStartupBatchByEDM_0100
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Cannot set the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_0100', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_0100 start');
      AutoStartUpManager.setApplicationAutoStartup({
        bundleName: 'com.acts.autostartupnormalappbyedm',
        abilityName: 'EntryAbility'
      }, (err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_0100 setApplicationAutoStartup OK + err: ' + JSON.stringify(err) + ' data: ' + JSON.stringify(data));
        expect(err.code).assertEqual(16000013);
        done();
      });
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_0200
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Cannot set the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_0200', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_0200 start');
      AutoStartUpManager.setApplicationAutoStartup({
        bundleName: 'com.acts.autostartupnormalappbyedm',
        abilityName: 'EntryAbility'
      }).then((data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_0200 setApplicationAutoStartUp OK + ' + JSON.stringify(data));
      }).catch((err) => {
        console.info('====> Acts_AutoStartupBatchByEDM_0200 setApplicationAutoStartUp ERR + ' + JSON.stringify(err));
        expect(JSON.stringify(err)).assertContain('16000013');
        done();
      });
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_0300
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Cannot cancel the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_0300', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_0300 start');
      AutoStartUpManager.cancelApplicationAutoStartup({
        bundleName: 'com.acts.autostartupnormalappbyedm',
        abilityName: 'EntryAbility'
      }, (err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_0300 cancelApplicationAutoStartup OK + err: ' + JSON.stringify(err) + ' data: ' + JSON.stringify(data));
        expect(err.code).assertEqual(16000013);
        done();
      });
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_0400
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Cannot cancel the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_0400', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_0400 start');
      AutoStartUpManager.cancelApplicationAutoStartup({
        bundleName: 'com.acts.autostartupnormalappbyedm',
        abilityName: 'EntryAbility'
      }).then((data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_0400 cancelApplicationAutoStartup OK + ' + JSON.stringify(data));
      }).catch((err) => {
        console.info('====> Acts_AutoStartupBatchByEDM_0400 cancelApplicationAutoStartup ERR + ' + JSON.stringify(err));
        expect(JSON.stringify(err)).assertContain('16000013');
        done();
      });
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_0500
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Can query the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_0500', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_0500 start');
      AutoStartUpManager.queryAllAutoStartupApplications((err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_0500 queryAllAutoStartupApplications1 OK err:' + JSON.stringify(err) + ' data: ' + JSON.stringify(data));
        expect(JSON.stringify(data)).assertContain('com.acts.autostartupnormalappbyedm');
        done();
      })
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_0600
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Can query the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_0600', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_0600 start');
      AutoStartUpManager.queryAllAutoStartupApplications().then((data) => {
        expect(JSON.stringify(data)).assertContain('com.acts.autostartupnormalappbyedm');
        done();
      }).catch((err) => {
        console.info('====> Acts_AutoStartupBatchByEDM_0600 queryAllAutoStartupApplications ERR + ' + JSON.stringify(err));
      });
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_0700
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Cannot set the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_0700', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_0700 start');
      AutoStartUpManager.setApplicationAutoStartup({
        bundleName: 'com.acts.autostartupnormalappbyedm',
        abilityName: 'ServiceAbility'
      }, (err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_0700 setApplicationAutoStartup OK + err: ' + JSON.stringify(err) + ' data: ' + JSON.stringify(data));
        expect(err.code).assertEqual(16000013);
        done();
      });
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_0800
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Cannot set the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_0800', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_0800 start');
      AutoStartUpManager.setApplicationAutoStartup({
        bundleName: 'com.acts.autostartupnormalappbyedm',
        abilityName: 'ServiceAbility'
      }).then((data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_0800 setApplicationAutoStartup OK + ' + JSON.stringify(data));
      }).catch((err) => {
        console.info('====> Acts_AutoStartupBatchByEDM_0800 setApplicationAutoStartup ERR + ' + JSON.stringify(err));
        expect(JSON.stringify(err)).assertContain('16000013');
        done();
      });
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_0900
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Cannot cancel the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_0900', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_0900 start');
      AutoStartUpManager.cancelApplicationAutoStartup({
        bundleName: 'com.acts.autostartupnormalappbyedm',
        abilityName: 'ServiceAbility'
      }, (err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_0900 cancelApplicationAutoStartup OK + err: ' + JSON.stringify(err) + ' data: ' + JSON.stringify(data));
        expect(err.code).assertEqual(16000013);
        done();
      });
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_1000
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Cannot cancel the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_1000', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_1000 start');
      AutoStartUpManager.cancelApplicationAutoStartup({
        bundleName: 'com.acts.autostartupnormalappbyedm',
        abilityName: 'ServiceAbility'
      }).then((data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_1000 cancelApplicationAutoStartup OK + ' + JSON.stringify(data));
      }).catch((err) => {
        console.info('====> Acts_AutoStartupBatchByEDM_1000 cancelApplicationAutoStartup ERR + ' + JSON.stringify(err));
        expect(JSON.stringify(err)).assertContain('16000013');
        done();
      });
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_1100
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Can query the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_1100', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_1100 start');
      AutoStartUpManager.queryAllAutoStartupApplications((err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_1100 queryAllAutoStartupApplications1 OK err:' + JSON.stringify(err) + ' data: ' + JSON.stringify(data));
        expect(JSON.stringify(data)).assertContain('com.acts.autostartupnormalappbyedm');
        done();
      })
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_1200
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Can query the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_1200', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_1200 start');
      AutoStartUpManager.queryAllAutoStartupApplications().then((data) => {
        expect(JSON.stringify(data)).assertContain('com.acts.autostartupnormalappbyedm');
        done();
      }).catch((err) => {
        console.info('====> Acts_AutoStartupBatchByEDM_1200 queryAllAutoStartupApplications ERR + ' + JSON.stringify(err));
      });
    })
  })
}