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

export default function requestPrintJsunit2() {
    describe('requestPrintTest', function () {
        let printerState = 1
        let printJobState = 2
        let jobId = 1
        let printerState1 = 0
        let printJobState1 = 8
        let printerId = 3
        let filesNull = []

        let printerRange = {
            startPage: 1,
            endPage: 4,
            pages: [1, 4],
        }
        let printerRange1 = {
            startPage: 4,
            endPage: 2,
            pages: [4, 2],
        }

        let printerPageSize1 = {
            id: '1',
            name: '',
            width: 200,
            height: 200,
        }
        let printerPageSizeArr = [{
                                      id: '1',
                                      name: 'string',
                                      width: 200,
                                      height: 200,
                                  }]
        let printerPageSizeArr1 = [{
                                       id: '1',
                                       name: '',
                                       width: 200,
                                       height: 200,
                                   }]

        let printMargin = {
            top: 1,
            bottom: 2,
            left: 1,
            right: 1,
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
            duplexMode: 1,
        }
        let printerCapability1 = {
            minMargin: printMargin,
            pageSize: printerPageSizeArr1,
            resolution: printerResolutionArr,
            colorMode: 1,
        }

        let printerInfoArr2 = [{
                                   printerId: 1,
                                   printerName: '',
                                   printerIcon: 1,
                                   printerState: printerState,
                                   description: 'string',
                                   capability: printerCapability,
                               }]

        let printerInfoArr4 = [{
                                   printerId: 1,
                                   printerName: 'string',
                                   printerIcon: 1,
                                   printerState: printerState1,
                                   description: 'string',
                                   capability: printerCapability,
                               }]

        let printerInfoArr6 = [{
                                   printerId: 1,
                                   printerName: 'string',
                                   printerIcon: 1,
                                   printerState: printerState,
                                   description: 'string',
                                   capability: printerCapability1,
                               }]

        let printJob2 = {
            files: [''],
            jobId: 3,
            printerId: 2,
            jobState: printJobState,
            copyNumber: 3,
            pageRange: printerRange,
        }

        let printJob5 = {
            files: ['D:/dev/a.docx'],
            jobId: 3,
            printerId: 2,
            jobState: printJobState1,
            copyNumber: 3,
            pageRange: printerRange,
        }

        let printJob7 = {
            files: ['D:/dev/a.docx'],
            jobId: 3,
            printerId: 2,
            jobState: printJobState,
            copyNumber: 3,
            pageRange: printerRange1,
        }
        let printJob8 = {
            files: ['D:/dev/a.docx'],
            jobId: 1,
            printerId: 2,
            jobState: printJobState,
            copyNumber: 3,
            pageRange: printerRange,
            isSequential: false,
            pageSize: printerPageSize1,
        }

        let TAG = '';
        const waitTime = 1000;
        function sleep(time) {
            return new Promise((resolve) => setTimeout(resolve, time))
        }

        /**
         * @tc.number  RequestPrint_abnormal_test_0100
         * @tc.name    print: Start new print task for App ('files' parameter is empty)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_0100', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_0100-------------');
            TAG = 'RequestPrint_abnormal_test_0100';
            let wrong;
            await print.print(filesNull).then((data) => {
                console.info(TAG + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch ((error) => {
                console.info(TAG + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(4);
            console.info('------------end RequestPrint_abnormal_test_0100-------------');
            done();
        });

        /**
         * @tc.number RequestPrint_abnormal_test_0300
         * @tc.name startPrintJob: Start print job ('PrintJob' parameter : files is null)
         * @tc.desc Function test
         */
        it('RequestPrint_abnormal_test_0300', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_0300-------------');
            TAG = 'RequestPrint_abnormal_test_0300';
            let wrong;
            await print.startPrintJob(printJob2).then((data) => {
                console.info(TAG + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch ((error) => {
                console.info(TAG + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(4);
            console.info('------------end RequestPrint_abnormal_test_0300-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_0400
         * @tc.name    startPrintJob: Start print job ('PrintJob' parameter : PrintJobState is wrong)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_0400', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_0400-------------');
            TAG = 'RequestPrint_abnormal_test_0400';
            let wrong;
            await print.startPrintJob(printJob5).then((data) => {
                console.info(TAG + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch ((error) => {
                console.info(TAG + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(5);
            console.info('------------end RequestPrint_abnormal_test_0400-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_0500
         * @tc.name    startPrintJob: Start print job ('PrintJob' parameter : PrinterRange is wrong)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_0500', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_0500-------------');
            TAG = 'RequestPrint_abnormal_test_0500';
            let wrong;
            await print.startPrintJob(printJob7).then((data) => {
                console.info(TAG + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch ((error) => {
                console.info(TAG + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(3);
            console.info('------------end RequestPrint_abnormal_test_0500-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_0600
         * @tc.name    startPrintJob: Start print job ('PrintJob' parameter : PrinterPageSize is wrong)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_0600', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_0600-------------');
            TAG = 'RequestPrint_abnormal_test_0600';
            let wrong;
            await print.startPrintJob(printJob8).then((data) => {
                console.info(TAG + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch ((error) => {
                console.info(TAG + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(4);
            console.info('------------end RequestPrint_abnormal_test_0600-------------');
            done();
        });

        /**
         * @tc.number RequestPrint_abnormal_test_0700
         * @tc.name cancelPrintJob: Cancel the print job has been sent to printer ('PrintJob' parameter : files is null)
         * @tc.desc Function test
         */
        it('RequestPrint_abnormal_test_0700', 0, async function (done) {
            console.info("------------start RequestPrint_abnormal_test_0700-------------");
            TAG = 'RequestPrint_abnormal_test_0700';
            let wrong;
            await print.cancelPrintJob(printJob2).then((data) => {
                console.info(TAG + ' cancelPrintJob result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch ((error) => {
                console.info(TAG + ' cancelPrintJob err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(4);
            console.info('------------end RequestPrint_abnormal_test_0700-------------');
            done();
        });

        /**
         * @tc.number RequestPrint_abnormal_test_0800
         * @tc.name cancelPrintJob: Cancel the print job has been sent to printer
               ('PrintJob' parameter : PrintJobState is wrong)
         * @tc.desc Function test
         */
        it('RequestPrint_abnormal_test_0800', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_0800-------------');
            TAG = 'RequestPrint_abnormal_test_0800';
            let wrong;
            await print.cancelPrintJob(printJob5).then((data) => {
                console.info(TAG + ' cancelPrintJob result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch ((error) => {
                console.info(TAG = ' cancelPrintJob err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(5);
            console.info('------------end RequestPrint_abnormal_test_0800-------------');
            done();
        });

        /**
         * @tc.number RequestPrint_abnormal_test_0900
         * @tc.name cancelPrintJob: Cancel the print job has been sent to printer
             ('PrintJob' parameter : PrinterRange is wrong)
         * @tc.desc Function test
         */
        it('RequestPrint_abnormal_test_0900', 0, async function (done) {
            console.info("------------start RequestPrint_abnormal_test_0900-------------");
            TAG = "RequestPrint_abnormal_test_0900";
            let wrong;
            await print.cancelPrintJob(printJob7).then((data) => {
                console.info(TAG + 'cancelPrintJob result: ' + JSON.stringify(data));
                expect(false).assertTrue;
            }).catch ((error) => {
                console.info(TAG + ' cancelPrintJob err: '+ JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(3);
            console.info('------------end RequestPrint_abnormal_test_0900-------------');
            done();
        });

        /**
         * @tc.number RequestPrint_abnormal_test_1000
         * @tc.name cancelPrintJob: Cancel the print job has been sent to printer
              ('PrintJob' parameter : PrinterPageSize is wrong)
         * @tc.desc Function test
         */
        it('RequestPrint_abnormal_test_1000', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_1000-------------');
            TAG = 'RequestPrint_abnormal_test_1000';
            let wrong;
            await print.cancelPrintJob(printJob8).then((data) => {
                console.info(TAG + ' cancelPrintJob result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch ((error) => {
                console.info(TAG + 'cancelPrintJob err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(4);
            console.info('------------end RequestPrint_abnormal_test_1000-------------');
            done();
        });

        /**
         * @tc.number RequestPrint_abnormal_test_1100
         * @tc.name requestPrintPreview: Request preview of the print job ('PrintJob' parameter :files is null)
         * @tc.desc Function test
         */
        it('RequestPrint_abnormal_test_1100', 0, async function (done) {
            console.info("------------start RequestPrint_abnormal_test_1100-------------");
            TAG = "RequestPrint_abnormal_test_1100";
            let wrong;
            await print.requestPrintPreview(printJob2).then((data) => {
                console.info(TAG + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch ((error) => {
                console.info(TAG + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(4);
            console.info('------------end RequestPrint_abnormal_test_1100-------------');
            done();
        });

        /**
         * @tc.number RequestPrint_abnormal_test_1200
         * @tc.name requestPrintPreview: Request preview of the print job ('PrintJob' parameter : PrintJobState is wrong)
         * @tc.desc Function test
         */
        it('RequestPrint_abnormal_test_1200', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_1200-------------');
            TAG = 'RequestPrint_abnormal_test_1200';
            let wrong;
            await print.requestPrintPreview(printJob5).then((data) => {
                console.info(TAG + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch ((error) => {
                console.info(TAG + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(5);
            console.info('------------end RequestPrint_abnormal_test_1200-------------');
            done();
        });

        /**
         * @tc.number RequestPrint_abnormal_test_1300
         * @tc.name requestPrintPreview: Request preview of the print job ('PrintJob' parameter : PrinterRange is wrong)
         * @tc.desc Function test
         */
        it('RequestPrint_abnormal_test_1300', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_1300-------------');
            TAG = 'RequestPrint_abnormal_test_1300';
            let wrong;
            await print.requestPrintPreview(printJob7).then((data) => {
                console.info(TAG + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch ((error) => {
                console.info(TAG + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(3);
            console.info('------------end RequestPrint_abnormal_test_1300-------------');
            done();
        });

        /**
         * @tc.number RequestPrint_abnormal_test_1400
         * @tc.name requestPrintPreview: Request preview of the print job
              ('PrintJob' parameter : PrinterPageSize is wrong)
         * @tc.desc Function test
         */
        it('RequestPrint_abnormal_test_1400', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_1400-------------');
            TAG = 'RequestPrint_abnormal_test_1400';
            let wrong;
            await print.requestPrintPreview(printJob8).then((data) => {
                console.info(TAG + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch ((error) => {
                console.info(TAG + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(4);
            console.info('------------end RequestPrint_abnormal_test_1400-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_1500
         * @tc.name    addPrinters: New printers have been found and notify Print SA
             ('PrinterInfo' parameter : printerName is null)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_1500', 0, async function (done) {
            console.info("------------start RequestPrint_abnormal_test_1500-------------");
            TAG = "RequestPrint_abnormal_test_1500";
            let wrong;
            await print.addPrinters(printerInfoArr2).then((data) => {
                console.info(TAG + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch ((error) => {
                console.info(TAG + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(4);
            console.info('------------end RequestPrint_abnormal_test_1500-------------');
            done();
        });

        /**
         * @tc.number RequestPrint_abnormal_test_1600
         * @tc.name addPrinters: New printers have been found and notify Print SA
               ('PrinterInfo' parameter : printerState is wrong)
         * @tc.desc Function test
         */
        it('RequestPrint_abnormal_test_1600', 0, async function (done) {
            console.info("------------start RequestPrint_abnormal_test_1600-------------");
            TAG = "RequestPrint_abnormal_test_1600";
            let wrong;
            await print.addPrinters(printerInfoArr4).then((data) => {
                console.info(TAG + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch ((error) => {
                console.info(TAG + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(5);
            console.info('------------end RequestPrint_abnormal_test_1600-------------');
            done();
        });

        /**
         * @tc.number RequestPrint_abnormal_test_1700
         * @tc.name addPrinters: New printers have been found and notify Print SA
              ('PrinterInfo' parameter : PrinterCapability is wrong)
         * @tc.desc Function test
         */
        it('RequestPrint_abnormal_test_1700', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_1700-------------');
            TAG = 'RequestPrint_abnormal_test_1700';
            let wrong;
            await print.addPrinters(printerInfoArr6).then((data) => {
                console.info(TAG + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch ((error) => {
                console.info(TAG + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(2);
            console.info('------------end RequestPrint_abnormal_test_1700-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_1800
         * @tc.name    removePrinters: Printers have been lost and notify Print SA
             ('PrinterInfo' parameter ： printerName is null)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_1800', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_1800-------------');
            TAG = 'RequestPrint_abnormal_test_1800';
            let wrong;
            await print.removePrinters(printerInfoArr2).then((data) => {
                console.info(TAG + ' removePrinters result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch ((error) => {
                console.info(TAG + ' removePrinters err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(4);
            console.info('------------end RequestPrint_abnormal_test_1800-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_1900
         * @tc.name    removePrinters: Printers have been lost and notify Print SA
              ('PrinterInfo' parameter : printerState is wrong)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_1900', 0, async function (done) {
            console.info("------------start RequestPrint_abnormal_test_1900-------------");
            TAG = 'RequestPrint_abnormal_test_1900';
            let wrong;
            await print.removePrinters(printerInfoArr4).then((data) => {
                console.info(TAG + ' removePrinters result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch ((error) => {
                console.info(TAG + ' removePrinters err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(5);
            console.info('------------end RequestPrint_abnormal_test_1900-------------');
            done();
        });

        /**
         * @tc.number RequestPrint_abnormal_test_2000
         * @tc.name removePrinters: Printers have been lost and notify Print SA
               ('PrinterInfo' parameter : PrinterCapability is wrong)
         * @tc.desc Function test
         */
        it('RequestPrint_abnormal_test_2000', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_2000-------------');
            TAG = 'RequestPrint_abnormal_test_2000';
            let wrong;
            await print.removePrinters(printerInfoArr6).then((data) => {
                console.info(TAG + ' removePrinters result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch ((error) => {
                console.info(TAG + ' removePrinters err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(4);
            console.info('------------end RequestPrint_abnormal_test_2000-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_2100
         * @tc.name    updatePrinterState: Notify Print SA the state of printer has been changed (PrinterState is wrong)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_2100', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_2100-------------');
            TAG = 'RequestPrint_abnormal_test_2100';
            let wrong;
            await print.updatePrinterState(printerId, printerState1).then((data) => {
                console.info(TAG + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch ((error) => {
                console.info(TAG + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(5);
            console.info('------------end RequestPrint_abnormal_test_2100-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_2200
         * @tc.name    updatePrintJobState: Notify Print SA the state of print job has been changed (PrintJobState is wrong)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_2200', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_2200-------------');
            TAG = 'RequestPrint_abnormal_test_2200';
            let wrong;
            await print.updatePrintJobState(jobId, printJobState1).then((data) => {
                console.info(TAG + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch ((error) => {
                console.info(TAG + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(5);
            console.info('------------end RequestPrint_abnormal_test_2200-------------');
            done();
        });
    })
}