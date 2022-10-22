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

const RegisterAudioMono_0010 = () => {
  const caseName = "RegisterAudioMono_0010"
  const logTag = LOG + caseName;
  var setValue: boolean = true
  config.audioMono.get().then((res) => {
    console.info(logTag + "AudioMono before modification = ", JSON.stringify(res));
    config.audioMono.set(setValue).then(() => {
      config.audioMono.get().then((res) => {
        console.info(logTag + "after AudioMono get res=" + JSON.stringify(res));
        if (res === setValue) {
          commonEventPublishOnTargetChangeExtra(caseName);
        }
      }).catch((err) => {
        console.info(logTag + "after AudioMono get err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + "AudioMono set err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + "before AudioMono get err=" + JSON.stringify(err));
  });
}

const RegisterAudioMono_0020 = () => {
  const caseName = "RegisterAudioMono_0020"
  const logTag = LOG + caseName;
  var setValue: boolean = false
  config.audioMono.get().then((res) => {
    console.info(logTag + "AudioMono before modification = ", JSON.stringify(res));
    config.audioMono.set(setValue).then(() => {
      config.audioMono.get().then((res) => {
        console.info(logTag + "after AudioMono get res=" + JSON.stringify(res));
        if (res === setValue) {
          commonEventPublishOnTargetChangeExtra(caseName);
        }
      }).catch((err) => {
        console.info(logTag + "after AudioMono get err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + "AudioMono set err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + "before AudioMono get err=" + JSON.stringify(err));
  });
}

const UnRegisterAudioMono_0010 = () => {
  const caseName = "UnRegisterAudioMono_0010"
  const logTag = LOG + caseName;
  var setValue: boolean = true
  config.audioMono.get().then((res) => {
    console.info(logTag + "AudioMono before modification = ", JSON.stringify(res));
    config.audioMono.set(setValue).then(() => {
      config.audioMono.get().then((res) => {
        console.info(logTag + "after AudioMono get res=" + JSON.stringify(res));
        if (res === setValue) {
          commonEventPublishOnTargetChangeExtra(caseName);
        }
      }).catch((err) => {
        console.info(logTag + "after AudioMono get err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + "AudioMono set err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + "before AudioMono get err=" + JSON.stringify(err));
  });
}

const UnRegisterAudioMono_0020 = () => {
  const caseName = "UnRegisterAudioMono_0020"
  const logTag = LOG + caseName;
  var setValue: boolean = false
  config.audioMono.get().then((res) => {
    console.info(logTag + "AudioMono before modification = ", JSON.stringify(res));
    config.audioMono.set(setValue).then(() => {
      config.audioMono.get().then((res) => {
        console.info(logTag + "after AudioMono get res=" + JSON.stringify(res));
        if (res === setValue) {
          commonEventPublishOnTargetChangeExtra(caseName);
        }
      }).catch((err) => {
        console.info(logTag + "after AudioMono get err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + "AudioMono set err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + "before AudioMono get err=" + JSON.stringify(err));
  });
}

const SetGetAudioMono_0010 = () => {
  const caseName = "SetGetAudioMono_0010"
  const logTag = LOG + caseName;
  var setValue: boolean = true
  config.audioMono.get((err, res) => {
    if (err?.code) {
      console.info(logTag + "AudioMono get err=" + JSON.stringify(err));
      return
    }
    console.info(logTag + "AudioMono get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  })
}

const SetGetAudioMono_0020 = () => {
  const caseName = "SetGetAudioMono_0020"
  const logTag = LOG + caseName;
  var setValue: boolean = false
  config.audioMono.get((err, res) => {
    if (err?.code) {
      console.info(logTag + "AudioMono get err=" + JSON.stringify(err));
      return
    }
    console.info(logTag + "AudioMono get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  })
}

const SetGetAudioMono_0030 = () => {
  const caseName = "SetGetAudioMono_0030"
  const logTag = LOG + caseName;
  var setValue: boolean = true
  config.audioMono.get().then((res) => {
    console.info(logTag + "AudioMono get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  }).catch((err) => {
    console.info(logTag + " AudioMono get err=" + JSON.stringify(err));
  });
}

const SetGetAudioMono_0040 = () => {
  const caseName = "SetGetAudioMono_0040"
  const logTag = LOG + caseName;
  var setValue: boolean = false
  config.audioMono.get().then((res) => {
    console.info(logTag + "AudioMono get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  }).catch((err) => {
    console.info(logTag + " AudioMono get err=" + JSON.stringify(err));
  });
}

const SetGetAudioMono_0050 = () => {
  const caseName = "SetGetAudioMono_0050"
  const logTag = LOG + caseName;
  var setValue: boolean = true
  config.audioMono.get().then((res) => {
    console.info(logTag + "AudioMono get res=" + JSON.stringify(res));
    if (res === setValue) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  }).catch((err) => {
    console.info(logTag + " AudioMono get err=" + JSON.stringify(err));
  });
}

const SetGetAudioMono_0060 = () => {
  const caseName = "SetGetAudioMono_0060"
  const logTag = LOG + caseName;
  var setValue: boolean = false
  config.audioMono.set(setValue, (err, data) => {
    if (err?.code) {
      console.info(logTag + " audioMono times1 err = " + JSON.stringify(err))
      return
    }
    console.info(logTag + " audioMono  times1 data = " + JSON.stringify(data))
    config.audioMono.set(setValue, (err, data) => {
      if (err?.code) {
        console.info(logTag + " audioMono times2 err = " + JSON.stringify(err))
        return
      }
      console.info(logTag + " audioMono  times2 data = " + JSON.stringify(data))
      config.audioMono.set(setValue, (err, data) => {
        if (err?.code) {
          console.info(logTag + " audioMono times3 err = " + JSON.stringify(err))
          return
        }
        console.info(logTag + " audioMono  times3 data = " + JSON.stringify(data))
      })
    })
  })
}

const SetGetAudioMono_0070 = () => {
  const caseName = "SetGetAudioMono_0070"
  const logTag = LOG + caseName;
  var setValue: boolean = true
  config.audioMono.set(setValue, (err, data) => {
    if (err?.code) {
      console.info(logTag + " audioMono times1 err = " + JSON.stringify(err))
      return
    }
    console.info(logTag + " audioMono  times1 data = " + JSON.stringify(data))
    config.audioMono.set(setValue, (err, data) => {
      if (err?.code) {
        console.info(logTag + " audioMono times2 err = " + JSON.stringify(err))
        return
      }
      console.info(logTag + " audioMono  times2 data = " + JSON.stringify(data))
      config.audioMono.set(setValue, (err, data) => {
        if (err?.code) {
          console.info(logTag + " audioMono times3 err = " + JSON.stringify(err))
          return
        }
        console.info(logTag + " audioMono  times3 data = " + JSON.stringify(data))
      })
    })
  })
}

const SetGetAudioMono_0080 = () => {
  const caseName = "SetGetAudioMono_0080"
  const logTag = LOG + caseName;
  var setValue: boolean = false
  config.audioMono.set(setValue).then(() => {
    console.info(logTag + " audioMono set1 success");
    config.audioMono.set(setValue).then(() => {
      console.info(logTag + " audioMono set2 success");
      config.audioMono.set(setValue).then(() => {
        console.info(logTag + " audioMono set3 success");
      }).catch((err) => {
        console.info(logTag + " audioMono set3 err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + " audioMono set2 err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + " audioMono set1 err=" + JSON.stringify(err));
  });
}

const SetGetAudioMono_0090 = () => {
  const caseName = "SetGetAudioMono_0090"
  const logTag = LOG + caseName;
  var setValue: boolean = true
  config.audioMono.set(setValue).then(() => {
    console.info(logTag + " audioMono set1 success");
    config.audioMono.set(setValue).then(() => {
      console.info(logTag + " audioMono set2 success");
      config.audioMono.set(setValue).then(() => {
        console.info(logTag + " audioMono set3 success");
      }).catch((err) => {
        console.info(logTag + " audioMono set3 err=" + JSON.stringify(err));
      });
    }).catch((err) => {
      console.info(logTag + " audioMono set2 err=" + JSON.stringify(err));
    });
  }).catch((err) => {
    console.info(logTag + " audioMono set1 err=" + JSON.stringify(err));
  });
}


const excuteAbility = (data) => {
  switch (data) {
    case "RegisterAudioMono_0010" + "_AccessibilityApp_start":
      RegisterAudioMono_0010()
      break;
    case "RegisterAudioMono_0020" + "_AccessibilityApp_start":
      RegisterAudioMono_0020()
      break;
    case "UnRegisterAudioMono_0010" + "_AccessibilityApp_start":
      UnRegisterAudioMono_0010()
      break;
    case "UnRegisterAudioMono_0020" + "_AccessibilityApp_start":
      UnRegisterAudioMono_0020()
      break;
    case "SetGetAudioMono_0010" + "_AccessibilityApp_start":
      SetGetAudioMono_0010()
      break;
    case "SetGetAudioMono_0020" + "_AccessibilityApp_start":
      SetGetAudioMono_0020()
      break;
    case "SetGetAudioMono_0030" + "_AccessibilityApp_start":
      SetGetAudioMono_0030()
      break;
    case "SetGetAudioMono_0040" + "_AccessibilityApp_start":
      SetGetAudioMono_0040()
      break;
    case "SetGetAudioMono_0050" + "_AccessibilityApp_start":
      SetGetAudioMono_0050()
      break;
    case "SetGetAudioMono_0060" + "_AccessibilityApp_start":
      SetGetAudioMono_0060()
      break;
    case "SetGetAudioMono_0070" + "_AccessibilityApp_start":
      SetGetAudioMono_0070()
      break;
    case "SetGetAudioMono_0080" + "_AccessibilityApp_start":
      SetGetAudioMono_0080()
      break;
    case "SetGetAudioMono_0090" + "_AccessibilityApp_start":
      SetGetAudioMono_0090()
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
        Text('AudioMono')
          .fontSize(15)
          .fontWeight(FontWeight.Bold)
          .margin(50)
      }
      .width('100%')
    }
    .height('100%')
  }
}
