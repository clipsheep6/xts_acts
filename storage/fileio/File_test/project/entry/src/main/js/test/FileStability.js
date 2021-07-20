import fileio from '@ohos.fileio'
import bundle_mgr from '@ohos.bundle_mgr'
import file from '@system.file';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'
import { FILE_CONTENT, prepareFile, nextFileName ,differentFileName} from './Common'

describe('fileStability', function () {


        it('fileStability',0,function(){
            for(let i = 0;i<100000;i++){

            try {
                console.log("------fileStability开始-------稳定性测试" + i)
                file.mkdir({
                    uri: 'internal://app/fileStability' + i,
                    success: function() {
                        console.log(i + 'call mkdir success.');
                    },
                    fail: function(data, code) {
                        console.log(i + 'call fail mkdir fail, code: ' + code + ', data: ' + data);
                    },
                });
                sleep(10)
                file.writeText({
                    uri: 'internal://app/fileStability' + i + '/fileStability01' + i,
                    text: 'Text that just for test.',
                    success: function() {
                        console.log(i + 'call writeText success.');
                    },
                    fail: function(data, code) {
                        console.log(i + 'call fail writeText fail, code: ' + code + ', data: ' + data);
                    },
                });
                sleep(10)
                file.access({
                    uri: 'internal://app/fileStability' + i + '/fileStability01' + i,
                    success: function() {
                        console.log(i + 'call access success.');
                    },
                    fail: function(data, code) {
                        console.log(i + 'call fail access fail, code: ' + code + ', data: ' + data);
                    },
                });
                sleep(10)
                file.readText({
                    uri: 'internal://app/fileStability' + i + '/fileStability01' + i,
                    success: function(data) {
                        console.log(i + 'call readText success: ' + data.text);
                    },
                    fail: function(data, code) {
                        console.log(i + 'call fail readText fail, code: ' + code + ', data: ' + data);
                    },
                });
                sleep(10)
//                file.get({
//                    uri: 'internal://app/fileStability/fileStability01',
//                    success: function(data) {
//                        console.log(data.uri);
//                    },
//                    fail: function(data, code) {
//                        console.log('call fail callback fail, code: ' + code + ', data: ' + data);
//                    },
//                });
//
//                file.list({
//                    uri: 'internal://app/fileStability',
//                    success: function(data) {
//                        console.log(data.fileList);
//                    },
//                    fail: function(data, code) {
//                        console.log('call fail callback fail, code: ' + code + ', data: ' + data);
//                    },
//                });

                file.copy({
                    srcUri: 'internal://app/fileStability' + i + '/fileStability01' + i,
                    dstUri: 'internal://app/fileStability' + i + '/fileStability02' + i,
                    success: function(uri) {
                        console.log(i + 'call success copy success');
                    },
                    fail: function(data, code) {
                        console.log(i + 'call fail copy fail, code: ' + code + ', data: ' + data);
                    },
                });
                sleep(10)
                file.move({
                    srcUri: 'internal://app/fileStability' + i + '/fileStability01' + i,
                    dstUri: 'internal://app/fileStability01' + i,
                    success: function(uri) {
                        console.log(i + 'call success move success');
                    },
                    fail: function(data, code) {
                        console.log(i + 'call fail move fail, code: ' + code + ', data: ' + data);
                    },
                });
                sleep(10)
                file.delete({
                    uri: 'internal://app/fileStability01' + i,
                    success: function() {
                        console.log(i + 'call delete success.');
                    },
                    fail: function(data, code) {
                        console.log(i + 'call fail delete fail, code: ' + code + ', data: ' + data);
                    },
                });
                sleep(10)
                let buf = new Uint8Array([48, 49, 50, 51, 65, 66, 67, 68, 32, 33]);
                file.writeArrayBuffer({
                    uri: 'internal://app/fileStability' + i + '/fileStability02' + i,
                    buffer: buf, //buffer为Uint8Array类型
                    success: function() {
                        console.log(i + 'call writeArrayBuffer success.');
                    },
                    fail: function(data, code) {
                        console.log(i + 'call fail writeArrayBuffer fail, code: ' + code + ', data: ' + data);
                    },
                });
                sleep(10)
                file.readArrayBuffer({
                    uri: 'internal://app/fileStability' + i + '/fileStability02' + i,
                    success: function(data) {
                        console.log(i + 'call readArrayBuffer success: ' + data.buffer);
                    },
                    fail: function(data, code) {
                        console.log(i + 'call fail readArrayBuffer fail, code: ' + code + ', data: ' + data);
                    },
                });
                sleep(10)
                file.delete({
                    uri: 'internal://app/fileStability' + i + '/fileStability02' + i,
                    success: function() {
                        console.log(i + 'call delete success.');
                    },
                    fail: function(data, code) {
                        console.log(i + 'call fail delete fail, code: ' + code + ', data: ' + data);
                    },
                });

                file.rmdir({
                    uri: 'internal://app/fileStability' + i,
                    recursive: true,
                    success: function() {
                        console.log(i + 'call rmdir success.');
                    },
                    fail: function(data, code) {
                        console.log(i + 'call fail rmdir fail, code: ' + code + ', data: ' + data);
                    },
                });
                console.log("------fileStability结束-------稳定性测试" + i)
                sleep(230)

            }catch(e){
                console.log("fileStability has failed for "+ e )
            }
            }
        })

    function sleep(n) {
        var start = new Date().getTime();
        //  console.log('休眠前：' + start);
        while (true) {
            if (new Date().getTime() - start > n) {
                break;
            }
        }
        // console.log('休眠后：' + new Date().getTime());
    }
})