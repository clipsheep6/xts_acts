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
import config from '@ohos.accessibility.config'
import prompt from '@system.prompt'

const Log: string = "[xtsLog] "

const RegisterHighContrastText_0010 = () => {
  const caseName = "RegisterHighContrastText_0010"
  const logTag = Log + caseName;
  console.info(logTag + " Start.");
  config.highContrastText.set(true, (err) => {
    if (err?.code) {
      console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
      return;
    }
    commonEventPublishOnTargetChangeExtra()
  });
}

const RegisterHighContrastText_0020 = () => {
  const caseName = "RegisterHighContrastText_0020"
  const logTag = Log + caseName;
  console.info(logTag + " Start.");
  config.highContrastText.set(false, (err) => {
    if (err?.code) {
      console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
      return;
    }
    commonEventPublishOnTargetChangeExtra()
  });
}

const UnRegisterHighContrastText_0010 = () => {
  const caseName = "UnRegisterHighContrastText_0010"
  const logTag = Log + caseName;
  console.info(logTag + " Start.");
  config.highContrastText.set(true, (err) => {
    if (err?.code) {
      console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
      return;
    }
    commonEventPublishOnTargetChangeExtra()
  });
}

const UnRegisterHighContrastText_0020 = () => {
  const caseName = "UnRegisterHighContrastText_0020"
  const logTag = Log + caseName;
  console.info(logTag + " Start.");
  config.highContrastText.set(false, (err) => {
    if (err?.code) {
      console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
      return;
    }
    commonEventPublishOnTargetChangeExtra()
  });
}

const SetGetHighContrastText_0010 = () => {
  const caseName = "SetGetHighContrastText_0010"
  const logTag = Log + caseName;
  console.info(logTag + " Start.");
  config.highContrastText.get().then((res) => {
    console.info(logTag + " Config get highContrastText=" + res);
    if (res) {
      commonEventPublishOnTargetChangeExtra()
    }
  }).catch((err) => {
    console.info(logTag + " highContrastText get err=" + JSON.stringify(err));
  });
}

const SetGetHighContrastText_0020 = () => {
  const caseName = "SetGetHighContrastText_0020"
  const logTag = Log + caseName;
  console.info(logTag + " Start.");
  config.highContrastText.get().then((res) => {
    console.info(logTag + " Config get highContrastText=" + res);
    if (!res) {
      commonEventPublishOnTargetChangeExtra()
    }
  }).catch((err) => {
    console.info(logTag + " highContrastText get err=" + JSON.stringify(err));
  });
}

const SetGetHighContrastText_0030 = () => {
  const caseName = "SetGetHighContrastText_0030"
  const logTag = Log + caseName;
  console.info(logTag + " Start.");
  config.highContrastText.get((err, res) => {
    if (err?.code) {
      console.info(logTag + " highContrastText get err=" + JSON.stringify(err));
      return;
    }
    console.info(logTag + " highContrastText get res=" + res);
    if (res) {
      commonEventPublishOnTargetChangeExtra()
    }
  })
}

const SetGetHighContrastText_0040 = () => {
  const caseName = "SetGetHighContrastText_0040"
  const logTag = Log + caseName;
  console.info(logTag + " Start.");
  config.highContrastText.get((err, res) => {
    if (err?.code) {
      console.info(logTag + " highContrastText get err=" + JSON.stringify(err));
      return;
    }
    console.info(logTag + " highContrastText get res=" + res);
    if (!res) {
      commonEventPublishOnTargetChangeExtra()
    }
  })
}

const SetGetHighContrastText_0050 = () => {
  const caseName = "SetGetHighContrastText_0050"
  const logTag = Log + caseName;
  console.info(logTag + " Start.");
  config.highContrastText.get((err, res) => {
    if (err?.code) {
      console.info(logTag + " highContrastText get err=" + JSON.stringify(err));
      return;
    }
    console.info(logTag + " highContrastText get res=" + res);
    if (res) {
      commonEventPublishOnTargetChangeExtra()
    }
  })
}

const SetGetHighContrastText_0060 = () => {
  const caseName = "SetGetHighContrastText_0060"
  const logTag = Log + caseName;
  console.info(logTag + " Start.");
  config.highContrastText.set(true, (err) => {
    if (err?.code) {
      console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
      return;
    }
    console.info(logTag + " highContrastText set time 1 success")
    config.highContrastText.set(true, (err) => {
      if (err?.code) {
        console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
        return;
      }
      console.info(logTag + " highContrastText set time 2 success")
      config.highContrastText.set(true, (err) => {
        if (err?.code) {
          console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
          return;
        }
        console.info(logTag + " highContrastText set time 3 success")
        commonEventPublishOnTargetChangeExtra()
      });
    });
  });
}

const SetGetHighContrastText_0070 = () => {
  const caseName = "SetGetHighContrastText_0070"
  const logTag = Log + caseName;
  console.info(logTag + " Start.");
  config.highContrastText.set(false, (err) => {
    if (err?.code) {
      console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
      return;
    }
    console.info(logTag + " highContrastText set time 1 success")
    config.highContrastText.set(false, (err) => {
      if (err?.code) {
        console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
        return;
      }
      console.info(logTag + " highContrastText set time 2 success")
      config.highContrastText.set(false, (err) => {
        if (err?.code) {
          console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
          return;
        }
        console.info(logTag + " highContrastText set time 3 success")
        commonEventPublishOnTargetChangeExtra()
      });
    });
  });
}

const SetGetHighContrastText_0080 = () => {
  const caseName = "SetGetHighContrastText_0080"
  const logTag = Log + caseName;
  console.info(logTag + " Start.");
  config.highContrastText.set(true).then(() => {
    console.info(logTag + " highContrastText set time 1 success");
    config.highContrastText.set(true).then(() => {
      console.info(logTag + " highContrastText set time 2 success");
      config.highContrastText.set(true).then(() => {
        console.info(logTag + " highContrastText set time 3 success");
        commonEventPublishOnTargetChangeExtra()
      }).catch((err) => {
        console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
      })
    }).catch((err) => {
      console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
    })
  }).catch((err) => {
    console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
  })
}

const SetGetHighContrastText_0090 = () => {
  const caseName = "SetGetHighContrastText_0090"
  const logTag = Log + caseName;
  console.info(logTag + " Start.");
  config.highContrastText.set(false).then(() => {
    console.info(logTag + " highContrastText set time 1 success");
    config.highContrastText.set(false).then(() => {
      console.info(logTag + " highContrastText set time 2 success");
      config.highContrastText.set(false).then(() => {
        console.info(logTag + " highContrastText set time 3 success");
        commonEventPublishOnTargetChangeExtra()
      }).catch((err) => {
        console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
      })
    }).catch((err) => {
      console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
    })
  }).catch((err) => {
    console.info(logTag + " highContrastText set err=" + JSON.stringify(err));
  })
}

const RegisterInvertColor_0010 = () => {
  const caseName = "RegisterInvertColor_0010"
  const logTag = Log + caseName;
  console.info(logTag + " Start.");
  config.invertColor.set(true, (err) => {
    if (err?.code) {
      console.info(logTag + " invertColor set err=" + JSON.stringify(err));
      return;
    }
    commonEventPublishOnTargetChangeExtra()
  });
}

const RegisterInvertColor_0020 = () => {
  const caseName = "RegisterInvertColor_0020"
  const logTag = Log + caseName;
  console.info(logTag + " Start.");
  config.invertColor.set(false, (err) => {
    if (err?.code) {
      console.info(logTag + " invertColor set err=" + JSON.stringify(err));
      return;
    }
    commonEventPublishOnTargetChangeExtra()
  });
}

const UnRegisterInvertColor_0010 = () => {
  const caseName = "UnRegisterInvertColor_0010"
  const logTag = Log + caseName;
  console.info(logTag + " Start.");
  config.invertColor.set(true, (err) => {
    if (err?.code) {
      console.info(logTag + " invertColor set err=" + JSON.stringify(err));
      return;
    }
    commonEventPublishOnTargetChangeExtra()
  });
}

const UnRegisterInvertColor_0020 = () => {
  const caseName = "UnRegisterInvertColor_0020"
  const logTag = Log + caseName;
  console.info(logTag + " Start.");
  config.invertColor.set(false, (err) => {
    if (err?.code) {
      console.info(logTag + " invertColor set err=" + JSON.stringify(err));
      return;
    }
    commonEventPublishOnTargetChangeExtra()
  });
}

const SetGetInvertColor_0010 = () => {
  const caseName = "SetGetInvertColor_0010"
  const logTag = Log + caseName;
  console.info(logTag + " Start.");
  config.invertColor.get().then((res) => {
    console.info(logTag + " Config get invertColor=" + res);
    if (res) {
      commonEventPublishOnTargetChangeExtra()
    }
  }).catch((err) => {
    console.info(logTag + " invertColor get err=" + JSON.stringify(err));
  });
}

const SetGetInvertColor_0020 = () => {
  const caseName = "SetGetInvertColor_0020"
  const logTag = Log + caseName;
  console.info(logTag + " Start.");
  config.invertColor.get().then((res) => {
    console.info(logTag + " Config get invertColor=" + res);
    if (!res) {
      commonEventPublishOnTargetChangeExtra()
    }
  }).catch((err) => {
    console.info(logTag + " invertColor get err=" + JSON.stringify(err));
  });
}

const SetGetInvertColor_0030 = () => {
  const caseName = "SetGetInvertColor_0030"
  const logTag = Log + caseName;
  console.info(logTag + " Start.");
  config.invertColor.get((err, res) => {
    if (err?.code) {
      console.info(logTag + " invertColor get err=" + JSON.stringify(err));
      return;
    }
    console.info(logTag + " Config get invertColor=" + res);
    if (res) {
      commonEventPublishOnTargetChangeExtra()
    }
  })
}

const SetGetInvertColor_0040 = () => {
  const caseName = "SetGetInvertColor_0040"
  const logTag = Log + caseName;
  console.info(logTag + " Start.");
  config.invertColor.get((err, res) => {
    if (err?.code) {
      console.info(logTag + " invertColor get err=" + JSON.stringify(err));
      return;
    }
    console.info(logTag + " Config get invertColor=" + res);
    if (!res) {
      commonEventPublishOnTargetChangeExtra()
    }
  })
}

const SetGetInvertColor_0050 = () => {
  const caseName = "SetGetInvertColor_0050"
  const logTag = Log + caseName;
  console.info(logTag + " Start.");
  config.invertColor.get((err, res) => {
    if (err?.code) {
      console.info(logTag + " invertColor get err=" + JSON.stringify(err));
      return;
    }
    console.info(logTag + " Config get invertColor=" + res);
    if (res) {
      commonEventPublishOnTargetChangeExtra()
    }
  })
}

const SetGetInvertColor_0060 = () => {
  const caseName = "SetGetInvertColor_0060"
  const logTag = Log + caseName;
  console.info(logTag + " Start.");
  config.invertColor.set(true, (err) => {
    if (err?.code) {
      console.info(logTag + " invertColor set err=" + JSON.stringify(err));
      return;
    }
    console.info(logTag + " invertColor set time 1 success")
    config.invertColor.set(true, (err) => {
      if (err?.code) {
        console.info(logTag + " invertColor set err=" + JSON.stringify(err));
        return;
      }
      console.info(logTag + " invertColor set time 2 success")
      config.invertColor.set(true, (err) => {
        if (err?.code) {
          console.info(logTag + " invertColor set err=" + JSON.stringify(err));
          return;
        }
        console.info(logTag + " invertColor set time 3 success")
        commonEventPublishOnTargetChangeExtra()
      });
    });
  });
}

const SetGetInvertColor_0070 = () => {
  const caseName = "SetGetInvertColor_0070"
  const logTag = Log + caseName;
  console.info(logTag + " Start.");
  config.invertColor.set(false, (err) => {
    if (err?.code) {
      console.info(logTag + " invertColor set err=" + JSON.stringify(err));
      return;
    }
    console.info(logTag + " invertColor set time 1 success")
    config.invertColor.set(false, (err) => {
      if (err?.code) {
        console.info(logTag + " invertColor set err=" + JSON.stringify(err));
        return;
      }
      console.info(logTag + " invertColor set time 2 success")
      config.invertColor.set(false, (err) => {
        if (err?.code) {
          console.info(logTag + " invertColor set err=" + JSON.stringify(err));
          return;
        }
        console.info(logTag + " invertColor set time 3 success")
        commonEventPublishOnTargetChangeExtra()
      });
    });
  });
}

const SetGetInvertColor_0080 = () => {
  const caseName = "SetGetInvertColor_0080"
  const logTag = Log + caseName;
  console.info(logTag + " Start.");
  config.invertColor.set(true).then(() => {
    console.info(logTag + " invertColor set time 1 success");
    config.invertColor.set(true).then(() => {
      console.info(logTag + " invertColor set time 2 success");
      config.invertColor.set(true).then(() => {
        console.info(logTag + " invertColor set time 3 success");
        commonEventPublishOnTargetChangeExtra()
      }).catch((err) => {
        console.info(logTag + " invertColor set err=" + JSON.stringify(err));
      })
    }).catch((err) => {
      console.info(logTag + " invertColor set err=" + JSON.stringify(err));
    })
  }).catch((err) => {
    console.info(logTag + " invertColor set err=" + JSON.stringify(err));
  })
}

const SetGetInvertColor_0090 = () => {
  const caseName = "SetGetInvertColor_0090"
  const logTag = Log + caseName;
  console.info(logTag + " Start.");
  config.invertColor.set(false).then(() => {
    console.info(logTag + " invertColor set time 1 success");
    config.invertColor.set(false).then(() => {
      console.info(logTag + " invertColor set time 2 success");
      config.invertColor.set(false).then(() => {
        console.info(logTag + " invertColor set time 3 success");
        commonEventPublishOnTargetChangeExtra()
      }).catch((err) => {
        console.info(logTag + " invertColor set err=" + JSON.stringify(err));
      })
    }).catch((err) => {
      console.info(logTag + " invertColor set err=" + JSON.stringify(err));
    })
  }).catch((err) => {
    console.info(logTag + " invertColor set err=" + JSON.stringify(err));
  })
}
const RegisterDaltonizationColorFilterSet = (caseName, colorFilter) => {
  const logTag = Log + caseName;
  console.info(logTag + " Start colorFilter:" + colorFilter);
  config.daltonizationColorFilter.set(colorFilter, (err) => {
    if (err?.code) {
      console.info(logTag + " daltonizationColorFilter set err=" + JSON.stringify(err));
      return;
    }
    commonEventPublishOnTargetChangeExtra()
  });
}

const RegisterDaltonizationColorFilterGetPromise = (caseName) => {
  const logTag = Log + caseName;
  let commonEventFlg = false;
  config.daltonizationColorFilter.get().then((res) => {
    console.info(logTag + " daltonizationColorFilter get res=" + JSON.stringify(res));
    switch (caseName) {
      case "SetGetDaltonizationColorFilter_0010":
        if (res == 'Normal') {
          commonEventFlg = true;
        }
        break;
      case "SetGetDaltonizationColorFilter_0020":
        if (res == 'Protanomaly') {
          commonEventFlg = true;
        }
        break;
      case "SetGetDaltonizationColorFilter_0030":
        if (res == 'Deuteranomaly') {
          commonEventFlg = true;
        }
        break;
      case "SetGetDaltonizationColorFilter_0040":
        if (res == 'Tritanomaly') {
          commonEventFlg = true;
        }
        break;
      default:
        break;
    }
    if (commonEventFlg) {
      commonEventPublishOnTargetChangeExtra()
    }
  }).catch((err) => {
    console.info(logTag + " daltonizationColorFilter get err=" + JSON.stringify(err));
  });
}

const RegisterDaltonizationColorFilterGetCallBack = (caseName) => {
  const logTag = Log + caseName;
  let commonEventFlg = false;
  config.daltonizationColorFilter.get((err, res) => {
    if (err?.code) {
      console.info(logTag + " daltonizationColorFilter get err=" + JSON.stringify(err));
      return;
    }
    console.info(logTag + " daltonizationColorFilter ger res=" + res);
    switch (caseName) {
      case "SetGetDaltonizationColorFilter_0050":
        if (res == 'Normal') {
          commonEventFlg = true;
        }
        break;
      case "SetGetDaltonizationColorFilter_0060":
        if (res == 'Protanomaly') {
          commonEventFlg = true;
        }
        break;
      case "SetGetDaltonizationColorFilter_0070":
        if (res == 'Deuteranomaly') {
          commonEventFlg = true;
        }
        break;
      case "SetGetDaltonizationColorFilter_0080":
        if (res == 'Tritanomaly') {
          commonEventFlg = true;
        }
        break;
      default:
        break;
    }
    if (commonEventFlg) {
      commonEventPublishOnTargetChangeExtra()
    }
  });
}

const RegisterDaltonizationColorFilterGet = () => {
  const logTag = Log + 'SetGetDaltonizationColorFilter_0090';
  console.info(logTag + " Start.");
  config.daltonizationColorFilter.get((err, res) => {
    if (err?.code) {
      console.info(logTag + " daltonizationColorFilter get err=" + JSON.stringify(err));
      return;
    }
    console.info(logTag + " daltonizationColorFilter ger res=" + res);
    if (res == 'Deuteranomaly') {
      commonEventPublishOnTargetChangeExtra()
    }
  });
}

const SetGetDaltonizationColorFilter_0100 = () => {
  const logTag = Log + 'SetGetDaltonizationColorFilter_0100';
  console.info(logTag + " Start.");
  config.daltonizationColorFilter.set('Protanomaly', (err) => {
    if (err?.code) {
      console.info(logTag + " daltonizationColorFilter set err=" + JSON.stringify(err));
      return;
    }
    console.info(logTag + " daltonizationColorFilter set time 1 success")
    config.daltonizationColorFilter.set('Protanomaly', (err) => {
      if (err?.code) {
        console.info(logTag + " daltonizationColorFilter set err=" + JSON.stringify(err));
        return;
      }
      console.info(logTag + " daltonizationColorFilter set time 2 success")
      config.daltonizationColorFilter.set('Protanomaly', (err) => {
        if (err?.code) {
          console.info(logTag + " daltonizationColorFilter set err=" + JSON.stringify(err));
          return;
        }
        console.info(logTag + " daltonizationColorFilter set time 3 success")
        commonEventPublishOnTargetChangeExtra()
      })
    })
  })
}

const SetGetDaltonizationColorFilter_0110 = () => {
  const logTag = Log + 'SetGetDaltonizationColorFilter_0110';
  console.info(logTag + " Start.");
  config.daltonizationColorFilter.set('Protanomaly').then(() => {
    console.info(logTag + " daltonizationColorFilter set time 1 success")
    config.daltonizationColorFilter.set('Protanomaly').then(() => {
      console.info(logTag + " daltonizationColorFilter set time 2 success")
      config.daltonizationColorFilter.set('Protanomaly').then(() => {
        console.info(logTag + " daltonizationColorFilter set time 3 success")
        commonEventPublishOnTargetChangeExtra()
      }).catch((err) => {
        console.info(logTag + " daltonizationColorFilter set Protanomaly err=" + JSON.stringify(err));
      })
    }).catch((err) => {
      console.info(logTag + " daltonizationColorFilter set Protanomaly err=" + JSON.stringify(err));
    })
  }).catch((err) => {
    console.info(logTag + " daltonizationColorFilter set Protanomaly err=" + JSON.stringify(err));
  })
}

const commonEventPublishOnTargetChangeExtra = () => {
  function publishCallback(err) {
    console.info(Log + "on_target_change_extra result:" + JSON.stringify(err));
  }

  var commonEventPublishData = {
    data: "on_target_change_extra_success",
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback);
}
const excuteAction = (data) => {
  switch (data) {
    case "RegisterHighContrastText_0010":
      RegisterHighContrastText_0010();
      break;
    case "RegisterHighContrastText_0020":
      RegisterHighContrastText_0020();
      break;
    case "UnRegisterHighContrastText_0010":
      UnRegisterHighContrastText_0010();
      break;
    case "UnRegisterHighContrastText_0020":
      UnRegisterHighContrastText_0020();
      break;
    case "SetGetHighContrastText_0010":
      SetGetHighContrastText_0010();
      break;
    case "SetGetHighContrastText_0020":
      SetGetHighContrastText_0020();
      break;
    case "SetGetHighContrastText_0030":
      SetGetHighContrastText_0030();
      break;
    case "SetGetHighContrastText_0040":
      SetGetHighContrastText_0040();
      break;
    case "SetGetHighContrastText_0050":
      SetGetHighContrastText_0050();
      break;
    case "SetGetHighContrastText_0060":
      SetGetHighContrastText_0060();
      break;
    case "SetGetHighContrastText_0070":
      SetGetHighContrastText_0070();
      break;
    case "SetGetHighContrastText_0080":
      SetGetHighContrastText_0080();
      break;
    case "SetGetHighContrastText_0090":
      SetGetHighContrastText_0090();
      break;
    case "RegisterInvertColor_0010":
      RegisterInvertColor_0010();
      break;
    case "RegisterInvertColor_0020":
      RegisterInvertColor_0020();
      break;
    case "UnRegisterInvertColor_0010":
      UnRegisterInvertColor_0010();
      break;
    case "UnRegisterInvertColor_0020":
      UnRegisterInvertColor_0020();
      break;
    case "SetGetInvertColor_0010":
      SetGetInvertColor_0010();
      break;
    case "SetGetInvertColor_0020":
      SetGetInvertColor_0020();
      break;
    case "SetGetInvertColor_0030":
      SetGetInvertColor_0030();
      break;
    case "SetGetInvertColor_0040":
      SetGetInvertColor_0040();
      break;
    case "SetGetInvertColor_0050":
      SetGetInvertColor_0050();
      break;
    case "SetGetInvertColor_0060":
      SetGetInvertColor_0060();
      break;
    case "SetGetInvertColor_0070":
      SetGetInvertColor_0070();
      break;
    case "SetGetInvertColor_0080":
      SetGetInvertColor_0080();
      break;
    case "SetGetInvertColor_0090":
      SetGetInvertColor_0090();
      break;
    case "RegisterDaltonizationColorFilter_0010":
    case "UnRegisterDaltonizationColorFilter_0010":
      RegisterDaltonizationColorFilterSet(data, 'Normal');
      break;
    case "RegisterDaltonizationColorFilter_0020":
    case "UnRegisterDaltonizationColorFilter_0020":
      RegisterDaltonizationColorFilterSet(data, 'Protanomaly');
      break;
    case "RegisterDaltonizationColorFilter_0030":
    case "UnRegisterDaltonizationColorFilter_0030":
      RegisterDaltonizationColorFilterSet(data, 'Deuteranomaly');
      break;
    case "RegisterDaltonizationColorFilter_0040":
    case "UnRegisterDaltonizationColorFilter_0040":
      RegisterDaltonizationColorFilterSet(data, 'Tritanomaly');
      break;
    case "SetGetDaltonizationColorFilter_0010":
    case "SetGetDaltonizationColorFilter_0020":
    case "SetGetDaltonizationColorFilter_0030":
    case "SetGetDaltonizationColorFilter_0040":
      RegisterDaltonizationColorFilterGetPromise(data);
      break;
    case "SetGetDaltonizationColorFilter_0050":
    case "SetGetDaltonizationColorFilter_0060":
    case "SetGetDaltonizationColorFilter_0070":
    case "SetGetDaltonizationColorFilter_0080":
      RegisterDaltonizationColorFilterGetCallBack(data);
      break;
    case "SetGetDaltonizationColorFilter_0090":
      RegisterDaltonizationColorFilterGet();
      break;
    case "SetGetDaltonizationColorFilter_0100":
      SetGetDaltonizationColorFilter_0100();
      break;
    case "SetGetDaltonizationColorFilter_0110":
      SetGetDaltonizationColorFilter_0110();
      break;
    default:
      break;
  }
}

const accessibilityConfigSetting = (configValue: string, isOn: boolean) => {
  console.info(Log + "accessibilityConfigSetting config:" + configValue + " isOn:" + isOn);
  switch (configValue) {
    case "highContrastText":
      config.highContrastText.set(isOn).then(() => {
        console.info(Log + " highContrastText set " + isOn + " success");
      }).catch((err) => {
        console.info(Log + " highContrastText set " + isOn + " err=" + JSON.stringify(err));
      })
      break;
    case "invertColor":
      config.invertColor.set(isOn).then(() => {
        console.info(Log + " invertColor set " + isOn + " success");
      }).catch((err) => {
        console.info(Log + " invertColor set " + isOn + " err=" + JSON.stringify(err));
      })
      break;
    case "mouseKey":
      config.mouseKey.set(isOn).then(() => {
        console.info(Log + " mouseKey set " + isOn + " success");
      }).catch((err) => {
        console.info(Log + " mouseKey set " + isOn + " err=" + JSON.stringify(err));
      })
      break;
    case "shortkey":
      config.shortkey.set(isOn).then(() => {
        console.info(Log + " shortkey set " + isOn + " success");
      }).catch((err) => {
        console.info(Log + " shortkey set " + isOn + " err=" + JSON.stringify(err));
      })
      break;
    case "captions":
      config.captions.set(isOn).then(() => {
        console.info(Log + " captions set " + isOn + " success");
      }).catch((err) => {
        console.info(Log + " captions set " + isOn + " err=" + JSON.stringify(err));
      })
      break;
    default:
      break;
  }
}

const SetDaltonizationColorFilter = (colorFilter) => {
  console.info(Log + "SetDaltonizationColorFilter colorFilter=" + colorFilter)
  config.daltonizationColorFilter.set(colorFilter).then(() => {
    console.info(Log + " daltonizationColorFilter set " + colorFilter + " success");
  }).catch((err) => {
    console.info(Log + " daltonizationColorFilter set " + colorFilter + " err=" + JSON.stringify(err));
  })
}

const SetContentTimeout = (timeOut: number) => {
  console.info(Log + "SetContentTimeout timeOut=" + timeOut)
  config.contentTimeout.set(timeOut).then(() => {
    console.info(Log + " contentTimeout set " + timeOut + " success");
  }).catch((err) => {
    console.info(Log + " contentTimeout set " + timeOut + " err=" + JSON.stringify(err));
  })
}

const SetBrightnessDiscount = (discount: number) => {
  console.info(Log + "SetBrightnessDiscount brightnessDiscount=" + discount)
  config.brightnessDiscount.set(discount).then(() => {
    console.info(Log + " brightnessDiscount set " + discount + " success");
  }).catch((err) => {
    console.info(Log + " brightnessDiscount set " + discount + " err=" + JSON.stringify(err));
  })
}

const SetAudioBalance = (audioBalance: number) => {
  console.info(Log + "SetAudioBalance audioBalance=" + audioBalance)
  config.contentTimeout.set(audioBalance).then(() => {
    console.info(Log + " audioBalance set " + audioBalance + " success");
  }).catch((err) => {
    console.info(Log + " audioBalance set " + audioBalance + " err=" + JSON.stringify(err));
  })
}

const SetMouseAutoClick = (mouseAutoClick: number) => {
  console.info(Log + "SetMouseAutoClick mouseAutoClick=" + mouseAutoClick)
  config.contentTimeout.set(mouseAutoClick).then(() => {
    console.info(Log + " mouseAutoClick set " + mouseAutoClick + " success");
  }).catch((err) => {
    console.info(Log + " mouseAutoClick set " + mouseAutoClick + " err=" + JSON.stringify(err));
  })
}

const SetShortkeyTarget = (shortkeyTarget: string) => {
  console.info(Log + "SetShortkeyTarget shortkeyTarget=" + shortkeyTarget)
  config.shortkeyTarget.set(shortkeyTarget).then(() => {
    console.info(Log + " shortkeyTarget set " + shortkeyTarget + " success");
  }).catch((err) => {
    console.info(Log + " shortkeyTarget set " + shortkeyTarget + " err=" + JSON.stringify(err));
  })
}

const SetCaptionsStyleFontFamily = (fontFamily) => {
  console.info(Log + "SetCaptionsStyleFontFamily fontFamily=" + fontFamily)
  config.captionsStyle.get().then((res) => {
    if (!res) {
      console.info(Log + "captionsStyle is undefined");
      return;
    }
    var captionsStyle = res;
    captionsStyle.fontFamily = fontFamily;
    config.captionsStyle.set(captionsStyle).then(() => {
      console.info(Log + "captionsStyle fontFamily set " + fontFamily + " success");
    }).catch((err) => {
      console.info(Log + "captionsStyle fontFamily set " + fontFamily + " err=" + JSON.stringify(err));
    });
  })
}

@Entry
@Component
struct Index {
  @State message: string = 'Config Test'
  @State inSetValueTimeOut: number = 2500
  @State inSetValueDiscount: number = 50
  @State inSetValueAudioBalance: number = 0
  @State inSetValueAutoClick: number = 2500
  @State contentTimeoutEnable: boolean = false
  @State contentTimeoutIsOn: boolean = false
  @State discountIsOn: boolean = false
  @State discountEnable: boolean = false
  @State audioBalanceEnable: boolean = false
  @State audioBalanceIsOn: boolean = false
  @State mouseAutoClickEnable: boolean = false
  @State mouseAutoClickIsOn: boolean = false
  @State highContrastTextIsOn: boolean = false
  @State invertColorIsOn: boolean = false
  @State animationOffIsOn: boolean = false
  @State screenMagnifierIsOn: boolean = false
  @State audioMonoIsOn: boolean = false
  @State mouseKeyIsOn: boolean = false
  @State shortkeyIsOn: boolean = false
  @State shortkeyTargetEnable: boolean = false
  @State captionsIsOn: boolean = false
  @State captionsStyleEnable: boolean = false

  private subScriber = undefined;

  onPageShow() {
    console.info('TargetApp onPageShow start');
  }

  aboutToAppear() {
    console.info('TargetApp aboutToAppear');
    commonEvent.createSubscriber({ events: ['on_target_change', 'on_assist_change_extra'] }).then((subScriber) => {
      console.info('TargetApp createSubscriber on_target_change');
      this.subScriber = subScriber;
      commonEvent.subscribe(subScriber, (err, data) => {
        console.info('TargetApp on_target_change subscribe callback: ' + JSON.stringify(data));
        if (data.data) {
          if (data.data == 'on_connect_success') {
            let message = 'shortkeyTarget started success'
            prompt.showToast({ message: message })
          }
          excuteAction(data.data);
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
      Scroll() {
        Column() {
          Text(this.message)
            .fontSize(30)
            .fontWeight(FontWeight.Bold)

          Row() {
            Text('highContrastText').fontSize(20)
            Blank()
            Toggle({ type: ToggleType.Switch, isOn: this.highContrastTextIsOn })
              .onChange((isOn: boolean) => {
                console.info(Log + 'Component status:' + isOn)
                if (isOn) {
                  this.highContrastTextIsOn = true
                  accessibilityConfigSetting('highContrastText', true)
                }
                else {
                  this.highContrastTextIsOn = false
                  accessibilityConfigSetting('highContrastText', false)
                }
              })
          }.width('100%').backgroundColor(0xFFFFFF).borderRadius(15).padding({ left: 12 }).margin(10)

          Row() {
            Text('invertColor').fontSize(20)
            Blank()
            Toggle({ type: ToggleType.Switch, isOn: this.invertColorIsOn })
              .onChange((isOn: boolean) => {
                console.info(Log + 'Component status:' + isOn)
                if (isOn) {
                  this.invertColorIsOn = true
                  accessibilityConfigSetting('invertColor', true)
                }
                else {
                  this.invertColorIsOn = false
                  accessibilityConfigSetting('invertColor', false)
                }
              })
          }.width('100%').backgroundColor(0xFFFFFF).borderRadius(15).padding({ left: 12 }).margin(10)

          Row() {
            Text('daltonizationColorFilter').fontSize(20)
            Blank()
            Select([{ value: 'Normal' }, { value: 'Protanomaly' }, { value: 'Deuteranomaly' }, {
              value: 'Tritanomaly'
            }])
              .selected(0)
              .value('Normal')
              .padding({ left:50 })
              .onSelect((index:number)=>{
                console.info(Log + "Select:" + index)
                let colorFilter = 'Normal';
                switch(index) {
                  case 0:
                    colorFilter = 'Normal';
                    break;
                  case 1:
                    colorFilter = 'Protanomaly';
                    break;
                  case 2:
                    colorFilter = 'Deuteranomaly';
                    break;
                  case 3:
                    colorFilter = 'Tritanomaly';
                    break;
                  default:
                    break;
                }
                SetDaltonizationColorFilter(colorFilter)
              })
          }.width('100%').backgroundColor(0xFFFFFF).borderRadius(15).padding({ left: 12 }).margin(10)

          Row() {
            Text('contentTimeout').fontSize(20)
            Blank()
            Toggle({ type: ToggleType.Switch, isOn: this.contentTimeoutIsOn })
              .onChange((isOn: boolean) => {
                console.info(Log + 'Component status:' + isOn)
                if (isOn) {
                  this.contentTimeoutEnable = true
                  this.contentTimeoutIsOn = true
                }
                else {
                  this.contentTimeoutEnable = false
                  this.contentTimeoutIsOn = false
                }
              })
          }.width('100%').backgroundColor(0xFFFFFF).borderRadius(15).padding({ left: 12 }).margin(10)

          Row() {
            Slider({
              value: this.inSetValueTimeOut,
              min: 0,
              max: 5000,
              style: SliderStyle.InSet
            }).width('80%').margin(10).blockColor(0xCCCCCC)
              .onChange((value: number, mode: SliderChangeMode) => {
                console.info(Log + "value:" + value + " SliderChangeMode:" + mode)
                this.inSetValueTimeOut = value
                if (mode == 2 || mode == 3) {
                  SetContentTimeout(value)
                }
              })
            Text(this.inSetValueTimeOut.toFixed(0)).fontSize(16)
          }.width('100%').backgroundColor(0xFFFFFF).borderRadius(15).padding({ left: 12 }).margin(10).enabled(this.contentTimeoutEnable)

          Row() {
            Text('animationOff').fontSize(20)
            Blank()
            Toggle({ type: ToggleType.Switch, isOn: this.animationOffIsOn })
              .onChange((isOn: boolean) => {
                console.info(Log + 'Component status:' + isOn)
                if (isOn) {
                  this.animationOffIsOn = true
                  accessibilityConfigSetting('animationOff', true)
                }
                else {
                  this.animationOffIsOn = false
                  accessibilityConfigSetting('animationOff', false)
                }
              })
          }.width('100%').backgroundColor(0xFFFFFF).borderRadius(15).padding({ left: 12 }).margin(10)

          Row() {
            Text('brightnessDiscount').fontSize(20)
            Blank()
            Toggle({ type: ToggleType.Switch, isOn: this.discountIsOn })
              .onChange((isOn: boolean) => {
                console.info(Log + 'Component status:' + isOn)
                if (isOn) {
                  this.discountEnable = true
                  this.discountIsOn = true
                }
                else {
                  this.discountEnable = false
                  this.discountIsOn = false
                }
              })
          }.width('100%').backgroundColor(0xFFFFFF).borderRadius(15).padding({ left: 12 }).margin(10)

          Row() {
            Slider({
              value: this.inSetValueDiscount,
              min: 0,
              max: 100,
              step: 1,
              style: SliderStyle.InSet
            }).width('80%').margin(10).blockColor(0xCCCCCC)
              .onChange((value: number, mode: SliderChangeMode) => {
                console.info(Log + "value:" + value + " SliderChangeMode:" + mode)
                this.inSetValueDiscount = value
                if (mode == 2 || mode == 3) {
                  SetBrightnessDiscount(value / 100)
                }
              })
            Text(this.inSetValueDiscount.toFixed(0)).fontSize(16)
          }.width('100%').backgroundColor(0xFFFFFF).borderRadius(15).padding({ left: 12 }).margin(10).enabled(this.discountEnable)

          Row() {
            Text('screenMagnifier').fontSize(20)
            Blank()
            Toggle({ type: ToggleType.Switch, isOn: this.screenMagnifierIsOn })
              .onChange((isOn: boolean) => {
                console.info(Log + 'Component status:' + isOn)
                if (isOn) {
                  this.screenMagnifierIsOn = true
                  accessibilityConfigSetting('screenMagnifier', true)
                }
                else {
                  this.screenMagnifierIsOn = false
                  accessibilityConfigSetting('screenMagnifier', false)
                }
              })
          }.width('100%').backgroundColor(0xFFFFFF).borderRadius(15).padding({ left: 12 }).margin(10)

          Row() {
            Text('audioMono').fontSize(20)
            Blank()
            Toggle({ type: ToggleType.Switch, isOn: this.audioMonoIsOn })
              .onChange((isOn: boolean) => {
                console.info(Log + 'Component status:' + isOn)
                if (isOn) {
                  this.audioMonoIsOn = true
                  accessibilityConfigSetting('audioMono', true)
                }
                else {
                  this.audioMonoIsOn = false
                  accessibilityConfigSetting('audioMono', false)
                }
              })
          }.width('100%').backgroundColor(0xFFFFFF).borderRadius(15).padding({ left: 12 }).margin(10)

          Row() {
            Text('audioBalance').fontSize(20)
            Blank()
            Toggle({ type: ToggleType.Switch, isOn: this.audioBalanceIsOn })
              .onChange((isOn: boolean) => {
                console.info(Log + 'Component status:' + isOn)
                if (isOn) {
                  this.audioBalanceEnable = true
                  this.audioBalanceIsOn = true
                }
                else {
                  this.audioBalanceEnable = false
                  this.audioBalanceIsOn = false
                }
              })
          }.width('100%').backgroundColor(0xFFFFFF).borderRadius(15).padding({ left: 12 }).margin(10)

          Row() {
            Slider({
              value: this.inSetValueAudioBalance,
              min: -100,
              max: 100,
              step: 1,
              style: SliderStyle.InSet
            }).width('80%').margin(10).blockColor(0xCCCCCC)
              .onChange((value: number, mode: SliderChangeMode) => {
                console.info(Log + "value:" + value + " SliderChangeMode:" + mode)
                this.inSetValueAudioBalance = value
                if (mode == 2 || mode == 3) {
                  SetAudioBalance(value / 100)
                }
              })
            Text(this.inSetValueAudioBalance.toFixed(0)).fontSize(16)
          }.width('100%').backgroundColor(0xFFFFFF).borderRadius(15).padding({ left: 12 }).margin(10).enabled(this.audioBalanceEnable)

          Row() {
            Text('mouseKey').fontSize(20)
            Blank()
            Toggle({ type: ToggleType.Switch, isOn: this.mouseKeyIsOn })
              .onChange((isOn: boolean) => {
                console.info(Log + 'Component status:' + isOn)
                if (isOn) {
                  this.mouseKeyIsOn = true
                  accessibilityConfigSetting('mouseKey', true)
                }
                else {
                  this.mouseKeyIsOn = false
                  accessibilityConfigSetting('mouseKey', false)
                }
              })
          }.width('100%').backgroundColor(0xFFFFFF).borderRadius(15).padding({ left: 12 }).margin(10)

          Row() {
            Text('mouseAutoClick').fontSize(20)
            Blank()
            Toggle({ type: ToggleType.Switch, isOn: this.mouseAutoClickIsOn })
              .onChange((isOn: boolean) => {
                console.info(Log + 'Component status:' + isOn)
                if (isOn) {
                  this.mouseAutoClickEnable = true
                  this.mouseAutoClickIsOn = true
                  SetMouseAutoClick(0)
                }
                else {
                  this.mouseAutoClickEnable = false
                  this.mouseAutoClickIsOn = false
                  SetMouseAutoClick(-1)
                }
              })
          }.width('100%').backgroundColor(0xFFFFFF).borderRadius(15).padding({ left: 12 }).margin(10)

          Row() {
            Slider({
              value: this.inSetValueAutoClick,
              min: 0,
              max: 5000,
              step: 100,
              style: SliderStyle.InSet
            }).width('80%').blockColor(0xCCCCCC)
              .onChange((value: number, mode: SliderChangeMode) => {
                console.info(Log + "value:" + value + " SliderChangeMode:" + mode)
                this.inSetValueAutoClick = value
                if (mode == 2 || mode == 3) {
                  SetMouseAutoClick(value)
                }
              })
            Text(this.inSetValueAutoClick.toFixed(0)).fontSize(16)
          }.width('100%').backgroundColor(0xFFFFFF).borderRadius(15).padding({ left: 12 }).margin(10).enabled(this.mouseAutoClickEnable)

          Row() {
            Text('shortkey').fontSize(20)
            Blank()
            Toggle({ type: ToggleType.Switch, isOn: this.shortkeyIsOn })
              .onChange((isOn: boolean) => {
                console.info(Log + 'Component status:' + isOn)
                if (isOn) {
                  this.shortkeyIsOn = true
                  this.shortkeyTargetEnable = true
                  accessibilityConfigSetting('shortkey', true)
                  let shortkeyTarget = 'com.example.myapplicationconfig/ServiceExtAbilityShortKey'
                  SetShortkeyTarget(shortkeyTarget)
                }
                else {
                  this.shortkeyIsOn = false
                  this.shortkeyTargetEnable = false
                  accessibilityConfigSetting('shortkey', false)
                  SetShortkeyTarget('')
                }
              })
          }.width('100%').backgroundColor(0xFFFFFF).borderRadius(15).padding({ left: 12 }).margin(10)

          Row() {
            Text('shortkeyTarget').fontSize(20)
            Select([{ value: 'shortkeyTarget' }])
              .selected(0)
              .padding({ left:50 })
              .value('shortkeyTarget')
              .onSelect((index:number)=>{
                console.info(Log + "Select:" + index)
                let shortkeyTarget = '';
                switch(index) {
                  case 0:
                    shortkeyTarget = 'com.example.myapplicationconfig/ServiceExtAbilityShortKey';
                    break;
                  default:
                    break;
                }
                SetShortkeyTarget(shortkeyTarget)
              })
          }.width('100%').backgroundColor(0xFFFFFF).borderRadius(15).padding({ left: 12 }).margin(10).enabled(this.shortkeyTargetEnable)

          Row() {
            Text('captions').fontSize(20)
            Blank()
            Toggle({ type: ToggleType.Switch, isOn: this.captionsIsOn })
              .onChange((isOn: boolean) => {
                console.info(Log + 'Component status:' + isOn)
                if (isOn) {
                  this.captionsIsOn = true
                  this.captionsStyleEnable = true
                  accessibilityConfigSetting('captions', true)
                }
                else {
                  this.captionsIsOn = false
                  this.captionsStyleEnable = false
                  accessibilityConfigSetting('captions', false)
                }
              })
          }.width('100%').backgroundColor(0xFFFFFF).borderRadius(15).padding({ left: 12 }).margin(10)

          Row() {
            Text('captionsStyle').fontSize(20)
            Select([{ value: 'serif' }, { value: 'sansSerif' }, { value: 'casual' }, { value: 'cursive' }])
              .selected(0)
              .value('serif')
              .padding({ left:70 })
              .onSelect((index:number)=>{
                console.info(Log + "Select:" + index)
                let fontFamily = '';
                switch(index) {
                  case 0:
                    fontFamily = 'serif';
                    break;
                  case 1:
                    fontFamily = 'sansSerif';
                    break;
                  case 2:
                    fontFamily = 'casual';
                    break;
                  case 3:
                    fontFamily = 'cursive';
                    break;
                  default:
                    break;
                }
                SetCaptionsStyleFontFamily(fontFamily)
              })
          }.width('100%').backgroundColor(0xFFFFFF).borderRadius(15).padding({ left: 12 }).margin(10).enabled(this.captionsStyleEnable)
        }
        .width('100%').backgroundColor(0xEFEFEF).padding(20)
      }
    }
    .height('100%')
  }
}
