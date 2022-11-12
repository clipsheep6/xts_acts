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
const Log :string= "[xtsLog] "

const accessibility_registerState_Name = 'com.example.myapplicationxtsd/ServiceExtAbilityRegister';
const accessibility_register_Name = 'com.example.myapplicationxtsd/ServiceGenericAbility';
const onAccessibilityStateChange = 'accessibilityStateChange';
const onEnabledAccessibilityExtensionListChange = 'enabledAccessibilityExtensionListChange';
const onTouchGuideStateChange = 'touchGuideStateChange';

const ThreadSleep = (ms) => {
  return new Promise(resolve => setTimeout(resolve, ms));
}

const publishCallback = (result) => {
  console.info("====>on_target_change_extra publish call back result:" + JSON.stringify(result));
}

const setExtentionEnabled = (logTag, name) => {
  var capability = [];
  switch (name) {
    case accessibility_registerState_Name:
      capability = ['retrieve', 'keyEventObserver', 'gesture'];
      break;
    case accessibility_register_Name:
      capability = ['retrieve', 'keyEventObserver', 'gesture', 'touchGuide'];
      break;
    default:
      break;
  }
  config.enableAbility(name, capability).then(() => {
    console.info(logTag + " enableAbility success");
    var commonEventPublishData = {
      data: "on_target_change_extra_success"
    }
    commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
  }).catch((error) => {
    console.info(logTag + 'enableAbility failed. Cause: ' + JSON.stringify(error))
  })
}

const setExtentionEnabledRegisterState = (logTag, name) => {
  var capability = [];
  switch (name) {
    case accessibility_registerState_Name:
    case accessibility_register_Name:
      capability = ['retrieve', 'keyEventObserver', 'gesture'];
      break;
    default:
      break;
  }
  config.enableAbility(name, capability).then(() => {
    console.info(logTag + " enableAbility success");
  }).catch((error) => {
    console.info(logTag + 'enableAbility failed. Cause: ' + JSON.stringify(error))
  })
}

const setExtentionEnabledRegisterStateTouch = (logTag, name) => {
  var capability = [];
  switch (name) {
    case accessibility_registerState_Name:
    case accessibility_register_Name:
      capability = ['retrieve', 'keyEventObserver', 'gesture', 'touchGuide'];
      break;
    default:
      break;
  }
  config.enableAbility(name, capability).then(() => {
    console.info(logTag + " enableAbility success");
  }).catch((error) => {
    console.info(logTag + 'enableAbility failed. Cause: ' + JSON.stringify(error))
  })
}

const setExtentionDisabled = (logTag, bundleNameArr) => {
  for (var i = 0; i < bundleNameArr.length; i++) {
    config.disableAbility(bundleNameArr[i]).then(() => {
        console.info(logTag + "disableAbility success");
    }).catch((err) => {
        console.error(logTag + "disableAbility err=" + JSON.stringify(err));
    });
  }
}

const RegisterStateOnOff_Init = (callback) => {
  const logTag = Log +"RegisterStateOnOff_Init ";
  setExtentionDisabled(logTag, [accessibility_registerState_Name]);
  ThreadSleep(3000).then(() => {
    accessibility.off(onAccessibilityStateChange);
    accessibility.off(onTouchGuideStateChange);
    config.off(onEnabledAccessibilityExtensionListChange);
    callback();
  })
};

const RegisterStateOnOff_0010 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log + "RegisterStateOnOff_0010 ";
    accessibility.on(onAccessibilityStateChange, (result) => {
      console.info(logTag + "accessibility on res=" + JSON.stringify(result));
      if (result) {
        var commonEventPublishData = {
          data: "on_target_change_extra_success"
        }
        commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
      }
    });
    ThreadSleep(1000).then(() => {
      setExtentionEnabledRegisterState(logTag, accessibility_registerState_Name);
    });
  });
};

const RegisterStateOnOff_0012 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log + "RegisterStateOnOff_0012 ";
    config.on(onEnabledAccessibilityExtensionListChange, () => {
      console.info(logTag + "enableAccessibilityExtensionListChange callback");
      var commonEventPublishData = {
        data: "on_target_change_extra_success"
      }
      commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
    });
    ThreadSleep(1000).then(() => {
      setExtentionEnabledRegisterState(logTag, accessibility_registerState_Name);
    });
  });
};

const RegisterStateOnOff_0020 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log + "RegisterStateOnOff_0020 ";
    accessibility.on(onAccessibilityStateChange, (result) => {
      console.info(logTag + "accessibility on res=" + JSON.stringify(result));
      if (!result) {
        var commonEventPublishData = {
          data: "on_target_change_extra_success"
        }
        commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
      }
    });
    setExtentionEnabledRegisterState(logTag, accessibility_registerState_Name);
    ThreadSleep(1000).then(() => {
      setExtentionDisabled(logTag, [accessibility_registerState_Name]);
    });
  });
};

const RegisterStateOnOff_0022 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log + "RegisterStateOnOff_0022 ";
    config.on(onEnabledAccessibilityExtensionListChange, () => {
      console.info(logTag + "enableAccessibilityExtensionListChange callback");
      var commonEventPublishData = {
        data: "on_target_change_extra_success"
      }
      commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
    });
    setExtentionEnabledRegisterState(logTag, accessibility_registerState_Name);
    ThreadSleep(1000).then(() => {
      setExtentionDisabled(logTag, [accessibility_registerState_Name]);
    });
  });
};

const callbackData = (result) => {
    console.info(Log + " accessibility on callback res=" + JSON.stringify(result));
    var commonEventPublishData = {
      data: "on_target_change_extra_success"
    }
    commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const callbackVoidData = () => {
  console.info(Log + " enableAccessibilityExtensionListChange callback");
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const RegisterStateOnOff_0030 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0030 ";
    accessibility.on(onAccessibilityStateChange, callbackData);
    accessibility.off(onAccessibilityStateChange, callbackData);
    ThreadSleep(1000).then(() => {
      setExtentionEnabledRegisterState(logTag, accessibility_registerState_Name);
    });
  });
};

const RegisterStateOnOff_0032 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0032 ";
    config.on(onEnabledAccessibilityExtensionListChange, callbackVoidData);
    config.off(onEnabledAccessibilityExtensionListChange, callbackVoidData);
    ThreadSleep(1000).then(() => {
      setExtentionEnabledRegisterState(logTag, accessibility_registerState_Name);
    });
  });
};

const RegisterStateOnOff_0040 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0040 ";
    accessibility.on(onAccessibilityStateChange, callbackData);
    accessibility.off(onAccessibilityStateChange, callbackData);
    setExtentionEnabledRegisterState(logTag, accessibility_registerState_Name);
    ThreadSleep(1000).then(() => {
      setExtentionDisabled(logTag, [accessibility_registerState_Name]);
    });
  });
};

const RegisterStateOnOff_0042 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0042 ";
    config.on(onEnabledAccessibilityExtensionListChange, callbackVoidData);
    config.off(onEnabledAccessibilityExtensionListChange, callbackVoidData);
    setExtentionEnabledRegisterState(logTag, accessibility_registerState_Name);
    ThreadSleep(1000).then(() => {
      setExtentionDisabled(logTag, [accessibility_registerState_Name]);
    });
  });
};

const RegisterStateOnOff_0050 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0050 ";
    accessibility.on(onAccessibilityStateChange, (result) => {
      console.info(logTag + "accessibility on times=1, res=" + JSON.stringify(result));
      if (result) {
        var commonEventPublishData = {
          data: "on_target_change_extra_success"
        }
        commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
      }
    });
    accessibility.on(onAccessibilityStateChange, (result) => {
      console.info(logTag + "accessibility on times=2, res=" + JSON.stringify(result));
      if (result) {
        var commonEventPublishData = {
          data: "on_target_change_extra_success"
        }
        commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
      }
    });
    ThreadSleep(1000).then(() => {
      setExtentionEnabledRegisterState(logTag, accessibility_registerState_Name);
    });
  });
};

const RegisterStateOnOff_0060 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0060 ";
    accessibility.on(onAccessibilityStateChange, (result) => {
      console.info(logTag + "accessibility on times=1, res=" + JSON.stringify(result));
      if (!result) {
        var commonEventPublishData = {
          data: "on_target_change_extra_success"
        }
        commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
      }
    });
    accessibility.on(onAccessibilityStateChange, (result) => {
      console.info(logTag + "accessibility on times=2, res=" + JSON.stringify(result));
      if (!result) {
        var commonEventPublishData = {
          data: "on_target_change_extra_success"
        }
        commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
      }
    });
    setExtentionEnabledRegisterState(logTag, accessibility_registerState_Name);
    ThreadSleep(1000).then(() => {
      setExtentionDisabled(logTag, [accessibility_registerState_Name]);
    });
  });
};

const RegisterStateOnOff_0070 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0070 ";
    accessibility.on(onAccessibilityStateChange, callbackData);
    accessibility.off(onAccessibilityStateChange, callbackData);
    accessibility.off(onAccessibilityStateChange, callbackData);
    ThreadSleep(1000).then(() => {
      setExtentionEnabledRegisterState(logTag, accessibility_registerState_Name);
    });
  });
};

const RegisterStateOnOff_0080 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0080 ";
    accessibility.on(onAccessibilityStateChange, callbackData);
    accessibility.off(onAccessibilityStateChange, callbackData);
    accessibility.off(onAccessibilityStateChange, callbackData);
    setExtentionEnabledRegisterState(logTag, accessibility_registerState_Name);
    ThreadSleep(1000).then(() => {
      setExtentionDisabled(logTag, [accessibility_registerState_Name]);
    });
  });
};

const RegisterStateOnOff_0090 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0090 ";
    accessibility.on(onAccessibilityStateChange, (result) => {
      console.info(logTag + "accessibility on res=" + JSON.stringify(result));
      if (result) {
        var commonEventPublishData = {
          data: "on_target_change_extra_success"
        }
        commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
      }
    });
    setExtentionEnabledRegisterState(logTag, accessibility_registerState_Name);
    setExtentionEnabledRegisterState(logTag, accessibility_register_Name);
    ThreadSleep(1000).then(() => {
      setExtentionDisabled(logTag, [accessibility_register_Name]);
    });
  });
};

const RegisterStateOnOff_0100 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0100 ";
    accessibility.on(onAccessibilityStateChange, callbackData);
    accessibility.off(onAccessibilityStateChange, callbackData);
    setExtentionEnabledRegisterState(logTag, accessibility_registerState_Name);
    setExtentionEnabledRegisterState(logTag, accessibility_register_Name);
    ThreadSleep(1000).then(() => {
      setExtentionDisabled(logTag, [accessibility_register_Name]);
    });
  });
};

const RegisterStateOnOff_0110 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0110 ";
    accessibility.on(onAccessibilityStateChange, (result) => {
      console.info(logTag + "accessibility on res=" + JSON.stringify(result));
      if (!result) {
        var commonEventPublishData = {
          data: "on_target_change_extra_success"
        }
        commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
      }

    });
    setExtentionEnabledRegisterStateTouch(logTag, accessibility_register_Name);
    ThreadSleep(1000).then(() => {
      setExtentionDisabled(logTag, [accessibility_register_Name]);
    });
  });
};

const RegisterStateOnOff_0120 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0120 ";
    accessibility.on(undefined, (result) => {
      console.info(logTag + "accessibility on res=" + JSON.stringify(result));
      var commonEventPublishData = {
        data: "on_target_change_extra_success"
      }
      commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
    });
    setExtentionEnabledRegisterState(logTag, accessibility_registerState_Name);
    ThreadSleep(1000).then(() => {
      setExtentionDisabled(logTag, [accessibility_registerState_Name]);
    });
  });
};

const RegisterStateOnOff_0130 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0130 ";
    accessibility.on(onAccessibilityStateChange, callbackData);
    accessibility.off(undefined, callbackData);
    setExtentionEnabledRegisterState(logTag, accessibility_registerState_Name);
    ThreadSleep(1000).then(() => {
      setExtentionDisabled(logTag, [accessibility_registerState_Name]);
    });
  });
};

const RegisterStateOnOff_0160 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0160 ";
    accessibility.on(onTouchGuideStateChange, (result) => {
      console.info(logTag + "touchGuide on res=" + JSON.stringify(result));
      if (result) {
        var commonEventPublishData = {
          data: "on_target_change_extra_success"
        }
        commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
      }

    });
    ThreadSleep(1000).then(() => {
      setExtentionEnabledRegisterStateTouch(logTag, accessibility_registerState_Name);
    });
  });
};

const RegisterStateOnOff_0162 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0162 ";
    config.on(onEnabledAccessibilityExtensionListChange, () => {
      console.info(logTag + "enableAccessibilityExtensionListChange callback");
      var commonEventPublishData = {
        data: "on_target_change_extra_success"
      }
      commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
    });
    ThreadSleep(1000).then(() => {
      setExtentionEnabledRegisterStateTouch(logTag, accessibility_registerState_Name);
    });
  });
};

const RegisterStateOnOff_0170 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0170 ";
    accessibility.on(onTouchGuideStateChange, (result) => {
      console.info(logTag + "touchGuide on res=" + JSON.stringify(result));
      if (!result) {
        var commonEventPublishData = {
          data: "on_target_change_extra_success"
        }
        commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
      }
    });
    setExtentionEnabledRegisterStateTouch(logTag, accessibility_registerState_Name);
    ThreadSleep(1000).then(() => {
      setExtentionDisabled(logTag, [accessibility_registerState_Name]);
    });
  });
};

const RegisterStateOnOff_0172 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0172 ";
    config.on(onEnabledAccessibilityExtensionListChange, () => {
      console.info(logTag + "enableAccessibilityExtensionListChange callback");
      var commonEventPublishData = {
        data: "on_target_change_extra_success"
      }
      commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
    });
    setExtentionEnabledRegisterStateTouch(logTag, accessibility_registerState_Name);
    ThreadSleep(1000).then(() => {
      setExtentionDisabled(logTag, [accessibility_registerState_Name]);
    });
  });
};

const RegisterStateOnOff_0180 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0180 ";
    accessibility.on(onTouchGuideStateChange, callbackData);
    accessibility.off(onTouchGuideStateChange, callbackData);
    ThreadSleep(1000).then(() => {
      setExtentionEnabledRegisterStateTouch(logTag, accessibility_registerState_Name);
    });
  });
};

const RegisterStateOnOff_0182 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0182 ";
    config.on(onEnabledAccessibilityExtensionListChange, callbackVoidData);
    config.off(onEnabledAccessibilityExtensionListChange, callbackVoidData);
    ThreadSleep(1000).then(() => {
      setExtentionEnabledRegisterStateTouch(logTag, accessibility_registerState_Name);
    });
  });
};

const RegisterStateOnOff_0190 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0190 ";
    accessibility.on(onTouchGuideStateChange, callbackData);
    accessibility.off(onTouchGuideStateChange, callbackData);
    setExtentionEnabledRegisterStateTouch(logTag, accessibility_registerState_Name);
    ThreadSleep(1000).then(() => {
      setExtentionDisabled(logTag, [accessibility_registerState_Name]);
    });
  });
};

const RegisterStateOnOff_0192 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0192 ";
    config.on(onEnabledAccessibilityExtensionListChange, callbackVoidData);
    config.off(onEnabledAccessibilityExtensionListChange, callbackVoidData);
    setExtentionEnabledRegisterStateTouch(logTag, accessibility_registerState_Name);
    ThreadSleep(1000).then(() => {
      setExtentionDisabled(logTag, [accessibility_registerState_Name]);
    });
  });
};

const RegisterStateOnOff_0200 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0200 ";
    accessibility.on(onTouchGuideStateChange, callbackData);
    accessibility.on(onTouchGuideStateChange, callbackData);
    ThreadSleep(1000).then(() => {
      setExtentionEnabledRegisterStateTouch(logTag, accessibility_registerState_Name);
    });
  });
};

const RegisterStateOnOff_0210 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0210 ";
    accessibility.on(onTouchGuideStateChange, callbackData);
    accessibility.on(onTouchGuideStateChange, callbackData);
    setExtentionEnabledRegisterStateTouch(logTag, accessibility_registerState_Name);
    ThreadSleep(1000).then(() => {
      setExtentionDisabled(logTag, [accessibility_registerState_Name]);
    });
  });
};

const RegisterStateOnOff_0220 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0220 ";
    accessibility.on(onTouchGuideStateChange, callbackData);
    accessibility.off(onTouchGuideStateChange, callbackData);
    accessibility.off(onTouchGuideStateChange, callbackData);
    setExtentionEnabledRegisterStateTouch(logTag, accessibility_registerState_Name);
  });
};

const RegisterStateOnOff_0230 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0230 ";
    accessibility.on(onTouchGuideStateChange, callbackData);
    accessibility.off(onTouchGuideStateChange, callbackData);
    accessibility.off(onTouchGuideStateChange, callbackData);
    setExtentionEnabledRegisterStateTouch(logTag, accessibility_registerState_Name);
    ThreadSleep(2000).then(() => {
      setExtentionDisabled(logTag, [accessibility_registerState_Name]);
    });
  });
};

const RegisterStateOnOff_0240 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0240 ";
    accessibility.on(onTouchGuideStateChange, (result) => {
      console.info(logTag + "touchGuide on res=" + JSON.stringify(result));
      if (result) {
        var commonEventPublishData = {
          data: "on_target_change_extra_success"
        }
        commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
      }
    });
    setExtentionEnabledRegisterStateTouch(logTag, accessibility_registerState_Name);
    setExtentionEnabledRegisterStateTouch(logTag, accessibility_register_Name);
    ThreadSleep(1000).then(() => {
      setExtentionDisabled(logTag, [accessibility_register_Name]);
    });
  });
};

const RegisterStateOnOff_0250 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0250 ";
    accessibility.on(onTouchGuideStateChange, callbackData);
    accessibility.off(onTouchGuideStateChange, callbackData);
    setExtentionEnabledRegisterStateTouch(logTag, accessibility_registerState_Name);
    setExtentionEnabledRegisterStateTouch(logTag, accessibility_register_Name);
    ThreadSleep(1000).then(() => {
      setExtentionDisabled(logTag, [accessibility_register_Name]);
    });
  });
};

const RegisterStateOnOff_0260 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0260 ";
    accessibility.on(onTouchGuideStateChange, (result) => {
      console.info(logTag + "touchGuide on res=" + JSON.stringify(result));
      var commonEventPublishData = {
        data: "on_target_change_extra_success"
      }
      commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
    });
    setExtentionEnabledRegisterState(logTag, accessibility_registerState_Name);
    ThreadSleep(1000).then(() => {
      setExtentionDisabled(logTag, [accessibility_registerState_Name]);
    });
  });
};

const RegisterStateOnOff_0290 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0290 ";
    accessibility.on(undefined, (result) => {
      console.info(logTag + "touchGuide on res=" + JSON.stringify(result));
      var commonEventPublishData = {
        data: "on_target_change_extra_success"
      }
      commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
    });
    setExtentionEnabledRegisterStateTouch(logTag, accessibility_registerState_Name);
    ThreadSleep(2000).then(() => {
      setExtentionDisabled(logTag, [accessibility_registerState_Name]);
    });
  });
};

const RegisterStateOnOff_0300 = () => {
  RegisterStateOnOff_Init(() => {
    const logTag = Log +"RegisterStateOnOff_0300 ";
    accessibility.on(onTouchGuideStateChange, callbackData);
    accessibility.off(undefined, callbackData);
    setExtentionEnabledRegisterStateTouch(logTag, accessibility_registerState_Name);
    ThreadSleep(2000).then(() => {
      setExtentionDisabled(logTag, [accessibility_registerState_Name]);
    });
  });
};

const executeAbility = (data) => {
  switch (data) {
    case "RegisterStateOnOff_0010":
      RegisterStateOnOff_0010();
      break;
    case "RegisterStateOnOff_0012":
      RegisterStateOnOff_0012();
      break;
    case "RegisterStateOnOff_0020":
      RegisterStateOnOff_0020();
      break;
    case "RegisterStateOnOff_0022":
      RegisterStateOnOff_0022();
      break;
    case "RegisterStateOnOff_0030":
      RegisterStateOnOff_0030();
      break;
    case "RegisterStateOnOff_0032":
      RegisterStateOnOff_0032();
      break;
    case "RegisterStateOnOff_0040":
      RegisterStateOnOff_0040();
      break;
    case "RegisterStateOnOff_0042":
      RegisterStateOnOff_0042();
      break;
    case "RegisterStateOnOff_0050":
      RegisterStateOnOff_0050();
      break;
    case "RegisterStateOnOff_0060":
      RegisterStateOnOff_0060();
      break;
    case "RegisterStateOnOff_0070":
      RegisterStateOnOff_0070();
      break;
    case "RegisterStateOnOff_0080":
      RegisterStateOnOff_0080();
      break;
    case "RegisterStateOnOff_0090":
      RegisterStateOnOff_0090();
      break;
    case "RegisterStateOnOff_0100":
      RegisterStateOnOff_0100();
      break;
    case "RegisterStateOnOff_0110":
      RegisterStateOnOff_0110();
      break;
    case "RegisterStateOnOff_0120":
      RegisterStateOnOff_0120();
      break;
    case "RegisterStateOnOff_0130":
      RegisterStateOnOff_0130();
      break;
    case "RegisterStateOnOff_0160":
      RegisterStateOnOff_0160();
      break;
    case "RegisterStateOnOff_0162":
      RegisterStateOnOff_0162();
      break;
    case "RegisterStateOnOff_0170":
      RegisterStateOnOff_0170();
      break;
    case "RegisterStateOnOff_0172":
      RegisterStateOnOff_0172();
      break;
    case "RegisterStateOnOff_0180":
      RegisterStateOnOff_0180();
      break;
    case "RegisterStateOnOff_0182":
      RegisterStateOnOff_0182();
      break;
    case "RegisterStateOnOff_0190":
      RegisterStateOnOff_0190();
      break;
    case "RegisterStateOnOff_0192":
      RegisterStateOnOff_0192();
      break;
    case "RegisterStateOnOff_0200":
      RegisterStateOnOff_0200();
      break;
    case "RegisterStateOnOff_0210":
      RegisterStateOnOff_0210();
      break;
    case "RegisterStateOnOff_0220":
      RegisterStateOnOff_0220();
      break;
    case "RegisterStateOnOff_0230":
      RegisterStateOnOff_0230();
      break;
    case "RegisterStateOnOff_0240":
      RegisterStateOnOff_0240();
      break;
    case "RegisterStateOnOff_0250":
      RegisterStateOnOff_0250();
      break;
    case "RegisterStateOnOff_0260":
      RegisterStateOnOff_0260();
      break;
    case "RegisterStateOnOff_0290":
      RegisterStateOnOff_0290();
      break;
    case "RegisterStateOnOff_0300":
      RegisterStateOnOff_0300();
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
