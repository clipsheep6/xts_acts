/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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
// @ts-nocheck
import hilog from '@ohos.hilog';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import events_emitter from '@ohos.events.emitter';
import router from '@system.router';

function sleep(time){
  return new Promise((resolve,reject)=>{
    setTimeout(()=>{
      resolve("ok")
    },time)
  }).then(()=>{
    console.info(`sleep ${time} over...`)
  })
}
async function forKey(Key,text,icon?) {
  try {
    let backData = {
      data: {
        "type": Key,
        "text": text ,
        "icon": JSON.stringify(icon) ,
      }
    }
    let backEvent = {
      eventId:10,
      priority:events_emitter.EventPriority.LOW
    }
    console.info("start send emitKey");
    events_emitter.emit(backEvent, backData);
    console.info("backData :====>"+   JSON.stringify(backData));
  } catch (err) {
    console.info("emit emitKey  err: " + JSON.stringify(err));
  }
  await sleep(2000)
}
export default function textinputSec() {
  describe('textinputSec', function () {

    beforeEach(async function (done) {
      let options = {
        uri:  "TestAbility/pages/TextinputSec",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get TextinputSec state success " + JSON.stringify(pages));
        if (!("TextinputSec" == pages.name)) {
          console.info("get TextinputSec state success " + JSON.stringify(pages.name));
          let result = await router.push(options)
          console.info("push TextinputSec page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push TextinputSec page error " + JSON.stringify(err));
      }
      await sleep(2)
      done()
    });

    /**
     * @tc.number    ArkUX_Stage_TextInput_ShowUnderline_0100
     * @tc.name      Configure whether Textinput text input displays underscores
     * @tc.desc      Set the ShowOutline property of the Textinput component to true
     */
    it('ArkUX_Stage_TextInput_ShowUnderline_0100',0, async function (done) {
      await forKey("BoolTrue","");
      try{
        let strJson = getInspectorByKey('TextInput');
        console.info('ArkUX_Stage_TextInput_ShowUnderline_0100 START :' + JSON.stringify(strJson));
        let obj = JSON.parse(strJson);
        console.info('ArkUX_Stage_TextInput_ShowUnderline_0100 obj $attrs.showUnderline :'+ JSON.stringify(obj.$attrs.showUnderline));
        expect(obj.$attrs.showUnderline).assertEqual(true)
        done()
      } catch (err) {
        expect().assertFail()
        console.info('ArkUX_Stage_TextInput_ShowUnderline_0100 err  :' + JSON.stringify(err))
        done()
      }
    })

    /**
     * @tc.number    ArkUX_Stage_TextInput_ShowUnderline_0200
     * @tc.name      Configure whether Textinput text input displays underscores
     * @tc.desc      Set the ShowOutline property of the Textinput component to false
     */
    it('ArkUX_Stage_TextInput_ShowUnderline_0200',0, async function (done) {
      await forKey("BoolFalse","");
      try{
        let strJson = getInspectorByKey('TextInput');
        console.info('ArkUX_Stage_TextInput_ShowUnderline_0200 START :' + JSON.stringify(strJson));
        let obj = JSON.parse(strJson);
        console.info('ArkUX_Stage_TextInput_ShowUnderline_0200 obj $attrs.showUnderline :'+ JSON.stringify(obj.$attrs.showUnderline));
        expect(obj.$attrs.showUnderline).assertEqual(false)
        done()
      } catch (err) {
        expect().assertFail()
        console.info('ArkUX_Stage_TextInput_ShowUnderline_0200 err  :' + JSON.stringify(err))
        done()
      }
    })

    /**
     * @tc.number    ArkUX_Stage_TextInput_ShowUnderline_0300
     * @tc.name      Configure whether Textinput text input displays underscores
     * @tc.desc      Set the ShowOutline property of the Textinput component to null
     */
    it('ArkUX_Stage_TextInput_ShowUnderline_0300',0, async function (done) {
      await forKey("BoolErrNull","");
      try{
        let strJson = getInspectorByKey('TextInput');
        console.info('ArkUX_Stage_TextInput_ShowUnderline_0300 START :' + JSON.stringify(strJson));
        let obj = JSON.parse(strJson);
        console.info('ArkUX_Stage_TextInput_ShowUnderline_0300 obj $attrs.showUnderline :'+ JSON.stringify(obj.$attrs.showUnderline));
        await sleep(5000)
        expect(obj.$attrs.showUnderline).assertEqual(false)
        done()
      } catch (err) {
        expect().assertFail()
        console.info('ArkUX_Stage_TextInput_ShowUnderline_0300 err  :' + JSON.stringify(err))
        done()
      }
    })

    /**
     * @tc.number    ArkUX_Stage_TextInput_ShowUnderline_0400
     * @tc.name      Configure whether Textinput text input displays underscores
     * @tc.desc      Set the ShowOutline property of the Textinput component to undefined
     */
    it('ArkUX_Stage_TextInput_ShowUnderline_0400',0, async function (done) {
      await forKey("BoolErrUndefined","");
      try{
        let strJson = getInspectorByKey('TextInput');
        console.info('ArkUX_Stage_TextInput_ShowUnderline_0400 START :' + JSON.stringify(strJson));
        let obj = JSON.parse(strJson);
        console.info('ArkUX_Stage_TextInput_ShowUnderline_0400 obj $attrs.showUnderline :'+ JSON.stringify(obj.$attrs.showUnderline));
        expect(obj.$attrs.showUnderline).assertEqual(false)
        done()
      } catch (err) {
        expect().assertFail()
        console.info('ArkUX_Stage_TextInput_ShowUnderline_0400 err  :' + JSON.stringify(err))
        done()
      }
    })

    /**
     * @tc.number    ArkUX_Stage_TextInput_ShowUnderline_0500
     * @tc.name      Configure whether Textinput text input displays underscores
     * @tc.desc      Set the ShowOutline property of the Textinput component to ""
     */
    it('ArkUX_Stage_TextInput_ShowUnderline_0500',0, async function (done) {
      await forKey("BoolErrStr","");
      try{
        let strJson = getInspectorByKey('TextInput');
        console.info('ArkUX_Stage_TextInput_ShowUnderline_0500 START :' + JSON.stringify(strJson));
        let obj = JSON.parse(strJson);
        console.info('ArkUX_Stage_TextInput_ShowUnderline_0500 obj $attrs.showUnderline :'+ JSON.stringify(obj.$attrs.showUnderline));
        expect(obj.$attrs.showUnderline).assertEqual(false)
        done()
      } catch (err) {
        expect().assertFail()
        console.info('ArkUX_Stage_TextInput_ShowUnderline_0500 err  :' + JSON.stringify(err))
        done()
      }
    })

    /**
     * @tc.number    ArkUX_Stage_TextInput_ShowUnderline_0600
     * @tc.name      Configure whether Textinput text input displays underscores
     * @tc.desc      Continuously set the showOutline property of the Textinput component and all are valid values
     */
    it('ArkUX_Stage_TextInput_ShowUnderline_0600',0, async function (done) {
      await forKey("BoolFalse","");
      await forKey("BoolTrue","");
      try{
        let strJson = getInspectorByKey('TextInput');
        console.info('ArkUX_Stage_TextInput_ShowUnderline_0600 START :' + JSON.stringify(strJson));
        let obj = JSON.parse(strJson);
        console.info('ArkUX_Stage_TextInput_ShowUnderline_0600 obj $attrs.showUnderline :'+ JSON.stringify(obj.$attrs.showUnderline));
        expect(obj.$attrs.showUnderline).assertEqual(true)
        done()
      } catch (err) {
        expect().assertFail()
        console.info('ArkUX_Stage_TextInput_ShowUnderline_0600 err  :' + JSON.stringify(err))
        done()
      }
    })

    /**
     * @tc.number    ArkUX_Stage_TextInput_ShowUnderline_0700
     * @tc.name      Configure whether Textinput text input displays underscores
     * @tc.desc      Continuously set the showOutline property of the Textinput component, with parameters
     *               first normal and then abnormal
     */
    it('ArkUX_Stage_TextInput_ShowUnderline_0700',0, async function (done) {
      await forKey("BoolTrue","");
      await forKey("BoolErrStr","");
      try{
        let strJson = getInspectorByKey('TextInput');
        console.info('ArkUX_Stage_TextInput_ShowUnderline_0700 START :' + JSON.stringify(strJson));
        let obj = JSON.parse(strJson);
        console.info('ArkUX_Stage_TextInput_ShowUnderline_0700 obj $attrs.showUnderline :'+ JSON.stringify(obj.$attrs.showUnderline));
        expect(obj.$attrs.showUnderline).assertEqual(false)
        done()
      } catch (err) {
        expect().assertFail()
        console.info('ArkUX_Stage_TextInput_ShowUnderline_0700 err  :' + JSON.stringify(err))
        done()
      }
    })

    /**
     * @tc.number    ArkUX_Stage_TextInput_ShowUnderline_0800
     * @tc.name      Configure whether Textinput text input displays underscores
     * @tc.desc      Continuously set the showOutline property of the Textinput component,
     *               with parameters that are abnormal first and then normal
     */
    it('ArkUX_Stage_TextInput_ShowUnderline_0800',0, async function (done) {
      await forKey("BoolErrStr","");
      await forKey("BoolTrue","");
      try{
        let strJson = getInspectorByKey('TextInput');
        console.info('ArkUX_Stage_TextInput_ShowUnderline_0800 START :' + JSON.stringify(strJson));
        let obj = JSON.parse(strJson);
        console.info('ArkUX_Stage_TextInput_ShowUnderline_0800 obj $attrs.showUnderline :'+ JSON.stringify(obj.$attrs.showUnderline));
        expect(obj.$attrs.showUnderline).assertEqual(true)
        done()
      } catch (err) {
        expect().assertFail()
        console.info('ArkUX_Stage_TextInput_ShowUnderline_0800 err  :' + JSON.stringify(err))
        done()
      }
    })

    /**
     * @tc.number    ArkUX_Stage_TextInput_ShowUnderline_0900
     * @tc.name      Configure whether Textinput text input displays underscores
     * @tc.desc      Set the ShowOutline property of the Textinput component to 1
     */
    it('ArkUX_Stage_TextInput_ShowUnderline_0900',0, async function (done) {
      await forKey("BoolErrNum","1");
      await sleep(2000)
      try{
        let strJson = getInspectorByKey('TextInput');
        console.info('ArkUX_Stage_TextInput_ShowUnderline_0900 START :' + JSON.stringify(strJson));
        let obj = JSON.parse(strJson);
        console.info('ArkUX_Stage_TextInput_ShowUnderline_0900 obj $attrs.showUnderline :'+ JSON.stringify(obj.$attrs.showUnderline));
        expect(obj.$attrs.showUnderline).assertEqual(false)
        done()
      } catch (err) {
        expect().assertFail()
        console.info('ArkUX_Stage_TextInput_ShowUnderline_0900 err  :' + JSON.stringify(err))
        done()
      }
    })

    /**
     * @tc.number    ArkUX_Stage_TextInput_ShowError_0100
     * @tc.name      Textinput component error state style display
     * @tc.desc      Set the TextInput component ShowError property parameter to string type 'string'
     */
    it('ArkUX_Stage_TextInput_ShowError_0100',0, async function (done) {
      await forKey("TextStr","string");
      try{
        let strJson = getInspectorByKey('TextInput');
        console.info('ArkUX_Stage_TextInput_ShowError_0100 START :' + JSON.stringify(strJson));
        let obj = JSON.parse(strJson);
        console.info('ArkUX_Stage_TextInput_ShowError_0100 obj $attrs.showError :'+ JSON.stringify(obj.$attrs.showError));
        console.info('ArkUX_Stage_TextInput_ShowError_0100 obj $attrs.showErrorText :'+ JSON.stringify(obj.$attrs.showErrorText));
        console.info('ArkUX_Stage_TextInput_ShowError_0100 obj $attrs.errorText :'+ JSON.stringify(obj.$attrs.errorText));
        expect(obj.$attrs.showErrorText).assertEqual(true)
        expect(obj.$attrs.errorText).assertEqual("string")
        expect(obj.$attrs.showError).assertEqual("string")
        done()
      } catch (err) {
        expect().assertFail()
        console.info('ArkUX_Stage_TextInput_ShowError_0100 err  :' + JSON.stringify(err))
        done()
      }
    })

    /**
     * @tc.number    ArkUX_Stage_TextInput_ShowError_0200
     * @tc.name      Textinput component error state style display
     * @tc.desc      Set the TextInput component ShowError property parameter to undefined
     */
    it('ArkUX_Stage_TextInput_ShowError_0200',0, async function (done) {
      await forKey("TextErr","undefined");
      try{
        let strJson = getInspectorByKey('TextInput');
        console.info('ArkUX_Stage_TextInput_ShowError_0200 START :' + JSON.stringify(strJson));
        let obj = JSON.parse(strJson);
        console.info('ArkUX_Stage_TextInput_ShowError_0200 obj $attrs.showError :'+ JSON.stringify(obj.$attrs.showError));
        console.info('ArkUX_Stage_TextInput_ShowError_0200 obj $attrs.showErrorText :'+ JSON.stringify(obj.$attrs.showErrorText));
        console.info('ArkUX_Stage_TextInput_ShowError_0200 obj $attrs.errorText :'+ JSON.stringify(obj.$attrs.errorText));
        expect(obj.$attrs.showErrorText).assertEqual(false)
        expect(obj.$attrs.errorText).assertEqual("")
        expect(obj.$attrs.showError).assertEqual("undefined")
        done()
      } catch (err) {
        expect().assertFail()
        console.info('ArkUX_Stage_TextInput_ShowError_0200 err  :' + JSON.stringify(err))
        done()
      }
    })

    /**
     * @tc.number    ArkUX_Stage_TextInput_ShowError_0300
     * @tc.name      Textinput component error state style display
     * @tc.desc      Set the TextInput component ShowError property parameter to number type 10
     */
    it('ArkUX_Stage_TextInput_ShowError_0300',0, async function (done) {
      await forKey("TextNum","10");
      try{
        let strJson = getInspectorByKey('TextInput');
        console.info('ArkUX_Stage_TextInput_ShowError_0300 START :' + JSON.stringify(strJson));
        let obj = JSON.parse(strJson);
        console.info('ArkUX_Stage_TextInput_ShowError_0300 obj $attrs.showError :'+ JSON.stringify(obj.$attrs.showError));
        console.info('ArkUX_Stage_TextInput_ShowError_0300 obj $attrs.showErrorText :'+ JSON.stringify(obj.$attrs.showErrorText));
        console.info('ArkUX_Stage_TextInput_ShowError_0300 obj $attrs.errorText :'+ JSON.stringify(obj.$attrs.errorText));
        expect(obj.$attrs.showErrorText).assertEqual(false)
        expect(obj.$attrs.errorText).assertEqual("")
        expect(obj.$attrs.showError).assertEqual("undefined")
        done()
      } catch (err) {
        expect().assertFail()
        console.info('ArkUX_Stage_TextInput_ShowError_0300 err  :' + JSON.stringify(err))
        done()
      }
    })

    /**
     * @tc.number    ArkUX_Stage_TextInput_ShowError_0400
     * @tc.name      Textinput component error state style display
     * @tc.desc      Set the TextInput component ShowError property parameter to the resource reference
     *               type $r("app. string. TextInput_ShowError_test")
     */
    it('ArkUX_Stage_TextInput_ShowError_0400',0, async function (done) {
      try{
        let strJson = getInspectorByKey('TextInputResources');
        console.info('ArkUX_Stage_TextInput_ShowError_0400 START :' + JSON.stringify(strJson));
        let obj = JSON.parse(strJson);
        console.info('ArkUX_Stage_TextInput_ShowError_0400 obj $attrs.showError :'+ JSON.stringify(obj.$attrs.showError));
        console.info('ArkUX_Stage_TextInput_ShowError_0400 obj $attrs.showErrorText :'+ JSON.stringify(obj.$attrs.showErrorText));
        console.info('ArkUX_Stage_TextInput_ShowError_0400 obj $attrs.errorText :'+ JSON.stringify(obj.$attrs.errorText));
        expect(obj.$attrs.showErrorText).assertEqual(false)
        expect(obj.$attrs.errorText).assertEqual("")
        expect(obj.$attrs.showError).assertEqual("undefined")
        done()
      } catch (err) {
        expect().assertFail()
        console.info('ArkUX_Stage_TextInput_ShowError_0400 err  :' + JSON.stringify(err))
        done()
      }
    })

    /**
     * @tc.number    ArkUX_Stage_TextInput_ShowError_0500
     * @tc.name      Textinput component error state style display
     * @tc.desc      Set the TextInput component ShowError property parameter to ''
     */
    it('ArkUX_Stage_TextInput_ShowError_0500',0, async function (done) {
      await forKey("TextStr","");
      try{
        let strJson = getInspectorByKey('TextInput');
        console.info('ArkUX_Stage_TextInput_ShowError_0500 START :' + JSON.stringify(strJson));
        let obj = JSON.parse(strJson);
        console.info('ArkUX_Stage_TextInput_ShowError_0500 obj $attrs.showError :'+ JSON.stringify(obj.$attrs.showError));
        console.info('ArkUX_Stage_TextInput_ShowError_0500 obj $attrs.showErrorText :'+ JSON.stringify(obj.$attrs.showErrorText));
        console.info('ArkUX_Stage_TextInput_ShowError_0500 obj $attrs.errorText :'+ JSON.stringify(obj.$attrs.errorText));
        expect(obj.$attrs.showErrorText).assertEqual(true)
        expect(obj.$attrs.errorText).assertEqual("")
        expect(obj.$attrs.showError).assertEqual("")
        done()
      } catch (err) {
        expect().assertFail()
        console.info('ArkUX_Stage_TextInput_ShowError_0500 err  :' + JSON.stringify(err))
        done()
      }
    })

    /**
     * @tc.number    ArkUX_Stage_TextInput_ShowError_0600
     * @tc.name      Textinput component error state style display
     * @tc.desc      Set the TextInput component ShowError property parameter to null
     */
    it('ArkUX_Stage_TextInput_ShowError_0600',0, async function (done) {
      await forKey("TextErr","null");
      try{
        let strJson = getInspectorByKey('TextInput');
        console.info('ArkUX_Stage_TextInput_ShowError_0600 START :' + JSON.stringify(strJson));
        let obj = JSON.parse(strJson);
        console.info('ArkUX_Stage_TextInput_ShowError_0600 obj $attrs.showError :'+ JSON.stringify(obj.$attrs.showError));
        console.info('ArkUX_Stage_TextInput_ShowError_0600 obj $attrs.showErrorText :'+ JSON.stringify(obj.$attrs.showErrorText));
        console.info('ArkUX_Stage_TextInput_ShowError_0600 obj $attrs.errorText :'+ JSON.stringify(obj.$attrs.errorText));
        expect(obj.$attrs.showErrorText).assertEqual(false)
        expect(obj.$attrs.errorText).assertEqual("")
        expect(obj.$attrs.showError).assertEqual("undefined")
        done()
      } catch (err) {
        expect().assertFail()
        console.info('ArkUX_Stage_TextInput_ShowError_0600 err  :' + JSON.stringify(err))
        done()
      }
    })

    /**
     * @tc.number    ArkUX_Stage_TextInput_ShowError_0700
     * @tc.name      Textinput component error state style display
     * @tc.desc      Set the TextInput component ShowError property parameter to -1
     */
    it('ArkUX_Stage_TextInput_ShowError_0700',0, async function (done) {
      await forKey("TextNum","-1");
      try{
        let strJson = getInspectorByKey('TextInput');
        console.info('ArkUX_Stage_TextInput_ShowError_0700 START :' + JSON.stringify(strJson));
        let obj = JSON.parse(strJson);
        console.info('ArkUX_Stage_TextInput_ShowError_0700 obj $attrs.showError :'+ JSON.stringify(obj.$attrs.showError));
        console.info('ArkUX_Stage_TextInput_ShowError_0700 obj $attrs.showErrorText :'+ JSON.stringify(obj.$attrs.showErrorText));
        console.info('ArkUX_Stage_TextInput_ShowError_0700 obj $attrs.errorText :'+ JSON.stringify(obj.$attrs.errorText));
        expect(obj.$attrs.showErrorText).assertEqual(false)
        expect(obj.$attrs.errorText).assertEqual("")
        expect(obj.$attrs.showError).assertEqual("undefined")
        done()
      } catch (err) {
        expect().assertFail()
        console.info('ArkUX_Stage_TextInput_ShowError_0700 err  :' + JSON.stringify(err))
        done()
      }
    })

    /**
     * @tc.number    ArkUX_Stage_TextInput_ShowError_0800
     * @tc.name      Textinput component error state style display
     * @tc.desc      Set the TextInput component ShowError property parameter to "string",
     *               and then set the parameter to "showerror" again
     */
    it('ArkUX_Stage_TextInput_ShowError_0800',0, async function (done) {
      await forKey("TextStr","string");
      await forKey("TextStr","showError");
      try{
        let strJson = getInspectorByKey('TextInput');
        console.info('ArkUX_Stage_TextInput_ShowError_0800 START :' + JSON.stringify(strJson));
        let obj = JSON.parse(strJson);
        console.info('ArkUX_Stage_TextInput_ShowError_0800 obj $attrs.showError :'+ JSON.stringify(obj.$attrs.showError));
        console.info('ArkUX_Stage_TextInput_ShowError_0800 obj $attrs.showErrorText :'+ JSON.stringify(obj.$attrs.showErrorText));
        console.info('ArkUX_Stage_TextInput_ShowError_0800 obj $attrs.errorText :'+ JSON.stringify(obj.$attrs.errorText));
        expect(obj.$attrs.showErrorText).assertEqual(true)
        expect(obj.$attrs.errorText).assertEqual("showError")
        expect(obj.$attrs.showError).assertEqual("showError")
        done()
      } catch (err) {
        expect().assertFail()
        console.info('ArkUX_Stage_TextInput_ShowError_0800 err  :' + JSON.stringify(err))
        done()
      }
    })

    /**
     * @tc.number    ArkUX_Stage_TextInput_ShowError_0900
     * @tc.name      Textinput component error state style display
     * @tc.desc      Set the TextInput component ShowError property parameter to 'string' and
     *               set the parameter to null again
     */
    it('ArkUX_Stage_TextInput_ShowError_0900',0, async function (done) {
      await forKey("TextStr","string");
      await forKey("TextErr","null");
      try{
        let strJson = getInspectorByKey('TextInput');
        console.info('ArkUX_Stage_TextInput_ShowError_0900 START :' + JSON.stringify(strJson));
        let obj = JSON.parse(strJson);
        console.info('ArkUX_Stage_TextInput_ShowError_0900 obj $attrs.showError :'+ JSON.stringify(obj.$attrs.showError));
        console.info('ArkUX_Stage_TextInput_ShowError_0900 obj $attrs.showErrorText :'+ JSON.stringify(obj.$attrs.showErrorText));
        console.info('ArkUX_Stage_TextInput_ShowError_0900 obj $attrs.errorText :'+ JSON.stringify(obj.$attrs.errorText));
        expect(obj.$attrs.showErrorText).assertEqual(false)
        expect(obj.$attrs.errorText).assertEqual("")
        expect(obj.$attrs.showError).assertEqual("undefined")
        done()
      } catch (err) {
        expect().assertFail()
        console.info('ArkUX_Stage_TextInput_ShowError_0900 err  :' + JSON.stringify(err))
        done()
      }
    })

    /**
     * @tc.number    ArkUX_Stage_TextInput_ShowError_1000
     * @tc.name      Textinput component error state style display
     * @tc.desc      Set the TextInput component ShowError property parameter to 'string' and
     *               set the parameter to null again
     */
    it('ArkUX_Stage_TextInput_ShowError_1000',0, async function (done) {
      await forKey("TextErr","null");
      await forKey("TextStr","string");
      try{
        let strJson = getInspectorByKey('TextInput');
        console.info('ArkUX_Stage_TextInput_ShowError_1000 START :' + JSON.stringify(strJson));
        let obj = JSON.parse(strJson);
        console.info('ArkUX_Stage_TextInput_ShowError_1000 obj $attrs.showError :'+ JSON.stringify(obj.$attrs.showError));
        console.info('ArkUX_Stage_TextInput_ShowError_1000 obj $attrs.showErrorText :'+ JSON.stringify(obj.$attrs.showErrorText));
        console.info('ArkUX_Stage_TextInput_ShowError_1000 obj $attrs.errorText :'+ JSON.stringify(obj.$attrs.errorText));
        expect(obj.$attrs.showErrorText).assertEqual(true)
        expect(obj.$attrs.errorText).assertEqual("string")
        expect(obj.$attrs.showError).assertEqual("string")
        done()
      } catch (err) {
        expect().assertFail()
        console.info('ArkUX_Stage_TextInput_ShowError_1000 err  :' + JSON.stringify(err))
        done()
      }
    })
  })
}
