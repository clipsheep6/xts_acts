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
import zlib from '@ohos.zlib'
import fileio from '@ohos.fileio'
<<<<<<< HEAD
=======
import file from '@system.file'
>>>>>>> upstream/master
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

describe('ZlibTest', function () {

/*
* @tc.number: FWK_ZipFile_0100
* @tc.name: zipFile
<<<<<<< HEAD
* @tc.desc: inFile doesn't exist 
*/
it('FWK_ZipFile_0100', 0, async function (done) {
    console.log("==================FWK_ZipFile_0100 start==================");
    var src = "/data/noExist.txt";
    var dest = "/data/test/";
    var options = {}
    zlib.zipFile(src, dest, options,
        (err, data) => {
=======
* @tc.desc: inFile is empty
*/
it('FWK_ZipFile_0100', 0, async function (done) {
    console.log("==================FWK_ZipFile_0100 start==================");
    var src = "";
    var dest = "/data/testA/";
    var options = {}
    zlib.zipFile(src, dest, options,
        (err, data) => {

>>>>>>> upstream/master
            console.log("zipFileCallback_0100 data: " + data);
            expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_STREAM_ERROR);
            done();
    });
})

/*
* @tc.number: FWK_ZipFile_0200
* @tc.name: zipFile
<<<<<<< HEAD
* @tc.desc: inFile is a directory that doesn't exist
*/
it('FWK_ZipFile_0200', 0, async function (done) {
    console.log("==================FWK_ZipFile_0200 start==================");
    var src = "/data/test/not_exist/";
    var dest = "/data/testA/not_exist.zip";
=======
* @tc.desc: inFile doesn't exist
*/
it('FWK_ZipFile_0200', 0, async function (done) {
    console.log("==================FWK_ZipFile_0200 start==================");
    var src = "/data/test/notExist.txt";
    var dest = "/data/testA/";
>>>>>>> upstream/master
    var options = {}
    zlib.zipFile(src, dest, options,
        (err, data) => {
            console.log("zipFileCallBack_0200 data: " + data);
<<<<<<< HEAD
            expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_DATA_ERROR);
=======
            expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_STREAM_ERROR);
>>>>>>> upstream/master
            done();
        });  
})

/*
* @tc.number: FWK_ZipFile_0300
* @tc.name: zipFile
* @tc.desc: output file not specified
*/
it('FWK_ZipFile_0300', 0, async function (done) {
    console.log("==================FWK_ZipFile_0300 start==================");
    var src = "/data/test/ceshi.txt";
    var dest = "";
    var options = {}
    zlib.zipFile(src, dest, options,
        (err, data) => {
            console.log("zipFileCallBack_0300 data: " + data);
            expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_STREAM_ERROR);
            done();
        });
})

/*
* @tc.number: FWK_ZipFile_0400
* @tc.name: zipFile 
* @tc.desc: The ouput file is a directory that does not exist
*/
it('FWK_ZipFile_0400', 0, async function (done) {
    console.log("==================FWK_ZipFile_0400 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testB/ceshi.txt.zip";
=======
    var dest = "/data/notExist/";
>>>>>>> upstream/master
    var options = {}
    zlib.zipFile(src, dest, options,
        (err, data) => {
            console.log("zipFileCallBack_0400 data: " + data);
            expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_STREAM_ERROR);
            done();
        });
})

/*
* @tc.number: FWK_ZipFile_0500
* @tc.name: zipFile 
* @tc.desc: FlushType.FLUSH_TYPE_NO_FLUSH
*/
it('FWK_ZipFile_0500', 0, async function (done) {
    console.log("==================FWK_ZipFile_0500 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testA/ceshi.txt.zip";
=======
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";
>>>>>>> upstream/master
        
    try {
        var options = {};
        options.flush = zlib.FlushType.FLUSH_TYPE_NO_FLUSH;
<<<<<<< HEAD
        await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
=======
        await zlib.zipFile(src, zipDest, options,
            (err, data) => {
                var zipStat = fileio.statSync(zipDest);
                var isFile = zipStat.isFile();
                expect(isFile).assertTrue();
                var srcSize = fileio.statSync(src).size;
                var destSize = zipStat.size;
                expect(srcSize>destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                
        zlib.unzipFile(zipDest, unzipDir, options,
            (err, data) => {
                var unzipStat = fileio.statSync(unzipDest);
                var isFile = unzipStat.isFile();
                expect(isFile).assertTrue();           
                var destSize = unzipStat.size;
                var originSize = fileio.statSync(src).size;
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();          
            })
        });        
>>>>>>> upstream/master
    } catch(err) {
        console.error('FWK_ZipFile_0500 err:' + err);
        done();
    }
    console.log("==================FWK_ZipFile_0500 end==================");
})

/*
* @tc.number: FWK_ZipFile_0600
* @tc.name: zipFile 
* @tc.desc: FlushType.FLUSH_TYPE_NO_FLUSH
*/
it('FWK_ZipFile_0600', 0, async function (done) {
    console.log("==================FWK_ZipFile_0600 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testA/ceshi.txt.zip";
=======
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";
>>>>>>> upstream/master
        
    try {
        var options = {};
        options.flush = zlib.FlushType.FLUSH_TYPE_NO_FLUSH,
<<<<<<< HEAD
        await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
=======
        await zlib.zipFile(src, zipDest, options,
            (err, data) => {
                var zipStat = fileio.statSync(zipDest);
                var isFile = zipStat.isFile();
                expect(isFile).assertTrue();
                var srcSize = fileio.statSync(src).size;
                var destSize = zipStat.size;
                expect(srcSize>destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                
        zlib.unzipFile(zipDest, unzipDir, options,
            (err, data) => {
                var unzipStat = fileio.statSync(unzipDest);
                var isFile = unzipStat.isFile();
                expect(isFile).assertTrue();           
                var destSize = unzipStat.size;
                var originSize = fileio.statSync(src).size;
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();          
            })
        });        
>>>>>>> upstream/master
    } catch(err) {
        console.error('FWK_ZipFile_0500 err:' + err);
        done();
     }
    console.log("==================FWK_ZipFile_0600 end==================");
})

/*
* @tc.number: FWK_ZipFile_0700
* @tc.name: zipFile 
* @tc.desc: zipFile
*/
it('FWK_ZipFile_0700', 0, async function (done) {
    console.log("==================FWK_ZipFile_0700 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testA/ceshi.txt.zip";
=======
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";
>>>>>>> upstream/master
        
    try{
        var options = {};
        options.flush = zlib.FlushType.FLUSH_TYPE_SYNC_FLUSH,
<<<<<<< HEAD
       await zlib.zipFile(src, dest, options,
            (err, data) => {                 
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_ZipFile_0700    err:' + err);
=======
        await zlib.zipFile(src, zipDest, options,
            (err, data) => {
                var zipStat = fileio.statSync(zipDest);
                var isFile = zipStat.isFile();
                expect(isFile).assertTrue();
                var srcSize = fileio.statSync(src).size;
                var destSize = zipStat.size;
                expect(srcSize>destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                
        zlib.unzipFile(zipDest, unzipDir, options,
            (err, data) => {
                var unzipStat = fileio.statSync(unzipDest);
                var isFile = unzipStat.isFile();
                expect(isFile).assertTrue();           
                var destSize = unzipStat.size;
                var originSize = fileio.statSync(src).size;
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();          
            })
        });        
    } catch(err) {
        console.error('FWK_ZipFile_0500 err:' + err);
>>>>>>> upstream/master
        done();
    }
    console.log("==================FWK_ZipFile_0700 end==================");    
})

/*
* @tc.number: FWK_ZipFile_0800
* @tc.name: zipFile 
* @tc.desc: FlushType.FLUSH_TYPE_FULL_FLUSH
*/
it('FWK_ZipFile_0800', 0, async function (done) {
    console.log("==================FWK_ZipFile_0800 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testA/ceshi.txt.zip";
=======
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";
>>>>>>> upstream/master
        
    try{
        var options = {};
        options.flush = zlib.FlushType.FLUSH_TYPE_FULL_FLUSH,
<<<<<<< HEAD
       await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_ZipFile_0800    err:' + err);
=======
        await zlib.zipFile(src, zipDest, options,
            (err, data) => {
                var zipStat = fileio.statSync(zipDest);
                var isFile = zipStat.isFile();
                expect(isFile).assertTrue();
                var srcSize = fileio.statSync(src).size;
                var destSize = zipStat.size;
                expect(srcSize>destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                
        zlib.unzipFile(zipDest, unzipDir, options,
            (err, data) => {
                var unzipStat = fileio.statSync(unzipDest);
                var isFile = unzipStat.isFile();
                expect(isFile).assertTrue();           
                var destSize = unzipStat.size;
                var originSize = fileio.statSync(src).size;
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();          
            })
        });        
    } catch(err) {
        console.error('FWK_ZipFile_0500 err:' + err);
>>>>>>> upstream/master
        done();
    }
    console.log("==================FWK_ZipFile_0800 end==================");
})

/*
* @tc.number: FWK_ZipFile_0900
* @tc.name: zipFile 
* @tc.desc: zipFile
*/
it('FWK_ZipFile_0900', 0, async function (done) {
    console.log("==================FWK_ZipFile_0900 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testA/ceshi.txt.zip";
=======
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";
>>>>>>> upstream/master
        
    try{
        var options = {};
        options.flush = zlib.FlushType.FLUSH_TYPE_FINISH,
<<<<<<< HEAD
       await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_ZipFile_0900    err:' + err);
=======
        await zlib.zipFile(src, zipDest, options,
            (err, data) => {
                var zipStat = fileio.statSync(zipDest);
                var isFile = zipStat.isFile();
                expect(isFile).assertTrue();
                var srcSize = fileio.statSync(src).size;
                var destSize = zipStat.size;
                expect(srcSize>destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                
        zlib.unzipFile(zipDest, unzipDir, options,
            (err, data) => {
                var unzipStat = fileio.statSync(unzipDest);
                var isFile = unzipStat.isFile();
                expect(isFile).assertTrue();           
                var destSize = unzipStat.size;
                var originSize = fileio.statSync(src).size;
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();          
            })
        });        
    } catch(err) {
        console.error('FWK_ZipFile_0500 err:' + err);
>>>>>>> upstream/master
        done();
    }
    console.log("==================FWK_ZipFile_0900 end==================");
})

/*
* @tc.number: FWK_ZipFile_1000
* @tc.name: zipFile 
* @tc.desc: FlushType.FLUSH_TYPE_BLOCK
*/
it('FWK_ZipFile_1000', 0, async function (done) {
    console.log("==================FWK_ZipFile_1000 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testA/ceshi.txt.zip";
=======
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";
>>>>>>> upstream/master
        
    try{
        var options = {};
        options.flush = zlib.FlushType.FLUSH_TYPE_BLOCK,
<<<<<<< HEAD
       await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_ZipFile_1000    err:' + err);
=======
        await zlib.zipFile(src, zipDest, options,
            (err, data) => {
                var zipStat = fileio.statSync(zipDest);
                var isFile = zipStat.isFile();
                expect(isFile).assertTrue();
                var srcSize = fileio.statSync(src).size;
                var destSize = zipStat.size;
                expect(srcSize>destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                
        zlib.unzipFile(zipDest, unzipDir, options,
            (err, data) => {
                var unzipStat = fileio.statSync(unzipDest);
                var isFile = unzipStat.isFile();
                expect(isFile).assertTrue();           
                var destSize = unzipStat.size;
                var originSize = fileio.statSync(src).size;
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();          
            })
        });        
    } catch(err) {
        console.error('FWK_ZipFile_0500 err:' + err);
>>>>>>> upstream/master
        done();
    }
    console.log("==================FWK_ZipFile_1000 end==================");  
})

/*
* @tc.number: FWK_ZipFile_1100
* @tc.name: zipFile 
* @tc.desc: FlushType.FLUSH_TYPE_TREES
*/
it('FWK_ZipFile_1100', 0, async function (done) {
    console.log("==================FWK_ZipFile_1100 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testA/ceshi.txt.zip";
=======
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";
>>>>>>> upstream/master
        
    try{
        var options = {};
        options.flush = zlib.FlushType.FLUSH_TYPE_TREES,
<<<<<<< HEAD
       await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_ZipFile_1100    err:' + err);
=======
        await zlib.zipFile(src, zipDest, options,
            (err, data) => {
                var zipStat = fileio.statSync(zipDest);
                var isFile = zipStat.isFile();
                expect(isFile).assertTrue();
                var srcSize = fileio.statSync(src).size;
                var destSize = zipStat.size;
                expect(srcSize>destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                
        zlib.unzipFile(zipDest, unzipDir, options,
            (err, data) => {
                var unzipStat = fileio.statSync(unzipDest);
                var isFile = unzipStat.isFile();
                expect(isFile).assertTrue();           
                var destSize = unzipStat.size;
                var originSize = fileio.statSync(src).size;
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();          
            })
        });        
    } catch(err) {
        console.error('FWK_ZipFile_0500 err:' + err);
>>>>>>> upstream/master
        done();
    }
    console.log("==================FWK_ZipFile_1100 end=================="); 
    sleep(10); 
})

/*
* @tc.number: FWK_ZipFile_1200
* @tc.name: zipFile 
* @tc.desc: FlushType.FLUSH_TYPE_NO_FLUSH
*/
   it('FWK_ZipFile_1200', 0, async function (done) {
    console.log("==================FWK_ZipFile_1200 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testA/ceshi.txt.zip";
=======
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";
>>>>>>> upstream/master
        
    try{
        var options = {};
        options.flush = zlib.FlushType.FLUSH_TYPE_NO_FLUSH,
<<<<<<< HEAD
       await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('ACTS_zipFile_1200   err:' + err);
=======
        await zlib.zipFile(src, zipDest, options,
            (err, data) => {
                var zipStat = fileio.statSync(zipDest);
                var isFile = zipStat.isFile();
                expect(isFile).assertTrue();
                var srcSize = fileio.statSync(src).size;
                var destSize = zipStat.size;
                expect(srcSize>destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                
        zlib.unzipFile(zipDest, unzipDir, options,
            (err, data) => {
                var unzipStat = fileio.statSync(unzipDest);
                var isFile = unzipStat.isFile();
                expect(isFile).assertTrue();           
                var destSize = unzipStat.size;
                var originSize = fileio.statSync(src).size;
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();          
            })
        });        
    } catch(err) {
        console.error('FWK_ZipFile_0500 err:' + err);
>>>>>>> upstream/master
        done();
    }
    console.log("==================FWK_ZipFile_1200 end==================");  
    sleep(10);
})

/*
* @tc.number: FWK_ZipFile_1300
* @tc.name: zipFile 
* @tc.desc: FlushType.FLUSH_TYPE_PARTIAL_FLUSH
*/
it('FWK_ZipFile_1300', 0, async function (done) {
    console.log("==================FWK_ZipFile_1300 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testA/ceshi.txt.zip";
=======
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";
>>>>>>> upstream/master
        
    try{
        var options = {};
        options.flush = zlib.FlushType.FLUSH_TYPE_PARTIAL_FLUSH,
<<<<<<< HEAD
       await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_ZipFile_1300    err:' + err);
=======
        await zlib.zipFile(src, zipDest, options,
            (err, data) => {
                var zipStat = fileio.statSync(zipDest);
                var isFile = zipStat.isFile();
                expect(isFile).assertTrue();
                var srcSize = fileio.statSync(src).size;
                var destSize = zipStat.size;
                expect(srcSize>destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                
        zlib.unzipFile(zipDest, unzipDir, options,
            (err, data) => {
                var unzipStat = fileio.statSync(unzipDest);
                var isFile = unzipStat.isFile();
                expect(isFile).assertTrue();           
                var destSize = unzipStat.size;
                var originSize = fileio.statSync(src).size;
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();          
            })
        });        
    } catch(err) {
        console.error('FWK_ZipFile_0500 err:' + err);
>>>>>>> upstream/master
        done();
    }
    console.log("==================FWK_ZipFile_1300 end=================="); 
})

/*
* @tc.number: FWK_ZipFile_1400
* @tc.name: zipFile 
* @tc.desc: FlushType.FLUSH_TYPE_SYNC_FLUSH
*/
it('FWK_ZipFile_1400', 0, async function (done) {
    console.log("==================FWK_ZipFile_1400 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testA/ceshi.txt.zip";
=======
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";
>>>>>>> upstream/master
        
    try{
        var options = {};
        options.flush = zlib.FlushType.FLUSH_TYPE_SYNC_FLUSH,
<<<<<<< HEAD
       await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_ZipFile_1400    err:' + err);
=======
        await zlib.zipFile(src, zipDest, options,
            (err, data) => {
                var zipStat = fileio.statSync(zipDest);
                var isFile = zipStat.isFile();
                expect(isFile).assertTrue();
                var srcSize = fileio.statSync(src).size;
                var destSize = zipStat.size;
                expect(srcSize>destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                
        zlib.unzipFile(zipDest, unzipDir, options,
            (err, data) => {
                var unzipStat = fileio.statSync(unzipDest);
                var isFile = unzipStat.isFile();
                expect(isFile).assertTrue();           
                var destSize = unzipStat.size;
                var originSize = fileio.statSync(src).size;
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();          
            })
        });        
    } catch(err) {
        console.error('FWK_ZipFile_0500 err:' + err);
>>>>>>> upstream/master
        done();
    }
    console.log("==================FWK_ZipFile_1400 end=================="); 
})

/*
* @tc.number: FWK_ZipFile_1500
* @tc.name: zipFile 
* @tc.desc: FlushType.FLUSH_TYPE_FULL_FLUSH
*/
it('FWK_ZipFile_1500', 0, async function (done) {
    console.log("==================FWK_ZipFile_1500 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testA/ceshi.txt.zip";
=======
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";
>>>>>>> upstream/master
        
    try{
        var options = {};
        options.flush = zlib.FlushType.FLUSH_TYPE_FULL_FLUSH,
<<<<<<< HEAD
       await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_ZipFile_1500  size  err:' + err);
=======
        await zlib.zipFile(src, zipDest, options,
            (err, data) => {
                var zipStat = fileio.statSync(zipDest);
                var isFile = zipStat.isFile();
                expect(isFile).assertTrue();
                var srcSize = fileio.statSync(src).size;
                var destSize = zipStat.size;
                expect(srcSize>destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                
        zlib.unzipFile(zipDest, unzipDir, options,
            (err, data) => {
                var unzipStat = fileio.statSync(unzipDest);
                var isFile = unzipStat.isFile();
                expect(isFile).assertTrue();           
                var destSize = unzipStat.size;
                var originSize = fileio.statSync(src).size;
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();          
            })
        });        
    } catch(err) {
        console.error('FWK_ZipFile_0500 err:' + err);
>>>>>>> upstream/master
        done();
    }
    console.log("==================FWK_ZipFile_1500 end=================="); 
})

/*
* @tc.number: FWK_ZipFile_1600
* @tc.name: zipFile 
* @tc.desc: FlushType.FLUSH_TYPE_FINISH
*/
it('FWK_ZipFile_1600', 0, async function (done) {
    console.log("==================FWK_ZipFile_1600 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testA/ceshi.txt.zip";
=======
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";
>>>>>>> upstream/master
        
    try{
        var options = {};
        options.flush = zlib.FlushType.FLUSH_TYPE_FINISH,
<<<<<<< HEAD
       await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_ZipFile_1600  size  err:' + err);
=======
        await zlib.zipFile(src, zipDest, options,
            (err, data) => {
                var zipStat = fileio.statSync(zipDest);
                var isFile = zipStat.isFile();
                expect(isFile).assertTrue();
                var srcSize = fileio.statSync(src).size;
                var destSize = zipStat.size;
                expect(srcSize>destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                
        zlib.unzipFile(zipDest, unzipDir, options,
            (err, data) => {
                var unzipStat = fileio.statSync(unzipDest);
                var isFile = unzipStat.isFile();
                expect(isFile).assertTrue();           
                var destSize = unzipStat.size;
                var originSize = fileio.statSync(src).size;
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();          
            })
        });        
    } catch(err) {
        console.error('FWK_ZipFile_0500 err:' + err);
>>>>>>> upstream/master
        done();
    }
    console.log("==================FWK_ZipFile_1600 end=================="); 
})

/*
* @tc.number: FWK_ZipFile_1700
* @tc.name: zipFile 
* @tc.desc: zipFile
*/
it('FWK_ZipFile_1700', 0, async function (done) {
    console.log("==================FWK_ZipFile_1700 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testA/ceshi.txt.zip";
=======
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";
>>>>>>> upstream/master
        
    try{
        var options = {};
        options.flush = zlib.FlushType.FLUSH_TYPE_BLOCK,
<<<<<<< HEAD
       await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_ZipFile_1700  size  err:' + err);
=======
        await zlib.zipFile(src, zipDest, options,
            (err, data) => {
                var zipStat = fileio.statSync(zipDest);
                var isFile = zipStat.isFile();
                expect(isFile).assertTrue();
                var srcSize = fileio.statSync(src).size;
                var destSize = zipStat.size;
                expect(srcSize>destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                
        zlib.unzipFile(zipDest, unzipDir, options,
            (err, data) => {
                var unzipStat = fileio.statSync(unzipDest);
                var isFile = unzipStat.isFile();
                expect(isFile).assertTrue();           
                var destSize = unzipStat.size;
                var originSize = fileio.statSync(src).size;
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();          
            })
        });        
    } catch(err) {
        console.error('FWK_ZipFile_0500 err:' + err);
>>>>>>> upstream/master
        done();
    }
    console.log("==================FWK_ZipFile_1700 end==================");
})

/*
* @tc.number: FWK_ZipFile_1800
* @tc.name: zipFile 
* @tc.desc: FlushType.FLUSH_TYPE_TREES
*/
it('FWK_ZipFile_1800', 0, async function (done) {
    console.log("==================FWK_ZipFile_1800 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testA/ceshi.txt.zip";
=======
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";
>>>>>>> upstream/master
        
    try{
        var options = {};
        options.flush = zlib.FlushType.FLUSH_TYPE_TREES,
<<<<<<< HEAD
       await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_ZipFile_1800  size  err:' + err);
=======
        await zlib.zipFile(src, zipDest, options,
            (err, data) => {
                var zipStat = fileio.statSync(zipDest);
                var isFile = zipStat.isFile();
                expect(isFile).assertTrue();
                var srcSize = fileio.statSync(src).size;
                var destSize = zipStat.size;
                expect(srcSize>destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                
        zlib.unzipFile(zipDest, unzipDir, options,
            (err, data) => {
                var unzipStat = fileio.statSync(unzipDest);
                var isFile = unzipStat.isFile();
                expect(isFile).assertTrue();           
                var destSize = unzipStat.size;
                var originSize = fileio.statSync(src).size;
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();          
            })
        });        
    } catch(err) {
        console.error('FWK_ZipFile_0500 err:' + err);
>>>>>>> upstream/master
        done();
    }
    console.log("==================FWK_ZipFile_1800 end=================="); 
})

/*
* @tc.number: FWK_ZipFile_1900
* @tc.name: zipFile 
* @tc.desc: chunkSize:64
*/
it('FWK_ZipFile_1900', 0, async function (done) {
    console.log("==================FWK_ZipFile_1900 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testA/ceshi.txt.zip";
=======
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";
>>>>>>> upstream/master
        
    try{
     var options = {
        chunkSize:64,
     };
<<<<<<< HEAD
       await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_ZipFile_1900    err:' + err);
        done();
=======
     await zlib.zipFile(src, zipDest, options,
        (err, data) => {
            var zipStat = fileio.statSync(zipDest);
            var isFile = zipStat.isFile();
            expect(isFile).assertTrue();
            var srcSize = fileio.statSync(src).size;
            var destSize = zipStat.size;
            expect(srcSize>destSize).assertTrue();
            expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
            
    zlib.unzipFile(zipDest, unzipDir, options,
        (err, data) => {
            var unzipStat = fileio.statSync(unzipDest);
            var isFile = unzipStat.isFile();
            expect(isFile).assertTrue();           
            var destSize = unzipStat.size;
            var originSize = fileio.statSync(src).size;
            var result = (originSize == destSize);
            expect(result).assertTrue();
            expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
            done();          
        })
    });        
} catch(err) {
    console.error('FWK_ZipFile_0500 err:' + err);
    done();
>>>>>>> upstream/master
    }
    console.log("==================FWK_ZipFile_1900 end=================="); 
})

/*
* @tc.number: FWK_ZipFile_2000
* @tc.name: zipFile 
* @tc.desc: chunkSize:1024
*/
it('FWK_ZipFile_2000', 0, async function (done) {
    console.log("==================FWK_ZipFile_2000 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testA/ceshi.txt.zip";
=======
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";
>>>>>>> upstream/master
        
    try{
     var options = {
        chunkSize:1024,
     };
<<<<<<< HEAD
       await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();;
            });
    }catch(err) {
        console.error('FWK_ZipFile_2000  size  err:' + err);
        done();
=======
     await zlib.zipFile(src, zipDest, options,
        (err, data) => {
            var zipStat = fileio.statSync(zipDest);
            var isFile = zipStat.isFile();
            expect(isFile).assertTrue();
            var srcSize = fileio.statSync(src).size;
            var destSize = zipStat.size;
            expect(srcSize>destSize).assertTrue();
            expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
            
    zlib.unzipFile(zipDest, unzipDir, options,
        (err, data) => {
            var unzipStat = fileio.statSync(unzipDest);
            var isFile = unzipStat.isFile();
            expect(isFile).assertTrue();           
            var destSize = unzipStat.size;
            var originSize = fileio.statSync(src).size;
            var result = (originSize == destSize);
            expect(result).assertTrue();
            expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
            done();          
        })
    });        
} catch(err) {
    console.error('FWK_ZipFile_0500 err:' + err);
    done();
>>>>>>> upstream/master
    }
    console.log("==================FWK_ZipFile_2000 end==================");
})

/*
* @tc.number: FWK_ZipFile_2100
* @tc.name: zipFile 
* @tc.desc: chunkSize:999
*/
it('FWK_ZipFile_2100', 0, async function (done) {
    console.log("==================FWK_ZipFile_2100 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testA/ceshi.txt.zip";
=======
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";
>>>>>>> upstream/master
        
    try{
     var options = {
        chunkSize:999,
     };
<<<<<<< HEAD
       await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_ZipFile_2100    err:' + err);
        done();
=======
     await zlib.zipFile(src, zipDest, options,
        (err, data) => {
            var zipStat = fileio.statSync(zipDest);
            var isFile = zipStat.isFile();
            expect(isFile).assertTrue();
            var srcSize = fileio.statSync(src).size;
            var destSize = zipStat.size;
            expect(srcSize>destSize).assertTrue();
            expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
            
    zlib.unzipFile(zipDest, unzipDir, options,
        (err, data) => {
            var unzipStat = fileio.statSync(unzipDest);
            var isFile = unzipStat.isFile();
            expect(isFile).assertTrue();           
            var destSize = unzipStat.size;
            var originSize = fileio.statSync(src).size;
            var result = (originSize == destSize);
            expect(result).assertTrue();
            expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
            done();          
        })
    });        
} catch(err) {
    console.error('FWK_ZipFile_0500 err:' + err);
    done();
>>>>>>> upstream/master
    }
    console.log("==================FWK_ZipFile_2100 end==================");  
})

/*
* @tc.number: FWK_ZipFile_2200
* @tc.name: zipFile 
* @tc.desc: level.COMPRESS_LEVEL_NO_COMPRESSION
*/
it('FWK_ZipFile_2200', 0, async function (done) {
    console.log("==================FWK_ZipFile_2200 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testA/ceshi.txt.zip";
        
    try{
        var options = {};
        options.level = zlib.CompressLevel.COMPRESS_LEVEL_NO_COMPRESSION ,
       await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_ZipFile_2200    err:' + err);
=======
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";
    try{
        var options = {};
        options.level = zlib.CompressLevel.COMPRESS_LEVEL_NO_COMPRESSION ,
        await zlib.zipFile(src, zipDest, options,
            (err, data) => {
                var zipStat = fileio.statSync(zipDest);
                var isFile = zipStat.isFile();
                expect(isFile).assertTrue();
                var srcSize = fileio.statSync(src).size;
                var destSize = zipStat.size;
                expect(srcSize>destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                
        zlib.unzipFile(zipDest, unzipDir, options,
            (err, data) => {
                var unzipStat = fileio.statSync(unzipDest);
                var isFile = unzipStat.isFile();
                expect(isFile).assertTrue();           
                var destSize = unzipStat.size;
                var originSize = fileio.statSync(src).size;
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();          
            })
        });        
    } catch(err) {
        console.error('FWK_ZipFile_0500 err:' + err);
>>>>>>> upstream/master
        done();
    }
    console.log("==================FWK_ZipFile_2200 end==================");
})

/*
* @tc.number: FWK_ZipFile_2300
* @tc.name: zipFile 
* @tc.desc: level.COMPRESS_LEVEL_BEST_SPEED
*/
it('FWK_ZipFile_2300', 0, async function (done) {
    console.log("==================FWK_ZipFile_2300 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testA/ceshi.txt.zip";
=======
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";
>>>>>>> upstream/master
        
    try{
        var options = {};
        options.level = zlib.CompressLevel.COMPRESS_LEVEL_BEST_SPEED,
<<<<<<< HEAD
       await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_ZipFile_2300  size  err:' + err);
=======
        await zlib.zipFile(src, zipDest, options,
            (err, data) => {
                var zipStat = fileio.statSync(zipDest);
                var isFile = zipStat.isFile();
                expect(isFile).assertTrue();
                var srcSize = fileio.statSync(src).size;
                var destSize = zipStat.size;
                expect(srcSize>destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                
        zlib.unzipFile(zipDest, unzipDir, options,
            (err, data) => {
                var unzipStat = fileio.statSync(unzipDest);
                var isFile = unzipStat.isFile();
                expect(isFile).assertTrue();           
                var destSize = unzipStat.size;
                var originSize = fileio.statSync(src).size;
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();          
            })
        });        
    } catch(err) {
        console.error('FWK_ZipFile_0500 err:' + err);
>>>>>>> upstream/master
        done();
    }
    console.log("==================FWK_ZipFile_2300 end==================");
})

/*
* @tc.number: FWK_ZipFile_2400
* @tc.name: zipFile 
* @tc.desc: level.COMPRESS_LEVEL_BEST_COMPRESSION
*/
it('FWK_ZipFile_2400', 0, async function (done) {
    console.log("==================FWK_ZipFile_2400 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testA/ceshi.txt.zip";
=======
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";
>>>>>>> upstream/master
        
    try{
        var options = {};
        options.level = zlib.CompressLevel.COMPRESS_LEVEL_BEST_COMPRESSION,
<<<<<<< HEAD
       await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_ZipFile_2400    err:' + err);
=======
        await zlib.zipFile(src, zipDest, options,
            (err, data) => {
                var zipStat = fileio.statSync(zipDest);
                var isFile = zipStat.isFile();
                expect(isFile).assertTrue();
                var srcSize = fileio.statSync(src).size;
                var destSize = zipStat.size;
                expect(srcSize>destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                
        zlib.unzipFile(zipDest, unzipDir, options,
            (err, data) => {
                var unzipStat = fileio.statSync(unzipDest);
                var isFile = unzipStat.isFile();
                expect(isFile).assertTrue();           
                var destSize = unzipStat.size;
                var originSize = fileio.statSync(src).size;
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();          
            })
        });        
    } catch(err) {
        console.error('FWK_ZipFile_0500 err:' + err);
>>>>>>> upstream/master
        done();
    }
    console.log("==================FWK_ZipFile_2400 end=================="); 
})

/*
* @tc.number: FWK_ZipFile_2500
* @tc.name: zipFile 
* @tc.desc: level.COMPRESS_LEVEL_DEFAULT_COMPRESSION
*/
it('FWK_ZipFile_2500', 0, async function (done) {
    console.log("==================FWK_ZipFile_2500 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testA/ceshi.txt.zip";
=======
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";
>>>>>>> upstream/master
        
    try{
        var options = {};
        options.level = zlib.CompressLevel.COMPRESS_LEVEL_DEFAULT_COMPRESSION,
<<<<<<< HEAD
       await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_ZipFile_2500    err:' + err);
=======
        await zlib.zipFile(src, zipDest, options,
            (err, data) => {
                var zipStat = fileio.statSync(zipDest);
                var isFile = zipStat.isFile();
                expect(isFile).assertTrue();
                var srcSize = fileio.statSync(src).size;
                var destSize = zipStat.size;
                expect(srcSize>destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                
        zlib.unzipFile(zipDest, unzipDir, options,
            (err, data) => {
                var unzipStat = fileio.statSync(unzipDest);
                var isFile = unzipStat.isFile();
                expect(isFile).assertTrue();           
                var destSize = unzipStat.size;
                var originSize = fileio.statSync(src).size;
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();          
            })
        });        
    } catch(err) {
        console.error('FWK_ZipFile_0500 err:' + err);
>>>>>>> upstream/master
        done();
    }
    console.log("==================FWK_ZipFile_2500 end==================");
})

/*
* @tc.number: FWK_ZipFile_2600
* @tc.name: zipFile 
* @tc.desc: memlevel.MEM_LEVEL_MIN_MEMLEVEL
*/
it('FWK_ZipFile_2600', 0, async function (done) {
    console.log("==================FWK_ZipFile_2600 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testA/ceshi.txt.zip";
=======
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";
>>>>>>> upstream/master

    try{
        var options = {};
        options.memlevel = zlib.MemLevel.MEM_LEVEL_MIN_MEMLEVEL,
<<<<<<< HEAD
       await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_ZipFile_2600    err:' + err);
=======
        await zlib.zipFile(src, zipDest, options,
            (err, data) => {
                var zipStat = fileio.statSync(zipDest);
                var isFile = zipStat.isFile();
                expect(isFile).assertTrue();
                var srcSize = fileio.statSync(src).size;
                var destSize = zipStat.size;
                expect(srcSize>destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                
        zlib.unzipFile(zipDest, unzipDir, options,
            (err, data) => {
                var unzipStat = fileio.statSync(unzipDest);
                var isFile = unzipStat.isFile();
                expect(isFile).assertTrue();           
                var destSize = unzipStat.size;
                var originSize = fileio.statSync(src).size;
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();          
            })
        });        
    } catch(err) {
        console.error('FWK_ZipFile_0500 err:' + err);
>>>>>>> upstream/master
        done();
    }
    console.log("==================FWK_ZipFile_2600 end=================="); 
})

/*
* @tc.number: FWK_ZipFile_2700
* @tc.name: zipFile 
* @tc.desc: memlevel.MEM_LEVEL_MAX_MEMLEVEL
*/
it('FWK_ZipFile_2700', 0, async function (done) {
    console.log("==================FWK_ZipFile_2700 start==================");
<<<<<<< HEAD
   var src = "/data/test/ceshi.txt";
    var dest = "/data/testA/ceshi.txt.zip";
=======
    var src = "/data/test/ceshi.txt";
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";
>>>>>>> upstream/master
        
    try{
        var options = {};
        options.memlevel = zlib.MemLevel.MEM_LEVEL_MAX_MEMLEVEL,
<<<<<<< HEAD
       await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_ZipFile_2700    err:' + err);

=======
        await zlib.zipFile(src, zipDest, options,
            (err, data) => {
                var zipStat = fileio.statSync(zipDest);
                var isFile = zipStat.isFile();
                expect(isFile).assertTrue();
                var srcSize = fileio.statSync(src).size;
                var destSize = zipStat.size;
                expect(srcSize>destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                
        zlib.unzipFile(zipDest, unzipDir, options,
            (err, data) => {
                var unzipStat = fileio.statSync(unzipDest);
                var isFile = unzipStat.isFile();
                expect(isFile).assertTrue();           
                var destSize = unzipStat.size;
                var originSize = fileio.statSync(src).size;
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();          
            })
        });        
    } catch(err) {
        console.error('FWK_ZipFile_0500 err:' + err);
>>>>>>> upstream/master
        done();
    }
    console.log("==================FWK_ZipFile_2700 end=================="); 
})

/*
* @tc.number: FWK_ZipFile_2800
* @tc.name: zipFile 
* @tc.desc: memlevel.MEM_LEVEL_DEFAULT_MEMLEVEL
*/
it('FWK_ZipFile_2800', 0, async function (done) {
    console.log("==================FWK_ZipFile_2800 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testA/ceshi.txt.zip";
=======
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";
>>>>>>> upstream/master
        
    try{
        var options = {};
        options.memlevel = zlib.MemLevel.MEM_LEVEL_DEFAULT_MEMLEVEL,
<<<<<<< HEAD
       await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_ZipFile_2800    err:' + err);
=======
        await zlib.zipFile(src, zipDest, options,
            (err, data) => {
                var zipStat = fileio.statSync(zipDest);
                var isFile = zipStat.isFile();
                expect(isFile).assertTrue();
                var srcSize = fileio.statSync(src).size;
                var destSize = zipStat.size;
                expect(srcSize>destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                
        zlib.unzipFile(zipDest, unzipDir, options,
            (err, data) => {
                var unzipStat = fileio.statSync(unzipDest);
                var isFile = unzipStat.isFile();
                expect(isFile).assertTrue();           
                var destSize = unzipStat.size;
                var originSize = fileio.statSync(src).size;
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();          
            })
        });        
    } catch(err) {
        console.error('FWK_ZipFile_0500 err:' + err);
>>>>>>> upstream/master
        done();
    }
    console.log("==================FWK_ZipFile_2800 end==================");
})

/*
* @tc.number: FWK_ZipFile_2900
* @tc.name: zipFile 
* @tc.desc: strategy.COMPRESS_STRATEGY_DEFAULT_STRATEGY
*/
it('FWK_ZipFile_2900', 0, async function (done) {
    console.log("==================FWK_ZipFile_2900 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testA/ceshi.txt.zip";
=======
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";
>>>>>>> upstream/master
        
    try{
        var options = {};
        options.strategy = zlib.CompressStrategy.COMPRESS_STRATEGY_DEFAULT_STRATEGY,
<<<<<<< HEAD
       await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('ACTS_zipFile_2900  size  err:' + err);
=======
        await zlib.zipFile(src, zipDest, options,
            (err, data) => {
                var zipStat = fileio.statSync(zipDest);
                var isFile = zipStat.isFile();
                expect(isFile).assertTrue();
                var srcSize = fileio.statSync(src).size;
                var destSize = zipStat.size;
                expect(srcSize>destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                
        zlib.unzipFile(zipDest, unzipDir, options,
            (err, data) => {
                var unzipStat = fileio.statSync(unzipDest);
                var isFile = unzipStat.isFile();
                expect(isFile).assertTrue();           
                var destSize = unzipStat.size;
                var originSize = fileio.statSync(src).size;
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();          
            })
        });        
    } catch(err) {
        console.error('FWK_ZipFile_0500 err:' + err);
>>>>>>> upstream/master
        done();
    }
    console.log("==================FWK_ZipFile_2900 end==================");
})

/*
* @tc.number: FWK_ZipFile_3000
* @tc.name: zipFile 
* @tc.desc: strategy.COMPRESS_STRATEGY_FILTERED
*/
it('FWK_ZipFile_3000', 0, async function (done) {
    console.log("==================FWK_ZipFile_3000 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testA/ceshi.txt.zip";
        
    try{
        var options = {};
        options.strategy = zlib.CompressStrategy.COMPRESS_STRATEGY_FILTERED,
       await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_ZipFile_3000    err:' + err);
=======
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";

    try{
        var options = {};
        options.strategy = zlib.CompressStrategy.COMPRESS_STRATEGY_FILTERED,
        await zlib.zipFile(src, zipDest, options,
            (err, data) => {
                var zipStat = fileio.statSync(zipDest);
                var isFile = zipStat.isFile();
                expect(isFile).assertTrue();
                var srcSize = fileio.statSync(src).size;
                var destSize = zipStat.size;
                expect(srcSize>destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                
        zlib.unzipFile(zipDest, unzipDir, options,
            (err, data) => {
                var unzipStat = fileio.statSync(unzipDest);
                var isFile = unzipStat.isFile();
                expect(isFile).assertTrue();           
                var destSize = unzipStat.size;
                var originSize = fileio.statSync(src).size;
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();          
            })
        });        
    } catch(err) {
        console.error('FWK_ZipFile_0500 err:' + err);
>>>>>>> upstream/master
        done();
    }
    console.log("==================FWK_ZipFile_3000 end=================="); 
})

/*
* @tc.number: FWK_ZipFile_3100
* @tc.name: zipFile 
* @tc.desc: strategy.COMPRESS_STRATEGY_HUFFMAN_ONLY
*/
it('FWK_ZipFile_3100', 0, async function (done) {
    console.log("==================FWK_ZipFile_3100 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testA/ceshi.txt.zip";
=======
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";
>>>>>>> upstream/master
        
    try{
        var options = {};
        options.strategy = zlib.CompressStrategy.COMPRESS_STRATEGY_HUFFMAN_ONLY,
<<<<<<< HEAD
       await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_ZipFile_3100  size  err:' + err);
=======
        await zlib.zipFile(src, zipDest, options,
            (err, data) => {
                var zipStat = fileio.statSync(zipDest);
                var isFile = zipStat.isFile();
                expect(isFile).assertTrue();
                var srcSize = fileio.statSync(src).size;
                var destSize = zipStat.size;
                expect(srcSize>destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                
        zlib.unzipFile(zipDest, unzipDir, options,
            (err, data) => {
                var unzipStat = fileio.statSync(unzipDest);
                var isFile = unzipStat.isFile();
                expect(isFile).assertTrue();           
                var destSize = unzipStat.size;
                var originSize = fileio.statSync(src).size;
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();          
            })
        });        
    } catch(err) {
        console.error('FWK_ZipFile_0500 err:' + err);
>>>>>>> upstream/master
        done();
    }
    console.log("==================FWK_ZipFile_3100 end=================="); 
})

/*
* @tc.number: FWK_ZipFile_3200
* @tc.name: zipFile 
* @tc.desc: strategy.COMPRESS_STRATEGY_RLE
*/
it('FWK_ZipFile_3200', 0, async function (done) {
    console.log("==================FWK_ZipFile_3200 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testA/ceshi.txt.zip";
=======
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";
>>>>>>> upstream/master
        
    try{
        var options = {};
        options.strategy = zlib.CompressStrategy.COMPRESS_STRATEGY_RLE,
<<<<<<< HEAD
       await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('ACTS_zipFile_3200  size  err:' + err);
=======
        await zlib.zipFile(src, zipDest, options,
            (err, data) => {
                var zipStat = fileio.statSync(zipDest);
                var isFile = zipStat.isFile();
                expect(isFile).assertTrue();
                var srcSize = fileio.statSync(src).size;
                var destSize = zipStat.size;
                expect(srcSize>destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                
        zlib.unzipFile(zipDest, unzipDir, options,
            (err, data) => {
                var unzipStat = fileio.statSync(unzipDest);
                var isFile = unzipStat.isFile();
                expect(isFile).assertTrue();           
                var destSize = unzipStat.size;
                var originSize = fileio.statSync(src).size;
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();          
            })
        });        
    } catch(err) {
        console.error('FWK_ZipFile_0500 err:' + err);
>>>>>>> upstream/master
        done();
    }
    console.log("==================FWK_ZipFile_3200 end==================");
})

/*
* @tc.number: FWK_ZipFile_3300
* @tc.name: zipFile 
* @tc.desc: strategy.COMPRESS_STRATEGY_HUFFMAN_ONLY
*/
it('FWK_ZipFile_3300', 0, async function (done) {
    console.log("==================FWK_ZipFile_3300 start==================");
    var src = "/data/test/ceshi.txt";
<<<<<<< HEAD
    var dest = "/data/testA/ceshi.txt.zip";
        
    try{
        var options = {};
        options.strategy = zlib.CompressStrategy.COMPRESS_STRATEGY_HUFFMAN_ONLY,
       await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_ZipFile_3300  size  err:' + err);
=======
    var zipDest = "/data/testA/ceshi.zip";
    var unzipDir = "/data/testA/";
    var unzipDest = "/data/testA/ceshi.txt";
        
    try{
        var options = {};
        options.strategy = zlib.CompressStrategy.COMPRESS_STRATEGY_FILTERED,
        await zlib.zipFile(src, zipDest, options,
            (err, data) => {
                var zipStat = fileio.statSync(zipDest);
                var isFile = zipStat.isFile();
                expect(isFile).assertTrue();
                var srcSize = fileio.statSync(src).size;
                var destSize = zipStat.size;
                expect(srcSize>destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                
        zlib.unzipFile(zipDest, unzipDir, options,
            (err, data) => {
                var unzipStat = fileio.statSync(unzipDest);
                var isFile = unzipStat.isFile();
                expect(isFile).assertTrue();           
                var destSize = unzipStat.size;
                var originSize = fileio.statSync(src).size;
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();          
            })
        });        
    } catch(err) {
        console.error('FWK_ZipFile_0500 err:' + err);
>>>>>>> upstream/master
        done();
    }
    console.log("==================FWK_ZipFile_3300 end=================="); 
})

<<<<<<< HEAD

/*
* @tc.number: FWK_ZipFile_3400
* @tc.name: zipFile
* @tc.desc: inFile doesn't exist
*/
it('FWK_ZipFile_3400', 0, async function (done) {
    console.log("==================FWK_ZipFile_3400 start==================");
    var src = "/data/noExist.txt";
    var dest = "/data/test/";
    var options = {}   
    zlib.zipFile(src, dest, options).then((data) => {
       console.log("zipFilePromise_3400 data: " + data);
       expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_STREAM_ERROR);
       done();
    }).catch((err)=>{
       console.log("zipFilePromise_3400 err: " + err);
       done();
    });
    console.log("==================zipFilePromise_3400 end ==================");
})

/*
* @tc.number: FWK_ZipFile_3500
* @tc.name: zipFile
* @tc.desc: inFile is a directory that doesn't exist
*/
it('FWK_ZipFile_3500', 0, async function (done) {
    console.log("==================FWK_ZipFile_3500 start==================");
    var src = "/data/test/not_exist/";
    var dest = "/data/test/not_exist.zip";
    var options = {}   
    zlib.zipFile(src, dest, options).then((data) => {
       console.log("zipFilePromise_3500 data: " + data);
       expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_DATA_ERROR);
       done();
    }).catch((err)=>{
       console.log("zipFilePromise_3500 err: " + err);
       done();
    });
    console.log("==================zipFilePromise_3500 end ==================");
})

/*
* @tc.number: FWK_ZipFile_3600
* @tc.name: zipFile
* @tc.desc:output file not specified
*/
it('FWK_ZipFile_3600', 0, async function (done) {
    console.log("==================FWK_ZipFile_3600 start==================");
    var src = "/data/test/amsZipfileUnzipfileST.hap";
    var dest = "";
    var options = {}   
    zlib.zipFile(src, dest, options).then((data) => {
       console.log("zipFilePromise_3600 data: " + data);
       expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_STREAM_ERROR);
       done();
    }).catch((err)=>{
       console.log("zipFilePromise_3600 err: " + err);
       done();
    });
    console.log("==================zipFilePromise_3600 end ==================");
})

/*
* @tc.number: FWK_ZipFile_3700
* @tc.name: zipFile
* @tc.desc:output file not specified
*/
it('FWK_ZipFile_3700', 0, async function (done) {
    console.log("==================zipFilePromise_3700 start==================");
    var src = "/data/test/ceshi.txt";
    var dest = "/data/testB/ceshi.txt.zip";
    var options = {}   
    zlib.zipFile(src, dest, options).then((data) => {
       console.log("zipFilePromise_3700 data: " + data);
       expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_STREAM_ERROR);
       done();
    }).catch((err)=>{
       console.log("zipFilePromise_3700 err: " + err);
       done();
    });
    console.log("==================zipFilePromise_3700 end ==================");
})

/*
* @tc.number: FWK_ZipFile_3800
* @tc.name: zipFile 
* @tc.desc: FlushType.FLUSH_TYPE_NO_FLUSH
*/
it('FWK_ZipFile_3800', 0, async function (done) {
    console.log("==================FWK_ZipFile_3800 start==================");
    var src = "/data/test/ceshi.txt";
    var dest = "/data/testA/ceshi.txt.zip";
        
    try {
        var options = {};
        options.flush = zlib.FlushType.FLUSH_TYPE_NO_FLUSH;
        await zlib.zipFile(src, dest, options,).then((data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            }).catch((err)=>{
                console.log("FWK_ZipFile_3800 .catch((err)=>" + err);
                done();
            });
    } catch(err) {
        console.error('FWK_ZipFile_3800 err:' + err);
        done();
    }
    console.log("==================FWK_ZipFile_3800 end==================");
})

/*
* @tc.number: FWK_ZipFile_3900
* @tc.name: zipFile 
* @tc.desc: FlushType.FLUSH_TYPE_NO_FLUSH
*/
it('FWK_ZipFile_3900', 0, async function (done) {
    console.log("==================FWK_ZipFile_3900 start==================");
    var src = "/data/test/ceshi.txt";
    var dest = "/data/testA/ceshi.txt.zip";
        
    try {
        var options = {};
        options.flush = zlib.FlushType.FLUSH_TYPE_PARTIAL_FLUSH,
        await zlib.zipFile(src, dest, options,).then((data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var srcSize = fileio.statSync(src).size;
                var destSize = smallStat.size;
                expect(srcSize>=destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            }).catch((err)=>{
                console.log("FWK_ZipFile_3900 .catch((err)=>" + err);
                done();
            });
    } catch(err) {
        console.error('FWK_ZipFile_3900 err:' + err);
        done();
     }
    console.log("==================FWK_ZipFile_3900 end==================");
})


=======
/*
* @tc.number: FWK_zipFile_3400
* @tc.name: zipFile
* @tc.desc: inFile doesn't exist
*/
it('FWK_zipFile_3400', 0, async function (done) {
    console.log("==================FWK_zipFile_3400 start==================");
    var src = "/data/noExist.txt";
    var dest = "/data/test/";
    var options = {}   

    zlib.zipFile(src, dest, options).then((data) => {
       console.log("zipFilePromise_3400 data: " + data);
       expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_STREAM_ERROR);
       done();
    }).catch((err)=>{
       console.log("zipFilePromise_3400 err: " + err);
       done();
    });
    console.log("==================zipFilePromise_3400 end ==================");

})

/*
* @tc.number: FWK_zipFile_3500
* @tc.name: zipFile
* @tc.desc: inFile is a directory that doesn't exist
*/
it('FWK_zipFile_3500', 0, async function (done) {
    console.log("==================FWK_zipFile_3500 start==================");
    var src = "/data/teste/fefsef.txt";
    var dest = "/data/testA/sfefsfe.zip";
    var options = {}   


    zlib.zipFile(src, dest, options).then((data) => {
       console.log("zipFilePromise_3500 data: " + data);
       expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_DATA_ERROR);
       done();
    }).catch((err)=>{
       console.log("zipFilePromise_3500 err: " + err);
       done();
    });
    console.log("==================zipFilePromise_3500 end ==================");

})
>>>>>>> upstream/master

/*
<<<<<<< HEAD
* @tc.number: FWK_UnzipFile_0100
* @tc.name: unzipFile 
* @tc.desc: unzipFile
=======
* @tc.number: FWK_zipFile_3600
* @tc.name: zipFile
* @tc.desc:output file not specified
>>>>>>> upstream/master
*/
it('FWK_zipFile_3600', 0, async function (done) {
    console.log("==================FWK_zipFile_3600 start==================");
    var src = "/data/test/ceshi.txt";
    var dest = "";
    var options = {}

    zlib.zipFile(src, dest, options).then((data) => {
       console.log("zipFilePromise_3600 data: " + data);
       expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_STREAM_ERROR);
       done();
    }).catch((err)=>{
       console.log("zipFilePromise_3600 err: " + err);
       done();
    });
    console.log("==================zipFilePromise_3600 end ==================")

<<<<<<< HEAD
it('FWK_UnzipFile_0100', 0, async function (done) {
    console.log("==================FWK_UnzipFile_0100 start==================");
    var src = "/data/noExist.txt";
    var dest = "/data/test/";
    var options = {}
    zlib.unzipFile(src, dest, options,
        (err, data) => {
            console.log("unzipfilecallback_0100 data: " + data);
            expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_DATA_ERROR);
            done();
    });
})

/*
* @tc.number: FWK_UnzipFile_0200
* @tc.name: unzipFile 
* @tc.desc: unzipFile
*/

it('FWK_UnzipFile_0200', 0, async function (done) {
    console.log("==================FWK_UnzipFile_0200 start==================");
    var src = "/data/test/";
    var dest = "/data/testA/ceshi.txt.zip";
    var options = {}
    zlib.unzipFile(src, dest, options,
        (err, data) => {
            console.log("unzipfilecallback_0200 data: " + data);
            expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_ERRNO);
            done();
    });
})

/*
* @tc.number: FWK_UnzipFile_0300
* @tc.name: unzipFile 
* @tc.desc: unzipFile
*/

it('FWK_UnzipFile_0300', 0, async function (done) {
    console.log("==================FWK_UnzipFile_0300 start==================");
    var src = "/data/testA/ceshi.txt.zip";
    var dest =  "";
    var options = {}
    zlib.unzipFile(src, dest, options,
        (err, data) => {
            console.log("unzipfilecallback_0300 data: " + data);
            expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_ERRNO);
            done();
    });
=======
>>>>>>> upstream/master
})

/*
<<<<<<< HEAD
* @tc.number: FWK_UnzipFile_0400
* @tc.name: unzipFile
* @tc.desc: unzipFile
=======
* @tc.number: FWK_zipFile_3700
* @tc.name: zipFile
* @tc.desc:output file not specified
>>>>>>> upstream/master
*/
it('FWK_ZipFile_3700', 0, async function (done) {
    console.log("==================zipFilePromise_3700 start==================");
    var src = "/data/test/ceshi.txt";
    var dest = "/data/testB/ceshi.txt.zip";
    var options = {}   
    zlib.zipFile(src, dest, options).then((data) => {
       console.log("zipFilePromise_3700 data: " + data);
       expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_STREAM_ERROR);
       done();
    }).catch((err)=>{
       console.log("zipFilePromise_3700 err: " + err);
       done();
    });
    console.log("==================zipFilePromise_3700 end ==================");

})

<<<<<<< HEAD
it('FWK_UnzipFile_0400', 0, async function (done) {
    console.log("==================FWK_UnzipFile_0400 start==================");
    var src = "/data/testA/ceshi.txt.zip";
    var dest = "/data/testB";
    var options = {}
    zlib.unzipFile(src, dest, options,
        (err, data) => {
            console.log("unzipfilecallback_0400 data: " + data);
            expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_ERRNO);
            done();
    });
})

/*
* @tc.number: FWK_UnzipFile_0500
* @tc.name: unzipFile :
* @tc.desc: flushFlush.FLUSH_TYPE_NO_FLUSH
*/

it('FWK_UnzipFile_0500', 0, async function (done) {
    console.log("==================FWK_UnzipFile_0500 start==================");
    var src = "/data/testA/ceshi.txt.zip";
    var dest =  "/data/testA";
    var origin =  "/data/test/ceshi.txt";
    var destFile = "/data/testA/ceshi.txt";
        
    try {
        var options = {};
        options.flushFlush = zlib.FlushType.FLUSH_TYPE_NO_FLUSH,
        await zlib.unzipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(destFile);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var destSize = smallStat.size;
                var originStat = fileio.statSync(origin);
                var originSize = originStat.size; 
                console.log("FWK_UnzipFile_0500 destSize=" + destSize);
                console.log("FWK_UnzipFile_0500 data=" + data);
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    } catch(err) {  
        console.error('FWK_UnzipFile_0500   err:' + err);
        done();
    }
    console.log("==================FWK_UnzipFile_0500 end==================");
})

/*
* @tc.number: FWK_UnzipFile_0600
* @tc.name: unzipFile 
* @tc.desc: flushFlush.FLUSH_TYPE_PARTIAL_FLUSH
=======



/*
* @tc.number: FWK_ZipFile_3800
* @tc.name: zipFile 
* @tc.desc: FlushType.FLUSH_TYPE_NO_FLUSH
*/
it('FWK_ZipFile_3800', 0, async function (done) {
    console.log("==================FWK_ZipFile_3800 start==================");
    var src = "/data/test/ceshi.txt";
    var zipDest = "/data/testb/ceshi.zip";
    var unzipDir = "/data/testb/";
    var unzipDest = "/data/testb/ceshi.txt";
        
    try {
        var options = {};
        options.flush = zlib.FlushType.FLUSH_TYPE_NO_FLUSH;
         zlib.zipFile(src, unzipDir, options,).then((data) => {
                var zipStat = fileio.statSync(zipDest);
                var isFile = zipStat.isFile();
                expect(isFile).assertTrue();
                var srcSize = fileio.statSync(src).size;
                var destSize = zipStat.size;
                expect(srcSize>destSize).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);

                zlib.zipFile(zipDest, unzipDir, options,).then((data) => {
                    var unzipStat = fileio.statSync(unzipDest);
                    var isFile = unzipStat.isFile();
                    expect(isFile).assertTrue();           
                    var destSize = unzipStat.size;
                    var originSize = fileio.statSync(src).size;
                    var result = (originSize == destSize);
                    expect(result).assertTrue();
                    expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                    done(); 
                }).catch((err)=>{
                    console.log("FWK_ZipFile_3800 .catch((err)=>" + err);
                    done();         
                })
            }).catch((err)=>{
                console.log("FWK_ZipFile_3800 .catch((err)=>" + err);
                done();
        });        
    } catch(err) {
        console.error('FWK_ZipFile_3800 err:' + err);
        done();
    }
    console.log("==================FWK_ZipFile_3800 end==================");
})

/*
* @tc.number: FWK_ZipFile_3900
* @tc.name: zipFile 
* @tc.desc: FlushType.FLUSH_TYPE_NO_FLUSH
>>>>>>> upstream/master
*/
it('FWK_ZipFile_3900', 0, async function (done) {
    console.log("==================FWK_ZipFile_3900 start==================");
    var src = "/data/test/ceshi.txt";
    var zipDest = "/data/testb/ceshi.zip";
    var unzipDir = "/data/testb/";
    var unzipDest = "/data/testb/ceshi.txt";
        
    try {
        var options = {};
        options.flush = zlib.FlushType.FLUSH_TYPE_PARTIAL_FLUSH,
         zlib.zipFile(src, unzipDir, options,).then((data) => {
            var zipStat = fileio.statSync(zipDest);
            var isFile = zipStat.isFile();
            expect(isFile).assertTrue();
            var srcSize = fileio.statSync(src).size;
            var destSize = zipStat.size;
            expect(srcSize>destSize).assertTrue();
            expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);

            zlib.zipFile(zipDest, unzipDir, options,).then((data) => {
                var unzipStat = fileio.statSync(unzipDest);
                var isFile = unzipStat.isFile();
                expect(isFile).assertTrue();           
                var destSize = unzipStat.size;
                var originSize = fileio.statSync(src).size;
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done(); 
            }).catch((err)=>{
                console.log("FWK_ZipFile_3900 .catch((err)=>" + err);
                done();         
            })
            
        }).catch((err)=>{
            console.log("FWK_ZipFile_3900 .catch((err)=>" + err);
            done();
            
    });        
} catch(err) {
    console.error('FWK_ZipFile_3900 err:' + err);
    done();
     }
    console.log("==================FWK_ZipFile_3900 end==================");
})

<<<<<<< HEAD
it('FWK_UnzipFile_0600', 0, async function (done) {
    console.log("==================FWK_UnzipFile_0600 start==================");
    var src = "/data/testA/ceshi.txt.zip";
    var dest =  "/data/testA";
    var origin =  "/data/test/ceshi.txt";
    var destFile = "/data/testA/ceshi.txt";
        
    try{
        var options = {};
        options.flushFlush = zlib.FlushType.FLUSH_TYPE_PARTIAL_FLUSH,
        await zlib.unzipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(destFile);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var destSize = smallStat.size;
                var originStat = fileio.statSync(origin);
                var originSize = originStat.size; 
                console.log("FWK_UnzipFile_0600 destSize=" + destSize);
                console.log("FWK_UnzipFile_0600 data=" + data);
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_UnzipFile_0600   err:' + err);
        done();
    }
    console.log("==================FWK_UnzipFile_0600 end==================");
=======
/*
* @tc.number: FWK_ZipFile_4000
* @tc.name: zipFile 
* @tc.desc: FlushType.FLUSH_TYPE_NO_FLUSH
*/
it('FWK_ZipFile_4000', 0, async function (done) {
    console.log("==================FWK_ZipFile_4000 start==================");
    var src = "/data/test/";
    var dest = "/data/testA/ceshi.txt.zip";
        
    try {
        var options = {};
        options.flush = zlib.FlushType.FLUSH_TYPE_NO_FLUSH;
        await zlib.zipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    } catch(err) {
        console.error('FWK_ZipFile_4000 err:' + err);
        done();
    }
    console.log("==================FWK_ZipFile_4000 end==================");
>>>>>>> upstream/master
})

/*
<<<<<<< HEAD
* @tc.number: FWK_UnzipFile_0700
* @tc.name: unzipFile 
* @tc.desc: flushFlush.FLUSH_TYPE_SYNC_FLUSH
*/

it('FWK_UnzipFile_0700', 0, async function (done) {
    console.log("==================FWK_UnzipFile_0700 start==================");
    var src = "/data/testA/ceshi.txt.zip";
    var dest =  "/data/testA";
    var origin =  "/data/test/ceshi.txt";
    var destFile = "/data/testA/ceshi.txt";
        
    try{
        var options = {};
        options.flushFlush = zlib.FlushType.FLUSH_TYPE_SYNC_FLUSH,
        await zlib.unzipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(destFile);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var destSize = smallStat.size;
                var originStat = fileio.statSync(origin);
                var originSize = originStat.size; 
                console.log("FWK_UnzipFile_0700 destSize=" + destSize);
                console.log("FWK_UnzipFile_0700 data=" + data);
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_UnzipFile_0700    err:' + err);
        done();
    }
    console.log("==================FWK_UnzipFile_0700 end==================");
=======
* @tc.number: FWK_ZipFile_4100
* @tc.name: zipFile 
* @tc.desc: FlushType.FLUSH_TYPE_NO_FLUSH
*/
it('FWK_ZipFile_4100', 0, async function (done) {
    console.log("==================FWK_ZipFile_4100 start==================");
    var src = "/data/test/";
    var dest = "/data/testA/ceshi.txt.zip";
        
    try {
        var options = {};
        options.flush = zlib.FlushType.FLUSH_TYPE_PARTIAL_FLUSH,
        await zlib.zipFile(src, dest, options,).then((data) => {
                var smallStat = fileio.statSync(dest);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            }).catch((err)=>{
                console.log("FWK_ZipFile_4100 .catch((err)=>" + err);
                done();
            });
    } catch(err) {
        console.error('FWK_ZipFile_4100 err:' + err);
        done();
     }
    console.log("==================FWK_ZipFile_4100 end==================");
>>>>>>> upstream/master
})

/*
<<<<<<< HEAD
* @tc.number: FWK_UnzipFile_0800
* @tc.name: unzipFile 
* @tc.desc: flushFlush.FLUSH_TYPE_FULL_FLUSH
=======
* @tc.number: FWK_ZipFile_4200
* @tc.name: unzipFile 
* @tc.desc: unzipFile
>>>>>>> upstream/master
*/
it('FWK_ZipFile_4200', 0, async function (done) {
    console.log("==================FWK_UnzipFile_0100 start==================");
    var src = "/data/noExist.txt";
    var dest = "/data/test/";
    var options = {}
    zlib.unzipFile(src, dest, options,
        (err, data) => {
            console.log("FWK_ZipFile_4200 data: " + data);
            expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_DATA_ERROR);
            done();
    });
})

<<<<<<< HEAD
it('FWK_UnzipFile_0800', 0, async function (done) {
    console.log("==================FWK_UnzipFile_0800 start==================");
    var src = "/data/testA/ceshi.txt.zip";
    var dest =  "/data/testA";
    var origin =  "/data/test/ceshi.txt";
    var destFile = "/data/testA/ceshi.txt";
        
    try{
        var options = {};
        options.flushFlush = zlib.FlushType.FLUSH_TYPE_FULL_FLUSH,
        await zlib.unzipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(destFile);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var destSize = smallStat.size;
                var originStat = fileio.statSync(origin);
                var originSize = originStat.size; 
                console.log("FWK_UnzipFile_0800 destSize=" + destSize);
                console.log("FWK_UnzipFile_0800 data=" + data);
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_UnzipFile_0800    err:' + err);
        done();
    }
    console.log("==================FWK_UnzipFile_0800 end==================");
=======
/*
* @tc.number: FWK_ZipFile_4300
* @tc.name: unzipFile 
* @tc.desc: unzipFile
*/
it('FWK_ZipFile_4300', 0, async function (done) {
    console.log("==================FWK_ZipFile_4300 start==================");
    var src = "/data/test/";
    var dest = "/data/testA/ceshi.txt.zip";
    var options = {}
    zlib.unzipFile(src, dest, options,
        (err, data) => {
            console.log("FWK_ZipFile_4300 data: " + data);
            expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_ERRNO);
            done();
    });
})

/*
* @tc.number: FWK_ZipFile_4400
* @tc.name: unzipFile 
* @tc.desc: unzipFile
*/
it('FWK_ZipFile_4400', 0, async function (done) {
    console.log("==================FWK_ZipFile_4300 start==================");
    var src = "/data/test/cdshitwo.txt";
    var dest = "/data/testA/ceshi.txt.zip";
    var options = {}
    zlib.unzipFile(src, dest, options,
        (err, data) => {
            console.log("FWK_ZipFile_4400 data: " + data);
            expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_DATA_ERROR);
            done();
    });
})

/*
* @tc.number: FWK_ZipFile_4500
* @tc.name: unzipFile 
* @tc.desc: unzipFile
*/
it('FWK_ZipFile_4500', 0, async function (done) {
    console.log("==================FWK_ZipFile_4500 start==================");
    var src = "/data/testA/ceshi.txt.zip";
    var dest =  "";
    var options = {}
    zlib.unzipFile(src, dest, options,
        (err, data) => {
            console.log("FWK_ZipFile_4500 data: " + data);
            expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_ERRNO);
            done();
    });
>>>>>>> upstream/master
})


/*
<<<<<<< HEAD
* @tc.number: FWK_UnzipFile_0900
* @tc.name: unzipFile 
* @tc.desc: flushFlush.FLUSH_TYPE_FINISH
*/
it('FWK_UnzipFile_0900', 0, async function (done) {
    console.log("==================ACTS_unzipFile_0900 start==================");
    var src = "/data/testA/ceshi.txt.zip";
    var dest =  "/data/testA";
    var origin =  "/data/test/ceshi.txt";
    var destFile = "/data/testA/ceshi.txt";
        
    try{
        var options = {};
        options.flushFlush = zlib.FlushType.FLUSH_TYPE_FINISH,
=======
* @tc.number: FWK_ZipFile_4600
* @tc.name: zipFile 
* @tc.desc: FlushType.FLUSH_TYPE_NO_FLUSH
*/
it('FWK_ZipFile_4600', 0, async function (done) {
    console.log("==================FWK_ZipFile_4600 start==================");
    var src = "/data/test/ceshitwo.zip";
    var dest =  "/data/testb";
    var origin =  "/data/test/ceshitwo.txt";
    var destFile = "/data/testb/ceshitwo.txt";
        
    try {
        var options = {};
        options.flushFlush = zlib.FlushType.FLUSH_TYPE_NO_FLUSH,
>>>>>>> upstream/master
        await zlib.unzipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(destFile);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var destSize = smallStat.size;
                var originStat = fileio.statSync(origin);
                var originSize = originStat.size; 
<<<<<<< HEAD
                console.log("FWK_UnzipFile_0900 destSize=" + destSize);
                console.log("FWK_UnzipFile_0900 data=" + data);
=======
                console.log("FWK_ZipFile_4600 destSize=" + destSize);
                console.log("FWK_ZipFile_4600 data=" + data);
>>>>>>> upstream/master
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
<<<<<<< HEAD
    }catch(err) {
        console.error('FWK_UnzipFile_0900    err:' + err);
        done();
    }
    console.log("==================FWK_UnzipFile_0900 end==================");
=======
    } catch(err) {  
        console.error('FWK_ZipFilFWK_ZipFile_4600e_4200   err:' + err);
        done();
    }
    console.log("==================FWK_ZipFile_4600 end==================");
>>>>>>> upstream/master
})

/*
<<<<<<< HEAD
* @tc.number: FWK_UnzipFile_1000
* @tc.name: unzipFile 
* @tc.desc: flushFlush.FLUSH_TYPE_BLOCK
*/
it('FWK_UnzipFile_1000', 0, async function (done) {
    console.log("==================FWK_UnzipFile_1000 start==================");
    var src = "/data/testA/ceshi.txt.zip";
    var dest =  "/data/testA";
    var origin =  "/data/test/ceshi.txt";
    var destFile = "/data/testA/ceshi.txt";
        
    try{
        var options = {};
        options.flushFlush = zlib.FlushType.FLUSH_TYPE_BLOCK,
        await zlib.unzipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(destFile);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var destSize = smallStat.size;
                var originStat = fileio.statSync(origin);
                var originSize = originStat.size; 
                console.log("FWK_UnzipFile_1000 destSize=" + destSize);
                console.log("FWK_UnzipFile_1000 data=" + data);
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_UnzipFile_1000    err:' + err);
        done();
    }
    console.log("==================FWK_UnzipFile_1000 end==================");
})

/*
* @tc.number: FWK_UnzipFile_1100
* @tc.name: unzipFile 
* @tc.desc: flushFlush.FLUSH_TYPE_TREES
*/
it('FWK_UnzipFile_1100', 0, async function (done) {
    console.log("==================ACTS_unzipFile_1100 start==================");
    var src = "/data/testA/ceshi.txt.zip";
    var dest =  "/data/testA";
    var origin =  "/data/test/ceshi.txt";
    var destFile = "/data/testA/ceshi.txt";
        
        
    try{
        var options = {};
        options.flushFlush = zlib.FlushType.FLUSH_TYPE_TREES,
        await zlib.unzipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(destFile);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var destSize = smallStat.size;
                var originStat = fileio.statSync(origin);
                var originSize = originStat.size; 
                console.log("FWK_UnzipFile_1100 destSize=" + destSize);
                console.log("FWK_UnzipFile_1100 data=" + data);
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_UnzipFile_1100    err:' + err);
        done();
    }
    console.log("==================FWK_UnzipFile_1100 end==================");
})

/*
* @tc.number: FWK_UnzipFile_1200
* @tc.name: zipFile
* @tc.desc: inFile doesn't exist
*/
it('FWK_UnzipFile_1200', 0, async function (done) {
=======
* @tc.number: FWK_ZipFile_4700
* @tc.name: zipFile
* @tc.desc: inFile doesn't exist
*/
it('FWK_ZipFile_4700', 0, async function (done) {
>>>>>>> upstream/master
    console.log("==================FWK_UnzipFile_1200 start==================");
    var src = "/data/noExist.txt";
    var dest = "/data/test/";
    var options = {}   
    zlib.unzipFile(src, dest, options).then((data) => {
<<<<<<< HEAD
       console.log("FWK_UnzipFile_1200 data: " + data);
       expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_DATA_ERROR);
       done();
    }).catch((err)=>{
       console.log("FWK_UnzipFile_1200 err: " + err);
       done();
    });
    console.log("==================FWK_UnzipFile_1200 end ==================");
})

/*
* @tc.number: FWK_UnzipFile_1300
* @tc.name: zipFile
* @tc.desc: inFile is a directory that doesn't exist
*/
it('FWK_UnzipFile_1300', 0, async function (done) {
    console.log("==================FWK_UnzipFile_1300 start==================");
=======
       console.log("FWK_ZipFile_4700 data: " + data);
       expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_DATA_ERROR);
       done();
    }).catch((err)=>{
       console.log("FWK_ZipFile_4700 err: " + err);
       done();
    });
    console.log("==================FWK_ZipFile_4700 end ==================");
})

/*
* @tc.number: FWK_ZipFile_4800
* @tc.name: zipFile
* @tc.desc: inFile is a directory that doesn't exist
*/
it('FWK_ZipFile_4800', 0, async function (done) {
    console.log("==================FWK_ZipFile_4800 start==================");
>>>>>>> upstream/master
    var src = "/data/test";
    var dest = "/data/testA/ceshi.txt";
    var options = {}   
    zlib.unzipFile(src, dest, options).then((data) => {
<<<<<<< HEAD
       console.log("FWK_UnzipFile_1300 data: " + data);
       expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_ERRNO);
       done();
    }).catch((err)=>{
       console.log("FWK_UnzipFile_1300 err: " + err);
       done();
    });
    console.log("==================FWK_UnzipFile_1300 end ==================");
})

/*
* @tc.number: FWK_UnzipFile_1400
* @tc.name: zipFile
* @tc.desc:output file not specified
*/
it('FWK_UnzipFile_1400', 0, async function (done) {
    console.log("==================FWK_UnzipFile_1400 start==================");
    var src = "/data/test/ceshi.txt";
    var dest = "/data/testB/ceshi.txt.zip";
    var options = {}   
    zlib.unzipFile(src, dest, options).then((data) => {
       console.log("FWK_UnzipFile_1400 data: " + data);
       expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_ERRNO);
       done();
    }).catch((err)=>{
       console.log("FWK_UnzipFile_1400 err: " + err);
       done();
    });
    console.log("==================FWK_UnzipFile_1400 end ==================");
})

/*
* @tc.number: FWK_UnzipFile_1500
* @tc.name: zipFile
* @tc.desc:output file not specified
*/
it('FWK_UnzipFile_1500', 0, async function (done) {
    console.log("==================FWK_UnzipFile_1500 start==================");
    var src = "/data/testB/ceshi.txt.zip";
    var dest = "/data/testA/ceshi.txt";
    var options = {}   
    zlib.unzipFile(src, dest, options).then((data) => {
       console.log("FWK_UnzipFile_1500 data: " + data);
       expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_DATA_ERROR);
       done();
    }).catch((err)=>{
       console.log("FWK_UnzipFile_1500 err: " + err);
       done();
    });
    console.log("==================FWK_UnzipFile_1500 end ==================");
})

/*
* @tc.number: FWK_UnzipFile_1600
* @tc.name: unzipFile :
* @tc.desc: flushFlush.FLUSH_TYPE_NO_FLUSH
*/
it('FWK_UnzipFile_1600', 0, async function (done) {
    console.log("==================FWK_UnzipFile_1600 start==================");
    var src = "/data/testA/ceshi.txt.zip";
    var dest =  "/data/testA";
    var origin =  "/data/test/ceshi.txt";
    var destFile = "/data/testA/ceshi.txt";
        
    try{
        var options = {};
        options.flushFlush = zlib.FlushType.FLUSH_TYPE_NO_FLUSH,
        await zlib.unzipFile(src, dest, options,
            (err, data) => {
                var smallStat = fileio.statSync(destFile);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var destSize = smallStat.size;
                var originStat = fileio.statSync(origin);
                var originSize = originStat.size; 
                console.log("FWK_UnzipFile_1100 destSize=" + destSize);
                console.log("FWK_UnzipFile_1100 data=" + data);
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {  
        console.error('FWK_UnzipFile_01600   err:' + err);
        done();
    }
    console.log("==================FWK_UnzipFile_01600 end==================");
})

/*
* @tc.number: FWK_UnzipFile_1700
* @tc.name: unzipFile 
* @tc.desc: flushFlush.FLUSH_TYPE_FINISH
*/
it('FWK_UnzipFile_1700', 0, async function (done) {
    console.log("==================FWK_UnzipFile_1700 start==================");
    var src = "/data/testA/ceshi.txt.zip";
    var dest =  "/data/testA";
    var origin =  "/data/test/ceshi.txt";
    var destFile = "/data/testA/ceshi.txt";
        
    try{
        var options = {};
        options.flushFlush = zlib.FlushType.FLUSH_TYPE_FINISH,
        await zlib.unzipFile(src, dest, options,
            (err, data) => {
=======
       console.log("FWK_ZipFile_4800 data: " + data);
       expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_ERRNO);
       done();
    }).catch((err)=>{
       console.log("FWK_ZipFile_4800 err: " + err);
       done();
    });
    console.log("==================FWK_ZipFile_4800 end ==================");
})

/*
* @tc.number: FWK_ZipFile_4900
* @tc.name: zipFile
* @tc.desc:output file not specified
*/
it('FWK_ZipFile_4900', 0, async function (done) {
    console.log("==================FWK_ZipFile_4900 start==================");
    var src = "/data/test/ceshi.txt";
    var dest = "/data/testc/ceshi.txt.zip";
    var options = {}   
    zlib.unzipFile(src, dest, options).then((data) => {
       console.log("FWK_ZipFile_4900 data: " + data);
       expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_ERRNO);
       done();
    }).catch((err)=>{
       console.log("FWK_ZipFile_4900 err: " + err);
       done();
    });
    console.log("==================FWK_ZipFile_4900 end ==================");
})

/*
* @tc.number: FWK_ZipFile_5000
* @tc.name: unzipFile 
* @tc.desc: unzipFile
*/
it('FWK_ZipFile_5000', 0, async function (done) {
    console.log("==================FWK_ZipFile_5000 start==================");
    var src = "/data/test/cdshitwo.txt";
    var dest = "/data/testA/ceshi.txt.zip";
    var options = {}
    zlib.unzipFile(src, dest, options,).then((data)=>{
            console.log("FWK_ZipFile_5000 data: " + data);
            expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_DATA_ERROR);
            done();
        }).catch((err)=>{
            console.log("FWK_ZipFile_5000 err: " + err);
            done();
    });
})

/*
* @tc.number: FWK_ZipFile_5100
* @tc.name: zipFile 
* @tc.desc: FlushType.FLUSH_TYPE_NO_FLUSH
*/
it('FWK_ZipFile_5100', 0, async function (done) {
    console.log("==================FWK_ZipFile_5100 start==================");
    var src = "/data/test/ceshitwo.zip";
    var dest =  "/data/testb";
    var origin =  "/data/test/ceshitwo.txt";
    var destFile = "/data/testb/ceshitwo.txt";
        
    try {
        var options = {};
        options.flushFlush = zlib.FlushType.FLUSH_TYPE_NO_FLUSH,
         zlib.unzipFile(src, dest, options).then((data)=>{
>>>>>>> upstream/master
                var smallStat = fileio.statSync(destFile);
                var isFile = smallStat.isFile();
                expect(isFile).assertTrue();

                var destSize = smallStat.size;
                var originStat = fileio.statSync(origin);
                var originSize = originStat.size; 
<<<<<<< HEAD
                console.log("FWK_UnzipFile_1700 destSize=" + destSize);
                console.log("FWK_UnzipFile_1700 data=" + data);
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            });
    }catch(err) {
        console.error('FWK_UnzipFile_1700    err:' + err);
        done();
    }
    console.log("==================FWK_UnzipFile_1700 end==================");
=======
                console.log("FWK_ZipFile_5100 destSize=" + destSize);
                console.log("FWK_ZipFile_5100 data=" + data);
                var result = (originSize == destSize);
                expect(result).assertTrue();
                expect(data).assertEqual(zlib.ErrorCode.ERROR_CODE_OK);
                done();
            }).catch((err)=>{
                expect(fail).assertTrue();
                console.log("FWK_ZipFile_5100 .catch((err)=>" + err);
                done();
            });
    } catch(err) {  
        console.error('FWK_ZipFile_5100   err:' + err);
        expect(fail).assertTrue();
        done();
    }
    console.log("==================FWK_ZipFile_5100 end==================");
>>>>>>> upstream/master
})

})
