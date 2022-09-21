/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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
import file from '@system.file'
import commonEvent from '@ohos.commonEvent'
import accessibility from '@ohos.accessibility'
import config from '@ohos.accessibility.config'
import router from '@system.router'
const Log :string= "[xtsLog] "

const accessibility_all_bundleName = 'com.example.myapplicationxtsd';
const accessibility_all2_bundleName = 'com.example.accessibilityall2.hmservice';
const accessibility_receiveEvent_budleName = 'com.example.myapplicationevent';

const ThreadSleep = (ms) => {
  return new Promise(resolve => setTimeout(resolve, ms));
}

const publishCallback = (result) => {
  console.info("====>on_target_change_extra publish call back result:" + JSON.stringify(result));
}

const ReceiveEventsFilter_0010 = () => {
  const logTag = Log +" ReceiveEventsFilter_0010 ";
  let sendEventSelect = createSelect('ReceiveEventsFilter_0010', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventSelect);
  });
  let sendEventClick = createClick('ReceiveEventsFilter_0010', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0020 = () => {
  const logTag = Log +" ReceiveEventsFilter_0020 ";
  let sendEventSelect = createSelect('ReceiveEventsFilter_0020', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventSelect);
  });
  let sendEventLongClick = createLongClick('ReceiveEventsFilter_0020', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventLongClick);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0030 = () => {
  const logTag = Log +" ReceiveEventsFilter_0030 ";
  let sendEventClick = createClick('ReceiveEventsFilter_0030', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  let sendEventSelect = createSelect('ReceiveEventsFilter_0030', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventSelect);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0040 = () => {
  const logTag = Log +" ReceiveEventsFilter_0040 ";
  let sendEventClick = createClick('ReceiveEventsFilter_0040', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  let sendEventFocus = createFocus('ReceiveEventsFilter_0040', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventFocus);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0050 = () => {
  const logTag = Log +" ReceiveEventsFilter_0050 ";
  let sendEventClick = createClick('ReceiveEventsFilter_0050', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  let sendEventTextUpdate = createTextUpdate('ReceiveEventsFilter_0050', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventTextUpdate);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0070 = () => {
  const logTag = Log +" ReceiveEventsFilter_0070 ";
  let sendEventClick = createClick('ReceiveEventsFilter_0070', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  let sendEventScroll = createScroll('ReceiveEventsFilter_0070', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventScroll);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0080 = () => {
  const logTag = Log +" ReceiveEventsFilter_0080 ";
  let sendEventClick = createClick('ReceiveEventsFilter_0080', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  let sendEventTextSelectionUpdate = createTextSelectionUpdate('ReceiveEventsFilter_0080', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventTextSelectionUpdate);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0090 = () => {
  const logTag = Log +" ReceiveEventsFilter_0090 ";
  let sendEventClick = createClick('ReceiveEventsFilter_0090', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  let sendEventTextAaccessibilityFocuse = createAaccessibilityFocuse('ReceiveEventsFilter_0090', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventTextAaccessibilityFocuse);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0100 = () => {
  const logTag = Log +" ReceiveEventsFilter_0100 ";
  let sendEventClick = createClick('ReceiveEventsFilter_0100', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  let sendEventFocusClear = createAccessibilityFocusClear('ReceiveEventsFilter_0100', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventFocusClear);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0120 = () => {
  const logTag = Log +" ReceiveEventsFilter_0120 ";
  let sendEventHoverEnter = createHoverEnter('ReceiveEventsFilter_0120', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventHoverEnter);
  });
  let sendEventHoverExit = createHoverExit('ReceiveEventsFilter_0120', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventHoverExit);
  });
  let sendEventClick = createClick('ReceiveEventsFilter_0120', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  let sendEventLongClick = createLongClick('ReceiveEventsFilter_0120', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventLongClick);
  });
  let sendEventSelect = createSelect('ReceiveEventsFilter_0120', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventSelect);
  });
  let sendEventFocus = createFocus('ReceiveEventsFilter_0120', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventFocus);
  });
  let sendEventScroll = createScroll('ReceiveEventsFilter_0120', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventScroll);
  });
  let sendEventTextUpdate = createTextUpdate('ReceiveEventsFilter_0120', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventTextUpdate);
  });
  let sendEventTextSelectionUpdate = createTextSelectionUpdate('ReceiveEventsFilter_0120', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventTextSelectionUpdate);
  });
  let sendEventTextAaccessibilityFocuse = createAaccessibilityFocuse('ReceiveEventsFilter_0120', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventTextAaccessibilityFocuse);
  });
  let sendEventFocusClear = createAccessibilityFocusClear('ReceiveEventsFilter_0120', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventFocusClear);
  });

  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0130 = () => {
  const logTag = Log +" ReceiveEventsFilter_0130 ";
  let sendEventClick = createClick('ReceiveEventsFilter_0130', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0150 = () => {
  const logTag = Log +" ReceiveEventsFilter_0150 ";
  let sendEventClick = createClick('ReceiveEventsFilter_0150', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  let sendEventHoverEnter = createHoverEnter('ReceiveEventsFilter_0150', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventHoverEnter);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0160 = () => {
  const logTag = Log +" ReceiveEventsFilter_0160 ";
  let sendEventClick = createClick('ReceiveEventsFilter_0160', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  let sendEventHoverExit = createHoverExit('ReceiveEventsFilter_0160', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventHoverExit);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0270 = () => {
  const logTag = Log +" ReceiveEventsFilter_0270 ";
  let sendEventSelect = createSelect('ReceiveEventsFilter_0270', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventSelect);
  });
  let sendEventClick = createClick('ReceiveEventsFilter_0270', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0280 = () => {
  const logTag = Log +" ReceiveEventsFilter_0280 ";
  let sendEventScroll1 = createScroll('ReceiveEventsFilter_0280', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventScroll1);
  });
  let sendEventSelect1 = createSelect('ReceiveEventsFilter_0280', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventSelect1);
  });
  let sendEventClick1 = createClick('ReceiveEventsFilter_0280', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick1);
  });
  let sendEventScroll2 = createScroll('ReceiveEventsFilter_0280', accessibility_all2_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventScroll2);
  });
  let sendEventSelect2 = createSelect('ReceiveEventsFilter_0280', accessibility_all2_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventSelect2);
  });
  let sendEventClick2 = createClick('ReceiveEventsFilter_0280', accessibility_all2_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick2);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0290 = () => {
  const logTag = Log +" ReceiveEventsFilter_0290 ";
  let sendEventClick = createClick('ReceiveEventsFilter_0290', accessibility_receiveEvent_budleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0300 = () => {
  const logTag = Log +" ReceiveEventsFilter_0300 ";
  let sendEventClick = createClick('ReceiveEventsFilter_0300', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0610 = () => {
  const logTag = Log +" ReceiveEventsFilter_0610 ";
  let sendEventClick = createClick('ReceiveEventsFilter_0610', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0620 = () => {
  const logTag = Log +" ReceiveEventsFilter_0620 ";
  let sendEventClick = createClick('ReceiveEventsFilter_0620', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0310 = () => {
  const logTag = Log +" ReceiveEventsFilter_0310 ";
  let sendEventSelect = createSelect('ReceiveEventsFilter_0310', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventSelect);
  });
  let sendEventClick = createClick('ReceiveEventsFilter_0310', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0330 = () => {
  const logTag = Log +" ReceiveEventsFilter_0330 ";
  let sendEventSelect = createSelect('ReceiveEventsFilter_0330', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventSelect);
  });
  let sendEventClick = createClick('ReceiveEventsFilter_0330', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0340 = () => {
  const logTag = Log +" ReceiveEventsFilter_0340 ";
  let sendEventSelect = createSelect('ReceiveEventsFilter_0340', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventSelect);
  });
  let sendEventLongClick = createLongClick('ReceiveEventsFilter_0340', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventLongClick);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0350 = () => {
  const logTag = Log +" ReceiveEventsFilter_0350 ";
  let sendEventClick = createClick('ReceiveEventsFilter_0350', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  let sendEventSelect = createSelect('ReceiveEventsFilter_0350', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventSelect);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0360 = () => {
  const logTag = Log +" ReceiveEventsFilter_0360 ";
  let sendEventClick = createClick('ReceiveEventsFilter_0360', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  let sendEventFocus = createFocus('ReceiveEventsFilter_0360', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventFocus);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0370 = () => {
  const logTag = Log +" ReceiveEventsFilter_0370 ";
  let sendEventClick = createClick('ReceiveEventsFilter_0370', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  let sendEventTextUpdate = createTextUpdate('ReceiveEventsFilter_0370', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventTextUpdate);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0390 = () => {
  const logTag = Log +" ReceiveEventsFilter_0390 ";
  let sendEventClick = createClick('ReceiveEventsFilter_0390', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  let sendEventScroll = createScroll('ReceiveEventsFilter_0390', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventScroll);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0400 = () => {
  const logTag = Log +" ReceiveEventsFilter_0400 ";
  let sendEventClick = createClick('ReceiveEventsFilter_0400', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  let sendEventTextSelectionUpdate = createTextSelectionUpdate('ReceiveEventsFilter_0400', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventTextSelectionUpdate);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0410 = () => {
  const logTag = Log +" ReceiveEventsFilter_0410 ";
  let sendEventClick = createClick('ReceiveEventsFilter_0410', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  let sendEventTextAaccessibilityFocuse = createAaccessibilityFocuse('ReceiveEventsFilter_0410', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventTextAaccessibilityFocuse);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0420 = () => {
  const logTag = Log +" ReceiveEventsFilter_0420 ";
  let sendEventClick = createClick('ReceiveEventsFilter_0420', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  let sendEventFocusClear = createAccessibilityFocusClear('ReceiveEventsFilter_0420', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventFocusClear);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};


const ReceiveEventsFilter_0440 = () => {
  const logTag = Log +" ReceiveEventsFilter_0440 ";
  let sendEventHoverEnter = createHoverEnter('ReceiveEventsFilter_0440', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventHoverEnter);
  });
  let sendEventHoverExit = createHoverExit('ReceiveEventsFilter_0440', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventHoverExit);
  });
  let sendEventClick = createClick('ReceiveEventsFilter_0440', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  let sendEventLongClick = createLongClick('ReceiveEventsFilter_0440', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventLongClick);
  });
  let sendEventSelect = createSelect('ReceiveEventsFilter_0440', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventSelect);
  });
  let sendEventFocus = createFocus('ReceiveEventsFilter_0440', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventFocus);
  });
  let sendEventScroll = createScroll('ReceiveEventsFilter_0440', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventScroll);
  });
  let sendEventTextUpdate = createTextUpdate('ReceiveEventsFilter_0440', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventTextUpdate);
  });
  let sendEventTextSelectionUpdate = createTextSelectionUpdate('ReceiveEventsFilter_0440', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventTextSelectionUpdate);
  });
  let sendEventTextAaccessibilityFocuse = createAaccessibilityFocuse('ReceiveEventsFilter_0440', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventTextAaccessibilityFocuse);
  });
  let sendEventFocusClear = createAccessibilityFocusClear('ReceiveEventsFilter_0440', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventFocusClear);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0450 = () => {
  const logTag = Log +" ReceiveEventsFilter_0450 ";
  let sendEventClick = createClick('ReceiveEventsFilter_0450', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0470 = () => {
  const logTag = Log +" ReceiveEventsFilter_0470 ";
  let sendEventClick = createClick('ReceiveEventsFilter_0470', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  let sendEventHoverEnter = createHoverEnter('ReceiveEventsFilter_0470', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventHoverEnter);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0480 = () => {
  const logTag = Log +" ReceiveEventsFilter_0480 ";
  let sendEventClick = createClick('ReceiveEventsFilter_0480', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  let sendEventHoverExit = createHoverExit('ReceiveEventsFilter_0480', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventHoverExit);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0590 = () => {
  const logTag = Log +" ReceiveEventsFilter_0590 ";
  let sendEventSelect = createSelect('ReceiveEventsFilter_0590', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventSelect);
  });
  let sendEventClick = createClick('ReceiveEventsFilter_0590', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0600 = () => {
  const logTag = Log +" ReceiveEventsFilter_0600 ";
  let sendEventScroll1 = createScroll('ReceiveEventsFilter_0600', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventScroll1);
  });
  let sendEventSelect1 = createSelect('ReceiveEventsFilter_0600', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventSelect1);
  });
  let sendEventClick1 = createClick('ReceiveEventsFilter_0600', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick1);
  });
  let sendEventScroll2 = createScroll('ReceiveEventsFilter_0600', accessibility_all2_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventScroll2);
  });
  let sendEventSelect2 = createSelect('ReceiveEventsFilter_0600', accessibility_all2_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventSelect2);
  });
  let sendEventClick2 = createClick('ReceiveEventsFilter_0600', accessibility_all2_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick2);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0630 = () => {
  const logTag = Log +" ReceiveEventsFilter_0630 ";
  let sendEventSelect = createSelect('ReceiveEventsFilter_0630', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventSelect);
  });
  let sendEventClick = createClick('ReceiveEventsFilter_0630', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const sendEventCallback = (logTag, sendEventInfo) => {
  accessibility.sendEvent(sendEventInfo, (err, result) => {
    if (err?.code) {
      console.info(logTag + "sendEvent Callback err=" + JSON.stringify(err));
      return;
    }
    console.info(logTag + "sendEvent Callback res=" + result);
  });
};

function createClick(description, bundleName) {
  let sendEventInfo = new accessibility.EventInfo({});
  sendEventInfo.type = 'click';
  sendEventInfo.bundleName = bundleName;
  sendEventInfo.triggerAction = 'click';
  sendEventInfo.description = description;
  return sendEventInfo;
}

function createSelect(description, bundleName) {
  let sendEventInfo = new accessibility.EventInfo({});
  sendEventInfo.type = 'select';
  sendEventInfo.bundleName = bundleName;
  sendEventInfo.triggerAction = 'select';
  sendEventInfo.description = description;
  return sendEventInfo;
}

function createLongClick(description, bundleName) {
  let sendEventInfo = new accessibility.EventInfo({});
  sendEventInfo.type = 'longClick';
  sendEventInfo.bundleName = bundleName;
  sendEventInfo.triggerAction = 'longClick';
  sendEventInfo.description = description;
  return sendEventInfo;
}

function createFocus(description, bundleName) {
  let sendEventInfo = new accessibility.EventInfo({});
  sendEventInfo.type = 'focus';
  sendEventInfo.bundleName = bundleName;
  sendEventInfo.triggerAction = 'focus';
  sendEventInfo.description = description;
  return sendEventInfo;
}

function createTextUpdate(description, bundleName) {
  let sendEventInfo = new accessibility.EventInfo({});
  sendEventInfo.type = 'textUpdate';
  sendEventInfo.bundleName = bundleName;
  sendEventInfo.triggerAction = 'cut';
  sendEventInfo.description = description;
  return sendEventInfo;
}

function createScroll(description, bundleName) {
  let sendEventInfo = new accessibility.EventInfo({});
  sendEventInfo.type = 'scroll';
  sendEventInfo.bundleName = bundleName;
  sendEventInfo.triggerAction = 'scrollForward';
  sendEventInfo.description = description;
  return sendEventInfo;
}

function createTextSelectionUpdate(description, bundleName) {
  let sendEventInfo = new accessibility.EventInfo({});
  sendEventInfo.type = 'textSelectionUpdate';
  sendEventInfo.bundleName = bundleName;
  sendEventInfo.triggerAction = 'setSelection';
  sendEventInfo.description = description;
  return sendEventInfo;
}

function createAaccessibilityFocuse(description, bundleName) {
  let sendEventInfo = new accessibility.EventInfo({});
  sendEventInfo.type = 'accessibilityFocus';
  sendEventInfo.bundleName = bundleName;
  sendEventInfo.triggerAction = 'accessibilityFocus';
  sendEventInfo.description = description;
  return sendEventInfo;
}

function createAccessibilityFocusClear(description, bundleName) {
  let sendEventInfo = new accessibility.EventInfo({});
  sendEventInfo.type = 'accessibilityFocusClear';
  sendEventInfo.bundleName = bundleName;
  sendEventInfo.triggerAction = 'clearAccessibilityFocus';
  sendEventInfo.description = description;
  return sendEventInfo;
}

function createHoverEnter(description, bundleName) {
  let sendEventInfo = new accessibility.EventInfo({});
  sendEventInfo.type = 'hoverEnter';
  sendEventInfo.bundleName = bundleName;
  sendEventInfo.triggerAction = 'focus';
  sendEventInfo.description = description;
  return sendEventInfo;
}

function createHoverExit(description, bundleName) {
  let sendEventInfo = new accessibility.EventInfo({});
  sendEventInfo.type = 'hoverExit';
  sendEventInfo.bundleName = bundleName;
  sendEventInfo.triggerAction = 'focus';
  sendEventInfo.description = description;
  return sendEventInfo;
}

const executeAbility = (data) => {
  switch (data) {
    case "ReceiveEventsFilter_0290":
      ReceiveEventsFilter_0290();
      break;
    case "ReceiveEventsFilter_0300":
      ReceiveEventsFilter_0300();
      break;
    case "ReceiveEventsFilter_0610":
      ReceiveEventsFilter_0610();
      break;
    case "ReceiveEventsFilter_0620":
      ReceiveEventsFilter_0620();
      break;
    default:
      break;
  }
}

@Entry
@Component
struct Index {
  @State message: string = 'Accessibility XTS'
  private subScriber = undefined;

  onPageShow() {
    console.info('TargetApp onPageShow start');
  }
  /**
   *
   */
  aboutToAppear() {
    console.info('TargetApp aboutToAppear');
    commonEvent.createSubscriber({ events: ['on_target_change']}).then((subScriber) => {
      console.info('TargetApp createSubscriber on_target_change');
      this.subScriber = subScriber;
      commonEvent.subscribe(subScriber, (err, data) => {
        console.info('TargetApp on_target_change subscribe callback: ' + JSON.stringify(data));
        if (data.data) {
          executeAbility(data.data);
        }
      });
    });
  }

  aboutToDisappear() {
    console.info('TargetApp aboutToDisappear');
    commonEvent.unsubscribe(this.subScriber);
    this.subScriber = undefined;
  }

  build() {
    Row() {
      Column() {
        Button('Test4')
          .width(100)
          .type(ButtonType.Capsule)
          .stateEffect(false)
          .fontColor(Color.Yellow)
          .fontSize(15)
          .fontWeight(FontWeight.Bold)
          .fontStyle(FontStyle.Italic)
          .enabled(true)
          .focusable(true)
          .visibility(Visibility.Visible)
          .bindPopup(true, {message: 'popUp'})
          .margin(25)
        Button('Test5')
          .width(400)
          .margin(25)
        Flex({ direction: FlexDirection.Row, alignItems: ItemAlign.Center }) {
          Button('Test6')
            .width(100)
            .margin(25)
          Button('Test7')
            .width(100)
            .margin(25)
          Button('Test8')
            .width(100)
            .margin(25)
        }
        Button('Test9')
          .width(400)
          .margin(25)
        Text('Hello World')
          .fontColor(Color.Blue)
          .fontStyle(FontStyle.Normal)
          .fontSize(20)
          .fontWeight(FontWeight.Bold)
          .textAlign(TextAlign.Center)
          .lineHeight(30)
          .textOverflow({overflow: TextOverflow.Ellipsis})
          .maxLines(30)
          .decoration({ type: TextDecorationType.Underline, color: Color.Red })
          .letterSpacing(10)
          .textCase(TextCase.UpperCase)
          .baselineOffset(20)

        Select([{value:'select1'},{value: 'select2'},{value: 'select3'},{value: 'select4'}])
          .margin(5)
          .selected(2)
          .value('select3')
          .font({size: 30, weight: FontWeight.Lighter})
          .fontColor(Color.Blue)
          .selectedOptionBgColor(Color.Gray)
          .selectedOptionFont({size: 30, weight: FontWeight.Lighter})
          .selectedOptionFontColor(Color.White)
          .optionBgColor(Color.Yellow)
          .optionFontColor(Color.Brown)

        Checkbox({name: 'checkbox1'})
          .select(true)
          .selectedColor(Color.Green)
          .margin(5)

        TextInput({text: 'input1'})
          .type(InputType.Password)
          .width(200)
          .margin(5)

        Slider({value:50, min: 10, max:100})
          .focusable(true)
          .showSteps(true)
          .width(300)
          .margin(5)
      }
      .width('100%')
    }
    .height('100%')
  }
}