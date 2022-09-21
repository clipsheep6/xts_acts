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

const RegisterScreenMagnifier_0010 = () => {
  const caseName = "RegisterScreenMagnifier_0010"
  const logTag = LOG + caseName;
  var setValue: boolean = true
  config.screenMagnifier.get().then((res) => {
    console.info(logTag + "ScreenMagnifier before modification = ", JSON.stringify(res));
    config.screenMagnifier.set(setValue).then(() => {
      config.screenMagnifier.get().then((res) => {
        console.info(logTag + "after ScreenMagnifier get res=" + JSON.stringify(res));
        if (res === setValue) {
          commonEventPublishOnTargetChangeExtra(caseName);
        }
      }).catch((err) => {
        console.info(logTag + "after ScreenMagnifier get err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + "ScreenMagnifier set err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + "before ScreenMagnifier get err=" + JSON.stringify(err));
  });
}

const RegisterScreenMagnifier_0020 = () => {
  const caseName = "RegisterScreenMagnifier_0020"
  const logTag = LOG + caseName;
  var setValue: boolean = false
  config.screenMagnifier.get().then((res) => {
    console.info(logTag + "ScreenMagnifier before modification = ", JSON.stringify(res));
    config.screenMagnifier.set(setValue).then(() => {
      config.screenMagnifier.get().then((res) => {
        console.info(logTag + "after ScreenMagnifier get res=" + JSON.stringify(res));
        if (res === setValue) {
          commonEventPublishOnTargetChangeExtra(caseName);
        }
      }).catch((err) => {
        console.info(logTag + "after ScreenMagnifier get err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + "ScreenMagnifier set err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + "before ScreenMagnifier get err=" + JSON.stringify(err));
  });
}

const UnRegisterScreenMagnifier_0010 = () => {
  const caseName = "UnRegisterScreenMagnifier_0010"
  const logTag = LOG + caseName;
  var setValue: boolean = true
  config.screenMagnifier.get().then((res) => {
    console.info(logTag + "ScreenMagnifier before modification = ", JSON.stringify(res));
    config.screenMagnifier.set(setValue).then(() => {
      config.screenMagnifier.get().then((res) => {
        console.info(logTag + "after ScreenMagnifier get res=" + JSON.stringify(res));
        if (res === setValue) {
          commonEventPublishOnTargetChangeExtra(caseName);
        }
      }).catch((err) => {
        console.info(logTag + "after ScreenMagnifier get err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + "ScreenMagnifier set err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + "before ScreenMagnifier get err=" + JSON.stringify(err));
  });
}

const UnRegisterScreenMagnifier_0020 = () => {
  const caseName = "UnRegisterScreenMagnifier_0020"
  const logTag = LOG + caseName;
  var setValue: boolean = false
  config.screenMagnifier.get().then((res) => {
    console.info(logTag + "ScreenMagnifier before modification = ", JSON.stringify(res));
    config.screenMagnifier.set(setValue).then(() => {
      config.screenMagnifier.get().then((res) => {
        console.info(logTag + "after ScreenMagnifier get res=" + JSON.stringify(res));
        if (res === setValue) {
          commonEventPublishOnTargetChangeExtra(caseName);
        }
      }).catch((err) => {
        console.info(logTag + "after ScreenMagnifier get err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + "ScreenMagnifier set err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + "before ScreenMagnifier get err=" + JSON.stringify(err));
  });
}

const SetGetScreenMagnifier_0010 = () => {
  const caseName = "SetGetScreenMagnifier_0010"
  const logTag = LOG + caseName;
  var setValue: boolean = true
  config.screenMagnifier.get((err, res) => {
    if (err?.code) {
      console.info(logTag + "ScreenMagnifier get err=" + JSON.stringify(err));
      return
    }
    console.info(logTag + "ScreenMagnifier get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  })
}

const SetGetScreenMagnifier_0020 = () => {
  const caseName = "SetGetScreenMagnifier_0020"
  const logTag = LOG + caseName;
  var setValue: boolean = false
  config.screenMagnifier.get((err, res) => {
    if (err?.code) {
      console.info(logTag + "ScreenMagnifier get err=" + JSON.stringify(err));
      return
    }
    console.info(logTag + "ScreenMagnifier get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  })
}

const SetGetScreenMagnifier_0030 = () => {
  const caseName = "SetGetScreenMagnifier_0030"
  const logTag = LOG + caseName;
  var setValue: boolean = true
  config.screenMagnifier.get().then((res) => {
    console.info(logTag + "ScreenMagnifier get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  }).catch((err) => {
    console.info(logTag + " ScreenMagnifier get err=" + JSON.stringify(err));
  });
}

const SetGetScreenMagnifier_0040 = () => {
  const caseName = "SetGetScreenMagnifier_0040"
  const logTag = LOG + caseName;
  var setValue: boolean = false
  config.screenMagnifier.get().then((res) => {
    console.info(logTag + "ScreenMagnifier get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  }).catch((err) => {
    console.info(logTag + " ScreenMagnifier get err=" + JSON.stringify(err));
  });
}

const SetGetScreenMagnifier_0050 = () => {
  const caseName = "SetGetScreenMagnifier_0050"
  const logTag = LOG + caseName;
  var setValue: boolean = true
  config.screenMagnifier.get().then((res) => {
    console.info(logTag + "ScreenMagnifier get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  }).catch((err) => {
    console.info(logTag + " ScreenMagnifier get err=" + JSON.stringify(err));
  });
}

const SetGetScreenMagnifier_0060 = () => {
  const caseName = "SetGetScreenMagnifier_0060"
  const logTag = LOG + caseName;
  var setValue: boolean = false
  config.screenMagnifier.set(setValue, (err, data) => {
    if (err?.code) {
      console.info(logTag + " screenMagnifier times1 err = " + JSON.stringify(err))
      return
    }
    console.info(logTag + " screenMagnifier  times1 data = " + JSON.stringify(data))
    config.screenMagnifier.set(setValue, (err, data) => {
      if (err?.code) {
        console.info(logTag + " screenMagnifier times2 err = " + JSON.stringify(err))
        return
      }
      console.info(logTag + " screenMagnifier  times2 data = " + JSON.stringify(data))
      config.screenMagnifier.set(setValue, (err, data) => {
        if (err?.code) {
          console.info(logTag + " screenMagnifier times3 err = " + JSON.stringify(err))
          return
        }
        console.info(logTag + " screenMagnifier  times3 data = " + JSON.stringify(data))
      })
    })
  })
}

const SetGetScreenMagnifier_0070 = () => {
  const caseName = "SetGetScreenMagnifier_0070"
  const logTag = LOG + caseName;
  var setValue: boolean = true
  config.screenMagnifier.set(setValue, (err, data) => {
    if (err?.code) {
      console.info(logTag + " screenMagnifier times1 err = " + JSON.stringify(err))
      return
    }
    console.info(logTag + " screenMagnifier  times1 data = " + JSON.stringify(data))
    config.screenMagnifier.set(setValue, (err, data) => {
      if (err?.code) {
        console.info(logTag + " screenMagnifier times2 err = " + JSON.stringify(err))
        return
      }
      console.info(logTag + " screenMagnifier  times2 data = " + JSON.stringify(data))
      config.screenMagnifier.set(setValue, (err, data) => {
        if (err?.code) {
          console.info(logTag + " screenMagnifier times3 err = " + JSON.stringify(err))
          return
        }
        console.info(logTag + " screenMagnifier  times3 data = " + JSON.stringify(data))
      })
    })
  })
}

const SetGetScreenMagnifier_0080 = () => {
  const caseName = "SetGetScreenMagnifier_0080"
  const logTag = LOG + caseName;
  var setValue: boolean = false
  config.screenMagnifier.set(setValue).then(() => {
    console.info(logTag + " screenMagnifier set1 success");
    config.screenMagnifier.set(setValue).then(() => {
      console.info(logTag + " screenMagnifier set2 success");
      config.screenMagnifier.set(setValue).then(() => {
        console.info(logTag + " screenMagnifier set3 success");
      }).catch((err) => {
        console.info(logTag + " screenMagnifier set3 err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + " screenMagnifier set2 err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + " screenMagnifier set1 err=" + JSON.stringify(err));
  });
}

const SetGetScreenMagnifier_0090 = () => {
  const caseName = "SetGetScreenMagnifier_0090"
  const logTag = LOG + caseName;
  var setValue: boolean = true
  config.screenMagnifier.set(setValue).then(() => {
    console.info(logTag + " screenMagnifier set1 success");
    config.screenMagnifier.set(setValue).then(() => {
      console.info(logTag + " screenMagnifier set2 success");
      config.screenMagnifier.set(setValue).then(() => {
        console.info(logTag + " screenMagnifier set3 success");
      }).catch((err) => {
        console.info(logTag + " screenMagnifier set3 err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + " screenMagnifier set2 err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + " screenMagnifier set1 err=" + JSON.stringify(err));
  });
}

const excuteAbility = (data) => {
  switch (data) {
    case "RegisterScreenMagnifier_0010" + "_AccessibilityApp_start":
      RegisterScreenMagnifier_0010()
      break;
    case "RegisterScreenMagnifier_0020" + "_AccessibilityApp_start":
      RegisterScreenMagnifier_0020()
      break;
    case "UnRegisterScreenMagnifier_0010" + "_AccessibilityApp_start":
      UnRegisterScreenMagnifier_0010()
      break;
    case "UnRegisterScreenMagnifier_0020" + "_AccessibilityApp_start":
      UnRegisterScreenMagnifier_0020()
      break;
    case "SetGetScreenMagnifier_0010" + "_AccessibilityApp_start":
      SetGetScreenMagnifier_0010()
      break;
    case "SetGetScreenMagnifier_0020" + "_AccessibilityApp_start":
      SetGetScreenMagnifier_0020()
      break;
    case "SetGetScreenMagnifier_0030" + "_AccessibilityApp_start":
      SetGetScreenMagnifier_0030()
      break;
    case "SetGetScreenMagnifier_0040" + "_AccessibilityApp_start":
      SetGetScreenMagnifier_0040()
      break;
    case "SetGetScreenMagnifier_0050" + "_AccessibilityApp_start":
      SetGetScreenMagnifier_0050()
      break;
    case "SetGetScreenMagnifier_0060" + "_AccessibilityApp_start":
      SetGetScreenMagnifier_0060()
      break;
    case "SetGetScreenMagnifier_0070" + "_AccessibilityApp_start":
      SetGetScreenMagnifier_0070()
      break;
    case "SetGetScreenMagnifier_0080" + "_AccessibilityApp_start":
      SetGetScreenMagnifier_0080()
      break;
    case "SetGetScreenMagnifier_0090" + "_AccessibilityApp_start":
      SetGetScreenMagnifier_0090()
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
