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




  

// import { startDtmf, stopDtmf, sendDtmf } from '../../../model/callServiceProxy.js';

export default {
	props:{
		callData: {
			default: {}
		}
	},
	data: {
		dataList: [
				{ value: 1, sign: 'o_o'},
				{ value: 2, sign: 'ABC'},
				{ value: 3, sign: 'DEF'},
				{ value: 4, sign: 'GHI'},
				{ value: 5, sign: 'JKL'},
				{ value: 6, sign: 'MNO'},
				{ value: 7, sign: 'PQRS'},
				{ value: 8, sign: 'TUV'},
				{ value: 9, sign: 'WXYZ'},
				{ value: '*', sign: '(P)'},
				{ value: 0, sign: '+'},
				{ value: '#', sign: '(W)'}
		],
	},
	btnClick(obj) {
		this.$emit('cellHandle', obj.value);
	}
}