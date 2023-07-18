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
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';

export default function abilityTest() {
  describe('ActsAbilityTest', function () {
    beforeEach(function (done) {
      let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
      abilityDelegator.executeShellCommand("hilog -r", async (err, data) => {});
      abilityDelegator.executeShellCommand("hilog -Q pidoff", async (err, data) => {});
      abilityDelegator.executeShellCommand("hilog -Q domainoff", async (err, data) => {});
      abilityDelegator.executeShellCommand("hilog -b D", async (err, data) => {});
      abilityDelegator.executeShellCommand("hilog -G 20M", async (err, data) => {});
      setTimeout(function () {
        done();
      }, 4000);
    })

    afterEach(async function () {
      var abilityDelegator;
      abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
      await abilityDelegator.executeShellCommand('pkill -f com.example.reportdrawncompletedreply',
        (err : any, data : any) => {
        console.info("executeShellCommand callback");
      });
      await abilityDelegator.executeShellCommand('hilog -r', (err : any, data : any) => {
        console.info("executeShellCommand1 callback");
      });
    })

    /*
     * @tc.number: Acts_ReportDrawnCompleted_AsyncCallback_0100
     * @tc.name: Load management
     * @tc.desc: The uiability of this application use asyncCallback way call reportDrawnCompleted interface
     *           viewing console output information.
     */
    it('Acts_ReportDrawnCompleted_AsyncCallback_0100', 0, function (done) {
      var want = {
        "deviceId": "",
        "bundleName": "com.example.reportdrawncompletedmanualtest",
        "abilityName": "EntryAbility",
      };
      globalThis.context.startAbility(want, () => {});

      let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
      setTimeout(function () {
        console.log('====>ReportDrawnCompleted_0100 expect start ');
        var grepLog = "'Decoded event: {\"domain_\":\"AAFWK\"'";
        var cmd = "hilog -x | grep " + grepLog;
        abilityDelegator.executeShellCommand(cmd, async (err, data) => {
          console.log('====>ReportDrawnCompleted_0100 executeShellCommand err : ' + JSON.stringify(err));
          if (data.stdResult) {
            console.log('====>ReportDrawnCompleted_0100 data.stdResult : ' + JSON.stringify(data.stdResult));
            try {
              expect(data.stdResult).assertContain("\"domain_\":\"AAFWK\"");
              expect(data.stdResult).assertContain("\"name_\":\"DRAWN_COMPLETED\"");
              expect(data.stdResult).assertContain("\"type_\":4");
              expect(data.stdResult).assertContain("\"tz_\":\"+0800\"");
              expect(data.stdResult).assertContain("\"BUNDLE_NAME\":\"com.example.reportdrawncompletedmanualtest\"");
              expect(data.stdResult).assertContain("\"MODULE_NAME\":\"entry\"");
              expect(data.stdResult).assertContain("\"ABILITY_NAME\":\"EntryAbility\"");
            } catch {
              expect().assertFail();
              done();
            }
            done();
          } else {
            expect().assertFail();
            done();
          }
        });
      }, 200);
    })

    /*
     * @tc.number: Acts_ReportDrawnCompleted_AsyncCallback_0200
     * @tc.name: Load management
     * @tc.desc: The uiAbility of this external application use asyncCallback way call reportDrawnCompleted interface 
     *           viewing console output information.
     */
    it('Acts_ReportDrawnCompleted_AsyncCallback_0200', 0, function (done) {
      var want = {
        "deviceId": "",
        "bundleName": "com.example.reportdrawncompletedreply",
        "abilityName": "EntryAbility"
      };
      globalThis.context.startAbility(want, () => {});

      let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
      setTimeout(function () {
        console.log('====>ReportDrawnCompleted_0200 expect start ');
        var grepLog = "'Decoded event: {\"domain_\":\"AAFWK\"'";
        var cmd = "hilog -x | grep " + grepLog;
        abilityDelegator.executeShellCommand(cmd, async (err, data) => {
          console.log('====>ReportDrawnCompleted_0200 executeShellCommand err : ' + JSON.stringify(err));
          if (data.stdResult) {
            console.log('====>ReportDrawnCompleted_0200 data.stdResult : ' + JSON.stringify(data.stdResult));
            try {
              expect(data.stdResult).assertContain("\"domain_\":\"AAFWK\"");
              expect(data.stdResult).assertContain("\"name_\":\"DRAWN_COMPLETED\"");
              expect(data.stdResult).assertContain("\"type_\":4");
              expect(data.stdResult).assertContain("\"tz_\":\"+0800\"");
              expect(data.stdResult).assertContain("\"BUNDLE_NAME\":\"com.example.reportdrawncompletedreply\"");
              expect(data.stdResult).assertContain("\"MODULE_NAME\":\"entry\"");
              expect(data.stdResult).assertContain("\"ABILITY_NAME\":\"EntryAbility\"");
            } catch {
              expect().assertFail();
              done();
            }
            done();
          } else {
            expect().assertFail();
            done();
          }
        });
      }, 1000);
    })
  })
}