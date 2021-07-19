// @ts-nocheck
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
import {FILE_CONTENT, prepareFile, nextFileName} from './Common'

describe('fileIOTestDirent', function () {
    console.log("---fileIOTestDirent 接口测试---");
    /**
     * @tc.number SUB_DF_FileIO_Dir_ReadSync_0000
     * @tc.name fileio_test_dirent_name_000
     * @tc.desc Test Dir.readSync() interface.
     */
    //获取文件名
    it('fileio_test_dirent_name_000', 0, function () {
        let dpath = nextFileName('fileio_test_dirent_name_000') + 'd'
        let fpath = dpath + '/f1'

        try {
            console.log("fileio_test_dirent_name_000 测试开始")
            expect(fileio.mkdirSync(dpath) !== null)
            console.log("创建目录成功");
            expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
            console.log("创建文件成功");
            let dd = fileio.Dir.opendirSync(dpath)
            expect(dd !== null).assertTrue()
            console.log("文件打开成功");
            let dirent = dd.readSync()
            expect(dirent !== null).assertTrue()
            console.log("文件读取成功");
            expect(dd.closeSync() !== null)
            console.log("文件关闭成功");
            expect(fileio.unlinkSync(fpath) !== null)
            console.log("文件删除成功");
            expect(fileio.rmdirSync(dpath) !== null)
            console.log("目录删除成功");
            console.log("fileio_test_dirent_name_000 测试结束");
        } catch (e) {
            console.log("fileio_test_dirent_name_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    /**
     * @tc.number SUB_DF_FileIO_Dir_IsBlockDevice_0000
     * @tc.name fileio_test_dirent_is_block_device_000
     * @tc.desc Test Dir.isBlockDevice() interface.
     */
    //判断是否是区块设备
    it('fileio_test_dirent_is_block_device_000', 0, function () {
        let dpath = nextFileName('fileio_test_dirent_is_block_device_000') + 'd'
        let fpath = dpath + '/f1'

        try {
            console.log("fileio_test_dirent_is_block_device_000 测试开始")
            expect(fileio.mkdirSync(dpath) !== null)
            console.log("目录创建成功")
            expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
            let dd = fileio.Dir.opendirSync(dpath)
            expect(dd !== null).assertTrue()
            let dirent = dd.readSync()
            expect(dirent !== null).assertTrue()
            console.log("文件读取成功");
            expect(dirent.isBlockDevice() !== null)
            console.log("是块设备");
            expect(dd.closeSync() !== null)
            console.log("文件关闭成功");
            expect(fileio.unlinkSync(fpath) !== null)
            console.log("文件删除成功");
            expect(fileio.rmdirSync(dpath) !== null)
            console.log("目录删除成功");
            console.log("fileio_test_dirent_name_001 测试结束");
            return
        } catch (e) {
            console.log("fileio_test_dirent_is_block_device_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    /**
     * @tc.number SUB_DF_FileIO_Dir_IsBlockDevice_0010
     * @tc.name fileio_test_dirent_is_block_device_001
     * @tc.desc Test Dir.isBlockDevice() interface.
     */
    //输入异常参数，判断是否是区块设备
    it('fileio_test_dirent_is_block_device_001', 0, function () {
        let dpath = nextFileName('fileio_test_dirent_is_block_device_001') + 'd'
        let fpath = dpath + '/f1'
        let dd

        try {
            console.log("fileio_test_dirent_is_block_device_001 测试开始");
            expect(fileio.mkdirSync(dpath) !== null)
            console.log("目录创建成功");
            expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
            dd = fileio.Dir.opendirSync(dpath)
            expect(dd !== null).assertTrue()
            let dirent = dd.readSync()
            expect(dirent !== null).assertTrue()
            dirent.isBlockDevice(-1)
            expect(null).assertFail()
        } catch (e) {
            expect(dd.closeSync()!== null)
            expect(fileio.unlinkSync(fpath) !== null)
            console.log("文件删除成功");
            expect(fileio.rmdirSync(dpath) !== null)
            console.log("目录删除成功");
            console.log("fileio_test_dirent_is_block_device_001 测试结束" + e);
        }
    })

    /**
     * @tc.number SUB_DF_FileIO_Dir_IsCharacterDevice_0000
     * @tc.name fileio_test_dirent_is_character_device_000
     * @tc.desc Test Dir.isCharacterDevice() interface.
     */
    //判断是否是字符设备
    it('fileio_test_dirent_is_character_device_000', 0, function () {
        let dpath = nextFileName('fileio_test_dirent_is_character_device_000') + 'd'
        let fpath = dpath + '/f1'

        try {
            console.log("fileio_test_dirent_is_character_device_000 测试开始");
            expect(fileio.mkdirSync(dpath) !== null)
            expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
            let dd = fileio.Dir.opendirSync(dpath)
            expect(dd !== null).assertTrue()
            let dirent = dd.readSync()
            expect(dirent !== null).assertTrue()
            expect(dirent.isCharacterDevice() !== null)
            console.log("是字符设备");
            expect(dd.closeSync() !== null !== null)
            expect(fileio.unlinkSync(fpath) !== null)
            expect(fileio.rmdirSync(dpath) !== null)
            console.log("fileio_test_dirent_is_character_device_000 测试结束");
        } catch (e) {
            console.log("fileio_test_dirent_is_character_device_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    /**
     * @tc.number SUB_DF_FileIO_Dir_IsCharacterDevice_0010
     * @tc.name fileio_test_dirent_is_character_device_001
     * @tc.desc Test Dir.isCharacterDevice() interface.
     */
    //输入异常参数，判断是否是字符设备
    it('fileio_test_dirent_is_character_device_001', 0, function () {
        let dpath = nextFileName('fileio_test_dirent_is_character_device_001') + 'd'
        let fpath = dpath + '/f1'
        let dd

        try {
            console.log("fileio_test_dirent_is_character_device_001 测试开始");
            expect(fileio.mkdirSync(dpath) !== null)
            expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
            dd = fileio.Dir.opendirSync(dpath)
            expect(dd !== null).assertTrue()
            let dirent = dd.readSync()
            expect(dirent !== null).assertTrue()
            dirent.isCharacterDevice(-1)
            expect(null).assertFail()
        } catch (e) {
            expect(dd.closeSync() !== null)
            expect(fileio.unlinkSync(fpath) !== null)
            expect(fileio.rmdirSync(dpath) !== null)
            console.log("fileio_test_dirent_is_character_device_001 测试结束" + e);
        }
    })

    /**
     * @tc.number SUB_DF_FileIO_Dir_IsDirectory_0000
     * @tc.name fileio_test_dirent_is_directory_000
     * @tc.desc Test Dir.isDirectory() interface.
     */
    //判断是否是目录
    it('fileio_test_dirent_is_directory_000', 0, function () {
        let dpath = nextFileName('fileio_test_dirent_is_directory_000') + 'd'
        let fpath = dpath + '/f1'

        try {
            console.log("fileio_test_dirent_is_directory_000 测试开始");
            expect(fileio.mkdirSync(dpath) !== null)
            expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
            let dd = fileio.Dir.opendirSync(dpath)
            expect(dd !== null).assertTrue()
            let dirent = dd.readSync()
            expect(dirent !== null).assertTrue()
            expect(dirent.isDirectory() !== null)
            console.log("是目录");
            expect(dd.closeSync() !== null)
            expect(fileio.unlinkSync(fpath) !== null)
            expect(fileio.rmdirSync(dpath) !== null)
            console.log("fileio_test_dirent_is_directory_000 测试结束");
        } catch (e) {
            console.log("fileio_test_dirent_is_directory_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    /**
     * @tc.number SUB_DF_FileIO_Dir_IsDirectory_0010
     * @tc.name fileio_test_dirent_is_directory_001
     * @tc.desc Test Dir.isDirectory() interface.
     */
    //输入异常参数，判断是否是目录
    it('fileio_test_dirent_is_directory_001', 0, function () {
        let dpath = nextFileName('fileio_test_dirent_is_directory_001') + 'd'
        let fpath = dpath + '/f1'
        let dd

        try {
            console.log("fileio_test_dirent_is_directory_001 测试开始");
            expect(fileio.mkdirSync(dpath) !== null)
            expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
            dd = fileio.Dir.opendirSync(dpath)
            expect(dd !== null).assertTrue()
            let dirent = dd.readSync()
            expect(dirent !== null).assertTrue()
            dirent.isDirectory(-1)
            expect(null).assertFail()
        } catch (e) {
            expect(dd.closeSync() !== null)
            expect(fileio.unlinkSync(fpath) !== null)
            expect(fileio.rmdirSync(dpath) !== null)
            console.log("fileio_test_dirent_is_directory_001 测试结束" + e);
        }
    })

    /**
     * @tc.number SUB_DF_FileIO_Dir_IsFIFO_0000
     * @tc.name fileio_test_dirent_is_fifo_000
     * @tc.desc Test Dir.isFIFO() interface.
     */
    //判断是否是管道
    it('fileio_test_dirent_is_fifo_000', 0, function () {
        let dpath = nextFileName('fileio_test_dirent_is_fifo_000') + 'd'
        let fpath = dpath + '/f1'

        try {
            console.log("fileio_test_dirent_is_fifo_000 测试开始");
            expect(fileio.mkdirSync(dpath) !== null)
            expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
            let dd = fileio.Dir.opendirSync(dpath)
            expect(dd !== null).assertTrue()
            let dirent = dd.readSync()
            expect(dirent !== null).assertTrue()
            expect(dirent.isFIFO() !== null)
            console.log("是管道");
            expect(dd.closeSync() !== null)
            expect(fileio.unlinkSync(fpath) !== null)
            expect(fileio.rmdirSync(dpath) !== null)
            console.log("fileio_test_dirent_is_fifo_000 测试结束");
        } catch (e) {
            console.log("fileio_test_dirent_is_fifo_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    /**
     * @tc.number SUB_DF_FileIO_Dir_IsFIFO_0010
     * @tc.name fileio_test_dirent_is_fifo_001
     * @tc.desc Test Dir.isFIFO() interface.
     */
    //输入异常参数，判断是否是管道
    it('fileio_test_dirent_is_fifo_001', 0, function () {
        let dpath = nextFileName('fileio_test_dirent_is_fifo_001') + 'd'
        let fpath = dpath + '/f1'
        let dd

        try {
            console.log("fileio_test_dirent_is_fifo_001 测试开始");
            expect(fileio.mkdirSync(dpath) !== null)
            expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
            dd = fileio.Dir.opendirSync(dpath)
            expect(dd !== null).assertTrue()
            let dirent = dd.readSync()
            expect(dirent !== null).assertTrue()
            dirent.isFIFO(-1)
            expect(null).assertFail()
        } catch (e) {
            expect(dd.closeSync() !== null)
            expect(fileio.unlinkSync(fpath) !== null)
            expect(fileio.rmdirSync(dpath) !== null)
            console.log("fileio_test_dirent_is_fifo_001 测试结束" + e);
        }
    })

    /**
     * @tc.number SUB_DF_FileIO_Dir_IsFILE_0000
     * @tc.name fileio_test_dirent_is_file_000
     * @tc.desc Test Dir.isFILE() interface.
     */
    //判断是否是常规文件
    it('fileio_test_dirent_is_file_000', 0, function () {
        let dpath = nextFileName('fileio_test_dirent_is_file_000') + 'd'
        let fpath = dpath + '/f1'

        try {
            console.log("fileio_test_dirent_is_file_000 测试开始");
            expect(fileio.mkdirSync(dpath) !== null)
            expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
            let dd = fileio.Dir.opendirSync(dpath)
            expect(dd !== null).assertTrue()
            let dirent = dd.readSync()
            expect(dirent !== null).assertTrue()
            expect(dirent.isFile()!== null)
            console.log("是文件");
            expect(dd.closeSync() !== null)
            expect(fileio.unlinkSync(fpath) !== null)
            expect(fileio.rmdirSync(dpath) !== null)
            console.log("fileio_test_dirent_is_file_000 测试结束");
        } catch (e) {
            console.log("fileio_test_dirent_is_file_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    /**
     * @tc.number SUB_DF_FileIO_Dir_IsFILE_0010
     * @tc.name fileio_test_dirent_is_file_001
     * @tc.desc Test Dir.isFILE() interface.
     */
    //输入异常参数，判断是否是常规文件
    it('fileio_test_dirent_is_file_001', 0, function () {
        let dpath = nextFileName('fileio_test_dirent_is_file_001') + 'd'
        let fpath = dpath + '/f1'
        let dd

        try {
            console.log("fileio_test_dirent_is_file_001 测试开始");
            expect(fileio.mkdirSync(dpath) !== null)
            expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
            dd = fileio.Dir.opendirSync(dpath)
            expect(dd !== null).assertTrue()
            let dirent = dd.readSync()
            expect(dirent !== null).assertTrue()
            dirent.isFile(-1)
            expect(null).assertFail()
        } catch (e) {
            expect(dd.closeSync() !== null)
            expect(fileio.unlinkSync(fpath) !== null)
            expect(fileio.rmdirSync(dpath) !== null)
            console.log("fileio_test_dirent_is_file_001 测试结束" + e);
        }
    })

    /**
     * @tc.number SUB_DF_FileIO_Dir_IsSocket_0000
     * @tc.name fileio_test_dirent_is_socket_000
     * @tc.desc Test Dir.isSocket() interface.
     */
    //判断是否是套接字
    it('fileio_test_dirent_is_socket_000', 0, function () {
        let dpath = nextFileName('fileio_test_dirent_is_socket_000') + 'd'
        let fpath = dpath + '/f1'

        try {
            console.log("fileio_test_dirent_is_socket_000 测试开始");
            expect(fileio.mkdirSync(dpath) !== null)
            expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
            let dd = fileio.Dir.opendirSync(dpath)
            expect(dd !== null).assertTrue()
            let dirent = dd.readSync()
            expect(dirent !== null).assertTrue()
            expect(dirent.isSocket() !== null)
            console.log("是套接字");
            expect(dd.closeSync() !== null)
            expect(fileio.unlinkSync(fpath) !== null)
            expect(fileio.rmdirSync(dpath) !== null)
            console.log("fileio_test_dirent_is_socket_000 测试结束");
        } catch (e) {
            console.log("fileio_test_dirent_is_socket_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    /**
     * @tc.number SUB_DF_FileIO_Dir_IsSocket_0010
     * @tc.name fileio_test_dirent_is_socket_001
     * @tc.desc Test Dir.isSocket() interface.
     */
    //输入异常参数，判断是否是套接字
    it('fileio_test_dirent_is_socket_001', 0, function () {
        let dpath = nextFileName('fileio_test_dirent_is_socket_001') + 'd'
        let fpath = dpath + '/f1'
        let dd

        try {
            console.log("fileio_test_dirent_is_socket_001 测试开始");
            expect(fileio.mkdirSync(dpath) !== null)
            expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
            dd = fileio.Dir.opendirSync(dpath)
            expect(dd !== null).assertTrue()
            let dirent = dd.readSync()
            expect(dirent !== null).assertTrue()
            dirent.isSocket(-1)
            expect(null).assertFail()
        } catch (e) {
            expect(dd.closeSync() !== null)
            expect(fileio.unlinkSync(fpath) !== null)
            expect(fileio.rmdirSync(dpath) !== null)
            console.log("fileio_test_dirent_is_socket_001 测试结束" + e);
        }
    })

    /**
     * @tc.number SUB_DF_FileIO_Dir_IsSymbolicLink_0000
     * @tc.name fileio_test_dirent_is_symbolic_link_000
     * @tc.desc Test Dir.isSymbolicLink() interface.
     */
    //判断是否是符号链接
    it('fileio_test_dirent_is_symbolic_link_000', 0, function () {
        let dpath = nextFileName('fileio_test_dirent_is_symbolic_link_000') + 'd'
        let fpath = dpath + '/f1'

        try {
            console.log("fileio_test_dirent_is_symbolic_link_000 测试开始");
            expect(fileio.mkdirSync(dpath) !== null)
            expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
            let dd = fileio.Dir.opendirSync(dpath)
            expect(dd !== null).assertTrue()
            let dirent = dd.readSync()
            expect(dirent !== null).assertTrue()
            expect(dirent.isSymbolicLink()!== null )
            console.log("是符号链接");
            expect(dd.closeSync() !== null)
            expect(fileio.unlinkSync(fpath) !== null)
            expect(fileio.rmdirSync(dpath) !== null)
            console.log("fileio_test_dirent_is_symbolic_link_000 测试结束");
        } catch (e) {
            console.log("fileio_test_dirent_is_symbolic_link_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    /**
     * @tc.number SUB_DF_FileIO_Dir_IsSymbolicLink_0010
     * @tc.name fileio_test_dirent_is_symbolic_link_001
     * @tc.desc Test Dir.isSymbolicLink() interface.
     */
    //输入异常参数，判断是否是符号链接
    it('fileio_test_dirent_is_symbolic_link_001', 0, function () {
        let dpath = nextFileName('fileio_test_dirent_is_symbolic_link_001') + 'd'
        let fpath = dpath + '/f1'
        let dd

        try {
            console.log("fileio_test_dirent_is_symbolic_link_001 测试开始");
            expect(fileio.mkdirSync(dpath) !== null)
            expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
            dd = fileio.Dir.opendirSync(dpath)
            expect(dd !== null).assertTrue()
            let dirent = dd.readSync()
            expect(dirent !== null).assertTrue()
            dirent.isSymbolicLink(-1)
            expect(null).assertFail()
        } catch (e) {
            expect(dd.closeSync() !== null)
            expect(fileio.unlinkSync(fpath) !== null)
            expect(fileio.rmdirSync(dpath) !== null)
            console.log("fileio_test_dirent_is_symbolic_link_001 测试结束" + e);
        }
    })

})
