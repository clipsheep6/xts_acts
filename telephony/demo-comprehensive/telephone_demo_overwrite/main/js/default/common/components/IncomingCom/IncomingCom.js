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




  


  

import { acceptCall, rejectCall } from '../../../model/callServiceProxy.js';
const baseUrl = 'assets/picture/';
const msgIconUrl = `${baseUrl}shortMessage.png`;
const remindUrl = `${baseUrl}remind.png`;

export default {
	props: {
		callData: {
			default: {}
		},
	},
	data: {
		btnList: [],
		msgList: [],
		remindList: [],
	},
	onInit() {
		this.btnList = [
			{
				type: 'msg',
				iconText: '短信',
				iconDefaultUrl: msgIconUrl,
			},
			{
				type: 'remind',
				iconText: '提醒',
				iconDefaultUrl: remindUrl,
			},
		];

		this.msgList = [
			{ id: 1, msg: '稍后给您回电话' },
			{ id: 2, msg: '抱歉，现在不方便接电话。' },
			{ id: 3, msg: '正在开会，稍后联系。' },
			{ id: 4, msg: '稍等，马上到。'},
			{ id: 5, msg: '自定义短信'}
		];

		this.remindList = [
			{ id: 1, msg: '30分钟后' },
			{ id: 2, msg: '1小时后' },
			{ id: 3, msg: '2小时后'},
		];
	},
	cancelHandle(type) {
		if (type === 'msg') {
			this.$element('msgDialog').close();
		} else if (type === 'remind') {
			this.$element('remindDialog').close();
		}
	},
	btnClick(type) {
		if (type === 'msg') {
			this.$element('msgDialog').show();
		} else if (type === 'remind') {
			this.$element('remindDialog').show();
		}
	},
	onAnswer(){
		console.log('接听');
		console.log(`状态改变。。。onAnswer 点击接听 : ${Date.now()}`);
		this.$emit('showKeyboard', false);
		acceptCall(this.callData.callId);
	},
	async onReject() {
		console.log('拒接');
		console.log(`状态改变。。。onReject 点击拒接 : ${Date.now()}`);
		rejectCall(this.callData.callId);
	},
	// 拒接并发送短信
	msgItemClick(msg) {
		console.log(msg)
		rejectCall(this.callData.callId, true, msg);
		this.cancelHandle('msg');
	},
	// 提醒
  remindItemClick(remind) {
		this.cancelHandle('remind');
	}
}