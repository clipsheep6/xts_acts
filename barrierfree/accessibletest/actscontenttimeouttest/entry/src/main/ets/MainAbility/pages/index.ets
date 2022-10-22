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

const RegisterContentTimeout_0010 = () => {
  const caseName = "RegisterContentTimeout_0010"
  const logTag = LOG + caseName;
  var setValue = -1
  config.contentTimeout.get().then((res) => {
    console.info(logTag + "contentTimeout before modification = ", JSON.stringify(res));
    config.contentTimeout.set(setValue).then(() => {
      config.contentTimeout.get().then((res) => {
        console.info(logTag + "after contentTimeout get res=" + JSON.stringify(res));
        if (res === setValue) {
          commonEventPublishOnTargetChangeExtra(caseName);
        }
      }).catch((err) => {
        console.info(logTag + "after contentTimeout get err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + "contentTimeout set err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + "before contentTimeout get err=" + JSON.stringify(err));
  });
}

const RegisterContentTimeout_0020 = () => {
  const caseName = "RegisterContentTimeout_0020"
  const logTag = LOG + caseName;
  var setValue = 0
  config.contentTimeout.get().then((res) => {
    console.info(logTag + "contentTimeout before modification = ", JSON.stringify(res));
    config.contentTimeout.set(setValue).then(() => {
      config.contentTimeout.get().then((res) => {
        console.info(logTag + "after contentTimeout get res=" + JSON.stringify(res));
        if (res === setValue) {
          commonEventPublishOnTargetChangeExtra(caseName);
        }
      }).catch((err) => {
        console.info(logTag + "after contentTimeout get err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + "contentTimeout set err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + "before contentTimeout get err=" + JSON.stringify(err));
  });
}

const RegisterContentTimeout_0030 = () => {
  const caseName = "RegisterContentTimeout_0030"
  const logTag = LOG + caseName;
  var setValue = 5000
  config.contentTimeout.get().then((res) => {
    console.info(logTag + "contentTimeout before modification = ", JSON.stringify(res));
    config.contentTimeout.set(setValue).then(() => {
      config.contentTimeout.get().then((res) => {
        console.info(logTag + "after contentTimeout get res=" + JSON.stringify(res));
        if (res === setValue) {
          commonEventPublishOnTargetChangeExtra(caseName);
        }
      }).catch((err) => {
        console.info(logTag + "after contentTimeout get err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + "contentTimeout set err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + "before contentTimeout get err=" + JSON.stringify(err));
  });
}

const RegisterContentTimeout_0040 = () => {
  const caseName = "RegisterContentTimeout_0040"
  const logTag = LOG + caseName;
  var setValue = 10000
  config.contentTimeout.get().then((res) => {
    console.info(logTag + "contentTimeout before modification = ", JSON.stringify(res));
    config.contentTimeout.set(setValue).then(() => {
      config.contentTimeout.get().then((res) => {
        console.info(logTag + "after contentTimeout get res=" + JSON.stringify(res));
        if (res === setValue) {
          commonEventPublishOnTargetChangeExtra(caseName);
        }
      }).catch((err) => {
        console.info(logTag + "after contentTimeout get err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + "contentTimeout set err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + "before contentTimeout get err=" + JSON.stringify(err));
  });
}

const UnRegisterContentTimeout_0010 = () => {
  const caseName = "UnRegisterContentTimeout_0010"
  const logTag = LOG + caseName;
  var setValue = -1
  config.contentTimeout.get().then((res) => {
    console.info(logTag + "contentTimeout before modification = ", JSON.stringify(res));
    config.contentTimeout.set(setValue).then(() => {
      config.contentTimeout.get().then((res) => {
        console.info(logTag + "after contentTimeout get res=" + JSON.stringify(res));
        if (res === setValue) {
          commonEventPublishOnTargetChangeExtra(caseName);
        }
      }).catch((err) => {
        console.info(logTag + "after contentTimeout get err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + "contentTimeout set err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + "before contentTimeout get err=" + JSON.stringify(err));
  });
}

const UnRegisterContentTimeout_0020 = () => {
  const caseName = "UnRegisterContentTimeout_0020"
  const logTag = LOG + caseName;
  var setValue = 0
  config.contentTimeout.get().then((res) => {
    console.info(logTag + "contentTimeout before modification = ", JSON.stringify(res));
    config.contentTimeout.set(setValue).then(() => {
      config.contentTimeout.get().then((res) => {
        console.info(logTag + "after contentTimeout get res=" + JSON.stringify(res));
        if (res === setValue) {
          commonEventPublishOnTargetChangeExtra(caseName);
        }
      }).catch((err) => {
        console.info(logTag + "after contentTimeout get err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + "contentTimeout set err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + "before contentTimeout get err=" + JSON.stringify(err));
  });
}

const UnRegisterContentTimeout_0030 = () => {
  const caseName = "UnRegisterContentTimeout_0030"
  const logTag = LOG + caseName;
  var setValue = 5000
  config.contentTimeout.get().then((res) => {
    console.info(logTag + "contentTimeout before modification = ", JSON.stringify(res));
    config.contentTimeout.set(setValue).then(() => {
      config.contentTimeout.get().then((res) => {
        console.info(logTag + "after contentTimeout get res=" + JSON.stringify(res));
        if (res === setValue) {
          commonEventPublishOnTargetChangeExtra(caseName);
        }
      }).catch((err) => {
        console.info(logTag + "after contentTimeout get err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + "contentTimeout set err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + "before contentTimeout get err=" + JSON.stringify(err));
  });
}

const UnRegisterContentTimeout_0040 = () => {
  const caseName = "UnRegisterContentTimeout_0040"
  const logTag = LOG + caseName;
  var setValue = 10000
  config.contentTimeout.get().then((res) => {
    console.info(logTag + "contentTimeout before modification = ", JSON.stringify(res));
    config.contentTimeout.set(setValue).then(() => {
      config.contentTimeout.get().then((res) => {
        console.info(logTag + "after contentTimeout get res=" + JSON.stringify(res));
        if (res === setValue) {
          commonEventPublishOnTargetChangeExtra(caseName);
        }
      }).catch((err) => {
        console.info(logTag + "after contentTimeout get err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + "contentTimeout set err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + "before contentTimeout get err=" + JSON.stringify(err));
  });
}

const SetGetContentTimeout_0010 = () => {
  const caseName = "SetGetContentTimeout_0010"
  const logTag = LOG + caseName;
  var setValue = -1
  config.contentTimeout.get((err, res) => {
    if (err?.code) {
      console.info(logTag + "contentTimeout get err=" + JSON.stringify(err));
      return
    }
    console.info(logTag + "contentTimeout get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  })
}

const SetGetContentTimeout_0020 = () => {
  const caseName = "SetGetContentTimeout_0020"
  const logTag = LOG + caseName;
  var setValue = 0
  config.contentTimeout.get((err, res) => {
    if (err?.code) {
      console.info(logTag + "contentTimeout get err=" + JSON.stringify(err));
      return
    }
    console.info(logTag + "contentTimeout get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  })
}

const SetGetContentTimeout_0030 = () => {
  const caseName = "SetGetContentTimeout_0030"
  const logTag = LOG + caseName;
  var setValue = 5000
  config.contentTimeout.get((err, res) => {
    if (err?.code) {
      console.info(logTag + "contentTimeout get err=" + JSON.stringify(err));
      return
    }
    console.info(logTag + "contentTimeout get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  })
}

const SetGetContentTimeout_0040 = () => {
  const caseName = "SetGetContentTimeout_0040"
  const logTag = LOG + caseName;
  var setValue = 10000
  config.contentTimeout.get((err, res) => {
    if (err?.code) {
      console.info(logTag + "contentTimeout get err=" + JSON.stringify(err));
      return
    }
    console.info(logTag + "contentTimeout get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  })
}

const SetGetContentTimeout_0050 = () => {
  const caseName = "SetGetContentTimeout_0050"
  const logTag = LOG + caseName;
  var setValue = -1
  config.contentTimeout.get().then((res) => {
    console.info(logTag + "contentTimeout get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  }).catch((err) => {
    console.info(logTag + " contentTimeout get err=" + JSON.stringify(err));
  });
}

const SetGetContentTimeout_0060 = () => {
  const caseName = "SetGetContentTimeout_0060"
  const logTag = LOG + caseName;
  var setValue = 0
  config.contentTimeout.get().then((res) => {
    console.info(logTag + "contentTimeout get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  }).catch((err) => {
    console.info(logTag + " contentTimeout get err=" + JSON.stringify(err));
  });
}

const SetGetContentTimeout_0070 = () => {
  const caseName = "SetGetContentTimeout_0070"
  const logTag = LOG + caseName;
  var setValue = 5000
  config.contentTimeout.get().then((res) => {
    console.info(logTag + "contentTimeout get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  }).catch((err) => {
    console.info(logTag + " contentTimeout get err=" + JSON.stringify(err));
  });
}

const SetGetContentTimeout_0080 = () => {
  const caseName = "SetGetContentTimeout_0080"
  const logTag = LOG + caseName;
  var setValue = 10000
  config.contentTimeout.get().then((res) => {
    console.info(logTag + "contentTimeout get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  }).catch((err) => {
    console.info(logTag + " contentTimeout get err=" + JSON.stringify(err));
  });
}

const SetGetContentTimeout_0090 = () => {
  const caseName = "SetGetContentTimeout_0090"
  const logTag = LOG + caseName;
  var setValue = 1000000
  config.contentTimeout.get().then((res) => {
    console.info(logTag + "contentTimeout get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  }).catch((err) => {
    console.info(logTag + " contentTimeout get err=" + JSON.stringify(err));
  });
}

const SetGetContentTimeout_0100 = () => {
  const caseName = "SetGetContentTimeout_0100"
  const logTag = LOG + caseName;
  var setValue = 5000
  config.contentTimeout.set(setValue, (err, data) => {
    if (err?.code) {
      console.info(logTag + " contentTimeout times1 err = " + JSON.stringify(err))
      return
    }
    console.info(logTag + " contentTimeout  times1 data = " + JSON.stringify(data))
    config.contentTimeout.set(setValue, (err, data) => {
      if (err?.code) {
        console.info(logTag + " contentTimeout times2 err = " + JSON.stringify(err))
        return
      }
      console.info(logTag + " contentTimeout  times2 data = " + JSON.stringify(data))
      config.contentTimeout.set(setValue, (err, data) => {
        if (err?.code) {
          console.info(logTag + " contentTimeout times3 err = " + JSON.stringify(err))
          return
        }
        console.info(logTag + " contentTimeout  times3 data = " + JSON.stringify(data))
      })
    })
  })
}

const SetGetContentTimeout_0110 = () => {
  const caseName = "SetGetContentTimeout_0110"
  const logTag = LOG + caseName;
  var setValue = 5000
  config.contentTimeout.set(setValue).then(() => {
    console.info(logTag + " contentTimeout set1 success");
    config.contentTimeout.set(setValue).then(() => {
      console.info(logTag + " contentTimeout set2 success");
      config.contentTimeout.set(setValue).then(() => {
        console.info(logTag + " contentTimeout set3 success");
      }).catch((err) => {
        console.info(logTag + " contentTimeout set3 err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + " contentTimeout set2 err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + " contentTimeout set1 err=" + JSON.stringify(err));
  });
}

const excuteAbility = (data) => {
  switch (data) {
    case "RegisterContentTimeout_0010" + "_AccessibilityApp_start":
      RegisterContentTimeout_0010()
      break;
    case "RegisterContentTimeout_0020" + "_AccessibilityApp_start":
      RegisterContentTimeout_0020()
      break;
    case "RegisterContentTimeout_0030" + "_AccessibilityApp_start":
      RegisterContentTimeout_0030()
      break;
    case "RegisterContentTimeout_0040" + "_AccessibilityApp_start":
      RegisterContentTimeout_0040()
      break;
    case "UnRegisterContentTimeout_0010" + "_AccessibilityApp_start":
      UnRegisterContentTimeout_0010()
      break;
    case "UnRegisterContentTimeout_0020" + "_AccessibilityApp_start":
      UnRegisterContentTimeout_0020()
      break;
    case "UnRegisterContentTimeout_0030" + "_AccessibilityApp_start":
      UnRegisterContentTimeout_0030()
      break;
    case "UnRegisterContentTimeout_0040" + "_AccessibilityApp_start":
      UnRegisterContentTimeout_0040()
      break;
    case "SetGetContentTimeout_0010" + "_AccessibilityApp_start":
      SetGetContentTimeout_0010()
      break;
    case "SetGetContentTimeout_0020" + "_AccessibilityApp_start":
      SetGetContentTimeout_0020()
      break;
    case "SetGetContentTimeout_0030" + "_AccessibilityApp_start":
      SetGetContentTimeout_0030()
      break;
    case "SetGetContentTimeout_0040" + "_AccessibilityApp_start":
      SetGetContentTimeout_0040()
      break;
    case "SetGetContentTimeout_0050" + "_AccessibilityApp_start":
      SetGetContentTimeout_0050()
      break;
    case "SetGetContentTimeout_0060" + "_AccessibilityApp_start":
      SetGetContentTimeout_0060()
      break;
    case "SetGetContentTimeout_0070" + "_AccessibilityApp_start":
      SetGetContentTimeout_0070()
      break;
    case "SetGetContentTimeout_0080" + "_AccessibilityApp_start":
      SetGetContentTimeout_0080()
      break;
    case "SetGetContentTimeout_0090" + "_AccessibilityApp_start":
      SetGetContentTimeout_0090()
      break;
    case "SetGetContentTimeout_0100" + "_AccessibilityApp_start":
      SetGetContentTimeout_0100()
      break;
    case "SetGetContentTimeout_0110" + "_AccessibilityApp_start":
      SetGetContentTimeout_0110()
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
        Text('ContentTimeout')
          .fontSize(15)
          .fontWeight(FontWeight.Bold)
          .margin(50)
      }
      .width('100%')
    }
    .height('100%')
  }
}
