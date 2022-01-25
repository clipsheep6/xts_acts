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


import {CALL_STATE} from '../../utils/state.js'
import prompt from '@system.prompt'
import {answer,reject,dial,HasCall,getCallState} from '../../utils/api.js'
export default {
  data: {
    title: "",
    callState:1,//-1 未知状态，0闲置状态 1响铃状态 2滴机状态z
    hasCall:false,//false 无通话 true有通话
    phoneNum:'' //拨打出去的电话号码
  },
  onShow(){
    this.getCallState()
    this.getHasCall()
  },
  setProcess(num){
    this.phoneNum += num
  },
  deleTel(){
    this.phoneNum = this.phoneNum.substr(0,this.phoneNum.length-1)
  },
//  获取通话状态
  getCallState(){
    getCallState().then((res)=>{
      switch(res){
        case CALL_STATE.CALL_STATE_UNKNOWN:
        this.callState = -1
        break;
        case CALL_STATE.CALL_STATE_IDLE:
        this.callState = 0
        break;
        case CALL_STATE.CALL_STATE_RINGING:
        this.callState = 1
        break;
        case CALL_STATE.CALL_STATE_OFFHOOK:
        this.callState = 2
        break;
        default:
          this.callState = -1
      }
    }).catch((err)=>{
       console.log("getCallState"+err)
    })
  },
//  获取是否有通话
  getHasCall(){
    HasCall().then((res)=>{
      this.hasCall = res
      if(res){
        prompt.showToast({
          message: '当前有通话'
        })
      }else{
        prompt.showToast({
          message: '当前无通话'
        })
      }
    }).catch((err)=>{
      prompt.showToast({
        message: '当前无通话'
      })
      this.hasCall = false
      console.log("hasCall："+err)
    })
  },
//  接听电话
  answerTel(){
    let callId = this.$app.$def.golbalData.callId;
    answer(callId).then((res)=>{
      console.log("answer res"+res)
      if(!res){
        prompt.showToast({
          message: '接听电话成功'
        })
      }else{
        prompt.showToast({
          message: '接听电话失败'
        })
      }
    }).catch((err)=>{
      console.log("answer: err"+err)
       prompt.showToast({
          message: '接听电话失败'
        })
    })
  },
//  拒接电话
  rejectTel(){
    let callId = this.$app.$def.golbalData.callId;
    reject(callId).then((res)=>{
      console.log("reject:res"+res)
      if(!res){
        prompt.showToast({
          message: '拒接电话成功'
        })
      }else{
        prompt.showToast({
          message: '拒接电话失败'
        })
      }

    }).catch((err)=>{
      console.log("reject:err"+err)
      prompt.showToast({
        message: '拒接电话失败'
      })
    })
  },
  //拨打电话
  dialTel(){
    const phone = this.phoneNum
    if(!phone){
      prompt.showToast({
        message: '请输入电话号码'
      })
      return
    }
    dial(phone).then((res)=>{
      if(res){
        prompt.showToast({
          message: '拨打电话成功'
        })
      }else{
        prompt.showToast({
          message: '拨打电话失败'
        })
      }
    }).catch((err)=>{
      console.log("dial err message"+ err)
      prompt.showToast({
        message: '拨打电话失败'
      })
    })
  }
}
