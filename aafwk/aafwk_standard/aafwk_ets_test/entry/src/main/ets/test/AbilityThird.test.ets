// @ts-nocheck
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "deccjsunit/index"
import wantConstant from '@ohos.ability.wantConstant'
const INTENT_PARAMS_TITLE = "ability.want.params.TITLE";
const INTENT_PARAMS_INTENT = "ability.want.params.INTENT"


export default function abilityThirdTest(abilityContext){
  describe('AbilityThirdTest', function(){


    const expectResult = ['onCreate', 'onWindowStageCreate', 'onForeground'];
    var actualResult = globalThis.eventList;
    const ability2Key = "myapplication.MainAbility2";
    var listKey = [];

    function checkStartAbility(expectResult, actualResult, ability2Key, TAG){
      console.log(TAG + ": begin check startAbility's result.");

      for (var i = 0; i < actualResult.length; i++) {
        console.log("actualResult[i][0] = " + actualResult[i][0]);
        if((actualResult[i][0]) == ability2Key){
          listKey.push(actualResult[i][1]);
        }
      }
      console.log(TAG + ": actualResult is: " + JSON.stringify(actualResult));
      console.log(TAG + ": listKey is: " + JSON.stringify(listKey));
      console.log(TAG + ": end check startAbility's result.");
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

          actualResult.splice(0,actualResult.length);
          listKey.splice(0,listKey.length);

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

        abilityContext.startAbility({want:{}}, (err, data)=>{
          console.log("SUB_AA_OpenHarmony_AbilityStart_2400: startAbility fail, err: "
          + JSON.stringify(err) + ", data: " + JSON.stringify(data));
          expect(err.code == 2097155).assertTrue();

          actualResult.splice(0,actualResult.length);
          listKey.splice(0,listKey.length);
          done();
        });
      }catch(error){
        console.log("SUB_AA_OpenHarmony_AbilityStart_2600: error " + error);
      }
      console.log("------------end SUB_AA_OpenHarmony_AbilityStart_2400-------------");
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
          abilityName : "ohos.acts.aafwk.pldtest.myapplication.MainAbility",
          bundleName : "ohos.acts.aafwk.pldtest.xxxx"
        }, (err, data)=>{
          console.log("SUB_AA_OpenHarmony_AbilityStart_2900: startAbility fail, err: "
          + JSON.stringify(err) + ", data: " + JSON.stringify(data));
          expect(err.code == 2097155).assertTrue();

          actualResult.splice(0,actualResult.length);
          listKey.splice(0,listKey.length);
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
          abilityName : "ohos.acts.aafwk.pldtest.myapplication.xxx",
          bundleName : "ohos.acts.aafwk.pldtest.myapplication"
        }, (err, data)=>{
          console.log("SUB_AA_OpenHarmony_AbilityStart_2800: startAbility fail, err: "
          + JSON.stringify(err) + ", data: " + JSON.stringify(data));
          expect(err.code == 2097152).assertTrue();

          actualResult.splice(0,actualResult.length);
          listKey.splice(0,listKey.length);
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
      var TAG = "SUB_AA_OpenHarmony_AbilityStart_3000";
      try{
        abilityContext.startAbility({
          deviceld : undefined,
          abilityName : "ohos.acts.aafwk.pldtest.myapplication.MainAbility2",
          bundleName : "ohos.acts.aafwk.pldtest.myapplication"
        }, (err, data)=>{
          console.log("SUB_AA_OpenHarmony_AbilityStart_3000: startAbility success, err: "
          + JSON.stringify(err) + ", data: " + JSON.stringify(data));
          setTimeout(function(){}, 3000);
          checkStartAbility(expectResult, actualResult, ability2Key, TAG);
          expect(err.code == 0).assertTrue();

          actualResult.splice(0,actualResult.length);
          listKey.splice(0,listKey.length);
          done();
        });
      }catch(error){
        console.log("SUB_AA_OpenHarmony_AbilityStart_3000: error " + error);
      }
      console.log("------------end SUB_AA_OpenHarmony_AbilityStart_3000-------------");
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_AbilityStart_3400
     * @tc.name    Configure bundlename, abilityname and flags, a floating-point flag value
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_AbilityStart_3400", 0, async function(done){
      console.log("------------start SUB_AA_OpenHarmony_AbilityStart_3400-------------");
      var TAG = "SUB_AA_OpenHarmony_AbilityStart_3400";
      try{
        abilityContext.startAbility({
          abilityName : "ohos.acts.aafwk.pldtest.myapplication.MainAbility2",
          bundleName : "ohos.acts.aafwk.pldtest.myapplication",
          flags : 11.11
        }, (err, data)=>{
          console.log("SUB_AA_OpenHarmony_AbilityStart_3400: startAbility success, err: "
          + JSON.stringify(err) + ", data: " + JSON.stringify(data));
          setTimeout(function(){}, 3000);
          checkStartAbility(expectResult, actualResult, ability2Key, TAG);

          actualResult.splice(0,actualResult.length);
          listKey.splice(0,listKey.length);
          done();
        });
      }catch(error){
        console.log("SUB_AA_OpenHarmony_AbilityStart_3400: error " + error);
      }
      console.log("------------end SUB_AA_OpenHarmony_AbilityStart_3400-------------");
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
          bundleName : "ohos.acts.aafwk.pldtest.myapplication"
        }, (err, data)=>{
          console.log("SUB_AA_OpenHarmony_AbilityStart_5500: startAbility fail, err: "
          + JSON.stringify(err) + ", data: " + JSON.stringify(data));
          expect(err.code == 2097155).assertTrue();

          actualResult.splice(0,actualResult.length);
          listKey.splice(0,listKey.length);
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
          abilityName : "ohos.acts.aafwk.pldtest.myapplication.MainAbility2",
        }, (err, data)=>{
          console.log("SUB_AA_OpenHarmony_AbilityStart_5600: startAbility fail, err: "
          + JSON.stringify(err) + ", data: " + JSON.stringify(data));
          expect(err.code == 2097155).assertTrue();

          actualResult.splice(0,actualResult.length);
          listKey.splice(0,listKey.length);
          done();
        });
      }catch(error){
        console.log("SUB_AA_OpenHarmony_AbilityStart_5600: error " + error);
      }
      console.log("------------end SUB_AA_OpenHarmony_AbilityStart_5600-------------");
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

          actualResult.splice(0,actualResult.length);
          listKey.splice(0,listKey.length);
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

          actualResult.splice(0,actualResult.length);
          listKey.splice(0,listKey.length);
          done();
        });
      }catch(error){
        console.log("SUB_AA_OpenHarmony_AbilityStart_5900: error " + error);
      }
      console.log("------------end SUB_AA_OpenHarmony_AbilityStart_5900-------------");
    });

  });
}