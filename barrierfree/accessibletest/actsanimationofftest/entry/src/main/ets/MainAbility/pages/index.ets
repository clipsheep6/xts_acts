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

const RegisterAnimationOff_0010 = () => {
  const caseName = "RegisterAnimationOff_0010"
  const logTag = LOG + caseName;
  var setValue: boolean = true
  config.animationOff.get().then((res) => {
    console.info(logTag + "AnimationOff before modification = ", JSON.stringify(res));
    config.animationOff.set(setValue).then(() => {
      config.animationOff.get().then((res) => {
        console.info(logTag + "after AnimationOff get res=" + JSON.stringify(res));
        if (res === setValue) {
          commonEventPublishOnTargetChangeExtra(caseName);
        }
      }).catch((err) => {
        console.info(logTag + "after AnimationOff get err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + "AnimationOff set err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + "before AnimationOff get err=" + JSON.stringify(err));
  });
}

const RegisterAnimationOff_0020 = () => {
  const caseName = "RegisterAnimationOff_0020"
  const logTag = LOG + caseName;
  var setValue: boolean = false
  config.animationOff.get().then((res) => {
    console.info(logTag + "AnimationOff before modification = ", JSON.stringify(res));
    config.animationOff.set(setValue).then(() => {
      config.animationOff.get().then((res) => {
        console.info(logTag + "after AnimationOff get res=" + JSON.stringify(res));
        if (res === setValue) {
          commonEventPublishOnTargetChangeExtra(caseName);
        }
      }).catch((err) => {
        console.info(logTag + "after AnimationOff get err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + "AnimationOff set err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + "before AnimationOff get err=" + JSON.stringify(err));
  });
}

const UnRegisterAnimationOff_0010 = () => {
  const caseName = "UnRegisterAnimationOff_0010"
  const logTag = LOG + caseName;
  var setValue: boolean = true
  config.animationOff.get().then((res) => {
    console.info(logTag + "AnimationOff before modification = ", JSON.stringify(res));
    config.animationOff.set(setValue).then(() => {
      config.animationOff.get().then((res) => {
        console.info(logTag + "after AnimationOff get res=" + JSON.stringify(res));
        if (res === setValue) {
          commonEventPublishOnTargetChangeExtra(caseName);
        }
      }).catch((err) => {
        console.info(logTag + "after AnimationOff get err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + "AnimationOff set err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + "before AnimationOff get err=" + JSON.stringify(err));
  });
}

const UnRegisterAnimationOff_0020 = () => {
  const caseName = "UnRegisterAnimationOff_0020"
  const logTag = LOG + caseName;
  var setValue: boolean = false
  config.animationOff.get().then((res) => {
    console.info(logTag + "AnimationOff before modification = ", JSON.stringify(res));
    config.animationOff.set(setValue).then(() => {
      config.animationOff.get().then((res) => {
        console.info(logTag + "after AnimationOff get res=" + JSON.stringify(res));
        if (res === setValue) {
          commonEventPublishOnTargetChangeExtra(caseName);
        }
      }).catch((err) => {
        console.info(logTag + "after AnimationOff get err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + "AnimationOff set err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + "before AnimationOff get err=" + JSON.stringify(err));
  });
}

const SetGetAnimationOff_0010 = () => {
  const caseName = "SetGetAnimationOff_0010"
  const logTag = LOG + caseName;
  var setValue: boolean = true
  config.animationOff.get((err, res) => {
    if (err?.code) {
      console.info(logTag + "AnimationOff get err=" + JSON.stringify(err));
      return
    }
    console.info(logTag + "AnimationOff get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  })
}

const SetGetAnimationOff_0020 = () => {
  const caseName = "SetGetAnimationOff_0020"
  const logTag = LOG + caseName;
  var setValue: boolean = false
  config.animationOff.get((err, res) => {
    if (err?.code) {
      console.info(logTag + "AnimationOff get err=" + JSON.stringify(err));
      return
    }
    console.info(logTag + "AnimationOff get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  })
}

const SetGetAnimationOff_0030 = () => {
  const caseName = "SetGetAnimationOff_0030"
  const logTag = LOG + caseName;
  var setValue: boolean = true
  config.animationOff.get().then((res) => {
    console.info(logTag + "AnimationOff get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  }).catch((err) => {
    console.info(logTag + " AnimationOff get err=" + JSON.stringify(err));
  });
}

const SetGetAnimationOff_0040 = () => {
  const caseName = "SetGetAnimationOff_0040"
  const logTag = LOG + caseName;
  var setValue: boolean = false
  config.animationOff.get().then((res) => {
    console.info(logTag + "AnimationOff get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  }).catch((err) => {
    console.info(logTag + " AnimationOff get err=" + JSON.stringify(err));
  });
}

const SetGetAnimationOff_0050 = () => {
  const caseName = "SetGetAnimationOff_0050"
  const logTag = LOG + caseName;
  var setValue: boolean = true
  config.animationOff.get().then((res) => {
    console.info(logTag + "AnimationOff get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  }).catch((err) => {
    console.info(logTag + " AnimationOff get err=" + JSON.stringify(err));
  });
}

const SetGetAnimationOff_0060 = () => {
  const caseName = "SetGetAnimationOff_0060"
  const logTag = LOG + caseName;
  var setValue: boolean = false
  config.animationOff.set(setValue, (err, data) => {
    if (err?.code) {
      console.info(logTag + " AnimationOff times1 err = " + JSON.stringify(err))
      return
    }
    console.info(logTag + " AnimationOff  times1 data = " + JSON.stringify(data))
    config.animationOff.set(setValue, (err, data) => {
      if (err?.code) {
        console.info(logTag + " AnimationOff times2 err = " + JSON.stringify(err))
        return
      }
      console.info(logTag + " AnimationOff  times2 data = " + JSON.stringify(data))
      config.animationOff.set(setValue, (err, data) => {
        if (err?.code) {
          console.info(logTag + " AnimationOff times3 err = " + JSON.stringify(err))
          return
        }
        console.info(logTag + " AnimationOff  times3 data = " + JSON.stringify(data))
      })
    })
  })
}

const SetGetAnimationOff_0070 = () => {
  const caseName = "SetGetAnimationOff_0070"
  const logTag = LOG + caseName;
  var setValue: boolean = true
  config.animationOff.set(setValue, (err, data) => {
    if (err?.code) {
      console.info(logTag + " AnimationOff times1 err = " + JSON.stringify(err))
      return
    }
    console.info(logTag + " AnimationOff  times1 data = " + JSON.stringify(data))
    config.animationOff.set(setValue, (err, data) => {
      if (err?.code) {
        console.info(logTag + " AnimationOff times2 err = " + JSON.stringify(err))
        return
      }
      console.info(logTag + " AnimationOff  times2 data = " + JSON.stringify(data))
      config.animationOff.set(setValue, (err, data) => {
        if (err?.code) {
          console.info(logTag + " AnimationOff times3 err = " + JSON.stringify(err))
          return
        }
        console.info(logTag + " AnimationOff  times3 data = " + JSON.stringify(data))
      })
    })
  })
}

const SetGetAnimationOff_0080 = () => {
  const caseName = "SetGetAnimationOff_0080"
  const logTag = LOG + caseName;
  var setValue: boolean = false
  config.animationOff.set(setValue).then(() => {
    console.info(logTag + " AnimationOff set1 success");
    config.animationOff.set(setValue).then(() => {
      console.info(logTag + " AnimationOff set2 success");
      config.animationOff.set(setValue).then(() => {
        console.info(logTag + " AnimationOff set3 success");
      }).catch((err) => {
        console.info(logTag + " AnimationOff set3 err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + " AnimationOff set2 err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + " AnimationOff set1 err=" + JSON.stringify(err));
  });
}

const SetGetAnimationOff_0090 = () => {
  const caseName = "SetGetAnimationOff_0090"
  const logTag = LOG + caseName;
  var setValue: boolean = true
  config.animationOff.set(setValue).then(() => {
    console.info(logTag + " AnimationOff set1 success");
    config.animationOff.set(setValue).then(() => {
      console.info(logTag + " AnimationOff set2 success");
      config.animationOff.set(setValue).then(() => {
        console.info(logTag + " AnimationOff set3 success");
      }).catch((err) => {
        console.info(logTag + " AnimationOff set3 err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + " AnimationOff set2 err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + " AnimationOff set1 err=" + JSON.stringify(err));
  });
}

const excuteAbility = (data) => {
  switch (data) {
    case "RegisterAnimationOff_0010" + "_AccessibilityApp_start":
      RegisterAnimationOff_0010()
      break;
    case "RegisterAnimationOff_0020" + "_AccessibilityApp_start":
      RegisterAnimationOff_0020()
      break;
    case "UnRegisterAnimationOff_0010" + "_AccessibilityApp_start":
      UnRegisterAnimationOff_0010()
      break;
    case "UnRegisterAnimationOff_0020" + "_AccessibilityApp_start":
      UnRegisterAnimationOff_0020()
      break;
    case "SetGetAnimationOff_0010" + "_AccessibilityApp_start":
      SetGetAnimationOff_0010()
      break;
    case "SetGetAnimationOff_0020" + "_AccessibilityApp_start":
      SetGetAnimationOff_0020()
      break;
    case "SetGetAnimationOff_0030" + "_AccessibilityApp_start":
      SetGetAnimationOff_0030()
      break;
    case "SetGetAnimationOff_0040" + "_AccessibilityApp_start":
      SetGetAnimationOff_0040()
      break;
    case "SetGetAnimationOff_0050" + "_AccessibilityApp_start":
      SetGetAnimationOff_0050()
      break;
    case "SetGetAnimationOff_0060" + "_AccessibilityApp_start":
      SetGetAnimationOff_0060()
      break;
    case "SetGetAnimationOff_0070" + "_AccessibilityApp_start":
      SetGetAnimationOff_0070()
      break;
    case "SetGetAnimationOff_0080" + "_AccessibilityApp_start":
      SetGetAnimationOff_0080()
      break;
    case "SetGetAnimationOff_0090" + "_AccessibilityApp_start":
      SetGetAnimationOff_0090()
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
  }

  aboutToDisappear() {
    console.info('TargetApp aboutToDisappear');
    commonEvent.unsubscribe(this.subScriber);
    this.subScriber = undefined;
  }

  build() {
    Row() {
      Column() {
        Text('AnimationOff')
          .fontSize(15)
          .fontWeight(FontWeight.Bold)
          .margin(50)
      }
      .width('100%')
    }
    .height('100%')
  }
}
