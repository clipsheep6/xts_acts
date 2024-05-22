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
import { describe, it, expect } from '@ohos/hypium'
import { Driver, ON } from '@ohos.UiTest';

const driver = Driver.create();

export default function setFormIdStringTest() {
  describe('HitsSetFormIdStringTest', () => {
    /**
     * @tc.number: sub_aa_form_set_formId_stringId_0100
     * @tc.name: formId Normal string Value Creating or deleting a form
     * @tc.desc: the form is created successfully, and the formID is generated
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level 3
     */
    it('sub_aa_form_set_formId_stringId_0100', 0, async (done: Function) => {
      const TAG = 'sub_aa_form_set_formId_stringId_0100';
      try {
        let addStrButton = await driver.findComponent(ON.id('addStrButton'));
        await driver.delayMs(100);
        await addStrButton.click();
        await driver.delayMs(1000);
        let text = await addStrButton.getText();
        let formId = text.split('+')[1];
        hilog.info(0x0000, TAG, 'formId: %{public}s', formId);
        expect(!!formId).assertTrue();
        let delStrButton = await driver.findComponent(ON.id('delStrButton'));
        await driver.delayMs(100);
        await delStrButton.click();
        await driver.delayMs(1000);
        done();
      } catch (error) {
        hilog.info(0x0000, TAG, 'error: %{public}s', error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: sub_aa_form_set_formId_stringId_0200
     * @tc.name: formId Normal string Value Create or delete two forms
     * @tc.desc: the form is created successfully, and the formID is generated
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level 3
     */
    it('sub_aa_form_set_formId_stringId_0200', 0, async (done: Function) => {
      const TAG = 'sub_aa_form_set_formId_stringId_0200';
      try {
        let addStrButton = await driver.findComponent(ON.id('addStrTwoButton'));
        let delStrButton = await driver.findComponent(ON.id('delStrTwoButton'));
        await driver.delayMs(100);
        await addStrButton.click();
        await driver.delayMs(1000);
        let text = await addStrButton.getText();
        let text1 = await delStrButton.getText();
        let formId = text.split('+')[1];
        hilog.info(0x0000, TAG, 'formId: %{public}s', formId);
        let formId1 = text1.split('+')[1];
        hilog.info(0x0000, TAG, 'formId1: %{public}s', formId1);
        expect(!!formId).assertTrue();
        expect(!!formId1).assertTrue();
        await driver.delayMs(100);
        await delStrButton.click();
        await driver.delayMs(1000);
        done();
      } catch (error) {
        hilog.info(0x0000, TAG, 'error: %{public}s', error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: sub_aa_form_set_formId_stringId_0300
     * @tc.name: formId indicates blank creation and deletes a form
     * @tc.desc: failed to create a form, and no formID exists. Procedure
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level 3
     */
    it('sub_aa_form_set_formId_stringId_0300', 0, async (done: Function) => {
      const TAG = 'sub_aa_form_set_formId_stringId_0300';
      try {
        let addStrButton = await driver.findComponent(ON.id('addEmptyButton'));
        await driver.delayMs(100);
        await addStrButton.click();
        await driver.delayMs(1000);
        let text = await addStrButton.getText();
        let formId = text.split('+')[1];
        hilog.info(0x0000, TAG, 'formId: %{public}s', formId);
        expect(!!formId).assertFalse();
        let delStrButton = await driver.findComponent(ON.id('delEmptyButton'));
        await driver.delayMs(100);
        await delStrButton.click();
        await driver.delayMs(1000);
        done();
      } catch (error) {
        hilog.info(0x0000, TAG, 'error: %{public}s', error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: sub_aa_form_set_formId_stringId_0400
     * @tc.name: formId: 0aaa Creates and deletes a form
     * @tc.desc: failed to create a form, and no formID exists. Procedure
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level 3
     */
    it('sub_aa_form_set_formId_stringId_0400', 0, async (done: Function) => {
      const TAG = 'sub_aa_form_set_formId_stringId_0400';
      try {
        let addStrButton = await driver.findComponent(ON.id('addAaaButton'));
        hilog.info(0x0000, TAG, 'addStrButton: %{public}s',!!addStrButton);
        await driver.delayMs(100);
        await addStrButton.click();
        await driver.delayMs(1000);
        let text = await addStrButton.getText();
        let formId = text.split('+')[1];
        hilog.info(0x0000, TAG, 'formId: %{public}s', formId);
        expect(!!formId).assertFalse();
        let delStrButton = await driver.findComponent(ON.id('delAaaButton'));
        await driver.delayMs(100);
        await delStrButton.click();
        await driver.delayMs(1000);
        done();
      } catch (error) {
        hilog.info(0x0000, TAG, 'error: %{public}s', error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: sub_aa_form_set_formId_stringId_0500
     * @tc.name: formId Creates or deletes a form for aaa111
     * @tc.desc: failed to create a form, and no formID exists. Procedure
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level 3
     */
    it('sub_aa_form_set_formId_stringId_0500', 0, async (done: Function) => {
      const TAG = 'sub_aa_form_set_formId_stringId_0500';
      try {
        let addStrButton = await driver.findComponent(ON.id('addUppercaseButton'));
        await driver.delayMs(100);
        await addStrButton.click();
        await driver.delayMs(1000);
        let text = await addStrButton.getText();
        let formId = text.split('+')[1];
        hilog.info(0x0000, TAG, 'formId: %{public}s', formId);
        expect(!!formId).assertFalse();
        let delStrButton = await driver.findComponent(ON.id('delUppercaseButton'));
        await driver.delayMs(100);
        await delStrButton.click();
        await driver.delayMs(1000);
        done();
      } catch (error) {
        hilog.info(0x0000, TAG, 'error: %{public}s', error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: sub_aa_form_set_formId_stringId_0600
     * @tc.name: formId Creates a deleted form for the digital limit
     * @tc.desc: the form is created successfully, and the formID is generated
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level 3
     */
    it('sub_aa_form_set_formId_stringId_0600', 0, async (done: Function) => {
      const TAG = 'sub_aa_form_set_formId_stringId_0600';
      try {
        let addStrButton = await driver.findComponent(ON.id('addNumberButton'));
        await driver.delayMs(100);
        await addStrButton.click();
        await driver.delayMs(1000);
        let text = await addStrButton.getText();
        let formId = text.split('+')[1];
        hilog.info(0x0000, TAG, 'formId: %{public}s', formId);
        expect(!!formId).assertTrue();
        let delStrButton = await driver.findComponent(ON.id('delNumberButton'));
        await driver.delayMs(100);
        await delStrButton.click();
        await driver.delayMs(1000);
        done();
      } catch (error) {
        hilog.info(0x0000, TAG, 'error: %{public}s', error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: sub_aa_form_set_formId_stringId_0700
     * @tc.name: formId Creates a deleted form for string limits
     * @tc.desc: the form is created successfully, and the formID is generated
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level 3
     */
    it('sub_aa_form_set_formId_stringId_0700', 0, async (done: Function) => {
      const TAG = 'sub_aa_form_set_formId_stringId_0700';
      try {
        let addStrButton = await driver.findComponent(ON.id('addSingleButton'));
        await driver.delayMs(100);
        await addStrButton.click();
        await driver.delayMs(1000);
        let text = await addStrButton.getText();
        let formId = text.split('+')[1];
        hilog.info(0x0000, TAG, 'formId: %{public}s', formId);
        expect(!!formId).assertTrue();
        let delStrButton = await driver.findComponent(ON.id('delSingleButton'));
        await driver.delayMs(100);
        await delStrButton.click();
        await driver.delayMs(1000);
        done();
      } catch (error) {
        hilog.info(0x0000, TAG, 'error: %{public}s', error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: sub_aa_form_set_formId_stringId_0800
     * @tc.name: formId is the string @new delete form
     * @tc.desc: failed to create a form, and no formID exists. Procedure
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level 3
     */
    it('sub_aa_form_set_formId_stringId_0800', 0, async (done: Function) => {
      const TAG = 'sub_aa_form_set_formId_stringId_0800';
      try {
        let addStrButton = await driver.findComponent(ON.id('addButton'));
        await driver.delayMs(100);
        await addStrButton.click();
        await driver.delayMs(1000);
        let text = await addStrButton.getText();
        let formId = text.split('+')[1];
        hilog.info(0x0000, TAG, 'formId: %{public}s', formId);
        expect(!!formId).assertFalse();
        let delStrButton = await driver.findComponent(ON.id('delButton'));
        await driver.delayMs(100);
        await delStrButton.click();
        await driver.delayMs(1000);
        done();
      } catch (error) {
        hilog.info(0x0000, TAG, 'error: %{public}s', error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: sub_aa_form_set_formId_stringId_0900
     * @tc.name: formId for string 2^63 New deleted form
     * @tc.desc: failed to create a form, and no formID exists. Procedure
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level 3
     */
    it('sub_aa_form_set_formId_stringId_0900', 0, async (done: Function) => {
      const TAG = 'sub_aa_form_set_formId_stringId_0900';
      try {
        let addStrButton = await driver.findComponent(ON.id('addBigStrButton'));
        await driver.delayMs(100);
        await addStrButton.click();
        await driver.delayMs(1000);
        let text = await addStrButton.getText();
        let formId = text.split('+')[1];
        hilog.info(0x0000, TAG, 'formId: %{public}s', formId);
        expect(!!formId).assertFalse();
        let delStrButton = await driver.findComponent(ON.id('delBigStrButton'));
        await driver.delayMs(100);
        await delStrButton.click();
        await driver.delayMs(1000);
        done();
      } catch (error) {
        hilog.info(0x0000, TAG, 'error: %{public}s', error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: sub_aa_form_set_formId_stringId_1000
     * @tc.name: formId is null to create and delete a form
     * @tc.desc: The form is created successfully, and the formID is generated
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level 3
     */
    it('sub_aa_form_set_formId_stringId_1000', 0, async (done: Function) => {
      const TAG = 'sub_aa_form_set_formId_stringId_1000';
      try {
        let addStrButton = await driver.findComponent(ON.id('addNullButton'));
        await driver.delayMs(100);
        await addStrButton.click();
        await driver.delayMs(1000);
        let text = await addStrButton.getText();
        let formId = text.split('+')[1];
        hilog.info(0x0000, TAG, 'formId: %{public}s', formId);
        expect(!!formId).assertTrue();
        let delStrButton = await driver.findComponent(ON.id('delNullButton'));
        await driver.delayMs(100);
        await delStrButton.click();
        await driver.delayMs(1000);
        done();
      } catch (error) {
        hilog.info(0x0000, TAG, 'error: %{public}s', error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: sub_aa_form_set_formId_stringId_1100
     * @tc.name: formId undefined create and delete forms
     * @tc.desc: the form is created successfully, and the formID is generated
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level 3
     */
    it('sub_aa_form_set_formId_stringId_1100', 0, async (done: Function) => {
      const TAG = 'sub_aa_form_set_formId_stringId_1100';
      try {
        let addStrButton = await driver.findComponent(ON.id('addUndefineButton'));
        await driver.delayMs(100);
        await addStrButton.click();
        await driver.delayMs(1000);
        let text = await addStrButton.getText();
        let formId = text.split('+')[1];
        hilog.info(0x0000, TAG, 'formId: %{public}s', formId);
        expect(!!formId).assertTrue();
        let delStrButton = await driver.findComponent(ON.id('delUndefineButton'));
        await driver.delayMs(100);
        await delStrButton.click();
        await driver.delayMs(1000);
        done();
      } catch (error) {
        hilog.info(0x0000, TAG, 'error: %{public}s', error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: sub_aa_form_set_formId_stringId_1200
     * @tc.name: formId Creates a deleted form for string -1
     * @tc.desc: failed to create a form, and no formID exists. Procedure
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level 3
     */
    it('sub_aa_form_set_formId_stringId_1200', 0, async (done: Function) => {
      const TAG = 'sub_aa_form_set_formId_stringId_1200';
      try {
        let addStrButton = await driver.findComponent(ON.id('addNegativeButton'));
        await driver.delayMs(100);
        await addStrButton.click();
        await driver.delayMs(1000);
        let text = await addStrButton.getText();
        let formId = text.split('+')[1];
        hilog.info(0x0000, TAG, 'formId: %{public}s', formId);
        expect(!!formId).assertFalse();
        let delStrButton = await driver.findComponent(ON.id('delNegativeButton'));
        await driver.delayMs(100);
        await delStrButton.click();
        await driver.delayMs(1000);
        done();
      } catch (error) {
        hilog.info(0x0000, TAG, 'error: %{public}s', error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: sub_aa_form_set_formId_stringId_1300
     * @tc.name: formId Creates a deleted form for the string 000
     * @tc.desc: the form is created successfully, and the formID is generated
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level 3
     */
    it('sub_aa_form_set_formId_stringId_1300', 0, async (done: Function) => {
      const TAG = 'sub_aa_form_set_formId_stringId_1300';
      try {
        let addStrButton = await driver.findComponent(ON.id('zeroButton'));
        await driver.delayMs(100);
        await addStrButton.click();
        await driver.delayMs(1000);
        let text = await addStrButton.getText();
        let formId = text.split('+')[1];
        hilog.info(0x0000, TAG, 'formId: %{public}s', formId);
        expect(!!formId).assertTrue();
        let delStrButton = await driver.findComponent(ON.id('delZero'));
        await driver.delayMs(100);
        await delStrButton.click();
        await driver.delayMs(1000);
        done();
      } catch (error) {
        hilog.info(0x0000, TAG, 'error: %{public}s', error);
        expect().assertFail();
        done();
      }
    })

  })
}