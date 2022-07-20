/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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

import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index';
import controller from '@ohos.nfc.controller';

let NfcState={
	STATE_OFF : 1,
	STATE_TURNING_ON :2,
	STATE_ON : 3,
	STATE_TURNING_OFF:4,
}

function sleep(delay){
	let start = (new Date()).getTime();
	while ((new Date()).gitTime() - start > delay){
		break;
	}
}

describe('ACTS_nfccontroller', function () {
    beforeAll(function () {
		console.info(beforeAll called);
		if(controller.isNfcOpen()){
			console.info("[nfc_js] test/enable3 nfc:" + controller.closeNfc());
			sleep(3000);
		}
    })

    beforeEach(function () {
    })

    afterEach(function () {
    })

    afterAll(function () {
    })

	/**
	* @tc.number SUB_COMMUNACATION_NFC_Cont_0100
	* @tc.name SUB_COMMUNACATION_NFC_isAvailavle
	* @tc.desc Test for controller
	* @tc.size since 7
	* @tc.type Function
	* @tc.level Level 1
	*/

    it('SUB_COMMUNACATION_NFC_Cont_0100', 0, function() {
		console.info("[nfc_js] nfcisAvailavle test start");
		let nfcisavailable = controller.isNfcAvailable();
		expect(nfcisAvailable).assertTrue();
		console.info('[nfc_js] NfcAvailavle :' + JSON.stringify(nfcisAvailavle));
	}
	
	/**
	* @tc.number SUB_COMMUNACATION_NFC_Cont_0200
	* @tc.name SUB_COMMUNACATION_NFC_isNfcOpen
	* @tc.desc Test for controller
	* @tc.size since 7
	* @tc.type Function
	* @tc.level Level 1
	*/

	it('SUB_COMMUNACATION_NFC_Cont_0200', 0, function() {
		console.info("[nfc_js] nfcenable test start");
		let nfcswitchis = coneroller.isNfcOpen();
		expect(nfcswitchis).assertTrue();
		console.info('[nfc_js] Nfc isopen state is :' + JSON.stringify(nfcswitchis));
	})

	/**
	* @tc.number SUB_COMMUNACATION_NFC_Cont_0300
	* @tc.name SUB_COMMUNACATION_NFC_listening
	* @tc.desc Test for controller
	* @tc.size since 7
	* @tc.type Function
	* @tc.level Level 1
	*/

	it('SUB_COMMUNACATION_NFC_Cont_0300', 0, function() {
		console.info("[nfc_js] nfcopen test start");
		let nfcisopen = coneroller.openNfc();
		expect(nfcisopen).assertTrue();
		console.info('[nfc_js] open the nfc :' + JSON.stringify(nfcisopen));
	})

	/**
	* @tc.number SUB_COMMUNACATION_NFC_Cont_0400
	* @tc.name SUB_COMMUNACATION_NFC_controller
    * @tc.desc Test for controller
    * @tc.size since 7
    * @tc.type Function
    * @tc.level Level 1
    */

	it('SUB_COMMUNACATION_NFC_Cont_0400', 0, function() {
		let nfcisavailable1 = coneroller.isNfcAvailable();
		expect(nfcisavailable1).assertTrue();
		console.info('[nfc_js] nfcisavailable1 :' + JSON.stringify(nfcisavailable1));
		let nfcenable1 = controller.isNfcopen();
		expect(nfcenable1).assertTrue();
		console.info('[nfc_js] Nfc isopen1 state is :' + JSON.stringify(nfcenable1));
	})
	
	/**
	* @tc.number SUB_COMMUNACATION_NFC_Cont_0500
	* @tc.name SUB_COMMUNACATION_NFC_controller
	* @tc.desc Test for controller
	* @tc.size since 7
	* @tc.type Function@tc.level Level 1
	*/

	it('SUB_COMMUNACATION_NFC_Cont_0500', 0, function() {
		console.info('[nfc_js] nfcget openstate test start');
		let checkopennfc = coneroller.getNfcState();
		expect(checkopennfc).assertEqual(NfcState.STATE_ON);
		console.info('[nfc_js] checkopen the state of nfc:' + JSON.stringify(checkopennfc));
	})

	/**
	* @tc.number SUB_COMMUNACATION_NFC_Cont_0600
	* @tc.name SUB_COMMUNACATION_NFC_controller
	* @tc.desc Test for controller
	* @tc.size since 7
	* @tc.type Function@tc.level Level 1
	*/

	it('SUB_COMMUNACATION_NFC_Cont_0600', 0, function() {
		console.info('[nfc_js] Nfc close test start');
		let nfcclose = coneroller.closeNfc();
		sleep(5000);
		expect(nfcclose).assertTrue();
		console.info('[nfc_js] close the nfc:' + JSON.stringify(nfcclose));
	})

	/**
	* @tc.number SUB_COMMUNACATION_NFC_Cont_0700
	* @tc.name SUB_COMMUNACATION_NFC_controller
	* @tc.desc Test for controller
	* @tc.size since 7
	* @tc.type Function@tc.level Level 1
	*/

	it('SUB_COMMUNACATION_NFC_Cont_0700', 0, function() {
		console.info('[nfc_js] Nfcget closestate test start');
		let checkclosenfc = controller.getNfcState();
		expect(checkclosenfc).assertEqual(NfcState.STATE_OFF);
		console.info('[nfc_js] checkclose the state of nfc:' + JSON.stringify(checkclosenfc));
	})

	/*test end*/
	console.info('*******************[nfc] start nfc js unit test end*******************');
})
