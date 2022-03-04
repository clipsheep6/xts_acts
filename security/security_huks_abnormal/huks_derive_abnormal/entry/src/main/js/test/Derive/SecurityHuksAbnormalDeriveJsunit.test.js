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

import { describe, it, expect, beforeEach } from 'deccjsunit/index'
import huks from '@ohos.security.huks'
import Data from '../../../../../../../utils/Base/data/data.json'
import * as Params from '../../../../../../../utils/Base/data/params'
import * as Tools from '../../../../../../../utils/Base/tools'

let errString = '!@#$%^&*()_+'

let handle = {}
let srcData63 = Data.Data_63KB
let srcData63Kb = Tools.stringToUint8Array(srcData63)

let srcData64 = Data.Data_64KB
let srcData64Kb = Tools.stringToUint8Array(srcData64)

let HuksDerive001 = {
	HuksKeySIZE: {
		tag: Params.HksTag.HKS_TAG_KEY_SIZE,
		value: Params.HksKeySize.HKS_KEY_SIZE_512,
	},
	HuksKeyAlgHKDF: {
		tag: Params.HksTag.HKS_TAG_ALGORITHM,
		value: Params.HksKeyAlg.HKS_ALG_HKDF,
	},
	HuksKeyAlgAES: {
		tag: Params.HksTag.HKS_TAG_ALGORITHM,
		value: Params.HksKeyAlg.HKS_ALG_AES,
	},
	HuksKeyPurposeHKDF: {
		tag: Params.HksTag.HKS_TAG_PURPOSE,
		value: Params.HksKeyPurpose.HKS_KEY_PURPOSE_DERIVE,
	},
	HuksTagHKDFDigestSHA256: {
		tag: Params.HksTag.HKS_TAG_DIGEST,
		value: Params.HksKeyDigest.HKS_DIGEST_SHA256,
	},
	HuksKeyHKDFSize128: {
		tag: Params.HksTag.HKS_TAG_KEY_SIZE,
		value: Params.HksKeySize.HKS_KEY_SIZE_128,
	},
	HuksKeyDERIVEKEYSIZE: {
		tag: Params.HksTag.HKS_TAG_DERIVE_KEY_SIZE,
		value: Params.HksKeySize.DERIVE_KEY_SIZE_32,
	},
	HuksKeyISKEYALIAS: { tag: Params.HksTag.HKS_TAG_IS_KEY_ALIAS, value: true },
	HuksKeySTORAGE: {
		tag: Params.HksTag.HKS_TAG_KEY_STORAGE_FLAG,
		value: Params.HksKeyStorageType.HKS_STORAGE_PERSISTENT,
	},
	HuksKeyALGORITHMAES: {
		tag: Params.HksTag.HKS_TAG_ALGORITHM,
		value: Params.HksKeyAlg.HKS_ALG_AES,
	},
	HuksKeySIZE256: {
		tag: Params.HksTag.HKS_TAG_KEY_SIZE,
		value: Params.HksKeySize.HKS_KEY_SIZE_256,
	},
	HuksKeyPurposeENCRYPTDECRYPT: {
		tag: Params.HksTag.HKS_TAG_PURPOSE,
		value:
			Params.HksKeyPurpose.HKS_KEY_PURPOSE_ENCRYPT |
			Params.HksKeyPurpose.HKS_KEY_PURPOSE_DECRYPT,
	},
	HuksKeyPADDINGNONE: {
		tag: Params.HksTag.HKS_TAG_PADDING,
		value: Params.HksKeyPadding.HKS_PADDING_NONE,
	},
	HuksKeyDIGESTNONE: {
		tag: Params.HksTag.HKS_TAG_DIGEST,
		value: Params.HksKeyDigest.HKS_DIGEST_NONE,
	},
	HuksKeyBLOCKMODEECB: {
		tag: Params.HksTag.HKS_TAG_BLOCK_MODE,
		value: Params.HksCipherMode.HKS_MODE_ECB,
	},
}

let HuksOptions
let HuksOptionsFinish

async function publicDeriveGenFunc(srcKeyAlies, HuksOptions) {
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

async function publicDeriveInitFunc(srcKeyAlies, HuksOptions, Type) {
	await huks
		.init(srcKeyAlies, HuksOptions)
		.then((data) => {
			console.log(`test init data ${JSON.stringify(data)}`)
			if (Type == 'Fail') {
				expect(data.errorCode !== 0).assertTrue()
			} else {
				handle = {
					handle1: data.handle1,
					handle2: data.handle2,
				}
				expect(data.errorCode == 0).assertTrue()
			}
		})
		.catch((err) => {
			console.log('test init err information: ' + JSON.stringify(err))
			expect(null).assertFail()
		})
}

async function publicDeriveUpdateFunc(handle, HuksOptions, Type) {
	await huks
		.update(handle, HuksOptions)
		.then((data) => {
			console.log(`test update data ${JSON.stringify(data)}`)
			if (Type == 'Fail') {
				expect(data.errorCode !== 0).assertTrue()
			} else {
				expect(data.errorCode == 0).assertTrue()
			}
		})
		.catch((err) => {
			console.log('test update err information: ' + JSON.stringify(err))
			expect(null).assertFail()
		})
}

async function publicDeriveFinishAbortFunc(
	handle,
	HuksOptionsFinish,
	thirdInderfaceName,
	Type
) {
	if (thirdInderfaceName == 'finish') {
		await huks
			.finish(handle, HuksOptionsFinish)
			.then((data) => {
				console.log(`test finish data ${JSON.stringify(data)}`)
				if (Type == 'Fail') {
					expect(data.errorCode !== 0).assertTrue()
				} else {
					expect(data.errorCode == 0).assertTrue()
				}
			})
			.catch((err) => {
				console.log(
					'test finish err information: ' + JSON.stringify(err)
				)
				expect(null).assertFail()
			})
	} else {
		let HuksOptionsAbort = new Array({
			tag: Params.HksTag.HKS_TAG_KEY_STORAGE_FLAG,
			value: Params.HksKeyStorageType.HKS_STORAGE_TEMP,
		})
		await huks
			.abort(handle, HuksOptionsAbort)
			.then((data) => {
				console.log(`test abort data ${JSON.stringify(data)}`)
				if (Type == 'Fail') {
					expect(data.errorCode !== 0).assertTrue()
				} else {
					expect(data.errorCode == 0).assertTrue()
				}
			})
			.catch((err) => {
				console.log(
					'test abort err information: ' + JSON.stringify(err)
				)
				expect(null).assertFail()
			})
	}
}

async function publicDeriveDeleteFunc(srcKeyAlies, HuksOptions) {
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

describe('SecurityHuksAbnormalDeriveJsunit', function () {
	beforeEach(function () {
		handle = {}
		HuksOptions = {
			properties: new Array(
				HuksDerive001.HuksKeyAlgAES,
				HuksDerive001.HuksKeyPurposeHKDF,
				HuksDerive001.HuksTagHKDFDigestSHA256,
				HuksDerive001.HuksKeyHKDFSize128
			),
			inData: srcData63Kb,
		}
		HuksOptionsFinish = {
			properties: new Array(
				HuksDerive001.HuksKeySTORAGE,
				HuksDerive001.HuksKeyISKEYALIAS,
				HuksDerive001.HuksKeyALGORITHMAES,
				HuksDerive001.HuksKeySIZE256,
				HuksDerive001.HuksKeyPurposeENCRYPTDECRYPT,
				HuksDerive001.HuksKeyDIGESTNONE,
				HuksDerive001.HuksKeyPADDINGNONE,
				HuksDerive001.HuksKeyBLOCKMODEECB
			),
			inData: srcData63Kb,
		}
	})

	it('security_huks_third_abnormal_derive_1015', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_derive_1015'
		HuksOptionsFinish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveUpdateFunc(handle, HuksOptions, 'Fail')
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptionsFinish,
			'finish',
			'Fail'
		)
		done()
	})

	it('security_huks_third_abnormal_derive_1016', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_derive_1016'
		HuksOptionsFinish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptionsFinish,
			'finish',
			'Fail'
		)
		done()
	})

	it('security_huks_third_abnormal_derive_1017', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_derive_1017'
		HuksOptionsFinish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptionsFinish,
			'abort',
			'Fail'
		)
		done()
	})

	it('security_huks_third_abnormal_derive_1020', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_derive_1020'
		HuksOptionsFinish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptionsFinish,
			'finish',
			'Fail'
		)
		await publicDeriveUpdateFunc(handle, HuksOptions, 'Fail')
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgAES)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyHKDFSize128)
		await publicDeriveDeleteFunc(srcKeyAlies, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_derive_1021', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_derive_1021'
		HuksOptionsFinish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveUpdateFunc(handle, HuksOptions, 'Fail')
		await publicDeriveUpdateFunc(handle, HuksOptions, 'Fail')
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptionsFinish,
			'finish',
			'Fail'
		)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgAES)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyHKDFSize128)
		await publicDeriveDeleteFunc(srcKeyAlies, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_derive_1022', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_derive_1022'
		HuksOptionsFinish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveUpdateFunc(handle, HuksOptions, 'Fail')
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptionsFinish,
			'finish',
			'Fail'
		)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptionsFinish,
			'finish',
			'Fail'
		)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgAES)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyHKDFSize128)
		await publicDeriveDeleteFunc(srcKeyAlies, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_derive_1023', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_derive_1023'
		HuksOptionsFinish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveUpdateFunc(handle, HuksOptions, 'Fail')
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptionsFinish,
			'finish',
			'Fail'
		)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptionsFinish,
			'abort',
			'Fail'
		)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgAES)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyHKDFSize128)
		await publicDeriveDeleteFunc(srcKeyAlies, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_derive_1024', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_derive_1024'
		HuksOptionsFinish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveUpdateFunc(handle, HuksOptions, 'Fail')
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptionsFinish,
			'abort',
			'Fail'
		)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgAES)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyHKDFSize128)
		await publicDeriveDeleteFunc(srcKeyAlies, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_derive_1025', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_derive_1025'
		HuksOptionsFinish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveUpdateFunc(handle, HuksOptions, 'Fail')
		await publicDeriveUpdateFunc(handle, HuksOptions, 'Fail')
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptionsFinish,
			'abort',
			'Fail'
		)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgAES)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyHKDFSize128)
		await publicDeriveDeleteFunc(srcKeyAlies, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_derive_1026', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_derive_1026'
		HuksOptionsFinish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveUpdateFunc(handle, HuksOptions, 'Fail')
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptionsFinish,
			'abort',
			'Fail'
		)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptionsFinish,
			'abort',
			'Fail'
		)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgAES)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyHKDFSize128)
		await publicDeriveDeleteFunc(srcKeyAlies, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_derive_1027', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_derive_1027'
		HuksOptionsFinish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveUpdateFunc(handle, HuksOptions, 'Fail')
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptionsFinish,
			'abort',
			'Fail'
		)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptionsFinish,
			'finish',
			'Fail'
		)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgAES)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyHKDFSize128)
		await publicDeriveDeleteFunc(srcKeyAlies, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_derive_1028', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_derive_1028'
		HuksOptionsFinish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptionsFinish,
			'finish',
			'Fail'
		)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgAES)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyHKDFSize128)
		await publicDeriveDeleteFunc(srcKeyAlies, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_derive_1029', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_derive_1029'
		HuksOptionsFinish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptionsFinish,
			'abort',
			'Fail'
		)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgAES)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyHKDFSize128)
		await publicDeriveDeleteFunc(srcKeyAlies, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_derive_1030', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_derive_1030'
		HuksOptionsFinish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptionsFinish,
			'finish',
			'Fail'
		)
		await publicDeriveUpdateFunc(handle, HuksOptions, 'Fail')
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgAES)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyHKDFSize128)
		await publicDeriveDeleteFunc(srcKeyAlies, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_derive_1031', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_derive_1031'
		HuksOptionsFinish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptionsFinish,
			'abort',
			'Fail'
		)
		await publicDeriveUpdateFunc(handle, HuksOptions, 'Fail')
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgAES)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyHKDFSize128)
		await publicDeriveDeleteFunc(srcKeyAlies, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_derive_1032', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_derive_1032'
		HuksOptionsFinish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptionsFinish,
			'finish',
			'Fail'
		)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptionsFinish,
			'finish',
			'Fail'
		)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgAES)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyHKDFSize128)
		await publicDeriveDeleteFunc(srcKeyAlies, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_derive_1033', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_derive_1033'
		HuksOptionsFinish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptionsFinish,
			'abort',
			'Fail'
		)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptionsFinish,
			'abort',
			'Fail'
		)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgAES)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyHKDFSize128)
		await publicDeriveDeleteFunc(srcKeyAlies, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_derive_1034', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_derive_1034'
		HuksOptionsFinish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveInitFunc(srcKeyAlies, HuksOptions, 'Success')
		HuksOptions.inData = srcData64Kb
		await publicDeriveUpdateFunc(handle, HuksOptions, 'Success')
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptionsFinish,
			'finish',
			'Success'
		)
		await publicDeriveUpdateFunc(handle, HuksOptions, 'Fail')
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgAES)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyHKDFSize128)
		await publicDeriveDeleteFunc(srcKeyAlies, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_derive_1035', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_derive_1035'
		HuksOptionsFinish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveInitFunc(srcKeyAlies, HuksOptions, 'Success')
		HuksOptions.inData = srcData64Kb
		await publicDeriveUpdateFunc(handle, HuksOptions, 'Success')
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptionsFinish,
			'abort',
			'Success'
		)
		await publicDeriveUpdateFunc(handle, HuksOptions, 'Fail')
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgAES)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyHKDFSize128)
		await publicDeriveDeleteFunc(srcKeyAlies, HuksOptions)
		done()
	})
})
