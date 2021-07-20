// @ts-nocheck
import fileio from '@ohos.fileio'
import file from '@system.file';
import { describe, beforeAll,beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'
import { FILE_CONTENT, prepareFile,fileName,fileName1 ,nextFileName ,differentFileName, randomString,sleep,isFileExist,getFileTextLen,cacheFileName} from './Common'

describe("fileTest", function () {
    console.log("-------file_test_error_测试开始-------")

    //需提前创建ohos.acts.distributeddatamgr.distributedfile/cache/fileio_test_error
    it('fileio_test_error_000',0,function(){
        console.log("-------fileio_test_error_000-------")
        let fpath = "/data/accounts/account_0/appdata/ohos.acts.distributeddatamgr.distributedfile/cache/fileio_test_error"
        let fpathTarget = "/data/accounts/account_0/appdata/ohos.acts.distributeddatamgr.distributedfile/fileio_test_error"

        try{
            fileio.copyFileSync(fpath, fpathTarget)
        }catch(e){
            console.log("符合预期结果：执行失败" + e)
        }
    })

    it('fileio_test_error_001',0,function(){
        console.log("-------fileio_test_error_001-------")
        let dpath = "/data/accounts/account_0/appdata/ohos.acts.distributeddatamgr.distributedfile/cache/fileio_test_error_001d"

        try{
            fileio.mkdirSync(dpath)
            console.log("符合预期结果：创建成功")
        }catch(e){
            console.log("执行失败" + e)
        }
    })

    for(let i = 0; i < 88815; i++){
        let dpath = fileName("fileio_test_error_d" + i)
        fileio.mkdirSync(dpath)
    }

    it('fileio_test_error_002',0,function(){
        console.log("-------fileio_test_error_002-------")
        let dpath = fileName("fileio_test_error_002d")

        try{
            fileio.mkdirSync(dpath)
        }catch(e){
            console.log("执行失败" + e)
        }
    })

    it('fileio_test_error_003',0,function(){
        console.log("-------fileio_test_error_003-------")
        let fpath = "/data/accounts/account_0/appdata/ohos.acts.distributeddatamgr.distributedfile/cache/fileio_test_error_003"

        try{
            let fd = fileio.openSync(fpath, 0o102, 0o777)
            fileio.writeSync(fd, FILE_CONTENT)
            fileio.closeSync(fd)
        }catch(e){
            console.log("符合预期结果：执行失败" + e)
        }
    })

    it('fileio_test_error_004',0,function(){
        console.log("-------fileio_test_error_004-------")
        let fpath = "/data/accounts/account_0/appdata/ohos.acts.distributeddatamgr.distributedfile/cache/fileio_test_error_004"

        try{
            let fd = fileio.openSync(fpath, 0o102, 0o777)
            fileio.fsyncSync(fd)
            fileio.closeSync(fd)
        }catch(e){
            console.log("符合预期结果：执行失败" + e)
        }
    })

    /*删除非空目录*/
    it('fileio_test_error_010',0,function(){
        console.log("-------fileio_test_error_010-------")
        let dpath = fileName("fileio_test_error_010d")
        let fpath = dpath + "/fileio_test_error_010f"
        fileio.mkdirSync(dpath)
        prepareFile(fpath, "hello")
        try{
            fileio.rmdirSync(dpath)
            console.log("fail,可以删除有文件的目录")
        }catch(e){
            console.log("pass,无法删除有文件的目录" + e)
            fileio.unlinkSync(fpath)
            fileio.rmdirSync(dpath)
        }
    })

    /*调用rmdirSync()删除文件*/
    it('fileio_test_error_011',0,function(){
        console.log("-------fileio_test_error_011-------")
        let fpath = fileName("fileio_test_error_011f")
        prepareFile(fpath, "hello")
        try{
            fileio.rmdirSync(fpath)
            console.log("fail,可以调用rmdirSync()删除文件")
        }catch(e){
            console.log("pass,无法调用rmdirSync()删除文件" + e)
            fileio.unlinkSync(fpath)
        }
    })
    //传4096字节的路径复制文件
    it('fileio_test_error_011', 0, function () {
        console.log("---fileio_test_error_011 测试开始---")
        let fpath = nextFileName("fileio_test_error_011")
        fileio.openSync(fpath, 0o102, 0o777)
        let dpath = nextFileName("111111111111")
        fileio.mkdirSync(dpath)
        try{
            for(let i = 0; i < 16; i++){
                if(i == 15){
                    let fpathTarget = dpath + "/f" + randomString(248)
                    fileio.copyFileSync(fpath, fpathTarget)
                    console.log((i+1) + "级子文件复制成功")
                }else{
                    dpath = dpath + "/d" + randomString(248)
                    fileio.mkdirSync(dpath)
                    console.log((i+1) + "级子目录创建成功")
                }
            }
            expect(null).assertFail()
        }catch(e) {
            console.log("fileio_test_copy_file_sync_008 has failed for " + e)
        }
    })
    /*file*/
    it('file_test_error_000',0,async function(done){
        console.log("----------file_test_error_000----------");

        let api =  new Promise(function(resolve,reject){
            file.move({
                srcUri: 'internal://app/file_test_error',
                dstUri: 'internal://cache/file_test_error',
                success: function() {
                    resolve('call move success.');
                },
                fail: function(data, code) {
                    console.log('call fail callback fail, code: ' + code + ', data: ' + data);
                    reject(code)
                },
            });
        })
        api.then(function(data){
            console.log("file_test_error_000 => pass" + data)
        })
        api.catch(function(code){
            console.log('file_test_error_000 => fail call fail callback fail, code: ' + code )
            expect(null).assertFail()
        })
        done()
    })

    it('file_test_error_001',0,async function(done){
        console.log("----------file_test_error_001----------");

        let api =  new Promise(function(resolve,reject){
            file.copy({
                srcUri: 'internal://app/file_test_error',
                dstUri: 'internal://cache/file_test_error',
                success: function() {
                    resolve('call copy success.');
                },
                fail: function(data, code) {
                    console.log('call fail callback fail, code: ' + code + ', data: ' + data);
                    reject(code)
                },
            });
        })
        api.then(function(data){
            console.log("file_test_error_001 => pass" + data)
        })
        api.catch(function(code){
            console.log('file_test_error_001 => fail call fail callback fail, code: ' + code )
            expect(null).assertFail()
        })
        done()
    })

    it('file_test_error_002',0,async function(done){
        console.log("----------file_test_error_002----------");

        let api =  new Promise(function(resolve,reject){
            file.writeText({
                uri: 'internal://app/file_test_error',
                text: FILE_CONTENT,
                success: function() {
                    resolve('call writeText success.');
                },
                fail: function(data, code) {
                    console.log('call fail callback fail, code: ' + code + ', data: ' + data);
                    reject(code)
                },
            });
        })
        api.then(function(data){
            console.log("file_test_error_002 => pass" + data)
        })
        api.catch(function(code){
            console.log('file_test_error_002 => fail call fail callback fail, code: ' + code )
            expect(null).assertFail()
        })
        done()
    })

    it('file_test_error_003',0,async function(done){
        console.log("----------file_test_error_003----------");
        let buf = new Uint8Array([48, 49, 50, 51, 65, 66, 67, 68, 32, 33]);
        let api =  new Promise(function(resolve,reject){
            file.writeArrayBuffer({
                uri: 'internal://app/file_test_error',
                buffer: buf,
                success: function() {
                    resolve('call writeText success.');
                },
                fail: function(data, code) {
                    console.log('call fail callback fail, code: ' + code + ', data: ' + data);
                    reject(code)
                },
            });
        })
        api.then(function(data){
            console.log("file_test_error_003 => pass" + data)
        })
        api.catch(function(code){
            console.log('file_test_error_003 => fail call fail callback fail, code: ' + code )
            expect(null).assertFail()
        })
        done()
    })
    it('file_test_error_004',0,async function(done){
        console.log("----------file_test_error_004----------");
        let api =  new Promise(function(resolve,reject){
            file.mkdir({
                uri: 'internal://app/file_test_error004d',
                success: function() {
                    resolve('call mkdir success.');
                },
                fail: function(data, code) {
                    console.log('call fail mkdir fail, code: ' + code + ', data: ' + data);
                    reject(code)
                },
            });
        })
        api.then(function(data){
            console.log("file_test_error_004 => pass" + data)
        })
        api.catch(function(code){
            console.log('file_test_error_004 => fail call fail callback fail, code: ' + code )
            expect(null).assertFail()
        })
        done()
    })

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