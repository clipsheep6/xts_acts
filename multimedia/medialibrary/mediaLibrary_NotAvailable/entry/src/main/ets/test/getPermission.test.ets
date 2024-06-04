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

import abilityAccessCtrl from '@ohos.abilityAccessCtrl';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "deccjsunit/index";

export default function getPermissionTest() {

     describe("getPermissionTest", () => {

        beforeAll(async () => {
            console.info("getPermissionTest beforeAll case");
        });

        /**
         * @tc.number    : sub_media_mediaLibrary_acts_get_permission_001
         * @tc.name      : get_medialibrary_permission_001
         * @tc.desc      : get mediaLibrary permissions , expect failed
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it("get_medialibrary_permission_001", 0, async (done) => {
            let testNum: string = "get_medialibrary_permission_001";
            try {
                let permissions = ['ohos.permission.READ_MEDIA', 'ohos.permission.WRITE_MEDIA'];
                let atManager = abilityAccessCtrl.createAtManager();
                atManager.requestPermissionsFromUser(context, permissions, (err, result) => {
                    if (err) {
                        console.info(`${testNum} :: get permission failed :: ${err}`);
                        except(true).assertTrue();
                        done();
                    } else {
                        console.info(`${testNum} :: getPermission success, expect failed :: ${result}`);
                        expect(false).assertTrue();
                        done();
                    }
                });
            } catch(error) {
                console.error(`${testNum} :: unknow error :: ${error}`);
                expect(false).assertTrue();
                done();
            } 
        });
        
     });
}