/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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


/**
 * The code here is the voice call interface and the sim card interface,
 * as well as the interface piling test simulation,
 * which is convenient for development, so I will leave it for now.
 * */

import call from "@ohos.telephony.call";
//import sim from '@ohos.telephony.sim';

/**
 * @param { Function } callBack
 *
 * CallAttributeInfo: res
 * callId: Number
 * callState: Number
 * accountNumber: Number
 * accountId: String
 * videoState: Number
 * callType: Number
 */
export function registerCallStateCallback(callBack) {
	call.on('callDetailsChange', (err, res) => {
		if (err) {
			console.log('callui:@ohos.tel_call_manager_inner_api:call.on' + JSON.stringify(err));
			return;
		}
		callBack(res);
		console.log('callui:@ohos.tel_call_manager_inner_api:call.on' + JSON.stringify(res));
	});
}
/**
 * 拨打电话
 *  @param { Number } callId
 *  @returns
 */
export const dialCall = (phoneNumber, extral) => {
	call.dial(phoneNumber,{extral},(err,dialResult)=>{
		if(err){
			console.log("dial error cause:" + err.message);
			return;
		}
		console.log("dialResult = " + dialResult);
		console.log("dial-tel-time:"+new Date().getTime());
	})
}

/**
 * 接听电话
 *  @param { Number } callId
 *  @returns Promise
 */
export const acceptCall = (callId) => {
	call.answer(callId).then(res => {
		console.log('callui:@ohos.tel_call_manager_inner_api:then:acceptCall' + JSON.stringify(res));
	}).catch(err => {
		console.log('callui:@ohos.tel_call_manager_inner_api:catch:acceptCall' + JSON.stringify(err));
	});
}

/**
 * 拒接电话
 *  @param { Number } callId
 *  @returns Promise
 */
export const rejectCall = (callId, isSendSms = false, msg = '') => {
	let options = { isSendSms, messageContent: msg};
	call.reject(callId, options).then(res => {
		console.log('callui:@ohos.tel_call_manager_inner_api:then:rejectCall' + JSON.stringify(res));
	}).catch(err => {
		console.log('callui:@ohos.tel_call_manager_inner_api:catch:rejectCall' + JSON.stringify(err));
	});
}


/**
 * 挂断电话
 *  @param { Number } callId
 *  @returns Promise
 */
export const hangUpCall = (callId) => {
//	把callList 数据里面的通话中的状态的给挂断
	return new Promise((resolve, reject) => {
		call.hangup(callId).then(res => {
			resolve(res);
			console.log("hangUp-tel-time:"+new Date().getTime())
			console.log('callui:@ohos.tel_call_manager_inner_api:then:hangUpCall' + JSON.stringify(res));
		}).catch(err => {
			console.log('callui:@ohos.tel_call_manager_inner_api:catch:hangUpCall' + JSON.stringify(err));
		})
	});
}

/**
 *  @param { Number } callId
 *  @returns Promise
 */
export const holdCall = (callId) => {
	return new Promise((resolve, reject) => {
		call.holdCall(callId).then(res => {
			resolve(res);
			console.log('callui:@ohos.tel_call_manager_inner_api:then:holdCall' + JSON.stringify(res));
		}).catch(err => {
			console.log('callui:@ohos.tel_call_manager_inner_api:catch:holdCall' + JSON.stringify(err));
		})
	});
}

/**
 *  @returns Promise
 */
export const switchCall = () => {
	return new Promise((resolve, reject) => {
		call.switchCall().then(res => {
			resolve(res);
			console.log('callui:@ohos.tel_call_manager_inner_api:then:switchCall' + JSON.stringify(res));
		}).catch(err => {
			console.log('callui:@ohos.tel_call_manager_inner_api:catch:switchCall' + JSON.stringify(err));
		})
	});
}

/**
 *  @param { Number } callId
 *  @returns Promise
 */
export const unHoldCall = (callId) => {
	return new Promise((resolve, reject) => {
		call.unHoldCall(callId).then(res => {
			resolve(res);
			console.log('callui:@ohos.tel_call_manager_inner_api:then:unHoldCall' + JSON.stringify(res));
		}).catch(err => {
			console.log('callui:@ohos.tel_call_manager_inner_api:catch:unHoldCall' + JSON.stringify(err));
		})
	});
}



/**
 * callAttributeInfo: Object
 * callId: Number
 * eventType: Number
 * eventId: Number
 */
export function registerCallEventCallback() {
	return new Promise((resolve, reject) => {
		call.registerCallEventCallback((err, callAttributeInfo) => {
			if (err) {
				reject(err)
				console.log('callui:@ohos.tel_call_manager_inner_api:registerCallEventCallback' + JSON.stringify(err));
			} else {
				console.log('callui:@ohos.tel_call_manager_inner_api:registerCallEventCallback' + JSON.stringify(callAttributeInfo));
			}
		})
	});
}

export const startDtmf = (callId, str) => {
		call.startDtmf(callId, str).then(res => {
			console.log('callui:@ohos.tel_call_manager_inner_api:then:startDtmf' + JSON.stringify(res));
		}) .catch(err => {
			console.log('callui:@ohos.tel_call_manager_inner_api:catch:startDtmf' + JSON.stringify(err));
		})
}

export const stopDtmf = (callId) => {
		call.stopDtmf(callId).then(res => {
			console.log('callui:@ohos.tel_call_manager_inner_api:then:stopDtmf' + JSON.stringify(res));
		}).catch(err => {
			console.log('callui:@ohos.tel_call_manager_inner_api:catch:stopDtmf' + JSON.stringify(err));
		})
}

export const sendDtmf = (callId, str) => {
		call.sendDtmf(callId, str).then(res => {
			console.log('callui:@ohos.tel_call_manager_inner_api:then:sendDtmf' + JSON.stringify(res));
		}).catch(err => {
			console.log('callui:@ohos.tel_call_manager_inner_api:catch:sendDtmf' + JSON.stringify(err));
		})
}

export const combineConference = (callId) => {
	call.combineConference(callId).then(res => {
		console.log('callui:@ohos.tel_call_manager_inner_api:then:combineConference' + JSON.stringify(res));
	}).catch(err => {
		console.log('callui:@ohos.tel_call_manager_inner_api:catch:combineConference' + JSON.stringify(err));
	})
}

export function getSimState(slotId){
	return sim.getSimState(slotId);
}
