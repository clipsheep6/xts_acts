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


import CallManager from './model/CallManager.js'
import { defaultCallData } from './common/constant/callStateConst.js'

export default {
  callData: { ...defaultCallData },
  callList: [],
  callTimeList: [],
  onCreate() {
    this.callManger = new CallManager(this.callData, this.callList);
  },
  onDestroy() {
    this.callTimeList.forEach(item => item.timer && clearInterval(item.timer));
  }
};
