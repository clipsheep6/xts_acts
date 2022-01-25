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




  

import app from '@system.app';
import { dialCall, hangUpCall } from '../../../model/callServiceProxy.js';
import callStateObj, { CALL_STATUS_IDLE, getCallStateText } from '../../../common/constant/callStateConst.js';
export default {
	props: {
		callData: {
			default: {}
		},
		isDailIdel: {
			default: true
		},
		telNumber: {
			default: ''
		}
	},
	computed: {
		callState() {
			return this.callData.callState;
		}
	},
	data: {
		callStateObj,
		showKeyboard: false,
		isSpeaker: false
	},
	delPhone() {
		this.$emit('deltel');
	},
  // 拨打电话
	callPhone() {
		console.log(`状态改变。。。callphone 点击拨打 : ${Date.now()}`);
		this.$emit('showdail', false);
		if(!this.telNumber){
			return;
		}
		dialCall(this.telNumber, false);
	}
}