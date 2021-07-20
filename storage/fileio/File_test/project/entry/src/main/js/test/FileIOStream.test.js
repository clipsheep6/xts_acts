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

import file from '@system.file'

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'
import { FILE_CONTENT, prepareFile, fileToReadOnly, fileToWriteOnly, fileToReadAndWrite, nextFileName, randomString } from './Common'

describe('fileIOTestStream', function () {
    console.log("---fileIOTestStream接口测试---")

    //同步获取文件流_文本方式_mode=r(文件存在)
    it('fileio_test_stream_create_stream_sync_000', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_000测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_000')
        expect(prepareFile(fpath, "")).assertTrue()
        //改为只读文件
        expect(fileToReadOnly(fpath)).assertTrue()

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "r")
            expect(ss !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stream_create_stream_sync_000 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //同步获取文件流_文本方式_mode=r(文件不存在)
    it('fileio_test_stream_create_stream_sync_001', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_001测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_001')

        try {
            expect(fileio.Stream.createStreamSync(fpath, "r") == null).assertTrue()
            console.log("------------------")
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_001 has failed for " + e)
        }
    })
    //同步获取文件流_文本方式_mode=w(文件存在)
    it('fileio_test_stream_create_stream_sync_002', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_002测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_002')
        expect(prepareFile(fpath, "")).assertTrue()
        expect(fileToWriteOnly(fpath)).assertTrue()

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "w")
            expect(ss !== null).assertTrue()
            let wlen = ss.writeSync(FILE_CONTENT)
            expect(wlen !== null).assertTrue()
            console.log("---wlen=" + wlen)
            expect(ss.closeSync() !== null).assertTrue()

            expect(fileToReadOnly(fpath)).assertTrue()
            ss = fileio.Stream.createStreamSync(fpath, "r")
            let rlen = ss.readSync(new ArrayBuffer(4096))
            expect(rlen == FILE_CONTENT.length).assertTrue()
            console.log("读取长度为：" + rlen)
            console.log("文本长度为：" + FILE_CONTENT.length)
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stream_create_stream_sync_002 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_002 has failed for " + e)
            expect(null).assertFail()
        }
    })
    //同步获取文件流_文本方式_mode=w(文件不存在)
    it('fileio_test_stream_create_stream_sync_003', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_003测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_003')

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "w")
            expect(ss !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stream_create_stream_sync_003 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_003 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //同步获取文件流_文本方式_mode=a(文件存在)
    it('fileio_test_stream_create_stream_sync_004', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_004 测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_004')
        expect(prepareFile(fpath, "a")).assertTrue()
        expect(fileToWriteOnly(fpath)).assertTrue()

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "a")
            expect(ss !== null).assertTrue()
            let wlen = ss.writeSync(FILE_CONTENT)
            expect(wlen !== null).assertTrue()
            console.log("---wlen=" + wlen)
            expect(ss.closeSync() !== null).assertTrue()

            expect(fileToReadOnly(fpath)).assertTrue()
            ss = fileio.Stream.createStreamSync(fpath, "r")
            let rlen = ss.readSync(new ArrayBuffer(4096))
            expect(rlen == FILE_CONTENT.length + 1).assertTrue()
            console.log("文本长度为：" + rlen)
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stream_create_stream_sync_004 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_004 has failed for " + e)
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            expect(null).assertFail()
        }
    })

    //同步获取文件流_文本方式_mode=a(文件不存在)
    it('fileio_test_stream_create_stream_sync_005', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_005测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_005')

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "a")
            expect(ss !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stream_create_stream_sync_005 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_005 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //同步获取文件流_文本方式_mode=r+(文件存在)
    it('fileio_test_stream_create_stream_sync_006', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_006测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_006')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "r+")
            expect(ss !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stream_create_stream_sync_006 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_006 has failed for " + e)
            expect(null).assertFail()
        }
    })
    //同步获取文件流_文本方式_mode=r+(文件不存在)
    it('fileio_test_stream_create_stream_sync_007', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_007测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_007')

        try {
            fileio.Stream.createStreamSync(fpath, "r+")
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_007 has failed for " + e)
        }
    })
    //同步获取文件流_文本方式_mode=w+(文件存在)
    it('fileio_test_stream_create_stream_sync_008', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_008测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_008')
        expect(prepareFile(fpath, "")).assertTrue()

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "w+")
            expect(ss !== null).assertTrue()
            let wlen = ss.writeSync(FILE_CONTENT)
            expect(wlen !== null).assertTrue()
            console.log("---wlen=" + wlen)
            expect(ss.closeSync() !== null).assertTrue()

            expect(fileToReadOnly(fpath)).assertTrue()
            ss = fileio.Stream.createStreamSync(fpath, "r")
            let rlen = ss.readSync(new ArrayBuffer(4096))
            expect(rlen == FILE_CONTENT.length).assertTrue()
            console.log("文本长度为：" + rlen)
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stream_create_stream_sync_008 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_008 has failed for " + e)
            expect(null).assertFail()
        }
    })
    //同步获取文件流_文本方式_mode=w+(文件不存在)
    it('fileio_test_stream_create_stream_sync_009', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_009测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_009')

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "w+")
            expect(ss !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stream_create_stream_sync_009 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_009 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //同步获取文件流_文本方式_mode=a+(文件存在)
    it('fileio_test_stream_create_stream_sync_010', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_010测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_010')
        expect(prepareFile(fpath, "a")).assertTrue()

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "a+")
            expect(ss !== null).assertTrue()
            let wlen = ss.writeSync(FILE_CONTENT)
            expect(wlen !== null).assertTrue()
            console.log("---wlen=" + wlen)
            expect(ss.closeSync() !== null).assertTrue()

            expect(fileToReadOnly(fpath)).assertTrue()
            ss = fileio.Stream.createStreamSync(fpath, "r")
            let rlen = ss.readSync(new ArrayBuffer(4096))
            expect(rlen == FILE_CONTENT.length + 1).assertTrue()
            console.log("文本长度为：" + rlen)
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stream_create_stream_sync_010 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_010 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //同步获取文件流_文本方式_mode=a+(文件不存在)
    it('fileio_test_stream_create_stream_sync_011', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_011测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_011')

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "a+")
            expect(ss !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stream_create_stream_sync_000 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_011 has failed for " + e)
            expect(null).assertFail()
        }
    })
    //同步获取文件流_二进制形式_mode=rb(文件存在)
    it('fileio_test_stream_create_stream_sync_012', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_012测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_012')
        expect(prepareFile(fpath, "")).assertTrue()
        expect(fileToReadOnly(fpath)).assertTrue()

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "rb")
            expect(ss !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stream_create_stream_sync_012 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_012 has failed for " + e)
            expect(null).assertFail()
        }
    })
    //同步获取文件流_二进制形式_mode=rb(文件不存在)
    it('fileio_test_stream_create_stream_sync_013', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_013测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_013')

        try {
            fileio.Stream.createStreamSync(fpath, "rb")
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_013 has failed for " + e)
        }
    })
    //同步获取文件流_二进制形式_mode=wb(文件存在)
    it('fileio_test_stream_create_stream_sync_014', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_014测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_014')
        expect(prepareFile(fpath, "")).assertTrue()
        expect(fileToWriteOnly(fpath)).assertTrue()

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "wb")
            expect(ss !== null).assertTrue()
            let wlen = ss.writeSync(FILE_CONTENT)
            expect(wlen !== null).assertTrue()
            console.log("---wlen=" + wlen)
            expect(ss.closeSync() !== null).assertTrue()

            expect(fileToReadOnly(fpath)).assertTrue()
            ss = fileio.Stream.createStreamSync(fpath, "r")
            let rlen = ss.readSync(new ArrayBuffer(4096))
            expect(rlen == FILE_CONTENT.length).assertTrue()
            console.log("文本长度为：" + rlen)
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stream_create_stream_sync_014 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_014 has failed for " + e)
            expect(null).assertFail()
        }
    })
    //同步获取文件流_二进制形式_mode=wb(文件不存在)
    it('fileio_test_stream_create_stream_sync_015', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_015测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_015')

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "wb")
            expect(ss !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stream_create_stream_sync_015 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_015 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //同步获取文件流_文本方式_mode=ab(文件存在)
    it('fileio_test_stream_create_stream_sync_016', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_016测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_016')
        expect(prepareFile(fpath, "a")).assertTrue()
        expect(fileToWriteOnly(fpath)).assertTrue()

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "ab")
            expect(ss !== null).assertTrue()
            let wlen = ss.writeSync(FILE_CONTENT)
            expect(wlen !== null).assertTrue()
            console.log("---wlen=" + wlen)
            expect(ss.closeSync() !== null).assertTrue()

            expect(fileToReadOnly(fpath)).assertTrue()
            ss = fileio.Stream.createStreamSync(fpath, "r")
            let rlen = ss.readSync(new ArrayBuffer(4096))
            expect(rlen == FILE_CONTENT.length + 1).assertTrue()
            console.log("文本长度为：" + rlen)
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stream_create_stream_sync_016 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_016 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //同步获取文件流_二进制形式_mode=ab(文件不存在)
    it('fileio_test_stream_create_stream_sync_017', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_017测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_017')

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "ab")
            expect(ss !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stream_create_stream_sync_017 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_017 has failed for " + e)
            expect(null).assertFail()
        }
    })
    //同步获取文件流_二进制形式_mode=rb+(文件存在)
    it('fileio_test_stream_create_stream_sync_018', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_018测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_018')
        expect(prepareFile(fpath, "")).assertTrue()

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "rb+")
            expect(ss !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stream_create_stream_sync_018 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_018 has failed for " + e)
            expect(null).assertFail()
        }
    })
    //同步获取文件流_二进制形式_mode=rb+(文件不存在)
    it('fileio_test_stream_create_stream_sync_019', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_019测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_019')

        try {
            fileio.Stream.createStreamSync(fpath, "rb+")
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_019 has failed for " + e)
        }
    })
    //同步获取文件流_二进制形式_mode=wb+(文件存在)
    //同步获取文件流_文本方式_mode=w+(文件存在)
    it('fileio_test_stream_create_stream_sync_020', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_020测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_020')
        expect(prepareFile(fpath, "")).assertTrue()

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "wb+")
            expect(ss !== null).assertTrue()
            let wlen = ss.writeSync(FILE_CONTENT)
            expect(wlen !== null).assertTrue()
            console.log("---wlen=" + wlen)
            expect(ss.closeSync() !== null).assertTrue()

            expect(fileToReadOnly(fpath)).assertTrue()
            ss = fileio.Stream.createStreamSync(fpath, "r")
            let rlen = ss.readSync(new ArrayBuffer(4096))
            expect(rlen == FILE_CONTENT.length).assertTrue()
            console.log("文本长度为：" + rlen)
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stream_create_stream_sync_020 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_020 has failed for " + e)
            expect(null).assertFail()
        }
    })
    //同步获取文件流_二进制形式_mode=wb+(文件不存在)
    it('fileio_test_stream_create_stream_sync_021', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_021测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_021')

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "wb+")
            expect(ss !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stream_create_stream_sync_021 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_021 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //同步获取文件流_文本方式_mode=ab+(文件存在)
    it('fileio_test_stream_create_stream_sync_022', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_022测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_022')
        expect(prepareFile(fpath, "a")).assertTrue()

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "ab+")
            expect(ss !== null).assertTrue()
            let wlen = ss.writeSync(FILE_CONTENT)
            expect(wlen !== null).assertTrue()
            console.log("---wlen=" + wlen)
            expect(ss.closeSync() !== null).assertTrue()

            expect(fileToReadOnly(fpath)).assertTrue()
            ss = fileio.Stream.createStreamSync(fpath, "r")
            let rlen = ss.readSync(new ArrayBuffer(4096))
            expect(rlen == FILE_CONTENT.length + 1).assertTrue()
            console.log("文本长度为：" + rlen)
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stream_create_stream_sync_022 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_022 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //同步获取文件流_二进制形式_mode=ab+(文件不存在)
    it('fileio_test_stream_create_stream_sync_023', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_023测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_023')

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "ab+")
            expect(ss !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stream_create_stream_sync_023 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_023 has failed for " + e)
            expect(null).assertFail()
        }
    })
    //非法传参(fpatch)
    it('fileio_test_stream_create_stream_sync_024', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_024测试开始---")
        try {
            fileio.Stream.createStreamSync("", "r")
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_024 is passed!" + e)
        }
    })
    //非法传参(mode)
    it('fileio_test_stream_create_stream_sync_025', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_025测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_025')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            fileio.Stream.createStreamSync(fpath, "")
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_025 is passed!" + e)
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
        }
    })
    //传4096字节的路径打开文件
    it('fileio_test_stream_create_stream_sync_026', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_026 测试开始---")
        let dpath = nextFileName("111111111111")
        fileio.mkdirSync(dpath)
        try{
            for(let i = 0; i < 16; i++){
                if(i == 15){
                    let fpath = dpath + "/f" + randomString(248)
                    fileio.Stream.createStreamSync(fpath, "w+")
                    console.log((i+1) + "级子文件创建成功")
                }else{
                    dpath = dpath + "/d" + randomString(248)
                    fileio.mkdirSync(dpath)
                    console.log((i+1) + "级子目录创建成功")
                }
            }
            expect(null).assertFail()
        }catch(e) {
            console.log("fileio_test_stream_create_stream_sync_026 has failed for " + e)
        }
    })

    //文件名过长
    it('fileio_test_stream_create_stream_sync_027',0,function(){
        console.log("---fileio_test_stream_create_stream_sync_027 测试开始---")
        let fpath = nextFileName(randomString(256))
        try{
            fileio.Stream.createStreamSync(fpath, "w+")
            expect(null).assertFail()
        }catch(e){
            console.log("fileio_test_stream_create_stream_sync_027 has failed for " + e)
        }
    })

    //路径过深
    it('fileio_test_stream_create_stream_sync_028',0,function(){
        console.log("---fileio_test_stream_create_stream_sync_028 测试开始---")
        let dpath = nextFileName("222")
        fileio.mkdirSync(dpath)
        try{
            for(let i = 0; i < 113; i++){
                if(i == 112){
                    let fpath = dpath + "/f" + i
                    fileio.Stream.createStreamSync(fpath, "w+")
                    console.log((i+1) + "级子文件创建成功")
                }else{
                    dpath = dpath + "/" + i
                    fileio.mkdirSync(dpath)
                    console.log((i+1) + "级子目录创建成功")
                }
            }
            expect(null).assertFail()
        }catch(e){
            console.log("fileio_test_stream_create_stream_sync_028 has failed for " + e)
        }
    })

    //特殊字符?*:\"<>\\/|
    it('fileio_test_stream_create_stream_sync_029',0,function(){
        console.log("---fileio_test_open_sync_010 测试开始---")
        let fpath = nextFileName("?*:<>/|")
        try{
            fileio.Stream.createStreamSync(fpath, "w+")
            console.log("过了")
            expect(null).assertFail()
        }catch(e){
            console.log("fileio_test_stream_create_stream_sync_029 has failed for " + e)
        }
    })
    //同步将文件描述词转为文件流_文本方式_mode=r(文件存在)
    it('fileio_test_stream_fdopen_stream_sync_000', 0, function () {
        console.log("---fileio_test_stream_fdopen_stream_sync_000测试开始---")
        let fpath = nextFileName('fileio_test_stream_fdopen_stream_sync_000')
        expect(prepareFile(fpath, "")).assertTrue()
        expect(fileToReadOnly(fpath)).assertTrue()

        try {
            let fd = fileio.openSync(fpath, 0o0)
            let ss = fileio.Stream.fdopenStreamSync(fd, "r")
            expect(ss !== null).assertTrue()
            expect(fileio.closeSync(fd) !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stream_fdopen_stream_sync_000 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_fdopen_stream_sync_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //同步将文件描述词转为文件流_文本方式_mode=r(文件不存在)
    it('fileio_test_stream_fdopen_stream_sync_001', 0, function () {
        console.log("---fileio_test_stream_fdopen_stream_sync_001测试开始---")
        try {
            expect(fileio.Stream.fdopenStreamSync(-1, "r") == null).assertTrue()
            console.log("--------------------")
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_stream_fdopen_stream_sync_001 has failed for " + e)
        }
    })

    //同步将文件描述词转为文件流_文本方式_mode=w(文件存在)
    it('fileio_test_stream_fdopen_stream_sync_002', 0, function () {
        console.log("---fileio_test_stream_fdopen_stream_sync_002测试开始---")
        let fpath = nextFileName('fileio_test_stream_fdopen_stream_sync_002')
        let fd
        expect(prepareFile(fpath, "")).assertTrue()
        expect(fileToWriteOnly(fpath)).assertTrue()

        try {
            fd = fileio.openSync(fpath, 0o001)
            expect(fd !== null).assertTrue()
            //console.log("打开只写文件成功  fd=" + fd)
            let ss = fileio.Stream.fdopenStreamSync(fd, "w")
            expect(ss !== null).assertTrue()
            console.log("创建流成功")
            let wlen = ss.writeSync(FILE_CONTENT)
            expect(wlen !== null).assertTrue()
            console.log("写文件成功 wlen=" + wlen)
            expect(ss.closeSync() !== null).assertTrue()
            console.log("关闭流成功")

            expect(fileToReadOnly(fpath)).assertTrue()
            ss = fileio.Stream.createStreamSync(fpath, "r")
            let rlen = ss.readSync(new ArrayBuffer(4096))
            expect(rlen == FILE_CONTENT.length).assertTrue()
            console.log("文本长度为：" + rlen)
            expect(fileio.closeSync(fd) !== null).assertTrue()
            console.log("关闭文件描述符成功 fd=" + fd)
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stream_fdopen_stream_sync_002 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_fdopen_stream_sync_002 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //同步将文件描述词转为文件流_文本方式_mode=w(文件不存在)
    it('fileio_test_stream_fdopen_stream_sync_003', 0, function () {
        console.log("---fileio_test_stream_fdopen_stream_sync_003测试开始---")
        let fpath = nextFileName('fileio_test_stream_fdopen_stream_sync_003')

        try {
            let fd = fileio.openSync(fpath, 0o101, 0o222)
            //console.log("---fd = " + fd)
            let ss = fileio.Stream.fdopenStreamSync(fd, "w")
            expect(ss !== null).assertTrue()
            expect(fileio.closeSync(fd) !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stream_fdopen_stream_sync_003 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_fdopen_stream_sync_003 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //同步将文件描述词转为文件流_文本方式_mode=a(文件存在)
    it('fileio_test_stream_create_stream_sync_004', 0, function () {
        console.log("---fileio_test_stream_fdopen_stream_sync_004测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_004')
        expect(prepareFile(fpath, "1")).assertTrue()
        expect(fileToWriteOnly(fpath)).assertTrue()

        try {
            let fd = fileio.openSync(fpath, 0o2001)
            expect(fd !== null).assertTrue()
            let ss = fileio.Stream.fdopenStreamSync(fd, "a")
            expect(ss !== null).assertTrue()
            let wlen = ss.writeSync(FILE_CONTENT)
            expect(wlen !== null).assertTrue()
            console.log("---wlen=" + wlen)
            expect(ss.closeSync() !== null).assertTrue()

            expect(fileToReadOnly(fpath)).assertTrue()
            ss = fileio.Stream.createStreamSync(fpath, "r")
            let rlen = ss.readSync(new ArrayBuffer(4096))
            expect(rlen == FILE_CONTENT.length + 1).assertTrue()
            console.log("文本长度为：" + rlen)
            expect(fileio.closeSync(fd) !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stream_fdopen_stream_sync_004 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_004 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //同步将文件描述词转为文件流_文本方式_mode=a(文件不存在)
    it('fileio_test_stream_fdopen_stream_sync_005', 0, function () {
        console.log("---fileio_test_stream_fdopen_stream_sync_005测试开始---")
        let fpath = nextFileName('fileio_test_stream_fdopen_stream_sync_005')

        try {
            let fd = fileio.openSync(fpath, 0o101, 0o222)
            let ss = fileio.Stream.fdopenStreamSync(fd, "a")
            expect(ss !== null).assertTrue()
            expect(fileio.closeSync(fd) !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stream_fdopen_stream_sync_005 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_fdopen_stream_sync_005 has failed for " + e)
            expect(null).assertFail()
        }
    })
    //同步将文件描述词转为文件流_文本方式_mode=r+(文件存在)
    it('fileio_test_stream_fdopen_stream_sync_006', 0, function () {
        console.log("---fileio_test_stream_fdopen_stream_sync_006测试开始---")
        let fpath = nextFileName('fileio_test_stream_fdopen_stream_sync_006')
        expect(prepareFile(fpath, "")).assertTrue()

        try {
            let fd = fileio.openSync(fpath, 0o2)
            let ss = fileio.Stream.fdopenStreamSync(fd, "r+")
            expect(ss !== null).assertTrue()
            expect(fileio.closeSync(fd) !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stream_fdopen_stream_sync_006 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_fdopen_stream_sync_006 has failed for " + e)
            expect(null).assertFail()
        }
    })
    //同步将文件描述词转为文件流_文本方式_mode=r+(文件不存在)
    it('fileio_test_stream_fdopen_stream_sync_007', 0, function () {
        console.log("---fileio_test_stream_fdopen_stream_sync_007 测试开始---")
        try {
            fileio.Stream.fdopenStreamSync(-1, "r+")
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_stream_fdopen_stream_sync_007 has failed for " + e)
        }
    })
    //同步将文件描述词转为文件流_文本方式_mode=w+(文件存在)
    it('fileio_test_stream_fdopen_stream_sync_008', 0, function () {
        console.log("---fileio_test_stream_fdopen_stream_sync_008 测试开始---")
        let fpath = nextFileName('fileio_test_stream_fdopen_stream_sync_008')
        expect(prepareFile(fpath, "")).assertTrue()

        try {
            let fd = fileio.openSync(fpath, 0o2)
            expect(fd !== null).assertTrue()
            let ss = fileio.Stream.fdopenStreamSync(fd, "w+")
            expect(ss !== null).assertTrue()
            let wlen = ss.writeSync(FILE_CONTENT)
            expect(wlen !== null).assertTrue()
            console.log("写文件成功 wlen=" + wlen)
            expect(ss.closeSync() !== null).assertTrue()
            console.log("关闭流成功")

            expect(fileToReadOnly(fpath)).assertTrue()
            ss = fileio.Stream.createStreamSync(fpath, "r")
            let rlen = ss.readSync(new ArrayBuffer(4096))
            expect(rlen == FILE_CONTENT.length).assertTrue()
            console.log("文本长度为：" + rlen)
            expect(fileio.closeSync(fd) !== null).assertTrue()
            console.log("关闭文件描述符成功 fd=" + fd)
            expect(ss.closeSync() !== null).assertTrue()
            console.log("关闭流成功")
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_fdopen_stream_sync_008 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_fdopen_stream_sync_008 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //同步将文件描述词转为文件流_文本方式_mode=w+(文件不存在)
    it('fileio_test_stream_fdopen_stream_sync_009', 0, function () {
        console.log("---fileio_test_stream_fdopen_stream_sync_009 测试开始---")
        let fpath = nextFileName('fileio_test_stream_fdopen_stream_sync_009')

        try {
            let fd = fileio.openSync(fpath, 0o102, 0o666)
            //console.log("---fd = " + fd)
            let ss = fileio.Stream.fdopenStreamSync(fd, "w+")
            expect(ss !== null).assertTrue()
            expect(fileio.closeSync(fd) !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_fdopen_stream_sync_009 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_fdopen_stream_sync_009 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //同步将文件描述词转为文件流_文本方式_mode=a+(文件存在)
    it('fileio_test_stream_create_stream_sync_010', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_010 测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_010')
        expect(prepareFile(fpath, "1")).assertTrue()

        try {
            let fd = fileio.openSync(fpath, 0o2002)
            expect(fd !== null).assertTrue()
            let ss = fileio.Stream.fdopenStreamSync(fd, "a+")
            expect(ss !== null).assertTrue()
            let wlen = ss.writeSync(FILE_CONTENT)
            expect(wlen !== null).assertTrue()
            console.log("---wlen=" + wlen)
            expect(ss.closeSync() !== null).assertTrue()

            expect(fileToReadOnly(fpath)).assertTrue()
            ss = fileio.Stream.createStreamSync(fpath, "r")
            let rlen = ss.readSync(new ArrayBuffer(4096))
            expect(rlen == FILE_CONTENT.length + 1).assertTrue()
            console.log("文本长度为：" + rlen)
            expect(fileio.closeSync(fd) !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_create_stream_sync_010 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_010 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //同步将文件描述词转为文件流_文本方式_mode=a+(文件不存在)
    it('fileio_test_stream_fdopen_stream_sync_011', 0, function () {
        console.log("---fileio_test_stream_fdopen_stream_sync_011 测试开始---")
        let fpath = nextFileName('fileio_test_stream_fdopen_stream_sync_011')

        try {
            let fd = fileio.openSync(fpath, 0o102, 0o666)
            //console.log("---fd = " + fd)
            let ss = fileio.Stream.fdopenStreamSync(fd, "a+")
            expect(ss !== null).assertTrue()
            expect(fileio.closeSync(fd) !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_fdopen_stream_sync_011 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_fdopen_stream_sync_011 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //同步将文件描述词转为文件流_文本方式_mode=rb(文件存在)
    it('fileio_test_stream_fdopen_stream_sync_012', 0, function () {
        console.log("---fileio_test_stream_fdopen_stream_sync_012 测试开始---")
        let fpath = nextFileName('fileio_test_stream_fdopen_stream_sync_012')
        expect(prepareFile(fpath, "")).assertTrue()
        expect(fileToReadOnly(fpath)).assertTrue()

        try {
            let fd = fileio.openSync(fpath, 0o0)
            let ss = fileio.Stream.fdopenStreamSync(fd, "rb")
            expect(ss !== null).assertTrue()
            expect(fileio.closeSync(fd) !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_fdopen_stream_sync_012 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_fdopen_stream_sync_000 has failed for " + e)
            expect(null).assertFail()
        }
    })
    //同步将文件描述词转为文件流_文本方式_mode=rb(文件不存在)
    it('fileio_test_stream_fdopen_stream_sync_013', 0, function () {
        console.log("---fileio_test_stream_fdopen_stream_sync_013 测试开始---")
        try {
            fileio.Stream.fdopenStreamSync(-1, "rb")
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_stream_fdopen_stream_sync_013 has failed for " + e)
        }
    })
    //同步将文件描述词转为文件流_文本方式_mode=wb(文件存在)
    it('fileio_test_stream_fdopen_stream_sync_014', 0, function () {
        console.log("---fileio_test_stream_fdopen_stream_sync_014 测试开始---")
        let fpath = nextFileName('fileio_test_stream_fdopen_stream_sync_014')
        expect(prepareFile(fpath, "")).assertTrue()
        expect(fileToWriteOnly(fpath)).assertTrue()

        try {
            let fd = fileio.openSync(fpath, 0o001)
            expect(fd !== null).assertTrue()
            //console.log("打开只写文件成功  fd=" + fd)
            let ss = fileio.Stream.fdopenStreamSync(fd, "wb")
            expect(ss !== null).assertTrue()
            console.log("创建流成功")
            let wlen = ss.writeSync(FILE_CONTENT)
            expect(wlen !== null).assertTrue()
            console.log("写文件成功 wlen=" + wlen)
            expect(ss.closeSync() !== null).assertTrue()
            console.log("关闭流成功")

            expect(fileToReadOnly(fpath)).assertTrue()
            ss = fileio.Stream.createStreamSync(fpath, "r")
            let rlen = ss.readSync(new ArrayBuffer(4096))
            expect(rlen == FILE_CONTENT.length).assertTrue()
            console.log("文本长度为：" + rlen)
            expect(fileio.closeSync(fd) !== null).assertTrue()
            console.log("关闭文件描述符成功 fd=" + fd)
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_fdopen_stream_sync_014 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_fdopen_stream_sync_014 has failed for " + e)
            expect(null).assertFail()
        }
    })
    //同步将文件描述词转为文件流_文本方式_mode=wb(文件不存在)
    it('fileio_test_stream_fdopen_stream_sync_015', 0, function () {
        console.log("---fileio_test_stream_fdopen_stream_sync_015 测试开始---")
        let fpath = nextFileName('fileio_test_stream_fdopen_stream_sync_015')

        try {
            let fd = fileio.openSync(fpath, 0o101, 0o222)
            let ss = fileio.Stream.fdopenStreamSync(fd, "wb")
            expect(ss !== null).assertTrue()
            expect(fileio.closeSync(fd) !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_fdopen_stream_sync_015 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_fdopen_stream_sync_015 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //同步将文件描述词转为文件流_文本方式_mode=ab(文件存在)
    it('fileio_test_stream_create_stream_sync_016', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_016 测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_016')
        expect(prepareFile(fpath, "1")).assertTrue()
        expect(fileToWriteOnly(fpath)).assertTrue()

        try {
            let fd = fileio.openSync(fpath, 0o2001)
            expect(fd !== null).assertTrue()
            let ss = fileio.Stream.fdopenStreamSync(fd, "ab")
            expect(ss !== null).assertTrue()
            let wlen = ss.writeSync(FILE_CONTENT)
            expect(wlen !== null).assertTrue()
            console.log("---wlen=" + wlen)
            expect(ss.closeSync() !== null).assertTrue()

            expect(fileToReadOnly(fpath)).assertTrue()
            ss = fileio.Stream.createStreamSync(fpath, "r")
            let rlen = ss.readSync(new ArrayBuffer(4096))
            expect(rlen == FILE_CONTENT.length + 1).assertTrue()
            console.log("文本长度为：" + rlen)
            expect(fileio.closeSync(fd) !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_create_stream_sync_016 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_016 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //同步将文件描述词转为文件流_文本方式_mode=ab(文件不存在)
    it('fileio_test_stream_fdopen_stream_sync_017', 0, function () {
        console.log("---fileio_test_stream_fdopen_stream_sync_017 测试开始---")
        let fpath = nextFileName('fileio_test_stream_fdopen_stream_sync_017')

        try {
            let fd = fileio.openSync(fpath, 0o101, 0o222)
            let ss = fileio.Stream.fdopenStreamSync(fd, "ab")
            expect(ss !== null).assertTrue()
            expect(fileio.closeSync(fd) !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_fdopen_stream_sync_017 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_fdopen_stream_sync_017 has failed for " + e)
            expect(null).assertFail()
        }
    })
    //同步将文件描述词转为文件流_文本方式_mode=rb+(文件存在)
    it('fileio_test_stream_fdopen_stream_sync_018', 0, function () {
        console.log("---fileio_test_stream_fdopen_stream_sync_018 测试开始---")
        let fpath = nextFileName('fileio_test_stream_fdopen_stream_sync_018')
        expect(prepareFile(fpath, "")).assertTrue()

        try {
            let fd = fileio.openSync(fpath, 0o2)
            let ss = fileio.Stream.fdopenStreamSync(fd, "rb+")
            expect(ss !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_fdopen_stream_sync_018 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_fdopen_stream_sync_018 has failed for " + e)
            expect(null).assertFail()
        }
    })
    //同步将文件描述词转为文件流_文本方式_mode=rb+(文件不存在)
    it('fileio_test_stream_fdopen_stream_sync_019', 0, function () {
        console.log("---fileio_test_stream_fdopen_stream_sync_019 测试开始---")
        try {
            fileio.Stream.fdopenStreamSync(-1, "rb+")
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_stream_fdopen_stream_sync_019 has failed for " + e)
        }
    })
    //同步将文件描述词转为文件流_文本方式_mode=wb+(文件存在)
    it('fileio_test_stream_fdopen_stream_sync_020', 0, function () {
        console.log("---fileio_test_stream_fdopen_stream_sync_020 测试开始---")
        let fpath = nextFileName('fileio_test_stream_fdopen_stream_sync_020')
        expect(prepareFile(fpath, "")).assertTrue()

        try {
            let fd = fileio.openSync(fpath, 0o002)
            expect(fd !== null).assertTrue()
            //console.log("打开只写文件成功  fd=" + fd)
            let ss = fileio.Stream.fdopenStreamSync(fd, "wb+")
            expect(ss !== null).assertTrue()
            console.log("创建流成功")
            let wlen = ss.writeSync(FILE_CONTENT)
            expect(wlen !== null).assertTrue()
            console.log("写文件成功 wlen=" + wlen)
            expect(ss.closeSync() !== null).assertTrue()
            console.log("关闭流成功")

            expect(fileToReadOnly(fpath)).assertTrue()
            ss = fileio.Stream.createStreamSync(fpath, "r")
            let rlen = ss.readSync(new ArrayBuffer(4096))
            expect(rlen == FILE_CONTENT.length).assertTrue()
            console.log("文本长度为：" + rlen)
            expect(fileio.closeSync(fd) !== null).assertTrue()
            console.log("关闭文件描述符成功 fd=" + fd)
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_fdopen_stream_sync_020 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_fdopen_stream_sync_020 has failed for " + e)
            expect(null).assertFail()
        }
    })
    //同步将文件描述词转为文件流_文本方式_mode=wb+(文件不存在)
    it('fileio_test_stream_fdopen_stream_sync_021', 0, function () {
        console.log("---fileio_test_stream_fdopen_stream_sync_021 测试开始---")
        let fpath = nextFileName('fileio_test_stream_fdopen_stream_sync_021')

        try {
            let fd = fileio.openSync(fpath, 0o102, 0o666)
            let ss = fileio.Stream.fdopenStreamSync(fd, "wb+")
            expect(ss !== null).assertTrue()
            expect(fileio.closeSync(fd) !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_fdopen_stream_sync_021 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_fdopen_stream_sync_021 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //同步将文件描述词转为文件流_文本方式_mode=ab+(文件存在)
    it('fileio_test_stream_create_stream_sync_022', 0, function () {
        console.log("---fileio_test_stream_create_stream_sync_022 测试开始---")
        let fpath = nextFileName('fileio_test_stream_create_stream_sync_022')
        expect(prepareFile(fpath, "1")).assertTrue()

        try {
            let fd = fileio.openSync(fpath, 0o2002)
            expect(fd !== null).assertTrue()
            let ss = fileio.Stream.fdopenStreamSync(fd, "ab+")
            expect(ss !== null).assertTrue()
            let wlen = ss.writeSync(FILE_CONTENT)
            expect(wlen !== null).assertTrue()
            console.log("---wlen=" + wlen)
            expect(ss.closeSync() !== null).assertTrue()

            expect(fileToReadOnly(fpath)).assertTrue()
            ss = fileio.Stream.createStreamSync(fpath, "r")
            let rlen = ss.readSync(new ArrayBuffer(4096))
            expect(rlen == FILE_CONTENT.length + 1).assertTrue()
            console.log("文本长度为：" + rlen)
            expect(fileio.closeSync(fd) !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_create_stream_sync_022 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_create_stream_sync_022 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //同步将文件描述词转为文件流_文本方式_mode=ab+(文件不存在)
    it('fileio_test_stream_fdopen_stream_sync_023', 0, function () {
        console.log("---fileio_test_stream_fdopen_stream_sync_023 测试开始---")
        let fpath = nextFileName('fileio_test_stream_fdopen_stream_sync_023')

        try {
            let fd = fileio.openSync(fpath, 0o102, 0o666)
            let ss = fileio.Stream.fdopenStreamSync(fd, "ab+")
            expect(ss !== null).assertTrue()
            expect(fileio.closeSync(fd) !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_fdopen_stream_sync_023 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_fdopen_stream_sync_023 has failed for " + e)
            expect(null).assertFail()
        }
    })
    //非法传参
    it('fileio_test_stream_fdopen_stream_sync_024', 0, function () {
        console.log("---fileio_test_stream_fdopen_stream_sync_024 测试开始---")
        try {
            expect(fileio.Stream.fdopenStreamSync(null, "r") == null).assertTrue()
            console.log("-----------------")
        } catch (e) {
            console.log("---fileio_test_stream_fdopen_stream_sync_024 is passed!" + e)
        }
    })

    it('fileio_test_stream_fdopen_stream_sync_025', 0, function () {
        console.log("---fileio_test_stream_fdopen_stream_sync_025 测试开始---")
        let fpath = nextFileName('fileio_test_stream_fdopen_stream_sync_025')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let fd = fileio.openSync(fpath, 0o2)
            expect(fileio.Stream.fdopenStreamSync(fd, "") == null).assertTrue()
            console.log("-----------------")
        } catch (e) {
            console.log("---fileio_test_stream_fdopen_stream_sync_025 is passed!" + e)
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
        }
    })

    //从文件流读取数据功能(options却省)
    it('fileio_test_stream_read_sync_000', 0, function () {
        console.log("---fileio_test_stream_read_sync_000 测试开始---")
        let fpath = nextFileName('fileio_test_stream_read_sync_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "r+")
            expect(ss !== null).assertTrue()
            let len = ss.readSync(new ArrayBuffer(4096))
            expect(len == FILE_CONTENT.length).assertTrue()
            console.log("---读取的长度为：" + len)
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_read_sync_000 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_read_sync_000 has failed for " + e)
            expect(null).assertFail()
        }
    })
    //从文件流读取数据功能(options=position)
    it('fileio_test_stream_read_sync_001', 0, function () {
        console.log("---fileio_test_stream_read_sync_001 测试开始---")
        let fpath = nextFileName('fileio_test_stream_read_sync_001')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "r+")
            expect(ss !== null).assertTrue()
            let len = ss.readSync(new ArrayBuffer(4096), {position: 1})
            expect(len == FILE_CONTENT.length - 1).assertTrue()
            console.log("---读取的长度为：" + len)
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_read_sync_001 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_read_sync_001 has failed for " + e)
            expect(null).assertFail()
        }
    })
    //从文件流读取数据功能(options=offset)
    it('fileio_test_stream_read_sync_002', 0, function () {
        console.log("---fileio_test_stream_read_sync_002 测试开始---")
        let fpath = nextFileName('fileio_test_stream_read_sync_002')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "r+")
            expect(ss !== null).assertTrue()
            let len = ss.readSync(new ArrayBuffer(4096), {offset: 1})
            expect(len == FILE_CONTENT.length).assertTrue()
            console.log("---读取的长度为：" + len)
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_read_sync_002 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_read_sync_002 has failed for " + e)
            expect(null).assertFail()
        }
    })
    //从文件流读取数据功能(options=length)
    it('fileio_test_stream_read_sync_003', 0, function () {
        console.log("---fileio_test_stream_read_sync_003 测试开始---")
        let fpath = nextFileName('fileio_test_stream_read_sync_003')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "r+")
            expect(ss !== null).assertTrue()
            let len = ss.readSync(new ArrayBuffer(4096), {length: 1})
            expect(len == 1).assertTrue()
            console.log("---读取的长度为：" + len)
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_read_sync_003 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_read_sync_003 has failed for " + e)
            expect(null).assertFail()
        }
    })
    //非法参数(readBuf)
    it('fileio_test_stream_read_sync_004', 0, function () {
        console.log("---fileio_test_stream_read_sync_004 测试开始---")
        let fpath = nextFileName('fileio_test_stream_read_sync_004')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            var ss = fileio.Stream.createStreamSync(fpath, "r+")
            expect(ss !== null).assertTrue()
            let len = ss.readSync(null)
            console.log("-------")
            expect(len == null).assertTrue()
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_stream_read_sync_004 has failed for " + e)
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
        }
    })

    //参数(position=-1)
    it('fileio_test_stream_read_sync_005', 0, function () {
        console.log("---fileio_test_stream_read_sync_005 测试开始---")
        let fpath = nextFileName('fileio_test_stream_read_sync_005')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            var ss = fileio.Stream.createStreamSync(fpath, "r+")
            expect(ss !== null).assertTrue()
            let len = ss.readSync(new ArrayBuffer(4096), {position: -1})
            console.log("-----------")
            expect(len == FILE_CONTENT.length).assertTrue()
            console.log("------------------" + len)
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_read_sync_005 is passed!")
        } catch (e) {
            console.log("---fileio_test_stream_read_sync_005 has failed for " + e)
            expect(null).assertFail()
        }
    })
    //非法参数(options=offset)
    it('fileio_test_stream_read_sync_006', 0, function () {
        console.log("---fileio_test_stream_read_sync_006 测试开始---")
        let fpath = nextFileName('fileio_test_stream_read_sync_006')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            var ss = fileio.Stream.createStreamSync(fpath, "r+")
            expect(ss !== null).assertTrue()
            let len = ss.readSync(new ArrayBuffer(4096), {offset: -1})
            console.log("------")
            expect(len == null).assertTrue()
            console.log("----------------------")
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_stream_read_sync_006 has failed for " + e)
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
        }
    })
    //同步向文件流写入数据
    it('fileio_test_stream_write_sync_000', 0, function () {
        console.log("---fileio_test_stream_write_sync_000 测试开始---")
        let fpath = nextFileName('fileio_test_stream_write_sync_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "r+")
            expect(ss !== null).assertTrue()
            expect(ss.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_write_sync_000 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_write_sync_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //异常传参，写入数据编码格式(encoding=“ASCII”)
    it('fileio_test_stream_write_sync_001', 0, function () {
        console.log("---fileio_test_stream_write_sync_001 测试开始---")
        let fpath = nextFileName('fileio_test_stream_write_sync_001')
        expect(prepareFile(fpath, "")).assertTrue()
        let ss

        try {
            ss = fileio.Stream.createStreamSync(fpath, "w+")
            expect(ss !== null).assertTrue()
            expect(ss.writeSync(FILE_CONTENT, {encoding: "ASCII"}) !== null).assertTrue()
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_stream_write_sync_001 has failed for " + e)
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
        }
    })

    //文件流写入数据功能(options缺省)
    it('fileio_test_stream_write_sync_002', 0, function () {
        console.log("---fileio_test_stream_write_sync_002 测试开始---")
        let fpath = nextFileName('fileio_test_stream_write_sync_002')
        expect(prepareFile(fpath, "a")).assertTrue()
        expect(fileToWriteOnly(fpath)).assertTrue()

        try {
            let fd = fileio.openSync(fpath, 0o001)
            expect(fd !== null).assertTrue()
            let ss = fileio.Stream.fdopenStreamSync(fd, "w")
            expect(ss !== null).assertTrue()
            expect(ss.writeSync("aaa") !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()

            expect(fileToReadOnly(fpath)).assertTrue()
            ss = fileio.Stream.createStreamSync(fpath, "r")
            let rlen = ss.readSync(new ArrayBuffer(4096))
            expect(rlen == 3).assertTrue()
            console.log("文本长度为：" + rlen)
            expect(fileio.closeSync(fd) !== null).assertTrue()
            console.log("关闭文件描述符成功 fd=" + fd)
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_write_sync_002 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_write_sync_002 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //验证文件流写入数据偏移字节数(offset)
    it('fileio_test_stream_write_sync_003', 0, function () {
        console.log("---fileio_test_stream_write_sync_003 测试开始---")
        let fpath = nextFileName('fileio_test_stream_write_sync_003')
        expect(prepareFile(fpath, "a")).assertTrue()
        expect(fileToWriteOnly(fpath)).assertTrue()

        try {
            let fd = fileio.openSync(fpath, 0o001)
            expect(fd !== null).assertTrue()
            let ss = fileio.Stream.fdopenStreamSync(fd, "w")
            expect(ss !== null).assertTrue()
            expect(ss.writeSync("aaa") !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()

            expect(fileToReadOnly(fpath)).assertTrue()
            ss = fileio.Stream.createStreamSync(fpath, "r")
            let rlen = ss.readSync(new ArrayBuffer(4096))
            expect(rlen == 3).assertTrue()
            console.log("文本长度为：" + rlen)
            expect(fileio.closeSync(fd) !== null).assertTrue()
            console.log("关闭文件描述符成功 fd=" + fd)
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_write_sync_003 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_write_sync_003 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //验证文件流要写入的字节数(length)
    it('fileio_test_stream_write_sync_004', 0, function () {
        console.log("---fileio_test_stream_write_sync_004 测试开始---")
        let fpath = nextFileName('fileio_test_stream_write_sync_004')
        expect(prepareFile(fpath, "a")).assertTrue()

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "r+")
            expect(ss !== null).assertTrue()
            let wlen = ss.writeSync(FILE_CONTENT)
            expect(wlen == FILE_CONTENT.length).assertTrue()
            console.log("---wlen=" + wlen)
            expect(ss.closeSync() !== null).assertTrue()

            ss = fileio.Stream.createStreamSync(fpath, "r+")
            let rlen = ss.readSync(new ArrayBuffer(4096))
            expect(rlen == FILE_CONTENT.length).assertTrue()
            console.log("---rlen=" + rlen)
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_write_sync_004 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_write_sync_004 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //文件流写入数据功能(options=encoding)
    it('fileio_test_stream_write_sync_005', 0, function () {
        console.log("---fileio_test_stream_write_sync_005 测试开始---")
        let fpath = nextFileName('fileio_test_stream_write_sync_005')
        expect(prepareFile(fpath, "")).assertTrue()
        let writeStrArray = new Array("aaa", "123")
        let encodingArray = new Array('utf-8', 'utf-16')

        try {
            for(let i = 0; i < encodingArray.length; i++){
                let ss = fileio.Stream.createStreamSync(fpath, "w+")
                expect(ss !== null).assertTrue()
                console.log("写之前:i=" + i)
                expect(ss.writeSync(writeStrArray[i], {encoding: encodingArray[i]}) !== null).assertTrue()
                console.log("写之后:i=" + i)
                expect(ss.closeSync() !== null).assertTrue()

                ss = fileio.Stream.createStreamSync(fpath, "r+")
                let rlen = ss.readSync(new ArrayBuffer(4096))
                expect(rlen !== null).assertTrue()
                console.log("rlen=" + rlen)
                expect(ss.closeSync() !== null).assertTrue()
            }
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_write_sync_005 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_write_sync_005 has failed for " + e)
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            expect(null).assertFail()
        }
    })

    //文件流写入数据功能(options缺省)
    it('fileio_test_stream_write_sync_006', 0, function () {
        console.log("---fileio_test_stream_write_sync_006 测试开始---")
        let fpath = nextFileName('fileio_test_stream_write_sync_006')
        expect(prepareFile(fpath, "a")).assertTrue()
        expect(fileToWriteOnly(fpath)).assertTrue()

        try {
            let fd = fileio.openSync(fpath, 0o001)
            expect(fd !== null).assertTrue()
            let ss = fileio.Stream.fdopenStreamSync(fd, "w")
            expect(ss !== null).assertTrue()
            expect(ss.writeSync("aaa", {position: 1}) !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()

            expect(fileToReadOnly(fpath)).assertTrue()
            ss = fileio.Stream.createStreamSync(fpath, "r")
            let rlen = ss.readSync(new ArrayBuffer(4096))
            expect(rlen == 4).assertTrue()
            console.log("文本长度为：" + rlen)
            expect(fileio.closeSync(fd) !== null).assertTrue()
            console.log("关闭文件描述符成功 fd=" + fd)
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_write_sync_006 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_write_sync_006 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //验证文件流写入数据偏移字节数(offset)
    it('fileio_test_stream_write_sync_007', 0, function () {
        console.log("---fileio_test_stream_write_sync_007 测试开始---")
        let fpath = nextFileName('fileio_test_stream_write_sync_007')
        expect(prepareFile(fpath, "a")).assertTrue()
        expect(fileToWriteOnly(fpath)).assertTrue()

        try {
            let fd = fileio.openSync(fpath, 0o001)
            expect(fd !== null).assertTrue()
            let ss = fileio.Stream.fdopenStreamSync(fd, "w")
            expect(ss !== null).assertTrue()
            expect(ss.writeSync("aaa", {offset: 1}) !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()

            expect(fileToReadOnly(fpath)).assertTrue()
            ss = fileio.Stream.createStreamSync(fpath, "r")
            let rlen = ss.readSync(new ArrayBuffer(4096))
            expect(rlen == 2).assertTrue()
            console.log("文本长度为：" + rlen)
            expect(fileio.closeSync(fd) !== null).assertTrue()
            console.log("关闭文件描述符成功 fd=" + fd)
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_write_sync_007 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_write_sync_007 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //验证文件流要写入的字节数(length)
    it('fileio_test_stream_write_sync_008', 0, function () {
        console.log("---fileio_test_stream_write_sync_008 测试开始---")
        let fpath = nextFileName('fileio_test_stream_write_sync_008')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "r+")
            expect(ss !== null).assertTrue()
            let wlen = ss.writeSync(FILE_CONTENT, {length: FILE_CONTENT.length})
            expect(wlen == FILE_CONTENT.length).assertTrue()
            console.log("---wlen=" + wlen)
            expect(ss.closeSync() !== null).assertTrue()

            ss = fileio.Stream.createStreamSync(fpath, "r+")
            let rlen = ss.readSync(new ArrayBuffer(4096))
            expect(rlen == FILE_CONTENT.length).assertTrue()
            console.log("---rlen=" + rlen)
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_write_sync_008 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_write_sync_008 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //非法传参
    it('fileio_test_stream_write_sync_009', 0, function () {
        console.log("---fileio_test_stream_write_sync_009 测试开始---")
        let fpath = nextFileName('fileio_test_stream_write_sync_009')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
        let wlen

        try {
            var ss = fileio.Stream.createStreamSync(fpath, "r+")
            expect(ss !== null).assertTrue()
            ss.writeSync(-1)
            expect(null).assertFail()
        } catch (e) {
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stream_write_sync_009 has failed for " + e)
        }
    })
    //非法传参
    it('fileio_test_stream_write_sync_010', 0, function () {
        console.log("---fileio_test_stream_write_sync_010 测试开始---")
        let fpath = nextFileName('fileio_test_stream_write_sync_010')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            var ss = fileio.Stream.createStreamSync(fpath, "r+")
            expect(ss !== null).assertTrue()
            expect(ss.writeSync(FILE_CONTENT, {encoding: ""}) == null).assertTrue()
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_stream_write_sync_010 has failed for " + e)
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
        }
    })

    it('fileio_test_stream_write_sync_011', 0, function () {
        console.log("---fileio_test_stream_write_sync_011 测试开始---")
        let fpath = nextFileName('fileio_test_stream_write_sync_011')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            var ss = fileio.Stream.createStreamSync(fpath, "r+")
            expect(ss !== null).assertTrue()
            expect(ss.writeSync(FILE_CONTENT, {position: -1}) == null).assertTrue()
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_stream_write_sync_011 has failed for " + e)
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
        }
    })

    it('fileio_test_stream_write_sync_012', 0, function () {
        console.log("---fileio_test_stream_write_sync_012 测试开始---")
        let fpath = nextFileName('fileio_test_stream_write_sync_012')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            var ss = fileio.Stream.createStreamSync(fpath, "r+")
            expect(ss !== null).assertTrue()
            expect(ss.writeSync(FILE_CONTENT, {offset: -1}) == null).assertTrue()
            console.log("----------------")
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_stream_write_sync_012 has failed for " + e)
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
        }
    })

    it('fileio_test_stream_write_read_4k_sync', 0, function () {
        console.log("---fileio_test_stream_write_read_4k_sync 测试开始---")
        let fpath = nextFileName('fileio_test_stream_write_read_4k_sync')
        expect(prepareFile(fpath, "a")).assertTrue()
        expect(fileToWriteOnly(fpath)).assertTrue()

        try {
            let fd = fileio.openSync(fpath, 0o001)
            expect(fd !== null).assertTrue()
            let ss = fileio.Stream.fdopenStreamSync(fd, "w")
            expect(ss !== null).assertTrue()
            expect(ss.writeSync(randomString(4096)) !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()

            expect(fileToReadOnly(fpath)).assertTrue()
            ss = fileio.Stream.createStreamSync(fpath, "r")
            let rlen = ss.readSync(new ArrayBuffer(4096))
            console.log("文本长度为：" + rlen)
            expect(fileio.closeSync(fd) !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_write_read_4k_sync is passed!")
        } catch (e) {
            console.log("fileio_test_stream_write_read_4k_sync has failed for " + e)
            expect(null).assertFail()
        }
    })
    //同步刷新文件流的输出缓冲区
    it('fileio_test_stream_flush_sync_000', 0, function () {
        console.log("---fileio_test_stream_flush_sync_000 测试开始---")
        let fpath = nextFileName('fileio_test_stream_flush_sync_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "r+")
            expect(ss !== null).assertTrue()
            expect(ss.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue()
            expect(ss.flushSync() !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_flush_sync_000 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_flush_sync_001 has failed for " + e)
            expect(null).assertFail()
        }
    })
    //同步刷新文件流的输出缓冲区(异常验证)
    it('fileio_test_stream_flush_sync_001', 0, function () {
        console.log("---fileio_test_stream_flush_sync_001 测试开始---")
        let fpath = nextFileName('fileio_test_stream_flush_sync_001')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "r+")
            expect(ss !== null).assertTrue()
            expect(ss.closeSync() !== null).assertTrue()
            ss.flushSync()
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_stream_flush_sync_001 has failed for " + e)
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
        }
    })
    //同步关闭文件流
    it('fileio_test_stream_close_sync_000', 0, function () {
        console.log("---fileio_test_stream_close_sync_000 测试开始---")
        let fpath = nextFileName('fileio_test_stream_close_sync_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let ss = fileio.Stream.createStreamSync(fpath, "r+")
            expect(ss.closeSync() !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stream_close_sync_000 is passed!")
        } catch (e) {
            console.log("fileio_test_stream_close_sync_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //非法传参
    it('fileio_test_stream_close_sync_001', 0, function () {
        console.log("---fileio_test_stream_close_sync_001 测试开始---")
        let fpath = nextFileName('fileio_test_stream_close_sync_001')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
        let ss

        try {
            ss = fileio.Stream.createStreamSync(fpath, "r+")
            expect(ss.closeSync() !== null).assertTrue()
            console.log("++++++++++++")
            expect(ss.closeSync() == null).assertTrue()
            console.log("-----------")
            expect(null).assertFail()
        } catch (e) {
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stream_close_sync_001 has failed for " + e)
        }
    })

})