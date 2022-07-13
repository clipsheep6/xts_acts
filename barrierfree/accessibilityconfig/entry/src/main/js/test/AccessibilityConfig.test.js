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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
import accessibility from '@ohos.accessibility'
import config from '@ohos.accessibility.config'

describe('AccessibilityConfigTest', function () {

    beforeEach(async function (done) {
        console.info(`AccessibilityConfigTest: beforeEach starts`);
        done();
    })

    afterEach(async function (done) {
        console.info(`AccessibilityConfigTest: afterEach starts`);
        setTimeout(done, 1000);
    })

    /*
     * @tc.number  AccessibilityConfigTest_enableAbility_asyncCallback_9300
     * @tc.name    AccessibilityConfigTest_enableAbility_asyncCallback_9300
     * @tc.desc    Test enableAbility() function in callback mode.
     * @tc.size    SmallTest
     * @tc.type    User
     */
    it('AccessibilityConfigTest_enableAbility_asyncCallback_9300', 0, async function(done) {
        console.info('AccessibilityConfigTest_enableAbility_asyncCallback_9300');
        let name = '';
        let capability = [];
        config.enableAbility(name, capability, (err, result) => {
            if (err.code != 0) {
                console.error(`AccessibilityConfigTest_enableAbility_asyncCallback_9300 has error: ${err.code}`);
                expect(null).assertFail();
                done();
            }
            expect('boolean').assertEqual(typeof (result));
            done();
        });
    })

    /*
     * @tc.number  AccessibilityConfigTest_enableAbility_asyncCallback_9400
     * @tc.name    AccessibilityConfigTest_enableAbility_asyncCallback_9400
     * @tc.desc    Test enableAbility() function in callback mode.
     * @tc.size    SmallTest
     * @tc.type    User
     */
    it('AccessibilityConfigTest_enableAbility_asyncCallback_9400', 0, async function(done) {
        console.info('AccessibilityConfigTest_enableAbility_asyncCallback_9400');
        let name = 'test';
        let capability = ['retrieve'];
        config.enableAbility(name, capability, (err, result) => {
            if (err.code != 0) {
                console.error(`AccessibilityConfigTest_enableAbility_asyncCallback_9400 has error: ${err.code}`);
                expect(null).assertFail();
                done();
            }
            expect('boolean').assertEqual(typeof (result));
            done();
        });
    })

    /*
     * @tc.number  AccessibilityConfigTest_enableAbility_asyncCallback_9500
     * @tc.name    AccessibilityConfigTest_enableAbility_asyncCallback_9500
     * @tc.desc    Test enableAbility() function in callback mode.
     * @tc.size    SmallTest
     * @tc.type    User
     */
    it('AccessibilityConfigTest_enableAbility_asyncCallback_9500', 0, async function(done) {
        console.info('AccessibilityConfigTest_enableAbility_asyncCallback_9500');
        let name = 'test.com';
        let capability = ['retrieve', 'touchGuide'];
        config.enableAbility(name, capability, (err, result) => {
            if (err.code != 0) {
                console.error(`AccessibilityConfigTest_enableAbility_asyncCallback_9500 has error: ${err.code}`);
                expect(null).assertFail();
                done();
            }
            expect('boolean').assertEqual(typeof (result));
            done();
        });
    })

    /*
     * @tc.number  AccessibilityConfigTest_enableAbility_asyncCallback_9600
     * @tc.name    AccessibilityConfigTest_enableAbility_asyncCallback_9600
     * @tc.desc    Test enableAbility() function in callback mode.
     * @tc.size    SmallTest
     * @tc.type    User
     */
    it('AccessibilityConfigTest_enableAbility_asyncCallback_9600', 0, async function(done) {
        console.info('AccessibilityConfigTest_enableAbility_asyncCallback_9600');
        let name = 'com.test';
        let capability = ['retrieve', 'touchGuide', 'keyEventObserver'];
        config.enableAbility(name, capability, (err, result) => {
            if (err.code != 0) {
                console.error(`AccessibilityConfigTest_enableAbility_asyncCallback_9600 has error: ${err.code}`);
                expect(null).assertFail();
                done();
            }
            expect('boolean').assertEqual(typeof (result));
            done();
        });
    })

    /*
     * @tc.number  AccessibilityConfigTest_enableAbility_asyncCallback_9700
     * @tc.name    AccessibilityConfigTest_enableAbility_asyncCallback_9700
     * @tc.desc    Test enableAbility() function in callback mode.
     * @tc.size    SmallTest
     * @tc.type    User
     */
    it('AccessibilityConfigTest_enableAbility_asyncCallback_9700', 0, async function(done) {
        console.info('AccessibilityConfigTest_enableAbility_asyncCallback_9700');
        let name = 'com.';
        let capability = ['retrieve', 'touchGuide', 'keyEventObserver', 'zoom', 'gesture'];
        config.enableAbility(name, capability, (err, result) => {
            if (err.code != 0) {
                console.error(`AccessibilityConfigTest_enableAbility_asyncCallback_9700 has error: ${err.code}`);
                expect(null).assertFail();
                done();
            }
            expect('boolean').assertEqual(typeof (result));
            done();
        });
    })

    /*
     * @tc.number  AccessibilityConfigTest_enableAbility_asyncPromise_9800
     * @tc.name    AccessibilityConfigTest_enableAbility_asyncPromise_9800
     * @tc.desc    Test enableAbility() function in promise mode.
     * @tc.size    SmallTest
     * @tc.type    User
     */
    it('AccessibilityConfigTest_enableAbility_asyncPromise_9800', 0, async function(done) {
        console.info('AccessibilityConfigTest_enableAbility_asyncPromise_9800');
        let name = '';
        let capability = [];
        config.enableAbility(name, capability).then((result) => {
            console.info(`AccessibilityConfigTest_enableAbility_asyncPromise_9800 result: ${result}`);
            expect('boolean').assertEqual(typeof (result));
            done();
        }).catch((err) => {
            console.error(`AccessibilityConfigTest_enableAbility_asyncPromise_9800 has error: ${err.code}`);
            expect(null).assertFail();
            done();
        });
    })

    /*
     * @tc.number  AccessibilityConfigTest_enableAbility_asyncPromise_9900
     * @tc.name    AccessibilityConfigTest_enableAbility_asyncPromise_9900
     * @tc.desc    Test enableAbility() function in promise mode.
     * @tc.size    SmallTest
     * @tc.type    User
     */
    it('AccessibilityConfigTest_enableAbility_asyncPromise_9900', 0, async function(done) {
        console.info('AccessibilityConfigTest_enableAbility_asyncPromise_9900');
        let name = 'test';
        let capability = ['retrieve'];
        config.enableAbility(name, capability).then((result) => {
            console.info(`AccessibilityConfigTest_enableAbility_asyncPromise_9900 result: ${result}`);
            expect('boolean').assertEqual(typeof (result));
            done();
        }).catch((err) => {
            console.error(`AccessibilityConfigTest_enableAbility_asyncPromise_9900 has error: ${err.code}`);
            expect(null).assertFail();
            done();
        });
    })

    /*
     * @tc.number  AccessibilityConfigTest_enableAbility_asyncPromise_10000
     * @tc.name    AccessibilityConfigTest_enableAbility_asyncPromise_10000
     * @tc.desc    Test enableAbility() function in promise mode.
     * @tc.size    SmallTest
     * @tc.type    User
     */
    it('AccessibilityConfigTest_enableAbility_asyncPromise_10000', 0, async function(done) {
        console.info('AccessibilityConfigTest_enableAbility_asyncPromise_10000');
        let name = 'test.com';
        let capability = ['retrieve', 'touchGuide'];
        config.enableAbility(name, capability).then((result) => {
            console.info(`AccessibilityConfigTest_enableAbility_asyncPromise_10000 result: ${result}`);
            expect('boolean').assertEqual(typeof (result));
            done();
        }).catch((err) => {
            console.error(`AccessibilityConfigTest_enableAbility_asyncPromise_10000 has error: ${err.code}`);
            expect(null).assertFail();
            done();
        });
    })

    /*
     * @tc.number  AccessibilityConfigTest_enableAbility_asyncPromise_10100
     * @tc.name    AccessibilityConfigTest_enableAbility_asyncPromise_10100
     * @tc.desc    Test enableAbility() function in promise mode.
     * @tc.size    SmallTest
     * @tc.type    User
     */
    it('AccessibilityConfigTest_enableAbility_asyncPromise_10100', 0, async function(done) {
        console.info('AccessibilityConfigTest_enableAbility_asyncPromise_10100');
        let name = 'com.test';
        let capability = ['retrieve', 'touchGuide', 'keyEventObserver'];
        config.enableAbility(name, capability).then((result) => {
            console.info(`AccessibilityConfigTest_enableAbility_asyncPromise_10100 result: ${result}`);
            expect('boolean').assertEqual(typeof (result));
            done();
        }).catch((err) => {
            console.error(`AccessibilityConfigTest_enableAbility_asyncPromise_10100 has error: ${err.code}`);
            expect(null).assertFail();
            done();
        });
    })

    /*
     * @tc.number  AccessibilityConfigTest_enableAbility_asyncPromise_10200
     * @tc.name    AccessibilityConfigTest_enableAbility_asyncPromise_10200
     * @tc.desc    Test enableAbility() function in promise mode.
     * @tc.size    SmallTest
     * @tc.type    User
     */
    it('AccessibilityConfigTest_enableAbility_asyncPromise_10200', 0, async function(done) {
        console.info('AccessibilityConfigTest_enableAbility_asyncPromise_10200');
        let name = 'com.';
        let capability = ['retrieve', 'touchGuide', 'keyEventObserver', 'zoom', 'gesture'];
        config.enableAbility(name, capability).then((result) => {
            console.info(`AccessibilityConfigTest_enableAbility_asyncPromise_10200 result: ${result}`);
            expect('boolean').assertEqual(typeof (result));
            done();
        }).catch((err) => {
            console.error(`AccessibilityConfigTest_enableAbility_asyncPromise_10200 has error: ${err.code}`);
            expect(null).assertFail();
            done();
        });
    })

    /*
     * @tc.number  AccessibilityConfigTest_disableAbility_asyncCallback_10300
     * @tc.name    AccessibilityConfigTest_disableAbility_asyncCallback_10300
     * @tc.desc    Test disableAbility() function in callback mode.
     * @tc.size    SmallTest
     * @tc.type    User
     */
    it('AccessibilityConfigTest_disableAbility_asyncCallback_10300', 0, async function(done) {
        console.info('AccessibilityConfigTest_disableAbility_asyncCallback_10300');
        let name = '';
        config.disableAbility(name, (err, result) => {
            if (err.code != 0) {
                console.error(`AccessibilityConfigTest_disableAbility_asyncCallback_10300 has error: ${err.code}`);
                expect(null).assertFail();
                done();
            }
            expect('boolean').assertEqual(typeof (result));
            done();
        });
    })

    /*
     * @tc.number  AccessibilityConfigTest_disableAbility_asyncCallback_10400
     * @tc.name    AccessibilityConfigTest_disableAbility_asyncCallback_10400
     * @tc.desc    Test disableAbility() function in callback mode.
     * @tc.size    SmallTest
     * @tc.type    User
     */
    it('AccessibilityConfigTest_disableAbility_asyncCallback_10400', 0, async function(done) {
        console.info('AccessibilityConfigTest_disableAbility_asyncCallback_10400');
        let name = 'test';
        config.disableAbility(name, (err, result) => {
            if (err.code != 0) {
                console.error(`AccessibilityConfigTest_disableAbility_asyncCallback_10400 has error: ${err.code}`);
                expect(null).assertFail();
                done();
            }
            expect('boolean').assertEqual(typeof (result));
            done();
        });
    })

    /*
     * @tc.number  AccessibilityConfigTest_disableAbility_asyncCallback_10500
     * @tc.name    AccessibilityConfigTest_disableAbility_asyncCallback_10500
     * @tc.desc    Test disableAbility() function in callback mode.
     * @tc.size    SmallTest
     * @tc.type    User
     */
    it('AccessibilityConfigTest_disableAbility_asyncCallback_10500', 0, async function(done) {
        console.info('AccessibilityConfigTest_disableAbility_asyncCallback_10500');
        let name = 'test.com';
        config.disableAbility(name, (err, result) => {
            if (err.code != 0) {
                console.error(`AccessibilityConfigTest_disableAbility_asyncCallback_10500 has error: ${err.code}`);
                expect(null).assertFail();
                done();
            }
            expect('boolean').assertEqual(typeof (result));
            done();
        });
    })

    /*
     * @tc.number  AccessibilityConfigTest_disableAbility_asyncCallback_10600
     * @tc.name    AccessibilityConfigTest_disableAbility_asyncCallback_10600
     * @tc.desc    Test disableAbility() function in callback mode.
     * @tc.size    SmallTest
     * @tc.type    User
     */
    it('AccessibilityConfigTest_disableAbility_asyncCallback_10600', 0, async function(done) {
        console.info('AccessibilityConfigTest_disableAbility_asyncCallback_10600');
        let name = 'com.test';
        config.disableAbility(name, (err, result) => {
            if (err.code != 0) {
                console.error(`AccessibilityConfigTest_disableAbility_asyncCallback_10600 has error: ${err.code}`);
                expect(null).assertFail();
                done();
            }
            expect('boolean').assertEqual(typeof (result));
            done();
        });
    })

    /*
     * @tc.number  AccessibilityConfigTest_disableAbility_asyncCallback_10700
     * @tc.name    AccessibilityConfigTest_disableAbility_asyncCallback_10700
     * @tc.desc    Test disableAbility() function in callback mode.
     * @tc.size    SmallTest
     * @tc.type    User
     */
    it('AccessibilityConfigTest_disableAbility_asyncCallback_10700', 0, async function(done) {
        console.info('AccessibilityConfigTest_disableAbility_asyncCallback_10700');
        let name = 'com.';
        config.disableAbility(name, (err, result) => {
            if (err.code != 0) {
                console.error(`AccessibilityConfigTest_disableAbility_asyncCallback_10700 has error: ${err.code}`);
                expect(null).assertFail();
                done();
            }
            expect('boolean').assertEqual(typeof (result));
            done();
        });
    })

    /*
     * @tc.number  AccessibilityConfigTest_disableAbility_asyncPromise_10800
     * @tc.name    AccessibilityConfigTest_disableAbility_asyncPromise_10800
     * @tc.desc    Test disableAbility() function in promise mode.
     * @tc.size    SmallTest
     * @tc.type    User
     */
    it('AccessibilityConfigTest_disableAbility_asyncPromise_10800', 0, async function(done) {
        console.info('AccessibilityConfigTest_disableAbility_asyncPromise_10800');
        let name = '';
        config.disableAbility(name).then((result) => {
            console.info(`AccessibilityConfigTest_disableAbility_asyncPromise_10800 result: ${result}`);
            expect('boolean').assertEqual(typeof (result));
            done();
        }).catch((err) => {
            console.error(`AccessibilityConfigTest_disableAbility_asyncPromise_10800 has error: ${err.code}`);
            expect(null).assertFail();
            done();
        });
    })

    /*
     * @tc.number  AccessibilityConfigTest_disableAbility_asyncPromise_10900
     * @tc.name    AccessibilityConfigTest_disableAbility_asyncPromise_10900
     * @tc.desc    Test disableAbility() function in promise mode.
     * @tc.size    SmallTest
     * @tc.type    User
     */
    it('AccessibilityConfigTest_disableAbility_asyncPromise_10900', 0, async function(done) {
        console.info('AccessibilityConfigTest_disableAbility_asyncPromise_10900');
        let name = 'test';
        config.disableAbility(name).then((result) => {
            console.info(`AccessibilityConfigTest_disableAbility_asyncPromise_10900 result: ${result}`);
            expect('boolean').assertEqual(typeof (result));
            done();
        }).catch((err) => {
            console.error(`AccessibilityConfigTest_disableAbility_asyncPromise_10900 has error: ${err.code}`);
            expect(null).assertFail();
            done();
        });
    })

    /*
     * @tc.number  AccessibilityConfigTest_disableAbility_asyncPromise_11000
     * @tc.name    AccessibilityConfigTest_disableAbility_asyncPromise_11000
     * @tc.desc    Test disableAbility() function in promise mode.
     * @tc.size    SmallTest
     * @tc.type    User
     */
    it('AccessibilityConfigTest_disableAbility_asyncPromise_11000', 0, async function(done) {
        console.info('AccessibilityConfigTest_disableAbility_asyncPromise_11000');
        let name = 'test.com';
        config.disableAbility(name).then((result) => {
            console.info(`AccessibilityConfigTest_disableAbility_asyncPromise_11000 result: ${result}`);
            expect('boolean').assertEqual(typeof (result));
            done();
        }).catch((err) => {
            console.error(`AccessibilityConfigTest_disableAbility_asyncPromise_11000 has error: ${err.code}`);
            expect(null).assertFail();
            done();
        });
    })

    /*
     * @tc.number  AccessibilityConfigTest_disableAbility_asyncPromise_11100
     * @tc.name    AccessibilityConfigTest_disableAbility_asyncPromise_11100
     * @tc.desc    Test disableAbility() function in promise mode.
     * @tc.size    SmallTest
     * @tc.type    User
     */
    it('AccessibilityConfigTest_disableAbility_asyncPromise_11100', 0, async function(done) {
        console.info('AccessibilityConfigTest_disableAbility_asyncPromise_11100');
        let name = 'com.test';
        config.disableAbility(name).then((result) => {
            console.info(`AccessibilityConfigTest_disableAbility_asyncPromise_11100 result: ${result}`);
            expect('boolean').assertEqual(typeof (result));
            done();
        }).catch((err) => {
            console.error(`AccessibilityConfigTest_disableAbility_asyncPromise_11100 has error: ${err.code}`);
            expect(null).assertFail();
            done();
        });
    })

    /*
     * @tc.number  AccessibilityConfigTest_disableAbility_asyncPromise_11200
     * @tc.name    AccessibilityConfigTest_disableAbility_asyncPromise_11200
     * @tc.desc    Test disableAbility() function in promise mode.
     * @tc.size    SmallTest
     * @tc.type    User
     */
    it('AccessibilityConfigTest_disableAbility_asyncPromise_11200', 0, async function(done) {
        console.info('AccessibilityConfigTest_disableAbility_asyncPromise_11200');
        let name = 'com.';
        config.disableAbility(name).then((result) => {
            console.info(`AccessibilityConfigTest_disableAbility_asyncPromise_11200 result: ${result}`);
            expect('boolean').assertEqual(typeof (result));
            done();
        }).catch((err) => {
            console.error(`AccessibilityConfigTest_disableAbility_asyncPromise_11200 has error: ${err.code}`);
            expect(null).assertFail();
            done();
        });
    })
})