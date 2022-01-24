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




  


  


import { btnGroupList, threePartyList } from './btnGroupConfig.js';
import { CALL_STATUS_ACTIVE, CALL_STATUS_IDLE, CALL_STATUS_HOLDING, defaultCallData } from '../../../common/constant/callStateConst.js';
import { holdCall, unHoldCall, switchCall, combineConference } from '../../../model/callServiceProxy.js';
import { formatTime } from '../../utils/utils.js';
import clone from '../../utils/clone.js';

const oneThousandMilliseconds = 1000;

const textMap = {
	'record': 'recording',
	'keep': 'keep',
	'add': 'addCall',
	'video': 'videoCall',
	'mute': 'mute',
	'contact': 'contactPerson',
	'exchange': 'exchange',
	'merge': 'mergeCall'
}

export default {
	props: {
		callData: {
			default: defaultCallData
		},
		callList: {
			default: []
		}
	},
	data: {
		timer: null,
		count: 0,
		btnGroupList,
		threePartyList,
		btnList: [],
		oldCallState: CALL_STATUS_IDLE,
	},
	computed: {
		callState() {
			return this.callData.callState;
		}
	},
	onInit() {
		this.btnList = clone(btnGroupList);
		console.log(JSON.stringify(...clone(this.btnGroupList).splice(1, 2)));
	},
	onCallStateChange(newVal, oldVal) {
		if (this.callList.length >= 2) {
			this.btnList.splice(1, 2, ...clone(this.threePartyList));
		} else {
			this.btnList.splice(1, 2, ...clone(this.btnGroupList).splice(1, 2));
		}
//		if (this.callList.length >= 2) {
//			this.btnList.splice(1, 2, this.threePartyList);
//		} else {
//			this.btnList.splice(1, 2, this.btnGroupList.splice(1, 2));
//		}
		if (newVal === CALL_STATUS_ACTIVE || newVal === CALL_STATUS_HOLDING ) {
			this.btnList.forEach(item => {
				if(!['video', 'record'].includes(item.type)) {
					item.isDisable = false;
				}
			});
			if (newVal === CALL_STATUS_HOLDING ) {
				this.btnList[1].isEnable = true;
			}
		} else {
			this.btnList.forEach(item => {
				if (item.type !== 'contact')
				item.isDisable = true;
			});
		}
	},
	btnClick({ detail: type }) {
		const { callId } = this.callData;
		if (['record', 'keep', 'video', 'mute'].includes(type)) {
			this.btnList.forEach(item => {
				if (item.type === type) {
					item.isEnable = !item.isEnable;
				}
			});
			if (type === 'record') {
				if (this.btnList[0].isEnable) {
					this.clockHandle();
				} else {
					this.count = 0;
					clearInterval(this.timer);
					this.btnList[0].iconText = '录音';
				}
			}
		}

		switch (type) {
			case 'record':
			break;
			case 'keep':
				this.keepHandle('keep');
			break;
			case 'exchange':
				switchCall();
				break;
			case 'add':
			break;
			case 'video':
			break;
			case 'mute':
			break;
			case 'contact':
			break;
			case 'merge':
				combineConference(callId);
			break;
			default:
				break;
		}

	},
	// 录音
	clockHandle() {
		this.timer = setInterval(() => {
			this.count++;
			this.btnList[0].iconText = formatTime(this.count);
		}, oneThousandMilliseconds);
	},
	// 等待|保持
	keepHandle(type) {
		const awaitIsEnable = this.btnList.find(v => v.type === type).isEnable;
		awaitIsEnable ? holdCall(this.callData.callId) : unHoldCall(this.callData.callId);
},
	onDestroy() {
		this.timer && clearInterval(this.timer);
	}
}