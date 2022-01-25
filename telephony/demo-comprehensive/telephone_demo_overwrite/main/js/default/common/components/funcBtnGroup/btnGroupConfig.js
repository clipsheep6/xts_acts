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




  


  


const baseUrl = 'assets/picture/'


const firstBtns = [
	{
		type: 'record',
		iconDisableUrl: 'soundRecordingGrey',
		iconDefaultUrl: 'soundRecording',
		iconEnabledUrl: 'soundEnabled',
		isDisable: true,
		isEnable: false,
		iconText: '录音'
	},
	{
		type: 'keep',
		iconDisableUrl: 'waitForGrey',
		iconDefaultUrl: 'waitFor',
		iconEnabledUrl: 'waitForEnabled',
		isDisable: true,
		isEnable: false,
		iconText: '等待'
	},
	{
		type: 'add',
		iconDisableUrl: 'addToGrey',
		iconDefaultUrl: 'addTo',
		iconEnabledUrl: '',
		isDisable: true,
		isEnable: false,
		iconText: '添加通话'
	},
	{
		type: 'video',
		iconDisableUrl: 'videoGrayingGrey',
		iconDefaultUrl: 'videoGraying',
		iconEnabledUrl: 'videoEnabled',
		isDisable: true,
		isEnable: false,
		iconText: '视频通话'
	},
	{
		type: 'mute',
		iconDisableUrl: 'muteGrey',
		iconDefaultUrl: 'mute',
		iconEnabledUrl: 'muteEnabled',
		isDisable: true,
		isEnable: false,
		iconText: '静音'
	},
	{
		type: 'contact',
		iconDisableUrl: 'contactszh',
		iconDefaultUrl: 'contacts',
		iconEnabledUrl: '',
		isDisable: false,
		isEnable: false,
		iconText: '联系人'
	}
];


const secondBtns = [
	{
		type: 'exchange',
		iconDisableUrl: 'exchangeIcon',
		iconDefaultUrl: 'exchangeIcon',
		iconEnabledUrl: 'exchangeIcon',
		isDisable: false,
		isEnable: false,
		iconText: '交换'
	},
	{
		type: 'merge',
		iconDisableUrl: 'addCallGrey',
		iconDefaultUrl: 'addCall',
		iconEnabledUrl: 'addCall',
		isDisable: true,
		isEnable: false,
		iconText: '合并通话'
	}
];

function addIconUrl(arr) {
	const regExp = /^icon.*.*Url$/;
	arr.forEach(item => {
		for(let key in item) {
			if (regExp.test(key)) {
				item[key] = `${baseUrl}${item[key]}.png`;
			}
		}
	});
}

addIconUrl(firstBtns);
addIconUrl(secondBtns);

export const btnGroupList = firstBtns;
export const threePartyList = secondBtns;
