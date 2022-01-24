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




  


  

import CallStateManager from './callStateManager.js'
import CallDataManager from './callDataManager.js';
import { registerCallStateCallback } from './callServiceProxy.js';

class CallManager{
	constructor(callData, callList) {
		this.callData = callData;
		this.callList = callList;
		this.callStateManager = null;
		this.callDataManager = null;
		this.getInstance();
    this.addCallDataListenter();
//		this.oldCallState = callData.callState;
//    this.callStateChange = (newVal, oldVal) => {};
	}

	getInstance() {
		this.callStateManager = new CallStateManager(this.callData);
		this.callDataManager = new CallDataManager(this.callList);
	}

	addCallDataListenter() {
		registerCallStateCallback(this.getCallData.bind(this));
	}

	getCallData(data) {
		this.callDataManager.update(data);
		this.callStateManager.update(data, this.callList);
		console.log("getCallData this.callList"+JSON.stringify(this.callList))
		this.callStateChange(data.callState, this.oldCallState);
		this.oldCallState = data.callState;
	}
	addCallBack(callBack) {
		this.callStateChange = callBack
	}
}

export default CallManager;