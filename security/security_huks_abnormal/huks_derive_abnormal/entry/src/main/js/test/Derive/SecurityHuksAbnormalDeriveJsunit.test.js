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
	HuksKeyBLOCK_MODEECB: {
		tag: Params.HksTag.HKS_TAG_BLOCK_MODE,
		value: Params.HksCipherMode.HKS_MODE_ECB,
	},
}

let HuksOptions
let HuksOptions_Finish

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
	HuksOptions_Finish,
	thirdInderfaceName,
	Type
) {
	if (thirdInderfaceName == 'finish') {
		await huks
			.finish(handle, HuksOptions_Finish)
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
		let HuksOptions_Abort = new Array({
			tag: Params.HksTag.HKS_TAG_KEY_STORAGE_FLAG,
			value: Params.HksKeyStorageType.HKS_STORAGE_TEMP,
		})
		await huks
			.abort(handle, HuksOptions_Abort)
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
		HuksOptions_Finish = {
			properties: new Array(
				HuksDerive001.HuksKeySTORAGE,
				HuksDerive001.HuksKeyISKEYALIAS,
				HuksDerive001.HuksKeyALGORITHMAES,
				HuksDerive001.HuksKeySIZE256,
				HuksDerive001.HuksKeyPurposeENCRYPTDECRYPT,
				HuksDerive001.HuksKeyDIGESTNONE,
				HuksDerive001.HuksKeyPADDINGNONE,
				HuksDerive001.HuksKeyBLOCK_MODEECB
			),
			inData: srcData63Kb,
		}
	})

	it('security_huks_third_abnormal_derive_1015', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_derive_1015'
		HuksOptions_Finish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveUpdateFunc(handle, HuksOptions, 'Fail')
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptions_Finish,
			'finish',
			'Fail'
		)
		done()
	})

	it('security_huks_third_abnormal_derive_1016', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_derive_1016'
		HuksOptions_Finish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptions_Finish,
			'finish',
			'Fail'
		)
		done()
	})

	it('security_huks_third_abnormal_derive_1017', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_derive_1017'
		HuksOptions_Finish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptions_Finish,
			'abort',
			'Fail'
		)
		done()
	})

	it('security_huks_third_abnormal_derive_1020', 0, async function (done) {
		const srcKeyAlies = 'security_huks_third_abnormal_derive_1020'
		HuksOptions_Finish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptions_Finish,
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
		HuksOptions_Finish.properties.splice(6, 0, {
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
			HuksOptions_Finish,
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
		HuksOptions_Finish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveUpdateFunc(handle, HuksOptions, 'Fail')
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptions_Finish,
			'finish',
			'Fail'
		)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptions_Finish,
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
		HuksOptions_Finish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveUpdateFunc(handle, HuksOptions, 'Fail')
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptions_Finish,
			'finish',
			'Fail'
		)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptions_Finish,
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
		HuksOptions_Finish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveUpdateFunc(handle, HuksOptions, 'Fail')
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptions_Finish,
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
		HuksOptions_Finish.properties.splice(6, 0, {
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
			HuksOptions_Finish,
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
		HuksOptions_Finish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveUpdateFunc(handle, HuksOptions, 'Fail')
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptions_Finish,
			'abort',
			'Fail'
		)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptions_Finish,
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
		HuksOptions_Finish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveUpdateFunc(handle, HuksOptions, 'Fail')
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptions_Finish,
			'abort',
			'Fail'
		)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptions_Finish,
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
		HuksOptions_Finish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptions_Finish,
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
		HuksOptions_Finish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptions_Finish,
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
		HuksOptions_Finish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptions_Finish,
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
		HuksOptions_Finish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptions_Finish,
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
		HuksOptions_Finish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptions_Finish,
			'finish',
			'Fail'
		)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptions_Finish,
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
		HuksOptions_Finish.properties.splice(6, 0, {
			tag: Params.HksTag.HKS_TAG_KEY_ALIAS,
			value: Tools.stringToUint8Array(srcKeyAlies),
		})
		await publicDeriveGenFunc(srcKeyAlies, HuksOptions)
		HuksOptions.properties.splice(0, 1, HuksDerive001.HuksKeyAlgHKDF)
		HuksOptions.properties.splice(3, 1, HuksDerive001.HuksKeyDERIVEKEYSIZE)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptions_Finish,
			'abort',
			'Fail'
		)
		await publicDeriveFinishAbortFunc(
			handle,
			HuksOptions_Finish,
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
		HuksOptions_Finish.properties.splice(6, 0, {
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
			HuksOptions_Finish,
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
		HuksOptions_Finish.properties.splice(6, 0, {
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
			HuksOptions_Finish,
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
