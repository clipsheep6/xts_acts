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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import accessibility from '@ohos.accessibility'
import accessibilityConfig from '@ohos.accessibility.config'

const accessibility_base_bundleName = 'com.example.accessiblebaseability.hmservice/ServiceExtAbility'
const accessibility_check_bundleName = 'com.example.accessiblecheckability.hmservice/ServiceExtAbility'
const LOG_PREFIX = '[CQH-CHECK-ABILITY-TEST]'
const TIME_OUT = 3000


export default function abilityTest() {

  describe('ActsCheckAbilityTest', function () {
    beforeAll(async function (done) {
      console.error(LOG_PREFIX + 'beforeAll start')
      accessibility.getAbilityLists('all', 'enable')
        .then((res) => {
          console.error(LOG_PREFIX + ' getAbilityLists res: ' + JSON.stringify(res))
          if (res.length > 0) {
            res.forEach((item)=>{
              console.error(LOG_PREFIX + ' item: ' + JSON.stringify(item))
              var bundleName = item.id
              accessibilityConfig.disableAbility(bundleName)
                .then(() => {
                  console.error(LOG_PREFIX + 'disableAbility success: ' + bundleName)
                })
                .catch((error) => {
                  console.error(LOG_PREFIX + 'disableAbility failed. Cause: ' + JSON.stringify(error))
                  return
                })
            })
          }
        })
        .catch((error) => {
          console.error(LOG_PREFIX + ' getAbilityLists error ' + JSON.stringify(error))
          return
        })
      setTimeout(() => {
        done()
      }, TIME_OUT)
    })
    afterEach(async function (done) {
      disableAll(LOG_PREFIX + ' disableAll ')
      setTimeout(() => {
        done()
      }, TIME_OUT)
    })
    afterAll(async function (done) {
      done()
    })
    /**
     * @tc.number: CheckAbilityIsOpen_0010
     * @tc.name: Judge whether the accessibility auxiliary service is started (callback).
     * @tc.desc: The basic auxiliary application is not started, and the auxiliary application with touch browsing function is not started.
     */
    it('CheckAbilityIsOpen_0010', 1, async function (done) {
      const code = 'CheckAbilityIsOpen_0010'
      const logTag = LOG_PREFIX + code
      setTimeout(() => {
        isOpenAccessibilityCallback(logTag, code, done)
      }, TIME_OUT)
    })
    /**
     * @tc.number: CheckAbilityIsOpen_0020
     * @tc.name: Judge whether the accessibility auxiliary service is started (promise).
     * @tc.desc: The basic auxiliary application is not started, and the auxiliary application with touch browsing function is not started.
     */
    it('CheckAbilityIsOpen_0020', 1, async function (done) {
      const code = 'CheckAbilityIsOpen_0020'
      const logTag = LOG_PREFIX + code
      setTimeout(() => {
        isOpenAccessibilityPromise(logTag, code, done)
      }, TIME_OUT)
    })
    /**
     * @tc.number: CheckAbilityIsOpen_0030
     * @tc.name: Judge whether the accessibility auxiliary service is started (callback).
     * @tc.desc: The basic auxiliary application is started, and the auxiliary application with touch browsing function is started.
     */
    it('CheckAbilityIsOpen_0030', 1, async function (done) {
      const code = 'CheckAbilityIsOpen_0030'
      const logTag = LOG_PREFIX + code
      enableAbility(logTag, accessibility_base_bundleName, ['retrieve'])
      enableAbility(logTag, accessibility_check_bundleName, ['touchGuide'])
      setTimeout(() => {
        isOpenAccessibilityCallback(logTag, code, done)
      }, TIME_OUT)
    })
    /**
     * @tc.number: CheckAbilityIsOpen_0040
     * @tc.name: Judge whether the accessibility auxiliary service is started (promise).
     * @tc.desc: The basic auxiliary application is started, and the auxiliary application with touch browsing function is started.
     */
    it('CheckAbilityIsOpen_0040', 1, async function (done) {
      const code = 'CheckAbilityIsOpen_0040'
      const logTag = LOG_PREFIX + code
      enableAbility(logTag, accessibility_base_bundleName, ['retrieve'])
      enableAbility(logTag, accessibility_check_bundleName, ['touchGuide'])
      setTimeout(() => {
        isOpenAccessibilityPromise(logTag, code, done)
      }, TIME_OUT)
    })
    /**
     * @tc.number: CheckAbilityIsOpen_0050
     * @tc.name: Judge whether the accessibility auxiliary service is started (callback).
     * @tc.desc: The basic auxiliary application is not started, and the auxiliary application with touch browsing function is started.
     */
    it('CheckAbilityIsOpen_0050', 1, async function (done) {
      const code = 'CheckAbilityIsOpen_0050'
      const logTag = LOG_PREFIX + code
      enableAbility(logTag, accessibility_check_bundleName, ['touchGuide'])
      setTimeout(() => {
        isOpenAccessibilityCallback(logTag, code, done)
      }, TIME_OUT)

    })
    /**
     * @tc.number: CheckAbilityIsOpen_0060
     * @tc.name: Judge whether the accessibility auxiliary service is started (promise).
     * @tc.desc: The basic auxiliary application is not started, and the auxiliary application with touch browsing function is started.
     */
    it('CheckAbilityIsOpen_0060', 1, async function (done) {
      const code = 'CheckAbilityIsOpen_0060'
      const logTag = LOG_PREFIX + code
      enableAbility(logTag, accessibility_check_bundleName, ['touchGuide'])
      setTimeout(() => {
        isOpenAccessibilityPromise(logTag, code, done)
      }, TIME_OUT)
    })
    /**
     * @tc.number: CheckAbilityIsOpen_0070
     * @tc.name: Judge whether the accessibility auxiliary service is started (callback).
     * @tc.desc: The basic auxiliary application is started, and the auxiliary application with touch browsing function is not started.
     */
    it('CheckAbilityIsOpen_0070', 1, async function (done) {
      const code = 'CheckAbilityIsOpen_0070'
      const logTag = LOG_PREFIX + code
      enableAbility(logTag, accessibility_base_bundleName, ['retrieve'])
      setTimeout(() => {
        isOpenAccessibilityCallback(logTag, code, done)
      }, TIME_OUT)
    })
    /**
     * @tc.number: CheckAbilityIsOpen_0080
     * @tc.name: Judge whether the accessibility auxiliary service is started (promise).
     * @tc.desc: The basic auxiliary application is started, and the auxiliary application with touch browsing function is not started.
     */
    it('CheckAbilityIsOpen_0080', 1, async function (done) {
      const code = 'CheckAbilityIsOpen_0080'
      const logTag = LOG_PREFIX + code
      enableAbility(logTag, accessibility_base_bundleName, ['retrieve'])
      setTimeout(() => {
        isOpenAccessibilityPromise(logTag, code, done)
      }, TIME_OUT)
    })
    /**
     * @tc.number: CheckAbilityIsOpen_0090
     * @tc.name: Judge whether the touch accessibility auxiliary service is started (callback).
     * @tc.desc: The basic auxiliary application is not started, and the auxiliary application with touch browsing function is not started.
     */
    it('CheckAbilityIsOpen_0090', 1, async function (done) {
      const code = 'CheckAbilityIsOpen_0090'
      const logTag = LOG_PREFIX + code
      setTimeout(() => {
        isOpenTouchGuideCallback(logTag, code, done)
      }, TIME_OUT)
    })
    /**
     * @tc.number: CheckAbilityIsOpen_0100
     * @tc.name: Judge whether the touch accessibility auxiliary service is started (promise).
     * @tc.desc: The basic auxiliary application is not started, and the auxiliary application with touch browsing function is not started.
     */
    it('CheckAbilityIsOpen_0100', 1, async function (done) {
      const code = 'CheckAbilityIsOpen_0100'
      const logTag = LOG_PREFIX + code
      setTimeout(() => {
        isOpenTouchGuidePromise(logTag, code, done)
      }, TIME_OUT)
    })
    /**
     * @tc.number: CheckAbilityIsOpen_0110
     * @tc.name: Judge whether the touch accessibility auxiliary service is started (callback).
     * @tc.desc: The basic auxiliary application is started, and the auxiliary application with touch browsing function is started.
     */
    it('CheckAbilityIsOpen_0110', 1, async function (done) {
      const code = 'CheckAbilityIsOpen_0110'
      const logTag = LOG_PREFIX + code
      enableAbility(logTag, accessibility_base_bundleName, ['retrieve'])
      enableAbility(logTag, accessibility_check_bundleName, ['touchGuide'])
      setTimeout(() => {
        isOpenTouchGuideCallback(logTag, code, done)
      }, TIME_OUT)
    })
    /**
     * @tc.number: CheckAbilityIsOpen_0120
     * @tc.name: Judge whether the touch accessibility auxiliary service is started (promise).
     * @tc.desc: The basic auxiliary application is started, and the auxiliary application with touch browsing function is started.
     */
    it('CheckAbilityIsOpen_0120', 1, async function (done) {
      const code = 'CheckAbilityIsOpen_0120'
      const logTag = LOG_PREFIX + code
      enableAbility(logTag, accessibility_base_bundleName, ['retrieve'])
      enableAbility(logTag, accessibility_check_bundleName, ['touchGuide'])
      setTimeout(() => {
        isOpenTouchGuidePromise(logTag, code, done)
      }, TIME_OUT)
    })
    /**
     * @tc.number: CheckAbilityIsOpen_0130
     * @tc.name: Judge whether the touch accessibility auxiliary service is started (callback).
     * @tc.desc: The basic auxiliary application is not started, and the auxiliary application with touch browsing function is started.
     */
    it('CheckAbilityIsOpen_0130', 1, async function (done) {
      const code = 'CheckAbilityIsOpen_0130'
      const logTag = LOG_PREFIX + code
      enableAbility(logTag, accessibility_check_bundleName, ['touchGuide'])
      setTimeout(() => {
        isOpenTouchGuideCallback(logTag, code, done)
      }, TIME_OUT)
    })
    /**
     * @tc.number: CheckAbilityIsOpen_0140
     * @tc.name: Judge whether the touch accessibility auxiliary service is started (promise).
     * @tc.desc: The basic auxiliary application is not started, and the auxiliary application with touch browsing function is started.
     */
    it('CheckAbilityIsOpen_0140', 1, async function (done) {
      const code = 'CheckAbilityIsOpen_0140'
      const logTag = LOG_PREFIX + code
      enableAbility(logTag, accessibility_check_bundleName, ['touchGuide'])
      setTimeout(() => {
        isOpenTouchGuidePromise(logTag, code, done)
      }, TIME_OUT)
    })
    /**
     * @tc.number: CheckAbilityIsOpen_0150
     * @tc.name: Judge whether the touch accessibility auxiliary service is started (callback).
     * @tc.desc: The basic auxiliary application is started, and the auxiliary application with touch browsing function is not started.
     */
    it('CheckAbilityIsOpen_0150', 1, async function (done) {
      const code = 'CheckAbilityIsOpen_0150'
      const logTag = LOG_PREFIX + code
      enableAbility(logTag, accessibility_base_bundleName, ['retrieve'])
      setTimeout(() => {
        isOpenTouchGuideCallback(logTag, code, done)
      }, TIME_OUT)
    })
    /**
     * @tc.number: CheckAbilityIsOpen_0160
     * @tc.name: Judge whether the touch accessibility auxiliary service is started (promise).
     * @tc.desc: The basic auxiliary application is started, and the auxiliary application with touch browsing function is not started.
     */
    it('CheckAbilityIsOpen_0160', 1, async function (done) {
      const code = 'CheckAbilityIsOpen_0150'
      const logTag = LOG_PREFIX + code
      enableAbility(logTag, accessibility_base_bundleName, ['retrieve'])
      setTimeout(() => {
        isOpenTouchGuidePromise(logTag, code, done)
      }, TIME_OUT)
    })

  })

  function enableAbility(logTag, bundleName, capability) {
    accessibilityConfig.enableAbility(bundleName, capability)
      .then(() => {
        console.info(logTag + 'enableAbility success.')
      })
      .catch((error) => {
        console.info(logTag + 'enableAbility failed. Cause: ' + JSON.stringify(error))
        return
      })
  }

  function disableAbility(logTag, bundleNameArr) {
    for (let bundleName of bundleNameArr) {
      accessibilityConfig.disableAbility(bundleName)
        .then(() => {
          console.info(logTag + 'disableAbility success.')
        })
        .catch((error) => {
          console.info(logTag + 'disableAbility failed. Cause: ' + JSON.stringify(error))
          return
        })
    }
  }

  function disableAll(logTag) {
    disableAbility(logTag, [accessibility_base_bundleName, accessibility_check_bundleName])
  }

  function isOpenAccessibilityCallback(logTag, code, done) {
    accessibility.isOpenAccessibility((err, result) => {
      if (err?.code) {
        console.info(logTag + " isOpenAccessibility callback err=" + JSON.stringify(err) + 'result:' + JSON.stringify(result))
      } else {
        console.info(logTag + " isOpenAccessibility callback res=" + result)
        selectCode(result, code, done)
      }
    })
  }

  function isOpenAccessibilityPromise(logTag, code, done) {
    accessibility.isOpenAccessibility().then((result) => {
      console.info(logTag + " isOpenAccessibility Promise res=" + result)
      selectCode(result, code, done)
    }).catch((err) => {
      console.info(logTag + " isOpenAccessibility Promise err=" + JSON.stringify(err))
    })
  }

  function isOpenTouchGuideCallback(logTag, code, done) {
    accessibility.isOpenTouchGuide((err, result) => {
      if (err?.code) {
        console.info(logTag + " isOpenTouchGuide callback err=" + JSON.stringify(err) + 'result:' + JSON.stringify(result))
      } else {
        console.info(logTag + " isOpenTouchGuide callback res=" + result)
        selectCode(result, code, done)
      }
    })
  }

  function isOpenTouchGuidePromise(logTag, code, done) {
    accessibility.isOpenTouchGuide().then((result) => {
      console.info(logTag + " isOpenTouchGuide Promise res=" + result)
      selectCode(result, code, done)
    }).catch((err) => {
      console.info(logTag + " isOpenTouchGuide Promise err=" + JSON.stringify(err))
    })
  }

  function selectCode(data, code, done) {
    switch (code) {
      case 'CheckAbilityIsOpen_0010':
        expect(data).assertFalse()
        console.info(LOG_PREFIX + 'CheckAbilityIsOpen_0010 expect assertFalse')
        break
      case 'CheckAbilityIsOpen_0020':
        expect(data).assertFalse()
        console.info(LOG_PREFIX + 'CheckAbilityIsOpen_0020 expect assertFalse')
        break
      case 'CheckAbilityIsOpen_0030':
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'CheckAbilityIsOpen_0030 expect assertTrue')
        break
      case 'CheckAbilityIsOpen_0040':
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'CheckAbilityIsOpen_0040 expect assertTrue')
        break
      case 'CheckAbilityIsOpen_0050':
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'CheckAbilityIsOpen_0050 expect assertTrue')
        break
      case 'CheckAbilityIsOpen_0060':
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'CheckAbilityIsOpen_0060 expect assertTrue')
        break
      case 'CheckAbilityIsOpen_0070':
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'CheckAbilityIsOpen_0070 expect assertTrue')
        break
      case 'CheckAbilityIsOpen_0080':
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'CheckAbilityIsOpen_0080 expect assertTrue')
        break
      case 'CheckAbilityIsOpen_0090':
        expect(data).assertFalse()
        console.info(LOG_PREFIX + 'CheckAbilityIsOpen_0090 expect assertFalse')
        break
      case 'CheckAbilityIsOpen_0100':
        expect(data).assertFalse()
        console.info(LOG_PREFIX + 'CheckAbilityIsOpen_0100 expect assertFalse')
        break
      case 'CheckAbilityIsOpen_0110':
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'CheckAbilityIsOpen_0110 expect assertTrue')
        break
      case 'CheckAbilityIsOpen_0120':
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'CheckAbilityIsOpen_0120 expect assertTrue')
        break
      case 'CheckAbilityIsOpen_0130':
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'CheckAbilityIsOpen_0130 expect assertTrue')
        break
      case 'CheckAbilityIsOpen_0140':
        expect(data).assertTrue()
        console.info(LOG_PREFIX + 'CheckAbilityIsOpen_0140 expect assertTrue')
        break
      case 'CheckAbilityIsOpen_0150':
        expect(data).assertFalse()
        console.info(LOG_PREFIX + 'CheckAbilityIsOpen_0150 expect assertFalse')
        break
      case 'CheckAbilityIsOpen_0160':
        expect(data).assertFalse()
        console.info(LOG_PREFIX + 'CheckAbilityIsOpen_0160 expect assertFalse')
        break
      default:
        break
    }
    done()
  }
}