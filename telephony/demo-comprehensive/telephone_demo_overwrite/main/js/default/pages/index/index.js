/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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


import callStateObj, { CALL_STATUS_IDLE, getCallStateText } from '../../common/constant/callStateConst.js';
import call from "@ohos.telephony.call";

export default {
  data: {
    callStateObj,
    callData: {},
    callList: [],
    isShowKeyboard: false,
    isShowDailKeyboard: true, // 显示拨号盘
    inputValue: '',
    consoleTxt: '',
    stateTxt: 'callIdle',
    dialNum: '',
    callStateTxt: {
      0: '通话中', 1: '通话保持', 2: '拨号开始', 3: '正在呼出', 4: '来电', 5: '第三方来电', 6: '挂断完成', 7: '正在挂断', 8: '空闲'
    }
  },
  computed: {
    callState() {
      const { callState } = this.callData;
      console.log('callState change computed' + new Date().getTime());
      this.stateTxt = getCallStateText(callState);
      console.log(`this.callList:${this.callList.length}-- ${JSON.stringify(this.callList)}`);
      console.log(`this.$app.callList: ${this.$app.callList.length}--${JSON.stringify(this.$app.callList)}`);
      return callState !== undefined ? callState : CALL_STATUS_IDLE;
    },
    telList() {
      console.log('telList chagne: ' + this.$app.callList.length);
      return this.$app.callList;
    }
  },
  onInit() {
    this.callData = this.$app.callData;
    this.callList = this.$app.callList;
    this.$app.callManger.addCallBack(this.onCallStateChange.bind(this));
  },
  onReady() {
    this.onCallStateChange(this.callData.callState, CALL_STATUS_IDLE);
  },
  onCallStateChange(newVal, oldVal) {
    console.log(`状态改变。。。 ${newVal}---${this.callStateTxt[newVal]}: ${Date.now()}`);

    console.log(`this.callData ${JSON.stringify(this.callData)}`);
    console.log(`状态改变 this.callList:${this.callList.length}-- ${JSON.stringify(this.callList)}`);
    console.log(`状态改变 this.$app.callList: ${this.$app.callList.length}--${JSON.stringify(this.$app.callList)}`);

    this.$child('contactCard').onCallStateChange(newVal, oldVal);
    let timer = setTimeout(_ => {
      const funcBtnGroupDom = this.$child('funcBtnGroup');
      if (funcBtnGroupDom && typeof funcBtnGroupDom.onCallStateChange === 'function') {
        funcBtnGroupDom.onCallStateChange(newVal, oldVal);
      }
      clearTimeout(timer);
    }, 0);
  },
  showKeyboard({ detail: bool }) {
		this.isShowKeyboard = bool;
	},
	cellClick({ detail: val }) {
		this.inputValue += val;
    this.dialNum += val;
    console.log(this.inputValue);
	},
  clearPhone() {
    this.inputValue = this.inputValue.substr(0, this.inputValue.length - 1);
  },
  cancel() {
    this.$element('msgDialog').close();
  },
  showdail({ detail: val }) {
    console.log(val)
    this.isShowDailKeyboard = val;
  },
  cellClickDial({ detail: val }) {
    console.log('cellClickDial');
    this.dialNum += val;
    console.log(this.dialNum);
  },
  setImsMode(type){
    console.log(`type value: ${type}`);
    const typeValue = type === 3 ? 'IMS域': 'CS域';
    call.setCallPreferenceMode(0, type, (err,value) => {
      if(err){
        console.log("setCallPreferenceMode err message = " + err.message);
        prompt.showToast({
          message: `设置${typeValue}通话失败 ${err.message}`
        })
      } else {
        console.log(`setCallPreferenceMode value: ${value}`);
        if(!value){
          prompt.showToast({
            message: `设置${typeValue}通话成功`
          })
        }else{
          prompt.showToast({
            message: `设置${typeValue}通话失败`
          })
        }
      }
    })
  }
}
