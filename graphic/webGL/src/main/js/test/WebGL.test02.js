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
import app from '@system.app'
import {describe,beforeAll,beforeEach,afterEach,afterAll,it,expect} from '@ohos/hypium'

export default function webgl1Test_webgl2(){
	describe('webgl1Test_webgl2', function() {
		console.info('webgltest start');
		var gl;
		var gl2;

		var indices = new Uint16Array([0, 1, 2, 1, 3, 4]);
		var vertices = new Uint16Array([
			-0.5, 0.5, 0.0,
			0.0, 0.5, 0.0,
			-0.25, 0.25, 0.0,
			0.5, 0.5, 0.0,
			0.25, 0.25, 0.0,
		])

		//顶点着色器程序
		var VSHADER_SOURCE =
			"attribute vec4 a_Position;" +
			"void main() {" +
			//设置坐标
			"gl_Position = a_Position; " +
			//    "gl_PointSize = 10.0;" +
			"} ";

		//片元着色器
		var FSHADER_SOURCE =
			"void main() {" +
			//设置颜色
			"gl_FragColor = vec4(1.0, 0.0, 0.0, 1.0);" +
			"}";

		function globalFunction() {
			const vertexShader = gl.createShader(gl.VERTEX_SHADER);
			gl.shaderSource(vertexShader, VSHADER_SOURCE);
			gl.compileShader(vertexShader);
			const fragmentShader = gl.createShader(gl.FRAGMENT_SHADER);
			gl.shaderSource(fragmentShader, FSHADER_SOURCE);
			gl.compileShader(fragmentShader);
			const programObj = gl.createProgram();
			console.info("testUseProgram has failed for " + programObj)
			const useProgramError1 = gl.getError();
			console.info("useProgramError: " + useProgramError1);
			const renderBufferValue1 = gl.getParameter(gl.CURRENT_PROGRAM);
			console.info("testUseProgram has failed for " + renderBufferValue1)
			gl.attachShader(programObj, vertexShader);
			gl.attachShader(programObj, fragmentShader);
			gl.linkProgram(programObj);
			gl.useProgram(programObj);
			return programObj;
		}


		function createProgram(gl) {
			//顶点着色器程序
			var VSHADER_SOURCE =
				'attribute vec4 a_Position;\n' +
				'void main() {\n' +
				'  gl_Position = a_Position;\n' +
				'}\n';

			// 片元着色器程序
			var FSHADER_SOURCE =
				'precision mediump float;\n' +
				'uniform vec4 u_FragColor;\n' +
				'void main() {\n' +
				'  gl_FragColor = u_FragColor;\n' +
				'}\n';
			var vertexShader = gl.createShader(gl.VERTEX_SHADER);
			gl.shaderSource(vertexShader, VSHADER_SOURCE);
			gl.compileShader(vertexShader);
			var fragmentShader = gl.createShader(gl.FRAGMENT_SHADER);
			gl.shaderSource(fragmentShader, FSHADER_SOURCE);
			gl.compileShader(fragmentShader);
			const programObj = gl.createProgram();
			console.log("testUseProgram has failed for " + programObj)
			const useProgramError1 = gl.getError();
			console.info("useProgramError: " + useProgramError1);
			const renderBufferValue1 = gl.getParameter(gl.CURRENT_PROGRAM);
			console.log("testUseProgram has failed for " + renderBufferValue1)
			gl.attachShader(programObj, vertexShader);
			gl.attachShader(programObj, fragmentShader);
			gl.linkProgram(programObj);
			gl.useProgram(programObj);
			return programObj;
		}

		function initShaders(gl, vshader, fshader) {
			var program = createProgramExternal(gl, vshader, fshader);
			console.log("======createProgram program: " + JSON.stringify(program));

			if (!program) {
				console.log('Failed to create program');
				return false;
			}

			gl.useProgram(program);
			gl.program = program;

			return true;
		}

		function createProgramExternal(gl, vshader, fshader) {
			// Create shader object
			var vertexShader = loadShader(gl, gl.VERTEX_SHADER, vshader);
			console.log("======vertexShader: " + vertexShader);
			var fragmentShader = loadShader(gl, gl.FRAGMENT_SHADER, fshader);
			if (!vertexShader || !fragmentShader) {
				return null;
			}

			// Create a program object
			var program = gl.createProgram();
			console.log("======createProgram program: " + JSON.stringify(program));

			if (!program) {
				return null;
			}

			// Attach the shader objects
			gl.attachShader(program, vertexShader);
			gl.attachShader(program, fragmentShader);

			// Link the program object
			gl.linkProgram(program);

			// Check the result of linking
			var linked = gl.getProgramParameter(program, 0x8B82);
			console.log("======getProgramParameter linked: " + linked);

			const getUniformLocationValue = gl.getUniformLocation(program, "a_Position");
			console.log("======getUniformLocation: " + JSON.stringify(getUniformLocationValue));


			if (!linked) {
				var error = gl.getProgramInfoLog(program);
				console.log('Failed to link program: ' + error);
				gl.deleteProgram(program);
				gl.deleteShader(fragmentShader);
				gl.deleteShader(vertexShader);
				return null;
			}

			return program;
		}

		function loadShader(gl, type, source) {
			console.log("======into loadShader====");
			// Create shader object
			var shader = gl.createShader(type);
			if (shader == null) {
				console.log('unable to create shader');
				return null;
			}

			const isShaderValue = gl.isShader(shader);
			console.log('isShader: ' + isShaderValue);

			// Set the shader program
			gl.shaderSource(shader, source);

			// Compile the shader
			gl.compileShader(shader);

			// Check the result of compilation
			var compiled = gl.getShaderParameter(shader, gl.COMPILE_STATUS);
			if (!compiled) {
				var error = gl.getShaderInfoLog(shader);
				console.log('Failed to compile shader: ' + error);
				gl.deleteShader(shader);
				return null;
			}

			var vertex = gl.getShaderParameter(shader, gl.VERTEX_SHADER);
			console.log('getShaderParameter VERTEX_SHADER: ' + vertex);


			return shader;
		}

		function initVertexBuffers(gl) {
			var vertices = new Float32Array([
				0.0, -1.0, -0.5, 0, 0.5, 0
			]);

			var n = 3; // 点的个数

			// 创建缓冲区对象
			var vertexBuffer = gl.createBuffer();
			if (!vertexBuffer) {
				console.log('Failed to create the buffer object');
				return -1;
			}

			// 将缓冲区对象绑定到目标
			gl.bindBuffer(gl.ARRAY_BUFFER, vertexBuffer);
			// 向缓冲区对象写入数据
			gl.bufferData(gl.ARRAY_BUFFER, vertices.buffer, gl.STATIC_DRAW);

			var aPosition = gl.getAttribLocation(gl.program, 'a_Position');
			console.info("webgl# getAttribLocation getAttribLocation success:" + JSON.stringify(gl.program));
			console.info("webgl# getAttribLocation getAttribLocation success:" + aPosition);
			if (aPosition < 0) {
				console.log('Failed to get the storage location of a_Position');
				return -1;
			}
			// 将缓冲区对象分配给a_Position变量
			gl.vertexAttribPointer(aPosition, 2, gl.FLOAT, false, 0, 0);

			// 连接a_Position变量与分配给它的缓冲区对象
			gl.enableVertexAttribArray(aPosition);

			return n;
		}


		var float1 = new Float32Array([1.1, 1.2, 1.3, 1.4]);
		var int1 = new Int8Array([1, 1, 1, 1]);
		var uint1 = new Uint8Array([1, 1, 1, 1]);
		var float2 = [1.1, 1.2, 1.3, 1.4];
		var int2 = [1, 1, 1, 1];
		var uint2 = [1, 1, 1, 1];

		function initContext() {
			console.info('initContext start');
			// 获取canvas元素
			const el = global.el;
			const el2 = global.el2;
			// 获取webgl上下文
			gl = el.getContext('webgl');
			if (!gl) {
				console.log('webgltest Failed to get the rendering context for WebGL');
			}
			gl2 = el2.getContext('webgl2');
			if (!gl) {
				console.log('webgltest Failed to get the rendering context for WebGL2');
			}
			console.info('webgltest initContext finish');
		}

		function deleteContext() {
			if (gl != null) {
				gl = null;
				console.info("webgltest gl has null");
			}
			if (gl2 != null) {
				console.info("webgltest gl2 has null");
				gl2 = null;
			}
		}

		/**
		 * run before testClass
		 */
		beforeAll(async function(done) {
			console.info('webgltest beforeAll called');
			initContext();
			done();
		});

		/**
		 * run after testClass
		 */
		afterAll(async function(done) {
			console.info('webgltest afterEach called');
			deleteContext();
			done();
		})

		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_0100
		 * @tc.name webgl_test_getQuery
		 * @tc.desc Test getQuery.
		 */
		it('webgl_test_getQuery', 0, async function(done) {
			console.info("webgltest into getQuery");

			var query = gl2.createQuery();
			gl2.beginQuery(0x8C2F, query);

			var currentQuery = gl2.getQuery(0x8C2F, 0x8865);
			const isQuery1 = gl2.isQuery(currentQuery);
			console.info("webgltest createQuery isQuery1: " + isQuery1);

			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_0200
		 * @tc.name webgl_test_isQuery
		 * @tc.desc Test isQuery.
		 */
		it('webgl_test_isQuery', 0, async function(done) {
			console.info("webgltest into isQuery");
			const query = gl2.createQuery();
			gl2.beginQuery(0x8C2F, query);

			const currentQuery = gl2.getQuery(0x8C2F, 0x8865);
			const isQuery1 = gl2.isQuery(currentQuery);
			console.info("webgltest createQuery isQuery1: " + isQuery1);

			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_0300
		 * @tc.name webgl_test_isQuery_2
		 * @tc.desc Test isQuery.
		 */
		it('webgl_test_isQuery_2', 0, async function(done) {
			console.info("webgltest into isQuery");
			const query = gl2.createQuery();

			const isQuery1 = gl2.isQuery(query);
			console.info("webgltest createQuery isQuery1: " + isQuery1);

			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_0400
		 * @tc.name webgl_test_endQuery
		 * @tc.desc Test endQuery.
		 */
		it('webgl_test_endQuery', 0, async function(done) {
			console.info("webgltest into endQuery");

			var query = gl2.createQuery();
			gl2.beginQuery(0x8C2F, query);

			const currentQuery = gl2.getQuery(0x8C2F, 0x8865);
			const isQuery1 = gl2.isQuery(currentQuery);
			console.info("webgltest createQuery isQuery1: " + isQuery1);


			gl2.endQuery(0x8C2F);

			const isQuery2 = gl2.isQuery(currentQuery);
			console.info("webgltest createQuery isQuery2: " + isQuery2);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_0500
		 * @tc.name webgl_test_getQueryParameter
		 * @tc.desc Test getQueryParameter.
		 */
		it('webgl_test_getQueryParameter', 0, async function(done) {
			console.info("webgltest into getQueryParameter");
			var query = gl2.createQuery();
			gl2.beginQuery(0x8C2F, query);

			var currentQuery = gl2.getQuery(0x8C2F, 0x8865);
			const isQuery1 = gl2.isQuery(currentQuery);
			console.info("webgltest createQuery isQuery1: " + isQuery1);


			// 返回一个GLboolean 指示查询结果是否可用。
			var result = gl2.getQueryParameter(currentQuery, gl2.QUERY_RESULT_AVAILABLE);

			console.info("webgltest createQuery beginQuery getQueryParameter: " + result);

			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_0600
		 * @tc.name webgl_test_getQueryParameter2
		 * @tc.desc Test getQueryParameter.
		 */
		it('webgl_test_getQueryParameter2', 0, async function(done) {
			console.info("webgltest into getQueryParameter");
			var query = gl2.createQuery();
			gl2.beginQuery(0x8C2F, query);

			var currentQuery = gl2.getQuery(0x8C2F, gl2.CURRENT_QUERY);
			const isQuery1 = gl2.isQuery(currentQuery);
			console.info("webgltest createQuery isQuery1: " + isQuery1);


			// 返回一个GLboolean 指示查询结果是否可用。
			var result = gl2.getQueryParameter(currentQuery, gl2.QUERY_RESULT);

			console.info("webgltest createQuery beginQuery getQueryParameter: " + result);

			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_0700
		 * @tc.name webgl_test_deleteQuery
		 * @tc.desc Test deleteQuery.
		 */
		it('webgl_test_deleteQuery', 0, async function(done) {
			console.info("webgltest into deleteQuery");

			var query = gl2.createQuery();
			gl2.beginQuery(0x8C2F, query);

			const currentQuery = gl2.getQuery(0x8C2F, 0x8865);
			const isQuery1 = gl2.isQuery(currentQuery);
			console.info("webgltest createQuery isQuery1: " + isQuery1);


			gl2.deleteQuery(currentQuery);

			const isQuery2 = gl2.isQuery(currentQuery);
			console.info("webgltest createQuery deleteQuery isQuery2: " + isQuery2);


			done();
		});

		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_0800
		 * @tc.name webgl_test_createSampler
		 * @tc.desc Test createSampler.
		 */
		it('webgl_test_createSampler', 0, async function(done) {
			console.info("webgltest into createSampler");
			const sampler = gl2.createSampler();
			const isSampler1 = gl2.isSampler(sampler);
			console.info("webgltest createSampler isSampler1: " + isSampler1);


			gl2.bindSampler(0, sampler);
			const isSampler2 = gl2.isSampler(sampler);
			console.info("webgltest createSampler bindSampler isSampler2: " + isSampler2);


			gl2.deleteSampler(sampler);
			const isSampler3 = gl2.isSampler(sampler);
			console.info("webgltest createSampler bindSampler deleteSampler isSampler3: " + isSampler3);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_0900
		 * @tc.name webgl_test_samplerParameterf
		 * @tc.desc Test samplerParameterf.
		 */
		it('webgl_test_samplerParameterf', 0, async function(done) {
			console.info("webgltest into samplerParameterf");

			let sampler = gl2.createSampler();
			//        gl2.bindSampler(0, sampler);
			gl2.samplerParameterf(sampler, gl.TEXTURE_MAG_FILTER, gl.NEAREST);

			let errorCode = gl.getError();
			console.info("webgltest samplerParameterf getError: " + errorCode);

			gl2.deleteSampler(sampler);
			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_1000
		 * @tc.name webgl_test_samplerParameteri
		 * @tc.desc Test samplerParameteri.
		 */
		it('webgl_test_samplerParameteri', 0, async function(done) {
			console.info("webgltest into samplerParameteri");
			let sampler = gl2.createSampler();
			gl2.samplerParameteri(sampler, gl.TEXTURE_MAG_FILTER, gl.NEAREST);

			let errorCode = gl.getError();
			console.info("webgltest samplerParameteri getError: " + errorCode);

			gl2.deleteSampler(sampler);
			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_1100
		 * @tc.name webgl_test_deleteSampler
		 * @tc.desc Test deleteSampler.
		 */
		it('webgl_test_deleteSampler', 0, async function(done) {
			console.info("webgltest into deleteSampler");
			const sampler = gl2.createSampler();
			const isSampler1 = gl2.isSampler(sampler);
			console.info("webgltest createSampler isSampler1: " + isSampler1);


			gl2.bindSampler(0, sampler);
			const isSampler2 = gl2.isSampler(sampler);
			console.info("webgltest createSampler bindSampler isSampler2: " + isSampler2);


			gl2.deleteSampler(sampler);
			const isSampler3 = gl2.isSampler(sampler);
			console.info("webgltest createSampler bindSampler deleteSampler isSampler3: " + isSampler3);

			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_1200
		 * @tc.name webgl_test_isSampler
		 * @tc.desc Test isSampler.
		 */
		it('webgl_test_isSampler', 0, async function(done) {
			console.info("webgltest into isSampler");
			const sampler = gl2.createSampler();
			const isSampler1 = gl2.isSampler(sampler);
			console.info("webgltest createSampler isSampler1: " + isSampler1);


			gl2.bindSampler(0, sampler);
			const isSampler2 = gl2.isSampler(sampler);
			console.info("webgltest createSampler bindSampler isSampler2: " + isSampler2);


			gl2.deleteSampler(sampler);
			const isSampler3 = gl2.isSampler(sampler);
			console.info("webgltest createSampler bindSampler deleteSampler isSampler3: " + isSampler3);

			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_1300
		 * @tc.name webgl_test_isSampler_2
		 * @tc.desc Test isSampler.
		 */
		it('webgl_test_isSampler_2', 0, async function(done) {

			console.info("webgltest into isSampler");
			const sampler = gl2.createSampler();

			gl2.bindSampler(0, sampler);
			const isSampler2 = gl2.isSampler(sampler);
			console.info("webgltest createSampler bindSampler isSampler2: " + isSampler2);


			gl2.deleteSampler(sampler);
			const isSampler3 = gl2.isSampler(sampler);
			console.info("webgltest createSampler bindSampler deleteSampler isSampler3: " + isSampler3);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_1400
		 * @tc.name webgl_test_bindSampler
		 * @tc.desc Test bindSampler.
		 */
		it('webgl_test_bindSampler', 0, async function(done) {

			console.info("webgltest into bindSampler");
			const sampler = gl2.createSampler();
			const isSampler1 = gl2.isSampler(sampler);
			console.info("webgltest createSampler isSampler1: " + isSampler1);


			gl2.bindSampler(0, sampler);
			const isSampler2 = gl2.isSampler(sampler);
			console.info("webgltest createSampler bindSampler isSampler2: " + isSampler2);


			gl2.deleteSampler(sampler);
			const isSampler3 = gl2.isSampler(sampler);
			console.info("webgltest createSampler bindSampler deleteSampler isSampler3: " + isSampler3);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_1500
		 * @tc.name webgl_test_getSamplerParameter_1
		 * @tc.desc Test getSamplerParameter.
		 */
		it('webgl_test_getSamplerParameter_1', 0, async function(done) {

			console.info("webgltest into getSamplerParameter");

			let sampler = gl2.createSampler();
			//        const samplerParameter = gl2.getSamplerParameter(sampler, gl.TEXTURE_COMPARE_FUNC);

			const samplerParameter = gl2.getSamplerParameter(sampler, 0x884D);

			console.info("webgltest createSampler getSamplerParameter_1: " + samplerParameter);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_1600
		 * @tc.name webgl_test_getSamplerParameter_2
		 * @tc.desc Test getSamplerParameter.
		 */
		it('webgl_test_getSamplerParameter_2', 0, async function(done) {

			console.info("webgltest into getSamplerParameter");

			let sampler = gl2.createSampler();
			const samplerParameter = gl2.getSamplerParameter(sampler, 0x884C);

			console.info("webgltest createSampler getSamplerParameter: " + samplerParameter);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_1700
		 * @tc.name webgl_test_getSamplerParameter_3
		 * @tc.desc Test getSamplerParameter.
		 */
		it('webgl_test_getSamplerParameter_3', 0, async function(done) {

			console.info("webgltest into getSamplerParameter");

			let sampler = gl2.createSampler();
			const samplerParameter = gl2.getSamplerParameter(sampler, gl.TEXTURE_MAG_FILTER);

			console.info("webgltest createSampler getSamplerParameter: " + samplerParameter);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_1800
		 * @tc.name webgl_test_getSamplerParameter_4
		 * @tc.desc Test getSamplerParameter.
		 */
		it('webgl_test_getSamplerParameter_4', 0, async function(done) {

			console.info("webgltest into getSamplerParameter");

			let sampler = gl2.createSampler();
			const samplerParameter = gl2.getSamplerParameter(sampler, 0x813B);

			console.info("webgltest createSampler getSamplerParameter: " + samplerParameter);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_1900
		 * @tc.name webgl_test_getSamplerParameter_5
		 * @tc.desc Test getSamplerParameter.
		 */
		it('webgl_test_getSamplerParameter_5', 0, async function(done) {

			console.info("webgltest into getSamplerParameter");

			let sampler = gl2.createSampler();
			const samplerParameter = gl2.getSamplerParameter(sampler, gl.TEXTURE_MIN_FILTER);

			console.info("webgltest createSampler getSamplerParameter: " + samplerParameter);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_2000
		 * @tc.name webgl_test_getSamplerParameter_6
		 * @tc.desc Test getSamplerParameter.
		 */
		it('webgl_test_getSamplerParameter_6', 0, async function(done) {

			console.info("webgltest into getSamplerParameter");

			let sampler = gl2.createSampler();
			const samplerParameter = gl2.getSamplerParameter(sampler, 0x813A);

			console.info("webgltest createSampler getSamplerParameter: " + samplerParameter);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_2100
		 * @tc.name webgl_test_getSamplerParameter_7
		 * @tc.desc Test getSamplerParameter.
		 */
		it('webgl_test_getSamplerParameter_7', 0, async function(done) {

			console.info("webgltest into getSamplerParameter");

			let sampler = gl2.createSampler();
			const samplerParameter = gl2.getSamplerParameter(sampler, 0x8072);

			console.info("webgltest createSampler getSamplerParameter: " + samplerParameter);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_2200
		 * @tc.name webgl_test_getSamplerParameter_8
		 * @tc.desc Test getSamplerParameter.
		 */
		it('webgl_test_getSamplerParameter_8', 0, async function(done) {

			console.info("webgltest into getSamplerParameter");

			let sampler = gl2.createSampler();
			const samplerParameter = gl2.getSamplerParameter(sampler, gl.TEXTURE_WRAP_S);

			console.info("webgltest createSampler getSamplerParameter: " + samplerParameter);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_2300
		 * @tc.name webgl_test_fenceSync
		 * @tc.desc Test fenceSync.
		 */
		it('webgl_test_fenceSync', 0, async function(done) {

			console.info("webgltest into fenceSync");

			let sync = gl2.fenceSync(0x9117, 0);
			let status = gl2.clientWaitSync(sync, 0, 0);
			gl2.waitSync(sync, 0, -1);
			const isSync1 = gl2.isSync(sync);
			console.info("webgltest fenceSync isSync1: " + isSync1);


			gl2.deleteSync(sync);

			const isSync2 = gl2.isSync(sync);
			console.info("webgltest fenceSync deleteSync isSync2: " + isSync2);



			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_2400
		 * @tc.name webgl_test_clientWaitSync
		 * @tc.desc Test clientWaitSync.
		 */
		it('webgl_test_clientWaitSync', 0, async function(done) {

			console.info("webgltest into clientWaitSync");
			let sync = gl2.fenceSync(0x9117, 0);
			let status = gl2.clientWaitSync(sync, 0, 0);
			gl2.waitSync(sync, 0, -1);
			const isSync1 = gl2.isSync(sync);
			console.info("webgltest fenceSync isSync1: " + isSync1);


			console.info("webgltest fenceSync clientWaitSync: " + status);
			let statusFlag = false;
			if (status == gl2.ALREADY_SIGNALED || status == gl2.TIMEOUT_EXPIRED ||
				status == gl.CONDITION_SATISFIED || status == gl.WAIT_FAILED) {
				statusFlag = true;}


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_2500
		 * @tc.name webgl_test_waitSync
		 * @tc.desc Test waitSync.
		 */
		it('webgl_test_waitSync', 0, async function(done) {

			console.info("webgltest into waitSync");

			let sync = gl2.fenceSync(gl.SYNC_GPU_COMMANDS_COMPLETE, 0);
			gl2.waitSync(sync, 0, gl.TIMEOUT_IGNORED);

			let errorCode = gl.getError();
			console.info("webgltest framebufferTexture2D getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_2600
		 * @tc.name webgl_test_isSync
		 * @tc.desc Test isSync.
		 */
		it('webgl_test_isSync', 0, async function(done) {

			console.info("webgltest into isSync");
			let sync = gl2.fenceSync(0x9117, 0);
			let status = gl2.clientWaitSync(sync, 0, 0);
			gl2.waitSync(sync, 0, -1);
			const isSync1 = gl2.isSync(sync);
			console.info("webgltest fenceSync isSync1: " + isSync1);


			gl2.deleteSync(sync);

			const isSync2 = gl2.isSync(sync);
			console.info("webgltest fenceSync deleteSync isSync2: " + isSync2);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_2700
		 * @tc.name webgl_test_getSyncParameter
		 * @tc.desc Test getSyncParameter.
		 */
		it('webgl_test_getSyncParameter', 0, async function(done) {

			console.info("webgltest into getSyncParameter");

			console.info("webgltest into isSync");
			let sync = gl2.fenceSync(0x9117, 0);
			let status = gl2.clientWaitSync(sync, 0, 0);
			gl2.waitSync(sync, 0, -1);
			const isSync1 = gl2.isSync(sync);
			console.info("webgltest fenceSync isSync1: " + isSync1);

			const syncParameter = gl2.getSyncParameter(sync, 0x9112);

			console.info("webgltest fenceSync getSyncParameter: " + syncParameter);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_2800
		 * @tc.name webgl_test_getSyncParameter2
		 * @tc.desc Test getSyncParameter.
		 */
		it('webgl_test_getSyncParameter2', 0, async function(done) {

			console.info("webgltest into getSyncParameter");

			console.info("webgltest into isSync");
			let sync = gl2.fenceSync(0x9117, 0);
			let status = gl2.clientWaitSync(sync, 0, 0);
			gl2.waitSync(sync, 0, -1);
			const isSync1 = gl2.isSync(sync);
			console.info("webgltest fenceSync isSync1: " + isSync1);


			const syncParameter = gl2.getSyncParameter(sync, 0x9114);

			console.info("webgltest fenceSync getSyncParameter: " + syncParameter);
			let syncParameterFlag = false;

			if (syncParameter == gl2.SIGNALED || syncParameter == gl2.UNSIGNALED) {
				syncParameterFlag = true;
			}


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_2900
		 * @tc.name webgl_test_getSyncParameter3
		 * @tc.desc Test getSyncParameter.
		 */
		it('webgl_test_getSyncParameter3', 0, async function(done) {

			console.info("webgltest into getSyncParameter");

			let sync = gl2.fenceSync(0x9117, 0);
			let status = gl2.clientWaitSync(sync, 0, 0);
			gl2.waitSync(sync, 0, -1);
			const isSync1 = gl2.isSync(sync);
			console.info("webgltest fenceSync isSync1: " + isSync1);

			const syncParameter = gl2.getSyncParameter(sync, 0x9113);

			console.info("webgltest fenceSync getSyncParameter: " + syncParameter);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_3000
		 * @tc.name webgl_test_getSyncParameter4
		 * @tc.desc Test getSyncParameter.
		 */
		it('webgl_test_getSyncParameter4', 0, async function(done) {

			console.info("webgltest into getSyncParameter");

			let sync = gl2.fenceSync(0x9117, 0);
			let status = gl2.clientWaitSync(sync, 0, 0);
			gl2.waitSync(sync, 0, -1);
			const isSync1 = gl2.isSync(sync);
			console.info("webgltest fenceSync isSync1: " + isSync1);

			const syncParameter = gl2.getSyncParameter(sync, 0x9115);

			console.info("webgltest fenceSync getSyncParameter: " + syncParameter);
			// The webgl interface transparently transmits opengl.Therefore, only need to verify the interface does not crash.
			const notCrash = true;

			for(let err; (err = gl.getError()) != gl.NO_ERROR;) {}

			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_3100
		 * @tc.name webgl_test_deleteSync
		 * @tc.desc Test deleteSync.
		 */
		it('webgl_test_deleteSync', 0, async function(done) {

			console.info("webgltest into deleteSync");
			let sync = gl2.fenceSync(0x9117, 0);
			let status = gl2.clientWaitSync(sync, 0, 0);
			gl2.waitSync(sync, 0, -1);
			const isSync1 = gl2.isSync(sync);
			console.info("webgltest fenceSync isSync1: " + isSync1);


			gl2.deleteSync(sync);

			const isSync2 = gl2.isSync(sync);
			console.info("webgltest fenceSync deleteSync isSync2: " + isSync2);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_3200
		 * @tc.name webgl_test_createTransformFeedback
		 * @tc.desc Test createTransformFeedback.
		 */
		it('webgl_test_createTransformFeedback', 0, async function(done) {

			console.info("webgltest into createTransformFeedback");

			const transformFeedback = gl2.createTransformFeedback();


			console.info("webgltest into createTransformFeedback: " + transformFeedback)

			gl2.bindTransformFeedback(gl2.TRANSFORM_FEEDBACK, transformFeedback);

			gl2.beginTransformFeedback(gl2.TRIANGLES);

			const isTransformFeedback2 = gl2.isTransformFeedback(transformFeedback);

			console.info("BindTransformFeedback  : " + isTransformFeedback2);


			gl2.deleteTransformFeedback(transformFeedback);
			const isTransformFeedback3 = gl2.isTransformFeedback(transformFeedback);
			console.info("webgltest createTransformFeedback bindTransformFeedback " +
				"deleteTransformFeedback isTransformFeedback3: " + isTransformFeedback3);



			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_3300
		 * @tc.name webgl_test_isTransformFeedback
		 * @tc.desc Test isTransformFeedback.
		 */
		it('webgl_test_isTransformFeedback', 0, async function(done) {

			console.info("webgltest into isTransformFeedback");
			let transformFeedback = gl2.createTransformFeedback();
			const isTransformFeedback1 = gl2.isTransformFeedback(transformFeedback);
			console.info("webgltest createTransformFeedback isTransformFeedback1: " +
				isTransformFeedback1);


			gl2.bindTransformFeedback(gl2.TRANSFORM_FEEDBACK, transformFeedback);

			const isTransformFeedback2 = gl2.isTransformFeedback(transformFeedback);
			console.info(
				"webgltest createTransformFeedback bindTransformFeedback isTransformFeedback2: " +
				isTransformFeedback2);


			gl2.deleteTransformFeedback(transformFeedback);
			const isTransformFeedback3 = gl2.isTransformFeedback(transformFeedback);
			console.info("webgltest createTransformFeedback bindTransformFeedback " +
				"deleteTransformFeedback isTransformFeedback3: " + isTransformFeedback3);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_3400
		 * @tc.name webgl_test_bindTransformFeedback
		 * @tc.desc Test bindTransformFeedback.
		 */
		it('webgl_test_bindTransformFeedback', 0, async function(done) {

			console.info("webgltest into bindTransformFeedback");
			let transformFeedback = gl2.createTransformFeedback();
			const isTransformFeedback1 = gl2.isTransformFeedback(transformFeedback);
			console.info("webgltest createTransformFeedback isTransformFeedback1: " +
				isTransformFeedback1);


			gl2.bindTransformFeedback(gl2.TRANSFORM_FEEDBACK, transformFeedback);

			const isTransformFeedback2 = gl2.isTransformFeedback(transformFeedback);
			console.info(
				"webgltest createTransformFeedback bindTransformFeedback isTransformFeedback2: " +
				isTransformFeedback2);


			gl2.deleteTransformFeedback(transformFeedback);
			const isTransformFeedback3 = gl2.isTransformFeedback(transformFeedback);
			console.info(
				"webgltest createTransformFeedback bindTransformFeedback deleteTransformFeedback " +
				"isTransformFeedback3: " + isTransformFeedback3);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_3500
		 * @tc.name webgl_test_beginTransformFeedback
		 * @tc.desc Test beginTransformFeedback.
		 */
		it('webgl_test_beginTransformFeedback', 0, async function(done) {

			console.info("webgltest into beginTransformFeedback");

			let transformFeedback = gl2.createTransformFeedback();
			//        gl2.bindTransformFeedback(gl2.TRANSFORM_FEEDBACK, transformFeedback);
			gl2.beginTransformFeedback(gl2.TRIANGLES);


			let errorCode = gl.getError();
			console.info("webgltest framebufferTexture2D getError: " + errorCode);


			done();
		});

		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_3600
		 * @tc.name webgl_test_deleteTransformFeedback
		 * @tc.desc Test deleteTransformFeedback.
		 */
		it('webgl_test_deleteTransformFeedback', 0, async function(done) {

			console.info("webgltest into deleteTransformFeedback");
			const transformFeedback = gl2.createTransformFeedback();

			gl2.bindTransformFeedback(gl2.TRANSFORM_FEEDBACK, transformFeedback);

			const isTransformFeedback2 = gl2.isTransformFeedback(transformFeedback);
			console.info(
				"webgltest createTransformFeedback bindTransformFeedback isTransformFeedback2: " +
				isTransformFeedback2);


			gl2.deleteTransformFeedback(transformFeedback);
			const isTransformFeedback3 = gl2.isTransformFeedback(transformFeedback);
			console.info(
				"webgltest createTransformFeedback bindTransformFeedback deleteTransformFeedback " +
				"isTransformFeedback3: " + isTransformFeedback3);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_3700
		 * @tc.name webgl_test_getFragDataLocation
		 * @tc.desc Test getFragDataLocation.
		 */
		it('webgl_test_getFragDataLocation', 0, async function(done) {

			console.info("webgltest into getFragDataLocation");

			//顶点着色器程序
			var VSHADER_SOURCE =
				'attribute vec4 a_Position;\n' +
				'void main() {\n' +
				'  gl_Position = a_Position;\n' +
				'}\n';

			// 片元着色器程序
			var FSHADER_SOURCE =
				'precision mediump float;\n' +
				'uniform vec4 u_FragColor;\n' +
				'void main() {\n' +
				'  gl_FragColor = u_FragColor;\n' +
				'}\n';
			var vertexShader = gl.createShader(gl.VERTEX_SHADER);
			gl.shaderSource(vertexShader, VSHADER_SOURCE);
			gl.compileShader(vertexShader);
			var fragmentShader = gl.createShader(gl.FRAGMENT_SHADER);
			gl.shaderSource(fragmentShader, FSHADER_SOURCE);
			gl.compileShader(fragmentShader);
			const programObj = gl.createProgram();
			console.log("testUseProgram has failed for " + programObj)
			const useProgramError1 = gl.getError();
			console.info("useProgramError: " + useProgramError1);
			const renderBufferValue1 = gl.getParameter(gl.CURRENT_PROGRAM);
			console.log("testUseProgram has failed for " + renderBufferValue1)
			gl.attachShader(programObj, vertexShader);
			gl.attachShader(programObj, fragmentShader);
			gl.linkProgram(programObj);
			gl.useProgram(programObj);

			gl2.getFragDataLocation(programObj, 'a_Position');

			let errorCode = gl.getError();
			console.info("webgltest getFragDataLocation getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_3800
		 * @tc.name webgl_test_uniform1ui
		 * @tc.desc Test uniform1ui.
		 */
		it('webgl_test_uniform1ui', 0, async function(done) {

			console.info("webgltest into uniform1ui");

			//顶点着色器程序
			var VSHADER_SOURCE =
				'attribute vec4 a_Position;\n' +
				'void main() {\n' +
				'  gl_Position = a_Position;\n' +
				'}\n';

			// 片元着色器程序
			var FSHADER_SOURCE =
				'precision mediump float;\n' +
				'uniform vec4 u_FragColor;\n' +
				'void main() {\n' +
				'  gl_FragColor = u_FragColor;\n' +
				'}\n';
			var vertexShader = gl.createShader(gl.VERTEX_SHADER);
			gl.shaderSource(vertexShader, VSHADER_SOURCE);
			gl.compileShader(vertexShader);
			var fragmentShader = gl.createShader(gl.FRAGMENT_SHADER);
			gl.shaderSource(fragmentShader, FSHADER_SOURCE);
			gl.compileShader(fragmentShader);
			const programObj = gl.createProgram();
			console.log("testUseProgram has failed for " + programObj)
			const useProgramError1 = gl.getError();
			console.info("useProgramError: " + useProgramError1);
			const renderBufferValue1 = gl.getParameter(gl.CURRENT_PROGRAM);
			console.log("testUseProgram has failed for " + renderBufferValue1)
			gl.attachShader(programObj, vertexShader);
			gl.attachShader(programObj, fragmentShader);
			gl.linkProgram(programObj);
			gl.useProgram(programObj);

			const location = gl.getUniformLocation(programObj, "a_Position");
			gl2.uniform1ui(location, 1.8);

			let errorCode = gl.getError();
			console.info("webgltest uniform1ui getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_3900
		 * @tc.name webgl_test_uniform1ui_2
		 * @tc.desc Test uniform1ui.
		 */
		it('webgl_test_uniform1ui_2', 0, async function(done) {

			console.info("webgltest into uniform1ui");

			const programObj = gl.createProgram();
			console.log("testUseProgram has failed for " + programObj)

			const location = gl.getUniformLocation(programObj, "v_color");
			gl2.uniform1ui(location, 1.8);

			let errorCode = gl.getError();
			console.info("webgltest uniform1ui getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_4000
		 * @tc.name webgl_test_uniform2ui
		 * @tc.desc Test uniform2ui.
		 */
		it('webgl_test_uniform2ui', 0, async function(done) {

			console.info("webgltest into uniform2ui");

			//顶点着色器程序
			var VSHADER_SOURCE =
				'attribute vec4 a_Position;\n' +
				'void main() {\n' +
				'  gl_Position = a_Position;\n' +
				'}\n';

			// 片元着色器程序
			var FSHADER_SOURCE =
				'precision mediump float;\n' +
				'uniform vec4 u_FragColor;\n' +
				'void main() {\n' +
				'  gl_FragColor = u_FragColor;\n' +
				'}\n';
			var vertexShader = gl.createShader(gl.VERTEX_SHADER);
			gl.shaderSource(vertexShader, VSHADER_SOURCE);
			gl.compileShader(vertexShader);
			var fragmentShader = gl.createShader(gl.FRAGMENT_SHADER);
			gl.shaderSource(fragmentShader, FSHADER_SOURCE);
			gl.compileShader(fragmentShader);
			const programObj = gl.createProgram();
			console.log("testUseProgram has failed for " + programObj)
			const useProgramError1 = gl.getError();
			console.info("useProgramError: " + useProgramError1);
			const renderBufferValue1 = gl.getParameter(gl.CURRENT_PROGRAM);
			console.log("testUseProgram has failed for " + renderBufferValue1)
			gl.attachShader(programObj, vertexShader);
			gl.attachShader(programObj, fragmentShader);
			gl.linkProgram(programObj);
			gl.useProgram(programObj);

			const location = gl.getUniformLocation(programObj, "a_Position");
			const a = gl2.uniform2ui(location, 2.8, 2.8);

			let errorCode = gl.getError();
			console.info("webgltest uniform2ui getError: " + errorCode);


			done();
		});

		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_4100
		 * @tc.name webgl_test_uniform2ui_2
		 * @tc.desc Test uniform2ui.
		 */
		it('webgl_test_uniform2ui_2', 0, async function(done) {

			console.info("webgltest into uniform2ui");

			const programObj = gl.createProgram();
			console.log("testUseProgram has failed for " + programObj)

			const location = gl.getUniformLocation(programObj, "v_color");
			const a = gl2.uniform2ui(location, 2.8, 2.8);

			let errorCode = gl.getError();
			console.info("webgltest uniform2ui getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_4200
		 * @tc.name webgl_test_uniform3ui
		 * @tc.desc Test uniform3ui.
		 */
		it('webgl_test_uniform3ui', 0, async function(done) {

			console.info("webgltest into uniform3ui");

			//顶点着色器程序
			var VSHADER_SOURCE =
				'attribute vec4 a_Position;\n' +
				'void main() {\n' +
				'  gl_Position = a_Position;\n' +
				'}\n';

			// 片元着色器程序
			var FSHADER_SOURCE =
				'precision mediump float;\n' +
				'uniform vec4 u_FragColor;\n' +
				'void main() {\n' +
				'  gl_FragColor = u_FragColor;\n' +
				'}\n';
			var vertexShader = gl.createShader(gl.VERTEX_SHADER);
			gl.shaderSource(vertexShader, VSHADER_SOURCE);
			gl.compileShader(vertexShader);
			var fragmentShader = gl.createShader(gl.FRAGMENT_SHADER);
			gl.shaderSource(fragmentShader, FSHADER_SOURCE);
			gl.compileShader(fragmentShader);
			const programObj = gl.createProgram();
			console.log("testUseProgram has failed for " + programObj)
			const useProgramError1 = gl.getError();
			console.info("useProgramError: " + useProgramError1);
			const renderBufferValue1 = gl.getParameter(gl.CURRENT_PROGRAM);
			console.log("testUseProgram has failed for " + renderBufferValue1)
			gl.attachShader(programObj, vertexShader);
			gl.attachShader(programObj, fragmentShader);
			gl.linkProgram(programObj);
			gl.useProgram(programObj);

			const location = gl.getUniformLocation(programObj, "a_Position");
			const a = gl2.uniform3ui(location, 3.8, 3.8, 3.8);

			let errorCode = gl.getError();
			console.info("webgltest uniform3ui getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_4300
		 * @tc.name webgl_test_uniform3ui_2
		 * @tc.desc Test uniform3ui.
		 */
		it('webgl_test_uniform3ui_2', 0, async function(done) {

			console.info("webgltest into uniform3ui");

			const programObj = gl.createProgram();
			console.log("testUseProgram has failed for " + programObj)

			const location = gl.getUniformLocation(programObj, "v_color");
			const a = gl2.uniform3ui(location, 3.8, 3.8, 3.8);

			let errorCode = gl.getError();
			console.info("webgltest uniform3ui getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_4400
		 * @tc.name webgl_test_uniform4ui
		 * @tc.desc Test uniform4ui.
		 */
		it('webgl_test_uniform4ui', 0, async function(done) {

			console.info("webgltest into uniform4ui");

			//顶点着色器程序
			var VSHADER_SOURCE =
				'attribute vec4 a_Position;\n' +
				'void main() {\n' +
				'  gl_Position = a_Position;\n' +
				'}\n';

			// 片元着色器程序
			var FSHADER_SOURCE =
				'precision mediump float;\n' +
				'uniform vec4 u_FragColor;\n' +
				'void main() {\n' +
				'  gl_FragColor = u_FragColor;\n' +
				'}\n';
			var vertexShader = gl.createShader(gl.VERTEX_SHADER);
			gl.shaderSource(vertexShader, VSHADER_SOURCE);
			gl.compileShader(vertexShader);
			var fragmentShader = gl.createShader(gl.FRAGMENT_SHADER);
			gl.shaderSource(fragmentShader, FSHADER_SOURCE);
			gl.compileShader(fragmentShader);
			const programObj = gl.createProgram();
			console.log("testUseProgram has failed for " + programObj)
			const useProgramError1 = gl.getError();
			console.info("useProgramError: " + useProgramError1);
			const renderBufferValue1 = gl.getParameter(gl.CURRENT_PROGRAM);
			console.log("testUseProgram has failed for " + renderBufferValue1)
			gl.attachShader(programObj, vertexShader);
			gl.attachShader(programObj, fragmentShader);
			gl.linkProgram(programObj);
			gl.useProgram(programObj);

			const location = gl.getUniformLocation(programObj, "a_Position");
			const a = gl2.uniform4ui(location, 4.8, 4.8, 4.8, 4.8);

			let errorCode = gl.getError();
			console.info("webgltest uniform4ui getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_4500
		 * @tc.name webgl_test_uniform4ui_2
		 * @tc.desc Test uniform4ui.
		 */
		it('webgl_test_uniform4ui_2', 0, async function(done) {

			console.info("webgltest into uniform4ui");

			const programObj = gl.createProgram();
			console.log("testUseProgram has failed for " + programObj)

			const location = gl.getUniformLocation(programObj, "v_color");
			const a = gl2.uniform4ui(location, 4.8, 4.8, 4.8, 4.8);

			let errorCode = gl.getError();
			console.info("webgltest uniform4ui getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_4600
		 * @tc.name webgl_test_uniform1uiv
		 * @tc.desc Test uniform1uiv.
		 */
		it('webgl_test_uniform1uiv', 0, async function(done) {

			console.info("webgltest into uniform1uiv");

			//顶点着色器程序
			var VSHADER_SOURCE =
				'attribute vec4 a_Position;\n' +
				'void main() {\n' +
				'  gl_Position = a_Position;\n' +
				'}\n';

			// 片元着色器程序
			var FSHADER_SOURCE =
				'precision mediump float;\n' +
				'uniform vec4 u_FragColor;\n' +
				'void main() {\n' +
				'  gl_FragColor = u_FragColor;\n' +
				'}\n';
			var vertexShader = gl.createShader(gl.VERTEX_SHADER);
			gl.shaderSource(vertexShader, VSHADER_SOURCE);
			gl.compileShader(vertexShader);
			var fragmentShader = gl.createShader(gl.FRAGMENT_SHADER);
			gl.shaderSource(fragmentShader, FSHADER_SOURCE);
			gl.compileShader(fragmentShader);
			const programObj = gl.createProgram();
			console.log("testUseProgram has failed for " + programObj)
			const useProgramError1 = gl.getError();
			console.info("useProgramError: " + useProgramError1);
			const renderBufferValue1 = gl.getParameter(gl.CURRENT_PROGRAM);
			console.log("testUseProgram has failed for " + renderBufferValue1)
			gl.attachShader(programObj, vertexShader);
			gl.attachShader(programObj, fragmentShader);
			gl.linkProgram(programObj);
			gl.useProgram(programObj);
			const location = gl.getUniformLocation(programObj, "a_Position");
			const a = gl2.uniform1uiv(location, float1, 1, 255);

			let errorCode = gl.getError();
			console.info("webgltest uniform1uiv getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_4700
		 * @tc.name webgl_test_uniform1uiv_2
		 * @tc.desc Test uniform1uiv.
		 */
		it('webgl_test_uniform1uiv_2', 0, async function(done) {

			console.info("webgltest into uniform1uiv");

			const programObj = gl.createProgram();

			const location = gl.getUniformLocation(programObj, "v_Color");
			const a = gl2.uniform1uiv(location, float1, 1, 255);

			let errorCode = gl.getError();
			console.info("webgltest uniform1uiv getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_4800
		 * @tc.name webgl_test_uniform2uiv
		 * @tc.desc Test uniform2uiv.
		 */
		it('webgl_test_uniform2uiv', 0, async function(done) {

			console.info("webgltest into uniform2uiv");

			//顶点着色器程序
			var VSHADER_SOURCE =
				'attribute vec4 a_Position;\n' +
				'void main() {\n' +
				'  gl_Position = a_Position;\n' +
				'}\n';

			// 片元着色器程序
			var FSHADER_SOURCE =
				'precision mediump float;\n' +
				'uniform vec4 u_FragColor;\n' +
				'void main() {\n' +
				'  gl_FragColor = u_FragColor;\n' +
				'}\n';
			var vertexShader = gl.createShader(gl.VERTEX_SHADER);
			gl.shaderSource(vertexShader, VSHADER_SOURCE);
			gl.compileShader(vertexShader);
			var fragmentShader = gl.createShader(gl.FRAGMENT_SHADER);
			gl.shaderSource(fragmentShader, FSHADER_SOURCE);
			gl.compileShader(fragmentShader);
			const programObj = gl.createProgram();
			console.log("testUseProgram has failed for " + programObj)
			const useProgramError1 = gl.getError();
			console.info("useProgramError: " + useProgramError1);
			const renderBufferValue1 = gl.getParameter(gl.CURRENT_PROGRAM);
			console.log("testUseProgram has failed for " + renderBufferValue1)
			gl.attachShader(programObj, vertexShader);
			gl.attachShader(programObj, fragmentShader);
			gl.linkProgram(programObj);
			gl.useProgram(programObj);

			const location = gl.getUniformLocation(programObj, "a_Position");
			const a = gl2.uniform2uiv(location, float1, 2, 255);

			let errorCode = gl.getError();
			console.info("webgltest uniform2uiv getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_4900
		 * @tc.name webgl_test_uniform2uiv_2
		 * @tc.desc Test uniform2uiv.
		 */
		it('webgl_test_uniform2uiv_2', 0, async function(done) {

			console.info("webgltest into uniform2uiv");


			const programObj = gl.createProgram();


			const location = gl.getUniformLocation(programObj, "v_Color");
			const a = gl2.uniform2uiv(location, float2, 0, 255);

			let errorCode = gl.getError();
			console.info("webgltest uniform2uiv getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_5000
		 * @tc.name webgl_test_uniform3uiv
		 * @tc.desc Test uniform3uiv.
		 */
		it('webgl_test_uniform3uiv', 0, async function(done) {

			console.info("webgltest into uniform3uiv");

			//顶点着色器程序
			var VSHADER_SOURCE =
				'attribute vec4 a_Position;\n' +
				'void main() {\n' +
				'  gl_Position = a_Position;\n' +
				'}\n';

			// 片元着色器程序
			var FSHADER_SOURCE =
				'precision mediump float;\n' +
				'uniform vec4 u_FragColor;\n' +
				'void main() {\n' +
				'  gl_FragColor = u_FragColor;\n' +
				'}\n';
			var vertexShader = gl.createShader(gl.VERTEX_SHADER);
			gl.shaderSource(vertexShader, VSHADER_SOURCE);
			gl.compileShader(vertexShader);
			var fragmentShader = gl.createShader(gl.FRAGMENT_SHADER);
			gl.shaderSource(fragmentShader, FSHADER_SOURCE);
			gl.compileShader(fragmentShader);
			const programObj = gl.createProgram();
			console.log("testUseProgram has failed for " + programObj)
			const useProgramError1 = gl.getError();
			console.info("useProgramError: " + useProgramError1);
			const renderBufferValue1 = gl.getParameter(gl.CURRENT_PROGRAM);
			console.log("testUseProgram has failed for " + renderBufferValue1)
			gl.attachShader(programObj, vertexShader);
			gl.attachShader(programObj, fragmentShader);
			gl.linkProgram(programObj);
			gl.useProgram(programObj);

			const location = gl.getUniformLocation(programObj, "a_Position");
			const a = gl2.uniform3uiv(location, float1, 3, 255);

			let errorCode = gl.getError();
			console.info("webgltest uniform3uiv getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_5100
		 * @tc.name webgl_test_uniform3uiv_3
		 * @tc.desc Test uniform3uiv.
		 */
		it('webgl_test_uniform3uiv_3', 0, async function(done) {

			console.info("webgltest into uniform3uiv");


			const programObj = gl.createProgram();


			const location = gl.getUniformLocation(programObj, "v_Color");
			const a = gl2.uniform3uiv(location, float2, 0, 255);

			let errorCode = gl.getError();
			console.info("webgltest uniform3uiv getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_5200
		 * @tc.name webgl_test_uniform4uiv
		 * @tc.desc Test uniform4uiv.
		 */
		it('webgl_test_uniform4uiv', 0, async function(done) {

			console.info("webgltest into uniform4uiv");

			//顶点着色器程序
			var VSHADER_SOURCE =
				'attribute vec4 a_Position;\n' +
				'void main() {\n' +
				'  gl_Position = a_Position;\n' +
				'}\n';

			// 片元着色器程序
			var FSHADER_SOURCE =
				'precision mediump float;\n' +
				'uniform vec4 u_FragColor;\n' +
				'void main() {\n' +
				'  gl_FragColor = u_FragColor;\n' +
				'}\n';
			var vertexShader = gl.createShader(gl.VERTEX_SHADER);
			gl.shaderSource(vertexShader, VSHADER_SOURCE);
			gl.compileShader(vertexShader);
			var fragmentShader = gl.createShader(gl.FRAGMENT_SHADER);
			gl.shaderSource(fragmentShader, FSHADER_SOURCE);
			gl.compileShader(fragmentShader);
			const programObj = gl.createProgram();
			console.log("testUseProgram has failed for " + programObj)
			const useProgramError1 = gl.getError();
			console.info("useProgramError: " + useProgramError1);
			const renderBufferValue1 = gl.getParameter(gl.CURRENT_PROGRAM);
			console.log("testUseProgram has failed for " + renderBufferValue1)
			gl.attachShader(programObj, vertexShader);
			gl.attachShader(programObj, fragmentShader);
			gl.linkProgram(programObj);
			gl.useProgram(programObj);

			const location = gl.getUniformLocation(programObj, "a_Position");
			const a = gl2.uniform4uiv(location, float1, 0, 255);

			let errorCode = gl.getError();
			console.info("webgltest uniform4uiv getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_5300
		 * @tc.name webgl_test_uniform4uiv_2
		 * @tc.desc Test uniform4uiv.
		 */
		it('webgl_test_uniform4uiv_2', 0, async function(done) {

			console.info("webgltest into uniform4uiv");


			const programObj = gl.createProgram();

			const location = gl.getUniformLocation(programObj, "v_Color");
			const a = gl2.uniform4uiv(location, float2, 0, 255);

			let errorCode = gl.getError();
			console.info("webgltest uniform4uiv getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_5400
		 * @tc.name webgl_test_uniformMatrix3x2fv
		 * @tc.desc Test uniformMatrix3x2fv.
		 */
		it('webgl_test_uniformMatrix3x2fv', 0, async function(done) {

			console.info("webgltest into uniformMatrix3x2fv");

			//顶点着色器程序
			var VSHADER_SOURCE =
				'attribute vec4 a_Position;\n' +
				'void main() {\n' +
				'  gl_Position = a_Position;\n' +
				'}\n';

			// 片元着色器程序
			var FSHADER_SOURCE =
				'precision mediump float;\n' +
				'uniform vec4 u_FragColor;\n' +
				'void main() {\n' +
				'  gl_FragColor = u_FragColor;\n' +
				'}\n';
			var vertexShader = gl.createShader(gl.VERTEX_SHADER);
			gl.shaderSource(vertexShader, VSHADER_SOURCE);
			gl.compileShader(vertexShader);
			var fragmentShader = gl.createShader(gl.FRAGMENT_SHADER);
			gl.shaderSource(fragmentShader, FSHADER_SOURCE);
			gl.compileShader(fragmentShader);
			const programObj = gl.createProgram();
			console.log("testUseProgram has failed for " + programObj)
			const useProgramError1 = gl.getError();
			console.info("useProgramError: " + useProgramError1);
			const renderBufferValue1 = gl.getParameter(gl.CURRENT_PROGRAM);
			console.log("testUseProgram has failed for " + renderBufferValue1)
			gl.attachShader(programObj, vertexShader);
			gl.attachShader(programObj, fragmentShader);
			gl.linkProgram(programObj);
			gl.useProgram(programObj);

			const location = gl.getUniformLocation(programObj, "a_Position");
			const a = gl2.uniformMatrix3x2fv(location, false, float1, 0, 255);

			let errorCode = gl.getError();
			console.info("webgltest uniformMatrix3x2fv getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_5500
		 * @tc.name webgl_test_uniformMatrix3x2fv_2
		 * @tc.desc Test uniformMatrix3x2fv.
		 */
		it('webgl_test_uniformMatrix3x2fv_2', 0, async function(done) {

			console.info("webgltest into uniformMatrix3x2fv");


			const programObj = gl.createProgram();


			const location = gl.getUniformLocation(programObj, "v_Color");
			const a = gl2.uniformMatrix3x2fv(location, false, float2, 0, 255);

			let errorCode = gl.getError();
			console.info("webgltest uniformMatrix3x2fv getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_5600
		 * @tc.name webgl_test_uniformMatrix4x2fv
		 * @tc.desc Test uniformMatrix4x2fv.
		 */
		it('webgl_test_uniformMatrix4x2fv', 0, async function(done) {

			console.info("webgltest into uniformMatrix4x2fv");

			//顶点着色器程序
			var VSHADER_SOURCE =
				'attribute vec4 a_Position;\n' +
				'void main() {\n' +
				'  gl_Position = a_Position;\n' +
				'}\n';

			// 片元着色器程序
			var FSHADER_SOURCE =
				'precision mediump float;\n' +
				'uniform vec4 u_FragColor;\n' +
				'void main() {\n' +
				'  gl_FragColor = u_FragColor;\n' +
				'}\n';
			var vertexShader = gl.createShader(gl.VERTEX_SHADER);
			gl.shaderSource(vertexShader, VSHADER_SOURCE);
			gl.compileShader(vertexShader);
			var fragmentShader = gl.createShader(gl.FRAGMENT_SHADER);
			gl.shaderSource(fragmentShader, FSHADER_SOURCE);
			gl.compileShader(fragmentShader);
			const programObj = gl.createProgram();
			console.log("testUseProgram has failed for " + programObj)
			const useProgramError1 = gl.getError();
			console.info("useProgramError: " + useProgramError1);
			const renderBufferValue1 = gl.getParameter(gl.CURRENT_PROGRAM);
			console.log("testUseProgram has failed for " + renderBufferValue1)
			gl.attachShader(programObj, vertexShader);
			gl.attachShader(programObj, fragmentShader);
			gl.linkProgram(programObj);
			gl.useProgram(programObj);
			const location = gl.getUniformLocation(programObj, "a_Position");
			const a = gl2.uniformMatrix4x2fv(location, false, float1, 0, 255);

			let errorCode = gl.getError();
			console.info("webgltest uniformMatrix4x2fv getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_5700
		 * @tc.name webgl_test_uniformMatrix4x2fv_2
		 * @tc.desc Test uniformMatrix4x2fv.
		 */
		it('webgl_test_uniformMatrix4x2fv_2', 0, async function(done) {

			console.info("webgltest into uniformMatrix4x2fv");


			const programObj = gl.createProgram();

			const location = gl.getUniformLocation(programObj, "v_Color");
			const a = gl2.uniformMatrix4x2fv(location, false, float2, 0, 255);

			let errorCode = gl.getError();
			console.info("webgltest uniformMatrix4x2fv getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_5800
		 * @tc.name webgl_test_uniformMatrix2x3fv
		 * @tc.desc Test uniformMatrix2x3fv.
		 */
		it('webgl_test_uniformMatrix2x3fv', 0, async function(done) {

			console.info("webgltest into uniformMatrix2x3fv");

			//顶点着色器程序
			var VSHADER_SOURCE =
				'attribute vec4 a_Position;\n' +
				'void main() {\n' +
				'  gl_Position = a_Position;\n' +
				'}\n';

			// 片元着色器程序
			var FSHADER_SOURCE =
				'precision mediump float;\n' +
				'uniform vec4 u_FragColor;\n' +
				'void main() {\n' +
				'  gl_FragColor = u_FragColor;\n' +
				'}\n';
			var vertexShader = gl.createShader(gl.VERTEX_SHADER);
			gl.shaderSource(vertexShader, VSHADER_SOURCE);
			gl.compileShader(vertexShader);
			var fragmentShader = gl.createShader(gl.FRAGMENT_SHADER);
			gl.shaderSource(fragmentShader, FSHADER_SOURCE);
			gl.compileShader(fragmentShader);
			const programObj = gl.createProgram();
			console.log("testUseProgram has failed for " + programObj)
			const useProgramError1 = gl.getError();
			console.info("useProgramError: " + useProgramError1);
			const renderBufferValue1 = gl.getParameter(gl.CURRENT_PROGRAM);
			console.log("testUseProgram has failed for " + renderBufferValue1)
			gl.attachShader(programObj, vertexShader);
			gl.attachShader(programObj, fragmentShader);
			gl.linkProgram(programObj);
			gl.useProgram(programObj);
			const location = gl.getUniformLocation(programObj, "a_Position");
			const a = gl2.uniformMatrix2x3fv(location, false, float1, 0, 255);

			let errorCode = gl.getError();
			console.info("webgltest uniformMatrix2x3fv getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_5900
		 * @tc.name webgl_test_uniformMatrix2x3fv_2
		 * @tc.desc Test uniformMatrix2x3fv.
		 */
		it('webgl_test_uniformMatrix2x3fv_2', 0, async function(done) {

			console.info("webgltest into uniformMatrix2x3fv");

			const programObj = gl.createProgram();

			const location = gl.getUniformLocation(programObj, "v_Color");
			const a = gl2.uniformMatrix2x3fv(location, false, float2, 0, 255);

			let errorCode = gl.getError();
			console.info("webgltest uniformMatrix2x3fv getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_6000
		 * @tc.name webgl_test_uniformMatrix4x3fv
		 * @tc.desc Test uniformMatrix4x3fv.
		 */
		it('webgl_test_uniformMatrix4x3fv', 0, async function(done) {

			console.info("webgltest into uniformMatrix4x3fv");

			//顶点着色器程序
			var VSHADER_SOURCE =
				'attribute vec4 a_Position;\n' +
				'void main() {\n' +
				'  gl_Position = a_Position;\n' +
				'}\n';

			// 片元着色器程序
			var FSHADER_SOURCE =
				'precision mediump float;\n' +
				'uniform vec4 u_FragColor;\n' +
				'void main() {\n' +
				'  gl_FragColor = u_FragColor;\n' +
				'}\n';
			var vertexShader = gl.createShader(gl.VERTEX_SHADER);
			gl.shaderSource(vertexShader, VSHADER_SOURCE);
			gl.compileShader(vertexShader);
			var fragmentShader = gl.createShader(gl.FRAGMENT_SHADER);
			gl.shaderSource(fragmentShader, FSHADER_SOURCE);
			gl.compileShader(fragmentShader);
			const programObj = gl.createProgram();
			console.log("testUseProgram has failed for " + programObj)
			const useProgramError1 = gl.getError();
			console.info("useProgramError: " + useProgramError1);
			const renderBufferValue1 = gl.getParameter(gl.CURRENT_PROGRAM);
			console.log("testUseProgram has failed for " + renderBufferValue1)
			gl.attachShader(programObj, vertexShader);
			gl.attachShader(programObj, fragmentShader);
			gl.linkProgram(programObj);
			gl.useProgram(programObj);
			const location = gl.getUniformLocation(programObj, "a_Position");
			const a = gl2.uniformMatrix4x3fv(location, false, float1, 0, 255);

			let errorCode = gl.getError();
			console.info("webgltest uniformMatrix4x3fv getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_6100
		 * @tc.name webgl_test_uniformMatrix4x3fv_2
		 * @tc.desc Test uniformMatrix4x3fv.
		 */
		it('webgl_test_uniformMatrix4x3fv_2', 0, async function(done) {

			console.info("webgltest into uniformMatrix4x3fv");


			const programObj = gl.createProgram();

			const location = gl.getUniformLocation(programObj, "v_Color");
			const a = gl2.uniformMatrix4x3fv(location, false, float2, 0, 255);

			let errorCode = gl.getError();
			console.info("webgltest uniformMatrix4x3fv getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_6200
		 * @tc.name webgl_test_uniformMatrix2x4fv
		 * @tc.desc Test uniformMatrix2x4fv.
		 */
		it('webgl_test_uniformMatrix2x4fv', 0, async function(done) {

			console.info("webgltest into uniformMatrix2x4fv");

			//顶点着色器程序
			var VSHADER_SOURCE =
				'attribute vec4 a_Position;\n' +
				'void main() {\n' +
				'  gl_Position = a_Position;\n' +
				'}\n';

			// 片元着色器程序
			var FSHADER_SOURCE =
				'precision mediump float;\n' +
				'uniform vec4 u_FragColor;\n' +
				'void main() {\n' +
				'  gl_FragColor = u_FragColor;\n' +
				'}\n';
			var vertexShader = gl.createShader(gl.VERTEX_SHADER);
			gl.shaderSource(vertexShader, VSHADER_SOURCE);
			gl.compileShader(vertexShader);
			var fragmentShader = gl.createShader(gl.FRAGMENT_SHADER);
			gl.shaderSource(fragmentShader, FSHADER_SOURCE);
			gl.compileShader(fragmentShader);
			const programObj = gl.createProgram();
			console.log("testUseProgram has failed for " + programObj)
			const useProgramError1 = gl.getError();
			console.info("useProgramError: " + useProgramError1);
			const renderBufferValue1 = gl.getParameter(gl.CURRENT_PROGRAM);
			console.log("testUseProgram has failed for " + renderBufferValue1)
			gl.attachShader(programObj, vertexShader);
			gl.attachShader(programObj, fragmentShader);
			gl.linkProgram(programObj);
			gl.useProgram(programObj);
			const location = gl.getUniformLocation(programObj, "a_Position");
			const a = gl2.uniformMatrix2x4fv(location, false, float1, 0, 255);

			let errorCode = gl.getError();
			console.info("webgltest uniformMatrix2x4fv getError: " + errorCode);


			done();
		});

		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_6300
		 * @tc.name webgl_test_uniformMatrix2x4fv_2
		 * @tc.desc Test uniformMatrix2x4fv.
		 */
		it('webgl_test_uniformMatrix2x4fv_2', 0, async function(done) {

			console.info("webgltest into uniformMatrix2x4fv");


			const programObj = gl.createProgram();

			const location = gl.getUniformLocation(programObj, "v_Color");
			const a = gl2.uniformMatrix2x4fv(location, false, float2, 0, 255);

			let errorCode = gl.getError();
			console.info("webgltest uniformMatrix2x4fv getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_6400
		 * @tc.name webgl_test_uniformMatrix3x4fv
		 * @tc.desc Test uniformMatrix3x4fv.
		 */
		it('webgl_test_uniformMatrix3x4fv', 0, async function(done) {

			console.info("webgltest into uniformMatrix3x4fv");

			//顶点着色器程序
			var VSHADER_SOURCE =
				'attribute vec4 a_Position;\n' +
				'void main() {\n' +
				'  gl_Position = a_Position;\n' +
				'}\n';

			// 片元着色器程序
			var FSHADER_SOURCE =
				'precision mediump float;\n' +
				'uniform vec4 u_FragColor;\n' +
				'void main() {\n' +
				'  gl_FragColor = u_FragColor;\n' +
				'}\n';
			var vertexShader = gl.createShader(gl.VERTEX_SHADER);
			gl.shaderSource(vertexShader, VSHADER_SOURCE);
			gl.compileShader(vertexShader);
			var fragmentShader = gl.createShader(gl.FRAGMENT_SHADER);
			gl.shaderSource(fragmentShader, FSHADER_SOURCE);
			gl.compileShader(fragmentShader);
			const programObj = gl.createProgram();
			console.log("testUseProgram has failed for " + programObj)
			const useProgramError1 = gl.getError();
			console.info("useProgramError: " + useProgramError1);
			const renderBufferValue1 = gl.getParameter(gl.CURRENT_PROGRAM);
			console.log("testUseProgram has failed for " + renderBufferValue1)
			gl.attachShader(programObj, vertexShader);
			gl.attachShader(programObj, fragmentShader);
			gl.linkProgram(programObj);
			gl.useProgram(programObj);
			const location = gl.getUniformLocation(programObj, "a_Position");
			const a = gl2.uniformMatrix3x4fv(location, false, float1, 0, 255);

			let errorCode = gl.getError();
			console.info("webgltest uniformMatrix3x4fv getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_6500
		 * @tc.name webgl_test_uniformMatrix3x4fv_2
		 * @tc.desc Test uniformMatrix3x4fv.
		 */
		it('webgl_test_uniformMatrix3x4fv_2', 0, async function(done) {

			console.info("webgltest into uniformMatrix3x4fv");


			const programObj = gl.createProgram();

			const location = gl.getUniformLocation(programObj, "v_Color");
			const a = gl2.uniformMatrix3x4fv(location, false, float2, 0, 255);

			let errorCode = gl.getError();
			console.info("webgltest uniformMatrix3x4fv getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_6600
		 * @tc.name webgl_test_vertexAttribI4i
		 * @tc.desc Test vertexAttribI4i.
		 */
		it('webgl_test_vertexAttribI4i', 0, async function(done) {

			console.info("webgltest into vertexAttribI4i");

			const a = gl2.vertexAttribI4i(1, 10, 11, 12, 13);

			let errorCode = gl.getError();
			console.info("webgltest vertexAttribI4i getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_6700
		 * @tc.name webgl_test_vertexAttribI4iv
		 * @tc.desc Test vertexAttribI4iv.
		 */
		it('webgl_test_vertexAttribI4iv', 0, async function(done) {

			console.info("webgltest into vertexAttribI4iv");

			const a = gl2.vertexAttribI4iv(1, int1);

			let errorCode = gl.getError();
			console.info("webgltest vertexAttribI4iv getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_6800
		 * @tc.name webgl_test_vertexAttribI4iv_2
		 * @tc.desc Test vertexAttribI4iv.
		 */
		it('webgl_test_vertexAttribI4iv_2', 0, async function(done) {

			console.info("webgltest into vertexAttribI4iv");

			const a = gl2.vertexAttribI4iv(1, int2);

			let errorCode = gl.getError();
			console.info("webgltest vertexAttribI4iv getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_6900
		 * @tc.name webgl_test_vertexAttribI4ui
		 * @tc.desc Test vertexAttribI4ui.
		 */
		it('webgl_test_vertexAttribI4ui', 0, async function(done) {

			console.info("webgltest into vertexAttribI4ui");

			const a = gl2.vertexAttribI4ui(1, 10, 11, 12, 13);

			let errorCode = gl.getError();
			console.info("webgltest vertexAttribI4ui getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_7000
		 * @tc.name webgl_test_vertexAttribI4uiv
		 * @tc.desc Test vertexAttribI4uiv.
		 */
		it('webgl_test_vertexAttribI4uiv', 0, async function(done) {

			console.info("webgltest into vertexAttribI4uiv");

			const a = gl2.vertexAttribI4uiv(1, uint1);

			let errorCode = gl.getError();
			console.info("webgltest vertexAttribI4uiv getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_7100
		 * @tc.name webgl_test_vertexAttribI4uiv_2
		 * @tc.desc Test vertexAttribI4uiv.
		 */
		it('webgl_test_vertexAttribI4uiv_2', 0, async function(done) {

			console.info("webgltest into vertexAttribI4uiv");

			const a = gl2.vertexAttribI4uiv(1, uint2);

			let errorCode = gl.getError();
			console.info("webgltest vertexAttribI4uiv getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_7200
		 * @tc.name webgl_test_vertexAttribIPointer
		 * @tc.desc Test vertexAttribIPointer.
		 */
		it('webgl_test_vertexAttribIPointer', 0, async function(done) {

			console.info("webgltest into vertexAttribIPointer");

			const a = gl2.vertexAttribIPointer(2, 4, gl.UNSIGNED_BYTE, 20, 16);

			let errorCode = gl.getError();
			console.info("webgltest vertexAttribIPointer getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_7300
		 * @tc.name webgl_test_vertexAttribDivisor
		 * @tc.desc Test vertexAttribDivisor.
		 */
		it('webgl_test_vertexAttribDivisor', 0, async function(done) {

			console.info("webgltest into vertexAttribDivisor");

			const a = gl2.vertexAttribDivisor(0, 2);

			let errorCode = gl.getError();
			console.info("webgltest vertexAttribDivisor getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_7400
		 * @tc.name webgl_test_vertexAttribDivisor_2
		 * @tc.desc Test vertexAttribDivisor.
		 */
		it('webgl_test_vertexAttribDivisor_2', 0, async function(done) {

			console.info("webgltest into vertexAttribDivisor");

			const a = gl2.vertexAttribDivisor(0, "2");

			let errorCode = gl.getError();
			console.info("webgltest vertexAttribDivisor getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_7500
		 * @tc.name webgl_test_drawArraysInstanced
		 * @tc.desc Test drawArraysInstanced.
		 */
		it('webgl_test_drawArraysInstanced', 0, async function(done) {

			console.info("webgltest into drawArraysInstanced");

			const a = gl2.drawArraysInstanced(gl.POINTS, 0, 8, 4);

			let errorCode = gl.getError();
			console.info("webgltest drawArraysInstanced getError: " + errorCode);


			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_7600
		 * @tc.name webgl_test_drawElementsInstanced
		 * @tc.desc Test drawElementsInstanced.
		 */
		it('webgl_test_drawElementsInstanced', 0, async function(done) {

			console.info("webgltest into drawElementsInstanced");
			const indexBuffer = gl.createBuffer();
			gl.bindBuffer(gl.ELEMENT_ARRAY_BUFFER, indexBuffer);
			gl.bufferData(gl.ELEMENT_ARRAY_BUFFER, indices.buffer, gl.STATIC_DRAW);

			const a = gl2.drawElementsInstanced(gl.POINTS, 2, gl.UNSIGNED_SHORT, 0, 4);

			let errorCode = gl.getError();
			console.info("webgltest drawElementsInstanced getError: " + errorCode);


			for(let err; (err = gl.getError()) != gl.NO_ERROR;) {}

			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_7700
		 * @tc.name webgl_test_drawRangeElements
		 * @tc.desc Test drawRangeElements.
		 */
		it('webgl_test_drawRangeElements', 0, async function(done) {

			console.info("webgltest into drawRangeElements");
			const indexBuffer = gl.createBuffer();
			gl.bindBuffer(gl.ELEMENT_ARRAY_BUFFER, indexBuffer);
			gl.bufferData(gl.ELEMENT_ARRAY_BUFFER, indices.buffer, gl.STATIC_DRAW);

			const a = gl2.drawRangeElements(gl.POINTS, 0, 7, 8, gl.UNSIGNED_BYTE, 0);

			let errorCode = gl.getError();
			console.info("webgltest drawRangeElements getError: " + errorCode);


			for(let err; (err = gl.getError()) != gl.NO_ERROR;) {}

			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_7800
		 * @tc.name testFrontFaceFirst
		 * @tc.desc Test frontFace.
		 */
		it('testFrontFaceFirst', 0, async function(done) {

			console.info('jsWebGL frontFace test start ...' + JSON.stringify(gl));
			gl.enable(gl.CULL_FACE);
			gl.cullFace(gl.FRONT_AND_BACK);
			gl.frontFace(gl.CW);
			const frontFaceParameter = gl.getParameter(gl.CULL_FACE_MODE);
			console.info('frontFace -> frontFaceParameter' + frontFaceParameter);
			gl.disable(gl.CULL_FACE);

			done();
		});

		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_7900
		 * @tc.name testFrontFace_Third
		 * @tc.desc Test frontFace.
		 */
		it('testFrontFace_Third', 0, async function(done) {

			console.info('jsWebGL frontFace test start ...' + JSON.stringify(gl));
			gl.enable(gl.CULL_FACE);
			gl.cullFace(gl.BACK);
			gl.frontFace(gl.CW);
			const frontFaceParameter = gl.getParameter(gl.CULL_FACE_MODE);
			console.info('frontFace -> frontFaceParameter' + frontFaceParameter);
			gl.disable(gl.CULL_FACE);

			done();
		});

		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_8000
		 * @tc.name testFrontFaceError
		 * @tc.desc Test frontFace.
		 */
		it('testFrontFaceError', 0, async function(done) {

			console.info('jsWebGL frontFace test start ...' + JSON.stringify(gl));
			gl.cullFace(gl.BACK);
			gl.frontFace(gl.CW);
			const frontFaceParameter = gl.getParameter(gl.CULL_FACE_MODE);
			console.info('frontFace -> frontFaceParameter' + frontFaceParameter);
			gl.disable(gl.CULL_FACE);

			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_8100
		 * @tc.name testGenerateMipmap
		 * @tc.desc Test generateMipmap.
		 */
		it('testGenerateMipmap', 0, async function(done) {

			console.info('jsWebGL generateMipmap test start ...' + JSON.stringify(gl));
			gl.generateMipmap(gl2.TEXTURE_2D);
			const error = gl.getError();
			console.info('generateMipmap error ' + error);

			done();
		});

		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_8200
		 * @tc.name testGenerateMipmapError
		 * @tc.desc Test generateMipmap.
		 */
		it('testGenerateMipmapError', 0, async function(done) {

			console.info('jsWebGL generateMipmap test start ...' + JSON.stringify(gl));
			gl.generateMipmap(gl.TEXTURE_2D);
			const error = gl.getError();
			console.info('generateMipmap error ' + error);

			done();
		});

		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_8300
		 * @tc.name testGetActiveAttrib
		 * @tc.desc Test getActiveAttrib.
		 */
		it('testGetActiveAttrib', 0, async function(done) {

			console.info('jsWebGL getActiveAttrib test start ...' + JSON.stringify(gl));
			const programObj = globalFunction();
			gl.bindAttribLocation(programObj, 0, 'a_Position');
			const info = gl.getActiveAttrib(programObj, 0);
			const error = gl.getError();

			done();
		});

		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_8400
		 * @tc.name testGetActiveUniform
		 * @tc.desc Test getActiveUniform.
		 */
		it('testGetActiveUniform', 0, async function(done) {

			console.info('jsWebGL getActiveUniform test start ...' + JSON.stringify(gl));
			const programObj = globalFunction();
			const info = gl.getActiveUniform(programObj, 0);
			const error = gl.getError();

			done();
		});

		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_8500
		 * @tc.name testGetAttachedShaders
		 * @tc.desc Test getAttachedShaders.
		 */
		it('testGetAttachedShaders', 0, async function(done) {

			console.info('jsWebGL getAttachedShaders test start ...' + JSON.stringify(gl));
			const programObj = globalFunction();
			const shaderArray = gl.getAttachedShaders(programObj);
			const type = ((typeof shaderArray) === "object")
			console.info('getAttachedShaders shaderArray' + shaderArray);

			done();
		});

		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_8600
		 * @tc.name testGetAttribLocationError
		 * @tc.desc Test getAttribLocation.
		 */
		it('testGetAttribLocationError', 0, async function(done) {

			console.info('jsWebGL getAttribLocation test start ...' + JSON.stringify(gl));
			const program = gl.createProgram();
			const index = gl.getAttribLocation(program, 'webgl_Color');
			console.info('getAttribLocation  index' + index);

			done();
		});

		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_8700
		 * @tc.name testGetAttribLocationFirst
		 * @tc.desc Test getAttribLocation.
		 */
		it('testGetAttribLocationFirst', 0, async function(done) {

			console.info('jsWebGL getAttribLocation test start ...' + JSON.stringify(gl));
			var vertexShader = gl.createShader(gl.VERTEX_SHADER);
			gl.shaderSource(vertexShader, VSHADER_SOURCE);
			gl.compileShader(vertexShader);
			var fragmentShader = gl.createShader(gl.FRAGMENT_SHADER);
			gl.shaderSource(fragmentShader, FSHADER_SOURCE);
			gl.compileShader(fragmentShader);
			const programObj = gl.createProgram();
			console.info("testUseProgram has failed for " + programObj)
			const useProgramError1 = gl.getError();
			console.info("useProgramError: " + useProgramError1);
			const renderBufferValue1 = gl.getParameter(gl.CURRENT_PROGRAM);
			console.info("testUseProgram has failed for " + renderBufferValue1)
			gl.attachShader(programObj, vertexShader);
			gl.attachShader(programObj, fragmentShader);
			gl.linkProgram(programObj);
			gl.useProgram(programObj);

			const aVertexPosition = gl.getAttribLocation(programObj, "a_Position");

			done();
		});

		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_8800
		 * @tc.name testGetBufferParameterFirst
		 * @tc.desc Test getBufferParameter.
		 */
		it('testGetBufferParameterFirst', 0, async function(done) {

			console.info('jsWebGL getBufferParameter test start ...' + JSON.stringify(gl));
			const buffer = gl.createBuffer();
			gl.bindBuffer(gl.ARRAY_BUFFER, buffer);
			gl.bufferData(gl.ARRAY_BUFFER, 1024, gl.STATIC_DRAW);
			const bufferSize = gl.getBufferParameter(gl.ARRAY_BUFFER, gl.BUFFER_SIZE);
			console.info('bufferSize' + bufferSize);

			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_8900
		 * @tc.name testGetBufferParameterSecond
		 * @tc.desc Test getBufferParameter.
		 */
		it('testGetBufferParameterSecond', 0, async function(done) {

			console.info('jsWebGL getBufferParameter test start ...' + JSON.stringify(gl));
			const buffer = gl.createBuffer();
			gl.bindBuffer(gl.ARRAY_BUFFER, buffer);
			gl.bufferData(gl.ARRAY_BUFFER, 1024, gl.STATIC_DRAW);
			const bufferUsage = gl.getBufferParameter(gl.ARRAY_BUFFER, gl.BUFFER_USAGE);
			console.info('bufferUsage' + bufferUsage);

			done();
		});

		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_9000
		 * @tc.name testGetErrorFirst
		 * @tc.desc Test getError.
		 */
		it('testGetErrorFirst', 0, async function(done) {

			console.info('jsWebGL getError test start ...' + JSON.stringify(gl));
			//    turn on scissor test
			gl.enable(gl.SCISSOR_TEST);
			// set the scissor rectangle
			gl.scissor(0, 0, -200, 200);
			// 如果宽度或高度为负值， gl.INVALID_VALUE(DEC:1281)则会引发错误
			const scissorErrorCode = gl.getError();
			console.info("scissorErrorCode: " + scissorErrorCode);

			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_9100
		 * @tc.name testGetErrorSecond
		 * @tc.desc Test getError.
		 */
		it('testGetErrorSecond', 0, async function(done) {

			console.info('jsWebGL getError test start ...' + JSON.stringify(gl));
			gl.getError(); // 0 (0)
			gl.enable(gl.DITHER);
			const errorCode = gl.getError(); // gl.INVALID_ENUM;
			console.info('getError 2 errorCode' + errorCode);

			done();
		});

		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_9200
		 * @tc.name testGetFramebufferAttachmentParameter
		 * @tc.desc Test getFramebufferAttachmentParameter.
		 */
		it('testGetFramebufferAttachmentParameter', 0, async function(done) {

			console.info('jsWebGL getFramebufferAttachmentParameter test start ...' + JSON.stringify(
				gl));
			const renderBuffer = gl.createRenderbuffer();
			gl.bindRenderbuffer(gl.RENDERBUFFER, renderBuffer);
			gl.framebufferRenderbuffer(gl.FRAMEBUFFER, gl.COLOR_ATTACHMENT0, gl.RENDERBUFFER,
				renderBuffer);
			const framebuffer = gl.getFramebufferAttachmentParameter(gl.FRAMEBUFFER, gl
				.COLOR_ATTACHMENT0,
				gl.FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE);
			console.info('Framebuffer' + framebuffer);
			const errorCode = gl.getError();
			console.info("jsWebGL getFramebufferAttachmentParameter errorCode: " + errorCode);

			done();
		});

		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_9300
		 * @tc.name testGetProgramParameterFourth
		 * @tc.desc Test getProgramParameter.
		 */
		it('testGetProgramParameterFourth', 0, async function(done) {

			console.info('jsWebGL getProgramParameter test start ...' + JSON.stringify(gl));
			const program = globalFunction();
			const attachedShaders = gl.getProgramParameter(program, gl.ATTACHED_SHADERS);
			console.info('attachedShaders' + attachedShaders);

			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_9400
		 * @tc.name testGetProgramParameterError
		 * @tc.desc Test getProgramParameter.
		 */
		it('testGetProgramParameterError', 0, async function(done) {

			console.info('jsWebGL getProgramParameter test start ...' + JSON.stringify(gl));
			const vertexShader = gl.createShader(gl.VERTEX_SHADER);
			gl.shaderSource(vertexShader, VSHADER_SOURCE);
			gl.compileShader(vertexShader);

			const programObj = gl.createProgram();
			const attachedShaders = gl.getProgramParameter(programObj, gl.ATTACHED_SHADERS);
			console.info('attachedShaders' + attachedShaders);
			const type = (attachedShaders === 1);

			done();
		});

		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_9500
		 * @tc.name testGetProgramInfoLog
		 * @tc.desc Test getProgramInfoLog.
		 */
		it('testGetProgramInfoLog', 0, async function(done) {

			console.info('jsWebGL getProgramInfoLog test start ...' + JSON.stringify(gl));
			const program = gl.createProgram();
			gl.attachShader(program, VSHADER_SOURCE);
			gl.attachShader(program, FSHADER_SOURCE);
			gl.linkProgram(program);
			gl.validateProgram(program);
			const info = gl.getProgramInfoLog(program);
			gl.useProgram(program);
			const notCrash = true;

			for(let err; (err = gl.getError()) != gl.NO_ERROR;) {}
			done();
		});


		/**
		 * @tc.number SUB_BASIC_GRAPHICS_SPECIAL_XTS_WEBGL_02_9600
		 * @tc.name testGetRenderbufferParameterFirst
		 * @tc.desc Test getRenderbufferParameter.
		 */
		it('testGetRenderbufferParameterFirst', 0, async function(done) {

			console.info('jsWebGL getRenderbufferParameter test start ...' + JSON.stringify(gl));
			const renderBuffer = gl.createRenderbuffer();
			gl.bindRenderbuffer(gl.RENDERBUFFER, renderBuffer);
			gl.renderbufferStorage(gl.RENDERBUFFER, gl.RGBA4, 256, 256);

			const width = gl.getRenderbufferParameter(gl.RENDERBUFFER, gl.RENDERBUFFER_WIDTH);

			done();
		});
})
}
