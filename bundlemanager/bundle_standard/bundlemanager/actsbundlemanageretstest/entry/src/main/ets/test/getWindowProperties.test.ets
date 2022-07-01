/**
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

import bundle from '@ohos.bundle';
import { describe, beforeAll, it, expect } from 'hypium/index';

const BUNDLE_NAME = "ohos.acts.bundle.stage"
const ABILITY_NAME = "MainAbility"
const MODUEL_NAME = "myfeature"
const ABILITY_NAME_TEST_1 = "MainAbility1"
const ABILITY_NAME_TEST_2 = "MainAbility2"
const ABILITY_NAME_TEST_3 = "MainAbility3"
const ABILITY_NAME_TEST_4 = "MainAbility4"
const ABILITY_NAME_TEST_5 = "MainAbility5"
const ABILITY_NAME_TEST_6 = "MainAbility6"
const ABILITY_NAME_TEST_7 = "MainAbility7"
const ABILITY_NAME_TEST_8 = "MainAbility8"
const ABILITY_NAME_TEST_9 = "MainAbility9"
const ABILITY_NAME_TEST_10 = "MainAbility10"
const ABILITY_NAME_TEST_11 = "MainAbility11"
const ABILITY_NAME_TEST_12 = "MainAbility12"
const ORIENTATION = "orientation"
const UNSPECIFIED = 0
const LANDSCAPE = 1
const PORTRAIT = 2
const LANDSCAPE_INVERTED = 4
const PORTRAIT_INVERTED = 5
const AUTO_ROTATION = 6
const AUTO_ROTATION_LANDSCAPE = 7
const AUTO_ROTATION_PORTRAIT = 8
const AUTO_ROTATION_RESTRICTED = 9
const AUTO_ROTATION_LANDSCAPE_RESTRICTED = 10
const AUTO_ROTATION_PORTRAIT_RESTRICTED = 11
const LOCKED = 12
const DEFAULT_VALUE = 0
const MAX_WINDOW_RATIO_VALUE = 3.5
const MIN_WINDOW_RATIO_VALUE = 0.5
const MAX_WINDOW_WIDTH_VALUE = 2560
const MIN_WINDOW_WIDTH_VALUE = 1400
const MAX_WINDOW_HEIGHT_VALUE = 300
const MIN_WINDOW_HEIGHT_VALUE = 200
const FULL_SCREEN_WINDOW_MODE = 0
const SPLIT_WINDOW_MODE = 1
const FLOATING_WINDOW_MODE = 2

export default function getWindowPorperties() {

  describe('getWindowPorperties', function () {
    /**
     * @tc.number getWindowPorperties_0100
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_0100', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME)
      expect(datainfo.orientation).assertEqual(UNSPECIFIED)
      done();
    })

    /**
     * @tc.number getWindowPorperties_0200
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_0200', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME_TEST_1)
      expect(datainfo.orientation).assertEqual(UNSPECIFIED)
      done();
    })

    /**
     * @tc.number getWindowPorperties_0300
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_0300', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME_TEST_2)
      expect(datainfo.orientation).assertEqual(LANDSCAPE)
      done();
    })

    /**
     * @tc.number getWindowPorperties_0400
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_0400', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME_TEST_3)
      expect(datainfo.orientation).assertEqual(PORTRAIT)
      done();
    })

    /**
     * @tc.number getWindowPorperties_0500
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_0500', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME_TEST_4)
      expect(datainfo.orientation).assertEqual(LANDSCAPE_INVERTED)
      done();
    })

    /**
     * @tc.number getWindowPorperties_0600
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_0600', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME_TEST_5)
      expect(datainfo.orientation).assertEqual(PORTRAIT_INVERTED)
      done();
    })

    /**
     * @tc.number getWindowPorperties_0700
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_0700', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME_TEST_6)
      expect(datainfo.orientation).assertEqual(AUTO_ROTATION)
      done();
    })

    /**
     * @tc.number getWindowPorperties_0800
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_0800', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME_TEST_7)
      expect(datainfo.orientation).assertEqual(AUTO_ROTATION_LANDSCAPE)
      done();
    })

    /**
     * @tc.number getWindowPorperties_0900
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_0900', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME_TEST_8)
      expect(datainfo.orientation).assertEqual(AUTO_ROTATION_PORTRAIT)
      done();
    })

    /**
     * @tc.number getWindowPorperties_1000
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_1000', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME_TEST_9)
      expect(datainfo.orientation).assertEqual(AUTO_ROTATION_RESTRICTED)
      done();
    })

    /**
     * @tc.number getWindowPorperties_1100
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_1100', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME_TEST_10)
      expect(datainfo.orientation).assertEqual(AUTO_ROTATION_LANDSCAPE_RESTRICTED)
      done();
    })

    /**
     * @tc.number getWindowPorperties_1200
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_1200', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME_TEST_11)
      expect(datainfo.orientation).assertEqual(AUTO_ROTATION_PORTRAIT_RESTRICTED)
      done();
    })

    /**
     * @tc.number getWindowPorperties_1300
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_1300', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME_TEST_12)
      expect(datainfo.orientation).assertEqual(LOCKED)
      done();
    })

    /**
     * @tc.number getWindowPorperties_1400
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_1400', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME)
      expect(Array.isArray(datainfo.supportWindowMode)).assertTrue();
      expect(datainfo.supportWindowMode.length).assertEqual(3)
      expect(datainfo.supportWindowMode[0]).assertEqual(FULL_SCREEN_WINDOW_MODE)
      expect(datainfo.supportWindowMode[1]).assertEqual(SPLIT_WINDOW_MODE)
      expect(datainfo.supportWindowMode[2]).assertEqual(FLOATING_WINDOW_MODE)
      done();
    })

    /**
     * @tc.number getWindowPorperties_1500
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_1500', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME_TEST_1)
      expect(Array.isArray(datainfo.supportWindowMode)).assertTrue();
      expect(datainfo.supportWindowMode.length).assertEqual(1)
      expect(datainfo.supportWindowMode[0]).assertEqual(FULL_SCREEN_WINDOW_MODE)
      done();
    })

    /**
     * @tc.number getWindowPorperties_1600
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_1600', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME_TEST_2)
      expect(Array.isArray(datainfo.supportWindowMode)).assertTrue();
      expect(datainfo.supportWindowMode.length).assertEqual(1)
      expect(datainfo.supportWindowMode[0]).assertEqual(SPLIT_WINDOW_MODE)
      done();
    })

    /**
     * @tc.number getWindowPorperties_1700
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_1700', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME_TEST_3)
      expect(Array.isArray(datainfo.supportWindowMode)).assertTrue();
      expect(datainfo.supportWindowMode.length).assertEqual(1)
      expect(datainfo.supportWindowMode[0]).assertEqual(FLOATING_WINDOW_MODE)
      done();
    })

    /**
     * @tc.number getWindowPorperties_1800
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_1800', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME_TEST_4)
      expect(Array.isArray(datainfo.supportWindowMode)).assertTrue();
      expect(datainfo.supportWindowMode.length).assertEqual(3)
      expect(datainfo.supportWindowMode[0]).assertEqual(FULL_SCREEN_WINDOW_MODE)
      expect(datainfo.supportWindowMode[1]).assertEqual(SPLIT_WINDOW_MODE)
      expect(datainfo.supportWindowMode[2]).assertEqual(FLOATING_WINDOW_MODE)
      done();
    })

    /**
     * @tc.number getWindowPorperties_1900
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_1900', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME)
      expect(datainfo.maxWindowRatio).assertEqual(DEFAULT_VALUE);
      done();
    })

    /**
     * @tc.number getWindowPorperties_2000
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_2000', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME_TEST_5)
      expect(datainfo.maxWindowRatio).assertEqual(MAX_WINDOW_RATIO_VALUE);
      done();
    })

    /**
     * @tc.number getWindowPorperties_2100
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_2100', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME)
      expect(datainfo.minWindowRatio).assertEqual(DEFAULT_VALUE);
      done();
    })

    /**
     * @tc.number getWindowPorperties_2200
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_2200', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME_TEST_6)
      expect(datainfo.minWindowRatio).assertEqual(MIN_WINDOW_RATIO_VALUE);
      done();
    })

    /**
     * @tc.number getWindowPorperties_2300
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_2300', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME)
      expect(datainfo.maxWindowWidth).assertEqual(DEFAULT_VALUE);
      done();
    })

    /**
     * @tc.number getWindowPorperties_2400
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_2400', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME_TEST_7)
      expect(datainfo.maxWindowWidth).assertEqual(MAX_WINDOW_WIDTH_VALUE);
      done();
    })

    /**
     * @tc.number getWindowPorperties_2500
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_2500', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME)
      expect(datainfo.minWindowWidth).assertEqual(DEFAULT_VALUE);
      done();
    })

    /**
     * @tc.number getWindowPorperties_2600
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_2600', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME_TEST_8)
      expect(datainfo.minWindowWidth).assertEqual(MIN_WINDOW_WIDTH_VALUE);
      done();
    })

    /**
     * @tc.number getWindowPorperties_2700
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_2700', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME)
      expect(datainfo.maxWindowHeight).assertEqual(DEFAULT_VALUE);
      done();
    })

    /**
     * @tc.number getWindowPorperties_2800
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_2800', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME_TEST_9)
      expect(datainfo.maxWindowHeight).assertEqual(MAX_WINDOW_HEIGHT_VALUE);
      done();
    })

    /**
     * @tc.number getWindowPorperties_2900
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_2900', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME)
      expect(datainfo.minWindowHeight).assertEqual(DEFAULT_VALUE);
      done();
    })

    /**
     * @tc.number getWindowPorperties_3000
     * @tc.name BUNDLE::getWindowPorperties
     * @tc.desc Test window properties interfaces with one hap.
     */
    it('getWindowPorperties_3000', 0, async function (done) {
      let datainfo = await bundle.getAbilityInfo(BUNDLE_NAME, MODUEL_NAME, ABILITY_NAME_TEST_10)
      expect(datainfo.minWindowHeight).assertEqual(MIN_WINDOW_HEIGHT_VALUE);
      done();
    })
  })
}