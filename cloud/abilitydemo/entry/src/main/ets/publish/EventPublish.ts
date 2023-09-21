/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2023-2023. All rights reserved.
 */

import commonEvent from '@ohos.commonEventManager';
import hilog from '@ohos.hilog';

const TAG = 'EventPublish';

export class EventPublish {
    static publishEvents(event: string, options) {
        // 发布公共事件
        commonEvent.publish(event, options, (err) => {
            if (err) {
                hilog.error(0x0000, TAG, `[CommonEvent] PublishCallBack err=${JSON.stringify(err)}`);
            } else {
                hilog.info(0x0000, TAG, `[CommonEvent] Publish success, event: ${JSON.stringify(options)}`)
            }
        })
    }
}