/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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



import hilog from '@ohos.hilog';
import testNapi from 'libUdmfNdk.so'
import udmf from "libudmf.so"
import pasteboard "libpasteboardNdk.so"

const TAG =  "[ pasteboard ]";


export default function pasteboardTestNdkTest() {
    describe('pasteboardTestNdkTest', async function () {
    beforeAll(async function () {
    })
    beforeEach(function () {
    })
    afterEach(function () {     
    })
    afterAll(function () {
    })




    /**
     * @tc.number SUB_DistributedData_Pasteboard_SDK_NdkApiTest_0100
     * @tc.name OH_PasteboardSubscriber_Create0100
     * @tc.desc OH_PasteboardObserver_Create
     * @tc.level: Level 2
     * @tc.type: Functiontion
     * @tc.size: MediumTest
     */
    it('OH_PasteboardSubscriber_Create0100',0, async function () {
      console.info( TAG + 'OH_PasteboardSubscriber_Create0100' );
      let data = testNapi.OH_PasteboardSubscriber_Create0100();
      console.info( TAG + 'OH_PasteboardSubscriber_Create0100 data= ' + JSON.stringify(data));
      expect(data).assertEqual(1);
    })


    /**
     * @tc.number SUB_DistributedData_Pasteboard_SDK_NdkApiTest_0200
     * @tc.name OH_PasteboardObserver_SetData0100
     * @tc.desc OH_PasteboardObserver_Create
     * @tc.level: Level 2
     * @tc.type: Functiontion
     * @tc.size: MediumTest
     */
    it('OH_PasteboardObserver_SetData0100',0, async function () {
      console.info( TAG + 'OH_PasteboardObserver_SetData0100' );
      let data = testNapi.OH_PasteboardObserver_SetData0100();
      console.info( TAG + 'OH_PasteboardObserver_SetData0100 data= ' + JSON.stringify(data));
      expect(data).assertEqual(1);
    })



    /**
     * @tc.number SUB_DistributedData_Pasteboard_SDK_NdkApiTest_0300
     * @tc.name OH_PasteboardObserver_SetData0200
     * @tc.desc OH_PasteboardObserver_Create
     * @tc.level: Level 2
     * @tc.type: Functiontion
     * @tc.size: MediumTest
     */
    it('OH_PasteboardObserver_SetData0200',0, async function () {
      console.info( TAG + 'OH_PasteboardObserver_SetData0200' );
      let data = testNapi.OH_PasteboardObserver_SetData0200();
      console.info( TAG + 'OH_PasteboardObserver_SetData0200 data= ' + JSON.stringify(data));
      expect(data).assertEqual(1);
    })



    /**
     * @tc.number SUB_DistributedData_Pasteboard_SDK_NdkApiTest_0400
     * @tc.name OH_PasteboardObserver_SetData0300
     * @tc.desc OH_PasteboardObserver_Create
     * @tc.level: Level 2
     * @tc.type: Functiontion
     * @tc.size: MediumTest
     */
    it('OH_PasteboardObserver_SetData0300',0, async function () {
      console.info( TAG + 'OH_PasteboardObserver_SetData0300' );
      let data = testNapi.OH_PasteboardObserver_SetData0300();
      console.info( TAG + 'OH_PasteboardObserver_SetData0300 data= ' + JSON.stringify(data));
      expect(data).assertEqual(1);
    })



    /**
     * @tc.number SUB_DistributedData_Pasteboard_SDK_NdkApiTest_0400
     * @tc.name OH_PasteboardObserver_SetData0300
     * @tc.desc OH_PasteboardObserver_Create
     * @tc.level: Level 2
     * @tc.type: Functiontion
     * @tc.size: MediumTest
     */
    it('OH_PasteboardObserver_SetData0300',0, async function () {
      console.info( TAG + 'OH_PasteboardObserver_SetData0300' );
      let data = testNapi.OH_PasteboardObserver_SetData0300();
      console.info( TAG + 'OH_PasteboardObserver_SetData0300 data= ' + JSON.stringify(data));
      expect(data).assertEqual(1);
    })



    /**
     * @tc.number SUB_DistributedData_Pasteboard_SDK_NdkApiTest_0400
     * @tc.name OH_PasteboardObserver_SetData0300
     * @tc.desc OH_PasteboardObserver_Create
     * @tc.level: Level 2
     * @tc.type: Functiontion
     * @tc.size: MediumTest
     */
    it('OH_PasteboardObserver_SetData0300',0, async function () {
      console.info( TAG + 'OH_PasteboardObserver_SetData0300' );
      let data = testNapi.OH_PasteboardObserver_SetData0300();
      console.info( TAG + 'OH_PasteboardObserver_SetData0300 data= ' + JSON.stringify(data));
      expect(data).assertEqual(1);
    })




    /**
     * @tc.number SUB_DistributedData_Pasteboard_SDK_NdkApiTest_0400
     * @tc.name OH_PasteboardObserver_SetData0300
     * @tc.desc OH_PasteboardObserver_Create
     * @tc.level: Level 2
     * @tc.type: Functiontion
     * @tc.size: MediumTest
     */
    it('OH_PasteboardObserver_SetData0300',0, async function () {
      console.info( TAG + 'OH_PasteboardObserver_SetData0300' );
      let data = testNapi.OH_PasteboardObserver_SetData0300();
      console.info( TAG + 'OH_PasteboardObserver_SetData0300 data= ' + JSON.stringify(data));
      expect(data).assertEqual(1);
    })




    /**
     * @tc.number SUB_DistributedData_Pasteboard_SDK_NdkApiTest_0400
     * @tc.name OH_PasteboardObserver_SetData0300
     * @tc.desc OH_PasteboardObserver_Create
     * @tc.level: Level 2
     * @tc.type: Functiontion
     * @tc.size: MediumTest
     */
    it('OH_PasteboardObserver_SetData0300',0, async function () {
      console.info( TAG + 'OH_PasteboardObserver_SetData0300' );
      let data = testNapi.OH_PasteboardObserver_SetData0300();
      console.info( TAG + 'OH_PasteboardObserver_SetData0300 data= ' + JSON.stringify(data));
      expect(data).assertEqual(1);
    })





    /**
     * @tc.number SUB_DistributedData_Pasteboard_SDK_NdkApiTest_0400
     * @tc.name OH_PasteboardObserver_SetData0300
     * @tc.desc OH_PasteboardObserver_Create
     * @tc.level: Level 2
     * @tc.type: Functiontion
     * @tc.size: MediumTest
     */
    it('OH_PasteboardObserver_SetData0300',0, async function () {
      console.info( TAG + 'OH_PasteboardObserver_SetData0300' );
      let data = testNapi.OH_PasteboardObserver_SetData0300();
      console.info( TAG + 'OH_PasteboardObserver_SetData0300 data= ' + JSON.stringify(data));
      expect(data).assertEqual(1);
    })




    /**
     * @tc.number SUB_DistributedData_Pasteboard_SDK_NdkApiTest_0400
     * @tc.name OH_PasteboardObserver_SetData0300
     * @tc.desc OH_PasteboardObserver_Create
     * @tc.level: Level 2
     * @tc.type: Functiontion
     * @tc.size: MediumTest
     */
    it('OH_PasteboardObserver_SetData0300',0, async function () {
      console.info( TAG + 'OH_PasteboardObserver_SetData0300' );
      let data = testNapi.OH_PasteboardObserver_SetData0300();
      console.info( TAG + 'OH_PasteboardObserver_SetData0300 data= ' + JSON.stringify(data));
      expect(data).assertEqual(1);
    })




    /**
     * @tc.number SUB_DistributedData_Pasteboard_SDK_NdkApiTest_0400
     * @tc.name OH_PasteboardObserver_SetData0300
     * @tc.desc OH_PasteboardObserver_Create
     * @tc.level: Level 2
     * @tc.type: Functiontion
     * @tc.size: MediumTest
     */
    it('OH_PasteboardObserver_SetData0300',0, async function () {
      console.info( TAG + 'OH_PasteboardObserver_SetData0300' );
      let data = testNapi.OH_PasteboardObserver_SetData0300();
      console.info( TAG + 'OH_PasteboardObserver_SetData0300 data= ' + JSON.stringify(data));
      expect(data).assertEqual(1);
    })




    /**
     * @tc.number SUB_DistributedData_Pasteboard_SDK_NdkApiTest_0400
     * @tc.name OH_PasteboardObserver_SetData0300
     * @tc.desc OH_PasteboardObserver_Create
     * @tc.level: Level 2
     * @tc.type: Functiontion
     * @tc.size: MediumTest
     */
    it('OH_PasteboardObserver_SetData0300',0, async function () {
      console.info( TAG + 'OH_PasteboardObserver_SetData0300' );
      let data = testNapi.OH_PasteboardObserver_SetData0300();
      console.info( TAG + 'OH_PasteboardObserver_SetData0300 data= ' + JSON.stringify(data));
      expect(data).assertEqual(1);
    })




    /**
     * @tc.number SUB_DistributedData_Pasteboard_SDK_NdkApiTest_0400
     * @tc.name OH_PasteboardObserver_SetData0300
     * @tc.desc OH_PasteboardObserver_Create
     * @tc.level: Level 2
     * @tc.type: Functiontion
     * @tc.size: MediumTest
     */
    it('OH_PasteboardObserver_SetData0300',0, async function () {
      console.info( TAG + 'OH_PasteboardObserver_SetData0300' );
      let data = testNapi.OH_PasteboardObserver_SetData0300();
      console.info( TAG + 'OH_PasteboardObserver_SetData0300 data= ' + JSON.stringify(data));
      expect(data).assertEqual(1);
    })




    /**
     * @tc.number SUB_DistributedData_Pasteboard_SDK_NdkApiTest_0400
     * @tc.name OH_PasteboardObserver_SetData0300
     * @tc.desc OH_PasteboardObserver_Create
     * @tc.level: Level 2
     * @tc.type: Functiontion
     * @tc.size: MediumTest
     */
    it('OH_PasteboardObserver_SetData0300',0, async function () {
      console.info( TAG + 'OH_PasteboardObserver_SetData0300' );
      let data = testNapi.OH_PasteboardObserver_SetData0300();
      console.info( TAG + 'OH_PasteboardObserver_SetData0300 data= ' + JSON.stringify(data));
      expect(data).assertEqual(1);
    })




    /**
     * @tc.number SUB_DistributedData_Pasteboard_SDK_NdkApiTest_0400
     * @tc.name OH_PasteboardObserver_SetData0300
     * @tc.desc OH_PasteboardObserver_Create
     * @tc.level: Level 2
     * @tc.type: Functiontion
     * @tc.size: MediumTest
     */
    it('OH_PasteboardObserver_SetData0300',0, async function () {
      console.info( TAG + 'OH_PasteboardObserver_SetData0300' );
      let data = testNapi.OH_PasteboardObserver_SetData0300();
      console.info( TAG + 'OH_PasteboardObserver_SetData0300 data= ' + JSON.stringify(data));
      expect(data).assertEqual(1);
    })







})
}




