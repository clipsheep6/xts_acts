/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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

import featureAbility from '@ohos.ability.featureAbility'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
describe('ActsRequestPermissionFromUser', function () {
    console.info("===========ActsRequestPermissionFromUser start====================>");

    /*
     * @tc.number: ACTS_RequestPermissionFromUser_0100
     * @tc.name: requestPermissionsFromUser
     * @tc.desc: verify the requestPermissionsFromUser(permissions: Array<string>,
                 requestCode: number, resultCallback: AsyncCallback<PermissionRequestResult>): void;
     */
    it('ACTS_RequestPermissionFromUser_0100', 0, async function (done) {
        var context = await featureAbility.getContext();
        context.requestPermissionsFromUser([], 1, (err)=>{
            console.info("====ACTS_RequestPermissionFromUser_0100 callback err====>"+JSON.stringify(err.code));
            expect(err.code != 0).assertEqual(true);
        });
        setTimeout((async function(){
            console.info("====ACTS_RequestPermissionFromUser_0100 setTimeout===>");
            done();
        }),1000);
    })

    /*
     * @tc.number: ACTS_RequestPermissionFromUser_0200
     * @tc.name: requestPermissionsFromUser
     * @tc.desc: verify the requestPermissionsFromUser(permissions: Array<string>,
                 requestCode: number, resultCallback: AsyncCallback<PermissionRequestResult>): void;
     */
    it('ACTS_RequestPermissionFromUser_0200', 0, async function (done) {
        var context = await featureAbility.getContext();
        context.requestPermissionsFromUser([], 2, (err)=>{
            console.info("====ACTS_RequestPermissionFromUser_0200 callback err====>"+JSON.stringify(err.code));
            expect(err.code != 0).assertEqual(true);
        });
        setTimeout((async function(){
            console.info("====ACTS_RequestPermissionFromUser_0200 setTimeout===>");
            done();
        }),1000);
    })
})