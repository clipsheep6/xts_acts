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


import prompt from '@system.prompt'
import sim from '@ohos.telephony.sim';
import radio from '@ohos.telephony.radio';
import call from '@ohos.telephony.call';
import {MAJOR_CARD} from '../../utils/commonState.js'
export default {
  data: {
    dialTelphone:'',
    flightMode:true,
    cardState:0
  },
  onShow(){
    this.getSimState()
    this.getAirplaneMode()
  },
//  按钮状态
  setNum(num){
    this.dialTelphone += num
  },
  deleteNum(){
    this.dialTelphone = this.dialTelphone.substr(0,this.dialTelphone.length-1)
  },
//  获取sim卡状态
  getSimState(){
    const simState = sim.getSimState(MAJOR_CARD);
    simState.then((value) =>{
      this.cardState = value
      console.log(`getSimState success: ${value}`);
    }).catch((error) => {
      console.error(`getSimState failed: ${error.message}`);
    });
  },
//  获取当前是否是飞行模式
  getAirplaneMode(){
    const radioState = radio.isRadioOn()
    radioState.then((data) => {
      console.log("data.isRadioOn = " + data)
      this.flightMode = data
    }).catch((error) => {
      console.log("error.data.isRadioOn = " + error)
    });
  },
//  关闭飞行模式
  setRadioOpen(){
    const radioTurnOn = radio.turnOnRadio()
    radioTurnOn.then((data) => {
      console.log("data.turnOnRadio success ")
      prompt.showToast({
        message: '关闭飞行模式成功'
      })
      this.getAirplaneMode()
    }).catch((error) => {
      prompt.showToast({
        message: '关闭飞行模式失败'
      })
      console.log("error.data.turnOnRadio = " + error)
    });
  },
//  打开飞行模式
  setRadioClose(){
    const radioTurnOff = radio.turnOffRadio()
    radioTurnOff.then((data) => {
      console.log("data.turnOnRadio success")
      this.getAirplaneMode()
      prompt.showToast({
        message: '开启飞行模式成功'
      })
    }).catch((error) => {
      prompt.showToast({
        message: '开启飞行模式失败'
      })
      console.log("error.data.turnOnRadio = " + error)
    });
  },
//  拨打电话
  dialPhone(){
    console.log("dialPhone-first")
    if(this.cardState != 4){
      prompt.showDialog({
        title: '异常',
        message: '卡状态异常,请检查卡',
        buttons: [],
      });
      return false
    }
    if(!this.flightMode){
      prompt.showToast({
        message: "请关闭掉飞行模式再来拨打电话"
      });
     return false
    }
    console.log("dialPhone-second")
    if(!this.dialTelphone){
      prompt.showToast({
        message: "请输入电话号码"
      });
      return false
    }
    console.log("dialTelphone"+this.dialTelphone)
    var dialPromise = call.dial(this.dialTelphone);
    dialPromise.then((dialResult) => {
      console.log("dialPromise dialResult = " + dialResult);
      if(dialResult){
        prompt.showToast({
          message: "拨打电话成功"
        });
      }else{
        prompt.showToast({
          message: "拨打电话失败"
        });
      }
    }).catch((err) => {
      console.log("dial error cause : " + err.message);
    });
  },
  //切换飞行模式按钮
  switchChange(e){
    if(e.checked){
      prompt.showToast({
        message: "打开开关"
      });
      this.setRadioClose()
    }else{
      prompt.showToast({
        message: "关闭开关"
      });
      this.setRadioOpen()
    }
  }
}
