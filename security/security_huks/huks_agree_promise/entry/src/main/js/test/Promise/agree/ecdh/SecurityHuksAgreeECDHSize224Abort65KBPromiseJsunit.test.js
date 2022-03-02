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

import { describe, it, beforeEach, expect } from 'deccjsunit/index'
import huks from '@ohos.security.huks'
import * as Data from '../../../data.js'

let exportKeyFrist
let exportKeySecond
let handle = {}
let handle1
let handle2
let finishData_1
let finishDataSecond
let srcData65 = Data.Date65KB
let srcData65Kb = stringToUint8Array(srcData65)
let HuksOptions65kb

let HksKeyAlg = {
	HKS_ALG_ECDH: 100,
	HKS_ALG_ECC: 2,
	HKS_ALG_DH: 103,
	HKS_ALG_AES: 20,
	HKS_ALG_HMAC: 50,
}

let HksKeyPurpose = {
	HKS_KEY_PURPOSE_ENCRYPT: 1,
	HKS_KEY_PURPOSE_DECRYPT: 2,
	HKS_KEY_PURPOSE_AGREE: 256,
	HKS_KEY_PURPOSE_DERIVE: 16,
	HKS_KEY_PURPOSE_MAC: 128,
}

let HksKeySize = {
	HKS_ECC_KEY_SIZE_128: 128,
	HKS_ECC_KEY_SIZE_192: 192,
	HKS_ECC_KEY_SIZE_224: 224,
	HKS_ECC_KEY_SIZE_256: 256,
	HKS_ECC_KEY_SIZE_384: 384,
	HKS_ECC_KEY_SIZE_521: 521,
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

let HksTagType = {
	HKS_TAG_TYPE_UINT: 2 << 28,
	HKS_TAG_TYPE_BOOL: 4 << 28,
	HKS_TAG_TYPE_BYTES: 5 << 28,
}
let HksKeyStorageType = {
	HKS_STORAGE_TEMP: 0,
	HKS_STORAGE_PERSISTENT: 1,
}

let HksTag = {
	HKS_TAG_ALGORITHM: HksTagType.HKS_TAG_TYPE_UINT | 1,
	HKS_TAG_PURPOSE: HksTagType.HKS_TAG_TYPE_UINT | 2,
	HKS_TAG_KEY_SIZE: HksTagType.HKS_TAG_TYPE_UINT | 3,
	HKS_TAG_KEY_STORAGE_FLAG: HksTagType.HKS_TAG_TYPE_UINT | 1002,
	HKS_TAG_DIGEST: HksTagType.HKS_TAG_TYPE_UINT | 4,
	HKS_TAG_PADDING: HksTagType.HKS_TAG_TYPE_UINT | 5,
	HKS_TAG_BLOCK_MODE: HksTagType.HKS_TAG_TYPE_UINT | 6,
	HKS_TAG_IS_KEY_ALIAS: HksTagType.HKS_TAG_TYPE_BOOL | 1001,
	HKS_TAG_KEY_ALIAS: HksTagType.HKS_TAG_TYPE_BYTES | 23,
}

let HuksAgree001 = {
	HuksKeyAlgECDH: {
		tag: HksTag.HKS_TAG_ALGORITHM,
		value: HksKeyAlg.HKS_ALG_ECDH,
	},
	HuksKeyAlgECC: {
		tag: HksTag.HKS_TAG_ALGORITHM,
		value: HksKeyAlg.HKS_ALG_ECC,
	},
	HuksKeyECCSize224: {
		tag: HksTag.HKS_TAG_KEY_SIZE,
		value: HksKeySize.HKS_ECC_KEY_SIZE_224,
	},
	HuksKeyECCSize256: {
		tag: HksTag.HKS_TAG_KEY_SIZE,
		value: HksKeySize.HKS_ECC_KEY_SIZE_256,
	},
	HuksKeyECCSize384: {
		tag: HksTag.HKS_TAG_KEY_SIZE,
		value: HksKeySize.HKS_ECC_KEY_SIZE_384,
	},
	HuksKeyECCSize521: {
		tag: HksTag.HKS_TAG_KEY_SIZE,
		value: HksKeySize.HKS_ECC_KEY_SIZE_521,
	},
	HuksKeyECCDIGEST: {
		tag: HksTag.HKS_TAG_DIGEST,
		value: HksKeyDigest.HKS_DIGEST_NONE,
	},
	HuksKeyECCPADDING: {
		tag: HksTag.HKS_TAG_PADDING,
		value: HksKeyPadding.HKS_PADDING_NONE,
	},
	HuksKeyECCBLOCKMODE: {
		tag: HksTag.HKS_TAG_BLOCK_MODE,
		value: HksCipherMode.HKS_MODE_CBC,
	},
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
	HuksKeyALGORITHMAES: {
		tag: HksTag.HKS_TAG_ALGORITHM,
		value: HksKeyAlg.HKS_ALG_AES,
	},
	HuksKeyALGORITHMHMAC: {
		tag: HksTag.HKS_TAG_ALGORITHM,
		value: HksKeyAlg.HKS_ALG_HMAC,
	},
	HuksKeySIZE521: {
		tag: HksTag.HKS_TAG_KEY_SIZE,
		value: HksKeySize.HKS_ECC_KEY_SIZE_521,
	},
	HuksKeySIZE256: {
		tag: HksTag.HKS_TAG_KEY_SIZE,
		value: HksKeySize.HKS_ECC_KEY_SIZE_256,
	},
	HuksKeySIZE128: {
		tag: HksTag.HKS_TAG_KEY_SIZE,
		value: HksKeySize.HKS_ECC_KEY_SIZE_128,
	},
	HuksKeySIZE192: {
		tag: HksTag.HKS_TAG_KEY_SIZE,
		value: HksKeySize.HKS_ECC_KEY_SIZE_192,
	},
	HuksKeyAlgAES: {
		tag: HksTag.HKS_TAG_ALGORITHM,
		value: HksKeyAlg.HKS_ALG_AES,
	},
	HuksKeyAlgHMAC: {
		tag: HksTag.HKS_TAG_ALGORITHM,
		value: HksKeyAlg.HKS_ALG_HMAC,
	},
	HuksKeyPurposeECDH: {
		tag: HksTag.HKS_TAG_PURPOSE,
		value: HksKeyPurpose.HKS_KEY_PURPOSE_AGREE,
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
	await huks
		.generateKey(srcKeyAlies, HuksOptions)
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

async function publicAgreeExport1Func(srcKeyAlies, HuksOptions, exportKey) {
	await huks
		.exportKey(srcKeyAlies, HuksOptions)
		.then((data) => {
			console.log(`test exportKey data: ${JSON.stringify(data)}`)
			if (exportKey == 1) {
				exportKeyFrist = data.outData
			} else {
				exportKeySecond = data.outData
			}
		})
		.catch((err) => {
			console.log(
				'test exportKey err information: ' + JSON.stringify(err)
			)
			expect(null).assertFail()
		})
}

async function publicAgreeInitFunc(srcKeyAlies, HuksOptions) {
	await huks
		.init(srcKeyAlies, HuksOptions)
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

async function publicAgreeUpdateFunc(HuksOptions, exportKey) {
	let _inData = HuksOptions.inData
	if (exportKey == 1) {
		HuksOptions.inData = exportKeySecond
	} else {
		HuksOptions.inData = exportKeyFrist
	}
	await huks
		.update(handle, HuksOptions)
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

async function publicAgreeFinishAbortFunc(
	HuksOptionsFinish,
	thirdInderfaceName,
	finishData
) {
	if (thirdInderfaceName == 'finish') {
		console.log(
			`test befor finish HuksOptionsFinish ${JSON.stringify(
				HuksOptionsFinish
			)}`
		)
		await huks
			.finish(handle, HuksOptionsFinish)
			.then((data) => {
				console.log(`test finish data ${JSON.stringify(data)}`)
				if (finishData == 1) {
					finishData_1 = data.outData
				} else {
					finishDataSecond = data.outData
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
		let HuksOptionsAbort = new Array({
			tag: HksTag.HKS_TAG_KEY_STORAGE_FLAG,
			value: HksKeyStorageType.HKS_STORAGE_TEMP,
		})
		await huks
			.abort(handle, HuksOptionsAbort)
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

async function publicAgreeDeleteFunc(srcKeyAlies, HuksOptions) {
	await huks
		.deleteKey(srcKeyAlies, HuksOptions)
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

async function publicAgreeFunc(
	srcKeyAliesFrist,
	srcKeyAliesSecond,
	HuksOptions,
	HuksOptionsFinish,
	thirdInderfaceName
) {
	try {
		await publicAgreeGenFunc(srcKeyAliesFrist, HuksOptions)
		await publicAgreeGenFunc(srcKeyAliesSecond, HuksOptions)
		await publicAgreeExport1Func(srcKeyAliesFrist, HuksOptions, 1)
		await publicAgreeExport1Func(srcKeyAliesSecond, HuksOptions, 2)

		HuksOptions.properties.splice(0, 1, HuksAgree001.HuksKeyAlgECDH)
		HuksOptions.properties.splice(3, 1)
		HuksOptions.properties.splice(4, 1)
		HuksOptions.properties.splice(5, 1)

		await publicAgreeInitFunc(srcKeyAliesFrist, HuksOptions)
		await publicAgreeUpdateFunc(HuksOptions, 1)
		await publicAgreeFinishAbortFunc(
			HuksOptionsFinish,
			thirdInderfaceName,
			1
		)

		let tempHuksOptionsFinish = HuksOptionsFinish
		let HuksOptionsFinishSecond = tempHuksOptionsFinish
		HuksOptionsFinishSecond.properties.splice(6, 1, {
			tag: HksTag.HKS_TAG_KEY_ALIAS,
			value: stringToUint8Array(srcKeyAliesSecond + 'final'),
		})

		await publicAgreeInitFunc(srcKeyAliesSecond, HuksOptions)
		await publicAgreeUpdateFunc(HuksOptions, 2)
		await publicAgreeFinishAbortFunc(
			HuksOptionsFinishSecond,
			thirdInderfaceName,
			2
		)

		await publicAgreeDeleteFunc(srcKeyAliesFrist, HuksOptions)
		await publicAgreeDeleteFunc(srcKeyAliesSecond, HuksOptions)
	} catch (e) {
		expect(null).assertFail()
	}
}

describe('SecurityHuksAgreeECDHPromiseJsunit', function () {
	beforeEach(function () {
		HuksOptions65kb = {
			properties: new Array(
				HuksAgree001.HuksKeyAlgECC,
				HuksAgree001.HuksKeyPurposeECDH,
				HuksAgree001.HuksKeyECCSize224,
				HuksAgree001.HuksKeyECCDIGEST,
				HuksAgree001.HuksKeyECCPADDING,
				HuksAgree001.HuksKeyECCBLOCKMODE
			),
			inData: srcData65Kb,
		}
		console.info('test beforeEach called')
	})

	it('testAgreeECDHSize224Abort65KBAgree001', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_001'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_001'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE256,
				HuksAgree001.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree001.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODEECB
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree002', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_002'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_002'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE256,
				HuksAgree001.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree001.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODEECB
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree003', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_003'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_003'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE256,
				HuksAgree001.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree001.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGPKCS7,
				HuksAgree001.HuksKeyBLOCKMODECBC
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree004', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_004'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_004'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE256,
				HuksAgree001.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree001.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGPKCS7,
				HuksAgree001.HuksKeyBLOCKMODEECB
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree005', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_005'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_005'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE256,
				HuksAgree001.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree001.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODECCM
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree006', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_006'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_006'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE256,
				HuksAgree001.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree001.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODEGCM
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree007', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_007'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_007'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE256,
				HuksAgree001.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree001.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODECTR
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree008', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_008'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_008'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE256,
				HuksAgree001.HuksKeyPurposeDERIVE,
				HuksAgree001.HuksKeyDIGESTSHA256,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODEECB
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree009', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_009'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_009'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE256,
				HuksAgree001.HuksKeyPurposeDERIVE,
				HuksAgree001.HuksKeyDIGESTSHA384,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODEECB
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree010', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_010'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_010'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE256,
				HuksAgree001.HuksKeyPurposeDERIVE,
				HuksAgree001.HuksKeyDIGESTSHA512,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODEECB
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree011', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_011'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_011'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE128,
				HuksAgree001.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree001.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODECBC
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree012', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_012'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_012'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE128,
				HuksAgree001.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree001.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODEECB
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree013', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_013'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_013'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE128,
				HuksAgree001.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree001.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGPKCS7,
				HuksAgree001.HuksKeyBLOCKMODECBC
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree014', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_014'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_014'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE128,
				HuksAgree001.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree001.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGPKCS7,
				HuksAgree001.HuksKeyBLOCKMODEECB
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree015', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_015'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_015'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE128,
				HuksAgree001.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree001.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODECCM
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree016', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_016'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_016'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE128,
				HuksAgree001.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree001.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODEGCM
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree017', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_017'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_017'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE128,
				HuksAgree001.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree001.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODECTR
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree018', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_018'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_018'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE256,
				HuksAgree001.HuksKeyPurposeDERIVE,
				HuksAgree001.HuksKeyDIGESTSHA256,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODEECB
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree019', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_019'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_019'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE128,
				HuksAgree001.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree001.HuksKeyDIGESTSHA384,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODEECB
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree020', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_020'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_020'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE128,
				HuksAgree001.HuksKeyPurposeDERIVE,
				HuksAgree001.HuksKeyDIGESTSHA512,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODEECB
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree021', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_021'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_021'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE192,
				HuksAgree001.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree001.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODECBC
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree022', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_022'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_022'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE192,
				HuksAgree001.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree001.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODEECB
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree023', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_023'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_023'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE192,
				HuksAgree001.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree001.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGPKCS7,
				HuksAgree001.HuksKeyBLOCKMODECBC
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree024', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_024'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_024'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE192,
				HuksAgree001.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree001.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGPKCS7,
				HuksAgree001.HuksKeyBLOCKMODEECB
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree025', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_025'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_025'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE192,
				HuksAgree001.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree001.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODECCM
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree026', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_026'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_026'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE192,
				HuksAgree001.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree001.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODEGCM
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree027', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_027'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_027'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE192,
				HuksAgree001.HuksKeyPurposeENCRYPTDECRYPT,
				HuksAgree001.HuksKeyDIGESTNONE,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODECTR
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree028', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_028'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_028'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE192,
				HuksAgree001.HuksKeyPurposeDERIVE,
				HuksAgree001.HuksKeyDIGESTSHA256,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODEECB
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree029', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_029'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_029'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE192,
				HuksAgree001.HuksKeyPurposeDERIVE,
				HuksAgree001.HuksKeyDIGESTSHA512,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODEECB
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree030', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_030'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_030'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMHMAC,
				HuksAgree001.HuksKeySIZE256,
				HuksAgree001.HuksKeyPurposeMAC,
				HuksAgree001.HuksKeyDIGESTSHA1,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODEECB
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree031', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_031'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_031'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMHMAC,
				HuksAgree001.HuksKeySIZE256,
				HuksAgree001.HuksKeyPurposeMAC,
				HuksAgree001.HuksKeyDIGESTSHA224,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODEECB
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree032', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_032'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_032'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMHMAC,
				HuksAgree001.HuksKeySIZE256,
				HuksAgree001.HuksKeyPurposeMAC,
				HuksAgree001.HuksKeyDIGESTSHA256,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODEECB
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree033', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_033'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_033'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMHMAC,
				HuksAgree001.HuksKeySIZE256,
				HuksAgree001.HuksKeyPurposeMAC,
				HuksAgree001.HuksKeyDIGESTSHA384,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODEECB
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree034', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_034'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_034'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMHMAC,
				HuksAgree001.HuksKeySIZE256,
				HuksAgree001.HuksKeyPurposeMAC,
				HuksAgree001.HuksKeyDIGESTSHA512,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODEECB
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})

	it('testAgreeECDHSize224Abort65KBAgree035', 0, async function (done) {
		const srcKeyAliesFrist =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_01_035'
		const srcKeyAliesSecond =
			'testAgreeECDHSize224Abort65KBAgreeKeyAlias_02_035'
		let HuksOptionsFinish = {
			properties: new Array(
				HuksAgree001.HuksKeySTORAGE,
				HuksAgree001.HuksKeyISKEYALIAS,
				HuksAgree001.HuksKeyALGORITHMAES,
				HuksAgree001.HuksKeySIZE192,
				HuksAgree001.HuksKeyPurposeDERIVE,
				HuksAgree001.HuksKeyDIGESTSHA384,
				{
					tag: HksTag.HKS_TAG_KEY_ALIAS,
					value: stringToUint8Array(srcKeyAliesFrist),
				},
				HuksAgree001.HuksKeyPADDINGNONE,
				HuksAgree001.HuksKeyBLOCKMODEECB
			),
			inData: srcData65Kb,
		}
		await publicAgreeFunc(
			srcKeyAliesFrist,
			srcKeyAliesSecond,
			HuksOptions65kb,
			HuksOptionsFinish,
			'abort'
		)
		done()
	})
})
