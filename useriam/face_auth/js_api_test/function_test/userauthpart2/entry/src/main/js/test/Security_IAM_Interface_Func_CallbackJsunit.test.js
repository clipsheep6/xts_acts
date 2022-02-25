/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import {describe, it, expect} from 'deccjsunit/index'
import userIAM from '@ohos.UserIAM.userAuth'
import userIDM from '@ohos.useridm'
import pinAuth from '@ohos.pinauth'
import * as publicFC from './Publicfunction-n.js'


describe('userauthTest', function () {

    it('Security_IAM_Face_Interface_check_FaceTipsCode', 0, async function (done) {
        console.info('testFace Security_IAM_Face_Interface_check_FaceTipsCode start');
        expect(10000).assertEqual(userIDM.AuthSubType.PIN_SIX);
        expect(10001).assertEqual(userIDM.AuthSubType.PIN_NUMBER);
        expect(10002).assertEqual(userIDM.AuthSubType.PIN_MIXED);
        expect(20000).assertEqual(userIDM.AuthSubType.FACE_2D);
        expect(20001).assertEqual(userIDM.AuthSubType.FACE_3D);
        console.info('testFace Security_IAM_Face_Interface_check_FaceTipsCode end');
        done();
    })
})
