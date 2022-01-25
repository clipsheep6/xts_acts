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




  


  

export default {
	props: {
		btnType: {
			default: '',
		},
		iconDisableUrl: {
			default: '',
		},
		iconDefaultUrl: {
			default: ''
		},
		iconEnabledUrl: {
			default: ''
		},
		isDisable: {
			default: false
		},
		isEnable: {
			default: false
		},
		iconText: {
			default: '',
		}
	},
	data: {},
	computed: {
		iconUrl() {
			if (this.isDisable && this.iconDisableUrl) {
				return this.iconDisableUrl;
			}
			return this.isEnable && this.iconDefaultUrl ? this.iconEnabledUrl : this.iconDefaultUrl;
		},
		iconClassName() {
			if (this.isDisable) {
				return 'disable';
			}
			if (this.isEnable) {
				return 'enable';
			}
			return 'default';
		}
	},
	btnClick() {
		this.$emit('btnHandle', this.btnType);
	}
}