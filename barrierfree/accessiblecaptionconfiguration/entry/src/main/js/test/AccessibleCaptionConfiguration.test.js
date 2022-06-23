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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
import accessibility from '@ohos.accessibility'

describe('AccessibleCaptionConfigurationTest', function () {

    beforeEach(async function (done) {
      console.info(`AccessibleCaptionConfigurationTest: beforeEach starts`);
      done();
    })

    afterEach(async function (done) {
      console.info(`AccessibleCaptionConfigurationTest: afterEach starts`);
      setTimeout(done, 1000);
    })


    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0100
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0100
    * @tc.desc    The parameter input is 'enableChange', test the captionManager.on() function,
    *             and return undefined 
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0100', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0100');
      let captionManager = accessibility.getCaptionsManager();
      let stateEventType = 'enableChange';
      let ret = captionManager.on(stateEventType, (data) => {});
      expect(ret).assertEqual(undefined);
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0200
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0200
    * @tc.desc    The parameter input is 'styleChange', test the captionManager.on() function,
    *             and return undefined 
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0200', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0200');
      let captionManager = accessibility.getCaptionsManager();
      let stateEventType = 'styleChange';
      let ret = captionManager.on(stateEventType, (data) => {});
      expect(ret).assertEqual(undefined);
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0300
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0300
    * @tc.desc    The parameter input is '', test the captionManager.on() function,
    *             and return undefined 
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0300', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0300');
      let captionManager = accessibility.getCaptionsManager();
      let stateEventType = '';
      let ret = captionManager.on(stateEventType, (data) => {});
      expect(ret).assertEqual(undefined);
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0400
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0400
    * @tc.desc    The parameter input is null, test the captionManager.on() function,
    *             and return undefined 
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0400', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0400');
      let captionManager = accessibility.getCaptionsManager();
      let stateEventType = null;
      let ret = captionManager.on(stateEventType, (data) => {});
      expect(ret).assertEqual(undefined);
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0500
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0500
    * @tc.desc    The parameter input is 'enableChange', test the captionManager.off() function,
    *             and return undefined 
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0500', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0500');
      let captionManager = accessibility.getCaptionsManager();
      let stateEventType = 'enableChange';
      let ret = captionManager.off(stateEventType, (data) => {});
      expect(ret).assertEqual(undefined);
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0600
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0600
    * @tc.desc    The parameter input is 'styleChange', test the captionManager.off() function,
    *             and return undefined 
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0600', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0600');
      let captionManager = accessibility.getCaptionsManager();
      let stateEventType = 'styleChange';
      let ret = captionManager.off(stateEventType, (data) => {});
      expect(ret).assertEqual(undefined);
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0700
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0700
    * @tc.desc    The parameter input is '', test the captionManager.off() function,
    *             and return undefined 
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0700', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0700');
      let captionManager = accessibility.getCaptionsManager();
      let stateEventType = '';
      let ret = captionManager.off(stateEventType, (data) => {});
      expect(ret).assertEqual(undefined);
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0800
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0800
    * @tc.desc    The parameter input is null, test the captionManager.off() function,
    *             and return undefined 
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0800', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0800');
      let captionManager = accessibility.getCaptionsManager();
      let stateEventType = null;
      let ret = captionManager.off(stateEventType, (data) => {});
      expect(ret).assertEqual(undefined);
      done();
    })



    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0900
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0900
    * @tc.desc    Test captionManager.style.fontFamily function by assigning "default".
    *             captionManager.style.fontFamily will be "default"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0900', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_0900');
      let captionManager = accessibility.getCaptionsManager();
      let fontFamily = "default";
      captionManager.style.fontFamily = fontFamily;
      let value = captionManager.style.fontFamily;
      expect(value).assertEqual(fontFamily);
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1000
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1000
    * @tc.desc    Test captionManager.style.fontFamily function by assigning "monospacedSerif".
    *             captionManager.style.fontFamily will be "monospacedSerif"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1000', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1000');
      let captionManager = accessibility.getCaptionsManager();
      let fontFamily = "monospacedSerif";
      captionManager.style.fontFamily = fontFamily;
      let value = captionManager.style.fontFamily;
      expect(value).assertEqual(fontFamily);
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1100
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1100
    * @tc.desc    Test captionManager.style.fontFamily function by assigning "serif".
    *             captionManager.style.fontFamily will be "serif"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1100', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1100');
      let captionManager = accessibility.getCaptionsManager();
      let fontFamily = "serif";
      captionManager.style.fontFamily = fontFamily;
      let value = captionManager.style.fontFamily;
      expect(value).assertEqual(fontFamily);
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1200
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1200
    * @tc.desc    Test captionManager.style.fontFamily function by assigning "monospacedSansSerif".
    *             captionManager.style.fontFamily will be "monospacedSansSerif"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1200', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1200');
      let captionManager = accessibility.getCaptionsManager();
      let fontFamily = "monospacedSansSerif";
      captionManager.style.fontFamily = fontFamily;
      let value = captionManager.style.fontFamily;
      expect(value).assertEqual(fontFamily);
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1300
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1300
    * @tc.desc    Test captionManager.style.fontFamily function by assigning "sansSerif".
    *             captionManager.style.fontFamily will be "sansSerif"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1300', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1300');
      let captionManager = accessibility.getCaptionsManager();
      let fontFamily = "sansSerif";
      captionManager.style.fontFamily = fontFamily;
      let value = captionManager.style.fontFamily;
      expect(value).assertEqual(fontFamily);
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1400
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1400
    * @tc.desc    Test captionManager.style.fontFamily function by assigning "casual".
    *             captionManager.style.fontFamily will be "casual"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1400', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1400');
      let captionManager = accessibility.getCaptionsManager();
      let fontFamily = "casual";
      captionManager.style.fontFamily = fontFamily;
      let value = captionManager.style.fontFamily;
      expect(value).assertEqual(fontFamily);
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1500
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1500
    * @tc.desc    Test captionManager.style.fontFamily function by assigning "cursive".
    *             captionManager.style.fontFamily will be "cursive"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1500', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1500');
      let captionManager = accessibility.getCaptionsManager();
      let fontFamily = "cursive";
      captionManager.style.fontFamily = fontFamily;
      let value = captionManager.style.fontFamily;
      expect(value).assertEqual(fontFamily);
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1600
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1600
    * @tc.desc    Test captionManager.style.fontFamily function by assigning "smallCapitals".
    *             captionManager.style.fontFamily will be "smallCapitals"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1600', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1600');
      let captionManager = accessibility.getCaptionsManager();
      let fontFamily = "smallCapitals";
      captionManager.style.fontFamily = fontFamily;
      let value = captionManager.style.fontFamily;
      expect(value).assertEqual(fontFamily);
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1700
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1700
    * @tc.desc    Test captionManager.style.fontFamily function by assigning "".
    *             captionManager.style.fontFamily will be ""
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1700', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1700');
      let captionManager = accessibility.getCaptionsManager();
      let fontFamily = "";
      captionManager.style.fontFamily = fontFamily;
      let value = captionManager.style.fontFamily;
      expect(value).assertEqual(fontFamily);
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1800
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1800
    * @tc.desc    Test captionManager.style.fontFamily function by assigning null.
    *             captionManager.style.fontFamily will be ''
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1800', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1800');
      let captionManager = accessibility.getCaptionsManager();
      let fontFamily = null;
      captionManager.style.fontFamily = fontFamily;
      let value = captionManager.style.fontFamily;
      expect(value).assertEqual('');
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1900
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1900
    * @tc.desc    Test captionManager.style.fontScale function by assigning 9007199254740992.
    *             captionManager.style.fontScale will be 0
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1900', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_1900');
      let captionManager = accessibility.getCaptionsManager();
      let fontScale = 9007199254740992;
      captionManager.style.fontScale = fontScale;
      let value = captionManager.style.fontScale;
      expect(value).assertEqual(0);
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2000
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2000
    * @tc.desc    Test captionManager.style.fontScale function by assigning 1.
    *             captionManager.style.fontScale will be 1
    * @tc.size    SmallTest
    * @tc.type    User
    */
      it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2000', 0, async function (done) {
          console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2000');
          let captionManager = accessibility.getCaptionsManager();
          let fontScale = 1;
          captionManager.style.fontScale = fontScale;
          let value = captionManager.style.fontScale;
          expect(value).assertEqual(fontScale);
          done();
      })
        
    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2100
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2100
    * @tc.desc    Test captionManager.style.fontScale function by assigning 0.
    *             captionManager.style.fontScale will be 0
    * @tc.size    SmallTest
    * @tc.type    User
    */
      it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2100', 0, async function (done) {
          console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2100');
          let captionManager = accessibility.getCaptionsManager();
          let fontScale = 0;
          captionManager.style.fontScale = fontScale;
          let value = captionManager.style.fontScale;
          expect(value).assertEqual(fontScale);
          done();
      })

      /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2200
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2200
    * @tc.desc    Test captionManager.style.fontScale function by assigning -1.
    *             captionManager.style.fontScale will be -1
    * @tc.size    SmallTest
    * @tc.type    User
    */
      it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2200', 0, async function (done) {
          console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2200');
          let captionManager = accessibility.getCaptionsManager();
          let fontScale = -1;
          captionManager.style.fontScale = fontScale;
          let value = captionManager.style.fontScale;
          expect(value).assertEqual(fontScale);
          done();
      })
    

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2300
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2300
    * @tc.desc    Test captionManager.style.fontColor function by assigning "#12345678".
    *             captionManager.style.fontColor will be "#12345678"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2300', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2300');
      let captionManager = accessibility.getCaptionsManager();
      let fontColor ="#12345678";
      captionManager.style.fontColor = fontColor;
      let value = captionManager.style.fontColor;
      expect(value).assertEqual(fontColor);
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2400
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2400
    * @tc.desc    Test captionManager.style.fontColor function by assigning "".
    *             captionManager.style.fontColor will be ""
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2400', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2400');
      let captionManager = accessibility.getCaptionsManager();
      let fontColor ="#";
      captionManager.style.fontColor = fontColor;
      let value = captionManager.style.fontColor;
      expect(value).assertEqual("#00000000");
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2500
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2500
    * @tc.desc    Test captionManager.style.fontColor function by assigning null.
    *             captionManager.style.fontColor will be "#00000000"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2500', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2500');
      let captionManager = accessibility.getCaptionsManager();
      let fontColor = null;
      captionManager.style.fontColor = fontColor;
      let value = captionManager.style.fontColor;
      expect(value).assertEqual("#00000000");
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2600
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2600
    * @tc.desc    Test captionManager.style.fontColor function by assigning 0x12345678.
    *             captionManager.style.fontColor will be "#34567812"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2600', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2600');
      let captionManager = accessibility.getCaptionsManager();
      let fontColor = 0x12345678;
      captionManager.style.fontColor = fontColor;
      let value = captionManager.style.fontColor;
      expect(value).assertEqual("#34567812");
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2700
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2700
    * @tc.desc    Test captionManager.style.fontColor function by assigning 0.
    *             captionManager.style.fontColor will be "#00000000"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2700', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2700');
      let captionManager = accessibility.getCaptionsManager();
      let fontColor = 0;
      captionManager.style.fontColor = fontColor;
      let value = captionManager.style.fontColor;
      expect(value).assertEqual("#00000000");
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2800
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2800
    * @tc.desc    Test captionManager.style.fontColor function by assigning -1.
    *             captionManager.style.fontColor will be "#ffffffff"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2800', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2800');
      let captionManager = accessibility.getCaptionsManager();
      let fontColor = -1;
      captionManager.style.fontColor = fontColor;
      let value = captionManager.style.fontColor;
      expect(value).assertEqual("#ffffffff");
      done();
    })


    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2900
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2900
    * @tc.desc    Test captionManager.style.fontEdgeType function by assigning "none".
    *             captionManager.style.fontEdgeType will be "none"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2900', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_2900');
      let captionManager = accessibility.getCaptionsManager();
      let fontEdgeType = "none";
      captionManager.style.fontEdgeType = fontEdgeType;
      let value = captionManager.style.fontEdgeType;
      expect(value).assertEqual(fontEdgeType);
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3000
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3000
    * @tc.desc    Test captionManager.style.fontEdgeType function by assigning "raised".
    *             captionManager.style.fontEdgeType will be "raised"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3000', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3000');
      let captionManager = accessibility.getCaptionsManager();
      let fontEdgeType = "raised";
      captionManager.style.fontEdgeType = fontEdgeType;
      let value = captionManager.style.fontEdgeType;
      expect(value).assertEqual(fontEdgeType);
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3100
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3100
    * @tc.desc    Test captionManager.style.fontEdgeType function by assigning "depressed".
    *             captionManager.style.fontEdgeType will be "depressed"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3100', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3100');
      let captionManager = accessibility.getCaptionsManager();
      let fontEdgeType = "depressed";
      captionManager.style.fontEdgeType = fontEdgeType;
      let value = captionManager.style.fontEdgeType;
      expect(value).assertEqual(fontEdgeType);
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3200
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3200
    * @tc.desc    Test captionManager.style.fontEdgeType function by assigning "uniform".
    *             captionManager.style.fontEdgeType will be "uniform"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3200', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3200');
      let captionManager = accessibility.getCaptionsManager();
      let fontEdgeType = "uniform";
      captionManager.style.fontEdgeType = fontEdgeType;
      let value = captionManager.style.fontEdgeType;
      expect(value).assertEqual(fontEdgeType);
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3300
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3300
    * @tc.desc    Test captionManager.style.fontEdgeType function by assigning "dropShadow".
    *             captionManager.style.fontEdgeType will be "dropShadow"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3300', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3300');
      let captionManager = accessibility.getCaptionsManager();
      let fontEdgeType = "dropShadow";
      captionManager.style.fontEdgeType = fontEdgeType;
      let value = captionManager.style.fontEdgeType;
      expect(value).assertEqual(fontEdgeType);
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3400
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3400
    * @tc.desc    Test captionManager.style.fontEdgeType function by assigning "".
    *             captionManager.style.fontEdgeType will be ""
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3400', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3400');
      let captionManager = accessibility.getCaptionsManager();
      let fontEdgeType = "";
      captionManager.style.fontEdgeType = fontEdgeType;
      let value = captionManager.style.fontEdgeType;
      expect(value).assertEqual(fontEdgeType);
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3500
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3500
    * @tc.desc    Test captionManager.style.fontEdgeType function by assigning null.
    *             captionManager.style.fontEdgeType will be ''
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3500', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3500');
      let captionManager = accessibility.getCaptionsManager();
      let fontEdgeType = null;
      captionManager.style.fontEdgeType = fontEdgeType;
      let value = captionManager.style.fontEdgeType;
      expect(value).assertEqual('');
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3600
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3600
    * @tc.desc    Test captionManager.style.backgroundColor function by assigning "#12345678".
    *             captionManager.style.backgroundColor will be "#12345678"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3600', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3600');
      let captionManager = accessibility.getCaptionsManager();
      let backgroundColor ="#12345678";
      captionManager.style.backgroundColor = backgroundColor;
      let value = captionManager.style.backgroundColor;
      expect(value).assertEqual(backgroundColor);
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3700
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3700
    * @tc.desc    Test captionManager.style.backgroundColor function by assigning "".
    *             captionManager.style.backgroundColor will be "#00000000"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3700', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3700');
      let captionManager = accessibility.getCaptionsManager();
      let backgroundColor = "";
      captionManager.style.backgroundColor = backgroundColor;
      let value = captionManager.style.backgroundColor;
      expect(value).assertEqual("#00000000");
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3800
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3800
    * @tc.desc    Test captionManager.style.backgroundColor function by assigning null.
    *             captionManager.style.backgroundColor will be "#00000000"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3800', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3800');
      let captionManager = accessibility.getCaptionsManager();
      let backgroundColor = null;
      captionManager.style.backgroundColor = backgroundColor;
      let value = captionManager.style.backgroundColor;
      expect(value).assertEqual("#00000000");
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3900
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3900
    * @tc.desc    Test captionManager.style.backgroundColor function by assigning 0x12345678.
    *             captionManager.style.backgroundColor will be "#34567812"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3900', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_3900');
      let captionManager = accessibility.getCaptionsManager();
      let backgroundColor = 0x12345678;
      captionManager.style.backgroundColor = backgroundColor;
      let value = captionManager.style.backgroundColor;
      expect(value).assertEqual("#34567812");
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4000
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4000
    * @tc.desc    Test captionManager.style.backgroundColor function by assigning 0.
    *             captionManager.style.backgroundColor will be "#00000000"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4000', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4000');
      let captionManager = accessibility.getCaptionsManager();
      let backgroundColor = 0;
      captionManager.style.backgroundColor = backgroundColor;
      let value = captionManager.style.backgroundColor;
      expect(value).assertEqual("#00000000");
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4100
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4100
    * @tc.desc    Test captionManager.style.backgroundColor function by assigning -1.
    *             captionManager.style.backgroundColor will be "#ffffffff"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4100', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4100');
      let captionManager = accessibility.getCaptionsManager();
      let backgroundColor = -1;
      captionManager.style.backgroundColor = backgroundColor;
      let value = captionManager.style.backgroundColor;
      expect(value).assertEqual("#ffffffff");
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4200
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4200
    * @tc.desc    Test captionManager.style.windowColor function by assigning "#12345678".
    *             captionManager.style.windowColor will be "#12345678"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4200', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4200');
      let captionManager = accessibility.getCaptionsManager();
      let windowColor ="#12345678";
      captionManager.style.windowColor = windowColor;
      let value = captionManager.style.windowColor;
      expect(value).assertEqual(windowColor);
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4300
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4300
    * @tc.desc    Test captionManager.style.windowColor function by assigning "".
    *             captionManager.style.windowColor will be ""
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4300', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4300');
      let captionManager = accessibility.getCaptionsManager();
      let windowColor ="";
      captionManager.style.windowColor = windowColor;
      let value = captionManager.style.windowColor;
      expect(value).assertEqual("#00000000");
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4400
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4400
    * @tc.desc    Test captionManager.style.windowColor function by assigning null.
    *             captionManager.style.windowColor will be "#00000000"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4400', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4400');
      let captionManager = accessibility.getCaptionsManager();
      let windowColor = null;
      captionManager.style.windowColor = windowColor;
      let value = captionManager.style.windowColor;
      expect(value).assertEqual("#00000000");
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4500
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4500
    * @tc.desc    Test captionManager.style.windowColor function by assigning 0x12345678.
    *             captionManager.style.windowColor will be "#34567812"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4500', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4500');
      let captionManager = accessibility.getCaptionsManager();
      let windowColor = 0x12345678;
      captionManager.style.windowColor = windowColor;
      let value = captionManager.style.windowColor;
      expect(value).assertEqual("#34567812");
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4600
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4600
    * @tc.desc    Test captionManager.style.windowColor function by assigning 0.
    *             captionManager.style.windowColor will be "#00000000"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4600', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4600');
      let captionManager = accessibility.getCaptionsManager();
      let windowColor = 0;
      captionManager.style.windowColor = windowColor;
      let value = captionManager.style.windowColor;
      expect(value).assertEqual("#00000000");
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4700
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4700
    * @tc.desc    Test captionManager.style.windowColor function by assigning -1.
    *             captionManager.style.windowColor will be "#ffffffff"
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4700', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4700');
      let captionManager = accessibility.getCaptionsManager();
      let windowColor = -1;
      captionManager.style.windowColor = windowColor;
      let value = captionManager.style.windowColor;
      expect(value).assertEqual("#ffffffff");
      done();
    })


    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4800
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4800
    * @tc.desc    Test captionManager.style function by assigning a value.
    *             Attributes of captionManager.style will be equal to that of this value
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4800', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4800');
      let captionManager = accessibility.getCaptionsManager();
      let StyleTest = {
        fontFamily: "monospacedSerif",
        fontScale: 99,
        fontColor: "#12345678",
        fontEdgeType: "uniform",
        backgroundColor: "#23456789",
        windowColor: "#34567890"
      };
      captionManager.style = StyleTest;
      let value = captionManager.style;
      expect(value.fontFamily).assertEqual(StyleTest.fontFamily);
      expect(value.fontScale).assertEqual(StyleTest.fontScale);
      expect(value.fontColor).assertEqual(StyleTest.fontColor);
      expect(value.fontEdgeType).assertEqual(StyleTest.fontEdgeType);
      expect(value.backgroundColor).assertEqual(StyleTest.backgroundColor);
      expect(value.windowColor).assertEqual(StyleTest.windowColor);
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4900
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4900
    * @tc.desc    Test captionManager.enabled function by assigning true.
    *             captionManager.enabled will be true
    * @tc.size    SmallTest
    * @tc.type    User
    */
    it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4900', 0, async function (done) {
      console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_4900');
      let captionManager = accessibility.getCaptionsManager();
      let enabled = true;
      captionManager.enabled = enabled;
      let value = captionManager.enabled;
      expect(value).assertEqual(enabled);
      done();
    })

    /*
    * @tc.number  AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_5000
    * @tc.name    AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_5000
    * @tc.desc    Test captionManager.enabled function by assigning false.
    *             captionManager.enabled will be false
    * @tc.size    SmallTest
    * @tc.type    User
    */
      it('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_5000', 0, async function (done) {
        console.info('AccessibleCaptionConfigurationTest_getCaptionsManager_asyncCallback_5000');
        let captionManager = accessibility.getCaptionsManager();
        let enabled = false;
        captionManager.enabled = enabled;
        let value = captionManager.enabled;
        expect(value).assertEqual(enabled);
        done();
      })


})
