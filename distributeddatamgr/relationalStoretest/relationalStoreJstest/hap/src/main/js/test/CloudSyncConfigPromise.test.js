/*
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


import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from '@ohos/hypium';
import cloudData from '@ohos.data.cloudData';

export default function CloudSyncConfigPromise() {
describe('CloudSyncConfigPromise', function () {
    /**
     * @tc.name EnabledCloudInvalidArgsTest
     * @tc.desc Test Js Api EnabledCloud with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
    it('EnabledCloudInvalidArgsTest', 0, async function (done) {
        console.info('EnabledCloudInvalidArgsTest');
        try {
            let account = "test_id";
            let config = cloudData.Config;
            await config.enableCloud(account, null).then(() => {
                console.info('EnabledCloudInvalidArgsTest success');
                expect(null).assertFail();
            }).catch((error) => {
                console.error('EnabledCloudInvalidArgsTest enableCloud fail' + `, error code is ${error.code}, message is ${error.message}`);
                expect(null).assertFail();
            });
        } catch (e) {
            console.error('EnabledCloudInvalidArgsTest fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
        }
        done();
    })

    /**
     * @tc.name EnabledCloudInvalidArgsNumsTest
     * @tc.desc Test Js Api EnabledCloud which parameters number are less
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
    it('EnabledCloudInvalidArgsNumsTest', 0, async function (done) {
        console.info('EnabledCloudInvalidArgsNumsTest');
        try {
            let account = "test_id";
            await cloudData.Config.enableCloud(account).then(() => {
                console.info('EnabledCloudInvalidArgsNumsTest success');
                expect(null).assertFail();
            }).catch((error) => {
                console.error('EnabledCloudInvalidArgsNumsTest enableCloud fail' + `, error code is ${error.code}, message is ${error.message}`);
                expect(null).assertFail();
            });
        } catch (e) {
            console.error('EnabledCloudInvalidArgsNumsTest fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
        }
        done();
    })


    /**
     * @tc.name DisableCloudInvalidArgsTest
     * @tc.desc Test Js Api DisableCloud with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
    it('DisableCloudInvalidArgsTest', 0, async function (done) {
        console.info('DisableCloudInvalidArgsTest');
        try {
            await cloudData.Config.disableCloud(null).then(() => {
                console.info('DisableCloudInvalidArgsTest success');
                expect(null).assertFail();
            }).catch((error) => {
                console.error('DisableCloudInvalidArgsTest disableCloud fail' + `, error code is ${error.code}, message is ${error.message}`);
                expect(null).assertFail();
            });
        } catch (e) {
            console.error('DisableCloudInvalidArgsTest fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
        }
        done();
    })

    /**
     * @tc.name DisableCloudInvalidArgsNumsTest
     * @tc.desc Test Js Api DisableCloud which parameters number are less
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
    it('DisableCloudInvalidArgsNumsTest', 0, async function (done) {
        console.info('DisableCloudInvalidArgsNumsTest');
        try {
            await cloudData.Config.disableCloud().then(() => {
                console.info('DisableCloudInvalidArgsNumsTest success');
                expect(null).assertFail();
            }).catch((error) => {
                console.error('DisableCloudInvalidArgsNumsTest disableCloud fail' + `, error code is ${error.code}, message is ${error.message}`);
                expect(null).assertFail();
            });
        } catch (e) {
            console.error('DisableCloudInvalidArgsNumsTest fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
        }
        done();
    })

    /**
     * @tc.name ChangeAppCloudInvalidArgsTest
     * @tc.desc Test Js Api ChangeAppCloudSwitch with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
    it('ChangeAppCloudInvalidArgsTest', 0, async function (done) {
        console.info('ChangeAppCloudInvalidArgsTest');
        try {
            let account = "test_id";
            let bundleName = "test_bundleName";
            await cloudData.Config.changeAppCloudSwitch(account, bundleName, null).then(() => {
                console.info('ChangeAppCloudInvalidArgsTest success');
                expect(null).assertFail();
            }).catch((error) => {
                console.error('ChangeAppCloudInvalidArgsTest changeAppCloudSwitch fail' + `, error code is ${error.code}, message is ${error.message}`);
                expect(null).assertFail();
            });
        } catch (e) {
            console.error('ChangeAppCloudInvalidArgsTest fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
        }
        done();
    })

    /**
     * @tc.name ChangeAppCloudInvalidArgsNumsTest
     * @tc.desc Test Js Api ChangeAppCloudSwitch which parameters number are less
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
    it('ChangeAppCloudInvalidArgsNumsTest', 0, async function (done) {
        console.info('ChangeAppCloudInvalidArgsNumsTest');
        try {
            let account = "test_id";
            let bundleName = "test_bundleName";
            await cloudData.Config.changeAppCloudSwitch(account, bundleName).then(() => {
                console.info('ChangeAppCloudInvalidArgsNumsTest success');
                expect(null).assertFail();
            }).catch((error) => {
                console.error('ChangeAppCloudInvalidArgsNumsTest changeAppCloudSwitch fail' + `, error code is ${error.code}, message is ${error.message}`);
                expect(null).assertFail();
            });
        } catch (e) {
            console.error('ChangeAppCloudInvalidArgsNumsTest fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
        }
        done();
    })

    /**
     * @tc.name NotifyChangeInvalidArgsTest
     * @tc.desc Test Js Api NotifyChange with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
    it('NotifyChangeInvalidArgsTest', 0, async function (done) {
        console.info('NotifyChangeInvalidArgsTest');
        try {
            let account = "test_id";
            await cloudData.Config.notifyDataChange(account, null).then((data) => {
                console.info('NotifyChangeInvalidArgsTest success');
                expect(null).assertFail();
            }).catch((error) => {
                console.error('NotifyChangeInvalidArgsTest NotifyChange fail' + `, error code is ${error.code}, message is ${error.message}`);
                expect(null).assertFail();
            });
        } catch (e) {
            console.error('NotifyChangeInvalidArgsTest fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
        }
        done();
    })


    /**
     * @tc.name NotifyChangeInvalidArgsTest0200
     * @tc.desc Test Js Api NotifyChange with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
     it('NotifyChangeInvalidArgsTest0200', 0, async function (done) {
        console.info('NotifyChangeInvalidArgsTest0200');
        try {
            let bundleName = 'test_bundleName';
            await cloudData.Config.notifyDataChange(null, bundleName).then((data) => {
                console.info('NotifyChangeInvalidArgsTest0200 success');
                expect(null).assertFail();
            }).catch((error) => {
                console.error('NotifyChangeInvalidArgsTest0200 NotifyChange fail' + `, error code is ${error.code}, message is ${error.message}`);
                expect(null).assertFail();
            });
        } catch (e) {
            console.error('NotifyChangeInvalidArgsTest0200 fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
        }
        done();
    })

    /**
     * @tc.name NotifyChangeInvalidArgsTest0300
     * @tc.desc Test Js Api NotifyChange with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
     it('NotifyChangeInvalidArgsTest0300', 0, async function (done) {
        console.info('NotifyChangeInvalidArgsTest0300');
        try {
            let account = 'test_id';
            let bundleName = 'test_bundleName';
            await cloudData.Config.notifyDataChange(account, bundleName).then((data) => {
                console.info('NotifyChangeInvalidArgsTest0300 success');
                expect(null).assertFail();
            }).catch((error) => {
                console.error('NotifyChangeInvalidArgsTest0300 NotifyChange fail' + `, error code is ${error.code}, message is ${error.message}`);
                expect(error.code == 201).assertTrue();
            });
        } catch (e) {
            console.error('NotifyChangeInvalidArgsTest0300 fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(null).assertFail();
        }
        done();
    })

    /**
     * @tc.name NotifyChangeInvalidArgsNumsTest
     * @tc.desc Test Js Api NotifyChange which parameters number are less
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
    it('NotifyChangeInvalidArgsNumsTest', 0, async function (done) {
        console.info('NotifyChangeInvalidArgsNumsTest');
        try {
            let account = "test_id";
            await cloudData.Config.notifyDataChange(account).then(() => {
                console.info('NotifyChangeInvalidArgsNumsTest success');
                expect(null).assertFail();
            }).catch((error) => {
                console.error('NotifyChangeInvalidArgsNumsTest NotifyChange fail' + `, error code is ${error.code}, message is ${error.message}`);
                expect(null).assertFail();
            });
        } catch (e) {
            console.error('NotifyChangeInvalidArgsNumsTest fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
        }
        done();
    })

    /**
     * @tc.name NotifyDataChangeInvalidArgsTest
     * @tc.desc Test Js Api NotifyDataChange with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
    it('NotifyDataChangeInvalidArgsTest', 0, async function (done) {
        console.info('NotifyDataChangeInvalidArgsTest');
        try {
            await cloudData.Config.notifyDataChange(null).then(() => {
                console.info('NotifyDataChangeInvalidArgsTest success');
                expect(null).assertFail();
            }).catch((error) => {
                console.error('NotifyDataChangeInvalidArgsTest NotifyChange fail' + `, error code is ${error.code}, message is ${error.message}`);
                expect(null).assertFail();
            });
        } catch (e) {
            console.error('NotifyDataChangeInvalidArgsTest fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
        }
        done();
    })

    /**
     * @tc.name NotifyDataChangeInvalidArgsTest0500
     * @tc.desc Test Js Api NotifyDataChange with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
     it('NotifyDataChangeInvalidArgsTest0500', 0, async function (done) {
        console.info('NotifyDataChangeInvalidArgsTest0500');
        try {
            let eventId = "cloud_data_change";
            let extraData = '{header:"bbbbbb",data:"{"accountId":"aaa","bundleName":"com.bbb.xxx","containerName":"alias","recordTypes":"["xxx","yyy","zzz"]"}"}';
            let userId = 100;
            await cloudData.Config.notifyDataChange({eventId: eventId, extraData: extraData}, userId).then(() => {
                console.info('NotifyDataChangeInvalidArgsTest0500 success');
                expect(null).assertFail();
            }).catch((error) => {
                console.error('NotifyDataChangeInvalidArgsTest0500 NotifyChange fail' + `, error code is ${error.code}, message is ${error.message}`);
                expect(error.code == 201).assertTrue();
            });
        } catch (e) {
            console.error('NotifyDataChangeInvalidArgsTest0500 fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(null).assertFail();
        }
        done();
    })


    /**
     * @tc.name NotifyDataChangeInvalidArgsTest0600
     * @tc.desc Test Js Api NotifyDataChange with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
     it('NotifyDataChangeInvalidArgsTest0600', 0, async function (done) {
        console.info('NotifyDataChangeInvalidArgsTest0600');
        try {
            let eventId = "cloud_data_change";
            let extraData = '{header:"bbbbbb",data:"{"accountId":"aaa","bundleName":"com.bbb.xxx","containerName":"alias","recordTypes":"["xxx","yyy","zzz"]"}"}';
            let userId = 100;
            await cloudData.Config.notifyDataChange({eventId: null, extraData: extraData}, userId).then(() => {
                console.info('NotifyDataChangeInvalidArgsTest0600 success');
                expect(null).assertFail();
            }).catch((error) => {
                console.error('NotifyDataChangeInvalidArgsTest0600 NotifyChange fail' + `, error code is ${error.code}, message is ${error.message}`);
                expect(null).assertFail();
            });
        } catch (e) {
            console.error('NotifyDataChangeInvalidArgsTest0600 fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
        }
        done();
    })

    /**
     * @tc.name NotifyDataChangeInvalidArgsTest0700
     * @tc.desc Test Js Api NotifyDataChange with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
     it('NotifyDataChangeInvalidArgsTest0700', 0, async function (done) {
        console.info('NotifyDataChangeInvalidArgsTest0700');
        try {
            let eventId = "cloud_data_change";
            let extraData = '{header:"bbbbbb",data:"{"accountId":"aaa","bundleName":"com.bbb.xxx","containerName":"alias","recordTypes":"["xxx","yyy","zzz"]"}"}';
            let userId = 100;
            await cloudData.Config.notifyDataChange({eventId: eventId, extraData: null}, userId).then(() => {
                console.info('NotifyDataChangeInvalidArgsTest0700 success');
                expect(null).assertFail();
            }).catch((error) => {
                console.error('NotifyDataChangeInvalidArgsTest0700 NotifyChange fail' + `, error code is ${error.code}, message is ${error.message}`);
                expect(null).assertFail();
            });
        } catch (e) {
            console.error('NotifyDataChangeInvalidArgsTest0700 fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
        }
        done();
    })

    /**
     * @tc.name NotifyDataChangeInvalidArgsTest0800
     * @tc.desc Test Js Api NotifyDataChange with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
     it('NotifyDataChangeInvalidArgsTest0800', 0, async function (done) {
        console.info('NotifyDataChangeInvalidArgsTest0800');
        try {
            let eventId = "cloud_data_change";
            let extraData = '{header:"bbbbbb",data:"{"accountId":"aaa","bundleName":"com.bbb.xxx","containerName":"alias","recordTypes":"["xxx","yyy","zzz"]"}"}';
            let userId = 100;
            await cloudData.Config.notifyDataChange({eventId: eventId, extraData: extraData}, null).then(() => {
                console.info('NotifyDataChangeInvalidArgsTest0800 success');
                expect(null).assertFail();
            }).catch((error) => {
                console.error('NotifyDataChangeInvalidArgsTest0800 NotifyChange fail' + `, error code is ${error.code}, message is ${error.message}`);
                expect(null).assertFail();
            });
        } catch (e) {
            console.error('NotifyDataChangeInvalidArgsTest0800 fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
        }
        done();
    })

    /**
     * @tc.name NotifyDataChangeInvalidArgsTest0900
     * @tc.desc Test Js Api NotifyDataChange with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
     it('NotifyDataChangeInvalidArgsTest0900', 0, async function (done) {
        console.info('NotifyDataChangeInvalidArgsTest0900');
        try {
            let userId = 100;
            await cloudData.Config.notifyDataChange({eventId: null, extraData: null}, userId).then(() => {
                console.info('NotifyDataChangeInvalidArgsTest0900 success');
                expect(null).assertFail();
            }).catch((error) => {
                console.error('NotifyDataChangeInvalidArgsTest0900 NotifyChange fail' + `, error code is ${error.code}, message is ${error.message}`);
                expect(null).assertFail();
            });
        } catch (e) {
            console.error('NotifyDataChangeInvalidArgsTest0900 fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
        }
        done();
    })

    /**
     * @tc.name NotifyDataChangeInvalidArgsTest1000
     * @tc.desc Test Js Api NotifyDataChange with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
     it('NotifyDataChangeInvalidArgsTest1000', 0, async function (done) {
        console.info('NotifyDataChangeInvalidArgsTest0900');
        try {
            let userId = 100;
            await cloudData.Config.notifyDataChange(null, userId).then(() => {
                console.info('NotifyDataChangeInvalidArgsTest1000 success');
                expect(null).assertFail();
            }).catch((error) => {
                console.error('NotifyDataChangeInvalidArgsTest1000 NotifyChange fail' + `, error code is ${error.code}, message is ${error.message}`);
                expect(null).assertFail();
            });
        } catch (e) {
            console.error('NotifyDataChangeInvalidArgsTest1000 fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
        }
        done();
    })

    /**
     * @tc.name NotifyDataChangeInvalidArgsTest1100
     * @tc.desc Test Js Api NotifyDataChange with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
     it('NotifyDataChangeInvalidArgsTest1100', 0, async function (done) {
        console.info('NotifyDataChangeInvalidArgsTest1100');
        try {
            let userId = 100;
            await cloudData.Config.notifyDataChange(userId).then(() => {
                console.info('NotifyDataChangeInvalidArgsTest1100 success');
                expect(null).assertFail();
            }).catch((error) => {
                console.error('NotifyDataChangeInvalidArgsTest1100 NotifyChange fail' + `, error code is ${error.code}, message is ${error.message}`);
                expect(null).assertFail();
            });
        } catch (e) {
            console.error('NotifyDataChangeInvalidArgsTest1100 fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
        }
        done();
    })

    /**
     * @tc.name NotifyDataChangeInvalidArgsTest1200
     * @tc.desc Test Js Api NotifyDataChange with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
     it('NotifyDataChangeInvalidArgsTest1200', 0, async function (done) {
        console.info('NotifyDataChangeInvalidArgsTest1200');
        try {
            await cloudData.Config.notifyDataChange(undefined).then(() => {
                console.info('NotifyDataChangeInvalidArgsTest1200 success');
                expect(null).assertFail();
            }).catch((error) => {
                console.error('NotifyDataChangeInvalidArgsTest1200 NotifyChange fail' + `, error code is ${error.code}, message is ${error.message}`);
                expect(null).assertFail();
            });
        } catch (e) {
            console.error('NotifyDataChangeInvalidArgsTest1200 fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
        }
        done();
    })

    /**
     * @tc.name NotifyDataChangeInvalidArgsNumsTest
     * @tc.desc Test Js Api NotifyChange which parameters number are less
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
    it('NotifyDataChangeInvalidArgsNumsTest', 0, async function (done) {
        console.info('NotifyDataChangeInvalidArgsNumsTest');
        try {
            await cloudData.Config.notifyDataChange().then(() => {
                console.info('NotifyDataChangeInvalidArgsNumsTest success');
                expect(null).assertFail();
            }).catch((error) => {
                console.error('NotifyDataChangeInvalidArgsNumsTest NotifyChange fail' + `, error code is ${error.code}, message is ${error.message}`);
                expect(null).assertFail();
            });
        } catch (e) {
            console.error('NotifyDataChangeInvalidArgsNumsTest fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
        }
        done();
    })

    /**
     * @tc.name ClearInvalidArgsNumsTest
     * @tc.desc Test Js Api Clean which parameters number are less
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
    it('ClearInvalidArgsNumsTest', 0, async function (done) {
        console.info('ClearInvalidArgsNumsTest');
        try {
            let account = "test_id";
            await cloudData.Config.clear(account).then(() => {
                console.info('ClearInvalidArgsNumsTest success');
                expect(null).assertFail();
            }).catch((error) => {
                console.error('ClearInvalidArgsNumsTest clear fail' + `, error code is ${error.code}, message is ${error.message}`);
                expect(null).assertFail();
            });
        } catch (e) {
            console.error('ClearInvalidArgsNumsTest fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
        }
        done();
    })

    /**
     * @tc.name ClearInvalidArgsTest
     * @tc.desc Test Js Api Clear which parameters are invalid
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
    it('ClearInvalidArgsTest', 0, async function (done) {
        console.info('ClearInvalidArgsTest');
        try {
            let account = "test_id";
            let bundleName1 = "test_bundleName1";
            let appActions = {[bundleName1]: 3};
            await cloudData.Config.clear(account, appActions).then(() => {
                console.info('ClearInvalidArgsTest success');
                expect(null).assertFail();
            }).catch((error) => {
                console.error('ClearInvalidArgsTest clean fail' + `, error code is ${error.code}, message is ${error.message}`);
                expect(null).assertFail();
            });
        } catch (e) {
            console.error('ClearInvalidArgsTest fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
        }
        done();
    })

})
}
