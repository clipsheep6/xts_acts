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

export default function textInputTypeTest() {
  describe('textTypeTest', function () {
    beforeEach(async function (done) {
      console.info("textInputTypeTest beforeEach start");
      let options = {
        uri: 'MainAbility/pages/component/textInputType',
      }
      let result;
      try {
        router.clear();
        let pages = router.getState();
        console.info("get textInputType state pages: " + JSON.stringify(pages));
        if (!("heightAdaptivePolicy" == pages.name)) {
          console.info("get textInputType pages.name: " + JSON.stringify(pages.name));
          result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push textInputType page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push textInputType page error: " + err);
      }

      await Utils.sleep(1000)
      console.info("textInputType beforeEach end");
      done()
    });

    afterEach(async function () {
      await Utils.sleep(1000);
      console.info("textInputType after each called");
    })

 

    /**
     * @tc.number : textInputType0100
     * @tc.name   : Test the type property of the textinput component
     * @tc.dec    : set the type property value is InputType.Normal
     * @tc.size   : MEDIUM
     * @tc.type   : Function
     * @tc.level  : Level 0  
     */
    it('textInputType0100', 0, async function (done) {
      var tagName = 'textInputType0100';
      console.info('[' + tagName + '] START============================');
      await Utils.sleep(1000)
 
       
      try {
        var eventData = {
          data: {
            "type":  InputType.Normal
          }
        }
        var innerEvent = {
          eventId: 950,
          priority: events_emitter.EventPriority.LOW
        }
        console.info('[' + tagName + '] start to publish emit');
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log('[' + tagName + '] change component data error: ' + err.message);
      }
      await Utils.sleep(2000);
    
      let strJsonNew = getInspectorByKey('key_textinput_type');
      let obj = JSON.parse(strJsonNew);
      console.info('[' + tagName + '] Text type is: ' + JSON.stringify(obj.$attrs.type));
 
      expect(obj.$attrs.type).assertEqual('InputType.Normal');
       
      console.info('[' + tagName + '] END ===========================');
      done();
    });

    /**
     * @tc.number : textInputType0200
     * @tc.name   : Test the type property of the textinput component
     * @tc.dec    : set the type property value is InputType.Password
     * @tc.size   : MEDIUM
     * @tc.type   : Function
     * @tc.level  : Level 0  
     */
    it('textInputType0200', 0, async function (done) {
      var tagName = 'textInputType0200';
      console.info('[' + tagName + '] START============================');
      await Utils.sleep(1000)
 
       
      try {
        var eventData = {
          data: {
            "type":  InputType.Password
          }
        }
        var innerEvent = {
          eventId: 951,
          priority: events_emitter.EventPriority.LOW
        }
        console.info('[' + tagName + '] start to publish emit');
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log('[' + tagName + '] change component data error: ' + err.message);
      }
      await Utils.sleep(2000);
    
      let strJsonNew = getInspectorByKey('key_textinput_type');
      let obj = JSON.parse(strJsonNew);
      console.info('[' + tagName + '] Text type is: ' + JSON.stringify(obj.$attrs.type));
 
      expect(obj.$attrs.type).assertEqual('InputType.Password');
       
      console.info('[' + tagName + '] END ===========================');
      done();
    });

    /**
     * @tc.number : textInputType0300
     * @tc.name   : Test the type property of the textinput component
     * @tc.dec    : set the type property value is InputType.Email
     * @tc.size   : MEDIUM
     * @tc.type   : Function
     * @tc.level  : Level 0  
     */
    it('textInputType0300', 0, async function (done) {
      var tagName = 'textInputType0300';
      console.info('[' + tagName + '] START============================');
      await Utils.sleep(1000)
 
       
      try {
        var eventData = {
          data: {
            "type":  InputType.Email
          }
        }
        var innerEvent = {
          eventId: 952,
          priority: events_emitter.EventPriority.LOW
        }
        console.info('[' + tagName + '] start to publish emit');
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log('[' + tagName + '] change component data error: ' + err.message);
      }
      await Utils.sleep(2000);
    
      let strJsonNew = getInspectorByKey('key_textinput_type');
      let obj = JSON.parse(strJsonNew);
      console.info('[' + tagName + '] Text type is: ' + JSON.stringify(obj.$attrs.type));
 
      expect(obj.$attrs.type).assertEqual('InputType.Email');
       
      console.info('[' + tagName + '] END ===========================');
      done();
    }); 

    /**
     * @tc.number : textInputType0400
     * @tc.name   : Test the type property of the textinput component
     * @tc.dec    : set the type property value is InputType.Number
     * @tc.size   : MEDIUM
     * @tc.type   : Function
     * @tc.level  : Level 0  
     */
    it('textInputType0400', 0, async function (done) {
      var tagName = 'textInputType0400';
      console.info('[' + tagName + '] START============================');
      await Utils.sleep(1000)
 
       
      try {
        var eventData = {
          data: {
            "type":  InputType.Number
          }
        }
        var innerEvent = {
          eventId: 953,
          priority: events_emitter.EventPriority.LOW
        }
        console.info('[' + tagName + '] start to publish emit');
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log('[' + tagName + '] change component data error: ' + err.message);
      }
      await Utils.sleep(2000);
    
      let strJsonNew = getInspectorByKey('key_textinput_type');
      let obj = JSON.parse(strJsonNew);
      console.info('[' + tagName + '] Text type is: ' + JSON.stringify(obj.$attrs.type));
 
      expect(obj.$attrs.type).assertEqual('InputType.Number');
       
      console.info('[' + tagName + '] END ===========================');
      done();
    }); 
})
}
