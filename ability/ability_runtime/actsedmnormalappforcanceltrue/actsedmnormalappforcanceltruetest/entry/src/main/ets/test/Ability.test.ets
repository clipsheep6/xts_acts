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
 * @tc.number: Acts_AutoStartupBatchByEDM_4300
 * @tc.name: Provide the application with power-on and self-start capability by EDM.
 * @tc.desc: The application Cannot set the startup of other applications.
 */
    it('Acts_AutoStartupBatchByEDM_4300', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_4300 start');
      applicationContext.setAutoStartup({
        bundleName: 'com.acts.myapplicationnormalcancel',
        abilityName: 'EntryAbility'
      }, (err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_4300 setAutoStartup OK + err: ' + JSON.stringify(err) + ' data: ' + JSON.stringify(data));
        expect(err.code).assertEqual(16000013);
        done();
      });
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_4400
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Cannot set the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_4400', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_4400 start');
      applicationContext.setAutoStartup({
        bundleName: 'com.acts.myapplicationnormalcancel',
        abilityName: 'EntryAbility'
      }).then((data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_4400 setAutoStartup OK + ' + JSON.stringify(data));
      }).catch((err) => {
        console.info('====> Acts_AutoStartupBatchByEDM_4400 setAutoStartup ERR + ' + JSON.stringify(err));
        expect(JSON.stringify(err)).assertContain('16000013');
        done();
      });
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_4500
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Cannot cancel the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_4500', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_4500 start');
      applicationContext.cancelAutoStartup({
        bundleName: 'com.acts.myapplicationnormalcancel',
        abilityName: 'EntryAbility'
      }, (err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_4500 cancelAutoStartup OK + err: ' + JSON.stringify(err) + ' data: ' + JSON.stringify(data));
        expect(err.code).assertEqual(16000013);
        done();
      });
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_4600
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Cannot cancel the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_4600', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_4600 start');
      applicationContext.cancelAutoStartup({
        bundleName: 'com.acts.myapplicationnormalcancel',
        abilityName: 'EntryAbility'
      }).then((data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_4600 cancelAutoStartup OK + ' + JSON.stringify(data));
      }).catch((err) => {
        console.info('====> Acts_AutoStartupBatchByEDM_4600 cancelAutoStartup ERR + ' + JSON.stringify(err));
        expect(JSON.stringify(err)).assertContain('16000013');
        done();
      });
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_4700
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Can query the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_4700', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_4700 start');
      applicationContext.isAutoStartup({
        bundleName: 'com.acts.myapplicationnormalcancel',
        abilityName: 'EntryAbility'
      }, (err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_4700 isAutoStartup OK err:' + JSON.stringify(err) + ' data: ' + JSON.stringify(data));
        expect(data).assertFalse();
        done();
      })
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_4800
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Can query the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_4800', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_4800 start');
      applicationContext.isAutoStartup({
        bundleName: 'com.acts.myapplicationnormalcancel',
        abilityName: 'EntryAbility'
      }).then((data) => {
        expect(data).assertFalse();
        done();
      }).catch((err) => {
        console.info('====> Acts_AutoStartupBatchByEDM_4800 isAutoStartup ERR + ' + JSON.stringify(err));
      });
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_4900
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Cannot set the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_4900', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_4900 start');
      applicationContext.setAutoStartup({
        bundleName: 'com.acts.myapplicationnormalcancel',
        abilityName: 'ServiceAbility'
      }, (err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_4900 setAutoStartup OK + err: ' + JSON.stringify(err) + ' data: ' + JSON.stringify(data));
        expect(err.code).assertEqual(16000013);
        done();
      });
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_5000
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Cannot set the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_5000', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_5000 start');
      applicationContext.setAutoStartup({
        bundleName: 'com.acts.myapplicationnormalcancel',
        abilityName: 'ServiceAbility'
      }).then((data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_5000 setAutoStartup OK + ' + JSON.stringify(data));
      }).catch((err) => {
        console.info('====> Acts_AutoStartupBatchByEDM_5000 setAutoStartup ERR + ' + JSON.stringify(err));
        expect(JSON.stringify(err)).assertContain('16000013');
        done();
      });
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_5100
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Cannot cancel the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_5100', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_5100 start');
      applicationContext.cancelAutoStartup({
        bundleName: 'com.acts.myapplicationnormalcancel',
        abilityName: 'ServiceAbility'
      }, (err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_5100 cancelAutoStartup OK + err: ' + JSON.stringify(err) + ' data: ' + JSON.stringify(data));
        expect(err.code).assertEqual(16000013);
        done();
      });
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_5200
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Cannot cancel the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_5200', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_5200 start');
      applicationContext.cancelAutoStartup({
        bundleName: 'com.acts.myapplicationnormalcancel',
        abilityName: 'ServiceAbility'
      }).then((data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_5200 cancelAutoStartup OK + ' + JSON.stringify(data));
      }).catch((err) => {
        console.info('====> Acts_AutoStartupBatchByEDM_5200 cancelAutoStartup ERR + ' + JSON.stringify(err));
        expect(JSON.stringify(err)).assertContain('16000013');
        done();
      });
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_5300
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Can query the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_5300', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_5300 start');
      applicationContext.isAutoStartup({
        bundleName: 'com.acts.myapplicationnormalcancel',
        abilityName: 'ServiceAbility'
      }, (err, data) => {
        console.info('====> Acts_AutoStartupBatchByEDM_5300 isAutoStartup OK err:' + JSON.stringify(err) + ' data: ' + JSON.stringify(data));
        expect(data).assertFalse();
        done();
      })
    })

    /*
     * @tc.number: Acts_AutoStartupBatchByEDM_5400
     * @tc.name: Provide the application with power-on and self-start capability by EDM.
     * @tc.desc: The application Can query the startup of other applications.
     */
    it('Acts_AutoStartupBatchByEDM_5400', 0, function (done) {
      console.info('====> Acts_AutoStartupBatchByEDM_5400 start');
      applicationContext.isAutoStartup({
        bundleName: 'com.acts.myapplicationnormalcancel',
        abilityName: 'ServiceAbility'
      }).then((data) => {
        expect(data).assertFalse();
        done();
      }).catch((err) => {
        console.info('====> Acts_AutoStartupBatchByEDM_5400 isAutoStartup ERR + ' + JSON.stringify(err));
      });
    })
  })
}