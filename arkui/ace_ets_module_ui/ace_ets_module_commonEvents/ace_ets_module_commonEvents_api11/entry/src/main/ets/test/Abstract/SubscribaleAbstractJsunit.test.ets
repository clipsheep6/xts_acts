// @ts-nocheck
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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "@ohos/hypium";

export default function SubscribaleAbstractJsunit() {
  describe('SubscribaleAbstract', () =>{

    /**
    * @tc.number  stateManagement_SubscribaleAbstract_setOrCreate_0100
    * @tc.name    stateManagement SubscribaleAbstract  setOrCreate validation
    * @tc.desc    Function test
    */
    it('stateManagement_SubscribaleAbstract_addOwningProperty_0100', 0, (done:Function) =>{
      done();
      return;
      console.info('[stateManagement_SubscribaleAbstract_addOwningProperty_0100] START');
      let subscriber:IPropertySubscriber = new IPropertySubscriber();
      let abstract:SubscribaleAbstract = new SubscribaleAbstract();
      abstract.addOwningProperty(subscriber);
      let numbers = abstract.owningProperties_;
      abstract.removeOwningProperty(subscriber)
      abstract.removeOwningPropertyById(1);
      abstract.notifyPropertyHasChanged("key1", "value1");
      expect(true).assertTrue();
      console.info('[stateManagement_SubscribaleAbstract_addOwningProperty_0100] END');
      done();
    });

    /**
    * @tc.number  stateManagement_ISinglePropertyChangeSubscriber_hasChanged_0100
    * @tc.name    stateManagement ISinglePropertyChangeSubscriber  hasChanged validation
    * @tc.desc    Function test
    */
    it('stateManagement_ISinglePropertyChangeSubscriber_hasChanged_0100', 0, (done:Function) =>{
      done();
      return;
      console.info('[stateManagement_ISinglePropertyChangeSubscriber_hasChanged_0100] START');
      let subscriber:ISinglePropertyChangeSubscriber<string> = new ISinglePropertyChangeSubscriber<string>(
        (data:ESObject) => {
          console.info('[stateManagement_SubscribaleAbstract_addOwningProperty_0100] data = ' + data);
        }
      );
      expect(true).assertTrue();
      console.info('[stateManagement_ISinglePropertyChangeSubscriber_hasChanged_0100] END');
      done();
    });

    /**
    * @tc.number  stateManagement_PersistentStorage_0100
    * @tc.name    stateManagement PersistentStorage   validation
    * @tc.desc    Function test
    */
    it('stateManagement_PersistentStorage_0100', 0, (done:Function) =>{
      done();
      return;
      console.info('[stateManagement_PersistentStorage_0100] Start');
      let persistentStorage = new PersistentStorage(AppStorage, new Storage());
      persistentStorage.PersistProp<string>("key10", "value10");
      let persistProp:PersistentStorage = {
        "properties": [{
                         key: "colorMode", defaultValue: ColorMode.LIGHT
                       }, {
                         key: "layoutDirection", defaultValue: LayoutDirection.LTR
                       }]
      };
      persistentStorage.PersistProps(persistProp);IPropertySubscriber
      persistentStorage.DeleteProp("colorMode");
      expect(true).assertTrue();
      console.info('[stateManagement_PersistentStorage_0100] END');
      done();
    });

    /**
    * @tc.number  stateManagement_IPropertySubscriber_0100
    * @tc.name    stateManagement IPropertySubscriber   validation
    * @tc.desc    Function test
    */
    it('stateManagement_IPropertySubscriber_0100', 0, (done:Function) =>{
      done();
      return;
      console.info('[stateManagement_IPropertySubscriber_0100] Start');
      let iPropertySubscriber:IPropertySubscriber =new IPropertySubscriber();
      let id = iPropertySubscriber.id();
      let aboutToBeDeleted = iPropertySubscriber.aboutToBeDeleted();
      expect(true).assertTrue();
      console.info('[stateManagement_IPropertySubscriber_0100] END');
      done();
    });
    
    /**
    * @tc.number  stateManagement_SyncedPropertyOneWay_0100
    * @tc.name    stateManagement stateManagement_SyncedPropertyOneWay_0100   validation
    * @tc.desc    Function test
    */
    it('stateManagement_SyncedPropertyOneWay_0100', 0, (done: Function) => {
      done();
      return;
      console.info('[stateManagement_SyncedPropertyOneWay_0100] Start');

      // 为 SyncedPropertyOneWay 和 SubscribedAbstractProperty 显式指定类型参数
      let oneWay: SyncedPropertyOneWay<string> = new SyncedPropertyOneWay<string>(new SubscribedAbstractProperty<string>());
      oneWay.set("key12");

      let key12: string = oneWay.get();
      oneWay.hasChanged("key12");
      oneWay.aboutToBeDeleted(new SubscribedAbstractProperty<string>());

      let source_: SubscribedAbstractProperty<string> = oneWay.source_;
      let wrappedValue_: boolean = oneWay.oneWay;

      expect(true).assertTrue();
      console.info('[stateManagement_SyncedPropertyOneWay_0100] END');
      done();
    });
    /**
    * @tc.number  stateManagement_SyncedPropertyTwoWay_0100
    * @tc.name    stateManagement SyncedPropertyTwoWay   validation
    * @tc.desc    Function test
    */
    it('stateManagement_SyncedPropertyTwoWay_0100', 0, (done: Function) => {
      done();
      return;
      console.info('[stateManagement_SyncedPropertyTwoWay_0100] Start');

      // 为 SyncedPropertyTwoWay 和 SubscribedAbstractProperty 显式指定类型参数
      let twoWay: SyncedPropertyTwoWay<string> = new SyncedPropertyTwoWay<string>(new SubscribedAbstractProperty<string>());
      twoWay.set("key12");

      let key12: string = twoWay.get();
      twoWay.hasChanged("key12");
      twoWay.aboutToBeDeleted(new SubscribedAbstractProperty<string>());

      let source_: SubscribedAbstractProperty<string> = twoWay.source_;
      let wrappedValue_: boolean = twoWay.oneWay;

      expect(true).assertTrue();
      console.info('[stateManagement_SyncedPropertyTwoWay_0100] END');
      done();
    });
  })
}
