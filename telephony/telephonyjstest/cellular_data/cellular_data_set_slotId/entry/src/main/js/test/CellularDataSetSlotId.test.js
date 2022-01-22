/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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

import cellular from "@ohos.telephony.data";
import { describe, beforeAll, beforeEach, afterAll, it, expect } from "deccjsunit/index";

const DataConnectState = {
    DATA_STATE_UNKNOWN: -1,
    DATA_STATE_DISCONNECTED: 0,
    DATA_STATE_CONNECTING: 1,
    DATA_STATE_CONNECTED: 2,
    DATA_STATE_SUSPENDED: 3,
};

var inItialState = false;
const time = 2000;
const SLOT_ID_1 = 1;
const SLOT_ID = 0;
const SLOT_ID_ERR = -1;
const SLOT_ID_2 = -1;

describe("TelephonyCellularData", function () {
    const sleep = (time) => {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time);
        })
    };

    beforeAll(async function () {
        try {
            let data = await cellular.isCellularDataEnabled();
            console.log("Telephony_CellularData_isCellularDataEnabled_beforeAll finish");
            inItialState = data;
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_isCellularDataEnabled_beforeAll fail");
            return;
        }
    })

    beforeEach(async function () {
        try {
            await cellular.setDefaultCellularDataSlotId(SLOT_ID);
            await cellular.disableCellularData();
            console.log("Telephony_CellularData_isCellularDataEnabled_beforeEach_disableCellularData finish");
            await sleep(time);
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_isCellularDataEnabled_beforeEach_disableCellularData fail");
            return;
        }
    })

    afterAll(function () {
        if (inItialState === true) {
            cellular.enableCellularData((err) => {
                if (err) {
                    expect().assertFail();
                    console.log("Telephony_CellularData_isCellularDataEnabled_enableCellularData fail");
                    return;
                }
                console.log("Telephony_CellularData_isCellularDataEnabled_enableCellularData finish");
            })
        } else {
            cellular.disableCellularData((err) => {
                if (err) {
                    expect().assertFail();
                    console.log("Telephony_CellularData_isCellularDataEnabled_disableCellularData fail");
                    return;
                }
                console.log("Telephony_CellularData_isCellularDataEnabled_disableCellularData finish");
            })
        }
    })

    /*
     * @tc.number   Telephony_CellularData_setDefaultCellularDataSlotId_Async_0100
     * @tc.name     Call the setDefaultCellularDataSlotId() interface, set the default card slot to 0, and verify that
     *              the default card slot is 0 (Async)
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_setDefaultCellularDataSlotId_Async_0100", 0, async function (done) {
        cellular.setDefaultCellularDataSlotId(SLOT_ID_1, (err) => {
            if (err) {
                expect().assertFail();
                console.log(
                    "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0100 setDefaultCellularDataSlotId fail"
                );
                done();
                return;
            }
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0100 setDefaultCellularDataSlotId finish"
            );
            cellular.getDefaultCellularDataSlotId((err, data) => {
                if (err) {
                    expect().assertFail();
                    console.log(
                        "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0100 fail"
                    );
                    done();
                    return;
                }
                console.log(
                    "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0100 finish"
                );
                expect(data === SLOT_ID_1).assertTrue();
                cellular.setDefaultCellularDataSlotId(SLOT_ID, (err) => {
                    if (err) {
                        expect().assertFail();
                        console.log(
                            "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0100 fail"
                        );
                        done();
                        return;
                    }
                    console.log(
                        "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0100 finish"
                    );
                    cellular.getDefaultCellularDataSlotId((err, data) => {
                        if (err) {
                            expect().assertFail();
                            console.log(
                                "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0100 fail"
                            );
                            done();
                            return;
                        }
                        console.log(
                            "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0100 finish"
                        );
                        expect(data === SLOT_ID).assertTrue();
                        cellular.enableCellularData(async (err) => {
                            if (err) {
                                expect().assertFail();
                                console.log(
                                    "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0100 fail"
                                );
                                done();
                                return;
                            }
                            console.log(
                                "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0100 finish"
                            );
                            await sleep(time);
                            cellular.getCellularDataState((err, data) => {
                                if (err) {
                                    expect().assertFail();
                                    console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Async_0100 fail");
                                    done();
                                    return;
                                }
                                expect(data === DataConnectState.DATA_STATE_CONNECTED).assertTrue();
                                console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Async_0100 finish");
                                done();
                            })
                        })
                    })
                })
            })
        })
    })

    /*
     * @tc.number   Telephony_CellularData_setDefaultCellularDataSlotId_Async_0200
     * @tc.name     Call the setDefaultCellularDataSlotId() interface, repeatedly set the default card slot to 0, and
     *              verify that the default card slot is 0 (Async)
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_setDefaultCellularDataSlotId_Async_0200", 0, async function (done) {
        cellular.setDefaultCellularDataSlotId(SLOT_ID_1, (err) => {
            if (err) {
                expect().assertFail();
                console.log(
                    "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0200 setDefaultCellularDataSlotId fail"
                );
                done();
                return;
            }
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0200 setDefaultCellularDataSlotId finish"
            );
            cellular.getDefaultCellularDataSlotId((err, data) => {
                if (err) {
                    expect().assertFail();
                    console.log(
                        "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0200 fail"
                    );
                    done();
                    return;
                }
                console.log(
                    "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0200 finish"
                );
                expect(data === SLOT_ID_1).assertTrue();
                cellular.setDefaultCellularDataSlotId(SLOT_ID, (err) => {
                    if (err) {
                        expect().assertFail();
                        console.log(
                            "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0200 fail"
                        );
                        done();
                        return;
                    }
                    console.log(
                        "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0200 finish"
                    );
                    cellular.getDefaultCellularDataSlotId((err, data) => {
                        if (err) {
                            expect().assertFail();
                            console.log(
                                "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0200 fail"
                            );
                            done();
                            return;
                        }
                        console.log(
                            "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0200 finish"
                        );
                        expect(data === SLOT_ID).assertTrue();
                        cellular.setDefaultCellularDataSlotId(SLOT_ID, (err) => {
                            if (err) {
                                expect().assertFail();
                                console.log(
                                    "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0200 fail"
                                );
                                done();
                                return;
                            }
                            console.log(
                                "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0200  finish"
                            );
                            cellular.getDefaultCellularDataSlotId((err, data) => {
                                if (err) {
                                    expect().assertFail();
                                    console.log(
                                        "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0200  fail"
                                    );
                                    done();
                                    return;
                                }
                                console.log(
                                    "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0200 finish"
                                );
                                expect(data === SLOT_ID).assertTrue();
                                cellular.enableCellularData(async (err) => {
                                    if (err) {
                                        expect().assertFail();
                                        console.log(
                                            "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0200 fail"
                                        );
                                        done();
                                        return;
                                    }
                                    console.log(
                                        "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0200 finish"
                                    );
                                    await sleep(time);
                                    cellular.getCellularDataState((err, data) => {
                                        if (err) {
                                            expect().assertFail();
                                            console.log(
                                                "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0200 fail"
                                            );
                                            done();
                                            return;
                                        }
                                        expect(data === DataConnectState.DATA_STATE_CONNECTED).assertTrue();
                                        console.log(
                                            "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0200 finish"
                                        );
                                        done();
                                    })
                                })
                            })
                        })
                    })
                })
            })
        })
    })

    /*
     * @tc.number   Telephony_CellularData_setDefaultCellularDataSlotId_Async_0300
     * @tc.name     Call the setDefaultCellularDataSlotId() interface, set the default card slot to 1, and verify that
     *              the default card slot is 1 (Async)
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_setDefaultCellularDataSlotId_Async_0300", 0, async function (done) {
        cellular.getDefaultCellularDataSlotId((err, data) => {
            if (err) {
                expect().assertFail();
                console.log(
                    "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0300 getDefaultCellularDataSlotId fail"
                );
                done();
                return;
            }
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0300 getDefaultCellularDataSlotId finish"
            );
            expect(data === SLOT_ID).assertTrue();
            cellular.enableCellularData(async (err) => {
                if (err) {
                    expect().assertFail();
                    console.log(
                        "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0300 enableCellularData fail"
                    );
                    done();
                    return;
                }
                console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Async_0300 enableCellularData finish");
                await sleep(time);
                cellular.getCellularDataState((err, data) => {
                    if (err) {
                        expect().assertFail();
                        console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Async_0300 fail");
                        done();
                        return;
                    }
                    expect(data === DataConnectState.DATA_STATE_CONNECTED).assertTrue();
                    console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Async_0300 finish");
                    cellular.setDefaultCellularDataSlotId(SLOT_ID_1, (err) => {
                        if (err) {
                            expect().assertFail();
                            console.log(
                                "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0300 fail"
                            );
                            done();
                            return;
                        }
                        console.log(
                            "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0300 finish"
                        );
                        cellular.getDefaultCellularDataSlotId((err, data) => {
                            if (err) {
                                expect().assertFail();
                                console.log(
                                    "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0300 fail"
                                );
                                done();
                                return;
                            }
                            console.log(
                                "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0300 finish"
                            );
                            expect(data === SLOT_ID_1).assertTrue();
                            done();
                        })
                    })
                })
            })
        })
    })

    /*
     * @tc.number   Telephony_CellularData_setDefaultCellularDataSlotId_Async_0400
     * @tc.name     Call the setDefaultCellularDataSlotId() interface, repeatedly set the default card slot to 1, and
     *              verify that the default card slot is 1 (Async)
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_setDefaultCellularDataSlotId_Async_0400", 0, async function (done) {
        cellular.getDefaultCellularDataSlotId((err, data) => {
            if (err) {
                expect().assertFail();
                console.log(
                    "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0400 getDefaultCellularDataSlotId fail"
                );
                done();
                return;
            }
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0400 getDefaultCellularDataSlotId finish"
            );
            expect(data === SLOT_ID).assertTrue();
            cellular.enableCellularData(async (err) => {
                if (err) {
                    expect().assertFail();
                    console.log(
                        "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0400 enableCellularData fail"
                    );
                    done();
                    return;
                }
                console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Async_0400 enableCellularData finish");
                await sleep(time);
                cellular.getCellularDataState((err, data) => {
                    if (err) {
                        expect().assertFail();
                        console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Async_0400 fail");
                        done();
                        return;
                    }
                    expect(data === DataConnectState.DATA_STATE_CONNECTED).assertTrue();
                    console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Async_0400 finish");
                    cellular.setDefaultCellularDataSlotId(SLOT_ID_1, (err) => {
                        if (err) {
                            expect().assertFail();
                            console.log(
                                "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0400 fail"
                            );
                            done();
                            return;
                        }
                        console.log(
                            "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0400 finish"
                        );
                        cellular.getDefaultCellularDataSlotId((err, data) => {
                            if (err) {
                                expect().assertFail();
                                console.log(
                                    "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0400 fail"
                                );
                                done();
                                return;
                            }
                            console.log(
                                "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0400 finish"
                            );
                            expect(data === SLOT_ID_1).assertTrue();
                            cellular.setDefaultCellularDataSlotId(SLOT_ID_1, (err) => {
                                if (err) {
                                    expect().assertFail();
                                    console.log(
                                        "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0400 fail"
                                    );
                                    done();
                                    return;
                                }
                                console.log(
                                    "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0400 finish"
                                );
                                cellular.getDefaultCellularDataSlotId((err, data) => {
                                    if (err) {
                                        expect().assertFail();
                                        console.log(
                                            "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0400 fail"
                                        );
                                        done();
                                        return;
                                    }
                                    console.log(
                                        "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0400 finish"
                                    );
                                    expect(data === SLOT_ID_1).assertTrue();
                                    done();
                                })
                            })
                        })
                    })
                })
            })
        })
    })

    /*
     * @tc.number   Telephony_CellularData_setDefaultCellularDataSlotId_Async_0500
     * @tc.name     Call setDefaultCellularDataSlotId() interface, set the default card slot to the number of exceptions
     *              (-1), and verify whether the setting failed (Async)
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_setDefaultCellularDataSlotId_Async_0500", 0, async function (done) {
        cellular.getDefaultCellularDataSlotId((err, data) => {
            if (err) {
                expect().assertFail();
                console.log(
                    "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0500 getDefaultCellularDataSlotId fail"
                );
                done();
                return;
            }
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0500 getDefaultCellularDataSlotId finish"
            );
            expect(data === SLOT_ID).assertTrue();
            cellular.enableCellularData(async (err) => {
                if (err) {
                    expect().assertFail();
                    console.log(
                        "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0500 enableCellularData fail"
                    );
                    done();
                    return;
                }
                console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Async_0500 enableCellularData finish");
                await sleep(time);
                cellular.getCellularDataState((err, data) => {
                    if (err) {
                        expect().assertFail();
                        console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Async_0500 fail");
                        done();
                        return;
                    }
                    expect(data === DataConnectState.DATA_STATE_CONNECTED).assertTrue();
                    console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Async_0500 finish");
                    cellular.setDefaultCellularDataSlotId(SLOT_ID_ERR, (err) => {
                        if (err) {
                            console.log(
                                "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0500 finish"
                            );
                        } else {
                            expect().assertFail();
                            console.log(
                                "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0500 fail"
                            );
                        }
                        cellular.getDefaultCellularDataSlotId((err, data) => {
                            if (err) {
                                expect().assertFail();
                                console.log(
                                    "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0500 fail"
                                );
                                done();
                            }
                            console.log(
                                "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0500 finish"
                            );
                            expect(data === SLOT_ID).assertTrue();
                            done();
                            return;
                        })
                    })
                })
            })
        })
    })

    /*
     * @tc.number   Telephony_CellularData_setDefaultCellularDataSlotId_Async_0600
     * @tc.name     Call setDefaultCellularDataSlotId() interface, set the default card slot to the number of exceptions
     *              (2), and verify whether the setting failed (Async)
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_setDefaultCellularDataSlotId_Async_0600", 0, async function (done) {
        cellular.getDefaultCellularDataSlotId((err, data) => {
            if (err) {
                expect().assertFail();
                console.log(
                    "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0600 getDefaultCellularDataSlotId fail"
                );
                done();
                return;
            }
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0600 getDefaultCellularDataSlotId finish"
            );
            expect(data === SLOT_ID).assertTrue();
            cellular.enableCellularData(async (err) => {
                if (err) {
                    expect().assertFail();
                    console.log(
                        "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0600 enableCellularData fail"
                    );
                    done();
                    return;
                }
                console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Async_0600 enableCellularData finish");
                await sleep(time);
                cellular.getCellularDataState((err, data) => {
                    if (err) {
                        expect().assertFail();
                        console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Async_0600 fail");
                        done();
                        return;
                    }
                    expect(data === DataConnectState.DATA_STATE_CONNECTED).assertTrue();
                    console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Async_0600 finish");
                    cellular.setDefaultCellularDataSlotId(SLOT_ID_2, (err) => {
                        if (err) {
                            console.log(
                                "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0600 finish"
                            );
                        } else {
                            expect().assertFail();
                            console.log(
                                "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0600 fail"
                            );
                            done();
                        }
                        cellular.getDefaultCellularDataSlotId((err, data) => {
                            if (err) {
                                expect().assertFail();
                                console.log(
                                    "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0600 fail"
                                );
                                done();
                                return;
                            }
                            console.log(
                                "Telephony_CellularData_setDefaultCellularDataSlotId_Async_0600 finish"
                            );
                            expect(data === SLOT_ID).assertTrue();
                            done();
                            return;
                        })
                    })
                })
            })
        })
    })

    /*
     * @tc.number   Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0100
     * @tc.name     Call the setDefaultCellularDataSlotId() interface, set the default card slot to 0, and verify that
     *              the default card slot is 0 (Promise)
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0100", 0, async function (done) {
        try {
            await cellular.setDefaultCellularDataSlotId(SLOT_ID_1);
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0100 setDefaultCellularDataSlotId finish"
            );
        } catch (err) {
            expect().assertFail();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0100 setDefaultCellularDataSlotId fail"
            );
            done();
            return;
        }
        try {
            let data = await cellular.getDefaultCellularDataSlotId();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0100 getDefaultCellularDataSlotId finish"
            );
            expect(data === SLOT_ID_1).assertTrue();
        } catch (err) {
            expect().assertFail();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0100 getDefaultCellularDataSlotId fail"
            );
            done();
            return;
        }
        try {
            await cellular.setDefaultCellularDataSlotId(SLOT_ID);
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0100 setDefaultCellularDataSlotId finish"
            );
        } catch (err) {
            expect().assertFail();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0100 setDefaultCellularDataSlotId fail"
            );
            done();
            return;
        }
        try {
            let data = await cellular.getDefaultCellularDataSlotId();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0100 getDefaultCellularDataSlotId finish"
            );
            expect(data === SLOT_ID).assertTrue();
        } catch (err) {
            expect().assertFail();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0100 getDefaultCellularDataSlotId fail"
            );
            done();
            return;
        }
        try {
            await cellular.enableCellularData();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0100 enableCellularData finish");
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0100 enableCellularData fail");
            done();
            return;
        }
        await sleep(time);
        try {
            let data = await cellular.getCellularDataState();
            expect(data === DataConnectState.DATA_STATE_CONNECTED).assertTrue();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0100 finish");
            done();
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0100 fail");
            done();
        }
    })

    /*
     * @tc.number   Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0200
     * @tc.name     Call the setDefaultCellularDataSlotId() interface, repeatedly set the default card slot to 0, and
     *              verify that the default card slot is 0 (Promise)
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0200", 0, async function (done) {
        try {
            await cellular.setDefaultCellularDataSlotId(SLOT_ID_1);
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0200 setDefaultCellularDataSlotId finish"
            );
        } catch (err) {
            expect().assertFail();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0200 setDefaultCellularDataSlotId fail"
            );
            done();
            return;
        }
        try {
            let data = await cellular.getDefaultCellularDataSlotId();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0200 getDefaultCellularDataSlotId finish"
            );
            expect(data === SLOT_ID_1).assertTrue();
        } catch (err) {
            expect().assertFail();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0200 getDefaultCellularDataSlotId fail"
            );
            done();
            return;
        }
        try {
            await cellular.setDefaultCellularDataSlotId(SLOT_ID);
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0200 setDefaultCellularDataSlotId finish"
            );
        } catch (err) {
            expect().assertFail();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0200 setDefaultCellularDataSlotId fail"
            );
            done();
            return;
        }
        try {
            let data = await cellular.getDefaultCellularDataSlotId();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0200 getDefaultCellularDataSlotId finish"
            );
            expect(data === SLOT_ID).assertTrue();
        } catch (err) {
            expect().assertFail();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0200 getDefaultCellularDataSlotId fail"
            );
            done();
            return;
        }
        try {
            await cellular.setDefaultCellularDataSlotId(SLOT_ID);
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0200 setDefaultCellularDataSlotId finish"
            );
        } catch (err) {
            expect().assertFail();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0200 setDefaultCellularDataSlotId fail"
            );
            done();
            return;
        }
        try {
            let data = await cellular.getDefaultCellularDataSlotId();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0200 getDefaultCellularDataSlotId finish"
            );
            expect(data === SLOT_ID).assertTrue();
        } catch (err) {
            expect().assertFail();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0200 getDefaultCellularDataSlotId fail"
            );
            done();
            return;
        }
        try {
            await cellular.enableCellularData();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0200 enableCellularData finish");
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0200 enableCellularData fail");
            done();
            return;
        }
        await sleep(time);
        try {
            let data = await cellular.getCellularDataState();
            expect(data === DataConnectState.DATA_STATE_CONNECTED).assertTrue();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0200 finish");
            done();
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0200 fail");
            done();
        }
    })

    /*
     * @tc.number   Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0300
     * @tc.name     Call the setDefaultCellularDataSlotId() interface, set the default card slot to 1, and verify that
     *              the default card slot is 1 (Promise)
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0300", 0, async function (done) {
        try {
            let data = await cellular.getDefaultCellularDataSlotId();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0300 setDefaultCellularDataSlotId finish"
            );
            expect(data === SLOT_ID).assertTrue();
        } catch (err) {
            expect().assertFail();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0300 setDefaultCellularDataSlotId fail"
            );
            done();
            return;
        }
        try {
            await cellular.enableCellularData();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0300 enableCellularData finish");
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0300 enableCellularData fail");
            done();
            return;
        }
        await sleep(time);
        try {
            let data = await cellular.getCellularDataState();
            expect(data === DataConnectState.DATA_STATE_CONNECTED).assertTrue();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0300 finish");
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0300 fail");
            done();
        }
        try {
            await cellular.setDefaultCellularDataSlotId(SLOT_ID_1);
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0300 setDefaultCellularDataSlotId finish"
            );
        } catch (err) {
            expect().assertFail();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0300 setDefaultCellularDataSlotId fail"
            );
            done();
            return;
        }
        try {
            let data = await cellular.getDefaultCellularDataSlotId();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0300 getDefaultCellularDataSlotId finish"
            );
            expect(data === SLOT_ID_1).assertTrue();
            done();
        } catch (err) {
            expect().assertFail();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0300 getDefaultCellularDataSlotId fail"
            );
            done();
            return;
        }
    })

    /*
     * @tc.number   Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0400
     * @tc.name     Call the setDefaultCellularDataSlotId() interface, repeatedly set the default card slot to 1, and
     *              verify that the default card slot is 1 (Promise)
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0400", 0, async function (done) {
        try {
            let data = await cellular.getDefaultCellularDataSlotId();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0400 getDefaultCellularDataSlotId finish"
            );
            expect(data === SLOT_ID).assertTrue();
        } catch (err) {
            expect().assertFail();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0400 getDefaultCellularDataSlotId fail"
            );
            done();
            return;
        }
        try {
            await cellular.enableCellularData();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0400 enableCellularData finish");
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0400 enableCellularData fail");
            done();
            return;
        }
        await sleep(time);
        try {
            let data = await cellular.getCellularDataState();
            expect(data === DataConnectState.DATA_STATE_CONNECTED).assertTrue();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0400 finish");
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0400 fail");
            done();
        }
        try {
            let data = await cellular.getCellularDataState();
            expect(data === DataConnectState.DATA_STATE_CONNECTED).assertTrue();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0400 finish");
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0400 fail");
            done();
        }
        try {
            await cellular.setDefaultCellularDataSlotId(SLOT_ID_1);
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0400 setDefaultCellularDataSlotId finish"
            );
        } catch (err) {
            expect().assertFail();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0400 setDefaultCellularDataSlotId fail"
            );
            done();
            return;
        }
        try {
            let data = await cellular.getDefaultCellularDataSlotId();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0400 getDefaultCellularDataSlotId finish"
            );
            expect(data === SLOT_ID_1).assertTrue();
        } catch (err) {
            expect().assertFail();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0400 getDefaultCellularDataSlotId fail"
            );
            done();
            return;
        }
        try {
            await cellular.setDefaultCellularDataSlotId(SLOT_ID_1);
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0400 setDefaultCellularDataSlotId finish"
            );
        } catch (err) {
            expect().assertFail();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0400 setDefaultCellularDataSlotId fail"
            );
            done();
            return;
        }
        try {
            let data = await cellular.getDefaultCellularDataSlotId();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0400 getDefaultCellularDataSlotId finish"
            );
            expect(data === SLOT_ID_1).assertTrue();
            done();
        } catch (err) {
            expect().assertFail();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0400 getDefaultCellularDataSlotId fail"
            );
            done();
            return;
        }
    })

    /*
     * @tc.number   Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0500
     * @tc.name     Call the setDefaultCellularDataSlotId() interface, set the default card slot to the number of
     *              exceptions (-1), and verify whether the setting failed (Promise)
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0500", 0, async function (done) {
        try {
            let data = await cellular.getDefaultCellularDataSlotId();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0500 getDefaultCellularDataSlotId finish"
            );
            expect(data === SLOT_ID).assertTrue();
        } catch (err) {
            expect().assertFail();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0500 getDefaultCellularDataSlotId fail"
            );
            done();
            return;
        }
        try {
            await cellular.enableCellularData();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0500 enableCellularData finish");
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0500 enableCellularData fail");
            done();
            return;
        }
        await sleep(time);
        try {
            let data = await cellular.getCellularDataState();
            expect(data === DataConnectState.DATA_STATE_CONNECTED).assertTrue();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0500 finish");
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0500 fail");
            done();
        }
        try {
            await cellular.setDefaultCellularDataSlotId(SLOT_ID_ERR);
            expect().assertFail();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0500 enableCellularData fail");
            done();
            return;
        } catch (err) {
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0500 enableCellularData finish");
            try {
                let data = await cellular.getDefaultCellularDataSlotId();
                console.log(
                    "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0500 enableCellularData finish"
                );
                expect(data === SLOT_ID).assertTrue();
                done();
            } catch (err) {
                expect().assertFail();
                console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0500 enableCellularData fail");
                done();
                return;
            }
        }
    })

    /*
     * @tc.number   Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0600
     * @tc.name     Call the setDefaultCellularDataSlotId() interface, set the default card slot to the number of
     *              exceptions (2), and verify whether the setting failed (Promise)
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0600", 0, async function (done) {
        try {
            let data = await cellular.getDefaultCellularDataSlotId();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0600 enableCellularData finish");
            expect(data === SLOT_ID).assertTrue();
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0600 enableCellularData fail");
            done();
            return;
        }
        try {
            await cellular.enableCellularData();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0600 enableCellularData finish");
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0600 enableCellularData fail");
            done();
            return;
        }
        await sleep(time);
        try {
            let data = await cellular.getCellularDataState();
            expect(data === DataConnectState.DATA_STATE_CONNECTED).assertTrue();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0600 finish");
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0600 fail");
            done();
        }
        try {
            await cellular.setDefaultCellularDataSlotId(SLOT_ID_2);
            expect().assertFail();
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0600 setDefaultCellularDataSlotId fail"
            );
            done();
            return;
        } catch (err) {
            console.log(
                "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0600 setDefaultCellularDataSlotId finish"
            );
            try {
                let data = await cellular.getDefaultCellularDataSlotId();
                console.log(
                    "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0600 finish"
                );
                expect(data === SLOT_ID).assertTrue();
                done();
            } catch (err) {
                expect().assertFail();
                console.log(
                    "Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0600 fail"
                );
                done();
                return;
            }
        }
    })
})
