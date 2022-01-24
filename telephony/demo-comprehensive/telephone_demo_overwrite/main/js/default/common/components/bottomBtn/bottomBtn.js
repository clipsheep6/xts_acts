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
	clickShowHandle() {
		this.showKeyboard = !this.showKeyboard;
		this.$emit('showKeyboard', this.showKeyboard);
	},
  clickSpeaker() {
  	this.isSpeaker = !this.isSpeaker;
  },
	onHangUp() {
		console.log(`状态改变。。。onHangUp 点击挂断 : ${Date.now()}`);
		hangUpCall(this.callData.callId);
	},
	delPhone() {
		console.log(this.isDailIdel);
		this.$emit('deltel');
	},
  // 拨打电话
	callPhone() {
		if(!this.telNumber){
			return;
		}
		this.$emit('showKeyboard', false);
		dialCall(this.telNumber, false);
	}
}