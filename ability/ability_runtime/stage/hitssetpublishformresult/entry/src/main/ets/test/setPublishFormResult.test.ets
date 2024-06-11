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
import { describe, expect,it } from '@ohos/hypium'
import Base from '@ohos.base';
import formInfo from '@ohos.app.form.formInfo';
import formHost from '@ohos.app.form.formHost';

export default function setPublishFormResultTest() {
  describe('HitsSetPublishFormResultTest', () => {


    /**
     * @tc.number: SUB_AA_Form_FormHost_SetPublishFormResult_01
     * @tc.name: FormHost_01
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('SUB_AA_Form_FormHost_SetPublishFormResult_01', 0, async (done: Function) => {
      try {
        let pub: formInfo.PublishFormResult = {code: formInfo.PublishFormErrorCode.SUCCESS, message: ''};
        let res = formHost.setPublishFormResult(null, pub);
        console.log(`SetPublishFormResult sucess, form ID is: ${JSON.stringify(res)}`);
        expect().assertFail();
        done();
      } catch (error) {
        console.error(`catch error, code: ${(error as Base.BusinessError).code}, message: ${(error as Base.BusinessError).message}`);
        expect(true).assertTrue();
        done();
      }
    })

    /**
     * @tc.number: SUB_AA_Form_FormHost_SetPublishFormResult_02
     * @tc.name: FormHost_02
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('SUB_AA_Form_FormHost_SetPublishFormResult_02', 0, async (done: Function) => {
      try {
        let pub: formInfo.PublishFormResult = {code: formInfo.PublishFormErrorCode.SUCCESS, message: ''};
        let res = formHost.setPublishFormResult(undefined, pub);
        console.log(`SetPublishFormResult sucess, form ID is: ${JSON.stringify(res)}`);
        expect().assertFail()
        done()
      } catch (error) {
        console.error(`catch error, code: ${(error as Base.BusinessError).code}, message: ${(error as Base.BusinessError).message}`);
        expect(true).assertTrue()
        done()
      }
    })

    /**
     * @tc.number: SUB_AA_Form_FormHost_SetPublishFormResult_03
     * @tc.name: FormHost_03
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('SUB_AA_Form_FormHost_SetPublishFormResult_03', 0, async (done: Function) => {
      try {
        let pub: formInfo.PublishFormResult = {code: formInfo.PublishFormErrorCode.SUCCESS, message: ''};
        let res = formHost.setPublishFormResult('', pub);
        console.log(`SetPublishFormResult sucess, form ID is: ${JSON.stringify(res)}`);
        expect().assertFail()
        done()
      } catch (error) {
        console.error(`catch error, code: ${(error as Base.BusinessError).code}, message: ${(error as Base.BusinessError).message}`);
        expect(true).assertTrue()
        done()
      }
    })

    /**
     * @tc.number: SUB_AA_Form_FormHost_SetPublishFormResult_04
     * @tc.name: FormHost_04
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('SUB_AA_Form_FormHost_SetPublishFormResult_04', 0, async (done: Function) => {
      try {
        let pub: formInfo.PublishFormResult = {code: formInfo.PublishFormErrorCode.SUCCESS, message: ''};
        let res = formHost.setPublishFormResult('@', pub);
        console.log(`SetPublishFormResult sucess, form ID is: ${JSON.stringify(res)}`);
        expect().assertFail()
        done()
      } catch (error) {
        console.error(`catch error, code: ${(error as Base.BusinessError).code}, message: ${(error as Base.BusinessError).message}`);
        expect(true).assertTrue()
        done()
      }
    })

    /**
     * @tc.number: SUB_AA_Form_FormHost_SetPublishFormResult_05
     * @tc.name: FormHost_05
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('SUB_AA_Form_FormHost_SetPublishFormResult_05', 0, async (done: Function) => {
      try {
        let pub: formInfo.PublishFormResult = {code: formInfo.PublishFormErrorCode.SUCCESS, message: ''};
        let res = formHost.setPublishFormResult('0', null);
        console.log(`SetPublishFormResult sucess, form ID is: ${JSON.stringify(res)}`);
        expect().assertFail()
        done()
      } catch (error) {
        console.error(`catch error, code: ${(error as Base.BusinessError).code}, message: ${(error as Base.BusinessError).message}`);
        expect(true).assertTrue()
        done()
      }
    })

    /**
     * @tc.number: SUB_AA_Form_FormHost_SetPublishFormResult_06
     * @tc.name: FormHost_06
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('SUB_AA_Form_FormHost_SetPublishFormResult_06', 0, async (done: Function) => {
      try {
        let pub: formInfo.PublishFormResult = {code: formInfo.PublishFormErrorCode.SUCCESS, message: ''};
        let res = formHost.setPublishFormResult('0', undefined);
        console.log(`SetPublishFormResult sucess, form ID is: ${JSON.stringify(res)}`);
        expect().assertFail()
        done()
      } catch (error) {
        console.error(`catch error, code: ${(error as Base.BusinessError).code}, message: ${(error as Base.BusinessError).message}`);
        expect(true).assertTrue()
        done()
      }
    })

    /**
     * @tc.number: SUB_AA_Form_FormHost_SetPublishFormResult_07
     * @tc.name: FormHost_07
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('SUB_AA_Form_FormHost_SetPublishFormResult_07', 0, async (done: Function) => {
      try {
        let pub: formInfo.PublishFormResult = {code: formInfo.PublishFormErrorCode.SUCCESS, message: ''};
        let res = formHost.setPublishFormResult('1', pub);
        console.log(`SetPublishFormResult sucess, form ID is: ${JSON.stringify(res)}`);
        expect().assertFail()
        done()
      } catch (error) {
        console.error(`catch error, code: ${(error as Base.BusinessError).code}, message: ${(error as Base.BusinessError).message}`);
        expect(true).assertTrue()
        done()
      }
    })
  })
}