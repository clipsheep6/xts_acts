import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import inputMethod from '@ohos.inputMethod';



export default function abilityTest() {
  describe('ActsAbilityTest', function () {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(function () {
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
    })
    beforeEach(function () {
      // Presets an action, which is performed before each unit test case starts.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
    })
    afterEach(function () {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
    })
    afterAll(function () {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })
    /**
     * @tc.number   SUB_InputMethod_IMF_Enable_0100
     * @tc.desc     List input methods sync.
     * @tc.size     MEDIUM
     * @tc.type     Function
     * @tc.level    Level 2
     */
    it('SUB_InputMethod_IMF_Enable_0100', 0, function (done) {
      console.info("-----------------------SUB_InputMethod_IMF_Enable_0100 start-----------------------");
      let inputMethodSetting = inputMethod.getSetting();
      try {
        let enable:boolean = true
        let Enable_List = inputMethodSetting.getInputMethodsSync(enable);
        console.info("====>SUB_InputMethod_IMF_Enable_0100 getInputMethodsSync success: " + JSON.stringify(Enable_List));
        let arr = [];
        for (let i = 0;i < Enable_List.length; i++) {
          arr.push(Enable_List[i].name)
        }
        let arr1 = ["com.example.kikakeyboard"]
        expect(arr.length === arr1.length).assertTrue();
        for (let i = 0;i < arr1.length; i++) {
          let bool = arr[i].includes(arr1[0])
          expect(bool).assertTrue();
          done();
        }
        done();
      } catch (err) {
        console.info("====>SUB_InputMethod_IMF_Enable_0100 Failed to getInputMethods:" + JSON.stringify(err)  + err);
        done();
        console.info("-----------------------SUB_InputMethod_IMF_Enable_0100 Test end-----------------------");
      }

    });
    /**
     * @tc.number   SUB_InputMethod_IMF_Enable_0200
     * @tc.desc     List input methods sync.
     * @tc.size     MEDIUM
     * @tc.type     Function
     * @tc.level    Level 2
     */
    it('SUB_InputMethod_IMF_Enable_0200', 0, function (done) {
      console.info("-----------------------SUB_InputMethod_IMF_Enable_0200 start-----------------------");
      let inputMethodSetting = inputMethod.getSetting();
      try {
        let enable:boolean = false;
        let Enable_List = inputMethodSetting.getInputMethodsSync(enable);
        console.info("====>SUB_InputMethod_IMF_Enable_0200 getInputMethodsSync success: " + JSON.stringify(Enable_List));
        expect(Enable_List.length === 0 ).assertTrue();
        done();
      } catch (err) {
        console.info("====>SUB_InputMethod_IMF_Enable_0200 Failed to getInputMethodsSync" + JSON.stringify(err)  + err);
        done();
        console.info("-----------------------SUB_InputMethod_IMF_Enable_0200 Test end-----------------------");
      }

    });
    /**
     * @tc.number   SUB_InputMethod_IMF_Enable_0300
     * @tc.desc     List input methods sync.
     * @tc.size     MEDIUM
     * @tc.type     Function
     * @tc.level    Level 2
     */
    it('SUB_InputMethod_IMF_Enable_0300', 0, function (done) {
      console.info("-----------------------SUB_InputMethod_IMF_Enable_0300 start-----------------------");
      let inputMethodSetting = inputMethod.getSetting();
      try {
        let enable:boolean = undefined;
        let Enable_List = inputMethodSetting.getInputMethodsSync(enable);
        console.info("====>SUB_InputMethod_IMF_Enable_0300 getInputMethodsSync success: " + JSON.stringify(Enable_List));
        done();
      } catch (err) {
        console.error("====>SUB_InputMethod_IMF_Enable_0300 Failed to getInputMethods:" + JSON.stringify(err)  + err);
        expect(err.code===401).assertTrue();
        done();
        console.info("-----------------------SUB_InputMethod_IMF_Enable_0300 Test end-----------------------");
      }

    });
    /**
     * @tc.number   SUB_InputMethod_IMF_Enable_0400
     * @tc.desc     List all input methods.
     * @tc.size     MEDIUM
     * @tc.type     Function
     * @tc.level    Level 2
     */
    it('SUB_InputMethod_IMF_Enable_0400', 0, async function (done) {
      console.info("-----------------------SUB_InputMethod_IMF_Enable_0400 start-----------------------");
      let inputMethodSetting = inputMethod.getSetting();
      try {
        inputMethodSetting.getAllInputMethods((err, Enable_List) => {
          if (err) {
            console.info("====>SUB_InputMethod_IMF_Enable_0400 getAllInputMethods  fail because: " + JSON.stringify(err));
            expect().assertFail();
            done();
          }
          console.info('====>SUB_InputMethod_IMF_Enable_0400 getAllInputMethods success: ' + JSON.stringify(Enable_List));
          let arr = [];
          for (let i = 0;i < Enable_List.length; i++) {
            arr.push(Enable_List[i].name)
          }
          let arr1 = ["com.example.kikakeyboard"]
          expect(arr.length === arr1.length).assertTrue();
          for (let i = 0;i < arr1.length; i++) {
            let bool = arr[i].includes(arr1[0])
            expect(bool).assertTrue();
            done();
          }
          done();
        });
      } catch (err) {
        console.error("====>SUB_InputMethod_IMF_Enable_0400 catch error: " + err);
        done();
        }
      console.info("-----------------------SUB_InputMethod_IMF_Enable_0400 Test end-----------------------");
      });
    /**
     * @tc.number   SUB_InputMethod_IMF_Enable_0500
     * @tc.desc     List all input methods.
     * @tc.size     MEDIUM
     * @tc.type     Function
     * @tc.level    Level 2
     */
    it('SUB_InputMethod_IMF_Enable_0500', 0, async function (done) {
      console.info("-----------------------SUB_InputMethod_IMF_Enable_0500 is start-----------------------");
      let inputMethodSetting = inputMethod.getSetting();
      try {
        let Enable_List = await inputMethodSetting.getAllInputMethods();
        console.info('====>SUB_InputMethod_IMF_Enable_0500 getAllInputMethods success: ' + JSON.stringify(Enable_List));
        // expect(Enable_List !== null).assertTrue();
        // done();
        let arr = [];
        for (let i = 0;i < Enable_List.length; i++) {
          arr.push(Enable_List[i].name)
        }
        let arr1 = ["com.example.kikakeyboard"]
        expect(arr.length === arr1.length).assertTrue();
        for (let i = 0;i < arr1.length; i++) {
          let bool = arr[i].includes(arr1[0])
          expect(bool).assertTrue();
          done();
        }
        done();
      } catch (err) {
        console.info("====>SUB_InputMethod_IMF_Enable_0500 catch error: " + JSON.stringify(err));
        done();
      }
      console.info("-----------------------SUB_InputMethod_IMF_Enable_0500 end-----------------------");
    });
    /**
     * @tc.number   SUB_InputMethod_IMF_Enable_0600
     * @tc.desc     List all input methods.
     * @tc.size     MEDIUM
     * @tc.type     Function
     * @tc.level    Level 2
     */
    it('SUB_InputMethod_IMF_Enable_0600', 0, function (done) {
      console.info("-----------------------SUB_InputMethod_IMF_Enable_0600 start-----------------------");
      let inputMethodSetting = inputMethod.getSetting();
      try {
        let Enable_List = inputMethodSetting.getAllInputMethodsSync();
        console.info("====>SUB_InputMethod_IMF_Enable_0600 getAllInputMethodsSync success: " + JSON.stringify(Enable_List));
        let arr = [];
        for (let i = 0;i < Enable_List.length; i++) {
          arr.push(Enable_List[i].name)
        }
        let arr1 = ["com.example.kikakeyboard"]
        expect(arr.length === arr1.length).assertTrue();
        for (let i = 0;i < arr1.length; i++) {
          let bool = arr[i].includes(arr1[0])
          expect(bool).assertTrue();
          done();
        }
        done();
      } catch (err) {
        console.info("====>SUB_InputMethod_IMF_Enable_0600 Failed to getAllInputMethodsSync:" + JSON.stringify(err)  + err);
        done();
      console.info("-----------------------SUB_InputMethod_IMF_Enable_0600 Test end-----------------------");
      }

    });


  })
}

