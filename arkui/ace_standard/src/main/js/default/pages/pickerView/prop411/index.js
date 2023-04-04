/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
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

import prompt from '@system.prompt';

export default {
    data:{
        multitext:[["a", "b", "c"], ["e", "f", "g"], ["h", "i"], ["k", "l", "m"]],
        rangetext:['15', "20", "25"],
        multitextselect:[1,2,0],
        pickerViewDate: null,
        pickerViewDatetime: null,
        pickerViewMultiText: null
    },

    onShow(){
        this.getCommonPropValues();
        globalThis.value = {
            pickerViewDate: this.pickerViewDate,
            pickerViewDatetime: this.pickerViewDatetime,
            pickerViewMultiText: this.pickerViewMultiText
        }
    },

    getCommonPropValues(){
        this.pickerViewDate = this.$element("pickerViewDate").getInspector()
        this.pickerViewDatetime = this.$element("pickerViewDatetime").getInspector()
        this.pickerViewMultiText = this.$element("pickerViewMultiText").getInspector()
    }
}
