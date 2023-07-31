/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry';

let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();

export default function abilityTest() {
  describe('ActsAbilityTest', function () {
    beforeEach(async function (done) {
      await abilityDelegator.executeShellCommand('hilog -r');
      await setTimeout(done(), 500);
    })

    /*
     * @tc.number: Acts_StartupAndExitEventReport_0100.
     * @tc.name: When the application starts and exits, the dot information is reported.
     * @tc.desc: Verify that dot information is reported when the application starts.
     */
    it('Acts_StartupAndExitEventReport_0100', 0, async function (done) {
      console.log('====>Acts_StartupAndExitEventReport_0100 start');
      let want = {
        'deviceId': '',
        'bundleName': 'com.example.actsfarely',
        'abilityName': 'com.example.actsfarely.MainAbility'
      };
      globalThis.abilityContext.startAbility(want, (err) => {
        console.log('====>Acts_StartupAndExitEventReport_0100 startAbility:' + JSON.stringify(err));
      });
      setTimeout(function () {
        let grepLog = "'\"name_\":\"PROCESS_START\"'";
        let cmd = "hilog -x | grep " + grepLog;
        abilityDelegator.executeShellCommand(cmd, (err, data) => {
          if (data.stdResult !== '') {
            try {
              expect(data.stdResult).assertContain('"domain_":"AAFWK"');
              expect(data.stdResult).assertContain('"name_":"PROCESS_START"');
              expect(data.stdResult).assertContain('"STARTUP_ABILITY_TYPE":1');
              expect(data.stdResult).assertContain('"CALLER_BUNDLE_NAME":"com.example.actsstagetest"');
              expect(data.stdResult).assertContain('"CALLER_PROCESS_NAME":"com.example.actsstagetest"');
            } catch {
              expect().assertFail();
            }
          } else {
            expect().assertFail();
          }
          abilityDelegator.executeShellCommand('pkill -f com.example.actsfarely', (err, data) => {
            console.log('====>Acts_StartupAndExitEventReport_0100 pkill:' + JSON.stringify(err));
            done();
          });
        });
      }, 3000);
    })

    /*
     * @tc.number: Acts_StartupAndExitEventReport_0200.
     * @tc.name: When the application starts and exits, the dot information is reported.
     * @tc.desc: Verify that dot information is reported when the application starts.
     */
    it('Acts_StartupAndExitEventReport_0200', 0, async function (done) {
      console.log('====>Acts_StartupAndExitEventReport_0200 start');
      let want = {
        'deviceId': '',
        'bundleName': 'com.example.actsdatarely',
        'abilityName': 'com.example.actsdatarely.MainAbility'
      };
      globalThis.abilityContext.startAbility(want, (err) => {
        console.log('====>Acts_StartupAndExitEventReport_0200 startAbility:' + JSON.stringify(err));
      });
      setTimeout(function () {
        let grepLog = "'\"name_\":\"PROCESS_START\"'";
        let cmd = "hilog -x | grep " + grepLog;
        abilityDelegator.executeShellCommand(cmd, (err, data) => {
          if (data.stdResult !== '') {
            try {
                expect(data.stdResult).assertContain('\"domain_\":\"AAFWK\"');
                expect(data.stdResult).assertContain('\"name_\":\"PROCESS_START\"');
                expect(data.stdResult).assertContain('\"STARTUP_ABILITY_TYPE\":3');
                expect(data.stdResult).assertContain('\"CALLER_BUNDLE_NAME\":\"com.example.actsstagetest\"');
                expect(data.stdResult).assertContain('\"CALLER_PROCESS_NAME\":\"com.example.actsstagetest\"');
              } catch {
              expect().assertFail();
            }
          } else {
            expect().assertFail();
          }
          abilityDelegator.executeShellCommand('pkill -f com.example.actsdatarely', (err, data) => {
            console.log('====>Acts_StartupAndExitEventReport_0200 pkill:' + JSON.stringify(err));
            done();
          });
        });
      }, 3000);
    })

    /*
     * @tc.number: Acts_StartupAndExitEventReport_0300.
     * @tc.name: When the application starts and exits, the dot information is reported.
     * @tc.desc: Verify that dot information is reported when the application starts.
     */
    it('Acts_StartupAndExitEventReport_0300', 0, async function (done) {
      console.log('====>Acts_StartupAndExitEventReport_0300 start');
      let want = {
        'deviceId': '',
        'bundleName': 'com.ohos.contacts',
        'abilityName': 'com.ohos.contacts.MainAbility'
      };
      globalThis.abilityContext.startAbility(want, (err) => {
        console.log('====>Acts_StartupAndExitEventReport_0300 startAbility:' + JSON.stringify(err));
      });
      setTimeout(function () {
        let grepLog = "'\"name_\":\"PROCESS_START\"'";
        let cmd = "hilog -x | grep " + grepLog;
        abilityDelegator.executeShellCommand(cmd, (err, data) => {
          if (data.stdResult !== '') {
            try {
                expect(data.stdResult).assertContain('\"domain_\":\"AAFWK\"');
                expect(data.stdResult).assertContain('\"name_\":\"PROCESS_START\"');
                expect(data.stdResult).assertContain('\"STARTUP_ABILITY_TYPE\":5');
                expect(data.stdResult).assertContain('\"STARTUP_EXTENSION_TYPE\":5');
                expect(data.stdResult).assertContain('\"CALLER_BUNDLE_NAME\":\"com.ohos.contacts\"');
                expect(data.stdResult).assertContain('\"CALLER_PROCESS_NAME\":\"com.ohos.contacts\"');
              } catch {
              expect().assertFail();
            }
          } else {
            expect().assertFail();
          }
          abilityDelegator.executeShellCommand('pkill -f com.ohos.contacts', (err, data) => {
            console.log('====>Acts_StartupAndExitEventReport_0300 pkill:' + JSON.stringify(err));
            done();
          });
        });
      }, 4000);
    })

    /*
     * @tc.number: Acts_StartupAndExitEventReport_0400.
     * @tc.name: When the application starts and exits, the dot information is reported.
     * @tc.desc: Verify that dot information is reported when the application starts.
     */
    it('Acts_StartupAndExitEventReport_0400', 0, async function (done) {
      console.log('====>Acts_StartupAndExitEventReport_0400 start');
      let want = {
        'deviceId': '',
        'bundleName': 'com.example.actsstagerely',
        'abilityName': 'EntryAbility'
      };
      globalThis.abilityContext.startAbility(want, (err) => {
        console.log('====>Acts_StartupAndExitEventReport_0400 startAbility:' + JSON.stringify(err));
      });
      setTimeout(function () {
        let grepLog = "'\"name_\":\"PROCESS_START\"'";
        let cmd = "hilog -x | grep " + grepLog;
        abilityDelegator.executeShellCommand(cmd, (err, data) => {
          if (data.stdResult !== '') {
            try {
                expect(data.stdResult).assertContain('\"domain_\":\"AAFWK\"');
                expect(data.stdResult).assertContain('\"name_\":\"PROCESS_START\"');
                expect(data.stdResult).assertContain('\"STARTUP_ABILITY_TYPE\":1');
                expect(data.stdResult).assertContain('\"CALLER_BUNDLE_NAME\":\"com.example.actsstagetest\"');
                expect(data.stdResult).assertContain('\"CALLER_PROCESS_NAME\":\"com.example.actsstagetest\"');
              } catch {
              expect().assertFail();
            }
          } else {
            expect().assertFail();
          }
          abilityDelegator.executeShellCommand('pkill -f com.ohos.contacts', (err, data) => {
            console.log('====>Acts_StartupAndExitEventReport_0400 pkill:' + JSON.stringify(err));
            done();
          });
        });
      }, 4000);
    })

    /*
     * @tc.number: Acts_StartupAndExitEventReport_0500.
     * @tc.name: When the application starts and exits, the dot information is reported.
     * @tc.desc: Verify that dot information is reported when the application exits.
     */
    it('Acts_StartupAndExitEventReport_0500', 0, async function (done) {
      console.log('====>Acts_StartupAndExitEventReport_0500 start');
      let want = {
        'deviceId': '',
        'bundleName': 'com.example.actsterminaterely',
        'abilityName': 'EntryAbility'
      };
      globalThis.abilityContext.startAbility(want, (err) => {
        console.log('====>Acts_StartupAndExitEventReport_0500 startAbility:' + JSON.stringify(err));
      });
      setTimeout(function () {
        let grepLog = "'\"name_\":\"PROCESS_EXIT\"'";
        let cmd = "hilog -x | grep " + grepLog;
        abilityDelegator.executeShellCommand(cmd, (err, data) => {
          if (data.stdResult !== '') {
            try {
              expect(data.stdResult).assertContain('\"domain_\":\"AAFWK\"');
              expect(data.stdResult).assertContain('\"name_\":\"PROCESS_EXIT\"');
              expect(data.stdResult).assertContain('\"EXIT_RESULT\":0');
            } catch {
              expect().assertFail();
            }
          } else {
            expect().assertFail();
          }
          abilityDelegator.executeShellCommand('pkill -f com.example.actsterminaterely', (err, data) => {
            console.log('====>Acts_StartupAndExitEventReport_0500 pkill:' + JSON.stringify(err));
            done();
          });
        });
      }, 4000);
    })

    /*
     * @tc.number: Acts_StartupAndExitEventReport_0600.
     * @tc.name: When the application starts and exits, the dot information is reported.
     * @tc.desc: Verify that dot information is reported when the application exits.
     */
    it('Acts_StartupAndExitEventReport_0600', 0, async function (done) {
      console.log('====>Acts_StartupAndExitEventReport_0600 start');
      let want = {
        'deviceId': '',
        'bundleName': 'com.example.actsterminaterely',
        'abilityName': 'KillProcessWithAccountAbility'
      };
      globalThis.abilityContext.startAbility(want, (err) => {
        console.log('====>Acts_StartupAndExitEventReport_0600 startAbility:' + JSON.stringify(err));
      });
      setTimeout(function () {
        let newlog = "'\"domain_\":\"AAFWK\",\"name_\":\"PROCESS_EXIT\",\"type_\":4'";
        let cmd = "hilog -x | grep " + newlog;
        abilityDelegator.executeShellCommand(cmd, (err, data) => {
          if (data.stdResult !== '') {
            try {
                expect(data.stdResult).assertContain('\"domain_\":\"AAFWK\"');
                expect(data.stdResult).assertContain('\"name_\":\"PROCESS_EXIT\"');
                expect(data.stdResult).assertContain('\"EXIT_RESULT\":0');
              } catch {
              expect().assertFail();
            }
          } else {
            expect().assertFail();
          }
          abilityDelegator.executeShellCommand('pkill -f com.example.actsterminaterely', (err, data) => {
            console.log('====>Acts_StartupAndExitEventReport_0600 pkill:' + JSON.stringify(err));
            done();
          });
        });
      }, 5000);
    })

    /*
     * @tc.number: Acts_StartupAndExitEventReport_0700.
     * @tc.name: When the application starts and exits, the dot information is reported.
     * @tc.desc: Verify that dot information is reported when the application exits.
     */
    it('Acts_StartupAndExitEventReport_0700', 0, async function (done) {
      console.log('====>Acts_StartupAndExitEventReport_0700 start');
      let want = {
        'deviceId': '',
        'bundleName': 'com.example.actsterminaterely',
        'abilityName': 'KillProcessesByBundleNameAbility'
      };
      globalThis.abilityContext.startAbility(want, (err) => {
        console.log('====>Acts_StartupAndExitEventReport_0700 startAbility:' + JSON.stringify(err));
      });
      setTimeout(function () {
        let grepLog = "'\"name_\":\"PROCESS_EXIT\"'";
        let cmd = "hilog -x | grep " + grepLog;
        abilityDelegator.executeShellCommand(cmd, (err, data) => {
          if (data.stdResult !== '') {
            try {
              expect(data.stdResult).assertContain('\"domain_\":\"AAFWK\"');
              expect(data.stdResult).assertContain('\"name_\":\"PROCESS_EXIT\"');
              expect(data.stdResult).assertContain('\"EXIT_RESULT\":0');
            } catch {
              expect().assertFail();
            }
          } else {
            expect().assertFail();
          }
          abilityDelegator.executeShellCommand('pkill -f com.example.actsterminaterely', (err, data) => {
            console.log('====>Acts_StartupAndExitEventReport_0700 pkill:' + JSON.stringify(err));
            done();
          });
        });
      }, 4000);
    })

    /*
     * @tc.number: Acts_StartupAndExitEventReport_0800.
     * @tc.name: When the application starts and exits, the dot information is reported.
     * @tc.desc: Verify that dot information is reported when the application exits.
     */
    it('Acts_StartupAndExitEventReport_0800', 0, async function (done) {
      console.log('====>Acts_StartupAndExitEventReport_0800 start');
      let aaCommand = 'aa test -b com.example.actstestability -m entry_test ' +
      '-s unittest OpenHarmonyTestRunner -s class ActsAbilityTest';
      abilityDelegator.executeShellCommand(aaCommand, (err, data) => {
        JSON.stringify('====>Acts_StartupAndExitEventReport_0800 aa start:' + JSON.stringify(err));
      })
      setTimeout(function () {
        let grepLog = "'\"name_\":\"PROCESS_EXIT\"'";
        let cmd = "hilog -x | grep " + grepLog;
        abilityDelegator.executeShellCommand(cmd, (err, data) => {
          if (data.stdResult !== '') {
            try {
                expect(data.stdResult).assertContain('\"domain_\":\"AAFWK\"');
                expect(data.stdResult).assertContain('\"name_\":\"PROCESS_EXIT\"');
                expect(data.stdResult).assertContain('\"EXIT_RESULT\":0');
              } catch {
              expect().assertFail();
            }
          } else {
            expect().assertFail();
          }
          done();
        });
      }, 2000);
    })

    /*
     * @tc.number: Acts_StartupAndExitEventReport_0900.
     * @tc.name: When the application starts and exits, the dot information is reported.
     * @tc.desc: Verify that dot information is reported when the application starts.
     */
    it('Acts_StartupAndExitEventReport_0900', 0, async function (done) {
      console.log('====>Acts_StartupAndExitEventReport_0900 start');
      let aaCommand = 'aa start -b ohos.samples.distributedcalc -a ohos.samples.distributedcalc.MainAbility';
      abilityDelegator.executeShellCommand(aaCommand, (err, data) => {
        JSON.stringify('====>Acts_StartupAndExitEventReport_0900 aa start:' + JSON.stringify(err));
      })
      setTimeout(function () {
        let grepLog = "'\"name_\":\"PROCESS_START\"'";
        let cmd = "hilog -x | grep " + grepLog;
        abilityDelegator.executeShellCommand(cmd, (err, data) => {
          if (data.stdResult !== '') {
            try {
              expect(data.stdResult).assertContain('\"domain_\":\"AAFWK\"');
              expect(data.stdResult).assertContain('\"name_\":\"PROCESS_START\"');
              expect(data.stdResult).assertContain('\"STARTUP_ABILITY_TYPE\":1');
              expect(data.stdResult).assertContain('\"CALLER_BUNDLE_NAME\":\"\"');
              expect(data.stdResult).assertContain('\"CALLER_UID\":0');
              expect(data.stdResult).assertContain('\"CALLER_PROCESS_NAME\":\"hdcd\"');
            } catch {
              expect().assertFail();
            }
          } else {
            expect().assertFail();
          }
          done();
        });
      }, 500);
    })

    /*
     * @tc.number: Acts_StartupAndExitEventReport_1000.
     * @tc.name: When the application starts and exits, the dot information is reported.
     * @tc.desc: Verify that dot information is reported when the application exits.
     */
    it('Acts_StartupAndExitEventReport_1000', 0, async function (done) {
      console.log('====>Acts_StartupAndExitEventReport_1000 start');
      let startDistributedCal = 'aa start -b ohos.samples.distributedcalc -a ohos.samples.distributedcalc.MainAbility';
      abilityDelegator.executeShellCommand(startDistributedCal, (err, data) => {
        console.log('====>Acts_StartupAndExitEventReport_1000 startDistributedCalc:' + JSON.stringify(err));
      })
      let forceStopCmd = 'aa force-stop ohos.samples.distributedcalc';
      abilityDelegator.executeShellCommand(forceStopCmd, (err, data) => {
        console.log('====>Acts_StartupAndExitEventReport_1000 force-stop:' + JSON.stringify(err));
      })
      setTimeout(function () {
        let grepLog = "'\"name_\":\"PROCESS_EXIT\"'";
        let cmd = "hilog -x | grep " + grepLog;
        abilityDelegator.executeShellCommand(cmd, (err, data) => {
          if (data.stdResult !== '') {
            try {
              expect(data.stdResult).assertContain('\"domain_\":\"AAFWK\"');
              expect(data.stdResult).assertContain('\"name_\":\"PROCESS_EXIT\"');
              expect(data.stdResult).assertContain('\"EXIT_RESULT\":0');
            } catch {
              expect().assertFail();
            }
          } else {
            expect().assertFail();
          }
          done();
        });
      }, 500);
    })

    /*
     * @tc.number: Acts_StartupAndExitEventReport_1100.
     * @tc.name: When the application starts and exits, the dot information is reported.
     * @tc.desc: Verify that dot information is reported when the application exits.
     */
    it('Acts_StartupAndExitEventReport_1100', 0, async function (done) {
      console.log('====>Acts_StartupAndExitEventReport_1100 start');
      let startDistributedCal = 'aa start -b ohos.samples.distributedcalc -a ohos.samples.distributedcalc.MainAbility';
      abilityDelegator.executeShellCommand(startDistributedCal, (err, data) => {
        console.log('====>Acts_StartupAndExitEventReport_1100 startDistributedCalc:' + JSON.stringify(err));
      })
      setTimeout(function () {
        let pkillCmd = 'pkill -f ohos.samples.distributedcalc';
        abilityDelegator.executeShellCommand(pkillCmd, (err, data) => {
          console.log('====>Acts_StartupAndExitEventReport_1100 pkill:' + JSON.stringify(err));
        })
        let grepLog = "'\"name_\":\"PROCESS_EXIT\"'";
        let cmd = "hilog -x | grep " + grepLog;
        abilityDelegator.executeShellCommand(cmd, (err, data) => {
          if (data.stdResult !== '') {
            try {
              expect(data.stdResult).assertContain('\"domain_\":\"AAFWK\"');
              expect(data.stdResult).assertContain('\"name_\":\"PROCESS_EXIT\"');
              expect(data.stdResult).assertContain('\"EXIT_RESULT\":0');
            } catch {
              expect().assertFail();
            }
          } else {
            expect().assertFail();
          }
          done();
        });
      }, 500);
    })

    /*
     * @tc.number: Acts_StartupAndExitEventReport_1200.
     * @tc.name: When the application starts and exits, the dot information is reported.
     * @tc.desc: Verify that dot information is reported when the application exits.
     */
    it('Acts_StartupAndExitEventReport_1200', 0, async function (done) {
      console.log('====>Acts_StartupAndExitEventReport_1200 start');
      let startCmd = 'aa start -b com.example.actsterminaterely -a TestAbility';
      abilityDelegator.executeShellCommand(startCmd, (err, data) => {
        console.log('====>Acts_StartupAndExitEventReport_1200 aa start:' + JSON.stringify(err));
      })
      setTimeout(function () {
        abilityDelegator.executeShellCommand('bm uninstall -n com.example.actsterminaterely', (err, data) => {
          console.log('====>Acts_StartupAndExitEventReport_1200 bm uninstall:' + JSON.stringify(err));
        });
        let grepLog = "'\"name_\":\"PROCESS_EXIT\"'";
        let cmd = "hilog -x | grep " + grepLog;
        abilityDelegator.executeShellCommand(cmd, (err, data) => {
          if (data.stdResult !== '') {
            try {
                expect(data.stdResult).assertContain('\"domain_\":\"AAFWK\"');
                expect(data.stdResult).assertContain('\"name_\":\"PROCESS_EXIT\"');
                expect(data.stdResult).assertContain('\"EXIT_RESULT\":0');
              } catch {
              expect().assertFail();
            }
          } else {
            expect().assertFail();
          }
          done();
        });
      }, 500);
    })
  })
}