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

export default function requestPrintJsunit3() {
    describe('requestPrintTest', function () {
        let printTask;
        let jobInfo;
        let jobId;
        let printerInfo;
        let printerId;
        let extensionIds = [];

        let printerPageSizeArr = [
            {
                id: '1',
                name: 'string',
                width: 200,
                height: 200,
            }
        ]

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
            duplexMode: 2,
        }
        let printerInfoArr = [{
                                  printerId: 1,
                                  printerName: 'string',
                                  printerIcon: 1,
                                  printerState: 1,
                                  description: 'string',
                                  capability: printerCapability,
                              }]

        let file = ['./data/app/sample.pdf1', './data/app/sample.pdf2', './data/app/sample.pdf3']

        let TAG = '';
        const waitTime = 1000;
        function sleep(time) {
            return new Promise((resolve) => setTimeout(resolve, time))
        }

        /**
         * @tc.number RequestPrint_notify_test_0100
         * @tc.name on: Register event callback for the state change of print job (PRINT_JOB_CREATED)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_0100', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_0100-------------');
            TAG = 'RequestPrint_notify_test_0100';
            print.on('jobStateChange', (state, info) => {
                if (state == print.PrintJobState.PRINT_JOB_CREATED) {
                    console.info(TAG + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    checkPrintJob1(TAG, info);
                }
            }).catch ((error) => {
                console.info(TAG + ' jobStateChange err: ' + JSON.stringify(error));
            });
            await sleep(waitTime);
            printEvent(TAG, file);
            await sleep(waitTime);
            offJobStateChangeEvent(TAG);
            console.info('------------end RequestPrint_notify_test_0100-------------');
            done();
        });

        function checkPrintJob1(msg, info) {
            checkPrintJobCommon(msg, info);
            checkPrintJobOthers(msg, info);
            console.info(msg + ' checkPrintJob info.jobState: ' + JSON.stringify(info.jobState));
            expect(typeof (info.jobState)).assertEqual('number');
            expect(info.jobState).assertEqual(1);
        };

        /**
         * @tc.number RequestPrint_notify_test_0200
         * @tc.name on: Register event callback for the state change of printer (PRINTER_ADDED)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_0200', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_0200-------------');
            TAG = 'RequestPrint_notify_test_0200';
            print.on('printerStateChange', (state, info) => {
                if (state == print.PrinterState.PRINTER_ADDED) {
                    console.info('printer added. info: ' + JSON.stringify(info));
                    printerInfo = info;
                    checkPrinterInfo1(TAG, info);
                }
            }).catch ((error) => {
                console.info(TAG + 'printerStateChange err: ' + JSON.stringify(error));
            });
            await sleep(waitTime);
            queryAllPrinterExtensionsEvent(TAG);
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            offPrinterStateChangeEvent(TAG);
            console.info('------------end RequestPrint_notify_test_0200-------------');
            done();
        });

        function checkPrinterInfo1(msg, info) {
            checkPrinterInfoCommon(msg, info);
            checkPrinterCapability(msg, info);
            console.info(msg + ' checkPrinterInfo info.PrinterState: ' + JSON.stringify(info.PrinterState));
            expect(typeof (info.PrinterState)).assertEqual('number');
            expect(info.PrinterState).assertEqual(1);
        };

        /**
         * @tc.number RequestPrint_notify_test_0300
         * @tc.name on: Register event callback for the state change of printer (PRINTER_REMOVED)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_0300', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_0300-------------');
            TAG = 'RequestPrint_notify_test_0300';
            print.on('printerStateChange', (state, info) => {
                if (state == print.PrinterState.PRINTER_REMOVED) {
                    console.info('printer removed. info: ' + JSON.stringify(info));
                    printerInfo = info;
                    checkPrinterInfo2(TAG, info);
                }
            }).catch ((error) => {
                console.info(TAG + ' printerStateChange err: ' + JSON.stringify(error));
            });
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            removePrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            offPrinterStateChangeEvent(TAG);
            console.info('------------end RequestPrint_notify_test_0300-------------');
            done();
        });

        function checkPrinterInfo2(msg, info) {
            checkPrinterInfoCommon(msg, info);
            checkPrinterCapability(msg, info);
            console.info(msg + ' checkPrinterInfo info.PrinterState: ' + JSON.stringify(info.PrinterState));
            expect(typeof (info.PrinterState)).assertEqual('number');
            expect(info.PrinterState).assertEqual(2);
        };

        /**
         * @tc.number RequestPrint_notify_test_0400
         * @tc.name on: Register event callback for the state change of printer (PRINTER_IDLE)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_0400', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_0400-------------');
            TAG = 'RequestPrint_notify_test_0400';
            print.on('printerStateChange', (state, info) => {
                if (state == print.PrinterState.PRINTER_IDLE) {
                    console.info('printer idle. info: ' + JSON.stringify(info));
                    printerInfo = info;
                    printerId = info.printerId
                    checkPrinterInfo3(TAG, info);
                }
            }).catch ((error) => {
                console.info(TAG + ' printerStateChange err: ' + JSON.stringify(error));
            });
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            updatePrinterStateEvent(TAG, printerId, print.PrinterState.PRINTER_IDLE);
            await sleep(waitTime);
            offPrinterStateChangeEvent(TAG);
            console.info('------------end RequestPrint_notify_test_0400-------------');
            done();
        });

        function checkPrinterInfo3(msg, info) {
            checkPrinterInfoCommon(msg, info);
            checkPrinterCapability(msg, info);
            console.info(msg + ' checkPrinterInfo info.PrinterState: ' + JSON.stringify(info.PrinterState));
            expect(typeof (info.PrinterState)).assertEqual('number');
            expect(info.PrinterState).assertEqual(3);
        };

        /**
         * @tc.number RequestPrint_notify_test_0500
         * @tc.name on: Register event callback for the state change of printer (PRINTER_PRINTING)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_0500', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_0500-------------');
            TAG = 'RequestPrint_notify_test_0500';
            print.on('printerStateChange', (state, info) => {
                if (state == print.PrinterState.PRINTER_PRINTING) {
                    console.info(' printer printing. info: ' + JSON.stringify(info));
                    printerInfo = info;
                    printerId = info.printerId
                    checkPrinterInfo4(TAG, info);
                }
            }).catch ((error) => {
                console.info(TAG + " printerStateChange err: " + JSON.stringify(error));
            });
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            updatePrinterStateEvent(TAG, printerId, print.PrinterState.PRINTER_PRINTING);
            await sleep(waitTime);
            offPrinterStateChangeEvent(TAG);
            console.info('------------end RequestPrint_notify_test_0500-------------');
            done();
        });

        function checkPrinterInfo4(msg, info) {
            checkPrinterInfoCommon(msg, info);
            checkPrinterCapability(msg, info);
            console.info(msg + ' checkPrinterInfo info.PrinterState: ' + JSON.stringify(info.PrinterState));
            expect(typeof (info.PrinterState)).assertEqual('number');
            expect(info.PrinterState).assertEqual(4);
        };

        /**
         * @tc.number RequestPrint_notify_test_0600
         * @tc.name on: Register event callback for the state change of printer (PRINTER_BLOCKED)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_0600', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_0600-------------');
            TAG = 'RequestPrint_notify_test_0600';
            printTask.on('blocked', () => {
                console.info(TAG + ' print task blocked ')
            });
            await sleep(waitTime);
            print.on('printerStateChange', (state, info) => {
                if (state == print.PrinterState.PRINTER_BLOCKED) {
                    console.info(' printer blocked. info: ' + JSON.stringify(info));
                    printerInfo = info;
                    printerId = info.printerId
                    checkPrinterInfo5(TAG, info);
                }
            }).catch ((error) => {
                console.info(TAG + ' printerStateChange err: ' + JSON.stringify(error));
            });
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            updatePrinterStateEvent(TAG, printerId, print.PrinterState.PRINTER_BLOCKED);
            await sleep(waitTime);
            offPrinterStateChangeEvent(TAG);
            console.info('------------end RequestPrint_notify_test_0600-------------');
            done();
        });

        function checkPrinterInfo5(msg, info) {
            checkPrinterInfoCommon(msg, info);
            checkPrinterCapability(msg, info);
            console.info(msg + ' checkPrinterInfo info.PrinterState: ' + JSON.stringify(info.PrinterState));
            expect(typeof (info.PrinterState)).assertEqual('number');
            expect(info.PrinterState).assertEqual(5);
        };

        /**
         * @tc.number RequestPrint_notify_test_0700
         * @tc.name on: Register event callback for the state change of printer (PRINTER_BUSY)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_0700', 0, async function (done) {
            console.info("------------start RequestPrint_notify_test_0700-------------");
            TAG = "RequestPrint_notify_test_0700";
            print.on('printerStateChange', (state, info) => {
                if (state == print.PrinterState.PRINTER_BUSY) {
                    console.info('printer busy. info: ' + JSON.stringify(info));
                    printerInfo = info;
                    printerId = info.printerId;
                    checkPrinterInfo6(TAG, info);
                }
            }).catch ((error) => {
                console.info(TAG + ' printerStateChange err: ' + JSON.stringify(error));
            });
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            updatePrinterStateEvent(TAG, printerId, print.PrinterState.PRINTER_BUSY);
            await sleep(waitTime);
            offPrinterStateChangeEvent(TAG);
            console.info('------------end RequestPrint_notify_test_0700-------------');
            done();
        });

        function checkPrinterInfo6(msg, info) {
            checkPrinterInfoCommon(msg, info);
            checkPrinterCapability(msg, info);
            console.info(msg + 'checkPrinterInfo info.PrinterState: ' + JSON.stringify(info.PrinterState));
            expect(typeof (info.PrinterState)).assertEqual('number');
            expect(info.PrinterState).assertEqual(6);
        };

        /**
         * @tc.number RequestPrint_notify_test_0800
         * @tc.name on: Register event callback for the state change of printer (PRINTER_FAILED)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_0800', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_0800-------------');
            TAG = 'RequestPrint_notify_test_0800';
            printTask.on('failed', () => {
                console.info(TAG + " print task failed")
            });
            print.on('printerStateChange', (state, info) => {
                if (state == print.PrinterState.PRINTER_FAILED) {
                    console.info(' printer failed. info: ' + JSON.stringify(info));
                    printerInfo = info;
                    printerId = info.printerId;
                    checkPrinterInfo7(TAG, info);
                }
            }).catch ((error) => {
                console.info(TAG + ' printerStateChange err: ' + JSON.stringify(error));
            });
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            updatePrinterStateEvent(TAG, printerId, print.PrinterState.PRINTER_FAILED);
            await sleep(waitTime);
            offPrinterStateChangeEvent(TAG);
            console.info('------------end RequestPrint_notify_test_0800-------------');
            done();
        });

        function checkPrinterInfo7(msg, info) {
            checkPrinterInfoCommon(msg, info);
            checkPrinterCapability(msg, info);
            console.info(msg + ' checkPrinterInfo info.PrinterState: ' + JSON.stringify(info.PrinterState));
            expect(typeof (info.PrinterState)).assertEqual('number');
            expect(info.PrinterState).assertEqual(6);
        };

        /**
         * @tc.number RequestPrint_notify_test_0900
         * @tc.name on: Register event callback for the state change of print job (PRINT_JOB_QUEUED)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_0900', 0, async function (done) {
            console.info("------------start RequestPrint_notify_test_0900-------------");
            TAG = 'RequestPrint_notify_test_0900';
            print.on('jobStateChange', (state, info) => {
                if (state == print.PrintJobState.PRINT_JOB_QUEUED) {
                    console.info(TAG + ' the printJob is queued. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    checkPrintJob2(TAG, info);
                }
            }).catch ((error) => {
                console.info(TAG + ' jobStateChange err: ' + JSON.stringify(error));
            });
            await sleep(waitTime);
            printEvent(TAG, file);
            await sleep(waitTime);
            startPrintJobEvent(TAG, jobInfo);
            await sleep(waitTime);
            updatePrintJobStateEvent(TAG, jobId, print.PrintJobState.PRINT_JOB_QUEUED);
            await sleep(waitTime);
            offJobStateChangeEvent(TAG);
            console.info('------------end RequestPrint_notify_test_0900-------------');
            done();
        });

        function checkPrintJob2(msg, info) {
            checkPrintJobCommon(msg, info);
            checkPrintJobOthers(msg, info);
            console.info(msg + ' checkPrintJob info.jobState: ' + JSON.stringify(info.jobState));
            expect(typeof (info.jobState)).assertEqual('number');
            expect(info.jobState).assertEqual(2);
        }

        /**
         * @tc.number RequestPrint_notify_test_1000
         * @tc.name on: Register event callback for the state change of print job (PRINT_JOB_PRINTING)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_1000', 0, async function (done) {
            console.info("------------start RequestPrint_notify_test_1000-------------");
            TAG = "RequestPrint_notify_test_1000";
            print.on('jobStateChange', (state, info) => {
                if (state == print.PrintJobState.PRINT_JOB_PRINTING) {
                    console.info(TAG + ' the printJob is printing. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    checkPrintJob3(TAG, info);
                }
            }).catch ((error) => {
                console.info(TAG + " jobStateChange err: " + JSON.stringify(error));
            });
            await sleep(waitTime);
            printEvent(TAG, file);
            await sleep(waitTime);
            startPrintJobEvent(TAG, jobInfo);
            await sleep(waitTime);
            updatePrintJobStateEvent(TAG, jobId, print.PrintJobState.PRINT_JOB_PRINTING);
            await sleep(waitTime);
            offJobStateChangeEvent(TAG);
            console.info('------------end RequestPrint_notify_test_1000-------------');
            done();
        });

        function checkPrintJob3(msg, info) {
            checkPrintJobCommon(msg, info);
            checkPrintJobOthers(msg, info);
            console.info(msg + ' checkPrintJob info.jobState: ' + JSON.stringify(info.jobState));
            expect(typeof (info.jobState)).assertEqual('number');
            expect(info.jobState).assertEqual(3);
        };

        /**
         * @tc.number RequestPrint_notify_test_1100
         * @tc.name on: Register event callback for the state change of print job (PRINT_JOB_BLOCKED)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_1100', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_1100-------------');
            TAG = "RequestPrint_notify_test_1100";
            printTask.on('blocked', () => {
                console.info(TAG + " print task blocked")
            });
            print.on('jobStateChange', (state, info) => {
                if (state == print.PrintJobState.PRINT_JOB_BLOCKED) {
                    console.info(TAG + ' the printJob is blocked. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    checkPrintJob4(TAG, info);
                }
            }).catch ((error) => {
                console.info(TAG + ' jobStateChange err: ' + JSON.stringify(error));
            });
            await sleep(waitTime);
            printEvent(TAG, file);
            await sleep(waitTime);
            startPrintJobEvent(TAG, jobInfo);
            await sleep(waitTime);
            updatePrintJobStateEvent(TAG, jobId, print.PrintJobState.PRINT_JOB_BLOCKED);
            await sleep(waitTime);
            offJobStateChangeEvent(TAG);
            console.info('------------end RequestPrint_notify_test_1100-------------');
            done();
        });

        function checkPrintJob4(msg, info) {
            checkPrintJobCommon(msg, info);
            checkPrintJobOthers(msg, info);
            console.info(msg + ' checkPrintJob info.jobState: ' + JSON.stringify(info.jobState));
            expect(typeof (info.jobState)).assertEqual('number');
            expect(info.jobState).assertEqual(4);
        };

        /**
         * @tc.number RequestPrint_notify_test_1200
         * @tc.name on: Register event callback for the state change of print job (PRINT_JOB_SUCCESS)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_1200', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_1200-------------');
            TAG = 'RequestPrint_notify_test_1200';
            printTask.on('success', () => {
                console.info(TAG + " print task success")
            });
            print.on('jobStateChange', (state, info) => {
                if (state == print.PrintJobState.PRINT_JOB_SUCCESS) {
                    console.info(TAG + ' the printJob is success. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    checkPrintJob5(TAG, info);
                }
            }).catch ((error) => {
                console.info(TAG + ' jobStateChange err: ' + JSON.stringify(error));
            });
            await sleep(waitTime);
            printEvent(TAG, file);
            await sleep(waitTime);
            startPrintJobEvent(TAG, jobInfo);
            await sleep(waitTime);
            updatePrintJobStateEvent(TAG, jobId, print.PrintJobState.PRINT_JOB_SUCCESS);
            await sleep(waitTime);
            offJobStateChangeEvent(TAG);
            console.info('------------end RequestPrint_notify_test_1200-------------');
            done();
        });

        function checkPrintJob5(msg, info) {
            checkPrintJobCommon(msg, info);
            checkPrintJobOthers(msg, info);
            console.info(msg + ' checkPrintJob info.jobState: ' + JSON.stringify(info.jobState));
            expect(typeof (info.jobState)).assertEqual('number');
            expect(info.jobState).assertEqual(5);
        };

        /**
         * @tc.number RequestPrint_notify_test_1300
         * @tc.name on: Register event callback for the state change of print job (PRINT_JOB_FAILED)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_1300', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_1300-------------');
            TAG = 'RequestPrint_notify_test_1300';
            printTask.on('failed', () => {
                console.info(TAG + " print task failed")
            });
            print.on('jobStateChange', (state, info) => {
                if (state == print.PrintJobState.PRINT_JOB_FAILED) {
                    console.info(TAG + ' the printJob is failed. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    checkPrintJob6(TAG, info);
                }
            }).catch ((error) => {
                console.info(TAG + " jobStateChange err: " + JSON.stringify(error));
            });
            await sleep(waitTime);
            printEvent(TAG, file);
            await sleep(waitTime);
            startPrintJobEvent(TAG, jobInfo);
            await sleep(waitTime);
            updatePrintJobStateEvent(TAG, jobId, print.PrintJobState.PRINT_JOB_FAILED);
            await sleep(waitTime);
            offJobStateChangeEvent(TAG);
            console.info('------------end RequestPrint_notify_test_1300-------------');
            done();
        });

        function checkPrintJob6(msg, info) {
            checkPrintJobCommon(msg, info);
            checkPrintJobOthers(msg, info);
            console.info(msg + ' checkPrintJob info.jobState: ' + JSON.stringify(info.jobState));
            expect(typeof (info.jobState)).assertEqual('number');
            expect(info.jobState).assertEqual(6);
        };

        /**
         * @tc.number RequestPrint_notify_test_1400
         * @tc.name on: Register event callback for the state change of print job (PRINT_JOB_cancelled)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_1400', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_1400-------------');
            TAG = 'RequestPrint_notify_test_1400';
            printTask.on('cancelled', () => {
                console.info(TAG + ' print task cancelled')
            });
            print.on('jobStateChange', (state, info) => {
                if (state == print.PrintJobState.PRINT_JOB_cancelled) {
                    console.info(TAG + ' the printJob is cancelled. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    checkPrintJob7(TAG, info);
                }
            }).catch ((error) => {
                console.info(TAG + ' jobStateChange err: ' + JSON.stringify(error));
            });
            await sleep(waitTime);
            printEvent(TAG, file);
            await sleep(waitTime);
            startPrintJobEvent(TAG, jobInfo);
            await sleep(waitTime);
            cancelPrintJobEvent(TAG, jobInfo);
            await sleep(waitTime);
            updatePrintJobStateEvent(TAG, jobId, print.PrintJobState.PRINT_JOB_FAILED);
            await sleep(waitTime);
            offJobStateChangeEvent(TAG);
            console.info('------------end RequestPrint_notify_test_1400-------------');
            done();
        });

        function checkPrintJob7(msg, info) {
            checkPrintJobCommon(msg, info);
            checkPrintJobOthers(msg, info);
            console.info(msg + ' checkPrintJob info.jobState: ' + JSON.stringify(info.jobState));
            expect(typeof (info.jobState)).assertEqual('number');
            expect(info.jobState).assertEqual(7);
        };

        function checkPrinterInfoCommon(msg, info) {
            console.info(msg + ' checkPrinterInfo: ' + JSON.stringify(info));
            expect(typeof (info)).assertEqual('object');
            console.info(msg + ' checkPrinterInfo info.printerId: ' + JSON.stringify(info.printerId));
            expect(typeof (info.printerId)).assertEqual('number');
            expect(info.printerId).assertEqual(0);
            console.info(msg + ' checkPrinterInfo info.printerName: ' + JSON.stringify(info.printerName));
            expect(typeof (info.printerName)).assertEqual('string');
            expect(info.printerName).assertEqual('');
            console.info(msg + ' checkPrinterInfo info.printerIcon: ' + JSON.stringify(info.printerIcon));
            expect(typeof (info.printerIcon)).assertEqual('number');
            expect(info.printerIcon).assertEqual(0);
            console.info(msg + ' checkPrintJobInfo info.description: ' + JSON.stringify(info.description));
            expect(typeof (info.description)).assertEqual('string');
            expect(info.description).assertEqual('');
        };

        function checkPrinterCapability(msg, info) {
            console.info(msg + ' checkPrinterCapability: ' + JSON.stringify(info.capability));
            expect(typeof (info.capability)).assertEqual('object');
            let printerCapability = info.capability;
            console.info(msg + ' checkPrinterCapability.minMargin: ' + JSON.stringify(printerCapability.minMargin));
            expect(typeof (printerCapability.minMargin)).assertEqual('object');
            let printMargin = printerCapability.minMargin;
            expect(typeof (printMargin.top)).assertEqual('number');
            expect(printMargin.top).assertEqual(0);
            expect(typeof (printMargin.bottom)).assertEqual('number');
            expect(printMargin.bottom).assertEqual(0);
            expect(typeof (printMargin.left)).assertEqual('number');
            expect(printMargin.left).assertEqual(0);
            expect(typeof (printMargin.right)).assertEqual('number');
            expect(printMargin.right).assertEqual(0);
            console.info(msg + ' checkPrinterCapability.pageSize: ' + JSON.stringify(printerCapability.pageSize));
            expect(Array.isArray(printerCapability.pageSize)).assertEqual(true);
            for (let s = 0; s < printerCapability.pageSize.length; s++) {
                let printerPageSize = printerCapability.pageSize[s];
                expect(typeof (printerPageSize.id)).assertEqual('number');
                expect(printerPageSize.id).assertEqual(0);
                expect(typeof (printerPageSize.name)).assertEqual('string');
                expect(printerPageSize.name).assertEqual('');
                expect(typeof (printerPageSize.width)).assertEqual('number');
                expect(printerPageSize.width).assertEqual(0);
                expect(typeof (printerPageSize.height)).assertEqual('number');
                expect(printerPageSize.height).assertEqual(0);
            }
            console.info(msg + ' checkPrinterCapability.resolution: ' + JSON.stringify(printerCapability.resolution));
            expect(Array.isArray(printerCapability.resolution)).assertEqual(true);
            for (let j = 0; j < printerCapability.resolution.length; j++) {
                let PrinterResolution = printerCapability.resolution[j];
                expect(typeof (PrinterResolution.id)).assertEqual('number');
                expect(PrinterResolution.id).assertEqual(0);
                expect(typeof (PrinterResolution.horizontalDpi)).assertEqual('number');
                expect(PrinterResolution.horizontalDpi).assertEqual(0);
                expect(typeof (PrinterResolution.verticalDpi)).assertEqual('number');
                expect(PrinterResolution.verticalDpi).assertEqual(0);
            }
            console.info(msg + ' checkPrinterCapability.colorMode: ' + JSON.stringify(printerCapability.colorMode));
            expect(typeof (printerCapability.colorMode)).assertEqual('number');
            expect(printerCapability.colorMode).assertEqual(0);
            console.info(msg + ' checkPrinterCapability.duplexMode: ' + JSON.stringify(printerCapability.duplexMode));
            expect(typeof (printerCapability.duplexMode)).assertEqual('number');
            expect(printerCapability.duplexMode).assertEqual(0);
        };

        function checkPrintJobCommon(msg, info) {
            console.info(msg + ' checkPrintJob: ' + JSON.stringify(info));
            expect(typeof (info)).assertEqual('object');
            console.info(msg + ' checkPrintJob info.files: ' + JSON.stringify(info.files));
            expect(Array.isArray(info.files)).assertEqual(true);
            for (let n = 0; n < info.files.length; n++) {
                expect(typeof (info.files[n])).assertEqual('string');
                expect(info.files[n]).assertEqual('');
            }
            console.info(msg + ' checkPrintJob info.printerId: ' + JSON.stringify(info.printerId));
            expect(typeof (info.printerId)).assertEqual('number');
            expect(info.printerId).assertEqual(0);
            console.info(msg + " checkPrintJob info.jobId: " + JSON.stringify(info.jobId));
            expect(typeof (info.jobId)).assertEqual('string');
            expect(info.jobId).assertEqual(0);
            console.info(msg + ' checkPrintJob info.copyNumber: ' + JSON.stringify(info.copyNumber));
            expect(typeof (info.copyNumber)).assertEqual('number');
            expect(info.copyNumber).assertEqual(0);
            console.info(msg + ' checkPrintJob info.pageRange: ' + JSON.stringify(info.pageRange));
            expect(typeof (info.pageRange)).assertEqual('object');
            let printerRange = info.pageRange;
            console.info(msg + ' checkPrinterRange.startPage: ' + JSON.stringify(printerRange.startPage));
            expect(typeof (printerRange.startPage)).assertEqual('number');
            expect(printerRange.startPage).assertEqual(0);
            console.info(msg + ' checkPrinterRange.endPage: ' + JSON.stringify(printerRange.endPage));
            expect(typeof (printerRange.endPage)).assertEqual('number');
            expect(printerRange.endPage).assertEqual(0);
            console.info(msg + ' checkPrinterRange.pages: ' + JSON.stringify(printerRange.pages));
            expect(Array.isArray(printerRange.pages)).assertEqual(true);
            for (let m = 0; m < printerRange.pages.length; m++) {
                expect(typeof (printerRange.pages[m])).assertEqual('number');
                expect(printerRange.pages[m]).assertEqual(0);
            }
        };

        function checkPrintJobOthers(msg, info) {
            console.info(msg + ' checkPrintJob info.isSequential: ' + JSON.stringify(info.isSequential));
            expect(typeof (info.isSequential)).assertEqual('boolean');
            expect(info.isSequential).assertEqual(true);
            console.info(msg + ' checkPrintJob info.isLandscape: ' + JSON.stringify(info.isLandscape));
            expect(typeof (info.isLandscape)).assertEqual('boolean');
            expect(info.isLandscape).assertEqual(true);
            console.info(msg + ' checkPrintJob info.colorMode: ' + JSON.stringify(info.colorMode));
            expect(typeof (info.colorMode)).assertEqual('number');
            expect(info.colorMode).assertEqual(0);
            console.info(msg + ' checkPrintJob info.duplexMode: ' + JSON.stringify(info.duplexMode));
            expect(typeof (info.duplexMode)).assertEqual('number');
            expect(info.duplexMode).assertEqual(0);
            console.info(msg + ' checkPrintJob info.pageSize: ' + JSON.stringify(info.pageSize));
            expect(Array.isArray(info.pageSize)).assertEqual(true);
            for (let s = 0; s < info.pageSize.length; s++) {
                let printerPageSize = info.pageSize[s];
                expect(typeof (printerPageSize.id)).assertEqual('number');
                expect(printerPageSize.id).assertEqual(0);
                expect(typeof (printerPageSize.name)).assertEqual('string');
                expect(printerPageSize.name).assertEqual('');
                expect(typeof (printerPageSize.width)).assertEqual('number');
                expect(printerPageSize.width).assertEqual(0);
                expect(typeof (printerPageSize.height)).assertEqual('number');
                expect(printerPageSize.height).assertEqual(0);
            }
            console.info(msg + ' checkPrintJob info.margin: ' + JSON.stringify(info.margin));
            expect(typeof (info.margin)).assertEqual('object');
            let printMargin = info.margin;
            expect(typeof (printMargin.top)).assertEqual('number');
            expect(printMargin.top).assertEqual(0);
            expect(typeof (printMargin.bottom)).assertEqual('number');
            expect(printMargin.bottom).assertEqual(0);
            expect(typeof (printMargin.left)).assertEqual('number');
            expect(printMargin.left).assertEqual(0);
            expect(typeof (printMargin.right)).assertEqual('number');
            expect(printMargin.right).assertEqual(0);
        };

        function printEvent(msg, file) {
            console.info(msg + 'printEvent start');
            print.print(file, (err, task) => {
                if (err) {
                    console.info(msg + 'print fail. Cause: ' + JSON.stringify(err));
                    expect(false).assertTrue();
                    return;
                } else {
                    console.info(msg + 'print printTask: ' + JSON.stringify(task));
                    printTask = task;
                }
            });
            console.info(msg + ' printEvent end');
        };

        function startDiscoverPrinterEvent(msg, extensionIds) {
            console.info(msg + 'startDiscoverPrinter start');
            print.startDiscoverPrinter(extensionIds).then((data) => {
                console.info(msg + ' startDiscoverPrinter result: ' + JSON.stringify(data));
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(msg + ' startDiscoverPrinter err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            console.info(msg + ' startDiscoverPrinter end');
        };

        function addPrintersEvent(msg, printerInfoArr) {
            console.info(msg + 'addPrinters start');
            print.addPrinters(printerInfoArr).then((data) => {
                console.info(msg + ' addPrinters result: ' + JSON.stringify(data));
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(msg + ' addPrinters err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            console.info(msg + ' addPrinters end');
        };

        function removePrintersEvent(msg, printerInfoArr) {
            console.info(msg + 'removePrinters start');
            print.removePrinters(printerInfoArr).then((data) => {
                console.info(msg + ' removePrinters result: ' + JSON.stringify(data));
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(msg + ' removePrinters err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            console.info(msg + ' removePrinters end');
        };

        function startPrintJobEvent(msg, jobInfo) {
            console.info(msg + ' startPrintJob start');
            print.startPrintJob(jobInfo).then((data) => {
                console.info(msg + ' startPrintJob result: ' + JSON.stringify(data));
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(msg + ' startPrintJob err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            console.info(msg + ' startPrintJob end');
        };

        function cancelPrintJobEvent(msg, jobInfo) {
            console.info(msg + ' startPrintJob start');
            print.cancelPrintJob(jobInfo).then((data) => {
                console.info(msg + 'cancelPrintJob result:' + JSON.stringify(data));
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(msg = ' cancelPrintJob err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            console.info(msg + ' cancelPrintJob end');
        };

        function updatePrintJobStateEvent(msg, jobId, state) {
            console.info(msg + 'updatePrintJobState start');
            print.updatePrintJobState(jobId, state).then((data) => {
                console.info(msg + ' updatePrintJobState result: ' + JSON.stringify(data));
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(msg + ' updatePrintJobState err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            console.info(msg + ' updatePrintJobState end');
        };

        function updatePrinterStateEvent(msg, printerId, state) {
            console.info(msg + 'updatePrinterState start');
            print.updatePrinterState(printerId, state).then((data) => {
                console.info(msg + ' updatePrinterState result: ' + JSON.stringify(data));
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(msg + ' updatePrinterState err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            console.info(msg + ' updatePrinterState end');
        };

        function offJobStateChangeEvent(msg) {
            console.info(msg + ' close jobStateChange event start');
            print.off('jobStateChange', (err, data) => {
                if (err) {
                    console.error(msg + ' close jobStateChange event fail. Cause: ' + JSON.stringify(err));
                    expect(false).assertTrue();
                    return;
                }
                console.info(msg + " close jobStateChange event successful. result: " + JSON.stringify(data));
                expect(typeof (data)).assertEqual('boolean');
                expect(data).assertEqual(true);
            });
            console.info(msg + ' close jobStateChange end');
        };

        function offPrinterStateChangeEvent(msg) {
            console.info(msg + ' close printerStateChange start');
            print.off('printerStateChange', (err, data) => {
                if (err) {
                    console.error(msg + ' close printerStateChange event fail, Cause: ' + JSON.stringify(err));
                    expect(false).assertTrue();
                    return;
                }
                console.info(msg + ' close printerStateChange event successful, result: ' + JSON.stringify(data));
                expect(typeof (data)).assertEqual('boolean');
                expect(data).assertEqual(true);
            });
            console.info(msg + ' close printerStateChange end');
        };

        function queryAllPrinterExtensionsEvent(msg) {
            console.info(msg + 'queryAllPrinterExtensionInfos start');
            let extensionInfos = [];
            print.queryExtensionAbilityInfos((err, data) => {
                if (err) {
                    console.info(msg + ' queryAllPrinterExtensionInfos failed. Cause: ' + JSON.stringify(err));
                    expect(false).assertTrue();
                    return extensionInfos;
                }
                console.info(msg + ' queryAllPrinterExtensionInfos successful. Data:' + JSON.stringify(data));
                extensionInfos = data;
                return extensionInfos;
                for (let i = 0; i < extensionInfos.length; i++) {
                    extensionIds.push(extensionInfos[i].extensionId);
                }
                checkAllPrinterExtensionInfos(msg, data);
            });
            console.info(msg + 'queryAllPrinterExtensionInfos end------------');
        };

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
        };
    });
}

