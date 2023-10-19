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
export default function effectManagerInterfaceTest() {

    describe('effectManagerInterfaceTest',  function () {
		let TAG = "[EffectManagerInterfaceTest] ";
		let BASE_COUNT = 2000;
		let audioSteamManager = audio.getAudioManager().getStreamManager();
		let audioRenderer = null;
		let contentType = audio.ContentType.CONTENT_TYPE_SPEECH;
		let streamUsage = audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION;
		let audioRendererOptions  = {
			streamInfo: {
			  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
			  channels: audio.AudioChannel.CHANNEL_2,
			  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
			  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
			},
			rendererInfo: {
			  content: audio.ContentType.CONTENT_TYPE_SPEECH,
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
         *@tc.number    : OH_EFFECTMANAGER_API_FUNC_TEST_001
         *@tc.name      : 
         *@tc.desc      : getAudioEffectInfoArray func test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_FUNC_TEST_001', 1, async function (done) {
            console.info(TAG + 'OH_EFFECTMANAGER_API_FUNC_TEST_001')
			
			audioRendererOptions  = {
				  streamInfo: {
				  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
				  channels: audio.AudioChannel.CHANNEL_2,
				  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
				  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
				},
				rendererInfo: {
				  content: audio.ContentType.CONTENT_TYPE_UNKNOWN,
				  usage: audio.StreamUsage.STREAM_USAGE_UNKNOWN,
				  rendererFlags: 0
				}
		  	}
			await createAudioRenderer();
			await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
				if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
			  		expect().assertFail();    
			  		done();
			  	}
				  console.info(TAG + 'average,time is:');
				  expect(true).assertTrue();
				  done();
		        }).catch((err)=>{
		        	console.log(TAG +"audioEffectMode failed");
		        	expect().assertFail();  
					done();
		        })				

        })
			
		/**
         *@tc.number    : OH_EFFECTMANAGER_SR2_func_TEST_002
         *@tc.name      : 
         *@tc.desc      : getAudioEffectInfoArray func test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_SR2_func_TEST_002', 1, async function (done) {
            console.info(TAG + 'OH_EFFECTMANAGER_SR2_func_TEST_002')
			await audioSteamManager.getAudioEffectInfoArray(contentType,streamUsage).then((AudioSceneEffectInfoArray)=>{
			
				console.info(TAG + 'average,time is:');
				expect(true).assertTrue();
				done();	
	        }).catch((err)=>{
	        	console.log(TAG +"getAudioEffectInfoArray failed");
	        	expect().assertFail();     
				done();
	        })
			
        })


		/**
         *@tc.number    : OH_EFFECTMANAGER_API_FUNC_TEST_002
         *@tc.name      : 
         *@tc.desc      : getAudioEffectMode func test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_FUNC_TEST_002', 1, async function (done) {
            console.info(TAG + 'OH_EFFECTMANAGER_API_FUNC_TEST_002')
			
			audioRendererOptions  = {
				  streamInfo: {
				  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
				  channels: audio.AudioChannel.CHANNEL_2,
				  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
				  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
				},
				rendererInfo: {
				  content: audio.ContentType.CONTENT_TYPE_UNKNOWN,
				  usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
				  rendererFlags: 0
				}
		  	}
			await createAudioRenderer();
			await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
				if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
			  		expect().assertFail();    
			  		done();
			  	}
				  console.info(TAG + 'average,time is:');
				  expect(true).assertTrue();
				  done();
		        }).catch((err)=>{
		        	console.log(TAG +"audioEffectMode failed");
		        	expect().assertFail();  
					done();
		        })			

        })

	/**
         *@tc.number    : OH_EFFECTMANAGER_API_FUNC_TEST_003
         *@tc.name      : 
         *@tc.desc      : getAudioEffectMode func test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_FUNC_TEST_003', 1, async function (done) {
            console.info(TAG + 'OH_EFFECTMANAGER_API_FUNC_TEST_003')
			
			audioRendererOptions  = {
				  streamInfo: {
				  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
				  channels: audio.AudioChannel.CHANNEL_2,
				  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
				  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
				},
				rendererInfo: {
				  content: audio.ContentType.CONTENT_TYPE_UNKNOWN,
				  usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
				  rendererFlags: 0
				}
		  	}
			await createAudioRenderer();
			await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
				if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
			  		expect().assertFail();    
			  		done();
			  	}
				  console.info(TAG + 'average,time is:');
				  expect(true).assertTrue();
				  done();
		        }).catch((err)=>{
		        	console.log(TAG +"audioEffectMode failed");
		        	expect().assertFail();  
					done();
		        })			

        })

				/**
         *@tc.number    : OH_EFFECTMANAGER_API_FUNC_TEST_004
         *@tc.name      : 
         *@tc.desc      : getAudioEffectMode func test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_FUNC_TEST_004', 1, async function (done) {
            console.info(TAG + 'OH_EFFECTMANAGER_API_FUNC_TEST_004')
			
			audioRendererOptions  = {
				  streamInfo: {
				  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
				  channels: audio.AudioChannel.CHANNEL_2,
				  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
				  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
				},
				rendererInfo: {
				  content: audio.ContentType.CONTENT_TYPE_UNKNOWN,
				  usage: audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT,
				  rendererFlags: 0
				}
		  	}
			await createAudioRenderer();
			await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
				if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
			  		expect().assertFail();    
			  		done();
			  	}
				  console.info(TAG + 'average,time is:');
				  expect(true).assertTrue();
				  done();
		        }).catch((err)=>{
		        	console.log(TAG +"audioEffectMode failed");
		        	expect().assertFail();  
					done();
		        })			

        })
        /**
         *@tc.number    : OH_EFFECTMANAGER_API_FUNC_TEST_005
         *@tc.name      : 
         *@tc.desc      : getAudioEffectMode func test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_FUNC_TEST_005', 1, async function (done) {
            console.info(TAG + 'OH_EFFECTMANAGER_API_FUNC_TEST_005')
			
			audioRendererOptions  = {
				  streamInfo: {
				  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
				  channels: audio.AudioChannel.CHANNEL_2,
				  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
				  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
				},
				rendererInfo: {
				  content: audio.ContentType.CONTENT_TYPE_UNKNOWN,
				  usage: audio.StreamUsage.STREAM_USAGE_ALARM,
				  rendererFlags: 0
				}
		  	}
			await createAudioRenderer();
			await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
				if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
			  		expect().assertFail();    
			  		done();
			  	}
				  console.info(TAG + 'average,time is:');
				  expect(true).assertTrue();
				  done();
		        }).catch((err)=>{
		        	console.log(TAG +"audioEffectMode failed");
		        	expect().assertFail();  
					done();
		        })			

        })
        /**
         *@tc.number    : OH_EFFECTMANAGER_API_FUNC_TEST_006
         *@tc.name      : 
         *@tc.desc      : getAudioEffectMode func test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_FUNC_TEST_006', 1, async function (done) {
            console.info(TAG + 'OH_EFFECTMANAGER_API_FUNC_TEST_006')
			
			audioRendererOptions  = {
				  streamInfo: {
				  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
				  channels: audio.AudioChannel.CHANNEL_2,
				  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
				  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
				},
				rendererInfo: {
				  content: audio.ContentType.CONTENT_TYPE_UNKNOWN,
				  usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
				  rendererFlags: 0
				}
		  	}
			await createAudioRenderer();
			await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
				if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
			  		expect().assertFail();    
			  		done();
			  	}
				  console.info(TAG + 'average,time is:');
				  expect(true).assertTrue();
				  done();
		        }).catch((err)=>{
		        	console.log(TAG +"audioEffectMode failed");
		        	expect().assertFail();  
					done();
		        })			

        })
        /**
         *@tc.number    : OH_EFFECTMANAGER_API_FUNC_TEST_007
         *@tc.name      : 
         *@tc.desc      : getAudioEffectMode func test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_FUNC_TEST_007', 1, async function (done) {
            console.info(TAG + 'OH_EFFECTMANAGER_API_FUNC_TEST_007')
			
			audioRendererOptions  = {
				  streamInfo: {
				  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
				  channels: audio.AudioChannel.CHANNEL_2,
				  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
				  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
				},
				rendererInfo: {
				  content: audio.ContentType.CONTENT_TYPE_UNKNOWN,
				  usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
				  rendererFlags: 0
				}
		  	}
			await createAudioRenderer();
			await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
				if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
			  		expect().assertFail();    
			  		done();
			  	}
				  expect(true).assertTrue();
				  done();
		        }).catch((err)=>{
		        	console.log(TAG +"audioEffectMode failed");
		        	expect().assertFail();  
					done();
		        })			

        })
        /**
         *@tc.number    : OH_EFFECTMANAGER_API_FUNC_TEST_008
         *@tc.name      : 
         *@tc.desc      : getAudioEffectMode func test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_FUNC_TEST_008', 1, async function (done) {
            console.info(TAG + 'OH_EFFECTMANAGER_API_FUNC_TEST_008')
			
			audioRendererOptions  = {
				  streamInfo: {
				  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
				  channels: audio.AudioChannel.CHANNEL_2,
				  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
				  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
				},
				rendererInfo: {
				  content: audio.ContentType.CONTENT_TYPE_UNKNOWN,
				  usage: audio.StreamUsage.STREAM_USAGE_SYSTEM,
				  rendererFlags: 0
				}
		  	}
			await createAudioRenderer();
			await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
				if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
			  		expect().assertFail();    
			  		done();
			  	}
				  console.info(TAG + 'average,time is:');
				  expect(true).assertTrue();
				  done();
		        }).catch((err)=>{
		        	console.log(TAG +"audioEffectMode failed");
		        	expect().assertFail();  
					done();
		        })			

        })
        /**
         *@tc.number    : OH_EFFECTMANAGER_API_FUNC_TEST_009
         *@tc.name      : 
         *@tc.desc      : getAudioEffectMode func test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_FUNC_TEST_009', 1, async function (done) {
            console.info(TAG + 'OH_EFFECTMANAGER_API_FUNC_TEST_009')
			
			audioRendererOptions  = {
				  streamInfo: {
				  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
				  channels: audio.AudioChannel.CHANNEL_2,
				  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
				  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
				},
				rendererInfo: {
				  content: audio.ContentType.CONTENT_TYPE_SPEECH,
				  usage: audio.StreamUsage.STREAM_USAGE_UNKNOWN,
				  rendererFlags: 0
				}
		  	}
			await createAudioRenderer();
			await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
				if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
			  		expect().assertFail();    
			  		done();
			  	}
				  console.info(TAG + 'average,time is:');
				  expect(true).assertTrue();
				  done();
		        }).catch((err)=>{
		        	console.log(TAG +"audioEffectMode failed");
		        	expect().assertFail();  
					done();
		        })			

        })
        /**
         *@tc.number    : OH_EFFECTMANAGER_API_FUNC_TEST_010
         *@tc.name      : 
         *@tc.desc      : getAudioEffectMode func test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_FUNC_TEST_010', 1, async function (done) {
            console.info(TAG + 'OH_EFFECTMANAGER_API_FUNC_TEST_010')
			
			audioRendererOptions  = {
				  streamInfo: {
				  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
				  channels: audio.AudioChannel.CHANNEL_2,
				  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
				  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
				},
				rendererInfo: {
				  content: audio.ContentType.CONTENT_TYPE_SPEECH,
				  usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
				  rendererFlags: 0
				}
		  	}
			await createAudioRenderer();
			await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
				if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
			  		expect().assertFail();    
			  		done();
			  	}
				  console.info(TAG + 'average,time is:');
				  expect(true).assertTrue();
				  done();
		        }).catch((err)=>{
		        	console.log(TAG +"audioEffectMode failed");
		        	expect().assertFail();  
					done();
		        })			

        })
        /**
         *@tc.number    : OH_EFFECTMANAGER_API_FUNC_TEST_011
         *@tc.name      : 
         *@tc.desc      : getAudioEffectMode func test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_FUNC_TEST_011', 1, async function (done) {
            console.info(TAG + 'OH_EFFECTMANAGER_API_FUNC_TEST_011')
			
			audioRendererOptions  = {
				  streamInfo: {
				  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
				  channels: audio.AudioChannel.CHANNEL_2,
				  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
				  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
				},
				rendererInfo: {
				  content: audio.ContentType.CONTENT_TYPE_SPEECH,
				  usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
				  rendererFlags: 0
				}
		  	}
			await createAudioRenderer();
			await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
				if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
			  		expect().assertFail();    
			  		done();
			  	}
				  expect(true).assertTrue();
				  done();
		        }).catch((err)=>{
		        	console.log(TAG +"audioEffectMode failed");
		        	expect().assertFail();  
					done();
		        })			

        })
        /**
         *@tc.number    : OH_EFFECTMANAGER_API_FUNC_TEST_012
         *@tc.name      : 
         *@tc.desc      : getAudioEffectMode func test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_FUNC_TEST_012', 1, async function (done) {
            console.info(TAG + 'OH_EFFECTMANAGER_API_FUNC_TEST_012')
			
			audioRendererOptions  = {
				  streamInfo: {
				  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
				  channels: audio.AudioChannel.CHANNEL_2,
				  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
				  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
				},
				rendererInfo: {
				  content: audio.ContentType.CONTENT_TYPE_SPEECH,
				  usage: audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT,
				  rendererFlags: 0
				}
		  	}
			await createAudioRenderer();
			await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
				if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
			  		expect().assertFail();    
			  		done();
			  	}
				expect(true).assertTrue();
				done();
			}).catch((err)=>{
				console.log(TAG +"audioEffectMode failed");
				expect().assertFail();  
				done();
			})			

        })
        /**
         *@tc.number    : OH_EFFECTMANAGER_API_FUNC_TEST_013
         *@tc.name      : 
         *@tc.desc      : getAudioEffectMode func test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_FUNC_TEST_013', 1, async function (done) {
            console.info(TAG + 'OH_EFFECTMANAGER_API_FUNC_TEST_013')
			
			audioRendererOptions  = {
				  streamInfo: {
				  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
				  channels: audio.AudioChannel.CHANNEL_2,
				  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
				  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
				},
				rendererInfo: {
				  content: audio.ContentType.CONTENT_TYPE_SPEECH,
				  usage: audio.StreamUsage.STREAM_USAGE_ALARM,
				  rendererFlags: 0
				}
		  	}
			await createAudioRenderer();
			await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
				if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
			  		expect().assertFail();    
			  		done();
			  	}
				  expect(true).assertTrue();
				  done();
		        }).catch((err)=>{
		        	console.log(TAG +"audioEffectMode failed");
		        	expect().assertFail();  
					done();
		        })			

        })
        /**
         *@tc.number    : OH_EFFECTMANAGER_API_FUNC_TEST_014
         *@tc.name      : 
         *@tc.desc      : getAudioEffectMode func test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_FUNC_TEST_014', 1, async function (done) {
            console.info(TAG + 'OH_EFFECTMANAGER_API_FUNC_TEST_014')
			
			audioRendererOptions  = {
				  streamInfo: {
				  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
				  channels: audio.AudioChannel.CHANNEL_2,
				  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
				  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
				},
				rendererInfo: {
				  content: audio.ContentType.CONTENT_TYPE_SPEECH,
				  usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
				  rendererFlags: 0
				}
		  	}
			await createAudioRenderer();
			await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
				if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
			  		expect().assertFail();    
			  		done();
			  	}
				  expect(true).assertTrue();
				  done();
		        }).catch((err)=>{
		        	console.log(TAG +"audioEffectMode failed");
		        	expect().assertFail();  
					done();
		        })			

        })
        /**
         *@tc.number    : OH_EFFECTMANAGER_API_FUNC_TEST_015
         *@tc.name      : 
         *@tc.desc      : getAudioEffectMode func test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_FUNC_TEST_015', 1, async function (done) {
            console.info(TAG + 'OH_EFFECTMANAGER_API_FUNC_TEST_015')
			
			audioRendererOptions  = {
				  streamInfo: {
				  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
				  channels: audio.AudioChannel.CHANNEL_2,
				  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
				  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
				},
				rendererInfo: {
				  content: audio.ContentType.CONTENT_TYPE_SPEECH,
				  usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
				  rendererFlags: 0
				}
		  	}
			await createAudioRenderer();
			await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
				if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
			  		expect().assertFail();    
			  		done();
			  	}
				  expect(true).assertTrue();
				  done();
		        }).catch((err)=>{
		        	console.log(TAG +"audioEffectMode failed");
		        	expect().assertFail();  
					done();
		        })			

        })
        /**
         *@tc.number    : OH_EFFECTMANAGER_API_FUNC_TEST_016
         *@tc.name      : 
         *@tc.desc      : getAudioEffectMode func test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_FUNC_TEST_016', 1, async function (done) {
            console.info(TAG + 'OH_EFFECTMANAGER_API_FUNC_TEST_016')
			
			audioRendererOptions  = {
				  streamInfo: {
				  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
				  channels: audio.AudioChannel.CHANNEL_2,
				  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
				  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
				},
				rendererInfo: {
				  content: audio.ContentType.CONTENT_TYPE_SPEECH,
				  usage: audio.StreamUsage.STREAM_USAGE_SYSTEM,
				  rendererFlags: 0
				}
		  	}
			await createAudioRenderer();
			await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
				if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
			  		expect().assertFail();    
			  		done();
			  	}
				  expect(true).assertTrue();
				  done();
		        }).catch((err)=>{
		        	console.log(TAG +"audioEffectMode failed");
		        	expect().assertFail();  
					done();
		        })			

        })
        /**
         *@tc.number    : OH_EFFECTMANAGER_API_FUNC_TEST_017
         *@tc.name      : 
         *@tc.desc      : getAudioEffectMode func test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_FUNC_TEST_017', 1, async function (done) {
            console.info(TAG + 'OH_EFFECTMANAGER_API_FUNC_TEST_017')
			
			audioRendererOptions  = {
				  streamInfo: {
				  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
				  channels: audio.AudioChannel.CHANNEL_2,
				  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
				  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
				},
				rendererInfo: {
				  content: audio.ContentType.CONTENT_TYPE_MUSIC,
				  usage: audio.StreamUsage.STREAM_USAGE_UNKNOWN,
				  rendererFlags: 0
				}
		  	}
			await createAudioRenderer();
			await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
				if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
			  		expect().assertFail();    
			  		done();
			  	}
				  expect(true).assertTrue();
				  done();
		        }).catch((err)=>{
		        	console.log(TAG +"audioEffectMode failed");
		        	expect().assertFail();  
					done();
		        })			

        })
        /**
         *@tc.number    : OH_EFFECTMANAGER_API_FUNC_TEST_018
         *@tc.name      : 
         *@tc.desc      : getAudioEffectMode func test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_FUNC_TEST_018', 1, async function (done) {
            console.info(TAG + 'OH_EFFECTMANAGER_API_FUNC_TEST_018')
			
			audioRendererOptions  = {
				  streamInfo: {
				  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
				  channels: audio.AudioChannel.CHANNEL_2,
				  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
				  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
				},
				rendererInfo: {
				  content: audio.ContentType.CONTENT_TYPE_MUSIC,
				  usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
				  rendererFlags: 0
				}
		  	}
			await createAudioRenderer();
			await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
				if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
			  		expect().assertFail();    
			  		done();
			  	}
				  expect(true).assertTrue();
				  done();
		        }).catch((err)=>{
		        	console.log(TAG +"audioEffectMode failed");
		        	expect().assertFail();  
					done();
		        })			

        })
        
        /**
         *@tc.number    : OH_EFFECTMANAGER_API_FUNC_TEST_019
         *@tc.name      : 
         *@tc.desc      : getAudioEffectMode func test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_FUNC_TEST_019', 1, async function (done) {
			
			audioRendererOptions  = {
				  streamInfo: {
				  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
				  channels: audio.AudioChannel.CHANNEL_2,
				  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
				  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
				},
				rendererInfo: {
				  content: audio.ContentType.CONTENT_TYPE_MUSIC,
				  usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
				  rendererFlags: 0
				}
		  	}
			await createAudioRenderer();
			await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
				if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
			  		expect().assertFail();    
			  		done();
			  	}
				  expect(true).assertTrue();
				  done();
		        }).catch((err)=>{
		        	console.log(TAG +"audioEffectMode failed");
		        	expect().assertFail();  
					done();
		        })			

        })
        
		/**
         *@tc.number    : OH_EFFECTMANAGER_API_FUNC_TEST_020
         *@tc.name      : 
         *@tc.desc      : getAudioEffectMode func test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_FUNC_TEST_020', 1, async function (done) {
			
			audioRendererOptions  = {
				  streamInfo: {
				  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
				  channels: audio.AudioChannel.CHANNEL_2,
				  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
				  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
				},
				rendererInfo: {
				  content: audio.ContentType.CONTENT_TYPE_MUSIC,
				  usage: audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT,
				  rendererFlags: 0
				}
		  	}
			await createAudioRenderer();
			await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
				if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
			  		expect().assertFail();    
			  		done();
			  	}
				  expect(true).assertTrue();
				  done();
		        }).catch((err)=>{
		        	console.log(TAG +"audioEffectMode failed");
		        	expect().assertFail();  
					done();
		        })			

        })
		
		/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_021
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_021', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_MUSIC,
					  usage: audio.StreamUsage.STREAM_USAGE_ALARM,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})

			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_022
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_022', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_MUSIC,
					  usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_023
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_023', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_MUSIC,
					  usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_024
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_024', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_MUSIC,
					  usage: audio.StreamUsage.STREAM_USAGE_SYSTEM,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_025
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_025', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_MOVIE,
					  usage: audio.StreamUsage.STREAM_USAGE_UNKNOWN,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_026
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_026', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_MOVIE,
					  usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_027
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_027', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_MOVIE,
					  usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_028
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_028', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_MOVIE,
					  usage: audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_029
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_029', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_MOVIE,
					  usage: audio.StreamUsage.STREAM_USAGE_ALARM,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_030
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_030', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_MOVIE,
					  usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_031
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_031', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_MOVIE,
					  usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_032
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_032', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_MOVIE,
					  usage: audio.StreamUsage.STREAM_USAGE_SYSTEM,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_033
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_033', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
					  usage: audio.StreamUsage.STREAM_USAGE_UNKNOWN,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_034
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_034', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
					  usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_035
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_035', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
					  usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_036
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_036', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
					  usage: audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_037
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_037', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
					  usage: audio.StreamUsage.STREAM_USAGE_ALARM,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_038
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_038', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
					  usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_039
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_039', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
					  usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_040
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_040', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
					  usage: audio.StreamUsage.STREAM_USAGE_SYSTEM,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_041
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_041', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_RINGTONE,
					  usage: audio.StreamUsage.STREAM_USAGE_UNKNOWN,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_042
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_042', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_RINGTONE,
					  usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_043
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_043', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_RINGTONE,
					  usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_044
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_044', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_RINGTONE,
					  usage: audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_045
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_045', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_RINGTONE,
					  usage: audio.StreamUsage.STREAM_USAGE_ALARM,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_046
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_046', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_RINGTONE,
					  usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_047
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_047', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_RINGTONE,
					  usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_048
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_048', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_RINGTONE,
					  usage: audio.StreamUsage.STREAM_USAGE_SYSTEM,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_049
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_049', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_ULTRASONIC,
					  usage: audio.StreamUsage.STREAM_USAGE_UNKNOWN,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_050
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_050', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_ULTRASONIC,
					  usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_051
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_051', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_ULTRASONIC,
					  usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_052
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_052', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_ULTRASONIC,
					  usage: audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_053
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_053', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_ULTRASONIC,
					  usage: audio.StreamUsage.STREAM_USAGE_ALARM,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_054
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_054', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_ULTRASONIC,
					  usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_055
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_055', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_ULTRASONIC,
					  usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			

			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_056
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_056', 1, async function (done) {
				
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_ULTRASONIC,
					  usage: audio.StreamUsage.STREAM_USAGE_SYSTEM,
					  rendererFlags: 0
					}
				}
				await createAudioRenderer();
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						expect().assertFail();	  
						done();
					}
					  expect(true).assertTrue();
					  done();
					}).catch((err)=>{
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();	
						done();
					})			
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_057
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_057', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_UNKNOWN;
				let Usage = audio.StreamUsage.STREAM_USAGE_UNKNOWN;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_058
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_058', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_UNKNOWN;
				let Usage = audio.StreamUsage.STREAM_USAGE_MEDIA;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_059
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_059', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_UNKNOWN;
				let Usage = audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_060
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_060', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_UNKNOWN;
				let Usage = audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_061
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_061', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_UNKNOWN;
				let Usage = audio.StreamUsage.STREAM_USAGE_ALARM;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_062
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_062', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_UNKNOWN;
				let Usage = audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_063
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_063', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_UNKNOWN;
				let Usage = audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_064
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_064', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_UNKNOWN;
				let Usage = audio.StreamUsage.STREAM_USAGE_SYSTEM;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_065
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_065', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_SPEECH;
				let Usage = audio.StreamUsage.STREAM_USAGE_UNKNOWN;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_066
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_066', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_SPEECH;
				let Usage = audio.StreamUsage.STREAM_USAGE_MEDIA;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_067
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_067', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_SPEECH;
				let Usage = audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_068
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_068', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_SPEECH;
				let Usage = audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_069
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_069', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_SPEECH;
				let Usage = audio.StreamUsage.STREAM_USAGE_ALARM;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_070
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_070', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_SPEECH;
				let Usage = audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_071
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_071', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_SPEECH;
				let Usage = audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_072
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_072', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_SPEECH;
				let Usage = audio.StreamUsage.STREAM_USAGE_SYSTEM;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_073
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_073', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_MUSIC;
				let Usage = audio.StreamUsage.STREAM_USAGE_UNKNOWN;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_074
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_074', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_MUSIC;
				let Usage = audio.StreamUsage.STREAM_USAGE_MEDIA;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_075
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_075', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_MUSIC;
				let Usage = audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_076
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_076', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_MUSIC;
				let Usage = audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_077
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_077', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_MUSIC;
				let Usage = audio.StreamUsage.STREAM_USAGE_ALARM;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_078
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_078', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_MUSIC;
				let Usage = audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_079
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_079', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_MUSIC;
				let Usage = audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_080
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_080', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_MUSIC;
				let Usage = audio.StreamUsage.STREAM_USAGE_SYSTEM;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_081
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_081', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_MOVIE;
				let Usage = audio.StreamUsage.STREAM_USAGE_UNKNOWN;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_082
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_082', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_MOVIE;
				let Usage = audio.StreamUsage.STREAM_USAGE_MEDIA;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_083
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_083', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_MOVIE;
				let Usage = audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_084
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_084', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_MOVIE;
				let Usage = audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_085
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_085', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_MOVIE;
				let Usage = audio.StreamUsage.STREAM_USAGE_ALARM;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_086
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_086', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_MOVIE;
				let Usage = audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_087
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_087', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_MOVIE;
				let Usage = audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_088
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_088', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_MOVIE;
				let Usage = audio.StreamUsage.STREAM_USAGE_SYSTEM;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_089
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_089', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_SONIFICATION;
				let Usage = audio.StreamUsage.STREAM_USAGE_UNKNOWN;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_090
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_090', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_SONIFICATION;
				let Usage = audio.StreamUsage.STREAM_USAGE_MEDIA;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_091
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_091', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_SONIFICATION;
				let Usage = audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_092
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_092', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_SONIFICATION;
				let Usage = audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_093
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_093', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_SONIFICATION;
				let Usage = audio.StreamUsage.STREAM_USAGE_ALARM;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_094
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_094', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_SONIFICATION;
				let Usage = audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_095
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_095', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_SONIFICATION;
				let Usage = audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_096
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_096', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_SONIFICATION;
				let Usage = audio.StreamUsage.STREAM_USAGE_SYSTEM;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_097
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_097', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_RINGTONE;
				let Usage = audio.StreamUsage.STREAM_USAGE_UNKNOWN;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_098
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_098', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_RINGTONE;
				let Usage = audio.StreamUsage.STREAM_USAGE_MEDIA;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_099
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_099', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_RINGTONE;
				let Usage = audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_100
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_100', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_RINGTONE;
				let Usage = audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArraycatch failed");
					expect().assertFail();   
					done();
				})
			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_101
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_101', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_RINGTONE;
				let Usage = audio.StreamUsage.STREAM_USAGE_ALARM;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArraycatch failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArraycatch failed");
					expect().assertFail();   
					done();
				})
			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_102
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_102', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_RINGTONE;
				let Usage = audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArraycatch failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_103
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_103', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_RINGTONE;
				let Usage = audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArraycatch failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_104
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_104', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_RINGTONE;
				let Usage = audio.StreamUsage.STREAM_USAGE_SYSTEM;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArraycatch failed");
					expect().assertFail();   
					done();
				})
			})
		
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_105
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_105', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_ULTRASONIC;
				let Usage = audio.StreamUsage.STREAM_USAGE_UNKNOWN;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_106
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_106', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_ULTRASONIC;
				let Usage = audio.StreamUsage.STREAM_USAGE_MEDIA;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_107
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_107', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_ULTRASONIC;
				let Usage = audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_108
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_108', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_ULTRASONIC;
				let Usage = audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_109
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_109', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_ULTRASONIC;
				let Usage = audio.StreamUsage.STREAM_USAGE_ALARM;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArray failed");
					expect().assertFail();   
					done();
				})
			})
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_110
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_110', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_ULTRASONIC;
				let Usage = audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArraycatch failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_111
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_111', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_ULTRASONIC;
				let Usage = audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArraycatch failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_112
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_112', 1, async function (done) {
				let Type = audio.ContentType.CONTENT_TYPE_ULTRASONIC;
				let Usage = audio.StreamUsage.STREAM_USAGE_SYSTEM;
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					console.log(TAG +"getAudioEffectInfoArray success");
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						expect().assertFail();   
						done();
                    }

					console.log(AudioSceneEffectInfoArray);
					expect(true).assertTrue();
					done();
				}).catch((err)=>{
					console.log(TAG +"getAudioEffectInfoArraycatch failed");
					expect().assertFail();   
					done();
				})
			})
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_113
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_113', 1, async function (done) {
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_MUSIC,
					  usage: audio.StreamUsage.STREAM_USAGE_ALARM,
					  rendererFlags: 0
					}
				}
				let audioEffectModeTest = audio.AudioEffectMode.EFFECT_NONE;
				await createAudioRenderer();
				
				await audioRenderer.setAudioEffectMode(audioEffectModeTest).then(async ()=>{
					await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_NONE){
						console.log(TAG +"getAudioEffectMode error");
						expect().assertFail();	  
						done();
					}
					  
					}).catch((err)=>{
						console.log(TAG +"getAudioEffectMode failed");
						expect().assertFail();	
						done();
					})	
					
		        }).catch((err)=>{
		        	console.log(TAG +"audioEffectMode failed");
		        	expect().assertFail();
					done();				
		        })
				audioEffectModeTest = audio.AudioEffectMode.EFFECT_DEFAULT;
				await audioRenderer.setAudioEffectMode(audioEffectModeTest).then(async ()=>{
					await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						console.log(TAG +"getAudioEffectMode error");
						expect().assertFail();	  
						done();
					}
					  
					}).catch((err)=>{
						console.log(TAG +"getAudioEffectMode failed");
						expect().assertFail();	
						done();
					})	
					
		        }).catch((err)=>{
		        	console.log(TAG +"audioEffectMode failed");
		        	expect().assertFail();
					done();				
		        })
				expect(true).assertTrue();
				done();
						
			})
			
			
			/**
			 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_114
			 *@tc.name		: 
			 *@tc.desc		: getAudioEffectMode func test
			 *@tc.size		: MEDIUM
			 *@tc.type		: Function
			 *@tc.level 	: Level 1
			 */
			it('OH_EFFECTMANAGER_API_FUNC_TEST_114', 1, async function (done) {
				audioRendererOptions  = {
					  streamInfo: {
					  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
					  channels: audio.AudioChannel.CHANNEL_2,
					  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
					  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
					},
					rendererInfo: {
					  content: audio.ContentType.CONTENT_TYPE_MUSIC,
					  usage: audio.StreamUsage.STREAM_USAGE_ALARM,
					  rendererFlags: 0
					}
				}
				//let audioEffectModeTest = audio.AudioEffectMode.EFFECT_NONE;
				await createAudioRenderer();
				let count = 0;
				const promises = []
				for(let i= 0; i<16;i++)
				{
					let audioEffectModeTest = i < 8 ? audio.AudioEffectMode.EFFECT_NONE : audio.AudioEffectMode.EFFECT_DEFAULT;
					audioRenderer.setAudioEffectMode(audioEffectModeTest).then(async ()=>{
						await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
							/*if(audioEffectMode != audio.AudioEffectMode.EFFECT_NONE){
								console.log(TAG +"getAudioEffectMode error");
								expect().assertFail();	  
								done();
							}*/
							  
							}).catch((err)=>{
								console.log(TAG +"getAudioEffectMode failed");
								expect().assertFail();	
								done();
							})	
						count += 1;
						if(count >15){
							expect(true).assertTrue();
							done();
						}
					}).catch((err)=>{
						console.log(TAG +"setAudioEffectMode failed");
						expect().assertFail();
						done();				
					})
				}

				/*
				for(let i= 0; i<16;i++)
				{
					let audioEffectModeTest = audio.AudioEffectMode.EFFECT_DEFAULT;
					audioRenderer.setAudioEffectMode(audioEffectModeTest).then(async ()=>{
						await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
							if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
								console.log(TAG +"getAudioEffectMode error");
								expect().assertFail();	  
								done();
							}
							  
						}).catch((err)=>{
							console.log(TAG +"getAudioEffectMode failed");
							expect().assertFail();	
							done();
						})	
						count += 1;
						if(count >31){
							expect(true).assertTrue();
							done();
						}
					}).catch((err)=>{
						console.log(TAG +"setAudioEffectMode failed");
						expect().assertFail();
						done();				
					})
				}*/		

				
			})
			
			/**
		 *@tc.number	: OH_EFFECTMANAGER_API_FUNC_TEST_115
		 *@tc.name		: 
		 *@tc.desc		: getAudioEffectInfoArray callback interface test
		 *@tc.size		: MEDIUM
		 *@tc.type		: Function
		 *@tc.level 	: Level 1
		 */
		it('OH_EFFECTMANAGER_API_FUNC_TEST_115', 1, async function (done) {	

			let count = 0;
			let Type = audio.ContentType.CONTENT_TYPE_ULTRASONIC;
			let Usage = audio.StreamUsage.STREAM_USAGE_SYSTEM;
			for (let i = 0; i < 16; i++)
			{
				audioSteamManager.getAudioEffectInfoArray(contentType,streamUsage).then((AudioSceneEffectInfoArray)=>{
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray error");
						expect().assertFail();   
						done();
                    }
					count += 1;
					if(count >15){
						expect(true).assertTrue();
						done();
					}
		        }).catch((err)=>{
		        	console.log(TAG +"OH_EFFECTMANAGER_API_FUNC_TEST_115 failed");
		        	expect().assertFail();   
					done();
					return;
		        })
			}				
					
		})
					

		/**
         *@tc.number    : OH_EFFECTMANAGER_API_FUNC_TEST_116
         *@tc.name      : 
         *@tc.desc      : getAudioEffectInfoArray promise time test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_FUNC_TEST_116', 1, async function (done) {
			let count = 0;
			await createAudioRenderer();
			for (let i = 0; i < 16; i++)
			{			
				audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						console.log(TAG +"audioEffectMode failed");
						expect().assertFail();    
						done();
					}
					count += 1;
					if(count >15){
						expect(true).assertTrue();
						done();
					}
		        }).catch((err)=>{
		        	console.log(TAG +"getAudioEffectMode failed");
		        	expect().assertFail();
					done();				
		        })
			}
			
        })
		
		/**
         *@tc.number    : OH_EFFECTMANAGER_API_FUNC_TEST_117
         *@tc.name      : 
         *@tc.desc      : setAudioEffectMode promise test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_FUNC_TEST_117', 1, async function (done) {
			let count = 0;
			await createAudioRenderer();
			let audioEffectModeTest = audio.AudioEffectMode.EFFECT_NONE;
			for (let i = 0; i < 100; i++)
			{			
				await audioRenderer.setAudioEffectMode(audioEffectModeTest).then(async ()=>{
					await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
						if(audioEffectMode != audio.AudioEffectMode.EFFECT_NONE){
							console.log(TAG +"getAudioEffectMode error");
							return;
						}else{
							count += 1;
						}
						  
					}).catch((err)=>{
						console.log(TAG +"getAudioEffectMode failed");
						expect().assertFail();	
						done();
					})	
		        }).catch((err)=>{
		        	console.log(TAG +"audioEffectMode failed");
		        	expect().assertFail();
					done();				
		        })
				
			}
			if(count >99){
				expect(true).assertTrue();
				done();
			}else {
				expect().assertFail();
				done();	
			}
			
        })
		
		
		/**
         *@tc.number    : OH_EFFECTMANAGER_API_FUNC_TEST_118
         *@tc.name      : 
         *@tc.desc      : getAudioEffectMode promise test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_FUNC_TEST_118', 1, async function (done) {
			let count = 0;
			await createAudioRenderer();
			for (let i = 0; i < 100; i++)
			{			
				await audioRenderer.getAudioEffectMode().then((audioEffectMode)=>{
					if(audioEffectMode != audio.AudioEffectMode.EFFECT_DEFAULT){
						console.log(TAG +"audioEffectMode failed");
						return;
					}
					else{
						count += 1;
					}					
		        }).catch((err)=>{
		        	console.log(TAG +"getAudioEffectMode failed");
		        	expect().assertFail();
					done();				
		        })
			}
			if(count >99){
				expect(true).assertTrue();
				done();
			}else {
				expect().assertFail();
				done();	
			}
			
        })
		
		/**
         *@tc.number    : OH_EFFECTMANAGER_API_FUNC_TEST_119
         *@tc.name      : 
         *@tc.desc      : getAudioEffectInfoArray promise test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTMANAGER_API_FUNC_TEST_119', 1, async function (done) {
			let count = 0;
			let Type = audio.ContentType.CONTENT_TYPE_MOVIE;
			let Usage = audio.StreamUsage.STREAM_USAGE_MEDIA;
			for (let i = 0; i < 100; i++)
			{
				await audioSteamManager.getAudioEffectInfoArray(Type,Usage).then((AudioSceneEffectInfoArray)=>{
					if(AudioSceneEffectInfoArray[0] != audio.AudioEffectMode.EFFECT_NONE || AudioSceneEffectInfoArray[1] != audio.AudioEffectMode.EFFECT_DEFAULT)
                    {
						console.log(TAG +"getAudioEffectInfoArray failed");
						return;
                    }else{
						count += 1;
					}
		        }).catch((err)=>{
		        	console.log(TAG +"OH_EFFECTMANAGER_API_FUNC_TEST_119 failed");
		        	expect().assertFail();   
					done();
		        })
			}
			if(count >99){
				expect(true).assertTrue();
				done();
			}else {
				expect().assertFail();
				done();	
			}
			
			
        })
		
		
		
		
		
    })
}