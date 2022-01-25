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
    lists: [
      {icon: '/common/images/add_msg.png', title: '添加短信', uri: 'pages/add/add'},
      {icon: '/common/images/get_msg.png', title: '获取sim卡中的短信', uri: 'pages/simMsgList/simMsgList'},
      {icon: '/common/images/send_msg.png', title: '发送短信', uri: 'pages/send/index'},
      {icon: '/common/images/list_msg.png', title: '短信列表', uri: 'pages/msgList/msgList'},
    ]
  },
  gotoUrl(uri) {
    router.push({uri});
  }
}
