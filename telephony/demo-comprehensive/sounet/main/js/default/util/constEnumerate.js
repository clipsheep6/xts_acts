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


//常用的枚举类型
const MAJOR_CARD = 0 //主卡
const MINOR_CARD = 1 //副卡
export const card = {
  MAJOR_CARD,
  MINOR_CARD
}
//sim卡状态
const SIM_STATE_UNKNOWN = 0  //SIM卡状态未知。
const SIM_STATE_NOT_PRESENT = 1 //SIM卡处于不存在，即卡槽中没有插入SIM卡。
const SIM_STATE_LOCKED = 2 //SIM卡处于锁定状态，即SIM卡被个人识别码（PIN）、PIN解锁码（PUK）或网络锁定。
const SIM_STATE_NOT_READY = 3 //SIM卡未就绪，即SIM卡在位但无法正常工作。
const SIM_STATE_READY = 4 //SIM卡已就绪，即SIM卡可工作正常。
const SIM_STATE_LOADED = 5 //SIM卡已加载。

export const simState ={
  SIM_STATE_UNKNOWN,
  SIM_STATE_NOT_PRESENT,
  SIM_STATE_LOCKED,
  SIM_STATE_NOT_READY,
  SIM_STATE_READY,
  SIM_STATE_LOADED
}

//网络类型
const NETWORK_TYPE_UNKNOWN = 0 //未知的网络类型。
const NETWORK_TYPE_GSM = 1 //表示网络类型为GSM。
const NETWORK_TYPE_CDMA = 2 //表示网络类型为CDMA。
const NETWORK_TYPE_WCDMA = 3 //表示网络类型为WCDMA。
const NETWORK_TYPE_TDSCDMA = 4 //表示网络类型为TDSCDMA。
const NETWORK_TYPE_LTE = 5 //表示网络类型为LTE。
const NETWORK_TYPE_NR = 6 //表示网络类型为NR。
export const  networkType ={
  NETWORK_TYPE_UNKNOWN,
  NETWORK_TYPE_GSM,
  NETWORK_TYPE_CDMA,
  NETWORK_TYPE_WCDMA,
  NETWORK_TYPE_TDSCDMA,
  NETWORK_TYPE_LTE,
  NETWORK_TYPE_NR
}

//设备的网络注册状态

const REG_STATE_NO_SERVICE = 0 //表示设备无法使用任何服务的状态。
const REG_STATE_IN_SERVICE = 1 //表示设备可以正常使用服务的状态。
const REG_STATE_EMERGENCY_CALL_ONLY = 2 //表示设备只能使用紧急呼叫服务的状态。
const REG_STATE_POWER_OFF = 3 //表示蜂窝无线电已关闭。

export const regStatus ={
  REG_STATE_NO_SERVICE,
  REG_STATE_IN_SERVICE,
  REG_STATE_EMERGENCY_CALL_ONLY,
  REG_STATE_POWER_OFF
}

//设备的NSA网络注册状态
const NSA_STATE_NOT_SUPPORT = 1 //表示设备在不支持NSA的LTE小区下处于空闲状态或已连接到该小区。
const NSA_STATE_NO_DETECT = 2 //表示设备在支持NSA但不支持NR覆盖检测的LTE小区下空闲。
const NSA_STATE_CONNECTED_DETECT = 3 //表示设备已连接到支持NSA和NR覆盖检测的LTE小区下的LTE网络
const NSA_STATE_IDLE_DETECT = 4 //表示设备在支持NSA和NR覆盖检测的LTE小区下空闲。
const NSA_STATE_DUAL_CONNECTED = 5 //	表示设备接入支持NSA的LTE小区下的LTE+NR网络。
const NSA_STATE_SA_ATTACHED = 6 //表示设备在连接到 5GC 时空闲或连接到 NG-RAN 小区。

export const nsaState ={
  NSA_STATE_NOT_SUPPORT,
  NSA_STATE_NO_DETECT,
  NSA_STATE_CONNECTED_DETECT,
  NSA_STATE_IDLE_DETECT,
  NSA_STATE_DUAL_CONNECTED,
  NSA_STATE_SA_ATTACHED
}
