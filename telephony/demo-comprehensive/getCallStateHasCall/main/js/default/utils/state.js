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


export const CALL_STATE_UNKNOWN = -1 //通话状态未知
export const CALL_STATE_IDLE = 0 //闲置状态
export const CALL_STATE_RINGING = 1 //响铃状态
export const CALL_STATE_OFFHOOK = 2 //滴机状态
export const ON_TATUS_ACTIVE = 0
export const ON_CALL_STATUS_HOLDIN = 1
export const ON_CALL_STATUS_DIALING = 2
export const ON_CALL_STATUS_ALERTING = 3
export const ON_CALL_STATUS_INCOMING = 4
export const ON_CALL_STATUS_WAITING = 5
export const ON_CALL_STATUS_DISCONNECTED = 6
export const ON_CALL_STATUS_DISCONNECTING = 7
export const ON_CALL_STATUS_IDLE = 8
export const CALL_STATE ={
  CALL_STATE_UNKNOWN,
  CALL_STATE_IDLE,
  CALL_STATE_RINGING,
  CALL_STATE_OFFHOOK,
  ON_TATUS_ACTIVE,
  ON_CALL_STATUS_HOLDIN,
  ON_CALL_STATUS_DIALING,
  ON_CALL_STATUS_ALERTING,
  ON_CALL_STATUS_INCOMING,
  ON_CALL_STATUS_WAITING,
  ON_CALL_STATUS_DISCONNECTED,
  ON_CALL_STATUS_DISCONNECTING,
  ON_CALL_STATUS_IDLE
}