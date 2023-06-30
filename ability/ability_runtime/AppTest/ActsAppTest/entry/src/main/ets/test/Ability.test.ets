import hilog from '@ohos.hilog';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import { Driver,ON } from '@ohos.UiTest'
import commonEvent from '@ohos.commonEventManager'
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry'
var ACTS_CrossCallFunction = {
  events: ['ACTS_CROSS_CALL_EVENT']
};

let driver = Driver.create()
const BUNDLE = 'MyApp_'
const TAG = '[Sample_MyApp]'
const DOMAIN = 0xF811
var abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
// Pop-up collapse button
// await driver.click(buttonX, buttonY)
let buttonX = 360
let button = 720
function sleep(time) {
  return new Promise<void>((resolve, reject) => {
    setTimeout(() => {
      resolve();
    }, time)
  })
}
export default function abilityTest() {
  describe('ActsAppTest', function () {
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
    it('ACTS_NFC_SelectTypes_0100' ,0, async (done) => {
      // 调用startAbility传入want，使其匹配apptest1，apptest2，apptest3这三个应用并在界面上以应用选择框形式弹出，断言检测这三个应用存在并且apptest4不存在
      hilog.info(DOMAIN, TAG, '%{public}s', 'ACTS_NFC_SelectTypes_0100 begin')
      let want = {
        action: 'ohos.nfc.tag.action.TAG_FOUND',
        type:'tag-tech/NFcA',
        parameters: {
          'ohos.ability.params.types': [
            'tag-tech/NFcA',
            'tag-tech/IsoDep'
          ]
        }
        }
      globalThis.abilitycontext.startAbility(
        want,(err) => {
        if (err.code) {
          // 处理业务逻辑错误
          console.error(`startAbility failed, code is ${err.code}, message is ${err.message}`)
          return;
        }
        // 执行正常业务
        console.info('startAbility succeed')
      }
      )
      await driver.delayMs(1000)
      // Defines a variety of assertion methods, which are used to declare expected boolean conditions.

      /*await driver.findComponents(ON.type("string")).then((data) => {
        console.info('wldapptexts:' + JSON.stringify(data));
      })*/
      hilog.info(DOMAIN, TAG, '%{public}s', 'ACTS_NFC_SelectTypes_0100: apptest1,apptest2,apptest3 Exist; apptest4 notExist')
      await driver.assertComponentExist(ON.text("apptest1"))
      await driver.assertComponentExist(ON.text("apptest2"))
      await driver.assertComponentExist(ON.text("apptest3"))
      let app4 = await driver.findComponent(ON.text("apptest4"))
      expect( app4 == null ).assertTrue()
      let cancel = await driver.findComponent(ON.text("取消"))
      await cancel.click()
      hilog.info(DOMAIN, TAG, '%{public}s', 'ACTS_NFC_SelectTypes_0100 end')
      done()
    })
    it('ACTS_NFC_SelectTypes_0200' ,0, async (done) => {
      // 调用startAbility传入want，使其匹配apptest2，apptest3这三个应用并在界面上以应用选择框形式弹出，断言检测这三个应用存在并且apptest1，apptest4不存在
      hilog.info(DOMAIN, TAG, '%{public}s', 'ACTS_NFC_SelectTypes_0200 begin')
      let want = {
        action: 'ohos.nfc.tag.action.TAG_FOUND',
        type:'tag-tech/NFcA',
        parameters: {
          'ohos.ability.params.types': [
            'tag-tech/IsoDep'
          ]
        }
      }
      globalThis.abilitycontext.startAbility(
        want,(err) => {
        if (err.code) {
          // 处理业务逻辑错误
          console.error(`startAbility failed, code is ${err.code}, message is ${err.message}`)
          return;
        }
        // 执行正常业务
        console.info('startAbility succeed')
      }
      )
      await driver.delayMs(1000)
      // Defines a variety of assertion methods, which are used to declare expected boolean conditions.

      hilog.info(DOMAIN, TAG, '%{public}s', 'ACTS_NFC_SelectTypes_0200: apptest2,apptest3 Exist; apptest1,apptest4 notExist')
      await driver.assertComponentExist(ON.text("apptest2"))
      await driver.assertComponentExist(ON.text("apptest3"))
      let app1 = await driver.findComponent(ON.text("apptest1"))
      expect(app1==null).assertTrue()
      let app4 = await driver.findComponent(ON.text("apptest4"))
      expect(app4==null).assertTrue()
      let cancel = await driver.findComponent(ON.text("取消"))
      await cancel.click()
      hilog.info(DOMAIN, TAG, '%{public}s', 'ACTS_NFC_SelectTypes_0200 end')
      done()
    })
    it('ACTS_NFC_SelectTypes_0300' ,0, async (done) => {
      // 调用startAbility传入want，使其匹配apptest2，apptest3这三个应用并在界面上以应用选择框形式弹出，断言检测这三个应用存在并且apptest1，apptest4不存在
      hilog.info(DOMAIN, TAG, '%{public}s', 'ACTS_NFC_SelectTypes_0300 begin')
      let want = {
        action: 'ohos.nfc.tag.action.TAG_FOUND',
        type:'tag-tech/NFcA',
        parameters: {
          'ohos.ability.params.types': [
          ]
        }
      }
      globalThis.abilitycontext.startAbility(
        want,(err) => {
        if (err.code) {
          // 处理业务逻辑错误
          console.error(`startAbility failed, code is ${err.code}, message is ${err.message}`)
          return;
        }
        // 执行正常业务
        console.info('startAbility succeed')
      }
      )
      await driver.delayMs(1000)
      // Defines a variety of assertion methods, which are used to declare expected boolean conditions.

      hilog.info(DOMAIN, TAG, '%{public}s', 'ACTS_NFC_SelectTypes_0300: apptest1,apptest3 Exist; apptest2,apptest4 notExist')
      await driver.assertComponentExist(ON.text("apptest1"))
      await driver.assertComponentExist(ON.text("apptest3"))
      let app1 = await driver.findComponent(ON.text("apptest2"))
      expect(app1==null).assertTrue()
      let app4 = await driver.findComponent(ON.text("apptest4"))
      expect(app4==null).assertTrue()
      let cancel = await driver.findComponent(ON.text("取消"))
      await cancel.click()
      hilog.info(DOMAIN, TAG, '%{public}s', 'ACTS_NFC_SelectTypes_0300 end')
      done()
    })
    it('ACTS_NFC_SelectTypes_0400' ,0, async (done) => {
      hilog.info(DOMAIN, TAG, '%{public}s', 'ACTS_NFC_SelectTypes_0400 begin')
      let want = {
        action: 'ohos.nfc.tag.action.TAG',
        type:'tag-tech/NFcA',
        parameters: {
          'ohos.ability.params.types': [
            'tag-tech/NFcA',
            'tag-tech/IsoDep'
          ]
        }
      }
      globalThis.abilitycontext.startAbility(
        want,(err) => {
        if (err.code) {
          // 处理业务逻辑错误
          console.error(`startAbility failed, code is ${err.code}, message is ${err.message}`)
          return;
        }
        // 执行正常业务
        console.info('startAbility succeed')
      }
      )
      await driver.delayMs(1000)
      // Defines a variety of assertion methods, which are used to declare expected boolean conditions.

      hilog.info(DOMAIN, TAG, '%{public}s', 'ACTS_NFC_SelectTypes_0400: apptest1,apptest2,apptest3,apptest4 notExist')
      let app1 = await driver.findComponent(ON.text("apptest1"))
      let app2 = await driver.findComponent(ON.text("apptest2"))
      let app3 = await driver.findComponent(ON.text("apptest3"))
      let app4 = await driver.findComponent(ON.text("apptest4"))
      expect(app1==null).assertTrue()
      expect(app2==null).assertTrue()
      expect(app3==null).assertTrue()
      expect(app4==null).assertTrue()
      let cancel = await driver.findComponent(ON.text("知道了"))
      await cancel.click()
      hilog.info(DOMAIN, TAG, '%{public}s', 'ACTS_NFC_SelectTypes_0400 end')
      done()
    })
    it('ACTS_NFC_SelectTypes_0500' ,0, async (done) => {
      hilog.info(DOMAIN, TAG, '%{public}s', 'ACTS_NFC_SelectTypes_0500 begin')
      let want = {
        action: 'ohos.nfc.tag.action.TAG',
        type:'tag-tech/NFcA',
        parameters: {
          'ohos.ability.params.types': [
            'tag-tech/IsoDep'
          ]
        }
      }
      globalThis.abilitycontext.startAbility(
        want,(err) => {
        if (err.code) {
          // 处理业务逻辑错误
          console.error(`startAbility failed, code is ${err.code}, message is ${err.message}`)
          return;
        }
        // 执行正常业务
        console.info('startAbility succeed')
      }
      )
      await driver.delayMs(1000)
      // Defines a variety of assertion methods, which are used to declare expected boolean conditions.

      hilog.info(DOMAIN, TAG, '%{public}s', 'ACTS_NFC_SelectTypes_0500: apptest1,apptest2,apptest3,apptest4 notExist')
      let app1 = await driver.findComponent(ON.text("apptest1"))
      let app2 = await driver.findComponent(ON.text("apptest2"))
      let app3 = await driver.findComponent(ON.text("apptest3"))
      let app4 = await driver.findComponent(ON.text("apptest4"))
      expect(app1==null).assertTrue()
      expect(app2==null).assertTrue()
      expect(app3==null).assertTrue()
      expect(app4==null).assertTrue()
      let cancel = await driver.findComponent(ON.text("知道了"))
      await cancel.click()
      hilog.info(DOMAIN, TAG, '%{public}s', 'ACTS_NFC_SelectTypes_0500 end')
      done()
    })

    it('ACTS_NFC_SelectTypes_0600' ,0, async (done) => {
      hilog.info(DOMAIN, TAG, '%{public}s', 'ACTS_NFC_SelectTypes_0600 begin')
      let want = {
        action: 'ohos.nfc.tag.action.TAG',
        type:'tag-tech/IsoDep',
        parameters: {
          'ohos.ability.params.types': [
          ]
        }
      }
      globalThis.abilitycontext.startAbility(
        want,(err) => {
        if (err.code) {
          // 处理业务逻辑错误
          console.error(`startAbility failed, code is ${err.code}, message is ${err.message}`)
          return;
        }
        // 执行正常业务
        console.info('startAbility succeed')
      }
      )
      await driver.delayMs(1000)
      // Defines a variety of assertion methods, which are used to declare expected boolean conditions.

      hilog.info(DOMAIN, TAG, '%{public}s', 'ACTS_NFC_SelectTypes_0600: apptest1,apptest2,apptest3,apptest4 notExist')
      let app1 = await driver.findComponent(ON.text("apptest1"))
      let app2 = await driver.findComponent(ON.text("apptest2"))
      let app3 = await driver.findComponent(ON.text("apptest3"))
      let app4 = await driver.findComponent(ON.text("apptest4"))
      expect(app1==null).assertTrue()
      expect(app2==null).assertTrue()
      expect(app3==null).assertTrue()
      expect(app4==null).assertTrue()
      let cancel = await driver.findComponent(ON.text("知道了"))
      await cancel.click()
      hilog.info(DOMAIN, TAG, '%{public}s', 'ACTS_NFC_SelectTypes_0600 end')
      done()
    })
    it('ACTS_NFC_SelectTypes_0700' ,0, async (done) => {
      hilog.info(DOMAIN, TAG, '%{public}s', 'ACTS_NFC_SelectTypes_0700 begin')
      let want = {
        action: 'ohos.nfc.tag.action.TAG',
        type:'tag-tech/NFcA',
        parameters: {
          'ohos.ability.params.types': [
          ]
        }
      }
      globalThis.abilitycontext.startAbility(
        want,(err) => {
        if (err.code) {
          // 处理业务逻辑错误
          console.error(`startAbility failed, code is ${err.code}, message is ${err.message}`)
          return;
        }
        // 执行正常业务
        console.info('startAbility succeed')
      }
      )
      await driver.delayMs(1000)
      // Defines a variety of assertion methods, which are used to declare expected boolean conditions.

      hilog.info(DOMAIN, TAG, '%{public}s', 'ACTS_NFC_SelectTypes_0700: apptest1,apptest2,apptest3,apptest4 notExist')
      let app1 = await driver.findComponent(ON.text("apptest1"))
      let app2 = await driver.findComponent(ON.text("apptest2"))
      let app3 = await driver.findComponent(ON.text("apptest3"))
      let app4 = await driver.findComponent(ON.text("apptest4"))
      expect(app1==null).assertTrue()
      expect(app2==null).assertTrue()
      expect(app3==null).assertTrue()
      expect(app4==null).assertTrue()
      let cancel = await driver.findComponent(ON.text("知道了"))
      await cancel.click()
      hilog.info(DOMAIN, TAG, '%{public}s', 'ACTS_NFC_SelectTypes_0700 end')
      done()
    })
    it('ACTS_NFC_SelectTypes_0800' ,0, async (done) => {
      hilog.info(DOMAIN, TAG, '%{public}s', 'ACTS_NFC_SelectTypes_0800 begin')
      let want = {
        action: 'ohos.want.action.select',
        type:'tag-tech/NFcA',
        parameters: {
          'ohos.ability.params.types': [
            'tag-tech/NFcA',
            'tag-tech/IsoDep'
          ]
        }
      }
      globalThis.abilitycontext.startAbility(
        want,(err) => {
        if (err.code) {
          // 处理业务逻辑错误
          console.error(`startAbility failed, code is ${err.code}, message is ${err.message}`)
          return;
        }
        // 执行正常业务
        console.info('startAbility succeed')
      }
      )
      await driver.delayMs(1000)
      // Defines a variety of assertion methods, which are used to declare expected boolean conditions.

      hilog.info(DOMAIN, TAG, '%{public}s', 'ACTS_NFC_SelectTypes_0800: apptest1,apptest2,apptest3,apptest4 notExist')
      let app1 = await driver.findComponent(ON.text("apptest1"))
      let app2 = await driver.findComponent(ON.text("apptest2"))
      let app3 = await driver.findComponent(ON.text("apptest3"))
      let app4 = await driver.findComponent(ON.text("apptest4"))
      expect(app1==null).assertTrue()
      expect(app2==null).assertTrue()
      expect(app3==null).assertTrue()
      expect(app4==null).assertTrue()
      let cancel = await driver.findComponents(ON.clickable(true))
      await cancel[0].click()
      hilog.info(DOMAIN, TAG, '%{public}s', 'ACTS_NFC_SelectTypes_0800 end')
      done()
    })

    it('ACTS_NFC_SelectTypes_0900' ,0, async (done) => {
      hilog.info(DOMAIN, TAG, '%{public}s', 'ACTS_NFC_SelectTypes_0900 begin')
      var subscriber;
      commonEvent.createSubscriber(ACTS_CrossCallFunction).then(async (data) => {
        subscriber = data;
        hilog.info(DOMAIN, TAG, '%{public}s', 'wld' + '09' + JSON.stringify(data))
        commonEvent.subscribe(subscriber, subscribeCallBack)
        let want = {
          action: 'ohos.nfc.tag.action.TAG_FOUND',
          type:'a',
          parameters: {
            //'ohos.ability.params.types': [
            //]
          }
        }
        globalThis.abilitycontext.startAbility(
          want,(err) => {
          if (err.code) {
            // 处理业务逻辑错误
            console.error(`startAbility failed, code is ${err.code}, message is ${err.message}`)
            return;
          }
          // 执行正常业务
          console.info('startAbility succeed')
        }
        )
      })
      function subscribeCallBack(err, data) {
        console.info('====>ACTS_NFC_SelectTypes_0900 subscribeCallBack data:' + JSON.stringify(data))
        if (data.event === 'ACTS_CROSS_CALL_EVENT') {
          expect(data.parameters.message === 'select').assertTrue()
          commonEvent.unsubscribe(subscriber, async ()=>{
            console.info('====>ACTS_NFC_SelectTypes_0900 unSubscribeCallback kill')
            var cmdkill = 'pkill -f com.example.mytest4'
            await abilityDelegator.executeShellCommand(cmdkill)
            done()
          })
        }
      }
      function unSubscribeCallback() {
        console.info('====>ACTS_NFC_SelectTypes_0900 unSubscribeCallback kill')
        var cmdkill = 'pkill -f com.example.mytest4'
        abilityDelegator.executeShellCommand(cmdkill)
        done()
      }
      await driver.delayMs(1000)
      //await driver.click( 360, 1280 )
      // Defines a variety of assertion methods, which are used to declare expected boolean conditions.

      hilog.info(DOMAIN, TAG, '%{public}s', 'ACTS_NFC_SelectTypes_0900 end')
      done()
    })
  })
}