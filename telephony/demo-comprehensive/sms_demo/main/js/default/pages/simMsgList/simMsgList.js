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

import sms from '@ohos.telephony.sms'
import prompt from '@system.prompt'
import router from '@system.router';
import {simObj,dealStatus} from '../../util/soltId.js'
export default {
  data: {
    showLoading: true,
    lists:[]
  },
  onShow(){
    this.getAllMsg();
  },
  getAllMsg(){
    console.log('getAllSimMessages begin');
    this.showLoading = true;
    try {
      sms.getAllSimMessages(simObj.slotIdMajor).then((res)=>{
        this.showLoading = false;
        console.log("getAllSimMessages res"+JSON.stringify(res))
        if(Object.prototype.toString.call(res) == "[object Array]"){
          this.lists = res;
        }else{
          prompt.showToast({
            message: '数据类型错误'
          })
        }
      }).catch((err)=>{
        this.showLoading = false;
        console.log("getAllSimMessages err"+err)
      })
    } catch (ex) {
      this.showLoading = false;
      console.log(`getAllMsgInterface ex: ${ex}`);
    }
  },
  // 处理即将修改的状态
  dealStatus(num){
    switch(num){
      case 1:
      return 3
      break;
      case 3:
      return 1
      break;
      case 5:
      return 7
      break;
      case 7:
      return 5
      break;
      default:
        return 0;
    }
  },
  interceptionPdu(parameter) {
    //返回一个对象短信中心服务地址和原始pdu
    let smsc =  Number(parameter[0])
    let smscLen = smsc +1
    let pdu =  parameter.slice(smscLen,parameter.length)
    let strPdu = Array.from(pdu, function(byte) {
      return ('0' + (byte & 0xFF).toString(16)).slice(-2);
    }).join('')
    //strPdu 就是转化出来的pdu
    // 转化出来的短信中心服务地址
    let smscArry =  parameter.slice(0, smscLen);
    let smscCenter = Array.from(smscArry, function(byte) {
      return ('0' + (byte & 0xFF).toString(16)).slice(-2);
    }).join('')
    let obj={
      pdu:strPdu,
      smsc:smscCenter
    }
    return obj
  },
  // 修改当前信息的状态
  modifyItem(ins,item,val){
    let status = val.simMessageStatus
    let newStatus = this.dealStatus(status)
    let pduArr = item.pdu
    let currentIndex = val.indexOnSim
    let currentData = JSON.stringify(val)
    console.log("currentData"+currentData)
    console.log("currentIndex"+currentIndex)
    if(!Array.isArray(pduArr)){
      prompt.showToast({
        message: '数据格式错误'
      })
      return
    }
    let chapterPdu =  this.interceptionPdu(pduArr).pdu
    let smsc = this.interceptionPdu(pduArr).smsc
    let options ={
      slotId:simObj.slotIdMajor,
      msgIndex:currentIndex,
      pdu:chapterPdu,
      newStatus:newStatus,
      smsc:smsc,
    }
    this.modifyMsg(options)
  },
  // 修改信息
  modifyMsg(options){
    console.log("options: "+JSON.stringify(options));
    this.showLoading = true;
    try{
      sms.updateSimMessage(options).then((res)=>{
        this.showLoading = false;
        console.log('updateSimMessageInterface res:'+res);
        if(!res){
          console.log('修改状态成功：'+res);
          prompt.showToast({
            message: '修改状态成功'
          })
          this.getAllMsg()
        }else{
          prompt.showToast({
            message: '修改状态失败'
          })
        }
      }).catch((err)=>{
        this.showLoading = false;
        console.log("updateSimMessage err"+ err)
        prompt.showToast({
          message: '修改状态失败'
        })
      })
    } catch (ex) {
      this.showLoading = false;
      console.log('ex111:'+ex);
    }
  },
  // 删除当前这条信息
  deleteItem(ind,item){
    const index = ind
    prompt.showDialog({
      title: '温馨提示',
      message: '你确定要删除这条数据吗？',
      buttons: [
        {text:'取消', color: '#666666'},
        {text:'确定', color: '#169BD5'},
      ],
      success: (data) => {
        if (data.index === 0) {
          console.log('取消删除');
        } else {
          console.log('确定删除');
          this.deleteMsg(index);
        }
      },
    })
  },
  deleteMsg(currentIndex){
    console.log("simObj.slotIdMajor: "+ simObj.slotIdMajor)
    console.log("currentIndex: "+currentIndex)
    this.showLoading = true;
    try {
      sms.delSimMessage(simObj.slotIdMajor, currentIndex).then((res)=>{
        this.showLoading = false;
        console.log('delSimMessageInterface333 ');
        console.log('删除成功 ' + res + Date.now());
        prompt.showToast({
          message: '删除成功'
        })
        this.showLoading = false;
        this.getAllMsg()
      }).catch((err)=>{
        this.showLoading = false;
        console.log("delSimMessage err:"+err)
        prompt.showToast({
          message: '删除失败'
        })
      })
    } catch (ex) {
      this.showLoading = false;
      console.log('delSimMessage ex: ' + ex);
    }
  }
}
