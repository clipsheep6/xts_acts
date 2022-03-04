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

let srcData63Kb = Data.Data_63KB
let srcData64Kb = Data.Data_64KB
let HuksOptions
let errString = '!@#$%^&*()_+'
let handle = {}

let HuksHmac = {
	HuksKeyAlg: {
		tag: Params.HksTag.HKS_TAG_ALGORITHM,
		value: Params.HksKeyAlg.HKS_ALG_HMAC,
	},
	HuksKeyPurpose: {
		tag: Params.HksTag.HKS_TAG_PURPOSE,
		value: Params.HksKeyPurpose.HKS_KEY_PURPOSE_MAC,
	},
	HuksKeySIZE: {
		tag: Params.HksTag.HKS_TAG_KEY_SIZE,
		value: Params.HksKeySize.HKS_KEY_SIZE_512,
	},
	HuksTagDigestSHA1: {
		tag: Params.HksTag.HKS_TAG_DIGEST,
		value: Params.HksKeyDigest.HKS_DIGEST_SHA1,
	},
}

async function publicHmacGenFunc(srcKeyAlias, HuksOptions) {
	HuksOptions.properties.splice(1, 0, {
		tag: Params.HksTag.HKS_TAG_KEY_SIZE,
		value: Params.HksKeySize.HKS_KEY_SIZE_512,
	})
	await huks
		.generateKey(srcKeyAlias, HuksOptions)
		.then((data) => {
			console.log(`test generateKey data ${JSON.stringify(data)}`)
			expect(data.errorCode == 0).assertTrue()
		})
		.catch((err) => {
			console.log('test err information: ' + JSON.stringify(err))
			expect(null).assertFail()
		})
	HuksOptions.properties.splice(1, 1)
}

async function publicHmacInitFunc(srcKeyAlias, HuksOptions, Type) {
	console.log(`test init HuksOptions ${JSON.stringify(HuksOptions)}`)
	console.log(`test init srcKeyAlias ${srcKeyAlias}`)
	await huks
		.init(srcKeyAlias, HuksOptions)
		.then(async (data) => {
			if (Type == 'Fail') {
				expect(data.errorCode != 0).assertFail()
			} else {
				handle = {
					handle1: data.handle1,
					handle2: data.handle2,
				}
				expect(data.errorCode == 0).assertTrue()
			}
			console.log(
				`test init errorCode: ${JSON.stringify(data.errorCode)}`
			)
		})
		.catch((err) => {
			console.log(`test init err: ${JSON.stringify(err)}`)
			expect(null).assertFail()
		})
}

async function publicHmacUpdateFunc(handle, HuksOptions, Type) {
	console.log(`test start update`)
	console.log(`test start update handle ${JSON.stringify(handle)}`)
	console.log(`test start update HuksOptions ${JSON.stringify(HuksOptions)}`)
	console.log(
		`test start update HuksOptions.inData ${JSON.stringify(
			HuksOptions.inData
		)}`
	)
	console.log(`test start update Type ${Type}`)
	let dateSize = 64 * 1024
	let tempHuksOptionsInData = HuksOptions.inData
	console.log(`test start update`)
	let inDataArray = Tools.stringToArray(HuksOptions.inData)
	console.log(`test ${inDataArray.length}`)
	if (inDataArray.length <= dateSize) {
		HuksOptions.inData = new Uint8Array(inDataArray)
		await update(handle, HuksOptions, Type)
		HuksOptions.inData = tempHuksOptionsInData
	} else {
		let count = Math.floor(inDataArray.length / dateSize)
		let remainder = inDataArray.length % dateSize
		for (let i = 0; i < count; i++) {
			HuksOptions.inData = new Uint8Array(
				Tools.stringToArray(tempHuksOptionsInData).slice(
					dateSize * i,
					dateSize * (i + 1)
				)
			)
			await update(handle, HuksOptions, Type)
		}
		if (remainder !== 0) {
			HuksOptions.inData = new Uint8Array(
				Tools.stringToArray(tempHuksOptionsInData).slice(
					dateSize * count,
					inDataArray.length
				)
			)
			await update(handle, HuksOptions, Type)
		}
	}
}

async function update(handle, HuksOptions, Type) {
	console.log(`test update HuksOptions ${JSON.stringify(HuksOptions)}`)
	await huks
		.update(handle, HuksOptions)
		.then(async (data) => {
			if (Type == 'Fail') {
				console.log(
					`test update Fail errorCode: ${JSON.stringify(
						data.errorCode
					)}`
				)
				expect(data.errorCode != 0).assertTrue()
			} else {
				console.log(
					`test update success errorCode: ${JSON.stringify(
						data.errorCode
					)}`
				)
				expect(data.errorCode == 0).assertTrue()
			}
		})
		.catch((err) => {
			console.log('test update err information: ' + err)
			expect(null).assertFail()
		})
}

async function publicHmacFinish(handle, HuksOptions, thirdInderfaceName, Type) {
	console.log(`test Finish HuksOptions ${JSON.stringify(HuksOptions)}`)
	if (thirdInderfaceName == 'finish') {
		HuksOptions.inData = new Uint8Array(Tools.stringToArray('0'))
		await huks
			.finish(handle, HuksOptions)
			.then((data) => {
				if (Type == 'Fail') {
					expect(data.errorCode != 0).assertTrue()
				} else {
					expect(data.errorCode == 0).assertTrue()
				}
				console.log(
					`test Finish errorCode: ${JSON.stringify(data.errorCode)}`
				)
			})
			.catch((err) => {
				console.log('test finish err information: ' + err)
				expect(null).assertFail()
			})
	} else {
		await huks
			.abort(handle, HuksOptions)
			.then((data) => {
				if (Type == 'Fail') {
					expect(data.errorCode != 0).assertTrue()
				} else {
					expect(data.errorCode == 0).assertTrue()
				}
				console.log(
					`test abort errorCode: ${JSON.stringify(data.errorCode)}`
				)
			})
			.catch((err) => {
				console.log('test abort err information: ' + err)
				expect(null).assertFail()
			})
	}
}

async function publicHmacDelete(srcKeyAlias, HuksOptions) {
	HuksOptions.properties.splice(1, 0, {
		tag: Params.HksTag.HKS_TAG_KEY_SIZE,
		value: Params.HksKeySize.HKS_KEY_SIZE_512,
	})
	await huks
		.deleteKey(srcKeyAlias, HuksOptions)
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

describe('SecurityHuksAbnormalHmacPromiseJsunit', function () {
	beforeEach(function () {
		handle = {}
		HuksOptions = {
			properties: new Array(
				HuksHmac.HuksKeyAlg,
				HuksHmac.HuksKeyPurpose,
				HuksHmac.HuksTagDigestSHA1
			),
			inData: srcData63Kb,
		}
		console.log(
			`test beforeEach HuksOptions ${JSON.stringify(HuksOptions)}`
		)
	})

	it('security_huks_third_abnormal_hmac_1013', 0, async function (done) {
		await publicHmacUpdateFunc(handle, HuksOptions, 'Fail')
		await publicHmacFinish(handle, HuksOptions, 'finish', 'Fail')
		done()
	})

	it('security_huks_third_abnormal_hmac_1014', 0, async function (done) {
		await publicHmacFinish(handle, HuksOptions, 'finish', 'Fail')
		done()
	})

	it('security_huks_third_abnormal_hmac_1015', 0, async function (done) {
		await publicHmacFinish(handle, HuksOptions, 'abort', 'Fail')
		done()
	})

	it('security_huks_third_abnormal_hmac_1016', 0, async function (done) {
		let srcKeyAlias = 'security_huks_third_abnormal_hmac_1016'
		await publicHmacGenFunc(srcKeyAlias, HuksOptions)
		await publicHmacInitFunc(srcKeyAlias, HuksOptions, 'Success')
		await publicHmacFinish(handle, HuksOptions, 'finish', 'Success')
		HuksOptions.inData = srcData63Kb
		await publicHmacUpdateFunc(handle, HuksOptions, 'Fail')
		await publicHmacDelete(srcKeyAlias, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_hmac_1017', 0, async function (done) {
		let srcKeyAlias = 'security_huks_third_abnormal_hmac_1017'
		await publicHmacGenFunc(srcKeyAlias, HuksOptions)
		await publicHmacInitFunc(srcKeyAlias, HuksOptions, 'Success')
		await publicHmacFinish(handle, HuksOptions, 'abort', 'Success')
		HuksOptions.inData = srcData63Kb
		await publicHmacUpdateFunc(handle, HuksOptions, 'Fail')
		await publicHmacDelete(srcKeyAlias, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_hmac_1018', 0, async function (done) {
		let srcKeyAlias = 'security_huks_third_abnormal_hmac_1018'
		await publicHmacGenFunc(srcKeyAlias, HuksOptions)
		HuksOptions.inData = srcData63Kb
		await publicHmacUpdateFunc(handle, HuksOptions, 'Fail')
		await publicHmacFinish(handle, HuksOptions, 'finish', 'Fail')
		await publicHmacDelete(srcKeyAlias, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_hmac_1019', 0, async function (done) {
		let srcKeyAlias = 'security_huks_third_abnormal_hmac_1019'
		await publicHmacGenFunc(srcKeyAlias, HuksOptions)
		HuksOptions.inData = srcData63Kb
		await publicHmacUpdateFunc(handle, HuksOptions, 'Fail')
		await publicHmacUpdateFunc(handle, HuksOptions, 'Fail')
		await publicHmacFinish(handle, HuksOptions, 'finish', 'Fail')
		await publicHmacDelete(srcKeyAlias, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_hmac_1020', 0, async function (done) {
		let srcKeyAlias = 'security_huks_third_abnormal_hmac_1020'
		await publicHmacGenFunc(srcKeyAlias, HuksOptions)
		HuksOptions.inData = srcData63Kb
		await publicHmacUpdateFunc(handle, HuksOptions, 'Fail')
		await publicHmacFinish(handle, HuksOptions, 'finish', 'Fail')
		await publicHmacFinish(handle, HuksOptions, 'finish', 'Fail')
		await publicHmacDelete(srcKeyAlias, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_hmac_1021', 0, async function (done) {
		let srcKeyAlias = 'security_huks_third_abnormal_hmac_1021'
		await publicHmacGenFunc(srcKeyAlias, HuksOptions)
		HuksOptions.inData = srcData63Kb
		await publicHmacUpdateFunc(handle, HuksOptions, 'Fail')
		await publicHmacFinish(handle, HuksOptions, 'finish', 'Fail')
		await publicHmacFinish(handle, HuksOptions, 'abort', 'Fail')
		await publicHmacDelete(srcKeyAlias, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_hmac_1022', 0, async function (done) {
		let srcKeyAlias = 'security_huks_third_abnormal_hmac_1022'
		await publicHmacGenFunc(srcKeyAlias, HuksOptions)
		HuksOptions.inData = srcData63Kb
		await publicHmacUpdateFunc(handle, HuksOptions, 'Fail')
		await publicHmacFinish(handle, HuksOptions, 'abort', 'Fail')
		await publicHmacDelete(srcKeyAlias, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_hmac_1023', 0, async function (done) {
		let srcKeyAlias = 'security_huks_third_abnormal_hmac_1023'
		await publicHmacGenFunc(srcKeyAlias, HuksOptions)
		HuksOptions.inData = srcData63Kb
		await publicHmacUpdateFunc(handle, HuksOptions, 'Fail')
		await publicHmacUpdateFunc(handle, HuksOptions, 'Fail')
		await publicHmacFinish(handle, HuksOptions, 'abort', 'Fail')
		await publicHmacDelete(srcKeyAlias, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_hmac_1024', 0, async function (done) {
		let srcKeyAlias = 'security_huks_third_abnormal_hmac_1024'
		await publicHmacGenFunc(srcKeyAlias, HuksOptions)
		HuksOptions.inData = srcData63Kb
		await publicHmacUpdateFunc(handle, HuksOptions, 'Fail')
		await publicHmacFinish(handle, HuksOptions, 'abort', 'Fail')
		await publicHmacFinish(handle, HuksOptions, 'abort', 'Fail')
		await publicHmacDelete(srcKeyAlias, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_hmac_1025', 0, async function (done) {
		let srcKeyAlias = 'security_huks_third_abnormal_hmac_1025'
		await publicHmacGenFunc(srcKeyAlias, HuksOptions)
		HuksOptions.inData = srcData63Kb
		await publicHmacUpdateFunc(handle, HuksOptions, 'Fail')
		await publicHmacFinish(handle, HuksOptions, 'abort', 'Fail')
		await publicHmacFinish(handle, HuksOptions, 'finish', 'Fail')
		await publicHmacDelete(srcKeyAlias, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_hmac_1026', 0, async function (done) {
		let srcKeyAlias = 'security_huks_third_abnormal_hmac_1026'
		await publicHmacGenFunc(srcKeyAlias, HuksOptions)
		await publicHmacFinish(handle, HuksOptions, 'finish', 'Fail')
		await publicHmacDelete(srcKeyAlias, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_hmac_1027', 0, async function (done) {
		let srcKeyAlias = 'security_huks_third_abnormal_hmac_1027'
		await publicHmacGenFunc(srcKeyAlias, HuksOptions)
		await publicHmacFinish(handle, HuksOptions, 'abort', 'Fail')
		await publicHmacDelete(srcKeyAlias, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_hmac_1028', 0, async function (done) {
		let srcKeyAlias = 'security_huks_third_abnormal_hmac_1028'
		await publicHmacGenFunc(srcKeyAlias, HuksOptions)
		await publicHmacFinish(handle, HuksOptions, 'finish', 'Fail')
		HuksOptions.inData = srcData63Kb
		await publicHmacUpdateFunc(handle, HuksOptions, 'Fail')
		done()
	})

	it('security_huks_third_abnormal_hmac_1029', 0, async function (done) {
		let srcKeyAlias = 'security_huks_third_abnormal_hmac_1029'
		await publicHmacGenFunc(srcKeyAlias, HuksOptions)
		await publicHmacFinish(handle, HuksOptions, 'abort', 'Fail')
		HuksOptions.inData = srcData63Kb
		await publicHmacUpdateFunc(handle, HuksOptions, 'Fail')
		done()
	})

	it('security_huks_third_abnormal_hmac_1030', 0, async function (done) {
		let srcKeyAlias = 'security_huks_third_abnormal_hmac_1030'
		await publicHmacGenFunc(srcKeyAlias, HuksOptions)
		await publicHmacFinish(handle, HuksOptions, 'finish', 'Fail')
		await publicHmacFinish(handle, HuksOptions, 'finish', 'Fail')
		await publicHmacDelete(srcKeyAlias, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_hmac_1031', 0, async function (done) {
		let srcKeyAlias = 'security_huks_third_abnormal_hmac_1031'
		await publicHmacGenFunc(srcKeyAlias, HuksOptions)
		await publicHmacFinish(handle, HuksOptions, 'abort', 'Fail')
		await publicHmacFinish(handle, HuksOptions, 'abort', 'Fail')
		await publicHmacDelete(srcKeyAlias, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_hmac_1032', 0, async function (done) {
		let srcKeyAlias = 'security_huks_third_abnormal_hmac_1032'
		await publicHmacGenFunc(srcKeyAlias, HuksOptions)
		await publicHmacInitFunc(srcKeyAlias, HuksOptions, 'Success')
		HuksOptions.inData = srcData64Kb
		await publicHmacUpdateFunc(handle, HuksOptions, 'Success')
		await publicHmacFinish(handle, HuksOptions, 'finish', 'Success')
		console.log(`test start second update`)
		HuksOptions.inData = srcData64Kb
		await publicHmacUpdateFunc(handle, HuksOptions, 'Fail')
		await publicHmacDelete(srcKeyAlias, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_hmac_1033', 0, async function (done) {
		let srcKeyAlias = 'security_huks_third_abnormal_hmac_1033'
		await publicHmacGenFunc(srcKeyAlias, HuksOptions)
		await publicHmacInitFunc(srcKeyAlias, HuksOptions, 'Success')
		HuksOptions.inData = srcData64Kb
		await publicHmacUpdateFunc(handle, HuksOptions, 'Success')
		await publicHmacFinish(handle, HuksOptions, 'abort', 'Success')
		await publicHmacUpdateFunc(handle, HuksOptions, 'Fail')
		await publicHmacDelete(srcKeyAlias, HuksOptions)
		done()
	})

	it('security_huks_third_abnormal_hmac_1034', 0, async function (done) {
		let srcKeyAlias = 'security_huks_third_abnormal_hmac_1034'
		await publicHmacGenFunc(srcKeyAlias, HuksOptions)
		await publicHmacInitFunc(srcKeyAlias, HuksOptions, 'Success')
		HuksOptions.inData = srcData64Kb
		await publicHmacUpdateFunc(handle, HuksOptions, 'Success')
		await publicHmacInitFunc(srcKeyAlias, HuksOptions, 'Success')
		await publicHmacUpdateFunc(handle, HuksOptions, 'Success')
		await publicHmacDelete(srcKeyAlias, HuksOptions)
		done()
	})
})
