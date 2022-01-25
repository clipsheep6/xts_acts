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






import {CALL_STATUS_DISCONNECTED, CALL_STATUS_DISCONNECTING, CALL_STATUS_ACTIVE} from '../common/constant/callStateConst.js'

export default class CallStateManager {
	constructor(callData) {
		this.callData = callData;
	}

	update(data, callList) {
		console.log('CallStateManager update' + JSON.stringify(data) + new Date().getTime());
		console.log('callList length: ' + callList.length);
		console.log('callList: ' + JSON.stringify(callList));
		if (callList.length >= 2) {
			console.log('callList length >=2');
			if (data.callState !== CALL_STATUS_DISCONNECTED || data.callState !== CALL_STATUS_DISCONNECTING) {
				Object.assign(this.callData, { ...data });
			} else {
				console.log(`data.callState: ${data.callState}`);
				const curdata = callList.find((item) => {
					return item.callState === CALL_STATUS_ACTIVE
				})
				console.log(`curdata: ${JSON.stringify(curdata)}`);
				Object.assign(this.callData, { ...curdata });
			}
		} else {
			console.log('callList length <2');
			if (callList.length === 1) {
				Object.assign(this.callData, { ...callList[0] });
			} else {
				Object.assign(this.callData, { ...data });
			}
		}
	}
}