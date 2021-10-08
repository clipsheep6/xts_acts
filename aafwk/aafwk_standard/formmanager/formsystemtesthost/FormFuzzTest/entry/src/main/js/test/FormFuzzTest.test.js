/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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

import formManager from '@ohos.ability.formManager'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
import {parameterValue, stringTest, numberTest, booleanTest, nullTest, undefinedTest, objectTest, arrayTest, functionTest} from './getParam.js'

// var formIdFlag = 0;
const TIMEOUT = 1000;
describe('formFuzzTest', function () {
    console.log("formFuzzTest===start");

   it('FMS_fuzzTest_0200_callback', 0, async function (done) {
       console.log("FMS_fuzzTest_0200_callback deleteForm begin");

       var formId = parameterValue();
       console.log("FMS_fuzzTest_0200_callback deleteForm formId typeof:"+ typeof(formId));

       try{
        formManager.deleteForm(
               formId, // formId: number>0 ok
               (err,data) => {
                   console.log("FMS_fuzzTest_0200_callback async::callbak return!!!")
                   console.log("FMS_fuzzTest_0200_callback async::sucess data:" + data);
                   console.log("FMS_fuzzTest_0200_callback async::error err:" + err);
                   expect(err).assertEqual(1);
                   done();
               }
           );
       } catch (e) {
           console.log("FMS_fuzzTest_0200_callback Exception caught:" + e);
           expect(0).assertEqual(0);
       }

       console.log("FMS_fuzzTest_0200_callback deleteForm end");
       done();
       setTimeout(function () {
           console.info('=====================FMS_fuzzTest_0200_callback==================end');
       }, TIMEOUT)
   })

   it('FMS_fuzzTest_0200_promise', 0, async function (done) {
       console.log("FMS_fuzzTest_0200_promise deleteForm begin");

       var formId = parameterValue();
       console.log("FMS_fuzzTest_0200_promise deleteForm formId typeof:"+ typeof(formId));

       var retResult;
       try{
           retResult = await Promise.all(await formManager.deleteForm(formId)); // formId: number>0 ok
           console.log("FMS_fuzzTest_0200_promise async::sucess retResult:" + retResult);
           expect(retResult).assertEqual(1);
           done();
       } catch (e) {
           console.log("FMS_fuzzTest_0200_promise Exception caught:" + e);
           expect(0).assertEqual(0);
       }

       console.log("FMS_fuzzTest_0200_promise deleteForm end");
       done();
       setTimeout(function () {
           console.info('=====================FMS_fuzzTest_0200_promise==================end');
       }, TIMEOUT)
   })

   it('FMS_fuzzTest_0300_param_01_callback', 0, async function (done) {
       console.log("FMS_fuzzTest_0300_param_01_callback releaseForm begin");

       var formId = parameterValue();
       console.log("FMS_fuzzTest_0300_param_01_callback releaseForm formId typeof:"+ typeof(formId));

       var isReleaseCache = booleanTest();
       console.log("FMS_fuzzTest_0300_param_01_callback releaseForm isReleaseCache typeof:"+ typeof(isReleaseCache));

       try{
           formManager.releaseForm(
               formId, // formId: number>0 ok
               isReleaseCache, // isReleaseCache: boolean ok
               (err,data) => {
                   console.log("FMS_fuzzTest_0300_param_01_callback async::callbak return!!!")
                   console.log("FMS_fuzzTest_0300_param_01_callback async::sucess data:" + data);
                   console.log("FMS_fuzzTest_0300_param_01_callback async::error err:" + err);
                   expect(err).assertEqual(1);
                   done();
               }
           );
       } catch (e) {
           console.log("FMS_fuzzTest_0300_param_01_callback Exception caught:" + e);
           expect(0).assertEqual(0);
       }

       console.log("FMS_fuzzTest_0300_param_01_callback releaseForm end");
       done();
       setTimeout(function () {
           console.info('=====================FMS_fuzzTest_0300_param_01_callback==================end');
       }, TIMEOUT)
   })

   it('FMS_fuzzTest_0300_param_01_promise', 0, async function (done) {
       console.log("FMS_fuzzTest_0300_param_01_promise releaseForm begin");

       var formId = parameterValue();
       console.log("FMS_fuzzTest_0300_param_01_promise releaseForm formId typeof:"+ typeof(formId));

       var isReleaseCache = booleanTest();
       console.log("FMS_fuzzTest_0300_param_01_promise releaseForm isReleaseCache typeof:"+ typeof(isReleaseCache));

       var retResult;
       try{
           retResult = await Promise.all(await formManager.releaseForm(formId, isReleaseCache)); // formId: number>0 ok, isReleaseCache: boolean
           console.log("FMS_fuzzTest_0300_param_01_promise async::sucess retResult:" + retResult);
           expect(retResult).assertEqual(1);
           done();
       } catch (e) {
           console.log("FMS_fuzzTest_0300_param_01_promise Exception caught:" + e);
           expect(0).assertEqual(0);
       }

       console.log("FMS_fuzzTest_0300_param_01_promise releaseForm end");
       done();
       setTimeout(function () {
           console.info('=====================FMS_fuzzTest_0300_param_01_promise==================end');
       }, TIMEOUT)
   })

   it('FMS_fuzzTest_0300_param_02_callback', 0, async function (done) {
       console.log("FMS_fuzzTest_0300_param_02_callback releaseForm begin");

       var formId = stringTest();
       console.log("FMS_fuzzTest_0300_param_02_callback releaseForm formId typeof:"+ typeof(formId) + ",formId:" + formId);

       var isReleaseCache = parameterValue();
       console.log("FMS_fuzzTest_0300_param_02_callback releaseForm isReleaseCache typeof:"+ typeof(isReleaseCache));

       try{
           formManager.releaseForm(
               formId, // formId: number>0 ok
               isReleaseCache, // isReleaseCache: boolean ok
               (err,data) => {
                   console.log("FMS_fuzzTest_0300_param_02_callback async::callbak return!!!")
                   console.log("FMS_fuzzTest_0300_param_02_callback async::sucess data:" + data);
                   console.log("FMS_fuzzTest_0300_param_02_callback async::error err:" + err);
                   expect(err).assertEqual(1);
                   done();
               }

           );
       } catch (e) {
           console.log("FMS_fuzzTest_0300_param_02_callback Exception caught:" + e);
           expect(0).assertEqual(0);
       }

       console.log("FMS_fuzzTest_0300_param_02_callback releaseForm end");
       done();
       setTimeout(function () {
           console.info('=====================FMS_fuzzTest_0300_param_02_callback==================end');
       }, TIMEOUT)
   })

   it('FMS_fuzzTest_0300_param_02_promise', 0, async function (done) {
       console.log("FMS_fuzzTest_0300_param_02_promise releaseForm begin");

       var formId = stringTest();
       console.log("FMS_fuzzTest_0300_param_02_promise releaseForm formId typeof:"+ typeof(formId) + ",formId:" + formId);

       var isReleaseCache = parameterValue();
       console.log("FMS_fuzzTest_0300_param_02_promise releaseForm isReleaseCache typeof:"+ typeof(isReleaseCache));

       var retResult;
       try{
           retResult = await Promise.all(await formManager.releaseForm(formId, isReleaseCache));  // formId: number>0 ok, isReleaseCache: boolean
           console.log("FMS_fuzzTest_0300_param_02_promise async::sucess retResult:" + retResult);
           expect(retResult).assertEqual(1);
           done();
       } catch (e) {
           console.log("FMS_fuzzTest_0300_param_02_promise Exception caught:" + e);
           expect(0).assertEqual(0);
       }

       console.log("FMS_fuzzTest_0300_param_02_promise releaseForm end");
       done();
       setTimeout(function () {
           console.info('=====================FMS_fuzzTest_0300_param_02_promise==================end');
       }, TIMEOUT)
   })

   it('FMS_fuzzTest_0400_callback', 0, async function (done) {
       console.log("FMS_fuzzTest_0400_callback requestForm begin");

       var formId = parameterValue();
       console.log("FMS_fuzzTest_0400_callback requestForm formId typeof:"+ typeof(formId));

       try{
           formManager.requestForm(
               formId, // formId: number>0 ok
               (err,data) => {
                   console.log("FMS_fuzzTest_0400_callback async::callbak return!!!")
                   console.log("FMS_fuzzTest_0400_callback async::sucess data:" + data);
                   console.log("FMS_fuzzTest_0400_callback async::error err:" + err);
                   expect(err).assertEqual(1);
                   done();
               }
           );
       } catch (e) {
           console.log("FMS_fuzzTest_0400_callback Exception caught:" + e);
           expect(0).assertEqual(0);
       }

       console.log("FMS_fuzzTest_0400_callback requestForm end");
       done();
       setTimeout(function () {
           console.info('=====================FMS_fuzzTest_0400_callback==================end');
       }, TIMEOUT)
   })

   it('FMS_fuzzTest_0400_promise', 0, async function (done) {
       console.log("FMS_fuzzTest_0400_promise requestForm begin");

       var formId = parameterValue();
       console.log("FMS_fuzzTest_0400_promise requestForm formId typeof:"+ typeof(formId));

       var retResult;
       try{
           retResult = await Promise.all(await formManager.requestForm(formId));  // formId: number>0 ok
           console.log("FMS_fuzzTest_0400_promise async::sucess retResult:" + retResult);
           expect(retResult).assertEqual(1);
           done();
       } catch (e) {
           console.log("FMS_fuzzTest_0400_promise Exception caught:" + e);
           expect(0).assertEqual(0);
       }

       console.log("FMS_fuzzTest_0400_promise requestForm end");
       done();
       setTimeout(function () {
           console.info('=====================FMS_fuzzTest_0400_promise==================end');
       }, TIMEOUT)
   })
   it('FMS_fuzzTest_0500_param_01_callback', 0, async function (done) {
       console.log("FMS_fuzzTest_0500_param_01_callback setFormNextRefreshTime begin");

       var formId = parameterValue();
       console.log("FMS_fuzzTest_0500_param_01_callback setFormNextRefreshTime formId typeof:"+ typeof(formId));

       var refreshTime = numberTest();
       console.log("FMS_fuzzTest_0500_param_01_callback setFormNextRefreshTime refreshTime typeof:"+ typeof(refreshTime));

       try{
           formManager.setFormNextRefreshTime(
               formId, // formId: number>0 ok
               refreshTime, // time: number ok
               (err,data) => {
                   console.log("FMS_fuzzTest_0500_param_01_callback async::callbak return!!!")
                   console.log("FMS_fuzzTest_0500_param_01_callback async::sucess data:" + data);
                   console.log("FMS_fuzzTest_0500_param_01_callback async::error err:" + err);
                   expect(err).assertEqual(1);
                   done();
               }
           );
       } catch (e) {
           console.log("FMS_fuzzTest_0500_param_01_callback Exception caught:" + e);
           expect(0).assertEqual(0);
       }

       console.log("FMS_fuzzTest_0500_param_01_callback setFormNextRefreshTime end");
       done();
       setTimeout(function () {
           console.info('=====================FMS_fuzzTest_0500_param_01_callback==================end');
       }, TIMEOUT)
   })

   it('FMS_fuzzTest_0500_param_01_promise', 0, async function (done) {
       console.log("FMS_fuzzTest_0500_param_01_promise setFormNextRefreshTime begin");

       var formId = parameterValue();
       console.log("FMS_fuzzTest_0500_param_01_promise setFormNextRefreshTime formId typeof:"+ typeof(formId));

       var refreshTime = numberTest();
       console.log("FMS_fuzzTest_0500_param_01_promise setFormNextRefreshTime refreshTime typeof:"+ typeof(refreshTime));

       var retResult;
       try{
           retResult = await Promise.all(await formManager.setFormNextRefreshTime(formId, refreshTime));  // formId: number>0 ok, refreshTime: number ok
           console.log("FMS_fuzzTest_0500_param_01_promise async::sucess retResult:" + retResult);
           expect(retResult).assertEqual(1);
           done();
       } catch (e) {
           console.log("FMS_fuzzTest_0500_param_01_promise Exception caught:" + e);
           expect(0).assertEqual(0);
       }

       console.log("FMS_fuzzTest_0500_param_01_promise setFormNextRefreshTime end");
       done();
       setTimeout(function () {
           console.info('=====================FMS_fuzzTest_0500_param_01_promise==================end');
       }, TIMEOUT)
   })

   it('FMS_fuzzTest_0500_param_02_callback', 0, async function (done) {
       console.log("FMS_fuzzTest_0500_param_02_callback setFormNextRefreshTime begin");

       var formId = stringTest();
       console.log("FMS_fuzzTest_0500_param_02_callback setFormNextRefreshTime formId typeof:"+ typeof(formId));

       var refreshTime = parameterValue();
       console.log("FMS_fuzzTest_0500_param_02_callback setFormNextRefreshTime refreshTime typeof:"+ typeof(refreshTime));

       try{
           formManager.setFormNextRefreshTime(
               formId, // formId: number>0 ok
               refreshTime, // time: number ok
               (err,data) => {
                   console.log("FMS_fuzzTest_0500_param_02_callback async::callbak return!!!")
                   console.log("FMS_fuzzTest_0500_param_02_callback async::sucess data:" + data);
                   console.log("FMS_fuzzTest_0500_param_02_callback async::error err:" + err);
                   expect(err).assertEqual(1);
                   done();
               }
           );
       } catch (e) {
           console.log("FMS_fuzzTest_0500_param_02_callback Exception caught:" + e);
           expect(0).assertEqual(0);
       }

       console.log("FMS_fuzzTest_0500_param_02_callback setFormNextRefreshTime end");
       done();
       setTimeout(function () {
           console.info('=====================FMS_fuzzTest_0500_param_02_callback==================end');
       }, TIMEOUT)
   })

   it('FMS_fuzzTest_0500_param_02_promise', 0, async function (done) {
       console.log("FMS_fuzzTest_0500_param_02_promise setFormNextRefreshTime begin");

       var formId = parameterValue();
       console.log("FMS_fuzzTest_0500_param_02_promise setFormNextRefreshTime formId typeof:"+ typeof(formId));

       var refreshTime = numberTest();
       console.log("FMS_fuzzTest_0500_param_02_promise setFormNextRefreshTime refreshTime typeof:"+ typeof(refreshTime));

       var retResult;
       try{
           retResult = await Promise.all(await formManager.setFormNextRefreshTime(formId, refreshTime));  // formId: number>0 ok, refreshTime: number ok
           console.log("FMS_fuzzTest_0500_param_02_promise async::sucess retResult:" + retResult);
           expect(retResult).assertEqual(1);
           done();
       } catch (e) {
           console.log("FMS_fuzzTest_0500_param_02_promise Exception caught:" + e);
           expect(0).assertEqual(0);
       }

       console.log("FMS_fuzzTest_0500_param_02_promise setFormNextRefreshTime end");
       done();
       setTimeout(function () {
           console.info('=====================FMS_fuzzTest_0500_param_02_promise==================end');
       }, TIMEOUT)
   })

   it('FMS_fuzzTest_0600_param_01_callback', 0, async function (done) {
       console.log("FMS_fuzzTest_0600_param_01_callback updateForm begin");

       var formId = stringTest();
       console.log("FMS_fuzzTest_0600_param_01_callback updateForm formId typeof:"+ typeof(formId));

       var  formData = parameterValue();
       console.log("FMS_fuzzTest_0600_param_01_callback updateForm formData typeof:"+ typeof(formData));

       try{
           formManager.updateForm(
               formId, // formId: number>0 ok
               formData, //formData
               (err,data) => {
                   console.log("FMS_fuzzTest_0600_param_01_callback async::callbak return!!!")
                   console.log("FMS_fuzzTest_0600_param_01_callback async::sucess data:" + data);
                   console.log("FMS_fuzzTest_0600_param_01_callback async::error err:" + err);
                   expect(err).assertEqual(1);
                   done();
               }
           );
       } catch (e) {
           console.log("FMS_fuzzTest_0600_param_01_callback Exception caught:" + e);
           expect(0).assertEqual(0);
       }

       console.log("FMS_fuzzTest_0600_param_01_callback updateForm end");
       done();
       setTimeout(function () {
           console.info('=====================FMS_fuzzTest_0600_param_01_callback==================end');
       }, TIMEOUT)
   })

   it('FMS_fuzzTest_0600_param_01_promise', 0, async function (done) {
       console.log("FMS_fuzzTest_0600_param_01_promise updateForm begin");

       var formId = stringTest();
       console.log("FMS_fuzzTest_0600_param_01_promise updateForm formId typeof:"+ typeof(formId));

       var  formData = parameterValue();
       console.log("FMS_fuzzTest_0600_param_01_promise updateForm formData typeof:"+ typeof(formData));

       var retResult;
       try{
           retResult = await Promise.all(await formManager.updateForm(formId, formData));  // formId: number>0 ok, formData: json
           console.log("FMS_fuzzTest_0600_param_01_promise async::sucess retResult:" + retResult);
           expect(retResult).assertEqual(1);
           done();
       } catch (e) {
           console.log("FMS_fuzzTest_0600_param_01_promise Exception caught:" + e);
           expect(0).assertEqual(0);
       }

       console.log("FMS_fuzzTest_0600_param_01_promise updateForm end");
       done();
       setTimeout(function () {
           console.info('=====================FMS_fuzzTest_0600_param_01_promise==================end');
       }, TIMEOUT)
   })

   it('FMS_fuzzTest_0600_param_02_callback', 0, async function (done) {
       console.log("FMS_fuzzTest_0600_param_02_callback updateForm begin");

       var formId = parameterValue();
       console.log("FMS_fuzzTest_0600_param_02_callback updateForm formId typeof:"+ typeof(formId));

       var  formData = arrayTest();
       console.log("FMS_fuzzTest_0600_param_02_callback updateForm formData typeof:"+ typeof(formData));

       try{
           formManager.updateForm(
               formId, // formId: number>0 ok
               formData, //formData
               (err,data) => {
                   console.log("FMS_fuzzTest_0600_param_02_callback async::callbak return!!!")
                   console.log("FMS_fuzzTest_0600_param_02_callback async::sucess data:" + data);
                   console.log("FMS_fuzzTest_0600_param_02_callback async::error err:" + err);
                   expect(err).assertEqual(1);
                   done();
               }
           );
       } catch (e) {
           console.log("FMS_fuzzTest_0600_param_02_callback Exception caught:" + e);
           expect(0).assertEqual(0);
       }

       console.log("FMS_fuzzTest_0600_param_02_callback updateForm end");
       done();
       setTimeout(function () {
           console.info('=====================FMS_fuzzTest_0600_param_02_callback==================end');
       }, TIMEOUT)
   })

   it('FMS_fuzzTest_0600_param_02_promise', 0, async function (done) {
       console.log("FMS_fuzzTest_0600_param_02_promise updateForm begin");

       var formId = parameterValue();
       console.log("FMS_fuzzTest_0600_param_02_promise updateForm formId typeof:"+ typeof(formId));

       var  formData = arrayTest();
       console.log("FMS_fuzzTest_0600_param_02_promise updateForm formData typeof:"+ typeof(formData));

       var retResult;
       try{
           retResult = await Promise.all(await formManager.updateForm(formId, formData));  // formId: number>0 ok, formData: json arry
           console.log("FMS_fuzzTest_0600_param_02_promise async::sucess retResult:" + retResult);
           expect(retResult).assertEqual(1);
           done();
       } catch (e) {
           console.log("FMS_fuzzTest_0600_param_02_promise Exception caught:" + e);
           expect(0).assertEqual(0);
       }

       console.log("FMS_fuzzTest_0600_param_02_promise updateForm end");
       done();
       setTimeout(function () {
           console.info('=====================FMS_fuzzTest_0600_param_02_promise==================end');
       }, TIMEOUT)
   })

   it('FMS_fuzzTest_0700_callback', 0, async function (done) {
       console.log("FMS_fuzzTest_0700_callback castTempForm begin");

       var formId = parameterValue();
       console.log("FMS_fuzzTest_0700_callback castTempForm formId typeof:"+ typeof(formId));

       try{
           formManager.castTempForm(
               formId, // formId: number>0 ok
               (err,data) => {
                   console.log("FMS_fuzzTest_0700_callback async::callbak return!!!")
                   console.log("FMS_fuzzTest_0700_callback async::sucess data:" + data);
                   console.log("FMS_fuzzTest_0700_callback async::error err:" + err);
                   expect(err).assertEqual(1);
                   done();
               }
           );
       } catch (e) {
           console.log("FMS_fuzzTest_0700_callback Exception caught:" + e);
           expect(0).assertEqual(0);
       }

       console.log("FMS_fuzzTest_0700_callback castTempForm end");
       done();
       setTimeout(function () {
           console.info('=====================FMS_fuzzTest_0700_callback==================end');
       }, TIMEOUT)
   })

   it('FMS_fuzzTest_0700_promise', 0, async function (done) {
       console.log("FMS_fuzzTest_0700_promise castTempForm begin");

       var formId = parameterValue();
       console.log("FMS_fuzzTest_0700_promise castTempForm formId typeof:"+ typeof(formId));

       var retResult;
       try{
           retResult = await Promise.all(await formManager.castTempForm(formId));  // formId: number>0 ok
           console.log("FMS_fuzzTest_0700_promise async::sucess retResult:" + retResult);
           expect(retResult).assertEqual(1);
           done();
       } catch (e) {
           console.log("FMS_fuzzTest_0700_promise Exception caught:" + e);
           expect(0).assertEqual(0);
       }

       console.log("FMS_fuzzTest_0700_promise castTempForm end");
       done();
       setTimeout(function () {
           console.info('=====================FMS_fuzzTest_0700_promise==================end');
       }, TIMEOUT)
   })

   it('FMS_fuzzTest_0800_callback', 0, async function (done) {
       console.log("FMS_fuzzTest_0800_callback notifyVisibleForms begin");

       var formIds = parameterValue();
       console.log("FMS_fuzzTest_0800_callback notifyVisibleForms formIds typeof:"+ typeof(formIds));

       try{
           formManager.notifyVisibleForms(
               formIds, // formIds: array ok
               (err,data) => {
                   console.log("FMS_fuzzTest_0800_callback async::callbak return!!!")
                   console.log("FMS_fuzzTest_0800_callback async::sucess data:" + data);
                   console.log("FMS_fuzzTest_0800_callback async::error err:" + err);
                   expect(err).assertEqual(1);
                   done();
               }
           );
       } catch (e) {
           console.log("FMS_fuzzTest_0800_callback Exception caught:" + e);
           expect(0).assertEqual(0);
       }

       console.log("FMS_fuzzTest_0800_callback notifyVisibleForms end");
       done();
       setTimeout(function () {
           console.info('=====================FMS_fuzzTest_0800_callback==================end');
       }, TIMEOUT)
   })

   it('FMS_fuzzTest_0800_promise', 0, async function (done) {
       console.log("FMS_fuzzTest_0800_promise notifyVisibleForms begin");

       var formIds = parameterValue();
       console.log("FMS_fuzzTest_0800_promise notifyVisibleForms formIds typeof:"+ typeof(formIds));

       var retResult;
       try{
           retResult = await Promise.all(await formManager.notifyVisibleForms(formIds));  // formIds: array ok
           console.log("FMS_fuzzTest_0800_promise async::sucess retResult:" + retResult);
           expect(retResult).assertEqual(1);
           done();
       } catch (e) {
           console.log("FMS_fuzzTest_0800_promise Exception caught:" + e);
           expect(0).assertEqual(0);
       }

       console.log("FMS_fuzzTest_0800_promise notifyVisibleForms end");
       done();
       setTimeout(function () {
           console.info('=====================FMS_fuzzTest_0800_promise==================end');
       }, TIMEOUT)
   })

   it('FMS_fuzzTest_0900_callback', 0, async function (done) {
       console.log("FMS_fuzzTest_0900_callback notifyInvisibleForms begin");

       var formIds = parameterValue();
       console.log("FMS_fuzzTest_0900_callback notifyInvisibleForms formIds typeof:"+ typeof(formIds));

       try{
           formManager.notifyInvisibleForms(
               formIds, // formIds: array ok
               (err,data) => {
                   console.log("FMS_fuzzTest_0900_callback async::callbak return!!!")
                   console.log("FMS_fuzzTest_0900_callback async::sucess data:" + data);
                   console.log("FMS_fuzzTest_0900_callback async::error err:" + err);
                   expect(err).assertEqual(1);
                   done();
               }
           );
       } catch (e) {
           console.log("FMS_fuzzTest_0900_callback Exception caught:" + e);
           expect(0).assertEqual(0);
       }

       console.log("FMS_fuzzTest_0900_callback notifyInvisibleForms end");
       done();
       setTimeout(function () {
           console.info('=====================FMS_fuzzTest_0900_callback==================end');
       }, TIMEOUT)
   })

   it('FMS_fuzzTest_0900_promise', 0, async function (done) {
       console.log("FMS_fuzzTest_0900_promise notifyInvisibleForms begin");

       var formIds = parameterValue();
       console.log("FMS_fuzzTest_0900_promise notifyInvisibleForms formIds typeof:"+ typeof(formIds));

       var retResult;
       try{
           retResult = await Promise.all(await formManager.notifyInvisibleForms(formIds));  // formIds: array ok
           console.log("FMS_fuzzTest_0900_promise async::sucess retResult:" + retResult);
           expect(retResult).assertEqual(1);
           done();
       } catch (e) {
           console.log("FMS_fuzzTest_0900_promise Exception caught:" + e);
           expect(0).assertEqual(0);
       }

       console.log("FMS_fuzzTest_0900_promise notifyInvisibleForms end");
       done();
       setTimeout(function () {
           console.info('=====================FMS_fuzzTest_0900_promise==================end');
       }, TIMEOUT)
   })

   it('FMS_fuzzTest_1000_callback', 0, async function (done) {
       console.log("FMS_fuzzTest_1000_callback enableFormsUpdate begin");

       var formIds = parameterValue();
       console.log("FMS_fuzzTest_1000_callback enableFormsUpdate formIds typeof:"+ typeof(formIds));

       try{
           formManager.enableFormsUpdate(
               formIds, // formIds: array ok
               (err,data) => {
                   console.log("FMS_fuzzTest_1000_callback async::callbak return!!!")
                   console.log("FMS_fuzzTest_1000_callback async::sucess data:" + data);
                   console.log("FMS_fuzzTest_1000_callback async::error err:" + err);
                   expect(err).assertEqual(1);
                   done();
               }
           );
       } catch (e) {
           console.log("FMS_fuzzTest_1000_callback Exception caught:" + e);
           expect(0).assertEqual(0);
       }

       console.log("FMS_fuzzTest_1000_callback enableFormsUpdate end");
       done();
       setTimeout(function () {
           console.info('=====================FMS_fuzzTest_1000_callback==================end');
       }, TIMEOUT)
    }) 

   it('FMS_fuzzTest_1000_promise', 0, async function (done) {
       console.log("FMS_fuzzTest_1000_promise enableFormsUpdate begin");

       var formIds = parameterValue();
       console.log("FMS_fuzzTest_1000_promise enableFormsUpdate formIds typeof:"+ typeof(formIds));

       var retResult;
       try{
           retResult = await Promise.all(await formManager.enableFormsUpdate(formIds));  // formIds: array ok
           console.log("FMS_fuzzTest_1000_promise async::sucess retResult:" + retResult);
           expect(retResult).assertEqual(1);
           done();
       } catch (e) {
           console.log("FMS_fuzzTest_1000_promise Exception caught:" + e);
           expect(0).assertEqual(0);
       }

       console.log("FMS_fuzzTest_1000_promise enableFormsUpdate end");
       done();
       setTimeout(function () {
           console.info('=====================FMS_fuzzTest_1000_promise==================end');
       }, TIMEOUT)
   })

   it('FMS_fuzzTest_1100_callback', 0, async function (done) {
       console.log("FMS_fuzzTest_1100_callback disableFormsUpdate begin");

       var formIds = parameterValue();
       console.log("FMS_fuzzTest_1100_callback disableFormsUpdate formIds typeof:"+ typeof(formIds));

       try{
           formManager.disableFormsUpdate(
               formIds, // formIds: array ok
               (err,data) => {
                   console.log("FMS_fuzzTest_1100_callback async::callbak return!!!")
                   console.log("FMS_fuzzTest_1100_callback async::sucess data:" + data);
                   console.log("FMS_fuzzTest_1100_callback async::error err:" + err);
                   expect(err).assertEqual(1);
                   done();
               }
           );
       } catch (e) {
           console.log("FMS_fuzzTest_1100_callback Exception caught:" + e);
           expect(0).assertEqual(0);
       }

       console.log("FMS_fuzzTest_1100_callback disableFormsUpdate end");
       done();
       setTimeout(function () {
           console.info('=====================FMS_fuzzTest_1100_callback==================end');
       }, TIMEOUT)
   })

   it('FMS_fuzzTest_1100_promise', 0, async function (done) {
       console.log("FMS_fuzzTest_1100_promise disableFormsUpdate begin");

       var formIds = parameterValue();
       console.log("FMS_fuzzTest_1100_promise disableFormsUpdate formIds typeof:"+ typeof(formIds));

       var retResult;
       try{
           retResult = await Promise.all(await formManager.disableFormsUpdate(formIds));  // formIds: array ok
           console.log("FMS_fuzzTest_1100_promise async::sucess retResult:" + retResult);
           expect(retResult).assertEqual(1);
           done();
       } catch (e) {
           console.log("FMS_fuzzTest_1100_promise Exception caught:" + e);
           expect(0).assertEqual(0);
       }

       console.log("FMS_fuzzTest_1100_promise disableFormsUpdate end");
       done();
       setTimeout(function () {
           console.info('=====================FMS_fuzzTest_1100_promise==================end');
       }, TIMEOUT)
   })

    it('FMS_fuzzTest_1200_callback', 0, async function (done) {
        console.log("FMS_fuzzTest_1200_callback getFormsInfoByApp begin");

        var bundleName = parameterValue();
        console.log("FMS_fuzzTest_1200_callback getFormsInfoByApp bundleName typeof:"+ typeof(bundleName));

        try{
            formManager.getFormsInfo(
                bundleName, // bundleName string
                (err,data) => {
                    console.log("FMS_fuzzTest_1200_callback async::callbak return!!!")
                    console.log("FMS_fuzzTest_1200_callback async::sucess data:" + data);
                    console.log("FMS_fuzzTest_1200_callback async::error err:" + err);
                    expect(err).assertEqual(1);
                    done();
                }
            );
        } catch (e) {
            console.log("FMS_fuzzTest_1200_callback Exception caught:" + e);
            expect(0).assertEqual(0);
        }

        console.log("FMS_fuzzTest_1200_callback getFormsInfoByApp end");
        done();
        setTimeout(function () {
            console.info('=====================FMS_fuzzTest_1200_callback==================end');
        }, TIMEOUT)
    })

    it('FMS_fuzzTest_1200_promise', 0, async function (done) {
        console.log("FMS_fuzzTest_1200_promise getFormsInfoByApp begin");

        var bundleName = parameterValue();
        console.log("FMS_fuzzTest_1200_promise getFormsInfoByApp bundleName typeof:"+ typeof(bundleName));

        var retResult;
        try{
            retResult = await Promise.all(await formManager.getFormsInfo(bundleName));
            console.log("FMS_fuzzTest_1200_promise async::sucess retResult:" + retResult);
            expect(retResult).assertEqual(1);
            done();
        } catch (e) {
            console.log("FMS_fuzzTest_1200_promise Exception caught:" + e);
            expect(0).assertEqual(0);
        }

        console.log("FMS_fuzzTest_1200_promise getFormsInfoByApp end");
        done();
        setTimeout(function () {
            console.info('=====================FMS_fuzzTest_1200_promise==================end');
        }, TIMEOUT)
    })

    it('FMS_fuzzTest_1300_param_01_callback', 0, async function (done) {
        console.log("FMS_fuzzTest_1300_param_01_callback getFormsInfoByModule begin");

        var bundleName = parameterValue();
        console.log("FMS_fuzzTest_1300_param_01_callback getFormsInfoByModule bundleName typeof:"+ typeof(bundleName));

        var moduleName = stringTest();
        console.log("FMS_fuzzTest_1300_param_01_callback getFormsInfoByModule moduleName typeof:"+ typeof(moduleName));

        try{
            formManager.getFormsInfo(
                bundleName, // bundleName string
                moduleName,// moduleName string
                (err,data) => {
                    console.log("FMS_fuzzTest_1300_param_01_callback async::callbak return!!!")
                    console.log("FMS_fuzzTest_1300_param_01_callback async::sucess data:" + data);
                    console.log("FMS_fuzzTest_1300_param_01_callback async::error err:" + err);
                    expect(err).assertEqual(1);
                    done();
                }
            );
        } catch (e) {
            console.log("FMS_fuzzTest_1300_param_01_callback Exception caught:" + e);
            expect(0).assertEqual(0);
        }

        console.log("FMS_fuzzTest_1300_param_01_callback getFormsInfoByModule end");
        done();
        setTimeout(function () {
            console.info('=====================FMS_fuzzTest_1300_param_01_callback==================end');
        }, TIMEOUT)
    })

    it('FMS_fuzzTest_1300_param_01_promise', 0, async function (done) {
        console.log("FMS_fuzzTest_1300_param_01_promise getFormsInfoByModule begin");

        var bundleName = parameterValue();
        console.log("FMS_fuzzTest_1300_param_01_promise getFormsInfoByModule bundleName typeof:"+ typeof(bundleName));

        var moduleName = stringTest();
        console.log("FMS_fuzzTest_1300_param_01_promise getFormsInfoByModule moduleName typeof:"+ typeof(moduleName));

        var retResult;
        try{
            retResult = await Promise.all(await formManager.getFormsInfo(bundleName, moduleName));
            console.log("FMS_fuzzTest_1300_param_01_promise async::sucess retResult:" + retResult);
            expect(retResult).assertEqual(1);
            done();
        } catch (e) {
            console.log("FMS_fuzzTest_1300_param_01_promise Exception caught:" + e);
            expect(0).assertEqual(0);
        }

        console.log("FMS_fuzzTest_1300_param_01_promise getFormsInfoByModule end");
        done();
        setTimeout(function () {
            console.info('=====================FMS_fuzzTest_1300_param_01_promise==================end');
        }, TIMEOUT)
    })

    it('FMS_fuzzTest_1300_param_02_callback', 0, async function (done) {
        console.log("FMS_fuzzTest_1300_param_02_callback getFormsInfoByModule begin");

        var bundleName = stringTest();
        console.log("FMS_fuzzTest_1300_param_02_callback getFormsInfoByModule bundleName typeof:"+ typeof(bundleName));

        var moduleName = parameterValue();
        console.log("FMS_fuzzTest_1300_param_02_callback getFormsInfoByModule moduleName typeof:"+ typeof(moduleName));

        try{
            formManager.getFormsInfo(
                bundleName, // bundleName string
                moduleName,// moduleName string
                (err,data) => {
                    console.log("FMS_fuzzTest_1300_param_02_callback async::callbak return!!!")
                    console.log("FMS_fuzzTest_1300_param_02_callback async::sucess data:" + data);
                    console.log("FMS_fuzzTest_1300_param_02_callback async::error err:" + err);
                    expect(err).assertEqual(1);
                    done();
                }
            );
        } catch (e) {
            console.log("FMS_fuzzTest_1300_param_02_callback Exception caught:" + e);
            expect(0).assertEqual(0);
        }

        console.log("FMS_fuzzTest_1300_param_02_callback getFormsInfoByModule end");
        done();
        setTimeout(function () {
            console.info('=====================FMS_fuzzTest_1300_param_02_callback==================end');
        }, TIMEOUT)
    })

    it('FMS_fuzzTest_1300_param_02_promise', 0, async function (done) {
        console.log("FMS_fuzzTest_1300_param_02_promise getFormsInfoByModule begin");

        var bundleName = stringTest();
        console.log("FMS_fuzzTest_1300_param_02_promise getFormsInfoByModule bundleName typeof:"+ typeof(bundleName));

        var moduleName = parameterValue();
        console.log("FMS_fuzzTest_1300_param_02_promise getFormsInfoByModule moduleName typeof:"+ typeof(moduleName));

        var retResult;
        try{
            retResult = await Promise.all(await formManager.getFormsInfo(bundleName, moduleName));
            console.log("FMS_fuzzTest_1300_param_02_promise async::sucess retResult:" + retResult);
            expect(retResult).assertEqual(1);
            done();
        } catch (e) {
            console.log("FMS_fuzzTest_1300_param_02_promise Exception caught:" + e);
            expect(0).assertEqual(0);
        }

        console.log("FMS_fuzzTest_1300_param_02_promise getFormsInfoByModule end");
        done();
        setTimeout(function () {
            console.info('=====================FMS_fuzzTest_1300_param_02_promise==================end');
        }, TIMEOUT)
    })

    it('FMS_fuzzTest_1400_callback', 0, async function (done) {
        console.log("FMS_fuzzTest_1400_callback checkFMSReady begin");

        var testParam = parameterValue();
        console.log("FMS_fuzzTest_1400_callback checkFMSReady formIds typeof:"+ typeof(testParam));

        try{
            formManager.isSystemReady(
                testParam, // null
                (err,data) => {
                    console.log("FMS_fuzzTest_1400_callback async::callbak return!!!")
                    console.log("FMS_fuzzTest_1400_callback async::sucess data:" + data);
                    console.log("FMS_fuzzTest_1400_callback async::error err:" + err);
                    expect(err).assertEqual(1);
                    done();
                }
            );
        } catch (e) {
            console.log("FMS_fuzzTest_1400_callback Exception caught:" + e);
            expect(0).assertEqual(0);
        }

        console.log("FMS_fuzzTest_1400_callback checkFMSReady end");
        done();
        setTimeout(function () {
            console.info('=====================FMS_fuzzTest_1400_callback==================end');
        }, TIMEOUT)
    })

    it('FMS_fuzzTest_1400_promise', 0, async function (done) {
        console.log("FMS_fuzzTest_1400_promise checkFMSReady begin");

        var testParam = parameterValue();
        console.log("FMS_fuzzTest_1400_promise checkFMSReady formIds typeof:"+ typeof(testParam));

        var retResult;
        try{
            retResult = await Promise.all(await formManager.isSystemReady(testParam));
            console.log("FMS_fuzzTest_1400_promise async::sucess retResult:" + retResult);
            expect(retResult).assertEqual(1);
            done();
        } catch (e) {
            console.log("FMS_fuzzTest_1400_promise Exception caught:" + e);
            expect(0).assertEqual(0);
        }

        console.log("FMS_fuzzTest_1400_promise checkFMSReady end");
        done();
        setTimeout(function () {
            console.info('=====================FMS_fuzzTest_1400_promise==================end');
        }, TIMEOUT)
    })

    it('FMS_fuzzTest_1500_callback', 0, async function (done) {
        console.log("FMS_fuzzTest_1500_callback getAllFormsInfo begin");

        var testParam = parameterValue();
        console.log("FMS_fuzzTest_1500_callback getAllFormsInfo formIds typeof:"+ typeof(testParam));

        try{
            formManager.getAllFormsInfo(
                testParam, // formIds: array ok
                (err,data) => {
                    console.log("FMS_fuzzTest_1500_callback async::callbak return!!!")
                    console.log("FMS_fuzzTest_1500_callback async::sucess data:" + data);
                    console.log("FMS_fuzzTest_1500_callback async::error err:" + err);
                    expect(err).assertEqual(1);
                    done();
                }
            );
        } catch (e) {
            console.log("FMS_fuzzTest_1500_callback Exception caught:" + e);
            expect(0).assertEqual(0);
        }

        console.log("FMS_fuzzTest_1500_callback getAllFormsInfo end");
        done();
        setTimeout(function () {
            console.info('=====================FMS_fuzzTest_1500_callback==================end');
        }, TIMEOUT)
    })

    it('FMS_fuzzTest_1500_promise', 0, async function (done) {
        console.log("FMS_fuzzTest_1500_promise getAllFormsInfo begin");

        var testParam = parameterValue();
        console.log("FMS_fuzzTest_1500_promise getAllFormsInfo formIds typeof:"+ typeof(testParam));

        var retResult;
        try{
            retResult = await Promise.all(await formManager.getAllFormsInfo(testParam));
            console.log("FMS_fuzzTest_1500_promise async::sucess retResult:" + retResult);
            expect(retResult).assertEqual(1);
            done();
        } catch (e) {
            console.log("FMS_fuzzTest_1500_promise Exception caught:" + e);
            expect(0).assertEqual(0);
        }

        console.log("FMS_fuzzTest_1500_promise getAllFormsInfo end");
        done();
        setTimeout(function () {
            console.info('=====================FMS_fuzzTest_1500_promise==================end');
        }, TIMEOUT)
    })
})