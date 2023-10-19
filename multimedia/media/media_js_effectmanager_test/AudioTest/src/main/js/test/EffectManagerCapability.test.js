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
import { afterAll, afterEach, beforeAll, beforeEach, describe, expect, it } from '@ohos/hypium';
export default function effectManagerCapabilityTest() {

    describe('effectManagerCapabilityTest',  function () {
		let TAG = "[effectManagerCapabilityTest] ";
		let BASE_COUNT = 2000;
		let audioSteamManager = audio.getAudioManager().getStreamManager();
		let audioRenderer = null;
		let streamUsage = audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION;
		let audioRendererOptions  = {
			streamInfo: {
			  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
			  channels: audio.AudioChannel.CHANNEL_2,
			  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
			  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
			},
			rendererInfo: {
			  usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
			  rendererFlags: 0
			}
	  	}
		
        beforeAll(async function () {
            console.info(TAG + 'TestLog: Start Testing AudioFrameworkTest Interfaces');
        })

        beforeEach(async function () {
            console.info(TAG + 'AudioFrameworkTest: beforeEach: Prerequisites at the test case level'); 
        })

        afterEach(async function () {
            console.info(TAG + 'AudioFrameworkTest: afterEach: Test case-level clearance conditions');
        })

        afterAll(async function () {
            console.info(TAG + 'AudioFrameworkTest: afterAll: Test suite-level cleanup condition');
        })
			
		async function createAudioRenderer() {
		    if (audioRenderer) {
				audioRenderer.release();
				audioRenderer = null;
			}
			audioRenderer = await audio.createAudioRenderer(audioRendererOptions);
		  }

					

		/**
         *@tc.number    : OH_EFFECTMANAGER_API_CAPABILITY_TEST_001
         *@tc.name      : 
         *@tc.desc      : getAudioEffectInfoArray promise CAPABILITY test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_CAPABILITY_TEST_001', 1, async function (done) {
            console.info(TAG + 'OH_EFFECTMANAGER_API_CAPABILITY_TEST_001')
			let start = Date.now();
			for (let i = 0; i < 2000; i++)
			{
				await audioSteamManager.getAudioEffectInfoArray(streamUsage).then((AudioSceneEffectInfoArray)=>{
				
		        }).catch((err)=>{
		        	console.log(TAG +"OH_EFFECTMANAGER_API_CAPABILITY_TEST_001 failed");
		        	expect().assertFail();   
					done();
		        })
			}
				
			let end = Date.now() - start;
			console.log(TAG +"OH_EFFECTMANAGER_API_CAPABILITY_TEST_001 " + (end));
			let average = (end *1000) /BASE_COUNT;
			console.info(TAG + 'average,time is:' + average);
			expect(end).assertLess(1000);
			done();			

        })

		
		/**
		 *@tc.number	: OH_EFFECTMANAGER_API_CAPABILITY_TEST_002
		 *@tc.name		: 
		 *@tc.desc		: getAudioEffectInfoArray callback CAPABILITY test
		 *@tc.size		: MEDIUM
		 *@tc.type		: Function
		 *@tc.level 	: Level 1
		 */
		it('OH_EFFECTMANAGER_API_CAPABILITY_TEST_002', 1, async function (done) {
			console.info(TAG + 'OH_EFFECTMANAGER_API_CAPABILITY_TEST_002');
			let end = 0;
			let start = Date.now();
			
//			this.audioRenderer.setAudioEffectMode(this.AudioEffectModeTest, async (err) => {
			perfTest(0, done);
			function perfTest(index, done){
				audioSteamManager.getAudioEffectInfoArray(streamUsage, (err,AudioSceneEffectInfoArray) =>{
					if(index < BASE_COUNT){
						perfTest(index +1, done);
					} else {							
						let end = Date.now() - start;
						let average = (end ) /BASE_COUNT;
						console.info(TAG + 'average,time is:'+ average);
						console.log(TAG +"OH_EFFECTMANAGER_API_CAPABILITY_TEST_002 end " + (end));
						////expect(end).assertLess(1000);
						expect(end<1000).assertTrue();
						done();
					}
		        })
			}	
			console.log(TAG +"OH_EFFECTMANAGER_API_CAPABILITY_TEST_002 " + (end));
			let average = (end *1000) /BASE_COUNT;
			console.info(TAG + 'average,time is:' + average);
			expect(end).assertLess(1000);
			done();	
						
			
		})
		
		
			
		/**
         *@tc.number    : OH_EFFECTMANAGER_API_CAPABILITY_TEST_003
         *@tc.name      : 
         *@tc.desc      : getAudioEffectInfoArray promise CAPABILITY test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_CAPABILITY_TEST_003', 1, async function (done) {
			await createAudioRenderer();
			let start = Date.now();
			for (let i = 0; i < 2000; i++)
			{
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
				
		        }).catch((err)=>{
		        	console.log(TAG +"audioEffectMode failed");
		        	expect().assertFail();
					done();				
		        })
			}
			let end = Date.now() - start;
			console.log(TAG +"OH_EFFECTMANAGER_API_CAPABILITY_TEST_003 " + (end));
			let average = (end *1000) /BASE_COUNT;
			console.info(TAG + 'average,time is:' + average);
			expect(end).assertLess(1000);
			done();			

        })				

		/**
         *@tc.number    : OH_EFFECTMANAGER_API_CAPABILITY_TEST_004
         *@tc.name      : 
         *@tc.desc      : getAudioEffectInfoArray callback CAPABILITY test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_CAPABILITY_TEST_004', 1, async function (done) {
			await createAudioRenderer();
			let start = Date.now();
			
			perfTest(0, done);
			function perfTest(index, done){
				audioRenderer.getAudioEffectMode(async (err, audioEffectMode) => {
					if(index < BASE_COUNT){
						perfTest(index +1, done);
					} else {
							
						let end = Date.now() - start;
						let average = (end *1000) /BASE_COUNT;
						console.log(TAG +"OH_EFFECTMANAGER_API_CAPABILITY_TEST_004 " + (end));
						console.info(TAG + 'average,time is:'+ average);
						expect(end).assertLess(1000);
						done();
					}
		        })
			}

        })

		/**
         *@tc.number    : OH_EFFECTMANAGER_API_CAPABILITY_TEST_005
         *@tc.name      : 
         *@tc.desc      : getAudioEffectInfoArray callback CAPABILITY test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_CAPABILITY_TEST_005', 1, async function (done) {
			await createAudioRenderer();
			let audioEffectModeTest = audio.AudioEffectMode.EFFECT_NONE;
			let start = Date.now();
			for (let i = 0; i < 2000; i++)
			{			
				await audioRenderer.setAudioEffectMode(audioEffectModeTest).then(()=>{
				
		        }).catch((err)=>{
		        	console.log(TAG +"audioEffectMode failed");
		        	expect().assertFail();
					done();				
		        })
				
			}
				
			let end = Date.now() - start;
			console.log(TAG +"OH_EFFECTMANAGER_API_CAPABILITY_TEST_005 " + (end));
			let average = (end *1000) /BASE_COUNT;
			console.info(TAG + 'average,time is:' +average);
			expect(end).assertLess(1000);
			done();			

        })
		
		/**
         *@tc.number    : OH_EFFECTMANAGER_API_CAPABILITY_TEST_006
         *@tc.name      : 
         *@tc.desc      : getAudioEffectInfoArray callback CAPABILITY test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_CAPABILITY_TEST_006', 1, async function (done) {
			await createAudioRenderer();
			let audioEffectModeTest = audio.AudioEffectMode.EFFECT_NONE;
			let start = Date.now();
			perfTest(0, done);
			function perfTest(index, done){
				audioRenderer.setAudioEffectMode(audioEffectModeTest, (err) => {
					if(index < BASE_COUNT){
						perfTest(index +1, done);
					} else {
							
						let end = Date.now() - start;
						let average = (end *1000) /BASE_COUNT;
						console.log(TAG +"OH_EFFECTMANAGER_API_CAPABILITY_TEST_006 " + (end));
						console.info(TAG + 'average,time is:'+ average);
						expect(end).assertLess(1000);
						done();
					}
		        })
			}

        })
		
		
    })
}