/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 
import {
  describe,
  it,
  expect,
  filemanager
} from "./Common";

// getRoot() interface, when the parameter is "local", the returned data and the data contrast,  return the same data is correct
const ROOTFILE = [
  {"name":"image_album","path":"dataability:///album","type":"album","size":0,"added_time":0,"modified_time":0},
  {"name":"video_album","path":"dataability:///album","type":"album","size":0,"added_time":0,"modified_time":0},
  {"name":"audio_album","path":"dataability:///album","type":"album","size":0,"added_time":0,"modified_time":0},
  {"name":"file_folder","path":"dataability:///album","type":"album","size":0,"added_time":0,"modified_time":0}
];

// listFile() interface, when the parameter type is "image", the returned data and the data contrast, return the same data is correct
const LISTFILE_IMAGEINFO = [
  {"name":"taobao","path":"dataability:///com.ohos.medialibrary.MediaLibraryDataAbility/file/1","type":"8","size":4096,"added_time":67817,"modified_time":67817},
  {"name":"image","path":"dataability:///com.ohos.medialibrary.MediaLibraryDataAbility/file/2","type":"8","size":4096,"added_time":65375,"modified_time":65375},
  {"name":"weixin","path":"dataability:///com.ohos.medialibrary.MediaLibraryDataAbility/file/10","type":"8","size":4096,"added_time":65375,"modified_time":65375}
];

// listFile() nterface, when the parameter type is "video", the returned data and the data contrast, return the same data is correct
const LISTFILE_VIDEOINFO = [
  {"name":"taobao","path":"dataability:///com.ohos.medialibrary.MediaLibraryDataAbility/file/9","type":"8","size":4096,"added_time":65375,"modified_time":65375}
];

// listFile() interface, when the parameter type is "file", the returned data and the data contrast, return the same data is correct
const LISTFILE_FILEINFO = [
  {"name":"taobao","path":"dataability:///com.ohos.medialibrary.MediaLibraryDataAbility/file/1","type":"8","size":4096,"added_time":67817,"modified_time":67817},
  {"name":"image","path":"dataability:///com.ohos.medialibrary.MediaLibraryDataAbility/file/2","type":"8","size":4096,"added_time":65375,"modified_time":65375},
  {"name":"media_library.db-wal","path":"dataability:///com.ohos.medialibrary.MediaLibraryDataAbility/file/3","type":"1","size":16512,"added_time":82255,"modified_time":82255},
  {"name":"fmsdir.sh","path":"dataability:///com.ohos.medialibrary.MediaLibraryDataAbility/file/4","type":"1","size":368,"added_time":67809,"modified_time":67809},
  {"name":"media_library.db","path":"dataability:///com.ohos.medialibrary.MediaLibraryDataAbility/file/5","type":"1","size":4096,"added_time":82255,"modified_time":82255},
  {"name":"photo","path":"dataability:///com.ohos.medialibrary.MediaLibraryDataAbility/file/8","type":"8","size":4096,"added_time":65375,"modified_time":65375},
  {"name":"video","path":"dataability:///com.ohos.medialibrary.MediaLibraryDataAbility/file/14","type":"8","size":4096,"added_time":65375,"modified_time":65375},
  {"name":"audio","path":"dataability:///com.ohos.medialibrary.MediaLibraryDataAbility/file/15","type":"8","size":4096,"added_time":65375,"modified_time":65375},
  {"name":"document","path":"dataability:///com.ohos.medialibrary.MediaLibraryDataAbility/file/16","type":"8","size":4096,"added_time":65375,"modified_time":65375}
];
// createFile promise way to create a file returns expected URI
const PROMISE_URI = "dataability:///com.ohos.medialibrary.MediaLibraryDataAbility/file/20";

// createFile callback way to create a file returns expected URI
const CALLBACK_URI = "dataability:///com.ohos.medialibrary.MediaLibraryDataAbility/file/21";

describe("filemanager_test", function () {

  /**
   * @tc.number SUB_DF_FILEMANAGER_CREATEFILE_0000
   * @tc.name filemanager_test_createfile_async_000
   * @tc.desc Test createFile() interfaces promise way to create a file normally.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it("filemanager_test_createfile_async_000", 0, async function (done) {
    try {
      let name = "filemanager_test_createfile_async_000.txt";
      let path = 'dataability:///com.ohos.medialibrary.MediaLibraryDataAbility/file/8';
      let uri = await filemanager.createFile("local", name, path);
      expect(uri == PROMISE_URI).assertTrue();
    } catch (error) {
      console.log("filemanager_test_createfile_async_000 has failed for " + error);
      expect(null).assertFail();
    }
    done();
  });

  /**
   * @tc.number SUB_DF_FILEMANAGER_CREATEFILE_0010
   * @tc.name filemanager_test_createfile_async_001
   * @tc.desc Test createFile() interfaces callback way to create a file normally.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it("filemanager_test_createfile_async_001", 0, async function (done) {
    let name = "filemanager_test_createfile_async_001.txt";
    let path = 'dataability:///com.ohos.medialibrary.MediaLibraryDataAbility/file/8';
    filemanager.createFile("local", name, path, (err, uri) => {
      expect(uri == CALLBACK_URI).assertTrue();
    });
    done();
  });
  
  /**
   * @tc.number SUB_DF_FILEMANAGER_CREATEFILE_0020
   * @tc.name filemanager_test_createfile_async_002
   * @tc.desc Test createFile() interfaces to create an existing file, throw an exception.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it("filemanager_test_createfile_async_002", 0, async function (done) {
    try {
      let name = "filemanager_test_createfile_async_000.txt";
      let path = 'dataability:///com.ohos.medialibrary.MediaLibraryDataAbility/file/8';
      await filemanager.createFile("local", name, path);
    } catch (error) {
      console.log("filemanager_test_createfile_async_002 has failed for " + error);
      expect(error.message ==  "Operation not permitted").assertTrue();
    }
    done();
  });

  /**
   * @tc.number SUB_DF_FILEMANAGER_CREATEFILE_0030
   * @tc.name filemanager_test_createfile_async_003
   * @tc.desc Test createFile() interfaces to create a file, the path error parameters, throw an exception.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it("filemanager_test_createfile_async_003", 0, async function (done) {
    try {
      let name = "filemanager_test_createfile_async_003";
      await filemanager.createFile("local", name, "123");
    } catch (error) {
      console.log("filemanager_test_createfile_async_003 has failed for " + error);
      expect(error.message == "No such file or directory").assertTrue();
    }
    done();
  });
  
  /**
   * @tc.number SUB_DF_FILEMANAGER_CREATEFILE_0040
   * @tc.name filemanager_test_createfile_async_004
   * @tc.desc Test createFile() interfaces to create a file, without any parameters, throw an exception.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it("filemanager_test_createfile_async_004", 0, async function (done) {
    try {
      await filemanager.createFile();
    } catch (error) {
      console.log("filemanager_test_createfile_async_004 has failed for " + error);
      expect(error.toString().indexOf("Number of arguments unmatched") !=-1).assertTrue();
    }
    done();
  });

  /**
   * @tc.number SUB_DF_FILEMANAGER_CREATEFILE_0050
   * @tc.name filemanager_test_createfile_async_005
   * @tc.desc Test createFile() interfaces to create a file, all parameters to an empty string, throw an exception.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it("filemanager_test_createfile_async_005", 0, async function (done) {
    try {
      await filemanager.createFile("", "", "");
    } catch (error) {
      console.log("filemanager_test_createfile_async_005 has failed for " + error);
      expect(error.message == "No such file or directory").assertTrue();
    }
    done();
  });
  
  /**
   * @tc.number SUB_DF_FILEMANAGER_CREATEFILE_0060
   * @tc.name filemanager_test_createfile_async_006
   * @tc.desc Test createFile() interfaces create a file, parameter path contains escape characters, throw an exception.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it("filemanager_test_createfile_async_006", 0, async function (done) {
    try {
      let name = "filemanager_test_createfile_async_006";
      await filemanager.createFile("local", name, "internal://cache%d%sfile");
    } catch (error) {
      console.log("filemanager_test_createfile_async_006 has failed for " + error);
      expect(error.message == "No such file or directory").assertTrue();
    }
    done();
  });

  /**
   * @tc.number SUB_DF_FILEMANAGER_CREATEFILE_0070
   * @tc.name filemanager_test_createfile_async_007
   * @tc.desc Test createFile() interfaces a file, parameter path contain special characters, throw an exception.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it("filemanager_test_createfile_async_007", 0, async function (done) {
    try {
      await filemanager.createFile("local", "filemanager_test_createfile_async_007", "internal://cache/@#$&^");
    } catch (error) {
      console.log("filemanager_test_createfile_async_007 has failed for " + error);
      expect(error.message == "No such file or directory").assertTrue();
    }
    done();
  });

   /**
   * @tc.number SUB_DF_FILEMANAGER_CREATEFILE_0080
   * @tc.name filemanager_test_createfile_async_008
   * @tc.desc Test createFile() interfaces to create a file, lack of path parameters, throw an exception.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it("filemanager_test_createfile_async_008", 0, async function (done) {
    let name = "filemanager_test_createfile_async_008";
    try {
      await filemanager.createFile("local", name);
      expect(null).assertFail();
    } catch (error) {
      console.log("filemanager_test_createfile_async_008 has failed for " + error);
      expect(error.toString().indexOf("Number of arguments unmatched") !=-1).assertTrue();
    }
    done();
  });

  /**
   * @tc.number SUB_DF_FILEMANAGER_GET_ROOT_0000
   * @tc.name filemanager_test_get_root_async_000
   * @tc.desc Test getRoot() interfaces, the first layer directory album information, promise way back.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it("filemanager_test_get_root_async_000", 0, async function (done) {
    try {
      let fileInfos = await filemanager.getRoot("local");
      expect(Array.isArray(fileInfos)).assertTrue();
      expect(JSON.stringify(fileInfos) == JSON.stringify(ROOTFILE)).assertTrue();
    } catch (error) {
      console.log("filemanager_test_get_root_async_000 has failed for " + error);
      expect(null).assertFail();
    }
    done();
  });

  /**
   * @tc.number SUB_DF_FILEMANAGER_GET_ROOT_0010
   * @tc.name filemanager_test_get_root_async_001
   * @tc.desc Test getRoot() interfaces, the first layer directory album information, callback way back.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it("filemanager_test_get_root_async_001", 0, async function (done) {
    try {
      filemanager.getRoot("local", (error, fileInfos) => {
        expect(Array.isArray(fileInfos)).assertTrue();
        expect(JSON.stringify(fileInfos) == JSON.stringify(ROOTFILE)).assertTrue();
      });
    } catch (error) {
      console.log("filemanager_test_get_root_async_001 has failed for " + error);
      expect(null).assertFail();
    }
    done();
  });

  /**
   * @tc.number SUB_DF_FILEMANAGER_GET_ROOT_0020
   * @tc.name filemanager_test_get_root_async_002
   * @tc.desc Test getRoot() interfaces, without any parameters, throw an exception.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it("filemanager_test_get_root_async_002", 0, async function (done) {
    try {
      await filemanager.getRoot();
    } catch (error) {
      console.log("filemanager_test_get_root_async_002 has failed for " + error);
      expect(error.toString().indexOf("Number of argments unmatched") != -1).assertTrue();
    }
    done();
  });
  
  /**
   * @tc.number SUB_DF_FILEMANAGER_LIST_FILE_0000
   * @tc.name filemanager_test_list_file_async_000
   * @tc.desc Test listFile() interfaces，when the type parameters as the "file", return path of files information accordingly.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it("filemanager_test_list_file_async_000", 0, async function (done) {
    try {
      let path = "dataability:///album";
      let fileInfos = await filemanager.listFile("local", "file", path);
      expect(Array.isArray(fileInfos)).assertTrue();
      expect(JSON.stringify(fileInfos) == JSON.stringify(LISTFILE_FILEINFO)).assertTrue();
    } catch (error) {
      console.log("filemanager_test_list_file_async_000 has failed for " + error);
      expect(null).assertFail();
    }
    done();
  });

  /**
   * @tc.number SUB_DF_FILEMANAGER_LIST_FILE_0010
   * @tc.name filemanager_test_list_file_async_001
   * @tc.desc Test listFile() interfaces， when the type parameters as the "image", return path of files information accordingly.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it("filemanager_test_list_file_async_001", 0, async function (done) {
    try {
      let path = "dataability:///album";
      let fileInfos = await filemanager.listFile("local", "image", path);
      expect(Array.isArray(fileInfos)).assertTrue();
      expect(JSON.stringify(fileInfos) == JSON.stringify(LISTFILE_IMAGEINFO)).assertTrue();
    } catch (error) {
      console.log("filemanager_test_list_file_async_001 has failed for " + error);
      expect(null).assertFail();
    }
    done();
  });
  
  /**
   * @tc.number SUB_DF_FILEMANAGER_LIST_FILE_0020
   * @tc.name filemanager_test_list_file_async_002
   * @tc.desc Test listFile() interfaces, when the type parameters as the "video", return path of files information accordingly.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it("filemanager_test_list_file_async_002", 0, async function (done) {
    try {
      let path = "dataability:///album";
      filemanager.listFile("local", "video", path,(error,fileInfos)=>{
        expect(Array.isArray(fileInfos)).assertTrue();
        expect(JSON.stringify(fileInfos) == JSON.stringify(LISTFILE_VIDEOINFO)).assertTrue();
      });
    } catch (error) {
      console.log("filemanager_test_list_file_async_002 has failed for " + error);
      expect(null).assertFail();
    }
    done();
  });

  /**
   * @tc.number SUB_DF_FILEMANAGER_LIST_FILE_0030
   * @tc.name filemanager_test_list_file_async_003
   * @tc.desc Test listFile() interfaces, when the type parameter to an empty string, throw an exception.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it("filemanager_test_list_file_async_003", 0, async function (done) {
    try {
      let path = "dataability:///album";
     await filemanager.listFile("local", "", path);
    } catch (error) {
      console.log("filemanager_test_list_file_async_003 has failed for " + error);
      expect(error.message == "Not a directory").assertTrue();
    }
    done();
  });

  /**
   * @tc.number SUB_DF_FILEMANAGER_LIST_FILE_0040
   * @tc.name filemanager_test_list_file_async_004
   * @tc.desc Test listFile() interfaces, when the path parameter to an empty string, throw an exception..
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it("filemanager_test_list_file_async_004", 0, async function (done) {
    try {
      await filemanager.listFile("local", "file", "");
    } catch (error) {
      console.log("filemanager_test_list_file_async_004 has failed for " + error);
      expect(error.message == "No such file or directory").assertTrue();
    }
    done();
  });
});

