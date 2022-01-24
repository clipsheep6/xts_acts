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




  


  

import { CALL_STATUS_DISCONNECTED } from '../common/constant/callStateConst.js';
import app from '@system.app'

export default class CallDataManager {
	constructor(callList) {
		this.callList = callList;
	}
	update(callData) {
		const { callState, callId } = callData;
		if (this.callList.every(v => v.callId !== callId)) {
			this.addCallList({ ...callData });
		} else {
			const targetObj = this.callList.find(v => v.callId === callId);
			Object.assign(targetObj, { ...callData });
		}
		console.log("CallDataManager callData"+JSON.stringify(callData))

		if (callState === CALL_STATUS_DISCONNECTED) {
			if (this.callList.length === 1) {
//				app.terminate();
//				this.callList = [];
				this.removeCallById(callId)
			} else {
				this.removeCallById(callId)
			}
		}
	}

	addCallList(obj) {
		this.callList.push(obj);
	}

	removeCallById(callId) {
		console.log('移除removeCallById'+callId)
		const index = this.callList.findIndex(v => v.callId === callId);
		this.callList.splice(index, 1);
		console.log('removeCallById this.callList'+JSON.stringify(callList))
	}
}