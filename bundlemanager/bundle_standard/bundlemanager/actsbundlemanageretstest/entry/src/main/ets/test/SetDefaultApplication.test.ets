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
 import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit'
 import defaultAppMgr from '@ohos.bundle.defaultAppManager'

 let userId: number = 100;
 const INVALID_CODE: number = 1;
 const EXECUTE_ERROR: number = 2;
 const ERR_USERID: number = 200;
 
 export default function setDefaultApplication() {
 
     describe('setDefaultApplication_test', function () {

        beforeAll(async function (done) {
            await account.getAccountManager().getOsAccountLocalIdFromProcess().then(account => {
                console.info("getOsAccountLocalIdFromProcess userid  ==========" + account);
                userId = account;
                done();
            }).catch(err => {
                console.info("getOsAccountLocalIdFromProcess err ==========" + JSON.stringify(err));
                done();
            })
        });
        /*
        * @tc.number: isDefaultApplication_test_0100
        * @tc.name: Set the IMAGE default application, query, and return true
        * @tc.desc: Check the return value of the interface (by promise)
        */
        it('isDefaultApplication_test_0100', 0, async function (done) {
            await defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.IMAGE, {
                bundleName: "com.open.harmony.packagemag",
                moduleName: "entry",
                abilityName: "IMAGE"
            })
            const data = await defaultAppMgr.isDefaultApplication(defaultAppMgr.ApplicationType.IMAGE)
            console.info('isDefaultApplication_test_0100_success' + JSON.stringify(data))
            expect(data).assertTrue()
            done()
        });

         /*
          * @tc.number: isDefaultApplication_test_0200
          * @tc.name: Set the image/png default application, query, and return true
          * @tc.desc: Check the return value of the interface (by promise)
          */
         it('isDefaultApplication_test_0200', 0, async function (done) {
            await defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.IMAGE, {})
            console.info('setDefaultApplication_test_0200_first_success')
            await defaultAppMgr.setDefaultApplication("image/png", {
                bundleName: "com.open.harmony.packagemag",
                moduleName: "entry",
                abilityName: "ImagePng"
            })
            const data = await defaultAppMgr.isDefaultApplication("image/png")
            console.info('isDefaultApplication_test_0200_success' + JSON.stringify(data))
            expect(data).assertTrue()
            done()
        });

        /*
        * @tc.number: setDefaultApplication_test_0100
        * @tc.name: Set the default application of video without userid.
                    The setting is successful
        * @tc.desc: Check the return value of the interface (by promise)
        */
        it('setDefaultApplication_test_0100', 0, async function (done) {
            await defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.VIDEO, {
                bundleName: "com.test.defaultApp",
                moduleName: "module01",
                abilityName: "VIDEO"
            })
            const data = await defaultAppMgr.getDefaultApplication(defaultAppMgr.ApplicationType.VIDEO)
            console.info('setDefaultApplication_test_0100_success' + JSON.stringify(data))
            expect(data.abilityInfos.length).assertEqual(1)
            expect(data.abilityInfos[0].name).assertEqual("VIDEO")
            done()
        });

         /*
          * @tc.number: setDefaultApplication_test_0200
          * @tc.name: Set the default application of video with userid.
                      The setting is successful
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('setDefaultApplication_test_0200', 0, async function (done) {
          console.info('setDefaultApplication_test_0200_success_userId' + JSON.stringify(userId))
            await defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.VIDEO, {})
            const res = await defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.VIDEO, {
                bundleName: "com.test.defaultApp",
                moduleName: "module01",
                abilityName: "VIDEO"
            }, userId)
            const data = await defaultAppMgr.getDefaultApplication(defaultAppMgr.ApplicationType.VIDEO)
            console.info('setDefaultApplication_test_0200_success' + JSON.stringify(data))
            expect(data.abilityInfos.length).assertEqual(1)
            expect(data.abilityInfos[0].name).assertEqual("VIDEO")
            done()
        });

         /*
          * @tc.number: setDefaultApplication_test_0300
          * @tc.name: Set the videomp4 default application without userid.
                      The setting is successful
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('setDefaultApplication_test_0300', 0, async function (done) {
            await defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.VIDEO, {})
            await defaultAppMgr.setDefaultApplication("video/mp4", {
                bundleName: "com.test.defaultApp",
                moduleName: "module01",
                abilityName: "VideoMp4"
              })
            const data = await defaultAppMgr.getDefaultApplication("video/mp4")
            console.info('setDefaultApplication_test_0300_success' + JSON.stringify(data))
            expect(data.abilityInfos.length).assertEqual(1)
            expect(data.abilityInfos[0].name).assertEqual("VideoMp4")
            done()
        });

         /*
          * @tc.number: setDefaultApplication_test_0400
          * @tc.name: setDefaultApplication : Set the default application of video to null.
                      The setting is successful and no information can be found
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('setDefaultApplication_test_0400', 0, async function (done) {
            await defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.VIDEO, {})
            defaultAppMgr.getDefaultApplication(defaultAppMgr.ApplicationType.VIDEO).catch(err => {
                console.info('setDefaultApplication_test_0400_success' + JSON.stringify(err))
                expect(err).assertEqual(EXECUTE_ERROR)
                done()
            })
        });

         /*
          * @tc.number: setDefaultApplication_test_0500
          * @tc.name: setDefaultApplication : Missing bundleName, return 1
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('setDefaultApplication_test_0500', 0, async function (done) {
            defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.VIDEO, {
                moduleName: "module01",
                abilityName: "VIDEO"
            }).catch(err => {
                console.info('setDefaultApplication_test_0500_success' + JSON.stringify(err))
                expect(err).assertEqual(EXECUTE_ERROR)
                done()
            })
        });

         /*
          * @tc.number: setDefaultApplication_test_0600
          * @tc.name: setDefaultApplication : Missing moduleName, return 1
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('setDefaultApplication_test_0600', 0, async function (done) {
            defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.VIDEO, {
                bundleName: "com.test.defaultApp",
                abilityName: "VIDEO"
            }).catch(err => {
                console.info('setDefaultApplication_test_0600_success' + JSON.stringify(err))
                expect(err).assertEqual(EXECUTE_ERROR)
                done()
            })
        });

         /*
          * @tc.number: setDefaultApplication_test_0700
          * @tc.name: setDefaultApplication : Missing abilityname, return 1
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('setDefaultApplication_test_0700', 0, async function (done) {
            defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.VIDEO, {
                bundleName: "com.test.defaultApp",
                moduleName: "module01"
            }).catch(err => {
                console.info('setDefaultApplication_test_0700_success' + JSON.stringify(err))
                expect(err).assertEqual(EXECUTE_ERROR)
                done()
            })
        });

         /*
          * @tc.number: setDefaultApplication_test_0800
          * @tc.name: setDefaultApplication : Wrong parameter type
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('setDefaultApplication_test_0800', 0, async function (done) {
            defaultAppMgr.setDefaultApplication(undefined).catch(err => {
                console.info('setDefaultApplication_test_0800_success' + JSON.stringify(err))
                expect(err).assertEqual(INVALID_CODE)
                done()
            })
        });

         /*
          * @tc.number: setDefaultApplication_test_0900
          * @tc.name: setDefaultApplication : Incorrect type format, returned 1
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('setDefaultApplication_test_0900', 0, async function (done) {
            defaultAppMgr.setDefaultApplication("abc", {
                bundleName: "com.test.defaultApp",
                moduleName: "module01",
                abilityName: "VIDEO"
            }).catch(err => {
                console.info('setDefaultApplication_test_0900_success' + JSON.stringify(err))
                expect(err).assertEqual(EXECUTE_ERROR)
                done()
            })
        });

         /*
          * @tc.number: setDefaultApplication_test_1000
          * @tc.name: setDefaultApplication : Wrong userid passed in
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('setDefaultApplication_test_1000', 0, async function (done) {
            defaultAppMgr.setDefaultApplication("image/png", {
            bundleName: "com.test.defaultApp",
            moduleName: "module01",
            abilityName: "ImagePng"
            }, ERR_USERID).catch(err => {
                console.info('setDefaultApplication_test_1000_success' + JSON.stringify(err))
                expect(err).assertEqual(EXECUTE_ERROR)
                done()
            })
        });

        /*
          * @tc.number: setDefaultApplication_test_1100
          * @tc.name: setDefaultApplication : Set nonexistent ability
          * @tc.desc: Check the return value of the interface (by promise)
          */
         it('setDefaultApplication_test_1100', 0, async function (done) {
            defaultAppMgr.setDefaultApplication("image/png", {
                bundleName: "com.test.none",
                moduleName: "none",
                abilityName: "none"
            }).catch(err => {
                console.info('setDefaultApplication_test_1100_success' + JSON.stringify(err))
                expect(err).assertEqual(EXECUTE_ERROR)
                done()
            })
        });

         /*
          * @tc.number: getDefaultApplication_test_0100
          * @tc.name: Set the video default application
                      to obtain the default application information
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('getDefaultApplication_test_0100', 0, async function (done) {
            await defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.VIDEO, {
              bundleName: "com.test.defaultApp",
              moduleName: "module01",
              abilityName: "VIDEO"
            })
            console.info('getDefaultApplication_test_0100_success_first')
            const data = await defaultAppMgr.getDefaultApplication(defaultAppMgr.ApplicationType.VIDEO, userId)
            console.info('getDefaultApplication_test_0100_success' + JSON.stringify(data))
            expect(data.abilityInfos.length).assertEqual(1)
            expect(data.abilityInfos[0].name).assertEqual("VIDEO")
            done()
        });

         /*
          * @tc.number: getDefaultApplication_test_0200
          * @tc.name: Set the video default application
                      to obtain the default application information
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('getDefaultApplication_test_0200', 0, async function (done) {
            await defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.VIDEO, {
                bundleName: "com.test.defaultApp",
                moduleName: "module01",
                abilityName: "VIDEO"
            })
            const data = await defaultAppMgr.getDefaultApplication(defaultAppMgr.ApplicationType.VIDEO)
            console.info('getDefaultApplication_test_0200_success' + JSON.stringify(data))
            expect(data.abilityInfos.length).assertEqual(1)
            expect(data.abilityInfos[0].name).assertEqual("VIDEO")
            done()
        });

         /*
          * @tc.number: getDefaultApplication_test_0300
          * @tc.name: setDefaultApplication : Wrong parameter type
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('getDefaultApplication_test_0300', 0, async function (done) {
            defaultAppMgr.getDefaultApplication(undefined).catch(err => {
                console.info('getDefaultApplication_test_0300_success' + JSON.stringify(err))
                expect(err).assertEqual(INVALID_CODE)
                done()
            })
        });

         /*
          * @tc.number: getDefaultApplication_test_0400
          * @tc.name: setDefaultApplication : Type format is incorrect
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('getDefaultApplication_test_0400', 0, async function (done) {
            defaultAppMgr.getDefaultApplication("abc").catch(err => {
                console.info('getDefaultApplication_test_0400_success' + JSON.stringify(err))
                expect(err).assertEqual(EXECUTE_ERROR)
                done()
            })
        });

         /*
          * @tc.number: getDefaultApplication_test_0500
          * @tc.name: setDefaultApplication : Type format is incorrect
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('getDefaultApplication_test_0500', 0, async function (done) {
            defaultAppMgr.getDefaultApplication("*/*").catch(err => {
                console.info('getDefaultApplication_test_0500_success' + JSON.stringify(err))
                expect(err).assertEqual(EXECUTE_ERROR)
                done()
            })
        });

         /*
          * @tc.number: getDefaultApplication_test_0600
          * @tc.name: setDefaultApplication : Type format is incorrect
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('getDefaultApplication_test_0600', 0, async function (done) {
            defaultAppMgr.getDefaultApplication("image/*").catch(err => {
                console.info('getDefaultApplication_test_0600_success' + JSON.stringify(err))
                expect(err).assertEqual(EXECUTE_ERROR)
                done()
            })
        });

         /*
          * @tc.number: getDefaultApplication_test_0700
          * @tc.name: setDefaultApplication : Type format is incorrect
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('getDefaultApplication_test_0700', 0, async function (done) {
            defaultAppMgr.getDefaultApplication("*/png").catch(err => {
                console.info('getDefaultApplication_test_0700_success' + JSON.stringify(err))
                expect(err).assertEqual(EXECUTE_ERROR)
                done()
            })
        });

         /*
          * @tc.number: getDefaultApplication_test_0800
          * @tc.name: setDefaultApplication : Wrong userid passed in
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('getDefaultApplication_test_0800', 0, async function (done) {
            await defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.VIDEO, {
                bundleName: "com.test.defaultApp",
                moduleName: "module01",
                abilityName: "VIDEO"
            })
            defaultAppMgr.getDefaultApplication(defaultAppMgr.ApplicationType.VIDEO, ERR_USERID).catch(err => {
                console.info('getDefaultApplication_test_0800_success' + JSON.stringify(err))
                expect(err).assertEqual(EXECUTE_ERROR)
                done()
            })
        });

         /*
          * @tc.number: getDefaultApplication_test_0900
          * @tc.name: setDefaultApplication : Get a default app that has not been set
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('getDefaultApplication_test_0900', 0, async function (done) {
            defaultAppMgr.getDefaultApplication("universe/mars").catch(err => {
                console.info('getDefaultApplication_test_0900_success' + JSON.stringify(err))
                expect(err).assertEqual(EXECUTE_ERROR)
                done()
            })
        });

         /*
          * @tc.number: getDefaultApplication_test_1000
          * @tc.name: Set the default application of video, set the default application of video/mp4,
                      and query video/mp4
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('getDefaultApplication_test_1000', 0, async function (done) {
            console.info('getDefaultApplication_test_1000_success_zero')
            await defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.VIDEO, {
                bundleName: "com.test.defaultApp",
                moduleName: "module01",
                abilityName: "VIDEO"
            })
            console.info('getDefaultApplication_test_1000_success_first')
            await defaultAppMgr.setDefaultApplication("video/mp4", {
                bundleName: "com.test.defaultApp",
                moduleName: "module01",
                abilityName: "VideoMp4"
            })
            const data = await defaultAppMgr.getDefaultApplication(defaultAppMgr.ApplicationType.VIDEO)
            console.info('getDefaultApplication_test_1000_success' + JSON.stringify(data))
            expect(data.abilityInfos.length).assertEqual(1)
            expect(data.abilityInfos[0].name).assertEqual("VIDEO")
            done()
        });

         /*
          * @tc.number: resetDefaultApplication_test_0100
          * @tc.name: Reset the default application of video, with userid,
                      and the query is empty
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('resetDefaultApplication_test_0100', 0, async function (done) {
            await defaultAppMgr.resetDefaultApplication(defaultAppMgr.ApplicationType.VIDEO, userId)
            defaultAppMgr.getDefaultApplication(defaultAppMgr.ApplicationType.VIDEO).catch(err => {
                console.info('resetDefaultApplication_test_0100_success' + JSON.stringify(err))
                expect(err).assertEqual(EXECUTE_ERROR)
                done()
            })
        });

         /*
          * @tc.number: resetDefaultApplication_test_0200
          * @tc.name: Reset the default application of video without userid,
                      and the query is empty
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('resetDefaultApplication_test_0200', 0, async function (done) {
            await defaultAppMgr.resetDefaultApplication(defaultAppMgr.ApplicationType.VIDEO)
            defaultAppMgr.getDefaultApplication(defaultAppMgr.ApplicationType.VIDEO).catch(err => {
                console.info('resetDefaultApplication_test_0200_success' + JSON.stringify(err))
                expect(err).assertEqual(EXECUTE_ERROR)
                done()
            })
        });

         /*
          * @tc.number: resetDefaultApplication_test_0300
          * @tc.name: Reset video/mp4 without userid and the query is empty
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('resetDefaultApplication_test_0300', 0, async function (done) {
            await defaultAppMgr.resetDefaultApplication("video/mp4")
            defaultAppMgr.getDefaultApplication("video/mp4").catch(err => {
                console.info('resetDefaultApplication_test_0300_success' + JSON.stringify(err))
                expect(err).assertEqual(EXECUTE_ERROR)
                done()
            })
        });

         /*
          * @tc.number: resetDefaultApplication_test_0400
          * @tc.name: resetDefaultApplication : Wrong parameter type
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('resetDefaultApplication_test_0400', 0, async function (done) {
            defaultAppMgr.resetDefaultApplication(undefined).catch(err => {
                console.info('resetDefaultApplication_test_0400_success' + JSON.stringify(err))
                expect(err).assertEqual(INVALID_CODE)
                done()
            })
        });

         /*
          * @tc.number: resetDefaultApplication_test_0500
          * @tc.name: resetDefaultApplication : Incorrect type format
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('resetDefaultApplication_test_0500', 0, async function (done) {
            defaultAppMgr.resetDefaultApplication("abc").catch(err => {
                console.info('resetDefaultApplication_test_0500_success' + JSON.stringify(err))
                expect(err).assertEqual(EXECUTE_ERROR)
                done()
            })
        });

         /*
          * @tc.number: resetDefaultApplication_test_0600
          * @tc.name: resetDefaultApplication : Wrong userid passed in
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('resetDefaultApplication_test_0600', 0, async function (done) {
            defaultAppMgr.resetDefaultApplication("image/png", ERR_USERID).catch(err => {
                console.info('resetDefaultApplication_test_0600_success' + JSON.stringify(err))
                expect(err).assertEqual(EXECUTE_ERROR)
                done()
            })
        });

         /*
          * @tc.number: setDefaultApplication_right_0100
          * @tc.name: setDefaultApplication : Set browser default application
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('setDefaultApplication_right_0100', 0, async function (done) {
            const data = await defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.BROWSER, {
                bundleName: "com.test.defaultApp",
                moduleName: "module01",
                abilityName: "BROWSER"
            })
            console.info('setDefaultApplication_right_0100_success' + JSON.stringify(data))
            done()
        });

         /*
          * @tc.number: setDefaultApplication_right_0200
          * @tc.name: setDefaultApplication : Set IMAGE default application
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('setDefaultApplication_right_0200', 0, async function (done) {
            const data = await defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.IMAGE, {
                bundleName: "com.test.defaultApp",
                moduleName: "module01",
                abilityName: "IMAGE"
            })
            console.info('setDefaultApplication_right_0200_success' + JSON.stringify(data))
            done()
        });

         /*
          * @tc.number: setDefaultApplication_right_0300
          * @tc.name: setDefaultApplication : Set AUDIO default application
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('setDefaultApplication_right_0300', 0, async function (done) {
            const data = await defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.AUDIO, {
                bundleName: "com.test.defaultApp",
                moduleName: "module01",
                abilityName: "AUDIO"
            })
            console.info('setDefaultApplication_right_0300_success' + JSON.stringify(data))
            done()
        });

         /*
          * @tc.number: setDefaultApplication_right_0400
          * @tc.name: setDefaultApplication : Set VIDEO default application
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('setDefaultApplication_right_0400', 0, async function (done) {
            const data = await defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.VIDEO, {
                bundleName: "com.test.defaultApp",
                moduleName: "module01",
                abilityName: "VIDEO"
            })
            console.info('setDefaultApplication_right_0400_success' + JSON.stringify(data))
            done()
        });

         /*
          * @tc.number: setDefaultApplication_right_0500
          * @tc.name: setDefaultApplication : Set PDF default application
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('setDefaultApplication_right_0500', 0, async function (done) {
            const data = await defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.PDF, {
                bundleName: "com.test.defaultApp",
                moduleName: "module01",
                abilityName: "PDF"
            })
            console.info('setDefaultApplication_right_0500_success' + JSON.stringify(data))
            done()
        });

         /*
          * @tc.number: setDefaultApplication_right_0600
          * @tc.name: setDefaultApplication : Set WORD default application
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('setDefaultApplication_right_0600', 0, async function (done) {
            const data = await defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.WORD, {
                bundleName: "com.test.defaultApp",
                moduleName: "module01",
                abilityName: "WORD"
            })
            console.info('setDefaultApplication_right_0600_success' + JSON.stringify(data))
            done()
        });

         /*
          * @tc.number: setDefaultApplication_right_0700
          * @tc.name: setDefaultApplication : Set EXCEL default application
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('setDefaultApplication_right_0700', 0, async function (done) {
            const data = await defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.EXCEL, {
                bundleName: "com.test.defaultApp",
                moduleName: "module01",
                abilityName: "EXCEL"
            })
            console.info('setDefaultApplication_right_0700_success' + JSON.stringify(data))
            done()
        });

         /*
          * @tc.number: setDefaultApplication_right_0800
          * @tc.name: setDefaultApplication : Set PPT default application
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('setDefaultApplication_right_0800', 0, async function (done) {
            const data = await defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.PPT, {
                bundleName: "com.test.defaultApp",
                moduleName: "module01",
                abilityName: "PPT"
            })
            console.info('setDefaultApplication_right_0800_success' + JSON.stringify(data))
            done()
        });

         /*
          * @tc.number: setDefaultApplication_error_0100
          * @tc.name: setDefaultApplication : Set BROWSER-ERROR default application
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('setDefaultApplication_error_0100', 0, async function (done) {
            defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.BROWSER, {
                bundleName: "com.test.defaultApp",
                moduleName: "module01",
                abilityName: "BROWSER-ERROR"
            }).catch(err => {
                console.info('setDefaultApplication_error_0100_success' + JSON.stringify(err))
                expect(err).assertEqual(EXECUTE_ERROR)
                done()
            })
        });

         /*
          * @tc.number: setDefaultApplication_error_0200
          * @tc.name: setDefaultApplication : Set IMAGE-ERROR default application
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('setDefaultApplication_error_0200', 0, async function (done) {
            defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.IMAGE, {
                bundleName: "com.test.defaultApp",
                moduleName: "module01",
                abilityName: "IMAGE-ERROR"
            }).catch(err => {
                console.info('setDefaultApplication_error_0200_success' + JSON.stringify(err))
                expect(err).assertEqual(EXECUTE_ERROR)
                done()
            })
        });

         /*
          * @tc.number: setDefaultApplication_error_0300
          * @tc.name: setDefaultApplication : Set AUDIO-ERROR default application
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('setDefaultApplication_error_0300', 0, async function (done) {
            defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.AUDIO, {
                bundleName: "com.test.defaultApp",
                moduleName: "module01",
                abilityName: "AUDIO-ERROR"
            }).catch(err => {
                console.info('setDefaultApplication_error_0300_success' + JSON.stringify(err))
                expect(err).assertEqual(EXECUTE_ERROR)
                done()
            })
        });

         /*
          * @tc.number: setDefaultApplication_error_0400
          * @tc.name: setDefaultApplication : Set VIDEO-ERROR default application
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('setDefaultApplication_error_0400', 0, async function (done) {
            defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.VIDEO, {
                bundleName: "com.test.defaultApp",
                moduleName: "module01",
                abilityName: "VIDEO-ERROR"
            }).catch(err => {
                console.info('setDefaultApplication_error_0400_success' + JSON.stringify(err))
                expect(err).assertEqual(EXECUTE_ERROR)
                done()
            })
        });

         /*
          * @tc.number: setDefaultApplication_error_0500
          * @tc.name: setDefaultApplication : Set PDF-ERROR default application
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('setDefaultApplication_error_0500', 0, async function (done) {
            defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.PDF, {
                bundleName: "com.test.defaultApp",
                moduleName: "module01",
                abilityName: "PDF-ERROR"
            }).catch(err => {
                console.info('setDefaultApplication_error_0500_success' + JSON.stringify(err))
                expect(err).assertEqual(EXECUTE_ERROR)
                done()
            })
        });

         /*
          * @tc.number: setDefaultApplication_error_0600
          * @tc.name: setDefaultApplication : Set WORD-ERROR default application
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('setDefaultApplication_error_0600', 0, async function (done) {
            defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.WORD, {
                bundleName: "com.test.defaultApp",
                moduleName: "module01",
                abilityName: "WORD-ERROR"
            }).catch(err => {
                console.info('setDefaultApplication_error_0600_success' + JSON.stringify(err))
                expect(err).assertEqual(EXECUTE_ERROR)
                done()
            })
        });

         /*
          * @tc.number: setDefaultApplication_error_0700
          * @tc.name: setDefaultApplication : Set EXCEL-ERROR default application
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('setDefaultApplication_error_0700', 0, async function (done) {
            defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.EXCEL, {
                bundleName: "com.test.defaultApp",
                moduleName: "module01",
                abilityName: "EXCEL-ERROR"
            }).catch(err => {
                console.info('setDefaultApplication_error_0700_success' + JSON.stringify(err))
                expect(err).assertEqual(EXECUTE_ERROR)
                done()
            })
        });

         /*
          * @tc.number: setDefaultApplication_error_0800
          * @tc.name: setDefaultApplication : Set PPT-ERROR default application
          * @tc.desc: Check the return value of the interface (by promise)
          */
        it('setDefaultApplication_error_0800', 0, async function (done) {
            defaultAppMgr.setDefaultApplication(defaultAppMgr.ApplicationType.PPT, {
                bundleName: "com.test.defaultApp",
                moduleName: "module01",
                abilityName: "PPT-ERROR"
            }).catch(err => {
                console.info('setDefaultApplication_error_0800_success' + JSON.stringify(err))
                expect(err).assertEqual(EXECUTE_ERROR)
                done()
            })
        });
     })
 }