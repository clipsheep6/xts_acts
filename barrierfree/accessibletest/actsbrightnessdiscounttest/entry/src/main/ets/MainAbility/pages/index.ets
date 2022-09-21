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
import file from '@system.file';
import commonEvent from '@ohos.commonEvent'
import config from '@ohos.accessibility.config'

const LOG: string = "[xtsLog]";

const commonEventPublishOnTargetChangeExtra = (caseName) => {
  function publishCallback(err) {
    console.info(LOG + caseName + " on_target_change_extra  publish call back result:" + JSON.stringify(err));
  }
  var commonEventPublishData = {
    data: caseName + "_on_target_change_extra_success",
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback);
}

const RegisterBrightnessDiscount_0010 = () => {
  const caseName = "RegisterBrightnessDiscount_0010"
  const logTag = LOG + caseName;
  var setValue: number = 0
  config.brightnessDiscount.get().then((res) => {
    console.info(logTag + "BrightnessDiscount before modification = ", JSON.stringify(res));
    config.brightnessDiscount.set(0.1).then(() => {
      config.brightnessDiscount.set(setValue).then(() => {
        config.brightnessDiscount.get().then((res) => {
          console.info(logTag + "after BrightnessDiscount get res=" + JSON.stringify(res));
          if (res === setValue) {
            commonEventPublishOnTargetChangeExtra(caseName);
          }
        }).catch((err) => {
          console.info(logTag + "after BrightnessDiscount get err=" + JSON.stringify(err));
        });
      }).catch((err) => {
        console.info(logTag + "BrightnessDiscount set err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + "BrightnessDiscount set err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + "before BrightnessDiscount get err=" + JSON.stringify(err));
  });
}

const RegisterBrightnessDiscount_0020 = () => {
  const caseName = "RegisterBrightnessDiscount_0020"
  const logTag = LOG + caseName;
  var setValue: number = 1
  config.brightnessDiscount.get().then((res) => {
    console.info(logTag + "BrightnessDiscount before modification = ", JSON.stringify(res));
    config.brightnessDiscount.set(setValue).then(() => {
      config.brightnessDiscount.get().then((res) => {
        console.info(logTag + "after BrightnessDiscount get res=" + JSON.stringify(res));
        if (res === setValue) {
          commonEventPublishOnTargetChangeExtra(caseName);
        }
      }).catch((err) => {
        console.info(logTag + "after BrightnessDiscount get err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + "BrightnessDiscount set err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + "before BrightnessDiscount get err=" + JSON.stringify(err));
  });
}

const RegisterBrightnessDiscount_0030 = () => {
  const caseName = "RegisterBrightnessDiscount_0030"
  const logTag = LOG + caseName;
  var setValue: number = 0.5
  config.brightnessDiscount.get().then((res) => {
    console.info(logTag + "BrightnessDiscount before modification = ", JSON.stringify(res));
    config.brightnessDiscount.set(setValue).then(() => {
      config.brightnessDiscount.get().then((res) => {
        console.info(logTag + "after BrightnessDiscount get res=" + JSON.stringify(res));
        if (res === setValue) {
          commonEventPublishOnTargetChangeExtra(caseName);
        }
      }).catch((err) => {
        console.info(logTag + "after BrightnessDiscount get err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + "BrightnessDiscount set err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + "before BrightnessDiscount get err=" + JSON.stringify(err));
  });
}

const RegisterBrightnessDiscount_0040 = () => {
  const caseName = "RegisterBrightnessDiscount_0040"
  const logTag = LOG + caseName;
  var setValue: number = 100
  config.brightnessDiscount.get().then((res) => {
    console.info(logTag + "BrightnessDiscount before modification = ", JSON.stringify(res));
    config.brightnessDiscount.set(setValue).then(() => {
      config.brightnessDiscount.get().then((res) => {
        console.info(logTag + "after BrightnessDiscount get res=" + JSON.stringify(res));
        if (res === setValue) {
          commonEventPublishOnTargetChangeExtra(caseName);
        }
      }).catch((err) => {
        console.info(logTag + "after BrightnessDiscount get err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + "BrightnessDiscount set err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + "before BrightnessDiscount get err=" + JSON.stringify(err));
  });
}

const UnRegisterBrightnessDiscount_0010 = () => {
  const caseName = "UnRegisterBrightnessDiscount_0010"
  const logTag = LOG + caseName;
  var setValue: number = 0
  config.brightnessDiscount.get().then((res) => {
    console.info(logTag + "BrightnessDiscount before modification = ", JSON.stringify(res));
    config.brightnessDiscount.set(setValue).then(() => {
      config.brightnessDiscount.get().then((res) => {
        console.info(logTag + "after BrightnessDiscount get res=" + JSON.stringify(res));
        if (res === setValue) {
          commonEventPublishOnTargetChangeExtra(caseName);
        }
      }).catch((err) => {
        console.info(logTag + "after BrightnessDiscount get err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + "BrightnessDiscount set err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + "before BrightnessDiscount get err=" + JSON.stringify(err));
  });
}

const UnRegisterBrightnessDiscount_0020 = () => {
  const caseName = "UnRegisterBrightnessDiscount_0020"
  const logTag = LOG + caseName;
  var setValue: number = 1
  config.brightnessDiscount.get().then((res) => {
    console.info(logTag + "BrightnessDiscount before modification = ", JSON.stringify(res));
    config.brightnessDiscount.set(setValue).then(() => {
      config.brightnessDiscount.get().then((res) => {
        console.info(logTag + "after BrightnessDiscount get res=" + JSON.stringify(res));
        if (res === setValue) {
          commonEventPublishOnTargetChangeExtra(caseName);
        }
      }).catch((err) => {
        console.info(logTag + "after BrightnessDiscount get err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + "BrightnessDiscount set err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + "before BrightnessDiscount get err=" + JSON.stringify(err));
  });
}

const UnRegisterBrightnessDiscount_0030 = () => {
  const caseName = "UnRegisterBrightnessDiscount_0030"
  const logTag = LOG + caseName;
  var setValue: number = 0.5
  config.brightnessDiscount.get().then((res) => {
    console.info(logTag + "BrightnessDiscount before modification = ", JSON.stringify(res));
    config.brightnessDiscount.set(setValue).then(() => {
      config.brightnessDiscount.get().then((res) => {
        console.info(logTag + "after BrightnessDiscount get res=" + JSON.stringify(res));
        if (res === setValue) {
          commonEventPublishOnTargetChangeExtra(caseName);
        }
      }).catch((err) => {
        console.info(logTag + "after BrightnessDiscount get err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + "BrightnessDiscount set err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + "before BrightnessDiscount get err=" + JSON.stringify(err));
  });
}

const UnRegisterBrightnessDiscount_0040 = () => {
  const caseName = "UnRegisterBrightnessDiscount_0040"
  const logTag = LOG + caseName;
  var setValue: number = 1
  config.brightnessDiscount.get().then((res) => {
    console.info(logTag + "BrightnessDiscount before modification = ", JSON.stringify(res));
    config.brightnessDiscount.set(100).then(() => {
      config.brightnessDiscount.get().then((res) => {
        console.info(logTag + "after BrightnessDiscount get res=" + JSON.stringify(res));
        if (res === setValue) {
          commonEventPublishOnTargetChangeExtra(caseName);
        }
      }).catch((err) => {
        console.info(logTag + "after BrightnessDiscount get err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + "BrightnessDiscount set err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + "before BrightnessDiscount get err=" + JSON.stringify(err));
  });
}

const SetGetBrightnessDiscount_0010 = () => {
  const caseName = "SetGetBrightnessDiscount_0010"
  const logTag = LOG + caseName;
  var setValue: number = 0
  config.brightnessDiscount.get((err, res) => {
    if (err?.code) {
      console.info(logTag + "BrightnessDiscount get err=" + JSON.stringify(err));
      return
    }
    console.info(logTag + "BrightnessDiscount get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  })
}

const SetGetBrightnessDiscount_0020 = () => {
  const caseName = "SetGetBrightnessDiscount_0020"
  const logTag = LOG + caseName;
  var setValue: number = 1
  config.brightnessDiscount.get((err, res) => {
    if (err?.code) {
      console.info(logTag + "BrightnessDiscount get err=" + JSON.stringify(err));
      return
    }
    console.info(logTag + "BrightnessDiscount get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  })
}

const SetGetBrightnessDiscount_0030 = () => {
  const caseName = "SetGetBrightnessDiscount_0030"
  const logTag = LOG + caseName;
  var setValue: number = 0.5
  config.brightnessDiscount.get((err, res) => {
    if (err?.code) {
      console.info(logTag + "BrightnessDiscount get err=" + JSON.stringify(err));
      return
    }
    console.info(logTag + "BrightnessDiscount get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  })
}

const SetGetBrightnessDiscount_0040 = () => {
  const caseName = "SetGetBrightnessDiscount_0040"
  const logTag = LOG + caseName;
  var setValue: number = 100
  config.brightnessDiscount.get((err, res) => {
    if (err?.code) {
      console.info(logTag + "BrightnessDiscount get err=" + JSON.stringify(err));
      return
    }
    console.info(logTag + "BrightnessDiscount get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  })
}

const SetGetBrightnessDiscount_0050 = () => {
  const caseName = "SetGetBrightnessDiscount_0050"
  const logTag = LOG + caseName;
  var setValue: number = 0
  config.brightnessDiscount.get().then((res) => {
    console.info(logTag + "BrightnessDiscount get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  }).catch((err) => {
    console.info(logTag + " BrightnessDiscount get err=" + JSON.stringify(err));
  });
}

const SetGetBrightnessDiscount_0060 = () => {
  const caseName = "SetGetBrightnessDiscount_0060"
  const logTag = LOG + caseName;
  var setValue: number = 1
  config.brightnessDiscount.get().then((res) => {
    console.info(logTag + "BrightnessDiscount get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  }).catch((err) => {
    console.info(logTag + " BrightnessDiscount get err=" + JSON.stringify(err));
  });
}

const SetGetBrightnessDiscount_0070 = () => {
  const caseName = "SetGetBrightnessDiscount_0070"
  const logTag = LOG + caseName;
  var setValue: number = 0.5
  config.brightnessDiscount.get().then((res) => {
    console.info(logTag + "BrightnessDiscount get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  }).catch((err) => {
    console.info(logTag + " BrightnessDiscount get err=" + JSON.stringify(err));
  });
}

const SetGetBrightnessDiscount_0080 = () => {
  const caseName = "SetGetBrightnessDiscount_0080"
  const logTag = LOG + caseName;
  var setValue: number = 100
  config.brightnessDiscount.get().then((res) => {
    console.info(logTag + "BrightnessDiscount get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  }).catch((err) => {
    console.info(logTag + " BrightnessDiscount get err=" + JSON.stringify(err));
  });
}

const SetGetBrightnessDiscount_0090 = () => {
  const caseName = "SetGetBrightnessDiscount_0090"
  const logTag = LOG + caseName;
  var setValue: number = 12345
  config.brightnessDiscount.get().then((res) => {
    console.info(logTag + "BrightnessDiscount get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  }).catch((err) => {
    console.info(logTag + " BrightnessDiscount get err=" + JSON.stringify(err));
  });
}

const SetGetBrightnessDiscount_0100 = () => {
  const caseName = "SetGetBrightnessDiscount_0100"
  const logTag = LOG + caseName;
  var setValue: number = 0.1
  config.brightnessDiscount.set(setValue, (err, data) => {
    if (err?.code) {
      console.info(logTag + " brightnessDiscount times1 err = " + JSON.stringify(err))
      return
    }
    console.info(logTag + " brightnessDiscount  times1 data = " + JSON.stringify(data))
    config.brightnessDiscount.set(setValue, (err, data) => {
      if (err?.code) {
        console.info(logTag + " brightnessDiscount times2 err = " + JSON.stringify(err))
        return
      }
      console.info(logTag + " brightnessDiscount  times2 data = " + JSON.stringify(data))
      config.brightnessDiscount.set(setValue, (err, data) => {
        if (err?.code) {
          console.info(logTag + " brightnessDiscount times3 err = " + JSON.stringify(err))
          return
        }
        console.info(logTag + " brightnessDiscount  times3 data = " + JSON.stringify(data))
      })
    })
  })
}

const SetGetBrightnessDiscount_0110 = () => {
  const caseName = "SetGetBrightnessDiscount_0110"
  const logTag = LOG + caseName;
  var setValue: number = 0.1
  config.brightnessDiscount.set(setValue).then(() => {
    console.info(logTag + " brightnessDiscount set1 success");
    config.brightnessDiscount.set(setValue).then(() => {
      console.info(logTag + " brightnessDiscount set2 success");
      config.brightnessDiscount.set(setValue).then(() => {
        console.info(logTag + " brightnessDiscount set3 success");
      }).catch((err) => {
        console.info(logTag + " brightnessDiscount set3 err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + " brightnessDiscount set2 err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + " brightnessDiscount set1 err=" + JSON.stringify(err));
  });
}

const excuteAbility = (data) => {
  switch (data) {
    case "RegisterBrightnessDiscount_0010" + "_AccessibilityApp_start":
      RegisterBrightnessDiscount_0010()
      break;
    case "RegisterBrightnessDiscount_0020" + "_AccessibilityApp_start":
      RegisterBrightnessDiscount_0020()
      break;
    case "RegisterBrightnessDiscount_0030" + "_AccessibilityApp_start":
      RegisterBrightnessDiscount_0030()
      break;
    case "RegisterBrightnessDiscount_0040" + "_AccessibilityApp_start":
      RegisterBrightnessDiscount_0040()
      break;
    case "UnRegisterBrightnessDiscount_0010" + "_AccessibilityApp_start":
      UnRegisterBrightnessDiscount_0010()
      break;
    case "UnRegisterBrightnessDiscount_0020" + "_AccessibilityApp_start":
      UnRegisterBrightnessDiscount_0020()
      break;
    case "UnRegisterBrightnessDiscount_0030" + "_AccessibilityApp_start":
      UnRegisterBrightnessDiscount_0030()
      break;
    case "UnRegisterBrightnessDiscount_0040" + "_AccessibilityApp_start":
      UnRegisterBrightnessDiscount_0040()
      break;
    case "SetGetBrightnessDiscount_0010" + "_AccessibilityApp_start":
      SetGetBrightnessDiscount_0010()
      break;
    case "SetGetBrightnessDiscount_0020" + "_AccessibilityApp_start":
      SetGetBrightnessDiscount_0020()
      break;
    case "SetGetBrightnessDiscount_0030" + "_AccessibilityApp_start":
      SetGetBrightnessDiscount_0030()
      break;
    case "SetGetBrightnessDiscount_0040" + "_AccessibilityApp_start":
      SetGetBrightnessDiscount_0040()
      break;
    case "SetGetBrightnessDiscount_0050" + "_AccessibilityApp_start":
      SetGetBrightnessDiscount_0050()
      break;
    case "SetGetBrightnessDiscount_0060" + "_AccessibilityApp_start":
      SetGetBrightnessDiscount_0060()
      break;
    case "SetGetBrightnessDiscount_0070" + "_AccessibilityApp_start":
      SetGetBrightnessDiscount_0070()
      break;
    case "SetGetBrightnessDiscount_0080" + "_AccessibilityApp_start":
      SetGetBrightnessDiscount_0080()
      break;
    case "SetGetBrightnessDiscount_0090" + "_AccessibilityApp_start":
      SetGetBrightnessDiscount_0090()
      break;
    case "SetGetBrightnessDiscount_0100" + "_AccessibilityApp_start":
      SetGetBrightnessDiscount_0100()
      break;
    case "SetGetBrightnessDiscount_0110" + "_AccessibilityApp_start":
      SetGetBrightnessDiscount_0110()
      break;
    default:
      break;
  }
}


@Entry
@Component
struct Index {
  private subScriber = undefined;
  aboutToAppear() {
    var commonEventSubscribeInfo = {
      events: ["on_target_change"]
    }
    function subscriberCallback(err, data) {
      console.info(LOG + "====>Target subscriberCallback start");
      console.info(LOG + "====>Target receive event err:" + JSON.stringify(err));
      console.info(LOG + "====>Target receive event data:" + JSON.stringify(data));
      excuteAbility(data.data);
      console.info(LOG + "====>Target subscriberCallback end");
    }
    commonEvent.createSubscriber(commonEventSubscribeInfo).then((subscriber) => {
      console.info(LOG + "====> Target createSubscriber Start====")
      this.subScriber = subscriber;
      commonEvent.subscribe(subscriber, subscriberCallback);
      console.info(LOG + "====> Target createSubscriber End====")
    })
    console.info("start run testcase!!!!");
  }

  aboutToDisappear() {
    console.info('TargetApp aboutToDisappear');
    commonEvent.unsubscribe(this.subScriber);
    this.subScriber = undefined;
  }

  build() {
    Row() {
      Column() {
        Text('BrightnessDiscount')
          .fontSize(15)
          .fontWeight(FontWeight.Bold)
          .margin(50)
      }
      .width('100%')
    }
    .height('100%')
  }
}
