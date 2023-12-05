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

export default function CloudSyncConfigCallback() {
    describe('CloudSyncConfigCallback', function () {
    /**
     * @tc.name EnabledCloudInvalidArgsCallbackTest
     * @tc.desc Test Js Api EnabledCloud with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
    it('EnabledCloudInvalidArgsCallbackTest', 0, async function (done) {
        console.info('EnabledCloudInvalidArgsCallbackTest');
        try {
            let account = "test_id";
            await cloudData.Config.enableCloud(account, null, function (err) {
                if (err == undefined) {
                    expect(null).assertFail();
                    console.info('EnabledCloudInvalidArgsCallbackTest enableCloud success');
                    done();
                    return;
                }
                console.error('EnabledCloudInvalidArgsCallbackTest enableCloud fail' + `, error code is ${err.code}, message is ${err.message}`);
                expect(null).assertFail();
                done();
            });
        } catch (e) {
            console.error('EnabledCloudInvalidArgsCallbackTest fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
            done();
        }
    })


    /**
     * @tc.name EnabledCloudInvalidArgsNumCallbackTest
     * @tc.desc Test Js Api EnabledCloud which parameters number are less
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
    it('EnabledCloudInvalidArgsNumCallbackTest', 0, function (done) {
        console.info('EnabledCloudInvalidArgsNumCallbackTest');
        try {
            let account = "test_id";
            cloudData.Config.enableCloud(account, function (err) {
                if (err == undefined) {
                    expect(null).assertFail();
                    console.info('EnabledCloudInvalidArgsNumCallbackTest enableCloud success');
                    done();
                    return;
                }
                console.error('EnabledCloudCallbackTest enableCloud fail' + `, error code is ${err.code}, message is ${err.message}`);
                expect(null).assertFail();
                done();
            });
        } catch (e) {
            console.error('EnabledCloudCallbackTest fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
            done();
        }
    })

    /**
     * @tc.name DisableCloudInvalidArgsCallbackTest
     * @tc.desc Test Js Api DisableCloud with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
    it('DisableCloudInvalidArgsCallbackTest', 0, function (done) {
        console.info('DisableCloudInvalidArgsCallbackTest');
        try {
            cloudData.Config.disableCloud(null, function (err) {
                if (err == undefined) {
                    expect(null).assertFail();
                    console.info('DisableCloudInvalidArgsCallbackTest disableCloud success');
                    done();
                    return;
                }
                console.error('DisableCloudInvalidArgsCallbackTest disableCloud fail' + `, error code is ${err.code}, message is ${err.message}`);
                expect(null).assertFail();
                done();
            });
        } catch (e) {
            console.error('DisableCloudInvalidArgsCallbackTest fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
            done();
        }
    })

    /**
     * @tc.name DisableCloudInvalidArgsNumsCallbackTest
     * @tc.desc Test Js Api DisableCloud which parameters number are less
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
    it('DisableCloudInvalidArgsNumsCallbackTest', 0, function (done) {
        console.info('DisableCloudInvalidArgsNumsCallbackTest');
        try {
            cloudData.Config.disableCloud(function (err) {
                if (err == undefined) {
                    expect(null).assertFail();
                    console.info('DisableCloudInvalidArgsNumsCallbackTest disableCloud success');
                    done();
                    return;
                }
                console.error('DisableCloudInvalidArgsNumsCallbackTest disableCloud fail' + `, error code is ${err.code}, message is ${err.message}`);
                expect(null).assertFail();
                done();
            });
        } catch (e) {
            console.error('DisableCloudInvalidArgsNumsCallbackTest fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
            done();
        }
    })

    /**
     * @tc.name ChangeAppCloudInvalidArgsCallbackTest
     * @tc.desc Test Js Api ChangeAppCloudSwitch with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
    it('ChangeAppCloudInvalidArgsCallbackTest', 0, function (done) {
        console.info('ChangeAppCloudInvalidArgsCallbackTest');
        try {
            let account = "test_id";
            let bundleName = "test_bundleName";
            cloudData.Config.changeAppCloudSwitch(account, bundleName, null, function (err) {
                if (err == undefined) {
                    expect(null).assertFail();
                    console.info('ChangeAppCloudInvalidArgsCallbackTest changeAppCloudSwitch success');
                    done();
                    return;
                }
                console.error('ChangeAppCloudInvalidArgsCallbackTest changeAppCloudSwitch fail' + `, error code is ${err.code}, message is ${err.message}`);
                expect(null).assertFail();
                done();
            });
        } catch (e) {
            console.error('ChangeAppCloudInvalidArgsCallbackTest fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
            done();
        }
    })

    /**
     * @tc.name ChangeAppCloudInvalidArgsNumsCallbackTest
     * @tc.desc Test Js Api ChangeAppCloudSwitch which parameters number are less
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
    it('ChangeAppCloudInvalidArgsNumsCallbackTest', 0, function (done) {
        console.info('ChangeAppCloudInvalidArgsNumsCallbackTest');
        try {
            let account = "test_id";
            let bundleName = "test_bundleName";
            cloudData.Config.changeAppCloudSwitch(account, bundleName, function (err) {
                if (err == undefined) {
                    expect(null).assertFail();
                    console.info('ChangeAppCloudInvalidArgsNumsCallbackTest changeAppCloudSwitch success');
                    done();
                    return;
                }
                console.error('ChangeAppCloudInvalidArgsNumsCallbackTest changeAppCloudSwitch fail' + `, error code is ${err.code}, message is ${err.message}`);
                expect(null).assertFail();
                done();
            });
        } catch (e) {
            console.error('ChangeAppCloudInvalidArgsNumsCallbackTest fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
            done();
        }
    })

    /**
     * @tc.name NotifyChangeInvalidArgsCallbackTest
     * @tc.desc Test Js Api NotifyChange with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
    it('NotifyChangeInvalidArgsCallbackTest', 0, function (done) {
        console.info('NotifyChangeInvalidArgsCallbackTest');
        try {
            let account = "test_id";
            cloudData.Config.notifyDataChange(account, null, function (err) {
                if (err == undefined) {
                    expect(null).assertFail();
                    console.info('NotifyChangeInvalidArgsCallbackTest notifyDataChange success');
                    done();
                    return;
                }
                console.error('NotifyChangeInvalidArgsCallbackTest notifyDataChange fail' + `, error code is ${err.code}, message is ${err.message}`);
                expect(null).assertFail();
                done();
            });
        } catch (e) {
            console.error('NotifyChangeInvalidArgsCallbackTest fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
            done();
        }
    })


    /**
     * @tc.name NotifyChangeInvalidArgsCallbackTest0200
     * @tc.desc Test Js Api NotifyChange with invalid args, account
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
     it('NotifyChangeInvalidArgsCallbackTest0200', 0, function (done) {
        console.info('NotifyChangeInvalidArgsCallbackTest0200');
        try {
            let bundleName = 'test_bundleName';
            cloudData.Config.notifyDataChange(null, bundleName, function (err) {
                if (err == undefined) {
                    expect(null).assertFail();
                    console.info('NotifyChangeInvalidArgsCallbackTest0200 notifyDataChange success');
                    done();
                    return;
                }
                console.error('NotifyChangeInvalidArgsCallbackTest0200 notifyDataChange fail' + `, error code is ${err.code}, message is ${err.message}`);
                expect(null).assertFail();
                done();
            });
        } catch (e) {
            console.error('NotifyChangeInvalidArgsCallbackTest0200 fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
            done();
        }
    })

    /**
     * @tc.name NotifyChangeInvalidArgsCallbackTest0300
     * @tc.desc Test Js Api NotifyChange with invalid args, bundleName
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
     it('NotifyChangeInvalidArgsCallbackTest0300', 0, function (done) {
        console.info('NotifyChangeInvalidArgsCallbackTest0300');
        try {
            let account = "test_id";
            let bundleName = 'test_bundleName';
            cloudData.Config.notifyDataChange(account, bundleName, function (err) {
                if (err == undefined) {
                    expect(null).assertFail();
                    console.info('NotifyChangeInvalidArgsCallbackTest0300 notifyDataChange success');
                    done();
                    return;
                }
                console.error('NotifyChangeInvalidArgsCallbackTest0300 notifyDataChange fail' + `, error code is ${err.code}, message is ${err.message}`);
                expect(err.code == 201).assertTrue();
                done();
            });
        } catch (e) {
            console.error('NotifyChangeInvalidArgsCallbackTest0300 fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(null).assertFail();
            done();
        }
    })

    /**
     * @tc.name NotifyChangeInvalidArgsNumsCallbackTest
     * @tc.desc Test Js Api NotifyChange which parameters number are less
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
    it('NotifyChangeInvalidArgsNumsCallbackTest', 0, function (done) {
        console.info('NotifyChangeInvalidArgsNumsCallbackTest');
        try {
            let account = "test_id";
            cloudData.Config.notifyDataChange(account, function (err) {
                if (err == undefined) {
                    expect(null).assertFail();
                    console.info('NotifyChangeInvalidArgsNumsCallbackTest notifyDataChange success');
                    done();
                    return;
                }
                console.error('NotifyChangeInvalidArgsNumsCallbackTest notifyDataChange fail' + `, error code is ${err.code}, message is ${err.message}`);
                expect(null).assertFail();
                done();
            });
        } catch (e) {
            console.error('NotifyChangeInvalidArgsNumsCallbackTest fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
            done();
        }
    })

    /**
     * @tc.name NotifyDataChangeInvalidArgsCallbackTest
     * @tc.desc Test Js Api NotifyDataChange with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
    it('NotifyDataChangeInvalidArgsCallbackTest', 0, function (done) {
        console.info('NotifyDataChangeInvalidArgsCallbackTest');
        try {
            cloudData.Config.notifyDataChange(null,  function(err) {
                if (err == undefined) {
                    expect(null).assertFail();
                    console.info('NotifyDataChangeInvalidArgsCallbackTest notifyDataChange success');
                    done();
                    return;
                }
                console.error('NotifyDataChangeInvalidArgsCallbackTest notifyDataChange fail' + `, error code is ${err.code}, message is ${err.message}`);
                expect(null).assertFail();
                done();
            });
        } catch (e) {
            console.error('NotifyDataChangeInvalidArgsCallbackTest fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
            done();
        }
    })

    /**
     * @tc.name NotifyDataChangeInvalidArgsCallbackTest0200
     * @tc.desc Test Js Api NotifyDataChange with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
     it('NotifyDataChangeInvalidArgsCallbackTest0200', 0, function (done) {
        console.info('NotifyDataChangeInvalidArgsCallbackTest0200');
        try {
            let eventId = "cloud_data_change";
            let extraData = '{header:"bbbbbb",data:"{"accountId":"aaa","bundleName":"com.bbb.xxx","containerName":"alias","recordTypes":"["xxx","yyy","zzz"]"}"}';

            cloudData.Config.notifyDataChange({eventId: eventId, extraData: extraData}, function(err) {
                if (err == undefined) {
                    expect(null).assertFail();
                    console.info('NotifyDataChangeInvalidArgsCallbackTest0200 notifyDataChange success');
                    done();
                    return;
                }
                console.error('NotifyDataChangeInvalidArgsCallbackTest0200 notifyDataChange fail' + `, error code is ${err.code}, message is ${err.message}`);
                expect(err.code == 201).assertTrue();
                done();
            });
        } catch (e) {
            console.error('NotifyDataChangeInvalidArgsCallbackTest0200 fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(null).assertFail();
            done();
        }
    })


    /**
     * @tc.name NotifyDataChangeInvalidArgsCallbackTest0300
     * @tc.desc Test Js Api NotifyDataChange with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
     it('NotifyDataChangeInvalidArgsCallbackTest0300', 0, function (done) {
        console.info('NotifyDataChangeInvalidArgsCallbackTest0300');
        try {
            let extraData = '{header:"bbbbbb",data:"{"accountId":"aaa","bundleName":"com.bbb.xxx","containerName":"alias","recordTypes":"["xxx","yyy","zzz"]"}"}';
            cloudData.Config.notifyDataChange({eventId: null, extraData: extraData}, function(err) {
                if (err == undefined) {
                    expect(null).assertFail();
                    console.info('NotifyDataChangeInvalidArgsCallbackTest0300 notifyDataChange success');
                    done();
                    return;
                }
                console.error('NotifyDataChangeInvalidArgsCallbackTest0300 notifyDataChange fail' + `, error code is ${err.code}, message is ${err.message}`);
                expect(null).assertFail();
                done();
            });
        } catch (e) {
            console.error('NotifyDataChangeInvalidArgsCallbackTest0300 fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
            done();
        }
    })

    /**
     * @tc.name NotifyDataChangeInvalidArgsCallbackTest0400
     * @tc.desc Test Js Api NotifyDataChange with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
     it('NotifyDataChangeInvalidArgsCallbackTest0400', 0, function (done) {
        console.info('NotifyDataChangeInvalidArgsCallbackTest0400');
        try {
            let eventId = "cloud_data_change";
            cloudData.Config.notifyDataChange({eventId: eventId, extraData: null}, function(err) {
                if (err == undefined) {
                    expect(null).assertFail();
                    console.info('NotifyDataChangeInvalidArgsCallbackTest0400 notifyDataChange success');
                    done();
                    return;
                }
                console.error('NotifyDataChangeInvalidArgsCallbackTest0400 notifyDataChange fail' + `, error code is ${err.code}, message is ${err.message}`);
                expect(null).assertFail();
                done();
            });
        } catch (e) {
            console.error('NotifyDataChangeInvalidArgsCallbackTest0400 fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
            done();
        }
    })

    /**
     * @tc.name NotifyDataChangeInvalidArgsCallbackTest0500
     * @tc.desc Test Js Api NotifyDataChange with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
     it('NotifyDataChangeInvalidArgsCallbackTest0500', 0, function (done) {
        console.info('NotifyDataChangeInvalidArgsCallbackTest0500');
        try {
            let eventId = "cloud_data_change";
            let extraData = '{header:"bbbbbb",data:"{"accountId":"aaa","bundleName":"com.bbb.xxx","containerName":"alias","recordTypes":"["xxx","yyy","zzz"]"}"}';
            let userId = 100;
            cloudData.Config.notifyDataChange({eventId: eventId, extraData: extraData}, userId, function(err) {
                if (err == undefined) {
                    expect(null).assertFail();
                    console.info('NotifyDataChangeInvalidArgsCallbackTest0500 notifyDataChange success');
                    done();
                    return;
                }
                console.error('NotifyDataChangeInvalidArgsCallbackTest0500 notifyDataChange fail' + `, error code is ${err.code}, message is ${err.message}`);
                expect(err.code == 201).assertTrue();
                done();
            });
        } catch (e) {
            console.error('NotifyDataChangeInvalidArgsCallbackTest0500 fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(null).assertFail();
            done();
        }
    })
    
    /**
     * @tc.name NotifyDataChangeInvalidArgsCallbackTest0600
     * @tc.desc Test Js Api NotifyDataChange with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
     it('NotifyDataChangeInvalidArgsCallbackTest0600', 0, function (done) {
        console.info('NotifyDataChangeInvalidArgsCallbackTest0600');
        try {
            let eventId = "cloud_data_change";
            let extraData = '{header:"bbbbbb",data:"{"accountId":"aaa","bundleName":"com.bbb.xxx","containerName":"alias","recordTypes":"["xxx","yyy","zzz"]"}"}';
            let userId = 100;
            cloudData.Config.notifyDataChange({eventId: null, extraData: extraData}, userId, function(err) {
                if (err == undefined) {
                    expect(null).assertFail();
                    console.info('NotifyDataChangeInvalidArgsCallbackTest0600 notifyDataChange success');
                    done();
                    return;
                }
                console.error('NotifyDataChangeInvalidArgsCallbackTest0600 notifyDataChange fail' + `, error code is ${err.code}, message is ${err.message}`);
                expect(null).assertFail();
                done();
            });
        } catch (e) {
            console.error('NotifyDataChangeInvalidArgsCallbackTest0600 fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
            done();
        }
    })

    /**
     * @tc.name NotifyDataChangeInvalidArgsCallbackTest0700
     * @tc.desc Test Js Api NotifyDataChange with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
     it('NotifyDataChangeInvalidArgsCallbackTest0700', 0, function (done) {
        console.info('NotifyDataChangeInvalidArgsCallbackTest0700');
        try {
            let eventId = "cloud_data_change";
            let extraData = '{header:"bbbbbb",data:"{"accountId":"aaa","bundleName":"com.bbb.xxx","containerName":"alias","recordTypes":"["xxx","yyy","zzz"]"}"}';
            let userId = 100;
            cloudData.Config.notifyDataChange({eventId: eventId, extraData: null}, userId, function(err) {
                if (err == undefined) {
                    expect(null).assertFail();
                    console.info('NotifyDataChangeInvalidArgsCallbackTest0700 notifyDataChange success');
                    done();
                    return;
                }
                console.error('NotifyDataChangeInvalidArgsCallbackTest0700 notifyDataChange fail' + `, error code is ${err.code}, message is ${err.message}`);
                expect(null).assertFail();
                done();
            });
        } catch (e) {
            console.error('NotifyDataChangeInvalidArgsCallbackTest0700 fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
            done();
        }
    })

    /**
     * @tc.name NotifyDataChangeInvalidArgsCallbackTest0800
     * @tc.desc Test Js Api NotifyDataChange with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
     it('NotifyDataChangeInvalidArgsCallbackTest0800', 0, function (done) {
        console.info('NotifyDataChangeInvalidArgsCallbackTest0800');
        try {
            let eventId = "cloud_data_change";
            let extraData = '{header:"bbbbbb",data:"{"accountId":"aaa","bundleName":"com.bbb.xxx","containerName":"alias","recordTypes":"["xxx","yyy","zzz"]"}"}';
            let userId = 100;
            cloudData.Config.notifyDataChange({eventId: eventId, extraData: extraData}, null, function(err) {
                if (err == undefined) {
                    expect(null).assertFail();
                    console.info('NotifyDataChangeInvalidArgsCallbackTest0800 notifyDataChange success');
                    done();
                    return;
                }
                console.error('NotifyDataChangeInvalidArgsCallbackTest0800 notifyDataChange fail' + `, error code is ${err.code}, message is ${err.message}`);
                expect(null).assertFail();
                done();
            });
        } catch (e) {
            console.error('NotifyDataChangeInvalidArgsCallbackTest0800 fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
            done();
        }
    })

    /**
     * @tc.name NotifyDataChangeInvalidArgsCallbackTest0900
     * @tc.desc Test Js Api NotifyDataChange with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
     it('NotifyDataChangeInvalidArgsCallbackTest0900', 0, function (done) {
        console.info('NotifyDataChangeInvalidArgsCallbackTest0900');
        try {
            let userId = 100;
            cloudData.Config.notifyDataChange({eventId: null, extraData: null}, userId, function(err) {
                if (err == undefined) {
                    expect(null).assertFail();
                    console.info('NotifyDataChangeInvalidArgsCallbackTest0900 notifyDataChange success');
                    done();
                    return;
                }
                console.error('NotifyDataChangeInvalidArgsCallbackTest0900 notifyDataChange fail' + `, error code is ${err.code}, message is ${err.message}`);
                expect(null).assertFail();
                done();
            });
        } catch (e) {
            console.error('NotifyDataChangeInvalidArgsCallbackTest0900 fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
            done();
        }
    })

    /**
     * @tc.name NotifyDataChangeInvalidArgsCallbackTest1000
     * @tc.desc Test Js Api NotifyDataChange with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
     it('NotifyDataChangeInvalidArgsCallbackTest1000', 0, function (done) {
        console.info('NotifyDataChangeInvalidArgsCallbackTest1000');
        try {
            let userId = 100;
            cloudData.Config.notifyDataChange(null, userId, function(err) {
                if (err == undefined) {
                    expect(null).assertFail();
                    console.info('NotifyDataChangeInvalidArgsCallbackTest1000 notifyDataChange success');
                    done();
                    return;
                }
                console.error('NotifyDataChangeInvalidArgsCallbackTest1000 notifyDataChange fail' + `, error code is ${err.code}, message is ${err.message}`);
                expect(null).assertFail();
                done();
            });
        } catch (e) {
            console.error('NotifyDataChangeInvalidArgsCallbackTest1000 fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
            done();
        }
    })

    /**
     * @tc.name NotifyDataChangeInvalidArgsCallbackTest1100
     * @tc.desc Test Js Api NotifyDataChange with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
     it('NotifyDataChangeInvalidArgsCallbackTest1100', 0, function (done) {
        console.info('NotifyDataChangeInvalidArgsCallbackTest1100');
        try {
            let userId = 100;
            cloudData.Config.notifyDataChange(userId, function(err) {
                if (err == undefined) {
                    expect(null).assertFail();
                    console.info('NotifyDataChangeInvalidArgsCallbackTest1100 notifyDataChange success');
                    done();
                    return;
                }
                console.error('NotifyDataChangeInvalidArgsCallbackTest1100 notifyDataChange fail' + `, error code is ${err.code}, message is ${err.message}`);
                expect(null).assertFail();
                done();
            });
        } catch (e) {
            console.error('NotifyDataChangeInvalidArgsCallbackTest1100 fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
            done();
        }
    })

    /**
     * @tc.name NotifyDataChangeInvalidArgsCallbackTest1200
     * @tc.desc Test Js Api NotifyDataChange with invalid args
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
     it('NotifyDataChangeInvalidArgsCallbackTest1200', 0, function (done) {
        console.info('NotifyDataChangeInvalidArgsCallbackTest1200');
        try {
            cloudData.Config.notifyDataChange(undefined, function(err) {
                if (err == undefined) {
                    expect(null).assertFail();
                    console.info('NotifyDataChangeInvalidArgsCallbackTest1200 notifyDataChange success');
                    done();
                    return;
                }
                console.error('NotifyDataChangeInvalidArgsCallbackTest1200 notifyDataChange fail' + `, error code is ${err.code}, message is ${err.message}`);
                expect(null).assertFail();
                done();
            });
        } catch (e) {
            console.error('NotifyDataChangeInvalidArgsCallbackTest1200 fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
            done();
        }
    })

    /**
     * @tc.name NotifyDataChangeInvalidArgsNumsCallbackTest
     * @tc.desc Test Js Api NotifyDataChange which parameters number are less
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
    it('NotifyDataChangeInvalidArgsNumsCallbackTest', 0, function (done) {
        console.info('NotifyDataChangeInvalidArgsNumsCallbackTest');
        try {
            cloudData.Config.notifyDataChange(function (err) {
                if (err == undefined) {
                    expect(null).assertFail();
                    console.info('NotifyChangeInvalidArgsNumsCallbackTest notifyDataChange success');
                    done();
                    return;
                }
                console.error('NotifyChangeInvalidArgsNumsCallbackTest notifyDataChange fail' + `, error code is ${err.code}, message is ${err.message}`);
                expect(null).assertFail();
                done();
            });
        } catch (e) {
            console.error('NotifyChangeInvalidArgsNumsCallbackTest fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
            done();
        }
    })

    /**
     * @tc.name ClearInvalidArgsNumsCallbackTest
     * @tc.desc Test Js Api Clear which parameters number are less
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
    it('ClearInvalidArgsNumsCallbackTest', 0, function (done) {
        console.info('ClearInvalidArgsNumsCallbackTest');
        try {
            let account = "test_id";
            cloudData.Config.clear(account, function (err) {
                if (err == undefined) {
                    expect(null).assertFail();
                    console.info('ClearInvalidArgsNumsCallbackTest clear success');
                    done();
                    return;
                }
                console.error('ClearInvalidArgsNumsCallbackTest clear fail' + `, error code is ${err.code}, message is ${err.message}`);
                expect(null).assertFail();
                done();
            });
        } catch (e) {
            console.error('ClearInvalidArgsNumsCallbackTest fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
            done();
        }
    })

    /**
     * @tc.name ClearInvalidArgsCallbackTest
     * @tc.desc Test Js Api Clear which parameters are invalid
     * @tc.type: FUNC
     * @tc.require: issueNumber
     */
    it('ClearInvalidArgsCallbackTest', 0, function (done) {
        console.info('ClearInvalidArgsNumsCallbackTest');
        try {
            let account = "test_id";
            let bundleName1 = "test_bundleName1";
            let appActions = {[bundleName1]: 3};
            cloudData.Config.clear(account, appActions, function (err) {
                if (err == undefined) {
                    expect(null).assertFail();
                    console.info('CleanInvalidArgsCallbackTest clear success');
                    done();
                    return;
                }
                console.error('ClearInvalidArgsCallbackTest clear fail' + `, error code is ${err.code}, message is ${err.message}`);
                expect(null).assertFail();
                done();
            });
        } catch (e) {
            console.error('ClearInvalidArgsCallbackTest fail' + `, error code is ${e.code}, message is ${e.message}`);
            expect(e.code == 401).assertTrue();
            done();
        }
    })
    })
}