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

import { describe, it, expect } from 'deccjsunit/index'
import huks from '@ohos.security.huks'
import * as Data from '../../../data.js'

let exportKey_1
let exportKey_2
let handle = {}
let handle1
let handle2
let finishData_1
let finishData_2
let srcData63 = Data.Date_63KB
let srcData63Kb = stringToUint8Array(srcData63)

let HksKeyAlg = {
	HKS_ALG_DH: 103,
	HKS_ALG_AES: 20,
	HKS_ALG_HMAC: 50,
}
let HksKeyPurpose = {
	HKS_KEY_PURPOSE_AGREE: 256,
	HKS_KEY_PURPOSE_DERIVE: 16,
	HKS_KEY_PURPOSE_ENCRYPT: 1,
	HKS_KEY_PURPOSE_DECRYPT: 2,
	HKS_KEY_PURPOSE_MAC: 128,
}
let HksKeySize = {
	HKS_DH_KEY_SIZE_128: 128,
	HKS_DH_KEY_SIZE_192: 192,
	HKS_DH_KEY_SIZE_256: 256,
	HKS_DH_KEY_SIZE_512: 512,
	HKS_DH_KEY_SIZE_2048: 2048,
	HKS_DH_KEY_SIZE_3072: 3072,
	HKS_DH_KEY_SIZE_4096: 4096,
}
let HksKeyStorageType = {
	HKS_STORAGE_TEMP: 0,
	HKS_STORAGE_PERSISTENT: 1,
}
let HksTagType = {
	HKS_TAG_TYPE_UINT: 2 << 28,
	HKS_TAG_TYPE_BOOL: 4 << 28,
	HKS_TAG_TYPE_BYTES: 5 << 28,
}
let HksKeyDigest = {
	HKS_DIGEST_NONE: 0,
	HKS_DIGEST_MD5: 1,
	HKS_DIGEST_SHA1: 10,
	HKS_DIGEST_SHA224: 11,
	HKS_DIGEST_SHA256: 12,
	HKS_DIGEST_SHA384: 13,
	HKS_DIGEST_SHA512: 14,
}
let HksKeyPadding = {
	HKS_PADDING_NONE: 0,
	HKS_PADDING_OAEP: 1,
	HKS_PADDING_PSS: 2,
	HKS_PADDING_PKCS1_V1_5: 3,
	HKS_PADDING_PKCS5: 4,
	HKS_PADDING_PKCS7: 5,
}
let HksCipherMode = {
	HKS_MODE_ECB: 1,
	HKS_MODE_CBC: 2,
	HKS_MODE_CTR: 3,
	HKS_MODE_OFB: 4,
	HKS_MODE_CCM: 31,
	HKS_MODE_GCM: 32,
}
let HksTag = {
	HKS_TAG_ALGORITHM: HksTagType.HKS_TAG_TYPE_UINT | 1,
	HKS_TAG_PURPOSE: HksTagType.HKS_TAG_TYPE_UINT | 2,
	HKS_TAG_KEY_SIZE: HksTagType.HKS_TAG_TYPE_UINT | 3,
	HKS_TAG_DIGEST: HksTagType.HKS_TAG_TYPE_UINT | 4,
	HKS_TAG_PADDING: HksTagType.HKS_TAG_TYPE_UINT | 5,
	HKS_TAG_BLOCK_MODE: HksTagType.HKS_TAG_TYPE_UINT | 6,
	HKS_TAG_KEY_STORAGE_FLAG: HksTagType.HKS_TAG_TYPE_UINT | 1002,
	HKS_TAG_IS_KEY_ALIAS: HksTagType.HKS_TAG_TYPE_BOOL | 1001,
	HKS_TAG_KEY_ALIAS: HksTagType.HKS_TAG_TYPE_BYTES | 23,
}
let HuksAgree002 = {
	HuksKeySTORAGE: {
		tag: HksTag.HKS_TAG_KEY_STORAGE_FLAG,
		value: HksKeyStorageType.HKS_STORAGE_PERSISTENT,
	},
	HuksKeyISKEYALIAS: { tag: HksTag.HKS_TAG_IS_KEY_ALIAS, value: true },
	HuksKeyDIGESTNONE: {
		tag: HksTag.HKS_TAG_DIGEST,
		value: HksKeyDigest.HKS_DIGEST_NONE,
	},
	HuksKeyDIGESTSHA1: {
		tag: HksTag.HKS_TAG_DIGEST,
		value: HksKeyDigest.HKS_DIGEST_SHA1,
	},
	HuksKeyDIGESTSHA224: {
		tag: HksTag.HKS_TAG_DIGEST,
		value: HksKeyDigest.HKS_DIGEST_SHA224,
	},
	HuksKeyDIGESTSHA256: {
		tag: HksTag.HKS_TAG_DIGEST,
		value: HksKeyDigest.HKS_DIGEST_SHA256,
	},
	HuksKeyDIGESTSHA384: {
		tag: HksTag.HKS_TAG_DIGEST,
		value: HksKeyDigest.HKS_DIGEST_SHA384,
	},
	HuksKeyDIGESTSHA512: {
		tag: HksTag.HKS_TAG_DIGEST,
		value: HksKeyDigest.HKS_DIGEST_SHA512,
	},
	HuksKeyPADDINGNONE: {
		tag: HksTag.HKS_TAG_PADDING,
		value: HksKeyPadding.HKS_PADDING_NONE,
	},
	HuksKeyPADDINGPKCS7: {
		tag: HksTag.HKS_TAG_PADDING,
		value: HksKeyPadding.HKS_PADDING_PKCS7,
	},
	HuksKeyBLOCK_MODECBC: {
		tag: HksTag.HKS_TAG_BLOCK_MODE,
		value: HksCipherMode.HKS_MODE_CBC,
	},
	HuksKeyBLOCK_MODECCM: {
		tag: HksTag.HKS_TAG_BLOCK_MODE,
		value: HksCipherMode.HKS_MODE_CCM,
	},
	HuksKeyBLOCK_MODEECB: {
		tag: HksTag.HKS_TAG_BLOCK_MODE,
		value: HksCipherMode.HKS_MODE_ECB,
	},
	HuksKeyBLOCK_MODECTR: {
		tag: HksTag.HKS_TAG_BLOCK_MODE,
		value: HksCipherMode.HKS_MODE_CTR,
	},
	HuksKeyBLOCK_MODEGCM: {
		tag: HksTag.HKS_TAG_BLOCK_MODE,
		value: HksCipherMode.HKS_MODE_GCM,
	},
	HuksKeyALGORITHMAES: {
		tag: HksTag.HKS_TAG_ALGORITHM,
		value: HksKeyAlg.HKS_ALG_AES,
	},
	HuksKeyALGORITHMHMAC: {
		tag: HksTag.HKS_TAG_ALGORITHM,
		value: HksKeyAlg.HKS_ALG_HMAC,
	},
	HuksKeySIZE256: {
		tag: HksTag.HKS_TAG_KEY_SIZE,
		value: HksKeySize.HKS_DH_KEY_SIZE_256,
	},
	HuksKeySIZE128: {
		tag: HksTag.HKS_TAG_KEY_SIZE,
		value: HksKeySize.HKS_DH_KEY_SIZE_128,
	},
	HuksKeySIZE192: {
		tag: HksTag.HKS_TAG_KEY_SIZE,
		value: HksKeySize.HKS_DH_KEY_SIZE_192,
	},
	HuksKeyAlgDH: {
		tag: HksTag.HKS_TAG_ALGORITHM,
		value: HksKeyAlg.HKS_ALG_DH,
	},
	HuksKeyAlgAES: {
		tag: HksTag.HKS_TAG_ALGORITHM,
		value: HksKeyAlg.HKS_ALG_AES,
	},
	HuksKeyAlgHMAC: {
		tag: HksTag.HKS_TAG_ALGORITHM,
		value: HksKeyAlg.HKS_ALG_HMAC,
	},
	HuksKeyPurposeDERIVE: {
		tag: HksTag.HKS_TAG_PURPOSE,
		value: HksKeyPurpose.HKS_KEY_PURPOSE_DERIVE,
	},
	HuksKeyPurposeMAC: {
		tag: HksTag.HKS_TAG_PURPOSE,
		value: HksKeyPurpose.HKS_KEY_PURPOSE_MAC,
	},
	HuksKeyPurposeENCRYPTDECRYPT: {
		tag: HksTag.HKS_TAG_PURPOSE,
		value:
			HksKeyPurpose.HKS_KEY_PURPOSE_ENCRYPT |
			HksKeyPurpose.HKS_KEY_PURPOSE_DECRYPT,
	},
	HuksKeyPurposeDH: {
		tag: HksTag.HKS_TAG_PURPOSE,
		value: HksKeyPurpose.HKS_KEY_PURPOSE_AGREE,
	},
	HuksKeyDHSize2048: {
		tag: HksTag.HKS_TAG_KEY_SIZE,
		value: HksKeySize.HKS_DH_KEY_SIZE_2048,
	},
	HuksKeyDHSize3072: {
		tag: HksTag.HKS_TAG_KEY_SIZE,
		value: HksKeySize.HKS_DH_KEY_SIZE_3072,
	},
	HuksKeyDHSize4096: {
		tag: HksTag.HKS_TAG_KEY_SIZE,
		value: HksKeySize.HKS_DH_KEY_SIZE_4096,
	},
}
let HuksOptions_63kb = {
	properties: new Array(
		HuksAgree002.HuksKeyAlgDH,
		HuksAgree002.HuksKeyPurposeDH,
		HuksAgree002.HuksKeyDHSize4096
	),
	inData: srcData63Kb,
}

function stringToUint8Array(str) {
	var arr = []
	for (var i = 0, j = str.length; i < j; ++i) {
		arr.push(str.charCodeAt(i))
	}
	var tmpUint8Array = new Uint8Array(arr)
	return tmpUint8Array
}

function Uint8ArrayToString(fileData) {
	var dataString = ''
	for (var i = 0; i < fileData.length; i++) {
		dataString += String.fromCharCode(fileData[i])
	}
	return dataString
}

async function publicAgreeGenFunc(srcKeyAlies, HuksOptions) {
	await generateKey(srcKeyAlies, HuksOptions)
		.then((data) => {
			console.log(`test generateKey data: ${JSON.stringify(data)}`)
			expect(data.errorCode == 0).assertTrue()
		})
		.catch((err) => {
			console.log(
				'test generateKey err information: ' + JSON.stringify(err)
			)
			expect(null).assertFail()
		})
}

function generateKey(srcKeyAlies, HuksOptions) {
	return new Promise((resolve, reject) => {
		huks.generateKey(srcKeyAlies, HuksOptions, function (err, data) {
			console.log(`test generateKey data: ${JSON.stringify(data)}`)
			if (err.code !== 0) {
				console.log(
					'test generateKey err information: ' + JSON.stringify(err)
				)
				reject(err)
			} else {
				resolve(data)
			}
		})
	})
}

async function publicAgreeExport1Func(srcKeyAlies, HuksOptions, exportKeys) {
	await exportKey(srcKeyAlies, HuksOptions)
		.then((data) => {
			console.log(`test exportKey data: ${JSON.stringify(data)}`)
			if (exportKeys == 1) {
				exportKey_1 = data.outData
			} else {
				exportKey_2 = data.outData
			}
		})
		.catch((err) => {
			console.log(
				'test exportKey err information: ' + JSON.stringify(err)
			)
			expect(null).assertFail()
		})
}

function exportKey(srcKeyAlies, HuksOptions) {
	return new Promise((resolve, reject) => {
		huks.exportKey(srcKeyAlies, HuksOptions, function (err, data) {
			console.log(`test exportKey data: ${JSON.stringify(data)}`)
			if (err.code !== 0) {
				console.log(
					'test exportKey err information: ' + JSON.stringify(err)
				)
				reject(err)
			} else {
				resolve(data)
			}
		})
	})
}

async function publicAgreeInitFunc(srcKeyAlies, HuksOptions) {
	await init(srcKeyAlies, HuksOptions)
		.then((data) => {
			console.log(`test init data ${JSON.stringify(data)}`)
			handle1 = data.handle1
			handle2 = data.handle2
			handle = {
				handle1: handle1,
				handle2: handle2,
			}
			expect(data.errorCode == 0).assertTrue()
		})
		.catch((err) => {
			console.log('test init err information: ' + JSON.stringify(err))
			expect(null).assertFail()
		})
}

function init(srcKeyAlies, HuksOptions) {
	return new Promise((resolve, reject) => {
		huks.init(srcKeyAlies, HuksOptions, function (err, data) {
			if (err.code !== 0) {
				console.log('test init err information: ' + JSON.stringify(err))
				reject(err)
			} else {
				resolve(data)
			}
		})
	})
}

async function publicAgreeUpdateFunc(HuksOptions, exportKey) {
	let _inData = HuksOptions.inData
	if (exportKey == 1) {
		HuksOptions.inData = exportKey_2
	} else {
		HuksOptions.inData = exportKey_1
	}
	await update(handle, HuksOptions)
		.then((data) => {
			console.log(`test update data ${JSON.stringify(data)}`)
			expect(data.errorCode == 0).assertTrue()
		})
		.catch((err) => {
			console.log('test update err information: ' + JSON.stringify(err))
			expect(null).assertFail()
		})
	HuksOptions.inData = _inData
}

function update(handle, HuksOptions) {
	return new Promise((resolve, reject) => {
		huks.update(handle, HuksOptions, function (err, data) {
			if (err.code !== 0) {
				console.log(
					'test update err information: ' + JSON.stringify(err)
				)
				reject(err)
			} else {
				resolve(data)
			}
		})
	})
}

async function publicAgreeFinishAbortFunc(
	HuksOptions_Finish,
	thirdInderfaceName,
	finishData
) {
	if (thirdInderfaceName == 'finish') {
		console.log(
			`test befor finish HuksOptions_Finish ${JSON.stringify(
				HuksOptions_Finish
			)}`
		)
		await finish(handle, HuksOptions_Finish)
			.then((data) => {
				console.log(`test finish data ${JSON.stringify(data)}`)
				if (finishData == 1) {
					finishData_1 = data.outData
				} else {
					finishData_2 = data.outData
				}
				expect(data.errorCode == 0).assertTrue()
			})
			.catch((err) => {
				console.log(
					'test finish err information: ' + JSON.stringify(err)
				)
				expect(null).assertFail()
			})
	} else {
		let HuksOptions_Abort = new Array({
			tag: HksTag.HKS_TAG_KEY_STORAGE_FLAG,
			value: HksKeyStorageType.HKS_STORAGE_TEMP,
		})
		await abort(handle, HuksOptions_Abort)
			.then((data) => {
				console.log(`test abort data ${JSON.stringify(data)}`)
				expect(data.errorCode == 0).assertTrue()
			})
			.catch((err) => {
				console.log(
					'test abort err information: ' + JSON.stringify(err)
				)
				expect(null).assertFail()
			})
	}
}

function abort(handle, HuksOptions_Abort) {
	return new Promise((resolve, reject) => {
		huks.abort(handle, HuksOptions_Abort, function (err, data) {
			if (err.code !== 0) {
				console.log(
					'test abort err information: ' + JSON.stringify(err)
				)
				reject(err)
			} else {
				resolve(data)
			}
		})
	})
}

function finish(handle, HuksOptions_Finish) {
	return new Promise((resolve, reject) => {
		huks.finish(handle, HuksOptions_Finish, function (err, data) {
			if (err.code !== 0) {
				console.log(
					'test generateKey err information: ' + JSON.stringify(err)
				)
				reject(err)
			} else {
				resolve(data)
			}
		})
	})
}

async function publicAgreeDeleteFunc(srcKeyAlies, HuksOptions) {
	await deleteKey(srcKeyAlies, HuksOptions)
		.then((data) => {
			console.log(`test deleteKey data ${JSON.stringify(data)}`)
			expect(data.errorCode == 0).assertTrue()
		})
		.catch((err) => {
			console.log(
				'test deleteKey err information: ' + JSON.stringify(err)
			)
			expect(null).assertFail()
		})
}

function deleteKey(srcKeyAlies, HuksOptions) {
	return new Promise((resolve, reject) => {
		huks.deleteKey(srcKeyAlies, HuksOptions, function (err, data) {
			if (err.code !== 0) {
				console.log(
					'test deleteKey err information: ' + JSON.stringify(err)
				)
				reject(err)
			} else {
				resolve(data)
			}
		})
	})
}

async function publicAgreeFunc(
	srcKeyAlies_1,
	srcKeyAlies_2,
	HuksOptions,
	HuksOptions_Finish,
	thirdInderfaceName
) {
	try {
		await publicAgreeGenFunc(srcKeyAlies_1, HuksOptions)
		await publicAgreeGenFunc(srcKeyAlies_2, HuksOptions)
		await publicAgreeExport1Func(srcKeyAlies_1, HuksOptions, 1)
		await publicAgreeExport1Func(srcKeyAlies_2, HuksOptions, 2)

		await publicAgreeInitFunc(srcKeyAlies_1, HuksOptions)
		await publicAgreeUpdateFunc(HuksOptions, 1)
		await publicAgreeFinishAbortFunc(
			HuksOptions_Finish,
			thirdInderfaceName,
			1
		)

		let _HuksOptions_Finish = HuksOptions_Finish
		let HuksOptions_Finish_2 = _HuksOptions_Finish
		HuksOptions_Finish_2.properties.splice(6, 1, {
			tag: HksTag.HKS_TAG_KEY_ALIAS,
			value: stringToUint8Array(srcKeyAlies_2 + 'final'),
		})

		await publicAgreeInitFunc(srcKeyAlies_2, HuksOptions)
		await publicAgreeUpdateFunc(HuksOptions, 2)
		await publicAgreeFinishAbortFunc(
			HuksOptions_Finish_2,
			thirdInderfaceName,
			2
		)

		await publicAgreeDeleteFunc(srcKeyAlies_1, HuksOptions)
		await publicAgreeDeleteFunc(srcKeyAlies_2, HuksOptions)
	} catch (e) {
		expect(null).assertFail()
	}
}
describe('SecurityHuksAgreeDHCallbackJsunit', function () {
	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree001
	 * @tc.desc: keysize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  PURPOSE-PURPOSE_ENCRYPT|PURPOSE_DECRYPT PADDING-PADDING_NONE MODE-MODE_ECB size-2048 inputdate-500kb  init>update>finish
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree001', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_001'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_001'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE256,
				HuksAgree002.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree002.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODEECB
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree002
	 * @tc.desc: keysize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  PURPOSE-PURPOSE_ENCRYPT|PURPOSE_DECRYPT PADDING-PADDING_NONE MODE-MODE_ECB size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree002', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_002'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_002'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE256,
				HuksAgree002.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree002.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODEECB
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree003
	 * @tc.desc: keysize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  PURPOSE-PURPOSE_ENCRYPT|PURPOSE_DECRYPT PADDING-PADDING_PKCS7 MODE-MODE_CBC size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree003', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_003'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_003'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE256,
				HuksAgree002.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree002.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGPKCS7,
				HuksAgree002.HuksKeyBLOCK_MODECBC
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree004
	 * @tc.desc: keysize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  PURPOSE-PURPOSE_ENCRYPT|PURPOSE_DECRYPT PADDING-PADDING_PKCS7 MODE-MODE_CBC size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree004', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_004'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_004'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE256,
				HuksAgree002.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree002.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGPKCS7,
				HuksAgree002.HuksKeyBLOCK_MODEECB
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree005
	 * @tc.desc: keysize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  PURPOSE-PURPOSE_ENCRYPT|PURPOSE_DECRYPT PADDING-PADDING_NONE MODE-MODE_CCM size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree005', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_005'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_005'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE256,
				HuksAgree002.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree002.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODECCM
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree006
	 * @tc.desc: keysize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  PURPOSE-PURPOSE_ENCRYPT|PURPOSE_DECRYPT PADDING-PADDING_NONE MODE-MODE_CCM size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree006', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_006'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_006'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE256,
				HuksAgree002.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree002.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODEGCM
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree007
	 * @tc.desc: keysize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  PURPOSE-PURPOSE_ENCRYPT|PURPOSE_DECRYPT PADDING-PADDING_NONE MODE-MODE_CTR size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree007', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_007'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_007'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE256,
				HuksAgree002.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree002.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODECTR
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree008
	 * @tc.desc: keysize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  PURPOSE-PURPOSE_DERIVE/ENCRYPT|DECRYPT DIGEST-DIGEST_SHA256  MODE-MODE_ECB size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree008', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_008'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_008'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE256,
				HuksAgree002.HuksKeyPurposeDERIVE,
				HuksAgree002.HuksKeyDIGESTSHA256,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODEECB
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree009
	 * @tc.desc: keysize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  PURPOSE-PURPOSE_DERIVE/ENCRYPT|DECRYPT DIGEST-DIGEST_SHA384  MODE-MODE_ECB size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree009', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_009'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_009'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE256,
				HuksAgree002.HuksKeyPurposeDERIVE,
				HuksAgree002.HuksKeyDIGESTSHA384,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODEECB
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree010
	 * @tc.desc: keysize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  PURPOSE-PURPOSE_DERIVE/ENCRYPT|DECRYPT DIGEST-DIGEST_SHA512  MODE-MODE_ECB size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree010', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_010'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_010'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE256,
				HuksAgree002.HuksKeyPurposeDERIVE,
				HuksAgree002.HuksKeyDIGESTSHA512,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODEECB
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree011
	 * @tc.desc: keysize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  PURPOSE-PURPOSE_ENCRYPT|DECRYPT DIGEST-DIGEST_NONE  MODE-MODE_CBC size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree011', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_011'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_011'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE128,
				HuksAgree002.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree002.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODECBC
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree012
	 * @tc.desc: keysize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  PURPOSE-PURPOSE_ENCRYPT|DECRYPT DIGEST-DIGEST_NONE  MODE-MODE_ECB size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree012', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_012'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_012'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE128,
				HuksAgree002.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree002.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODEECB
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree013
	 * @tc.desc: keysize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  PURPOSE-PURPOSE_ENCRYPT|DECRYPT DIGEST-DIGEST_PKCS7  MODE-MODE_CBC size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree013', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_013'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_013'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE128,
				HuksAgree002.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree002.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGPKCS7,
				HuksAgree002.HuksKeyBLOCK_MODECBC
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree014
	 * @tc.desc: keysize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  PURPOSE-PURPOSE_ENCRYPT|DECRYPT DIGEST-DIGEST_PKCS7  MODE-MODE_ECB size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree014', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_014'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_014'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE128,
				HuksAgree002.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree002.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGPKCS7,
				HuksAgree002.HuksKeyBLOCK_MODEECB
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree015
	 * @tc.desc: keysize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  PURPOSE-PURPOSE_ENCRYPT|DECRYPT DIGEST-DIGEST_NONE  MODE-MODE_CCM size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree015', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_015'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_015'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE128,
				HuksAgree002.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree002.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODECCM
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree016
	 * @tc.desc: keysize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  PURPOSE-PURPOSE_ENCRYPT|DECRYPT DIGEST-DIGEST_NONE  MODE-MODE_GCM size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree016', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_016'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_016'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE128,
				HuksAgree002.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree002.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODEGCM
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree017
	 * @tc.desc: keysize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  PURPOSE-PURPOSE_ENCRYPT|DECRYPT DIGEST-DIGEST_NONE  MODE-MODE_CTR size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree017', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_017'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_017'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE128,
				HuksAgree002.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree002.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODECTR
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree018
	 * @tc.desc: keysize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  PURPOSE-PURPOSE_DERIVE/ENCRYPT|DECRYPT DIGEST-DIGEST_SHA256  MODE-MODE_ECB size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree018', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_018'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_018'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE256,
				HuksAgree002.HuksKeyPurposeDERIVE,
				HuksAgree002.HuksKeyDIGESTSHA256,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODEECB
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})
	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree019
	 * @tc.desc: keysize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  PURPOSE-PURPOSE_DERIVE/ENCRYPT|DECRYPT DIGEST-DIGEST_SHA384  MODE-MODE_ECB size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree019', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_019'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_019'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE128,
				HuksAgree002.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree002.HuksKeyDIGESTSHA384,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODEECB
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree020
	 * @tc.desc: keysize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  PURPOSE-PURPOSE_ENCRYPT|DECRYPT DIGEST-DIGEST_SHA512  MODE-MODE_ECB size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree020', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_020'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_020'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE128,
				HuksAgree002.HuksKeyPurposeDERIVE,
				HuksAgree002.HuksKeyDIGESTSHA512,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODEECB
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})
	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree021
	 * @tc.desc: DHsize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  keysize-KEY_SIZE_192 PURPOSE-PURPOSE_ENCRYPT|DECRYPT PADDING-PADDING_NONE  MODE-MODE_CBC size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree021', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_021'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_021'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE192,
				HuksAgree002.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree002.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODECBC
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree022
	 * @tc.desc: DHsize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  keysize-KEY_SIZE_192 PURPOSE-PURPOSE_ENCRYPT|DECRYPT PADDING-PADDING_NONE  MODE-MODE_ECB size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree022', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_022'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_022'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE192,
				HuksAgree002.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree002.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODEECB
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree023
	 * @tc.desc: DHsize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  keysize-KEY_SIZE_192 PURPOSE-PURPOSE_ENCRYPT|DECRYPT PADDING-PADDING_PKCS7  MODE-MODE_CBC size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree023', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_023'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_023'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE192,
				HuksAgree002.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree002.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGPKCS7,
				HuksAgree002.HuksKeyBLOCK_MODECBC
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree024
	 * @tc.desc: DHsize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  keysize-KEY_SIZE_192 PURPOSE-PURPOSE_ENCRYPT|DECRYPT PADDING-PADDING_PKCS7  MODE-MODE_ECB size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree024', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_024'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_024'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE192,
				HuksAgree002.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree002.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGPKCS7,
				HuksAgree002.HuksKeyBLOCK_MODEECB
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree025
	 * @tc.desc: DHsize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  keysize-KEY_SIZE_192 PURPOSE-PURPOSE_ENCRYPT|DECRYPT PADDING-PADDING_NONE  MODE-MODE_CCM size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree025', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_025'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_025'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE192,
				HuksAgree002.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree002.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODECCM
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree026
	 * @tc.desc: DHsize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  keysize-KEY_SIZE_192 PURPOSE-PURPOSE_ENCRYPT|DECRYPT PADDING-PADDING_NONE  MODE-MODE_GCM size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree026', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_026'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_026'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE192,
				HuksAgree002.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree002.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODEGCM
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree027
	 * @tc.desc: DHsize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  keysize-KEY_SIZE_192 PURPOSE-PURPOSE_ENCRYPT|DECRYPT PADDING-PADDING_NONE  MODE-MODE_CTR size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree027', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_027'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_027'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE192,
				HuksAgree002.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree002.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODECTR
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree028
	 * @tc.desc: DHsize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  keysize-KEY_SIZE_192 PURPOSE-PURPOSE_DERIVE/ENCRYPT|DECRYPT DIGEST-DIGEST_SHA256  MODE-MODE_ECB size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree028', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_028'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_028'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE192,
				HuksAgree002.HuksKeyPurposeDERIVE,
				HuksAgree002.HuksKeyDIGESTSHA256,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODEECB
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})
	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree029
	 * @tc.desc: DHsize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  keysize-KEY_SIZE_192 PURPOSE-PURPOSE_ENCRYPT|DECRYPT DIGEST-DIGEST_SHA512  MODE-MODE_ECB size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree029', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_029'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_029'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE192,
				HuksAgree002.HuksKeyPurposeDERIVE,
				HuksAgree002.HuksKeyDIGESTSHA512,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODEECB
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree030
	 * @tc.desc: DHsize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_HMAC  keysize-KEY_SIZE_256 PURPOSE-PURPOSE_MAC DIGEST-DIGEST_SHA1  MODE-MODE_ECB size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree030', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_030'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_030'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMHMAC,
				HuksAgree002.HuksKeySIZE256,
				HuksAgree002.HuksKeyPurposeMAC,
				HuksAgree002.HuksKeyDIGESTSHA1,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODEECB
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree031
	 * @tc.desc: DHsize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_HMAC  keysize-KEY_SIZE_256 PURPOSE-PURPOSE_MAC DIGEST-DIGEST_SHA224  MODE-MODE_ECB size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree031', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_031'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_031'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMHMAC,
				HuksAgree002.HuksKeySIZE256,
				HuksAgree002.HuksKeyPurposeMAC,
				HuksAgree002.HuksKeyDIGESTSHA224,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODEECB
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree032
	 * @tc.desc: DHsize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_HMAC  keysize-KEY_SIZE_256 PURPOSE-PURPOSE_MAC DIGEST-DIGEST_SHA256  MODE-MODE_ECB size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree032', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_032'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_032'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMHMAC,
				HuksAgree002.HuksKeySIZE256,
				HuksAgree002.HuksKeyPurposeMAC,
				HuksAgree002.HuksKeyDIGESTSHA256,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODEECB
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree033
	 * @tc.desc: DHsize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_HMAC  keysize-KEY_SIZE_256 PURPOSE-PURPOSE_MAC DIGEST-DIGEST_SHA384  MODE-MODE_ECB size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree033', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_033'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_033'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMHMAC,
				HuksAgree002.HuksKeySIZE256,
				HuksAgree002.HuksKeyPurposeMAC,
				HuksAgree002.HuksKeyDIGESTSHA384,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODEECB
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/**
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree034
	 * @tc.desc: DHsize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_HMAC  keysize-KEY_SIZE_256 PURPOSE-PURPOSE_MAC DIGEST-DIGEST_SHA512  MODE-MODE_ECB size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree034', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_034'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_034'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMHMAC,
				HuksAgree002.HuksKeySIZE256,
				HuksAgree002.HuksKeyPurposeMAC,
				HuksAgree002.HuksKeyDIGESTSHA512,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODEECB
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})

	/*
	 * @tc.name: testAgreeDHSize4096Abort63KBAgree035
	 * @tc.desc: DHsize-KEY_SIZE_2048 FLAG-PERSISTENT  ALG-ALG_AES  keysize-KEY_SIZE_192 PURPOSE-PURPOSE_DERIVE/ENCRYPT|DECRYPT DIGEST-DIGEST_SHA384  MODE-MODE_ECB size-2048 inputdate-500kb  init>update>abort
	 * @tc.type: FUNC
	 */
	it('testAgreeDHSize4096Abort63KBAgree035', 0, async function (done) {
		const srcKeyAlies_1 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_01_035'
		const srcKeyAlies_2 = 'testAgreeDHSize4096Abort63KBAgreeKeyAlias_02_035'
		let HuksOptions_Finish = {
			properties: new Array(
				HuksAgree002.HuksKeySTORAGE,
				HuksAgree002.HuksKeyISKEYALIAS,
				HuksAgree002.HuksKeyALGORITHMAES,
				HuksAgree002.HuksKeySIZE192,
				HuksAgree002.HuksKeyPurposeDERIVE,
				HuksAgree002.HuksKeyDIGESTSHA384,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAlies_1),
				},
				HuksAgree002.HuksKeyPADDINGNONE,
				HuksAgree002.HuksKeyBLOCK_MODEECB
			),
			inData: srcData63Kb,
		}
		await publicAgreeFunc(
			srcKeyAlies_1,
			srcKeyAlies_2,
			HuksOptions_63kb,
			HuksOptions_Finish,
			'abort'
		)
		done()
	})
})
