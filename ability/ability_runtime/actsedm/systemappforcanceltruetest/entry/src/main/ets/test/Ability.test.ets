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
 * @tc.number: Acts_AutoStartupBatchByEDM_1500
 * @tc.name: Provide the application with power-on and self-start capability by EDM.
 * @tc.desc: The application Cannot set the startup of other applications.
 */
    it('Acts_AutoStartupBatchByEDM_1500', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_1500 start');
      AutoStartUpManager.setApplicationAutoStartup({
        bundleName: 'com.acts.autostartupnormalappbyedm',
        abilityName: 'EntryAbility'
      }, (err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_1500 setApplicationAutoStartup OK + err: ' + JSON.stringify(err) + ' data: ' + JSON.stringify(data));
        expect(err.code).assertEqual(16000013);
        done();
      });
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_1600
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Cannot set the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_1600', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_1600 start');
      AutoStartUpManager.setApplicationAutoStartup({
        bundleName: 'com.acts.autostartupnormalappbyedm',
        abilityName: 'EntryAbility'
      }).then((data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_1600 setApplicationAutoStartUp OK + ' + JSON.stringify(data));
      }).catch((err) => {
        console.info('====> Acts_AutoStartupBatchByEDM_1600 setApplicationAutoStartUp ERR + ' + JSON.stringify(err));
        expect(JSON.stringify(err)).assertContain('16000013');
        done();
      });
    })

    /*
    * @tc.number: Acts_AutoStartupBatchByEDM_1700
    * @tc.name: Provide the application with power-on and self-start capability by EDM.
    * @tc.desc: The application Cannot cancel the startup of other applications.
    */
    it('Acts_AutoStartupBatchByEDM_1700', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_1700 start');
      AutoStartUpManager.cancelApplicationAutoStartup({
        bundleName: 'com.acts.autostartupnormalappbyedm',
        abilityName: 'EntryAbility'
      }, (err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_1700 cancelApplicationAutoStartup OK + err: ' + JSON.stringify(err) + ' data: ' + JSON.stringify(data));
        expect(err.code).assertEqual(16000013);
        done();
      });
    })

    /*
    * @tc.number: Acts_AutoStartupBatchByEDM_1800
    * @tc.name: Provide the application with power-on and self-start capability by EDM.
    * @tc.desc: The application Cannot cancel the startup of other applications.
    */
    it('Acts_AutoStartupBatchByEDM_1800', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_1800 start');
      AutoStartUpManager.cancelApplicationAutoStartup({
        bundleName: 'com.acts.autostartupnormalappbyedm',
        abilityName: 'EntryAbility'
      }).then((data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_1800 cancelApplicationAutoStartup OK + ' + JSON.stringify(data));
      }).catch((err) => {
        console.info('====> Acts_AutoStartupBatchByEDM_1800 cancelApplicationAutoStartup ERR + ' + JSON.stringify(err));
        expect(JSON.stringify(err)).assertContain('16000013');
        done();
      });
    })

    /*
    * @tc.number: Acts_AutoStartupBatchByEDM_1900
    * @tc.name: Provide the application with power-on and self-start capability by EDM.
    * @tc.desc: The application Can query the startup of other applications.
    */
    it('Acts_AutoStartupBatchByEDM_1900', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_1900 start');
      AutoStartUpManager.queryAllAutoStartupApplications((err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_1900 queryAllAutoStartupApplications OK err:' + JSON.stringify(err) + ' data: ' + JSON.stringify(data));
        expect(JSON.stringify(data).indexOf('com.acts.autostartupnormalappbyedm') === -1).assertTrue();
        done();
      })
    })

    /*
    * @tc.number: Acts_AutoStartupBatchByEDM_2000
    * @tc.name: Provide the application with power-on and self-start capability by EDM.
    * @tc.desc: The application Can query the startup of other applications.
    */
    it('Acts_AutoStartupBatchByEDM_2000', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_2000 start');
      AutoStartUpManager.queryAllAutoStartupApplications().then((data) => {
        expect(JSON.stringify(data).indexOf('com.acts.autostartupnormalappbyedm') === -1).assertTrue();
        done();
      }).catch((err) => {
        console.info('====> Acts_AutoStartupBatchByEDM_2000 queryAllAutoStartupApplications ERR + ' + JSON.stringify(err));
      });
    })

    /*
    * @tc.number: Acts_AutoStartupBatchByEDM_2100
    * @tc.name: Provide the application with power-on and self-start capability by EDM.
    * @tc.desc: The application Cannot set the startup of other applications.
    */
    it('Acts_AutoStartupBatchByEDM_2100', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_2100 start');
      AutoStartUpManager.setApplicationAutoStartup({
        bundleName: 'com.acts.autostartupnormalappbyedm',
        abilityName: 'ServiceAbility'
      }, (err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_2100 setApplicationAutoStartup OK + err: ' + JSON.stringify(err) + ' data: ' + JSON.stringify(data));
        expect(err.code).assertEqual(16000013);
        done();
      });
    })

    /*
    * @tc.number: Acts_AutoStartupBatchByEDM_2200
    * @tc.name: Provide the application with power-on and self-start capability by EDM.
    * @tc.desc: The application Cannot set the startup of other applications.
    */
    it('Acts_AutoStartupBatchByEDM_2200', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_2200 start');
      AutoStartUpManager.setApplicationAutoStartup({
        bundleName: 'com.acts.autostartupnormalappbyedm',
        abilityName: 'ServiceAbility'
      }).then((data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_2200 setApplicationAutoStartUp OK + ' + JSON.stringify(data));
      }).catch((err) => {
        console.info('====> Acts_AutoStartupBatchByEDM_2200 setApplicationAutoStartUp ERR + ' + JSON.stringify(err));
        expect(JSON.stringify(err)).assertContain('16000013');
        done();
      });
    })

    /*
    * @tc.number: Acts_AutoStartupBatchByEDM_2300
    * @tc.name: Provide the application with power-on and self-start capability by EDM.
    * @tc.desc: The application Cannot cancel the startup of other applications.
    */
    it('Acts_AutoStartupBatchByEDM_2300', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_2300 start');
      AutoStartUpManager.cancelApplicationAutoStartup({
        bundleName: 'com.acts.autostartupnormalappbyedm',
        abilityName: 'ServiceAbility'
      }, (err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_2300 cancelApplicationAutoStartup OK + err: ' + JSON.stringify(err) + ' data: ' + JSON.stringify(data));
        expect(err.code).assertEqual(16000013);
        done();
      });
    })

    /*
    * @tc.number: Acts_AutoStartupBatchByEDM_2400
    * @tc.name: Provide the application with power-on and self-start capability by EDM.
    * @tc.desc: The application Cannot cancel the startup of other applications.
    */
    it('Acts_AutoStartupBatchByEDM_2400', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_2400 start');
      AutoStartUpManager.cancelApplicationAutoStartup({
        bundleName: 'com.acts.autostartupnormalappbyedm',
        abilityName: 'ServiceAbility'
      }).then((data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_2400 cancelApplicationAutoStartup OK + ' + JSON.stringify(data));
      }).catch((err) => {
        console.info('====> Acts_AutoStartupBatchByEDM_2400 cancelApplicationAutoStartup ERR + ' + JSON.stringify(err));
        expect(JSON.stringify(err)).assertContain('16000013');
        done();
      });
    })

    /*
    * @tc.number: Acts_AutoStartupBatchByEDM_2500
    * @tc.name: Provide the application with power-on and self-start capability by EDM.
    * @tc.desc: The application Can query the startup of other applications.
    */
    it('Acts_AutoStartupBatchByEDM_2500', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_2500 start');
      AutoStartUpManager.queryAllAutoStartupApplications((err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_2500 queryAllAutoStartupApplications OK err:' + JSON.stringify(err) + ' data: ' + JSON.stringify(data));
        expect(JSON.stringify(data).indexOf('com.acts.autostartupnormalappbyedm') === -1).assertTrue();
        done();
      })
    })

    /*
    * @tc.number: Acts_AutoStartupBatchByEDM_2600
    * @tc.name: Provide the application with power-on and self-start capability by EDM.
    * @tc.desc: The application Can query the startup of other applications.
    */
    it('Acts_AutoStartupBatchByEDM_2600', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_2600 start');
      AutoStartUpManager.queryAllAutoStartupApplications().then((data) => {
        expect(JSON.stringify(data).indexOf('com.acts.autostartupnormalappbyedm') === -1).assertTrue();
        done();
      }).catch((err) => {
        console.info('====> Acts_AutoStartupBatchByEDM_2600 queryAllAutoStartupApplications ERR + ' + JSON.stringify(err));
      });
    })
  })
}