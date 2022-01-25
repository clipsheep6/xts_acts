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




import router from '@system.router';

import callStateObj, {
	defaultCallData,
	CALL_STATUS_ACTIVE,
	CALL_STATUS_DIALING,
	CALL_STATUS_INCOMING,
	CALL_STATUS_ALERTING,
	CALL_STATUS_WAITING,
	getCallStateText
} from '../../../common/constant/callStateConst.js';
import {formatPhoneNum, formatTime} from '../../utils/utils.js';
import {TEL_CONFERENCE_ACTIVE} from '../../constant/conferenceConst.js';

const THREE = 3;
const oneThousandMilliseconds = 1000;

export default {
	props: {
		callData: {
			default: defaultCallData
		},
		callList: {
			default: []
		},
		isShowKeyboard: {
			default: false
		},
		kbCommand: {
			default: ''
		}
	},
	data: {
		callStateObj,
		address: '广东深圳',
		simCardType: '移动',
		timer: null,
		pointTimer: null,
		callStateText: '',
		pointText: '',
		callTimeList: []
},
	computed: {
		callState() {
			return this.callData.callState;
		},
		phoneNumber() {
			console.log(`this.callData.accountNumber: ${this.callData.accountNumber}`);
			return formatPhoneNum(this.callData.accountNumber) || '未知号码';
		},
		isShowTime() {
			return  this.callState === CALL_STATUS_ACTIVE && this.callList.length === 1;
		},
		isShowCard() {
			const callListLength = this.callList.length;
			const callStates = this.callList.map(v => v.callState);
			return callListLength === 1 || (callListLength > 1 && callStates.includes(CALL_STATUS_WAITING))
		},
		conferenceState() {
			return this.callData.conferenceState
		},
		isConference() {
			return this.conferenceState === TEL_CONFERENCE_ACTIVE
		},

	},
	onInit() {
		this.callTimeList = this.$app.callTimeList;
	},
	addTextPoint() {
		let count = 0;
		this.pointTimer = setInterval(() => {
			this.pointText = new Array(count % THREE + 1).fill('.').join('');
			if (count >= THREE) count = 0;
			count++;
		}, oneThousandMilliseconds);
	},
	onCallStateChange(newVal, oldVal) {
		console.log(`contactCard onCallStateChange this.callData ${JSON.stringify(this.callData)}`);
		const { callId } = this.callData;
		const key = getCallStateText(newVal) || '';
		this.callStateText = key ? this.$t(`strings.${key}`) : '';

		this.pointTimer && clearInterval(this.pointTimer);
		if (newVal === CALL_STATUS_DIALING) {
			this.addTextPoint();
		}

		const isState = [CALL_STATUS_INCOMING, CALL_STATUS_ALERTING, CALL_STATUS_WAITING].includes(oldVal);
		const callTimeObj = this.callTimeList.find(v => v.callId === callId);
		if (!callTimeObj && newVal === CALL_STATUS_ACTIVE && isState) {
			const obj = {
				callId,
				timer: null,
				count: 0,
				callTime: '00:00'
			}
			this.callTimeList.push(obj);
			this.clockHandle({ ...obj });
		}
	},
	clockHandle(callObj) {
		callObj.timer = setInterval(() => {
			callObj.count++;
			callObj.callTime = formatTime(callObj.count);
			const index = this.callTimeList.findIndex(v => v.callId === callObj.callId);
			this.callTimeList.splice(index, 1, {
				...callObj
			});
		}, oneThousandMilliseconds);
	},
	onDestroy() {
		this.callList.forEach(item => {
			if (item.timer) {
				clearInterval(item.timer);
			}
		});
	},
	userList() {
		router.push({
			uri: 'pages/conferenceManage/conferenceManage'
		})
	}
}