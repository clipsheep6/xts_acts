/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'
import config from '@ohos.accessibility.config'
import accessibility from '@ohos.accessibility'
import prompt from '@ohos.prompt'

const AUDIBLE_BUNDLE_NAME = 'com.example.accessibleaudibleability.hmservice/ServiceExtAbility'
const GENERIC_BUNDLE_NAME = 'com.example.accessiblegenericability.hmservice/ServiceExtAbility'
const HAPTIC_BUNDLE_NAME = 'com.example.accessiblehapticability.hmservice/ServiceExtAbility'
const SPOKEN_BUNDLE_NAME = 'com.example.accessiblespokenability.hmservice/ServiceExtAbility'
const VISUAL_BUNDLE_NAME = 'com.example.accessiblevisualability.hmservice/ServiceExtAbility'
const LOG_PREFIX = '[CQH-ABILITY-LIST-TEST]'
const TIME_OUT = 3000

export default function abilityTest(abilityContext) {
  describe('ActsAbilityListTest', function () {
    afterEach(async function (done) {
      disableAll(LOG_PREFIX + ' disableAll ')
      setTimeout(() => {
        done()
      }, TIME_OUT)
    })
    afterAll(async function (done) {
      prompt.showToast({
        message: 'CASE All End'
      })
      disableAll(LOG_PREFIX + ' disableAll ')
      done()
    })
    /**
     * @tc.number: AbilityList_0010
     * @tc.name: getAbilityLists callback API.
     * @tc.desc: getAbilityLists callback API abilityType is spoken, stateType is install.
     */
    it('AbilityList_0010', 1, async function (done) {
      let logTag = LOG_PREFIX + ' AbilityList_0010 '
      enableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME, HAPTIC_BUNDLE_NAME])
      disableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME])
      setTimeout(() => {
        accessibility.getAbilityLists('spoken', 'install', (err, data) => {
          if (err.code != 0) {
            console.info(logTag + 'failed to getAbilityLists because ' + JSON.stringify(err))
            return
          }
          console.info(logTag + 'success data:getAbilityLists : ' + JSON.stringify(data))
          console.info(logTag + 'data.length : ' + JSON.stringify(data.length))
          expect(data.length).assertLarger(0)
          done()
        })
      }, TIME_OUT)
    })
    /**
     * @tc.number: AbilityList_0020
     * @tc.name: getAbilityLists promise API.
     * @tc.desc: getAbilityLists promise API abilityType is spoken, stateType is install.
     */
    it('AbilityList_0020', 1, async function (done) {
      let logTag = LOG_PREFIX + ' AbilityList_0020 '
      enableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME, HAPTIC_BUNDLE_NAME])
      disableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME])
      setTimeout(() => {
        accessibility.getAbilityLists('spoken', 'install').then((data) => {
          console.info(logTag + 'success data:getAbilityLists : ' + JSON.stringify(data))
          console.info(logTag + 'data.length : ' + JSON.stringify(data.length))
          expect(data.length).assertLarger(0)
          done()
        }).catch((err) => {
          console.info(logTag + 'failed to getAbilityLists because ' + JSON.stringify(err))
        })
      }, TIME_OUT)
    })
    /**
     * @tc.number: AbilityList_0030
     * @tc.name: getAbilityLists callback API.
     * @tc.desc: getAbilityLists callback API abilityType is audible, stateType is install.
     */
    it('AbilityList_0030', 1, async function (done) {
      let logTag = LOG_PREFIX + ' AbilityList_0030 '
      enableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME, HAPTIC_BUNDLE_NAME])
      disableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME])
      setTimeout(() => {
        accessibility.getAbilityLists('audible', 'install', (err, data) => {
          if (err.code != 0) {
            console.info(logTag + 'failed to getAbilityLists because ' + JSON.stringify(err))
            return
          }
          console.info(logTag + 'success data:getAbilityLists : ' + JSON.stringify(data))
          console.info(logTag + 'data.length : ' + JSON.stringify(data.length))
          expect(data.length).assertLarger(0)
          done()
        })
      }, TIME_OUT)
    })
    /**
     * @tc.number: AbilityList_0040
     * @tc.name: getAbilityLists promise API.
     * @tc.desc: getAbilityLists promise API abilityType is audible, stateType is install.
     */
    it('AbilityList_0040', 1, async function (done) {
      let logTag = LOG_PREFIX + ' AbilityList_0040 '
      enableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME, HAPTIC_BUNDLE_NAME])
      disableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME])
      setTimeout(() => {
        accessibility.getAbilityLists('audible', 'install').then((data) => {
          console.info(logTag + 'success data:getAbilityLists : ' + JSON.stringify(data))
          console.info(logTag + 'data.length : ' + JSON.stringify(data.length))
          expect(data.length).assertLarger(0)
          done()
        }).catch((err) => {
          console.info(logTag + 'failed to getAbilityLists because ' + JSON.stringify(err))
        })
      }, TIME_OUT)
    })
    /**
     * @tc.number: AbilityList_0050
     * @tc.name: getAbilityLists callback API.
     * @tc.desc: getAbilityLists callback API abilityType is visual, stateType is install.
     */
    it('AbilityList_0050', 1, async function (done) {
      let logTag = LOG_PREFIX + ' AbilityList_0050 '
      enableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME, HAPTIC_BUNDLE_NAME])
      disableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME])
      setTimeout(() => {
        accessibility.getAbilityLists('visual', 'install', (err, data) => {
          if (err.code != 0) {
            console.info(logTag + 'failed to getAbilityLists because ' + JSON.stringify(err))
            return
          }
          console.info(logTag + 'success data:getAbilityLists : ' + JSON.stringify(data))
          console.info(logTag + 'data.length : ' + JSON.stringify(data.length))
          expect(data.length).assertLarger(0)
          done()
        })
      }, TIME_OUT)
    })
    /**
     * @tc.number: AbilityList_0060
     * @tc.name: getAbilityLists promise API.
     * @tc.desc: getAbilityLists promise API abilityType is visual, stateType is install.
     */
    it('AbilityList_0060', 1, async function (done) {
      let logTag = LOG_PREFIX + ' AbilityList_0060 '
      enableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME, HAPTIC_BUNDLE_NAME])
      disableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME])
      setTimeout(() => {
        accessibility.getAbilityLists('visual', 'install').then((data) => {
          console.info(LOG_PREFIX + 'success data:getAbilityLists : ' + JSON.stringify(data))
          console.info(logTag + 'data.length : ' + JSON.stringify(data.length))
          expect(data.length).assertLarger(0)
          done()
        }).catch((err) => {
          console.info(logTag + 'failed to getAbilityLists because ' + JSON.stringify(err))
        })
      }, TIME_OUT)
    })
    /**
     * @tc.number: AbilityList_0070
     * @tc.name: getAbilityLists callback API.
     * @tc.desc: getAbilityLists callback API abilityType is haptic, stateType is install.
     */
    it('AbilityList_0070', 1, async function (done) {
      let logTag = LOG_PREFIX + ' AbilityList_0070 '
      enableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME, HAPTIC_BUNDLE_NAME])
      disableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME])
      setTimeout(() => {
        accessibility.getAbilityLists('haptic', 'install', (err, data) => {
          if (err.code != 0) {
            console.info(logTag + 'failed to getAbilityLists because ' + JSON.stringify(err))
            return
          }
          console.info(logTag + 'success data:getAbilityLists : ' + JSON.stringify(data))
          console.info(logTag + 'data.length : ' + JSON.stringify(data.length))
          expect(data.length).assertLarger(0)
          done()
        })
      }, TIME_OUT)
    })
    /**
     * @tc.number: AbilityList_0080
     * @tc.name: getAbilityLists promise API.
     * @tc.desc: getAbilityLists promise API abilityType is haptic, stateType is install.
     */
    it('AbilityList_0080', 1, async function (done) {
      let logTag = LOG_PREFIX + ' AbilityList_0080 '
      enableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME, HAPTIC_BUNDLE_NAME])
      disableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME])
      setTimeout(() => {
        accessibility.getAbilityLists('haptic', 'install').then((data) => {
          console.info(logTag + 'success data:getAbilityLists : ' + JSON.stringify(data))
          console.info(logTag + 'data.length : ' + JSON.stringify(data.length))
          expect(data.length).assertLarger(0)
          done()
        }).catch((err) => {
          console.info(logTag + 'failed to getAbilityLists because ' + JSON.stringify(err))
        })
      }, TIME_OUT)
    })
    /**
     * @tc.number: AbilityList_0090
     * @tc.name: getAbilityLists callback API.
     * @tc.desc: getAbilityLists callback API abilityType is generic, stateType is install.
     */
    it('AbilityList_0090', 1, async function (done) {
      let logTag = LOG_PREFIX + ' AbilityList_0090 '
      enableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME, HAPTIC_BUNDLE_NAME])
      disableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME])
      setTimeout(() => {
        accessibility.getAbilityLists('generic', 'install', (err, data) => {
          if (err.code != 0) {
            console.info(logTag + 'failed to getAbilityLists because ' + JSON.stringify(err))
            return
          }
          console.info(logTag + 'success data:getAbilityLists : ' + JSON.stringify(data))
          console.info(logTag + 'data.length : ' + JSON.stringify(data.length))
          expect(data.length).assertLarger(0)
          done()
        })
      }, TIME_OUT)
    })
    /**
     * @tc.number: AbilityList_0100
     * @tc.name: getAbilityLists promise API.
     * @tc.desc: getAbilityLists promise API abilityType is generic, stateType is install.
     */
    it('AbilityList_0100', 1, async function (done) {
      let logTag = LOG_PREFIX + ' AbilityList_0100 '
      enableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME, HAPTIC_BUNDLE_NAME])
      disableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME])
      setTimeout(() => {
        accessibility.getAbilityLists('generic', 'install').then((data) => {
          console.info(logTag + 'success data:getAbilityLists : ' + JSON.stringify(data))
          console.info(logTag + 'data.length : ' + JSON.stringify(data.length))
          expect(data.length).assertLarger(0)
          done()
        }).catch((err) => {
          console.info(logTag + 'failed to getAbilityLists because ' + JSON.stringify(err))
        })
      }, TIME_OUT)
    })
    /**
     * @tc.number: AbilityList_0110
     * @tc.name: getAbilityLists callback API.
     * @tc.desc: getAbilityLists callback API abilityType is all, stateType is enable.
     */
    it('AbilityList_0110', 1, async function (done) {
      let logTag = LOG_PREFIX + ' AbilityList_0110 '
      enableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME, HAPTIC_BUNDLE_NAME])
      disableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME])
      setTimeout(() => {
        accessibility.getAbilityLists('all', 'enable', (err, data) => {
          if (err.code != 0) {
            console.info(logTag + 'failed to getAbilityLists because ' + JSON.stringify(err))
            return
          }
          console.info(logTag + 'success data:getAbilityLists : ' + JSON.stringify(data))
          console.info(logTag + 'data.length : ' + JSON.stringify(data.length))
          expect(data.length).assertLarger(0)
          done()
        })
      }, TIME_OUT)
    })
    /**
     * @tc.number: AbilityList_0120
     * @tc.name: getAbilityLists promise API.
     * @tc.desc: getAbilityLists promise API abilityType is all, stateType is enable.
     */
    it('AbilityList_0120', 1, async function (done) {
      let logTag = LOG_PREFIX + ' AbilityList_0120 '
      enableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME, HAPTIC_BUNDLE_NAME])
      disableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME])
      setTimeout(() => {
        accessibility.getAbilityLists('all', 'enable').then((data) => {
          console.info(logTag + 'success data:getAbilityLists : ' + JSON.stringify(data))
          console.info(logTag + 'data.length : ' + JSON.stringify(data.length))
          expect(data.length).assertLarger(0)
          done()
        }).catch((err) => {
          console.info(logTag + 'failed to getAbilityLists because ' + JSON.stringify(err))
        })
      }, TIME_OUT)
    })
    /**
     * @tc.number: AbilityList_0130
     * @tc.name: getAbilityLists callback API.
     * @tc.desc: getAbilityLists callback API abilityType is all, stateType is disable.
     */
    it('AbilityList_0130', 1, async function (done) {
      let logTag = LOG_PREFIX + ' AbilityList_0130 '
      enableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME, HAPTIC_BUNDLE_NAME])
      disableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME])
      setTimeout(() => {
        accessibility.getAbilityLists('all', 'disable', (err, data) => {
          if (err.code != 0) {
            console.info(logTag + 'failed to getAbilityLists because ' + JSON.stringify(err))
            return
          }
          console.info(logTag + 'success data:getAbilityLists : ' + JSON.stringify(data))
          console.info(logTag + 'data.length : ' + JSON.stringify(data.length))
          expect(data.length).assertLarger(0)
          done()
        })
      }, TIME_OUT)
    })
    /**
     * @tc.number: AbilityList_0140
     * @tc.name: getAbilityLists promise API.
     * @tc.desc: getAbilityLists promise API abilityType is all, stateType is disable.
     */
    it('AbilityList_0140', 1, async function (done) {
      let logTag = LOG_PREFIX + ' AbilityList_0140 '
      enableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME, HAPTIC_BUNDLE_NAME])
      disableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME])
      setTimeout(() => {
        accessibility.getAbilityLists('all', 'disable').then((data) => {
          console.info(logTag + 'success data:getAbilityLists : ' + JSON.stringify(data))
          console.info(logTag + 'data.length : ' + JSON.stringify(data.length))
          expect(data.length).assertLarger(0)
          done()
        }).catch((err) => {
          console.info(logTag + 'failed to getAbilityLists because ' + JSON.stringify(err))
        })
      }, TIME_OUT)
    })
    /**
     * @tc.number: AbilityList_0150
     * @tc.name: getAbilityLists callback API.
     * @tc.desc: getAbilityLists callback API abilityType is all, stateType is enable.
     */
    it('AbilityList_0150', 1, async function (done) {
      let logTag = LOG_PREFIX + ' AbilityList_0150 '
      enableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME])
      disableAbility(logTag, [AUDIBLE_BUNDLE_NAME])
      setTimeout(() => {
        accessibility.getAbilityLists('all', 'disable', (err, data) => {
          if (err.code != 0) {
            console.info(logTag + 'failed to getAbilityLists because ' + JSON.stringify(err))
            return
          }
          console.info(logTag + 'success data:getAbilityLists : ' + JSON.stringify(data))
          console.info(logTag + 'data.length : ' + JSON.stringify(data.length))
          expect(data.length).assertLarger(0)
          done()
        })
      }, TIME_OUT)
    })
    /**
     * @tc.number: AbilityList_0160
     * @tc.name: getAbilityLists promise API.
     * @tc.desc: getAbilityLists promise API abilityType is all, stateType is enable.
     */
    it('AbilityList_0160', 1, async function (done) {
      let logTag = LOG_PREFIX + ' AbilityList_0160 '
      enableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME])
      disableAbility(logTag, [AUDIBLE_BUNDLE_NAME])
      setTimeout(() => {
        accessibility.getAbilityLists('all', 'disable').then((data) => {
          console.info(logTag + 'success data:getAbilityLists : ' + JSON.stringify(data))
          console.info(logTag + 'data.length : ' + JSON.stringify(data.length))
          expect(data.length).assertLarger(0)
          done()
        }).catch((err) => {
          console.info(logTag + 'failed to getAbilityLists because ' + JSON.stringify(err))
        })
      }, TIME_OUT)
    })
    /**
     * @tc.number: AbilityList_0190
     * @tc.name: getAbilityLists callback API.
     * @tc.desc: getAbilityLists callback API abilityType is '', stateType is ''.
     */
    it('AbilityList_0190', 1, async function (done) {
      let logTag = LOG_PREFIX + ' AbilityList_0190 '
      enableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME, VISUAL_BUNDLE_NAME])
      setTimeout(() => {
        accessibility.getAbilityLists('', '').then((data) => {
          console.info(logTag + 'success data:getAbilityLists : ' + JSON.stringify(data))
          console.info(logTag + 'data.length : ' + JSON.stringify(data.length))
          expect(data.length).assertLess(1)
          done()
        }).catch((err) => {
          console.info(logTag + 'failed to getAbilityLists because ' + JSON.stringify(err))
        })
      }, TIME_OUT)
    })
    /**
     * @tc.number: AbilityList_0200
     * @tc.name: getAbilityLists promise API.
     * @tc.desc: getAbilityLists promise API abilityType is '', stateType is ''.
     */
    it('AbilityList_0200', 1, async function (done) {
      let logTag = LOG_PREFIX + ' AbilityList_0200 '
      enableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME, VISUAL_BUNDLE_NAME])
      setTimeout(() => {
        accessibility.getAbilityLists('', '').then((data) => {
          console.info(logTag + 'success data:getAbilityLists : ' + JSON.stringify(data))
          console.info(logTag + 'data.length : ' + JSON.stringify(data.length))
          expect(data.length).assertLess(1)
          done()
        }).catch((err) => {
          console.info(logTag + 'failed to getAbilityLists because ' + JSON.stringify(err))
        })
      }, TIME_OUT)
    })
  })

  function enableAbility(logTag, bundleNameArr) {
    for (let bundleName of bundleNameArr) {
      config.enableAbility(bundleName, ['retrieve']).then(() => {
        console.info(logTag + 'enableAbility ' + bundleName + ' success.')
      }).catch((error) => {
        console.info(logTag + 'enableAbility ' + bundleName + ' failed. Cause: ' + JSON.stringify(error))
        return
      })
    }
  }

  function disableAbility(logTag, bundleNameArr) {
    for (let bundleName of bundleNameArr) {
      config.disableAbility(bundleName).then(() => {
        console.info(logTag + 'disableAbility ' + bundleName + ' success.')
      }).catch((error) => {
        console.info(logTag + 'disableAbility ' + bundleName + ' failed. Cause: ' + JSON.stringify(error))
        return
      })
    }
  }

  function disableAll(logTag) {
    disableAbility(logTag, [AUDIBLE_BUNDLE_NAME, GENERIC_BUNDLE_NAME, HAPTIC_BUNDLE_NAME, SPOKEN_BUNDLE_NAME, VISUAL_BUNDLE_NAME])
  }
}