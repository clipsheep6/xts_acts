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


import { describe, it, expect } from '@ohos/hypium';
import Base from '@ohos.base';
import formInfo from '@ohos.app.form.formInfo';
import formHost from '@ohos.app.form.formHost';

export default function setPublishFormResultAuthTest() {
  describe('HitsSetPublishFormResultAuthTest', () => {

    /**
     * @tc.number: SUB_AA_Form_FormHost_SetPublishFormResult_08
     * @tc.name: FormHost_08
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('SUB_AA_Form_FormHost_SetPublishFormResult_08', 0, async (done: Function) => {
      try {
        let pub: formInfo.PublishFormResult = {
          code: formInfo.PublishFormErrorCode.SUCCESS, message: ''
        };
        let res = formHost.setPublishFormResult('1', pub);
        console.log(`SetPublishFormResult sucess, form ID is: ${JSON.stringify(res)}`);
        expect().assertFail();
        done()
      } catch (error) {
        console.error(`catch error, code: ${(error as Base.BusinessError).code}, message: ${(error as Base.BusinessError).message}`);
        expect(true).assertTrue()
        done()
      }
    })
  })
}