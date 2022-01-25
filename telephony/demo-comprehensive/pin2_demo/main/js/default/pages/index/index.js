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

import router from '@system.router';
export default {
  data: {
    lists: [],
  },
  onShow() {
    this.lists = [
      {icon: '/common/images/unlock.png', title: '解锁Pin2', action: 'goPin2Unlock', goUri: true},
      {icon: '/common/images/modify.png', title: '修改Pin2', action: 'goPin2Modify', goUri: true},
      {icon: '/common/images/lock1.png', title: '解锁Puk2', action: 'goPuk2Unlock', goUri: true}
    ]
  },
  handleAction(action) {
    this[action]();
  },
  goPin2Unlock(){
    router.push ({
      uri:'pages/pin2Unlock/index', // 指定要跳转的页面
    })
  },
  goPin2Modify(){
    router.push ({
      uri:'pages/pin2Modify/index', // 指定要跳转的页面
    })
  },
  goPuk2Unlock(){
    router.push ({
      uri:'pages/puk2Unlock/index', // 指定要跳转的页面
    })
  }
}
