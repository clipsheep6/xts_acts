/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
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

import fileUri from "@ohos.file.fileuri";
import { describe, it, expect } from '@ohos/hypium';
export default function abilityTest() {
describe('file_uri_test', function () {

    /**
     * @tc.number     : SUB_STORAGE_FileUri_GetPath_0100
     * @tc.name       : FileUri_GetPath_001
     * @tc.desc       : Function of API, get realPath with docs uri. Test normal function.
     * @tc.size       : Medium
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('fileuri_test_getpath_001', 0, function () {
      let fileuristr = "file://docs/storage/users/cuurrenUser/Docments/test.txt";
      let uriOBJ = new fileUri.FileUri(fileuristr);
      let fpath = uriOBJ.path
      if(fpath == '/data/storage/el2/share/r/docs/storage/users/cuurrenUser/Docments/test.txt'){
        expect(true).assertTrue();
      }else if (fpath == '/storage/users/cuurrenUser/Docments/test.txt'){
        expect(true).assertTrue();
      }else{
        expect(false).assertTrue();
      };
    });

    /**
     * @tc.number     : SUB_STORAGE_FileUri_GetPath_0200
     * @tc.name       : FileUri_GetPath_002
     * @tc.desc       : Function of API, get realPath with demo uri. Test normal function.
     * @tc.size       : Medium
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('fileuri_test_getpath_002', 0, function () {
      try{
        let fileuristr = "file://demoA/data/stroage/el2/base/files/test.txt";
        let uriOBJ = new fileUri.FileUri(fileuristr);
        let fpath = uriOBJ.path
        expect(fpath === '/data/storage/el2/share/r/demoA/data/stroage/el2/base/files/test.txt').assertTrue();
      }catch(e){
        console.log('fileuri_test_getpath_002 has failed for:' + e.message);
      }
    });

    /**
     * @tc.number     : SUB_STORAGE_FileUri_GetPath_0300
     * @tc.name       : FileUri_GetPath_003
     * @tc.desc       : Function of API, get realPath with media uri. Test normal function.
     * @tc.size       : Medium
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('fileuri_test_getpath_003', 0, function () {
      try{
        let fileuristr = "file://media/storage/el2/base/files/test.txt";
        let uriOBJ = new fileUri.FileUri(fileuristr);
        let fpath = uriOBJ.path
        expect(fpath === '/storage/el2/base/files').assertTrue();
      }catch(e){
        console.log('fileuri_test_getpath_003 has failed for:' + e.message);
      }
    });

    /**
     * @tc.number     : SUB_STORAGE_FileUri_GetPath_0400
     * @tc.name       : FileUri_GetPath_004
     * @tc.desc       : Function of API, get realPath with remote devices demo uri.
     * @tc.size       : Medium
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('fileuri_test_getpath_004', 0, function () {
      try{
        let fileuristr = "file://com.example.demo/data/stroage/el2/distributedfiles/.remote_share/data/stroage/el2/base/files/test.txt?networkid=***";
        let uriOBJ = new fileUri.FileUri(fileuristr);
        let fpath = uriOBJ.path
        expect(fpath === '/data/storage/el2/share/r/com.example.demo/data/stroage/el2/distributedfiles/.remote_share/data/stroage/el2/base/files/test.txt').assertTrue();
      }catch(e){
        console.log('fileuri_test_getpath_004 has failed for:' + e.message);
      }
    });

    /**
     * @tc.number     : SUB_STORAGE_FileUri_GetPath_0500
     * @tc.name       : FileUri_GetPath_005
     * @tc.desc       : Function of API, get realPath with remote devices docs uri.
     * @tc.size       : Medium
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('fileuri_test_getpath_005', 0, function () {
      try{
        let fileuristr = "file://docs/stroage/users/cuurrenUser/Docments/test.txt/test.txt?networkid=***";
        let uriOBJ = new fileUri.FileUri(fileuristr);
        let fpath = uriOBJ.path
        expect(fpath === '/data/storage/el2/share/r/docs/stroage/users/cuurrenUser/Docments/test.txt/test.txt').assertTrue();
      }catch(e){
        console.log('fileuri_test_getpath_005 has failed for:' + e.message);
      }
    });

    /**
     * @tc.number     : SUB_STORAGE_FileUri_GetPath_0600
     * @tc.name       : FileUri_GetPath_006
     * @tc.desc       : Function of API, get realPath with docs dir uri.
     * @tc.size       : Medium
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('fileuri_test_getpath_006', 0, function () {
      let fileuristr = "file://docs/storage/users/cuurrenUser/Docments";
      let uriOBJ = new fileUri.FileUri(fileuristr);
      let fpath = uriOBJ.path
      if(fpath === '/storage/users/cuurrenUser/Docments'){
        expect(true).assertTrue();
      }else if (fpath === '/data/storage/el2/share/r/docs/storage/users/cuurrenUser/Docments'){
        expect(true).assertTrue();
      }else {
          expect(false).assertTrue()
        };
      });

    /**
     * @tc.number     : SUB_STORAGE_FileUri_GetPath_0700
     * @tc.name       : FileUri_GetPath_007
     * @tc.desc       : Function of API, get realPath with demo dir uri.
     * @tc.size       : Medium
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('fileuri_test_getpath_007', 0, function () {
      try{
        let fileuristr = "file://demoA/data/stroage/el2/base/files";
        let uriOBJ = new fileUri.FileUri(fileuristr);
        let fpath = uriOBJ.path
        expect(fpath === '/data/storage/el2/share/r/demoA/data/stroage/el2/base/files').assertTrue();
      }catch(e){
        console.log('fileuri_test_getpath_007 has failed for:' + e.message);
      }
    });

    /**
     * @tc.number     : SUB_STORAGE_FileUri_GetPath_0800
     * @tc.name       : FileUri_GetPath_008
     * @tc.desc       : Function of API, get realPath with media dir uri.
     * @tc.size       : Medium
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('fileuri_test_getpath_008', 0, function () {
      try{
        let fileuristr = "file://media/storage/el2/base/files";
        let uriOBJ = new fileUri.FileUri(fileuristr);
        let fpath = uriOBJ.path
        expect(fpath === '/storage/el2/base/files').assertTrue();
      }catch(e){
        console.log('fileuri_test_getpath_008 has failed for:' + e.message);
      }
    });

    /**
     * @tc.number     : SUB_STORAGE_FileUri_GetPath_0900
     * @tc.name       : FileUri_GetPath_009
     * @tc.desc       : Function of API, get realPath with empty networkId.
     * @tc.size       : Medium
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('fileuri_test_getpath_009', 0, function () {
      try{
        let fileuristr = "file://com.example.demo/data/stroage/el2/distributedfiles/.remote_share/data/stroage/el2/base/files/test.txt?networkid=";
        let uriOBJ = new fileUri.FileUri(fileuristr);
        let fpath = uriOBJ.path
        expect(fpath === '/data/storage/el2/share/r/com.example.demo/data/stroage/el2/distributedfiles/.remote_share/data/stroage/el2/base/files/test.txt').assertTrue();
      }catch(e){
        console.log('fileuri_test_getpath_009 has failed for:' + e.message);
      }
    });

    /**
     * @tc.number     : SUB_STORAGE_FileUri_GetPath_1000
     * @tc.name       : FileUri_GetPath_010
     * @tc.desc       : Function of API, get realPath with 100special characters uri.
     * @tc.size       : Medium
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('fileuri_test_getpath_010', 0, function () {
      try{
        let diruri = 'file://com.example.demo/data/stroage/el2/distributedfiles/.remote_share/data/stroage/el2/base/files/test#?$@/';
        for(let i = 1;i <= 100;i++){
          let diruri100 = "test" + i + "/";
          diruri = diruri + diruri100;
        }
        let fileuri100 = diruri + ' test.txt?networkid=**TEST!@#';
        let uriOBJ = new fileUri.FileUri(fileuri100);
        let fpath = uriOBJ.path
        expect(fpath === '/data/storage/el2/share/r/com.example.demo/data/stroage/el2/distributedfiles/.remote_share/data/stroage/el2/base/files/test').assertTrue();
      }catch(e){
        console.log('fileuri_test_getpath_010 has failed for:' + e.message);
      }
    });

    /**
     * @tc.number     : SUB_STORAGE_FileUri_GetPath_1100
     * @tc.name       : FileUri_GetPath_011
     * @tc.desc       : Function of API, get realPath with 100special characters uri.
     * @tc.size       : Medium
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('fileuri_test_getpath_011', 0, function () {
      try{
        let path = '/data/storage/el2/share/r/com.example.demo/data/stroage/el2/distributedfiles/.remote_share/data/stroage/el2/base/files/test.txt/';
        for(let i = 1;i <= 100;i++){
          let diruri100 = "test" + i + "/";
          path = path + diruri100;
        }
        let uriOBJ = new fileUri.FileUri(path);
        let fpath = uriOBJ.path
        expect(fpath === '/data/storage/el2/share/r/com.example.demo/data/stroage/el2/distributedfiles/.remote_share/data/stroage/el2/base/files/test.txt/test1/test2/test3/test4/test5/test6/test7/test8/test9/test10/test11/test12/test13/test14/test15/test16/test17/test18/test19/test20/test21/test22/test23/test24/test25/test26/test27/test28/test29/test30/test31/test32/test33/test34/test35/test36/test37/test38/test39/test40/test41/test42/test43/test44/test45/test46/test47/test48/test49/test50/test51/test52/test53/test54/test55/test56/test57/test58/test59/test60/test61/test62/test63/test64/test65/test66/test67/test68/test69/test70/test71/test72/test73/test74/test75/test76/test77/test78/test79/test80/test81/test82/test83/test84/test85/test86/test87/test88/test89/test90/test91/test92/test93/test94/test95/test96/test97/test98/test99/test100/').assertTrue();
      }catch(e){
        console.log('fileuri_test_getpath_009 has failed for:' + e.message+ e.co0de);
      }
    });

    /**
     * @tc.number     : SUB_STORAGE_FileUri_isRemoteUri_0100
     * @tc.name       : FileUri_isRemoteUri_001
     * @tc.desc       : Function of API, Test isRemoteUri normal function.
     * @tc.size       : Medium
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('fileuri_test_isRemoteUri_001', 0, function () {
      try{
        let fileuristr = "file://com.example.demo/data/stroage/el2/distributedfiles/.remote_share/data/stroage/el2/base/files/test.txt?networkid=***";
        let uriOBJ = new fileUri.FileUri(fileuristr);
        let TorF = uriOBJ.isRemoteUri();
        expect(TorF == true).assertTrue();
      }catch(e){
        console.log('fileuri_test_isRemoteUri_001 has failed for:' + e.message);
      }
    });

    /**
     * @tc.number     : SUB_STORAGE_FileUri_isRemoteUri_0200
     * @tc.name       : FileUri_isRemoteUri_002
     * @tc.desc       : Function of API, Test isRemoteUri normal function.
     * @tc.size       : Medium
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('fileuri_test_isRemoteUri_002', 0, function () {
      console.log("fileuri_test_isRemoteUri_002 start")
      try{
        let fileuristr = "file://com.example.demo/data/stroage/el2/distributedfiles/.remote_share/data/stroage/el2/base/files/test.txt?networkid=?#.123";
        let uriOBJ = new fileUri.FileUri(fileuristr);
        let TorF = uriOBJ.isRemoteUri();
        expect(TorF == true).assertTrue();
      }catch(e){
        console.log('fileuri_test_isRemoteUri_002 has failed for:' + e.message);
      };
    });

    /**
     * @tc.number     : SUB_STORAGE_FileUri_isRemoteUri_0300
     * @tc.name       : FileUri_isRemoteUri_003
     * @tc.desc       : Function of API, Test isRemoteUri normal function.
     * @tc.size       : Medium
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('fileuri_test_isRemoteUri_003', 0, function () {
      console.log("fileuri_test_isRemoteUri_003 start")
      try{
        let fileuristr = "file://com.example.demo/data/stroage/el2/distributedfiles/.remote_share/data/stroage/el2/base/files/test#?$@.txt/test.txt?networkid=***";
        let uriOBJ = new fileUri.FileUri(fileuristr);
        let TorF = uriOBJ.isRemoteUri();
        expect(TorF == true).assertTrue();
      }catch(e){
        console.log('fileuri_test_isRemoteUri_003 has failed for:' + e.message);
      }
    });

    /**
     * @tc.number     : SUB_STORAGE_FileUri_isRemoteUri_0400
     * @tc.name       : FileUri_isRemoteUri_004
     * @tc.desc       : Function of API, Test isRemoteUri with 100 Special character dir.
     * @tc.size       : Medium
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('fileuri_test_isRemoteUri_004', 0, function () {
      console.log("fileuri_test_isRemoteUri_004 start")
      try{
        let diruri = 'file://com.example.demo/data/stroage/el2/distributedfiles/.remote_share/data/stroage/el2/base/files/test#?$@.txt/';
        for(let i = 1;i <= 100;i++){
          let diruri100 = "test" + i + "/";
          diruri = diruri + diruri100;
        }
        let fileuri100 = diruri + 'test.txt?networkid=***';
        let uriOBJ = new fileUri.FileUri(fileuri100);
        let TorF = uriOBJ.isRemoteUri();
        expect(TorF == true).assertTrue();
      }catch(e){
        console.log('fileuri_test_isRemoteUri_004 has failed for:' + e.message);
      }
    });

    /**
     * @tc.number     : SUB_STORAGE_FileUri_isRemoteUri_0500
     * @tc.name       : FileUri_isRemoteUri_005
     * @tc.desc       : Function of API, Test isRemoteUri with empty networkid.
     * @tc.size       : Medium
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('fileuri_test_isRemoteUri_005', 0, function () {
      try{
        let fileuristr = "file://com.example.demo/data/stroage/el2/distributedfiles/.remote_share/data/stroage/el2/base/files/test#?$@.txt/test.txt?networkid=";
        let uriOBJ = new fileUri.FileUri(fileuristr);
        let TorF = uriOBJ.isRemoteUri();
        expect(TorF == false).assertTrue();
      }catch(e){
        console.log('fileuri_test_isRemoteUri_005 has failed for:' + e.message);
      }
    });

    /**
     * @tc.number     : SUB_STORAGE_FileUri_isRemoteUri_0600
     * @tc.name       : FileUri_isRemoteUri_006
     * @tc.desc       : Function of API, Test isRemoteUri with invalid invalid.
     * @tc.size       : Medium
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('fileuri_test_isRemoteUri_006', 0, function () {
      try{
        let fileuristr = "file://com.example.demo/data/stroage/el2/distributedfiles/.remote_share/data/stroage/el2/base/files/test#?$@.txt/test.txt?networkid=****";
        let uriOBJ = new fileUri.FileUri(fileuristr);
        let TorF = uriOBJ.isRemoteUri(uriOBJ);
        expect(TorF == false).assertTrue();
      }catch(e){
        console.log('fileuri_test_isRemoteUri_005 has failed for:' + e.message + ', code: ' + e.code);
        expect(e.message == 'The input parameter is invalid' && e.code == 401).assertTrue();
      }
    });

    /**
     * @tc.number     : SUB_STORAGE_FileUri_isRemoteUri_0700
     * @tc.name       : FileUri_isRemoteUri_007
     * @tc.desc       : Function of API, Test isRemoteUri with file path.
     * @tc.size       : Medium
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('fileuri_test_isRemoteUri_007', 0, function () {
      console.log("fileuri_test_isRemoteUri_007 start")
      try{
        let fileuristr = "/data/stroage/el2/distributedfiles/.remote_share/data/stroage/el2/base/files/test#?$@.txt";
        let uriOBJ = new fileUri.FileUri(fileuristr);
        let TorF = uriOBJ.isRemoteUri();
        expect(TorF == false).assertTrue();
      }catch(e){
        console.log('fileuri_test_isRemoteUri_007 has failed for:' + e.message + ', code: ' + e.code);
      }
    });

    /**
     * @tc.number     : SUB_STORAGE_FileUri_isRemoteUri_0800
     * @tc.name       : FileUri_isRemoteUri_008
     * @tc.desc       : Function of API, Test isRemoteUri with native uri.
     * @tc.size       : Medium
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('fileuri_test_isRemoteUri_008', 0, function () {
      try{
        let fileuristr = "file://com.example.demo/data/stroage/el2/distributedfiles/.remote_share/data/stroage/el2/base/files";
        let uriOBJ = new fileUri.FileUri(fileuristr);
        let TorF = uriOBJ.isRemoteUri();
        console.log('return isRemoteUri:' + TorF);
        expect(TorF == false).assertTrue();
      }catch(e){
        console.log('fileuri_test_isRemoteUri_008 has failed for:' + e.message);
      }
    });
  })
};

