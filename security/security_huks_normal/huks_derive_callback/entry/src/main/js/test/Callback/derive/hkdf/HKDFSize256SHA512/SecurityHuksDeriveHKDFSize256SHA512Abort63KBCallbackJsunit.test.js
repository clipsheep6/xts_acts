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
import * as Data from '../../../../../../../../../../utils/data.json'

let handle = {}
let handle1
let handle2
let finishDataFrist
let finishDataSecond
let srcData63 = Data.Date63KB
let srcData63Kb = stringToUint8Array(srcData63)

let HksKeyAlg = {
	HKS_ALG_HKDF: 51,
	HKS_ALG_AES: 20,
	HKS_ALG_DH: 103,
	HKS_ALG_HMAC: 50,
}

let HksKeyPurpose = {
	HKS_KEY_PURPOSE_AGREE: 256,
	HKS_KEY_PURPOSE_DERIVE: 16,
	HKS_KEY_PURPOSE_ENCRYPT: 1,
	HKS_KEY_PURPOSE_DECRYPT: 2,
	HKS_KEY_PURPOSE_MAC: 128,
}

let HksKeyStorageType = {
	HKS_STORAGE_TEMP: 0,
	HKS_STORAGE_PERSISTENT: 1,
}

let HksKeySize = {
	HKS_AES_KEY_SIZE_128: 128,
	HKS_AES_KEY_SIZE_192: 192,
	HKS_AES_KEY_SIZE_256: 256,
	HKS_AES_KEY_SIZE_512: 512,
	DERIVE_KEY_SIZE_32: 32,
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

let HksTagType = {
	HKS_TAG_TYPE_UINT: 2 << 28,
	HKS_TAG_TYPE_BOOL: 4 << 28,
	HKS_TAG_TYPE_BYTES: 5 << 28,
}

let HksCipherMode = {
	HKS_MODE_ECB: 1,
	HKS_MODE_CBC: 2,
	HKS_MODE_CTR: 3,
	HKS_MODE_OFB: 4,
	HKS_MODE_CCM: 31,
	HKS_MODE_GCM: 32,
}

let HksKeyPadding = {
	HKS_PADDING_NONE: 0,
	HKS_PADDING_OAEP: 1,
	HKS_PADDING_PSS: 2,
	HKS_PADDING_PKCS1_V1_5: 3,
	HKS_PADDING_PKCS5: 4,
	HKS_PADDING_PKCS7: 5,
}

let HksTag = {
	HKS_TAG_ALGORITHM: HksTagType.HKS_TAG_TYPE_UINT | 1,
	HKS_TAG_PURPOSE: HksTagType.HKS_TAG_TYPE_UINT | 2,
	HKS_TAG_KEY_SIZE: HksTagType.HKS_TAG_TYPE_UINT | 3,
	HKS_TAG_DIGEST: HksTagType.HKS_TAG_TYPE_UINT | 4,
	HKS_TAG_PADDING: HksTagType.HKS_TAG_TYPE_UINT | 5,
	HKS_TAG_BLOCK_MODE: HksTagType.HKS_TAG_TYPE_UINT | 6,
	HKS_TAG_DERIVE_KEY_SIZE: HksTagType.HKS_TAG_TYPE_UINT | 24,
	HKS_TAG_IS_KEY_ALIAS: HksTagType.HKS_TAG_TYPE_BOOL | 1001,
	HKS_TAG_KEY_STORAGE_FLAG: HksTagType.HKS_TAG_TYPE_UINT | 1002,
	HKS_TAG_KEY_ALIAS: HksTagType.HKS_TAG_TYPE_BYTES | 23,
}

let HuksDerive001 = {
	HuksKeySIZE: {
		tag: HksTag.HKS_TAG_KEY_SIZE,
		value: HksKeySize.HKS_AES_KEY_SIZE_512,
	},
	HuksKeyAlgHKDF: {
		tag: HksTag.HKS_TAG_ALGORITHM,
		value: HksKeyAlg.HKS_ALG_HKDF,
	},
	HuksKeyAlgAES: {
		tag: HksTag.HKS_TAG_ALGORITHM,
		value: HksKeyAlg.HKS_ALG_AES,
	},
	HuksKeyPurposeHKDF: {
		tag: HksTag.HKS_TAG_PURPOSE,
		value: HksKeyPurpose.HKS_KEY_PURPOSE_DERIVE,
	},
	HuksTagHKDFDigestSHA256: {
		tag: HksTag.HKS_TAG_DIGEST,
		value: HksKeyDigest.HKS_DIGEST_SHA256,
	},
	HuksTagHKDFDigestSHA384: {
		tag: HksTag.HKS_TAG_DIGEST,
		value: HksKeyDigest.HKS_DIGEST_SHA384,
	},
	HuksTagHKDFDigestSHA512: {
		tag: HksTag.HKS_TAG_DIGEST,
		value: HksKeyDigest.HKS_DIGEST_SHA512,
	},
	HuksKeyHKDFSize128: {
		tag: HksTag.HKS_TAG_KEY_SIZE,
		value: HksKeySize.HKS_AES_KEY_SIZE_128,
	},
	HuksKeyHKDFSize192: {
		tag: HksTag.HKS_TAG_KEY_SIZE,
		value: HksKeySize.HKS_AES_KEY_SIZE_192,
	},
	HuksKeyHKDFSize256: {
		tag: HksTag.HKS_TAG_KEY_SIZE,
		value: HksKeySize.HKS_AES_KEY_SIZE_256,
	},
	HuksKeyDERIVEKEYSIZE: {
		tag: HksTag.HKS_TAG_DERIVE_KEY_SIZE,
		value: HksKeySize.DERIVE_KEY_SIZE_32,
	},

	HuksKeyISKEYALIAS: { tag: HksTag.HKS_TAG_IS_KEY_ALIAS, value: true },
	HuksKeySTORAGE: {
		tag: HksTag.HKS_TAG_KEY_STORAGE_FLAG,
		value: HksKeyStorageType.HKS_STORAGE_PERSISTENT,
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
		value: HksKeySize.HKS_AES_KEY_SIZE_256,
	},
	HuksKeySIZE128: {
		tag: HksTag.HKS_TAG_KEY_SIZE,
		value: HksKeySize.HKS_AES_KEY_SIZE_128,
	},
	HuksKeySIZE192: {
		tag: HksTag.HKS_TAG_KEY_SIZE,
		value: HksKeySize.HKS_AES_KEY_SIZE_192,
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
	HuksKeyPADDINGNONE: {
		tag: HksTag.HKS_TAG_PADDING,
		value: HksKeyPadding.HKS_PADDING_NONE,
	},
	HuksKeyPADDINGPKCS7: {
		tag: HksTag.HKS_TAG_PADDING,
		value: HksKeyPadding.HKS_PADDING_PKCS7,
	},
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
	HuksKeyBLOCKMODECBC: {
		tag: HksTag.HKS_TAG_BLOCK_MODE,
		value: HksCipherMode.HKS_MODE_CBC,
	},
	HuksKeyBLOCKMODECCM: {
		tag: HksTag.HKS_TAG_BLOCK_MODE,
		value: HksCipherMode.HKS_MODE_CCM,
	},
	HuksKeyBLOCKMODEECB: {
		tag: HksTag.HKS_TAG_BLOCK_MODE,
		value: HksCipherMode.HKS_MODE_ECB,
	},
	HuksKeyBLOCKMODECTR: {
		tag: HksTag.HKS_TAG_BLOCK_MODE,
		value: HksCipherMode.HKS_MODE_CTR,
	},
	HuksKeyBLOCKMODEGCM: {
		tag: HksTag.HKS_TAG_BLOCK_MODE,
		value: HksCipherMode.HKS_MODE_GCM,
	},
}

let HuksOptions63kb = {
	properties: new Array(
		HuksDerive001.HuksKeyAlgAES,
		HuksDerive001.HuksKeyPurposeHKDF,
		HuksDerive001.HuksTagHKDFDigestSHA512,
		HuksDerive001.HuksKeyHKDFSize256
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

function uint8ArrayToString(fileData) {
	var dataString = ''
	for (var i = 0; i < fileData.length; i++) {
		dataString += String.fromCharCode(fileData[i])
	}
	return dataString
}

async function publicDeriveGenFunc(srcKeyAlies, HuksOptions) {
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

async function publicDeriveInitFunc(srcKeyAlies, HuksOptions) {
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
	return HuksOptions
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

async function publicDeriveUpdateFunc(HuksOptions) {
	await update(handle, HuksOptions)
		.then((data) => {
			console.log(`test update data ${JSON.stringify(data)}`)
			expect(data.errorCode == 0).assertTrue()
		})
		.catch((err) => {
			console.log('test update err information: ' + JSON.stringify(err))
			expect(null).assertFail()
		})
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

async function publicDeriveFinishAbortFunc(
	HuksOptionsFinish,
	thirdInderfaceName
) {
	if (thirdInderfaceName == 'finish') {
		console.log(
			`test befor finish HuksOptionsFinish ${JSON.stringify(
				HuksOptionsFinish
			)}`
		)
		await finish(handle, HuksOptionsFinish)
			.then((data) => {
				console.log(`test finish data ${JSON.stringify(data)}`)
				expect(data.errorCode == 0).assertTrue()
			})
			.catch((err) => {
				console.log(
					'test finish err information: ' + JSON.stringify(err)
				)
				expect(null).assertFail()
			})
	} else {
		let HuksOptionsAbort = new Array({
			tag: HksTag.HKS_TAG_KEY_STORAGE_FLAG,
			value: HksKeyStorageType.HKS_STORAGE_TEMP,
		})
		await abort(handle, HuksOptionsAbort)
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

function abort(handle, HuksOptionsAbort) {
	return new Promise((resolve, reject) => {
		huks.abort(handle, HuksOptionsAbort, function (err, data) {
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

function finish(handle, HuksOptionsFinish) {
	return new Promise((resolve, reject) => {
		huks.finish(handle, HuksOptionsFinish, function (err, data) {
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

async function publicDeriveDeleteFunc(srcKeyAlies, HuksOptions) {
	console.log(
		'test before deleteKey HuksOptions: ' + JSON.stringify(HuksOptions)
	)
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

async function publicDeriveFunc(
	srcKeyAlies,
	HuksOptions,
	HuksOptionsFinish,
	thirdInderfaceName
) {
	try {
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)

		await publicDeriveInitFunc(srcKeyAlies, HuksOptions)
		await publicDeriveUpdateFunc(HuksOptions)
		await publicDeriveFinishAbortFunc(HuksOptionsFinish, thirdInderfaceName)

		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgAES)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyHKDFSize128)
		await publicDeriveDeleteFunc(srcKeyAlies, HuksOptions)
	} catch (e) {
		expect(null).assertFail()
	}
}

describe('SecurityHuksDeriveHKDFCallbackJsunit', function () {
	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive001',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_001'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE256,
					HuksDerive001.HuksKeyPurposeENCRYPTDECRYPT,
					HuksDerive001.HuksKeyDIGESTNONE,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODEECB
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive002',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_002'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE256,
					HuksDerive001.HuksKeyPurposeENCRYPTDECRYPT,
					HuksDerive001.HuksKeyDIGESTNONE,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODEECB
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive003',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_003'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE256,
					HuksDerive001.HuksKeyPurposeENCRYPTDECRYPT,
					HuksDerive001.HuksKeyDIGESTNONE,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGPKCS7,
					HuksDerive001.HuksKeyBLOCKMODECBC
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive004',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_004'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE256,
					HuksDerive001.HuksKeyPurposeENCRYPTDECRYPT,
					HuksDerive001.HuksKeyDIGESTNONE,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGPKCS7,
					HuksDerive001.HuksKeyBLOCKMODEECB
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive005',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_005'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE256,
					HuksDerive001.HuksKeyPurposeENCRYPTDECRYPT,
					HuksDerive001.HuksKeyDIGESTNONE,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODECCM
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive006',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_006'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE256,
					HuksDerive001.HuksKeyPurposeENCRYPTDECRYPT,
					HuksDerive001.HuksKeyDIGESTNONE,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODEGCM
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive007',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_007'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE256,
					HuksDerive001.HuksKeyPurposeENCRYPTDECRYPT,
					HuksDerive001.HuksKeyDIGESTNONE,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODECTR
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive008',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_008'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE256,
					HuksDerive001.HuksKeyPurposeDERIVE,
					HuksDerive001.HuksKeyDIGESTSHA256,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODEECB
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive009',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_009'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE256,
					HuksDerive001.HuksKeyPurposeDERIVE,
					HuksDerive001.HuksKeyDIGESTSHA384,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODEECB
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive010',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_010'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE256,
					HuksDerive001.HuksKeyPurposeDERIVE,
					HuksDerive001.HuksKeyDIGESTSHA512,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODEECB
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive011',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_011'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE128,
					HuksDerive001.HuksKeyPurposeENCRYPTDECRYPT,
					HuksDerive001.HuksKeyDIGESTNONE,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODECBC
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive012',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_012'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE128,
					HuksDerive001.HuksKeyPurposeENCRYPTDECRYPT,
					HuksDerive001.HuksKeyDIGESTNONE,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODEECB
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive013',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_013'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE128,
					HuksDerive001.HuksKeyPurposeENCRYPTDECRYPT,
					HuksDerive001.HuksKeyDIGESTNONE,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGPKCS7,
					HuksDerive001.HuksKeyBLOCKMODECBC
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive014',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_014'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE128,
					HuksDerive001.HuksKeyPurposeENCRYPTDECRYPT,
					HuksDerive001.HuksKeyDIGESTNONE,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGPKCS7,
					HuksDerive001.HuksKeyBLOCKMODEECB
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive015',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_015'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE128,
					HuksDerive001.HuksKeyPurposeENCRYPTDECRYPT,
					HuksDerive001.HuksKeyDIGESTNONE,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODECCM
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive016',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_016'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE128,
					HuksDerive001.HuksKeyPurposeENCRYPTDECRYPT,
					HuksDerive001.HuksKeyDIGESTNONE,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODEGCM
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive017',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_017'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE128,
					HuksDerive001.HuksKeyPurposeENCRYPTDECRYPT,
					HuksDerive001.HuksKeyDIGESTNONE,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODECTR
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive018',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_018'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE256,
					HuksDerive001.HuksKeyPurposeDERIVE,
					HuksDerive001.HuksKeyDIGESTSHA256,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODEECB
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive019',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_019'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE128,
					HuksDerive001.HuksKeyPurposeENCRYPTDECRYPT,
					HuksDerive001.HuksKeyDIGESTSHA384,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODEECB
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive020',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_020'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE128,
					HuksDerive001.HuksKeyPurposeDERIVE,
					HuksDerive001.HuksKeyDIGESTSHA512,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODEECB
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive021',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_021'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE192,
					HuksDerive001.HuksKeyPurposeENCRYPTDECRYPT,
					HuksDerive001.HuksKeyDIGESTNONE,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODECBC
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive022',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_022'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE192,
					HuksDerive001.HuksKeyPurposeENCRYPTDECRYPT,
					HuksDerive001.HuksKeyDIGESTNONE,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODEECB
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive023',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_023'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE192,
					HuksDerive001.HuksKeyPurposeENCRYPTDECRYPT,
					HuksDerive001.HuksKeyDIGESTNONE,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGPKCS7,
					HuksDerive001.HuksKeyBLOCKMODECBC
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive024',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_024'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE192,
					HuksDerive001.HuksKeyPurposeENCRYPTDECRYPT,
					HuksDerive001.HuksKeyDIGESTNONE,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGPKCS7,
					HuksDerive001.HuksKeyBLOCKMODEECB
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive025',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_025'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE192,
					HuksDerive001.HuksKeyPurposeENCRYPTDECRYPT,
					HuksDerive001.HuksKeyDIGESTNONE,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODECCM
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive026',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_026'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE192,
					HuksDerive001.HuksKeyPurposeENCRYPTDECRYPT,
					HuksDerive001.HuksKeyDIGESTNONE,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODEGCM
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive027',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_027'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE192,
					HuksDerive001.HuksKeyPurposeENCRYPTDECRYPT,
					HuksDerive001.HuksKeyDIGESTNONE,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODECTR
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive028',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_028'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE192,
					HuksDerive001.HuksKeyPurposeDERIVE,
					HuksDerive001.HuksKeyDIGESTSHA256,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODEECB
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive029',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_029'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE192,
					HuksDerive001.HuksKeyPurposeDERIVE,
					HuksDerive001.HuksKeyDIGESTSHA512,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODEECB
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive030',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_030'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMHMAC,
					HuksDerive001.HuksKeySIZE256,
					HuksDerive001.HuksKeyPurposeMAC,
					HuksDerive001.HuksKeyDIGESTSHA1,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODEECB
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive031',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_031'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMHMAC,
					HuksDerive001.HuksKeySIZE256,
					HuksDerive001.HuksKeyPurposeMAC,
					HuksDerive001.HuksKeyDIGESTSHA224,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODEECB
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive032',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_032'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMHMAC,
					HuksDerive001.HuksKeySIZE256,
					HuksDerive001.HuksKeyPurposeMAC,
					HuksDerive001.HuksKeyDIGESTSHA256,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODEECB
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive033',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_033'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMHMAC,
					HuksDerive001.HuksKeySIZE256,
					HuksDerive001.HuksKeyPurposeMAC,
					HuksDerive001.HuksKeyDIGESTSHA384,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODEECB
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive034',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_034'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMHMAC,
					HuksDerive001.HuksKeySIZE256,
					HuksDerive001.HuksKeyPurposeMAC,
					HuksDerive001.HuksKeyDIGESTSHA512,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODEECB
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)

	it(
		'testDeriveHKDFSize256SHA512Abort63KBDerive035',
		0,
		async function (done) {
			const srcKeyAliesFrist =
				'testDeriveHKDFSize256SHA512Abort63KBDeriveKeyAlias_01_035'
			let HuksOptionsFinish = {
				properties: new Array(
					HuksDerive001.HuksKeySTORAGE,
					HuksDerive001.HuksKeyISKEYALIAS,
					HuksDerive001.HuksKeyALGORITHMAES,
					HuksDerive001.HuksKeySIZE192,
					HuksDerive001.HuksKeyPurposeDERIVE,
					HuksDerive001.HuksKeyDIGESTSHA384,
					{
						tag: HksTag.HKS_TAG_KEY_ALIAS,
						value: stringToUint8Array(srcKeyAliesFrist),
					},
					HuksDerive001.HuksKeyPADDINGNONE,
					HuksDerive001.HuksKeyBLOCKMODEECB
				),
				inData: srcData63Kb,
			}
			await publicDeriveFunc(
				srcKeyAliesFrist,
				HuksOptions63kb,
				HuksOptionsFinish,
				'abort'
			)
			done()
		}
	)
})
