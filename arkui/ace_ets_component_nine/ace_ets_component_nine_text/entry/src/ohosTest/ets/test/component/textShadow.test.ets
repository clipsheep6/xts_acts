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

interface valueObj {
  radius: number | undefined | Resource;
  color?: Resource | string | number
}
export default function textShdowTest() {
  describe('textshwdowTest', () => {
    beforeEach(async (done: Function) => {
      console.info("TestShwdow beforeEach start");
      let options: ESObject = {
        uri: 'MainAbility/pages/component/textShadow',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get TextShadow state pages: " + JSON.stringify(pages));
        if (!("TextShadow" == pages.name)) {
          console.info("get TextShadow pages.name: " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push TextShadow page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push TextShadow page error: " + err);
      }

      await Utils.sleep(1000)
      console.info("TextShadow beforeEach end");
      done()
    });

    afterEach(async () => {
      await Utils.sleep(1000);
      console.info("TextShadow after each called");
    })

    /**
     * @tc.number testTextTextShadow0100
     * @tc.name   Test the textShadow property of the text component
     * @tc.desc   Do not set textShadow property
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('testTextTextShadow0100', 0, async (done: Function) => {
      let tagName = 'testTextTextShadow0100';
      console.info('[' + tagName + '] START============================');
      await Utils.sleep(1000)
 
      let value: valueObj = { radius: undefined }
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "textShadow": JSON.stringify( value )
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 211,
          priority: events_emitter.EventPriority.LOW
        }
        console.info('[' + tagName + '] start to publish emit');
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log('[' + tagName + '] change component data error: ' + err.message);
      }
      await Utils.sleep(2000);
    
      let strJsonNew = getInspectorByKey('key_Text_TextShadow');
      let obj: ESObject = JSON.parse(strJsonNew);
      console.info('[' + tagName + '] Text shadow is: ' + JSON.stringify(obj.$attrs.textShadow));

      expect(obj.$attrs.textShadow.radius).assertEqual("0.000000")
      expect(obj.$attrs.textShadow.color).assertEqual("#FF000000")
      expect(obj.$attrs.textShadow.offsetX).assertEqual("0.000000")
      expect(obj.$attrs.textShadow.offsetY).assertEqual("0.000000") 
       
      console.info('[' + tagName + '] END ===========================');
      done();
    });

    /**
     * @tc.number testTextTextShadow0200
     * @tc.name   Test the textShadow property of the text component
     * @tc.desc   set textShadow property to 0
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('testTextTextShadow0200', 0, async (done: Function) => {
      let tagName = 'testTextTextShadow0200';
      console.info('[' + tagName + '] START============================');
      await Utils.sleep(1000)
 
      let value: valueObj ={ radius:0 }
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "textShadow": JSON.stringify(value) 
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 212,
          priority: events_emitter.EventPriority.LOW
        }
        console.info('[' + tagName + '] start to publish emit');
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log('[' + tagName + '] change component data error: ' + err.message);
      }
      await Utils.sleep(2000);
    
      let strJsonNew = getInspectorByKey('key_Text_TextShadow');
      let obj: ESObject = JSON.parse(strJsonNew);
      console.info('[' + tagName + '] Text shadow is: ' + JSON.stringify(obj.$attrs.textShadow));

      expect(obj.$attrs.textShadow.radius).assertEqual("0.000000")
      expect(obj.$attrs.textShadow.color).assertEqual("#FF000000")
      expect(obj.$attrs.textShadow.offsetX).assertEqual("0.000000")
      expect(obj.$attrs.textShadow.offsetY).assertEqual("0.000000")
       
      console.info('[' + tagName + '] END ===========================');
      done();
    });    
  
    /**
     * @tc.number testTextTextShadow0300
     * @tc.name   Test the textShadow property of the text component
     * @tc.desc   set textShadow property  radius to 1.0
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('testTextTextShadow0300', 0, async (done: Function) => {
      let tagName = 'testTextTextShadow0300';
      console.info('[' + tagName + '] START============================');
      await Utils.sleep(1000)
  
      let value: valueObj = { radius: 1.0 }; 

      JSON.stringify(value)
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "textShadow": JSON.stringify(value) 
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 213,
          priority: events_emitter.EventPriority.LOW
        }
        console.info('[' + tagName + '] start to publish emit');

        console.info('[' + tagName + '] start to publish emit' + JSON.stringify(eventData));

        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log('[' + tagName + '] change component data error: ' + err.message);
      }
      await Utils.sleep(2000);
    
      let strJsonNew = getInspectorByKey('key_Text_TextShadow');
      let obj: ESObject = JSON.parse(strJsonNew);
      console.info('[' + tagName + '] Text shadow is: ' + JSON.stringify(obj.$attrs.textShadow));

      expect(obj.$attrs.textShadow.radius).assertEqual("1.000000")
      expect(obj.$attrs.textShadow.color).assertEqual("#FF000000")
      expect(obj.$attrs.textShadow.offsetX).assertEqual("0.000000")
      expect(obj.$attrs.textShadow.offsetY).assertEqual("0.000000")   
        
      console.info('[' + tagName + '] END ===========================');
      done();
    });

     /**
     * @tc.number testTextTextShadow0400
     * @tc.name   Test the textShadow property of the text component
     * @tc.desc   set textShadow property  radius to 20.0
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('testTextTextShadow0400', 0, async (done: Function) => {
      let tagName = 'testTextTextShadow0400';
      console.info('[' + tagName + '] START============================');
      await Utils.sleep(1000)
  
      let value: valueObj =  { radius: 20.0 }
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "textShadow": JSON.stringify( value )
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 214,
          priority: events_emitter.EventPriority.LOW
        }
        console.info('[' + tagName + '] start to publish emit');
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log('[' + tagName + '] change component data error: ' + err.message);
      }
      await Utils.sleep(2000);
    
      let strJsonNew = getInspectorByKey('key_Text_TextShadow');
      let obj: ESObject = JSON.parse(strJsonNew);
      console.info('[' + tagName + '] Text shadow is: ' + JSON.stringify(obj.$attrs.textShadow));

      expect(obj.$attrs.textShadow.radius).assertEqual("20.000000")
      expect(obj.$attrs.textShadow.color).assertEqual("#FF000000")
      expect(obj.$attrs.textShadow.offsetX).assertEqual("0.000000")
      expect(obj.$attrs.textShadow.offsetY).assertEqual("0.000000")    
        
      console.info('[' + tagName + '] END ===========================');
      done();
    });


     /**
     * @tc.number testTextTextShadow0500
     * @tc.name   Test the textShadow property of the text component
     * @tc.desc   set textShadow property to $r("app.float.textShadowRadius") 
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('testTextTextShadow0500', 0, async (done: Function) => {
      let tagName = 'testTextTextShadow0500';
      console.info('[' + tagName + '] START============================');
      await Utils.sleep(1000)
  
      let value: valueObj =  { radius: $r("app.float.textShadowRadius") }
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "textShadow": JSON.stringify( value )
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 215,
          priority: events_emitter.EventPriority.LOW
        }
        console.info('[' + tagName + '] start to publish emit');
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log('[' + tagName + '] change component data error: ' + err.message);
      }
      await Utils.sleep(2000);
    
      let strJsonNew = getInspectorByKey('key_Text_TextShadow');
      let obj: ESObject = JSON.parse(strJsonNew);
      console.info('[' + tagName + '] Text shadow is: ' + JSON.stringify(obj.$attrs.textShadow));

      expect(obj.$attrs.textShadow.radius).assertEqual("5.000000")
      expect(obj.$attrs.textShadow.color).assertEqual("#FF000000")
      expect(obj.$attrs.textShadow.offsetX).assertEqual("0.000000")
      expect(obj.$attrs.textShadow.offsetY).assertEqual("0.000000")
  
        
      console.info('[' + tagName + '] END ===========================');
      done();
    });

     /**
     * @tc.number testTextTextShadow0600
     * @tc.name   Test the textShadow property of the text component
     * @tc.desc   set textShadow property radius to  -1
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('testTextTextShadow0600', 0, async (done: Function) => {
      let tagName = 'testTextTextShadow0600';
      console.info('[' + tagName + '] START============================');
      await Utils.sleep(1000)
  
      let value: valueObj =  { radius: -1 }
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "textShadow": JSON.stringify( value )
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 216,
          priority: events_emitter.EventPriority.LOW
        }
        console.info('[' + tagName + '] start to publish emit');
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log('[' + tagName + '] change component data error: ' + err.message);
      }
      await Utils.sleep(2000);
    
      let strJsonNew = getInspectorByKey('key_Text_TextShadow');
      let obj: ESObject = JSON.parse(strJsonNew);
      console.info('[' + tagName + '] Text shadow is: ' + JSON.stringify(obj.$attrs.textShadow));

      expect(obj.$attrs.textShadow.radius).assertEqual("0.000000")
      expect(obj.$attrs.textShadow.color).assertEqual("#FF000000")
      expect(obj.$attrs.textShadow.offsetX).assertEqual("0.000000")
      expect(obj.$attrs.textShadow.offsetY).assertEqual("0.000000")  
        
      console.info('[' + tagName + '] END ===========================');
      done();
    });

    /**
     * @tc.number testTextTextShadow0700
     * @tc.name   Test the textShadow property of the text component
     * @tc.desc   Set the radius value to 1.0 and the color value to "#0000FF" 
     *            in the textShadow
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('testTextTextShadow0700', 0, async (done: Function) => {
      let tagName = 'testTextTextShadow0700';
      console.info('[' + tagName + '] START============================');
      await Utils.sleep(1000)
  
      let value: valueObj = { radius: 1, color: "#0000FF" }
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "textShadow": JSON.stringify( value )
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 217,
          priority: events_emitter.EventPriority.LOW
        }
        console.info('[' + tagName + '] start to publish emit');
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log('[' + tagName + '] change component data error: ' + err.message);
      }
      await Utils.sleep(2000);
    
      let strJsonNew = getInspectorByKey('key_Text_TextShadow');
      let obj: ESObject = JSON.parse(strJsonNew);
      console.info('[' + tagName + '] Text shadow is: ' + JSON.stringify(obj.$attrs.textShadow));

      expect(obj.$attrs.textShadow.radius).assertEqual("1.000000")
      expect(obj.$attrs.textShadow.color).assertEqual("#FF0000FF")
      expect(obj.$attrs.textShadow.offsetX).assertEqual("0.000000")
      expect(obj.$attrs.textShadow.offsetY).assertEqual("0.000000")
  
        
      console.info('[' + tagName + '] END ===========================');
      done();
    });

  /**
   * @tc.number testTextTextShadow0800
   * @tc.name   Test the textShadow property of the text component
   * @tc.desc   Set the radius value to 1.0 and the color value to 0xff0000
   *              in the textShadow
   * @tc.size   MediumTest
   * @tc.type   Function
   * @tc.level  0
   */
    it('testTextTextShadow0800', 0, async (done: Function) => {
      let tagName = 'testTextTextShadow0800';
      console.info('[' + tagName + '] START============================');
      await Utils.sleep(1000)
  
      let value: valueObj = { radius: 1, color: 0xff0000 }
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "textShadow": JSON.stringify( value )
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 218,
          priority: events_emitter.EventPriority.LOW
        }
        console.info('[' + tagName + '] start to publish emit');
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log('[' + tagName + '] change component data error: ' + err.message);
      }
      await Utils.sleep(2000);
    
      let strJsonNew = getInspectorByKey('key_Text_TextShadow');
      let obj: ESObject = JSON.parse(strJsonNew);
      console.info('[' + tagName + '] Text shadow is: ' + JSON.stringify(obj.$attrs.textShadow));

      expect(obj.$attrs.textShadow.radius).assertEqual("1.000000")
      expect(obj.$attrs.textShadow.color).assertEqual("#FFFF0000")
      expect(obj.$attrs.textShadow.offsetX).assertEqual("0.000000")
      expect(obj.$attrs.textShadow.offsetY).assertEqual("0.000000")    
        
      console.info('[' + tagName + '] END ===========================');
      done();
    });

    /**
     * @tc.number testTextTextShadow0900
     * @tc.name   Test the textShadow property of the text component
     * @tc.desc   Set the radius value to 1.0 and the color value to Color.Red
     *             in the textShadow
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('testTextTextShadow0900', 0, async (done: Function) => {
      let tagName = 'testTextTextShadow0900';
      console.info('[' + tagName + '] START============================');
      await Utils.sleep(1000)
  
      let value: valueObj = { radius: 1, color: Color.Red }
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "textShadow": JSON.stringify( value )
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 219,
          priority: events_emitter.EventPriority.LOW
        }
        console.info('[' + tagName + '] start to publish emit');
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log('[' + tagName + '] change component data error: ' + err.message);
      }
      await Utils.sleep(2000);
    
      let strJsonNew = getInspectorByKey('key_Text_TextShadow');
      let obj: ESObject = JSON.parse(strJsonNew);
      console.info('[' + tagName + '] Text shadow is: ' + JSON.stringify(obj.$attrs.textShadow));

      expect(obj.$attrs.textShadow.radius).assertEqual("1.000000")
      expect(obj.$attrs.textShadow.color).assertEqual("#FFFF0000")
      expect(obj.$attrs.textShadow.offsetX).assertEqual("0.000000")
      expect(obj.$attrs.textShadow.offsetY).assertEqual("0.000000")    
        
      console.info('[' + tagName + '] END ===========================');
      done();
    });


    /**
      * @tc.number testTextTextShadow1000
      * @tc.name   Test the textShadow property of the text component
      * @tc.desc   Set the radius value to 1.0 and the color value to $r("app.color.textShadow_Color") 
      *             in the textShadow
      * @tc.size   MediumTest
      * @tc.type   Function
      * @tc.level  Level 0
        */
    it('testTextTextShadow1000', 0, async (done: Function) => {
      let tagName = 'testTextTextShadow1000';
      console.info('[' + tagName + '] START============================');
      await Utils.sleep(1000)

      let value: valueObj = { radius: 1, color: $r("app.color.textShadow_Color") }
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "textShadow": JSON.stringify( value )
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 220,
          priority: events_emitter.EventPriority.LOW
        }
        console.info('[' + tagName + '] start to publish emit');
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log('[' + tagName + '] change component data error: ' + err.message);
      }
      await Utils.sleep(2000);
    
      let strJsonNew = getInspectorByKey('key_Text_TextShadow');
      let obj: ESObject = JSON.parse(strJsonNew);
      console.info('[' + tagName + '] Text shadow is: ' + JSON.stringify(obj.$attrs.textShadow));

      expect(obj.$attrs.textShadow.radius).assertEqual("1.000000")
      expect(obj.$attrs.textShadow.color).assertEqual("#FFFD0000")
      expect(obj.$attrs.textShadow.offsetX).assertEqual("0.000000")
      expect(obj.$attrs.textShadow.offsetY).assertEqual("0.000000")    
        
      console.info('[' + tagName + '] END ===========================');
      done();
    });
 })
}
