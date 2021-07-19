
import fileio from '@ohos.fileio'
import bundle_mgr from '@ohos.bundle_mgr'

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'
import { FILE_CONTENT, prepareFile, nextFileName ,differentFileName,sleep} from './Common'

describe('fileIOStability', function () {
    console.log("------fileIOStability-------稳定性测试")
    /* 7*24长时间运行*/
    for (let i = 0; i <= 100000; i++) {

        it('fileIOStability_dir', 0, function () {
            console.log("fileIOStability_dir")
            try {
                console.log("------fileIOStability_dir---开始---------" + i)
                let dpath = nextFileName('fileIOStability') + 'd'
                fileio.mkdirSync(dpath)
                let fpath = dpath + '/f1'
                prepareFile(fpath, FILE_CONTENT)
                let dd = fileio.Dir.opendirSync(dpath)
                dd.readSync()
                dd.closeSync()
                fileio.unlinkSync(fpath)
                fileio.rmdirSync(dpath)
                console.log("------fileIOStability_dir---结束---------" + i)
            } catch (e) {
                console.log("fileIOStability_dir has failed for " + e)

            }
        })


        it('fileIOStability_dirent', 0, function () {
            console.log("fileIOStability_dirent")
            try {
                console.log("----fileIOStability_dirent-----开始---------" + i)
                let dpath = nextFileName('fileIOStability') + 'd'
                fileio.mkdirSync(dpath)
                let fpath = dpath + '/f1'
                prepareFile(fpath, FILE_CONTENT)
                let dd = fileio.Dir.opendirSync(dpath)
                let dirent = dd.readSync()
                dirent.isBlockDevice()
                dirent.isCharacterDevice()
                dirent.isDirectory()
                dirent.isFIFO()
                dirent.isSocket()
                dirent.isSymbolicLink()
                dd.closeSync()
                fileio.unlinkSync(fpath)
                fileio.rmdirSync(dpath)
                console.log("----fileIOStability_dirent-----结束---------" + i)
            } catch (e) {
                console.log("fileIOStability_dirent has failed for " + e)

            }

        })
        it('fileIOStability_stat', 0, function () {
            console.log("fileIOStability_stat")
            try {
                console.log("-----fileIOStability_stat----开始---------" + i)
                let dpath = nextFileName('fileIOStability') + 'd'
                fileio.mkdirSync(dpath)
                let fpath = dpath + '/f1'
                prepareFile(fpath, FILE_CONTENT)
                let stat = fileio.Stat.statSync(fpath)
                stat.isBlockDevice()
                stat.isCharacterDevice()
                stat.isDirectory()
                stat.isFIFO()
                stat.isSocket()
                stat.isSymbolicLink()
                stat.dev
                stat.uid
                stat.ino
                stat.mode
                stat.nlink
                stat.gid
                stat.rdev
                stat.size
                stat.blocks
                stat.atime
                stat.mtime
                stat.ctime

                fileio.unlinkSync(fpath)
                fileio.rmdirSync(dpath)
                console.log("-----fileIOStability_stat----结束---------" + i)
            } catch (e) {
                console.log("fileIOStability_stat has failed for " + e)

            }
        })

        it('fileIOStability_stream', 0, function () {
            console.log("---fileIOStability_stream 测试开始---")
            let fpath = nextFileName('fileIOStability_stream')
            expect(prepareFile(fpath, FILE_CONTENT)).assertTrue()
            let ss

            try {
                console.log("-----fileIOStability_stream----开始---------" + i)
                let fd = fileio.openSync(fpath, 0o2)
                ss = fileio.Stream.fdopenStreamSync(fd, "r+")
                ss.writeSync(FILE_CONTENT)
                ss.flushSync()
                ss.closeSync()

                ss = fileio.Stream.createStreamSync(fpath, "r+")
                ss.readSync(new ArrayBuffer(4096))
                ss.closeSync()
                fileio.unlinkSync(fpath)
                console.log("-----fileIOStability_stream----结束---------" + i)
            } catch (e) {
                console.log("fileIOStability_stream has failed for " + e)
                expect(null).assertFail()
            }
        })

        it('fileIOStability_pop', 0, function () {
            console.log("fileIOStability_pop")
            try {
                console.log("-----fileIOStability_pop----开始---------" + i)
                let dpath = nextFileName('fileIOStability') + 'd'
                fileio.mkdirSync(dpath)
                let fpath = nextFileName('fileIOStability')
                let fpathTarget = fpath + 'tgt'
                let fpathTarget1 = fpath + 'tgtt'
                let ff = fileio.openSync(fpath, 0o102, 0o666)
                fileio.accessSync(fpath)
                fileio.chmodSync(fpath, 0o660)
                let stat = fileio.Stat.statSync(fpath)
                fileio.chownSync(fpath, stat.uid, stat.gid)
                fileio.copyFileSync(fpath, fpathTarget)
                fileio.fchmodSync(ff, 0o660)
                fileio.fchownSync(ff, stat.uid, stat.gid)
                fileio.fstatSync(ff)
                fileio.ftruncateSync(ff)
                fileio.renameSync(fpath, fpathTarget1)
                fileio.fsyncSync(ff)
                fileio.truncateSync(fpathTarget1)
                fileio.writeSync(ff, FILE_CONTENT)
                fileio.closeSync(ff)
                fileio.unlinkSync(fpathTarget1)
                fileio.unlinkSync(fpathTarget)
                fileio.rmdirSync(dpath)
                console.log("-----fileIOStability_pop----结束---------" + i)
                sleep(4000)

            } catch (e) {
                console.log("fileIOStability_pop has failed for " + e)
            }
        })
    }
})