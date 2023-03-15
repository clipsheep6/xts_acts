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
import { describe, it, expect } from "@ohos/hypium";
import print from '@ohos.print';

export default function requestPrintJsunit2() {
    describe('requestPrintTest2', function () {
        let printerState = 1
        let printJobState = 3
        let jobId = '3'
        let jobIdNull = ''
        let jobIdTypeWrong = 3
        let jobIdNotExist = '111111111111'
        let printerStateInValid = 10
        let printJobStateInValid = 10
        let printerId = '1'
        let filesNull = ['']
        let filesWrongType = './data/app/sample.pdf1'
        let filesWrongPath = ['bcaubciaun3234ffl']
        let extensionListTypeWrong = 2
        let extensionListNotExist = ['1234567890123']
        let printerIdNull = ''
        let printerIdTypeWrong = 3
        let printerIdNotExist = '1234567890123'
        let printerStateTypeWrong = '1'
        let printJobStateTypeWrong = '2'
        let printJobSubState = 5
        let printerIdsArrayNull = ['']
        let printerIdsArrayTypeWrong = 1
        let printerIdsArrayInvalid = ['1234567890123']
        let extensionInfoNull = ''
        let extensionInfoTypeWrong = 123
        let extensionInfoInvalid = {}

        let printerRange = {
            startPage: 1,
            endPage: 4,
            //            pages: [1, 4],
        }
        let printerRange1 = {
            startPage: 4,
            endPage: 2,
            //            pages: [4, 2],
        }

        let printerPageSize1 = {
            id: '',
            name: 'string',
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
                                       id: '',
                                       name: 'string',
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
                                        id: '2',
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
                                   printerId: '',
                                   printerName: 'string',
                                   printerIcon: 1,
                                   printerState: printerState,
                                   description: 'string',
                                   capability: printerCapability,
                               }]

        let printerInfoArr4 = [{
                                   printerId: '1',
                                   printerName: 'string',
                                   printerIcon: 1,
                                   printerState: printerStateInValid,
                                   description: 'string',
                                   capability: printerCapability,
                               }]

        let printerInfoArr6 = [{
                                   printerId: '1',
                                   printerName: 'string',
                                   printerIcon: 1,
                                   printerState: printerState,
                                   description: 'string',
                                   capability: printerCapability1,
                               }]

        let printJob2 = {
            files: [''],
            jobId: '3',
            printerId: '1',
            jobState: printJobState,
            copyNumber: 3,
            pageRange: printerRange,
        }

        let printJob5 = {
            files: ['datashare:///dev/a.docx'],
            jobId: '3',
            printerId: '1',
            jobState: printJobStateInValid,
            copyNumber: 3,
            pageRange: printerRange,
        }

        let printJob7 = {
            files: ['datashare:///dev/a.docx'],
            jobId: '3',
            printerId: '1',
            jobState: printJobState,
            copyNumber: 3,
            pageRange: printerRange1,
        }
        let printJob8 = {
            files: ['datashare:///dev/a.docx'],
            jobId: '3',
            printerId: '1',
            jobState: printJobState,
            copyNumber: 3,
            pageRange: printerRange,
            isSequential: false,
            pageSize: printerPageSize1,
        }

        let fileConfigWrong = {
            file: '',
            offset: 1,
            max: 5
        }
        let fileConfigTypeWrong = '/data/print/a.png'
        let fileConfigNotExist = {
            file: 'czfcdefs12233',
            offset: 1,
            max: 5
        }

        const E_PRINT_NONE = print.E_PRINT_NONE ;					// no error
        const E_PRINT_NO_PERMISSION = print.E_PRINT_NO_PERMISSION;			// no permission
        const E_PRINT_INVALID_PARAMETER = print.E_PRINT_INVALID_PARAMETER ;     	// invalid parameter
        const E_PRINT_GENERIC_FAILURE =print.E_PRINT_GENERIC_FAILURE;		// generic failure of print
        const E_PRINT_RPC_FAILURE =print.E_PRINT_RPC_FAILURE;			// RPC failure
        const E_PRINT_SERVER_FAILURE =print.E_PRINT_SERVER_FAILURE;		// failure of print service
        const E_PRINT_INVALID_EXTENSION = print.E_PRINT_INVALID_EXTENSION;	// invalid print extension
        const E_PRINT_INVALID_PRINTER = print.E_PRINT_INVALID_PRINTER; 		// invalid printer
        const E_PRINT_INVALID_PRINTJOB = print.E_PRINT_INVALID_PRINTJOB; 	// invalid print job
        const E_PRINT_FILE_IO = print.E_PRINT_FILE_IO;				// file i/o error


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
            let wrong;
            await print.print(filesNull).then((data) => {
                console.info('RequestPrint_abnormal_test_0100' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_0100' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_0100-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_0200
         * @tc.name    print: Start new print task for App ('files' parameter type is wrong)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_0200', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_0200-------------');
            let wrong;
            await print.print(filesWrongType).then((data) => {
                console.info('RequestPrint_abnormal_test_0200' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_0200' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_0200-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_0300
         * @tc.name    print: Start new print task for App ('files' path is not exist)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_0300', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_0300-------------');
            let wrong;
            await print.print(filesWrongPath).then((data) => {
                console.info('RequestPrint_abnormal_test_0300' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_0300' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_0300-------------');
            done();
        });

        /**
         * @tc.number RequestPrint_abnormal_test_0400
         * @tc.name startDiscoverPrinter: Load the specific printer extension and start to discover printer
         ('extensionList' parameter type is wrong)
         * @tc.desc Function test
         */
        it('RequestPrint_abnormal_test_0400', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_0400-------------');
            let wrong;
            await print.startDiscoverPrinter(extensionListTypeWrong).then((data) => {
                console.info('RequestPrint_abnormal_test_0400' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_0400' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_0400-------------');
            done();
        });

        /**
        * @tc.number  RequestPrint_abnormal_test_0500
        * @tc.name    startDiscoverPrinter: Load the specific printer extension and start to discover printer
           ('extensionList' parameter: extensionId is not exist)
        * @tc.desc    Function test
        */
        it('RequestPrint_abnormal_test_0500', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_0500-------------');
            let wrong;
            await print.startDiscoverPrinter(extensionListNotExist).then((data) => {
                console.info('RequestPrint_abnormal_test_0500' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_0500' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_EXTENSION);
            console.info('------------end RequestPrint_abnormal_test_0500-------------');
            done();
        });

        /**
         * @tc.number RequestPrint_abnormal_test_0600
         * @tc.name startPrintJob: Start print job ('PrintJob' parameter : files is null)
         * @tc.desc Function test
         */
        it('RequestPrint_abnormal_test_0600', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_0600-------------');
            let wrong;
            await print.startPrintJob(printJob2).then((data) => {
                console.info('RequestPrint_abnormal_test_0600' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_0600' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_0600-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_0700
         * @tc.name    startPrintJob: Start print job ('PrintJob' parameter : PrintJobState is wrong)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_0700', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_0700-------------');
            let wrong;
            await print.startPrintJob(printJob5).then((data) => {
                console.info('RequestPrint_abnormal_test_0700' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_0700' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_0700-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_0800
         * @tc.name    startPrintJob: Start print job ('PrintJob' parameter : PrinterRange is wrong)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_0800', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_0800-------------');
            let wrong;
            await print.startPrintJob(printJob7).then((data) => {
                console.info('RequestPrint_abnormal_test_0800' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_0800' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_0800-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_0900
         * @tc.name    startPrintJob: Start print job ('PrintJob' parameter : PrinterPageSize is wrong)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_0900', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_0900-------------');
            let wrong;
            await print.startPrintJob(printJob8).then((data) => {
                console.info('RequestPrint_abnormal_test_0900' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_0900' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_0900-------------');
            done();
        });

        /**
         * @tc.number RequestPrint_abnormal_test_1000
         * @tc.name cancelPrintJob: Cancel the print job has been sent to printer('JobId' parameter:JobId is null)
         * @tc.desc Function test
         */
        it('RequestPrint_abnormal_test_1000', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_1000-------------');
            let wrong;
            await print.cancelPrintJob(jobIdNull).then((data) => {
                console.info('RequestPrint_abnormal_test_1000' + ' cancelPrintJob result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_1000' + ' cancelPrintJob err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_1000-------------');
            done();
        });

        /**
         * @tc.number RequestPrint_abnormal_test_1100
         * @tc.name cancelPrintJob: Cancel the print job has been sent to printer
               ('JobId' parameter : JobId is wrong)
         * @tc.desc Function test
         */
        it('RequestPrint_abnormal_test_1100', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_1100-------------');
            let wrong;
            await print.cancelPrintJob(jobIdTypeWrong).then((data) => {
                console.info('RequestPrint_abnormal_test_1100' + ' cancelPrintJob result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_1100' + ' cancelPrintJob err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_1100-------------');
            done();
        });

        /**
         * @tc.number RequestPrint_abnormal_test_1200
         * @tc.name cancelPrintJob: Cancel the print job has been sent to printer
             ('jobId' parameter : jobId is not Exist)
         * @tc.desc Function test
         */
        it('RequestPrint_abnormal_test_1200', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_1200-------------');
            let wrong;
            await print.cancelPrintJob(jobIdNotExist).then((data) => {
                console.info('RequestPrint_abnormal_test_1200' + 'cancelPrintJob result: ' + JSON.stringify(data));
                expect(false).assertTrue;
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_1200' + ' cancelPrintJob err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PRINTJOB);
            console.info('------------end RequestPrint_abnormal_test_1200-------------');
            done();
        });

        //        /**
        //         * @tc.number RequestPrint_abnormal_test_1300
        //         * @tc.name cancelPrintJob: Cancel the print job has been sent to printer
        //              ('PrintJob' parameter : PrinterPageSize is wrong)
        //         * @tc.desc Function test
        //         */
        //        it('RequestPrint_abnormal_test_1300', 0, async function (done) {
        //            console.info('------------start RequestPrint_abnormal_test_1300-------------');
        //            TAG = 'RequestPrint_abnormal_test_1300';
        //            let wrong;
        //            await print.cancelPrintJob(printJob8).then((data) => {
        //                console.info(TAG + ' cancelPrintJob result: ' + JSON.stringify(data));
        //                expect(false).assertTrue();
        //            }).catch((error) => {
        //                console.info(TAG + 'cancelPrintJob err: ' + JSON.stringify(error));
        //                wrong = error;
        //            });
        //            await sleep(waitTime);
        //            expect(wrong).assertEqual(2);
        //            console.info('------------end RequestPrint_abnormal_test_1300-------------');
        //            done();
        //        });

        /**
         * @tc.number RequestPrint_abnormal_test_1400
         * @tc.name requestPrintPreview: Request preview of the print job ('PrintJob' parameter :files is null)
         * @tc.desc Function test
         */
        it('RequestPrint_abnormal_test_1400', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_1400-------------');
            let wrong;
            await print.requestPrintPreview(printJob2).then((data) => {
                console.info('RequestPrint_abnormal_test_1400' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_1400' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_1400-------------');
            done();
        });

        /**
         * @tc.number RequestPrint_abnormal_test_1500
         * @tc.name requestPrintPreview: Request preview of the print job('PrintJob' parameter:PrintJobState is wrong)
         * @tc.desc Function test
         */
        it('RequestPrint_abnormal_test_1500', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_1500-------------');
            let wrong;
            await print.requestPrintPreview(printJob5).then((data) => {
                console.info('RequestPrint_abnormal_test_1500' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_1500' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_1500-------------');
            done();
        });

        /**
         * @tc.number RequestPrint_abnormal_test_1600
         * @tc.name requestPrintPreview: Request preview of the print job('PrintJob' parameter:PrinterRange is wrong)
         * @tc.desc Function test
         */
        it('RequestPrint_abnormal_test_1600', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_1600-------------');

            let wrong;
            await print.requestPrintPreview(printJob7).then((data) => {
                console.info('RequestPrint_abnormal_test_1600' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_1600' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_1600-------------');
            done();
        });

        /**
         * @tc.number RequestPrint_abnormal_test_1700
         * @tc.name requestPrintPreview: Request preview of the print job
              ('PrintJob' parameter : PrinterPageSize is wrong)
         * @tc.desc Function test
         */
        it('RequestPrint_abnormal_test_1700', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_1700-------------');
            let wrong;
            await print.requestPrintPreview(printJob8).then((data) => {
                console.info('RequestPrint_abnormal_test_1700' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_1700' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_1700-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_1800
         * @tc.name    addPrinters: New printers have been found and notify Print SA
             ('PrinterInfo' parameter : printerName is null)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_1800', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_1800-------------');
            let wrong;
            await print.addPrinters(printerInfoArr2).then((data) => {
                console.info('RequestPrint_abnormal_test_1800' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_1800' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_1800-------------');
            done();
        });

        /**
         * @tc.number RequestPrint_abnormal_test_1900
         * @tc.name addPrinters: New printers have been found and notify Print SA
               ('PrinterInfo' parameter : printerState is wrong)
         * @tc.desc Function test
         */
        it('RequestPrint_abnormal_test_1900', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_1900-------------');
            let wrong;
            await print.addPrinters(printerInfoArr4).then((data) => {
                console.info('RequestPrint_abnormal_test_1900' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_1900' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_1900-------------');
            done();
        });

        /**
         * @tc.number RequestPrint_abnormal_test_2000
         * @tc.name addPrinters: New printers have been found and notify Print SA
              ('PrinterInfo' parameter : PrinterCapability is wrong)
         * @tc.desc Function test
         */
        it('RequestPrint_abnormal_test_2000', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_2000-------------');
            let wrong;
            await print.addPrinters(printerInfoArr6).then((data) => {
                console.info('RequestPrint_abnormal_test_2000' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_2000' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_2000-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_2100
         * @tc.name    removePrinters: Printers have been lost and notify Print SA (parameter is null)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_2100', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_1700-------------');
            let wrong;
            await print.removePrinters(printerIdsArrayNull).then((data) => {
                console.info('RequestPrint_abnormal_test_2100' + ' removePrinters result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_2100' + ' removePrinters err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_2100-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_2200
         * @tc.name    removePrinters: Printers have been lost and notify Print SA (parameter type is wrong)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_2200', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_2200-------------');
            let wrong;
            await print.removePrinters(printerIdsArrayTypeWrong).then((data) => {
                console.info('RequestPrint_abnormal_test_2200' + ' removePrinters result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_2200' + ' removePrinters err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_2200-------------');
            done();
        });

        /**
         * @tc.number RequestPrint_abnormal_test_2300
         * @tc.name removePrinters: Printers have been lost and notify Print SA (parameter is invalid)
         * @tc.desc Function test
         */
        it('RequestPrint_abnormal_test_2300', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_2300-------------');
            let wrong;
            await print.removePrinters(printerIdsArrayInvalid).then((data) => {
                console.info('RequestPrint_abnormal_test_2300' + ' removePrinters result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_2300' + ' removePrinters err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_2300-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_2400
         * @tc.name    updatePrinterState: Notify Print SA the state of printer has been changed (PrinterState is wrong)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_2400', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_2400-------------');
            let wrong;
            await print.updatePrinterState(printerId, printerStateInValid).then((data) => {
                console.info('RequestPrint_abnormal_test_2400' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_2400' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_2400-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_2500
         * @tc.name    updatePrinterState: Notify Print SA the state of printer has been changed
             ('printerId' parameter is null)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_2500', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_2500-------------');
            let wrong;
            await print.updatePrinterState(printerIdNull, printerState).then((data) => {
                console.info('RequestPrint_abnormal_test_2500' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_2500' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_2500-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_2600
         * @tc.name    updatePrinterState: Notify Print SA the state of printer has been changed
             ('printerState' parameter type is wrong)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_2600', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_2600-------------');
            let wrong;
            await print.updatePrinterState(printerId, printerStateTypeWrong).then((data) => {
                console.info('RequestPrint_abnormal_test_2600' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_2600' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_2600-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_2700
         * @tc.name    updatePrintJobState: Notify Print SA the state of print job has been changed
                       (PrintJobState is wrong)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_2700', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_2700-------------');
            let wrong;
            await print.updatePrintJobState(jobId, printJobStateInValid, printJobSubState).then((data) => {
                console.info('RequestPrint_abnormal_test_2700' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_2700' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_2700-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_2800
         * @tc.name    updatePrintJobState: Notify Print SA the state of print job has been changed
                       (jobId is null)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_2800', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_2800-------------');
            let wrong;
            await print.updatePrintJobState(jobIdNull, printJobState, printJobSubState).then((data) => {
                console.info('RequestPrint_abnormal_test_2800' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_2800' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_2800-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_2900
         * @tc.name    updatePrintJobState: Notify Print SA the state of print job has been changed
                       ('printJobState' parameter type is wrong)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_2900', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_2900-------------');
            let wrong;
            await print.updatePrintJobState(jobId, printJobStateTypeWrong, printJobSubState).then((data) => {
                console.info('RequestPrint_abnormal_test_2900' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_2900' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_2900-------------');
            done();
        });

        //        /**
        //        * @tc.number  RequestPrint_abnormal_test_3000
        //        * @tc.name    readFile: read the print file ('fileConfig' parameter ： file is null)
        //        * @tc.desc    Function test
        //        */
        //        it('RequestPrint_abnormal_test_3000', 0, async function (done) {
        //            console.info('------------start RequestPrint_abnormal_test_3000-------------');
        //            TAG = 'RequestPrint_abnormal_test_3000';
        //            let wrong;
        //            await print.readFile(fileConfigWrong).then((data) => {
        //                console.info(TAG + ' result: ' + JSON.stringify(data));
        //                expect(false).assertTrue();
        //            }).catch((error) => {
        //                console.info(TAG + ' err: ' + JSON.stringify(error));
        //                wrong = error;
        //            });
        //            await sleep(waitTime);
        //            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
        //            console.info('------------end RequestPrint_abnormal_test_3000-------------');
        //            done();
        //        });
        //
        //        /**
        //        * @tc.number  RequestPrint_abnormal_test_3100
        //        * @tc.name    readFile: read the print file ('fileConfig' parameter ： file path is not exist)
        //        * @tc.desc    Function test
        //        */
        //        it('RequestPrint_abnormal_test_3100', 0, async function (done) {
        //            console.info('------------start RequestPrint_abnormal_test_3100-------------');
        //            TAG = 'RequestPrint_abnormal_test_3100';
        //            let wrong;
        //            await print.readFile(fileConfigNotExist).then((data) => {
        //                console.info(TAG + ' result: ' + JSON.stringify(data));
        //                expect(false).assertTrue();
        //            }).catch((error) => {
        //                console.info(TAG + ' err: ' + JSON.stringify(error));
        //                wrong = error;
        //            });
        //            await sleep(waitTime);
        //            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
        //            console.info('------------end RequestPrint_abnormal_test_3100-------------');
        //            done();
        //        });
        //
        //        /**
        //         * @tc.number  RequestPrint_abnormal_test_3200
        //         * @tc.name    readFile: read the print file ('fileConfig' parameter type is wrong)
        //         * @tc.desc    Function test
        //         */
        //        it('RequestPrint_abnormal_test_3200', 0, async function (done) {
        //            console.info('------------start RequestPrint_abnormal_test_3200-------------');
        //            TAG = 'RequestPrint_abnormal_test_3200';
        //            let wrong;
        //            await print.readFile(fileConfigTypeWrong).then((data) => {
        //                console.info(TAG + ' result: ' + JSON.stringify(data));
        //                expect(false).assertTrue();
        //            }).catch((error) => {
        //                console.info(TAG + ' err: ' + JSON.stringify(error));
        //                wrong = error;
        //            });
        //            await sleep(waitTime);
        //            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
        //            console.info('------------end RequestPrint_abnormal_test_3200-------------');
        //            done();
        //        });

        /**
         * @tc.number  RequestPrint_abnormal_test_3300
         * @tc.name    connectPrinter: Connect the specific printer ('printerId' parameter is null)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_3300', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_3300-------------');
            let wrong;
            await print.connectPrinter(printerIdNull).then((data) => {
                console.info('RequestPrint_abnormal_test_3300' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_3300' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PRINTER);
            console.info('------------end RequestPrint_abnormal_test_3300-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_3400
         * @tc.name    connectPrinter: Connect the specific printer ('printerId' parameter type is wrong)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_3400', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_3400-------------');
            let wrong;
            await print.connectPrinter(printerIdTypeWrong).then((data) => {
                console.info('RequestPrint_abnormal_test_3400' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_3400' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_3400-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_3500
         * @tc.name    connectPrinter: Connect the specific printer ('printerId' parameter: id is not exist)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_3500', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_3500-------------');
            let wrong;
            await print.connectPrinter(printerIdNotExist).then((data) => {
                console.info('RequestPrint_abnormal_test_3500' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_3500' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PRINTER);
            console.info('------------end RequestPrint_abnormal_test_3500-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_3600
         * @tc.name    disconnectPrinter: Disconnect the specific printer ('printerId' parameter is null)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_3600', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_3600-------------');
            let wrong;
            await print.disconnectPrinter(printerIdNull).then((data) => {
                console.info('RequestPrint_abnormal_test_3600' + ' disconnectPrinter result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_3600' + ' disconnectPrinter err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PRINTER);
            console.info('------------end RequestPrint_abnormal_test_3600-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_3700
         * @tc.name    disconnectPrinter: Disconnect the specific printer ('printerId' parameter type is wrong)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_3700', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_3700-------------');
            let wrong;
            await print.disconnectPrinter(printerIdTypeWrong).then((data) => {
                console.info('RequestPrint_abnormal_test_3700' + ' disconnectPrinter result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_3700' + ' disconnectPrinter err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_3700-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_3800
         * @tc.name    disconnectPrinter: Disconnect the specific printer ('printerId' parameter: id is not exist)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_3800', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_3800-------------');
            let wrong;
            await print.disconnectPrinter(printerIdNotExist).then((data) => {
                console.info('RequestPrint_abnormal_test_3800' + ' disconnectPrinter result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_3800' + ' disconnectPrinter err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PRINTER);
            console.info('------------end RequestPrint_abnormal_test_3800-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_3900
         * @tc.name    queryPrinterCapability: Query capability for the specific printer('printerId' parameter is null)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_3900', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_3900-------------');
            let wrong;
            await print.queryPrinterCapability(printerIdNull).then((data) => {
                console.info('RequestPrint_abnormal_test_3900' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_3900' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PRINTER);
            console.info('------------end RequestPrint_abnormal_test_3900-------------');
            done();
        });

        /**
        * @tc.number  RequestPrint_abnormal_test_4000
        * @tc.name    queryPrinterCapability: Query capability for the specific printer
            ('printerId' parameter type is wrong)
        * @tc.desc    Function test
        */
        it('RequestPrint_abnormal_test_4000', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_4000-------------');
            let wrong;
            await print.queryPrinterCapability(printerIdTypeWrong).then((data) => {
                console.info('RequestPrint_abnormal_test_4000' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_4000' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_4000-------------');
            done();
        });

        /**
        * @tc.number  RequestPrint_abnormal_test_4100
        * @tc.name    queryPrinterCapability: Query capability for the specific printer
             ('printerId' parameter: id is not exist)
        * @tc.desc    Function test
        */
        it('RequestPrint_abnormal_test_4100', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_4100-------------');
            let wrong;
            await print.queryPrinterCapability(printerIdNotExist).then((data) => {
                console.info('RequestPrint_abnormal_test_4100' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_4100' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PRINTER);
            console.info('------------end RequestPrint_abnormal_test_4100-------------');
            done();
        });

        /**
        * @tc.number  RequestPrint_abnormal_test_4200
        * @tc.name    updatePrinters: Update the information of the specific printers
                ('PrinterInfo' parameter ： printerName is null)
        * @tc.desc    Function test
        */
        it('RequestPrint_abnormal_test_4200', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_4200-------------');
            let wrong;
            await print.updatePrinters(printerInfoArr2).then((data) => {
                console.info('RequestPrint_abnormal_test_4200' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_4200' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_4200-------------');
            done();
        });

        /**
        * @tc.number  RequestPrint_abnormal_test_4300
        * @tc.name    updatePrinters: Update the information of the specific printers
                ('PrinterInfo' parameter : printerState is wrong)
        * @tc.desc    Function test
        */
        it('RequestPrint_abnormal_test_4300', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_4300-------------');
            let wrong;
            await print.updatePrinters(printerInfoArr4).then((data) => {
                console.info('RequestPrint_abnormal_test_4300' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_4300' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_4300-------------');
            done();
        });

        /**
        * @tc.number  RequestPrint_abnormal_test_4400
        * @tc.name    updatePrinters: Update the information of the specific printers
                ('PrinterInfo' parameter : PrinterCapability is wrong)
        * @tc.desc    Function test
        */
        it('RequestPrint_abnormal_test_4400', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_4400-------------');
            let wrong;
            await print.updatePrinters(printerInfoArr6).then((data) => {
                console.info('RequestPrint_abnormal_test_4400' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_4400' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_4400-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_4500
         * @tc.name    updatePrinters: Update the information of the specific printers (parameter is null)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_4500', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_4500-------------');
            let wrong;
            await print.updateExtensionInfo(extensionInfoNull).then((data) => {
                console.info('RequestPrint_abnormal_test_4500' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_4500' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_4500-------------');
            done();
        });

        /**
         * @tc.number  RequestPrint_abnormal_test_4600
         * @tc.name    updatePrinters: Update the information of the specific printers(parameter type is wrong)
         * @tc.desc    Function test
         */
        it('RequestPrint_abnormal_test_4600', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_4600-------------');
            let wrong;
            await print.updateExtensionInfo(extensionInfoTypeWrong).then((data) => {
                console.info('RequestPrint_abnormal_test_4600' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_4600' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_4600-------------');
            done();
        });

        /**
         * @tc.number RequestPrint_abnormal_test_4700
         * @tc.name updatePrinters: Update the information of the specific printers
         (parameter: 'extensionInfo' is invaild)
         * @tc.desc Function test
         */
        it('RequestPrint_abnormal_test_4700', 0, async function (done) {
            console.info('------------start RequestPrint_abnormal_test_4700-------------');
            let wrong;
            await print.updateExtensionInfo(extensionInfoInvalid).then((data) => {
                console.info('RequestPrint_test_4700' + ' result: ' + JSON.stringify(data));
                expect(false).assertTrue();
            }).catch((error) => {
                console.info('RequestPrint_abnormal_test_4700' + ' err: ' + JSON.stringify(error));
                wrong = error;
            });
            await sleep(waitTime);
            expect(wrong).assertEqual(E_PRINT_INVALID_PARAMETER);
            console.info('------------end RequestPrint_abnormal_test_4700-------------');
            done();
        });
    });
}
