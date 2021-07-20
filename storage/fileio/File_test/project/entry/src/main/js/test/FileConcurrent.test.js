import fileio from '@ohos.fileio'
import bundle_mgr from '@ohos.bundle_mgr'
import file from '@system.file';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'
import { FILE_CONTENT, prepareFile, fileName, cacheFileName, getFileTextLen, isFileExist, prepareEmptyFile, randomString} from './Common'

describe('fileconcurrent', function () {
    console.log("-------fileconcurrent-------并发测试-----");

//    it('file_test_000',0,async function(done){
//        console.log("----------file_test_000----------");
//        for(let i =0;i<10;i++){
//            let api =  new Promise(function(resolve,reject){
//                file.writeText({
//                    uri: 'internal://app/file_test_000',
//                    text: 'Text',
//                    success: function() {
//                        resolve('call writeText success.');
//                    },
//                    fail: function(data, code) {
//                        console.log('call fail callback fail, code: ' + code + ', data: ' + data);
//                        reject(code)
//                    },
//                });
//            })
//            let api_1 =  new Promise(function(resolve,reject){
//                file.writeText({
//                    uri: 'internal://app/file_test_000',
//                    text: 'Text1',
//                    success: function() {
//                        resolve('call writeText success.');
//                    },
//                    fail: function(data, code) {
//                        console.log('call fail callback fail, code: ' + code + ', data: ' + data);
//                        reject(code)
//                    },
//                });
//            })
//            let api_2 =  new Promise(function(resolve,reject){
//                file.writeText({
//                    uri: 'internal://app/file_test_000',
//                    text: 'Text2',
//                    success: function() {
//                        resolve('call writeText success.');
//                    },
//                    fail: function(data, code) {
//                        console.log('call fail callback fail, code: ' + code + ', data: ' + data);
//                        reject(code)
//                    },
//                });
//            })
//            api.then(function(data){
//                console.log("file_test_000 => pass" + data +i)
//            })
//            api.catch(function( code){
//                console.log('file_test_000 => fail call fail callback fail, code: ' + code+i)
//            })
//            api_1.then(function(data){
//                console.log("file_test_000 => pass" + data+i)
//            })
//            api_1.catch(function( code){
//                console.log('file_test_000 => fail call fail callback fail, code: ' + code+i)
//            })
//            api_2.then(function(data){
//                console.log("file_test_000 => pass" + data+i)
//            })
//            api_2.catch(function( code){
//                console.log('file_test_000 => fail call fail callback fail, code: ' + code+i)
//            })
//            console.log("-------file_test_000-------"+i)
//        }
//
//        done()
//    })

//    it('file_test_001',0,async function(done){
//        console.log("----------file_test_001----------");
//        file.writeText({
//            uri: 'internal://app/file_test_001',
//            text: 'Text',
//            success: function() {
//                console.log('call writeText success.');
//            },
//            fail: function(data, code) {
//                console.log('call fail callback fail, code: ' + code + ', data: ' + data)
//            },
//        });
//        for(let i =0;i<10;i++){
//            let api =  new Promise(function(resolve,reject){
//                file.readText({
//                    uri: 'internal://app/file_test_001',
//                    success: function(data) {
//                        console.log('call readText success: ' + data.text);
//                        resolve(data)
//                    },
//                    fail: function(data, code) {
//                        console.log('call fail callback fail, code: ' + code + ', data: ' + data);
//                        reject(code)
//                    },
//                });
//            })
//            let api_1 =  new Promise(function(resolve,reject){
//                file.readText({
//                    uri: 'internal://app/file_test_001',
//                    success: function(data) {
//                        console.log('call readText success: ' + data.text);
//                        resolve(data)
//                    },
//                    fail: function(data, code) {
//                        console.log('call fail callback fail, code: ' + code + ', data: ' + data);
//                        reject(code)
//                    },
//                });
//            })
//            let api_2 =  new Promise(function(resolve,reject){
//                file.readText({
//                    uri: 'internal://app/file_test_001',
//                    success: function(data) {
//                        console.log('call readText success: ' + data.text);
//                        resolve(data)
//                    },
//                    fail: function(code,data) {
//                        console.log('call fail callback fail, code: ' + code + ', data: ' + data);
//                        reject(code)
//                    },
//                });
//            })
//            api.then(function(data){
//                console.log("file_test_001 => pass" + data.text+i)
//            })
//            api.catch(function( code){
//                console.log('file_test_001 => fail call fail callback fail, code: ' + code+i)
//            })
//            api_1.then(function(data){
//                console.log("file_test_001 => pass" + data.text+i)
//            })
//            api_1.catch(function( code){
//                console.log('file_test_001 => fail call fail callback fail, code: ' + code+i)
//            })
//            api_2.then(function(data){
//                console.log("file_test_001 => pass" + data.text+i)
//            })
//            api_2.catch(function( code){
//                console.log('file_test_001 => fail call fail callback fail, code: ' + code+i)
//            })
//            console.log("-------file_test_001-------"+i)
//        }
//
//        done()
//    })
//
//    it('file_test_002',0,async function(done){
//        console.log("----------file_test_002----------");
//        file.writeText({
//            uri: 'internal://app/file_test_002',
//            text: 'Text',
//            append: true,
//            success: function() {
//                console.log('call writeText success.');
//            },
//            fail: function(data, code) {
//                console.log('call fail callback fail, code: ' + code + ', data: ' + data);
//
//            },
//        });
//        for(let i =0;i<10;i++){
//            let api =  new Promise(function(resolve,reject){
//                file.copy({
//                    srcUri: 'internal://app/file_test_002',
//                    dstUri: 'internal://app/file_test_002'+i,
//                    success: function(uri) {
//                        console.log('call success callback success');
//                    },
//                    fail: function(data, code) {
//                        console.log('call fail callback fail, code: ' + code + ', data: ' + data);
//                        reject(code)
//                    },
//                });
//            })
//            let api_1 =  new Promise(function(resolve,reject){
//                file.copy({
//                    srcUri: 'internal://app/file_test_002',
//                    dstUri: 'internal://app/file_test_002'+"100"+i,
//                    success: function(uri) {
//                        console.log('call success callback success');
//                    },
//                    fail: function(data, code) {
//                        console.log('call fail callback fail, code: ' + code + ', data: ' + data);
//                        reject(code)
//                    },
//                });
//            })
//            let api_2 =  new Promise(function(resolve,reject){
//                file.copy({
//                    srcUri: 'internal://app/file_test_002',
//                    dstUri: 'internal://app/file_test_002'+"200"+i,
//                    success: function(uri) {
//                        console.log('call success callback success');
//                    },
//                    fail: function(data, code) {
//                        console.log('call fail callback fail, code: ' + code + ', data: ' + data);
//                        reject(code)
//                    },
//                });
//            })
//            api.then(function(data){
//                console.log("file_test_002 => pass" + data+i)
//            })
//            api.catch(function( code){
//                console.log('file_test_002 => fail call fail callback fail, code: ' + code+i)
//
//            })
//            api_1.then(function(data){
//                console.log("file_test_002 => pass" + data+i)
//            })
//            api_1.catch(function( code){
//                console.log('file_test_002 => fail call fail callback fail, code: ' + code+i)
//
//            })
//            api_2.then(function(data){
//                console.log("file_test_002 => pass" + data+i)
//            })
//            api_2.catch(function( code){
//                console.log('file_test_002 => fail call fail callback fail, code: ' + code+i)
//
//            })
//            console.log("-------file_test_002-------"+i)
//        }
//
//        done()
//    })
//
//
//    it('file_test_003',0,async function(done){
//        console.log("----------file_test_003----------");
//        for(let i =0;i<10;i++){
//            let api =  new Promise(function(resolve,reject){
//                file.writeText({
//                    uri: 'internal://app/file_test_003',
//                    text: 'Text',
//                    append: true,
//                    success: function() {
//                        resolve('call writeText success.');
//                    },
//                    fail: function(data, code) {
//                        console.log('call fail callback fail, code: ' + code + ', data: ' + data);
//                        reject(code)
//                    },
//                });
//            })
//            let api_1 =  new Promise(function(resolve,reject){
//                file.move({
//                    srcUri: 'internal://app/file_test_003',
//                    dstUri: 'internal://file_test_003',
//                    success: function(uri) {
//                        console.log('call success callback success');
//                    },
//                    fail: function(data, code) {
//                        console.log('call fail callback fail, code: ' + code + ', data: ' + data);
//                        reject(code)
//                    },
//                });
//            })
//
//            api.then(function(data){
//                console.log("file_test_003 => pass" + data+i)
//            })
//            api.catch(function( code){
//                console.log('file_test_003 => fail call fail callback fail, code: ' + code+i)
//
//            })
//            api_1.then(function(data){
//                console.log("file_test_003 => pass" + data+i)
//            })
//            api_1.catch(function( code){
//                console.log('file_test_003 => fail call fail callback fail, code: ' + code+i)
//
//            })
//
//            console.log("-------file_test_003-------"+i)
//        }
//
//        done()
//    })
//
//    it('file_test_004',0,async function(done){
//        console.log("----------file_test_004----------");
//        let buf = new Uint8Array([48, 49, 50, 51, 65, 66, 67, 68, 32, 33]);
//        file.writeArrayBuffer({
//            uri: 'internal://app/file_test_004',
//            buffer: buf, //buffer为Uint8Array类型
//            success: function() {
//                console.log('call writeArrayBuffer success.');
//            },
//            fail: function(data, code) {
//                console.error('call fail callback fail, code: ' + code + ', data: ' + data);
//            },
//        });
//        for(let i =0;i<10;i++){
//            let api =  new Promise(function(resolve,reject){
//                file.readArrayBuffer({
//                    uri: 'internal://app/file_test_004',
//                    success: function(data) {
//                        console.log('call readArrayBuffer success: ' + data.buffer);
//                        resolve(data)
//                    },
//                    fail: function(data, code) {
//                        console.log('call fail callback fail, code: ' + code + ', data: ' + data);
//                        reject(code)
//                    },
//                });
//            })
//            let api_1 =  new Promise(function(resolve,reject){
//                file.readArrayBuffer({
//                    uri: 'internal://app/file_test_004',
//                    success: function(data) {
//                        console.log('call readArrayBuffer success: ' + data.buffer);
//                        resolve(data)
//                    },
//                    fail: function(data, code) {
//                        console.log('call fail callback fail, code: ' + code + ', data: ' + data);
//                        reject(code)
//                    },
//                });
//            })
//            let api_2 =  new Promise(function(resolve,reject){
//                file.readArrayBuffer({
//                    uri: 'internal://app/file_test_004',
//                    success: function(data) {
//                        console.log('call readArrayBuffer success: ' + data.buffer);
//                        resolve(data)
//                    },
//                    fail: function(data, code) {
//                        console.log('call fail callback fail, code: ' + code + ', data: ' + data);
//                        reject(code)
//                    },
//                });
//            })
//            api.then(function(data){
//                console.log("file_test_004 => pass" + data.buffer+i)
//            })
//            api.catch(function( code){
//                console.log('file_test_004 => fail call fail callback fail, code: ' + code+i)
//            })
//            api_1.then(function(data){
//                console.log("file_test_004 => pass" + data.buffer+i)
//            })
//            api_1.catch(function( code){
//                console.log('file_test_004 => fail call fail callback fail, code: ' + code+i)
//            })
//            api_2.then(function(data){
//                console.log("file_test_004 => pass" + data.buffer+i)
//            })
//            api_2.catch(function( code){
//                console.log('file_test_004 => fail call fail callback fail, code: ' + code+i)
//            })
//            console.log("-------file_test_004-------"+i)
//        }
//
//        done()
//    })

//    it('file_test_005',0,async function(done){
//        console.log("----------file_test_005----------");
//        let buf = new Uint8Array([48, 49, 50, 51, 65, 66, 67, 68, 32, 33]);
//        for(let i =0;i<10;i++){
//            file.writeArrayBuffer({
//                uri: 'internal://app/file_test_005',
//                buffer: buf, //buffer为Uint8Array类型
//                success: function() {
//                    console.log('call writeArrayBuffer success.');
//                },
//                fail: function(code) {
//                    console.log('call fail callback fail, code: ' + code);
//                    reject(code)
//                },
//            });
//            let api_1 =  new Promise(function(resolve,reject){
//                file.writeArrayBuffer({
//                    uri: 'internal://app/file_test_005',
//                    buffer: buf, //buffer为Uint8Array类型
//                    success: function() {
//                        console.log('call writeArrayBuffer success.');
//                    },
//                    fail: function(code) {
//                        console.log('call fail callback fail, code: ' + code);
//                        reject(code)
//                    },
//                });
//            })
//            let api_2 =  new Promise(function(resolve,reject){
//                file.writeArrayBuffer({
//                    uri: 'internal://app/file_test_005',
//                    buffer: buf, //buffer为Uint8Array类型
//                    success: function() {
//                        console.log('call writeArrayBuffer success.');
//                    },
//                    fail: function(code) {
//                        console.log('call fail callback fail, code: ' + code);
//                        reject(code)
//                    },
//                });
//            })
//            api.then(function(data){
//                console.log("file_test_005 => pass" + data+i)
//            })
//            api.catch(function(code){
//                console.log('file_test_005 => fail call fail callback fail, code: ' + code+i)
//            })
//            api_1.then(function(data){
//                console.log("file_test_005 => pass" + data+i)
//            })
//            api_1.catch(function(code){
//                console.log('file_test_005 => fail call fail callback fail, code: ' + code+i)
//            })
//            api_2.then(function(data){
//                console.log("file_test_005 => pass" + data+i)
//            })
//            api_2.catch(function(code){
//                console.log('file_test_005 => fail call fail callback fail, code: ' + code+i)
//            })
//            console.log("-------file_test_005-------"+i)
//        }
//
//        done()
//    })

    it('file_test_006',0,async function(done){
        console.log("----------file_test_006----------");
        for(let i =0;i<10;i++){
            let api =  new Promise(function(resolve,reject){
                file.writeText({
                    uri: 'internal://app/file_test_006',
                    text: 'Text',
                    success: function() {
                        console.log('call writeText success.');
                    },
                    fail: function(data, code) {
                        console.log('call fail callback fail, code: ' + code + ', data: ' + data);
                        reject(code)
                    },
                });
            })
            let api_1 =  new Promise(function(resolve,reject){
                file.readText({
                    uri: 'internal://app/file_test_006',
                    success: function(data) {
                        console.log('call readText success: ' + data.text);
                        resolve(data)
                    },
                    fail: function(data, code) {
                        console.log('call fail callback fail, code: ' + code + ', data: ' + data);
                        reject(code)
                    },
                });
            })

            api.then(function(data){
                console.log("file_test_006 => pass" + data+i)
            })
            api.catch(function( code){
                console.log('file_test_006 => fail call fail callback fail, code: ' + code+i)
            })
            api_1.then(function(data){
                console.log("file_test_006 => pass" + data.text+i)
            })
            api_1.catch(function( code){
                console.log('file_test_006 => fail call fail callback fail, code: ' + code+i)
            })

            console.log("-------file_test_006-------"+i)
        }

        done()
    })


    it('file_test_007',0,async function(done){
        console.log("----------file_test_007----------");
        let buf = new Uint8Array([48, 49, 50, 51, 65, 66, 67, 68, 32, 33]);
        for(let i =0;i<10;i++){
            let api =  new Promise(function(resolve,reject){
                file.writeArrayBuffer({
                    uri: 'internal://app/file_test_007',
                    buffer: buf, //buffer为Uint8Array类型
                    success: function() {
                        console.log('call writeArrayBuffer success.');
                    },
                    fail: function(code) {
                        console.log('call fail callback fail, code: ' + code);
                        reject(code)
                    },
                });
            })
            let api_1 =  new Promise(function(resolve,reject){
                file.readArrayBuffer({
                    uri: 'internal://app/file_test_007',
                    success: function(data) {
                        console.log('call readArrayBuffer success: ' + data.buffer);
                    },
                    fail: function(data, code) {
                        console.log('call fail callback fail, code: ' + code + ', data: ' + data);
                        reject(code)
                    },
                });
            })

            api.then(function(data){
                console.log("file_test_007 => pass" + data+i)
            })
            api.catch(function( code){
                console.log('file_test_007 => fail call fail callback fail, code: ' + code+i)
            })
            api_1.then(function(data){
                console.log("file_test_007 => pass" + data.buffer+i)
            })
            api_1.catch(function( code){
                console.log('file_test_007 => fail call fail callback fail, code: ' + code+i)
            })

            console.log("-------file_test_007-------"+i)
        }

        done()
    })

    it('file_test_008',0,async function(done){
        console.log("----------file_test_008----------");
        for(let i =0;i<10;i++){
            let api =  new Promise(function(resolve,reject){
                file.writeText({
                    uri: 'internal://app/file_test_008',
                    text: 'Text',
                    success: function() {
                        console.log('call writeText success.');
                    },
                    fail: function(data, code) {
                        console.log('call fail callback fail, code: ' + code + ', data: ' + data);
                        reject(code)
                    },
                });
            })
            let api_1 =  new Promise(function(resolve,reject){
                file.copy({
                    srcUri: 'internal://app/file_test_008',
                    dstUri: 'internal://app/file_test_008'+i,
                    success: function(uri) {
                        console.log('call success callback success');
                    },
                    fail: function(code) {
                        console.log('call fail callback fail, code: ' + code );
                        reject(code)
                    },
                });
            })

            api.then(function(data){
                console.log("file_test_008 => pass" + data+i)
            })
            api.catch(function( code){
                console.log('file_test_008 => fail call fail callback fail, code: ' + code+i)
            })
            api_1.then(function(data){
                console.log("file_test_008 => pass" + data+i)
            })
            api_1.catch(function( code){
                console.log('file_test_008 => fail call fail callback fail, code: ' + code+i)
            })

            console.log("-------file_test_008-------"+i)
        }

        done()
    })



})