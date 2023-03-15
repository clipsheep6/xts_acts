// @ts-nocheck


/**
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
import { describe, it, expect } from '@ohos/hypium';
import print from '@ohos.print';

export default function requestPrintJsunit1() {
    describe('requestPrintTest1', function () {
        let printerId = 'com.acts.print.PrintFrameWorkTest:1'
        let printerState = 5
        let printJobState = 3
        let printJobSubState = 5
        let jobId

        let printerRange = {
            startPage: 1,
            endPage: 4,
        }
        let printerPageSizeArr = [
            {
                id: '1',
                name: 'string',
                width: 200,
                height: 200,
            }
        ]
        let printerPageSize = {
            id: '1',
            name: 'string',
            width: 200,
            height: 200,
        }

        let printMargin = {
            top: 1,
            bottom: 5,
            left: 5,
            right: 5,
        }
        let previewAttribute = {
            previewRange: printerRange,
            result: 'string',
        }

        let printerResolutionArr = [{
                                        id: '2',
                                        horizontalDpi: 2,
                                        verticalDpi: 1,
                                    }]
        let printerCapability = {
            minMargin: printMargin,
            pageSize: printerPageSizeArr,
            resolution: printerResolutionArr,
            colorMode: 0,
            duplexMode: 0,
        }
        let printerInfo = {
            printerId: '0',
            printerName: 'string',
            printerIcon: 1,
            printerState: 1,
            description: 'string',
            capability: printerCapability,
            option: 'string'
        }
        let printerInfo1 = {
            printerId: '1',
            printerName: 'print1',
            printerIcon: 2,
            printerState: 2,
            description: 'char',
            capability: printerCapability,
            option: 'string'
        }
        let printerInfo2 = {
            printerId: '2',
            printerName: 'print2',
            printerIcon: 2,
            printerState: 2,
            description: 'char',
            capability: printerCapability,
            option: 'string'
        }
        let printerInfoArray = [printerInfo, printerInfo1, printerInfo2]
        let printerIdsArray0 = ['0']
        let printerIdsArray2 = ['2']
        let updatePrinterId = '1'

        let file = ['datashare://data/print/a.png', 'datashare://data/print/b.png']
        let extensionList = ['com.acts.print.PrintFrameWorkTest']
        let extensionListNull = []
        let extensionInfoUpdate = 'newString'

        const waitTime = 1000
        function sleep(time) {
            return new Promise((resolve) => setTimeout(resolve, time))
        }

        /**
         * @tc.number  RequestPrint_test_0100
         * @tc.name    print: Start new print task for App (by Promise)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_0100', 0, async function (done) {
            console.info('------------start RequestPrint_test_0100-------------');
            await print.print(file).then((data) => {
                console.info('RequestPrint_test_0100' + ' result: ' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('object');
                expect(!!data).assertTrue();
            }).catch ((error) => {
                console.info('RequestPrint_test_0100' + ' err: ' + JSON.stringify(error));
                expect(true).assertTrue();
            });
            console.info('------------end RequestPrint_test_0100-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_0200
         * @tc.name    print: Start new print task for App (by callback)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_0200', 0, async function (done) {
            console.info('------------start RequestPrint_test_0200-------------');
            print.print(file, (err, data) => {
                try {
                    if (err) {
                        console.info('RequestPrint_test_0200' + ' err: ' + JSON.stringify(err));
                        expect().assertTrue();
                        console.info('------------end RequestPrint_test_0200-------------');
                        done();
                    } else {
                        console.info('RequestPrint_test_0200' + ' result: ' + JSON.stringify(data));
                        expect(typeof (data)).assertEqual('object');
                        expect(!!data).assertTrue();
                        console.info('------------end RequestPrint_test_0200-------------');
                        done();
                    }
                } catch (err) {
                    console.info('----------end RequestPrint_test_0200---------throw_err: ' + JSON.stringify(err));
                    done();
                }
            });
        });

        /**
         * @tc.number  RequestPrint_test_0300
         * @tc.name    queryAllPrinterExtensionInfos: Get all printer extension installed (by Promise)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_0300', 0, async function (done) {
            console.info('------------start RequestPrint_test_0300-------------');
            let details;
            await print.queryAllPrinterExtensionInfos().then((data) => {
                details = data;
                console.info('RequestPrint_test_0300' + ' result: ' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_0300' + ' err: ' + JSON.stringify(error));
            });
            await sleep(waitTime);
            console.info('RequestPrint_test_0300' + ' result details: ' + JSON.stringify(details));
            checkAllPrinterExtensionInfos('RequestPrint_test_0300', details);
            console.info('------------end RequestPrint_test_0300-------------');
            done();
        });

        function checkAllPrinterExtensionInfos(msg, data) {
            console.log(msg + 'checkAllPrinterExtensionInfos start  ' + JSON.stringify(data));
            expect(Array.isArray(data)).assertEqual(true);
            for (let i = 0; i < data.length; i++) {
                console.info(msg + 'checkAllPrinterExtensionInfos data[0].extensionId : ' + data[0].extensionId);
                expect(typeof (data[0].extensionId)).assertEqual('string');
                expect(data[0].extensionId).assertEqual('com.acts.print.PrintFrameWorkTest');
                console.info(msg + 'checkAllPrinterExtensionInfos data[0].vendorId : ' + data[0].vendorId);
                expect(typeof (data[0].vendorId)).assertEqual('string');
                expect(data[0].vendorId).assertEqual('com.acts.print.PrintFrameWorkTest');
                console.info(msg + 'checkAllPrinterExtensionInfos data[0].vendorName : ' + data[0].vendorName);
                expect(typeof (data[0].vendorName)).assertEqual('string');
                expect(data[0].vendorName).assertEqual('com.acts.print.PrintFrameWorkTest');
                console.info(msg + 'checkAllPrinterExtensionInfos data[0].vendorIcon : ' + data[0].vendorIcon);
                expect(typeof (data[0].vendorIcon)).assertEqual('number');
                expect(data[0].vendorIcon).assertEqual(0);
                console.info(msg + 'checkAllPrinterExtensionInfos data[0].version : ' + data[0].version);
                expect(typeof (data[0].version)).assertEqual('string');
                expect(data[0].version).assertEqual('1.0.0');
            }
        }

        /**
         * @tc.number  RequestPrint_test_0400
         * @tc.name    queryAllPrinterExtensionInfos: Get all printer extension installed (by callback)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_0400', 0, async function (done) {
            console.info('------------start RequestPrint_test_0400-------------');
            print.queryAllPrinterExtensionInfos((err, data) => {
                try {
                    if (err) {
                        console.info('RequestPrint_test_0400' + ' err: ' + JSON.stringify(err));
                        expect(false).assertTrue();
                        console.info('------------end RequestPrint_test_0400-------------');
                        done();
                    } else {
                        console.info('RequestPrint_test_0400' + ' result: ' + JSON.stringify(data));
                        checkAllPrinterExtensionInfos('RequestPrint_test_0400', data);
                        console.info('------------end RequestPrint_test_0400-------------');
                        done();
                    }
                } catch (err) {
                    console.info('----------end RequestPrint_test_0400---------throw_err: ' + JSON.stringify(err));
                    done();
                }
            });
        });

        /**
         * @tc.number  RequestPrint_test_0500
         * @tc.name  startDiscoverPrinter: Load the specific printer extension and start to discover printer(by Promise)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_0500', 0, async function (done) {
            console.info('------------start RequestPrint_test_0500-------------');
            await print.startDiscoverPrinter(extensionList).then((data) => {
                console.info('RequestPrint_test_0500' + ' result: ' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('boolean');
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info('RequestPrint_test_0500' + ' err: ' + JSON.stringify(error));
            });
            console.info('------------end RequestPrint_test_0500-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_0600
         * @tc.name startDiscoverPrinter: Load the specific printer extension and start to discover printer(by callback)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_0600', 0, async function (done) {
            console.info('------------start RequestPrint_test_0600-------------');
            print.startDiscoverPrinter(extensionList, (err, data) => {
                try {
                    if (err) {
                        console.info('RequestPrint_test_0600' + ' err: ' + JSON.stringify(err));
                        expect(false).assertFalse();
                        console.info('------------end RequestPrint_test_0600-------------');
                        done();
                    } else {
                        console.info('RequestPrint_test_0600' + ' result: ' + JSON.stringify(data));
                        expect(typeof (data)).assertEqual('boolean');
                        expect(data).assertEqual(true);
                        console.info('------------end RequestPrint_test_0600-------------');
                        done();
                    }
                } catch (err) {
                    console.info('----------end RequestPrint_test_0600---------throw_err: ' + JSON.stringify(err));
                    done();
                }
            });
        });

        /**
         * @tc.number  RequestPrint_test_0700
         * @tc.name    addPrinters: New printers have been found and notify Print SA (by Promise)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_0700', 0, async function (done) {
            console.info('------------start RequestPrint_test_0700-------------');
            await print.addPrinters(printerInfoArray).then((data) => {
                console.info('RequestPrint_test_0700' + ' result: ' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('boolean');
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info('RequestPrint_test_0700' + ' err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            console.info('------------end RequestPrint_test_0700-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_0800
         * @tc.name    addPrinters: New printers have been found and notify Print SA (by callback)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_0800', 0, async function (done) {
            console.info('------------start RequestPrint_test_0800-------------');
            print.addPrinters(printerInfoArray, (err, data) => {
                try {
                    if (err) {
                        console.info('RequestPrint_test_0800' + ' err: ' + JSON.stringify(err));
                        expect(false).assertTrue();
                        console.info('------------end RequestPrint_test_0800-------------');
                        done();
                    } else {
                        console.info('RequestPrint_test_0800' + ' result: ' + JSON.stringify(data));
                        expect(typeof (data)).assertEqual('boolean');
                        expect(data).assertEqual(true);
                        console.info('------------end RequestPrint_test_0800-------------');
                        done();
                    }
                } catch (err) {
                    console.info('----------end RequestPrint_test_0800---------throw_err: ' + JSON.stringify(err));
                    done();
                }
            });
        });

        /**
         * @tc.number  RequestPrint_test_0900
         * @tc.name    connectPrinter: Connect the specific printer (by Promise)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_0900', 0, async function (done) {
            console.info('------------start RequestPrint_test_0900-------------');
            await print.connectPrinter(printerId).then((data) => {
                console.info('RequestPrint_test_0900' + ' result: ' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('boolean');
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info('RequestPrint_test_0900' + ' err: ' + JSON.stringify(error));
            });
            console.info('------------end RequestPrint_test_0900-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_1000
         * @tc.name    connectPrinter: Connect the specific printer (by callback)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_1000', 0, async function (done) {
            console.info('------------start RequestPrint_test_1000-------------');
            print.connectPrinter(printerId, (err, data) => {
                try {
                    if (err) {
                        console.info('RequestPrint_test_1000' + ' err: ' + JSON.stringify(err));
                        expect(false).assertFalse();
                        console.info('------------end RequestPrint_test_1000-------------');
                        done();
                    } else {
                        console.info('RequestPrint_test_1000' + ' result: ' + JSON.stringify(data));
                        expect(typeof (data)).assertEqual('boolean');
                        expect(data).assertEqual(true);
                        console.info('------------end RequestPrint_test_1000-------------');
                        done();
                    }
                } catch (err) {
                    console.info('----------end RequestPrint_test_1000---------throw_err: ' + JSON.stringify(err));
                    done();
                }
            });
        });

        /**
         * @tc.number  RequestPrint_test_1100
         * @tc.name    disconnectPrinter: Disconnect the specific printer (by Promise)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_1100', 0, async function (done) {
            console.info('------------start RequestPrint_test_1100-------------');
            await print.disconnectPrinter(printerId).then((data) => {
                console.info('RequestPrint_test_1100' + ' disconnectPrinter result: ' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('boolean');
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info('RequestPrint_test_1100' + ' disconnectPrinter err: ' + JSON.stringify(error));
            });
            console.info('------------end RequestPrint_test_1100-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_1200
         * @tc.name    disconnectPrinter: Disconnect the specific printer (by callback)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_1200', 0, async function (done) {
            console.info('------------start RequestPrint_test_1200-------------');
            print.disconnectPrinter(printerId, (err, data) => {
                try {
                    if (err) {
                        console.info('RequestPrint_test_1200' + ' disconnectPrinter err: ' + JSON.stringify(err));
                        expect(false).assertFalse();
                        console.info('------------end RequestPrint_test_1200-------------');
                        done();
                    } else {
                        console.info('RequestPrint_test_1200' + ' disconnectPrinter result: ' + JSON.stringify(data));
                        expect(typeof (data)).assertEqual('boolean');
                        expect(data).assertEqual(true);
                        console.info('------------end RequestPrint_test_1200-------------');
                        done();
                    }
                } catch (err) {
                    console.info('----------end RequestPrint_test_1200---------throw_err: ' + JSON.stringify(err));
                    done();
                }
            });
        });

        /**
         * @tc.number  RequestPrint_test_1300
         * @tc.name    queryPrinterCapability: Query capability for the specific printer (by Promise)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_1300', 0, async function (done) {
            console.info('------------start RequestPrint_test_1300-------------');
            await print.queryPrinterCapability(printerId).then((data) => {
                console.info('RequestPrint_test_1300' + ' result: ' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('boolean');
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info('RequestPrint_test_1300' + ' err: ' + JSON.stringify(error));
            });
            console.info('------------end RequestPrint_test_1300-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_1400
         * @tc.name    queryPrinterCapability: Query capability for the specific printer (by callback)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_1400', 0, async function (done) {
            console.info('------------start RequestPrint_test_1400-------------');
            print.queryPrinterCapability(printerId, (err, data) => {
                try {
                    if (data) {
                        console.info('RequestPrint_test_1400' + ' result: ' + JSON.stringify(data));
                        expect(typeof (data)).assertEqual('boolean');
                        expect(data).assertEqual(true);
                        console.info('------------end RequestPrint_test_1400-------------');
                        done();
                    } else {
                        console.info('RequestPrint_test_1400' + ' err: ' + JSON.stringify(err));
                        expect(false).assertFalse();
                        console.info('------------end RequestPrint_test_1400-------------');
                        done();
                    }
                } catch (err) {
                    console.info('----------end RequestPrint_test_1400---------throw_err: ' + JSON.stringify(err));
                    done();
                }
            });
        });

        /**
        * @tc.number  RequestPrint_test_1500
        * @tc.name    startPrintJob: Start print job (by Promise)
        * @tc.desc    Function test
        */
        it('RequestPrint_test_1500', 0, async function (done) {
            console.info('------------start RequestPrint_test_1500-------------');
            print.on('jobStateChange', (state, info) => {
                if (state == 0 ) {
                    console.info('RequestPrint_test_1500' + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobId = info.jobId;
                }
            });
            await print.print(file).then((data) => {
                console.info('RequestPrint_test_1500' + ' print start result: ' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_1500' + ' print start err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            await sleep(waitTime);
            await print.queryAllPrinterExtensionInfos().then((data) => {
                console.info('RequestPrint_test_1500' + 'queryAllPrinterExtensionInfos result:' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_1500' + ' queryAllPrinterExtensionInfos err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            await sleep(waitTime);
            await print.startDiscoverPrinter(extensionList).then((data) => {
                console.info('RequestPrint_test_1500' + ' startDiscoverPrinter result: ' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_1500' + ' startDiscoverPrinter err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            await sleep(waitTime);
            await print.addPrinters(printerInfoArray).then((data) => {
                console.info('RequestPrint_test_1500' + ' result: ' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_1500' + ' err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            await sleep(waitTime);
            await print.connectPrinter(printerId).then((data) => {
                console.info('RequestPrint_test_1500' + ' connectPrinter result: ' + JSON.stringify(data));
            }).catch((error) => {
                console.info('RequestPrint_test_1500' + ' connectPrinter err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            await sleep(waitTime);
            let printJob = {
                files: file,
                jobId: jobId,
                printerId: printerId,
                jobState: 0,
                jobSubState: 0,
                copyNumber: 3,
                pageRange: printerRange,
                isSequential: false,
                pageSize: printerPageSize,
                isLandscape: false,
                colorMode: 1,
                duplexMode: 1,
                margin: printMargin,
                preview: previewAttribute,
                option: 'string'
            }
            await print.startPrintJob(printJob).then((data) => {
                console.info('RequestPrint_test_1500' + ' result: ' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('boolean');
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info('RequestPrint_test_1500' + ' err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            console.info('------------end RequestPrint_test_1500-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_1600
         * @tc.name    startPrintJob: Start print job (by callback)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_1600', 0, async function (done) {
            console.info('------------start RequestPrint_test_1600-------------');
            print.on('jobStateChange', (state, info) => {
                if (state == 0 ) {
                    console.info('RequestPrint_test_1600' + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobId = info.jobId;
                }
            });
            await print.print(file).then((data) => {
                console.info('RequestPrint_test_1600' + ' print start result: ' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_1600' + ' print start err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            await sleep(waitTime);
            await print.queryAllPrinterExtensionInfos().then((data) => {
                console.info('RequestPrint_test_1600' + 'queryAllPrinterExtensionInfos result:' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_1600' + ' queryAllPrinterExtensionInfos err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            await sleep(waitTime);
            await print.startDiscoverPrinter(extensionList).then((data) => {
                console.info('RequestPrint_test_1600' + ' startDiscoverPrinter result: ' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_1600' + ' startDiscoverPrinter err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            await sleep(waitTime);
            await print.addPrinters(printerInfoArray).then((data) => {
                console.info('RequestPrint_test_1600' + ' result: ' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_1600' + ' err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            await sleep(waitTime);
            await print.connectPrinter(printerId).then((data) => {
                console.info('RequestPrint_test_1600' + ' connectPrinter result: ' + JSON.stringify(data));
            }).catch((error) => {
                console.info('RequestPrint_test_1600' + ' connectPrinter err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            await sleep(waitTime);
            let printJob1 = {
                files: file,
                jobId: jobId,
                printerId: printerId,
                jobState: 0,
                jobSubState: 0,
                copyNumber: 3,
                pageRange: printerRange,
                isSequential: false,
                pageSize: printerPageSize,
                isLandscape: false,
                colorMode: 1,
                duplexMode: 1,
                margin: printMargin,
                preview: previewAttribute,
                option: 'string'
            }
            print.startPrintJob(printJob1, (err, data) => {
                try {
                    if (err) {
                        console.info('RequestPrint_test_1600' + ' err: ' + JSON.stringify(err));
                        expect(false).assertFalse();
                        console.info('------------end RequestPrint_test_1600-------------');
                        done();
                    } else {
                        console.info('RequestPrint_test_1600' + ' result: ' + JSON.stringify(data));
                        expect(typeof (data)).assertEqual('boolean');
                        expect(data).assertEqual(true);
                        console.info('------------end RequestPrint_test_1600-------------');
                        done();
                    }
                } catch (err) {
                    console.info('----------end RequestPrint_test_1600---------throw_err: ' + JSON.stringify(err));
                    done();
                }
            });
        });

        /**
         * @tc.number  RequestPrint_test_1700
         * @tc.name    updatePrintJobState: Notify Print SA the state of print job has been changed (by Promise)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_1700', 0, async function (done) {
            console.info('------------start RequestPrint_test_1700-------------');
            print.on('jobStateChange', (state, info) => {
                if (state == 0 ) {
                    console.info('RequestPrint_test_1700' + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobId = info.jobId;
                }
            });
            await print.print(file).then((data) => {
                console.info('RequestPrint_test_1700' + ' print start result: ' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_1700' + ' print start err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            await sleep(waitTime);
            await print.updatePrintJobState(jobId, printJobState, printJobSubState).then((data) => {
                console.info('RequestPrint_test_1700' + ' result: ' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('boolean');
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info('RequestPrint_test_1700' + ' err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            console.info('------------end RequestPrint_test_1700-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_1800
         * @tc.name    updatePrintJobState: Notify Print SA the state of print job has been changed (by callback)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_1800', 0, async function (done) {
            console.info('------------start RequestPrint_test_1800-------------');
            print.on('jobStateChange', (state, info) => {
                if (state == 0 ) {
                    console.info('RequestPrint_test_1800' + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobId = info.jobId;
                }
            });
            await print.print(file).then((data) => {
                console.info('RequestPrint_test_1800' + ' print start result: ' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_1800' + ' print start err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            await sleep(waitTime);
            print.updatePrintJobState(jobId, printJobState, printJobSubState, (err, data) => {
                try {
                    if (err) {
                        console.info('RequestPrint_test_1800' + ' err: ' + JSON.stringify(err));
                        expect(false).assertTrue();
                        console.info('------------end RequestPrint_test_1800-------------');
                        done();
                    } else {
                        console.info('RequestPrint_test_1800' + ' result: ' + JSON.stringify(data));
                        expect(typeof (data)).assertEqual('boolean');
                        expect(data).assertEqual(true);
                        console.info('------------end RequestPrint_test_1800-------------');
                        done();
                    }
                } catch (err) {
                    console.info('----------end RequestPrint_test_1800---------throw_err: ' + JSON.stringify(err));
                    done();
                }
            });
        });

        /**
         * @tc.number  RequestPrint_test_1900
         * @tc.name    requestPrintPreview: Request preview of the print job (by Promise)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_1900', 0, async function (done) {
            console.info('------------start RequestPrint_test_1900-------------');
            print.on('jobStateChange', (state, info) => {
                if (state == 0 ) {
                    console.info('RequestPrint_test_1900' + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobId = info.jobId;
                }
            });
            await print.print(file).then((data) => {
                console.info('RequestPrint_test_1900' + ' print start result: ' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_1900' + ' print start err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            await sleep(waitTime);
            await print.queryAllPrinterExtensionInfos().then((data) => {
                console.info('RequestPrint_test_1900' + 'queryAllPrinterExtensionInfos result:' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_1900' + ' queryAllPrinterExtensionInfos err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            await sleep(waitTime);
            await print.startDiscoverPrinter(extensionList).then((data) => {
                console.info('RequestPrint_test_1900' + ' startDiscoverPrinter result: ' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_1900' + ' startDiscoverPrinter err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            await sleep(waitTime);
            await print.addPrinters(printerInfoArray).then((data) => {
                console.info('RequestPrint_test_1900' + ' result: ' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_1900' + ' err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            await sleep(waitTime);
            let printJob = {
                files: file,
                jobId: jobId,
                printerId: printerId,
                jobState: 0,
                jobSubState: 0,
                copyNumber: 3,
                pageRange: printerRange,
                isSequential: false,
                pageSize: printerPageSize,
                isLandscape: false,
                colorMode: 1,
                duplexMode: 1,
                margin: printMargin,
                preview: previewAttribute,
                option: 'string'
            }
            await print.startPrintJob(printJob).then((data) => {
                console.info('RequestPrint_test_1900' + ' startPrintJob result: ' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_1900' + ' startPrintJob err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            await sleep(waitTime);
            await print.requestPrintPreview(printJob).then((data) => {
                console.info('RequestPrint_test_1900' + ' requestPrintPreview result: ' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('string');
                expect(data).assertEqual('');
            }).catch ((error) => {
                console.info('RequestPrint_test_1900' + ' requestPrintPreview err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            console.info('------------end RequestPrint_test_1900-------------');
            done();
        });

        /**
          * @tc.number  RequestPrint_test_2000
          * @tc.name    requestPrintPreview: Request preview of the print job (by callback)
          * @tc.desc    Function test
          */
        it('RequestPrint_test_2000', 0, async function (done) {
            console.info('------------start RequestPrint_test_2000-------------');
            print.on('jobStateChange', (state, info) => {
                if (state == 0 ) {
                    console.info('RequestPrint_test_2000' + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobId = info.jobId;
                }
            });
            await print.print(file).then((data) => {
                console.info('RequestPrint_test_2000' + ' print start result: ' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_2000' + ' print start err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            await sleep(waitTime);
            await print.queryAllPrinterExtensionInfos().then((data) => {
                console.info('RequestPrint_test_2000' + 'queryAllPrinterExtensionInfos result:' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_2000' + ' queryAllPrinterExtensionInfos err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            await sleep(waitTime);
            await print.startDiscoverPrinter(extensionList).then((data) => {
                console.info('RequestPrint_test_2000' + ' startDiscoverPrinter result: ' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_2000' + ' startDiscoverPrinter err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            await sleep(waitTime);
            await print.addPrinters(printerInfoArray).then((data) => {
                console.info('RequestPrint_test_2000' + ' result: ' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_2000' + ' err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            await sleep(waitTime);
            let printJob = {
                files: file,
                jobId: jobId,
                printerId: printerId,
                jobState: 0,
                jobSubState: 0,
                copyNumber: 3,
                pageRange: printerRange,
                isSequential: false,
                pageSize: printerPageSize,
                isLandscape: false,
                colorMode: 1,
                duplexMode: 1,
                margin: printMargin,
                preview: previewAttribute,
                option: 'string'
            }
            await print.startPrintJob(printJob).then((data) => {
                console.info('RequestPrint_test_2000' + ' startPrintJob result: ' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_2000' + ' startPrintJob err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            await sleep(waitTime);
            print.requestPrintPreview(printJob, (err, data) => {
                try {
                    if (err) {
                        console.info('RequestPrint_test_2000' + ' err is: ' + JSON.stringify(err));
                        expect(false).assertFalse();
                        console.info('------------end RequestPrint_test_2000-------------');
                        done();
                    } else {
                        console.info('RequestPrint_test_2000' + ' result is: ' + JSON.stringify(data));
                        expect(typeof (data)).assertEqual('string');
                        expect(data).assertEqual('');
                        console.info('------------end RequestPrint_test_2000-------------');
                        done();
                    }
                } catch (err) {
                    console.info('----------end RequestPrint_test_2000---------throw_err: ' + JSON.stringify(err));
                    done();
                }
            });
        });

        /**
         * @tc.number  RequestPrint_test_2100
         * @tc.name    updatePrinters: Update the information of the specific printers (by Promise)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_2100', 0, async function (done) {
            console.info('------------start RequestPrint_test_2100-------------');
            await print.updatePrinters(printerInfoArray).then((data) => {
                console.info('RequestPrint_test_2100' + ' result: ' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('boolean');
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info('RequestPrint_test_2100' + ' err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            console.info('------------end RequestPrint_test_2100-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_2200
         * @tc.name    updatePrinters: Update the information of the specific printers (by callback)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_2200', 0, async function (done) {
            console.info('------------start RequestPrint_test_2200-------------');
            print.updatePrinters(printerInfoArray, (err, data) => {
                try {
                    if (err) {
                        console.info('RequestPrint_test_2200' + ' err: ' + JSON.stringify(err));
                        expect(false).assertTrue();
                        console.info('------------end RequestPrint_test_2200-------------');
                        done();
                    } else {
                        console.info('RequestPrint_test_2200' + ' result: ' + JSON.stringify(data));
                        expect(typeof (data)).assertEqual('boolean');
                        expect(data).assertEqual(true);
                        console.info('------------end RequestPrint_test_2200-------------');
                        done();
                    }
                } catch (err) {
                    console.info('----------end RequestPrint_test_2200---------throw_err: ' + JSON.stringify(err));
                    done();
                }
            });
        });

        /**
         * @tc.number  RequestPrint_test_2300
         * @tc.name    removePrinters: Printers have been lost and notify Print SA (by Promise)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_2300', 0, async function (done) {
            console.info('------------start RequestPrint_test_2300-------------');
            await print.removePrinters(printerIdsArray0).then((data) => {
                console.info('RequestPrint_test_2300' + ' removePrinters result: ' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('boolean');
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info('RequestPrint_test_2300' + ' removePrinters err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            console.info('------------end RequestPrint_test_2300-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_2400
         * @tc.name    removePrinters: Printers have been lost and notify Print SA (by callback)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_2400', 0, async function (done) {
            console.info('------------start RequestPrint_test_2400-------------');
            print.removePrinters(printerIdsArray2, (err, data) => {
                try {
                    if (err) {
                        console.info('RequestPrint_test_2400' + ' removePrinters err: ' + JSON.stringify(err));
                        expect(false).assertFalse();
                        console.info('------------end RequestPrint_test_2400-------------');
                        done();
                    } else {
                        console.info('RequestPrint_test_2400' + ' removePrinters result: ' + JSON.stringify(data));
                        expect(typeof (data)).assertEqual('boolean');
                        expect(data).assertEqual(true);
                        console.info('------------end RequestPrint_test_2400-------------');
                        done();
                    }
                } catch (err) {
                    console.info('----------end RequestPrint_test_2400---------throw_err: ' + JSON.stringify(err));
                    done();
                }
            });
        });

        /**
         * @tc.number  RequestPrint_test_2500
         * @tc.name    updatePrinterState: Notify Print SA the state of printer has been changed (by Promise)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_2500', 0, async function (done) {
            console.info('------------start RequestPrint_test_2500-------------');
            await print.updatePrinterState(updatePrinterId, printerState).then((data) => {
                console.info('RequestPrint_test_2500' + ' result: ' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('boolean');
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info('RequestPrint_test_2500' + ' err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            console.info('------------end RequestPrint_test_2500-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_2600
         * @tc.name    updatePrinterState: Notify Print SA the state of printer has been changed (by callback)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_2600', 0, async function (done) {
            console.info('------------start RequestPrint_test_2600-------------');
            print.updatePrinterState(updatePrinterId, printerState, (err, data) => {
                try {
                    if (err) {
                        console.info('RequestPrint_test_2600' + ' err: ' + JSON.stringify(err));
                        expect(false).assertFalse();
                        console.info('------------end RequestPrint_test_2600-------------');
                        done();
                    } else {
                        console.info('RequestPrint_test_2600' + ' result: ' + JSON.stringify(data));
                        expect(typeof (data)).assertEqual('boolean');
                        expect(data).assertEqual(true);
                        console.info('------------end RequestPrint_test_2600-------------');
                        done();
                    }
                } catch (err) {
                    console.info('----------end RequestPrint_test_2600---------throw_err: ' + JSON.stringify(err));
                    done();
                }
            });
        });

        /**
         * @tc.number  RequestPrint_test_2700
         * @tc.name    cancelPrintJob: Cancel the print job has been sent to printer (by Promise)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_2700', 0, async function (done) {
            console.info('------------start RequestPrint_test_2700-------------');
            print.on('jobStateChange', (state, info) => {
                if (state == 0 ) {
                    console.info('RequestPrint_test_2700' + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobId = info.jobId;
                }
            });
            await print.print(file).then((data) => {
                console.info('RequestPrint_test_2700' + ' print start result: ' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_2700' + ' print start err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            await sleep(waitTime);
            await print.queryAllPrinterExtensionInfos().then((data) => {
                console.info('RequestPrint_test_2700' + 'queryAllPrinterExtensionInfos result:' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_2700' + ' queryAllPrinterExtensionInfos err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            await sleep(waitTime);
            await print.startDiscoverPrinter(extensionList).then((data) => {
                console.info('RequestPrint_test_2700' + ' startDiscoverPrinter result: ' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_2700' + ' startDiscoverPrinter err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            await sleep(waitTime);
            await print.addPrinters(printerInfoArray).then((data) => {
                console.info('RequestPrint_test_2700' + ' result: ' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_2700' + ' err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            await sleep(waitTime);
            await print.connectPrinter(printerId).then((data) => {
                console.info('RequestPrint_test_2700' + ' connectPrinter result: ' + JSON.stringify(data));
            }).catch((error) => {
                console.info('RequestPrint_test_2700' + ' connectPrinter err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            await sleep(waitTime);
            let printJob = {
                files: file,
                jobId: jobId,
                printerId: printerId,
                jobState: 0,
                jobSubState: 0,
                copyNumber: 3,
                pageRange: printerRange,
                isSequential: false,
                pageSize: printerPageSize,
                isLandscape: false,
                colorMode: 1,
                duplexMode: 1,
                margin: printMargin,
                preview: previewAttribute,
                option: 'string'
            }
            await print.startPrintJob(printJob).then((data) => {
                console.info('RequestPrint_test_2700' + ' startPrintJob result: ' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_2700' + ' startPrintJob err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            await sleep(waitTime);
            await print.cancelPrintJob(jobId).then((data) => {
                console.info('RequestPrint_test_2700' + 'cancelPrintJob result:' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('boolean');
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info('RequestPrint_test_2700' + ' cancelPrintJob err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            console.info('------------end RequestPrint_test_2700-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_2800
         * @tc.name    cancelPrintJob: Cancel the print job has been sent to printer (by callback)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_2800', 0, async function (done) {
            console.info('------------start RequestPrint_test_2800-------------');
            print.on('jobStateChange', (state, info) => {
                if (state == 0 ) {
                    console.info('RequestPrint_test_2800' + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobId = info.jobId;
                }
            });
            await print.print(file).then((data) => {
                console.info('RequestPrint_test_2800' + ' print start result: ' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_2800' + ' print start err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            await sleep(waitTime);
            await print.queryAllPrinterExtensionInfos().then((data) => {
                console.info('RequestPrint_test_2800' + 'queryAllPrinterExtensionInfos result:' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_2800' + ' queryAllPrinterExtensionInfos err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            await sleep(waitTime);
            await print.startDiscoverPrinter(extensionList).then((data) => {
                console.info('RequestPrint_test_2800' + ' startDiscoverPrinter result: ' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_2800' + ' startDiscoverPrinter err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            await sleep(waitTime);
            await print.addPrinters(printerInfoArray).then((data) => {
                console.info('RequestPrint_test_2800' + ' result: ' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_2800' + ' err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            await sleep(waitTime);
            await print.connectPrinter(printerId).then((data) => {
                console.info('RequestPrint_test_2800' + ' connectPrinter result: ' + JSON.stringify(data));
            }).catch((error) => {
                console.info('RequestPrint_test_2800' + ' connectPrinter err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            await sleep(waitTime);
            let printJob = {
                files: file,
                jobId: jobId,
                printerId: printerId,
                jobState: 0,
                jobSubState: 0,
                copyNumber: 3,
                pageRange: printerRange,
                isSequential: false,
                pageSize: printerPageSize,
                isLandscape: false,
                colorMode: 1,
                duplexMode: 1,
                margin: printMargin,
                preview: previewAttribute,
                option: 'string'
            }
            await print.startPrintJob(printJob).then((data) => {
                console.info('RequestPrint_test_2800' + ' startPrintJob result: ' + JSON.stringify(data));
            }).catch ((error) => {
                console.info('RequestPrint_test_2800' + ' startPrintJob err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            await sleep(waitTime);
            print.cancelPrintJob(jobId, (err, data) => {
                try {
                    if (err) {
                        console.info('RequestPrint_test_2800' + ' cancelPrintJob err: ' + JSON.stringify(err));
                        expect(false).assertFalse();
                        console.info('------------end RequestPrint_test_2800-------------');
                        done();
                    } else {
                        console.info('RequestPrint_test_2800' + ' cancelPrintJob result: ' + JSON.stringify(data));
                        expect(typeof (data)).assertEqual('boolean');
                        expect(data).assertEqual(true);
                        console.info('------------end RequestPrint_test_2800-------------');
                        done();
                    }
                } catch (err) {
                    console.info('----------end RequestPrint_test_2800---------throw_err: ' + JSON.stringify(err));
                    done();
                }
            });
        });

        /**
         * @tc.number  RequestPrint_test_3100
         * @tc.name    startDiscoverPrinter: Load the specific printer extension and start to discover printer
               ('extensionList' parameter is empty) (by Promise)
         * @tc.desc    Function test
          */
        it('RequestPrint_test_3100', 0, async function (done) {
            console.info('------------start RequestPrint_test_3100-------------');
            await print.startDiscoverPrinter(extensionListNull).then((data) => {
                console.info('RequestPrint_test_3100' + ' result: ' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('boolean');
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info('RequestPrint_test_3100' + ' err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            console.info('------------end RequestPrint_test_3100-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_3200
         * @tc.name    startDiscoverPrinter: Load the specific printer extension and start to discover printer
         ('extensionList' parameter is empty) (by callback)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_3200', 0, async function (done) {
            console.info('------------start RequestPrint_test_3200-------------');
            print.startDiscoverPrinter(extensionListNull, (err, data) => {
                try {
                    if (err) {
                        console.info('RequestPrint_test_3200' + ' err: ' + JSON.stringify(err));
                        expect(false).assertFalse();
                        console.info('------------end RequestPrint_test_3200-------------');
                        done();
                    } else {
                        console.info('RequestPrint_test_3200' + ' result: ' + JSON.stringify(data));
                        expect(typeof (data)).assertEqual('boolean');
                        expect(data).assertEqual(true);
                        console.info('------------end RequestPrint_test_3200-------------');
                        done();
                    }
                } catch (err) {
                    console.info('----------end RequestPrint_test_3200---------throw_err: ' + JSON.stringify(err));
                    done();
                }
            });
        });

        /**
         * @tc.number  RequestPrint_test_3300
         * @tc.name    updatePrinters: Update the information of the specific printers (by Promise)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_3300', 0, async function (done) {
            console.info('------------start RequestPrint_test_3300-------------');
            await print.updateExtensionInfo(extensionInfoUpdate).then((data) => {
                console.info('RequestPrint_test_3300' + ' result: ' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('boolean');
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info('RequestPrint_test_3300' + ' updateExtensionInfo err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            console.info('------------end RequestPrint_test_3300-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_3400
         * @tc.name    updatePrinters: Update the information of the specific printers (by callback)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_3400', 0, async function (done) {
            console.info('------------start RequestPrint_test_3400-------------');
            print.updateExtensionInfo(extensionInfoUpdate, (err, data) => {
                try {
                    if (err) {
                        console.info('RequestPrint_test_3400' + ' err: ' + JSON.stringify(err));
                        expect(false).assertFalse();
                        console.info('------------end RequestPrint_test_3400-------------');
                        done();
                    } else {
                        console.info('RequestPrint_test_3400' + ' result: ' + JSON.stringify(data));
                        expect(typeof (data)).assertEqual('boolean');
                        expect(data).assertEqual(true);
                        console.info('------------end RequestPrint_test_3400-------------');
                        done();
                    }
                } catch (err) {
                    console.info('----------end RequestPrint_test_3400---------throw_err: ' + JSON.stringify(err));
                    done();
                }
            });
        });

        /**
         * @tc.number  RequestPrint_test_3500
         * @tc.name    stopDiscoverPrinter: Stop discovering the printer with specific printer extension (by Promise)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_3500', 0, async function (done) {
            console.info('------------start RequestPrint_test_3500-------------');
            await print.stopDiscoverPrinter().then((data) => {
                console.info('RequestPrint_test_3500' + ' stopDiscoverPrinter result: ' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('boolean');
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info('RequestPrint_test_3500' + ' stopDiscoverPrinter err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            console.info('------------end RequestPrint_test_3500-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_3600
         * @tc.name    stopDiscoverPrinter: Stop discovering the printer with specific printer extension (by callback)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_3600', 0, async function (done) {
            console.info('------------start RequestPrint_test_3600-------------');
            print.stopDiscoverPrinter((err, data) => {
                try {
                    if (err) {
                        console.info('RequestPrint_test_3600' + ' stopDiscoverPrinter err: ' + JSON.stringify(err));
                        expect(false).assertTrue();
                        console.info('------------end RequestPrint_test_3600-------------');
                        done();
                    } else {
                        console.info('RequestPrint_test_3600' + ' stopDiscoverPrinter result: ' + JSON.stringify(data));
                        expect(typeof (data)).assertEqual('boolean');
                        expect(data).assertEqual(true);
                        console.info('------------end RequestPrint_test_3600-------------');
                        done();
                    }
                } catch (err) {
                    console.info('----------end RequestPrint_test_3600---------throw_err: ' + JSON.stringify(err));
                    done();
                }
            });
        });
    })
}