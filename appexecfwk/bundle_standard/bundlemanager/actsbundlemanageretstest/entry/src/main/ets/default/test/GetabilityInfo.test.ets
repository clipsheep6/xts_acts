/**
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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

import {describe, beforeEach, afterEach, it, expect} from 'deccjsunit/index.ets';
import Utils from './Utils';
import bundleManager from '@ohos.bundle';

export default function GetabilityInfo() {
  describe('GetabilityInfo', function () {
    let bundleName = 'com.open.harmony.packagemag';
    let abilityName = 'com.open.harmony.packagemag.MainAbility';
    let abilityName1 = 'com.harmony.packagemag1.MainAbility';
    let bundleName1 = 'com.harmony.packagemag';

    beforeEach(async function (done) {
      console.info('GetabilityInfo before each called');
      done()
    });

    afterEach(async function () {
      await Utils.sleep(2000);
      console.info('GetabilityInfo after each called');
    });

    /**
     * @tc.number: bundle_getAllApplicationInfo_test_0100
     * @tc.name: getAbilityInfo : The basic ability is enhanced to obtain the specified Ability information
     * @tc.desc: Check the return value of the interface (by promise)
     * @tc.level   0
     */
    it('bundle_GetabilityInfo_test_0100', 0, async function (done) {
      console.info('[bundle_GetabilityInfo_test_0100] START');
      await Utils.sleep(1000);
      var timeOldStamp = await Utils.getNowTime();
      bundleManager.getAbilityInfo(bundleName, abilityName)
        .then((data) => {
          var timeNewStamp = Utils.getNowTime();
          Utils.getDurationTime('bundle_GetabilityInfo_test_0100', timeOldStamp, timeNewStamp)
          console.info('[bundle_GetabilityInfo_test_0100] getApplicationInfo in ');
          console.info('[bundle_GetabilityInfo_test_0100] getApplicationInfo data is: ' + JSON.stringify(data));
          expect(typeof (data)).assertEqual('object');
        }).catch((error) => {
        console.error('[bundle_GetabilityInfo_test_0100]Operation failed. Cause: ' + JSON.stringify(error));
      })
      var promise = await bundleManager.getAbilityInfo(bundleName, abilityName);
      checkAbilityInfo('[bundle_GetabilityInfo_test_0100]',promise);
      done();
    });

    /**
     * @tc.number: bundle_getAllApplicationInfo_test_0100
     * @tc.name: getAbilityInfo : The basic ability is enhanced to obtain the specified Ability information
     * @tc.desc: Check the return value of the interface (by callback)
     * @tc.level   0
     */
    it('bundle_GetabilityInfo_test_0200', 0, async function (done) {
      console.info('[bundle_GetabilityInfo_test_0200] START');
      await Utils.sleep(1000);
      var timeOldStamp = await Utils.getNowTime();
      bundleManager.getAbilityInfo(bundleName, abilityName, (err, data) => {
        var timeNewStamp = Utils.getNowTime();
        Utils.getDurationTime('bundle_GetabilityInfo_test_0200', timeOldStamp, timeNewStamp)
        if (err) {
          console.error('[bundle_GetabilityInfo_test_0200]Operation failed. Cause: ' + JSON.stringify(err));
          return;
        }
        console.info('[bundle_GetabilityInfo_test_0200]Operation successful. Data:' + JSON.stringify(data));
      })
      var callback = await bundleManager.getAbilityInfo(bundleName, abilityName);
      checkAbilityInfo('[bundle_GetabilityInfo_test_0200]', callback);
      done();
    });

    /**
     * @tc.number: bundle_getAllApplicationInfo_test_0100
     * @tc.name: getAbilityInfo : The basic ability is enhanced to obtain the specified Ability information
     * @tc.desc: Check the return value of the interface (by promise)
     * @tc.level   0
     */
    it('bundle_GetabilityInfo_test_0300', 0, async function (done) {
      console.info('[bundle_GetabilityInfo_test_0300] START');
      let error1;
      await Utils.sleep(1000);
      var timeOldStamp = await Utils.getNowTime();
      bundleManager.getAbilityInfo(bundleName1, abilityName)
        .then((data) => {
          var timeNewStamp = Utils.getNowTime();
          Utils.getDurationTime('bundle_GetabilityInfo_test_0300', timeOldStamp, timeNewStamp)
          console.info('[bundle_GetabilityInfo_test_0300] getApplicationInfo in ');
          console.info('[bundle_GetabilityInfo_test_0300] getApplicationInfo data is: ' + JSON.stringify(data));
          expect(typeof (data)).assertEqual('object');
        }).catch((error) => {
        console.error('[bundle_GetabilityInfo_test_0300]Operation failed. Cause: ' + JSON.stringify(error));
        error1 = error;
      })
      await Utils.sleep(1000);
      await expect(error1).assertEqual(1);
      done();
    });

    /**
     * @tc.number: bundle_getAllApplicationInfo_test_0100
     * @tc.name: getAbilityInfo : The basic ability is enhanced to obtain the specified Ability information
     * @tc.desc: Check the return value of the interface (by callback)
     * @tc.level   0
     */
    it('bundle_GetabilityInfo_test_0400', 0, async function (done) {
      console.info('[bundle_GetabilityInfo_test_0400] START');
      var error;
      var timeOldStamp = await Utils.getNowTime();
      bundleManager.getAbilityInfo(bundleName, abilityName1, (err, data) => {
        var timeNewStamp = Utils.getNowTime();
        Utils.getDurationTime('bundle_GetabilityInfo_test_0400', timeOldStamp, timeNewStamp)
        if (err) {
          console.error('[bundle_GetabilityInfo_test_0400]Operation failed. Cause: ' + JSON.stringify(err));
          error = err;
          console.error('[bundle_GetabilityInfo_test_0400] fail: ' + JSON.stringify(error));
          return;
        }
        console.info('[bundle_GetabilityInfo_test_0400]Operation successful. Data:' + JSON.stringify(data));
      })
      await Utils.sleep(1000);
      await expect(error).assertEqual(1);
      done();
    });

    /**
     * 打印AbilityInfo属性信息
     * @param data
     */
    function checkAbilityInfo(msg, data) {
      console.log(msg + 'checkAbilityInfo start  ' + JSON.stringify(data));
      console.log(msg + 'checkAbilityInfo bundleName : ' + data.bundleName);
      console.log(msg + 'checkAbilityInfo name : ' + data.name);
      console.log(msg + 'checkAbilityInfo label : ' + data.label);
      console.log(msg + 'checkAbilityInfo description : ' + data.description);
      console.log(msg + 'checkAbilityInfo icon : ' + data.icon);
      console.log(msg + 'checkAbilityInfo descriptionId : ' + data.descriptionId);
      console.log(msg + 'checkAbilityInfo iconId : ' + data.iconId);
      console.log(msg + 'checkAbilityInfo moduleName : ' + data.moduleName);
      console.log(msg + 'checkAbilityInfo process : ' + data.process);
      console.log(msg + 'checkAbilityInfo targetAbility : ' + data.targetAbility);
      console.log(msg + 'checkAbilityInfo backgroundModes : ' + data.backgroundModes);
      console.log(msg + 'checkAbilityInfo isVisible : ' + data.isVisible);
      console.log(msg + 'checkAbilityInfo formEnabled : ' + data.formEnabled);
      console.log(msg + 'checkAbilityInfo type : ' + data.type)
      console.log(msg + 'checkAbilityInfo orientation : ' + data.orientation);
      console.log(msg + 'checkAbilityInfo launchMode : ' + data.launchMode);
      console.log(msg + 'checkAbilityInfo permissions length : ' + data.permissions.length);
      for (var j = 0; j < data.permissions.length; j++) {
        console.log(msg + 'getAbilityInfo data.permissions[' + j + '] : ' + data.permissions[j]);
      }
      console.log(msg + 'checkAbilityInfo deviceTypes length : ' + data.deviceTypes.length);
      for (var k = 0; k < data.deviceTypes.length; k++) {
        console.log(msg + 'getAbilityInfo data.deviceTypes[' + k + '] : ' + data.deviceTypes[k]);
      }
      console.log('checkAbilityInfo deviceCapabilities length : ' + data.deviceCapabilities.length);
      for (var i = 0; i < data.deviceCapabilities.length; i++) {
        console.log(msg + 'getAbilityInfo data.deviceCapabilities[' + i + '] : ' + data.deviceCapabilities[i]);
      }
      console.log(msg + 'checkAbilityInfo readPermission : ' + data.readPermission);
      console.log(msg + 'checkAbilityInfo writePermission : ' + data.writePermission);
      console.log(msg + 'checkAbilityInfo formEntity : ' + data.formEntity);
      console.log(msg + 'checkAbilityInfo minFormHeight : ' + data.minFormHeight);
      console.log(msg + 'checkAbilityInfo defaultFormHeight : ' + data.defaultFormHeight);
      console.log(msg + 'checkAbilityInfo minFormWidth : ' + data.minFormWidth);
      console.log(msg + 'checkAbilityInfo defaultFormWidth : ' + data.defaultFormWidth);
      console.log(msg + 'checkAbilityInfo uri : ' + data.uri);
      console.log(msg + 'checkAbilityInfo labelId : ' + data.labelId);
      console.log(msg + 'checkAbilityInfo subType : ' + data.subType);
      expectAbilityInfoData(msg,data);
      console.log('---checkAbilityInfo End---  ');
    }

    /**
     * 断言AbilityInfo属性
     * @param msg log信息
     * @param data 数据源
     */
    function expectAbilityInfoData(msg,data) {
      expect(data.bundleName).assertEqual('com.open.harmony.packagemag');
      expect(typeof (data.bundleName)).assertEqual('string');
      expect(data.name).assertEqual('com.open.harmony.packagemag.MainAbility');
      expect(typeof (data.name)).assertEqual('string');
      expect(data.label).assertEqual('$string:entry_MainAbility');
      expect(typeof (data.label)).assertEqual('string');
      expect(data.description).assertEqual('$string:mainability_description');
      expect(typeof (data.description)).assertEqual('string');
      expect(data.icon).assertEqual('$media:icon');
      expect(typeof (data.icon)).assertEqual('string');
      expect(data.srcPath).assertEqual('default');
      expect(typeof (data.srcPath)).assertEqual('string');
      expect(data.srcLanguage).assertEqual('ets');
      expect(typeof (data.srcLanguage)).assertEqual('string');
      expect(data.isVisible).assertEqual(true);
      expect(Array.isArray(data.permissions)).assertEqual(true);
      expect(Array.isArray(data.deviceCapabilities)).assertEqual(true);
      expect(data.deviceTypes[0]).assertEqual('phone');
      expect(typeof (data.process)).assertEqual('string');
      expect(typeof (data.uri)).assertEqual('string');
      expect(data.uri).assertEqual('');
      expect(typeof (data.uri)).assertEqual('string');
      expect(data.moduleName).assertEqual('entry');
      expect(typeof (data.moduleName)).assertEqual('string');
      expect(typeof (data.applicationInfo)).assertEqual('object');
      expect(data.type).assertEqual(1);
      expect(typeof (data.type)).assertEqual('number');
      expect(data.orientation).assertEqual(0);
      expect(typeof (data.orientation)).assertEqual('number');
      expect(data.launchMode).assertEqual(1);
      expect(typeof (data.launchMode)).assertEqual('number');
      expect(data.backgroundModes).assertEqual(0);
      expect(typeof (data.backgroundModes)).assertEqual('number');
      expect(data.descriptionId).assertEqual(16777217);
      expect(typeof (data.descriptionId)).assertEqual('number');
      expect(data.formEnabled).assertEqual(false);
      expect(data.iconId).assertEqual(16777218);
      expect(typeof (data.iconId)).assertEqual('number');
      expect(data.labelId).assertEqual(16777216);
      expect(typeof (data.labelId)).assertEqual('number');
      expect(data.formEntity).assertEqual(0);
      expect(typeof (data.formEntity)).assertEqual('number');
      expect(data.minFormHeight).assertEqual(0);
      expect(typeof (data.minFormHeight)).assertEqual('number');
      expect(data.minFormWidth).assertEqual(0);
      expect(typeof (data.minFormWidth)).assertEqual('number');
      expect(data.defaultFormWidth).assertEqual(0);
      expect(typeof (data.defaultFormWidth)).assertEqual('number');
      expect(data.defaultFormHeight).assertEqual(0);
      expect(typeof (data.defaultFormHeight)).assertEqual('number');
      expect(data.subType).assertEqual(0);
      expect(typeof (data.subType)).assertEqual('number');
      expect(data.readPermission).assertEqual('');
      expect(typeof (data.readPermission)).assertEqual('string');
      expect(data.writePermission).assertEqual('');
      expect(typeof (data.writePermission)).assertEqual('string');
      expect(data.formEntity).assertEqual(0);
      expect(typeof (data.formEntity)).assertEqual('number');
      expect(data.subType).assertEqual(0);
      checkApplicationInfo(msg,data.applicationInfo);
    }

    /**
     * 打印ApplicationInfo属性信息
     * @param data
     */
    function checkApplicationInfo(msg,info) {
      console.log('checkApplicationInfo getApplicationInfo : ' + JSON.stringify(info));
      console.log('checkApplicationInfo name : ' + info.name);
      console.log('checkApplicationInfo description : ' + info.description);
      console.log('checkApplicationInfo descriptionId : ' + info.descriptionId);
      console.log('checkApplicationInfo systemApp : ' + info.systemApp);
      console.log('checkApplicationInfo enabled : ' + info.enabled);
      console.log('checkApplicationInfo label : ' + info.label);
      console.log('checkApplicationInfo labelId : ' + info.labelId);
      console.log('checkApplicationInfo icon : ' + info.icon);
      console.log('checkApplicationInfo process : ' + info.process);
      console.log('checkApplicationInfo supportedModes : ' + info.supportedModes);
      console.log('checkApplicationInfo moduleSourceDirs length : ' + info.moduleSourceDirs.length);
      for (var j = 0; j < info.moduleSourceDirs.length; j++) {
        console.log('checkApplicationInfo info.moduleSourceDirs[' + j + '] : ' + info.moduleSourceDirs[j]);
      }
      console.log('checkApplicationInfo permissions length : ' + info.permissions.length);
      for (var i = 0; i < info.permissions.length; i++) {
        console.log('checkApplicationInfo info.permissions[' + i + '] : ' + info.permissions[i]);
      }
      console.log('checkApplicationInfo moduleInfos length : ' + info.moduleInfos.length);
      for (var l = 0; l < info.moduleInfos.length; l++) {
        console.log('checkApplicationInfo info.moduleInfos[' + l + '].moduleName : ' + info.moduleInfos[l].moduleName);
        console.log('checkApplicationInfo info.moduleInfos[' + l + '].moduleSourceDir : ' + info.moduleInfos[l].moduleSourceDir);
      }
      console.log('checkApplicationInfo entryDir : ' + info.entryDir);
      expectApplicationInfoData(info);
    }

    /**
     * 断言ApplicationInfo属性
     * @param msg log信息
     * @param data 数据源
     */
    function expectApplicationInfoData(info){
      expect(typeof (info)).assertEqual('object');
      expect(info.name).assertEqual('');
      expect(typeof (info.name)).assertEqual('string');
      expect(typeof (info.codePath)).assertEqual('string');
      expect(info.codePath).assertEqual('');
      expect(info.accessTokenId).assertEqual(0);
      expect(typeof (info.accessTokenId)).assertEqual('number');
      expect(typeof (info.description)).assertEqual('string');
      expect(info.description).assertEqual('');
      expect(info.descriptionId).assertEqual(0);
      expect(typeof (info.descriptionId)).assertEqual('number');
      expect(typeof (info.icon)).assertEqual('string');
      expect(info.icon).assertEqual('');
      expect(info.iconId).assertEqual(0);
      expect(typeof (info.iconId)).assertEqual('number');
      expect(typeof (info.label)).assertEqual('string');
      expect(info.label).assertEqual('')
      expect(info.labelId).assertEqual(0)
      expect(typeof (info.labelId)).assertEqual('number');
      expect(info.systemApp).assertEqual(false);
      expect(info.supportedModes).assertEqual(0);
      expect(typeof (info.supportedModes)).assertEqual('number');
      expect(typeof (info.process)).assertEqual('string');
      expect(info.process).assertEqual('');
      expect(Array.isArray(info.moduleSourceDirs)).assertEqual(true);
      expect(Array.isArray(info.moduleInfos)).assertEqual(true);
      expect(Array.isArray(info.permissions)).assertEqual(true);
      expect(typeof (info.metaData)).assertEqual('object');
      expect(typeof (info.metadata)).assertEqual('object');
      expect(info.enabled).assertEqual(false);
      expect(info.flags).assertEqual(0);
      expect(info.uid).assertEqual(-1);
      expect(typeof (info.flags)).assertEqual('number');
      expect(typeof (info.uid)).assertEqual('number');
      expect(typeof (info.entityType)).assertEqual('string');
      expect(info.entityType).assertEqual('');
      expect(info.removable).assertEqual(true);
    }
  });
}