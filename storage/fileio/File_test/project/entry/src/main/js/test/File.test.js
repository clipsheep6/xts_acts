// @ts-nocheck
import fileio from '@ohos.fileio'
import bundle_mgr from '@ohos.bundle_mgr'
import file from '@system.file';
import { describe, beforeAll,beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'
import { FILE_CONTENT, prepareFile,fileName,fileName1 ,nextFileName ,differentFileName, randomString,sleep,isFileExist,getFileTextLen,cacheFileName} from './Common'


describe('fileTest', function () {
    console.log("fileTest-异步接口测试");
    //正常删除app路径文件
    it('File_Delete_001',0,async function(){
        console.log("----------File_Delete_001----------");
        file.writeText({
            uri: "internal://app/File_Delete_001",
            text: 'Text that just for test.',
            success: function() {
                console.log('File_Delete_001 文件创建写入成功');
            },
            fail: function(data, code) {
                console.log('File_Delete_001 文件创建写入失败, code: ' + code + ', data: ' + data);
            },
        });

        let api =  new Promise(function(resolve,reject){
            file.delete({
                uri: "internal://app/File_Delete_001",
                success: function(data) {
                    console.log('File_Delete_001 文件删除成功' +data);
                },
                fail: function(data, code) {
                    console.log('File_Delete_001 文件删除失败, code: ' + code + ', data: ' + data);
                    reject(code)
                },
            });
        })
        api.then(function(data){
            console.log("File_Delete_001 => pass" + data)
        })
        api.catch(function(code){
            console.log('File_Delete_001 => fail call fail callback fail, code: ' + code )
            expect(null).assertFail()
        })
        
    })
    //删除空文件夹成功
    it('File_Delete_002',0,async function(){
        console.log("----------File_Delete_002----------");
        file.mkdir({
            uri: 'internal://app/File_Delete_002',
            success: function() {
                console.log('File_Delete_002 call mkdir success.');
            },
            fail: function(data, code) {
                console.log('File_Delete_002 call fail callback fail, code: ' + code + ', data: ' + data);
            },
        });

        let api =  new Promise(function(resolve,reject){
            file.delete({
                uri: 'internal://app/File_Delete_002',
                success: function() {
                    console.log('File_Delete_002  call delete success.');
                },
                fail: function(data, code) {
                    console.log('File_Delete_002 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_Delete_002 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_Delete_002 => pass" + data)
        })
        api.catch(function(code){
            console.log('File_Delete_002 => fail call fail callback fail, code: ' + code)
            expect(null).assertFail()
        })
        
    })

    //   错误传参 202  参数错误
    it('File_Delete_003',0,async function(){
        console.log("----------File_Delete_003----------");


        let api =  new Promise(function(resolve,reject){
            file.delete({
                uri: 'internal://ohos/workspace/text.txt',
                success: function() {
                    console.log('File_Delete_003 call delete success.');
                },
                fail: function(data, code) {
                    console.log('File_Delete_003 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_Delete_003 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_Delete_003 => pass" + data)
        })
        api.catch(function( code){
            console.log('File_Delete_003 => fail call fail callback fail, code: ' + code )

        })
        
    })

    //  删除文件夹，文件夹里有文件   ---code: 300, data: I/O error
    it('File_Delete_004',0,async function(){
        console.log("----------File_Delete_004----------");
        let dpath = fileName("File_Delete_004")

        let fpath = dpath + "/File_Delete_004"

        try{
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
            expect(prepareFile(fpath, FILE_CONTENT) !== null).assertTrue()
        }catch(e){
            console.log("File_Delete_004 创建文件和目录失败了 因为：" + e)
        }
        let api =  new Promise(function(resolve,reject){
            file.delete({
                uri: 'internal://app/File_Delete_004',
                success: function() {
                    console.log('File_Delete_004 call delete success.');
                },
                fail: function(data, code) {
                    console.log('File_Delete_004 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_Delete_004 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_Delete_004 => pass" + data)
        })
        api.catch(function(code){
            console.log('File_Delete_004 => fail call fail callback fail, code: ' + code )

        })

    })

    //    301 文件不存在
    it('File_Delete_005',0,async function(){
        console.log("----------File_Delete_005----------");

        let api =  new Promise(function(resolve,reject){
            file.delete({
                uri: 'internal://app/File_Delete_005',
                success: function(data) {
                    console.log('File_Delete_005 call delete success.'+data);
                },
                fail: function(data, code) {
                    console.log('File_Delete_005 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_Delete_005 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_Delete_005 => pass" + data)
        })
        api.catch(function( code){
            console.log('File_Delete_005 => fail call fail callback fail, code: ' + code)
            expect(null).assertFail()

        })
        
    })

    //Uri赋值超过4096 code: 300, data: I/O error
    it('File_Delete_006', 0, async function(){
        console.log("----------File_Delete_006----------")
        let firstPath = randomString(32)
        let dpath = fileName(firstPath)
        let uri = "internal://cache/" + firstPath
        fileio.mkdirSync(dpath)
        for(let i = 0; i < 16; i++){
            console.log("次数" + i)
            let sonPath = randomString(248)
            uri = uri + "/f" + sonPath
        }

        let api = new Promise(function(resolve, reject){
            file.delete({
                uri: uri,
                success: function() {
                    resolve('File_Delete_006 => pass')
                    console.log("File_Delete_006 => 文件删除成功")
                },
                fail: function(data, code) {
                    reject('File_Delete_006 call fail callback fail, code: ' + code + ', data: ' + data);
                    console.log("File_Delete_006 => 文件删除失败")
                },
            });
        })
        fileio.rmdirSync(dpath)
        api.then(function(data){
            console.log("File_Delete_006 then......" + data);
        })
        api.catch(function(e){
            console.log('File_Delete_006 => fail call fail callback fail, data: ' + e)
        })
    })
    //文件删除功能(cache路径)
    it('File_Delete_007', 0, async function(){
        console.log("----------File_Delete_007----------")
        file.writeText({
            uri: "internal://cache/File_Delete_007",
            text: "test",
            success: function() {
                console.log("File_Delete_007 文件创建成功");
            },
            fail: function(data, code) {
                console.log('File_Delete_007 文件创建失败, code: ' + code + ', data: ' + data);
            },
        })

        let api = new Promise(function(resolve, reject){
            file.delete({
                uri: "internal://cache/File_Delete_007",
                success: function() {
                    resolve('File_Delete_007 => pass')
                    console.log("File_Delete_007 文件删除成功")
                },
                fail: function(data, code) {
                    reject('File_Delete_007  call fail callback fail, code: ' + code + ', data: ' + data);
                    console.log("File_Delete_007 文件删除失败")
                },
            });
        })
        api.then(function(data){
            console.log("File_Delete_007 then......" + data);
        })
        api.catch(function(e){
            console.log('File_Delete_007 => fail call fail callback fail, data: ' + e)
        })
    })
    //路径存在，文件不存在，会创建文件并写入
    it('File_writeText_001',0,async function(){
        console.log("----------File_writeText_001----------");

        file.writeText({
            uri: 'internal://app/File_writeText_001',
            text: "sawyerwang",
            success: function() {
                console.log('File_writeText_001 文件创建写入成功');
            },
            fail: function(data, code) {
                console.log('File_writeText_001 call fail callback fail, code: ' + code + ', data: ' + data);
            },
        });
        let api =  new Promise(function(resolve,reject){
            file.readText({
                uri: 'internal://app/File_writeText_001',
                success: function(data) {
                    console.log('File_writeText_001 文件读取成功 ' + data.text);
                    resolve(data.text)
                },
                fail: function(data, code) {
                    console.log('File_writeText_001 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            })

            file.delete({
                uri: 'internal://app/File_writeText_001',
                success: function(data) {
                    console.log('File_writeText_001 文件删除成功' +data);
                },
                fail: function(data, code) {
                    reject('File_writeText_001 delete call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            if(data == 'sawyerwang'){
                console.log("File_writeText_001 => pass过了" + data)
            }else{
                console.log("File_writeText_001 读到的内容与写入的不一致")
            }
        })
        api.catch(function(code){
            console.log('File_writeText_001 => fail call fail callback fail, code: ' + code)
            expect(null).assertFail()
        })
    })

    //文件存在，写入文件
    it('File_writeText_002',0,async function(){
        console.log("----------File_writeText_002----------");

        let fpath = "/data/accounts/account_0/appdata/ohos.acts.stroage.fileio/files/File_writeText_002"

        try{
            expect(prepareFile(fpath, 'aaa') !== null).assertTrue()
        }catch(e){
            console.log("File_writeText_002 创建文件失败了 因为：" + e)
        }
        file.writeText({
            uri: 'internal://app/File_writeText_002',
            text: 'Text1',
            success: function() {
                console.log('File_writeText_002 call writeText success.');
            },
            fail: function(data, code) {
                console.log('File_writeText_002 call fail callback fail, code: ' + code + ', data: ' + data);
            },
        });
        let api =  new Promise(function(resolve,reject){
            file.writeText({
                uri: 'internal://app/File_writeText_002',
                text: 'Text2',
                append: true,
                success: function() {
                    console.log('File_writeText_002 call writeText success.');
                },
                fail: function(data, code) {
                    console.log('File_writeText_002 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject(code)
                },
            });
        })
        file.readText({
            uri: 'internal://app/File_writeText_002',
            success: function(data) {
                console.log('File_writeText_002 文件读取成功 ' + data.text);
                if(data.text == 'Text1Text2'){
                    console.log("File_writeText_002 pass=>读取内容与写入一致")
                }else{
                    console.log("File_writeText_002 fail=>读取内容与写入不一致")
                }
            },
            fail: function(data, code) {
                console.log('File_writeText_002 call fail callback fail, code: ' + code + ', data: ' + data);
            },
        });
        file.delete({
            uri: 'internal://app/File_writeText_002',
            success: function(data) {
                console.log('File_writeText_002 文件删除成功' +data);
            },
            fail: function(data, code) {
                console.log('File_writeText_002 delete call fail callback fail, code: ' + code + ', data: ' + data);
            },
        });
        api.then(function(data){
            console.log("File_writeText_002 => pass" + data)
        })
        api.catch(function( code){
            console.log('File_writeText_002 => fail call fail callback fail, code: ' + code)
            expect(null).assertFail()
        })

    })
    //文件内容为各种语言字符
    it('File_writeText_003',0,async function(){
        console.log("----------File_writeText_003----------");
        let txt = 'hello 你好 مرحبا こんにちは 안녕하세요.'
        let api =  new Promise(function(resolve,reject){
            file.writeText({
                uri: 'internal://app/File_writeText_003',
                text: txt,
                success: function() {
                    resolve('File_writeText_003 call writeText success.');
                },
                fail: function(data, code) {
                    console.log('File_writeText_003 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject(code)
                },
            });
        })
        file.readText({
            uri: 'internal://app/File_writeText_003',
            success: function(data) {
                console.log('File_writeText_003 文件读取成功 ' + data.text);
                if(data.text == txt){
                    console.log("File_writeText_003 pass=>读取内容与写入一致")
                }else{
                    console.log("File_writeText_003 fail=>读取内容与写入不一致")
                }
            },
            fail: function(data, code) {
                console.log('File_writeText_003 call fail callback fail, code: ' + code + ', data: ' + data);
            },
        });
        file.delete({
            uri: 'internal://app/File_writeText_003',
            success: function(data) {
                console.log('File_writeText_003 文件删除成功' +data);
            },
            fail: function(data, code) {
                console.log('File_writeText_003 delete call fail callback fail, code: ' + code + ', data: ' + data);
            },
        });
        api.then(function(data){
            console.log("File_writeText_003 => pass" + data)
        })
        api.catch(function(code){
            console.log('File_writeText_003 => fail call fail callback fail, code: ' + code)
            expect(null).assertFail()
        })
        
    })
    //不同编码格式 encoding = "ASCII"
    it('File_writeText_004',0,async function(){
        console.log("----------File_writeText_004----------");


        let api =  new Promise(function(resolve,reject){
            file.writeText({
                uri: 'internal://app/File_writeText_004',
                text: 'hello',
                encoding:"ASCII",
                success: function() {
                    resolve('File_writeText_004 call writeText success.');
                },
                fail: function(data, code) {
                    console.log('File_writeText_004 call fail callback fail, code: ' + code );
                    reject('File_writeText_004 call fail callback fail, code: ' + code );
                },
            });
            file.readText({
                uri: 'internal://app/File_writeText_004',
                success: function(data) {
                    console.log('File_writeText_004 文件读取成功 ' + data.text);
                    if(data.text == 'hello'){
                        console.log("File_writeText_004 pass=>读取内容与写入一致")
                    }else{
                        console.log("File_writeText_004 fail=>读取内容与写入不一致")
                    }
                },
                fail: function(data, code) {
                    console.log('File_writeText_004 readText call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
            file.delete({
                uri: 'internal://app/File_writeText_004',
                success: function(data) {
                    console.log('File_writeText_004 文件删除成功' +data);
                },
                fail: function(data, code) {
                    console.log('File_writeText_004 delete call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_writeText_004 => pass" + data)
        })
        api.catch(function(code){
            console.log('File_writeText_004 => fail call fail callback fail, code: ' + code)
            expect(null).assertFail()
        })
        
    })
    //  追加模式
    it('File_writeText_005',0,async function(){
        console.log("----------File_writeText_005----------");
        let fpath = "/data/accounts/account_0/appdata/ohos.acts.stroage.fileio/files/File_writeText_005"

        try{
            expect(prepareFile(fpath, 'hello,world') !== null).assertTrue()
        }catch(e){
            console.log("File_writeText_005 创建文件失败了 因为：" + e)
        }
        file.writeText({
            uri: 'internal://app/File_writeText_005',
            text: 'hello,world',
            success: function() {
                resolve('File_writeText_005 call writeText success.');
            },
            fail: function(data, code) {
                reject('File_writeText_005 call fail callback fail, code: ' + code + ', data: ' + data);
            },
        });

        let api =  new Promise(function(resolve,reject){
            file.writeText({
                uri: 'internal://app/File_writeText_005',
                text: '你好',
                append: true,
                success: function() {
                    resolve('File_writeText_005 call writeText success.');
                },
                fail: function(data, code) {
                    console.log('File_writeText_005 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_writeText_005 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        file.readText({
            uri: 'internal://app/File_writeText_005',
            success: function(data) {
                console.log('文件读取成功 ' + data.text);
                if(data.text == 'hello,world你好'){
                    console.log("File_writeText_005 pass=>读取内容与写入一致")
                }else{
                    console.log("File_writeText_005 fail=>读取内容与写入不一致")
                }
            },
            fail: function(data, code) {
                console.log('File_writeText_005 readText call fail callback fail, code: ' + code + ', data: ' + data);
            },
        });
        sleep(10)
        file.delete({
            uri: 'internal://app/File_writeText_005',
            success: function(data) {
                console.log('File_writeText_005 文件删除成功' +data);
            },
            fail: function(data, code) {
                console.log('File_writeText_005 call fail callback fail, code: ' + code + ', data: ' + data);
            },
        });
        api.then(function(data){
            console.log("File_writeText_005 => pass" + data)
        })
        api.catch(function(code){
            console.log('File_writeText_005 => fail call fail callback fail, code: ' + code)
            expect(null).assertFail()
        })
    })

    //  非追加模式
    it('File_writeText_006',0,async function(){
        console.log("----------File_writeText_006----------");

        let fpath = "/data/accounts/account_0/appdata/ohos.acts.stroage.fileio/files/File_writeText_006"

        try{
            expect(prepareFile(fpath, 'hello,world') !== null).assertTrue()
        }catch(e){
            console.log("File_writeText_006 创建文件失败了 因为：" + e)
        }
        let api =  new Promise(function(resolve,reject){
            file.writeText({
                uri: 'internal://app/File_writeText_006',
                text: "你好",
                success: function() {
                    resolve('File_writeText_006 call writeText success.');
                },
                fail: function(data, code) {
                    console.log('File_writeText_006 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_writeText_006 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        file.readText({
            uri: 'internal://app/File_writeText_006',
            success: function(data) {
                console.log('File_writeText_006 文件读取成功 ' + data.text);
                if(data.text == '你好'){
                    console.log("File_writeText_006 pass=>读取内容与写入一致")
                }else{
                    console.log("File_writeText_006 fail=>读取内容与写入不一致")
                }
            },
            fail: function(data, code) {
                console.log('File_writeText_006 readText call fail callback fail, code: ' + code + ', data: ' + data);
            },
        });
        file.delete({
            uri: 'internal://app/File_writeText_006',
            success: function(data) {
                resolve('File_writeText_006 文件删除成功' +data);
            },
            fail: function(data, code) {
                reject('File_writeText_006 delete call fail callback fail, code: ' + code + ', data: ' + data);
            },
        });
        api.then(function(data){
            console.log("File_writeText_006 => pass" + data)
        })
        api.catch(function( code){
            console.log('File_writeText_006 => fail call fail callback fail, code: ' + code)
            expect(null).assertFail()
        })

    })
    //  202  参数错误
    it('File_writeText_007',0,async function(){
        console.log("----------File_writeText_007----------");


        let api =  new Promise(function(resolve,reject){
            file.writeText({
                uri: "/data/accounts/account_0/appdata",
                text: '你好',
                success: function() {
                    resolve('File_writeText_007 call writeText success.');
                },
                fail: function(data, code) {
                    console.log('File_writeText_007 文件写入失败, code: ' + code + ', data: ' + data);
                    reject('File_writeText_007 文件写入失败, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_writeText_007 => pass" + data)
        })
        api.catch(function( code){

            console.log('File_writeText_007 => fail call fail callback fail, code: ' + code )
            expect(null).assertFail()
        })
        
    })

    // 传入文件夹路径 code: 300, data: I/O error
    it('File_writeText_008',0,async function(){
        console.log("----------File_writeText_008----------");
        let dpath = "/data/accounts/account_0/appdata/ohos.acts.stroage.fileio/files/File_writeText_008d";
        expect(fileio.mkdirSync(dpath) !== null).assertTrue()
        let api =  new Promise(function(resolve,reject){
            file.writeText({
                uri: 'internal://app/File_writeText_008d/',
                text: '你好',
                success: function() {
                    resolve('File_writeText_008 call writeText success.');
                },
                fail: function(data, code) {
                    console.log('File_writeText_008 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject(code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_writeText_008 => pass" + data)
        })
        api.catch(function(code){
            console.log('File_writeText_008 => fail call fail callback fail, code: ' + code)
            expect(null).assertFail()
        })
    })

//    //  文件不存在 301？  目前300
//    it('File_writeText_009',0,async function(){
//        console.log("----------File_writeText_009----------");
//
//        let api =  new Promise(function(resolve,reject){
//            file.writeText({
//                uri: 'internal://app/File_writeText_009d/File_writeText_009',
//                text: "test",
//                success: function() {
//                    resolve('File_writeText_009 call writeText success.');
//                },
//                fail: function(data, code) {
//                    console.log('File_writeText_009 call fail callback fail, code: ' + code + ', data: ' + data);
//                    reject(code + ', data: ' + data);
//                },
//            });
//        })
//        api.then(function(data){
//            console.log("File_writeText_009 => pass" + data)
//        })
//        api.catch(function(code){
//            console.log('File_writeText_009 => fail call fail callback fail, code: ' + code )
//            expect(null).assertFail()
//        })
//    })
    //写到文件功能(文件不存在)(cache路径)
    it('File_writeText_010', 0, async function(){
        console.log("----------File_writeText_010----------")

        let api = new Promise(function(resolve, reject){
            file.writeText({
                uri: "internal://cache/File_writeText_010",
                text: "test",
                success: function() {
                    resolve('File_writeText_010 => pass')
                    console.log("File_writeText_010 文件创建并写入成功")
                },
                fail: function(data, code) {
                    reject('File_writeText_010 call fail callback fail, code: ' + code + ', data: ' + data);
                    console.log("File_writeText_010 文件创建并写入失败")
                },
            });
        })
        api.then(function(data){
            console.log("File_writeText_011 then......" + data);
            file.delete({
                uri: "internal://cache/File_writeText_010",
                success: function() {
                    console.log("File_writeText_010 文件删除成功");
                },
                fail: function(data, code) {
                    console.log('File_writeText_010 文件删除失败, code: ' + code + ', data: ' + data);
                },
            })
        })
        api.catch(function(e){
            console.log('File_writeText_010 => fail call fail callback fail, data: ' + e)
        })
    })


    /*writeArrayBuffer*/
    //文件不存在时，创建并写入,append: true,
    it('File_writeArrayBuffer_001',0,async function(){
        console.log("----------File_writeArrayBuffer_001----------");
        let buf = new Uint8Array([48, 49, 50, 51, 65, 66, 67, 68, 32, 33]);

        let api =  new Promise(function(resolve,reject){
            file.writeArrayBuffer({
                uri: 'internal://cache/File_writeArrayBuffer_001',
                buffer: buf, //buffer为Uint8Array类型
                append: true,
                success: function() {
                    resolve('File_writeArrayBuffer_001 call writeArrayBuffer success.');
                },
                fail: function(data, code) {
                    console.log('File_writeArrayBuffer_001 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_writeArrayBuffer_001 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        file.readArrayBuffer({
            uri: 'internal://cache/File_writeArrayBuffer_001',
            success: function(data) {
                console.log("读取内容:" + data.buffer)
                for(let i = 0; i<buf.length; i++){
                    if(data.buffer[i] == buf[i]){
                        if(i == (buf.length - 1)){
                            console.log("File_writeArrayBuffer_001 pass=>读取内容与写入一致")
                        }
                    }else{
                        console.log("File_writeArrayBuffer_001 fail=>读取内容与写入不一致")
                        break
                    }
                }
            },
            fail: function(data, code) {
                console.log('File_writeArrayBuffer_001 readArrayBuffer call fail callback fail, code: ' + code + ', data: ' + data);
            },
        })
        file.delete({uri: 'internal://cache/File_writeArrayBuffer_001'})
        api.then(function(data){
            console.log("File_writeArrayBuffer_001  => pass," + data)
        })
        api.catch(function(code){
            console.log('File_writeArrayBuffer_001 => fail call fail callback fail ' + ', code: ' + code)
        })

    })
    //文件不存在时，创建并写入,append默认 false,
    it('File_writeArrayBuffer_002',0,async function(){
        console.log("----------File_writeArrayBuffer_002----------");
        let buf = new Uint8Array([48, 49, 50, 51, 65, 66, 67, 68, 32, 33]);

        let api =  new Promise(function(resolve,reject){
            file.writeArrayBuffer({
                uri: 'internal://cache/File_writeArrayBuffer_002',
                buffer: buf, //buffer为Uint8Array类型
                success: function() {
                    resolve('File_writeArrayBuffer_002 call writeArrayBuffer success.');
                },
                fail: function(data, code) {
                    console.log('File_writeArrayBuffer_002 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_writeArrayBuffer_002 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        file.readArrayBuffer({
            uri: 'internal://cache/File_writeArrayBuffer_002',
            success: function(data) {
                console.log("读取内容:" + data.buffer)
                for(let i = 0; i<buf.length; i++){
                    if(data.buffer[i] == buf[i]){
                        if(i == (buf.length - 1)){
                            console.log("File_writeArrayBuffer_002 pass=>读取内容与写入一致")
                        }
                    }else{
                        console.log("File_writeArrayBuffer_002 fail=>读取内容与写入不一致")
                        break
                    }
                }
            },
            fail: function(data, code) {
                console.log('File_writeArrayBuffer_002 call fail callback fail, code: ' + code + ', data: ' + data);
            },
        })
        file.delete({uri: 'internal://cache/File_writeArrayBuffer_002'})
        api.then(function(data){
            console.log("File_writeArrayBuffer_002 => pass" + data)
        })
        api.catch(function( code){
            console.log('File_writeArrayBuffer_002 => fail call fail callback fail ' + ', code: ' + code)
            expect(null).assertFail()
        })
        
    })
    //文件存在时，append为true
    it('File_writeArrayBuffer_003',0,async function(){
        console.log("----------File_writeArrayBuffer_003----------");

        let buf = new Uint8Array([48, 49, 50, 51, 65, 66, 67, 68, 32, 33]);
        file.writeArrayBuffer({
            uri: 'internal://cache/File_writeArrayBuffer_003',
            buffer: buf,
            success: function() {
                console.log('File_writeArrayBuffer_003 call writeText success.');
            },
            fail: function(data, code) {
                console.log('File_writeArrayBuffer_003 call fail callback fail, code: ' + code + ', data: ' + data);
            },
        });

        let api =  new Promise(function(resolve,reject){
            file.writeArrayBuffer({
                uri: 'internal://cache/File_writeArrayBuffer_003',
                buffer: buf, //buffer为Uint8Array类型
                append:true,
                success: function() {
                    resolve('File_writeArrayBuffer_003 call writeArrayBuffer success.');
                },
                fail: function(data, code) {
                    console.log('File_writeArrayBuffer_003 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_writeArrayBuffer_003 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        file.readArrayBuffer({
            uri: 'internal://cache/File_writeArrayBuffer_003',
            success: function(data) {
                console.log("File_writeArrayBuffer_003 读取内容:" + data.buffer)
                let bufResult = new Uint8Array([48, 49, 50, 51, 65, 66, 67, 68, 32, 33,48, 49, 50, 51, 65, 66, 67, 68, 32, 33]);
                for(let i = 0; i<bufResult.length; i++){
                    if(data.buffer[i] == bufResult[i]){
                        if(i == (bufResult.length - 1)){
                            console.log("File_writeArrayBuffer_003 pass=>读取内容与写入一致")
                        }
                    }else{
                        console.log("File_writeArrayBuffer_003 fail=>读取内容与写入不一致")
                        break
                    }
                }
            },
            fail: function(data, code) {
                console.log('File_writeArrayBuffer_003 call fail callback fail, code: ' + code + ', data: ' + data);
            },
        })
        //file.delete({uri: 'internal://cache/File_writeArrayBuffer_003'})
        api.then(function(data){
            console.log("File_writeArrayBuffer_003 => pass" + data)
        })
        api.catch(function( code){
            console.log('File_writeArrayBuffer_003 => fail call fail callback fail ' + ', code: ' + code)
            expect(null).assertFail()
        })

    })
    //文件存在时，append为false
    it('File_writeArrayBuffer_004',0,async function(){
        console.log("----------File_writeArrayBuffer_004----------");

        let buf = new Uint8Array([48, 49, 50, 51, 65, 66, 67, 68, 32, 33]);
        file.writeArrayBuffer({
            uri: 'internal://cache/File_writeArrayBuffer_004',
            buffer: buf,
            append:false,
            success: function() {
                console.log('File_writeArrayBuffer_004 创建并写入 call writeText success.');
            },
            fail: function(data, code) {
                console.log('File_writeArrayBuffer_004 call fail callback fail, code: ' + code + ', data: ' + data);
            },
        });
        let api =  new Promise(function(resolve,reject){
            file.writeArrayBuffer({
                uri: 'internal://cache/File_writeArrayBuffer_004',
                buffer: buf, //buffer为Uint8Array类型
                append:false,
                success: function() {
                    resolve('File_writeArrayBuffer_004 call writeArrayBuffer success.');
                },
                fail: function(data, code) {
                    console.log('File_writeArrayBuffer_004 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_writeArrayBuffer_004 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        file.readArrayBuffer({
            uri: 'internal://cache/File_writeArrayBuffer_004',
            success: function(data) {
                console.log("读取内容:" + data.buffer)
                for(let i = 0; i<buf.length; i++){
                    if(data.buffer[i] == buf[i]){
                        if(i == (buf.length - 1)){
                            console.log("File_writeArrayBuffer_004 pass=>读取内容与写入一致")
                        }
                    }else{
                        console.log("File_writeArrayBuffer_004 fail=>读取内容与写入不一致")
                        break
                    }
                }
            },
            fail: function(data, code) {
                console.log('File_writeArrayBuffer_004 call fail callback fail, code: ' + code + ', data: ' + data);
            },
        })
        file.delete({uri: 'internal://cache/File_writeArrayBuffer_004'})
        api.then(function(data){
            console.log("File_writeArrayBuffer_004 => pass" + data)
        })
        api.catch(function(code){
            console.log('File_writeArrayBuffer_004 => fail call fail callback fail ' + ', code: ' + code)
            expect(null).assertFail()
        })

    })
    //文件存在，偏移量为10
    it('File_writeArrayBuffer_005',0,async function(){
        console.log("----------File_writeArrayBuffer_005----------");
        let buf = new Uint8Array([48, 49, 50, 51, 65, 66, 67, 68, 32, 33, 44, 55, 66, 77]);

        file.writeArrayBuffer({
            uri: 'internal://cache/File_writeArrayBuffer_005',
            buffer: buf,
            success: function() {
                console.log('File_writeArrayBuffer_005 call writeText success.');
            },
            fail: function(data, code) {
                console.log('File_writeArrayBuffer_005 call fail callback fail, code: ' + code + ', data: ' + data);
            },
        });

        let api =  new Promise(function(resolve,reject){
            file.writeArrayBuffer({
                uri: 'internal://cache/File_writeArrayBuffer_005',
                buffer: buf, //buffer为Uint8Array类型
                position:10,
                success: function() {
                    resolve('File_writeArrayBuffer_005 call writeArrayBuffer success.');
                },
                fail: function(data, code) {
                    console.log('File_writeArrayBuffer_005 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_writeArrayBuffer_005 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        file.readArrayBuffer({
            uri: 'internal://cache/File_writeArrayBuffer_005',
            success: function(data) {
                console.log("File_writeArrayBuffer_005 读取内容:" + data.buffer)
            },
            fail: function(data, code) {
                console.log('File_writeArrayBuffer_005 call fail callback fail, code: ' + code + ', data: ' + data);
            },
        })
        file.delete({uri: 'internal://cache/File_writeArrayBuffer_005'})
        api.then(function(data){
            console.log("File_writeArrayBuffer_005 => pass" + data)
        })
        api.catch(function( code){
            console.log('File_writeArrayBuffer_005 => fail call fail callback fail, code: ' + code )
            expect(null).assertFail()
        })
        
    })

    //uri输入存在的文件路径,不输入position、append
    it('File_writeArrayBuffer_006',0,async function(){
        console.log("----------File_writeArrayBuffer_006----------");
        let buf = new Uint8Array([48, 49, 50, 51, 65, 66, 67, 68, 32, 33]);
        file.writeArrayBuffer({
            uri: 'internal://cache/File_writeArrayBuffer_006',
            buffer: buf,
            success: function() {
                console.log('File_writeArrayBuffer_006 call writeText success.');
            },
            fail: function(data, code) {
                console.log('File_writeArrayBuffer_006 call fail callback fail, code: ' + code + ', data: ' + data);
            },
        });
        let api =  new Promise(function(resolve,reject){
            file.writeArrayBuffer({
                uri: 'internal://cache/File_writeArrayBuffer_006',
                buffer: buf,
                success: function() {
                    resolve('File_writeArrayBuffer_006 call writeArrayBuffer success.');
                },
                fail: function(data, code) {
                    console.log('File_writeArrayBuffer_006 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_writeArrayBuffer_006 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        file.readArrayBuffer({
            uri: 'internal://cache/File_writeArrayBuffer_006',
            success: function(data) {
                console.log("File_writeArrayBuffer_006 读取内容:" + data.buffer)
                for(let i = 0; i<buf.length; i++){
                    if(data.buffer[i] == buf[i]){
                        if(i == (buf.length - 1)){
                            console.log("File_writeArrayBuffer_006 pass=>读取内容与写入一致")
                        }
                    }else{
                        console.log("File_writeArrayBuffer_006 fail=>读取内容与写入不一致")
                        break
                    }
                }
            },
            fail: function(data, code) {
                console.log('File_writeArrayBuffer_006 call fail callback fail, code: ' + code + ', data: ' + data);
            },
        })
        file.delete({uri: 'internal://cache/File_writeArrayBuffer_006'})
        api.then(function(data){
            console.log("File_writeArrayBuffer_006 => pass" + data)
        })
        api.catch(function(code){
            console.log('File_writeArrayBuffer_006 => fail call fail callback fail, code: ' + code )
            expect(null).assertFail()
        })

    })
    //不传URI code: 202, data: Parameter error occurred
    it('File_writeArrayBuffer_007',0,async function(){
        console.log("----------File_writeArrayBuffer_007----------");
        let buf = new Uint8Array([48, 49, 50, 51, 65, 66, 67, 68, 32, 33]);


        let api =  new Promise(function(resolve,reject){
            file.writeArrayBuffer({
                uri: "",
                buffer:buf,
                success: function() {
                    resolve('File_writeArrayBuffer_007 call writeArrayBuffer success.');
                },
                fail: function(data, code) {
                    console.log('File_writeArrayBuffer_007 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_writeArrayBuffer_007 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_writeArrayBuffer_007 => pass" + data)
        })
        api.catch(function( code){
            console.log('File_writeArrayBuffer_007 => fail call fail callback fail, code: ' + code )
            expect(null).assertFail()
        })
        
    })
    //传入文件夹路径 300
    it('File_writeArrayBuffer_008',0,async function(){
        console.log("----------File_writeArrayBuffer_008----------");
        let buf = new Uint8Array([48, 49, 50, 51, 65, 66, 67, 68, 32, 33]);
        let dpath = "/data/accounts/account_0/appdata/ohos.acts.stroage.fileio/cache/File_writeArrayBuffer_008d";
        expect(fileio.mkdirSync(dpath) !== null).assertTrue()
        let api =  new Promise(function(resolve,reject){
            file.writeArrayBuffer({
                uri: 'internal://cache/File_writeArrayBuffer_008d',
                buffer:buf,
                success: function() {
                    resolve('File_writeArrayBuffer_008 call writeArrayBuffer success.');
                },
                fail: function(data, code) {
                    console.log('File_writeArrayBuffer_008 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_writeArrayBuffer_008 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_writeArrayBuffer_008 => pass" + data)
        })
        api.catch(function( code){

            console.log('File_writeArrayBuffer_008 => fail call fail callback fail, code: ' + code )
            expect(null).assertFail()
        })

    })
    //写Buffer内容到指定文件(app路径)
    it('File_writeArrayBuffer_009', 0, async function(){
        console.log("----------File_writeArrayBuffer_009----------")
        let buf = new Uint8Array([1,2,3,4,5,6,7,8])
        let api = new Promise(function(resolve, reject){
            file.writeArrayBuffer({
                uri: "internal://app/File_writeArrayBuffer_009",
                buffer: buf,
                success: function() {
                    resolve('File_writeArrayBuffer_009 => pass')
                    console.log("File_writeArrayBuffer_009 文件创建并写入成功")
                },
                fail: function(data, code) {
                    reject('File_writeArrayBuffer_009 call fail callback fail, code: ' + code + ', data: ' + data);
                    console.log("File_writeArrayBuffer_009 文件创建并写入失败")
                },
            });
        })
        file.readArrayBuffer({
            uri: 'internal://app/File_writeArrayBuffer_009',
            success: function(data) {
                console.log("File_writeArrayBuffer_009 读取内容:" + data.buffer)
                for(let i = 0; i<buf.length; i++){
                    if(data.buffer[i] == buf[i]){
                        if(i == (buf.length - 1)){
                            console.log("File_writeArrayBuffer_009 pass=>读取内容与写入一致")
                        }
                    }else{
                        console.log("File_writeArrayBuffer_009 fail=>读取内容与写入不一致")
                        break
                    }
                }
            },
            fail: function(data, code) {
                console.log('File_writeArrayBuffer_009 call fail callback fail, code: ' + code + ', data: ' + data);
            },
        })
        api.then(function(data){
            console.log("then......" + data);
            file.delete({
                uri: "internal://app/File_writeArrayBuffer_009",
                success: function() {
                    console.log("File_writeArrayBuffer_009 文件删除成功");
                },
                fail: function(data, code) {
                    console.log('File_writeArrayBuffer_009 文件删除失败, code: ' + code + ', data: ' + data);
                },
            })
        })
        api.catch(function(e){
            console.log('File_writeArrayBuffer_009 => fail call fail callback fail, data: ' + e)
        })
    })

    //文件正常读取
    it('File_readText_001',0,async function(){
        console.log("----------File_readText_001----------");

        file.writeText({
            uri: 'internal://app/File_readText_001',
            text: 'Text that just for test.',
            success: function() {
                console.log('File_readText_001 call writeText success.');
            },
            fail: function(data, code) {
                console.log('File_readText_001 call fail callback fail, code: ' + code + ', data: ' + data);
            },
        });

        let api =  new Promise(function(resolve,reject){
            file.readText({
                uri: 'internal://app/File_readText_001',
                success: function(data) {
                    resolve(data.text);
                },
                fail: function(data, code) {
                    console.log('File_readText_001 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_readText_001 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_readText_001 => pass" + data)
            if(data == "Text that just for test."){
                console.log('File_readText_001 读取与写入一致 ');
            }else{
                console.log('File_readText_001 读取与写入不一致 ');
            }
        })
        api.catch(function( code){
            console.log('File_readText_001 => fail call fail callback fail '  + ', code: ' + code)
            expect(null).assertFail()
        })

    })

    //    读取不同编码文件
    it('File_readText_002',0,async function(){
        console.log("----------File_readText_002----------");

        file.writeText({
            uri: 'internal://app/File_readText_002',
            text: 'Text that just for test.',
            encoding: "GBK",
            success: function() {
                console.log('File_readText_002 call writeText success.');
            },
            fail: function(data, code) {
                console.log('File_readText_002 call fail callback fail, code: ' + code + ', data: ' + data);
            },
        });

        let api =  new Promise(function(resolve,reject){
            file.readText({
                uri: 'internal://app/File_readText_002',
                encoding:"GBK",
                success: function(data) {
                    resolve(data.text);
                },
                fail: function(data, code) {
                    console.log('File_readText_002 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_readText_002 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_readText_002 => pass" + data)
            if(data == "Text that just for test."){
                console.log('File_readText_002 读取与写入一致 ');
            }else{
                console.log('File_readText_002 读取与写入不一致 ');
            }
        })
        api.catch(function(code){
            console.log('File_readText_002 => fail call fail callback fail, '  + ', code: ' + code)
            expect(null).assertFail()
        })

    })
    //        202  参数错误
    it('File_readText_003',0,async function(){
        console.log("----------File_readText_003----------");

        let api =  new Promise(function(resolve,reject){
            file.readText({
                uri: "",
                success: function(data) {
                    resolve(data.text);
                },
                fail: function(data, code) {
                    console.log('File_readText_003 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject(code)
                },
            });
        })
        api.then(function(data){
            console.log("File_readText_003 => pass" + data.text)
        })
        api.catch(function(code){
            console.log('File_readText_003 => fail call fail callback fail, code: ' + code )
            expect(null).assertFail()
        })

    })

    //  文件夹目录  300 I/O错误
    it('File_readText_004',0,async function(){
        console.log("----------File_readText_004----------");

        let api =  new Promise(function(resolve,reject){
            file.readText({
                uri: 'internal://cache/',
                success: function(data) {
                    resolve(data.text);
                },
                fail: function(data, code) {
                    console.log('File_readText_004 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_readText_004 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_readText_004 => pass" + data.text)
        })
        api.catch(function( code){
            console.log('File_readText_004 => fail call fail callback fail, code: ' + code )
            expect(null).assertFail()
        })

    })

    //    301 文件目录不存在
    it('File_readText_005',0,async function(){
        console.log("----------File_readText_005----------");

        let api =  new Promise(function(resolve,reject){
            file.readText({
                uri: 'internal://cache/workspace/text.txt',
                success: function(data) {
                    resolve(data.text);
                },
                fail: function(data, code) {
                    console.log('File_readText_005 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_readText_005 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_readText_005 => pass" + data.text)
        })
        api.catch(function( code){
            console.log('File_readText_005 => fail call fail callback fail,  ' + ', code: ' + code)
            expect(null).assertFail()
        })

    })
    //读取文件功能(cache路径)
    it('File_readText_006', 0, async function(){
        console.log("----------File_readText_006----------")
        file.writeText({
            uri: "internal://cache/File_readText_006",
            text: "test",
            success: function() {
                console.log("File_readText_006 文件创建成功");
            },
            fail: function(data, code) {
                console.log('File_readText_006 文件创建失败, code: ' + code + ', data: ' + data);
            },
        })
        let api = new Promise(function(resolve, reject){
            file.readText({
                uri: "internal://cache/File_readText_006",
                success: function(data) {
                    resolve(data.text)
                    console.log("File_readText_006 文件创建并读入成功" + data.text)
                },
                fail: function(data, code) {
                    reject('File_readText_006 call fail callback fail, code: ' + code + ', data: ' + data);
                    console.log("File_readText_006 文件创建并读入失败")
                },
            });
        })
        api.then(function(data){
            console.log("File_readText_006 then......" + data);
            if(data == "test"){
                console.log('File_readText_006 读取与写入一致 ');
            }else{
                console.log('File_readText_006 读取与写入不一致 ');
            }
            sleep(10)
            file.delete({
                uri: "internal://cache/File_readText_006",
                success: function() {
                    console.log("File_readText_006 文件删除成功");
                },
                fail: function(data, code) {
                    console.log('File_readText_006 文件删除失败, code: ' + code + ', data: ' + data);
                },
            })
        })
        api.catch(function(e){
            console.log('File_readText_006 => fail call fail callback fail, data: ' + e)
        })
    })

    //  file.readArrayBuffer(OBJECT)从指定文件中读取Buffer内容。
    //传入所有正确参数
    it('File_read_array_buffer_001',0,async function(){
        console.log("----------File_read_array_buffer_001----------");
        var buffer = new Uint8Array([48, 49, 50, 51, 65, 66, 67, 68, 32, 33]);
        file.writeArrayBuffer({
            uri: 'internal://cache/File_read_array_buffer_001',
            buffer: buffer, //buffer为Uint8Array类型
            success: function() {
                console.log('File_read_array_buffer_001 call writeArrayBuffer success.');
            },
            fail: function(data, code) {
                console.log('File_read_array_buffer_001 call fail callback fail, code: ' + code + ', data: ' + data);
            },
        });

        let api =  new Promise(function(resolve,reject){
            file.readArrayBuffer({
                uri: 'internal://cache/File_read_array_buffer_001',
                position:0,
                length: 10,
                success: function(data) {
                    resolve(data.buffer);
                },
                fail: function(data, code) {
                    console.log('File_read_array_buffer_001 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_read_array_buffer_001 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_read_array_buffer_001 => pass" + data)
            for(let i = 0; i<buffer.length; i++){
                if(data[i] == buffer[i]){
                    if(i == (buffer.length - 1)){
                        console.log("File_read_array_buffer_001 pass=>读取内容与写入一致")
                    }
                }else{
                    console.log("File_read_array_buffer_001 fail=>读取内容与写入不一致")
                    break
                }
            }
        })
        api.catch(function( code){
            console.log('File_read_array_buffer_001 => fail call fail callback fail, code: ' + code )
            expect(null).assertFail()
        })

    })

    //    file.readArrayBuffer(OBJECT)
    //        从指定文件中读取Buffer内容。
    //    只输入必填参数
    it('File_read_array_buffer_002',0,async function(){
        console.log("----------File_read_array_buffer_002----------");
        var buffer = new Uint8Array([48, 49, 50, 51, 65, 66, 67, 68, 32, 33]);
        file.writeArrayBuffer({
            uri: 'internal://cache/File_read_array_buffer_002',
            buffer: buffer, //buffer为Uint8Array类型
            success: function() {
                console.log('File_read_array_buffer_002 call writeArrayBuffer success.');
            },
            fail: function(data, code) {
                console.log('File_read_array_buffer_002 call fail callback fail, code: ' + code + ', data: ' + data);
            },
        });

        let api =  new Promise(function(resolve,reject){
            file.readArrayBuffer({
                uri: 'internal://cache/File_read_array_buffer_002',
                success: function(data) {
                    resolve(data.buffer);
                },
                fail: function(data, code) {
                    console.log('File_read_array_buffer_002 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_read_array_buffer_002 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_read_array_buffer_002 => pass" + data)
            for(let i = 0; i<buffer.length; i++){
                if(data[i] == buffer[i]){
                    if(i == (buffer.length - 1)){
                        console.log("File_read_array_buffer_002 pass=>读取内容与写入一致")
                    }
                }else{
                    console.log("File_read_array_buffer_002 fail=>读取内容与写入不一致")
                    break
                }
            }
        })
        api.catch(function( code){
            console.log('File_read_array_buffer_002 => fail call fail callback fail, code: ' + code )
            expect(null).assertFail()
        })

    })

    //    输入异常URI   202参数错误
    it('File_read_array_buffer_003',0,async function(){
        console.log("----------File_read_array_buffer_003----------");
        //        let fpath = nextFileName('File_read_array_buffer_002')
        //        prepareFile(fpath,FILE_CONTENT)

        let api =  new Promise(function(resolve,reject){
            file.readArrayBuffer({
                uri: "",
                success: function(data) {
                    resolve('File_read_array_buffer_003 call readArrayBuffer success: ' + data.buffer);
                },
                fail: function(data, code) {
                    console.log('File_read_array_buffer_003 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_read_array_buffer_003 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_read_array_buffer_003 => pass" + data.buffer)
        })
        api.catch(function(code){
            console.log('File_read_array_buffer_003 => fail call fail callback fail, code: ' + code )
            expect(null).assertFail()
        })

    })

    //    异常postion  202参数错误
    it('File_read_array_buffer_004',0,async function(){
        console.log("----------File_read_array_buffer_004----------");
        let fpath = fileName('File_read_array_buffer_004')
        prepareFile(fpath,FILE_CONTENT)

        let api =  new Promise(function(resolve,reject){
            file.readArrayBuffer({
                uri: fpath,
                position: 100,
                success: function(data) {
                    resolve('File_read_array_buffer_004 call readArrayBuffer success: ' + data.buffer);
                },
                fail: function(data, code) {
                    console.log('File_read_array_buffer_004 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_read_array_buffer_004 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_read_array_buffer_004 => pass" + data.buffer)
        })
        api.catch(function( code){
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log('File_read_array_buffer_004 => fail call fail callback fail, code: ' + code )
            expect(null).assertFail()
        })

    })

    //    异常length 202参数错误
    it('File_read_array_buffer_005',0,async function(){
        console.log("----------File_read_array_buffer_005----------");
        let fpath = fileName('File_read_array_buffer_005')
        prepareFile(fpath,FILE_CONTENT)

        let api =  new Promise(function(resolve,reject){
            file.readArrayBuffer({
                uri: fpath,
                length: -1,
                success: function(data) {
                    resolve('File_read_array_buffer_005 call readArrayBuffer success: ' + data.buffer);
                },
                fail: function(data, code) {
                    console.log('File_read_array_buffer_005 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_read_array_buffer_005 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_read_array_buffer_005 => pass" + data.buffer)
        })
        api.catch(function(code){
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log('File_read_array_buffer_005 => fail call fail callback fail, code: ' + code )
            expect(null).assertFail()
        })

    })

    //   传入文件夹路径     300 I/O错误
    it('File_read_array_buffer_006',0,async function(){
        console.log("----------File_read_array_buffer_006----------");
        let dpath = "/data/accounts/account_0/appdata/ohos.acts.stroage.fileio/files/File_read_array_buffer_006d";
        expect(fileio.mkdirSync(dpath) !== null).assertTrue()

        let api =  new Promise(function(resolve,reject){
            file.readArrayBuffer({
                uri: 'internal://app/File_read_array_buffer_006d',
                success: function(data) {
                    console.log('File_read_array_buffer_006 call readArrayBuffer success: ' + data.buffer);
                },
                fail: function(data, code) {
                    console.log('File_read_array_buffer_006 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_read_array_buffer_006 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_read_array_buffer_006 => pass" + data.buffer)
        })
        api.catch(function(code){
            console.log('File_read_array_buffer_006 => fail call fail callback fail, code: ' + code )
            expect(null).assertFail()
        })

    })

    //    文件不存在 301错误
    it('File_read_array_buffer_007',0,async function(){
        console.log("----------File_read_array_buffer_007----------");

        let api =  new Promise(function(resolve,reject){
            file.readArrayBuffer({
                uri: 'internal://cache/File_read_array_buffer_007',
                success: function(data) {
                    resolve('File_read_array_buffer_007 call readArrayBuffer success: ' + data.buffer);
                },
                fail: function(data, code) {
                    console.log('File_read_array_buffer_007 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_read_array_buffer_007 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_read_array_buffer_007 => pass" + data.buffer)
        })
        api.catch(function(data, code){
            console.log('File_read_array_buffer_007 => fail call fail callback fail, code: ' + code )
            expect(null).assertFail()
        })

    })

    //验证从指定文件中读取Buffer内容功能(cache路径)
    it('File_read_array_buffer_008', 0, async function(){
        console.log("----------File_read_array_buffer_008----------")
        let buf = new Uint8Array([1,2,3,4,5,6,7,8])
        file.writeArrayBuffer({
            uri: "internal://app/File_read_array_buffer_008",
            buffer: buf,
            success: function() {
                console.log("File_read_array_buffer_008 文件创建成功");
            },
            fail: function(data, code) {
                console.log('File_read_array_buffer_008 文件创建失败, code: ' + code + ', data: ' + data);
            },
        })
        let api = new Promise(function(resolve, reject){
            file.readArrayBuffer({
                uri: "internal://app/File_read_array_buffer_008",
                success: function(data) {
                    resolve(data.buffer)
                    console.log("File_read_array_buffer_008 文件创建并写入成功" + data.buffer)
                },
                fail: function(data, code) {
                    reject('File_read_array_buffer_008 call fail callback fail, code: ' + code + ', data: ' + data);
                    console.log("File_read_array_buffer_008 文件创建并读入失败")
                },
            });
        })
        api.then(function(data){
            console.log("File_read_array_buffer_008 then......" + data);
            for(let i = 0; i<buf.length; i++){
                if(data[i] == buf[i]){
                    if(i == (buf.length - 1)){
                        console.log("File_read_array_buffer_008 pass=>读取内容与写入一致")
                    }
                }else{
                    console.log("File_read_array_buffer_008 fail=>读取内容与写入不一致")
                    break
                }
            }

            file.delete({
                uri: "internal://app/File_read_array_buffer_008",
                success: function() {
                    console.log("File_read_array_buffer_008文件删除成功");
                },
                fail: function(data, code) {
                    console.log('File_read_array_buffer_008文件删除失败, code: ' + code + ', data: ' + data);
                },
            })
        })
        api.catch(function(e){
            console.log('File_read_array_buffer_008 => fail call fail callback fail, data: ' + e)
        })
    })

    //    判断指定文件是否存在
    it('File_access_001',0,async function(){
        console.log("----------File_access_001----------");

        file.writeText({
            uri: 'internal://cache/File_access_001',
            text: 'Text that just for test.',
            success: function() {
                console.log('File_access_001 文件创建成功.');
            },
            fail: function(data, code) {
                console.log('File_access_001 文件创建失败，code: ' + code + ', data: ' + data);
            },
        });

        let api =  new Promise(function(resolve,reject){
            file.access({
                uri: 'internal://cache/File_access_001',
                success: function() {
                    resolve('File_access_001 call access success.');
                },
                fail: function(data, code) {
                    console.log('File_access_001 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_access_001 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        file.delete({
            uri: 'internal://cache/File_access_001',
            success: function() {
                console.log('File_access_001 call delete success.');
            },
            fail: function(data, code) {
                console.log('File_access_001 call fail callback fail, code: ' + code + ', data: ' + data);
            },
        });
        api.then(function(data){
            console.log("File_access_001 => pass，" + data)
        })
        api.catch(function( code){
            console.log(code )
        })

    })

    //    判断指定目录是否存在
    it('File_access_002',0,async function(){
        console.log("----------File_access_002----------");

        file.mkdir({
            uri: 'internal://app/File_access_002',
            success: function() {
                console.log('File_access_002 目录创建成功.');
            },
            fail: function(data, code) {
                console.log('File_access_002 目录创建失败, code: ' + code + ', data: ' + data);
            },
        });

        let api =  new Promise(function(resolve,reject){
            file.access({
                uri: 'internal://app/File_access_002',
                success: function() {
                    resolve('File_access_002 call access success.');
                },
                fail: function(data, code) {
                    console.log('File_access_002 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_access_002 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        file.rmdir({
            uri: 'internal://app/File_access_002',
            success: function() {
                console.log('File_access_002 call rmdir success.');
            },
            fail: function(data, code) {
                console.log('File_access_002 call fail callback fail, code: ' + code + ', data: ' + data);
            },
        });
        api.then(function(data){
            console.log("File_access_002 => pass，" + data)
        })
        api.catch(function( code){
            console.log( code )
        })

    })

    //  路径格式传错  202 出现参数错误
    it('File_access_003',0,async function(){
        console.log("----------File_access_003----------");
        let fpath = fileName('File_access_003')

        let api =  new Promise(function(resolve,reject){
            file.access({
                uri: fpath,
                success: function() {
                    resolve('File_access_003 call access success.');
                },
                fail: function(data, code) { //301
                    console.log('File_access_003 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_access_003 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_access_003 => pass" + data)
        })
        api.catch(function( code){
            console.log(code )
        })

    })

    //301 文件不存在
    it('File_access_004',0,async function(){
        console.log("----------File_access_004----------");

        let api =  new Promise(function(resolve,reject){
            file.access({
                uri: 'internal://app/File_access_004.txt',
                success: function() {
                    resolve('File_access_004 call access success.');
                },
                fail: function(data, code) {
                    console.log('File_access_004 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_access_004 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_access_004 => pass" + data)
        })
        api.catch(function( code){ //301
            console.log('File_access_004 => call fail callback fail, code: ' + code )
        })

    })

    //301 目录不存在
    it('File_access_005',0,async function(){
        console.log("----------File_access_005----------");

        let api =  new Promise(function(resolve,reject){
            file.access({
                uri: 'internal://app/File_access_005',
                success: function() {
                    resolve('File_access_005 call access success.');
                },
                fail: function(data, code) {
                    console.log('File_access_005 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_access_005 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_access_005 => pass" + data)
        })
        api.catch(function(code){
            console.log('File_access_005 => call fail callback fail, code: ' + code)
        })
    })
    //Uri赋值超过4096,code: 300, data: I/O error
    it('File_access_006', 0, async function(){
        console.log("----------File_access_006----------")
        let firstPath = randomString(32)
        let dpath = fileName(firstPath)
        let uri = "internal://cache/" + firstPath
        fileio.mkdirSync(dpath)
        for(let i = 0; i < 16; i++){
            console.log("次数" + i)
            let sonPath = randomString(248)
            uri = uri + "/f" + sonPath
        }

        let api = new Promise(function(resolve, reject){
            file.access({
                uri: uri,
                success: function() {
                    resolve('File_access_006 => pass')
                },
                fail: function(data, code) {
                    reject('File_access_006 call fail callback fail, code: ' + code + ', data: ' + data);
                    console.log("File_access_006 => 文件信息获取失败")
                },
            });
        })
        fileio.rmdirSync(dpath)
        api.then(function(data){
            console.log("File_access_006 then......" + data);
        })
        api.catch(function(e){
            console.log('File_access_006 => fail call fail callback fail, data: ' + e)
        })
    })
    //文件能够正常判断(cache路径)
    it('File_access_007', 0, async function(){
        console.log("----------File_access_007----------")
        file.writeText({
            uri: "internal://app/File_access_007",
            text: "hello",
            success: function() {
                console.log("File_access_007 文件创建成功");
            },
            fail: function(data, code) {
                console.log('File_access_007 文件创建失败, code: ' + code + ', data: ' + data);
            },
        })
        sleep(10)
        let api = new Promise(function(resolve, reject){
            file.access({
                uri: "internal://app/File_access_007",
                success: function() {
                    resolve('File_access_007 => pass')
                    console.log("File_access_007 文件存在")
                },
                fail: function(data, code) {
                    reject('File_access_007 call fail callback fail, code: ' + code + ', data: ' + data);
                    console.log("File_access_007 文件不存在")
                },
            });
        })
        api.then(function(data){
            console.log("File_access_007 then......" + data);
            file.delete({
                uri: "internal://app/File_access_007",
                success: function() {
                    console.log("File_access_007 文件删除成功");
                },
                fail: function(data, code) {
                    console.log('File_access_007 文件删除失败, code: ' + code + ', data: ' + data);
                },
            })
        })
        api.catch(function(e){
            console.log('File_access_007 => fail call fail callback fail, data: ' + e)
        })
    })

    //    创建指定目录
    it('File_mkdir_001',0,async function(){
        console.log("----------File_mkdir_001----------");

        let api =  new Promise(function(resolve,reject){
            file.mkdir({
                uri: 'internal://app/File_mkdir_001',
                success: function() {
                    resolve('File_mkdir_001 call mkdir success.');
                },
                fail: function(data, code) {
                    console.log('File_mkdir_001 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject(code + ', data: ' + data);
                },
            });
        })
        file.rmdir({
            uri: 'internal://app/File_mkdir_001',
            success: function() {
                console.log('File_mkdir_001 call rmdir success.');
            },
            fail: function(data, code) {
                console.log('File_mkdir_001 call fail callback fail, code: ' + code + ', data: ' + data);
            },
        });
        api.then(function(data){
            console.log(data)
        })
        api.catch(function( code){
            console.log('File_mkdir_001 => fail call fail callback fail, code: ' + code )
            expect(null).assertFail()
        })

    })

    //    recursive递归创建缺省  是否递归创建该目录的上级目录，缺省为false。  300
    it('File_mkdir_002',0,async function(){
        console.log("----------File_mkdir_002----------");

        let api =  new Promise(function(resolve,reject){
            file.mkdir({
                uri: "internal://app/test/File_mkdir_002",
                success: function() {
                    resolve('File_mkdir_002 call mkdir success.');
                },
                fail: function(data, code) {
                    console.log('File_mkdir_002 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject( code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_mkdir_002 => pass" + data)
        })
        api.catch(function( code){
            console.log('File_mkdir_002 => fail call fail callback fail, ' + ', code: ' + code)
            expect(null).assertFail()
        })
    })

    //    recursive递归创建缺省  是否递归创建该目录的上级目录，recursive: true, 创建成功
    it('File_mkdir_003',0,async function(){
        console.log("----------File_mkdir_003----------");

        let api =  new Promise(function(resolve,reject){
            file.mkdir({
                uri: "internal://app/test/File_mkdir_003d",
                recursive: true,
                success: function() {
                    resolve('File_mkdir_003 call mkdir success.');
                },
                fail: function(data, code) {
                    console.log('File_mkdir_003 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_mkdir_003 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_mkdir_003 => pass" + data)
        })
        api.catch(function(code){
            console.log('File_mkdir_003 => fail call fail callback fail, code: ' + code )
            expect(null).assertFail()
        })
    })

    //    202 参数错误
    it('File_mkdir_004',0,async function(){
        console.log("----------File_mkdir_004----------");

        let api =  new Promise(function(resolve,reject){
            file.mkdir({
                uri: "internal://files/test/File_mkdir_002d",
                success: function() {
                    resolve('File_mkdir_004 call mkdir success.');
                },
                fail: function(data, code) {
                    console.log('File_mkdir_004 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject(code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_mkdir_004 => pass" + data)
        })
        api.catch(function(code){
            console.log('File_mkdir_004 => fail call fail callback fail, code: ' + code )
            expect(null).assertFail()
        })

    })

    //创建文件夹时，传入特殊字符 code: 300, data: I/O error
    it('File_mkdir_005', 0, async function(){
        console.log("----------File_mkdir_005----------")

        let api = new Promise(function(resolve, reject){
            file.mkdir({
                uri: "internal://cache/！@/<>",
                success: function() {
                    resolve('File_mkdir_005 => pass')
                    console.log("File_mkdir_005 目录创建成功")
                },
                fail: function(data, code) {
                    reject('File_mkdir_005 => fail call fail callback fail,code：' + code + ',data: '+data);
                    console.log("File_mkdir_005 目录创建失败")
                },
            });
        })
        api.then(function(data){
            console.log("File_mkdir_005 then......" + data);
            file.rmdir({
                uri: "internal://cache/！@/<>",
                success: function() {
                    console.log("File_mkdir_005 目录删除成功");
                },
                fail: function(data, code) {
                    console.log('File_mkdir_005 目录删除失败, code: ' + code + ', data: ' + data);
                },
            })
        })
        api.catch(function(e){
            console.log(e)
        })
    })

    //创建文件夹时，传入257个字符 code: 300, data: I/O error
    it('File_mkdir_006', 0, async function(){
        console.log("----------File_mkdir_006----------")
        let fileName = randomString(257)
        let api = new Promise(function(resolve, reject){
            file.mkdir({
                uri: "internal://cache/" + fileName,
                success: function() {
                    resolve('File_mkdir_006 => pass')
                    console.log("File_mkdir_006 目录创建成功")
                },
                fail: function(data, code) {
                    reject('File_mkdir_006 => fail call fail callback fail,code：' + code + ',data: '+data);
                    console.log("File_mkdir_006 目录创建失败")
                },
            });
        })
        api.then(function(data){
            console.log("File_mkdir_006 then......" + data);
            file.rmdir({
                uri: "internal://cache/" + fileName,
                success: function() {
                    console.log("File_mkdir_006 目录删除成功");
                },
                fail: function(data, code) {
                    console.log('File_mkdir_006 目录删除失败, code: ' + code + ', data: ' + data);
                },
            })
        })
        api.catch(function(e){
            console.log(e)
        })
    })

    //文件夹创建功能(cache路径)
    it('File_mkdir_007', 0, async function(){
        console.log("----------File_mkdir_007----------")

        let api = new Promise(function(resolve, reject){
            file.mkdir({
                uri: "internal://cache/File_mkdir_007d",
                success: function() {
                    resolve('File_mkdir_007 => pass')
                    console.log("File_mkdir_007 目录创建成功")
                },
                fail: function(data, code) {
                    reject('File_mkdir_007 call fail callback fail, code: ' + code + ', data: ' + data);
                    console.log("File_mkdir_007 目录创建失败")
                },
            });
        })
        api.then(function(data){
            console.log("File_mkdir_007 then......" + data);
            file.rmdir({
                uri: "internal://cache/File_mkdir_007d",
                success: function() {
                    console.log("File_mkdir_007 目录删除成功");
                },
                fail: function(data, code) {
                    console.log('File_mkdir_007 目录删除失败, code: ' + code + ', data: ' + data);
                },
            })
        })
        api.catch(function(e){
            console.log(e)
        })
    })

    //file.rmdir() 删除指定目录。 传入存在空文件夹uri，其他缺省
    it('File_rmdir_001',0,async function(){
        console.log("----------File_rmdir_001----------");
        file.mkdir({
            uri: 'internal://app/File_rmdir_001',
            success: function() {
                console.log('File_rmdir_001 call mkdir success.');
            },
            fail: function(data, code) {
                console.log('File_rmdir_001 call fail callback fail, code: ' + code + ', data: ' + data);
            },
        });

        let api =  new Promise(function(resolve,reject){
            file.rmdir({
                uri: 'internal://app/File_rmdir_001',
                success: function() {
                    resolve('call rmdir success.');
                },
                fail: function(data, code) {
                    console.log('File_rmdir_001 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_rmdir_001 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_rmdir_001 => pass " + data)
        })
        api.catch(function(code){
            console.log('File_rmdir_001 => fail call fail callback fail,  '  + ', code: ' + code)
        })

    })
    //    file.rmdir() 删除指定目录 。
    //传入非空文件夹路径（路径下有文件夹），recursive递归false code: 300, data: I/O error
    it('File_rmdir_002',0,async function(){
        console.log("----------File_rmdir_002----------");
        file.mkdir({
            uri: 'internal://app/test/File_rmdir_002',
            recursive:true,
            success: function() {
                console.log('File_rmdir_002 创建文件夹成功.');
            },
            fail: function(data, code) {
                console.log('File_rmdir_002 创建文件夹失败');
            },
        });

        let api =  new Promise(function(resolve,reject){
            file.rmdir({
                uri: 'internal://app/test',
                recursive:false,
                success: function() {
                    resolve('File_rmdir_002 call rmdir success.');
                },
                fail: function(data, code) { //202
                    console.log('File_rmdir_002 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_rmdir_002 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_rmdir_002 => pass" + data)
        })
        api.catch(function( code){
            console.log(code )
        })

    })


    //    file.rmdir() 删除指定目录 。
    //传入非空文件夹路径（路径下有文件夹），recursive为true
    it('File_rmdir_003',0,async function(){
        console.log("----------File_rmdir_003----------");
        file.mkdir({
            uri: 'internal://app/test/File_rmdir_003',
            recursive:true,
            success: function() {
                console.log('File_rmdir_003 创建文件夹成功.');
            },
            fail: function(data, code) {
                console.log('File_rmdir_003 创建文件夹失败');
            },
        });

        let api =  new Promise(function(resolve,reject){
            file.rmdir({
                uri: 'internal://app/test',
                recursive: true,
                success: function() {
                    resolve('File_rmdir_003 call rmdir success.');
                },
                fail: function(data, code) {
                    console.log('File_rmdir_003 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_rmdir_003 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_rmdir_003 => pass" + data)
        })
        api.catch(function( code){
            console.log(code )
        })

    })

    //    file.rmdir() 删除指定目录 Fail(202) 出现参数错误。
    //uri路径错误 code: 202, data: Parameter error occurred
    it('File_rmdir_004',0,async function(){
        console.log("----------File_rmdir_004----------");

        let api =  new Promise(function(resolve,reject){
            file.rmdir({
                uri:'/data/accounts/account_0/appdata/ohos.acts.distributeddatamgr.distributedfile/cache/',
                success: function() {
                    resolve('File_rmdir_004 call rmdir success.');
                },
                fail: function(data, code) {
                    console.log('File_rmdir_004 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_rmdir_004 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_rmdir_004 => pass" + data)
        })
        api.catch(function( code){ //202
            console.log( code )
        })

    })

    //    file.rmdir() 删除指定目录 Fail(300) 出现I/O错误。
    //uri路径不存在 code: 301, data: File or directory does not exist
    it('File_rmdir_005',0,async function(){
        console.log("----------File_rmdir_005----------");
        file.mkdir({
            uri: 'internal://app/test/File_rmdir_005',
            recursive:true,
            success: function() {
                resolve('File_rmdir_005 创建文件夹成功');
            },
            fail: function(data, code) {
                reject('File_rmdir_005 创建文件夹失败');
            },
        });

        let api =  new Promise(function(resolve,reject){
            file.rmdir({
                uri: 'internal://app/test/123',
                success: function() {
                    resolve('File_rmdir_005 call rmdir success.');
                },
                fail: function(data, code) {
                    console.log('File_rmdir_005 call fail callback fail, code: ' + code + ', data: ' + data);
                    reject('File_rmdir_005 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_rmdir_005 => pass" + data)
        })
        api.catch(function(code){
            console.log(code )
        })

    })
    //文件长度为255，可以创建成功，删除成功
    it('File_rmdir_006', 0, async function(){
        console.log("----------File_rmdir_006----------")
        let firstPath = randomString(255)
        console.log("firstPath"+firstPath);
        let uri = "internal://app/" + firstPath;
        console.log("uri"+uri);
        file.mkdir({
            uri: uri,
            success: function() {
                console.log("File_rmdir_006 目录创建成功")
            },
            fail: function(data, code) {
                console.log("File_rmdir_006 目录创建失败")
            },
        });
        sleep(10);
        let api = new Promise(function(resolve, reject){
            file.rmdir({
                uri: uri,
                success: function() {
                    resolve('File_rmdir_006 => pass')
                    console.log("File_rmdir_006 => 文件夹删除成功")
                },
                fail: function(data, code) {
                    reject('File_rmdir_006 call fail callback fail, code: ' + code + ', data: ' + data);
                    console.log("File_rmdir_006 => 文件夹删除失败")
                },
            });
        })
        api.then(function(data){
            console.log("File_rmdir_006 then......" + data);
        })
        api.catch(function(e){
            console.log(e)
        })
    })
    //文件夹删除功能(cache路径) 删除成功
    it('File_rmdir_007', 0, async function(){
        console.log("----------File_rmdir_007----------")
        file.mkdir({
            uri: "internal://cache/File_rmdir_007d",
            success: function() {
                console.log("File_rmdir_007 目录创建成功")
            },
            fail: function(data, code) {
                console.log('File_rmdir_007 目录创建失败, code: ' + code + ', data: ' + data)
            },
        });
        let api = new Promise(function(resolve, reject){
            file.rmdir({
                uri: "internal://cache/File_rmdir_007d",
                success: function() {
                    resolve('File_rmdir_007 => pass')
                    console.log("File_rmdir_007 目录删除成功");
                },
                fail: function(data, code) {
                    reject('File_rmdir_007 call fail callback fail, code: ' + code + ', data: ' + data);
                    console.log('File_rmdir_007 目录删除失败, code: ' + code + ', data: ' + data);
                },
            })
        })
        api.then(function(data){
            console.log("File_rmdir_007 then......" + data);
        })
        api.catch(function(e){
            console.log(e)
        })
    })

    //File Move() 移动文件到另一个文件夹
    fileio.mkdirSync("/data/accounts/account_0/appdata/ohos.acts.stroage.fileio/files/cache");
    it('File_Move_001',0,async function(){
        console.log("----------File_Move_001----------");
        let srcFpath = fileName("File_Move_001");
        expect(prepareFile(srcFpath, FILE_CONTENT) !== null).assertTrue()
        let api =  new Promise(function(resolve,reject){
            file.move({
                srcUri: "internal://app/File_Move_001",
                dstUri: "internal://app/cache/File_Move_001",
                success: function(data) {
                    resolve(data);
                },
                fail: function(data, code) {
                    reject('File_Move_001 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log('File_Move_001 => pass data:'+data);
            fileio.unlinkSync(dstFpath)
            console.log('File_Move_001 删除文件成功');
        })
        api.catch(function(code){
            console.log(code)
        })
    })
    /*file.move() 不同类型文件移动后完整性*/
    it('File_Move_002',0,async function(){
        console.log("----------File_Move_002----------");
        let typeArray = new Array(".txt", ".ppt", ".flac", ".mp4", ".so", ".zip");

        for(let i = 0; i < typeArray.length; i++){
            let srcFpath = fileName("File_Move_002") + typeArray[i]
            let dstFpath = cacheFileName("File_Move_002") + typeArray[i]
            expect(prepareEmptyFile(srcFpath) !== null).assertTrue()
            let api =  new Promise(function(resolve,reject){
                file.move({
                    srcUri: "internal://app/File_Move_002" + typeArray[i],
                    dstUri: "internal://app/cache/File_Move_002" + typeArray[i],
                    success: function() {
                        resolve('File_Move_002 call move success.');
                    },
                    fail: function(data, code) {
                        reject('File_Move_002 call fail callback fail, code: ' + code + ', data: ' + data);
                    },
                });
            })
            api.then(function(data){
                fileio.unlinkSync(dstFpath)
                console.log(data+'类型：'+typeArray[i])
            })
            api.catch(function(data, code){
                console.log('File_Move_002 => fail call fail callback fail, code: ' + code + ', data: ' + data)
            })
        }
    })
    /*file.move() 移动不同大小文件 <1M*/
    it("File_Move_003",0,async function(){
        console.log("----------File_Move_003----------");
        let srcFpath = fileName("File_Move_003")
        expect(prepareFile(srcFpath,FILE_CONTENT) !== null).assertTrue()
        let dstFpath = cacheFileName("File_Move_003")

        let srcUri = "internal://app/File_Move_003"
        let dstUri = "internal://app/cache/File_Move_003"

        let api =  new Promise(function(resolve,reject){
            file.move({
                srcUri: srcUri,
                dstUri: dstUri,
                success: function() {
                    resolve("File_Move_003 call move success.");
                },
                fail: function(data, code) {
                    reject("File_Move_003 call fail callback fail, code: " + code + ", data: " + data);
                },
            });
        })
        api.then(function(){
            console.log("File_Move_003 => pass ")
            fileio.unlinkSync(dstFpath)
        })
        api.catch(function(data){
            console.log("File_Move_003 => fail " + data)
        })
    })
    /*file.move() Fail(202) 出现参数错误*/
    it('File_Move_004',0,async function(){
        console.log("----------File_Move_004----------");
        let srcFpath = fileName('File_Move_004')
        expect(prepareFile(srcFpath,FILE_CONTENT) !== null).assertTrue()

        let api =  new Promise(function(resolve,reject){
            file.move({
                srcUri: "internal://app/File_Move_004",
                dstUri: null,
                success: function() {
                    resolve('File_Move_004 call move success.');
                },
                fail: function(data, code) {
                    reject('File_Move_004 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(){
            console.log("File_Move_004 CASE fail")
            expect(null).assertFail()
        })
        api.catch(function(data){
            console.log('File_Move_004 => fail ' + data)
            expect(fileio.unlinkSync(srcFpath) !== null).assertTrue()
        })
    })

    /*file.move() Fail(300) 出现I/O错误*/
    it("File_Move_005",0,async function(){
        console.log("----------File_Move_005----------");
        let srcDpath = fileName("File_Move_005d")
        expect(fileio.mkdirSync(srcDpath) !== null).assertTrue()
        console.log("srcDpath=" + srcDpath)
        let api =  new Promise(function(resolve,reject){
            file.move({
                srcUri: "internal://app/File_Move_005d",
                dstUri: "internal://app/cache/File_Move_005d",
                success: function() {
                    resolve("File_Move_005 call move success.");
                },
                fail: function(data, code) {
                    reject("File_Move_005 call fail callback fail, code: " + code + ", data: " + data);
                },
            });
        })
        api.then(function(){
            console.log("File_Move_005 CASE fail")
            expect(null).assertFail()
        })
        api.catch(function(data){
            console.log("File_Move_005 => fail " + data)
            expect(fileio.rmdirSync(srcDpath) !== null).assertTrue()
        })
    })
    /*file.move() Fail(301) 出现文件或目录不存在*/
    //源文件不存在 code: 301, data: file not exist
    it('File_Move_006',0,async function(){
        console.log("----------File_Move_006----------");
        let dstUri = fileName('File_Move_006')
        expect(prepareFile(dstUri,FILE_CONTENT) !== null).assertTrue()

        let api =  new Promise(function(resolve,reject){
            file.move({
                srcUri: "internal://app/File_Move",
                dstUri: "internal://app/File_Move_006",
                success: function() {
                    resolve('File_Move_006 call move success.');
                },
                fail: function(data, code) {
                    reject('File_Move_006 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(){
            console.log("File_Move_006 CASE fail")
            expect(null).assertFail()
        })
        api.catch(function(data){
            console.log(data)
            expect(fileio.unlinkSync(dstUri) !== null).assertTrue()
        })
    })

    /*Uri赋值超过4096 code: 300, data: I/O error */
    it('File_Move_007', 0, async function(){
        console.log("----------File_Move_007----------")
        let firstPath = randomString(32)
        let dpath = fileName(firstPath)
        let uri = "internal://cache/" + firstPath
        fileio.mkdirSync(dpath)
        for(let i = 0; i < 16; i++){
            console.log("次数" + i)
            let sonPath = randomString(248)
            uri = uri + "/f" + sonPath
        }

        let api = new Promise(function(resolve, reject){
            file.move({
                srcUri: uri,
                dstUri: uri,
                success: function() {
                    resolve('File_Move_007 => pass')
                    console.log("File_Move_007 => 文件移动成功")
                },
                fail: function(data, code) {
                    reject('File_Move_007 call fail callback fail, code: ' + code + ', data: ' + data);
                    console.log("File_Move_007 => 文件移动失败")
                },
            });
        })
        fileio.rmdirSync(dpath)
        api.then(function(data){
            console.log("File_Move_007 then......" + data);
        })
        api.catch(function(e){
            console.log(e)
        })
    })
    //文件路径为cache路径)
    it('File_Move_008', 0, async function(){
        console.log("----------File_Move_008----------")
        file.writeText({
            uri: "internal://cache/File_Move_008",
            text: "sss",
            success: function() {
                console.log("File_Move_008 文件创建成功");
            },
            fail: function(data, code) {
                console.log('File_Move_008 文件创建失败, code: ' + code + ', data: ' + data);
            },
        })

        let api = new Promise(function(resolve, reject){
            file.move({
                srcUri: "internal://cache/File_Move_008",
                dstUri: "internal://app/File_Move_008",
                success: function() {
                    resolve('File_Move_008 pass')
                    console.log("File_Move_008 => pass")
                },
                fail: function(data, code) {
                    reject('File_Move_008 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_Move_008 then......" + data);
            file.delete({
                uri: "internal://app/File_Move_008",
                success: function() {
                    console.log("File_Move_008 文件删除成功");
                },
                fail: function(data, code) {
                    console.log('File_Move_008 文件删除失败, code: ' + code + ', data: ' + data);
                },
            })
        })
        api.catch(function(e){
            console.log('File_Move_008 => fail call fail callback fail, data: ' + e)
        })
    })
    //文件源路径与现路径相同 code: 300, data: I/O error
    it('File_Move_009',0,async function(){
        console.log("----------File_Move_009----------");
        let srcFpath = fileName("File_Move_009")
        expect(prepareFile(srcFpath, FILE_CONTENT) !== null).assertTrue()

        let api =  new Promise(function(resolve,reject){
            file.move({
                srcUri: "internal://app/File_Move_009",
                dstUri: "internal://app/File_Move_009",
                success: function(data) {
                    resolve('File_Move_009 call move success.' + data);
                    console.log("File_Move_009 => pass")
                },
                fail: function(data, code) {
                    reject('File_Move_009 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log(data)
            fileio.unlinkSync(dstFpath)
        })
        api.catch(function(code){
            console.log(code)
        })
    })
    //目标路径下有相同名称的文件 code: 300, data: I/O error
    it('File_Move_010',0,async function(){
        console.log("----------File_Move_010----------");
        let srcFpath = fileName("File_Move_010")
        let dstFpath = cacheFileName("File_Move_010")
        expect(prepareFile(srcFpath, "aaa") !== null).assertTrue()
        expect(prepareFile(dstFpath, "bbb") !== null).assertTrue()
        let api =  new Promise(function(resolve,reject){
            file.move({
                srcUri: "internal://app/File_Move_010",
                dstUri: "internal://app/cache/File_Move_010",
                success: function(data) {
                    resolve('File_Move_010 call move success.' + data);
                    console.log("File_Move_010 => pass")
                },
                fail: function(data, code) {
                    reject('File_Move_010 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log(data)
            fileio.unlinkSync(dstFpath)
        })
        api.catch(function(code){
            console.log(code)
        })
    })

    //复制文件(app路径)
    it('File_Copy_001',0,async function(){
        console.log("----------File_Copy_001----------");
        let srcFpath = fileName("File_Copy_001")
        let dstFpath = cacheFileName("File_Copy_001")
        expect(prepareFile(srcFpath, "test") !== null).assertTrue()
        sleep(10)
        let api =  new Promise(function(resolve,reject){
            file.copy({
                srcUri: "internal://app/File_Copy_001",
                dstUri: "internal://app/cache/File_Copy_001",
                success: function() {
                    resolve("File_Copy_001 copy pass");
                },
                fail: function(data, code) {
                    reject('File_Copy_001 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        sleep(10)
        file.readText({
            uri: "internal://app/cache/File_Copy_001",
            success: function(data) {
                console.log("File_Copy_001 读取内容:" + data.text)
                if(data.text == "test"){
                    console.log("File_Copy_001 pass=>读取内容与写入一致")
                }else{
                    console.log("File_Copy_001 fail=>读取内容与写入不一致")
                }
            },
            fail: function(data, code) {
                console.log('File_Copy_001 call fail callback fail, code: ' + code + ', data: ' + data);
            },
        })
        api.then(function(){
            console.log("File_Copy_001 copy pass")
        })
        api.catch(function(data, code){
            console.log('File_Copy_001 => fail call fail callback fail, code: ' + code + ', data: ' + data)
        })
        sleep(20)
        expect(fileio.unlinkSync(srcFpath) !== null).assertTrue()
        expect(fileio.unlinkSync(dstFpath) !== null).assertTrue()
    })

    /*file.copy() 不同类型文件移动后完整性*/
    it('File_Copy_002',0,async function(){
        console.log("----------File_Copy_002----------");
        let typeArray = new Array(".txt", ".ppt", ".flac", ".mp4", ".so", ".zip")

        for(let i = 0; i < typeArray.length; i++){
            let srcFpath = fileName("File_Copy_002") + typeArray[i]
            let dstFpath = cacheFileName("File_Copy_002") + typeArray[i]
            expect(prepareEmptyFile(srcFpath) !== null).assertTrue()
            sleep(10)
            let api =  new Promise(function(resolve,reject){
                file.copy({
                    srcUri: "internal://app/File_Copy_002" + typeArray[i],
                    dstUri: "internal://app/cache/File_Copy_002" + typeArray[i],
                    success: function() {
                        resolve('File_Copy_002 call copy success.');
                    },
                    fail: function(data, code) {
                        reject('File_Copy_002 call fail callback fail, code: ' + code + ', data: ' + data);
                    },
                });
            })
            api.then(function(data){
                console.log(data+",类型：" + typeArray[i])
            })
            api.catch(function(data, code){
                console.log('File_Copy_002 => fail call fail callback fail, code: ' + code + ', data: ' + data)
            })
            sleep(10)
            expect(fileio.unlinkSync(srcFpath) !== null).assertTrue()
            expect(fileio.unlinkSync(dstFpath) !== null).assertTrue()
        }
    })

    /*file.copy() 移动不同大小文件 <1M*/
    it("File_Copy_003",0,async function(){
        console.log("----------File_Copy_003----------");
        let srcFpath = fileName("File_Copy_003")
        expect(prepareFile(srcFpath,"test") !== null).assertTrue()
        let dstFpath = cacheFileName("File_Copy_003")
        sleep(10)
        let api =  new Promise(function(resolve,reject){
            file.copy({
                srcUri: "internal://app/File_Copy_003",
                dstUri: "internal://app/cache/File_Copy_003",
                success: function() {
                    resolve("File_Copy_003 call copy success.");
                },
                fail: function(data, code) {
                    reject("File_Copy_003 call fail callback fail, code: " + code + ", data: " + data);
                },
            });
        })
        sleep(10)
        file.readText({
            uri: "internal://app/cache/File_Copy_003",
            success: function(data) {
                console.log("File_Copy_003 读取内容:" + data.text)
                if(data.text == "test"){
                    console.log("File_Copy_003 pass=>读取内容与写入一致")
                }else{
                    console.log("File_Copy_003 fail=>读取内容与写入不一致")
                }
            },
            fail: function(data, code) {
                console.log('File_Copy_003 call fail callback fail, code: ' + code + ', data: ' + data);
            },
        })
        api.then(function(){
            console.log("File_Copy_003 => pass ")
        })
        api.catch(function(data){
            console.log("File_Copy_003 => fail " + data)
        })
        sleep(10)
        expect(fileio.unlinkSync(srcFpath) !== null).assertTrue()
        expect(fileio.unlinkSync(dstFpath) !== null).assertTrue()
    })

    /*file.copy() 不传目标路径 Fail(202) 出现参数错误*/
    it('File_Copy_004',0,async function(){
        console.log("----------File_Copy_004----------");
        let srcFpath = fileName('File_Copy_004')
        expect(prepareFile(srcFpath,FILE_CONTENT) !== null).assertTrue()
        sleep(10)
        let api =  new Promise(function(resolve,reject){
            file.copy({
                srcUri: "internal://app/File_Copy_004",
                dstUri: null,
                success: function() {
                    resolve('File_Copy_004 call copy success.');
                },
                fail: function(data, code) {
                    reject('File_Copy_004 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(){
            console.log("File_Copy_004 CASE fail")
            expect(null).assertFail()
        })
        api.catch(function(data){
            console.log('File_Copy_004 => fail ' + data)
        })
        sleep(10)
        expect(fileio.unlinkSync(srcFpath) !== null).assertTrue()
    })

    /*file.copy() 源路径输入文件夹路径 Fail(300) 出现I/O错误*/
    it("File_Copy_005",0,async function(){
        console.log("----------File_Copy_005----------");
        let srcDpath = fileName("File_Copy_005d")
        let dstDpath = cacheFileName("File_Copy_005d")
        expect(fileio.mkdirSync(srcDpath) !== null).assertTrue()

        let api =  new Promise(function(resolve,reject){
            file.copy({
                srcUri: "internal://app/File_Copy_005d",
                dstUri: "internal://app/cache/File_Copy_005d",
                success: function() {
                    resolve("File_Copy_005 call copy success.");
                },
                fail: function(data, code) {
                    reject("File_Copy_005 call fail callback fail, code: " + code + ", data: " + data);
                },
            });
        })
        api.then(function(){
            console.log("File_Copy_005 CASE fail")
            expect(null).assertFail()
        })
        api.catch(function(data){
            console.log("File_Copy_005 => fail " + data)
            expect(fileio.rmdirSync(srcDpath) !== null).assertTrue()
            expect(fileio.rmdirSync(dstDpath) !== null).assertTrue()
        })
    })

    /*file.copy() Fail(301) 出现文件或目录不存在*/
    it('File_Copy_006',0,async function(){
        console.log("----------File_Copy_006----------");

        let api =  new Promise(function(resolve,reject){
            file.copy({
                srcUri: "internal://app/fakepath",
                dstUri: "internal://app/fakepath1",
                success: function() {
                    resolve('File_Copy_006 call copy success.');
                },
                fail: function(data, code) {
                    reject('File_Copy_006 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(){
            console.log("File_Copy_006 CASE fail")
            expect(null).assertFail()
        })
        api.catch(function(data){
            console.log('File_Copy_006 => fail ' + data)
        })
    })
    /*Uri赋值超过4096 code: 300, data: copy file failed*/
    it('File_Copy_007', 0, async function(){
        console.log("----------File_Copy_007----------")
        let firstPath = randomString(32)
        let dpath = fileName(firstPath)
        let uri = "internal://cache/" + firstPath
        fileio.mkdirSync(dpath)
        for(let i = 0; i < 16; i++){
            console.log("次数" + i)
            let sonPath = randomString(248)
            uri = uri + "/f" + sonPath
        }

        let api = new Promise(function(resolve, reject){
            file.copy({
                srcUri: uri,
                dstUri: uri,
                success: function() {
                    resolve('File_Copy_007 => pass')
                    console.log("File_Copy_007 => 文件复制成功")
                },
                fail: function(data, code) {
                    reject('File_Copy_007 call fail callback fail, code: ' + code + ', data: ' + data);
                    console.log("File_Copy_007 => 文件复制失败")
                },
            });
        })
        fileio.rmdirSync(dpath)
        api.then(function(data){
            console.log("File_Copy_007 then......" + data);
        })
        api.catch(function(e){
            console.log('File_Copy_007 => fail call fail callback fail, data: ' + e)
        })
    })
    /*验证文件复制功能正常使用(cache路径)*/
    it('File_Copy_008', 0, async function(){
        console.log("----------File_Copy_008----------")
        file.writeText({
            uri: "internal://cache/File_Copy_008",
            text: "test",
            success: function() {
                console.log("File_Copy_008 文件创建成功");
            },
            fail: function(data, code) {
                console.log('File_Copy_008 文件创建失败, code: ' + code + ', data: ' + data);
            },
        })
        sleep(10)
        let api = new Promise(function(resolve, reject){
            file.copy({
                srcUri: "internal://cache/File_Copy_008",
                dstUri: "internal://app/File_Copy_008",
                success: function() {
                    resolve('File_Copy_008 => pass')
                    console.log("File_Copy_008 文件复制成功")
                },
                fail: function(data, code) {
                    reject('File_Copy_008 call fail callback fail, code: ' + code + ', data: ' + data);
                    console.log("File_Copy_008 文件复制失败")
                },
            });
        })
        api.then(function(data){
            console.log("File_Copy_008 then......" + data);
            file.delete({
                uri: "internal://app/File_Copy_008",
                success: function() {
                    console.log("File_Copy_008 文件删除成功");
                },
                fail: function(data, code) {
                    console.log('File_Copy_008 文件删除失败, code: ' + code + ', data: ' + data);
                },
            })
            file.delete({
                uri: "internal://cache/File_Copy_008",
                success: function() {
                    console.log("File_Copy_008 文件删除成功");
                },
                fail: function(data, code) {
                    console.log('File_Copy_008 文件删除失败, code: ' + code + ', data: ' + data);
                },
            })
        })
        api.catch(function(e){
            console.log('File_Copy_008 => fail call fail callback fail, data: ' + e)
        })
    })
    //文件源路径与现路径相同 code: 300, data: copy file failed
    it('File_Copy_009',0,async function(){
        console.log("----------File_Copy_009----------");
        let srcFpath = fileName("File_Copy_009")
        expect(prepareFile(srcFpath, FILE_CONTENT) !== null).assertTrue()

        let api =  new Promise(function(resolve,reject){
            file.copy({
                srcUri: "internal://app/File_Copy_009",
                dstUri: "internal://app/File_Copy_009",
                success: function(data) {
                    resolve('File_Copy_009 call copy success.' + data);
                    console.log("File_Copy_009 => pass")
                },
                fail: function(data, code) {
                    reject('File_Copy_009 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log(data)
            fileio.unlinkSync(srcFpath)
        })
        api.catch(function(code){
            console.log(code)
        })
    })
    //目标路径下有相同名称的文件 code: 300, data: copy file failed
    it('File_Copy_010',0,async function(){
        console.log("----------File_Copy_010----------");
        let srcFpath = fileName("File_Copy_010")
        let dstFpath = cacheFileName("File_Copy_010")
        expect(prepareFile(srcFpath, "aaa") !== null).assertTrue()
        expect(prepareFile(dstFpath, "bbb") !== null).assertTrue()

        let api =  new Promise(function(resolve,reject){
            file.copy({
                srcUri: "internal://app/File_Copy_010",
                dstUri: "internal://app/cache/File_Copy_010",
                success: function(data) {
                    resolve('File_Copy_010 call move success.' + data);
                    console.log("File_Copy_010 => pass")
                },
                fail: function(data, code) {
                    reject('File_Copy_010 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log('File_Copy_010 data:'+data)
            fileio.unlinkSync(srcFpath)
            fileio.unlinkSync(dstFpath)
        })
        api.catch(function(code){
            console.log(code)
        })
    })

    /*file.list() 文件列表功能*/
    //app路径下，存在文件及目录
    it('File_List_001', 0, async function(){
        console.log("----------File_List_001----------")
        let dpath = fileName('File_List_001') + 'd';

        let fpath = dpath+'/File_List_001';
        let ddpath = dpath+'/File_List_001_1d';
        try{
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
            expect(fileio.mkdirSync(ddpath) !== null).assertTrue()
            expect(prepareFile(fpath, FILE_CONTENT) !== null).assertTrue()
        }catch(e){
            console.log("File_List_001 创建文件和目录失败了 因为：" + e)
        }
        sleep(10)
        let api =  new Promise(function(resolve,reject){
            file.list({
                uri: "internal://app/File_List_001d",
                success: function(data) {
                    resolve(data.fileList);
                    console.log("File_List_001 call list success.")
                },
                fail: function(data, code) {
                    reject('File_List_001 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            try{
                console.log("File_List_001 => 文件列表：")
                for(let i = 0;i < data.length; i++){
                    console.log("{uri:" + data[i].uri)
                    console.log("length:" + data[i].length)
                    console.log("lastModifiedTime:" + data[i].lastModifiedTime)
                    console.log("type:" + data[i].type + "}")
                }
                console.log("File_List_001 => pass")
            }
            catch (e) {
                console.log("File_List_001 => fail for " + e)
                expect(null).assertFail()
            }
        })
        api.catch(function(data){
            console.log('File_List_001 => ' + data)
        })
        sleep(10)
        expect(fileio.unlinkSync(fpath) !== null).assertTrue()
        expect(fileio.rmdirSync(ddpath) !== null).assertTrue()
        expect(fileio.rmdirSync(dpath) !== null).assertTrue()
    })

    /*file.list() 文件列表返回值校验(uri)*/
    it('File_List_002',0,async function(){
        console.log("----------File_List_002----------");
        let dpath = fileName('File_List_002') + 'd';

        let fpath = dpath+'/File_List_002';
        let ddpath = dpath+'/File_List_002_1d';
        try{
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
            expect(fileio.mkdirSync(ddpath) !== null).assertTrue()
            expect(prepareFile(fpath, FILE_CONTENT) !== null).assertTrue()
        }catch(e){
            console.log("File_List_002 创建文件和目录失败了 因为：" + e)
        }
        sleep(10)
        let api =  new Promise(function(resolve,reject){
            file.list({
                uri: "internal://app/File_List_002d",
                success: function(data) {
                    resolve(data.fileList);
                    console.log("File_List_002 => 文件列表：")
                    for(let i = 0;i < data.fileList.length; i++){
                        if(i == 0){
                            console.log("{uri:" + data.fileList[i].uri)
                            if(data.fileList[i].uri == "internal://app/File_List_002d/File_List_002_1d"){
                                console.log("File_List_002d uri 目录 数据正确")
                            }else{
                                console.log("File_List_002d uri 目录 数据错误")
                            }
                        }
                        if(i == 1){
                            console.log("{uri:" + data.fileList[i].uri)
                            if(data.fileList[i].uri == "internal://app/File_List_002d/File_List_002"){
                                console.log("File_List_002 uri 文件 数据正确")
                            }else{
                                console.log("File_List_002 uri 文件 数据错误")
                            }
                        }
                    }
                    console.log("File_List_002 call list success.")
                },
                fail: function(data, code) {
                    reject('File_List_002 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log(data)
            console.log("File_List_002 => pass")
        })
        api.catch(function(data){
            console.log('File_List_002 => ' + data)
        })
        sleep(10)
        expect(fileio.unlinkSync(fpath) !== null).assertTrue()
        expect(fileio.rmdirSync(ddpath) !== null).assertTrue()
        expect(fileio.rmdirSync(dpath) !== null).assertTrue()
    })

    /*file.list() 文件列表返回值校验(lastModifiedTime)*/
    it('File_List_003',0,async function(){
        console.log("----------File_List_003----------");
        let dpath = fileName('File_List_003') + 'd';

        let fpath = dpath+'/File_List_003';
        let ddpath = dpath+'/File_List_003_1d';
        try{
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
            expect(fileio.mkdirSync(ddpath) !== null).assertTrue()
            expect(prepareFile(fpath, FILE_CONTENT) !== null).assertTrue()
        }catch(e){
            console.log("File_List_003 创建文件和目录失败了 因为：" + e)
        }
        sleep(10)
        let api =  new Promise(function(resolve,reject){
            file.list({
                uri: "internal://app/File_List_003d",
                success: function(data) {
                    try{
                        console.log("File_List_003 => 文件列表：")
                        for(let i = 0;i < data.fileList.length; i++){
                            expect(data.fileList[i].lastModifiedTime !== null).assertTrue()
                            console.log("初始保存时间{File_List_003 lastModifiedTime:" + data.fileList[i].lastModifiedTime)
                        }
                    }
                    catch (e) {
                        console.log("File_List_003 => fail for " + e)
                        expect(null).assertFail()
                    }
                    console.log("File_List_003 call list success.")
                },
                fail: function(data, code) {
                    console.log('File_List_003 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
            sleep(10)
            file.writeText({uri: "internal://app/File_List_003d/File_List_003", text: "1"});
            sleep(10)
            file.list({
                uri: "internal://app/File_List_003d",
                success: function(data) {
                    resolve(data.fileList);
                    try{
                        console.log("File_List_003 => 修改文件后列表：")
                        for(let i = 0;i < data.fileList.length; i++){
                            for(let i = 0;i < data.fileList.length; i++){
                                expect(data.fileList[i].lastModifiedTime !== null).assertTrue()
                                console.log("修改文件后保存时间{File_List_003 lastModifiedTime:" + data.fileList[i].lastModifiedTime)
                            }
                        }
                    }
                    catch (e) {
                        console.log("File_List_003 => fail for " + e)
                        expect(null).assertFail()
                    }
                    console.log("File_List_003 call list success.")
                },
                fail: function(data, code) {
                    reject('File_List_003 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log(data)
            console.log("File_List_003 => pass")
        })
        api.catch(function(data){
            console.log('File_List_003 => ' + data)
        })
        sleep(10)
        expect(fileio.unlinkSync(fpath) !== null).assertTrue()
        expect(fileio.rmdirSync(ddpath) !== null).assertTrue()
        expect(fileio.rmdirSync(dpath) !== null).assertTrue()
    })

    /*file.list() 文件列表返回值校验(type)*/
    it('File_List_004',0,async function(){
        console.log("----------File_List_004----------");
        let dpath = fileName('File_List_004') + 'd';

        let fpath = dpath+'/File_List_004';
        let ddpath = dpath+'/File_List_004_1d';
        try{
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
            expect(fileio.mkdirSync(ddpath) !== null).assertTrue()
            expect(prepareFile(fpath, FILE_CONTENT) !== null).assertTrue()
        }catch(e){
            console.log("File_List_004 创建文件和目录失败了 因为：" + e)
        }
        sleep(10)
        let api =  new Promise(function(resolve,reject){
            file.list({
                uri: "internal://app/File_List_004d",
                success: function(data) {
                    resolve(data.fileList);
                    try{
                        console.log("File_List_004 => 文件列表：")
                        for(let i = 0;i < data.fileList.length; i++){
                            if(i == 0){
                                console.log("{length:" + data.fileList[i].length)
                                if(data.fileList[i].length == 326){
                                    console.log("File_List_004d length 数值正确")
                                }
                            }
                            if(i == 1){
                                console.log("{length:" + data.fileList[i].length)
                                if(data.fileList[i].length == 4096){
                                    console.log("File_List_004 length 数值正确")
                                }
                            }
                        }
                    }
                    catch (e) {
                        console.log("File_List_004 => fail for " + e)
                        expect(null).assertFail()
                    }
                    console.log("File_List_004 call list success.")
                },
                fail: function(data, code) {
                    reject('File_List_004 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_List_004 => pass data:"+data)
        })
        api.catch(function(data){
            console.log('File_List_004 => ' + data)
        })
        sleep(10)
        expect(fileio.unlinkSync(fpath) !== null).assertTrue()
        expect(fileio.rmdirSync(ddpath) !== null).assertTrue()
        expect(fileio.rmdirSync(dpath) !== null).assertTrue()
    })
    /*file.list() 文件列表返回值校验(type)*/
    it('File_List_005',0,async function(){
        console.log("----------File_List_005----------");
        let dpath = fileName('File_List_005') + 'd';

        let fpath = dpath+'/File_List_005';
        let ddpath = dpath+'/File_List_005_1d';
        try{
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
            expect(fileio.mkdirSync(ddpath) !== null).assertTrue()
            expect(prepareFile(fpath, FILE_CONTENT) !== null).assertTrue()
        }catch(e){
            console.log("File_List_005 创建文件和目录失败了 因为：" + e)
        }
        sleep(10)
        let api =  new Promise(function(resolve,reject){
            file.list({
                uri: "internal://app/File_List_005d",
                success: function(data) {
                    resolve(data.fileList);
                    try{
                        console.log("File_List_005 => 文件列表：")
                        for(let i = 0;i < data.fileList.length; i++){
                            if(i == 0){
                                console.log("{type:" + data.fileList[i].type)
                                if(data.fileList[i].type == "dir"){
                                    console.log("File_List_005d type 类型正确")
                                }
                            }
                            if(i == 1){
                                console.log("{type:" + data.fileList[i].type)
                                if(data.fileList[i].type == "file"){
                                    console.log("File_List_005 type 类型正确")
                                }
                            }
                        }
                    }
                    catch (e) {
                        console.log("File_List_005 => fail for " + e)
                        expect(null).assertFail()
                    }
                    console.log("File_List_005 call list success.")
                },
                fail: function(data, code) {
                    reject('File_List_005 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log(data)
            console.log("File_List_005 => pass")
        })
        api.catch(function(data){
            console.log('File_List_005 => ' + data)
        })
        sleep(10)
        expect(fileio.unlinkSync(fpath) !== null).assertTrue()
        expect(fileio.rmdirSync(ddpath) !== null).assertTrue()
        expect(fileio.rmdirSync(dpath) !== null).assertTrue()
    })

    /*file.list() Fail(202) 出现参数错误*/
    //传入错误路径 code: 202, data: illegal uri
    it('File_List_006',0,async function(){
        console.log("----------File_List_006----------");
        let dpath = fileName('File_List_006') + 'd'

        let api =  new Promise(function(resolve,reject){
            file.list({
                uri: dpath,
                success: function(data) {
                    resolve(data.fileList);
                    console.log("File_List_006 call list success.")
                },
                fail: function(data, code) {
                    reject('File_List_006 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_List_006 => pass,but 这条case失败了,data:"+data)
        })
        api.catch(function(data){
            console.log('File_List_006 => ' + data)
        })
    })

    /*file.list() Fail(300) 出现参数错误*/
    //传入文件路径 code: 301, data: file not exist
    it('File_List_007',0,async function(){
        console.log("----------File_List_007----------");
        let fpath = fileName('File_List_007')
        try{
            expect(prepareFile(fpath, FILE_CONTENT) !== null).assertTrue()
        }catch(e){
            console.log("File_List_007 创建文件失败了 因为：" + e)
        }
        sleep(20)
        let api =  new Promise(function(resolve,reject){
            file.list({
                uri: "internal://app/File_List_007",
                success: function(data) {
                    resolve(data.fileList[0]);
                },
                fail: function(data, code) {
                    reject('File_List_007 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_List_007 => pass,but 这条case失败了,data:"+data.uri)
        })
        api.catch(function(data){
            console.log('File_List_007 => ' + data)
        })
        sleep(10)
        expect(fileio.unlinkSync(fpath) !== null).assertTrue()
    })
    /*file.list() Fail(301) 出现参数错误*/
    //传入不存在路径 code: 301, data: file not exist
    it('File_List_008',0,async function(){
        console.log("----------File_List_008----------");

        let api =  new Promise(function(resolve,reject){
            file.list({
                uri: "internal://app/fakepath",
                success: function(data) {
                    resolve(data.fileList);
                    console.log("File_List_008 call list success.")
                },
                fail: function(data, code) {
                    reject('File_List_008 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_List_008 => pass,but 这条case失败了,data:"+data)
        })
        api.catch(function(data){
            console.log('File_List_008 => ' + data)
        })
    })

    /*Uri赋值超过4096  code: 300, data: list file failed*/
    it('File_List_009', 0, async function(){
        console.log("----------File_List_009----------")
        let firstPath = randomString(32)
        let dpath = fileName(firstPath)
        let uri = "internal://cache/" + firstPath
        fileio.mkdirSync(dpath)
        sleep(10)
        for(let i = 0; i < 16; i++){
            console.log("次数" + i)
            let sonPath = randomString(248)
            uri = uri + "/f" + sonPath
        }
        console.log("URI："+uri);
        let api = new Promise(function(resolve, reject){
            file.list({
                uri: uri,
                success: function(data) {
                    resolve('File_List_009 => pass')
                    console.log("File_List_009 => 目录列表信息获取成功")
                    console.log("目录信息列表：")
                    for(let i = 0;i < data.fileList.length; i++){
                        console.log("uri:" + data.fileList[i].uri)
                        console.log("length:" + data.fileList[i].length)
                        console.log("lastModifiedTime:" + data.fileList[i].lastModifiedTime)
                        console.log("type:" + data.fileList[i].type)
                    }
                },
                fail: function(data, code) {
                    reject('File_List_009 call fail callback fail, code: ' + code + ', data: ' + data);
                    console.log("File_List_009 => 文件列表信息获取失败")
                },
            });
        })
        api.then(function(data){
            console.log("File_List_009 then......" + data);
        })
        api.catch(function(e){
            console.log(e)
        })
        sleep(10)
        fileio.rmdirSync(dpath)
    })

    /*验证文件列表正常获取(cache路径)*/
    it('File_List_010', 0, async function(){
        console.log("----------File_List_010----------")
        let dpath ="/data/accounts/account_0/appdata/ohos.acts.stroage.fileio/cache/File_List_010d";

        let fpath = dpath+'/File_List_010';
        let ffpath = dpath+'/File_List_010_1';

        let ddpath = dpath+'/File_List_010_1d';
        let fffpath = ddpath+'/File_List_010_2';
        try{
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
            expect(fileio.mkdirSync(ddpath) !== null).assertTrue()
            expect(prepareFile(fpath, FILE_CONTENT) !== null).assertTrue()
            expect(prepareFile(ffpath, FILE_CONTENT) !== null).assertTrue()
            expect(prepareFile(fffpath, FILE_CONTENT) !== null).assertTrue()
        }catch(e){
            console.log("File_List_004 创建文件和目录失败了 因为：" + e)
        }
        sleep(10)
        let api = new Promise(function(resolve, reject){
            file.list({
                uri: "internal://cache/File_List_010d",
                success: function(data) {
                    resolve('File_List_010 => pass')
                    console.log("File_List_010 => 目录列表信息获取成功")
                    console.log("目录信息列表：")
                    for(let i = 0;i < data.fileList.length; i++){
                        console.log("uri:" + data.fileList[i].uri)
                        console.log("length:" + data.fileList[i].length)
                        console.log("lastModifiedTime:" + data.fileList[i].lastModifiedTime)
                        console.log("type:" + data.fileList[i].type)
                    }
                },
                fail: function(data, code) {
                    reject('File_List_010 call fail callback fail, code: ' + code + ', data: ' + data);
                    console.log("File_List_010 => 文件列表信息获取失败")
                },
            });
        })
        api.then(function(data){
            console.log("File_List_010 then......" + data);
        })
        api.catch(function(e){
            console.log('File_List_010 => fail call fail callback fail, data: ' + e)
        })
        sleep(10)
        expect(fileio.unlinkSync(fpath) !== null).assertTrue()
        expect(fileio.unlinkSync(ffpath) !== null).assertTrue()
        expect(fileio.unlinkSync(fffpath) !== null).assertTrue()
        expect(fileio.rmdirSync(ddpath) !== null).assertTrue()
        expect(fileio.rmdirSync(dpath) !== null).assertTrue()
    })

    /*file.get() 文件列表功能*/
    //uri：输入正确文件路径(app路径)recursive：true ，URI下有文件
    it('File_Get_001',0,async function(){
        console.log("----------File_Get_001----------");
        let fpath = fileName('File_Get_001')
        try{
            expect(prepareFile(fpath, FILE_CONTENT) !== null).assertTrue()
        }catch(e){
            console.log("File_Get_001 创建文件失败了 因为：" + e)
        }

        let api =  new Promise(function(resolve,reject){
            file.get({
                uri: "internal://app/File_Get_001",
                recursive: true,
                success: function(data) {
                    resolve(data);
                },
                fail: function(data, code) {
                    reject('File_Get_001 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_Get_001 => 文件列表：")
            console.log("{uri:" + data.uri)
            console.log("length:" + data.length)
            console.log("lastModifiedTime:" + data.lastModifiedTime)
            console.log("type:" + data.type)
            console.log("subFiles:" + data.subFiles + "}")
            console.log("File_Get_001 => pass")
        })
        api.catch(function(data){
            console.log(data)
        })
        sleep(10)
        fileio.unlinkSync(fpath)
    })

    /*file.get() 文件列表功能*/
    //uri：输入正确文件路径,recursive：false ，URI下有文件
    it('File_Get_002',0,async function(){
        console.log("----------File_Get_002----------");
        let fpath = fileName('File_Get_002')
        try{
            expect(prepareFile(fpath, FILE_CONTENT) !== null).assertTrue()
        }catch(e){
            console.log("File_Get_002 创建文件失败了 因为：" + e)
        }

        let api =  new Promise(function(resolve,reject){
            file.get({
                uri: "internal://app/File_Get_002",
                recursive: false,
                success: function(data) {
                    resolve(data);
                },
                fail: function(data, code) {
                    reject('File_Get_002 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_Get_002 => 文件列表：")
            console.log("{uri:" + data.uri)
            console.log("length:" + data.length)
            console.log("lastModifiedTime:" + data.lastModifiedTime)
            console.log("type:" + data.type)
            console.log("subFiles:" + data.subFiles + "}")
            console.log("File_Get_002 => pass")
        })
        api.catch(function(data){
            console.log(data)
        })
        sleep(10)
        expect(fileio.unlinkSync(fpath) !== null).assertTrue()
    })

    /*file.get() 文件列表功能*/
    //uri：输入正确文件路径,不输入recursive，URI下有文件
    it('File_Get_003',0,async function(){
        console.log("----------File_Get_003----------");
        let fpath = fileName('File_Get_003')
        try{
            expect(prepareFile(fpath, FILE_CONTENT) !== null).assertTrue()
        }catch(e){
            console.log("File_Get_003 创建文件失败了 因为：" + e)
        }

        let api =  new Promise(function(resolve,reject){
            file.get({
                uri: "internal://app/File_Get_003",
                success: function(data) {
                    resolve(data);
                },
                fail: function(data, code) {
                    reject('File_Get_003 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_Get_003 => 文件列表：")
            console.log("{uri:" + data.uri)
            console.log("length:" + data.length)
            console.log("lastModifiedTime:" + data.lastModifiedTime)
            console.log("type:" + data.type)
            console.log("subFiles:" + data.subFiles + "}")
            console.log("File_Get_003 => pass")
        })
        api.catch(function(data){
            console.log(data)
        })
        sleep(10)
        expect(fileio.unlinkSync(fpath) !== null).assertTrue()
    })

    /*file.get() 文件列表功能*/
    //uri：输入正确文件路径,recursive：true,,URI下即有文件夹又有文件,子文件夹下有文件
    it("File_Get_004",0,async function(){
        console.log("----------File_Get_004----------");
        let dpath = fileName("File_Get_004d")

        let ddpath = dpath + "/File_Get_004dd"
        let fpath = dpath + "/File_Get_004f"

        let ffpath = ddpath + "/File_Get_004ff"
        try{
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
            expect(fileio.mkdirSync(ddpath) !== null).assertTrue()
            expect(prepareFile(fpath, FILE_CONTENT) !== null).assertTrue()
            expect(prepareFile(ffpath, FILE_CONTENT) !== null).assertTrue()
        }catch(e){
            console.log("File_Get_004 创建文件和目录失败了 因为：" + e)
        }

        let api =  new Promise(function(resolve,reject){
            file.get({
                uri: "internal://app/File_Get_004d",
                recursive: true,
                success: function(data) {
                    resolve(data);
                },
                fail: function(data, code) {
                    reject("File_Get_004 call fail callback fail, code: " + code + ", data: " + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_Get_004 => 文件列表：")
            console.log("{uri:" + data.uri)
            console.log("length:" + data.length)
            console.log("lastModifiedTime:" + data.lastModifiedTime)
            console.log("type:" + data.type)
            console.log("subFiles:" + data.subFiles + "}")
            console.log("File_Get_004 => pass")
        })
        api.catch(function(data){
            console.log("File_Get_004 => " + data)
        })
        sleep(10)
        expect(fileio.unlinkSync(ffpath) !== null).assertTrue()
        expect(fileio.unlinkSync(fpath) !== null).assertTrue()
        expect(fileio.rmdirSync(ddpath) !== null).assertTrue()
        expect(fileio.rmdirSync(dpath) !== null).assertTrue()
    })
    ////uri：输入正确文件路径,recursive：false,,URI下即有文件夹又有文件,子文件夹下有文件
    it("File_Get_005",0,async function(){
        console.log("----------File_Get_005----------");
        let dpath = fileName("File_Get_005d")

        let ddpath = dpath + "/File_Get_005dd"
        let fpath = dpath + "/File_Get_005f"

        let ffpath = ddpath + "/File_Get_005ff"
        try{
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
            expect(fileio.mkdirSync(ddpath) !== null).assertTrue()
            expect(prepareFile(fpath, FILE_CONTENT) !== null).assertTrue()
            expect(prepareFile(ffpath, FILE_CONTENT) !== null).assertTrue()
        }catch(e){
            console.log("File_Get_005 创建文件和目录失败了 因为：" + e)
        }

        let api =  new Promise(function(resolve,reject){
            file.get({
                uri: "internal://app/File_Get_005d",
                recursive: false,
                success: function(data) {
                    resolve(data);
                },
                fail: function(data, code) {
                    reject("File_Get_005 call fail callback fail, code: " + code + ", data: " + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_Get_005 => 文件列表：")
            console.log("{uri:" + data.uri)
            console.log("length:" + data.length)
            console.log("lastModifiedTime:" + data.lastModifiedTime)
            console.log("type:" + data.type)
            console.log("subFiles:" + data.subFiles + "}")
            console.log("File_Get_005 => pass")
        })
        api.catch(function(data){
            console.log("File_Get_005 => " + data)
        })
        sleep(10)
        expect(fileio.unlinkSync(ffpath) !== null).assertTrue()
        expect(fileio.unlinkSync(fpath) !== null).assertTrue()
        expect(fileio.rmdirSync(ddpath) !== null).assertTrue()
        expect(fileio.rmdirSync(dpath) !== null).assertTrue()
    })
    //uri：输入正确文件路径,不输入recursive,URI下即有文件夹又有文件,子文件夹下有文件
    it("File_Get_006",0,async function(){
        console.log("----------File_Get_006----------");
        let dpath = fileName("File_Get_006d")

        let ddpath = dpath + "/File_Get_006dd"
        let fpath = dpath + "/File_Get_006f"

        let ffpath = ddpath + "/File_Get_006ff"
        try{
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
            expect(fileio.mkdirSync(ddpath) !== null).assertTrue()
            expect(prepareFile(fpath, FILE_CONTENT) !== null).assertTrue()
            expect(prepareFile(ffpath, FILE_CONTENT) !== null).assertTrue()
        }catch(e){
            console.log("File_Get_006 创建文件和目录失败了 因为：" + e)
        }

        let api =  new Promise(function(resolve,reject){
            file.get({
                uri: "internal://app/File_Get_006d",
                success: function(data) {
                    resolve( data);
                },
                fail: function(data, code) {
                    reject("File_Get_006 call fail callback fail, code: " + code + ", data: " + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_Get_006 文件列表：")
            console.log("{uri:" + data.uri)
            console.log("length:" + data.length)
            console.log("lastModifiedTime:" + data.lastModifiedTime)
            console.log("type:" + data.type)
            console.log("subFiles:" + data.subFiles + "}")
            console.log("File_Get_006 => pass")
        })
        api.catch(function(data){
            console.log(data)
        })
        sleep(10)
        expect(fileio.unlinkSync(ffpath) !== null).assertTrue()
        expect(fileio.unlinkSync(fpath) !== null).assertTrue()
        expect(fileio.rmdirSync(ddpath) !== null).assertTrue()
        expect(fileio.rmdirSync(dpath) !== null).assertTrue()
    })

    /*file.get() Fail(202) 出现参数错误*/
    //不输入URI code: 202, data: illegal uri
    it('File_Get_007',0,async function(){
        console.log("----------File_Get_007----------");

        let api =  new Promise(function(resolve,reject){
            file.get({
                recursive: true,
                success: function(data) {
                    resolve("File_Get_007 call Copy success.data:"+data);
                    console.log("File_Get_007 call Copy success.")
                },
                fail: function(data, code) {
                    reject('File_Get_007 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_Get_007 call Copy success.data:"+data);
            console.log("File_Get_007 => pass,but 这条case失败了")
        })
        api.catch(function(data){
            console.log(data)
        })
    })
    /*file.get() Fail(202) 出现参数错误*/
    //不输入URI和recursive code: 202, data: illegal uri
    it('File_Get_008',0,async function(){
        console.log("----------File_Get_008----------");
        try{
            let api =  new Promise(function(resolve,reject){
                file.get({
                    success: function(data) {
                        resolve(data);
                        console.log("File_Get_008 call get success.")
                    },
                    fail: function(data, code) {
                        reject('File_Get_008 call fail callback fail, code: ' + code + ', data: ' + data);
                    },
                });
            })
            api.then(function(data){
                console.log("File_Get_008 call get success.data:"+data);
                console.log("File_Get_008 => pass,but 这条case失败了")
            })
            api.catch(function(data){
                console.log(data)
            })
        }catch(e){
            console.log("File_Get_008 调用接口失败，Error:"+e)
        }


    })

    /*file.get() Fail(301) 输入不存在的文件或目录*/
    //输入不存在目录 code: 301, data: file not exist
    it('File_Get_009',0,async function(){
        console.log("----------File_Get_009----------");

        let api =  new Promise(function(resolve,reject){
            file.get({
                uri: "internal://app/File_Get_009",
                success: function(data) {
                    resolve("File_Get_009 call Copy success.data:"+data);
                    console.log("File_Get_009 call Copy success.")
                },
                fail: function(data, code) {
                    reject('File_Get_009 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_Get_009 call Copy success.data:"+data);
            console.log("File_Get_009 => pass,but 这条case失败了")
        })
        api.catch(function(data){
            console.log( data)
        })

    })

    /*file.get() Fail(202) 出现参数错误*/
    //uri输入 -1 code: 202, data: illegal uri
    it('File_Get_010',0,async function(){
        console.log("----------File_Get_010----------");

        let api =  new Promise(function(resolve,reject){
            file.get({
                uri: -1,
                success: function(data) {
                    resolve("File_Get_010 call Copy success.data:"+data);
                    console.log("File_Get_010 call Copy success.")
                },
                fail: function(data, code) {
                    reject('File_Get_010 call fail callback fail, code: ' + code + ', data: ' + data);
                },
            });
        })
        api.then(function(data){
            console.log("File_Get_010 => pass,but 这条case失败了 ,data:"+data)
        })
        api.catch(function(data){
            console.log(data)
        })
    })

    /*"uri：输入正确文件路径(cache路径) recursive：true"*/
    it('File_Get_011', 0, async function(){
        console.log("----------File_Get_011----------")
        file.writeText({
            uri: "internal://cache/File_Get_011",
            text: "test",
            success: function() {
                console.log("File_Get_011 文件创建成功");
            },
            fail: function(data, code) {
                console.log('File_Get_011 文件创建失败, code: ' + code + ', data: ' + data);
            },
        })
        sleep(10)
        let api = new Promise(function(resolve, reject){
            file.get({
                uri: "internal://cache/File_Get_011",
                recursive: true,
                success: function(data) {
                    resolve('File_Get_011 => pass')
                    console.log("文件信息获取成功")
                    console.log("文件信息列表")
                    console.log("uri:" + data.uri)
                    console.log("length:" + data.length)
                    console.log("lastModifiedTime:" + data.lastModifiedTime)
                    console.log("type:" + data.type)
                    console.log("subFiles:" + data.subFiles)
                },
                fail: function(data, code) {
                    reject('File_Get_011 call fail callback fail, code: ' + code + ', data: ' + data);
                    console.log("File_Get_011 文件信息获取失败")
                },
            });
        })
        api.then(function(data){
            console.log("File_Get_011 then......" + data);
            sleep(10)
            file.delete({
                uri: "internal://cache/File_Get_011",
                success: function() {
                    console.log("File_Get_011 文件删除成功");
                },
                fail: function(data, code) {
                    console.log('File_Get_011 文件删除失败, code: ' + code + ', data: ' + data);
                },
            })
        })
        api.catch(function(e){
            console.log(e)
        })
    })

    /*Uri赋值超过4096 code: 300, data: get file failed */
    it('File_Get_012', 0, async function(){
        console.log("----------File_Get_012----------")
        let firstPath = randomString(32)
        let dpath = fileName(firstPath)
        let uri = "internal://cache/" + firstPath
        fileio.mkdirSync(dpath)
        for(let i = 0; i < 16; i++){
            console.log("次数" + i)
            let sonPath = randomString(248)
            uri = uri + "/f" + sonPath
        }

        let api = new Promise(function(resolve, reject){
            file.get({
                uri: uri,
                recursive: true,
                success: function(data) {
                    resolve('File_Get_012 => pass')
                    console.log("文件信息列表")
                    console.log("uri:" + data.uri)
                    console.log("length:" + data.length)
                    console.log("lastModifiedTime:" + data.lastModifiedTime)
                    console.log("type:" + data.type)
                    console.log("subFiles:" + data.subFiles)
                    console.log("File_Get_012 => 文件信息获取成功")
                },
                fail: function(data, code) {
                    reject('File_Get_012 call fail callback fail, code: ' + code + ', data: ' + data);
                    console.log("File_Get_012 => 文件信息获取失败")
                },
            });
        })
        fileio.rmdirSync(dpath)
        api.then(function(data){
            console.log("File_Get_012 then......" + data);
        })
        api.catch(function(e){
            console.log( e)
        })
    })
})