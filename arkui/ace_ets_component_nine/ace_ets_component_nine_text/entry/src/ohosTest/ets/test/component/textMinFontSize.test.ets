/**
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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "@ohos/hypium"
import router from '@system.router';
import events_emitter from '@ohos.events.emitter'
import Utils from '../Utils';

interface optionsObj {
  uri: string
}
export default function textMinFontSizeTest() {
  describe('textMinFontSizeTest', () => {
    beforeEach(async (done: Function) => {
      console.info("textMinFontSizeTest beforeEach start");
      let options: optionsObj = {
        uri: 'MainAbility/pages/component/textMinFontSize',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get textMinFontSize state pages: " + JSON.stringify(pages));
        if (!("heightAdaptivePolicy" == pages.name)) {
          console.info("get textMinFontSize pages.name: " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push textMinFontSize page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push textMinFontSize page error: " + err);
      }

      await Utils.sleep(1000)
      console.info("textMinFontSize beforeEach end");
      done()
    });

    afterEach(async () => {
      await Utils.sleep(1000);
      console.info("textMinFontSize after each called");
    })

 

    /**
     * @tc.number textMinFontSize0100
     * @tc.name   Test the minFontSize property of the text component
     * @tc.desc   set the minFontSize property value is  16
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textMinFontSize0100', 0, async (done: Function) => {
      let tagName = 'textMinFontSize0100';
      console.info('[' + tagName + '] START============================');
      await Utils.sleep(1000) 
       
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "minFontSize": 16
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 1080,
          priority: events_emitter.EventPriority.LOW
        }
        console.info('[' + tagName + '] start to publish emit');
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log('[' + tagName + '] change component data error: ' + err.message);
      }
      await Utils.sleep(2000);
    
      let strJsonNew = getInspectorByKey('key_text_minFontSize');
      let obj: ESObject = JSON.parse(strJsonNew);
      console.info('[' + tagName + '] Text minFontSize is: ' + JSON.stringify(obj.$attrs.minFontSize)); 
 
      expect(obj.$attrs.minFontSize).assertEqual('16.00fp');
       
      console.info('[' + tagName + '] END ===========================');
      done();
    });

    /**
     * @tc.number textMinFontSize0200
     * @tc.name   Test the minFontSize property of the text component
     * @tc.desc   set the minFontSize property value is $r('app.float.minFontSize') 
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('textMinFontSize0200', 0, async (done: Function) => {
      let tagName = 'textMinFontSize0200';
      console.info('[' + tagName + '] START============================');
      await Utils.sleep(1000) 
       
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "minFontSize": 'app.float.minFontSize' 
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 1081,
          priority: events_emitter.EventPriority.LOW
        }
        console.info('[' + tagName + '] start to publish emit');
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log('[' + tagName + '] change component data error: ' + err.message);
      }
      await Utils.sleep(2000);
    
      let strJsonNew = getInspectorByKey('key_text_minFontSize');
      let obj: ESObject = JSON.parse(strJsonNew);
      console.info('[' + tagName + '] Text minFontSize is: ' + JSON.stringify(obj.$attrs.minFontSize)); 
 
      expect(obj.$attrs.minFontSize).assertEqual('12.00fp');
       
      console.info('[' + tagName + '] END ===========================');
      done();
    });

     /**
     * @tc.number textMinFontSize0300
     * @tc.name   Test the minFontSize property of the text component
     * @tc.desc   set the minFontSize property value is '9fp'
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
     it('textMinFontSize0300', 0, async (done: Function) => {
      let tagName = 'textMinFontSize0300';
      console.info('[' + tagName + '] START============================');
      await Utils.sleep(1000) 
       
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "minFontSize": '9fp'
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 1081,
          priority: events_emitter.EventPriority.LOW
        }
        console.info('[' + tagName + '] start to publish emit');
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log('[' + tagName + '] change component data error: ' + err.message);
      }
      await Utils.sleep(2000);
    
      let strJsonNew = getInspectorByKey('key_text_minFontSize');
      let obj: ESObject = JSON.parse(strJsonNew);
      console.info('[' + tagName + '] Text minFontSize is: ' + JSON.stringify(obj.$attrs.minFontSize)); 
 
      expect(obj.$attrs.minFontSize).assertEqual('9.00fp');
       
      console.info('[' + tagName + '] END ===========================');
      done();
    });
})
}
