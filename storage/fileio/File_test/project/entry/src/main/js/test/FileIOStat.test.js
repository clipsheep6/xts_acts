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

describe('fileIOTestStat', function () {
    console.log("---fileIOTestStat接口测试---")

    it('fileio_test_stat_fstat_sync_000', 0, function () {
        console.log("---fileio_test_stat_fstat_sync_000测试开始---")
        let fpath = nextFileName('fileio_test_stat_fstat_sync_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let fd = fileio.openSync(fpath, 0o2)
            expect(typeof(fd) == "number").assertTrue()
            let stat = fileio.fstatSync(fd)
            expect(stat !== null).assertTrue()
            expect(fileio.closeSync(fd) !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_fstat_sync_000 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_stat_sync_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_fstat_sync_001', 0, function () {
        console.log("---fileio_test_stat_fstat_sync_001测试开始---")
        try {
            let invalidFD = -1
            fileio.fstatSync(invalidFD)
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_stat_fstat_sync_001 has failed for " + e)
        }
    })

    it('fileio_test_stat_stat_sync_000', 0, function () {
        console.log("---fileio_test_stat_stat_sync_000测试开始---")
        let fpath = nextFileName('fileio_test_stat_stat_sync_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(stat !== null).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_stat_sync_000 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_stat_sync_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_stat_sync_001', 0, function () {
        console.log("---fileio_test_stat_stat_sync_001测试开始---")
        let fpath = nextFileName('fileio_test_stat_stat_sync_001')

        try {
            fileio.Stat.statSync(fpath)
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_stat_stat_sync_001 has failed for " + e)
        }
    })

    it('fileio_test_stat_stat_sync_002', 0, function () {
        console.log("---fileio_test_stat_stat_sync_002 测试开始---")
        let dpath = nextFileName('fileio_test_stat_stat_sync_002') + 'd'
        expect(fileio.mkdirSync(dpath) !== null).assertTrue()

        try {
            let stat = fileio.Stat.statSync(dpath)
            expect(stat !== null).assertTrue()
            expect(fileio.rmdirSync(dpath) !== null).assertTrue()
            console.log("---fileio_test_stat_stat_sync_002 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_stat_sync_002 has failed for " + e)
            expect(null).assertFail()
        }
    })

    //传4096字节的路径获取文件信息
    it('fileio_test_stat_stat_sync_003', 0, function () {
        console.log("---fileio_test_stat_stat_sync_003 测试开始---")
        let dpath = nextFileName("111111111111")
        //fileio.mkdirSync(dpath)
        try{
            for(let i = 0; i < 16; i++){
                if(i == 15){
                    let fpath = dpath + "/f" + randomString(248)
                    fileio.Stat.statSync(fpath)
                    console.log((i+1) + "级子文件信息获取成功")
                }else{
                    dpath = dpath + "/d" + randomString(248)
                    //fileio.mkdirSync(dpath)
                    //console.log((i+1) + "级子目录创建成功")
                }
            }
            expect(null).assertFail()
        }catch(e) {
            console.log("fileio_test_stat_stat_sync_003 has failed for " + e)
        }
    })
    it('fileio_test_stat_dev_000', 0, function () {
        console.log("---fileio_test_stat_dev_000测试开始---")
        let fpath = nextFileName('fileio_test_stat_dev_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(typeof(stat.dev) == "number").assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_dev_000 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_dev_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_ino_000', 0, function () {
        console.log("---fileio_test_stat_ino_000测试开始---")
        let fpath = nextFileName('fileio_test_stat_ino_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(typeof(stat.ino) == "number").assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_ino_000 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_ino_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_mode_000', 0, function () {
        console.log("---fileio_test_stat_mode_000测试开始---")
        let fpath = nextFileName('fileio_test_stat_mode_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(typeof(stat.mode) == "number").assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_mode_000 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_mode_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_nlink_000', 0, function () {
        console.log("---fileio_test_stat_nlink_000测试开始---")
        let fpath = nextFileName('fileio_test_stat_nlink_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(typeof(stat.nlink) == "number").assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_nlink_000 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_nlink_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_uid_000', 0, function () {
        console.log("---fileio_test_stat_uid_000测试开始---")
        let fpath = nextFileName('fileio_test_stat_uid_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(typeof(stat.uid) == "number").assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_uid_000 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_uid_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_gid_000', 0, function () {
        console.log("---fileio_test_stat_gid_000测试开始---")
        let fpath = nextFileName('fileio_test_stat_gid_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(typeof(stat.gid) == "number").assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_gid_000 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_gid_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_rdev_000', 0, function () {
        console.log("---fileio_test_stat_rdev_000测试开始---")
        let fpath = nextFileName('fileio_test_stat_rdev_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(typeof(stat.rdev) == "number").assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_rdev_000 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_rdev_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_size_000', 0, function () {
        console.log("---fileio_test_stat_size_000 测试开始---")
        let fpath = nextFileName('fileio_test_stat_size_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(typeof(stat.size) == "number").assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_size_000 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_size_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_blksize_000',0, function () {
        console.log("---fileio_test_stat_blksize_000 测试开始---")
        let fpath = nextFileName('fileio_test_stat_blksize_000')
        expect(prepareFile(fpath,FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(typeof(stat.blksize) == "number").assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_blksize_000 is passed!")
        }catch (e) {
            console.log("fileio_test_stat_blksize_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_blocks_000', 0, function () {
        console.log("---fileio_test_stat_blocks_000测试开始---")
        let fpath = nextFileName('fileio_test_stat_blocks_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(typeof(stat.blocks) == "number").assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_blocks_000 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_blocks_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_atime_000', 0, function () {
        console.log("---fileio_test_stat_atime_000测试开始---")
        let fpath = nextFileName('fileio_test_stat_atime_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(typeof(stat.atime) == "number").assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_atime_000 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_atime_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_mtime_000', 0, function () {
        console.log("---fileio_test_stat_mtime_000测试开始---")
        let fpath = nextFileName('fileio_test_stat_mtime_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(typeof(stat.mtime) == "number").assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_mtime_000 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_mtime_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_ctime_000', 0, function () {
        console.log("---fileio_test_stat_ctime_000测试开始---")
        let fpath = nextFileName('fileio_test_stat_ctime_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(typeof(stat.ctime) == "number").assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_ctime_000 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_ctime_000 has failed for " + e)
            expect(null).assertFail()
        }
    })


    it('fileio_test_stat_is_block_device_000', 0, function () {
        console.log("---fileio_test_stat_is_block_device_000测试开始---")
        let fpath = nextFileName('fileio_test_stat_is_block_device_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(typeof(stat.isBlockDevice()) == "boolean").assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_is_block_device_000 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_is_block_device_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_is_block_device_001', 0, function () {
        console.log("---fileio_test_stat_is_block_device_001测试开始---")
        let fpath = nextFileName('fileio_test_stat_is_block_device_001')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(!stat.isBlockDevice()).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_is_block_device_001 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_is_block_device_001 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_is_block_device_002', 0, function () {
        console.log("---fileio_test_stat_is_block_device_002测试开始---")
        let fpath = nextFileName('fileio_test_stat_is_block_device_002')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(!stat.isBlockDevice(-1)).assertTrue()
            expect(null).assertFail()
        } catch (e) {
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("fileio_test_stat_is_block_device_002 has failed for " + e)
        }
    })

    it('fileio_test_stat_is_character_device_000', 0, function () {
        console.log("---fileio_test_stat_is_character_device_000测试开始---")
        let fpath = nextFileName('fileio_test_stat_is_character_device_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(typeof(stat.isCharacterDevice()) == "boolean").assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_is_character_device_000 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_is_character_device_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_is_character_device_001', 0, function () {
        console.log("---fileio_test_stat_is_character_device_001测试开始---")
        let fpath = nextFileName('fileio_test_stat_is_character_device_001')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(!stat.isCharacterDevice()).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_is_character_device_001 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_is_character_device_001 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_is_character_device_002', 0, function () {
        console.log("---fileio_test_stat_is_character_device_002测试开始---")
        let fpath = nextFileName('fileio_test_stat_is_character_device_002')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(!stat.isCharacterDevice(-1)).assertTrue()
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_stat_is_character_device_002 has failed for " + e)
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
        }
    })

    it('fileio_test_stat_is_directory_000', 0, function () {
        console.log("---fileio_test_stat_is_directory_000测试开始---")
        let fpath = nextFileName('fileio_test_stat_is_directory_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(typeof(stat.isDirectory()) == "boolean").assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_is_directory_000 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_is_directory_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_is_directory_001', 0, function () {
        console.log("---fileio_test_stat_is_directory_001 测试开始---")
        let fpath = nextFileName('fileio_test_stat_is_directory_001')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(!stat.isDirectory()).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_is_directory_001 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_is_directory_001 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_is_directory_002', 0, function () {
        console.log("---fileio_test_stat_is_directory_002 测试开始---")
        let dpath = nextFileName('fileio_test_stat_is_directory_002') + 'd'

        try {
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
            let stat = fileio.Stat.statSync(dpath)
            expect(stat.isDirectory()).assertTrue()
            expect(fileio.rmdirSync(dpath) !== null).assertTrue()
            console.log("---fileio_test_stat_is_directory_002 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_is_directory_002 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_is_directory_003', 0, function () {
        console.log("---fileio_test_stat_is_directory_003 测试开始---")
        let dpath = nextFileName('fileio_test_stat_is_directory_003') + 'd'

        try {
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
            let stat = fileio.Stat.statSync(dpath)
            expect(stat.isDirectory(-1) == null).assertTrue()
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_stat_is_directory_003 has failed for " + e)
            expect(fileio.rmdirSync(dpath) !== null).assertTrue()
        }
    })

    it('fileio_test_stat_is_fifo_000', 0, function () {
        console.log("---fileio_test_stat_is_fifo_000 测试开始---")
        let fpath = nextFileName('fileio_test_stat_is_fifo_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(typeof(stat.isFIFO()) == "boolean").assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_is_fifo_000 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_is_fifo_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_is_fifo_001', 0, function () {
        console.log("---fileio_test_stat_is_fifo_001 测试开始---")
        let fpath = nextFileName('fileio_test_stat_is_fifo_001')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(!stat.isFIFO()).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_is_fifo_001 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_is_fifo_001 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_is_fifo_002', 0, function () {
        console.log("---fileio_test_stat_is_fifo_002 测试开始---")
        let fpath = nextFileName('fileio_test_stat_is_fifo_002')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(stat.isFIFO(-1) == null).assertTrue()
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_stat_is_fifo_002 has failed for " + e)
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
        }
    })

    it('fileio_test_stat_is_file_000', 0, function () {
        console.log("---fileio_test_stat_is_file_000 测试开始---")
        let fpath = nextFileName('fileio_test_stat_is_file_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(typeof(stat.isFile()) == "boolean").assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_is_file_000 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_is_file_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_is_file_001', 0, function () {
        console.log("---fileio_test_stat_is_file_001 测试开始---")
        let fpath = nextFileName('fileio_test_stat_is_file_001')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(stat.isFile()).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_is_file_001 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_is_file_001 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_is_file_002', 0, function () {
        console.log("---fileio_test_stat_is_file_002 测试开始---")
        let dpath = nextFileName('fileio_test_stat_is_file_002')

        try {
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
            let stat = fileio.Stat.statSync(dpath)
            expect(!stat.isFile()).assertTrue()
            expect(fileio.rmdirSync(dpath) !== null).assertTrue()
            console.log("---fileio_test_stat_is_file_002 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_is_file_002 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_is_file_003', 0, function () {
        console.log("---fileio_test_stat_is_file_003 测试开始---")
        let dpath = nextFileName('fileio_test_stat_is_file_003')

        try {
            expect(fileio.mkdirSync(dpath) !== null).assertTrue()
            let stat = fileio.Stat.statSync(dpath)
            expect(stat.isFile(-1) == null).assertTrue()
            expect(null).assertFail()
        } catch (e) {
            expect(fileio.rmdirSync(dpath) !== null).assertTrue()
            console.log("fileio_test_stat_is_file_003 has failed for " + e)
        }
    })

    it('fileio_test_stat_is_socket_000', 0, function () {
        console.log("---fileio_test_stat_is_socket_000 测试开始---")
        let fpath = nextFileName('fileio_test_stat_is_socket_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(typeof(stat.isSocket()) == "boolean").assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_is_socket_000 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_is_socket_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_is_socket_001', 0, function () {
        console.log("---fileio_test_stat_is_socket_001 测试开始---")
        let fpath = nextFileName('fileio_test_stat_is_socket_001')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(!stat.isSocket()).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_is_socket_001 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_is_socket_001 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_is_socket_002', 0, function () {
        console.log("---fileio_test_stat_is_socket_002 测试开始---")
        let fpath = nextFileName('fileio_test_stat_is_socket_002')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(stat.isSocket(-1) == null).assertTrue()
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_stat_is_socket_002 has failed for " + e)
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
        }
    })

    it('fileio_test_stat_is_symbolic_link_000', 0, function () {
        console.log("---fileio_test_stat_is_symbolic_link_000 测试开始---")
        let fpath = nextFileName('fileio_test_stat_is_symbolic_link_000')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(typeof(stat.isSymbolicLink()) == "boolean").assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_is_symbolic_link_000 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_is_symbolic_link_000 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_is_symbolic_link_001', 0, function () {
        console.log("---fileio_test_stat_is_symbolic_link_001 测试开始---")
        let fpath = nextFileName('fileio_test_stat_is_symbolic_link_001')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(!stat.isSymbolicLink()).assertTrue()
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
            console.log("---fileio_test_stat_is_symbolic_link_001 is passed!")
        } catch (e) {
            console.log("fileio_test_stat_is_symbolic_link_001 has failed for " + e)
            expect(null).assertFail()
        }
    })

    it('fileio_test_stat_is_symbolic_link_002', 0, function () {
        console.log("---fileio_test_stat_is_symbolic_link_002 测试开始---")
        let fpath = nextFileName('fileio_test_stat_is_symbolic_link_002')
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()

        try {
            let stat = fileio.Stat.statSync(fpath)
            expect(stat.isSymbolicLink(-1) == null).assertTrue()
            expect(null).assertFail()
        } catch (e) {
            console.log("fileio_test_stat_is_symbolic_link_002 has failed for " + e)
            expect(fileio.unlinkSync(fpath) !== null).assertTrue()
        }
    })

})