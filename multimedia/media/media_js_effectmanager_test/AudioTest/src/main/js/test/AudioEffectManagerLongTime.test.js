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
export default function effectManagerLongtime() {

    describe('effectManagerLongtime', function () {
		let TAG = "[EffectManagerLongTimeTest] ";
		let TESTFAILED = -1;
		let LONGTIME = 28800000;
		//let LONGTIME = 8888;
		let IntervalTime = 500;
		let audioSteamManager = audio.getAudioManager().getStreamManager();
		let audioRenderer = null;

		let streamUsage = audio.StreamUsage.STREAM_USAGE_MEDIA;
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

        afterEach(function () {
            console.info(TAG + 'AudioFrameworkTest: afterEach: Test case-level clearance conditions');
        })

        afterAll(function () {
            console.info(TAG + 'AudioFrameworkTest: afterAll: Test suite-level cleanup condition');
        })

		function generateMixed(n) {
		  var chars = ['0','1','2','3','4','5','6','7','8','9',
		              'A','B','C','D','E','F','G','H','I','J','K','L','M',
		              'N','O','P','Q','R','S','T','U','V','W','X','Y','Z'];
		  var res = "";
		  for(var i = 0; i < n ; i++) {
		     var id = Math.floor(Math.random()*36);
		     res += chars[id];
		  }
		  return res;
		}
		
		async function createAudioRenderer() {
		    if (audioRenderer) {
				audioRenderer.release();
				audioRenderer = null;
			}
			audioRenderer = await audio.createAudioRenderer(audioRendererOptions);
			console.info(TAG + 'TestLog: Start Testing createAudioRenderer');
		  }


        /**
         *@tc.number    : OH_EFFECTMANAGER_API_STABLITY_TEST_001
         *@tc.name      : EFFECTMANAGER_API_STABLITY_TEST
         *@tc.desc      : getAudioEffectInfoArray promise stablity test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_STABLITY_TEST_001', 1, function (done) {
            console.info(TAG + 'OH_EFFECTMANAGER_API_STABLITY_TEST_001')
			let i = 0;
			let timer = setInterval(async function() {
				if(i >= 0 && i < LONGTIME){

					await audioSteamManager.getAudioEffectInfoArray(streamUsage).then((AudioSceneEffectInfoArray)=>{
						if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE && AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
	                    {
							clearInterval(timer);
	                      	console.log(TAG+(i));
				        	expect().assertFail(); 
							done();
	                    }
						i = i+IntervalTime;		
						console.log(TAG +"OH_EFFECTMANAGER_API_STABLITY_TEST_001: " + i);
			        }).catch((err)=>{
			        	console.log(TAG +(err));
			        	console.log(TAG +"OH_EFFECTMANAGER_API_STABLITY_TEST_001 failed");
						console.log(TAG+(i));						
						i = -1;
			        })	
										
				} else if(i< 0) {
					clearInterval(timer);
					expect().assertFail(); 
					done();
					console.log(TAG +"OH_EFFECTMANAGER_API_STABLITY_TEST_001 over");
				}
				else {
					clearInterval(timer);
					expect(true).assertTrue();
					done();	
				}
			},IntervalTime)
				
        })

		/**
		 *@tc.number	: OH_EFFECTMANAGER_API_STABLITY_TEST_002
		 *@tc.name		: OH_EFFECTMANAGER_API_STABLITY_TEST
		 *@tc.desc		: getAudioEffcetInfoArray callback stablity test
		 *@tc.size		: MEDIUM
		 *@tc.type		: Function
		 *@tc.level 	: Level 1
		 */
		it('OH_EFFECTMANAGER_API_STABLITY_TEST_002', 1, function (done) {
			console.info(TAG + 'OH_EFFECTMANAGER_API_STABLITY_TEST_002')

			let Usage = -1;			
						
			let i = 0;
			let timer = setInterval(async function() {
				if(i < LONGTIME){
					await audioSteamManager.getAudioEffectInfoArray(Usage).then((AudioSceneEffectInfoArray)=>{
						return null
			        }).catch((err)=>{
			        	//if(err != '"code":"6800104"')
						if(err != 'Error: unsupported option')
						{
							clearInterval(timer);
							console.log(TAG +(err));
							console.log(TAG +"OH_EFFECTMANAGER_API_STABLITY_TEST_002 async failed");
							//resolve(err);
							expect().assertFail();
							done();
						}
						return null
			        })					
					i = i+IntervalTime;
					console.log(TAG +"OH_EFFECTMANAGER_API_STABLITY_TEST_002: " + i);
				} else {
					clearInterval(timer);
					expect(true).assertTrue();
					done();	
				}
			},IntervalTime)	
				
		})
		
		

		/**
		 *@tc.number	: OH_EFFECTMANAGER_API_STABLITY_TEST_003
		 *@tc.name		: OH_EFFECTMANAGER_API_STABLITY_TEST
		 *@tc.desc		: getAudioEffcetInfoArray callback longtime test
		 *@tc.size		: MEDIUM
		 *@tc.type		: Function
		 *@tc.level 	: Level 1
		 */
		it('OH_EFFECTMANAGER_API_STABLITY_TEST_003', 1,async function (done) {
			console.info(TAG + 'OH_EFFECTMANAGER_API_STABLITY_TEST_003')	
			await createAudioRenderer();
			let i = 0;
			let timer = setInterval(async function() {
				if(i < LONGTIME){
					await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
						if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
							console.log(TAG +"OH_EFFECTMANAGER_API_STABLITY_TEST_003 failed");
							console.log(TAG+(i));
			        		expect().assertFail();
							i = LONGTIME;
							done();
						}
						return null
			        }).catch((err)=>{
						clearInterval(timer);
			        	console.log(TAG +(err));
			        	console.log(TAG +"OH_EFFECTMANAGER_API_STABLITY_TEST_003 failed");
						console.log(TAG+(i));
						//resolve(err);
			        	expect().assertFail();
						done();
						return null
			        })
					i = i+IntervalTime;
					console.log(TAG +"OH_EFFECTMANAGER_API_STABLITY_TEST_003: " + i);
				} else {
					clearInterval(timer);
					expect(true).assertTrue();
					done();	
				}
			},IntervalTime)	
				
		})


		/**
		 *@tc.number	: OH_EFFECTMANAGER_API_STABLITY_TEST_004
		 *@tc.name		: EFFECTMANAGER_SR2_STABLITY_TEST
		 *@tc.desc		: getAudioEffcetInfoArray callback longtime test
		 *@tc.size		: MEDIUM
		 *@tc.type		: Function
		 *@tc.level 	: Level 1
		 */
		it('OH_EFFECTMANAGER_API_STABLITY_TEST_004', 1,async function (done) {
			console.info(TAG + 'OH_EFFECTMANAGER_API_STABLITY_TEST_004')
			let audioEffectMode = audio.AudioEffectMode.EFFECT_NONE;	
			await createAudioRenderer();			
			let i = 0;
			let timer = setInterval(async function() {
				if(i < LONGTIME){
					await audioRenderer.setAudioEffectMode(audioEffectMode).then(()=>{
						return null

	            	}).catch((err)=>{
						clearInterval(timer);
						console.log(TAG +(err));
			        	console.log(TAG +"OH_EFFECTMANAGER_API_STABLITY_TEST_003 failed");
						console.log(TAG+(i));
						//resolve(err);
			        	expect().assertFail();
						done();
						return null
			        });
					i = i+IntervalTime;
					console.log(TAG +"OH_EFFECTMANAGER_API_STABLITY_TEST_004: " + i);
				} else {
					clearInterval(timer);
					expect(true).assertTrue();
					done();	
				}
			},IntervalTime)	
				
		})

		/**
		 *@tc.number	: OH_EFFECTMANAGER_API_STABLITY_TEST_005
		 *@tc.name		: OH_EFFECTMANAGER_API_STABLITY_TEST
		 *@tc.desc		: getAudioEffcetInfoArray callback longtime test
		 *@tc.size		: MEDIUM
		 *@tc.type		: Function
		 *@tc.level 	: Level 1
		 */
		it('OH_EFFECTMANAGER_API_STABLITY_TEST_005', 1,async function (done) {
			console.info(TAG + 'OH_EFFECTMANAGER_API_STABLITY_TEST_005')
			//let AudioEffectModeTest = audio.AudioEffectMode.EFFECT_NONE;	
			await createAudioRenderer();			
			let AudioEffectModeTest = -1;			
			let i = 0;
			let timer = setInterval(async function() {
				if(i < LONGTIME){
			
					await audioRenderer.setAudioEffectMode(AudioEffectModeTest).then(()=>{
						return null

	            	}).catch((err)=>{
						console.log(TAG +(err));
						if(err != 'Error: unsupported option')
						{
							clearInterval(timer);
							console.log(TAG +(err));
							expect().assertFail();
							//resolve(err);
							done();
						}
						return null
						//resolve(err);
			        });
					i = i+IntervalTime;
					console.log(TAG +"OH_EFFECTMANAGER_API_STABLITY_TEST_005: " + i);
				} else {
					clearInterval(timer);
					expect(true).assertTrue();
					done();	
				}
			},IntervalTime)	
				
		})

			
		/**
		 *@tc.number	: OH_EFFECTMANAGER_EFFECTINFO_FUZZ_TEST_001
		 *@tc.name		: OH_EFFECTMANAGER_EFFECTINFO_FUZZ_TEST
		 *@tc.desc		: getAudioEffcetInfoArray fuzz test
		 *@tc.size		: MEDIUM
		 *@tc.type		: Function
		 *@tc.level 	: Level 1
		 */
		it('OH_EFFECTMANAGER_EFFECTINFO_FUZZ_TEST_001', 1, function (done) {
			console.info(TAG + 'OH_EFFECTMANAGER_EFFECTINFO_FUZZ_TEST_001')
			
			let i = 0;
			let timer = setInterval(async function() {
				if(i < LONGTIME){
					let random1 = Math.floor(Math.random()*65535);
					let random2 = Math.floor(Math.random()*65535);
					let Type = generateMixed(random1);
					let Usage = generateMixed(random2);
					
					await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
						return null
					
			        }).catch((err)=>{
						console.log(TAG +(err));
						console.log(TAG +"OH_EFFECTMANAGER_EFFECTINFO_FUZZ_TEST_001: " + i);
						expect().assertFail();
						resolve(err);
						done();

			        })
					i = i+IntervalTime;
					console.log(TAG +"OH_EFFECTMANAGER_EFFECTINFO_FUZZ_TEST_001: " + i);
				} else {
					clearInterval(timer)
					expect(true).assertTrue();
					done();	
				}
			},IntervalTime)
			
		})	

				
		/**
		 *@tc.number	: OH_EFFECTMANAGER_EFFECTINFO_FUZZ_TEST_002
		 *@tc.name		: OH_EFFECTMANAGER_EFFECTINFO_FUZZ_TEST
		 *@tc.desc		: getAudioEffcetInfoArray fuzz test
		 *@tc.size		: MEDIUM
		 *@tc.type		: Function
		 *@tc.level 	: Level 1
		 */
		it('OH_EFFECTMANAGER_EFFECTINFO_FUZZ_TEST_002', 1,async function (done) {
			console.info(TAG + 'OH_EFFECTMANAGER_EFFECTINFO_FUZZ_TEST_002')
			//let random1 = Math.floor(Math.random()*65535);
			await createAudioRenderer();
			//let audioEffectMode = generateMixed(random1);
			let i = 0;
			let ret = 0;
			let timer = setInterval(async function() {
				if(i < LONGTIME){					
					let random1 = Math.floor(Math.random()*65535);
					let audioEffectMode = generateMixed(random1);
					console.info(TAG + 'FUZZ_TEST_002:' + (audioEffectMode));
					await audioRenderer.setAudioEffectMode(audioEffectMode).then(()=>{
						console.info(TAG + 'FUZZ_TEST_002 -i:' + (i));
						return null
	            	}).catch((err)=>{						
			        	console.log(TAG +(err));
			        	console.log(TAG +"OH_EFFECTMANAGER_EFFECTINFO_FUZZ_TEST_002 failed");
						expect().assertFail();
						resolve(err);
						done();
			        });
					i = i+IntervalTime;
					console.log(TAG +"OH_EFFECTMANAGER_EFFECTINFO_FUZZ_TEST_002: " + i);
				} else {
					clearInterval(timer);
					expect(true).assertTrue();
					done();	
				}
			},IntervalTime)
			/*
			if(ret != 0) {
				expect().assertFail();
				done();
			}
			else{
				expect(true).assertTrue();
				done();
			}*/
		})
		
			
		
    })
}