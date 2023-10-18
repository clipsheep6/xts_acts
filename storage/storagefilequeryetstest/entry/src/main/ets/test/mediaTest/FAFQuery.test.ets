/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
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

import { describe, it, expect } from '@ohos/hypium'
import fileAccess from '@ohos.file.fileAccess';
export default function FAFCopyTest(helper) {

  describe('FAFCopyTest', async function () {
    var imageFileRelativePath = "Download/queryTest/image/01.jpg";
    var videoFileRelativePath = "Download/queryTest/video/01.mp4";
    var audioFileRelativePath = "Download/queryTest/audio/01.mp3";
    var fileFileRelativePath = "Download/queryTest/file/01.dat";
    var imageDirRelativePath = "Download/queryTest/image";
    var videoDirRelativePath = "Download/queryTest/video";
    var audioDirRelativePath = "Download/queryTest/audio";
    var fileDirRelativePath = "Download/queryTest/file";

    var imageFileRelativ_path = 'Download/queryTest/image/';
    var imageFileDisplay_name = '01.jpg';
    var videoFileRelativ_path = 'Download/queryTest/video/';
    var videoFileDisplay_name = '01.mp4';
    var audioFileRelativ_path = 'Download/queryTest/audio/';
    var audioFileDisplay_name = '01.mp3';
    var fileFileRelativ_path = 'Download/queryTest/file/';
    var fileFileDisplay_name = '01.dat';
    var imageDirDisplay_name = 'image';
    var videoDirDisplay_name = 'video';
    var audioDirDisplay_name = 'audio';
    var fileDirDisplay_name = 'file';

    var errCodeInvalidArgument = 13900020;
    var errMsgInvalidArgument = 'Invalid argument';
    var errCodeUriCheck = 14300002;
    var errMsgUriCheck = 'Invalid uri';
    
    var jsonStrSingleDisplayname = JSON.stringify({[fileAccess.FileKey.DISPLAY_NAME] : ""});
    var jsonStrSingleRelativepath = JSON.stringify({[fileAccess.FileKey.RELATIVE_PATH] : ""});
    var jsonStrFull = JSON.stringify({[fileAccess.FileKey.DISPLAY_NAME] : "",
                                      [fileAccess.FileKey.DATE_ADDED] : "",
                                      [fileAccess.FileKey.DATE_MODIFIED ] : "",
                                      [fileAccess.FileKey.RELATIVE_PATH ] : "",
                                      [fileAccess.FileKey.FILE_SIZE ] : "",
                                      [fileAccess.FileKey.WIDTH ] : "",
                                      [fileAccess.FileKey.HEIGHT  ] : "",
                                      [fileAccess.FileKey.DURATION  ] : ""});

    async function testQueryFileSingle(done, testNum, relativePath, verify) {
      try {
        var fileInfo = await helper.getFileInfoFromRelativePath(relativePath);
        let queryResult = await helper.query(fileInfo.uri, jsonStrSingleRelativepath);
        expect(JSON.parse(queryResult).relative_path).assertEqual(verify);
        done();
      } catch (error) {
        console.error(`${testNum}:: error.code :${error.code}, errorMessage : ${error.message}`);
        expect(false).assertTrue;
      };
    }
    async function testQueryDirSingle(done, testNum, relativePath, verify) {
      try {
        let fileInfo = await helper.getFileInfoFromRelativePath(relativePath);
        let queryResult = await helper.query(fileInfo.uri, jsonStrSingleDisplayname);
        expect(JSON.parse(queryResult).display_name).assertEqual(verify);
        done();
      } catch (error) {
        console.error(`${testNum}:: error.code :${error.code}, errorMessage : ${error.message}`);
        expect(false).assertTrue;
      };
    }
    async function testQueryFull(done, testNum, relativePath, verify) {
      try {
        let fileInfo = await helper.getFileInfoFromRelativePath(relativePath);
        let queryResult = await helper.query(fileInfo.uri, jsonStrFull);
        expect(JSON.parse(queryResult).display_name).assertEqual(verify);
        done();
      } catch (error) {
        console.error(`${testNum}:: error.code :${error.code}, errorMessage : ${error.message}`);
        expect(false).assertTrue;
      };
    }
    async function testQueryUriAbnormal(done, testNum, uri) {
      var metaJsonForAbnormalTest = '{"display_name" : ""}';
      try {
        await helper.query(uri, metaJsonForAbnormalTest);
      } catch (error) {
        console.error(`${testNum}:: error.code :${error.code}, errorMessage : ${error.message}`);
        expect((error.code == errCodeInvalidArgument) && (error.message == errMsgInvalidArgument)).assertTrue();
        done();
      };
    }
    async function testQueryUriFormatAbnormal(done, testNum, uri) {
      var metaJsonForAbnormalTest = '{"display_name" : ""}';
      try {
        await helper.query(uri, metaJsonForAbnormalTest);
      } catch (error) {
        console.error(`${testNum}:: error.code :${error.code}, errorMessage : ${error.message}`);
        expect((error.code == errCodeUriCheck) && (error.message == errMsgUriCheck)).assertTrue();
        done();
      };
    }
    async function testQueryMetaJsonAbnormal(done, testNum, metaJson) {
      try {
        let fileInfo = await helper.getFileInfoFromRelativePath(imageFileRelativePath);
        await helper.query(fileInfo.uri, metaJson);
      } catch (error) {
        console.error(`${testNum}:: error.code :${error.code}, errorMessage : ${error.message}`);
        expect((error.code == errCodeInvalidArgument) && (error.message == errMsgInvalidArgument)).assertTrue();
        done();
      };
    }

    async function testQueryFileSingleCallback(done, testNum, relativePath, verify) {
      try {
        var fileInfo = await helper.getFileInfoFromRelativePath(relativePath);
        helper.query(fileInfo.uri, jsonStrSingleRelativepath, (err, queryResult) => {
          if (err) {
            console.log("query_file_single_callback, failed");
            expect(false).assertTrue();
          }
          expect(JSON.parse(queryResult).relative_path).assertEqual(verify);
          done();
        });
      } catch (error) {
        console.error(`${testNum}:: error.code :${error.code}, errorMessage : ${error.message}`);
        expect(false).assertTrue;
      };
    }
    async function testQueryDirSingleCallback(done, testNum, relativePath, verify) {
      try {
        var fileInfo = await helper.getFileInfoFromRelativePath(relativePath);
        helper.query(fileInfo.uri, jsonStrSingleDisplayname, (err, queryResult) => {
          if (err) {
            console.log("query_dir_single_callback, failed");
            expect(false).assertTrue();
          }
          expect(JSON.parse(queryResult).display_name).assertEqual(verify);
          done();
        });
      } catch (error) {
        console.error(`${testNum}:: error.code :${error.code}, errorMessage : ${error.message}`);
        expect(false).assertTrue;
      };
    }
    async function testQueryFullCallback(done, testNum, relativePath, verify) {
      try {
        var fileInfo = await helper.getFileInfoFromRelativePath(relativePath);
        helper.query(fileInfo.uri, jsonStrFull, (err, queryResult) => {
          if (err) {
            console.log("query_full_callback, failed");
            expect(false).assertTrue();
          }
          expect(JSON.parse(queryResult).display_name).assertEqual(verify);
          done();
        });
      } catch (error) {
        console.error(`${testNum}:: error.code :${error.code}, errorMessage : ${error.message}`);
        expect(false).assertTrue;
      };
    }
    async function testQueryUriAbnormalCallback(done, testNum, uri) {
      var metaJsonForAbnormalTest = '{"display_name" : ""}';
      try {
        helper.query(uri, metaJsonForAbnormalTest, (err) => {
          if (err) {
            console.error("query_uri_abnormal_callback failed");
          }
          expect(false).assertTrue();
        });
      } catch (error) {
        console.error(`${testNum}:: error.code :${error.code}, errorMessage : ${error.message}`);
        expect((error.code == errCodeInvalidArgument) && (error.message == errMsgInvalidArgument)).assertTrue();
        done();
      };
    }
    async function testQueryUriFormatAbnormalCallback(done, testNum, uri) {
      var metaJsonForAbnormalTest = '{"display_name" : ""}';
      try {
        helper.query(uri, metaJsonForAbnormalTest, (err) => {
          if (err) {
            console.error(`${testNum}:: err.code :${err.code}, errMessage : ${err.message}`);
            expect((err.code == errCodeUriCheck) && (err.message == errMsgUriCheck)).assertTrue();
            done();
          }
        });
      } catch (error) {
        console.error(`${testNum}:: error.code :${error.code}, errorMessage : ${error.message}`);
        expect(false).assertTrue();
      };
    }
    async function testQueryMetaJsonFormatAbnormalCallback(done, testNum, metaJson) {
      try {
        let fileInfo = await helper.getFileInfoFromRelativePath(imageFileRelativePath);
        helper.query(fileInfo.uri, metaJson, (err) => {
          if (err) {
            console.error(`${testNum}:: err.code :${err.code}, errMessage : ${err.message}`);
            expect((err.code == errCodeInvalidArgument) && (err.message == errMsgInvalidArgument)).assertTrue();
            done();
          }
        });
      } catch (error) {
        console.error(`${testNum}:: error.code :${error.code}, errorMessage : ${error.message}`);
        expect(false).assertTrue();
      };
    }
    async function testQueryMetaJsonAbnormalCallback(done, testNum, metaJson) {
      try {
        let fileInfo = await helper.getFileInfoFromRelativePath(imageFileRelativePath);
        helper.query(fileInfo.uri, metaJson, (err) => {
          if (err) {
            console.error(`${testNum}:: err.code :${err.code}, errMessage : ${err.message}`);
          }
        });
      } catch (error) {
        console.error(`${testNum}:: error.code :${error.code}, errorMessage : ${error.message}`);
        expect((error.code == errCodeInvalidArgument) && (error.message == errMsgInvalidArgument)).assertTrue();
        done();
      };
    }
    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0000
     * @tc.name media_file_access_test_query_promise_000
     * @tc.desc Test query() interfaces, return in promise mode.
     *  query(file.uri, metaJson), file.uri use image. metaJson has single property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0000', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0000';
      testQueryFileSingle(done, testNum, imageFileRelativePath, imageFileRelativ_path);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0100
     * @tc.name media_file_access_test_query_promise_001
     * @tc.desc Test query() interfaces, return in promise mode.
     *  query(file.uri, metaJson), file.uri use video. metaJson has single property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0100', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0100';
      testQueryFileSingle(done, testNum, videoFileRelativePath, videoFileRelativ_path);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0200
     * @tc.name media_file_access_test_query_promise_002
     * @tc.desc Test query() interfaces, return in promise mode.
     *  query(file.uri, metaJson), file.uri use audio. metaJson has single property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0200', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0200';
      testQueryFileSingle(done, testNum, audioFileRelativePath, audioFileRelativ_path);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0300
     * @tc.name media_file_access_test_query_promise_003
     * @tc.desc Test query() interfaces, return in promise mode.
     *  query(file.uri, metaJson), file.uri use file. metaJson has single property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0300', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0300';
      testQueryFileSingle(done, testNum, fileFileRelativePath, fileFileRelativ_path);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0400
     * @tc.name media_file_access_test_query_promise_004
     * @tc.desc Test query() interfaces, return in promise mode.
     *  query(dir.uri, metaJson), dir.uri use image. metaJson has single property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0400', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0400';
      testQueryDirSingle(done, testNum, imageDirRelativePath, imageDirDisplay_name);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0500
     * @tc.name media_file_access_test_query_promise_005
     * @tc.desc Test query() interfaces, return in promise mode.
     *  query(dir.uri, metaJson), dir.uri use video. metaJson has single property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0500', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0500';
      testQueryDirSingle(done, testNum, videoDirRelativePath, videoDirDisplay_name);
    });

    /**
    * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0600
    * @tc.name media_file_access_test_query_promise_006
    * @tc.desc Test query() interfaces, return in promise mode.
    *  query(dir.uri, metaJson), dir.uri use audio. metaJson has single property
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0600', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0600';
      testQueryDirSingle(done, testNum, audioDirRelativePath, audioDirDisplay_name);
    });

    /**
    * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0700
    * @tc.name media_file_access_test_query_promise_007
    * @tc.desc Test query() interfaces, return in promise mode.
    *  query(dir.uri, metaJson), dir.uri use file. metaJson has single property
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0700', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0700';
      testQueryDirSingle(done, testNum, fileDirRelativePath, fileDirDisplay_name);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0800
     * @tc.name media_file_access_test_query_promise_008
     * @tc.desc Test query() interfaces, return in promise mode.
     *  query(file.uri, metaJson), file.uri use image. metaJson has full property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0800', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0800';
      testQueryFull(done, testNum, imageFileRelativePath, imageFileDisplay_name);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0900
     * @tc.name media_file_access_test_query_promise_009
     * @tc.desc Test query() interfaces, return in promise mode.
     *  query(file.uri, metaJson), file.uri use video. metaJson has full property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0900', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_0900';
      testQueryFull(done, testNum, videoFileRelativePath, videoFileDisplay_name);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1000
     * @tc.name media_file_access_test_query_promise_010
     * @tc.desc Test query() interfaces, return in promise mode.
     *  query(file.uri, metaJson), file.uri use audio. metaJson has full property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1000', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1000';
      testQueryFull(done, testNum, audioFileRelativePath, audioFileDisplay_name);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1100
     * @tc.name media_file_access_test_query_promise_011
     * @tc.desc Test query() interfaces, return in promise mode.
     *  query(file.uri, metaJson), file.uri use file. metaJson has full property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1100', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1100';
      testQueryFull(done, testNum, fileFileRelativePath, fileFileDisplay_name);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1200
     * @tc.name media_file_access_test_query_promise_012
     * @tc.desc Test query() interfaces, return in promise mode.
     *  query(dir.uri, metaJson), dir.uri use image. metaJson has full property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1200', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1200';
      testQueryFull(done, testNum, imageDirRelativePath, imageDirDisplay_name);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1300
     * @tc.name media_file_access_test_query_promise_013
     * @tc.desc Test query() interfaces, return in promise mode.
     *  query(dir.uri, metaJson), dir.uri use video. metaJson has full property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1300', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1300';
      testQueryFull(done, testNum, videoDirRelativePath, videoDirDisplay_name);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1400
     * @tc.name media_file_access_test_query_promise_014
     * @tc.desc Test query() interfaces, return in promise mode.
     *  query(dir.uri, metaJson), dir.uri use audio. metaJson has full property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1400', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1400';
      testQueryFull(done, testNum, audioDirRelativePath, audioDirDisplay_name);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1500
     * @tc.name media_file_access_test_query_promise_015
     * @tc.desc Test query() interfaces, return in promise mode.
     *  query(dir.uri, metaJson), dir.uri use file. metaJson has full property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1500', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1500';
      testQueryFull(done, testNum, fileDirRelativePath, fileDirDisplay_name);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1600
     * @tc.name media_file_access_test_query_promise_016
     * @tc.desc Test query() interfaces, return in promise mode.
     *  query(uri, metaJson), uri is null
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1600', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1600';
      let uri = null;
      testQueryUriAbnormal(done, testNum, uri);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1700
     * @tc.name media_file_access_test_query_promise_017
     * @tc.desc Test query() interfaces, return in promise mode.
     *  query(uri, metaJson), uri is undefined
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1700', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1700';
      let uri = undefined;
      testQueryUriAbnormal(done, testNum, uri);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1800
     * @tc.name media_file_access_test_query_promise_018
     * @tc.desc Test query() interfaces, return in promise mode.
     *  query(uri, metaJson), uri is '\''
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1800', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1800';
      let uri = '\'';
      testQueryUriFormatAbnormal(done, testNum, uri);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1900
     * @tc.name media_file_access_test_query_promise_019
     * @tc.desc Test query() interfaces, return in promise mode.
     *  query(uri, metaJson), uri is Number.MAX_VALUE
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1900', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_1900';
      let uri = Number.MAX_VALUE;
      testQueryUriAbnormal(done, testNum, uri);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2000
     * @tc.name media_file_access_test_query_promise_020
     * @tc.desc Test query() interfaces, return in promise mode.
     *  query(uri, metaJson), uri is Number.MAX_SAFE_INTEGER
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2000', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2000';
      let uri = Number.MAX_SAFE_INTEGER;
      testQueryUriAbnormal(done, testNum, uri);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2100
     * @tc.name media_file_access_test_query_promise_021
     * @tc.desc Test query() interfaces, return in promise mode.
     *  query(uri, metaJson), uri is ''
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2100', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2100';
      let uri = '';
      testQueryUriFormatAbnormal(done, testNum, uri);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2200
     * @tc.name media_file_access_test_query_promise_022
     * @tc.desc Test query() interfaces, return in promise mode.
     *  query(uri, metaJson), uri is 'test'
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2200', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2200';
      let uri = 'test';
      testQueryUriFormatAbnormal(done, testNum, uri);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2300
     * @tc.name media_file_access_test_query_promise_023
     * @tc.desc Test query() interfaces, return in promise mode.
     *  query(uri, metaJson), metaJson is '{"file_id" : """}'
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2300', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2300';
      let metaJson = '{"file_id" : """}';
      testQueryMetaJsonAbnormal(done, testNum, metaJson);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2400
     * @tc.name media_file_access_test_query_promise_024
     * @tc.desc Test query() interfaces, return in promise mode.
     *  query(uri, metaJson), metaJson is null
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2400', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2400';
      let metaJson = null;
      testQueryMetaJsonAbnormal(done, testNum, metaJson);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2500
     * @tc.name media_file_access_test_query_promise_025
     * @tc.desc Test query() interfaces, return in promise mode.
     *  query(uri, metaJson), metaJson is undefined
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2500', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2500';
      let metaJson = undefined;
      testQueryMetaJsonAbnormal(done, testNum, metaJson);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2600
     * @tc.name media_file_access_test_query_promise_026
     * @tc.desc Test query() interfaces, return in promise mode.
     *  query(uri, metaJson), metaJson is Number.MAX_VALUE
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2600', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2600';
      let metaJson = Number.MAX_VALUE;
      testQueryMetaJsonAbnormal(done, testNum, metaJson);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2700
     * @tc.name media_file_access_test_query_promise_027
     * @tc.desc Test query() interfaces, return in promise mode.
     *  query(uri, metaJson), metaJson is Number.MAX_SAFE_INTEGER
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2700', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2700';
      let metaJson = Number.MAX_SAFE_INTEGER;
      testQueryMetaJsonAbnormal(done, testNum, metaJson);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2800
     * @tc.name media_file_access_test_query_promise_028
     * @tc.desc Test query() interfaces, return in promise mode.
     *  query(uri, metaJson), metaJson is ''
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2800', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2800';
      let metaJson = '';
      testQueryMetaJsonAbnormal(done, testNum, metaJson);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2900
     * @tc.name media_file_access_test_query_promise_029
     * @tc.desc Test query() interfaces, return in promise mode.
     *  query(uri, metaJson), metaJson is 'test'
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2900', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_PROMISE_2900';
      let metaJson = 'test';
      testQueryMetaJsonAbnormal(done, testNum, metaJson);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0000
     * @tc.name media_file_access_test_query_callback_000
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(file.uri, metaJson), file.uri use image. metaJson has single property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0000', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0000';
      testQueryFileSingleCallback(done, testNum, imageFileRelativePath, imageFileRelativ_path);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0100
     * @tc.name media_file_access_test_query_callback_001
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(file.uri, metaJson), file.uri use video. metaJson has single property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0100', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0100';
      testQueryFileSingleCallback(done, testNum, videoFileRelativePath, videoFileRelativ_path);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0200
     * @tc.name media_file_access_test_query_callback_002
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(file.uri, metaJson), file.uri use audio. metaJson has single property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0200', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0200';
      testQueryFileSingleCallback(done, testNum, audioFileRelativePath, audioFileRelativ_path);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0300
     * @tc.name media_file_access_test_query_callback_003
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(file.uri, metaJson), file.uri use file. metaJson has single property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0300', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0300';
      testQueryFileSingleCallback(done, testNum, fileFileRelativePath, fileFileRelativ_path);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0400
     * @tc.name media_file_access_test_query_callback_004
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(dir.uri, metaJson), dir.uri use image. metaJson has single property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0400', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0400';
      testQueryDirSingleCallback(done, testNum, imageDirRelativePath, imageDirDisplay_name);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0500
     * @tc.name media_file_access_test_query_callback_005
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(dir.uri, metaJson), dir.uri use video. metaJson has single property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0500', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0500';
      testQueryDirSingleCallback(done, testNum, videoDirRelativePath, videoDirDisplay_name);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0600
     * @tc.name media_file_access_test_query_callback_006
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(dir.uri, metaJson), dir.uri use audio. metaJson has single property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0600', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0600';
      testQueryDirSingleCallback(done, testNum, audioDirRelativePath, audioDirDisplay_name);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0700
     * @tc.name media_file_access_test_query_callback_007
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(dir.uri, metaJson), dir.uri use file. metaJson has single property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0700', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0700';
      testQueryDirSingleCallback(done, testNum, fileDirRelativePath, fileDirDisplay_name);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0800
     * @tc.name media_file_access_test_query_callback_008
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(file.uri, metaJson), file.uri use image. metaJson has full property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0800', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0800';
      testQueryFullCallback(done, testNum, imageFileRelativePath, imageFileDisplay_name);
    });

    /**
       * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0900
       * @tc.name media_file_access_test_query_callback_009
       * @tc.desc Test query() interfaces, return in callback mode.
       *  query(file.uri, metaJson), file.uri use video. metaJson has full property
       * @tc.size MEDIUM
       * @tc.type Function
       * @tc.level Level 0
       * @tc.require
       */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0900', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_0900';
      testQueryFullCallback(done, testNum, videoFileRelativePath, videoFileDisplay_name);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1000
     * @tc.name media_file_access_test_query_callback_010
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(file.uri, metaJson), file.uri use audio. metaJson has full property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1000', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1000';
      testQueryFullCallback(done, testNum, audioFileRelativePath, audioFileDisplay_name);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1100
     * @tc.name media_file_access_test_query_callback_011
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(file.uri, metaJson), file.uri use file. metaJson has full property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1100', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1100';
      testQueryFullCallback(done, testNum, fileFileRelativePath, fileFileDisplay_name);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1200
     * @tc.name media_file_access_test_query_callback_012
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(dir.uri, metaJson), dir.uri use image. metaJson has full property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1200', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1200';
      testQueryFullCallback(done, testNum, imageDirRelativePath, imageDirDisplay_name);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1300
     * @tc.name media_file_access_test_query_callback_013
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(dir.uri, metaJson), dir.uri use video. metaJson has full property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1300', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1300';
      testQueryFullCallback(done, testNum, videoDirRelativePath, videoDirDisplay_name);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1400
     * @tc.name media_file_access_test_query_callback_014
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(dir.uri, metaJson), dir.uri use audio. metaJson has full property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1400', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1400';
      testQueryFullCallback(done, testNum, audioDirRelativePath, audioDirDisplay_name);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1500
     * @tc.name media_file_access_test_query_callback_015
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(dir.uri, metaJson), dir.uri use file. metaJson has full property
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1500', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1500';
      testQueryFullCallback(done, testNum, fileDirRelativePath, fileDirDisplay_name);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1600
     * @tc.name media_file_access_test_query_callback_016
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(uri, metaJson), uri is null
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1600', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1600';
      let uri = null;
      testQueryUriAbnormalCallback(done, testNum, uri);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1700
     * @tc.name media_file_access_test_query_callback_017
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(uri, metaJson), uri is undefined
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1700', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1700';
      let uri = undefined;
      testQueryUriAbnormalCallback(done, testNum, uri);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1800
     * @tc.name media_file_access_test_query_callback_018
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(uri, metaJson), uri is '\''
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1800', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1800';
      let uri = '\'';
      testQueryUriFormatAbnormalCallback(done, testNum, uri);
    });
    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1900
     * @tc.name media_file_access_test_query_callback_019
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(uri, metaJson), uri is Number.MAX_VALUE
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1900', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_1900';
      let uri = Number.MAX_VALUE;
      testQueryUriAbnormalCallback(done, testNum, uri);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2000
     * @tc.name media_file_access_test_query_callback_020
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(uri, metaJson), uri is Number.MAX_SAFE_INTEGER
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2000', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2000';
      let uri = Number.MAX_SAFE_INTEGER;
      testQueryUriAbnormalCallback(done, testNum, uri);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2100
     * @tc.name media_file_access_test_query_callback_021
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(uri, metaJson), uri is ''
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2100', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2100';
      let uri = '';
      testQueryUriFormatAbnormalCallback(done, testNum, uri);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2200
     * @tc.name media_file_access_test_query_callback_022
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(uri, metaJson), uri is 'test'
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2200', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2200';
      let uri = 'test';
      testQueryUriFormatAbnormalCallback(done, testNum, uri);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2300
     * @tc.name media_file_access_test_query_callback_023
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(uri, metaJson), metaJson is '{"file_id" : """}'
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2300', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2300';
      let metaJson = '{"file_id" : """}';
      testQueryMetaJsonFormatAbnormalCallback(done, testNum, metaJson);
    });
    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2400
     * @tc.name media_file_access_test_query_callback_024
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(uri, metaJson), metaJson is null
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2400', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2400';
      let metaJson = null;
      testQueryMetaJsonAbnormalCallback(done, testNum, metaJson);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2500
     * @tc.name media_file_access_test_query_callback_025
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(uri, metaJson), metaJson is undefined
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2500', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2500';
      let metaJson = undefined;
      testQueryMetaJsonAbnormalCallback(done, testNum, metaJson);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2600
     * @tc.name media_file_access_test_query_callback_026
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(uri, metaJson), metaJson is Number.MAX_VALUE
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2600', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2600';
      let metaJson = Number.MAX_VALUE;
      testQueryMetaJsonAbnormalCallback(done, testNum, metaJson);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2700
     * @tc.name media_file_access_test_query_callback_027
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(uri, metaJson), metaJson is Number.MAX_SAFE_INTEGER
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2700', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2700';
      let metaJson = Number.MAX_SAFE_INTEGER;
      testQueryMetaJsonAbnormalCallback(done, testNum, metaJson);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2800
     * @tc.name media_file_access_test_query_callback_028
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(uri, metaJson), metaJson is ''
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2800', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2800';
      let metaJson = '';
      testQueryMetaJsonFormatAbnormalCallback(done, testNum, metaJson);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2900
     * @tc.name media_file_access_test_query_callback_029
     * @tc.desc Test query() interfaces, return in callback mode.
     *  query(uri, metaJson), metaJson is 'test'
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2900', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_QUERY_CALLBACK_2900';
      let metaJson = 'test';
      testQueryMetaJsonFormatAbnormalCallback(done, testNum, metaJson);
    });

  })
}