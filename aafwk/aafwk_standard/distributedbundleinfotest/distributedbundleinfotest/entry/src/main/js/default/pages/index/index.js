/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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

import featureAbility from '@ohos.ability.featureability'
import bundle from '@ohos.bundle'
import RemoteDeviceModel from '../../../test/RemoteDevice.js'
import { Core, ExpectExtend, ReportExtend } from 'deccjsunit/index'

const PATH = "/data/";
const HAP1 = "DistributedInfoFirstStage.hap";
const HAP2 = "DistributedInfoSecondStage.hap";
const HAP3 = "DistributedInfoThirdStage.hap";
const NAME = "com.acts.distributedinfo";
var DEVICE_LIST_LOCALHOST;

function CheckBundleBaseInfo(data) {
    if ((data.name == "com.acts.distributedinfo") &&
        (data.version == 1) &&
        (data.versionCode == 1) &&
        (data.versionName == "1.0") &&
        (data.compatibleVersion == 4) &&
        (data.targetVersion == 5) &&
        (data.minCompatibleVersionCode == 1) &&
        (data.appId == "com.acts.distributedinfo_BEArN65PUQRAS/rAaHZ+5vAfPL1e63CRO5ciMdfSHnF416BtxAIF1S" +
            "t1gPXFgJdkIHMSuRgqfyhAgic127YvLMU=") &&
        (data.mainAbility == "")
    ) {
        return 0;
    } else {
        return -1;
    }
}

function CheckBundleInfo(data, checkHap1, checkHap2, checkHap3) {
    var checkNums = 0;
    var userInfos = data.userInfos;
    var baseInfoCheckResult = CheckBundleBaseInfo(data);

    if (baseInfoCheckResult != 0) {
        console.info("baseInfo check fail");
        return -1;
    }

    if ((userInfos.length == 1) &&
        (userInfos[0].userId == 0) &&
        (userInfos[0].enable == true)) {
        console.info("userInfo check pass");
    } else {
        console.info("userInfo check fail");
        return -1;
    }

    if (checkHap1) {
        if (userInfos[0].enabledAbilities[0] != "com.acts.distributedinfo.first.MainAbility") {
            console.info("hap1 check fail");
            return -1;
        }
        checkNums++;
    }
    if (checkHap2) {
        if (userInfos[0].enabledAbilities[1] != "com.acts.distributedinfo.second.MainAbility") {
            console.info("hap2 check fail");
            return -1;
        }
        checkNums++;
    }
    if (checkHap3) {
        if (userInfos[0].enabledAbilities[2] != "com.acts.distributedinfo.third.MainAbility") {
            console.info("hap3 check fail");
            return -1;
        }
        checkNums++;
    }

    if (userInfos[0].enabledAbilities.length != checkNums) {
        console.info("hap nums check fail");
        return -1;
    }
    return 0;
}

function CheckBundleInfoNull(data) {

    if ((data == undefined) || (data == "type mismatch")) {
        return 0;
    } else {
        return -1;
    }
}

function CheckSelfBundleBaseInfo(data) {
    if ((data.name == "com.acts.distributedinfo") &&
        (data.appId == "com.acts.distributedinfo_BEArN65PUQRAS/rAaHZ+5vAfPL1e63CRO5ciMdfSHnF416BtxA" +
            "IF1St1gPXFgJdkIHMSuRgqfyhAgic127YvLMU=") &&
        (data.appInfo.name == "com.acts.distributedinfo") &&
        (data.appInfo.moduleSourceDirs.length == 2) &&
        (data.appInfo.moduleSourceDirs[0] == "/data/accounts/account_0/applications/" +
            "com.acts.distributedinfo/com.acts.distributedinfo.first") &&
        (data.appInfo.moduleSourceDirs[1] == "/data/accounts/account_0/applications/" +
            "com.acts.distributedinfo/com.acts.distributedinfo.second")) {
        return 0;
    } else {
        return -1;
    }
}

export default {
    data: {
        title: "distributed Test",
        logmessage: "distributed test: ver 0.1 \n",
        deviceId: '',
        remoteDeviceId: '',
        deviceList: [],
        remoteDeviceModel: new RemoteDeviceModel()
    },
    onInit() {
        this.title = "DistributedInfo Test";
        this.logmessage = "DistributedInfo Test ver 0.1: \n";
        DEVICE_LIST_LOCALHOST = {
            id: 'localhost',
        };
        this.deviceList = [DEVICE_LIST_LOCALHOST];
    },
    onReady() {
    },
    async installHap1() {
        let installData = await bundle.getBundleInstaller();
        installData.install([PATH + HAP1], {
            userId: 0,
            installFlag: 0,
            isKeepData: false
        }, async (err, data) => {
            if (0 == err.code) {
                this.logmessage += "installHap1 success \n";
            } else {
                this.logmessage += "installHap1 failed \n";
            }
            console.log("installHap1 err code = " + err.code);
        });
    },
    async installHap2() {
        let installData = await bundle.getBundleInstaller();
        installData.install([PATH + HAP2], {
            userId: 0,
            installFlag: 0,
            isKeepData: false
        }, async (err, data) => {
            if (0 == err.code) {
                this.logmessage += "installHap2 success \n";
            } else {
                this.logmessage += "installHap2 failed \n";
            }
            console.log("installHap1 err code = " + err.code);
        });
    },
    async installHap3() {
        let installData = await bundle.getBundleInstaller();
        installData.install([PATH + HAP3], {
            userId: 0,
            installFlag: 0,
            isKeepData: false
        }, async (err, data) => {
            if (0 == err.code) {
                this.logmessage += "installHap3 success \n";
            } else {
                this.logmessage += "installHap3 failed \n";
            }
            console.log("installHap1 err code = " + err.code);
        });
    },
    async uninstallHap() {
        let installData = await bundle.getBundleInstaller();
        installData.uninstall(NAME, {
            userId: 0,
            installFlag: 0,
            isKeepData: false
        }, (err, data) => {
            if (0 == err.code) {
                this.logmessage += "uninstall success \n";
            } else {
                this.logmessage += "uninstall failed \n";
            }
        });
    },
    GetNetWorkId() {
        console.info('registerDeviceList onClickRegisterDeviceList');
        let self = this;
        this.remoteDeviceModel.registerDeviceListCallback(() => {
            console.info('registerDeviceListCallback, callback entered');
            var deviceList = self.remoteDeviceModel.deviceList;
            if (deviceList.length > 0) {
                this.logmessage += "remote networkid = ";
                this.logmessage += deviceList[0].deviceId;
                this.logmessage += " \n";
                this.remoteDeviceId = deviceList[0].deviceId;
                console.info('GetNetWorkId success id:' + deviceList[0].deviceId);
            } else {
                this.remoteDeviceId = "";
                this.logmessage += "get remote deviceid failed, remote id clear \n";
                console.info('GetNetWorkId failed');
            }
        });
    },

    /*
     * @tc.number: ACTS_DistributedBundleInfo_0100
     * @tc.name: check bundle info before connected
     * @tc.desc: check distributed bundle info before connected.
     */
    async ACTS_DistributedBundleInfo_0100() {
        var userInfos;
        let options = {
            "userId": 0,
            "networkId": this.remoteDeviceId
        };
        try {
            bundle.getBundleInfo('com.acts.distributedinfo', 0, options, (err, data) => {
                console.info("ACTS_DistributedBundleInfo_0100 callback begins");
                console.info("ACTS_DistributedBundleInfo_0100 callback data.json:" + JSON.stringify(data));
                console.info("ACTS_DistributedBundleInfo_0100 err:" + err);
                console.info("ACTS_DistributedBundleInfo_0100 data.name:" + data.name);
                if ((err == 0) && (CheckBundleInfo(data, true, true, true) == 0)) {
                    this.logmessage += "ACTS_DistributedBundleInfo_0100 CallBack Success ";
                    this.logmessage += " \n";
                    console.info("ACTS_DistributedBundleInfo_0100 CallBack pass");
                } else {
                    this.logmessage += "ACTS_DistributedBundleInfo_0100 CallBack Fail ";
                    this.logmessage += " \n";
                    console.info("ACTS_DistributedBundleInfo_0100 CallBack fail");
                }
            });

            let data = await bundle.getBundleInfo('com.acts.distributedinfo', 0, options);
            console.info("ACTS_DistributedBundleInfo_0100 promise finished");
            console.info("ACTS_DistributedBundleInfo_0100 promise data.json:" + JSON.stringify(data));

            if (CheckBundleInfo(data, true, true, true) == 0) {
                this.logmessage += "ACTS_DistributedBundleInfo_0100 Promise Success ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_0100 Promise pass");
            } else {
                this.logmessage += "ACTS_DistributedBundleInfo_0100 Promise Fail ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_0100 Promise fail");
            }
        } catch (err) {
            console.info("ACTS_DistributedBundleInfo_0100: err" + err);
            this.logmessage += "exception catched \n";
        }
    },

    /*
     * @tc.number: ACTS_DistributedBundleInfo_0200
     * @tc.name: install bundle after connected
     * @tc.desc: install bundle after connected and check remote bundle info.
     */
    async ACTS_DistributedBundleInfo_0200() {
        let options = {
            "userId": 0,
            "networkId": this.remoteDeviceId
        };
        try {
            bundle.getBundleInfo('com.acts.distributedinfo', 0, options, (err, data) => {
                console.info("ACTS_DistributedBundleInfo_0200 callback begins");
                console.info("ACTS_DistributedBundleInfo_0200 callback data.json:" + JSON.stringify(data));
                console.info("ACTS_DistributedBundleInfo_0200 err:" + err);
                console.info("ACTS_DistributedBundleInfo_0200 data.name:" + data.name);
                if ((err == 0) && (CheckBundleInfo(data, true, false, false) == 0)) {
                    this.logmessage += "ACTS_DistributedBundleInfo_0200 CallBack Success ";
                    this.logmessage += " \n";
                    console.info("ACTS_DistributedBundleInfo_0200 CallBack pass");
                } else {
                    this.logmessage += "ACTS_DistributedBundleInfo_0200 CallBack Fail ";
                    this.logmessage += " \n";
                    console.info("ACTS_DistributedBundleInfo_0200 CallBack fail");
                }
            });

            let data = await bundle.getBundleInfo('com.acts.distributedinfo', 0, options);
            console.info("ACTS_DistributedBundleInfo_0200 promise finished");
            console.info("ACTS_DistributedBundleInfo_0200 promise data.json:" + JSON.stringify(data));

            if (CheckBundleInfo(data, true, false, false) == 0) {
                this.logmessage += "ACTS_DistributedBundleInfo_0200 Promise Success ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_0200 Promise pass");
            } else {
                this.logmessage += "ACTS_DistributedBundleInfo_0200 Promise Fail ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_0200 Promise fail");
            }
        } catch (err) {
            console.info("ACTS_DistributedBundleInfo_0200: err" + err);
            this.logmessage += "exception catched \n";
        }
    },

    /*
     * @tc.number: ACTS_DistributedBundleInfo_0300_1
     * @tc.name: install bundle after connected
     * @tc.desc: install bundle after connected and check remote bundle info.
     */
    async ACTS_DistributedBundleInfo_0300_1() {
        let options = {
            "userId": 0,
            "networkId": this.remoteDeviceId
        };
        try {
            bundle.getBundleInfo('com.acts.distributedinfo', 0, options, (err, data) => {
                console.info("ACTS_DistributedBundleInfo_0300_1 callback begins");
                console.info("ACTS_DistributedBundleInfo_0300_1 callback data.json:" + JSON.stringify(data));
                console.info("ACTS_DistributedBundleInfo_0300_1 err:" + err);
                console.info("ACTS_DistributedBundleInfo_0300_1 data.name:" + data.name);
                if ((err == 0) && (CheckBundleInfo(data, true, false, false) == 0)) {
                    this.logmessage += "ACTS_DistributedBundleInfo_0300_1 CallBack Success ";
                    this.logmessage += " \n";
                    console.info("ACTS_DistributedBundleInfo_0300_1 CallBack pass");
                } else {
                    this.logmessage += "ACTS_DistributedBundleInfo_0300_1 CallBack Fail ";
                    this.logmessage += " \n";
                    console.info("ACTS_DistributedBundleInfo_0300_1 CallBack fail");
                }
            });

            let data = await bundle.getBundleInfo('com.acts.distributedinfo', 0, options);
            console.info("ACTS_DistributedBundleInfo_0300_1 promise finished");
            console.info("ACTS_DistributedBundleInfo_0300_1 promise data.json:" + JSON.stringify(data));

            if (CheckBundleInfo(data, true, false, false) == 0) {
                this.logmessage += "ACTS_DistributedBundleInfo_0300_1 Promise Success ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_0300_1 Promise pass");
            } else {
                this.logmessage += "ACTS_DistributedBundleInfo_0300_1 Promise Fail ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_0300_1 Promise fail");
            }
        } catch (err) {
            console.info("ACTS_DistributedBundleInfo_0300_1: err" + err);
            this.logmessage += "exception catched \n";
        }
    },

    /*
     * @tc.number: ACTS_DistributedBundleInfo_0300_2
     * @tc.name: install bundle after connected
     * @tc.desc: install bundle after connected and check remote bundle info.
     */
    async ACTS_DistributedBundleInfo_0300_2() {
        let options = {
            "userId": 0,
            "networkId": this.remoteDeviceId
        };
        try {
            bundle.getBundleInfo('com.acts.distributedinfo', 0, options, (err, data) => {
                console.info("ACTS_DistributedBundleInfo_0300_2 callback begins");
                console.info("ACTS_DistributedBundleInfo_0300_2 callback data.json:" + JSON.stringify(data));
                console.info("ACTS_DistributedBundleInfo_0300_2 err:" + err);
                console.info("ACTS_DistributedBundleInfo_0300_2 data.name:" + data.name);
                if ((err == 0) && (CheckBundleInfo(data, true, true, false) == 0)) {
                    this.logmessage += "ACTS_DistributedBundleInfo_0300_2 CallBack Success ";
                    this.logmessage += " \n";
                    console.info("ACTS_DistributedBundleInfo_0300_2 CallBack pass");
                } else {
                    this.logmessage += "ACTS_DistributedBundleInfo_0300_2 CallBack Fail ";
                    this.logmessage += " \n";
                    console.info("ACTS_DistributedBundleInfo_0300_2 CallBack fail");
                }
            });

            let data = await bundle.getBundleInfo('com.acts.distributedinfo', 0, options);
            console.info("ACTS_DistributedBundleInfo_0300_2 promise finished");
            console.info("ACTS_DistributedBundleInfo_0300_2 promise data.json:" + JSON.stringify(data));

            if (CheckBundleInfo(data, true, true, false) == 0) {
                this.logmessage += "ACTS_DistributedBundleInfo_0300_2 Promise Success ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_0300_2 Promise pass");
            } else {
                this.logmessage += "ACTS_DistributedBundleInfo_0300_2 Promise Fail ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_0300_2 Promise fail");
            }
        } catch (err) {
            console.info("ACTS_DistributedBundleInfo_0300_2: err" + err);
            this.logmessage += "exception catched \n";
        }
    },

    /*
     * @tc.number: ACTS_DistributedBundleInfo_0400_1
     * @tc.name: install bundle after connected
     * @tc.desc: install bundle after connected and check remote bundle info.
     */
    async ACTS_DistributedBundleInfo_0400_1() {
        let options = {
            "userId": 0,
            "networkId": this.remoteDeviceId
        };
        try {
            bundle.getBundleInfo('com.acts.distributedinfo', 0, options, (err, data) => {
                console.info("ACTS_DistributedBundleInfo_0400_1 callback begins");
                console.info("ACTS_DistributedBundleInfo_0400_1 callback data.json:" + JSON.stringify(data));
                console.info("ACTS_DistributedBundleInfo_0400_1 err:" + err);
                console.info("ACTS_DistributedBundleInfo_0400_1 data.name:" + data.name);
                if ((err == 0) && (CheckBundleInfo(data, true, false, false) == 0)) {
                    this.logmessage += "ACTS_DistributedBundleInfo_0400_1 CallBack Success ";
                    this.logmessage += " \n";
                    console.info("ACTS_DistributedBundleInfo_0400_1 CallBack pass");
                } else {
                    this.logmessage += "ACTS_DistributedBundleInfo_0400_1 CallBack Fail ";
                    this.logmessage += " \n";
                    console.info("ACTS_DistributedBundleInfo_0400_1 CallBack fail");
                }
            });

            let data = await bundle.getBundleInfo('com.acts.distributedinfo', 0, options);
            console.info("ACTS_DistributedBundleInfo_0400_1 promise finished");
            console.info("ACTS_DistributedBundleInfo_0400_1 promise data.json:" + JSON.stringify(data));

            if (CheckBundleInfo(data, true, false, false) == 0) {
                this.logmessage += "ACTS_DistributedBundleInfo_0400_1 Promise Success ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_0400_1 Promise pass");
            } else {
                this.logmessage += "ACTS_DistributedBundleInfo_0400_1 Promise Fail ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_0400_1 Promise fail");
            }
        } catch (err) {
            console.info("ACTS_DistributedBundleInfo_0400_1: err" + err);
            this.logmessage += "exception catched \n";
        }
    },

    /*
     * @tc.number: ACTS_DistributedBundleInfo_0400_2
     * @tc.name: uninstall bundle after connected
     * @tc.desc: uninstall bundle after connected and check remote bundle info.
     */
    async ACTS_DistributedBundleInfo_0400_2() {
        let options = {
            "userId": 0,
            "networkId": this.remoteDeviceId
        };
        var promisePassFlag = false;

        bundle.getBundleInfo('com.acts.distributedinfo', 0, options, (err, data) => {
            console.info("ACTS_DistributedBundleInfo_0400_2 callback begins");
            console.info("ACTS_DistributedBundleInfo_0400_2 callback data.json:" + JSON.stringify(data));
            console.info("ACTS_DistributedBundleInfo_0400_2 err:" + err);
            if ((err == 1) && (CheckBundleInfoNull(data) == 0)) {
                this.logmessage += "ACTS_DistributedBundleInfo_0400_2 CallBack Success ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_0400_2 CallBack pass");
            } else {
                this.logmessage += "ACTS_DistributedBundleInfo_0400_2 CallBack Fail ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_0400_2 CallBack fail");
            }
        });

        try {
            let data = await bundle.getBundleInfo('com.acts.distributedinfo', 0, options);
        } catch (err) {
            if (err == 1) {
                this.logmessage += "ACTS_DistributedBundleInfo_0400_2 Promise Success ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_0400_2 Promise pass");
                promisePassFlag = true;
            }
        }

        if (!promisePassFlag) {
            this.logmessage += "ACTS_DistributedBundleInfo_0400_2 Promise Fail ";
            this.logmessage += " \n";
            console.info("ACTS_DistributedBundleInfo_0400_2 Promise fail");
        }
    },

    /*
     * @tc.number: ACTS_DistributedBundleInfo_0500
     * @tc.name: install bundle after connected
     * @tc.desc: install bundle after connected and check remote bundle info.
     */
    async ACTS_DistributedBundleInfo_0500() {
        let options = {
            "userId": 0,
            "networkId": this.remoteDeviceId
        };
        try {
            bundle.getBundleInfo('com.acts.distributedinfo', 0, options, (err, data) => {
                console.info("ACTS_DistributedBundleInfo_0500 callback begins");
                console.info("ACTS_DistributedBundleInfo_0500 callback data.json:" + JSON.stringify(data));
                console.info("ACTS_DistributedBundleInfo_0500 err:" + err);
                console.info("ACTS_DistributedBundleInfo_0500 data.name:" + data.name);
                if ((err == 0) && (CheckBundleInfo(data, true, true, false) == 0)) {
                    this.logmessage += "ACTS_DistributedBundleInfo_0500 CallBack Success ";
                    this.logmessage += " \n";
                    console.info("ACTS_DistributedBundleInfo_0500 CallBack pass");
                } else {
                    this.logmessage += "ACTS_DistributedBundleInfo_0500 CallBack Fail ";
                    this.logmessage += " \n";
                    console.info("ACTS_DistributedBundleInfo_0500 CallBack fail");
                }
            });

            let data = await bundle.getBundleInfo('com.acts.distributedinfo', 0, options);
            console.info("ACTS_DistributedBundleInfo_0500 promise finished");
            console.info("ACTS_DistributedBundleInfo_0500 promise data.json:" + JSON.stringify(data));

            if (CheckBundleInfo(data, true, true, false) == 0) {
                this.logmessage += "ACTS_DistributedBundleInfo_0500 Promise Success ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_0500 Promise pass");
            } else {
                this.logmessage += "ACTS_DistributedBundleInfo_0500 Promise Fail ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_0500 Promise fail");
            }
        } catch (err) {
            console.info("ACTS_DistributedBundleInfo_0500: err" + err);
            this.logmessage += "exception catched \n";
        }
    },

    /*
     * @tc.number: ACTS_DistributedBundleInfo_0600_1
     * @tc.name: install bundle after connected
     * @tc.desc: install bundle after connected and check remote bundle info.
     */
    async ACTS_DistributedBundleInfo_0600_1() {
        let options = {
            "userId": 0,
            "networkId": this.remoteDeviceId
        };
        try {
            bundle.getBundleInfo('com.acts.distributedinfo', 0, options, (err, data) => {
                console.info("ACTS_DistributedBundleInfo_0600_1 callback begins");
                console.info("ACTS_DistributedBundleInfo_0600_1 callback data.json:" + JSON.stringify(data));
                console.info("ACTS_DistributedBundleInfo_0600_1 err:" + err);
                console.info("ACTS_DistributedBundleInfo_0600_1 data.name:" + data.name);
                if ((err == 0) && (CheckBundleInfo(data, true, true, false) == 0)) {
                    this.logmessage += "ACTS_DistributedBundleInfo_0600_1 CallBack Success ";
                    this.logmessage += " \n";
                    console.info("ACTS_DistributedBundleInfo_0600_1 CallBack pass");
                } else {
                    this.logmessage += "ACTS_DistributedBundleInfo_0600_1 CallBack Fail ";
                    this.logmessage += " \n";
                    console.info("ACTS_DistributedBundleInfo_0600_1 CallBack fail");
                }
            });

            let data = await bundle.getBundleInfo('com.acts.distributedinfo', 0, options);
            console.info("ACTS_DistributedBundleInfo_0600_1 promise finished");
            console.info("ACTS_DistributedBundleInfo_0600_1 promise data.json:" + JSON.stringify(data));

            if (CheckBundleInfo(data, true, true, false) == 0) {
                this.logmessage += "ACTS_DistributedBundleInfo_0600_1 Promise Success ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_0600_1 Promise pass");
            } else {
                this.logmessage += "ACTS_DistributedBundleInfo_0600_1 Promise Fail ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_0600_1 Promise fail");
            }
        } catch (err) {
            console.info("ACTS_DistributedBundleInfo_0600_1: err" + err);
            this.logmessage += "exception catched \n";
        }
    },

    /*
    * @tc.number: ACTS_DistributedBundleInfo_0600_2
    * @tc.name: install bundle after connected
    * @tc.desc: install bundle after connected and fail to check remote bundle info.
    */
    async ACTS_DistributedBundleInfo_0600_2() {
        let options = {
            "userId": 0,
            "networkId": this.remoteDeviceId
        };
        var promisePassFlag = false;

        bundle.getBundleInfo('com.acts.distributedinfo', 0, options, (err, data) => {
            console.info("ACTS_DistributedBundleInfo_0600_2 callback begins");
            console.info("ACTS_DistributedBundleInfo_0600_2 callback data.json:" + JSON.stringify(data));
            console.info("ACTS_DistributedBundleInfo_0600_2 err:" + err);
            if ((err == 1) && (CheckBundleInfoNull(data) == 0)) {
                this.logmessage += "ACTS_DistributedBundleInfo_0600_2 CallBack Success ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_0600_2 CallBack pass");
            } else {
                this.logmessage += "ACTS_DistributedBundleInfo_0600_2 CallBack Fail ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_0600_2 CallBack fail");
            }
        });

        try {
            let data = await bundle.getBundleInfo('com.acts.distributedinfo', 0, options);
        } catch (err) {
            if (err == 1) {
                this.logmessage += "ACTS_DistributedBundleInfo_0600_2 Promise Success ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_0600_2 Promise pass");
                promisePassFlag = true;
            }
        }

        if (!promisePassFlag) {
            this.logmessage += "ACTS_DistributedBundleInfo_0600_2 Promise Fail ";
            this.logmessage += " \n";
            console.info("ACTS_DistributedBundleInfo_0600_2 Promise fail");
        }
    },

    /*
     * @tc.number: ACTS_DistributedBundleInfo_0700
     * @tc.name: install bundle after connected
     * @tc.desc: install bundle after connected and check self bundle info with param abnormal.
     */
    async ACTS_DistributedBundleInfo_0700() {
        let options = {
            "userId": 0,
            "networkId": null
        };
        try {
            bundle.getBundleInfo('com.acts.distributedinfo', 0, options, (err, data) => {
                console.info("ACTS_DistributedBundleInfo_0700 callback begins");
                console.info("ACTS_DistributedBundleInfo_0700 callback data.json:" + JSON.stringify(data));
                console.info("ACTS_DistributedBundleInfo_0700 err:" + err);
                console.info("ACTS_DistributedBundleInfo_0700 data.name:" + data.name);
                if ((err == 0) && (CheckSelfBundleBaseInfo(data) == 0)) {
                    this.logmessage += "ACTS_DistributedBundleInfo_0700 CallBack Success ";
                    this.logmessage += " \n";
                    console.info("ACTS_DistributedBundleInfo_0700 CallBack pass");
                } else {
                    this.logmessage += "ACTS_DistributedBundleInfo_0700 CallBack Fail ";
                    this.logmessage += " \n";
                    console.info("ACTS_DistributedBundleInfo_0700 CallBack fail");
                }
            });

            let data = await bundle.getBundleInfo('com.acts.distributedinfo', 0, options);
            console.info("ACTS_DistributedBundleInfo_0700 promise finished");
            console.info("ACTS_DistributedBundleInfo_0700 promise data.json:" + JSON.stringify(data));

            if (CheckSelfBundleBaseInfo(data) == 0) {
                this.logmessage += "ACTS_DistributedBundleInfo_0700 Promise Success ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_0700 Promise pass");
            } else {
                this.logmessage += "ACTS_DistributedBundleInfo_0700 Promise Fail ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_0700 Promise fail");
            }
        } catch (err) {
            console.info("ACTS_DistributedBundleInfo_0700: err" + err);
            this.logmessage += "exception catched \n";
        }
    },

    /*
     * @tc.number: ACTS_DistributedBundleInfo_0800
     * @tc.name: install bundle after connected
     * @tc.desc: install bundle after connected and check self bundle info with param abnormal.
     */
    async ACTS_DistributedBundleInfo_0800() {
        let options = {
            "userId": 0,
            "networkId": ""
        };
        try {
            bundle.getBundleInfo('com.acts.distributedinfo', 0, options, (err, data) => {
                console.info("ACTS_DistributedBundleInfo_0800 callback begins");
                console.info("ACTS_DistributedBundleInfo_0800 callback data.json:" + JSON.stringify(data));
                console.info("ACTS_DistributedBundleInfo_0800 err:" + err);
                console.info("ACTS_DistributedBundleInfo_0800 data.name:" + data.name);
                if ((err == 0) && (CheckSelfBundleBaseInfo(data) == 0)) {
                    this.logmessage += "ACTS_DistributedBundleInfo_0800 CallBack Success ";
                    this.logmessage += " \n";
                    console.info("ACTS_DistributedBundleInfo_0800 CallBack pass");
                } else {
                    this.logmessage += "ACTS_DistributedBundleInfo_0800 CallBack Fail ";
                    this.logmessage += " \n";
                    console.info("ACTS_DistributedBundleInfo_0800 CallBack fail");
                }
            });

            let data = await bundle.getBundleInfo('com.acts.distributedinfo', 0, options);
            console.info("ACTS_DistributedBundleInfo_0800 promise finished");
            console.info("ACTS_DistributedBundleInfo_0800 promise data.json:" + JSON.stringify(data));

            if (CheckSelfBundleBaseInfo(data) == 0) {
                this.logmessage += "ACTS_DistributedBundleInfo_0800 Promise Success ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_0800 Promise pass");
            } else {
                this.logmessage += "ACTS_DistributedBundleInfo_0800 Promise Fail ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_0800 Promise fail");
            }
        } catch (err) {
            console.info("ACTS_DistributedBundleInfo_0800: err" + err);
            this.logmessage += "exception catched \n";
        }
    },

    /*
     * @tc.number: ACTS_DistributedBundleInfo_0900
     * @tc.name: install bundle after connected
     * @tc.desc: install bundle after connected and check self bundle info with param abnormal.
     */
    async ACTS_DistributedBundleInfo_0900() {
        let options = {
            "userId": 0,
            "networkId": undefined
        };
        try {
            bundle.getBundleInfo('com.acts.distributedinfo', 0, options, (err, data) => {
                console.info("ACTS_DistributedBundleInfo_0900 callback begins");
                console.info("ACTS_DistributedBundleInfo_0900 callback data.json:" + JSON.stringify(data));
                console.info("ACTS_DistributedBundleInfo_0900 err:" + err);
                console.info("ACTS_DistributedBundleInfo_0900 data.name:" + data.name);
                if ((err == 0) && (CheckSelfBundleBaseInfo(data) == 0)) {
                    this.logmessage += "ACTS_DistributedBundleInfo_0900 CallBack Success ";
                    this.logmessage += " \n";
                    console.info("ACTS_DistributedBundleInfo_0900 CallBack pass");
                } else {
                    this.logmessage += "ACTS_DistributedBundleInfo_0900 CallBack Fail ";
                    this.logmessage += " \n";
                    console.info("ACTS_DistributedBundleInfo_0900 CallBack fail");
                }
            });

            let data = await bundle.getBundleInfo('com.acts.distributedinfo', 0, options);
            console.info("ACTS_DistributedBundleInfo_0900 promise finished");
            console.info("ACTS_DistributedBundleInfo_0900 promise data.json:" + JSON.stringify(data));

            if (CheckSelfBundleBaseInfo(data) == 0) {
                this.logmessage += "ACTS_DistributedBundleInfo_0900 Promise Success ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_0900 Promise pass");
            } else {
                this.logmessage += "ACTS_DistributedBundleInfo_0900 Promise Fail ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_0900 Promise fail");
            }
        } catch (err) {
            console.info("ACTS_DistributedBundleInfo_0900: err" + err);
            this.logmessage += "exception catched \n";
        }
    },

    /*
     * @tc.number: ACTS_DistributedBundleInfo_1000_to_1200
     * @tc.name: install bundle after connected
     * @tc.desc: install bundle after connected and check return err with param abnormal.
     */
    async ACTS_DistributedBundleInfo_1000_to_1200() {
        let options = {
            "userId": 0,
            "networkId": this.remoteDeviceId
        };
        var promisePassFlag = false;

        bundle.getBundleInfo(null, 0, options, (err, data) => {
            console.info("ACTS_DistributedBundleInfo_1000 callback data.json:" + JSON.stringify(data));
            console.info("ACTS_DistributedBundleInfo_1000 callback err.json:" + JSON.stringify(err));
            if ((CheckBundleInfoNull(data) == 0) && (err == 1)) {
                this.logmessage += "ACTS_DistributedBundleInfo_1000 CallBack Success ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_1000 CallBack pass");
            } else {
                this.logmessage += "ACTS_DistributedBundleInfo_1000 CallBack Fail ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_1000 CallBack fail");
            }
        });

        console.info("ACTS_DistributedBundleInfo_1000 promise test");
        try {
            let data = await bundle.getBundleInfo(null, 0, options);
            console.info("ACTS_DistributedBundleInfo_1000 promise data.json:" + JSON.stringify(data));
        } catch (err) {
            this.logmessage += "ACTS_DistributedBundleInfo_1000 promise success ";
            this.logmessage += " \n";
            console.info("ACTS_DistributedBundleInfo_1000 promise success");
            promisePassFlag = true;
        }

        if (!promisePassFlag) {
            this.logmessage += "ACTS_DistributedBundleInfo_1000 promise fail ";
            this.logmessage += " \n";
            console.info("ACTS_DistributedBundleInfo_1000 promise fail");
        }
        promisePassFlag = false;

        options = {
            "userId": 0,
            "networkId": this.remoteDeviceId
        };
        bundle.getBundleInfo('', 0, options, (err, data) => {
            console.info("ACTS_DistributedBundleInfo_1100 callback data.json:" + JSON.stringify(data));
            console.info("ACTS_DistributedBundleInfo_1100 callback err.json:" + JSON.stringify(err));
            if ((CheckBundleInfoNull(data) == 0) && (err == 1)) {
                this.logmessage += "ACTS_DistributedBundleInfo_1100 CallBack Success ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_1100 CallBack pass");
            } else {
                this.logmessage += "ACTS_DistributedBundleInfo_1100 CallBack Fail ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_1100 CallBack fail");
            }
        });

        console.info("ACTS_DistributedBundleInfo_1100 promise test");
        try {
            let data = await bundle.getBundleInfo('', 0, options);
            console.info("ACTS_DistributedBundleInfo_1100 promise data.json:" + JSON.stringify(data));
        } catch (err) {
            this.logmessage += "ACTS_DistributedBundleInfo_1100 promise success ";
            this.logmessage += " \n";
            console.info("ACTS_DistributedBundleInfo_1100 promise success");
            promisePassFlag = true;
        }

        if (!promisePassFlag) {
            this.logmessage += "ACTS_DistributedBundleInfo_1100 promise fail ";
            this.logmessage += " \n";
            console.info("ACTS_DistributedBundleInfo_1100 promise fail");
        }
        promisePassFlag = false;

        options = {
            "userId": 0,
            "networkId": this.remoteDeviceId
        };
        bundle.getBundleInfo(undefined, 0, options, (err, data) => {
            console.info("ACTS_DistributedBundleInfo_1200 callback data.json:" + JSON.stringify(data));
            console.info("ACTS_DistributedBundleInfo_1200 callback err.json:" + JSON.stringify(err));
            if ((CheckBundleInfoNull(data) == 0) && (err == 1)) {
                this.logmessage += "ACTS_DistributedBundleInfo_1200 CallBack Success ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_1200 CallBack pass");
            } else {
                this.logmessage += "ACTS_DistributedBundleInfo_1200 CallBack Fail ";
                this.logmessage += " \n";
                console.info("ACTS_DistributedBundleInfo_1200 CallBack fail");
            }
        });

        console.info("ACTS_DistributedBundleInfo_1200 promise test");
        try {
            let data = await bundle.getBundleInfo(undefined, 0, options);
            console.info("ACTS_DistributedBundleInfo_1200 promise data.json:" + JSON.stringify(data));
        } catch (err) {
            this.logmessage += "ACTS_DistributedBundleInfo_1200 promise success ";
            this.logmessage += " \n";
            console.info("ACTS_DistributedBundleInfo_1200 promise success");
            promisePassFlag = true;
        }

        if (!promisePassFlag) {
            this.logmessage += "ACTS_DistributedBundleInfo_1200 promise fail ";
            this.logmessage += " \n";
            console.info("ACTS_DistributedBundleInfo_1200 promise fail");
        }
    },

    clearLog() {
        this.logmessage = "";
    }
}