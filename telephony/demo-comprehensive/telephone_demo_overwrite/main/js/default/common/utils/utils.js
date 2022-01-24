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




  


export function formatPhoneNum(phoneNumber) {
	if (/^1\d{10}$/.test(phoneNumber)) {
		const str01 = phoneNumber.substring(0, 3);
		const str02 = phoneNumber.substring(3, 7);
		const str03 = phoneNumber.substring(7, 11);
		return `${str01} ${str02} ${str03}`;
	}
	return phoneNumber
}

const nine = 9;
const sixtySeconds = 60;
export function formatTime(count) {
	const second = count % sixtySeconds;
	const minute = Math.floor(count / sixtySeconds);
	const secondStr = second <= nine ? '0' + second : second;
	const minuteStr = minute <= nine ? '0' + minute : minute;
	return `${minuteStr}:${secondStr}`;
}