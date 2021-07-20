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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'
import { FILE_CONTENT, prepareFile, nextFileName, randomString } from './Common'

describe('fileIOTestDir', function () {
    console.log("---fileIOTestDir接口测试---")

    //传入正确的目录参数打开目录
    it('fileio_test_dir_open_sync_000', 0, function () {
        console.log("---fileio_test_dir_open_sync_000测试开始---")
        let dpath = nextFileName('fileio_test_dir_open_sync_000') + 'd'

        try {
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
            console.log("创建目录成功")
            let dd = fileio.Dir.opendirSync(dpath)
            expect(dd !== null).assertTrue()
            console.log("打开目录成功")
            expect(dd.closeSync() == null).assertTrue()
            console.log("关闭目录成功")
            expect(fileio.rmdirSync(dpath) !== null).assertTrue()
            console.log("删除目录成功")
            console.log("fileio_test_dir_open_sync_000 is passed!")
        } catch (e) {
            console.log("fileio_test_dir_open_sync_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //不传参数打开目录
    it('fileio_test_dir_open_sync_001', 0, function () {
        console.log("---fileio_test_dir_open_sync__001测试开始---")
        try {
            fileio.Dir.opendirSync()
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_dir_open_sync_001 has failed for " + e)
        }
    })
    //传文件不存在的参数打开目录
    it('fileio_test_dir_open_sync_002', 0, function () {
        console.log("---fileio_test_dir_open_sync__002测试开始---")
        let dpath = nextFileName('fileio_test_dir_open_sync_003') + 'd'

        try {
            fileio.Dir.opendirSync(dpath)
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_dir_open_sync_002 has failed for " + e)
        }
    })

    //传4096字节的路径打开目录
    it('fileio_test_dir_open_sync_003', 0, function () {
        console.log("---fileio_test_dir_open_sync_003 测试开始---")
        let dpath = nextFileName("111111111111")
        fileio.mkdirSync(dpath)
        try{
            for(let i = 0; i < 16; i++){
                console.log("次数" + i)
                dpath = dpath + "/f" + randomString(248)
                fileio.mkdirSync(dpath)
            }
            expect(null).assertFail()
        }catch(e) {
            console.log("fileio_test_dir_open_sync_003 has failed for " + e)
        }
    })

    //文件名过长
    it('fileio_test_dir_open_sync_004',0,function(){
        console.log("---fileio_test_dir_open_sync_003 测试开始---")
        let dpath = nextFileName(randomString(256))
        try{
            fileio.mkdirSync(dpath)
            expect(null).assertFail()
        }catch(e){
            console.log("fileio_test_dir_open_sync_003 has failed for " + e)
        }
    })

    //路径过深
    it('fileio_test_dir_open_sync_005',0,function(){
        console.log("---fileio_test_dir_open_sync_006 测试开始---")
        let dpath = nextFileName("222")
        fileio.mkdirSync(dpath)
        try{
            for(let i = 0; i < 1024; i++){
                console.log("次数" + i)
                dpath = dpath + "/" + i
                fileio.mkdirSync(dpath)
            }
            expect(null).assertFail()
        }catch(e){
            console.log("fileio_test_dir_open_sync_006 has failed for " + e)
        }
    })

    //特殊字符?*:\"<>\\/|
    it('fileio_test_dir_open_sync_006',0,function(){
        console.log("---fileio_test_dir_open_sync_004 测试开始---")
        let dpath = nextFileName("?*:<>/|")
        try{
            fileio.mkdirSync(dpath)
            console.log("过了")
            expect(null).assertFail()
        }catch(e){
            console.log("fileio_test_dir_open_sync_004 has failed for " + e)
        }
    })

    //目录下有1个文件,验证读取目录下所有文件
    it('fileio_test_dir_read_sync_000', 0, function () {
        console.log("---fileio_test_dir_read_sync_000测试开始---")
        let dpath = nextFileName('fileio_test_dir_read_sync_000') + 'd'
        let fpath = dpath + '/f0'

        try {
            expect(typeof(fileio.mkdirSync(dpath)) == "undefined").assertTrue()
            expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
            let dd = fileio.Dir.opendirSync(dpath)
            expect(dd !== null).assertTrue()
            expect(dd.readSync() !== null).assertTrue()
            expect(dd.closeSync() == null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            expect(fileio.rmdirSync(dpath) !== null).assertTrue()
            console.log("fileio_test_dir_read_sync_000 is passed!")
        } catch (e) {
            console.log("fileio_test_dir_read_sync_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //目录下有多个文件,验证读取目录下所有文件
    it('fileio_test_dir_read_sync_001', 0, function () {
        console.log("---fileio_test_dir_read_sync_001测试开始---")
        let dpath = nextFileName('fileio_test_dir_read_sync_001') + 'd'
        let fpathArray = new Array(dpath + '/f1', dpath + '/f2', dpath + '/d3')

        try {
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
            for(let i = 0; i < 3; i++){
                if(i == 2){
                    expect(fileio.mkdirSync(fpathArray[i]) !== null).assertTrue()
                }else{
                    expect(prepareFile(fpathArray[i], FILE_CONTENT)).assertTrue()
                }
            }
            let dd = fileio.Dir.opendirSync(dpath)
            expect(dd !== null).assertTrue()
            for(let i = 0; i < 3; i++){
                if(i == 2){
                    let bool = typeof(dd.readSync())
                    expect(bool == "object").assertTrue()
                    console.log("---bool=" + bool)
                }else{
                    expect(dd.readSync() !== null).assertTrue()
                }
            }
            expect(dd.closeSync() == null).assertTrue()
            for(let i = 0; i < 3; i++){
                if(i == 2){
                    expect(fileio.rmdirSync(fpathArray[i]) !== null).assertTrue()
                }else{
                    expect(fileio.unlinkSync(fpathArray[i]) !== null).assertTrue()
                }
            }
            expect(fileio.rmdirSync(dpath) !== null).assertTrue()
            console.log("fileio_test_dir_read_sync_001 is passed!")
        } catch (e) {
            console.log("fileio_test_dir_read_sync_001 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //目录下有多个文件,验证读取目录下所有文件
    it('fileio_test_dir_read_sync_002', 0, function () {
        console.log("---fileio_test_dir_read_sync_002测试开始---")
        let dpath = nextFileName('fileio_test_dir_read_sync_002') + 'd'
        let fpathArray = new Array(dpath + '/f1', dpath + '/f2', dpath + '/d3')

        try {
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
            for(let i = 0; i < 3; i++){
                if(i == 2){
                    expect(fileio.mkdirSync(fpathArray[i]) !== null).assertTrue()
                }else{
                    expect(prepareFile(fpathArray[i], FILE_CONTENT)).assertTrue()
                }
            }
            var dd = fileio.Dir.opendirSync(dpath)
            expect(dd !== null).assertTrue()
            for(let i = 0; i < 3; i++){
                expect(dd.readSync() !== null).assertTrue()
            }
            expect(dd.readSync() == null).assertTrue()
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_stream_write_sync_009 has failed for " + e)
            expect(dd.closeSync() == null).assertTrue()
            for(let i = 0; i < 3; i++){
                if(i == 2){
                    expect(fileio.rmdirSync(fpathArray[i]) !== null).assertTrue()
                }else{
                    expect(fileio.unlinkSync(fpathArray[i]) !== null).assertTrue()
                }
            }
            expect(fileio.rmdirSync(dpath) !== null).assertTrue()
        }
    })

    //目录下无文件,验证读取目录下所有文件
    it('fileio_test_dir_read_sync_003', 0, function () {
        console.log("---fileio_test_dir_read_sync_003测试开始---")
        let dpath = nextFileName('fileio_test_dir_read_sync_003') + 'd'
        let dd

        try {
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
            dd = fileio.Dir.opendirSync(dpath)
            expect(dd !== null).assertTrue()
            expect(dd.readSync() == null).assertTrue()
            expect(null).assertFail()
        } catch (e) {
            expect(dd.closeSync() == null).assertTrue()
            expect(fileio.rmdirSync(dpath) !== null).assertTrue()
            console.log("fileio_test_dir_read_sync_003 has failed for " + e)
        }
    })

    //输入异常参数,验证读取目录下所有文件
    it('fileio_test_dir_read_sync_004', 0, function () {
        console.log("---fileio_test_dir_read_sync_004测试开始---")
        let dpath = nextFileName('fileio_test_dir_read_sync_004') + 'd'
        let fpath = dpath + '/f1'
        let dd

        try {
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
            expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
            dd = fileio.Dir.opendirSync(dpath)
            expect(dd !== null).assertTrue()
            expect(dd.readSync(-1) == null).assertTrue()
            expect(null).assertFail()
        } catch (e) {
            expect(dd.closeSync() == null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            expect(fileio.rmdirSync(dpath) !== null).assertTrue()
            console.log("fileio_test_dir_read_sync_004 has failed for " + e)
        }
    })

    //目录下有10000+个文件,验证读取目录下所有文件
    it('fileio_test_dir_read_sync_005', 0, function () {
        console.log("---fileio_test_dir_read_sync_005 测试开始---")
        let dpath = nextFileName('fileio_test_dir_read_sync_005') + 'd'
        let fpath = dpath + '/f'

        try {
            expect(typeof(fileio.mkdirSync(dpath)) == "undefined").assertTrue()
            for(let i = 0; i < 10001; i++){
                expect(prepareFile(fpath + i, "test_text")).assertTrue()
                console.log("文件" + (i+1) + "创建成功")
            }
            let dd = fileio.Dir.opendirSync(dpath)
            expect(dd !== null).assertTrue()
            expect(dd.readSync() !== null).assertTrue()
            expect(dd.closeSync() == null).assertTrue()
            for(let i = 0; i < 10001; i++){
                fileio.unlinkSync(fpath + i)
            }
            expect(fileio.rmdirSync(dpath) !== null).assertTrue()
            console.log("fileio_test_dir_read_sync_005 is passed!")
        } catch (e) {
            console.log("fileio_test_dir_read_sync_005 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //关闭目录功能,关闭目录功能
    it('fileio_test_dir_close_sync_000', 0, function () {
        console.log("---fileio_test_dir_close_sync_000测试开始---")
        let dpath = nextFileName('fileio_test_dir_close_sync_000') + 'd'

        try {
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
            let dd = fileio.Dir.opendirSync(dpath)
            expect(dd !== null).assertTrue()
            expect(dd.closeSync() == null).assertTrue()
            expect(fileio.rmdirSync(dpath) !== null).assertTrue()
            console.log("fileio_test_dir_close_sync_000 is passed!")
        } catch (e) {
            console.log("fileio_test_dir_close_sync_000 has failed for " + e)
            expect(null).assertFail()
        }
    })
})