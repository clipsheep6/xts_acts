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
import { describe, it, expect } from "deccjsunit/index.ets";
import print from '@ohos.print';

export default function requestPrintJsunit1() {
    describe('requestPrintTest', function () {
        let printJobState = 2
        let jobId = 1
        let printerState = 1
        let extensionListNull = []

        let printerRange = {
            startPage: 1,
            endPage: 4,
            pages: [1, 4],
        }
        let printerPageSizeArr = [
            {
                id: 1,
                name: 'string',
                width: 200,
                height: 200,
            }
        ]
        let printerPageSize = {
            id: 1,
            name: 'string',
            width: 200,
            height: 200,
        }

        let printMargin = {
            top: 1,
            bottom: 2,
            left: 1,
            right: 1,
        }
        let previewAttribute = {
            previewRange: printerRange,
            result: 'string',
        }
        let printJob = {
            files: ['D:/dev/a.docx'],
            jobId: 3,
            printerId: 2,
            jobState: printerState,
            copyNumber: 3,
            pageRange: printerRange,
            isSequential: false,
            pageSize: printerPageSize,
            isLandscape: false,
            colorMode: 1,
            duplexMode: 1,
            margin: printMargin,
            preview: previewAttribute,
        }

        let printerResolutionArr = [{
                                        id: 2,
                                        horizontalDpi: 2,
                                        verticalDpi: 1,
                                    }]
        let printerCapability = {
            minMargin: printMargin,
            pageSize: printerPageSizeArr,
            resolution: printerResolutionArr,
            colorMode: 1,
            duplexMode: 2,
        }
        let printerInfo = {
            printerId: 1,
            printerName: 'string',
            printerIcon: 1,
            printerState: 1,
            description: 'string',
            capability: printerCapability,
        }
        let printerInfo1 = {
            printerId: 2,
            printerName: 'char',
            printerIcon: 2,
            printerState: 2,
            description: 'char',
            capability: printerCapability,
        }
        let printerInfoArray = [printerInfo, printerInfo1]

        let file = ['./data/app/sample.pdf1', './data/app/sample.pdf2', './data/app/sample.pdf3']
        let extensionList = [1, 2, 3, 4];
        let printerId = 3;

        let TAG = '';
        const waitTime = 1000;
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
            TAG = 'RequestPrint_test_0100';
            await print.print(file).then((data) => {
                console.info(TAG + ' result: ' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('object');
                expect(!!data).assertTrue();
            }).catch ((error) => {
                console.info(TAG + ' err: ' + JSON.stringify(error));
                expect(false).assertTrue();
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
            console.info("------------start RequestPrint_test_0200-------------");
            TAG = 'RequestPrint_test_0200';
            await print.print(file, (err, data) => {
                if (err) {
                    console.info(TAG + ' err: ' + JSON.stringify(err));
                    expect(false).assertTrue();
                } else {
                    console.info(TAG + ' result: ' + JSON.stringify(data));
                    expect(typeof (data)).assertEqual('object');
                    expect(!!data).assertTrue();
                }
            });
            console.info('------------end RequestPrint_test_0200-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_0300
         * @tc.name    queryAllPrinterExtensionInfos: Get all printer extension installed (by Promise)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_0300', 0, async function (done) {
            console.info('------------start RequestPrint_test_0300-------------');
            TAG = 'RequestPrint_test_0300';
            let details;
            await print.queryExtensionAbilityInfos().then((data) => {
                details = data;
                console.info(TAG + ' result: ' + JSON.stringify(data));
            }).catch ((error) => {
                console.info(TAG + ' err: ' + JSON.stringify(error));
            });
            await sleep(waitTime);
            console.info(TAG + ' result details: ' + JSON.stringify(details));
            checkAllPrinterExtensionInfos(TAG, details);
            console.info('------------end RequestPrint_test_0300-------------');
            done();
        });

        function checkAllPrinterExtensionInfos(msg, data) {
            console.log(msg + "checkAllPrinterExtensionInfos start  " + JSON.stringify(data));
            expect(Array.isArray(data)).assertEqual(true);
            for (let i = 0; i < data.length; i++) {
                console.info(msg + "checkAllPrinterExtensionInfos data[0].extensionId : " + data[0].extensionId);
                expect(typeof (data[0].extensionId)).assertEqual('number');
                expect(data[0].extensionId).assertEqual(6);
                console.info(msg + "checkAllPrinterExtensionInfos data[0].vendorId : " + data[0].vendorId);
                expect(typeof (data[0].vendorId)).assertEqual('number');
                expect(data[0].vendorId).assertEqual(6);
                console.info(msg + "checkAllPrinterExtensionInfos data[0].vendorName : " + data[0].vendorName);
                expect(typeof (data[0].vendorName)).assertEqual('string');
                expect(data[0].vendorName).assertEqual("vendorName = print 1.0");
                console.info(msg + "checkAllPrinterExtensionInfos data[0].vendorIcon : " + data[0].vendorIcon);
                expect(typeof (data[0].vendorIcon)).assertEqual('number');
                expect(data[0].vendorIcon).assertEqual(6);
                console.info(msg + "checkAllPrinterExtensionInfos data[0].version : " + data[0].version);
                expect(typeof (data[0].version)).assertEqual('string');
                expect(data[0].version).assertEqual("version = 1.0.0");
            }
        }

        /**
         * @tc.number  RequestPrint_test_0400
         * @tc.name    queryAllPrinterExtensionInfos: Get all printer extension installed (by callback)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_0400', 0, async function (done) {
            console.info('------------start RequestPrint_test_0400-------------');
            TAG = "RequestPrint_test_0400";
            let details;
            await print.queryExtensionAbilityInfos((err, data) => {
                if (err) {
                    console.info(TAG + ' err: ' + JSON.stringify(err));
                } else {
                    details = data;
                    console.info(TAG + ' result: ' + JSON.stringify(data));
                }
            });
            await sleep(waitTime);
            console.info(TAG + ' result details: ' + JSON.stringify(details));
            checkAllPrinterExtensionInfos(TAG, details);
            console.info('------------end RequestPrint_test_0400-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_0500
         * @tc.name  startDiscoverPrinter: Load the specific printer extension and start to discover printer(by Promise)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_0500', 0, async function (done) {
            console.info('------------start RequestPrint_test_0500-------------');
            TAG = 'RequestPrint_test_0500';
            await print.startDiscoverPrinter(extensionList).then((data) => {
                console.info(TAG + ' result: ' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('boolean');
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(TAG + ' err: ' + JSON.stringify(error));
                expect(false).assertTrue();
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
            TAG = 'RequestPrint_test_0600';
            await print.startDiscoverPrinter(extensionList, (err, data) => {
                if (err) {
                    console.info(TAG + ' err: ' + JSON.stringify(err));
                    expect(false).assertTrue();
                } else {
                    console.info(TAG + ' result: ' + JSON.stringify(data));
                    expect(typeof (data)).assertEqual('boolean');
                    expect(data).assertEqual(true);
                }
            });
            console.info('------------end RequestPrint_test_0600-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_0700
         * @tc.name    stopDiscoverPrinter: Stop discovering the printer with specific printer extension (by Promise)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_0700', 0, async function (done) {
            console.info('------------start RequestPrint_test_0700-------------');
            TAG = 'RequestPrint_test_0700';
            await print.stopDiscoverPrinter().then((data) => {
                console.info(TAG + ' stopDiscoverPrinter result: ' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('boolean');
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(TAG + ' stopDiscoverPrinter err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            console.info('------------end RequestPrint_test_0700-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_0800
         * @tc.name    stopDiscoverPrinter: Stop discovering the printer with specific printer extension (by callback)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_0800', 0, async function (done) {
            console.info("------------start RequestPrint_test_0800-------------");
            TAG = 'RequestPrint_test_0800';
            await print.stopDiscoverPrinter((err, data) => {
                if (err) {
                    console.info(TAG + ' stopDiscoverPrinter err: ' + JSON.stringify(err));
                    expect(false).assertTrue();
                } else {
                    console.info(TAG + ' stopDiscoverPrinter result: ' + JSON.stringify(data));
                    expect(typeof (data)).assertEqual('boolean');
                    expect(data).assertEqual(true);
                }
            });
            console.info('------------end RequestPrint_test_0800-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_0900
         * @tc.name    connectPrinter: Connect the specific printer (by Promise)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_0900', 0, async function (done) {
            console.info('------------start RequestPrint_test_0900-------------');
            TAG = 'RequestPrint_test_0900';
            await print.connectPrinter(printerId).then((data) => {
                console.info(TAG + ' result: ' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('boolean');
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(TAG + ' err: ' + JSON.stringify(error));
                expect(false).assertTrue();
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
            TAG = 'RequestPrint_test_1000';
            await print.connectPrinter(printerId, (err, data) => {
                if (err) {
                    console.info(TAG + ' err: ' + JSON.stringify(err));
                    expect(false).assertTrue();
                } else {
                    console.info(TAG + ' result: ' + JSON.stringify(data));
                    expect(typeof (data)).assertEqual('boolean');
                    expect(data).assertEqual(true);
                }
            });
            console.info('------------end RequestPrint_test_1000-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_1100
         * @tc.name    disconnectPrinter: Disconnect the specific printer (by Promise)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_1100', 0, async function (done) {
            console.info('------------start RequestPrint_test_1100-------------');
            TAG = 'RequestPrint_test_1100';
            await print.disconnectPrinter(printerId).then((data) => {
                console.info(TAG + ' disconnectPrinter result: ' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('boolean');
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(TAG + ' disconnectPrinter err: ' + JSON.stringify(error));
                expect(false).assertTrue();
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
            TAG = 'RequestPrint_test_1200';
            await print.disconnectPrinter(printerId, (err, data) => {
                if (err) {
                    console.info(TAG + ' disconnectPrinter err: ' + JSON.stringify(err));
                    expect(false).assertTrue();
                } else {
                    console.info(TAG + ' disconnectPrinter result: ' + JSON.stringify(data));
                    expect(typeof (data)).assertEqual('boolean');
                    expect(data).assertEqual(true);
                }
            });
            console.info('------------end RequestPrint_test_1200-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_1300
         * @tc.name    queryPrinterCapability: Query capability for the specific printer (by Promise)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_1300', 0, async function (done) {
            console.info('------------start RequestPrint_test_1300-------------');
            TAG = 'RequestPrint_test_1300';
            let details;
            await print.queryPrinterCapability(printerId).then((data) => {
                details = data;
                console.info(TAG + ' result: ' + JSON.stringify(data));
            }).catch ((error) => {
                console.info(TAG + ' err: ' + JSON.stringify(error));
            });
            await sleep(waitTime);
            console.info(TAG + ' result details: ' + JSON.stringify(details));
            checkPrinterCapability(TAG, details);
            console.info('------------end RequestPrint_test_1300-------------');
            done();
        });

        function checkPrinterCapability(msg, details) {
            console.info(msg + ' checkPrinterCapability: ' + JSON.stringify(details));
            expect(typeof (details)).assertEqual('object');
            console.info(msg + ' checkPrinterCapability details.minMargin: ' + JSON.stringify(details.minMargin));
            expect(typeof (details.minMargin)).assertEqual('object');
            let printMargin = details.minMargin;
            expect(typeof (printMargin.top)).assertEqual('number');
            expect(printMargin.top).assertEqual(0);
            expect(typeof (printMargin.bottom)).assertEqual('number');
            expect(printMargin.bottom).assertEqual(0);
            expect(typeof (printMargin.left)).assertEqual('number');
            expect(printMargin.left).assertEqual(0);
            expect(typeof (printMargin.right)).assertEqual('number');
            expect(printMargin.right).assertEqual(0);
            console.info(msg + 'checkPrinterCapability details.pageSize: ' + JSON.stringify(details.pageSize));
            expect(Array.isArray(details.pageSize)).assertEqual(true);
            for (let s = 0; s < details.pageSize.length; s++) {
                let printerPageSize = details.pageSize[s];
                expect(typeof (printerPageSize.id)).assertEqual('number');
                expect(printerPageSize.id).assertEqual(0);
                expect(typeof (printerPageSize.name)).assertEqual('string');
                expect(printerPageSize.name).assertEqual("");
                expect(typeof (printerPageSize.width)).assertEqual('number');
                expect(printerPageSize.width).assertEqual(0);
                expect(typeof (printerPageSize.height)).assertEqual('number');
                expect(printerPageSize.height).assertEqual(0);
            }
            console.info(msg + ' checkPrinterCapability details.resolution: ' + JSON.stringify(details.resolution));
            expect(Array.isArray(details.resolution)).assertEqual(true);
            for (let j = 0; j < details.resolution.length; j++) {
                let PrinterResolution = details.resolution[j];
                expect(typeof (PrinterResolution.id)).assertEqual('number');
                expect(PrinterResolution.id).assertEqual(0);
                expect(typeof (PrinterResolution.horizontalDpi)).assertEqual('number');
                expect(PrinterResolution.horizontalDpi).assertEqual(0);
                expect(typeof (PrinterResolution.verticalDpi)).assertEqual('number');
                expect(PrinterResolution.verticalDpi).assertEqual(0);
            }
            console.info(msg + ' checkPrinterCapability details.colorMode: ' + JSON.stringify(details.colorMode));
            expect(typeof (details.colorMode)).assertEqual('number');
            expect(details.colorMode).assertEqual(0);
            console.info(msg + ' checkPrinterCapability details.duplexMode: ' + JSON.stringify(details.duplexMode));
            expect(typeof (details.duplexMode)).assertEqual('number');
            expect(details.duplexMode).assertEqual(0);
        };

        /**
         * @tc.number  RequestPrint_test_1400
         * @tc.name    queryPrinterCapability: Query capability for the specific printer (by callback)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_1400', 0, async function (done) {
            console.info('------------start RequestPrint_test_1400-------------');
            TAG = 'RequestPrint_test_1400';
            let details;
            await  print.queryPrinterCapability(printerId, (err, data) => {
                if (err) {
                    console.info(TAG + ' err: ' + JSON.stringify(err));
                } else {
                    details = data;
                    console.info(TAG + ' result: ' + JSON.stringify(data));
                }
            });
            await sleep(waitTime);
            console.info(TAG + ' result details: ' + JSON.stringify(details));
            checkPrinterCapability(TAG, details);
            console.info('------------end RequestPrint_test_1400-------------');
            done();
        });

        /**
        * @tc.number  RequestPrint_test_1500
        * @tc.name    startPrintJob: Start print job (by Promise)
        * @tc.desc    Function test
        */
        it('RequestPrint_test_1500', 0, async function (done) {
            console.info('------------start RequestPrint_test_1500-------------');
            TAG = 'RequestPrint_test_1500';
            await print.startPrintJob(printJob).then((data) => {
                console.info(TAG + ' result: ' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('boolean');
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(TAG + ' err: ' + JSON.stringify(error));
                expect(false).assertTrue();
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
            TAG = 'RequestPrint_test_1600';
            await print.startPrintJob(printJob, (err, data) => {
                if (err) {
                    console.info(TAG + ' err: ' + JSON.stringify(err));
                    expect(false).assertTrue();
                } else {
                    console.info(TAG + ' result: ' + JSON.stringify(data));
                    expect(typeof (data)).assertEqual('boolean');
                    expect(data).assertEqual(true);
                }
            });
            console.info('------------end RequestPrint_test_1600-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_1700
         * @tc.name    cancelPrintJob: Cancel the print job has been sent to printer (by Promise)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_1700', 0, async function (done) {
            console.info('------------start RequestPrint_test_1700-------------');
            TAG = 'RequestPrint_test_1700';
            await print.cancelPrintJob(printJob).then((data) => {
                console.info(TAG + 'cancelPrintJob result:' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('boolean');
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(TAG = ' cancelPrintJob err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            console.info('------------end RequestPrint_test_1700-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_1800
         * @tc.name    cancelPrintJob: Cancel the print job has been sent to printer (by callback)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_1800', 0, async function (done) {
            console.info('------------start RequestPrint_test_1800-------------');
            TAG = 'RequestPrint_test_1800';
            await print.cancelPrintJob(printJob, (err, data) => {
                if (err) {
                    console.info(TAG + ' cancelPrintJob err: ' + JSON.stringify(err));
                    expect(false).assertTrue();
                } else {
                    console.info(TAG + ' cancelPrintJob result: ' + JSON.stringify(data));
                    expect(typeof (data)).assertEqual('boolean');
                    expect(data).assertEqual(true);
                }
            });
            console.info('------------end RequestPrint_test_1800-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_1900
         * @tc.name    requestPrintPreview: Request preview of the print job (by Promise)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_1900', 0, async function (done) {
            console.info('------------start RequestPrint_test_1900-------------');
            TAG = 'RequestPrint_test_1900';
            await print.requestPrintPreview(printJob).then((data) => {
                console.info(TAG + ' result: ' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('string');
                expect(data).assertEqual('');
            }).catch ((error) => {
                console.info(TAG + ' err: ' + JSON.stringify(error));
                expect(false).assertTrue();
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
            TAG = 'RequestPrint_test_2000';
            await print.requestPrintPreview(printJob, (err, data) => {
                if (err) {
                    console.info(TAG + ' err: ' + JSON.stringify(err));
                    expect(false).assertTrue();
                } else {
                    console.info(TAG + ' result: ' + JSON.stringify(data));
                    expect(typeof (data)).assertEqual('string');
                    expect(data).assertEqual('');
                }
            });
            console.info('------------end RequestPrint_test_2000-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_2100
         * @tc.name    addPrinters: New printers have been found and notify Print SA (by Promise)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_2100', 0, async function (done) {
            console.info('------------start RequestPrint_test_2100-------------');
            TAG = 'RequestPrint_test_2100';
            await print.addPrinters(printerInfoArray).then((data) => {
                console.info(TAG + ' result: ' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('boolean');
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(TAG + ' err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            console.info('------------end RequestPrint_test_2100-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_2200
         * @tc.name    addPrinters: New printers have been found and notify Print SA (by callback)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_2200', 0, async function (done) {
            console.info("------------start RequestPrint_test_2200-------------");
            TAG = 'RequestPrint_test_2200';
            await print.addPrinters(printerInfoArray, (err, data) => {
                if (err) {
                    console.info(TAG + ' err: ' + JSON.stringify(err));
                    expect(false).assertTrue();
                } else {
                    console.info(TAG + ' result: ' + JSON.stringify(data));
                    expect(typeof (data)).assertEqual('boolean');
                    expect(data).assertEqual(true);
                }
            });
            console.info('------------end RequestPrint_test_2200-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_2300
         * @tc.name    removePrinters: Printers have been lost and notify Print SA (by Promise)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_2300', 0, async function (done) {
            console.info('------------start RequestPrint_test_2300-------------');
            TAG = 'RequestPrint_test_2300';
            await print.removePrinters(printerInfoArray).then((data) => {
                console.info(TAG + ' removePrinters result: ' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('boolean');
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(TAG + ' removePrinters err: ' + JSON.stringify(error));
                expect(false).assertTrue();
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
            TAG = 'RequestPrint_test_2400';
            await print.removePrinters(printerInfoArray, (err, data) => {
                if (err) {
                    console.info(TAG + ' removePrinters err: ' + JSON.stringify(err));
                    expect(false).assertTrue();
                } else {
                    console.info(TAG + ' removePrinters result: ' + JSON.stringify(data));
                    expect(typeof (data)).assertEqual('boolean');
                    expect(data).assertEqual(true);
                }
            });
            console.info('------------end RequestPrint_test_2400-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_2500
         * @tc.name    updatePrinterState: Notify Print SA the state of printer has been changed (by Promise)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_2500', 0, async function (done) {
            console.info('------------start RequestPrint_test_2500-------------');
            TAG = 'RequestPrint_test_2500';
            await print.updatePrinterState(printerId, printerState).then((data) => {
                console.info(TAG + ' result: ' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('boolean');
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(TAG + ' err: ' + JSON.stringify(error));
                expect(false).assertTrue();
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
            TAG = 'RequestPrint_test_2600';
            await print.updatePrinterState(printerId, printerState, (err, data) => {
                if (err) {
                    console.info(TAG + ' err: ' + JSON.stringify(err));
                    expect(false).assertTrue();
                } else {
                    console.info(TAG + ' result: ' + JSON.stringify(data));
                    expect(typeof (data)).assertEqual('boolean');
                    expect(data).assertEqual(true);
                }
            });
            console.info('------------end RequestPrint_test_2600-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_2700
         * @tc.name    updatePrintJobState: Notify Print SA the state of print job has been changed (by Promise)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_2700', 0, async function (done) {
            console.info('------------start RequestPrint_test_2700-------------');
            TAG = 'RequestPrint_test_2700';
            await print.updatePrintJobState(jobId, printJobState).then((data) => {
                console.info(TAG + ' result: ' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('boolean');
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(TAG + ' err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            console.info('------------end RequestPrint_test_2700-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_test_2800
         * @tc.name    updatePrintJobState: Notify Print SA the state of print job has been changed (by callback)
         * @tc.desc    Function test
         */
        it('RequestPrint_test_2800', 0, async function (done) {
            console.info('------------start RequestPrint_test_2800-------------');
            TAG = 'RequestPrint_test_2800';
            await print.updatePrintJobState(jobId, printJobState, (err, data) => {
                if (err) {
                    console.info(TAG + ' err: ' + JSON.stringify(err));
                    expect(false).assertTrue();
                } else {
                    console.info(TAG + ' result: ' + JSON.stringify(data));
                    expect(typeof (data)).assertEqual('boolean');
                    expect(data).assertEqual(true);
                }
            });
            console.info('------------end RequestPrint_test_2800-------------');
            done();
        });

        /**
        * @tc.number  RequestPrint_test_2900
        * @tc.name    startDiscoverPrinter: Load the specific printer extension and start to discover printer
           ('extensionList' parameter is empty)
        * @tc.desc    Function test
        */
        it('RequestPrint_test_2900', 0, async function (done) {
            console.info('------------start RequestPrint_test_2900-------------');
            TAG = "RequestPrint_test_2900";
            await print.startDiscoverPrinter(extensionListNull).then((data) => {
                console.info(TAG + ' result: ' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('boolean');
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(TAG + ' err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            console.info('------------end RequestPrint_test_2900-------------');
            done();
        });
    })
}