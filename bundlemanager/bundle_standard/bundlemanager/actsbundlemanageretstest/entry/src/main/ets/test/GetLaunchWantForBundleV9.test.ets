/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file expect in compliance with the License.
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
import bundleMgr from '@ohos.bundle.bundleManager';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'hypium/index';

const NAME1 = "com.example.third1";
const NAME2 = "com.example.l3jsdemo";
const NAME3 = "com.notexist.com";
const ABILITYNAME1 = "com.example.third1.MainAbility";
const ABILITYNAME2 = "com.example.l3jsdemo.MainAbility";
const USER_ID = 200;
const ERROR_BUNDLE_NOT_EXIST = 17700001;
const ERROR_PARAM_CHECK_ERROR = 401;
const ERROR_INVALID_USER_ID = 17700004;

export default function getLaunchWantForBundleV9() {
    describe('GetLaunchWantForBundleTestV9', function () {

        /*
        * @tc.number: SUB_BMS_LAUNCH_WANT_QUERY_0001
        * @tc.name: testGetLaunchWantForBundle.
        * @tc.desc: Test getLaunchWantForBundle api by promise and callback.
        * @tc.author renyi 00559040
        * @tc.size MediumTest
        * @tc.type Function
        * @tc.level Level 1
        */
        it('testGetLaunchWantForBundle', 0, async function (done) {
            (async() => {
                try {
                    console.info("testGetLaunchWantForBundle successfully");
                    let res = await bundleMgr.getLaunchWantForBundle(NAME1);
                    expect(res.bundleName).assertEqual(NAME1);
                    expect(res.abilityName).assertEqual(ABILITYNAME1);
                    expect(res.deviceId).assertEqual('');
                    expect(res.action).assertEqual('action.system.home');
                    expect(res.entities[0]).assertEqual('entity.system.home');
                } catch(error) {
                    console.info("testGetLaunchWantForBundle failed");
                    expect(error).assertFail();
                }
            })();

            try {
                bundleMgr.getLaunchWantForBundle(NAME1, (err, res) => {
                    console.info("testGetLaunchWantForBundle successfully");
                    expect(res.bundleName).assertEqual(NAME1);
                    expect(res.abilityName).assertEqual(ABILITYNAME1);
                    expect(res.deviceId).assertEqual('');
                    expect(res.action).assertEqual('action.system.home');
                    expect(res.entities[0]).assertEqual('entity.system.home');
                    done();
                });
            } catch(error) {
                console.info("testGetLaunchWantForBundle failed");
                expect(error).assertFail();
            }
        });

        /*
        * @tc.number: SUB_BMS_LAUNCH_WANT_QUERY_0002
        * @tc.name: testGetLaunchWantForBundleWithManyHaps.
        * @tc.desc: Test getLaunchWantForBundle api by promise and callback.
        * @tc.author renyi 00559040
        * @tc.size MediumTest
        * @tc.type Function
        * @tc.level Level 1
        */
        it('testGetLaunchWantForBundleWithManyHaps', 0, async function (done) {
            (async() => {
                try {
                    console.info("testGetLaunchWantForBundle successfully");
                    let res = await bundleMgr.getLaunchWantForBundle(NAME2);
                    expect(res.bundleName).assertEqual(NAME2);
                    expect(res.abilityName).assertEqual(ABILITYNAME2);
                    expect(res.deviceId).assertEqual('');
                    expect(res.action).assertEqual('action.system.home');
                    expect(res.entities[0]).assertEqual('entity.system.home');
                } catch(error) {
                    console.info("testGetLaunchWantForBundle failed");
                    expect(error).assertFail();
                }
            })();

            try {
                bundleMgr.getLaunchWantForBundle(NAME2, (err, res) => {
                    console.info("testGetLaunchWantForBundle successfully");
                    expect(res.bundleName).assertEqual(NAME2);
                    expect(res.abilityName).assertEqual(ABILITYNAME2);
                    expect(res.deviceId).assertEqual('');
                    expect(res.action).assertEqual('action.system.home');
                    expect(res.entities[0]).assertEqual('entity.system.home');
                    done();
                });
            } catch(error) {
                console.info("testGetLaunchWantForBundle failed");
                expect(error).assertFail();
            }
        });

        /*
        * @tc.number: SUB_BMS_LAUNCH_WANT_QUERY_0003
        * @tc.name: testGetLaunchWantForBundleWithNotExist.
        * @tc.desc: Test getLaunchWantForBundle api by promise and callback.
        * @tc.author renyi 00559040
        * @tc.size MediumTest
        * @tc.type Function
        * @tc.level Level 2
        */
        it('testGetLaunchWantForBundleWithNotExist', 0, async function (done) {
            (async() => {
                try {
                    let res = await bundleMgr.getLaunchWantForBundle(NAME3);
                } catch(error) {
                    console.info("testGetLaunchWantForBundle failed");
                    expect(error.code).assertEqual(ERROR_BUNDLE_NOT_EXIST);
                    done();
                }
            })();

            try {
                bundleMgr.getLaunchWantForBundle(NAME3, (err, res) => {
                    console.info("testGetLaunchWantForBundle failed");
                    expect(err.code).assertEqual(ERROR_BUNDLE_NOT_EXIST);
                    done();
                });
            } catch(error) {
                console.info("testGetLaunchWantForBundle failed");
                expect().assertFail();
                done();
            }
        });

        /*
        * @tc.number: SUB_BMS_LAUNCH_WANT_QUERY_0004
        * @tc.name: testGetLaunchWantForBundleWithInvalidParam.
        * @tc.desc: Test getLaunchWantForBundle api by promise and callback.
        * @tc.author renyi 00559040
        * @tc.size MediumTest
        * @tc.type Function
        * @tc.level Level 3
        */
        it('testGetLaunchWantForBundleWithInvalidParam', 0, async function (done) {
            (async() => {
                try {
                    let res = await bundleMgr.getLaunchWantForBundle(null);
                } catch(error) {
                    console.info("testGetLaunchWantForBundle failed");
                    expect(error.code).assertEqual(ERROR_PARAM_CHECK_ERROR);
                    done();
                }
            })();

            try {
                bundleMgr.getLaunchWantForBundle(null, (err, res) => {
                    expect().assertFail();
                    done();
                });
            } catch(error) {
                console.info("testGetLaunchWantForBundle failed");
                expect(error.code).assertEqual(ERROR_PARAM_CHECK_ERROR);
                done();
            }
        });

        /*
        * @tc.number: SUB_BMS_LAUNCH_WANT_QUERY_0004
        * @tc.name: testGetLaunchWantForBundleWithInvalidUserId.
        * @tc.desc: Test getLaunchWantForBundle api by promise and callback.
        * @tc.author renyi 00559040
        * @tc.size MediumTest
        * @tc.type Function
        * @tc.level Level 3
        */
        it('testGetLaunchWantForBundleWithInvalidUserId', 0, async function (done) {
            (async() => {
                try {
                    let res = await bundleMgr.getLaunchWantForBundle(NAME2, USER_ID);
                } catch(error) {
                    console.info("testGetLaunchWantForBundle failed");
                    expect(error.code).assertEqual(ERROR_INVALID_USER_ID);
                    done();
                }
            })();

            try {
                bundleMgr.getLaunchWantForBundle(NAME2, USER_ID, (err, res) => {
                    console.info("testGetLaunchWantForBundle failed");
                    expect(err.code).assertEqual(ERROR_INVALID_USER_ID);
                    done();
                });
            } catch(error) {
                console.info("testGetLaunchWantForBundle failed");
                expect().assertFail();
                done();
            }
        });
    });
}
