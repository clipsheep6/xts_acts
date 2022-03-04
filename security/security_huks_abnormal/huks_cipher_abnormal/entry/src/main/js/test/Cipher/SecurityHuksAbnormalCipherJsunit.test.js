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

let gInData32 = 'RSA_32_ttttttttttttttttttttttttt'

let HuksCipher002 = {
	HuksKeyAlgRSA: {
		tag: Params.HksTag.HKS_TAG_ALGORITHM,
		value: Params.HksKeyAlg.HKS_ALG_RSA,
	},
	HuksKeyPurpose: {
		tag: Params.HksTag.HKS_TAG_PURPOSE,
		value:
			Params.HksKeyPurpose.HKS_KEY_PURPOSE_ENCRYPT |
			Params.HksKeyPurpose.HKS_KEY_PURPOSE_DECRYPT,
	},
	HuksKeyPurposeENCRYPT: {
		tag: Params.HksTag.HKS_TAG_PURPOSE,
		value: Params.HksKeyPurpose.HKS_KEY_PURPOSE_ENCRYPT,
	},
	HuksKeyPurposeDECRYPT: {
		tag: Params.HksTag.HKS_TAG_PURPOSE,
		value: Params.HksKeyPurpose.HKS_KEY_PURPOSE_DECRYPT,
	},
	HuksKeyRSASize512: {
		tag: Params.HksTag.HKS_TAG_KEY_SIZE,
		value: Params.HksKeySize.HKS_KEY_SIZE_512,
	},
	HuksKeyRSAPADDINGPKCS1V15: {
		tag: Params.HksTag.HKS_TAG_PADDING,
		value: Params.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
	},
	HuksKeyRSABLOCKMODEECB: {
		tag: Params.HksTag.HKS_TAG_BLOCK_MODE,
		value: Params.HksCipherMode.HKS_MODE_ECB,
	},
	HuksKeyRSADIGESTSHA256: {
		tag: Params.HksTag.HKS_TAG_DIGEST,
		value: Params.HksKeyDigest.HKS_DIGEST_SHA256,
	},
}

let gInData32Array = Tools.stringToUint8Array(gInData32)

let srcData64 = Data.Data_64KB
let srcData64Kb = Tools.stringToUint8Array(srcData64)

let encryptedData
var handle = {}
let updateResult = new Array()
let exportKey

let genHuksOptions
let HuksOptions

async function publicGenerateKeyFunc(srcKeyAlies, genHuksOptionsNONC) {
	await huks
		.generateKey(srcKeyAlies, genHuksOptionsNONC)
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

async function publicExportKeyFunc(srcKeyAlies, genHuksOptionsNONC) {
	await huks
		.exportKey(srcKeyAlies, genHuksOptionsNONC)
		.then((data) => {
			console.log(`test exportKey data: ${JSON.stringify(data)}`)
			exportKey = data.outData
			expect(data.errorCode == 0).assertTrue()
		})
		.catch((err) => {
			console.log(
				'test ImportKey err information: ' + JSON.stringify(err)
			)
			expect(null).assertFail()
		})
}

async function publicImportKeyFunc(srcKeyAlies, HuksOptions) {
	HuksOptions.inData = exportKey
	console.log(`test importKey HuksOptions: ${JSON.stringify(HuksOptions)}`)
	await huks
		.importKey(srcKeyAlies, HuksOptions)
		.then((data) => {
			console.log(`test ImportKey data: ${JSON.stringify(data)}`)
			expect(data.errorCode == 0).assertTrue()
		})
		.catch((err) => {
			console.log(
				'test ImportKey err information: ' + JSON.stringify(err)
			)
			expect(null).assertFail()
		})
}

async function publicInitFunc(srcKeyAlies, HuksOptions, Type) {
	await huks
		.init(srcKeyAlies, HuksOptions)
		.then((data) => {
			console.log(`test init data: ${JSON.stringify(data)}`)
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

async function publicUpdateFunc(handle, HuksOptions, Type) {
	let dateSize = 64
	let tempHuksOptionsInData = HuksOptions.inData
	let inDataArray = HuksOptions.inData
	if (Array.from(inDataArray).length < dateSize) {
		await update(handle, HuksOptions, Type)
		HuksOptions.inData = Tools.stringToUint8Array('0')
	} else {
		let count = Math.floor(Array.from(inDataArray).length / dateSize)
		let remainder = Array.from(inDataArray).length % dateSize
		for (let i = 0; i < count; i++) {
			HuksOptions.inData = new Uint8Array(
				Array.from(tempHuksOptionsInData).slice(
					dateSize * i,
					dateSize * (i + 1)
				)
			)
			await update(handle, HuksOptions, Type)
			HuksOptions.inData = tempHuksOptionsInData
		}
		if (remainder !== 0) {
			HuksOptions.inData = new Uint8Array(
				Array.from(tempHuksOptionsInData).slice(
					dateSize * count,
					Tools.uint8ArrayToString(inDataArray).length
				)
			)
			await update(handle, HuksOptions, Type)
		}
	}
}

async function update(handle, HuksOptions, Type) {
	await huks
		.update(handle, HuksOptions)
		.then(async (data) => {
			console.log(`test update data ${JSON.stringify(data)}`)
			if (Type == 'Fail') {
				console.log(
					`test update errorCode ${JSON.stringify(data.errorCode)}`
				)
				expect(data.errorCode !== 0).assertTrue()
			} else {
				expect(data.errorCode == 0).assertTrue()
			}
		})
		.catch((err) => {
			console.log('test update err information: ' + err)
			expect(null).assertFail()
		})
}

async function publicFinishAbortFunc(
	handle,
	HuksOptions,
	thirdInderfaceName,
	isEncrypt,
	Type
) {
	if (thirdInderfaceName == 'finish') {
		HuksOptions.outData = new Uint8Array(new Array(1024))
		HuksOptions.inData = new Uint8Array(new Array())
		await finish(handle, HuksOptions, isEncrypt, Type)
	} else if (thirdInderfaceName == 'abort') {
		await abort(handle, HuksOptions, Type)
	}
}

async function finish(handle, HuksOptions, isEncrypt, Type) {
	await huks
		.finish(handle, HuksOptions)
		.then((data) => {
			console.log(`test finish data: ${JSON.stringify(data)}`)
			if (Type == 'Fail') {
				expect(data.errorCode !== 0).assertTrue()
			} else {
				if (isEncrypt) {
					updateResult = Array.from(data.outData)
					if (
						Tools.uint8ArrayToString(data.outData) ===
						Tools.uint8ArrayToString(encryptedData)
					) {
						expect(null).assertFail()
					} else {
						expect(data.errorCode == 0).assertTrue()
					}
				} else {
					if (
						Tools.uint8ArrayToString(data.outData) ===
						Tools.uint8ArrayToString(encryptedData)
					) {
						expect(data.errorCode == 0).assertTrue()
					} else {
						expect(null).assertFail()
					}
				}
			}
		})
		.catch((err) => {
			console.log('test finish err information: ' + JSON.stringify(err))
			expect(null).assertFail()
		})
}

async function abort(handle, HuksOptions, Type) {
	await huks
		.abort(handle, HuksOptions)
		.then((data) => {
			console.log(`test abort data: ${JSON.stringify(data)}`)
			if (Type == 'Fail') {
				expect(data.errorCode !== 0).assertTrue()
			} else {
				expect(data.errorCode == 0).assertTrue()
			}
		})
		.catch((err) => {
			console.log('test abort err information: ' + JSON.stringify(err))
			expect(null).assertFail()
		})
}

async function publicDeleteKeyFunc(srcKeyAlies, genHuksOptionsNONC, Type) {
	await huks
		.deleteKey(srcKeyAlies, genHuksOptionsNONC)
		.then((data) => {
			console.log(`test deleteKey data: ${JSON.stringify(data)}`)
			if (Type == 'Fail') {
				expect(data.errorCode !== 0).assertTrue()
			} else {
				expect(data.errorCode == 0).assertTrue()
			}
		})
		.catch((err) => {
			console.log(
				'test deleteKey err information: ' + JSON.stringify(err)
			)
			expect(null).assertFail()
		})
}

async function publicCipher(
	srcKeyAlies,
	newSrcKeyAlies,
	genHuksOptions,
	HuksOptions
) {
	let inputInData = HuksOptions.inData
	await publicGenerateKeyFunc(srcKeyAlies, genHuksOptions)
	await publicExportKeyFunc(srcKeyAlies, genHuksOptions)
	HuksOptions.properties.splice(1, 0, HuksCipher002.HuksKeyPurposeENCRYPT)
	await publicImportKeyFunc(newSrcKeyAlies, HuksOptions)

	HuksOptions.inData = inputInData
	await publicInitFunc(newSrcKeyAlies, HuksOptions, 'Success')
	await publicUpdateFunc(handle, HuksOptions, 'Success')
	await publicFinishAbortFunc(handle, HuksOptions, 'finish', true, 'Success')
}

describe('SecurityHuksAbnormalCipherJsunit', function () {
	beforeEach(function () {
		handle = {}
		encryptedData = gInData32Array
		updateResult = new Array()
		exportKey = {}
		genHuksOptions = {
			properties: new Array(
				HuksCipher002.HuksKeyAlgRSA,
				HuksCipher002.HuksKeyPurpose,
				HuksCipher002.HuksKeyRSASize512,
				HuksCipher002.HuksKeyRSABLOCKMODEECB,
				HuksCipher002.HuksKeyRSAPADDINGPKCS1V15,
				HuksCipher002.HuksKeyRSADIGESTSHA256
			),
			inData: Tools.stringToUint8Array('0'),
		}
		HuksOptions = {
			properties: new Array(
				HuksCipher002.HuksKeyAlgRSA,
				HuksCipher002.HuksKeyRSASize512,
				HuksCipher002.HuksKeyRSAPADDINGPKCS1V15,
				HuksCipher002.HuksKeyRSABLOCKMODEECB,
				HuksCipher002.HuksKeyRSADIGESTSHA256
			),
			inData: gInData32Array,
			outData: Tools.stringToUint8Array('0'),
		}
	})

	it('security_huks_third_abnormal_cipher_1016', 0, async function (done) {
		HuksOptions.properties.splice(1, 0, HuksCipher002.HuksKeyPurposeENCRYPT)
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicFinishAbortFunc(handle, HuksOptions, 'finish', true, 'Fail')
		done()
	})

	it('security_huks_third_abnormal_cipher_1017', 0, async function (done) {
		HuksOptions.properties.splice(1, 0, HuksCipher002.HuksKeyPurposeENCRYPT)
		await publicFinishAbortFunc(handle, HuksOptions, 'finish', true, 'Fail')
		done()
	})

	it('security_huks_third_abnormal_cipher_1018', 0, async function (done) {
		HuksOptions.properties.splice(1, 0, HuksCipher002.HuksKeyPurposeENCRYPT)
		await publicFinishAbortFunc(handle, HuksOptions, 'abort', true, 'Fail')
		done()
	})

	it('security_huks_third_abnormal_cipher_1019', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1019'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1019'
		let inputInData = HuksOptions.inData
		await publicGenerateKeyFunc(srcKeyAlies, genHuksOptions)
		await publicExportKeyFunc(srcKeyAlies, genHuksOptions)
		HuksOptions.properties.splice(1, 0, HuksCipher002.HuksKeyPurposeENCRYPT)
		await publicImportKeyFunc(newSrcKeyAlies, HuksOptions)
		HuksOptions.inData = inputInData
		await publicInitFunc(newSrcKeyAlies, HuksOptions, 'Success')
		await publicFinishAbortFunc(
			handle,
			HuksOptions,
			'finish',
			true,
			'Success'
		)
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1020', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1020'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1020'
		let inputInData = HuksOptions.inData
		await publicGenerateKeyFunc(srcKeyAlies, genHuksOptions)
		await publicExportKeyFunc(srcKeyAlies, genHuksOptions)
		HuksOptions.properties.splice(1, 0, HuksCipher002.HuksKeyPurposeENCRYPT)
		await publicImportKeyFunc(newSrcKeyAlies, HuksOptions)
		HuksOptions.inData = inputInData
		await publicInitFunc(newSrcKeyAlies, HuksOptions, 'Success')
		await publicFinishAbortFunc(
			handle,
			HuksOptions,
			'abort',
			true,
			'Success'
		)
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1021', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1021'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1021'
		let inputInData = HuksOptions.inData
		await publicGenerateKeyFunc(srcKeyAlies, genHuksOptions)
		await publicExportKeyFunc(srcKeyAlies, genHuksOptions)
		HuksOptions.properties.splice(1, 0, HuksCipher002.HuksKeyPurposeENCRYPT)
		await publicImportKeyFunc(newSrcKeyAlies, HuksOptions)
		HuksOptions.inData = inputInData
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicFinishAbortFunc(handle, HuksOptions, 'finish', true, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1022', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1022'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1022'
		let inputInData = HuksOptions.inData
		await publicGenerateKeyFunc(srcKeyAlies, genHuksOptions)
		await publicExportKeyFunc(srcKeyAlies, genHuksOptions)
		HuksOptions.properties.splice(1, 0, HuksCipher002.HuksKeyPurposeENCRYPT)
		await publicImportKeyFunc(newSrcKeyAlies, HuksOptions)
		HuksOptions.inData = inputInData
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicFinishAbortFunc(handle, HuksOptions, 'finish', true, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1023', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1023'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1023'
		let inputInData = HuksOptions.inData
		await publicGenerateKeyFunc(srcKeyAlies, genHuksOptions)
		await publicExportKeyFunc(srcKeyAlies, genHuksOptions)
		HuksOptions.properties.splice(1, 0, HuksCipher002.HuksKeyPurposeENCRYPT)
		await publicImportKeyFunc(newSrcKeyAlies, HuksOptions)
		HuksOptions.inData = inputInData
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicFinishAbortFunc(handle, HuksOptions, 'finish', true, 'Fail')
		await publicFinishAbortFunc(handle, HuksOptions, 'finish', true, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1024', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1024'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1024'
		let inputInData = HuksOptions.inData
		await publicGenerateKeyFunc(srcKeyAlies, genHuksOptions)
		await publicExportKeyFunc(srcKeyAlies, genHuksOptions)
		HuksOptions.properties.splice(1, 0, HuksCipher002.HuksKeyPurposeENCRYPT)
		await publicImportKeyFunc(newSrcKeyAlies, HuksOptions)
		HuksOptions.inData = inputInData
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicFinishAbortFunc(handle, HuksOptions, 'finish', true, 'Fail')
		await publicFinishAbortFunc(handle, HuksOptions, 'abort', true, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1025', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1025'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1025'
		let inputInData = HuksOptions.inData
		await publicGenerateKeyFunc(srcKeyAlies, genHuksOptions)
		await publicExportKeyFunc(srcKeyAlies, genHuksOptions)
		HuksOptions.properties.splice(1, 0, HuksCipher002.HuksKeyPurposeENCRYPT)
		await publicImportKeyFunc(newSrcKeyAlies, HuksOptions)
		HuksOptions.inData = inputInData
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicFinishAbortFunc(handle, HuksOptions, 'abort', true, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1026', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1026'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1026'
		let inputInData = HuksOptions.inData
		await publicGenerateKeyFunc(srcKeyAlies, genHuksOptions)
		await publicExportKeyFunc(srcKeyAlies, genHuksOptions)
		HuksOptions.properties.splice(1, 0, HuksCipher002.HuksKeyPurposeENCRYPT)
		await publicImportKeyFunc(newSrcKeyAlies, HuksOptions)
		HuksOptions.inData = inputInData
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicFinishAbortFunc(handle, HuksOptions, 'abort', true, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1027', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1027'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1027'
		let inputInData = HuksOptions.inData
		await publicGenerateKeyFunc(srcKeyAlies, genHuksOptions)
		await publicExportKeyFunc(srcKeyAlies, genHuksOptions)
		HuksOptions.properties.splice(1, 0, HuksCipher002.HuksKeyPurposeENCRYPT)
		await publicImportKeyFunc(newSrcKeyAlies, HuksOptions)
		HuksOptions.inData = inputInData
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicFinishAbortFunc(handle, HuksOptions, 'abort', true, 'Fail')
		await publicFinishAbortFunc(handle, HuksOptions, 'abort', true, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1028', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1028'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1028'
		let inputInData = HuksOptions.inData
		await publicGenerateKeyFunc(srcKeyAlies, genHuksOptions)
		await publicExportKeyFunc(srcKeyAlies, genHuksOptions)
		HuksOptions.properties.splice(1, 0, HuksCipher002.HuksKeyPurposeENCRYPT)
		await publicImportKeyFunc(newSrcKeyAlies, HuksOptions)
		HuksOptions.inData = inputInData
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicFinishAbortFunc(handle, HuksOptions, 'abort', true, 'Fail')
		await publicFinishAbortFunc(handle, HuksOptions, 'finish', true, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1029', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1029'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1029'
		let inputInData = HuksOptions.inData
		await publicGenerateKeyFunc(srcKeyAlies, genHuksOptions)
		await publicExportKeyFunc(srcKeyAlies, genHuksOptions)
		HuksOptions.properties.splice(1, 0, HuksCipher002.HuksKeyPurposeENCRYPT)
		await publicImportKeyFunc(newSrcKeyAlies, HuksOptions)
		HuksOptions.inData = inputInData
		await publicFinishAbortFunc(handle, HuksOptions, 'finish', true, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1030', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1030'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1030'
		let inputInData = HuksOptions.inData
		await publicGenerateKeyFunc(srcKeyAlies, genHuksOptions)
		await publicExportKeyFunc(srcKeyAlies, genHuksOptions)
		HuksOptions.properties.splice(1, 0, HuksCipher002.HuksKeyPurposeENCRYPT)
		await publicImportKeyFunc(newSrcKeyAlies, HuksOptions)
		HuksOptions.inData = inputInData
		await publicFinishAbortFunc(handle, HuksOptions, 'abort', true, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1031', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1031'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1031'
		let inputInData = HuksOptions.inData
		await publicGenerateKeyFunc(srcKeyAlies, genHuksOptions)
		await publicExportKeyFunc(srcKeyAlies, genHuksOptions)
		HuksOptions.properties.splice(1, 0, HuksCipher002.HuksKeyPurposeENCRYPT)
		await publicImportKeyFunc(newSrcKeyAlies, HuksOptions)
		HuksOptions.inData = inputInData
		await publicFinishAbortFunc(handle, HuksOptions, 'finish', true, 'Fail')
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1032', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1032'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1032'
		let inputInData = HuksOptions.inData
		await publicGenerateKeyFunc(srcKeyAlies, genHuksOptions)
		await publicExportKeyFunc(srcKeyAlies, genHuksOptions)
		HuksOptions.properties.splice(1, 0, HuksCipher002.HuksKeyPurposeENCRYPT)
		await publicImportKeyFunc(newSrcKeyAlies, HuksOptions)
		HuksOptions.inData = inputInData
		await publicFinishAbortFunc(handle, HuksOptions, 'abort', true, 'Fail')
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1033', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1033'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1033'
		let inputInData = HuksOptions.inData
		await publicGenerateKeyFunc(srcKeyAlies, genHuksOptions)
		await publicExportKeyFunc(srcKeyAlies, genHuksOptions)
		HuksOptions.properties.splice(1, 0, HuksCipher002.HuksKeyPurposeENCRYPT)
		await publicImportKeyFunc(newSrcKeyAlies, HuksOptions)
		HuksOptions.inData = inputInData
		await publicFinishAbortFunc(handle, HuksOptions, 'finish', true, 'Fail')
		await publicFinishAbortFunc(handle, HuksOptions, 'finish', true, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1034', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1034'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1034'
		let inputInData = HuksOptions.inData
		await publicGenerateKeyFunc(srcKeyAlies, genHuksOptions)
		await publicExportKeyFunc(srcKeyAlies, genHuksOptions)
		HuksOptions.properties.splice(1, 0, HuksCipher002.HuksKeyPurposeENCRYPT)
		await publicImportKeyFunc(newSrcKeyAlies, HuksOptions)
		HuksOptions.inData = inputInData
		await publicFinishAbortFunc(handle, HuksOptions, 'abort', true, 'Fail')
		await publicFinishAbortFunc(handle, HuksOptions, 'abort', true, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1035', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1035'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1035'
		let inputInData = HuksOptions.inData
		await publicGenerateKeyFunc(srcKeyAlies, genHuksOptions)
		await publicExportKeyFunc(srcKeyAlies, genHuksOptions)
		HuksOptions.properties.splice(1, 0, HuksCipher002.HuksKeyPurposeENCRYPT)
		await publicImportKeyFunc(newSrcKeyAlies, HuksOptions)

		HuksOptions.inData = inputInData
		await publicInitFunc(newSrcKeyAlies, HuksOptions, 'Success')
		await publicUpdateFunc(handle, HuksOptions, 'Success')
		await publicFinishAbortFunc(
			handle,
			HuksOptions,
			'finish',
			true,
			'Success'
		)
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1037', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1037'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1037'
		let inputInData = HuksOptions.inData
		await publicGenerateKeyFunc(srcKeyAlies, genHuksOptions)
		await publicExportKeyFunc(srcKeyAlies, genHuksOptions)
		HuksOptions.properties.splice(1, 0, HuksCipher002.HuksKeyPurposeENCRYPT)
		await publicImportKeyFunc(newSrcKeyAlies, HuksOptions)

		HuksOptions.inData = inputInData
		await publicInitFunc(newSrcKeyAlies, HuksOptions, 'Success')
		await publicUpdateFunc(handle, HuksOptions, 'Success')
		await publicInitFunc(newSrcKeyAlies, HuksOptions, 'Success')
		await publicUpdateFunc(handle, HuksOptions, 'Success')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1039', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1039'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1039'
		await publicCipher(
			srcKeyAlies,
			newSrcKeyAlies,
			genHuksOptions,
			HuksOptions
		)

		HuksOptions.properties.splice(1, 1, HuksCipher002.HuksKeyPurposeDECRYPT)
		HuksOptions.inData = new Uint8Array(updateResult)
		HuksOptions.outData = Tools.stringToUint8Array('0')
		await publicInitFunc(srcKeyAlies, HuksOptions, 'Success')
		await publicInitFunc(srcKeyAlies, HuksOptions, 'Success')
		await publicUpdateFunc(handle, HuksOptions, 'Success')
		await publicFinishAbortFunc(
			handle,
			HuksOptions,
			'finish',
			false,
			'Success'
		)
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1040', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1040'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1040'
		await publicCipher(
			srcKeyAlies,
			newSrcKeyAlies,
			genHuksOptions,
			HuksOptions
		)
		HuksOptions.properties.splice(1, 1, HuksCipher002.HuksKeyPurposeDECRYPT)
		HuksOptions.inData = new Uint8Array(updateResult)
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicFinishAbortFunc(
			handle,
			HuksOptions,
			'finish',
			false,
			'Fail'
		)
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1041', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1041'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1041'
		await publicCipher(
			srcKeyAlies,
			newSrcKeyAlies,
			genHuksOptions,
			HuksOptions
		)
		HuksOptions.properties.splice(1, 1, HuksCipher002.HuksKeyPurposeDECRYPT)
		HuksOptions.inData = new Uint8Array(updateResult)
		await publicFinishAbortFunc(
			handle,
			HuksOptions,
			'finish',
			false,
			'Fail'
		)
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1042', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1042'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1042'
		await publicCipher(
			srcKeyAlies,
			newSrcKeyAlies,
			genHuksOptions,
			HuksOptions
		)
		HuksOptions.properties.splice(1, 1, HuksCipher002.HuksKeyPurposeDECRYPT)
		HuksOptions.inData = new Uint8Array(updateResult)
		await publicFinishAbortFunc(handle, HuksOptions, 'abort', false, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1043', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1043'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1043'
		await publicCipher(
			srcKeyAlies,
			newSrcKeyAlies,
			genHuksOptions,
			HuksOptions
		)
		HuksOptions.properties.splice(1, 1, HuksCipher002.HuksKeyPurposeDECRYPT)
		HuksOptions.inData = new Uint8Array(updateResult)
		HuksOptions.outData = Tools.stringToUint8Array('0')
		await publicInitFunc(srcKeyAlies, HuksOptions, 'Success')
		await publicFinishAbortFunc(
			handle,
			HuksOptions,
			'finish',
			false,
			'Fail'
		)
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1045', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1045'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1045'
		await publicCipher(
			srcKeyAlies,
			newSrcKeyAlies,
			genHuksOptions,
			HuksOptions
		)
		HuksOptions.properties.splice(1, 1, HuksCipher002.HuksKeyPurposeDECRYPT)
		HuksOptions.inData = new Uint8Array(updateResult)
		HuksOptions.outData = Tools.stringToUint8Array('0')
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicFinishAbortFunc(
			handle,
			HuksOptions,
			'finish',
			false,
			'Fail'
		)
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1046', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1046'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1046'
		await publicCipher(
			srcKeyAlies,
			newSrcKeyAlies,
			genHuksOptions,
			HuksOptions
		)
		HuksOptions.properties.splice(1, 1, HuksCipher002.HuksKeyPurposeDECRYPT)
		HuksOptions.inData = new Uint8Array(updateResult)
		HuksOptions.outData = Tools.stringToUint8Array('0')
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicFinishAbortFunc(
			handle,
			HuksOptions,
			'finish',
			false,
			'Fail'
		)
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1047', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1047'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1047'
		await publicCipher(
			srcKeyAlies,
			newSrcKeyAlies,
			genHuksOptions,
			HuksOptions
		)
		HuksOptions.properties.splice(1, 1, HuksCipher002.HuksKeyPurposeDECRYPT)
		HuksOptions.inData = new Uint8Array(updateResult)
		HuksOptions.outData = Tools.stringToUint8Array('0')
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicFinishAbortFunc(
			handle,
			HuksOptions,
			'finish',
			false,
			'Fail'
		)
		await publicFinishAbortFunc(
			handle,
			HuksOptions,
			'finish',
			false,
			'Fail'
		)
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1048', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1048'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1048'
		await publicCipher(
			srcKeyAlies,
			newSrcKeyAlies,
			genHuksOptions,
			HuksOptions
		)
		HuksOptions.properties.splice(1, 1, HuksCipher002.HuksKeyPurposeDECRYPT)
		HuksOptions.inData = new Uint8Array(updateResult)
		HuksOptions.outData = Tools.stringToUint8Array('0')
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicFinishAbortFunc(
			handle,
			HuksOptions,
			'finish',
			false,
			'Fail'
		)
		await publicFinishAbortFunc(handle, HuksOptions, 'abort', false, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1049', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1049'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1049'
		await publicCipher(
			srcKeyAlies,
			newSrcKeyAlies,
			genHuksOptions,
			HuksOptions
		)
		HuksOptions.properties.splice(1, 1, HuksCipher002.HuksKeyPurposeDECRYPT)
		HuksOptions.inData = new Uint8Array(updateResult)
		HuksOptions.outData = Tools.stringToUint8Array('0')
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicFinishAbortFunc(handle, HuksOptions, 'abort', false, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1050', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1050'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1050'
		await publicCipher(
			srcKeyAlies,
			newSrcKeyAlies,
			genHuksOptions,
			HuksOptions
		)
		HuksOptions.properties.splice(1, 1, HuksCipher002.HuksKeyPurposeDECRYPT)
		HuksOptions.inData = new Uint8Array(updateResult)
		HuksOptions.outData = Tools.stringToUint8Array('0')
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicFinishAbortFunc(handle, HuksOptions, 'abort', false, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1051', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1051'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1051'
		await publicCipher(
			srcKeyAlies,
			newSrcKeyAlies,
			genHuksOptions,
			HuksOptions
		)
		HuksOptions.properties.splice(1, 1, HuksCipher002.HuksKeyPurposeDECRYPT)
		HuksOptions.inData = new Uint8Array(updateResult)
		HuksOptions.outData = Tools.stringToUint8Array('0')
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicFinishAbortFunc(handle, HuksOptions, 'abort', false, 'Fail')
		await publicFinishAbortFunc(handle, HuksOptions, 'abort', false, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1052', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1052'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1052'
		await publicCipher(
			srcKeyAlies,
			newSrcKeyAlies,
			genHuksOptions,
			HuksOptions
		)
		HuksOptions.properties.splice(1, 1, HuksCipher002.HuksKeyPurposeDECRYPT)
		HuksOptions.inData = new Uint8Array(updateResult)
		HuksOptions.outData = Tools.stringToUint8Array('0')
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicFinishAbortFunc(handle, HuksOptions, 'abort', false, 'Fail')
		await publicFinishAbortFunc(
			handle,
			HuksOptions,
			'finish',
			false,
			'Fail'
		)
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1053', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1053'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1053'
		await publicCipher(
			srcKeyAlies,
			newSrcKeyAlies,
			genHuksOptions,
			HuksOptions
		)
		HuksOptions.properties.splice(1, 1, HuksCipher002.HuksKeyPurposeDECRYPT)
		HuksOptions.properties.splice(1, 1, HuksCipher002.HuksKeyPurposeDECRYPT)
		HuksOptions.inData = new Uint8Array(updateResult)
		HuksOptions.outData = Tools.stringToUint8Array('0')
		await publicFinishAbortFunc(
			handle,
			HuksOptions,
			'finish',
			false,
			'Fail'
		)
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1054', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1054'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1054'
		await publicCipher(
			srcKeyAlies,
			newSrcKeyAlies,
			genHuksOptions,
			HuksOptions
		)
		HuksOptions.properties.splice(1, 1, HuksCipher002.HuksKeyPurposeDECRYPT)
		HuksOptions.inData = new Uint8Array(updateResult)
		HuksOptions.outData = Tools.stringToUint8Array('0')
		await publicFinishAbortFunc(handle, HuksOptions, 'abort', false, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1055', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1055'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1055'
		await publicCipher(
			srcKeyAlies,
			newSrcKeyAlies,
			genHuksOptions,
			HuksOptions
		)
		HuksOptions.properties.splice(1, 1, HuksCipher002.HuksKeyPurposeDECRYPT)
		HuksOptions.inData = new Uint8Array(updateResult)
		HuksOptions.outData = Tools.stringToUint8Array('0')
		await publicFinishAbortFunc(
			handle,
			HuksOptions,
			'finish',
			false,
			'Fail'
		)
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1056', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1056'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1056'
		await publicCipher(
			srcKeyAlies,
			newSrcKeyAlies,
			genHuksOptions,
			HuksOptions
		)
		HuksOptions.properties.splice(1, 1, HuksCipher002.HuksKeyPurposeDECRYPT)
		HuksOptions.inData = new Uint8Array(updateResult)
		HuksOptions.outData = Tools.stringToUint8Array('0')
		await publicFinishAbortFunc(handle, HuksOptions, 'abort', false, 'Fail')
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1057', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1057'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1057'
		await publicCipher(
			srcKeyAlies,
			newSrcKeyAlies,
			genHuksOptions,
			HuksOptions
		)
		HuksOptions.properties.splice(1, 1, HuksCipher002.HuksKeyPurposeDECRYPT)
		HuksOptions.inData = new Uint8Array(updateResult)
		HuksOptions.outData = Tools.stringToUint8Array('0')
		await publicFinishAbortFunc(
			handle,
			HuksOptions,
			'finish',
			false,
			'Fail'
		)
		await publicFinishAbortFunc(
			handle,
			HuksOptions,
			'finish',
			false,
			'Fail'
		)
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1058', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1058'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1058'
		await publicCipher(
			srcKeyAlies,
			newSrcKeyAlies,
			genHuksOptions,
			HuksOptions
		)
		HuksOptions.properties.splice(1, 1, HuksCipher002.HuksKeyPurposeDECRYPT)
		HuksOptions.inData = new Uint8Array(updateResult)
		HuksOptions.outData = Tools.stringToUint8Array('0')
		await publicFinishAbortFunc(handle, HuksOptions, 'abort', false, 'Fail')
		await publicFinishAbortFunc(handle, HuksOptions, 'abort', false, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1059', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1059'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1059'
		await publicCipher(
			srcKeyAlies,
			newSrcKeyAlies,
			genHuksOptions,
			HuksOptions
		)
		HuksOptions.properties.splice(1, 1, HuksCipher002.HuksKeyPurposeDECRYPT)
		HuksOptions.inData = new Uint8Array(updateResult)
		HuksOptions.outData = Tools.stringToUint8Array('0')
		await publicInitFunc(srcKeyAlies, HuksOptions, 'Success')
		await publicUpdateFunc(handle, HuksOptions, 'Success')
		await publicFinishAbortFunc(
			handle,
			HuksOptions,
			'finish',
			false,
			'Success'
		)
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1060', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1060'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1060'
		await publicCipher(
			srcKeyAlies,
			newSrcKeyAlies,
			genHuksOptions,
			HuksOptions
		)
		HuksOptions.properties.splice(1, 1, HuksCipher002.HuksKeyPurposeDECRYPT)
		HuksOptions.inData = new Uint8Array(updateResult)
		HuksOptions.outData = Tools.stringToUint8Array('0')
		await publicInitFunc(srcKeyAlies, HuksOptions, 'Success')
		await publicUpdateFunc(handle, HuksOptions, 'Success')
		await publicFinishAbortFunc(
			handle,
			HuksOptions,
			'abort',
			false,
			'Success'
		)
		await publicUpdateFunc(handle, HuksOptions, 'Fail')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})

	it('security_huks_third_abnormal_cipher_1061', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_cipher_1061'
		const newSrcKeyAlies = 'security_huks_third_abnormal_cipher_new_1061'
		await publicCipher(
			srcKeyAlies,
			newSrcKeyAlies,
			genHuksOptions,
			HuksOptions
		)
		HuksOptions.properties.splice(1, 1, HuksCipher002.HuksKeyPurposeDECRYPT)
		HuksOptions.inData = new Uint8Array(updateResult)
		HuksOptions.outData = Tools.stringToUint8Array('0')
		await publicInitFunc(srcKeyAlies, HuksOptions, 'Success')
		await publicUpdateFunc(handle, HuksOptions, 'Success')
		await publicInitFunc(srcKeyAlies, HuksOptions, 'Success')
		await publicUpdateFunc(handle, HuksOptions, 'Success')
		await publicDeleteKeyFunc(srcKeyAlies, genHuksOptions, 'Success')
		await publicDeleteKeyFunc(newSrcKeyAlies, genHuksOptions, 'Success')
		done()
	})
})
