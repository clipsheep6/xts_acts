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


// sim卡插槽id
export const slotIdMajor = 0
export const slotIdMinor = 1

export const simObj= {
  slotIdMajor,
  slotIdMinor
}

export const simStateObj = {
  0: 'SIM卡状态未知',
  1: 'SIM卡处于不存在，即卡槽中没有插入SIM卡',
  2: 'SIM卡处于锁定状态，即SIM卡被个人识别码（PIN）、PIN解锁码（PUK）或网络锁定',
  3: 'SIM卡未就绪，即SIM卡在位但无法正常工作',
  4: 'SIM卡已就绪，即SIM卡可工作正常',
  5: 'SIM卡已加载'
}