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
import { describe, beforeAll, afterEach, it, expect } from '@ohos/hypium'
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import fileio from '@ohos.fileio'
function sleep(time) {
  return new Promise((resolve)=>setTimeout(resolve,time));
}
let bundle = "ohos.acts.example.actsgetwantparameterstest"
let ability = "WantAbility"
let AbilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
let fd;
try{
  fd = fileio.openSync(globalThis.AbilityContext1.filesDir + "/test.txt", 0o100, 0o666)
}catch(e){
  console.info("openFile failed:" + JSON.stringify(e))
}
export default function ApiCoverTest() {
  describe('ApiCoverTestTest', function () {

    beforeAll(async (done) => {
      let aaCommand = "aa start -b ohos.acts.example.actsgetwantparameterstest -a ServiceAbility"
      await AbilityDelegator.executeShellCommand(aaCommand).then((data)=>{
        console.info("---executeShellCommand--- success")
      }).catch((error)=>{
        console.info("---executeShellCommand--- failed")
      })
      setTimeout(function () {
        done();
      }, 5000);
    })
    afterEach(async (done) => {
      setTimeout(function () {
        done();
      }, 3000);
    })

    /*
     * @tc.number  SUB_AA_Ability_WantParameters_0200
     * @tc.name    StartAbility with parameters is FD.
     * @tc.desc    Function test
     * @tc.level   3
     */
    it('SUB_AA_Ability_WantParameters_0200', 0, async function (done) {
      let TAG = "SUB_AA_Ability_WantParameters_0200-"
      console.info(TAG  + "---start---")
      await sleep(2000);
      if(globalThis.AbilityContext1 == undefined){
        console.info(TAG + "context is undefined")
        expect().assertFail()
        done()
      }
      let param = {
        "keyFd": {
          "type":"FD",
          "value":fd  
        }
      }
      let want = {
        bundleName: bundle,
        abilityName: ability,
        parameters:param
      };
      await globalThis.AbilityContext1.startAbility(want).then((data) => {
        console.log(TAG + 'Ability: startAbility success:' + JSON.stringify(data));
      }).catch((error) => {
        console.error(TAG + `Ability: startAbility failed: ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      })
      await sleep(2000)
      expect(globalThis.abilityWantParam.parameters["keyFd"].type).assertEqual("FD") 
      done()
    })
    
    /*
     * @tc.number  SUB_AA_Ability_WantParameters_0300
     * @tc.name    StartAbility with parameters is json type.
     * @tc.desc    Function test
     * @tc.level   3
     */
    it('SUB_AA_Ability_WantParameters_0300', 0, async function (done) {
      let TAG = "SUB_AA_Ability_WantParameters_0300-"
      console.info(TAG  + "---start---")
      await sleep(2000);
      if(globalThis.AbilityContext1 == undefined){
        console.info(TAG + "context is undefined")
        expect().assertFail()
        done()
      }
      let param = {
        "keyObj": {
          "name":"zhangsan",
          "sex":1  
        }
      }
      let want = {
        bundleName: bundle,
        abilityName: ability,
        parameters:param
      };
      await globalThis.AbilityContext1.startAbility(want).then((data) => {
        console.log(TAG + 'Ability: startAbility success:' + JSON.stringify(data));
      }).catch((error) => {
        console.error(TAG + `Ability: startAbility failed: ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      })
      await sleep(2000)
      expect(globalThis.abilityWantParam.parameters["keyObj"].name).assertEqual("zhangsan")
      expect(globalThis.abilityWantParam.parameters["keyObj"].sex).assertEqual(1)     
      done()
    })

    
    /*
     * @tc.number  SUB_AA_Ability_WantParameters_0400
     * @tc.name    StartAbility with parameters is json type in json.
     * @tc.desc    Function test
     * @tc.level   3
     */
    it('SUB_AA_Ability_WantParameters_0400', 0, async function (done) {
      let TAG = "SUB_AA_Ability_WantParameters_0400-"
      console.info(TAG  + "---start---")
      await sleep(2000);
      if(globalThis.AbilityContext1 == undefined){
        console.info(TAG + "context is undefined")
        expect().assertFail()
        done()
      }
      let param = {
        "keyFlexObj": {
          "data":{
            "info":"abcd",
            "len":4
          }        
        }
      }
      let want = {
        bundleName: bundle,
        abilityName: ability,
        parameters:param
      };
      await globalThis.AbilityContext1.startAbility(want).then((data) => {
        console.log(TAG + 'Ability: startAbility success:' + JSON.stringify(data));
      }).catch((error) => {
        console.error(TAG + `Ability: startAbility failed: ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      })
      await sleep(2000)
      console.info(TAG + "get result:" + JSON.stringify(globalThis.abilityWantParam))
      console.info(TAG + "get result:" + JSON.stringify(globalThis.abilityWantParam.keyFlexObj))
      console.info(TAG + "get result:" + JSON.stringify(globalThis.abilityWantParam["keyFlexObj"]))
      expect(globalThis.abilityWantParam.parameters["keyFlexObj"].data["info"]).assertEqual("abcd")
      expect(globalThis.abilityWantParam.parameters["keyFlexObj"].data["len"]).assertEqual(4)
      done()
    })
        
    /*
     * @tc.number  SUB_AA_Ability_WantParameters_0500
     * @tc.name    StartAbility with parameters is array type in json.
     * @tc.desc    Function test
     * @tc.level   3
     */
    it('SUB_AA_Ability_WantParameters_0500', 0, async function (done) {
      let TAG = "SUB_AA_Ability_WantParameters_0500-"
      console.info(TAG  + "---start---")
      await sleep(2000);
      if(globalThis.AbilityContext1 == undefined){
        console.info(TAG + "context is undefined")
        expect().assertFail()
        done()
      }
      let param = {
        "keyArrayObj": {
          "data":[1, 2, 3]      
        }
      }
      let want = {
        bundleName: bundle,
        abilityName: ability,
        parameters:param
      };
      await globalThis.AbilityContext1.startAbility(want).then((data) => {
        console.log(TAG + 'Ability: startAbility success:' + JSON.stringify(data));
      }).catch((error) => {
        console.error(TAG + `Ability: startAbility failed: ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      })
      await sleep(2000)
      console.info(TAG + "get result:" + JSON.stringify(globalThis.abilityWantParam))
      expect(globalThis.abilityWantParam.parameters["keyArrayObj"].data[0]).assertEqual(1)
      expect(globalThis.abilityWantParam.parameters["keyArrayObj"].data[1]).assertEqual(2)
      expect(globalThis.abilityWantParam.parameters["keyArrayObj"].data[2]).assertEqual(3)
      done()
    })

      
    /*
     * @tc.number  SUB_AA_Ability_WantParameters_0600
     * @tc.name    StartAbility with parameters is array json in json.
     * @tc.desc    Function test
     * @tc.level   3
     */
    it('SUB_AA_Ability_WantParameters_0600', 0, async function (done) {
      let TAG = "SUB_AA_Ability_WantParameters_0600-"
      console.info(TAG  + "---start---")
      await sleep(2000);
      if(globalThis.AbilityContext1 == undefined){
        console.info(TAG + "context is undefined")
        expect().assertFail()
        done()
      }
      let param = {
        "key1": [{"data1":"value1","data2":"value2"},{"data3":"value3","data4":"value4"}]
      }
      let want = {
        bundleName: bundle,
        abilityName: ability,
        parameters:param
      };
      await globalThis.AbilityContext1.startAbility(want).then((data) => {
        console.log(TAG + 'Ability: startAbility success:' + JSON.stringify(data));
      }).catch((error) => {
        console.error(TAG + `Ability: startAbility failed: ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      })
      await sleep(2000)
      console.info(TAG + "get result:" + JSON.stringify(globalThis.abilityWantParam))
      expect(globalThis.abilityWantParam.parameters["key1"][0]["data1"]).assertEqual("value1")
      expect(globalThis.abilityWantParam.parameters["key1"][0]["data2"]).assertEqual("value2")
      expect(globalThis.abilityWantParam.parameters["key1"][1]["data3"]).assertEqual("value3")
      expect(globalThis.abilityWantParam.parameters["key1"][1]["data4"]).assertEqual("value4")
      done()
    })

     /*
     * @tc.number  SUB_AA_Ability_WantParameters_0700
     * @tc.name    StartAbility with parameters is FD and value is 0.
     * @tc.desc    Function test
     * @tc.level   3
     */
    it('SUB_AA_Ability_WantParameters_0700', 0, async function (done) {
      let TAG = "SUB_AA_Ability_WantParameters_0700-"
      console.info(TAG  + "---start---")
      await sleep(2000);
      if(globalThis.AbilityContext1 == undefined){
        console.info(TAG + "context is undefined")
        expect().assertFail()
        done()
      }
      let param = {
        "keyFd": {
          "type":"FD",
          "value":0  
        }
      }
      let want = {
        bundleName: bundle,
        abilityName: ability,
        parameters:param
      };
      await globalThis.AbilityContext1.startAbility(want).then((data) => {
        console.log(TAG + 'Ability: startAbility success:' + JSON.stringify(data));
      }).catch((error) => {
        console.error(TAG + `Ability: startAbility failed: ${JSON.stringify(error)}`);
      })
      await sleep(2000)
      console.info(TAG + "get result:" + JSON.stringify(globalThis.abilityWantParam))
      expect(globalThis.abilityWantParam.parameters["keyFd"]["type"]).assertEqual("FD")
      expect(globalThis.abilityWantParam.parameters["keyFd"]["value"]).assertEqual(51) 
      done()
    })

    /*
     * @tc.number  SUB_AA_Ability_WantParameters_0800
     * @tc.name     StartAbility with parameters is FD and value is -1.
     * @tc.desc    Function test
     * @tc.level   3
     */
    it('SUB_AA_Ability_WantParameters_0800', 0, async function (done) {
      let TAG = "SUB_AA_Ability_WantParameters_0800-"
      console.info(TAG  + "---start---")
      await sleep(2000);
      if(globalThis.AbilityContext1 == undefined){
        console.info(TAG + "context is undefined")
        expect().assertFail()
        done()
      }
      let param = {
        "keyFd": {
          "type":"FD",
          "value":-1  
        }
      }
      let want = {
        bundleName: bundle,
        abilityName: ability,
        parameters:param
      };
      await globalThis.AbilityContext1.startAbility(want).then((data) => {
        console.log(TAG + 'Ability: startAbility success:' + JSON.stringify(data));
        expect().assertFail()
        done()
      }).catch((error) => {
        console.error(TAG + `Ability: startAbility failed: ${JSON.stringify(error.code)}`);
        console.log(TAG + 'Ability: startAbility success:' + JSON.stringify(error.message));
        expect(error.code).assertEqual(16000050)
        expect(error.message).assertEqual("Internal error.")
        done()
      })
    })

    
    /*
     * @tc.number  SUB_AA_Ability_WantParameters_0900
     * @tc.name     StartAbility with parameters is FD and type is string.
     * @tc.desc    Function test
     * @tc.level   3
     */
    it('SUB_AA_Ability_WantParameters_0900', 0, async function (done) {
      let TAG = "SUB_AA_Ability_WantParameters_0900-"
      console.info(TAG  + "---start---")
      await sleep(2000);
      if(globalThis.AbilityContext1 == undefined){
        console.info(TAG + "context is undefined")
        expect().assertFail()
        done()
      }
      let param = {
        "keyFd": {
          "type":"FD",
          "value":"err"  
        }
      }
      let want = {
        bundleName: bundle,
        abilityName: ability,
        parameters:param
      };
      await globalThis.AbilityContext1.startAbility(want).then((data) => {
        console.log(TAG + 'Ability: startAbility success:' + JSON.stringify(data));
        expect().assertFail()
        done()
      }).catch((error) => {
        console.error(TAG + `Ability: startAbility failed: ${JSON.stringify(error.code)}`);
        console.log(TAG + 'Ability: startAbility success:' + JSON.stringify(error.message));
        expect(error.code).assertEqual(16000050)
        expect(error.message).assertEqual("Internal error.")
        done()
      })
    })

    /*
     * @tc.number  SUB_AA_Ability_WantParameters_1600
     * @tc.name    StartAbility with parameters is many types.
     * @tc.desc    Function test
     * @tc.level   3
     */
    it('SUB_AA_Ability_WantParameters_1600', 0, async function (done) {
      let TAG = "SUB_AA_Ability_WantParameters_1600-"
      console.info(TAG  + "---start---")
      await sleep(2000);
      if(globalThis.AbilityContext1 == undefined){
        console.info(TAG + "context is undefined")
        expect().assertFail()
        done()
      }
      let param = {
        "keyFd": {
          "type":"FD",
          "value":fd  
        },
        "keyObj": {
          "name":"zhangsan",
          "sex":1  
        },
        "keyFlexObj": {
          "data":{
            "info":"abcd",
            "len":4
          }        
        },
        "keyArrayObj": {
          "data":[1, 2, 3]      
        },
        "key1": [{"data1":"value1","data2":"value2"},{"data3":"value3","data4":"value4"}]
      }
      let want = {
        bundleName: bundle,
        abilityName: ability,
        parameters:param
      };
      await globalThis.AbilityContext1.startAbility(want).then((data) => {
        console.log(TAG + 'Ability: startAbility success:' + JSON.stringify(data));
      }).catch((error) => {
        console.error(TAG + `Ability: startAbility failed: ${JSON.stringify(error)}`);
      })
      await sleep(2000)
      expect(globalThis.abilityWantParam.parameters["keyFd"].type).assertEqual("FD")
      expect(globalThis.abilityWantParam.parameters["keyObj"].name).assertEqual("zhangsan")
      expect(globalThis.abilityWantParam.parameters["keyObj"].sex).assertEqual(1)
      expect(globalThis.abilityWantParam.parameters["keyFlexObj"].data["info"]).assertEqual("abcd")
      expect(globalThis.abilityWantParam.parameters["keyFlexObj"].data["len"]).assertEqual(4)
      expect(globalThis.abilityWantParam.parameters["keyArrayObj"].data[0]).assertEqual(1)
      expect(globalThis.abilityWantParam.parameters["keyArrayObj"].data[1]).assertEqual(2)
      expect(globalThis.abilityWantParam.parameters["keyArrayObj"].data[2]).assertEqual(3)
      expect(globalThis.abilityWantParam.parameters["key1"][0]["data1"]).assertEqual("value1")
      expect(globalThis.abilityWantParam.parameters["key1"][0]["data2"]).assertEqual("value2")
      expect(globalThis.abilityWantParam.parameters["key1"][1]["data3"]).assertEqual("value3")
      expect(globalThis.abilityWantParam.parameters["key1"][1]["data4"]).assertEqual("value4")
      await sleep(500)
      done()
    })
  })
}
