import fileio from '@ohos.fileio'
import bundle_mgr from '@ohos.bundle_mgr'
import file from '@system.file';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'
import { FILE_CONTENT, prepareFile, fileName, cacheFileName, getFileTextLen, isFileExist, prepareEmptyFile, randomString,sleep} from './Common'

describe("fileTest", function () {
    beforeAll(() => console.info("开始接口测试"))
    fileio.mkdirSync("/data/accounts/account_0/appdata/ohos.acts.stroage.fileio/files/cache")

//    //复制文件(app路径)
//    it('File_Copy_001',0,async function(){
//        console.log("----------File_Copy_001----------");
//        let srcFpath = fileName("File_Copy_001")
//        let dstFpath = cacheFileName("File_Copy_001")
//        expect(prepareFile(srcFpath, "test") !== null).assertTrue()
//        sleep(10)
//        let api =  new Promise(function(resolve,reject){
//            file.copy({
//                srcUri: "internal://app/File_Copy_001",
//                dstUri: "internal://app/cache/File_Copy_001",
//                success: function() {
//                    console.log("File_Copy_001 call copy success.")
//                    resolve("File_Copy_001 copy pass");
//                },
//                fail: function(data, code) {
//                    reject('File_Copy_001 call fail callback fail, code: ' + code + ', data: ' + data);
//                },
//            });
//        })
//        api.then(function(){
//            console.log("File_Copy_001 copy pass")
//            sleep(30)
//            file.readText({
//                uri: "internal://app/cache/File_Copy_001",
//                success: function(data) {
//                    console.log("File_Copy_001 读取内容:" + data.text)
//                    if(data.text == "test"){
//                        console.log("File_Copy_001 pass=>读取内容与写入一致")
//                    }else{
//                        console.log("File_Copy_001 fail=>读取内容与写入不一致")
//                    }
//                },
//                fail: function(data, code) {
//                    console.log('File_Copy_001  call readText callback fail, code: ' + code + ', data: ' + data);
//                },
//            });
//            sleep(10)
////            expect(fileio.unlinkSync(srcFpath) !== null).assertTrue()
////            expect(fileio.unlinkSync(dstFpath) !== null).assertTrue()
//        })
//        api.catch(function(data, code){
//            console.log('File_Copy_001 => fail call fail callback fail, code: ' + code + ', data: ' + data)
//        })
//
//    })
//
//    /*file.copy() 移动不同大小文件 <1M*/
//    it("File_Copy_003",0,async function(){
//        console.log("----------File_Copy_003----------");
//        let srcFpath = fileName("File_Copy_003")
//        expect(prepareFile(srcFpath,FILE_CONTENT) !== null).assertTrue()
//        let dstFpath = cacheFileName("File_Copy_003")
//        sleep(10)
//        let api =  new Promise(function(resolve,reject){
//            file.copy({
//                srcUri: "internal://app/File_Copy_003",
//                dstUri: "internal://app/cache/File_Copy_003",
//                success: function() {
//                    console.log("File_Copy_003 call copy success.")
//                    resolve("File_Copy_003 call copy success.");
//                },
//                fail: function(data, code) {
//                    reject("File_Copy_003 call fail callback fail, code: " + code + ", data: " + data);
//                },
//            });
//        })
//        api.then(function(){
//            console.log("File_Copy_003 => pass ")
//            sleep(30)
//            file.readText({
//                uri: "internal://app/cache/File_Copy_003",
//                success: function(data) {
//                    console.log("File_Copy_003 读取内容:" + data.text)
//                    if(data.text == FILE_CONTENT){
//                        console.log("File_Copy_003 pass=>读取内容与写入一致")
//                    }else{
//                        console.log("File_Copy_003 fail=>读取内容与写入不一致")
//                    }
//                },
//                fail: function(data, code) {
//                    console.log('File_Copy_003 call readText callback fail, code: ' + code + ', data: ' + data);
//                },
//            });
//            sleep(10)
////            expect(fileio.unlinkSync(srcFpath) !== null).assertTrue()
////            expect(fileio.unlinkSync(dstFpath) !== null).assertTrue()
//        })
//        api.catch(function(data){
//            console.log("File_Copy_003 => fail " + data)
//        })
//    })


    //    file.rmdir() 删除指定目录 。
    //uri传入文件路径
    it('file_test_error_007',0,async function(){
        console.log("----------file_test_error_007----------");
        let fpath = fileName('file_test_error_007')
        try{
            expect(prepareFile(fpath, FILE_CONTENT) !== null).assertTrue()
        }catch(e){
            console.log("file_test_error_007 创建文件失败了 因为：" + e)
        }

        let api =  new Promise(function(resolve,reject){
            file.rmdir({
                uri: 'internal://app/file_test_error_007',
                recursive: true,
                success: function() {
                    resolve('file_test_error_007 call rmdir success.');
                },
                fail: function(data, code) {
                    console.log('file_test_error_007 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('file_test_error_007 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("file_test_error_007 => pass" + data)
        })
        api.catch(function( code){
            console.log(code )
        })

    })
    //文件写入时删除文件
    it('file_test_error_008',0,async function(){
        console.log("----------file_test_error_008----------");
        file.writeText({
            uri: 'internal://app/file_test_error_008',
            text: 'File_rmdir_000',
            success: function() {
                console.log('file_test_error_008 call mkdir success.');
            },
            fail: function(data, code) {
                console.log('file_test_error_008 call fail callback fail, code: ' + code + ', data: ' + data);
            },
        });

        let api =  new Promise(function(resolve,reject){
            file.rmdir({
                uri: 'internal://app/file_test_error_008',
                success: function() {
                    resolve('file_test_error_008 call rmdir success.');
                },
                fail: function(data, code) {
                    console.log('file_test_error_008 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject(code)
                },
            });
        })
        api.then(function(data){
            console.log("file_test_error_008 => pass" + data)
        })
        api.catch(function(code){
            console.log('file_test_error_008 => fail call fail callback fail,  '  + ', code: ' + code)
        })
    })
    //    file.rmdir() 删除指定目录 。
    //uri传入文件夹，文件夹下有文件
    it('file_test_error_009',0,async function(){
        console.log("----------file_test_error_009----------");
        let fpath = fileName('file_test_error_009')
        let dpath = fileName('file_test_error_009') + 'd'
        try{
            expect(prepareFile(fpath, FILE_CONTENT) !== null).assertTrue()
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
        }catch(e){
            console.log("file_test_error_009 创建文件和目录失败了 因为：" + e)
        }

        let api =  new Promise(function(resolve,reject){
            file.rmdir({
                uri: 'internal://app/file_test_error_009d',
                recursive: true,
                success: function() {
                    resolve('file_test_error_009 call rmdir success.');
                },
                fail: function(data, code) {
                    console.log('file_test_error_009 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('file_test_error_009 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("file_test_error_009 => pass," + data)
        })
        api.catch(function( code){
            console.log(code )
        })
    })












})
