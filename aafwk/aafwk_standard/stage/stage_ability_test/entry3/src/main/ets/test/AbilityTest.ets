// @ts-nocheck
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "deccjsunit/index"
import commonEvent from '@ohos.commonevent'
import ability from '@ohos.application.Ability'
import wantConstant from '@ohos.ability.wantConstant'
const INTENT_PARAMS_TITLE = "ability.want.params.TITLE";
const INTENT_PARAMS_INTENT = "ability.want.params.INTENT"

var subscriberInfo_MainAbility = {
  events: ["mainAbility_onCreate",
  "mainAbility_onWindowStageCreate",
  "mainAbility_onForeground",]
}

var subscriberInfo_MainAbility_back = {
  events: ["mainAbility_onCreate",
  "mainAbility_onWindowStageCreate",
  "mainAbility_onForeground",
  "mainAbility_onBackground"]
}

var subscriberInfo_MainAbility_back2 = {
  events: ["mainAbility_onCreate",
  "mainAbility_onWindowStageCreate",
  "mainAbility_onForeground",
  "mainAbility_onBackground",
  "mainAbility_onForeground"]
}

var subscriberInfo_MainAbility2_StaAndTer = {
  events: ["mainAbility2_onCreate",
  "mainAbility2_onWindowStageCreate",
  "mainAbility2_onForeground",
  "mainAbility2_onBackground",
  "mainAbility2_onWindowStageDestroy",
  "mainAbility2_onDestroy"]
}

var subscriberInfo_MainAbility2 = {
  events: ["mainAbility2_onCreate",
  "mainAbility2_onWindowStageCreate",
  "mainAbility2_onForeground"]
}

var subscriberInfo_MainAbility2_back = {
  events: ["mainAbility2_onCreate",
  "mainAbility2_onWindowStageCreate",
  "mainAbility2_onForeground",
  "mainAbility2_onBackground"]
}

var subscriberInfo_MainAbility2_Destroy = {
  events: ["mainAbility2_onCreate",
  "mainAbility2_onWindowStageCreate",
  "mainAbility2_onForeground",
  "mainAbility2_onBackground",
  "mainAbility2_onDestroy"]
}

var subscriberInfo_SingletonAbility = {
  events: ["singletonAbility_onCreate",
  "singletonAbility_onWindowStageCreate",
  "singletonAbility_onForeground"]
}

var subscriberInfo_SingletonAbility_Back = {
  events: ["singletonAbility_onCreate",
  "singletonAbility_onWindowStageCreate",
  "singletonAbility_onForeground",
  "singletonAbility_onBackground"]
}

var subscriberInfo_SingletonAbility_StaAndTer = {
  events: ["singletonAbility_onCreate",
  "singletonAbility_onWindowStageCreate",
  "singletonAbility_onForeground",
  "singletonAbility_onBackground",
  "singletonAbility_onDestroy"]
}

var subscriberInfo_SingletonAbility2 = {
  events: ["singletonAbility_onCreate",
  "singletonAbility_onWindowStageCreate",
  "singletonAbility_onForeground"]
}

var subscriberInfo_MuitiAbility = {
  events: ["multiAbility_onCreate",
  "multiAbility_onWindowStageCreate",
  "multiAbility_onForeground"]
}

var subscriberInfo_MuitiAbility2 = {
  events: ["multiAbility_onCreate",
  "multiAbility_onWindowStageCreate",
  "multiAbility_onForeground"]
}

var subscriberInfo_MuitiAbility_back = {
  events: ["multiAbility_onCreate",
  "multiAbility_onWindowStageCreate",
  "multiAbility_onForeground",
  "multiAbility_onBackground"]
}

var subscriberInfo_MuitiAbility_StaAndTer = {
  events: ["multiAbility_onCreate",
  "multiAbility_onWindowStageCreate",
  "multiAbility_onForeground",
  "multiAbility_onBackground",
  "multiAbility_onDestroy"]
}

var subscriberInfo_startAndterminateResult = {
  events: ["mainAbility2_onCreate",
  "mainAbility2_onWindowStageCreate",
  "mainAbility2_onForeground",
  "mainAbility2_onBackground",
  "mainAbility2_onWindowStageDestroy",
  "mainAbility2_onDestroy"]
}

var subscriberInfo_startAndterminateResult2 = {
  events: ["multiAbility_onCreate",
  "multiAbility_onWindowStageCreate",
  "multiAbility_onForeground",
  "multiAbility_onBackground",
  "multiAbility_onWindowStageDestroy",
  "multiAbility_onDestroy"]
}

var subscriberInfo_Entry2MainAbility = {
  events: ["entry2MainAbility_onCreate",
  "entry2MainAbility_onWindowStageCreate",
  "entry2MainAbility_onForeground"]
}

var subscriberInfo_Entry2MainAbility_back = {
  events: ["entry2MainAbility_onCreate",
  "entry2MainAbility_onWindowStageCreate",
  "entry2MainAbility_onForeground",
  "entry2MainAbility_onBackground"]
}

var subscriberInfo_Entry3MainAbility = {
  events: ["entry3MainAbility_onCreate",
  "entry3MainAbility_onWindowStageCreate",
  "entry3MainAbility_onForeground",]
}

var subscriberInfo_Entry2MainAbilityDestroy = {
  events: ["entry2MainAbility_onCreate",
  "entry2MainAbility_onWindowStageCreate",
  "entry2MainAbility_onForeground",
  "entry2MainAbility_onBackground",
  "entry2MainAbility_onDestroy"]
}

var subscriberInfo_Entry2MainAbility_back = {
  events: ["entry2MainAbility_onCreate",
  "entry2MainAbility_onWindowStageCreate",
  "entry2MainAbility_onForeground",
  "entry2MainAbility_onBackground",]
}

var subscriberInfo_Entry2MainAbility_StaAndTer = {
  events: ["entry2MainAbility_onCreate",
  "entry2MainAbility_onWindowStageCreate",
  "entry2MainAbility_onForeground",
  "entry2MainAbility_onBackground",
  "entry2MainAbility_onWindowStageDestroy",
  "entry2MainAbility_onDestroy"]
}

var subscriberInfo_AuxMainAbilitySta = {
  events: ["auxMainAbility_onCreate",
  "auxMainAbility_onWindowStageCreate",
  "auxMainAbility_onForeground"]
}

var subscriberInfo_AuxMainAbilityTer = {
  events: ["auxMainAbility_onBackground",
  "auxMainAbility_onWindowStageDestroy",
  "auxMainAbility_onDestroy"]
}

var subscriberInfo_AuxMainAbility_back = {
  events: ["auxMainAbility_onCreate",
  "auxMainAbility_onWindowStageCreate",
  "auxMainAbility_onForeground",
  "auxMainAbility_onBackground",]
}

var subscriberInfo_AuxMainAbilityDestroy = {
  events: ["auxMainAbility_onCreate",
  "auxMainAbility_onWindowStageCreate",
  "auxMainAbility_onForeground",
  "auxMainAbility_onBackground",
  "auxMainAbility_onDestroy"]
}

var subscriberInfo_AuxMainAbilityStaAndTer = {
  events: ["auxMainAbility_onCreate",
  "auxMainAbility_onWindowStageCreate",
  "auxMainAbility_onForeground",
  "auxMainAbility_onBackground",
  "auxMainAbility_onWindowStageDestroy",
  "auxMainAbility_onDestroy"]
}

var subscriberInfo_AuxMainAbility2StaAndTer = {
  events: ["auxMainAbility2_onCreate",
  "auxMainAbility2_onWindowStageCreate",
  "auxMainAbility2_onForeground",
  "auxMainAbility2_onBackground",
  "auxMainAbility2_onWindowStageDestroy",
  "auxMainAbility2_onDestroy"]
}

var subscriberInfo_AuxMainAbility2StaAndTer2 = {
  events: ["auxMainAbility2_onCreate",
  "auxMainAbility2_onWindowStageCreate",
  "auxMainAbility2_onForeground",
  "auxMainAbility2_onBackground",
  "auxMainAbility2_onWindowStageDestroy",
  "auxMainAbility2_onDestroy"]
}

var subscriberInfo_AuxEntry2MainAbility = {
  events: ["auxMainAbility2_onCreate",
  "auxMainAbility2_onWindowStageCreate",
  "auxMainAbility2_onForeground"]
}
const START_ABILITY_TIMEOUT = 8000;


export default function abilityTest(abilityContext){
  describe('AbilityTest', function(){

    var listKey = ["", "", ""];
    var listKey2 = ["", "", "",""];
    var listKey3 = ["", "", "","",""];
    var listKey4 = ["", "", "","","",""];

    var listKey_2 = ["", "", ""];
    var listKey2_2 = ["", "", "",""];
    var listKey3_2 = ["", "", "","",""];
    var listKey4_2 = ["", "", "","","",""];

    var listKey_3 = ["", "", ""];
    var listKey2_3 = ["", "", "",""];
    var listKey3_3 = ["", "", "","",""];
    var listKey4_3 = ["", "", "","","",""];

    var TAG = "";

    function SubscribeCallBack(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "mainAbility2_onCreate"){
        listKey[0] = "onCreate";
      }else if(data.event == "mainAbility2_onWindowStageCreate"){
        listKey[1] = "onWindowStageCreate";
      }else if(data.event == "mainAbility2_onForeground"){
        listKey[2] = "onForeground";
      }
    }

    function SubscribeCallBack_mainAbility2_Back(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "mainAbility2_onCreate"){
        listKey2_2[0] = "onCreate";
      }else if(data.event == "mainAbility2_onWindowStageCreate"){
        listKey2_2[1] = "onWindowStageCreate";
      }else if(data.event == "mainAbility2_onForeground"){
        listKey2_2[2] = "onForeground";
      }else if(data.event == "mainAbility2_onBackground"){
        listKey2_2[3] = "onBackground";
      }
    }

    function SubscribeCallBack_mainAbility2_Back2(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "mainAbility2_onCreate"){
        listKey2[0] = "onCreate";
      }else if(data.event == "mainAbility2_onWindowStageCreate"){
        listKey2[1] = "onWindowStageCreate";
      }else if(data.event == "mainAbility2_onForeground"){
        listKey2[2] = "onForeground";
      }else if(data.event == "mainAbility2_onBackground"){
        listKey2[3] = "onBackground";
      }
    }

    function SubscribeCallBack_mainAbility2_Foreground(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "mainAbility2_onCreate"){
        listKey3[0] = "onCreate";
      }else if(data.event == "mainAbility2_onWindowStageCreate"){
        listKey3[1] = "onWindowStageCreate";
      }else if(data.event == "mainAbility2_onForeground"){
        listKey3[2] = "onForeground";
      }else if(data.event == "mainAbility2_onBackground"){
        listKey3[3] = "onBackground";
      }else if(data.event == "mainAbility2_onForeground"){
        listKey3[4] = "onForeground";
      }
    }

    function SubscribeCallBack_mainAbility2_Destroy(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "mainAbility2_onCreate"){
        listKey3[0] = "onCreate";
      }else if(data.event == "mainAbility2_onWindowStageCreate"){
        listKey3[1] = "onWindowStageCreate";
      }else if(data.event == "mainAbility2_onForeground"){
        listKey3[2] = "onForeground";
      }else if(data.event == "mainAbility2_onBackground"){
        listKey3[3] = "onBackground";
      }else if(data.event == "mainAbility2_onDestroy"){
        listKey3[4] = "onDestroy";
      }
    }

    function SubscribeCallBack_mainAbility2_StaAndTer(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "mainAbility2_onCreate"){
        listKey4[0] = "onCreate";
      }else if(data.event == "mainAbility2_onWindowStageCreate"){
        listKey4[1] = "onWindowStageCreate";
      }else if(data.event == "mainAbility2_onForeground"){
        listKey4[2] = "onForeground";
      }else if(data.event == "mainAbility2_onBackground"){
        listKey4[3] = "onBackground";
      }else if(data.event == "mainAbility2_onWindowStageDestroy"){
        listKey4[4] = "onWindowStageDestroy";
      }else if(data.event == "mainAbility2_onDestroy"){
        listKey4[5] = "onDestroy";
      }
    }

    function SubscribeCallBack_mainAbility2_StaAndTer2(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "mainAbility2_onCreate"){
        listKey4_2[0] = "onCreate";
      }else if(data.event == "mainAbility2_onWindowStageCreate"){
        listKey4_2[1] = "onWindowStageCreate";
      }else if(data.event == "mainAbility2_onForeground"){
        listKey4_2[2] = "onForeground";
      }else if(data.event == "mainAbility2_onBackground"){
        listKey4_2[3] = "onBackground";
      }else if(data.event == "mainAbility2_onWindowStageDestroy"){
        listKey4_2[4] = "onWindowStageDestroy";
      }else if(data.event == "mainAbility2_onDestroy"){
        listKey4_2[5] = "onDestroy";
      }
    }

    function SubscribeCallBack_mainAbilityBack(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "mainAbility_onCreate"){
        listKey2[0] = "onCreate";
      }else if(data.event == "mainAbility_onWindowStageCreate"){
        listKey2[1] = "onWindowStageCreate";
      }else if(data.event == "mainAbility_onForeground"){
        listKey2[2] = "onForeground";
      }else if(data.event == "mainAbility_onBackground"){
        listKey2[3] = "onBackground";
      }
    }

    function SubscribeCallBack_singletonAbility(err, data) {
      console.log(TAG + " SubscribeCallBack_singletonAbility  data:" + JSON.stringify(data));
      if(data.event == "singletonAbility_onCreate"){
        listKey[0] = "onCreate";
      }else if(data.event == "singletonAbility_onWindowStageCreate"){
        listKey[1] = "onWindowStageCreate";
      }else if(data.event == "singletonAbility_onForeground"){
        listKey[2] = "onForeground";
      }
    }

    function SubscribeCallBack_singletonAbility2(err, data) {
      console.log(TAG + " SubscribeCallBack_singletonAbility 2 data:" + JSON.stringify(data));
      if(data.event == "singletonAbility_onCreate"){
        listKey_2[0] = "onCreate";
      }else if(data.event == "singletonAbility_onWindowStageCreate"){
        listKey_2[1] = "onWindowStageCreate";
      }else if(data.event == "singletonAbility_onForeground"){
        listKey_2[2] = "onForeground";
      }
    }

    function SubscribeCallBack_singleton_Back(err, data) {
      console.log(TAG + " SubscribeCallBack_singletonAbility data:" + JSON.stringify(data));
      if(data.event == "singletonAbility_onCreate"){
        listKey2[0] = "onCreate";
      }else if(data.event == "singletonAbility_onWindowStageCreate"){
        listKey2[1] = "onWindowStageCreate";
      }else if(data.event == "singletonAbility_onForeground"){
        listKey2[2] = "onForeground";
      }else if(data.event == "singletonAbility_onBackground"){
        listKey2[3] = "onBackground";
      }
    }

    function SubscribeCallBack_entry2MainAbility(err, data) {
      console.log(TAG + " SubscribeCallBack_entry2MainAbility data:" + JSON.stringify(data));
      if(data.event == "entry2MainAbility_onCreate"){
        listKey_2[0] = "onCreate";
      }else if(data.event == "entry2MainAbility_onWindowStageCreate"){
        listKey_2[1] = "onWindowStageCreate";
      }else if(data.event == "entry2MainAbility_onForeground"){
        listKey_2[2] = "onForeground";
      }
    }

    function SubscribeCallBack_multiAbility_Back(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "multiAbility_onCreate"){
        listKey2[0] = "onCreate";
      }else if(data.event == "multiAbility_onWindowStageCreate"){
        listKey2[1] = "onWindowStageCreate";
      }else if(data.event == "multiAbility_onForeground"){
        listKey2[2] = "onForeground";
      }else if(data.event == "multiAbility_onBackground"){
        listKey2[3] = "onBackground";
      }
    }

    function SubscribeCallBack_multiAbility(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "multiAbility_onCreate"){
        listKey_3[0] = "onCreate";
      }else if(data.event == "multiAbility_onWindowStageCreate"){
        listKey_3[1] = "onWindowStageCreate";
      }else if(data.event == "multiAbility_onForeground"){
        listKey_3[2] = "onForeground";
      }
    }

    function SubscribeCallBack_multiAbility2(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "multiAbility_onCreate"){
        listKey_2[0] = "onCreate";
      }else if(data.event == "multiAbility_onWindowStageCreate"){
        listKey_2[1] = "onWindowStageCreate";
      }else if(data.event == "multiAbility_onForeground"){
        listKey_2[2] = "onForeground";
      }
    }

    function SubscribeCallBack_multiAbility_StaAndTer(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "multiAbility_onCreate"){
        listKey4_2[0] = "onCreate";
      }else if(data.event == "multiAbility_onWindowStageCreate"){
        listKey4_2[1] = "onWindowStageCreate";
      }else if(data.event == "multiAbility_onForeground"){
        listKey4_2[2] = "onForeground";
      }else if(data.event == "multiAbility_onBackground"){
        listKey4_2[3] = "onBackground";
      }else if(data.event == "multiAbility_onWindowStageDestroy"){
        listKey4_2[4] = "onWindowStageDestroy";
      }else if(data.event == "multiAbility_onDestroy"){
        listKey4_2[5] = "onDestroy";
      }
    }

    function SubscribeCallBack_entry2MainAbility2_back(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "entry2MainAbility_onCreate"){
        listKey2_2[0] = "onCreate";
      }else if(data.event == "entry2MainAbility_onWindowStageCreate"){
        listKey2_2[1] = "onWindowStageCreate";
      }else if(data.event == "entry2MainAbility_onForeground"){
        listKey2_2[2] = "onForeground";
      }else if(data.event == "entry2MainAbility_onBackground"){
        listKey2_2[3] = "onBackground";
      }
    }

    function SubscribeCallBack_entry2MainAbility2_Destroy(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "entry2MainAbility_onCreate"){
        listKey3[0] = "onCreate";
      }else if(data.event == "entry2MainAbility_onWindowStageCreate"){
        listKey3[1] = "onWindowStageCreate";
      }else if(data.event == "entry2MainAbility_onForeground"){
        listKey3[2] = "onForeground";
      }else if(data.event == "entry2MainAbility_onBackground"){
        listKey3[3] = "onBackground";
      }else if(data.event == "entry2MainAbility_onDestroy"){
        listKey3[4] = "onDestroy";
      }
    }

    function SubscribeCallBack_mainAbility(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "mainAbility_onCreate"){
        listKey_3[0] = "onCreate";
      }else if(data.event == "mainAbility_onWindowStageCreate"){
        listKey_3[1] = "onWindowStageCreate";
      }else if(data.event == "mainAbility_onForeground"){
        listKey_3[2] = "onForeground";
      }
    }

    function SubscribeCallBack_mainAbility_back(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "mainAbility_onCreate"){
        listKey2[0] = "onCreate";
      }else if(data.event == "mainAbility_onWindowStageCreate"){
        listKey2[1] = "onWindowStageCreate";
      }else if(data.event == "mainAbility_onForeground"){
        listKey2[2] = "onForeground";
      }else if(data.event == "mainAbility_onBackground"){
        listKey2[3] = "onBackground";
      }
    }

    function SubscribeCallBack_auxMainAbility_back(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "auxMainAbility_onCreate"){
        listKey2_2[0] = "onCreate";
      }else if(data.event == "auxMainAbility_onWindowStageCreate"){
        listKey2_2[1] = "onWindowStageCreate";
      }else if(data.event == "auxMainAbility_onForeground"){
        listKey2_2[2] = "onForeground";
      }else if(data.event == "auxMainAbility_onBackground"){
        listKey2_2[3] = "onBackground";
      }
    }

    function SubscribeCallBack_auxMainAbility_back_2(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "auxMainAbility_onCreate"){
        listKey2[0] = "onCreate";
      }else if(data.event == "auxMainAbility_onWindowStageCreate"){
        listKey2[1] = "onWindowStageCreate";
      }else if(data.event == "auxMainAbility_onForeground"){
        listKey2[2] = "onForeground";
      }else if(data.event == "auxMainAbility_onBackground"){
        listKey2[3] = "onBackground";
      }
    }

    function SubscribeCallBack_auxMainAbility_onDestroy(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "auxMainAbility_onCreate"){
        listKey3_2[0] = "onCreate";
      }else if(data.event == "auxMainAbility_onWindowStageCreate"){
        listKey3_2[1] = "onWindowStageCreate";
      }else if(data.event == "auxMainAbility_onForeground"){
        listKey3_2[2] = "onForeground";
      }else if(data.event == "auxMainAbility_onBackground"){
        listKey3_2[3] = "onBackground";
      }else if(data.event == "auxMainAbility_onDestroy"){
        listKey3_2[4] = "onDestroy";
      }
    }

    function SubscribeCallBack_auxMainAbility_StaAndTer(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "auxMainAbility_onCreate"){
        listKey4_2[0] = "onCreate";
      }else if(data.event == "auxMainAbility_onWindowStageCreate"){
        listKey4_2[1] = "onWindowStageCreate";
      }else if(data.event == "auxMainAbility_onForeground"){
        listKey4_2[2] = "onForeground";
      }else if(data.event == "auxMainAbility_onBackground"){
        listKey4_2[3] = "onBackground";
      }else if(data.event == "auxMainAbility_onWindowStageDestroy"){
        listKey4_2[4] = "onWindowStageDestroy";
      }else if(data.event == "auxMainAbility_onDestroy"){
        listKey4_2[5] = "onDestroy";
      }
    }

    function SubscribeCallBack3_auxMainAbility2(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "auxMainAbility2_onCreate"){
        listKey_3[0] = "onCreate";
      }else if(data.event == "auxMainAbility2_onWindowStageCreate"){
        listKey_3[1] = "onWindowStageCreate";
      }else if(data.event == "auxMainAbility2_onForeground"){
        listKey_3[2] = "onForeground";
      }
    }

    function SubscribeCallBack_mainAbility_Destroy(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "mainAbility_onCreate"){
        listKey3[0] = "onCreate";
      }else if(data.event == "mainAbility_onWindowStageCreate"){
        listKey3[1] = "onWindowStageCreate";
      }else if(data.event == "mainAbility_onForeground"){
        listKey3[2] = "onForeground";
      }else if(data.event == "mainAbility_onBackground"){
        listKey3[3] = "onBackground";
      }else if(data.event == "mainAbility_onDestroy"){
        listKey3[4] = "onDestroy";
      }
    }

    function SubscribeCallBack_entry2MainAbilityBack(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "entry2MainAbility_onCreate"){
        listKey2_2[0] = "onCreate";
      }else if(data.event == "entry2MainAbility_onWindowStageCreate"){
        listKey2_2[1] = "onWindowStageCreate";
      }else if(data.event == "entry2MainAbility_onForeground"){
        listKey2_2[2] = "onForeground";
      }else if(data.event == "entry2MainAbility_onBackground"){
        listKey2_2[3] = "onBackground";
      }
    }

    function SubscribeCallBack_entry3MainAbilityBack(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "entry3MainAbility_onCreate"){
        listKey_3[0] = "onCreate";
      }else if(data.event == "entry3MainAbility_onWindowStageCreate"){
        listKey_3[1] = "onWindowStageCreate";
      }else if(data.event == "entry3MainAbility_onForeground"){
        listKey_3[2] = "onForeground";
      }
    }

    function SubscribeCallBack2_auxMainAbility(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "auxMainAbility_onCreate"){
        listKey_2[0] = "onCreate";
      }else if(data.event == "auxMainAbility_onWindowStageCreate"){
        listKey_2[1] = "onWindowStageCreate";
      }else if(data.event == "auxMainAbility_onForeground"){
        listKey_2[2] = "onForeground";
      }
    }

    function SubscribeCallBack_singleton_Destroy(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "singletonAbility_onCreate"){
        listKey3[0] = "onCreate";
      }else if(data.event == "singletonAbility_onWindowStageCreate"){
        listKey3[1] = "onWindowStageCreate";
      }else if(data.event == "singletonAbility_onForeground"){
        listKey3[2] = "onForeground";
      } else if(data.event == "singletonAbility_onBackground"){
        listKey3[3] = "onBackground";
      }else if(data.event == "singletonAbility_onDestroy"){
        listKey3[4] = "onDestroy";
      }
    }

    function SubscribeCallBack_multi_Destroy(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "multiAbility_onCreate"){
        listKey3[0] = "onCreate";
      }else if(data.event == "multiAbility_onWindowStageCreate"){
        listKey3[1] = "onWindowStageCreate";
      }else if(data.event == "multiAbility_onForeground"){
        listKey3[2] = "onForeground";
      }else if(data.event == "multiAbility_onBackground"){
        listKey3[3] = "onBackground";
      }else if(data.event == "multiAbility_onDestroy"){
        listKey3[4] = "onDestroy";
      }
    }

    function SubscribeCallBack_entry2MainAbilityAll(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "entry2MainAbility_onCreate"){
        listKey4[0] = "onCreate";
      }else if(data.event == "entry2MainAbility_onWindowStageCreate"){
        listKey4[1] = "onWindowStageCreate";
      }else if(data.event == "entry2MainAbility_onForeground"){
        listKey4[2] = "onForeground";
      }else if(data.event == "entry2MainAbility_onBackground"){
        listKey4[3] = "onBackground";
      }else if(data.event == "entry2MainAbility_onWindowStageDestroy"){
        listKey4[4] = "onWindowStageDestroy";
      }else if(data.event == "entry2MainAbility_onDestroy"){
        listKey4[5] = "onDestroy";
      }
    }

    function SubscribeCallBack_entry2MainAbility_StaAndTer(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "entry2MainAbility_onCreate"){
        listKey4[0] = "onCreate";
      }else if(data.event == "entry2MainAbility_onWindowStageCreate"){
        listKey4[1] = "onWindowStageCreate";
      }else if(data.event == "entry2MainAbility_onForeground"){
        listKey4[2] = "onForeground";
      }else if(data.event == "entry2MainAbility_onBackground"){
        listKey4[3] = "onBackground";
      }else if(data.event == "entry2MainAbility_onWindowStageDestroy"){
        listKey4[4] = "onWindowStageDestroy";
      }else if(data.event == "entry2MainAbility_onDestroy"){
        listKey4[5] = "onDestroy";
      }
    }

    function SubscribeCallBack_AUXMainAbility2_StaAndTer(err, data) {
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if(data.event == "auxMainAbility2_onCreate"){
        listKey4[0] = "onCreate";
      }else if(data.event == "auxMainAbility2_onWindowStageCreate"){
        listKey4[1] = "onWindowStageCreate";
      }else if(data.event == "auxMainAbility2_onForeground"){
        listKey4[2] = "onForeground";
      }else if(data.event == "auxMainAbility2_onBackground"){
        listKey4[3] = "onBackground";
      }else if(data.event == "auxMainAbility2_onWindowStageDestroy"){
        listKey4[4] = "onWindowStageDestroy";
      }else if(data.event == "auxMainAbility2_onDestroy"){
        listKey4[5] = "onDestroy";
      }
    }

    function SubscribeCallBack_AUXMainAbility2_StaAndTer2(err, data) {
      console.log(TAG + " Subscribe CallBack2 data:" + JSON.stringify(data));
      if(data.event == "auxMainAbility2_onCreate"){
        listKey4_2[0] = "onCreate";
      }else if(data.event == "auxMainAbility2_onWindowStageCreate"){
        listKey4_2[1] = "onWindowStageCreate";
      }else if(data.event == "auxMainAbility2_onForeground"){
        listKey4_2[2] = "onForeground";
      }else if(data.event == "auxMainAbility2_onBackground"){
        listKey4_2[3] = "onBackground";
      }else if(data.event == "auxMainAbility2_onWindowStageDestroy"){
        listKey4_2[4] = "onWindowStageDestroy";
      }else if(data.event == "auxMainAbility2_onDestroy"){
        listKey4_2[5] = "onDestroy";
      }
    }

    function SubscribeCallBack_MainAbility_StaAndTer(err, data) {
      console.log(TAG + " Subscribe CallBack2 data:" + JSON.stringify(data));
      if(data.event == "mainAbility_onCreate"){
        listKey4_2[0] = "onCreate";
      }else if(data.event == "mainAbility_onWindowStageCreate"){
        listKey4_2[1] = "onWindowStageCreate";
      }else if(data.event == "mainAbility_onForeground"){
        listKey4_2[2] = "onForeground";
      }else if(data.event == "mainAbility_onBackground"){
        listKey4_2[3] = "onBackground";
      }else if(data.event == "mainAbility_onWindowStageDestroy"){
        listKey4_2[4] = "onWindowStageDestroy";
      }else if(data.event == "mainAbility_onDestroy"){
        listKey4_2[5] = "onDestroy";
      }
    }
       /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_2600
       * @tc.name    Input parameter want is undefined
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_2600", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_AbilityStart_2600-------------");
        try{
          var want;
          abilityContext.startAbility(want, (err, data)=>{
            console.log("SUB_AA_OpenHarmony_AbilityStart_2600: startAbility fail, err: "
            + JSON.stringify(err) + ", data: " + JSON.stringify(data));
            expect(err.code == 2097155).assertTrue();
            done();
          });
        }catch(error){
          console.log("SUB_AA_OpenHarmony_AbilityStart_2600: error " + error);
        }
        console.log("------------end SUB_AA_OpenHarmony_AbilityStart_2600-------------");
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_2400
       * @tc.name    Input parameter want is null
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_2400", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_AbilityStart_2400-------------");
        try{

          abilityContext.startAbility({}, (err, data)=>{
            console.log("SUB_AA_OpenHarmony_AbilityStart_2400: startAbility fail, err: "
            + JSON.stringify(err) + ", data: " + JSON.stringify(data));
            expect(err.code == 2097155).assertTrue();
            done();
          });
        }catch(error){
          console.log("SUB_AA_OpenHarmony_AbilityStart_2600: error " + error);
        }
        console.log("------------end SUB_AA_OpenHarmony_AbilityStart_2400-------------");
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_2700
       * @tc.name    Bundlename and abilityname are correct values
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_2700", 0, async function(done) {
        console.log("------------start SUB_AA_OpenHarmony_AbilityStart_2700-------------");
        TAG = "SUB_AA_OpenHarmony_AbilityStart_2700";
        listKey = ["", "", ""];
        var Subscriber = "";
        console.log(TAG + " listKey: " + listKey)

        commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack);
        });

        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.etsmyapplication.MainAbility2",
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey[0]).assertEqual("onCreate");
            expect(listKey[1]).assertEqual("onWindowStageCreate");
            expect(listKey[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey : " + listKey);
            done();
          }, 2000);
          console.log("------------end SUB_AA_OpenHarmony_AbilityStart_2700-------------");
        });
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_2900
       * @tc.name    Abilityname is the correct value and bundlename is the wrong value
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_2900", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_AbilityStart_2900-------------");
        try{
          abilityContext.startAbility({
            abilityName : "com.example.etsmyapplication.MainAbility",
            bundleName : "com.example.xxxx"
          }, (err, data)=>{
            console.log("SUB_AA_OpenHarmony_AbilityStart_2900: startAbility fail, err: "
            + JSON.stringify(err) + ", data: " + JSON.stringify(data));
            expect(err.code == 2097155).assertTrue();
            done();
          });
        }catch(error){
          console.log("SUB_AA_OpenHarmony_AbilityStart_2900: error " + error);
        }
        console.log("------------end SUB_AA_OpenHarmony_AbilityStart_2900-------------");
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_2800
       * @tc.name    Bundlename is the correct value and abilityname is the wrong value
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_2800", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_AbilityStart_2800-------------");
        try{
          abilityContext.startAbility({
            abilityName : "com.example.actsgetwantalltesthap.xxx",
            bundleName : "com.example.etsmyapplication"
          }, (err, data)=>{
            console.log("SUB_AA_OpenHarmony_AbilityStart_2800: startAbility fail, err: "
            + JSON.stringify(err) + ", data: " + JSON.stringify(data));
            expect(err.code == 2097152).assertTrue();
            done();
          });
        }catch(error){
          console.log("SUB_AA_OpenHarmony_AbilityStart_2800: error " + error);
        }
        console.log("------------end SUB_AA_OpenHarmony_AbilityStart_2800-------------");
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_3000
       * @tc.name    Configure bundlename, abilityname and deviceid. Deviceld is undefined
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_3000", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_AbilityStart_3000-------------");
        TAG = "SUB_AA_OpenHarmony_AbilityStart_3000";
        listKey = ["","",""];
        var Subscriber = "";
        console.log(TAG + " listKey: " + listKey)

        commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
          console.debug(TAG + " ====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack);
        })

        abilityContext.startAbility({
          deviceld : undefined,
          abilityName : "com.example.etsmyapplication.MainAbility2",
          bundleName : "com.example.etsmyapplication"
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey[0]).assertEqual("onCreate");
            expect(listKey[1]).assertEqual("onWindowStageCreate");
            expect(listKey[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey : " + listKey);
            done();
          }, 2000);
        console.log("------------end SUB_AA_OpenHarmony_AbilityStart_3000-------------");
        });
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_3600
       * @tc.name    Configure bundlename, abilityname and flags. Flag is a non numeric string
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_3600", 0, async function(done){
        TAG = "SUB_AA_OpenHarmony_AbilityStart_3600";
        listKey = ["","",""];
        var Subscriber = "";
        console.log(TAG + " listKey: " + listKey)

        commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack);
        })

        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.MainAbility2",
          bundleName : "com.example.etsmyapplication",
          flags : "wantConstant.Flags.FLAG_AUTH_READ_URI_PERMISSION"
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey[0]).assertEqual("onCreate");
            expect(listKey[1]).assertEqual("onWindowStageCreate");
            expect(listKey[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey : " + listKey);
            done();
          }, 2000);
          console.log("------------end SUB_AA_OpenHarmony_AbilityStart_3600-------------");
        });
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_3500
       * @tc.name    Configure bundlename, abilityname and flags. Flag is a numeric string
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_3500", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_AbilityStart_3500-------------");
        TAG = "SUB_AA_OpenHarmony_AbilityStart_3500";
        listKey = ["","",""];
        var Subscriber;
        console.log(TAG + " listKey: " + listKey)

        commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack);
        })

        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.MainAbility2",
          bundleName : "com.example.etsmyapplication",
          flags : "123"
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey[0]).assertEqual("onCreate");
            expect(listKey[1]).assertEqual("onWindowStageCreate");
            expect(listKey[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey : " + listKey);
            done();
          }, 2000);
          console.log("------------end SUB_AA_OpenHarmony_AbilityStart_3500-------------");
        });
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_3300
       * @tc.name    Configure bundlename, abilityname and flags, and the two correct flag values are the same or the same
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_3300", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_AbilityStart_3300-------------");
        TAG = "SUB_AA_OpenHarmony_AbilityStart_3300";
        listKey = ["","",""];
        var Subscriber;
        console.log(TAG + " listKey: " + listKey)

        commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack);
        })

        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.MainAbility2",
          bundleName : "com.example.etsmyapplication",
          flags : wantConstant.Flags.FLAG_AUTH_READ_URI_PERMISSION ||  wantConstant.Flags.FLAG_AUTH_WRITE_URI_PERMISSION
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey[0]).assertEqual("onCreate");
            expect(listKey[1]).assertEqual("onWindowStageCreate");
            expect(listKey[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey : " + listKey);
            done();
          }, 2000);
          console.log("------------end SUB_AA_OpenHarmony_AbilityStart_3300-------------");
        });
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_3400
       * @tc.name    Configure bundlename, abilityname and flags, a floating-point flag value
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_3400", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_AbilityStart_3400-------------");
        TAG = "SUB_AA_OpenHarmony_AbilityStart_3400";
        listKey = ["","",""];
        var Subscriber = "";

        commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack);
        });

        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.etsmyapplication.MainAbility2",
          flags : 66.86
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey[0]).assertEqual("onCreate");
            expect(listKey[1]).assertEqual("onWindowStageCreate");
            expect(listKey[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey : " + listKey);
            done();
          }, 2000);
          console.log("------------end SUB_AA_OpenHarmony_AbilityStart_3400-------------");
        });
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_3200
       * @tc.name    Configure bundlename, abilityname and flags to a correct flag value
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_3200", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_AbilityStart_3200-------------");
        TAG = "SUB_AA_OpenHarmony_AbilityStart_3200";
        listKey = ["","",""];
        var Subscriber = "";
        console.log(TAG + " listKey: " + listKey)

        commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack);
        })

        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.MainAbility2",
          bundleName : "com.example.etsmyapplication",
          flags : wantConstant.Flags.FLAG_ABILITY_FORWARD_RESULT
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey[0]).assertEqual("onCreate");
            expect(listKey[1]).assertEqual("onWindowStageCreate");
            expect(listKey[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey : " + listKey);
            done();
          }, 2000);
          console.log("------------end SUB_AA_OpenHarmony_AbilityStart_3200-------------");
        });
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_3100
       * @tc.name    Configure bundlename, abilityname and URI, and configure URI corresponding to ability
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_3100", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_AbilityStart_3100-------------");
        TAG = "SUB_AA_OpenHarmony_AbilityStart_3100";
        listKey = ["","",""];
        var Subscriber = "";
        console.log(TAG + " listKey: " + listKey)

        commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack);
        })

        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.MainAbility2",
          bundleName : "com.example.etsmyapplication",
          uri : "true"
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey[0]).assertEqual("onCreate");
            expect(listKey[1]).assertEqual("onWindowStageCreate");
            expect(listKey[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey : " + listKey);
            done();
          }, 2000);
          console.log("------------end SUB_AA_OpenHarmony_AbilityStart_3100-------------");
        });
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_5200
       * @tc.name    Carry multiple keys and values
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_5200", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_AbilityStart_5200-------------");
        TAG = "SUB_AA_OpenHarmony_AbilityStart_5200";
        listKey = ["","",""];
        var Subscriber = "";
        console.log(TAG + " listKey: " + listKey)

        commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack);
        })

        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.MainAbility2",
          bundleName : "com.example.etsmyapplication",
          parameters : {
            mykey0: 0.1,
            mykey1: [0.1, 0.2, 0.3],
            mykey2: "[1, 2, 3]",
            mykey3: "str",
            mykey4: [false, true, false]
          },
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey[0]).assertEqual("onCreate");
            expect(listKey[1]).assertEqual("onWindowStageCreate");
            expect(listKey[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey : " + listKey);
            done();
          }, 2000);
          console.log("------------end SUB_AA_OpenHarmony_AbilityStart_5200-------------");
        });
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_5100
       * @tc.name    Carry a key and value, and the key is ability want. params. Intent, value is JSON object
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_5100", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_AbilityStart_5100-------------");
        TAG = "SUB_AA_OpenHarmony_AbilityStart_5100";
        listKey = ["", "", ""];
        var Subscriber = "";
        var jsonObject = {"json" : 123}
        console.log(TAG + " listKey: " + listKey)

        commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack);
        })

        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.MainAbility2",
          bundleName : "com.example.etsmyapplication",
          parameters : {
            INTENT_PARAMS_INTENT : jsonObject,
          },
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey[0]).assertEqual("onCreate");
            expect(listKey[1]).assertEqual("onWindowStageCreate");
            expect(listKey[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey : " + listKey);
            done();
          }, 2000);
          console.log("------------end SUB_AA_OpenHarmony_AbilityStart_5100-------------");
        });
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_5000
       * @tc.name    Carry a key and value, and the key is ability want. params. Title, value is string
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_5000", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_AbilityStart_5000-------------");
        TAG = "SUB_AA_OpenHarmony_AbilityStart_5000";
        listKey = ["", "", ""];
        var Subscriber = "";
        console.log(TAG + " listKey: " + listKey)

        commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack);
        })

        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.MainAbility2",
          bundleName : "com.example.etsmyapplication",
          parameters : {
            INTENT_PARAMS_TITLE : "ability.want.params.TITLE",
          },
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey[0]).assertEqual("onCreate");
            expect(listKey[1]).assertEqual("onWindowStageCreate");
            expect(listKey[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey : " + listKey);
            done();
          }, 2000);
          console.log("------------end SUB_AA_OpenHarmony_AbilityStart_5000-------------");
        });
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_4100
       * @tc.name    Carry a key and value. Value is of type number
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_4100", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_AbilityStart_4100-------------");
        TAG = "SUB_AA_OpenHarmony_AbilityStart_4100";
        listKey = ["", "", ""];
        var Subscriber = "";
        console.log(TAG + " listKey: " + listKey)

        commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack);
        })

        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.MainAbility2",
          bundleName : "com.example.etsmyapplication",
          parameters : {
            mykey0: 123
          },
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey[0]).assertEqual("onCreate");
            expect(listKey[1]).assertEqual("onWindowStageCreate");
            expect(listKey[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey : " + listKey);
            done();
          }, 2000);
          console.log("------------end SUB_AA_OpenHarmony_AbilityStart_4100-------------");
        });
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_4300
       * @tc.name    Carry a key and value. Value is a string
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_4300", 0, async function (done) {
        console.log("--------------------start SUB_AA_OpenHarmony_AbilityStart_4300---------------------------");
        TAG = "SUB_AA_OpenHarmony_AbilityStart_4300";
        listKey = ["", "", ""];
        var Subscriber = "";
        console.log(TAG + " listKey: " + listKey)

        commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack);
        })

        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.MainAbility2",
          bundleName : "com.example.etsmyapplication",
          parameters: {
            mykey1: "Abilit_test_4300"
          }
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey[0]).assertEqual("onCreate");
            expect(listKey[1]).assertEqual("onWindowStageCreate");
            expect(listKey[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey : " + listKey);
            done();
          }, 2000);
          console.log("------------end SUB_AA_OpenHarmony_AbilityStart_4300-------------");
        });
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_5300
       * @tc.name    The ability (custom action) with corresponding action is started successfully
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_5300", 0, async function (done) {
        console.log("--------------------start SUB_AA_OpenHarmony_AbilityStart_5300---------------------------");
        TAG = "SUB_AA_OpenHarmony_AbilityStart_5300";
        listKey_2 = ["", "", ""];
        var Subscriber = "";
        console.log(TAG + " listKey_2: " + listKey_2)

        commonEvent.createSubscriber(subscriberInfo_Entry2MainAbility).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack_entry2MainAbility);
        })

        abilityContext.startAbility({
          action: "action.system.home2"
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey_2[0]).assertEqual("onCreate");
            expect(listKey_2[1]).assertEqual("onWindowStageCreate");
            expect(listKey_2[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey_2 : " + listKey_2);
            done();
          }, 2000);
          console.log("------------end SUB_AA_OpenHarmony_AbilityStart_5300-------------");
        });
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_5400
       * @tc.name    The ability with corresponding entities (customized, array length greater than 1) starts successfully
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_5400", 0, async function (done) {
        console.log("--------------------start SUB_AA_OpenHarmony_AbilityStart_5400---------------------------");
        TAG = "SUB_AA_OpenHarmony_AbilityStart_5400";
        listKey_2 = ["", "", ""];
        var Subscriber = "";
        console.log(TAG + " listKey_2: " + listKey_2)

        commonEvent.createSubscriber(subscriberInfo_Entry2MainAbility).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack_entry2MainAbility);
        })

        abilityContext.startAbility({
          action: "action.system.home2",
          entities: [
            "entity.system.home",
            "entity.system.home2"
          ]
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey_2[0]).assertEqual("onCreate");
            expect(listKey_2[1]).assertEqual("onWindowStageCreate");
            expect(listKey_2[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey_2 : " + listKey_2);
            done();
          }, 2000);
          console.log("------------end SUB_AA_OpenHarmony_AbilityStart_5400-------------");
        });
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_5500
       * @tc.name    Abilityname is not transmitted, only bundlename is transmitted
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_5500", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_AbilityStart_5500-------------");
        try{
          abilityContext.startAbility({
            bundleName : "com.example.etsmyapplication"
          }, (err, data)=>{
            console.log("SUB_AA_OpenHarmony_AbilityStart_5500: startAbility fail, err: "
            + JSON.stringify(err) + ", data: " + JSON.stringify(data));
            expect(err.code == 2097155).assertTrue();
            done();
          });
        }catch(error){
          console.log("SUB_AA_OpenHarmony_AbilityStart_5500: error " + error);
        }
        console.log("------------end SUB_AA_OpenHarmony_AbilityStart_5500-------------");
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_5600
       * @tc.name    Bundlename is not transmitted, only the abilityname is transmitted
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_5600", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_AbilityStart_5600-------------");
        try{
          abilityContext.startAbility({
            abilityName : "com.example.etsmyapplication.MainAbility2",
          }, (err, data)=>{
            console.log("SUB_AA_OpenHarmony_AbilityStart_5600: startAbility fail, err: "
            + JSON.stringify(err) + ", data: " + JSON.stringify(data));
            expect(err.code == 2097155).assertTrue();
            done();
          });
        }catch(error){
          console.log("SUB_AA_OpenHarmony_AbilityStart_5600: error " + error);
        }
        console.log("------------end SUB_AA_OpenHarmony_AbilityStart_5600-------------");
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_5700
       * @tc.name    Deviceid is the wrong value
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_5700", 0, async function (done) {
        console.log("--------------------start SUB_AA_OpenHarmony_AbilityStart_5700---------------------------");
        TAG = "SUB_AA_OpenHarmony_AbilityStart_5700";
        listKey = ["", "", ""];
        var Subscriber = "";
        console.log(TAG + " listKey: " + listKey)

        commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack);
        });

        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.MainAbility2",
          bundleName : "com.example.etsmyapplication",
          deviceId: 353
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey[0]).assertEqual("onCreate");
            expect(listKey[1]).assertEqual("onWindowStageCreate");
            expect(listKey[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey : " + listKey);
            done();
          }, 2000);
          console.log("------------end SUB_AA_OpenHarmony_AbilityStart_5700-------------");
        });
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_5800
       * @tc.name    There is no ability corresponding to action
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_5800", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_AbilityStart_5800-------------");
        try{
          abilityContext.startAbility({
            action : "action.system.homee",
          }, (err, data)=>{
            console.log("SUB_AA_OpenHarmony_AbilityStart_5800: startAbility fail, err: "
            + JSON.stringify(err) + ", data: " + JSON.stringify(data));
            expect(err.code == 2097155).assertTrue();
            done();
          });
        }catch(error){
          console.log("SUB_AA_OpenHarmony_AbilityStart_5800: error " + error);
        }
        console.log("------------end SUB_AA_OpenHarmony_AbilityStart_5800-------------");
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_5900
       * @tc.name    There is no ability corresponding to entities
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_5900", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_AbilityStart_5900-------------");
        try{
          abilityContext.startAbility({
            action : "action.system.home",
            entities : ["entity.system.homee"]
          }, (err, data)=>{
            console.log("SUB_AA_OpenHarmony_AbilityStart_5900: startAbility fail, err: "
            + JSON.stringify(err) + ", data: " + JSON.stringify(data));
            expect(err.code == 2097155).assertTrue();
            done();
          });
        }catch(error){
          console.log("SUB_AA_OpenHarmony_AbilityStart_5900: error " + error);
        }
        console.log("------------end SUB_AA_OpenHarmony_AbilityStart_5900-------------");
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_6000
       * @tc.name    The entities array is empty
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_6000", 0, async function (done) {
        console.log("--------------------start SUB_AA_OpenHarmony_AbilityStart_6000---------------------------");
        TAG = "SUB_AA_OpenHarmony_AbilityStart_6000";
        listKey_2 = ["", "", ""];
        var Subscriber = "";
        console.log(TAG + " listKey_2: " + listKey_2)

        commonEvent.createSubscriber(subscriberInfo_Entry2MainAbility).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack_entry2MainAbility);
        })

        abilityContext.startAbility({
          action: "action.system.home2",
          entities: []
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey_2[0]).assertEqual("onCreate");
            expect(listKey_2[1]).assertEqual("onWindowStageCreate");
            expect(listKey_2[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey_2 : " + listKey_2);
            done();
          }, 2000);
          console.log("------------end SUB_AA_OpenHarmony_AbilityStart_6000-------------");
        });
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_6100
       * @tc.name    Entities is configured as a string
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_6100", 0, async function (done) {
        console.log("--------------------start SUB_AA_OpenHarmony_AbilityStart_6100---------------------------");
        TAG = "SUB_AA_OpenHarmony_AbilityStart_6100";
        listKey_2 = ["", "", ""];
        var Subscriber = "";
        console.log(TAG + " listKey_2: " + listKey_2)

        commonEvent.createSubscriber(subscriberInfo_Entry2MainAbility).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack_entry2MainAbility);
        })

        abilityContext.startAbility({
          action: "action.system.home2",
          entities: "entity.system.home2"
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey_2[0]).assertEqual("onCreate");
            expect(listKey_2[1]).assertEqual("onWindowStageCreate");
            expect(listKey_2[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey_2 : " + listKey_2);
            done();
          }, 2000);
          console.log("------------end SUB_AA_OpenHarmony_AbilityStart_6100-------------");
        });
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_1200
       * @tc.name    Ability loop pull up: 1 pull 2, 2 pull 1 (single case)
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_1200", 0, async function(done){
        TAG = "SUB_AA_OpenHarmony_AbilityStart_1200";
        listKey = ["","",""];
        listKey_2 = ["","",""];
        var Subscriber = "";
        var Subscriber2 = "";

        commonEvent.createSubscriber(subscriberInfo_SingletonAbility).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack_singletonAbility);
        })

        commonEvent.createSubscriber(subscriberInfo_Entry2MainAbility).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber2====>");
          Subscriber2 = data;
          await commonEvent.subscribe(Subscriber2, SubscribeCallBack_entry2MainAbility);
        })

        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.SingletonAbility",
          bundleName : "com.example.etsmyapplication",
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey[0]).assertEqual("onCreate");
            expect(listKey[1]).assertEqual("onWindowStageCreate");
            expect(listKey[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey : " + listKey);
            done();
          }, 2000);
        });
        abilityContext.startAbility({
          abilityName : "com.example.entry2.Entry2MainAbility",
          bundleName : "com.example.etsmyapplication",
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey_2[0]).assertEqual("onCreate");
            expect(listKey_2[1]).assertEqual("onWindowStageCreate");
            expect(listKey_2[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey_2 : " + listKey_2);
            done();
          }, 2000);
        });
          console.log("------------end SUB_AA_OpenHarmony_AbilityStart_1200-------------");
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_1300
       * @tc.name    Ability loop pull up: 1 pull 2, 2 pull 1 (multiple cases)
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_1300", 0, async function(done){
        TAG = "SUB_AA_OpenHarmony_AbilityStart_1300";
        listKey2 = ["", "", "",""];
        listKey2_2 = ["", "", "",""];
        listKey = ["", "", ""];
        var Subscriber = "";
        var Subscriber2 = "";
        var Subscriber3 = "";

        commonEvent.createSubscriber(subscriberInfo_MuitiAbility_back).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack_multiAbility_Back);
        })

        commonEvent.createSubscriber(subscriberInfo_Entry2MainAbility_back).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber2====>");
          Subscriber2 = data;
          await commonEvent.subscribe(Subscriber2, SubscribeCallBack_entry2MainAbility2_back);
        })

        commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber3====>");
          Subscriber3 = data;
          await commonEvent.subscribe(Subscriber3, SubscribeCallBack);
        })

        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.MultiAbility",
          bundleName : "com.example.etsmyapplication",
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey2[0]).assertEqual("onCreate");
            expect(listKey2[1]).assertEqual("onWindowStageCreate");
            expect(listKey2[2]).assertEqual("onForeground");
            expect(listKey2[3]).assertEqual("onBackground");
            console.log(TAG + "startAbility listKey2 : " + listKey2);
          }, 2000);
        });
        abilityContext.startAbility({
          abilityName : "com.example.entry2.Entry2MainAbility",
          bundleName : "com.example.etsmyapplication",
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey2_2[0]).assertEqual("onCreate");
            expect(listKey2_2[1]).assertEqual("onWindowStageCreate");
            expect(listKey2_2[2]).assertEqual("onForeground");
            expect(listKey2_2[3]).assertEqual("onBackground");
            console.log(TAG + "startAbility listKey2_2 : " + listKey2_2);
          }, 3000);
        });
        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.MainAbility2",
          bundleName : "com.example.etsmyapplication",
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey[0]).assertEqual("onCreate");
            expect(listKey[1]).assertEqual("onWindowStageCreate");
            expect(listKey[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey : " + listKey);
            done();
          }, 4000);
        });
        console.log("------------end SUB_AA_OpenHarmony_AbilityStart_1300-------------");
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_1100
       * @tc.name    Different applications, ability chain pulling: 1 pull 2, 2 pull 3
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_1100", 0, async function(done){
        TAG = "SUB_AA_OpenHarmony_AbilityStart_1100";
        listKey2_2 = ["", "", "",""];
        listKey2 = ["", "", "",""];
        listKey_3 = ["", "", ""];
        var Subscriber = "";
        var Subscriber2 = "";
        var Subscriber3 = "";

        commonEvent.createSubscriber(subscriberInfo_MainAbility2_back).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility2_Back);
        })

        commonEvent.createSubscriber(subscriberInfo_AuxMainAbility_back).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber2====>");
          Subscriber2 = data;
          await commonEvent.subscribe(Subscriber2, SubscribeCallBack_auxMainAbility_back_2);
        })

        commonEvent.createSubscriber(subscriberInfo_AuxEntry2MainAbility).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber3====>");
          Subscriber3 = data;
          await commonEvent.subscribe(Subscriber3, SubscribeCallBack3_auxMainAbility2);
        })

        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.MainAbility2",
          bundleName : "com.example.etsmyapplication",
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey2_2[0]).assertEqual("onCreate");
            expect(listKey2_2[1]).assertEqual("onWindowStageCreate");
            expect(listKey2_2[2]).assertEqual("onForeground");
            expect(listKey2_2[3]).assertEqual("onBackground");
            console.log(TAG + "startAbility listKey2_2 : " + listKey2_2);
          }, 2000);
        });
        abilityContext.startAbility({
          abilityName : "com.example.auxiliaryabilitywithreturnvalue.MainAbility",
          bundleName : "com.example.auxiliaryabilitywithreturnvalue",
        }, (error, data) => {
          console.log(TAG + ": startAbility2 success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey2[0]).assertEqual("onCreate");
            expect(listKey2[1]).assertEqual("onWindowStageCreate");
            expect(listKey2[2]).assertEqual("onForeground");
            expect(listKey2[3]).assertEqual("onBackground");
            console.log(TAG + "startAbility listKey2 : " + listKey2);
          }, 3000);
        });
        abilityContext.startAbility({
          abilityName : "com.example.entry2.AuxMainAbility",
          bundleName : "com.example.auxiliaryabilitywithreturnvalue",
        }, (error, data) => {
          console.log(TAG + ": startAbility3 success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey_3[0]).assertEqual("onCreate");
            expect(listKey_3[1]).assertEqual("onWindowStageCreate");
            expect(listKey_3[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey_3 : " + listKey_3);
            done();
          }, 4000);
        });
        console.log("------------end SUB_AA_OpenHarmony_AbilityStart_1100-------------");
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_0400
       * @tc.name    In different applications, API8's ability1 pulls up API8's ability2 and ends ability1
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_0400", 0, async function(done){
        TAG = "SUB_AA_OpenHarmony_AbilityStart_0400";
        listKey3 = ["", "", "", "", ""];
        listKey_2 = ["", "", ""];
        var Subscriber = "";
        var Subscriber2 = "";

        commonEvent.createSubscriber(subscriberInfo_MainAbility2_Destroy).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility2_Destroy);
        })

        commonEvent.createSubscriber(subscriberInfo_AuxMainAbilitySta).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber2====>");
          Subscriber2 = data;
          await commonEvent.subscribe(Subscriber2, SubscribeCallBack2_auxMainAbility);
        })

        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.MainAbility2",
          bundleName : "com.example.etsmyapplication",
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey3[0]).assertEqual("onCreate");
            expect(listKey3[1]).assertEqual("onWindowStageCreate");
            expect(listKey3[2]).assertEqual("onForeground");
            expect(listKey3[3]).assertEqual("onBackground");
            expect(listKey3[4]).assertEqual("onDestroy");
            console.log(TAG + "startAbility listKey3 : " + listKey3);
          }, 2000);
        });
        abilityContext.startAbility({
          abilityName : "com.example.auxiliaryabilitywithreturnvalue.MainAbility",
          bundleName : "com.example.auxiliaryabilitywithreturnvalue",
        }, (error, data) => {
          console.log(TAG + ": startAbility2 success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey_2[0]).assertEqual("onCreate");
            expect(listKey_2[1]).assertEqual("onWindowStageCreate");
            expect(listKey_2[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey_2 : " + listKey_2);
            done();
          }, 3000);
        });
        console.log("------------end SUB_AA_OpenHarmony_AbilityStart_0400-------------");
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_2200
       * @tc.name    Start the ability. After that, start the ability again (single case)
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_2200", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_AbilityStart_2200-------------");
        TAG = "SUB_AA_OpenHarmony_AbilityStart_2200";
        listKey3 = ["", "", "","",""];
        listKey = ["", "", ""];
        var Subscriber = "";
        var Subscriber2 = "";

        commonEvent.createSubscriber(subscriberInfo_SingletonAbility_StaAndTer).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack_singleton_Destroy);
        })

        commonEvent.createSubscriber(subscriberInfo_SingletonAbility).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber2====>");
          Subscriber2 = data;
          await commonEvent.subscribe(Subscriber2, SubscribeCallBack_singletonAbility);
        })

        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.SingletonAbility",
          bundleName : "com.example.etsmyapplication"
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey3[0]).assertEqual("onCreate");
            expect(listKey3[1]).assertEqual("onWindowStageCreate");
            expect(listKey3[2]).assertEqual("onForeground");
            expect(listKey3[3]).assertEqual("onBackground");
            expect(listKey3[4]).assertEqual("onDestroy");
            console.log(TAG + "startAbility listKey3 : " + listKey3);
          }, 2000);
        });
        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.SingletonAbility",
          bundleName : "com.example.etsmyapplication"
        }, (error, data) => {
          console.log(TAG + ": startAbility2 success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey[0]).assertEqual("onCreate");
            expect(listKey[1]).assertEqual("onWindowStageCreate");
            expect(listKey[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey : " + listKey);
            done();
          }, 3000);
        });
        console.log("------------end SUB_AA_OpenHarmony_AbilityStart_2200-------------");
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_2300
       * @tc.name    Start the ability. After that, start the ability again (multiple cases)
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_2300", 0, async function(done) {
        console.log("------------start SUB_AA_OpenHarmony_AbilityStart_2300-------------");
        TAG = "SUB_AA_OpenHarmony_AbilityStart_2300";
        listKey3 = ["", "", "", "", ""];
        listKey_3 = ["", "", ""];
        var Subscriber = "";
        var Subscriber2 = "";

        commonEvent.createSubscriber(subscriberInfo_MuitiAbility_StaAndTer).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack_multi_Destroy);
        })
        commonEvent.createSubscriber(subscriberInfo_MuitiAbility).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber2====>");
          Subscriber2 = data;
          await commonEvent.subscribe(Subscriber2, SubscribeCallBack_multiAbility);
        })

        abilityContext.startAbility({
          abilityName: "com.example.etsmyapplication.MultiAbility",
          bundleName: "com.example.etsmyapplication"
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey3[0]).assertEqual("onCreate");
            expect(listKey3[1]).assertEqual("onWindowStageCreate");
            expect(listKey3[2]).assertEqual("onForeground");
            expect(listKey3[3]).assertEqual("onBackground");
            expect(listKey3[4]).assertEqual("onDestroy");
            console.log(TAG + "startAbility listKey3 : " + listKey3);
          }, 2000);
        });
        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.MultiAbility",
          bundleName : "com.example.etsmyapplication"
        }, (error, data) => {
          console.log(TAG + ": startAbility2 success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey_3[0]).assertEqual("onCreate");
            expect(listKey_3[1]).assertEqual("onWindowStageCreate");
            expect(listKey_3[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey_3 : " + listKey_3);
            done();
          }, 3000);
        });
        console.log("------------end SUB_AA_OpenHarmony_AbilityStart_2300-------------");
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_1000
       * @tc.name    Different HAP and ability chain pull-up for the same application: 1 pull 2, 2 pull 3
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_1000", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_AbilityStart_1000-------------");
        TAG = "SUB_AA_OpenHarmony_AbilityStart_1000";
        listKey2 = ["", "", "",""];
        listKey2_2 = ["", "", "",""];
        listKey_3 = ["", "", ""];
        var Subscriber = "";
        var Subscriber2 = "";
        var Subscriber3 = "";

        commonEvent.createSubscriber(subscriberInfo_MainAbility2_back).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility2_Back2);
        })

        commonEvent.createSubscriber(subscriberInfo_Entry2MainAbility_back).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber2====>");
          Subscriber2 = data;
          await commonEvent.subscribe(Subscriber2, SubscribeCallBack_entry2MainAbilityBack);
        })

        commonEvent.createSubscriber(subscriberInfo_Entry3MainAbility).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber3====>");
          Subscriber3 = data;
          await commonEvent.subscribe(Subscriber3, SubscribeCallBack_entry3MainAbilityBack);
        })

        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.MainAbility2",
          bundleName : "com.example.etsmyapplication",
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey2[0]).assertEqual("onCreate");
            expect(listKey2[1]).assertEqual("onWindowStageCreate");
            expect(listKey2[2]).assertEqual("onForeground");
            expect(listKey2[3]).assertEqual("onBackground");
            console.log(TAG + "startAbility listKey2 : " + listKey2);
          }, 2000);
        });
        abilityContext.startAbility({
          abilityName : "com.example.entry2.Entry2MainAbility",
          bundleName : "com.example.etsmyapplication",
        }, (error, data) => {
          console.log(TAG + ": startAbility2 success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey2_2[0]).assertEqual("onCreate");
            expect(listKey2_2[1]).assertEqual("onWindowStageCreate");
            expect(listKey2_2[2]).assertEqual("onForeground");
            expect(listKey2_2[3]).assertEqual("onBackground");
            console.log(TAG + "startAbility listKey2_2 : " + listKey2_2);
          }, 3000);
        });
        abilityContext.startAbility({
          abilityName : "com.example.entry3.Entry3MainAbility",
          bundleName : "com.example.etsmyapplication",
        }, (error, data) => {
          console.log(TAG + ": startAbility3 success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey_3[0]).assertEqual("onCreate");
            expect(listKey_3[1]).assertEqual("onWindowStageCreate");
            expect(listKey_3[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey_3 : " + listKey_3);
            done();
          }, 4000);
        });
        console.log("------------end SUB_AA_OpenHarmony_AbilityStart_1000-------------");
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_0900
       * @tc.name    Same application, same HAP, ability chain pulling: 1 pull 2, 2 pull 3
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_0900", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_AbilityStart_0900-------------");
        TAG = "SUB_AA_OpenHarmony_AbilityStart_0900";
        listKey2 = ["", "", "",""];
        listKey2_2 = ["", "", "",""];
        listKey_3 = ["", "", ""];
        var Subscriber = "";
        var Subscriber2 = "";
        var Subscriber3 = "";

        commonEvent.createSubscriber(subscriberInfo_MainAbility2_back).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber1====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility2_Back);
        })

        commonEvent.createSubscriber(subscriberInfo_SingletonAbility_Back).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber2====>");
          Subscriber2 = data;
          await commonEvent.subscribe(Subscriber2, SubscribeCallBack_singleton_Back);
        })

        commonEvent.createSubscriber(subscriberInfo_MuitiAbility).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber3====>");
          Subscriber3 = data;
          await commonEvent.subscribe(Subscriber3, SubscribeCallBack_multiAbility);
        })

        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.MainAbility2",
          bundleName : "com.example.etsmyapplication"
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey2_2[0]).assertEqual("onCreate");
            expect(listKey2_2[1]).assertEqual("onWindowStageCreate");
            expect(listKey2_2[2]).assertEqual("onForeground");
            expect(listKey2_2[3]).assertEqual("onBackground");
            console.log(TAG + "startAbility listKey2_2 : " + listKey2_2);
          }, 1000);
        });
        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.SingletonAbility",
          bundleName : "com.example.etsmyapplication"
        }, (error, data) => {
          console.log(TAG + ": startAbility2 success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey2[0]).assertEqual("onCreate");
            expect(listKey2[1]).assertEqual("onWindowStageCreate");
            expect(listKey2[2]).assertEqual("onForeground");
            expect(listKey2[3]).assertEqual("onBackground");
            console.log(TAG + "startAbility listKey2 : " + listKey2);
          }, 2000);
        });
        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.MultiAbility",
          bundleName : "com.example.etsmyapplication"
        }, (error, data) => {
          console.log(TAG + ": startAbility3 success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey_3[0]).assertEqual("onCreate");
            expect(listKey_3[1]).assertEqual("onWindowStageCreate");
            expect(listKey_3[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey_3 : " + listKey_3);
            done();
          }, 3000);
        });
        console.log("------------end SUB_AA_OpenHarmony_AbilityStart_0900-------------");
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_startFromSysService_0200
       * @tc.name    In different haps of the same application, ability1 pulls up ability2 and ends ability1
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_startFromSysService_0200", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_startFromSysService_0200-------------");
        TAG = "SUB_AA_OpenHarmony_startFromSysService_0200";
        listKey = ["", "", ""];
        var Subscriber = "";

        commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack);
        })

        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.MainAbility2",
          bundleName : "com.example.etsmyapplication",
          parameters: {
            aa: "aa start -a com.huawei.myapplication.MainAbility -b com.huawei.myapplication"
          }
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey[0]).assertEqual("onCreate");
            expect(listKey[1]).assertEqual("onWindowStageCreate");
            expect(listKey[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey : " + listKey);
            done();
          }, 2000);
          console.log("------------end SUB_AA_OpenHarmony_startFromSysService_0200-------------");
        });
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_0200
       * @tc.name    In different haps of the same application, ability1 pulls up ability2 and ends ability1
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_0200", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_AbilityStart_0200-------------");
        TAG = "SUB_AA_OpenHarmony_AbilityStart_0200";
        listKey3 = ["", "", "", "", ""];
        listKey_2 = ["", "", ""];

        var Subscriber = "";
        var Subscriber2 = "";

        commonEvent.createSubscriber(subscriberInfo_MainAbility2_Destroy).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility2_Destroy);
        })

        commonEvent.createSubscriber(subscriberInfo_Entry2MainAbility).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber2====>");
          Subscriber2 = data;
          await commonEvent.subscribe(Subscriber2, SubscribeCallBack_entry2MainAbility);
        })

        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.MainAbility2",
          bundleName : "com.example.etsmyapplication",
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey3[0]).assertEqual("onCreate");
            expect(listKey3[1]).assertEqual("onWindowStageCreate");
            expect(listKey3[2]).assertEqual("onForeground");
            expect(listKey3[3]).assertEqual("onBackground");
            expect(listKey3[4]).assertEqual("onDestroy");
            console.log(TAG + "startAbility listKey3 : " + listKey3);
          }, 2000);
        });
        abilityContext.startAbility({
          abilityName : "com.example.entry2.Entry2MainAbility",
          bundleName : "com.example.etsmyapplication",
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey_2[0]).assertEqual("onCreate");
            expect(listKey_2[1]).assertEqual("onWindowStageCreate");
            expect(listKey_2[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey_2 : " + listKey_2);
            done();
          }, 2000);
        });
        console.log("------------end SUB_AA_OpenHarmony_AbilityStart_0200-------------");
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_0300
       * @tc.name    In different haps of the same application, ability1 pulls up ability2 and ends ability2
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_0300", 0, async function(done){
        TAG = "SUB_AA_OpenHarmony_AbilityStart_0300";
        listKey3 = ["", "", "", "", ""];
        listKey2_2 = ["", "", "", ""];
        var Subscriber = "";
        var Subscriber2 = "";

        commonEvent.createSubscriber(subscriberInfo_MainAbility2_back).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility2_Back);
        })

        commonEvent.createSubscriber(subscriberInfo_Entry2MainAbilityDestroy).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber2====>");
          Subscriber2 = data;
          await commonEvent.subscribe(Subscriber2, SubscribeCallBack_entry2MainAbility2_Destroy);
        })

        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.MainAbility2",
          bundleName : "com.example.etsmyapplication",
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey2_2[0]).assertEqual("onCreate");
            expect(listKey2_2[1]).assertEqual("onWindowStageCreate");
            expect(listKey2_2[2]).assertEqual("onForeground");
            expect(listKey2_2[3]).assertEqual("onBackground");
            console.log(TAG + "startAbility listKey2_2 : " + listKey2_2);
          }, 2000);
        });
        abilityContext.startAbility({
          abilityName : "com.example.entry2.Entry2MainAbility",
          bundleName : "com.example.etsmyapplication",
        }, (error, data) => {
          console.log(TAG + ": startAbility2 success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey3[0]).assertEqual("onCreate");
            expect(listKey3[1]).assertEqual("onWindowStageCreate");
            expect(listKey3[2]).assertEqual("onForeground");
            expect(listKey3[3]).assertEqual("onBackground");
            expect(listKey3[4]).assertEqual("onDestroy");
            console.log(TAG + "startAbility listKey3 : " + listKey3);
            done();
          }, 2000);
        });
        console.log("------------end SUB_AA_OpenHarmony_AbilityStart_0300-------------");
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_0100
       * @tc.name    In the same application and the same HAP, ability1 pulls up ability2 and ends ability1
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_0100", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_AbilityStart_0100-------------");
        TAG = "SUB_AA_OpenHarmony_AbilityStart_0100";
        listKey3 = ["", "", "", "", ""];
        listKey = ["", "", ""];
        var Subscriber = "";
        var Subscriber2 = "";

        commonEvent.createSubscriber(subscriberInfo_MainAbility2_Destroy).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility2_Destroy);
        })
        commonEvent.createSubscriber(subscriberInfo_SingletonAbility).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber2 = data;
          await commonEvent.subscribe(Subscriber2, SubscribeCallBack_singletonAbility);
        })

        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.MainAbility2",
          bundleName : "com.example.etsmyapplication",
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey3[0]).assertEqual("onCreate");
            expect(listKey3[1]).assertEqual("onWindowStageCreate");
            expect(listKey3[2]).assertEqual("onForeground");
            expect(listKey3[3]).assertEqual("onBackground");
            expect(listKey3[4]).assertEqual("onDestroy");
            console.log(TAG + "startAbility listKey3 : " + listKey3);
          }, 2000);
        });
        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.SingletonAbility",
          bundleName : "com.example.etsmyapplication",
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey[0]).assertEqual("onCreate");
            expect(listKey[1]).assertEqual("onWindowStageCreate");
            expect(listKey[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey : " + listKey);
            done();
          }, 3000);
        });
        console.log("------------end SUB_AA_OpenHarmony_AbilityStart_0100-------------");
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_1400
       * @tc.name    Repeat startup ability (single case)
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_1400", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_AbilityStart_1400-------------");
        TAG = "SUB_AA_OpenHarmony_AbilityStart_1400"
        listKey = ["", "", ""];
        listKey_2 = ["", "", ""];
        var Subscriber = "";
        var Subscriber2 = "";

        commonEvent.createSubscriber(subscriberInfo_SingletonAbility).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber1====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack_singletonAbility);
        })

        commonEvent.createSubscriber(subscriberInfo_SingletonAbility2).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber2====>");
          Subscriber2 = data;
          await commonEvent.subscribe(Subscriber2, SubscribeCallBack_singletonAbility2);
        })

        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.SingletonAbility",
          bundleName : "com.example.etsmyapplication"
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey[0]).assertEqual("onCreate");
            expect(listKey[1]).assertEqual("onWindowStageCreate");
            expect(listKey[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey : " + listKey);
          }, 2000);
        });
        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.SingletonAbility",
          bundleName : "com.example.etsmyapplication"
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey_2[0]).assertEqual("onCreate");
            expect(listKey_2[1]).assertEqual("onWindowStageCreate");
            expect(listKey_2[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey_2 : " + listKey_2);
            done();
          }, 3000);
        });
        console.log("------------end SUB_AA_OpenHarmony_AbilityStart_1400-------------");
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_1500
       * @tc.name    Repeated startup ability (multiple cases)
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_AbilityStart_1500", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_AbilityStart_1500-------------");
        TAG = "SUB_AA_OpenHarmony_AbilityStart_1500";
        listKey_3 = ["", "", ""];
        listKey_2 = ["", "", ""];
        var Subscriber1 = "";
        var Subscriber2 = "";

        commonEvent.createSubscriber(subscriberInfo_MuitiAbility).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber1====>");
          Subscriber1 = data;
          await commonEvent.subscribe(Subscriber1, SubscribeCallBack_multiAbility);
        })

        commonEvent.createSubscriber(subscriberInfo_MuitiAbility).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber2====>");
          Subscriber2 = data;
          await commonEvent.subscribe(Subscriber2, SubscribeCallBack_multiAbility2);
        })

        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.MultiAbility",
          bundleName : "com.example.etsmyapplication"
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey_3[0]).assertEqual("onCreate");
            expect(listKey_3[1]).assertEqual("onWindowStageCreate");
            expect(listKey_3[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey_3 : " + listKey_3);
          }, 2000);
        });
        abilityContext.startAbility({
          abilityName : "com.example.etsmyapplication.MultiAbility",
          bundleName : "com.example.etsmyapplication"
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey_2[0]).assertEqual("onCreate");
            expect(listKey_2[1]).assertEqual("onWindowStageCreate");
            expect(listKey_2[2]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey_2 : " + listKey_2);
            done();
          }, 3000);
        });
        console.log("------------end SUB_AA_OpenHarmony_AbilityStart_1500-------------");
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_StartAbilityForResult_0100
       * @tc.name    Pull up ability in the same HAP and end ability
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_StartAbilityForResult_0100", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_StartAbilityForResult_0100-------------");
        TAG = "SUB_AA_OpenHarmony_StartAbilityForResult_0100";
        listKey4 = ["", "", "", "", "", ""];
        var Subscriber = "";

        commonEvent.createSubscriber(subscriberInfo_startAndterminateResult).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility2_StaAndTer);
        })

        abilityContext.startAbilityForResult({
          abilityName : "com.example.etsmyapplication.MainAbility2",
          bundleName : "com.example.etsmyapplication"
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + "," +
          "data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey4[0]).assertEqual("onCreate");
            expect(listKey4[1]).assertEqual("onWindowStageCreate");
            expect(listKey4[2]).assertEqual("onForeground");
            expect(listKey4[3]).assertEqual("onBackground");
            expect(listKey4[4]).assertEqual("onWindowStageDestroy");
            expect(listKey4[5]).assertEqual("onDestroy");
            console.log(TAG + "startAbility listKey4 : " + listKey4);
            done();
          }, 2000);
        });
        console.log("------------end SUB_AA_OpenHarmony_StartAbilityForResult_0100-------------");
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_StartAbilityForResult_0200
       * @tc.name    Pull up the ability of API8 in different applications and end the ability
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_StartAbilityForResult_0200", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_StartAbilityForResult_0200-------------");
        TAG = "SUB_AA_OpenHarmony_StartAbilityForResult_0200";
        listKey4 = ["", "", "", "", "", ""];
        var Subscriber = "";

        commonEvent.createSubscriber(subscriberInfo_Entry2MainAbility_StaAndTer).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack_entry2MainAbility_StaAndTer);
        })

        abilityContext.startAbilityForResult({
          abilityName : "com.example.entry2.Entry2MainAbility",
          bundleName : "com.example.etsmyapplication"
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + "," +
          "data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey4[0]).assertEqual("onCreate");
            expect(listKey4[1]).assertEqual("onWindowStageCreate");
            expect(listKey4[2]).assertEqual("onForeground");
            expect(listKey4[3]).assertEqual("onBackground");
            expect(listKey4[4]).assertEqual("onWindowStageDestroy");
            expect(listKey4[5]).assertEqual("onDestroy");
            console.log(TAG + "startAbility listKey4 : " + listKey4);
            done();
          }, 2000);
        });
        console.log("------------end SUB_AA_OpenHarmony_StartAbilityForResult_0200-------------");
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_StartAbilityForResult_0500
       * @tc.name    Pull up the ability of API8 in different applications and end the ability
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_StartAbilityForResult_0500", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_StartAbilityForResult_0500-------------");
        TAG = "SUB_AA_OpenHarmony_StartAbilityForResult_0500";
        listKey4 = ["", "", "", "", "", ""];
        var Subscriber = "";

        commonEvent.createSubscriber(subscriberInfo_startAndterminateResult).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility2_StaAndTer);
        })

        abilityContext.startAbilityForResult({
          bundleName : "com.example.auxiliaryabilitywithreturnvalue",
          abilityName : "com.example.api7entry.AuxAPI7MainAbility"
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + "," +
          "data: " + JSON.stringify(data));
        });
        abilityContext.startAbilityForResult({
          bundleName : "com.example.etsmyapplication",
          abilityName : "com.example.etsmyapplication.MainAbility2"
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + "," +
          "data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey4[0]).assertEqual("onCreate");
            expect(listKey4[1]).assertEqual("onWindowStageCreate");
            expect(listKey4[2]).assertEqual("onForeground");
            expect(listKey4[3]).assertEqual("onBackground");
            expect(listKey4[4]).assertEqual("onWindowStageDestroy");
            expect(listKey4[5]).assertEqual("onDestroy");
            console.log(TAG + "startAbility listKey4 : " + listKey4);
            done();
          }, 2000);
        });
        console.log("------------end SUB_AA_OpenHarmony_StartAbilityForResult_0500-------------");
      });

      /*
       * @tc.number  SUB_AlA_OpenHarmony_StartAbilityForResult_0600
       * @tc.name    The same application, the same HAP, ability chain pull up: 1 pull 2, 2 pull 3,
                     and terminate the ability
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_StartAbilityForResult_0600", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_StartAbilityForResult_0600-------------");
        TAG = "SUB_AA_OpenHarmony_StartAbilityForResult_0600";
        listKey4 = ["", "", "", "", "", ""];
        listKey4_2 = ["", "", "", "", "", ""];
        var Subscriber = "";
        var Subscriber2 = "";

        commonEvent.createSubscriber(subscriberInfo_startAndterminateResult).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility2_StaAndTer);
        })

        commonEvent.createSubscriber(subscriberInfo_startAndterminateResult2).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber2====>");
          Subscriber2 = data;
          await commonEvent.subscribe(Subscriber2, SubscribeCallBack_multiAbility_StaAndTer);
        })

        abilityContext.startAbilityForResult({
          bundleName : "com.example.etsmyapplication",
          abilityName : "com.example.etsmyapplication.MainAbility2"
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + "," +
          "data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey4[0]).assertEqual("onCreate");
            expect(listKey4[1]).assertEqual("onWindowStageCreate");
            expect(listKey4[2]).assertEqual("onForeground");
            expect(listKey4[3]).assertEqual("onBackground");
            expect(listKey4[4]).assertEqual("onWindowStageDestroy");
            expect(listKey4[5]).assertEqual("onDestroy");
            console.log(TAG + "startAbility listKey4 : " + listKey4);
          }, 1000);
        });
        abilityContext.startAbilityForResult({
          bundleName : "com.example.etsmyapplication",
          abilityName : "com.example.etsmyapplication.MultiAbility"
        }, (error, data) => {
          console.log(TAG + ": startAbility2 success, err: " + JSON.stringify(error) + "," +
          "data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey4_2[0]).assertEqual("onCreate");
            expect(listKey4_2[1]).assertEqual("onWindowStageCreate");
            expect(listKey4_2[2]).assertEqual("onForeground");
            expect(listKey4_2[3]).assertEqual("onBackground");
            expect(listKey4_2[4]).assertEqual("onWindowStageDestroy");
            expect(listKey4_2[5]).assertEqual("onDestroy");
            console.log(TAG + "startAbility listKey4_2 : " + listKey4_2);
            done();
          }, 2000);
        });
        console.log("------------end SUB_AA_OpenHarmony_StartAbilityForResult_0600-------------");
      });

      /*
       * @tc.number  SUB_AA_OpenHarmony_StartAbilityForResult_0800
       * @tc.name    Ability loop pull up: 1 pull 2, 2 pull 1 (multiple cases), and terminate ability
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_StartAbilityForResult_0800", 0, async function(done){
        console.log("------------start SUB_AA_OpenHarmony_StartAbilityForResult_0800-------------");
        TAG = "SUB_AA_OpenHarmony_StartAbilityForResult_0800";
        listKey4 = ["", "", "", "", "", ""];
        listKey4_2 = ["", "", "", "", "", ""];
        var Subscriber = "";
        var Subscriber2 = "";

        commonEvent.createSubscriber(subscriberInfo_AuxMainAbility2StaAndTer).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber====>");
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack_AUXMainAbility2_StaAndTer);
        })

        commonEvent.createSubscriber(subscriberInfo_MainAbility2_StaAndTer).then(async (data) => {
          console.debug(TAG + "====>Create Subscriber2====>");
          Subscriber2 = data;
          await commonEvent.subscribe(Subscriber2, SubscribeCallBack_mainAbility2_StaAndTer2);
        })

        abilityContext.startAbilityForResult({
          bundleName : "com.example.auxiliaryabilitywithreturnvalue",
          abilityName : "com.example.auxiliaryabilitywithreturnvalue.MainAbility2"
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + "," +
          "data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey4[0]).assertEqual("onCreate");
            expect(listKey4[1]).assertEqual("onWindowStageCreate");
            expect(listKey4[2]).assertEqual("onForeground");
            expect(listKey4[3]).assertEqual("onBackground");
            expect(listKey4[4]).assertEqual("onWindowStageDestroy");
            expect(listKey4[5]).assertEqual("onDestroy");
            console.log(TAG + "startAbility listKey4 : " + listKey4);
          }, 2000);
        });
        abilityContext.startAbilityForResult({
          bundleName : "com.example.etsmyapplication",
          abilityName : "com.example.etsmyapplication.MainAbility2"
        }, (error, data) => {
          console.log(TAG + ": startAbility2 success, err: " + JSON.stringify(error) + "," +
          "data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey4_2[0]).assertEqual("onCreate");
            expect(listKey4_2[1]).assertEqual("onWindowStageCreate");
            expect(listKey4_2[2]).assertEqual("onForeground");
            expect(listKey4_2[3]).assertEqual("onBackground");
            expect(listKey4_2[4]).assertEqual("onWindowStageDestroy");
            expect(listKey4_2[5]).assertEqual("onDestroy");
            console.log(TAG + "startAbility listKey4_2 : " + listKey4_2);
            done();
          }, 3000);
        });
        console.log("------------end SUB_AA_OpenHarmony_StartAbilityForResult_0800-------------");
      });

  });
}