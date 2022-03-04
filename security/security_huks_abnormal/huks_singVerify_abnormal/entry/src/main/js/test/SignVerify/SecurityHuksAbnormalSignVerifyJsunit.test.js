import { describe, it, expect, beforeEach } from 'deccjsunit/index'
import huks from '@ohos.security.huks'
import Data from '../../../../../../../utils/Base/data/data.json'
import * as Params from '../../../../../../../utils/Base/data/params'
import * as Tools from '../../../../../../../utils/Base/tools'

let errString = '!@#$%^&*()_+'
let DSA_COMMON_SIZE = 1024

let HuksSignVerify002 = {
	HuksKeySIZE: {
		tag: Params.HksTag.HKS_TAG_KEY_SIZE,
		value: Params.HksKeySize.HKS_DSA_KEY_SIZE_512,
	},
	HuksKeySIZE1024: {
		tag: Params.HksTag.HKS_TAG_KEY_SIZE,
		value: Params.HksKeySize.HKS_KEY_SIZE_1024,
	},
	HuksKeyAlgDSA: {
		tag: Params.HksTag.HKS_TAG_ALGORITHM,
		value: Params.HksKeyAlg.HKS_ALG_DSA,
	},
	HuksKeyDSAPurposeSIGN: {
		tag: Params.HksTag.HKS_TAG_PURPOSE,
		value: Params.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN,
	},
	HuksKeyDSAPurposeVERIFY: {
		tag: Params.HksTag.HKS_TAG_PURPOSE,
		value: Params.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY,
	},
	HuksTagDSADigestSHA1: {
		tag: Params.HksTag.HKS_TAG_DIGEST,
		value: Params.HksKeyDigest.HKS_DIGEST_SHA1,
	},
	HuksKeyRSAPurposeSING_VERIFY: {
		tag: Params.HksTag.HKS_TAG_PURPOSE,
		value:
			Params.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN |
			Params.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY,
	},
	HuksTagDSACOMMONSIZE: {
		tag: Params.HksTag.HKS_TAG_KEY_SIZE,
		value: DSA_COMMON_SIZE,
	},
}

let finishOutData
var handle = {}
let exportKey
let srcData63 = Data.data63B
let srcData63Kb = Tools.stringToUint8Array(srcData63)
let HuksOptions
let srcData64 = Data.data64B
let srcData64Kb = Tools.stringToUint8Array(srcData64)

async function publicGenerateKeyFunc(keyAlias, HuksOptions) {
	await huks
		.generateKey(keyAlias, HuksOptions)
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

async function publicImportKey(keyAlias, HuksOptions) {
	let _InData = HuksOptions.inData
	HuksOptions.inData = finishOutData
	await huks
		.importKey(keyAlias, HuksOptions)
		.then((data) => {
			console.log(`test importKey data: ${JSON.stringify(data)}`)
		})
		.catch((err) => {
			console.log(
				'test importKey err information: ' + JSON.stringify(err)
			)
			expect(null).assertFail()
		})
	HuksOptions.inData = _InData
}

async function publicExportKey(keyAlias, HuksOptions) {
	await huks
		.exportKey(keyAlias, HuksOptions)
		.then((data) => {
			console.log(`test exportKey data: ${JSON.stringify(data)}`)
			finishOutData = data.outData
		})
		.catch((err) => {
			console.log(
				'test exportKey err information: ' + JSON.stringify(err)
			)
			expect(null).assertFail()
		})
}

async function publicInitFunc(keyAlias, HuksOptions, Type) {
	await huks
		.init(keyAlias, HuksOptions)
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
	let _HuksOptions_inData = HuksOptions.inData
	let inDataArray = HuksOptions.inData
	if (Tools.Uint8ArrayToString(inDataArray).length < dateSize) {
		await update(handle, HuksOptions, Type)
		HuksOptions.inData = _HuksOptions_inData
	} else {
		let count = Math.floor(
			Tools.Uint8ArrayToString(inDataArray).length / dateSize
		)
		let remainder = Tools.Uint8ArrayToString(inDataArray).length % dateSize
		for (let i = 0; i < count; i++) {
			HuksOptions.inData = Tools.stringToUint8Array(
				Tools.Uint8ArrayToString(_HuksOptions_inData).slice(
					dateSize * i,
					dateSize * (i + 1)
				)
			)
			await update(handle, HuksOptions, Type)
			HuksOptions.inData = _HuksOptions_inData
		}
		if (remainder !== 0) {
			HuksOptions.inData = Tools.stringToUint8Array(
				Tools.Uint8ArrayToString(_HuksOptions_inData).slice(
					dateSize * count,
					Tools.Uint8ArrayToString(inDataArray).length
				)
			)
			await update(handle, HuksOptions, Type)
			HuksOptions.inData = _HuksOptions_inData
		}
	}
}

async function update(handle, HuksOptions, Type) {
	await huks
		.update(handle, HuksOptions)
		.then(async (data) => {
			console.log(`test update data ${JSON.stringify(data.errorCode)}`)
			if (Type == 'Fail') {
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

async function publicFinishFunc(handle, HuksOptions, Type) {
	await huks
		.finish(handle, HuksOptions)
		.then((data) => {
			console.log(`test finish data: ${JSON.stringify(data)}`)
			if (Type == 'Fail') {
				expect(data.errorCode !== 0).assertTrue()
			} else {
				exportKey = data.outData
				expect(data.errorCode == 0).assertTrue()
			}
		})
		.catch((err) => {
			console.log('test finish err information: ' + JSON.stringify(err))
			expect(null).assertFail()
		})
}

async function publicAbortFunc(handle, HuksOptions, Type) {
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

async function publicDeleteKeyFunc(KeyAlias, HuksOptions, Type) {
	await huks
		.deleteKey(KeyAlias, HuksOptions)
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

async function publicSignVerify(srcKeyAlias, HuksOptions, Type) {
	HuksOptions.properties.splice(
		1,
		1,
		HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
	)
	HuksOptions.properties.splice(2, 0, HuksSignVerify002.HuksKeySIZE1024)

	await publicGenerateKeyFunc(srcKeyAlias, HuksOptions)

	HuksOptions.properties.splice(1, 1, HuksSignVerify002.HuksKeyDSAPurposeSIGN)
	HuksOptions.properties.splice(2, 1)

	await publicInitFunc(srcKeyAlias, HuksOptions, Type)
	await publicUpdateFunc(handle, HuksOptions, Type)

	HuksOptions.outData = new Uint8Array(new Array(1024).fill(''))
	await publicFinishFunc(handle, HuksOptions, Type)
	HuksOptions.properties.splice(
		1,
		1,
		HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
	)
	console.log(
		`test before exportKey Gen_HuksOptions: ${JSON.stringify(HuksOptions)}`
	)
	await publicExportKey(srcKeyAlias, HuksOptions)
}

describe('SecurityHuksAbnormalSignVerifyJsunit', function () {
	beforeEach(function () {
		handle = {}
		HuksOptions = {
			properties: new Array(
				HuksSignVerify002.HuksKeyAlgDSA,
				HuksSignVerify002.HuksKeyDSAPurposeSIGN,
				HuksSignVerify002.HuksTagDSADigestSHA1
			),
			inData: srcData63Kb,
		}
	})

	it(
		'security_huks_third_Abnormal_signVerify_1014',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1014'
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeSIGN
			)
			await publicUpdateFunc(handle, HuksOptions, 'Fail')
			HuksOptions.outData = new Uint8Array(new Array(1024).fill(''))
			await publicFinishFunc(handle, HuksOptions, 'Fail')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Fail')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1015',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1015'
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeSIGN
			)
			HuksOptions.outData = new Uint8Array(new Array(1024).fill(''))
			await publicFinishFunc(handle, HuksOptions, 'Fail')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Fail')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1016',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1016'
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeSIGN
			)
			HuksOptions.outData = new Uint8Array(new Array(1024).fill(''))
			await publicAbortFunc(handle, HuksOptions, 'Fail')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Fail')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1017',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1017'
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			HuksOptions.properties.splice(
				2,
				0,
				HuksSignVerify002.HuksKeySIZE1024
			)
			await publicGenerateKeyFunc(srcKeyAlias, HuksOptions)
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeSIGN
			)
			HuksOptions.properties.splice(2, 1)
			await publicInitFunc(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.outData = new Uint8Array(new Array(1024).fill(''))
			await publicFinishFunc(handle, HuksOptions, 'Success')
			await publicUpdateFunc(handle, HuksOptions, 'Fail')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1018',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1018'
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			HuksOptions.properties.splice(
				2,
				0,
				HuksSignVerify002.HuksKeySIZE1024
			)
			await publicGenerateKeyFunc(srcKeyAlias, HuksOptions)
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeSIGN
			)
			HuksOptions.properties.splice(2, 1)

			await publicInitFunc(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.outData = new Uint8Array(new Array(1024).fill(''))

			await publicFinishFunc(handle, HuksOptions, 'Success')

			await publicUpdateFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1019',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1019'
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			HuksOptions.properties.splice(
				2,
				0,
				HuksSignVerify002.HuksKeySIZE1024
			)
			await publicGenerateKeyFunc(srcKeyAlias, HuksOptions)
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeSIGN
			)
			HuksOptions.properties.splice(2, 1)

			await publicUpdateFunc(handle, HuksOptions, 'Fail')

			HuksOptions.outData = new Uint8Array(new Array(1024).fill(''))
			await publicFinishFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1020',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1020'
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			HuksOptions.properties.splice(
				2,
				0,
				HuksSignVerify002.HuksKeySIZE1024
			)
			await publicGenerateKeyFunc(srcKeyAlias, HuksOptions)
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeSIGN
			)
			HuksOptions.properties.splice(2, 1)

			await publicUpdateFunc(handle, HuksOptions, 'Fail')
			await publicUpdateFunc(handle, HuksOptions, 'Fail')

			HuksOptions.outData = new Uint8Array(new Array(1024).fill(''))
			await publicFinishFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1021',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1021'
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			HuksOptions.properties.splice(
				2,
				0,
				HuksSignVerify002.HuksKeySIZE1024
			)
			await publicGenerateKeyFunc(srcKeyAlias, HuksOptions)
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeSIGN
			)
			HuksOptions.properties.splice(2, 1)

			await publicUpdateFunc(handle, HuksOptions, 'Fail')

			HuksOptions.outData = new Uint8Array(new Array(1024).fill(''))
			await publicFinishFunc(handle, HuksOptions, 'Fail')
			await publicFinishFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1022',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1022'
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			HuksOptions.properties.splice(
				2,
				0,
				HuksSignVerify002.HuksKeySIZE1024
			)
			await publicGenerateKeyFunc(srcKeyAlias, HuksOptions)
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeSIGN
			)
			HuksOptions.properties.splice(2, 1)

			await publicUpdateFunc(handle, HuksOptions, 'Fail')

			HuksOptions.outData = new Uint8Array(new Array(1024).fill(''))
			await publicFinishFunc(handle, HuksOptions, 'Fail')
			await publicAbortFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1023',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1023'
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			HuksOptions.properties.splice(
				2,
				0,
				HuksSignVerify002.HuksKeySIZE1024
			)
			await publicGenerateKeyFunc(srcKeyAlias, HuksOptions)
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeSIGN
			)
			HuksOptions.properties.splice(2, 1)

			await publicUpdateFunc(handle, HuksOptions, 'Fail')

			HuksOptions.outData = new Uint8Array(new Array(1024).fill(''))
			await publicAbortFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1024',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1024'
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			HuksOptions.properties.splice(
				2,
				0,
				HuksSignVerify002.HuksKeySIZE1024
			)
			await publicGenerateKeyFunc(srcKeyAlias, HuksOptions)
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeSIGN
			)
			HuksOptions.properties.splice(2, 1)

			await publicUpdateFunc(handle, HuksOptions, 'Fail')
			await publicUpdateFunc(handle, HuksOptions, 'Fail')

			HuksOptions.outData = new Uint8Array(new Array(1024).fill(''))
			await publicAbortFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1025',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1025'
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			HuksOptions.properties.splice(
				2,
				0,
				HuksSignVerify002.HuksKeySIZE1024
			)
			await publicGenerateKeyFunc(srcKeyAlias, HuksOptions)
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeSIGN
			)
			HuksOptions.properties.splice(2, 1)

			await publicUpdateFunc(handle, HuksOptions, 'Fail')

			HuksOptions.outData = new Uint8Array(new Array(1024).fill(''))
			await publicAbortFunc(handle, HuksOptions, 'Fail')
			await publicAbortFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1026',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1026'
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			HuksOptions.properties.splice(
				2,
				0,
				HuksSignVerify002.HuksKeySIZE1024
			)
			await publicGenerateKeyFunc(srcKeyAlias, HuksOptions)
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeSIGN
			)
			HuksOptions.properties.splice(2, 1)

			await publicUpdateFunc(handle, HuksOptions, 'Fail')

			HuksOptions.outData = new Uint8Array(new Array(1024).fill(''))
			await publicAbortFunc(handle, HuksOptions, 'Fail')
			await publicFinishFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1027',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1027'
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			HuksOptions.properties.splice(
				2,
				0,
				HuksSignVerify002.HuksKeySIZE1024
			)
			await publicGenerateKeyFunc(srcKeyAlias, HuksOptions)
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeSIGN
			)
			HuksOptions.properties.splice(2, 1)

			HuksOptions.outData = new Uint8Array(new Array(1024).fill(''))
			await publicFinishFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)
	it(
		'security_huks_third_Abnormal_signVerify_1028',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1028'
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			HuksOptions.properties.splice(
				2,
				0,
				HuksSignVerify002.HuksKeySIZE1024
			)
			await publicGenerateKeyFunc(srcKeyAlias, HuksOptions)
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeSIGN
			)
			HuksOptions.properties.splice(2, 1)

			HuksOptions.outData = new Uint8Array(new Array(1024).fill(''))
			await publicFinishFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1029',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1029'
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			HuksOptions.properties.splice(
				2,
				0,
				HuksSignVerify002.HuksKeySIZE1024
			)
			await publicGenerateKeyFunc(srcKeyAlias, HuksOptions)
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeSIGN
			)
			HuksOptions.properties.splice(2, 1)

			HuksOptions.outData = new Uint8Array(new Array(1024).fill(''))
			await publicFinishFunc(handle, HuksOptions, 'Fail')

			await publicUpdateFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1030',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1030'
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			HuksOptions.properties.splice(
				2,
				0,
				HuksSignVerify002.HuksKeySIZE1024
			)
			await publicGenerateKeyFunc(srcKeyAlias, HuksOptions)
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeSIGN
			)
			HuksOptions.properties.splice(2, 1)

			HuksOptions.outData = new Uint8Array(new Array(1024).fill(''))
			await publicAbortFunc(handle, HuksOptions, 'Fail')

			await publicUpdateFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1031',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1031'
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			HuksOptions.properties.splice(
				2,
				0,
				HuksSignVerify002.HuksKeySIZE1024
			)
			await publicGenerateKeyFunc(srcKeyAlias, HuksOptions)
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeSIGN
			)
			HuksOptions.properties.splice(2, 1)

			HuksOptions.outData = new Uint8Array(new Array(1024).fill(''))
			await publicFinishFunc(handle, HuksOptions, 'Fail')
			await publicFinishFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1032',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1032'
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			HuksOptions.properties.splice(
				2,
				0,
				HuksSignVerify002.HuksKeySIZE1024
			)
			await publicGenerateKeyFunc(srcKeyAlias, HuksOptions)
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeSIGN
			)
			HuksOptions.properties.splice(2, 1)

			HuksOptions.outData = new Uint8Array(new Array(1024).fill(''))
			await publicAbortFunc(handle, HuksOptions, 'Fail')
			await publicAbortFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1033',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1033'
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			HuksOptions.properties.splice(
				2,
				0,
				HuksSignVerify002.HuksKeySIZE1024
			)
			await publicGenerateKeyFunc(srcKeyAlias, HuksOptions)
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeSIGN
			)
			HuksOptions.properties.splice(2, 1)

			await publicInitFunc(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.inData = srcData64Kb
			await publicUpdateFunc(handle, HuksOptions, 'Success')
			HuksOptions.outData = new Uint8Array(new Array(1024).fill(''))
			await publicFinishFunc(handle, HuksOptions, 'Success')
			await publicUpdateFunc(handle, HuksOptions, 'Fail')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1034',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1034'
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			HuksOptions.properties.splice(
				2,
				0,
				HuksSignVerify002.HuksKeySIZE1024
			)
			await publicGenerateKeyFunc(srcKeyAlias, HuksOptions)
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeSIGN
			)
			HuksOptions.properties.splice(2, 1)
			await publicInitFunc(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.inData = srcData64Kb
			await publicUpdateFunc(handle, HuksOptions, 'Success')
			HuksOptions.outData = new Uint8Array(new Array(1024).fill(''))
			await publicAbortFunc(handle, HuksOptions, 'Success')
			await publicUpdateFunc(handle, HuksOptions, 'Fail')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1035',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1035'
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			HuksOptions.properties.splice(
				2,
				0,
				HuksSignVerify002.HuksKeySIZE1024
			)
			await publicGenerateKeyFunc(srcKeyAlias, HuksOptions)
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeSIGN
			)
			HuksOptions.properties.splice(2, 1)
			await publicInitFunc(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.inData = srcData64Kb
			await publicUpdateFunc(handle, HuksOptions, 'Success')
			await publicInitFunc(srcKeyAlias, HuksOptions, 'Success')
			await publicUpdateFunc(handle, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1038',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1038'
			await publicSignVerify(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			HuksOptions.properties.splice(
				-1,
				0,
				HuksSignVerify002.HuksTagDSACOMMONSIZE
			)
			await publicUpdateFunc(handle, HuksOptions, 'Fail')
			HuksOptions.outData = exportKey
			await publicFinishFunc(handle, HuksOptions, 'Fail')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1039',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1039'
			await publicSignVerify(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			HuksOptions.properties.splice(
				-1,
				0,
				HuksSignVerify002.HuksTagDSACOMMONSIZE
			)
			HuksOptions.outData = exportKey
			await publicFinishFunc(handle, HuksOptions, 'Fail')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1040',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1040'
			await publicSignVerify(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			HuksOptions.properties.splice(
				-1,
				0,
				HuksSignVerify002.HuksTagDSACOMMONSIZE
			)
			HuksOptions.outData = exportKey
			await publicAbortFunc(handle, HuksOptions, 'Fail')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1042',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1042'
			const newSrcKeyAlias =
				'security_huks_third_Abnormal_signVerify_new_1042'

			await publicSignVerify(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			HuksOptions.properties.splice(
				-1,
				0,
				HuksSignVerify002.HuksTagDSACOMMONSIZE
			)

			await publicImportKey(newSrcKeyAlias, HuksOptions)
			await publicInitFunc(newSrcKeyAlias, HuksOptions, 'Success')
			HuksOptions.outData = exportKey
			await publicAbortFunc(handle, HuksOptions, 'Success')
			await publicUpdateFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			await publicDeleteKeyFunc(newSrcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1043',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1043'
			const newSrcKeyAlias =
				'security_huks_third_Abnormal_signVerify_new_1043'

			await publicSignVerify(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			HuksOptions.properties.splice(
				-1,
				0,
				HuksSignVerify002.HuksTagDSACOMMONSIZE
			)

			await publicImportKey(newSrcKeyAlias, HuksOptions)
			await publicUpdateFunc(handle, HuksOptions, 'Fail')
			HuksOptions.outData = exportKey
			await publicFinishFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			await publicDeleteKeyFunc(newSrcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1044',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1044'
			const newSrcKeyAlias =
				'security_huks_third_Abnormal_signVerify_new_1044'

			await publicSignVerify(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			HuksOptions.properties.splice(
				-1,
				0,
				HuksSignVerify002.HuksTagDSACOMMONSIZE
			)

			await publicImportKey(newSrcKeyAlias, HuksOptions)
			await publicUpdateFunc(handle, HuksOptions, 'Fail')
			await publicUpdateFunc(handle, HuksOptions, 'Fail')
			HuksOptions.outData = exportKey
			await publicFinishFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			await publicDeleteKeyFunc(newSrcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1045',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1045'
			const newSrcKeyAlias =
				'security_huks_third_Abnormal_signVerify_new_1045'

			await publicSignVerify(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			HuksOptions.properties.splice(
				-1,
				0,
				HuksSignVerify002.HuksTagDSACOMMONSIZE
			)
			await publicImportKey(newSrcKeyAlias, HuksOptions)

			await publicUpdateFunc(handle, HuksOptions, 'Fail')

			HuksOptions.outData = exportKey
			await publicFinishFunc(handle, HuksOptions, 'Fail')
			await publicFinishFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			await publicDeleteKeyFunc(newSrcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1046',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1046'
			const newSrcKeyAlias =
				'security_huks_third_Abnormal_signVerify_new_1046'

			await publicSignVerify(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			HuksOptions.properties.splice(
				-1,
				0,
				HuksSignVerify002.HuksTagDSACOMMONSIZE
			)
			await publicImportKey(newSrcKeyAlias, HuksOptions)

			await publicUpdateFunc(handle, HuksOptions, 'Fail')

			HuksOptions.outData = exportKey
			await publicFinishFunc(handle, HuksOptions, 'Fail')
			await publicAbortFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			await publicDeleteKeyFunc(newSrcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1047',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1047'
			const newSrcKeyAlias =
				'security_huks_third_Abnormal_signVerify_new_1047'

			await publicSignVerify(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			HuksOptions.properties.splice(
				-1,
				0,
				HuksSignVerify002.HuksTagDSACOMMONSIZE
			)
			await publicImportKey(newSrcKeyAlias, HuksOptions)
			await publicUpdateFunc(handle, HuksOptions, 'Fail')
			HuksOptions.outData = exportKey
			await publicAbortFunc(handle, HuksOptions, 'Fail')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			await publicDeleteKeyFunc(newSrcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1048',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1048'
			const newSrcKeyAlias =
				'security_huks_third_Abnormal_signVerify_new_1048'

			await publicSignVerify(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			HuksOptions.properties.splice(
				-1,
				0,
				HuksSignVerify002.HuksTagDSACOMMONSIZE
			)
			await publicImportKey(newSrcKeyAlias, HuksOptions)
			await publicUpdateFunc(handle, HuksOptions, 'Fail')
			await publicUpdateFunc(handle, HuksOptions, 'Fail')
			HuksOptions.outData = exportKey
			await publicAbortFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			await publicDeleteKeyFunc(newSrcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1049',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1049'
			const newSrcKeyAlias =
				'security_huks_third_Abnormal_signVerify_new_1049'

			await publicSignVerify(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			HuksOptions.properties.splice(
				-1,
				0,
				HuksSignVerify002.HuksTagDSACOMMONSIZE
			)
			await publicImportKey(newSrcKeyAlias, HuksOptions)
			await publicUpdateFunc(handle, HuksOptions, 'Fail')
			HuksOptions.outData = exportKey
			await publicAbortFunc(handle, HuksOptions, 'Fail')
			await publicAbortFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			await publicDeleteKeyFunc(newSrcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1050',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1050'
			const newSrcKeyAlias =
				'security_huks_third_Abnormal_signVerify_new_1050'

			await publicSignVerify(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			HuksOptions.properties.splice(
				-1,
				0,
				HuksSignVerify002.HuksTagDSACOMMONSIZE
			)
			await publicImportKey(newSrcKeyAlias, HuksOptions)

			await publicUpdateFunc(handle, HuksOptions, 'Fail')

			HuksOptions.outData = exportKey
			await publicAbortFunc(handle, HuksOptions, 'Fail')
			await publicFinishFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			await publicDeleteKeyFunc(newSrcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1051',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1051'
			const newSrcKeyAlias =
				'security_huks_third_Abnormal_signVerify_new_1051'

			await publicSignVerify(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			HuksOptions.properties.splice(
				-1,
				0,
				HuksSignVerify002.HuksTagDSACOMMONSIZE
			)
			await publicImportKey(newSrcKeyAlias, HuksOptions)

			HuksOptions.outData = exportKey
			await publicFinishFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			await publicDeleteKeyFunc(newSrcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1052',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1052'
			const newSrcKeyAlias =
				'security_huks_third_Abnormal_signVerify_new_1052'

			await publicSignVerify(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			HuksOptions.properties.splice(
				-1,
				0,
				HuksSignVerify002.HuksTagDSACOMMONSIZE
			)
			await publicImportKey(newSrcKeyAlias, HuksOptions)

			HuksOptions.outData = exportKey
			await publicAbortFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			await publicDeleteKeyFunc(newSrcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1053',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1053'
			const newSrcKeyAlias =
				'security_huks_third_Abnormal_signVerify_new_1053'

			await publicSignVerify(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			HuksOptions.properties.splice(
				-1,
				0,
				HuksSignVerify002.HuksTagDSACOMMONSIZE
			)
			await publicImportKey(newSrcKeyAlias, HuksOptions)

			HuksOptions.outData = exportKey
			await publicFinishFunc(handle, HuksOptions, 'Fail')

			await publicUpdateFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			await publicDeleteKeyFunc(newSrcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1054',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1054'
			const newSrcKeyAlias =
				'security_huks_third_Abnormal_signVerify_new_1054'

			await publicSignVerify(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			HuksOptions.properties.splice(
				-1,
				0,
				HuksSignVerify002.HuksTagDSACOMMONSIZE
			)
			await publicImportKey(newSrcKeyAlias, HuksOptions)

			HuksOptions.outData = exportKey
			await publicAbortFunc(handle, HuksOptions, 'Fail')

			await publicUpdateFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			await publicDeleteKeyFunc(newSrcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1055',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1055'
			const newSrcKeyAlias =
				'security_huks_third_Abnormal_signVerify_new_1055'

			await publicSignVerify(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			HuksOptions.properties.splice(
				-1,
				0,
				HuksSignVerify002.HuksTagDSACOMMONSIZE
			)
			await publicImportKey(newSrcKeyAlias, HuksOptions)

			HuksOptions.outData = exportKey
			await publicFinishFunc(handle, HuksOptions, 'Fail')
			await publicFinishFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			await publicDeleteKeyFunc(newSrcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1056',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1056'
			const newSrcKeyAlias =
				'security_huks_third_Abnormal_signVerify_new_1056'

			await publicSignVerify(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			HuksOptions.properties.splice(
				-1,
				0,
				HuksSignVerify002.HuksTagDSACOMMONSIZE
			)
			await publicImportKey(newSrcKeyAlias, HuksOptions)

			HuksOptions.outData = exportKey
			await publicAbortFunc(handle, HuksOptions, 'Fail')
			await publicAbortFunc(handle, HuksOptions, 'Fail')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			await publicDeleteKeyFunc(newSrcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1059',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1059'
			const newSrcKeyAlias =
				'security_huks_third_Abnormal_signVerify_new_1059'

			await publicSignVerify(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			HuksOptions.properties.splice(
				-1,
				0,
				HuksSignVerify002.HuksTagDSACOMMONSIZE
			)
			await publicImportKey(newSrcKeyAlias, HuksOptions)
			await publicInitFunc(newSrcKeyAlias, HuksOptions, 'Success')

			HuksOptions.inData = srcData64Kb
			await publicUpdateFunc(handle, HuksOptions, 'Success')

			await publicInitFunc(newSrcKeyAlias, HuksOptions, 'Success')

			HuksOptions.outData = srcData63Kb
			await publicUpdateFunc(handle, HuksOptions, 'Success')

			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			await publicDeleteKeyFunc(newSrcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1062',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1062'
			const newSrcKeyAlias =
				'security_huks_third_Abnormal_signVerify_new_1062'

			await publicSignVerify(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			HuksOptions.properties.splice(
				-1,
				0,
				HuksSignVerify002.HuksTagDSACOMMONSIZE
			)
			await publicUpdateFunc(handle, HuksOptions, 'Fail')
			HuksOptions.outData = exportKey
			await publicFinishFunc(handle, HuksOptions, 'Fail')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1063',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1063'
			const newSrcKeyAlias =
				'security_huks_third_Abnormal_signVerify_new_1063'
			await publicSignVerify(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			HuksOptions.properties.splice(
				-1,
				0,
				HuksSignVerify002.HuksTagDSACOMMONSIZE
			)
			HuksOptions.outData = exportKey
			await publicFinishFunc(handle, HuksOptions, 'Fail')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')

			done()
		}
	)

	it(
		'security_huks_third_Abnormal_signVerify_1064',
		0,
		async function (done) {
			const srcKeyAlias = 'security_huks_third_Abnormal_signVerify_1064'
			const newSrcKeyAlias =
				'security_huks_third_Abnormal_signVerify_new_1064'
			await publicSignVerify(srcKeyAlias, HuksOptions, 'Success')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyDSAPurposeVERIFY
			)
			HuksOptions.properties.splice(
				-1,
				0,
				HuksSignVerify002.HuksTagDSACOMMONSIZE
			)
			HuksOptions.outData = exportKey
			await publicAbortFunc(handle, HuksOptions, 'Fail')
			HuksOptions.properties.splice(
				1,
				1,
				HuksSignVerify002.HuksKeyRSAPurposeSING_VERIFY
			)
			await publicDeleteKeyFunc(srcKeyAlias, HuksOptions, 'Success')
			done()
		}
	)
})
