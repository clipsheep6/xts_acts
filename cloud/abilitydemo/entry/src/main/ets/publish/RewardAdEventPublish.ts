/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2023-2023. All rights reserved.
 */

import { EventPublish } from './EventPublish';

export class RewardAdEventPublish {
  private static instance: RewardAdEventPublish;

  static getInstance(): RewardAdEventPublish {
    if (!this.instance) {
      this.instance = new RewardAdEventPublish();
    }
    return this.instance;
  }

  publishEvents(status: string, data?) {
    let options = {
      code: 1, // 公共事件的初始代码
      data: "initial data", // 公共事件的初始数据
      parameters: {
        "reward_ad_status": status,
        "reward_ad_data": data
      },
    }
    EventPublish.publishEvents("com.huawei.hms.pps.action.PPS_REWARD_STATUS_CHANGED", options);
  }
}