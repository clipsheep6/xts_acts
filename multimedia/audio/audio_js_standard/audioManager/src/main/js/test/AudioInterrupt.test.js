/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http:// www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


import audio from '@ohos.multimedia.audio';

import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index';

describe('audioInterrupt', function () {
    console.info('AudioFrameworkTest: Create AudioManger Object JS Framework');
    const audioManager = audio.getAudioManager();

    function sleep (ms) {
        return new Promise(resolve => setTimeout(resolve, ms));
    }

    beforeAll(function () {
        console.info('AudioFrameworkTest: beforeAll: Prerequisites at the test suite level');
    })

    beforeEach(async function () {
        console.info('AudioFrameworkTest: beforeEach: Prerequisites at the test case level');
        await sleep(100);
    })

    afterEach(async function () {
        console.info('AudioFrameworkTest: afterEach: Test case-level clearance conditions');
        await sleep(100);
    })

    afterAll(function () {
        console.info('AudioFrameworkTest: afterAll: Test suite-level cleanup condition');
    })

	 /*
                * @tc.name:RequestIndependentInterrupt_001
                * @tc.desc: requestIndependentInterrupt callback
                * @tc.type: FUNC
                * @tc.require: Issue Number
    */
    it("RequestIndependentInterrupt_001", 0, function (done) {
        audioManager.requestIndependentInterrupt(audio.FocusType.FOCUS_TYPE_RECORDING ,(err,data)=>{
            if(err){
                expect(true).assertEqual(false);
                return done();
            }
            expect(data).assertEqual(true);
            done();
        })
    })

    /*
                * @tc.name:RequestIndependentInterrupt_002
                * @tc.desc: requestIndependentInterrupt promise
                * @tc.type: FUNC
                * @tc.require: Issue Number
    */
    it("RequestIndependentInterrupt_002", 0, function (done) {
        audioManager.requestIndependentInterrupt(audio.FocusType.FOCUS_TYPE_RECORDING).then(data=>{
            expect(data).assertEqual(true);
            done();
        }).catch(err=>{
            expect(true).assertEqual(false);
            done();
        })
    })

    /*
                * @tc.name:RequestIndependentInterrupt_003
                * @tc.desc: requestIndependentInterrupt ,set param as '0',will catch error with type error
                * @tc.type: FUNC
                * @tc.require: Issue Number
    */
    it("RequestIndependentInterrupt_003", 0,async function (done) {
        let focusType = '0';
        try{
            await audioManager.requestIndependentInterrupt(focusType)
        }catch(err){
            expect('assertion (false) failed: type mismatch').assertEqual(err.message);
        }
        done();
    })

    /*
                * @tc.name:RequestIndependentInterrupt_004
                * @tc.desc: requestIndependentInterrupt ,set param as 99,will catch error  out of border
                * @tc.type: FUNC
                * @tc.require: Issue Number
    */
    it("RequestIndependentInterrupt_004", 0, function (done) {
        let focusType = 99;
        audioManager.requestIndependentInterrupt(focusType).then(data=>{
            expect(data).assertEqual(true);
            done();
        }).catch(err=>{
            expect(err).assertEqual(undefined);
            done();
        });
    })

    /*
                * @tc.name:AbandonIndependentInterrupt_001
                * @tc.desc: abandonIndependentInterrupt callback
                * @tc.type: FUNC
                * @tc.require: Issue Number
    */
    it("AbandonIndependentInterrupt_001", 0, function (done) {
        audioManager.abandonIndependentInterrupt(audio.FocusType.FOCUS_TYPE_RECORDING,(err,data)=>{
            if(err){
                expect(true).assertEqual(false);
                return done();
            }
            expect(data).assertEqual(true);
            done();
        })
    })

    /*
    * @tc.name:AbandonIndependentInterrupt_002
    * @tc.desc: abandonIndependentInterrupt promise
    * @tc.type: FUNC
    * @tc.require: Issue Number
    */
    it("AbandonIndependentInterrupt_002", 0, function (done) {
        audioManager.abandonIndependentInterrupt(audio.FocusType.FOCUS_TYPE_RECORDING).then(data=>{
            expect(data).assertEqual(true);
            done();
        }).catch(err=>{
            expect(true).assertEqual(false);
            done();
        })
    })

    /*
   * @tc.name:AbandonIndependentInterrupt_003
   * @tc.desc: abandonIndependentInterrupt ,set param as '0',will catch error with type error
   * @tc.type: FUNC
   * @tc.require: Issue Number
   */
    it("AbandonIndependentInterrupt_003", 0, function (done) {
        let focusType='0';
        try{
            audioManager.abandonIndependentInterrupt(focusType).then(data=>{
                expect(false).assertTrue();
            });
        }catch(err){
            expect('assertion (false) failed: type mismatch').assertEqual(err.message);
        }
        done();
    })
	
	 /*
    * @tc.name:AbandonIndependentInterrupt_004
    * @tc.desc: abandonIndependentInterrupt ,set param as 99,will catch error  out of border
    * @tc.type: FUNC
    * @tc.require: Issue Number
    */
    it("AbandonIndependentInterrupt_004", 0, function (done) {
        let focusType = 99;
        audioManager.abandonIndependentInterrupt(focusType).then(data=>{
            expect(data).assertEqual(true);
            done();
        }).catch(err=>{
            expect(err).assertEqual(undefined);
            done();
        })
    })
	
})