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
import AbilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import osAccount from '@ohos.account.osAccount';

export default function abilityTest() {
  describe('ActsAbilityTest', function () {
    let timeOut: number = 500;
    let accountId;
    let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
    let osAccountManager = osAccount.getAccountManager();

    function sleep(ms) {
      return new Promise(resolve => setTimeout(resolve, ms));
    }

    afterEach(async function () {
      await abilityDelegator.executeShellCommand('bm uninstall -n com.example.actsappcirculationrely').then(data => {
        console.log("Bundle uninstall successfully");
      }).catch(err => {
        console.log("Bundle uninstall fail");
      });
      await sleep(timeOut);
    })
    afterAll(async function () {
      await osAccountManager.removeOsAccount(accountId).then((data) => {
        console.log("AfterAll removeOsAccount successful");
      }).catch((err) => {
        console.log("AfterAll removeOsAccount fail" + JSON.stringify(err));
        expect().assertFail()
      });
    })

    /*
     * @tc.number: Acts_AppCirculation_0100
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_0100', 0, async function (done) {
      console.log("Acts_AppCirculation_0100 start");
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationBaseRely.hap').then(data => {
        console.log("Acts_AppCirculation_0100 install logFirst is : " + JSON.stringify(data.stdResult));
        expect(JSON.stringify(data.stdResult)).assertContain('install bundle successfully');
      }).catch(err => {
        expect().assertFail()
      });
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationUpdateRely.hap').then(data => {
        console.log("Acts_AppCirculation_0100 bundle logSecond is : " + JSON.stringify(data.stdResult));
        expect(JSON.stringify(data.stdResult)).assertContain('install bundle successfully');
        done();
      }).catch(err => {
        expect().assertFail()
        done();
      });
    })

    /*
     * @tc.number: Acts_AppCirculation_0200
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_0200', 0, async function (done) {
      console.log("Acts_AppCirculation_0200 start");
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationBaseRely.hap').then(data => {
        console.log("Acts_AppCirculation_0200 install logFirst is : " + JSON.stringify(data.stdResult));
        expect(JSON.stringify(data.stdResult)).assertContain('install bundle successfully');
      }).catch(err => {
        expect().assertFail()
      });
      await sleep(timeOut);
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationDiffModuleUpdateRely.hap')
        .then(data => {
          console.log("Acts_AppCirculation_0200 bundle logSecond is : " + JSON.stringify(data.stdResult));
          expect(JSON.stringify(data.stdResult)).assertContain('install bundle successfully');
          done();
        })
        .catch(err => {
          expect().assertFail()
          done();
        });
    })

    /*
     * @tc.number: Acts_AppCirculation_0300
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_0300', 0, async function (done) {
      console.log("Acts_AppCirculation_0300 start");
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationBaseRely.hap').then(data => {
        console.log("Acts_AppCirculation_0300 install logFirst is : " + JSON.stringify(data.stdResult));
        expect(JSON.stringify(data.stdResult)).assertContain('install bundle successfully');
      }).catch(err => {
        expect().assertFail()
      });
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationDiffIdUpdateRely.hap')
        .then(data => {
          console.log("Acts_AppCirculation_0300 bundle logSecond is : " + JSON.stringify(data.stdResult));
          expect(JSON.stringify(data.stdResult)).assertContain('install sign info inconsistent');
          done();
        })
        .catch(err => {
          expect().assertFail()
          done();
        });
    })

    /*
     * @tc.number: Acts_AppCirculation_0400
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_0400', 0, async function (done) {
      console.log("Acts_AppCirculation_0400 start");
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationBaseRely.hap').then(data => {
        console.log("Acts_AppCirculation_0400 install logFirst is : " + JSON.stringify(data.stdResult));
        expect(JSON.stringify(data.stdResult)).assertContain('install bundle successfully');
      }).catch(err => {
        expect().assertFail()
      });
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationDiffModuleIdUpdateRely.hap')
        .then(data => {
          console.log("Acts_AppCirculation_0400 bundle logSecond is : " + JSON.stringify(data.stdResult));
          expect(JSON.stringify(data.stdResult)).assertContain('install sign info inconsistent');
          done();
        })
        .catch(err => {
          expect().assertFail()
          done();
        });
    })

    /*
     * @tc.number: Acts_AppCirculation_0500
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_0500', 0, async function (done) {
      console.log("Acts_AppCirculation_0500 start");
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationBaseRely.hap').then(data => {
        console.log("Acts_AppCirculation_0500 install logFirst is : " + JSON.stringify(data.stdResult));
        expect(JSON.stringify(data.stdResult)).assertContain('install bundle successfully');
      }).catch(err => {
        expect().assertFail()
      });
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationDiffAppIdUpdateRely.hap')
        .then(data => {
          console.log("Acts_AppCirculation_0500 bundle logSecond is : " + JSON.stringify(data.stdResult));
          expect(JSON.stringify(data.stdResult)).assertContain('install bundle successfully');
          done();
        })
        .catch(err => {
          expect().assertFail()
          done();
        });
    })

    /*
     * @tc.number: Acts_AppCirculation_0600
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_0600', 0, async function (done) {
      console.log("Acts_AppCirculation_0600 start");
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationBaseRely.hap').then(data => {
        console.log("Acts_AppCirculation_0600 install logFirst is : " + JSON.stringify(data.stdResult));
        expect(JSON.stringify(data.stdResult)).assertContain('install bundle successfully');
      }).catch(err => {
        expect().assertFail()
      });
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationDiffAppIdModuleUpdateRely.hap')
        .then(data => {
          console.log("Acts_AppCirculation_0600 bundle logSecond is : " + JSON.stringify(data.stdResult));
          expect(JSON.stringify(data.stdResult)).assertContain('install bundle successfully');
          done();
        })
        .catch(err => {
          expect().assertFail()
          done();
        });
    })

    /*
     * @tc.number: Acts_AppCirculation_0700
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_0700', 0, async function (done) {
      console.log("Acts_AppCirculation_0700 start");
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationBaseWithoutAppIdentifierRely.hap')
        .then(data => {
          console.log("Acts_AppCirculation_0700 install logFirst is : " + JSON.stringify(data.stdResult));
          expect(JSON.stringify(data.stdResult)).assertContain('install bundle successfully');
        })
        .catch(err => {
          expect().assertFail()
        });
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationUpdateWithoutAppIdentifierDiffAppIdRely.hap')
        .then(data => {
          console.log("Acts_AppCirculation_0700 bundle logSecond is : " + JSON.stringify(data.stdResult));
          expect(JSON.stringify(data.stdResult)).assertContain('install sign info inconsistent');
          done();
        })
        .catch(err => {
          expect().assertFail()
          done();
        });
    })

    /*
     * @tc.number: Acts_AppCirculation_0800
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_0800', 0, async function (done) {
      console.log("Acts_AppCirculation_0800 start");
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationBaseWithoutAppIdentifierRely.hap')
        .then(data => {
          console.log("Acts_AppCirculation_0800 install logFirst is : " + JSON.stringify(data.stdResult));
          expect(JSON.stringify(data.stdResult)).assertContain('install bundle successfully');
        })
        .catch(err => {
          expect().assertFail()
        });
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationUpdateWithoutAppIdentifierDiffModuleAppIdRely.hap')
        .then(data => {
          console.log("Acts_AppCirculation_0800 bundle logSecond is : " + JSON.stringify(data.stdResult));
          expect(JSON.stringify(data.stdResult)).assertContain('install sign info inconsistent');
          done();
        })
        .catch(err => {
          expect().assertFail()
          done();
        });
    })

    /*
     * @tc.number: Acts_AppCirculation_0900
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_0900', 0, async function (done) {
      console.log("Acts_AppCirculation_0900 start");
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationBaseWithoutAppIdentifierRely.hap')
        .then(data => {
          console.log("Acts_AppCirculation_0900 install logFirst is : " + JSON.stringify(data.stdResult));
          expect(JSON.stringify(data.stdResult)).assertContain('install bundle successfully');
        })
        .catch(err => {
          expect().assertFail()
        });
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationUpdateRely.hap')
        .then(data => {
          console.log("Acts_AppCirculation_0900 bundle logSecond is : " + JSON.stringify(data.stdResult));
          expect(JSON.stringify(data.stdResult)).assertContain('install bundle successfully');
          done();
        })
        .catch(err => {
          expect().assertFail()
          done();
        });
    })

    /*
     * @tc.number: Acts_AppCirculation_1000
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_1000', 0, async function (done) {
      console.log("Acts_AppCirculation_1000 start");
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationBaseWithoutAppIdentifierRely.hap')
        .then(data => {
          console.log("Acts_AppCirculation_1000 install logFirst is : " + JSON.stringify(data.stdResult));
          expect(JSON.stringify(data.stdResult)).assertContain('install bundle successfully');
        })
        .catch(err => {
          expect().assertFail()
        });
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationDiffModuleUpdateRely.hap')
        .then(data => {
          console.log("Acts_AppCirculation_1000 bundle logSecond is : " + JSON.stringify(data.stdResult));
          expect(JSON.stringify(data.stdResult)).assertContain('install bundle successfully');
          done();
        })
        .catch(err => {
          expect().assertFail()
          done();
        });
    })

    /*
     * @tc.number: Acts_AppCirculation_1100
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_1100', 0, async function (done) {
      console.log("Acts_AppCirculation_1100 start");
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationBaseRely.hap')
        .then(data => {
          console.log("Acts_AppCirculation_1100 install logFirst is : " + JSON.stringify(data.stdResult));
          expect(JSON.stringify(data.stdResult)).assertContain('install bundle successfully');
        })
        .catch(err => {
          expect().assertFail()
        });
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationUpdateWithoutAppIdentifierRely.hap')
        .then(data => {
          console.log("Acts_AppCirculation_1100 bundle logSecond is : " + JSON.stringify(data.stdResult));
          expect(JSON.stringify(data.stdResult)).assertContain('install bundle successfully');
          done();
        })
        .catch(err => {
          expect().assertFail()
          done();
        });
    })

    /*
     * @tc.number: Acts_AppCirculation_1200
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_1200', 0, async function (done) {
      console.log("Acts_AppCirculation_1200 start");
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationBaseRely.hap')
        .then(data => {
          console.log("Acts_AppCirculation_1200 install logFirst is : " + JSON.stringify(data.stdResult));
          expect(JSON.stringify(data.stdResult)).assertContain('install bundle successfully');
        })
        .catch(err => {
          expect().assertFail()
        });
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationUpdateWithoutAppIdentifierDiffModuleRely.hap')
        .then(data => {
          console.log("Acts_AppCirculation_1200 bundle logSecond is : " + JSON.stringify(data.stdResult));
          expect(JSON.stringify(data.stdResult)).assertContain('install bundle successfully');
          done();
        })
        .catch(err => {
          expect().assertFail()
          done();
        });
    })

    /*
     * @tc.number: Acts_AppCirculation_1300
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_1300', 0, async function (done) {
      console.log("Acts_AppCirculation_1300 start");
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationBaseWithoutAppIdentifierRely.hap')
        .then(data => {
          console.log("Acts_AppCirculation_1300 install logFirst is : " + JSON.stringify(data.stdResult));
          expect(JSON.stringify(data.stdResult)).assertContain('install bundle successfully');
        })
        .catch(err => {
          expect().assertFail()
        });
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationUpdateWithoutAppIdentifierRely.hap')
        .then(data => {
          console.log("Acts_AppCirculation_1300 bundle logSecond is : " + JSON.stringify(data.stdResult));
          expect(JSON.stringify(data.stdResult)).assertContain('install bundle successfully');
          done();
        })
        .catch(err => {
          expect().assertFail()
          done();
        });
    })

    /*
     * @tc.number: Acts_AppCirculation_1400
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_1400', 0, async function (done) {
      console.log("Acts_AppCirculation_1400 start");
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationBaseWithoutAppIdentifierRely.hap')
        .then(data => {
          console.log("Acts_AppCirculation_1400 install logFirst is : " + JSON.stringify(data.stdResult));
          expect(JSON.stringify(data.stdResult)).assertContain('install bundle successfully');
        })
        .catch(err => {
          expect().assertFail()
        });
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationUpdateWithoutAppIdentifierDiffModuleRely.hap')
        .then(data => {
          console.log("Acts_AppCirculation_1400 bundle logSecond is : " + JSON.stringify(data.stdResult));
          expect(JSON.stringify(data.stdResult)).assertContain('install bundle successfully');
          done();
        })
        .catch(err => {
          expect().assertFail()
          done();
        });
    })

    /*
     * @tc.number: Acts_AppCirculation_1900
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_1900', 0, async function (done) {
      console.log("Acts_AppCirculation_1900 start");
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationBaseRely.hap')
        .then(data => {
          console.log("Acts_AppCirculation_1900 install logFirst is : " + JSON.stringify(data.stdResult));
          expect(JSON.stringify(data.stdResult)).assertContain('install bundle successfully');
        })
        .catch(err => {
          expect().assertFail()
        });
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationDiffAppIdUpdateRely.hap')
        .then(data => {
          console.log("Acts_AppCirculation_1900 bundle logSecond is : " + JSON.stringify(data.stdResult));
          expect(JSON.stringify(data.stdResult)).assertContain('install bundle successfully');
        })
        .catch(err => {
          expect().assertFail()
        });
      await abilityDelegator.executeShellCommand('bm dump -n com.example.actsappcirculationrely | grep appId')
        .then(data => {
          console.log("Acts_AppCirculation_1900 bundle info is : " + JSON.stringify(data.stdResult));
          expect(JSON.stringify(data.stdResult))
            .assertContain('BH44SJJ7ZBsNGCSrqqmo+Leud3LZE1h5oZ1dkbiR0XykCuLX5rRU/hNRE4glPeOVbzKVaq1npODzUXwp3eO0bwk');
          done();
        })
        .catch(err => {
          expect().assertFail();
          done();
        });
    })

    /*
     * @tc.number: Acts_AppCirculation_2000
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_2000', 0, async function (done) {
      console.log("Acts_AppCirculation_2000 start");
      let isMultipleUserEnabled = await osAccountManager.checkMultiOsAccountEnabled();
      if (!isMultipleUserEnabled) {
        console.log("Acts_AppCirculation_2000 checkMultiOsAccountEnabled fail ");
        done();
        return;
      }
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationBaseRely.hap')
        .then(data => {
          console.log("Acts_AppCirculation_2000 install logFirst is : " + JSON.stringify(data.stdResult));
          expect(JSON.stringify(data.stdResult)).assertContain('install bundle successfully');
        })
        .catch(err => {
          expect().assertFail()
        });
      await osAccountManager.createOsAccount("200", osAccount.OsAccountType.NORMAL).then((data) => {
        console.log("Acts_AppCirculation_2000 createOsAccount successful" + JSON.stringify(data));
        accountId = data.localId;
      }).catch((err) => {
        console.error("Acts_AppCirculation_2000 createOsAccount fail" + JSON.stringify(err));
        expect().assertFail()
      });
      await osAccountManager.activateOsAccount(accountId).then((data) => {
        console.log("Acts_AppCirculation_2000 activateOsAccount successful");
      }).catch((err) => {
        console.error("Acts_AppCirculation_2000 activateOsAccount fail" + JSON.stringify(err));
        expect().assertFail()
      });
      await sleep(1000);
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppCirculationDiffIdUpdateRely.hap')
        .then(data => {
          console.log("Acts_AppCirculation_2000 bundle logSecond is : " + JSON.stringify(data.stdResult));
          expect(JSON.stringify(data.stdResult)).assertContain('install sign info inconsistent');
          done();
        }).catch(err => {
          console.log("Acts_AppCirculation_2000 bundle err is : " + JSON.stringify(err));
          expect().assertFail();
          done();
        });
    })
  })
}