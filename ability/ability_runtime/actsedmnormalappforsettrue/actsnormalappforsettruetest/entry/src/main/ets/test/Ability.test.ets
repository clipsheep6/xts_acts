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
     * @tc.number: Acts_AutoStartupBatchByEDM_2900
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Cannot set the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_2900', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_2900 start');
      applicationContext.setAutoStartup({
        bundleName: 'com.acts.myapplicationnormal',
        abilityName: 'EntryAbility'
      }, (err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_2900 setAutoStartup OK + err: ' + JSON.stringify(err) + ' data: ' + JSON.stringify(data));
        expect(err.code).assertEqual(16000013);
        done();
      });
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_3000
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Cannot set the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_3000', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_3000 start');
      applicationContext.setAutoStartup({
        bundleName: 'com.acts.myapplicationnormal',
        abilityName: 'EntryAbility'
      }).then((data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_3000 setAutoStartup OK + ' + JSON.stringify(data));
      }).catch((err) => {
        console.info('====> Acts_AutoStartupBatchByEDM_3000 setAutoStartup ERR + ' + JSON.stringify(err));
        expect(JSON.stringify(err)).assertContain('16000013');
        done();
      });
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_3100
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Cannot cancel the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_3100', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_3100 start');
      applicationContext.cancelAutoStartup({
        bundleName: 'com.acts.myapplicationnormal',
        abilityName: 'EntryAbility'
      }, (err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_3100 cancelAutoStartup OK + err: ' + JSON.stringify(err) + ' data: ' + JSON.stringify(data));
        expect(err.code).assertEqual(16000013);
        done();
      });
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_3200
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Cannot cancel the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_3200', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_3200 start');
      applicationContext.cancelAutoStartup({
        bundleName: 'com.acts.myapplicationnormal',
        abilityName: 'EntryAbility'
      }).then((data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_3200 cancelAutoStartup OK + ' + JSON.stringify(data));
      }).catch((err) => {
        console.info('====> Acts_AutoStartupBatchByEDM_3200 cancelAutoStartup ERR + ' + JSON.stringify(err));
        expect(JSON.stringify(err)).assertContain('16000013');
        done();
      });
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_3300
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Can query the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_3300', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_3300 start');
      applicationContext.isAutoStartup({
        bundleName: 'com.acts.myapplicationnormal',
        abilityName: 'EntryAbility'
      }, (err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_3300 isAutoStartup OK err:' + JSON.stringify(err) + ' data: ' + JSON.stringify(data));
        expect(data).assertTrue();
        done();
      })
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_3400
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Can query the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_3400', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_3300 start');
      applicationContext.isAutoStartup({
        bundleName: 'com.acts.myapplicationnormal',
        abilityName: 'EntryAbility'
      }).then((data) => {
        expect(data).assertTrue();
        done();
      }).catch((err) => {
        console.info('====> Acts_AutoStartupBatchByEDM_3300 isAutoStartup ERR + ' + JSON.stringify(err));
      });
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_3500
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Cannot set the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_3500', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_3500 start');
      applicationContext.setAutoStartup({
        bundleName: 'com.acts.myapplicationnormal',
        abilityName: 'ServiceAbility'
      }, (err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_3500 setAutoStartup OK + err: ' + JSON.stringify(err) + ' data: ' + JSON.stringify(data));
        expect(err.code).assertEqual(16000013);
        done();
      });
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_3600
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Cannot set the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_3600', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_3600 start');
      applicationContext.setAutoStartup({
        bundleName: 'com.acts.myapplicationnormal',
        abilityName: 'ServiceAbility'
      }).then((data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_3600 setAutoStartup OK + ' + JSON.stringify(data));
      }).catch((err) => {
        console.info('====> Acts_AutoStartupBatchByEDM_3600 setAutoStartup ERR + ' + JSON.stringify(err));
        expect(JSON.stringify(err)).assertContain('16000013');
        done();
      });
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_3700
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Cannot cancel the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_3700', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_3700 start');
      applicationContext.cancelAutoStartup({
        bundleName: 'com.acts.myapplicationnormal',
        abilityName: 'ServiceAbility'
      }, (err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_3700 cancelAutoStartup OK + err: ' + JSON.stringify(err) + ' data: ' + JSON.stringify(data));
        expect(err.code).assertEqual(16000013);
        done();
      });
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_3800
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Cannot cancel the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_3800', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_3800 start');
      applicationContext.cancelAutoStartup({
        bundleName: 'com.acts.myapplicationnormal',
        abilityName: 'ServiceAbility'
      }).then((data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_3800 cancelAutoStartup OK + ' + JSON.stringify(data));
      }).catch((err) => {
        console.info('====> Acts_AutoStartupBatchByEDM_3800 cancelAutoStartup ERR + ' + JSON.stringify(err));
        expect(JSON.stringify(err)).assertContain('16000013');
        done();
      });
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_3900
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Can query the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_3900', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_3900 start');
      applicationContext.isAutoStartup({
        bundleName: 'com.acts.myapplicationnormal',
        abilityName: 'ServiceAbility'
      }, (err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_3900 isAutoStartup OK err:' + JSON.stringify(err) + ' data: ' + JSON.stringify(data));
        expect(data).assertTrue();
        done();
      })
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_4000
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Can query the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_4000', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_4000 start');
      applicationContext.isAutoStartup({
        bundleName: 'com.acts.myapplicationnormal',
        abilityName: 'ServiceAbility'
      }).then((data) => {
        expect(data).assertTrue();
        done();
      }).catch((err) => {
        console.info('====> Acts_AutoStartupBatchByEDM_4000 isAutoStartup ERR + ' + JSON.stringify(err));
      });
    })
  })
}