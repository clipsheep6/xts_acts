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

import prompt from '@system.prompt';
import data from '@ohos.telephony.data';
import{stateCommon} from '../../common/utils/common.js'
export default {
  data: {
    calluarModel:false,
    stateNum: -1 //-1 连接状态未知 0断开连接  1正在连接 2已连接 3已暂停
  },
  onShow(){
    this.getSatus()
  },
  getSatus(){
    data.getCellularDataState((err,data) => {
      if(err){
        console.log("data.getCellularDataState = "+ err);
        return;
      }
      console.log("data.getCellularDataState success getCellularDataState = "+ data );
      this.stateNum = data
      if(data){
        prompt.showToast({
          message: "获取状态成功"
        });
      }
      this.statusenumerate(data)
    });
  },
//  开关的切换
  switchChange(e){
    console.log(e.checked);
    if(e.checked){
      this.open()
    }else{
      this.close()
    }
  },
//  状态的枚举值
  statusenumerate(num){
    switch(num){
      case stateCommon.DATA_STATE_UNKNOWN:
        this.calluarModel = false
        break;
      case stateCommon.DATA_STATE_DISCONNECTED:
        this.calluarModel = false
        break;
      case stateCommon.DATA_STATE_CONNECTING:
        this.calluarModel = false
        break;
      case stateCommon.DATA_STATE_CONNECTED:
        this.calluarModel = false
        break;
      case stateCommon.DATA_STATE_SUSPENDED:
        this.calluarModel = true
        break;
      default:
        this.calluarModel = false

    }

  },
//  打开蜂窝数据
  open(){
    data.enableCellularData((err,data) => {
      if(err){
        console.log("data.enableCellularData = "+ err);
        return;
      }
      console.log("data.enableCellularData success enableCellularData = "+ data );
      if(!data){
        prompt.showToast({
          message: "打开成功"
        });
      }else{
        prompt.showToast({
          message: "打开失败"
        });
      }
    });
  },
  //  关闭蜂窝数据
  close(){
    data.disableCellularData((err,data) => {
      if(err){
        console.log("data.disableCellularData = "+ err);
        return;
      }
      console.log("data.disableCellularData success disableCellularData = "+ data );
      if(!data){
        prompt.showToast({
          message: "关闭成功"
        });
      }else{
        prompt.showToast({
          message: "关闭失败"
        });
      }
    });
  }
}
