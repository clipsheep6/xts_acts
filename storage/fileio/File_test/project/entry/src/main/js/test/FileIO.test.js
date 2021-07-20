/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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



import fileio from '@ohos.fileio'
import bundle_mgr from '@ohos.bundle_mgr'

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'
import { FILE_CONTENT, prepareFile, nextFileName ,differentFileName, randomString} from './Common'

describe('fileIOTest', function () {
    console.log("---fileIOTest接口测试---")
    /*同步打开指定路径的文件功能
    * openSync(Srting fpath, Number flags, Number mode)*/

    it('fileio_test_open_close_sync_000', 0, function () {
        let fpath = nextFileName('fileio_test_open_close_sync_000')

        try {
            console.log("---fileio_test_open_close_sync_000测试开始---")
            let fd = fileio.openSync(fpath, 0o102, 0o666)
            expect(fd !== null).assertTrue()
            console.log("---文件打开成功---")
            expect(fileio.closeSync(fd) !== null).assertTrue()
            console.log("---文件关闭成功---")
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---文件删除成功---")
            console.log("---fileio_test_open_close_sync_000测试结束---")
        } catch (e) {
            console.log("fileio_test_open_close_sync_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_open_000', 0, function () {
        let fpath = nextFileName('fileio_test_open_000')
        prepareFile(fpath,FILE_CONTENT)

        try {
            console.log("---fileio_test_open_000测试开始---")
            let fd = fileio.openSync(fpath, 0o202)
            expect(fd !== null).assertTrue()
            console.log("---文件打开成功---")
            expect(fileio.closeSync(fd) !== null).assertTrue()
            console.log("---文件关闭成功---")
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---文件删除成功---")
            console.log("---fileio_test_open_000测试结束---")
        } catch (e) {
            console.log("fileio_test_open_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    /*打开文件只读*/
    it('fileio_test_open_sync_001', 0, function () {
        let fpath = nextFileName('fileio_test_open_sync_001')
        prepareFile(fpath,FILE_CONTENT)

        try {
            console.log("---fileio_test_open_sync_001测试开始---")
            let fd = fileio.openSync(fpath, 0o200)
            expect(fd !== null).assertTrue()
            console.log("---文件打开成功---")
            expect(fileio.closeSync(fd) !== null).assertTrue()
            console.log("---文件关闭成功---")
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---文件删除成功---")
            console.log("---fileio_test_open_sync_001 测试结束---")
        } catch (e) {
            console.log("fileio_test_open_sync_001 has failed for " + e)
            expect(null).assertFail()
        }
    })

    /*打开文件只写*/
    it('fileio_test_open_sync_002', 0, function () {
        let fpath = nextFileName('fileio_test_open_sync_002')
        prepareFile(fpath,FILE_CONTENT)

        try {
            console.log("---fileio_test_open_sync_002 测试开始---")
            let fd = fileio.openSync(fpath, 0o201)
            expect(fd !== null).assertTrue()
            console.log("---文件打开成功---")
            expect(fileio.closeSync(fd) !== null).assertTrue()
            console.log("---文件关闭成功---")
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---文件删除成功---")
            console.log("---fileio_test_open_sync_002 测试结束---")
        } catch (e) {
            console.log("fileio_test_open_sync_002 has failed for " + e)
            expect(null).assertFail()
        }
    })
    /*读写，mode缺少*/
    it('fileio_test_open_sync_003', 0, function () {
        let fpath = nextFileName('fileio_test_open_sync_003')
        prepareFile(fpath,FILE_CONTENT)

        try {
            console.log("---fileio_test_open_sync_003 测试开始---")
            let fd = fileio.openSync(fpath, 0o202)
            console.log(fd)
            expect(fd !== null).assertTrue()
            console.log("---文件打开成功---")
            expect(fileio.closeSync(fd) !== null).assertTrue()
            console.log("---文件关闭成功---")
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---文件删除成功---")
            console.log("---fileio_test_open_sync_003 测试结束---")
        } catch (e) {
            console.log("fileio_test_open_sync_003 has failed for " + e)
            expect(null).assertFail()
        }
    })

    /*读写执行*/
    it('fileio_test_open_sync_004', 0, function () {
        let fpath = nextFileName('fileio_test_open_sync_004')

        try {
            console.log("---fileio_test_open_sync_004 测试开始---")
            let fd = fileio.openSync(fpath, 0o102, 0o777)
            expect(fd !== null).assertTrue()
            console.log("---文件打开成功---")
            expect(fileio.closeSync(fd) !== null).assertTrue()
            console.log("---文件关闭成功---")
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---文件删除成功---")
            console.log("---fileio_test_open_sync_004 测试结束---")
        } catch (e) {
            console.log("fileio_test_open_sync_004 has failed for " + e)
            expect(null).assertFail()
        }
    })


    //  1、调用openSync()
    //  *fpath=文件夹路径
    //  *flags缺省（=O_RDONLY=000000000）,mode缺省
    //  当fpath为文件夹路径，flags为O_RDONLY时，可以打开目录

    it('fileio_test_open_sync_005', 0, function () {
        console.log("---fileio_test_open_sync_005测试开始---")
        let dpath = nextFileName('fileio_test_open_sync_005') + 'd'

        try {
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
            console.log("---fileio_test_open_sync_005 创建目录 success!")
            let fd = fileio.openSync(dpath)
            expect(fd !== null).assertTrue()
            console.log("---fileio_test_open_sync_005 fd："+fd)
            console.log("---fileio_test_open_sync_005 打开目录 success!")
            expect(fileio.closeSync(fd) !== null).assertTrue()
            console.log("---fileio_test_open_sync_005 关闭目录 success!")
            expect(fileio.rmdirSync(dpath) !== null).assertTrue()
            console.log("---fileio_test_open_sync_005 删除目录 success!")
            console.log("---fileio_test_open_sync_005 is passed!")
        } catch (e) {
            console.log("fileio_test_open_sync_005 has failed for " + e)
            expect(null).assertFail()
        }
    })

    /*1、调用openSync()
        *fpath=文件夹路径
        *flags=O_WRONLY=000000001,mode缺省
        当fpath为文件夹路径，flags为非O_RDONLY时，不可以打开目录*/

    it('fileio_test_open_sync_006', 0, function () {
        console.log("---fileio_test_open_sync_006测试开始---")
        let dpath = nextFileName('fileio_test_open_sync_006') + 'd'

        try {
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
            console.log("---fileio_test_open_sync_006 创建目录 success!")
            fileio.openSync(dpath,0o1)
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_open_sync_006 has failed for " + e)
            fileio.rmdirSync(dpath)
        }
    })

    //传4096字节的路径打开文件
    it('fileio_test_open_sync_007', 0, function () {
        console.log("---fileio_test_open_sync_007 测试开始---")
        let dpath = nextFileName("111111111111")
        fileio.mkdirSync(dpath)
        try{
            for(let i = 0; i < 16; i++){
                if(i == 15){
                    let fpath = dpath + "/f" + randomString(248)
                    fileio.openSync(fpath, 0o102, 0o777)
                    console.log((i+1) + "级子文件创建成功")
                }else{
                    dpath = dpath + "/d" + randomString(248)
                    fileio.mkdirSync(dpath)
                    console.log((i+1) + "级子目录创建成功")
                }
            }
            expect(null).assertFail()
        }catch(e) {
            console.log("fileio_test_open_sync_007 has failed for " + e)
        }
    })

    //文件名过长
    it('fileio_test_open_sync_008',0,function(){
        console.log("---fileio_test_open_sync_008 测试开始---")
        let fpath = nextFileName(randomString(256))
        try{
            fileio.openSync(fpath, 0o102, 0o777)
            expect(null).assertFail()
        }catch(e){
            console.log("fileio_test_open_sync_008 has failed for " + e)
        }
    })

    //路径过深
    it('fileio_test_open_sync_009',0,function(){
        console.log("---fileio_test_open_sync_009 测试开始---")
        let dpath = nextFileName("222")
        fileio.mkdirSync(dpath)
        try{
            for(let i = 0; i < 113; i++){
                if(i == 112){
                    let fpath = dpath + "/f" + i
                    fileio.openSync(fpath, 0o102, 0o777)
                    console.log((i+1) + "级子文件创建成功")
                }else{
                    dpath = dpath + "/" + i
                    fileio.mkdirSync(dpath)
                    console.log((i+1) + "级子目录创建成功")
                }
            }
            expect(null).assertFail()
        }catch(e){
            console.log("fileio_test_open_sync_009 has failed for " + e)
        }
    })

    //特殊字符?*:\"<>\\/|
    it('fileio_test_open_sync_010',0,function(){
        console.log("---fileio_test_open_sync_010 测试开始---")
        let fpath = nextFileName("?*:<>/|")
        try{
            fileio.openSync(fpath, 0o102, 0o777)
            console.log("过了")
            expect(null).assertFail()
        }catch(e){
            console.log("fileio_test_open_sync_010 has failed for " + e)
        }
    })

    it('fileio_test_close_sync_000', 0, function () {
        let fpath = nextFileName('fileio_test_chmod_sync_000')
        try {
            console.log("---fileio_test_close_sync_000 测试开始---")
            fileio.closeSync(fpath)
            expect(null).assertFail()

        } catch (e) {
            console.log("fileio_test_close_sync_000 has failed for " + e)
            console.log("---fileio_test_close_sync_000 测试结束---")
        }
    })

    it('fileio_test_close_sync_001', 0, function () {
        try {
            console.log("---fileio_test_close_sync_001 测试开始---")
            fileio.closeSync(-1)
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_close_sync_001 has failed for " + e)
            console.log("---fileio_test_close_sync_001 测试结束---")
        }
    })


    /*同步判断文件是否存在及其权限
    * accessSync(String path, Number mode)
    * 参数mode参考：

    | 定义 | 值   | 说明                           |
    | ---- | ---- | ------------------------------ |
    | F_OK | 0    | 只检查文件(夹)是否存在，缺省值 |
    | X_OK | 1    | 执行权限                       |
    | W_OK | 2    | 写权限                         |
    | R_OK | 4    | 读权限                         |*/

    //同步判断文件是否存在及其权限功能
    it('fileio_test_access_sync_000', 0, function () {
        let fpath = nextFileName('fileio_test_access_sync_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("---fileio_test_access_sync_000 测试开始---")
            expect(fileio.accessSync(fpath) !== null).assertTrue()
            console.log("---判断文件存在成功---")
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---文件删除成功---")
            console.log("---fileio_test_access_sync_000 测试结束---")
        } catch (e) {
            console.log("fileio_test_access_sync_000 has failed for " + e)
            expect(null).assertFail()
        }
    })
    //直接调用
    it('fileio_test_access_sync_001', 0, function () {
        try {
            console.log("---fileio_test_access_sync_001 测试开始---")
            fileio.accessSync(1)
            expect(null).assertFail()

        } catch (e) {
            console.log("fileio_test_access_sync_001 has failed for " + e)
            console.log("---fileio_test_access_sync_001 测试结束---")
        }
    })
    //文件不存在
    it('fileio_test_access_sync_002', 0, function () {
        let fpath = nextFileName('fileIOTest')

        try {
            console.log("---fileio_test_access_sync_002 测试开始---")
            fileio.accessSync(fpath)
            expect(null).assertFail()

        } catch (e) {
            console.log("fileio_test_access_sync_002 has failed for " + e)
            console.log("---fileio_test_access_sync_002 测试结束---")
        }
    })
    //判断文件具有执行权限
    it('fileio_test_access_sync_003', 0, function () {
        let fpath = nextFileName('fileio_test_access_sync_003')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("---fileio_test_access_sync_003 测试开始---")
            let ff = fileio.accessSync(fpath)
            expect(ff !== null).assertTrue()
            console.log("文件打开成功")
            expect(fileio.accessSync(fpath ,1) !== null).assertTrue()
            console.log("---判断文件具有执行权限成功---")
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---删除文件成功---")
            console.log("---fileio_test_access_sync_004 测试结束---")
        } catch (e) {
            console.log("fileio_test_access_sync_003 has failed for " + e)
            expect(null).assertFail()
        }
    })


    /*要判断的文件存在,且有写权限*/
    it('fileio_test_access_sync_004', 0, function () {
        let fpath = nextFileName('fileio_test_access_sync_004')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("---fileio_test_access_sync_004 测试开始---")
            console.log("文件打开成功")
            let fd = fileio.accessSync(fpath)
            console.log(fd)
            expect(fd !== null).assertTrue()
            expect(fileio.accessSync(fpath ,2) !== null).assertTrue()
            console.log("---判断文件具有写入权限成功---")
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---删除文件成功---")
            console.log("---fileio_test_access_sync_003 测试结束---")
        } catch (e) {
            console.log("fileio_test_access_sync_004 has failed for " + e)
            expect(null).assertFail()
        }
    })

    /* 1、调用accessSync()
        *path=文件夹路径，要判断的文件夹存在
        返回undefined*/

    it('fileio_test_access_sync_005', 0, function () {
        console.log("---fileio_test_access_sync_005 测试开始---")
        let dpath = nextFileName('fileio_test_access_sync_005') + 'd'

        try {
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
            console.log("---fileio_test_access_sync_005 创建文件成功")
            let fd = fileio.accessSync(dpath)
            console.log(fd)
            expect(fd == undefined ).assertTrue()
            console.log("---fileio_test_access_sync_005 判断文件夹是否存在及其权限成功---")
            expect(fileio.rmdirSync(dpath) !== null).assertTrue()
            console.log("---fileio_test_access_sync_005 删除目录成功---")
            console.log("---fileio_test_access_sync_005 is passed!---")
        } catch (e) {
            console.log("fileio_test_access_sync_005 has failed for " + e)
            expect(null).assertFail()
        }
    })

    /*1、调用accessSync()
        *path=文件夹路径，要判断的文件夹不存在
        返回null*/

    it('fileio_test_access_sync_006', 0, function () {
        //            目前这个接口算作fail
        console.log("---fileio_test_access_sync_006 测试开始---")
        let dpath = nextFileName('fileio_test_access_sync_006') + 'd'

        try {
            fileio.accessSync(dpath)
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_access_sync_006 has failed for " + e)
            console.log("---fileio_test_access_sync_006 测试结束---")
        }
    })

    /*### unlinkSync(fpath)

            #### 作用描述

            - 同步删除连接及目录

            #### 参数说明

            | 参数名称 | 类型   | 必填 | 参数描述         |
            | -------- | ------ | ---- | ---------------- |
            | fpath    | string | 是   | 要删除的文件路径 |*/
    it('fileio_test_unlink_sync_000', 0, function () {
        let fpath = nextFileName('fileio_test_unlink_sync_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("---fileio_test_unlink_sync_000 测试开始---")
            expect(fileio.unlinkSync(fpath) !== null)
            console.log("---删除文件成功---")
            console.log("---fileio_test_unlink_sync_000 测试结束---")
        } catch (e) {
            console.log("fileio_test_unlink_sync_000 has failed for " + e)
            expect(null).assertFail()
        }
    })


    it('fileio_test_unlink_sync_001', 0, function () {
        try {
            console.log("---fileio_test_unlink_sync_002 测试开始---")
            fileio.unlinkSync(1)
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_unlink_sync_002 has failed for " + e)
            console.log("---fileio_test_unlink_sync_002 测试结束---")
        }
    })

    it('fileio_test_unlink_sync_002', 0, function () {
        let fpath = nextFileName('fileIOTest')

        try {
            console.log("---fileio_test_unlink_sync_003 测试开始---")
            fileio.unlinkSync(fpath)
            expect(null).assertFail()

        } catch (e) {
            console.log("fileio_test_unlink_sync_003 has failed for " + e)
            console.log("---fileio_test_unlink_sync_003 测试结束---")
        }
    })

    /*### writeSync(fd, buf, options)

        #### 作用描述

        - 同步写文件数据

        #### 参数说明

        | 参数名称 | 类型   | 必填 | 参数描述           |
        | -------- | ------ | ---- | ------------------ |
        | fd       | number | 是   | 要写入的文件描述符 |
        | buf      | string | 是   | 要写入的文件内容   |
        | options  | object | 否   | 输出参数集合       |*/
    it('fileio_test_write_sync_000', 0, function () {
        let fpath = nextFileName('fileio_test_write_sync_000')

        try {
            console.log("---fileio_test_write_sync_000 测试开始---")
            let fd = fileio.openSync(fpath, 0o102, 0o666)
            expect(fileio.writeSync(fd, FILE_CONTENT) !== null).assertTrue()
            console.log("---文件写入成功---")
            expect(fileio.closeSync(fd) !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---删除文件成功---")
            console.log("---fileio_test_write_sync_000 测试结束---")
        } catch (e) {
            console.log("fileio_test_write_sync_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_write_sync_001', 0, function () {
        let fpath = nextFileName('fileio_test_write_sync_001')

        try {
            console.log("---fileio_test_write_sync_001 测试开始---")
            let fd = fileio.openSync(fpath, 0o102, 0o666)
            expect(fileio.writeSync(fd, FILE_CONTENT, {
                encoding: "utf-8",
            }) !== null).assertTrue()
            console.log("---文件写入成功（encoding: \"utf-8\",）---")
            expect(fileio.closeSync(fd) !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---删除文件成功---")
            console.log("---fileio_test_write_sync_001 测试结束---")
        } catch (e) {
            console.log("fileio_test_write_sync_001 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_write_sync_002', 0, function () {
        let fpath = nextFileName('fileio_test_write_sync_002')

        try {
            console.log("---fileio_test_write_sync_002 测试开始---")
            let fd = fileio.openSync(fpath, 0o102, 0o666)
            expect(fileio.writeSync(fd, FILE_CONTENT, {
                offset: 1,
            }) == FILE_CONTENT.length - 1).assertTrue()
            console.log("---文件写入成功（offset: 1,）---")
            expect(fileio.closeSync(fd) !==null).assertTrue()
            expect(fileio.unlinkSync(fpath) !==null).assertTrue()
            console.log("---删除文件成功---")
            console.log("---fileio_test_write_sync_002 测试结束---")
        } catch (e) {
            console.log("fileio_test_write_sync_002 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_write_sync_003', 0, function () {
        let fpath = nextFileName('fileio_test_write_sync_003')

        try {
            console.log("---fileio_test_write_sync_003 测试开始---")
            let fd = fileio.openSync(fpath, 0o102, 0o666)
            expect(fileio.writeSync(fd, FILE_CONTENT, {
                length: FILE_CONTENT.length - 1,
            }) == (FILE_CONTENT.length - 1)).assertTrue()
            console.log("---文件写入成功（length: FILE_CONTENT.length - 1,）---")
            expect(fileio.closeSync(fd) !==null).assertTrue()
            expect(fileio.unlinkSync(fpath) !==null).assertTrue()
            console.log("---删除文件成功---")
            console.log("---fileio_test_write_sync_003 测试结束---")
        } catch (e) {
            console.log("fileio_test_write_sync_003 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_write_sync_004', 0, function () {
        let fpath = nextFileName('fileio_test_write_sync_004')

        try {
            console.log("---fileio_test_write_sync_004 测试开始---")
            let fd = fileio.openSync(fpath, 0o102, 0o666)
            expect(fileio.writeSync(fd, FILE_CONTENT, {
                offset: 1,
                length: 1,
            }) !==null).assertTrue()
            console.log("---文件写入成功（offset: 1,\n" +
            "                length: 1,）---")
            expect(fileio.closeSync(fd) !==null).assertTrue()
            expect(fileio.unlinkSync(fpath) !==null).assertTrue()
            console.log("---删除文件成功---")
            console.log("---fileio_test_write_sync_004 测试结束---")
        } catch (e) {
            console.log("fileio_test_write_sync_004 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_write_sync_005', 0, function () {
        let fpath = nextFileName('fileio_test_write_sync_005')
        const invalidOffset = 999
        let fd

        try {
            console.log("---fileio_test_write_sync_005 测试开始---")
            fd = fileio.openSync(fpath, 0o102, 0o666)
            expect(fd).assertInstanceOf('Number')
            expect(fileio.writeSync(fd, FILE_CONTENT, {
                offset: invalidOffset,
            })==1).assertTrue()
            console.log("---文件写入失败-断言成功（offset: invalidOffset,）---")
            expect(null).assertFail()

        } catch (e) {
            expect(fileio.closeSync(fd) !==null).assertTrue()
            expect(fileio.unlinkSync(fpath) !==null).assertTrue()
            console.log("---删除文件成功---")
            console.log("---fileio_test_write_sync_005 测试结束---")
        }
    })

    it('fileio_test_write_sync_006', 0, function () {
        let fpath = nextFileName('fileio_test_write_sync_006')
        const invalidLength = 999
        let fd

        try {
            console.log("---fileio_test_write_sync_006 测试开始---")
            fd = fileio.openSync(fpath, 0o102, 0o666)
            expect(fd).assertInstanceOf('Number')
            expect(fileio.writeSync(fd, FILE_CONTENT, {
                length: invalidLength,
            })==1)
            console.log("---文件写入失败-断言成功（length: invalidLength）---")
            expect(null).assertFail()
        } catch (e) {
            expect(fileio.closeSync(fd) !==null).assertTrue()
            expect(fileio.unlinkSync(fpath) !==null).assertTrue()
            console.log("---删除文件成功---")
            console.log("---fileio_test_write_sync_006 测试结束---")
        }
    })

    it('fileio_test_write_sync_007', 0, function () {
        try {
            console.log("---fileio_test_write_sync_007 测试开始---")
            fileio.writeSync(1,1)
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_write_sync_007 has failed for " + e)
            console.log("---fileio_test_write_sync_007 测试结束---")
        }
    })

    it('fileio_test_write_sync_008', 0, function () {
        try {
            console.log("---fileio_test_write_sync_008 测试开始---")
            //            fileio.writeSync(-1, FILE_CONTENT)
            console.log(fileio.writeSync(-1, FILE_CONTENT))
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_write_sync_008 has failed for " + e)
            console.log("---fileio_test_write_sync_008 测试结束---")
        }
    })

    /*### readSync(fd, buf, options)

    #### 作用描述

    - 同步从指定文件中读取数据

    #### 参数说明
        | 参数名称 | 类型   | 必填 | 参数描述                  |
        | -------- | ------ | ---- | ------------------------- |
        | fd       | number | 是   | 要读取的文件描述符        |
        | buf      | object | 是   | 用于读取数据的ArrayBuffer |
        | options  | object | 否   | 输入参数集合              |*/

    it('fileio_test_read_sync_000', 0, function () {
        let fpath = nextFileName('fileio_test_read_sync_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("---fileio_test_read_sync_000 测试开始---")
            let fd = fileio.openSync(fpath, 0o2)
            let len = fileio.readSync(fd, new ArrayBuffer(4096))
            expect(len == FILE_CONTENT.length).assertTrue()
            console.log("---文件长度判定成功---")
            expect(fileio.closeSync(fd) !==null).assertTrue()
            expect(fileio.unlinkSync(fpath) !==null).assertTrue()
            console.log("---删除文件成功---")
            console.log("---fileio_test_write_sync_006 测试结束---")
        } catch (e) {
            console.log("fileio_test_read_sync_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_read_sync_001', 0, function () {
        let bufLen = 5
        expect(FILE_CONTENT.length > bufLen).assertTrue()
        let fpath = nextFileName('fileio_test_read_sync_001')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("---fileio_test_read_sync_001 测试开始---")
            let fd = fileio.openSync(fpath, 0o2)
            let len = fileio.readSync(fd, new ArrayBuffer(bufLen), {
                offset: 1,
            })
            expect(len == bufLen - 1).assertTrue()
            expect(fileio.closeSync(fd) !==null).assertTrue()
            expect(fileio.unlinkSync(fpath)!==null).assertTrue()
            console.log("---删除文件成功---")
            console.log("---fileio_test_read_sync_001 测试结束---")
        } catch (e) {
            console.log("fileio_test_read_sync_001 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_read_sync_002', 0, function () {
        let fpath = nextFileName('fileio_test_read_sync_002')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("---fileio_test_read_sync_002 测试开始---")
            let fd = fileio.openSync(fpath, 0o2)
            let len = fileio.readSync(fd, new ArrayBuffer(4096), {
                length: 1,
            })
            expect(len == 1).assertTrue()
            expect(fileio.closeSync(fd) !==null).assertTrue()
            expect(fileio.unlinkSync(fpath)!==null).assertTrue()
            console.log("---删除文件成功---")
            console.log("---fileio_test_read_sync_002 测试结束---")
        } catch (e) {
            console.log("fileio_test_read_sync_002 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_read_sync_003', 0, function () {
        let fd
        const invalidOffset = 99999
        let fpath = nextFileName('fileio_test_read_sync_003')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("---fileio_test_read_sync_003 测试开始---")
            fd = fileio.openSync(fpath, 0o2)
            fileio.readSync(fd, new ArrayBuffer(4096), {
                offset: invalidOffset,
            })
            expect(null).assertFail()
        } catch (e) {
            expect(fileio.closeSync(fd) !==null).assertTrue()
            expect(fileio.unlinkSync(fpath) !==null).assertTrue()
            console.log("---删除文件成功---")
            console.log("---fileio_test_read_sync_003 测试结束---")
        }
    })

    it('fileio_test_read_sync_004', 0, function () {
        let fd
        const invalidLength = 9999
        let fpath = nextFileName('fileio_test_read_sync_004')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("---fileio_test_read_sync_004 测试开始---")
            fd = fileio.openSync(fpath, 0o2)
            fileio.readSync(fd, new ArrayBuffer(4096), {
                length: invalidLength,
            })
            expect(null).assertFail()
        } catch (e) {
            expect(fileio.closeSync(fd) !==null).assertTrue()
            expect(fileio.unlinkSync(fpath) !==null).assertTrue()
            console.log("---删除文件成功---")
            console.log("---fileio_test_read_sync_004 测试结束---")
        }
    })

    it('fileio_test_read_sync_005', 0, function () {
        let fpath = nextFileName('fileio_test_read_sync_005')
        let fd

        try {
            console.log("---fileio_test_read_sync_005 测试开始---")
            fileio.readSync(-1, new ArrayBuffer(4096))
            expect(null).assertFail()

        } catch (e) {
            console.log("fileio_test_read_sync_005 has failed for " + e)
            console.log("---fileio_test_read_sync_005 测试结束---")
        }
    })

    it('fileio_test_read_sync_006', 0, function () {
        let fpath = nextFileName('fileio_test_read_sync_006')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("fileio_test_read_sync_006 测试开始");
            let fd = fileio.openSync(fpath, 0o2)
            let len = fileio.readSync(fd, new ArrayBuffer(4096), {
                position: 1,
            })
            expect(len == FILE_CONTENT.length - 1)
            expect(fileio.closeSync(fd) !==null).assertTrue()
            expect(fileio.unlinkSync(fpath) !==null).assertTrue()
            console.log("fileio_test_read_sync_006 测试结束");
        } catch (e) {
            console.log("fileio_test_read_sync_006 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_read_sync_007', 0, function () {
        let fpath = nextFileName('fileio_test_read_sync_007')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("fileio_test_read_sync_007 测试开始");
            let fd = fileio.openSync(fpath, 0o2)
            let invalidPos = FILE_CONTENT.length + 1
            let len = fileio.readSync(fd, new ArrayBuffer(4096), {
                position: invalidPos,
            })
            expect(len ==0).assertTrue()
            expect(fileio.closeSync(fd) !==null).assertTrue()
            expect(fileio.unlinkSync(fpath) !==null).assertTrue()
            console.log("fileio_test_read_sync_007 测试结束");
        } catch (e) {
            console.log("fileio_test_read_sync_007 has failed for " + e)
            expect(null).assertFail()
        }
    })
    /*### chmodSync(fpath, mode)

        #### 作用描述

        - 同步修改文件权限

        #### 参数说明

        | 参数名称 | 类型   | 必填 | 参数描述                                                     |
        | -------- | ------ | ---- | ------------------------------------------------------------ |
        | fpath    | string | 是   | 要访问的文件路径                                             |
        | mode     | number | 是   | 文件的访问权限，只有该文件的所有者或有效用户识别码为0，才可以修改该文件权限 |

        参数mode参考openSync，补充如下：

        | 文件权限标志 | 值    | 说明                                 |
        | ------------ | ----- | ------------------------------------ |
        | S_ISUID      | 04000 | 文件的 (set user-id on execution)位  |
        | S_ISGID      | 02000 | 文件的 (set group-id on execution)位 |
        | S_ISVTX      | 01000 | 文件的sticky 位                      |     */
    it('fileio_test_chmod_sync_000', 0, function () {
        let fpath = nextFileName('fileio_test_chmod_sync_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("fileio_test_chmod_sync_000 测试开始");
            expect(fileio.chmodSync(fpath, 0o660) !== null).assertTrue()
            expect((fileio.Stat.statSync(fpath).mode & 0o777 ) == 0o660).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_chmod_sync_000 测试结束");
        } catch (e) {
            console.log("fileio_test_chmod_sync_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_chmod_sync_001', 0, function () {
        let fpath = nextFileName('fileio_test_chmod_sync_001')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("fileio_test_chmod_sync_001 测试开始");
            expect(fileio.chmodSync(fpath, 0o460)!== null).assertTrue()
            expect((fileio.Stat.statSync(fpath).mode & 0o777) == 0o460).assertTrue()
            expect(fileio.unlinkSync(fpath)!== null).assertTrue()
            console.log("fileio_test_chmod_sync_001 测试结束");
        } catch (e) {
            console.log("fileio_test_chmod_sync_001 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_chmod_sync_002', 0, function () {
        let fpath = nextFileName('fileio_test_chmod_sync_002')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("fileio_test_chmod_sync_002 测试开始");
            expect(fileio.chmodSync(fpath, 0o260) !== null).assertTrue()
            expect((fileio.Stat.statSync(fpath).mode & 0o777) == 0o260).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_chmod_sync_002 测试结束");
        } catch (e) {
            console.log("fileio_test_chmod_sync_002 has failed for " + e)
            expect(null).assertFail()
        }
    })

    /*文件不存在，正常传参*/
    it('fileio_test_chmod_sync_003', 0, function () {
        let fpath = nextFileName('fileio_test_chmod_sync_003')

        try {
            console.log("fileio_test_chmod_sync_003 测试开始");
            fileio.chmodSync(fpath,0o260)
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_chmod_sync_003 has failed for " + e)
            console.log("fileio_test_chmod_sync_003 测试结束");
        }
    })


    it('fileio_test_chmod_sync_004', 0, function () {
        let dpath = nextFileName('fileio_test_chmod_sync_004')


        try {
            console.log("fileio_test_chmod_sync_004 测试开始");
            expect(fileio.mkdirSync(dpath,0o777) !== null).assertTrue()
            console.log("创建文件成功");
            expect(fileio.chmodSync(dpath,0o660) !== null).assertTrue()
            console.log("更改文件权限成功");
            expect((fileio.Stat.statSync(dpath).mode & 0o777 ) == 0o660).assertTrue()
            console.log("mode比对成功");
            expect(fileio.rmdirSync(dpath) !== null).assertTrue()
            console.log("fileio_test_chmod_sync_004 测试结束");
        } catch (e) {
            console.log("fileio_test_chmod_sync_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_chmod_sync_005', 0, function () {
        let dpath


        try {
            console.log("fileio_test_chmod_sync_005 测试开始");
            fileio.chmodSync(dpath,0o660)
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_chmod_sync_005 has failed for " + e)
            console.log("fileio_test_chmod_sync_005 测试结束");
        }
    })

    /*
         - 同步拷贝文件

        #### 参数说明

        | 参数名称    | 类型   | 必填 | 参数描述         |
        | ----------- | ------ | ---- | ---------------- |
        | fpath       | string | 是   | 拷贝源的文件路径 |
        | fpathTarget | string | 是   | 拷贝地的文件路径 |

        1 path：输入正确文件原路径
          fpathTarget：输入为与原路径相同，文件名不同的路径*/
    it('fileio_test_copy_file_sync_000', 0, function () {
        let fpath = nextFileName('fileio_test_copy_file_sync_000')
        let fpathTarget = fpath + 'tgt'
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("fileio_test_copy_file_sync_000 测试开始");
            expect(fileio.copyFileSync(fpath, fpathTarget) !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            expect(fileio.unlinkSync(fpathTarget) !== null).assertTrue()
            console.log("fileio_test_copy_file_sync_000 测试结束");
        } catch (e) {
            console.log("fileio_test_copy_file_sync_000 has failed for " + e)
            expect(null).assertFail()
        }
    })
    /*fpath：输入目录路径，文件不存在
      fpathTarget：输入为与原路径相同文件名不同的路径*/
    it('fileio_test_copy_file_sync_001', 0, function () {
        let fpath = nextFileName('fileio_test_copy_file_sync_001') + 'd'
        let fpathTarget = fpath + 'tgt'

        try {
            console.log("fileio_test_copy_file_sync_001 测试开始");
            fileio.copyFileSync(fpath, fpathTarget)
            expect(null).assertFail()
            console.log("fileio_test_copy_file_sync_001 测试结束");
        } catch (e) {
        }
    })
    /*fpathTarget-传入空的参数*/
    it('fileio_test_copy_file_sync_002', 0, function () {
        let fpath = nextFileName('fileio_test_copy_file_sync_002')

        try {
            console.log("fileio_test_copy_file_sync_002 测试开始");
            fileio.copyFileSync(fpath,0)
            expect(null).assertFail()
            console.log("fileio_test_copy_file_sync_002 测试结束");
        } catch (e) {
        }
    })
    /*
    *   fpath：输入正确文件原路径
        fpathTarget：输入为与原路径不同文件名不同的路径*/
    it('fileio_test_copy_file_sync_003', 0, function () {
        let fpath = nextFileName('fileio_test_copy_file_sync_003')
        let fpathTarget = fpath + 'f1'
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("fileio_test_copy_file_sync_003 测试开始");
            expect(fileio.copyFileSync(fpath, fpathTarget) !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            expect(fileio.unlinkSync(fpathTarget) !== null).assertTrue()
            console.log("fileio_test_copy_file_sync_003 测试结束");
        } catch (e) {
            console.log("fileio_test_copy_file_sync_003 has failed for " + e)
            expect(null).assertFail()
        }
    })

    /*  fpath：输入正确文件原路径
        fpathTarget：输入为与原路径相同文件名不同的路径*/
    it('fileio_test_copy_file_sync_004', 0, function () {
        let fpath = nextFileName('fileio_test_copy_file_sync_004')
        let fpath2 = differentFileName('fileio_test_copy_file_sync_004')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
        expect(prepareFile(fpath2, FILE_CONTENT)).assertTrue()
        let fpathTarget = fpath2 + 'f1'

        try {
            console.log("fileio_test_copy_file_sync_004 测试开始");
            expect(fileio.copyFileSync(fpath, fpathTarget) !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            expect(fileio.unlinkSync(fpath2) !== null).assertTrue()
            expect(fileio.unlinkSync(fpathTarget) !== null).assertTrue()
            console.log("fileio_test_copy_file_sync_004 测试结束");
        } catch (e) {
            console.log("fileio_test_copy_file_sync_004 has failed for " + e)
            expect(null).assertFail()
        }
    })
    /*  fpath：输入正确文件原路径
        fpathTarget：输入为与原路径相同文件名相同的路径*/
    it('fileio_test_copy_file_sync_005', 0, function () {
        let fpath = nextFileName('fileio_test_copy_file_sync_005')
        let fpathTarget = fpath
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("fileio_test_copy_file_sync_005 测试开始");
            expect(fileio.copyFileSync(fpath, fpathTarget) !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue();
            console.log("fileio_test_copy_file_sync_005 测试结束");
        } catch (e) {
            console.log("fileio_test_copy_file_sync_005 has failed for " + e)
            expect(null).assertFail()
        }
    })
    /*输入不存在的路径*/
    it('fileio_test_copy_file_sync_006', 0, function () {
        let fpath = nextFileName('fileio_test_copy_file_sync_006')
        let fpathTarget = fpath + 'tgt'

        try {
            console.log("fileio_test_copy_file_sync_006 测试开始");
            fileio.copyFileSync(fpath, fpathTarget)
            expect(null).assertFail()
            console.log("fileio_test_copy_file_sync_006 测试结束");
        } catch (e) {
        }
    })
    /*不输入参数*/
    it('fileio_test_copy_file_sync_007', 0, function () {
        try {
            console.log("fileio_test_copy_file_sync_007 测试开始");
            fileio.copyFileSync(1,1)
            expect(null).assertFail()
            console.log("fileio_test_copy_file_sync_007 测试结束");
        } catch (e) {
        }
    })
    //传4096字节的路径复制文件
    it('fileio_test_copy_file_sync_008', 0, function () {
        console.log("---fileio_test_copy_file_sync_008 测试开始---")
        let fpath = nextFileName("fileio_test_copy_file_sync_008")
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

    //文件名过长
    it('fileio_test_copy_file_sync_009',0,function(){
        console.log("---fileio_test_copy_file_sync_009 测试开始---")
        let fpath = nextFileName("fileio_test_copy_file_sync_009")
        fileio.openSync(fpath, 0o102, 0o777)
        let fpathTarget = nextFileName(randomString(256))
        try{
            fileio.copyFileSync(fpath, fpathTarget)
            expect(null).assertFail()
        }catch(e){
            fileio.unlinkSync(fpath)
            console.log("fileio_test_open_sync_008 has failed for " + e)
        }
    })

    //路径过深
    //    it('fileio_test_open_sync_010',0,function(){
    //        console.log("---fileio_test_open_sync_010 测试开始---")
    //        let fpath = nextFileName("fileio_test_open_sync_010")
    //        fileio.openSync(fpath, 0o102, 0o777)
    //        let dpath = nextFileName("222")
    //        fileio.mkdirSync(dpath)
    //        try{
    //            for(let i = 0; i < 113; i++){
    //                if(i == 112){
    //                    let fpathTarget = dpath + "/f" + i
    //                    fileio.copyFileSync(fpath, fpathTarget)
    //                    console.log((i+1) + "级子文件创建成功")
    //                }else{
    //                    dpath = dpath + "/" + i
    //                    fileio.mkdirSync(dpath)
    //                    console.log((i+1) + "级子目录创建成功")
    //                }
    //            }
    //            expect(null).assertFail()
    //        }catch(e){
    //            fileio.unlinkSync(fpath)
    //            console.log("fileio_test_open_sync_010 has failed for " + e)
    //        }
    //    })

    //特殊字符?*:\"<>\\/|
    it('fileio_test_open_sync_010',0,function(){
        console.log("---fileio_test_open_sync_010 测试开始---")
        let fpath = nextFileName("fileio_test_open_sync_010")
        fileio.openSync(fpath, 0o102, 0o777)
        let fpathTarget = nextFileName("?*:<>/|")
        try{
            fileio.copyFileSync(fpath, fpathTarget)
            console.log("过了")
            expect(null).assertFail()
        }catch(e){
            fileio.unlinkSync(fpath)
            console.log("fileio_test_open_sync_010 has failed for " + e)
        }
    })
    /*### truncateSync(fpath, len)

        #### 作用描述

        - 同步修改文件大小

        #### 参数说明

        | 参数名称 | 类型   | 必填 | 参数描述                                             |
        | -------- | ------ | ---- | ---------------------------------------------------- |
        | fpath    | string | 是   | 要修改的文件路径                                     |
        | len      | number | 否   | 指定文件大小，缺省值0，原文件大小超过len部分会被删除 |*/
    it('fileio_test_truncate_sync_000', 0, function () {
        let fpath = nextFileName('fileio_test_truncate_sync_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("fileio_test_truncate_sync_000 测试开始");
            expect(fileio.truncateSync(fpath) !== null).assertTrue()
            expect(fileio.Stat.statSync(fpath).size == 0).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_truncate_sync_000 测试结束");
        } catch (e) {
            console.log("fileio_test_truncate_sync_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_truncate_sync_002', 0, function () {
        let fpath = nextFileName('fileio_test_truncate_sync_001')

        try {
            console.log("fileio_test_truncate_sync_002 测试开始");
            fileio.truncateSync(fpath)
            expect(null).assertFail()
            console.log("fileio_test_truncate_sync_002 测试结束");
        } catch (e) {
        }
    })

    it('fileio_test_truncate_sync_001', 0, function () {
        try {
            console.log("fileio_test_truncate_sync_001 测试开始");
            fileio.truncateSync()
            expect(null).assertFail()
            console.log("fileio_test_truncate_sync_001 测试结束");
        } catch (e) {
        }
    })

    /*### renameSync(fpath, fpathTarget)

    #### 作用描述

    - 同步重命名文件

    #### 参数说明

    | 参数名称    | 类型   | 必填 | 参数描述             |
    | ----------- | ------ | ---- | -------------------- |
    | fpath       | string | 是   | 要重命名的文件原路径 |
    | fpathTarget | string | 是   | 要重命名的文件路径   |*/


    it('fileio_test_rename_sync_000', 0, function () {
        let fpath = nextFileName('fileio_test_rename_sync_000')
        let fpathTarget = fpath + 'tgt'
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("fileio_test_rename_sync_000 测试开始");
            expect(fileio.renameSync(fpath, fpathTarget) !==null).assertTrue()
            expect(fileio.accessSync(fpathTarget) !==null).assertTrue()
            expect(fileio.unlinkSync(fpathTarget) !==null).assertTrue()
            console.log("fileio_test_rename_sync_000 测试结束");
        } catch (e) {
            console.log("fileio_test_rename_sync_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_rename_sync_001', 0, function () {
        let fpath = nextFileName('fileio_test_rename_sync_001')
        let fpathTarget = fpath + 'tgt'

        try {
            console.log("fileio_test_rename_sync_001 测试开始");
            fileio.renameSync(fpath, fpathTarget)
            expect(null).assertFail()
            console.log("fileio_test_rename_sync_001 测试结束");
        } catch (e) {
        }
    })
    /*fpath：输入正确文件原路径
    fpathTarget：输入的文件路径不存在*/
    it('fileio_test_rename_sync_002', 0, function () {
        let fpath = nextFileName('fileio_test_rename_sync_002')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("fileio_test_rename_sync_002 测试开始");
            fileio.renameSync(fpath, "/")
            expect(null).assertFail()
        } catch (e) {
            expect(fileio.unlinkSync(fpath) !==null).assertTrue()
            console.log("fileio_test_rename_sync_002 测试结束" + e);
        }
    })
    /*fpath：输入正确文件原路径
    fpathTarget：输入为与原路径相同文件名相同的路径*/
    it('fileio_test_rename_sync_003', 0, function () {
        let fpath = nextFileName('fileio_test_rename_sync_003')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("fileio_test_rename_sync_003 测试开始");
            fileio.renameSync(fpath, fpath)
            expect(null).assertFail()
        } catch (e) {
            expect(fileio.unlinkSync(fpath) !==null).assertTrue()
            console.log("fileio_test_rename_sync_003 测试结束" + e);
        }
    })

    it('fileio_test_rename_sync_004', 0, function () {

        try {
            console.log("fileio_test_rename_sync_004 测试开始");
            fileio.renameSync(1,1)
            expect(null).assertNull()
        } catch (e) {
            console.log("fileio_test_rename_sync_004 测试结束" + e);
        }
    })

    it('fileio_test_rename_sync_005', 0, function () {
        let fpath = nextFileName('fileio_test_rename_sync_005')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("fileio_test_rename_sync_005 测试开始");
            fileio.renameSync(fpath,1)
            expect(null).assertFail()
        } catch (e) {
            expect(fileio.unlinkSync(fpath) !==null).assertTrue()
            console.log("fileio_test_rename_sync_005 测试结束" + e);
        }
    })

    /* renameSync(fpath, fpathTarget)
       fpath：输入正确文件夹原路径
       fpathTarget：输入为与原路径相同 文件夹名不同 的路径*/

    it('fileio_test_rename_sync_006', 0, function () {
        console.log("fileio_test_rename_sync_006 测试开始");
        let dpath = nextFileName('fileio_test_rename_sync_006') + 'd'
        let dpathTarget = nextFileName('fileio_test_rename_sync_006-1') + 'd'

        try {
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
            console.log("---fileio_test_rename_sync_006 创建目录 success!")
            expect(fileio.renameSync(dpath, dpathTarget) == undefined).assertTrue()
            console.log("---fileio_test_rename_sync_006 重命名目录 success!")
            expect(fileio.accessSync(dpathTarget) !==null).assertTrue()
            console.log("---fileio_test_rename_sync_006 新目录存在 success!")
            expect(fileio.rmdirSync(dpathTarget) !== null).assertTrue()
            console.log("---fileio_test_rename_sync_006 删除目录 success!")
            console.log("fileio_test_rename_sync_006 is passed!");
        } catch (e) {
            console.log("fileio_test_rename_sync_006 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //       renameSync(fpath, fpathTarget)
    //       fpath：输入文件夹不存在
    //       fpathTarget：输入为与原路径相同文件夹名不同的路径

    it('fileio_test_rename_sync_007', 0, function () {
        console.log("fileio_test_rename_sync_007 测试开始");
        let dpath = nextFileName('fileio_test_rename_sync_007') + 'd'
        let dpathTarget = nextFileName('fileio_test_rename_sync_007-1') + 'd'

        try {
            fileio.renameSync(dpath, dpathTarget)
            expect(null).assertFail()

        } catch (e) {
            console.log("fileio_test_rename_sync_007 has failed for " + e)
            console.log("fileio_test_rename_sync_007 测试结束");
        }
    })

    //       renameSync(fpath, fpathTarget)
    //       fpath：输入正确文件夹原路径
    //       fpathTarget：输入的文件夹路径不存在

    it('fileio_test_rename_sync_008', 0, function () {
        console.log("fileio_test_rename_sync_008 测试开始");
        let dpath = nextFileName('fileio_test_rename_sync_008') + 'd'
        let dpathTarget = '/data/accounts/account_0/appdata/aaa/bbb/fileio_test_rename_sync_008-1d'

        try {
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
            console.log("---fileio_test_rename_sync_008 创建目录 success!")
            fileio.renameSync(dpath, dpathTarget)
            expect(null).assertFail()
        } catch (e) {
            expect(fileio.rmdirSync(dpath) !==null).assertTrue()
            console.log("fileio_test_rename_sync_008 has failed for " + e)
            console.log("fileio_test_rename_sync_008 测试结束");

        }
    })

    //       renameSync(fpath, fpathTarget)
    //       fpath：输入正确文件夹原路径
    //       fpathTarget：输入为与原路径相同文件夹名相同的路径

    it('fileio_test_rename_sync_009', 0, function () {
        console.log("fileio_test_rename_sync_009 测试开始");
        let dpath = nextFileName('fileio_test_rename_sync_009') + 'd'

        try {
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
            console.log("---fileio_test_rename_sync_009 创建目录 success!")
            let result = fileio.renameSync(dpath, dpath);
            expect(result === undefined).assertTrue()
            console.log("---fileio_test_rename_sync_009 重命名目录成功!")
            expect(fileio.accessSync(dpath) !==null).assertTrue()
            console.log("---fileio_test_rename_sync_009 原目录存在 success!")
            expect(fileio.rmdirSync(dpath) !== null).assertTrue()
            console.log("---fileio_test_rename_sync_009 删除目录 success!")
            console.log("fileio_test_rename_sync_009 is passed!");
        } catch (e) {
            console.log("fileio_test_rename_sync_009 has failed for " + e)
            expect(null).assertFail()
        }
    })

    /*### chmodSync(fpath, mode)
        #### 作用描述
        - 同步修改文件权限
        #### 参数说明
        | 参数名称 | 类型   | 必填 | 参数描述                                                     |
        | -------- | ------ | ---- | ------------------------------------------------------------ |
        | fpath    | string | 是   | 要访问的文件路径                                             |
        | mode     | number | 是   | 文件的访问权限，只有该文件的所有者或有效用户识别码为0，才可以修改该文件权限 |*/
    it('fileio_test_fchmod_sync_000', 0, function () {
        let fpath = nextFileName('fileio_test_fchmod_sync_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("fileio_test_fchmod_sync_000 测试开始");
            let fd = fileio.openSync(fpath)
            expect(fileio.fchmodSync(fd, 0o660) !== null).assertTrue()
            expect((fileio.Stat.statSync(fpath).mode & 0o777) == 0o660).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_fchmod_sync_000 测试结束");
        } catch (e) {
            console.log("fileio_test_fchmod_sync_000 has failed for " + e)
            expect(null).assertFail()
        }
    })


    it('fileio_test_fchmod_sync_001', 0, function () {
        let fpath = nextFileName('fileio_test_fchmod_sync_001')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("fileio_test_fchmod_sync_001 测试开始");
            let fd = fileio.openSync(fpath)
            expect(fileio.fchmodSync(fd, 0o460) !== null).assertTrue()
            expect((fileio.Stat.statSync(fpath).mode & 0o777) == 0o460).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_fchmod_sync_001 测试结束");
        } catch (e) {
            console.log("fileio_test_fchmod_sync_001 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_fchmod_sync_002', 0, function () {
        let fpath = nextFileName('fileio_test_fchmod_sync_002')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("fileio_test_fchmod_sync_002 测试开始");
            let fd = fileio.openSync(fpath)
            expect(fileio.fchmodSync(fd, 0o260) !== null).assertTrue()
            expect((fileio.Stat.statSync(fpath).mode & 0o777) == 0o260).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_fchmod_sync_002 测试结束");
        } catch (e) {
            console.log("fileio_test_fchmod_sync_002 has failed for " + e)
            expect(null).assertFail()
        }
    })
    it('fileio_test_fchmod_sync_003', 0, function () {
        try {
            console.log("fileio_test_fchmod_sync_003 测试开始");
            expect(fileio.fchmodSync(-1, 0o660) !==null).assertTrue()
            expect(null).assertFail()
            console.log("fileio_test_fchmod_sync_003 测试结束");
        } catch (e) {
        }
    })
    /*mode值为异常值是如6666666，依然成功。*/
    it('fileio_test_fchmod_sync_004', 0, function () {
        let fpath = nextFileName('fileio_test_fchmod_sync_004')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("fileio_test_fchmod_sync_004 测试开始");
            let fd = fileio.openSync(fpath)
            let test = 1
            test = fileio.fchmodSync(fd,2222222222222)
            console.log("fileio.fchmodSync(fd,2222222222222) 返回值为：" + test)
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            //expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_fchmod_sync_004 has failed for A" + e)
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_fchmod_sync_004 测试结束");
        }
    })

    it('fileio_test_fchmod_sync_005', 0, function () {
        let dpath = nextFileName('fileio_test_fchmod_sync_005') + 'd'


        try {
            console.log("fileio_test_fchmod_sync_005 测试开始");
            expect(fileio.mkdirSync(dpath,0o777) !== null).assertTrue()
            let fd = fileio.openSync(dpath)
            console.log(fd);
            expect(fileio.fchmodSync(fd, 0o660) !== null).assertTrue()
            expect(fileio.rmdirSync(dpath) !== null).assertTrue()
            console.log("fileio_test_fchmod_sync_005 测试结束");
        } catch (e) {
            console.log("fileio_test_fchmod_sync_005 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_fchmod_sync_006', 0, function () {
        let dpath

        try {
            console.log("fileio_test_fchmod_sync_006 测试开始");
            fileio.fchmodSync(dpath, 0o660)
            expect(null).assertNull()
        } catch (e) {
            console.log("fileio_test_fchmod_sync_006 has failed for " + e)
            console.log("fileio_test_fchmod_sync_006 测试结束");
        }
    })


    /*### ftruncateSync(fd, len)

    #### 作用描述

    - 同步修改已打开文件的大小

    #### 参数说明

    | 参数名称 | 类型   | 必填 | 参数描述                                             |
    | -------- | ------ | ---- | ---------------------------------------------------- |
    | fd       | number | 是   | 要修改的文件描述符                                   |
    | len      | number | 否   | 指定文件大小，缺省值0，原文件大小超过len部分会被删除 |*/


    it('fileio_test_ftruncate_sync_000', 0, function () {
        let fpath = nextFileName('fileio_test_ftruncate_sync_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("fileio_test_ftruncate_sync_000 测试开始");
            let fd = fileio.openSync(fpath, 0o2)
            expect(fileio.ftruncateSync(fd) !== null).assertTrue()
            expect(fileio.Stat.statSync(fpath).size == 0).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_ftruncate_sync_000 测试结束");
        } catch (e) {
            console.log("fileio_test_ftruncate_sync_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_ftruncate_sync_001', 0, function () {
        let fpath = nextFileName('fileio_test_ftruncate_sync_001')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("fileio_test_ftruncate_sync_001 测试开始");
            let fd = fileio.openSync(fpath, 0o2)
            expect(fileio.ftruncateSync(fd) !== null).assertTrue()
            expect(fileio.closeSync(fd) !==null).assertTrue()
            expect(fileio.unlinkSync(fpath) !==null).assertTrue()
            console.log("fileio_test_ftruncate_sync_001 测试结束");
        } catch (e) {
            console.log("fileio_test_ftruncate_sync_001 has failed for " + e)
            expect(null).assertFail()
        }
    })
    /*不输入参数*/
    it('fileio_test_ftruncate_sync_002', 0, function () {
        try {
            console.log("fileio_test_ftruncate_sync_002 测试开始");
            fileio.ftruncateSync(1)
            expect(null).assertFail()
            console.log("fileio_test_ftruncate_sync_002 测试结束");
        } catch (e) {
        }
    })
    /*异常参数*/
    it('fileio_test_ftruncate_sync_003', 0, function () {
        try {
            console.log("fileio_test_ftruncate_sync_003 测试开始");
            fileio.ftruncateSync(-1)
            expect(null).assertFail()
            console.log("fileio_test_ftruncate_sync_003 测试结束");
        } catch (e) {
        }
    })

    /*### fsyncSync(fd)

            #### 作用描述

            - 同步将缓冲区数据写回磁盘进行数据同步

            #### 参数说明

            | 参数名称 | 类型   | 必填 | 参数描述               |
            | -------- | ------ | ---- | ---------------------- |
            | fd       | number | 是   | 要同步数据的文件描述符 |*/
    it('fileio_test_fsync_sync_000', 0, function () {
        let fpath = nextFileName('fileio_test_fsync_sync_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("fileio_test_fsync_sync_000 测试开始");
            let fd = fileio.openSync(fpath, 0o2)
            expect(fileio.fsyncSync(fd) !== null).assertTrue()
            expect(fileio.closeSync(fd) !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_fsync_sync_000 测试结束");
        } catch (e) {
            console.log("fileio_test_fsync_sync_000 has failed for " + e)
            expect(null).assertFail()
        }
    })


    it('fileio_test_fsync_sync_001', 0, function () {
        try {
            console.log("fileio_test_fsync_sync_001 测试开始");
            fileio.fsyncSync(1)
            expect(null).assertFail()
            console.log("fileio_test_fsync_sync_001 测试结束");
        } catch (e) {
        }
    })

    it('fileio_test_fsync_sync_002', 0, function () {
        try {
            console.log("fileio_test_fsync_sync_002 测试开始");
            fileio.fsyncSync(-1)
            expect(null).assertFail()
            console.log("fileio_test_fsync_sync_002 测试结束");
        } catch (e) {
        }
    })
    /*### mkdirSync(dpath, mode)

    #### 作用描述

    - 同步创建目录

    #### 参数说明

    | 参数名称 | 类型   | 必填 | 参数描述                |
    | -------- | ------ | ---- | ----------------------- |
    | dpath    | string | 是   | 要创建的目录路径        |
    | mode     | number | 否   | 目录权限，参考chmodSync |*/
    it('fileio_test_mkdir_sync_rmdir_sync_000', 0, function () {
        let dpath = nextFileName('fileio_test_fsync_sync_000') + 'd'

        try {
            console.log("fileio_test_fsync_sync_000 测试开始");
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
            expect(fileio.rmdirSync(dpath) !== null).assertTrue()
            console.log("fileio_test_fsync_sync_000 测试结束");
        } catch (e) {
            console.log("fileio_test_mkdir_sync_rmdir_sync_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_mkdir_sync_rmdir_sync_001', 0, function () {
        let dpath = nextFileName('fileio_test_mkdir_sync_rmdir_sync_001') + 'd'

        try {
            console.log("fileio_test_fsync_sync_001 测试开始");
            expect(fileio.mkdirSync(dpath,0o660) !== null).assertTrue()
            expect(fileio.rmdirSync(dpath) !== null).assertTrue()
            console.log("fileio_test_fsync_sync_001 测试结束");
        } catch (e) {
            console.log("fileio_test_mkdir_sync_rmdir_sync_001 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_mkdir_sync_rmdir_sync_002', 0, function () {
        let dpath = nextFileName('fileio_test_mkdir_sync_rmdir_sync_002') + 'd'

        try {
            console.log("fileio_test_fsync_sync_002 测试开始");
            expect(fileio.mkdirSync(dpath,0o460) !== null).assertTrue()
            expect(fileio.rmdirSync(dpath) !== null).assertTrue()
            console.log("fileio_test_fsync_sync_002 测试结束");
        } catch (e) {
            console.log("fileio_test_mkdir_sync_rmdir_sync_002 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_mkdir_sync_rmdir_sync_003', 0, function () {
        let dpath = nextFileName('fileio_test_mkdir_sync_rmdir_sync_003') + 'd'

        try {
            console.log("fileio_test_fsync_sync_002 测试开始");
            expect(fileio.mkdirSync(dpath,0o260) !== null).assertTrue()
            expect(fileio.rmdirSync(dpath) !== null).assertTrue()
            console.log("fileio_test_fsync_sync_002 测试结束");
        } catch (e) {
            console.log("fileio_test_mkdir_sync_rmdir_sync_003 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_mkdir_sync_rmdir_sync_004', 0, function () {
        try {
            console.log("fileio_test_fsync_sync_004 测试开始");
            expect(fileio.mkdirSync(1) !== null )
            expect(null).assertFail()
            console.log("fileio_test_fsync_sync_004 测试结束");
        } catch (e) {
        }
    })

    it('fileio_test_mkdir_sync_rmdir_sync_005', 0, function () {
        try {
            console.log("fileio_test_fsync_sync_005 测试开始");
            expect(fileio.mkdirSync("/",1) !== null).assertTrue()
            expect(null).assertFail()
            console.log("fileio_test_fsync_sync_005 测试结束");
        } catch (e) {
        }
    })




    /*  ### fstatSync(fd)

    #### 作用描述

    - 同步获取已打开文件的信息

    #### 参数说明

    | 参数名称 | 类型   | 必填 | 参数描述           |
    | -------- | ------ | ---- | ------------------ |
    | fd       | number | 是   | 要修改的文件描述符 |*/
    it('fileio_test_fstat_sync_000', 0, function () {
        let fpath = nextFileName('fileio_test_fstat_sync_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("fileio_test_fstat_sync_000 测试开始");
            let fd = fileio.openSync(fpath,0o2)
            let stat = fileio.fstatSync(fd)
            expect(stat !== null).assertTrue()
            expect(fileio.closeSync(fd) !==null).assertTrue()
            expect(fileio.unlinkSync(fpath) !==null).assertTrue()
            console.log("fileio_test_fstat_sync_000 测试结束");
        } catch (e) {
            console.log("fileio_test_fstat_sync_000 has failed for " + e)
            expect(null).assertFail()
        }
    })
    /*输入错误的文件描述*/
    it('fileio_test_fstat_sync_001', 0, function () {


        try {
            console.log("fileio_test_fstat_sync_001 测试开始");
            expect(fileio.fstatSync(1) !== null).assertTrue()
            expect(null).assertFail()
            console.log("fileio_test_fstat_sync_001 测试结束");
        } catch (e) {

        }
    })

    /*不传参数*/
    it('fileio_test_fstat_sync_002', 0, function () {

        try {
            console.log("fileio_test_fstat_sync_002 测试开始");
            expect(fileio.fstatSync(1) !== null).assertTrue()
            expect(null).assertFail()
            console.log("fileio_test_fstat_sync_002 测试开始");
        } catch (e) {

        }
    })

    /* 调用fstatSync(fd)
        fd：文件夹描述符
*/
    it('fileio_test_fstat_sync_003', 0, function () {
        console.log("---fileio_test_fstat_sync_003 测试开始---")
        let dpath = nextFileName('fileio_test_fstat_sync_003') + 'd'

        try {
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
            console.log("---fileio_test_fstat_sync_003 创建目录 success!")
            let fd = fileio.openSync(dpath)
            expect(fd !== null).assertTrue()
            console.log("---fileio_test_fstat_sync_003 fd："+fd)
            console.log("---fileio_test_fstat_sync_003 打开目录 success!")
            let stat = fileio.fstatSync(fd)
            expect(stat !== null).assertTrue()
            console.log("---fileio_test_fstat_sync_003 获取已打开文件夹的信息 success!")
            expect(fileio.closeSync(fd) !== null).assertTrue()
            console.log("---fileio_test_fstat_sync_003 关闭目录 success!")
            expect(fileio.rmdirSync(dpath) !== null).assertTrue()
            console.log("---fileio_test_fstat_sync_003 删除目录 success!")
            console.log("---fileio_test_fstat_sync_003 is passed!")
        } catch (e) {
            console.log("fileio_test_fstat_sync_003 has failed for " + e)
            expect(null).assertFail()
        }
    })

    /*  ### chownSync(fpath, owner, group)

        #### 作用描述

        - 同步修改给定路径的所有者和组*/
    it('fileio_test_chown_sync_000', 0, function () {
        let fpath = nextFileName('fileio_test_chown_sync_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
        let stat = fileio.Stat.statSync(fpath)
        let UID = stat.uid
        let GID = stat.gid

        try {
            console.log("fileio_test_chown_sync_000 测试开始");
            expect(fileio.chownSync(fpath, UID, GID) !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_chown_sync_000 测试结束");
        } catch (e) {
            console.log("fileio_test_chown_sync_000 has failed for " + e)
            expect(null).assertFail()
        }

    })

    it('fileio_test_chown_sync_001', 0, function () {
        let fpath = nextFileName('fileio_test_chown_sync_001')
        let fpath_1 = nextFileName('fileio_test_chown_sync_001_1')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
        let stat = fileio.Stat.statSync(fpath)
        let UID = stat.uid
        let GID = stat.gid

        try {
            console.log("fileio_test_chown_sync_001 测试开始");
            expect(fileio.chownSync(fpath_1, UID, GID))
            expect(null).assertFail()
        } catch (e) {
            expect(fileio.unlinkSync(fpath) !==null).assertTrue()
            console.log("fileio_test_chown_sync_001 测试结束");
        }
    })

    it('fileio_test_chown_sync_002', 0, function () {
        let fpath = nextFileName('fileio_test_chown_sync_002')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("fileio_test_chown_sync_002 测试开始");
            expect(fileio.chownSync(fpath, 0, 0))
            expect(null).assertFail()
            console.log("fileio_test_chown_sync_002 测试结束");
        } catch (e) {
            expect(fileio.unlinkSync(fpath) !==null).assertTrue()
            console.log("fileio_test_chown_sync_002 测试结束");
        }
    })
    /*      ### fchownSync(fd, owner, group)

        #### 作用描述

         - 同步更改已打开文件的所有者和组

        /*fd：正确文件描述符
          owner：正确的文件所有者的用户ID
          group：正确的组ID*/
    it('fileio_test_fchown_sync_000', 0,  function () {
        let fpath = nextFileName('fileio_test_fchown_sync_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
        let stat = fileio.Stat.statSync(fpath)
        let UID = stat.uid
        let GID = stat.gid

        try {
            console.log("fileio_test_fchown_sync_000 测试开始 " )
            let fd = fileio.openSync(fpath)
            expect(fileio.fchownSync(fd, UID, GID) !== null).assertTrue()
            expect(fileio.closeSync(fd) !==null).assertTrue()
            expect(fileio.unlinkSync(fpath) !==null).assertTrue()
            console.log("fileio_test_fchown_sync_000 测试结束");

        } catch (e) {
            console.log("fileio_test_fchown_sync_000 has failed for " + e)
            expect(null).assertFail()
        }

    })

    /* fd：错误文件描述符
    owner：正确的文件所有者的用户ID
    group：正确的组ID*/
    it('fileio_test_fchown_sync_001', 0, function () {
        let fpath = nextFileName('fileio_test_fchown_sync_001')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
        let stat = fileio.Stat.statSync(fpath)
        let UID = stat.uid
        let GID = stat.gid

        try {
            console.log("fileio_test_fchown_sync_001 测试开始");
            expect(fileio.fchownSync(-1, UID, GID))
            expect(null).assertFail()
            console.log("fileio_test_fchown_sync_001 测试结束");
        } catch (e) {
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_fchown_sync_001 has failed for " + e)
            console.log("fileio_test_fchown_sync_001 测试结束");
        }

    })

    /*fd：正确文件描述符
      owner：错误的文件所有者的用户ID
      group：正确的组ID*/
    it('fileio_test_fchown_sync_002', 0,  function () {
        let fpath = nextFileName('fileio_test_fchown_sync_002')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
        let stat = fileio.Stat.statSync(fpath)
        let UID = stat.uid
        let GID = stat.gid

        try {
            console.log("fileio_test_fchown_sync_002 测试开始");
            let fd = fileio.openSync(fpath)
            fileio.fchownSync(fd, 0, GID)
            expect(null).assertFail()

        } catch (e) {
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_fchown_sync_002 has failed for " + e)
            console.log("fileio_test_fchown_sync_002 测试结束");

        }
    })

    /*  fd：正确文件描述符
          owner：正确的文件所有者的用户ID
          group：错误的组ID*/
    it('fileio_test_fchown_sync_003', 0,  function () {
        let fpath = nextFileName('fileio_test_fchown_sync_003')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
        let stat = fileio.Stat.statSync(fpath)
        let UID = stat.uid
        let GID = stat.gid

        try {
            console.log("fileio_test_fchown_sync_003 测试开始");
            let fd = fileio.openSync(fpath, 0o2)
            expect(fileio.fchownSync(fd, UID, 0))
            expect(null).assertFail()

        } catch (e) {
            expect(fileio.unlinkSync(fpath) !==null).assertTrue()
            console.log("fileio_test_fchown_sync_003 测试结束");

        }

    })

    /*不传fd*/
    it('fileio_test_fchown_sync_004', 0,  function () {
        let fpath = nextFileName('fileio_test_fchown_sync_004')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
        let stat = fileio.Stat.statSync(fpath)
        let UID = stat.uid
        let GID = stat.gid

        try {
            console.log("fileio_test_fchown_sync_004 测试开始");
            expect(fileio.fchownSync(1,UID, GID))
            expect(null).assertFail()

        } catch (e) {
            expect(fileio.unlinkSync(fpath) !==null).assertTrue()
            console.log("fileio_test_fchown_sync_004 has failed for " + e)
            console.log("fileio_test_fchown_sync_004 测试结束");
        }

    })

    /*不传UID*/
    it('fileio_test_fchown_sync_005', 0, function () {
        let fpath = nextFileName('fileio_test_fchown_sync_005')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
        let stat = fileio.Stat.statSync(fpath)
        let UID = null
        let GID = stat.gid

        try {
            console.log("fileio_test_fchown_sync_005 测试开始");
            let fd = fileio.openSync(fpath)
            expect(fileio.fchownSync(fd,UID,GID))
            expect(null).assertFail()

        } catch (e) {
            expect(fileio.unlinkSync(fpath) !==null).assertTrue()
            console.log("fileio_test_fchown_sync_005 测试结束" + e);

        }

    })

    /*不传UID*/
    it('fileio_test_fchown_sync_006', 0, function () {
        let fpath = nextFileName('fileio_test_fchown_sync_006')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
        let stat = fileio.Stat.statSync(fpath)
        let UID = stat.uid
        let GID = null

        try {
            console.log("fileio_test_fchown_sync_006 测试开始");
            let fd = fileio.openSync(fpath)
            expect(fileio.fchownSync(fd,UID,GID))
            expect(null).assertFail()

        } catch (e) {
            expect(fileio.unlinkSync(fpath) !==null).assertTrue()
            console.log("fileio_test_fchown_sync_006 测试结束" + e);
        }
    })

    /*不传GID*/
    it('fileio_test_fchown_sync_007', 0, async function (done) {
        let fpath = nextFileName('fileio_test_fchown_sync_007')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            console.log("fileio_test_fchown_sync_007 测试开始");
            let fd = fileio.openSync(fpath, 0o2)
            expect(fileio.fchownSync(fd,1,1))
            expect(null).assertFail()
            expect(fileio.closeSync(fd) !==null).assertTrue()
            expect(fileio.unlinkSync(fpath) !==null).assertTrue()
            console.log("fileio_test_fchown_sync_007 测试结束");


        } catch (e) {

        }
        done()
    })
    it('fileio_test_prop_write_open_read_4k_sync', 0, function () {
        console.log("---fileio_test_prop_write_open_read_4k_sync 测试开始---")
        let fpath = nextFileName('fileio_test_prop_write_open_read_4k_sync')

        try {
            let fd = fileio.openSync(fpath, 0o102, 0o777)
            expect(fd !== null).assertTrue()
            expect(fileio.writeSync(fd,randomString(4096)) !== null).assertTrue()
            expect(fileio.closeSync(fd) !== null).assertTrue()

            let fd1 = fileio.openSync(fpath, 0o2)
            let rlen = fileio.readSync(fd1, new ArrayBuffer(4096))
            expect(rlen == 4096).assertTrue()
            console.log("文本长度为：" + rlen)
            expect(fileio.closeSync(fd1) !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_prop_write_open_read_4k_sync is passed!")
        } catch (e) {
            console.log("fileio_test_prop_write_open_read_4k_sync has failed for " + e)
            expect(null).assertFail()
        }
    })
    it('fileio_test_prop_copyFile_4k_sync', 0, function () {
        console.log("---fileio_test_prop_copyFile_4k_sync 测试开始---")
        let fpath = nextFileName('fileio_test_prop_copyFile_4k_sync')
        let fpath1 = differentFileName('fileio_test_prop_copyFile_4k_sync')

        try {
            let fd = fileio.openSync(fpath, 0o102, 0o777)
            expect(fd !== null).assertTrue()
            expect(fileio.writeSync(fd,randomString(4096)) !== null).assertTrue()
            expect(fileio.closeSync(fd) !== null).assertTrue()
            expect(fileio.copyFileSync(fpath, fpath1) !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            expect(fileio.unlinkSync(fpath1) !== null).assertTrue()
            console.log("---fileio_test_prop_copyFile_4k_sync is passed!")
        } catch (e) {
            console.log("fileio_test_prop_copyFile_4k_sync has failed for " + e)
            expect(null).assertFail()
        }
    })
})