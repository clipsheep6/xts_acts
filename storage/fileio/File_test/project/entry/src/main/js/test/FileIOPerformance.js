// @ts-nocheck
import fileio from '@ohos.fileio'
import bundle_mgr from '@ohos.bundle_mgr'
import file from '@system.file';
import { describe, beforeAll,beforeEach, afterEach, afterAll, it,  } from 'deccjsunit/index'
import { FILE_CONTENT, prepareFile,fileName,fileCacheName,fileName1 ,nextFileName ,differentFileName,sleep,
    prepareEmptyFile,fileToReadOnly,fileToWriteOnly,fileToReadAndWrite,cacheFileName,getFileTextLen,isFileExist,randomString} from './Common'

describe('fileTest', function () {

    /*fileio dir dirent 性能测试*/
    it('fileioPerformance_Dir_Dirent',0,function(){
        console.log("-------fileioPerformance_Dir_Dirent-------");

        for(let i = 0; i < 1000; i++){
            let dpath = nextFileName('fileioPerformance_Dir') + 'd'
            let fpath = dpath + '/f0'


            let start0 = new Date().getTime();
            let mkdirSync = fileio.mkdirSync(dpath);
            let end0 = new Date().getTime();
            let time0 = end0-start0;
            console.log("-------fileioPerformance_prop,mkdirSync:"+mkdirSync+", time0:" +time0+","+i);
            //            console.log("-------fileioPerformance_prop,end0:"+end0+", start0:"+start0);

            prepareFile(fpath, FILE_CONTENT);

            let start = new Date().getTime();
            let dd = fileio.Dir.opendirSync(dpath);
            let end = new Date().getTime();
            let time = end-start;
            console.log("-------fileioPerformance_Dir,opendirSync:"+dd+", time:" +time+","+i);
            //            console.log("-------fileioPerformance_Dir,end:"+end+", start:"+start);

            let start1 = new Date().getTime();
            let dirent = dd.readSync();
            let end1 = new Date().getTime();
            let time1 = end1-start1;
            console.log("-------fileioPerformance_Dir,readSync:"+dirent+", time1:" +time1+","+i);
            //            console.log("-------fileioPerformance_Dir,end1:"+end1+", start1:"+start1);

            let start5 = new Date().getTime();
            let isBlockDevice = dirent.isBlockDevice();
            let end5 = new Date().getTime();
            let time5 = end5-start5;
            console.log("-------fileioPerformance_Dirent,isBlockDevice:"+isBlockDevice+", time5:" +time5+","+i);
            //            console.log("-------fileioPerformance_Dirent,end5:"+end5+", start5:"+start5);

            let start6 = new Date().getTime();
            let isCharacterDevice = dirent.isCharacterDevice();
            let end6 = new Date().getTime();
            let time6 = end6-start6;
            console.log("-------fileioPerformance_Dirent,isCharacterDevice:"+isCharacterDevice+", time6:" +time6+","+i);
//            console.log("-------fileioPerformance_Dirent end6:"+end6+", start6:"+start6);

            let start7 = new Date().getTime();
            let isDirectory = dirent.isDirectory();
            let end7 = new Date().getTime();
            let time7 = end7-start7;
            console.log("-------fileioPerformance_Dirent,isDirectory:"+isDirectory+", time7:" +time7+","+i);
//            console.log("-------fileioPerformance_Dirent end7:"+end7+", start7:"+start7);

            let start8 = new Date().getTime();
            let isFIFO = dirent.isFIFO();
            let end8 = new Date().getTime();
            let time8 = end8-start8;
            console.log("-------fileioPerformance_Dirent,isFIFO:"+isFIFO+", time8:" +time8+","+i);
//            console.log("-------fileioPerformance_Dirent end8:"+end8+", start8:"+start8);

            let start9 = new Date().getTime();
            let isFile = dirent.isFile();
            let end9 = new Date().getTime();
            let time9 = end9-start9;
            console.log("-------fileioPerformance_Dirent,isFile:"+isFile+", time9:" +time9+","+i);
//            console.log("-------fileioPerformance_Dirent end9:"+end9+", start9:"+start9);

            let start10 = new Date().getTime();
            let isSocket = dirent.isSocket();
            let end10 = new Date().getTime();
            let time10 = end10-start10;
            console.log("-------fileioPerformance_Dirent,isSocket:"+isSocket+", time10:" +time10+","+i);
//            console.log("-------fileioPerformance_Dirent end10:"+end10+", start10:"+start10);


            let start12 = new Date().getTime();
            let isSymbolicLink = dirent.isSymbolicLink();
            let end12 = new Date().getTime();
            let time12 = end12-start12;
            console.log("-------fileioPerformance_Dirent,isSymbolicLink:"+isSymbolicLink+", time12:" +time12+","+i);
//            console.log("-------fileioPerformance_Dirent end12:"+end12+", start12:"+start12);


            let start2 = new Date().getTime();
            let result = dd.closeSync()
            let end2 = new Date().getTime();
            let time2 = end2-start2;
            console.log("-------fileioPerformance_Dir,closeSync:"+result+", time2:" +time2+","+i);
//            console.log("-------fileioPerformance_Dir end2:"+end2+", start2:"+start2);

            let start3 = new Date().getTime();
            let unlinkSync = fileio.unlinkSync(fpath);
            let end3 = new Date().getTime();
            let time3 = end3-start3;
            console.log("-------fileioPerformance_prop,unlinkSync:"+unlinkSync+", time3:" +time3+","+i);
//            console.log("-------fileioPerformance_prop end3:"+end3+", start3:"+start3);


            let start4 = new Date().getTime();
            let rmdirSync = fileio.rmdirSync(dpath);
            let end4 = new Date().getTime();
            let time4 = end4-start4
            console.log("-------fileioPerformance_prop,rmdirSync:"+rmdirSync+", time4:" +time4+","+i);
//            console.log("-------fileioPerformance_prop end4:"+end4+", start4:"+start4);
        }
        sleep(3000);
    })
    /*fileio stat 性能测试*/
    it('fileioPerformance_stat',0,function(){
        console.log("-------fileioPerformance_stat-------");

        for(let i = 0; i < 1000; i++) {
            let kdpath = "/data/accounts/account_0/appdata/ohos.acts.distributeddatamgr.distributedfile/cache/";
            let fpath = kdpath + '/4k'

            let start0 = new Date().getTime();
            let stat = fileio.Stat.statSync(fpath);
            let end0 = new Date().getTime();
            let time0 = end0 - start0;
            console.log("-------stat,statSync:" + stat + ", time0:" + time0+","+i);
//            console.log("-------stat end0:" + end0 + ", start0:" + start0 + ", time0:" + time0);

            let start = new Date().getTime();
            let isBlockDevice = stat.isBlockDevice();
            let end = new Date().getTime();
            let time = end - start;
            console.log("-------stat,isBlockDevice:" + isBlockDevice + ", time:" + time+","+i);
//            console.log("-------stat end:" + end + ", start:" + start + ", time:" + time);

            let start1 = new Date().getTime();
            let isCharacterDevice = stat.isCharacterDevice();
            let end1 = new Date().getTime();
            let time1 = end1-start1;
            console.log("-------stat,isCharacterDevice:"+isCharacterDevice+", time1:" +time1+","+i);
            //        console.log("-------stat end1:"+end1+", start1:"+start1+", time1:" +time1);


            let start2 = new Date().getTime();
            let isDirectory = stat.isDirectory();
            let end2 = new Date().getTime();
            let time2 = end2-start2;
            console.log("-------stat,isDirectory:"+isDirectory+", time2:" +time2+","+i);
//            console.log("-------stat,end2:"+end2+", start2:"+start2+", time2:" +time2);

            let start3 = new Date().getTime();
            let isFIFO = stat.isFIFO();
            let end3 = new Date().getTime();
            let time3 = end3-start3;
            console.log("-------stat,isFIFO:"+isFIFO+", time3:" +time3+","+i);
//            console.log("-------stat,end3:"+end3+", start3:"+start3+", time3:" +time3);


            let start4 = new Date().getTime();
            let isFile = stat.isFile();
            let end4 = new Date().getTime();
            let time4 = end4-start4;
            console.log("-------stat,isFile:"+isFile+", time4:" +time4+","+i);
//            console.log("-------stat,end4:"+end4+", start4:"+start4+", time4:" +time4);


            let start5 = new Date().getTime();
            let isSocket = stat.isSocket();
            let end5 = new Date().getTime();
            let time5 = end5-start5;
            console.log("-------stat,isSocket:"+isSocket+", time5:" +time5+","+i);
//            console.log("-------stat,end5:"+end5+", start5:"+start5+", time5:" +time5);

            let start6 = new Date().getTime();
            let isSymbolicLink = stat.isSymbolicLink();
            let end6 = new Date().getTime();
            let time6 = end6-start6;
            console.log("-------stat,isSymbolicLink:"+isSymbolicLink+", time6:" +time6+","+i);
//            console.log("-------stat,end6:"+end6+", start6:"+start6+", time6:" +time6);
//            fileio.unlinkSync(fpath);
        }

        sleep(3000);
    })
    /*fileio prop 性能测试*/
    it('fileioPerformance_prop',0,function(){
        console.log("-------fileioPerformance_prop-------");

        let mkdirSync;
        let start0 = new Date().getTime();
        for(let i = 0; i < 1000; i++){
            mkdirSync = fileio.mkdirSync("/data/accounts/account_0/appdata/ohos.acts.distributeddatamgr.distributedfile/cache/"+"fileioPerformance_Dir" + "d"+i);
        }
        let end0 = new Date().getTime();
        let time0 = end0-start0

        //在我第999个文件夹里创建1000个文件
        for(let i = 0; i < 1000; i++){
            prepareFile("/data/accounts/account_0/appdata/ohos.acts.distributeddatamgr.distributedfile/cache/"+"fileioPerformance_Dir" + "d"+"999/f0"+i, randomString(4096));
        }

        let fd

        for(let i = 0; i < 1000; i++){
            let start = new Date().getTime();
            fd = fileio.openSync("/data/accounts/account_0/appdata/ohos.acts.distributeddatamgr.distributedfile/cache/"+"fileioPerformance_Dir" + "d"+"999/f0"+i,0o102, 0o666);
            let end = new Date().getTime();
            let time = end-start
            console.log("-------fileioPerformance_prop_openSync,openSync:" + fd + ", time:" + time + "," + i);
        }

        for(let i = 0; i < 1000; i++){
            let accessSync ;
            let start1 = new Date().getTime();
            accessSync = fileio.accessSync("/data/accounts/account_0/appdata/ohos.acts.distributeddatamgr.distributedfile/cache/"+'fileioPerformance_Dir' + 'd'+"999/f0"+i)
            let end1 = new Date().getTime();
            let time1 = end1-start1;
            console.log("-------fileioPerformance_prop_accessSync,accessSync:" + fd + ", time1:" + time1 + "," + i);
        }

        for(let i = 0; i < 1000; i++){
            let chmodSync;
            let start5 = new Date().getTime();
            chmodSync = fileio.chmodSync("/data/accounts/account_0/appdata/ohos.acts.distributeddatamgr.distributedfile/cache/"+'fileioPerformance_Dir' + 'd'+"999/f0"+i, 0o660);
            let end5 = new Date().getTime();
            let time5 = end5-start5;
            console.log("-------fileioPerformance_prop_chmodSync,chmodSync:" + chmodSync + ", time5:" + time5 + "," + i);
        }

        //获取第999个文件夹里第999个文件信息
        let stat = fileio.Stat.statSync("/data/accounts/account_0/appdata/ohos.acts.distributeddatamgr.distributedfile/cache/"+'fileioPerformance_Dir' + 'd'+"999/f0999")

        for(let i = 0; i < 1000; i++){
            let chownSync;
            let start6 = new Date().getTime();
            chownSync = fileio.chownSync("/data/accounts/account_0/appdata/ohos.acts.distributeddatamgr.distributedfile/cache/"+'fileioPerformance_Dir' + 'd'+"999/f0"+i, stat.uid,stat.gid);
            let end6 = new Date().getTime();
            let time6 = end6-start6;
            console.log("-------fileioPerformance_prop_chownSync,chownSync:" + chownSync + ", time6:" + time6 + "," + i);
        }

        for(let i = 0; i < 1000; i++){
            let copyFileSync;
            let start7 = new Date().getTime();
            copyFileSync = fileio.copyFileSync("/data/accounts/account_0/appdata/ohos.acts.distributeddatamgr.distributedfile/cache/"+'fileioPerformance_Dir' + 'd'+"999/f0"+i,
                "/data/accounts/account_0/appdata/ohos.acts.distributeddatamgr.distributedfile/cache/"+'fileioPerformance_Dir' + 'd'+"998/f0"+i);
            let end7 = new Date().getTime();
            let time7 = end7-start7;
            console.log("-------fileioPerformance_prop_copyFileSync,copyFileSync:" + copyFileSync + ", time7:" + time7 + "," + i);
        }

        for(let i = 0; i < 1000; i++){
            let fchmodSync;
            let start8 = new Date().getTime();
            fchmodSync = fileio.fchmodSync(fd, 0o660);
            let end8 = new Date().getTime();
            let time8 = end8-start8;
            console.log("-------fileioPerformance_prop_fchmodSync,fchmodSync:" + fchmodSync + ", time8:" + time8 + "," + i);

        }

        for(let i = 0; i < 1000; i++){
            let fchownSync;
            let start9 = new Date().getTime();
            fchownSync = fileio.fchownSync(fd,stat.uid,stat.gid);
            let end9 = new Date().getTime();
            let time9 = end9-start9;
            console.log("-------fileioPerformance_prop_fchownSync,fchownSync:" + fchownSync + ", time9:" + time9 + "," + i);

        }

        for(let i = 0; i < 1000; i++){
            let fstatSync;
            let start10 = new Date().getTime();
            fstatSync = fileio.fstatSync(fd);
            let end10 = new Date().getTime();
            let time10 = end10-start10;
            console.log("-------fileioPerformance_prop_fstatSync,fstatSync:" + fstatSync + ", time10:" + time10 + "," + i);

        }

        for(let i = 0; i < 1000; i++){
            let ftruncateSync;
            let start12 = new Date().getTime();
            ftruncateSync = fileio.ftruncateSync(fd);
            let end12 = new Date().getTime();
            let time12 = end12-start12;
            console.log("-------fileioPerformance_prop_ftruncateSync,ftruncateSync:" + ftruncateSync + ", time12:" + time12 + "," + i);
        }

        for(let i = 0; i < 1000; i++){
            let renameSync;
            let start13 = new Date().getTime();
            renameSync = fileio.renameSync("/data/accounts/account_0/appdata/ohos.acts.distributeddatamgr.distributedfile/cache/"+'fileioPerformance_Dir' + 'd'+"998/f0"+i,
                "/data/accounts/account_0/appdata/ohos.acts.distributeddatamgr.distributedfile/cache/"+'fileioPerformance_Dir' + 'd'+"998/f0"+i+"a");
            let end13 = new Date().getTime();
            let time13 = end13-start13;
            console.log("-------fileioPerformance_prop_renameSync,renameSync:" + renameSync + ", time13:" + time13 + "," + i);
        }

        for(let i = 0; i < 1000; i++){
            let truncateSync;
            let start14 = new Date().getTime();
            truncateSync = fileio.truncateSync("/data/accounts/account_0/appdata/ohos.acts.distributeddatamgr.distributedfile/cache/"+'fileioPerformance_Dir' + 'd'+"998/f0"+i+"a",10);
            let end14 = new Date().getTime();
            let time14 = end14-start14;
            console.log("-------fileioPerformance_prop_truncateSync,truncateSync:" + truncateSync + ", time14:" + time14 + "," + i);
        }

        //fsyncSync(fd)同步将缓冲区数据写回磁盘进行数据同步??

        for(let i = 0; i < 1000; i++){
            let fsyncSync;
            let start16 = new Date().getTime();
            fsyncSync = fileio.fsyncSync(fd);
            let end16 = new Date().getTime();
            let time16 = end16-start16;
            console.log("-------fileioPerformance_prop_fsyncSync,fsyncSync:" + fsyncSync + ", time16:" + time16 + "," + i);
        }

        //writeSync(fd, buf, options)同步写文件数据

        for(let i = 0; i < 1000; i++){
            let writeSync;
            let start17 = new Date().getTime();
            writeSync = fileio.writeSync(fd,FILE_CONTENT, {
                length: 3
            });
            let end17 = new Date().getTime();
            let time17 = end17-start17;
            console.log("-------fileioPerformance_prop_writeSync,writeSync:" + writeSync + ", time17:" + time17 + "," + i);
        }

        for(let i = 0; i < 1000; i++){
            let result ;
            let start2 = new Date().getTime();
            let fd1 = fileio.openSync("/data/accounts/account_0/appdata/ohos.acts.distributeddatamgr.distributedfile/cache/"+'fileioPerformance_Dir' + 'd'+"999/f0"+i,0o102, 0o666);
            result = fileio.closeSync(fd1);
            let end2 = new Date().getTime();
            let time2 = end2-start2
            console.log("-------fileioPerformance_prop_closeSync,closeSync:" + result + ", time2:" + time2 + "," + i);
        }

        //readSync(fd, buf, options)同步从指定文件中读取数据

        for(let i = 0; i < 1000; i++){
            let readSync;
            let start15 = new Date().getTime();
            let fd1 = fileio.openSync("/data/accounts/account_0/appdata/ohos.acts.distributeddatamgr.distributedfile/cache/"+'fileioPerformance_Dir' + 'd'+"999/f0"+i,0o102, 0o666);
            readSync = fileio.readSync(fd1, new ArrayBuffer(4096));
            fileio.closeSync(fd1)
            let end15 = new Date().getTime();
            let time15 = end15-start15;
            console.log("-------fileioPerformance_prop_readSync,readSync:" + readSync + ", time15:" + time15 + "," + i);
        }

        sleep(3000);
    })

    it('fileioPerformance_prop_write', 0, function () {
        for(let i = 0; i < 1000; i++) {
            let dpath = nextFileName('fileioPerformance_stream') + 'd';
            let fpath = dpath + '/f0';

            fileio.mkdirSync(dpath);
            prepareFile(fpath, "a")

            let fd = fileio.openSync(fpath,0o102, 0o666);

            //writeSync(fd, buf, options)同步写文件数据
            let start17 = new Date().getTime();
            let writeSync = fileio.writeSync(fd,randomString(4096));
            let end17 = new Date().getTime();
            let time17 = end17-start17;
            console.log("-------fileioPerformance_prop_write,writeSync:"+writeSync+", time17:" +time17+","+i);
            //            console.log("-------fileioPerformance_prop,end17:"+end17+", start17:"+start17+", time17:" +time17);

            fileio.closeSync(fd);
            fileio.unlinkSync(fpath);
            fileio.rmdirSync(dpath);
        }
        console.log("-------测试结束-------");
    })

    /*fileio stream 性能测试*/
    it('fileioPerformance_stream', 0, function () {
        console.log("---fileioPerformance_stream 测试开始---")
        let kdpath = "/data/accounts/account_0/appdata/ohos.acts.distributeddatamgr.distributedfile/cache/";
        let fpath = kdpath + '/4k';
        prepareFile(fpath, randomString(4096))
        console.log("-------fileioPerformance_stream------openSync-1------")
        for(let i = 0; i < 1000; i++) {
            let fd = fileio.openSync(fpath, 0o2)
            let start = new Date().getTime()
            let ss = fileio.Stream.fdopenStreamSync(fd, "r+")
            let end = new Date().getTime()
            let time = end - start;
            console.log("-------fileioPerformance_stream,fdopenStreamSync(r+):" + ss + ", time:" + time + "," + i);
            fileio.closeSync(fd)
            ss.closeSync()
        }
        for(let i = 0; i < 1000; i++) {
            let fd0 = fileio.openSync(fpath, 0o2)
            let start0 = new Date().getTime()
            let ss0 = fileio.Stream.fdopenStreamSync(fd0, "rb+")
            let end0 = new Date().getTime()
            let time0 = end0 - start0;
            console.log("-------fileioPerformance_stream,fdopenStreamSync(rb+):" + ss0 + ", time0:" + time0 + "," + i);

            fileio.closeSync(fd0)
            ss0.closeSync()
        }
        for(let i = 0; i < 1000; i++) {
            let start1 = new Date().getTime()
            let createFlag0 = fileio.Stream.createStreamSync(fpath, "r+")
            let end1 = new Date().getTime()
            let time1 = end1 - start1;
            console.log("-------fileioPerformance_stream,createStreamSync(r+):" + createFlag0 + ", time1:" + time1 + "," + i);
            createFlag0.closeSync()
        }
        for(let i = 0; i < 1000; i++) {
            let start2 = new Date().getTime()
            let createFlag = fileio.Stream.createStreamSync(fpath, "rb+")
            let end2 = new Date().getTime()
            let time2 = end2 - start2;
            console.log("-------fileioPerformance_stream,createStreamSync(rb+):"+createFlag+", time2:" +time2+","+i);
        }
        for(let i = 0; i < 1000; i++) {
            let createFlag = fileio.Stream.createStreamSync(fpath, "r+")
            let start3 = new Date().getTime()
            let readSync = createFlag.readSync(new ArrayBuffer(4096))
            let end3 = new Date().getTime()
            let time3 = end3 - start3
            console.log("-------fileioPerformance_stream,readSync:" + readSync + ", time3:" + time3 + "," + i);
            createFlag.closeSync()
        }
        for(let i = 0; i < 1000; i++) {
            let createFlag = fileio.Stream.createStreamSync(fpath, "r+")
            let start4 = new Date().getTime()
            let flushSync = createFlag.flushSync()
            let end4 = new Date().getTime()
            let time4 = end4 - start4
            console.log("-------fileioPerformance_stream,flushSync:" + flushSync + ", time4:" + time4 + "," + i);
            createFlag.closeSync()
        }
        for(let i = 0; i < 1000; i++) {
            let createFlag = fileio.Stream.createStreamSync(fpath, "r+")
            let start5 = new Date().getTime()
            let closeSync = createFlag.closeSync()
            let end5 = new Date().getTime()
            let time5 = end5 - start5
            console.log("-------fileioPerformance_stream,closeSync:" + closeSync + ", time5:" + time5 + "," + i);
        }
        sleep(3000);
    })

    it('fileioPerformance_stream_write', 0, function () {
        for(let i = 0; i < 1000; i++) {
            let dpath = nextFileName('fileioPerformance_stream') + 'd';
            let fpath = dpath + '/f0';

            fileio.mkdirSync(dpath);
            prepareFile(fpath, "a")

            let createFlag = fileio.Stream.createStreamSync(fpath, "rb+")

            let start2 = new Date().getTime()
            let writeSync = createFlag.writeSync(randomString(4096))
            let end2 = new Date().getTime()
            let time2 = end2 - start2 ;
            console.log("-------fileioPerformance_stream_write,writeSync:"+writeSync+", time2:" +time2+","+i);

            createFlag.closeSync();
            fileio.unlinkSync(fpath);
            fileio.rmdirSync(dpath);
        }
        sleep(3000);
    })

    /*4k测试文件的流读写性能测试/低内存文件的流读写性能测试*/
    it('fileioPerformance_stream_write_read', 0, function () {
        console.log("---fileioPerformance_stream_write_read 1G测试开始---")
        let fpath = nextFileName('p3')
        prepareFile(fpath, randomString(4096))
        for(let i = 0; i < 1000; i++) {
            let ws = fileio.Stream.createStreamSync(fpath, "a")
            let start1 = new Date().getTime()
            let writeSync = ws.writeSync(randomString(4096))
            let end1 = new Date().getTime()
            let time1 = end1 - start1
            console.log("-------fileioPerformance_stream_write,writeSync:"+writeSync+", time1:" +time1+","+i);
            ws.closeSync();
        }
        sleep(3000);
        for(let i = 0; i < 1000; i++) {
            let rs = fileio.Stream.createStreamSync(fpath, "r")
            let start2 = new Date().getTime()
            let readSync = rs.readSync(new ArrayBuffer(10240))
            let end2 = new Date().getTime()
            let time2 = end2 - start2
            console.log("-------fileioPerformance_stream_readSync,readSync:"+readSync+", time2:" +time2+","+i);
            rs.closeSync();
        }
        sleep(3000);
    })
    /*0.5g测试文件的流读写性能测试
    （需提前手动置入路径"/data/accounts/account_0/appdata/ohos.acts.distributeddatamgr.distributedfile/cache/p1"的1g文件）*/
    it('fileioPerformance_stream_write_read', 0, function () {
        console.log("---fileioPerformance_stream_write_read 1G测试开始---")
        let fpath = nextFileName('p1')
        for(let i = 0; i < 4096; i++) {
            let ws = fileio.Stream.createStreamSync(fpath, "a")
            let start1 = new Date().getTime()
            let writeSync = ws.writeSync(randomString(131072))
            let end1 = new Date().getTime()
            let time1 = end1 - start1
            console.log("-------fileioPerformance_stream_write,writeSync:"+writeSync+", time1:" +time1+","+i);
            ws.closeSync();
        }
        sleep(3000);
        for(let i = 0; i < 1000; i++) {
            let rs = fileio.Stream.createStreamSync(fpath, "r")
            let start2 = new Date().getTime()
            let readSync = rs.readSync(new ArrayBuffer(10240))
            let end2 = new Date().getTime()
            let time2 = end2 - start2
            console.log("-------fileioPerformance_stream_readSync,readSync:"+readSync+", time2:" +time2+","+i);
            rs.closeSync();
        }
        sleep(3000);
    })

    //0.5G测试文件的copyFileSync
    it('fileioPerformance_prop_copyFile', 0, function () {
        console.log("---fileioPerformance_prop_copyFile 0.5G测试开始---")
        let fpath = nextFileName('p1')
        let fpathTarget = nextFileName('p2')

        for(let i = 0; i < 1000; i++){
            let start2 = new Date().getTime()
            let copyFileSync = fileio.copyFileSync(fpath, fpathTarget)
            let end2 = new Date().getTime()
            let time2 = end2 - start2
            console.log("-------fileioPerformance_prop_copyFileSync,copyFileSync:"+copyFileSync+", time2:" +time2+","+i);
            fileio.unlinkSync(fpathTarget)
            sleep(300)
        }
        fileio.closeSync(fd)
        sleep(3000);
    })
    /*1g测试文件的同步读写性能测试
    （需提前手动置入路径"/data/accounts/account_0/appdata/ohos.acts.distributeddatamgr.distributedfile/cache/p1"的1g文件）*/
    it('fileioPerformance_prop_open_write_read', 0, function () {
        console.log("---fileioPerformance_prop_open_write_read 1G测试开始---")
        let fpath = nextFileName('p1')
        let fd
        for(let i = 0; i < 1000; i++) {
            let start = new Date().getTime()
            fd = fileio.openSync(fpath, 0o2002)
            let end = new Date().getTime()
            let time = end - start
            console.log("-------fileioPerformance_prop_openSync,openSync:"+fd+", time:" +time+","+i);
        }

        for(let i = 0; i < 1000; i++) {
            let start1 = new Date().getTime()
            let writeSync = fileio.writeSync(fd, randomString(4096))
            let end1 = new Date().getTime()
            let time1 = end1 - start1
            console.log("-------fileioPerformance_prop_write,writeSync:"+writeSync+", time1:" +time1+","+i);
        }
        for(let i = 0; i < 1000; i++){
            let start2 = new Date().getTime()
            let readSync = fileio.readSync(fd, new ArrayBuffer(40960))
            let end2 = new Date().getTime()
            let time2 = end2 - start2
            console.log("-------fileioPerformance_prop_readSync,readSync:"+readSync+", time2:" +time2+","+i);
        }
        fileio.closeSync(fd)
        sleep(3000);
    })

})
