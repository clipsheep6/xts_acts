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
import appManager from "@ohos.application.appManager";
import osaccount from '@ohos.account.osAccount';


let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();

// function sleep(time) {
//   return new Promise((resolve) => setTimeout(resolve, time))
// }

export default function abilityTest() {
  describe('ActsAbilityTest', function () {

    // beforeAll(async function (done) {
    //   await sleep(2000);
    //   abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
    //   let cmdInstallActsDataRely = "bm install -p data/test/ActsDataRely.hap";
    //   let cmdInstallActsFaRely = "bm install -p data/test/ActsFaRely.hap";
    //   let cmdActsStageRely = "bm install -p data/test/ActsStageRely.hap";
    //   let cmdActsTerminateRely = "bm install -p data/test/ActsTerminateRely.hap";
    //   let cmdActsTestAbilityRely = "bm install -p data/test/ActsTestAbilityRely.hap";
    //   console.info("cmd : " + cmdInstallActsDataRely)
    //   await abilityDelegator.executeShellCommand(cmdInstallActsDataRely, (err: any, d: any) => {
    //     console.info("executeShellCommand : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
    //   });
    //   await sleep(2000);
    //   await abilityDelegator.executeShellCommand(cmdInstallActsFaRely, (err: any, d: any) => {
    //     console.info("executeShellCommand : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
    //   });
    //   await sleep(2000);
    //   await abilityDelegator.executeShellCommand(cmdActsStageRely, (err: any, d: any) => {
    //     console.info("executeShellCommand : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
    //   });
    //   await sleep(2000);
    //   await abilityDelegator.executeShellCommand(cmdActsTerminateRely, (err: any, d: any) => {
    //     console.info("executeShellCommand : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
    //   });
    //   await sleep(2000);
    //   await abilityDelegator.executeShellCommand(cmdActsTestAbilityRely, (err: any, d: any) => {
    //     console.info("executeShellCommand : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
    //   });
    //   await sleep(2000);
    // });

    beforeEach(async function (done) {
      await abilityDelegator.executeShellCommand('hilog -r');
      await setTimeout(done(), 500);
    })

    /*
     * @tc.number: Acts_StartupAndExitEventReport_0100.
     * @tc.name: When the application starts and exits, the dot information is reported.
     * @tc.desc: Verify that dot information is reported when the application starts.
     */
    // it('Acts_StartupAndExitEventReport_0100', 0, async function (done) {
    //   console.log('====>Acts_StartupAndExitEventReport_0100 start');
    //   let want = {
    //     'deviceId': '',
    //     'bundleName': 'com.example.actsfarely',
    //     'abilityName': 'com.example.actsfarely.MainAbility'
    //   };
    //   await globalThis.abilityContext.startAbility(want).then((data) => {
    //     console.log('====>Acts_StartupAndExitEventReport_0100 startAbility data:' + JSON.stringify(data));
    //   }).catch((err) => {
    //     console.log('====>Acts_StartupAndExitEventReport_0100 startAbility err:' + JSON.stringify(err));
    //   });
    //   setTimeout(function () {
    //     let grepLog = "'\"name_\":\"PROCESS_START\"'";
    //     let cmd = "hilog -x | grep " + grepLog;
    //     abilityDelegator.executeShellCommand(cmd, (err, data) => {
    //       if (data.stdResult !== '') {
    //         try {
    //           expect(data.stdResult).assertContain('"domain_":"AAFWK"');
    //           expect(data.stdResult).assertContain('"name_":"PROCESS_START"');
    //           expect(data.stdResult).assertContain('"STARTUP_ABILITY_TYPE":1');
    //           expect(data.stdResult).assertContain('"CALLER_BUNDLE_NAME":"com.acts.actsstagetest"');
    //           expect(data.stdResult).assertContain('"CALLER_PROCESS_NAME":"com.acts.actsstagetest"');
    //         } catch {
    //           console.log('====>Acts_StartupAndExitEventReport_0100 assert exception');
    //           expect().assertFail();
    //         }
    //       } else {
    //         console.log('====>Acts_StartupAndExitEventReport_0100 cmd err:' + JSON.stringify(err));
    //         expect().assertFail();
    //       }
    //       abilityDelegator.executeShellCommand('pkill -f com.example.actsfarely', (err, data) => {
    //         console.log('====>Acts_StartupAndExitEventReport_0100 pkill err:' + JSON.stringify(err));
    //         done();
    //       });
    //     });
    //   }, 3000);
    // })

    // /*
    //  * @tc.number: Acts_StartupAndExitEventReport_0200.
    //  * @tc.name: When the application starts and exits, the dot information is reported.
    //  * @tc.desc: Verify that dot information is reported when the application starts.
    //  */
    // it('Acts_StartupAndExitEventReport_0200', 0, async function (done) {
    //   console.log('====>Acts_StartupAndExitEventReport_0200 start');
    //   let want = {
    //     'deviceId': '',
    //     'bundleName': 'com.example.actsdatarely',
    //     'abilityName': 'com.example.actsdatarely.MainAbility'
    //   };
    //   await globalThis.abilityContext.startAbility(want).then((data) => {
    //     console.log('====>Acts_StartupAndExitEventReport_0200 startAbility data:' + JSON.stringify(data));
    //   }).catch((err) => {
    //     console.log('====>Acts_StartupAndExitEventReport_0200 startAbility err:' + JSON.stringify(err));
    //   });
    //   setTimeout(function () {
    //     let grepLog = "'\"name_\":\"PROCESS_START\"'";
    //     let cmd = "hilog -x | grep " + grepLog;
    //     abilityDelegator.executeShellCommand(cmd, (err, data) => {
    //       if (data.stdResult !== '') {
    //         try {
    //             expect(data.stdResult).assertContain('\"domain_\":\"AAFWK\"');
    //             expect(data.stdResult).assertContain('\"name_\":\"PROCESS_START\"');
    //             expect(data.stdResult).assertContain('\"STARTUP_ABILITY_TYPE\":3');
    //             expect(data.stdResult).assertContain('\"CALLER_BUNDLE_NAME\":\"com.acts.actsstagetest\"');
    //             expect(data.stdResult).assertContain('\"CALLER_PROCESS_NAME\":\"com.acts.actsstagetest\"');
    //           } catch {
    //           console.log('====>Acts_StartupAndExitEventReport_0200 assert exception');
    //           expect().assertFail();
    //         }
    //       } else {
    //         console.log('====>Acts_StartupAndExitEventReport_0200 cmd err:' + JSON.stringify(err));
    //         expect().assertFail();
    //       }
    //       abilityDelegator.executeShellCommand('pkill -f com.example.actsdatarely', (err, data) => {
    //         console.log('====>Acts_StartupAndExitEventReport_0200 pkill err:' + JSON.stringify(err));
    //         done();
    //       });
    //     });
    //   }, 3000);
    // })

    // /*
    //  * @tc.number: Acts_StartupAndExitEventReport_0300.
    //  * @tc.name: When the application starts and exits, the dot information is reported.
    //  * @tc.desc: Verify that dot information is reported when the application starts.
    //  */
    // it('Acts_StartupAndExitEventReport_0300', 0, async function (done) {
    //   console.log('====>Acts_StartupAndExitEventReport_0300 start');
    //   let want = {
    //     'deviceId': '',
    //     'bundleName': 'com.ohos.contacts',
    //     'abilityName': 'com.ohos.contacts.MainAbility'
    //   };
    //   await globalThis.abilityContext.startAbility(want).then((data) => {
    //     console.log('====>Acts_StartupAndExitEventReport_0300 startAbility data:' + JSON.stringify(data));
    //   }).catch((err) => {
    //     console.log('====>Acts_StartupAndExitEventReport_0300 startAbility err:' + JSON.stringify(err));
    //   });
    //   setTimeout(function () {
    //     let grepLog = "'\"name_\":\"PROCESS_START\"'";
    //     let cmd = "hilog -x | grep " + grepLog;
    //     abilityDelegator.executeShellCommand(cmd, (err, data) => {
    //       if (data.stdResult !== '') {
    //         try {
    //             expect(data.stdResult).assertContain('\"domain_\":\"AAFWK\"');
    //             expect(data.stdResult).assertContain('\"name_\":\"PROCESS_START\"');
    //             expect(data.stdResult).assertContain('\"STARTUP_ABILITY_TYPE\":5');
    //             expect(data.stdResult).assertContain('\"STARTUP_EXTENSION_TYPE\":5');
    //             expect(data.stdResult).assertContain('\"CALLER_BUNDLE_NAME\":\"com.ohos.contacts\"');
    //             expect(data.stdResult).assertContain('\"CALLER_PROCESS_NAME\":\"com.ohos.contacts\"');
    //           } catch {
    //           console.log('====>Acts_StartupAndExitEventReport_0300 assert exception');
    //           expect().assertFail();
    //         }
    //       } else {
    //         console.log('====>Acts_StartupAndExitEventReport_0300 cmd err' + JSON.stringify(err));
    //         expect().assertFail();
    //       }
    //       abilityDelegator.executeShellCommand('pkill -f com.ohos.contacts', (err, data) => {
    //         console.log('====>Acts_StartupAndExitEventReport_0300 pkill err:' + JSON.stringify(err));
    //         done();
    //       });
    //     });
    //   }, 4000);
    // })

    // /*
    //  * @tc.number: Acts_StartupAndExitEventReport_0400.
    //  * @tc.name: When the application starts and exits, the dot information is reported.
    //  * @tc.desc: Verify that dot information is reported when the application starts.
    //  */
    // it('Acts_StartupAndExitEventReport_0400', 0, async function (done) {
    //   console.log('====>Acts_StartupAndExitEventReport_0400 start');
    //   let want = {
    //     'deviceId': '',
    //     'bundleName': 'com.acts.actsstagerely',
    //     'abilityName': 'EntryAbility'
    //   };
    //   await globalThis.abilityContext.startAbility(want).then((data) => {
    //     console.log('====>Acts_StartupAndExitEventReport_0400 startAbility data:' + JSON.stringify(data));
    //   }).catch((err) => {
    //     console.log('====>Acts_StartupAndExitEventReport_0400 startAbility err:' + JSON.stringify(err));
    //   });
    //   setTimeout(function () {
    //     let grepLog = "'\"name_\":\"PROCESS_START\"'";
    //     let cmd = "hilog -x | grep " + grepLog;
    //     abilityDelegator.executeShellCommand(cmd, (err, data) => {
    //       if (data.stdResult !== '') {
    //         try {
    //             expect(data.stdResult).assertContain('\"domain_\":\"AAFWK\"');
    //             expect(data.stdResult).assertContain('\"name_\":\"PROCESS_START\"');
    //             expect(data.stdResult).assertContain('\"STARTUP_ABILITY_TYPE\":1');
    //             expect(data.stdResult).assertContain('\"CALLER_BUNDLE_NAME\":\"com.acts.actsstagetest\"');
    //             expect(data.stdResult).assertContain('\"CALLER_PROCESS_NAME\":\"com.acts.actsstagetest\"');
    //           } catch {
    //           console.log('====>Acts_StartupAndExitEventReport_0400 assert exception');
    //           expect().assertFail();
    //         }
    //       } else {
    //         console.log('====>Acts_StartupAndExitEventReport_0400 cmd err:' + JSON.stringify(err));
    //         expect().assertFail();
    //       }
    //       abilityDelegator.executeShellCommand('pkill -f com.acts.actsstagerely', (err, data) => {
    //         console.log('====>Acts_StartupAndExitEventReport_0400 pkill err:' + JSON.stringify(err));
    //         done();
    //       });
    //     });
    //   }, 4000);
    // })

    /*
     * @tc.number: Acts_StartupAndExitEventReport_0500.
     * @tc.name: When the application starts and exits, the dot information is reported.
     * @tc.desc: Verify that dot information is reported when the application exits.
     */
    it('Acts_StartupAndExitEventReport_0500', 0, async function (done) {
      console.log('====>Acts_StartupAndExitEventReport_0500 start');
      let want = {
        'deviceId': '',
        'bundleName': 'com.acts.actsterminaterely',
        'abilityName': 'KillProcessWithAccountAbility'
      };
      await globalThis.abilityContext.startAbility(want).then((data) => {
        console.log('====>Acts_StartupAndExitEventReport_0500 startAbility data:' + JSON.stringify(data));
      }).catch((err) => {
        console.log('====>Acts_StartupAndExitEventReport_0500 startAbility err:' + JSON.stringify(err));
      });
      let accountId = 100;
      let AccountManager = osaccount.getAccountManager();
      await AccountManager.getCurrentOsAccount().then((data) => {
        accountId = data.localId;
        console.log('====>Acts_StartupAndExitEventReport_0500 getCurrentOsAccount:' + JSON.stringify(data.localId));
      }).catch((err) => {
        console.log('====>Acts_StartupAndExitEventReport_0500 getCurrentOsAccount: err:' + JSON.stringify(err));
      });
      await appManager.killProcessWithAccount('com.acts.actsterminaterely', accountId).then(() => {
        console.info('=====> killProcessWithAccount OK end');
      }).catch((err) => {
        console.info('=====> killProcessWithAccount err ' + JSON.stringify(err) + ' end');
      });
      setTimeout(function () {
        let grepLog = "'\"name_\":\"PROCESS_EXIT\"'";
        let cmd = "hilog -x | grep " + grepLog;
        abilityDelegator.executeShellCommand(cmd, (err, data) => {
          if (data.stdResult !== '') {
            try {
              console.log('====>Acts_StartupAndExitEventReport_0500 assert start');
              expect(data.stdResult).assertContain('\"domain_\":\"AAFWK\"');
              console.log('====>Acts_StartupAndExitEventReport_0500 assert two');
              expect(data.stdResult).assertContain('\"name_\":\"PROCESS_EXIT\"');
              console.log('====>Acts_StartupAndExitEventReport_0500 assert three');
              expect(data.stdResult).assertContain('\"EXIT_RESULT\":0');
              console.log('====>Acts_StartupAndExitEventReport_0500 assert end');
            } catch {
              console.log('====>Acts_StartupAndExitEventReport_0500 assert exception');
              expect().assertFail();
            }
          } else {
            console.log('====>Acts_StartupAndExitEventReport_0500 cmd err:' + JSON.stringify(err));
            expect().assertFail();
          }
          abilityDelegator.executeShellCommand('pkill -f com.acts.actsterminaterely', (err, data) => {
            console.log('====>Acts_StartupAndExitEventReport_0500 pkill err:' + JSON.stringify(err));
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
//     it('Acts_StartupAndExitEventReport_0600', 0, async function (done) {
//       console.log('====>Acts_StartupAndExitEventReport_0600 start');
//       let want = {
//         'deviceId': '',
//         'bundleName': 'com.acts.actsterminaterely',
//         'abilityName': 'KillProcessesByBundleNameAbility'
//       };
//       await globalThis.abilityContext.startAbility(want).then((data) => {
//         console.log('====>Acts_StartupAndExitEventReport_0600 startAbility data:' + JSON.stringify(data));
//       }).catch((err) => {
//         console.log('====>Acts_StartupAndExitEventReport_0600 startAbility err:' + JSON.stringify(err));
//       });
//       setTimeout(function () {
//         let grepLog = "'\"name_\":\"PROCESS_EXIT\"'";
//         let cmd = "hilog -x | grep " + grepLog;
//         abilityDelegator.executeShellCommand(cmd, (err, data) => {
//           if (data.stdResult !== '') {
//             try {
//               expect(data.stdResult).assertContain('\"domain_\":\"AAFWK\"');
//               expect(data.stdResult).assertContain('\"name_\":\"PROCESS_EXIT\"');
//               expect(data.stdResult).assertContain('\"EXIT_RESULT\":0');
//             } catch {
//               console.log('====>Acts_StartupAndExitEventReport_0600 assert exception');
//               expect().assertFail();
//             }
//           } else {
//             console.log('====>Acts_StartupAndExitEventReport_0600 cmd err:' + JSON.stringify(err));
//             expect().assertFail();
//           }
//           abilityDelegator.executeShellCommand('pkill -f com.acts.actsterminaterely', (err, data) => {
//             console.log('====>Acts_StartupAndExitEventReport_0600 pkill err:' + JSON.stringify(err));
//             done();
//           });
//         });
//       }, 4000);
//     })

//     /*
//  * @tc.number: Acts_StartupAndExitEventReport_0700.
//  * @tc.name: When the application starts and exits, the dot information is reported.
//  * @tc.desc: Verify that dot information is reported when the application exits.
//  */
//     it('Acts_StartupAndExitEventReport_0700', 0, async function (done) {
//       console.log('====>Acts_StartupAndExitEventReport_0700 start');
//       let want = {
//         'deviceId': '',
//         'bundleName': 'com.acts.actsterminaterely',
//         'abilityName': 'EntryAbility'
//       };
//       await globalThis.abilityContext.startAbility(want).then((data) => {
//         console.log('====>Acts_StartupAndExitEventReport_0700 startAbility data:' + JSON.stringify(data));
//       }).catch((err) => {
//         console.log('====>Acts_StartupAndExitEventReport_0700 startAbility err:' + JSON.stringify(err));
//       });
//       setTimeout(function () {
//         let grepLog = "'\"name_\":\"PROCESS_EXIT\"'";
//         let cmd = "hilog -x | grep " + grepLog;
//         abilityDelegator.executeShellCommand(cmd, (err, data) => {
//           if (data.stdResult !== '') {
//             try {
//                   expect(data.stdResult).assertContain('\"domain_\":\"AAFWK\"');
//                   expect(data.stdResult).assertContain('\"name_\":\"PROCESS_EXIT\"');
//                   expect(data.stdResult).assertContain('\"EXIT_RESULT\":0');
//                   done();
//                 } catch {
//               console.log('====>Acts_StartupAndExitEventReport_0700 assert exception');
//               expect().assertFail();
//             }
//           } else {
//             console.log('====>Acts_StartupAndExitEventReport_0700 cmd err:' + JSON.stringify(err));
//             expect().assertFail();
//           }
//           abilityDelegator.executeShellCommand('pkill -f com.acts.actsterminaterely', (err, data) => {
//             console.log('====>Acts_StartupAndExitEventReport_0700 pkill err:' + JSON.stringify(err));
//             done();
//           });
//         });
//       }, 3000);
//     })

//     /*
//      * @tc.number: Acts_StartupAndExitEventReport_0800.
//      * @tc.name: When the application starts and exits, the dot information is reported.
//      * @tc.desc: Verify that dot information is reported when the application exits.
//      */
//     it('Acts_StartupAndExitEventReport_0800', 0, async function (done) {
//       console.log('====>Acts_StartupAndExitEventReport_0800 start');
//       let startAbility = 'aa test -b com.acts.actstestability -m entry_test ' +
//       '-s unittest OpenHarmonyTestRunner -s class ActsAbilityTest';
//       await abilityDelegator.executeShellCommand(startAbility).then((data) => {
//         console.log('====>Acts_StartupAndExitEventReport_0800 startAbility data:' + JSON.stringify(data));
//       }).catch((err) => {
//         console.log('====>Acts_StartupAndExitEventReport_0800 startAbility err:' + JSON.stringify(err));
//       });
//       setTimeout(function () {
//         let grepLog = "'\"name_\":\"PROCESS_EXIT\"'";
//         let cmd = "hilog -x | grep " + grepLog;
//         abilityDelegator.executeShellCommand(cmd, (err, data) => {
//           if (data.stdResult !== '') {
//             try {
//                 expect(data.stdResult).assertContain('\"domain_\":\"AAFWK\"');
//                 expect(data.stdResult).assertContain('\"name_\":\"PROCESS_EXIT\"');
//                 expect(data.stdResult).assertContain('\"EXIT_RESULT\":0');
//               } catch {
//               console.log('====>Acts_StartupAndExitEventReport_0800 assert exception');
//               expect().assertFail();
//             }
//           } else {
//             console.log('====>Acts_StartupAndExitEventReport_0800 cmd err:' + JSON.stringify(err));
//             expect().assertFail();
//           }
//           done();
//         });
//       }, 2000);
//     })

//     /*
//      * @tc.number: Acts_StartupAndExitEventReport_0900.
//      * @tc.name: When the application starts and exits, the dot information is reported.
//      * @tc.desc: Verify that dot information is reported when the application starts.
//      */
//     it('Acts_StartupAndExitEventReport_0900', 0, async function (done) {
//       console.log('====>Acts_StartupAndExitEventReport_0900 start');
//       let startAbilityCommand = 'aa start -b com.ohos.contacts -a com.ohos.contacts.MainAbility';
//       await abilityDelegator.executeShellCommand(startAbilityCommand).then((data) => {
//         setTimeout(function () {
//           let grepLog = "'\"name_\":\"PROCESS_START\"'";
//           let cmd = "hilog -x | grep " + grepLog;
//           abilityDelegator.executeShellCommand(cmd, (err, data) => {
//             if (data.stdResult !== '') {
//               try {
//                 expect(data.stdResult).assertContain('\"domain_\":\"AAFWK\"');
//                 expect(data.stdResult).assertContain('\"name_\":\"PROCESS_START\"');
//                 expect(data.stdResult).assertContain('\"STARTUP_ABILITY_TYPE\":1');
//                 expect(data.stdResult).assertContain('\"CALLER_BUNDLE_NAME\":\"\"');
//                 expect(data.stdResult).assertContain('\"CALLER_UID\":0');
//                 expect(data.stdResult).assertContain('\"CALLER_PROCESS_NAME\":\"hdcd\"');
//               } catch {
//                 console.log('====>Acts_StartupAndExitEventReport_0900 assert exception');
//                 expect().assertFail();
//               }
//             } else {
//               console.log('====>Acts_StartupAndExitEventReport_0900 cmd err:' + JSON.stringify(err));
//               expect().assertFail();
//             }
//             abilityDelegator.executeShellCommand('pkill -f com.ohos.contacts', (err, data) => {
//               console.log('====>Acts_StartupAndExitEventReport_0900 pkill err:' + JSON.stringify(err));
//               done();
//             });
//           });
//         }, 4000);
//       })
//     })

//     /*
//      * @tc.number: Acts_StartupAndExitEventReport_1000.
//      * @tc.name: When the application starts and exits, the dot information is reported.
//      * @tc.desc: Verify that dot information is reported when the application exits.
//      */
//     it('Acts_StartupAndExitEventReport_1000', 0, async function (done) {
//       console.log('====>Acts_StartupAndExitEventReport_1000 start');
//       let startAbility = 'aa start -b com.acts.actsstagerely -a EntryAbility';
//       await abilityDelegator.executeShellCommand(startAbility).then((data) => {
//         console.log('====>Acts_StartupAndExitEventReport_1000 startAbility data:' + JSON.stringify(data));
//       }).catch((err) => {
//         console.log('====>Acts_StartupAndExitEventReport_1000 startAbility err:' + JSON.stringify(err));
//       });
//       setTimeout(function () {
//         let grepLog = "'\"name_\":\"PROCESS_EXIT\"'";
//         let cmd = "hilog -x | grep " + grepLog;
//         let forceStopCmd = 'aa force-stop com.acts.actsstagerely';
//         abilityDelegator.executeShellCommand(forceStopCmd, (err, data) => {
//           if (data.stdResult !== '') {
//             abilityDelegator.executeShellCommand(cmd, (err, data) => {
//               console.log('====>Acts_StartupAndExitEventReport_1000 cmd' + JSON.stringify(data.stdResult));
//               if (data.stdResult !== '') {
//                 try {
//                     expect(data.stdResult).assertContain('\"domain_\":\"AAFWK\"');
//                     expect(data.stdResult).assertContain('\"name_\":\"PROCESS_EXIT\"');
//                     expect(data.stdResult).assertContain('\"EXIT_RESULT\":0');
//                   } catch {
//                   console.log('====>Acts_StartupAndExitEventReport_1000 assert exception');
//                   expect().assertFail();
//                 }
//               } else {
//                 console.log('====>Acts_StartupAndExitEventReport_1000 cmd err:' + JSON.stringify(err));
//                 expect().assertFail();
//               }
//               abilityDelegator.executeShellCommand('pkill -f com.acts.actsstagerely', (err, data) => {
//                 console.log('====>Acts_StartupAndExitEventReport_1000 pkill err:' + JSON.stringify(err));
//                 done();
//               });
//             });
//           } else {
//             console.log('====>Acts_StartupAndExitEventReport_1000 force-stop err:' + JSON.stringify(err));
//             expect().assertFail();
//           }
//         });
//       }, 2000);
//     })

//     /*
//      * @tc.number: Acts_StartupAndExitEventReport_1100.
//      * @tc.name: When the application starts and exits, the dot information is reported.
//      * @tc.desc: Verify that dot information is reported when the application exits.
//      */
//     it('Acts_StartupAndExitEventReport_1100', 0, async function (done) {
//       console.log('====>Acts_StartupAndExitEventReport_1100 start');
//       let startAbility = 'aa start -b com.acts.actsstagerely -a EntryAbility';
//       await abilityDelegator.executeShellCommand(startAbility).then((data) => {
//         console.log('====>Acts_StartupAndExitEventReport_1100 startAbility data:' + JSON.stringify(data));
//       }).catch((err) => {
//         console.log('====>Acts_StartupAndExitEventReport_1100 startAbility err:' + JSON.stringify(err));
//       });
//       await sleep(2000);
//       let pkillCmd = 'pkill -f com.acts.actsstagerely';
//       await abilityDelegator.executeShellCommand(pkillCmd).then((data) => {
//         console.log('====>Acts_StartupAndExitEventReport_1100 pkill data:' + JSON.stringify(data));
//       }).catch((err) => {
//         console.log('====>Acts_StartupAndExitEventReport_1100 pkill err:' + JSON.stringify(err));
//       });
//       let grepLog = "'\"name_\":\"PROCESS_EXIT\"'";
//       let cmd = "hilog -x | grep " + grepLog;
//       setTimeout(function () {
//         abilityDelegator.executeShellCommand(cmd, (err, data) => {
//           if (data.stdResult !== '') {
//             try {
//                   expect(data.stdResult).assertContain('\"domain_\":\"AAFWK\"');
//                   expect(data.stdResult).assertContain('\"name_\":\"PROCESS_EXIT\"');
//                   expect(data.stdResult).assertContain('\"EXIT_RESULT\":0');
//                 } catch {
//               console.log('====>Acts_StartupAndExitEventReport_1100 assert exception');
//               expect().assertFail();
//             }
//           } else {
//             console.log('====>Acts_StartupAndExitEventReport_1100 cmd err:' + JSON.stringify(err));
//             expect().assertFail();
//           }
//           done();
//         });
//       }, 4000);
//     })

//     /*
//      * @tc.number: Acts_StartupAndExitEventReport_1200.
//      * @tc.name: When the application starts and exits, the dot information is reported.
//      * @tc.desc: Verify that dot information is reported when the application exits.
//      */
//     it('Acts_StartupAndExitEventReport_1200', 0, async function (done) {
//       console.log('====>Acts_StartupAndExitEventReport_1200 start');
//       let startAbility = 'aa start -b com.acts.actsterminaterely -a TestAbility';
//       await abilityDelegator.executeShellCommand(startAbility).then((data) => {
//         console.log('====>Acts_StartupAndExitEventReport_1200 startAbility data:' + JSON.stringify(data));
//       }).catch((err) => {
//         console.log('====>Acts_StartupAndExitEventReport_1200 startAbility err:' + JSON.stringify(err));
//       });
//       await sleep(2000);
//       await abilityDelegator.executeShellCommand('bm uninstall -n com.acts.actsterminaterely').then((data) => {
//         console.log('====>Acts_StartupAndExitEventReport_1200 bm uninstall data:' + JSON.stringify(data));
//       }).catch((err) => {
//         console.log('====>Acts_StartupAndExitEventReport_1200 bm uninstall err:' + JSON.stringify(err));
//         expect().assertFail();
//       });
//       setTimeout(function () {
//         let grepLog = "'\"name_\":\"PROCESS_EXIT\"'";
//         let cmd = "hilog -x | grep " + grepLog;
//         abilityDelegator.executeShellCommand(cmd, (err, data) => {
//           if (data.stdResult !== '') {
//             try {
//                 expect(data.stdResult).assertContain('\"domain_\":\"AAFWK\"');
//                 expect(data.stdResult).assertContain('\"name_\":\"PROCESS_EXIT\"');
//                 expect(data.stdResult).assertContain('\"EXIT_RESULT\":0');
//               } catch {
//               console.log('====>Acts_StartupAndExitEventReport_1200 assert exception');
//               expect().assertFail();
//             }
//           } else {
//             console.log('====>Acts_StartupAndExitEventReport_1200 cmd err:' + JSON.stringify(err));
//             expect().assertFail();
//           }
//           done();
//         });
//       }, 4000);
   // })
  })
}