/*
 * Copyright (C) 2022-2023 Huawei Device Co., Ltd.
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
import hilog from '@ohos.hilog'
import fs from '@ohos.file.fs';

const DOMAIN_CODE = 0x0001;
const TAG = 'common';
const DOCUMENTS_PATH = '/storage/Users/currentUser/Documents';
const DOWNLOAD_PATH = '/storage/Users/currentUser/Download';
const DESKTOP_PATH = '/storage/Users/currentUser/Desktop';
const TRASH_PATH = '/storage/Users/Trash';
const TESTDIR = '/testdir';
const TESTFILE = '/testdir/test.txt';
const URI_PREFIX = 'file://docs';

function randomString(num) {
  var $chars = 'hello,world';
  var maxPos = $chars.length;
  var pwd = '';
  for (var i = 0; i < num; i++) {
    pwd += $chars.charAt(Math.floor(Math.random() * maxPos));
  }
  return pwd;
}

function sleep(millisecond) {
  var start = new Date().getTime();
  while (true) {
    if (new Date().getTime() - start > millisecond) {
      break;
    }
  }
}

function prepareTestDir(initPath) {
  try {
	var dir = initPath;
	dir += TESTDIR;
	if (!fs.accessSync(dir)) {
	  fs.mkdirSync(dir);
	}
	var dirForTestDir = dir;
	try {
	  fs.openSync(dir + '/11.txt',fs.OpenMode.CREATE | fs.OpenMode.READ_WRITE);
	  fs.openSync(dir + '/12.txt',fs.OpenMode.CREATE | fs.OpenMode.READ_WRITE);
	} catch(e) {
	  console.info('openSync e = ' + e)
	}
	dir += '/testSub1';
	if (!fs.accessSync(dir)) {
	  fs.mkdirSync(dir);
	}
	try {
	  fs.openSync(dir + '/sub11.txt',fs.OpenMode.CREATE | fs.OpenMode.READ_WRITE);
	  fs.openSync(dir + '/sub12.txt',fs.OpenMode.CREATE | fs.OpenMode.READ_WRITE);
	} catch(e) {
	  console.info('openSync e = ' + e)
    }
    dir += '/testSubSub1';
    if (!fs.accessSync(dir)) {
      fs.mkdirSync(dir);
    }
    try {
      fs.openSync(dir + '/subsub11.txt',fs.OpenMode.CREATE | fs.OpenMode.READ_WRITE);
      fs.openSync(dir + '/subsub12.txt',fs.OpenMode.CREATE | fs.OpenMode.READ_WRITE);
    } catch(e) {
      console.info('openSync e = ' + e)
    }

    dirForTestDir += '/testSub2';
    if (!fs.accessSync(dirForTestDir)) {
      fs.mkdirSync(dirForTestDir);
    }
    try {
      fs.openSync(dirForTestDir + '/sub21.txt',fs.OpenMode.CREATE | fs.OpenMode.READ_WRITE);
	  fs.openSync(dirForTestDir + '/sub22.txt',fs.OpenMode.CREATE | fs.OpenMode.READ_WRITE);
    } catch(e) {
	  console.info('openSync e = ' + e)
    }
  } catch(e) {
    console.info('e = ' + e)
  } 
}

function prepareTestFile(initPath) {
  try {
	var dir = initPath;
	dir += TESTDIR;
	if (!fs.accessSync(dir)) {
		fs.mkdirSync(dir);
	}
	try {
		fs.openSync(initPath + TESTFILE, fs.OpenMode.CREATE | fs.OpenMode.READ_WRITE);
	} catch(e) {
		console.info('openSync e = ' + e)
	}
  } catch(e) {
    console.info('e = ' + e)
  }
}

function removeTestDir(initPath) {
  var testDir = initPath + TESTDIR;
  try {
    if (fs.accessSync(testDir)) {
      fs.rmdirSync(testDir);
    }
  } catch(e) {
	console.info('rmdirSync e = ' + e)
  }
}

function removeTrashDir() {
  try {
    var files = fs.listFileSync(TRASH_PATH);
    for (var i = 0; i <files.length; i++) {
      var file = files[i];
        file = TRASH_PATH + '/' + file;
        let stat = fs.statSync(file);
        if (stat.isDirectory()) {
          fs.rmdirSync(file);
        } else {
          fs.unlinkSync(file);
        }
    }
  } catch(e) {
    console.info('rmdirSync e = ' + e)
  }
}

function recurListFile(path, pathList) {
  var options = {
  'recursion': false,
  };
  var fileNameArr = fs.listFileSync(path, options);
  for (var i = 0; i < fileNameArr.length; i++) {
    // 待删除文件
    var fileName = fileNameArr[i];
    // 解析文件的子路径
    var subPath = path + '/' + fileName;
    pathList.push(subPath);
    var stat = fs.statSync(subPath);
    if (stat.isDirectory()) {
      recurListFile(subPath, pathList);
    }
  }
}

function listFile(uri, filter) {
  try {
    let filesArr = [];
    let isDone = false;
    let fileInfo = globalThis.filesArrData.find(item => item.uri == uri);
    let fileIterator = null;
    if (filter) {
      fileIterator = fileInfo.listFile(filter);
    } else {
      fileIterator = fileInfo.listFile();
    }
    while (!isDone) {
      try {
        let result = fileIterator.next();
        if (result) {
          isDone = result.done;
          if (!isDone) {
            filesArr.push({
              "uri": result.value.uri,
              "name": result.value.fileName,
            })
            globalThis.filesArrData.push(result.value);
          }
        } else {
          isDone = true;
        }
      } catch (e) {
        isDone = true;
      }
    }
    return filesArr;
  } catch (e) {
    hilog.error(DOMAIN_CODE, TAG, 'listFile' + e.message);
  }
}

function scanFile(uri, filter) {
  try {
    let isDone = false;
    let count = 0;
    let fileInfo = globalThis.filesArrData.find(item => item.uri == uri);
    let fileIterator = null;
    if (filter) {
      fileIterator = fileInfo.scanFile(filter);
    } else {
      fileIterator = fileInfo.scanFile();
    }
    while (!isDone) {
      try {
        let result = fileIterator.next();
        if (result) {
          isDone = result.done;
          if (!isDone) {
            count++;
          }
        } else {
          isDone = true;
        }
      } catch (e) {
        isDone = true;
      }
    }
    return count;
  } catch (e) {
    hilog.error(DOMAIN_CODE, TAG, 'scanFile' + e.message);
  }
}


async function getDocumentsUri(helper) {
  try{
    let rootIterator = await helper.getRoots();
    let dir;
    let isDone = false;
    while (!isDone) {
      let rootData = rootIterator.next();
      if (rootData) {
        isDone = rootData.done;
        if (!isDone) {
          let rootUri = rootData.value.uri;
          if (rootUri.indexOf('Users') != -1) {
            globalThis.filesArrData = [];
            globalThis.filesArrData.push(rootData.value);
            let rootFiles = listFile(rootUri, false);
            dir = rootFiles.find(item => item.name == "Documents");
            break;
          }
        }
      }
    }
    if (dir != null) {
      return dir.uri;
    }else{
      return "";
    }
  } catch(err) {
    hilog.error(DOMAIN_CODE, TAG, 'getUri' + err.message);
  }
}


async function getDownloadUri(helper) {
  try{
    let rootIterator = await helper.getRoots();
    let dir;
    let isDone = false;
    while (!isDone) {
      let rootData = rootIterator.next();
      if (rootData) {
        isDone = rootData.done;
        if (!isDone) {
          let rootUri = rootData.value.uri;
          if (rootUri.indexOf('Users') != -1) {
            globalThis.filesArrData = [];
            globalThis.filesArrData.push(rootData.value);
            let rootFiles = listFile(rootUri, false);
            dir = rootFiles.find(item => item.name == "Download");
            break;
          }
        }
      }
    }
    if (dir != null) {
      return dir.uri;
    }else{
      return "";
    }
  } catch(err) {
    hilog.error(DOMAIN_CODE, TAG, 'getUri' + err.message);
  }
}

async function getDesktopUri(helper) {
  try{
    let rootIterator = await helper.getRoots();
    let dir;
    let isDone = false;
    while (!isDone) {
      let rootData = rootIterator.next();
      if (rootData) {
        isDone = rootData.done;
        if (!isDone) {
          let rootUri = rootData.value.uri;
          if (rootUri.indexOf('Users') != -1) {
            globalThis.filesArrData = [];
            globalThis.filesArrData.push(rootData.value);
            let rootFiles = listFile(rootUri, false);
            dir = rootFiles.find(item => item.name == "Desktop");
            break;
          }
        }
      }
    }
    if (dir != null) {
      return dir.uri;
    }else{
      return "";
    }
  } catch(err) {
    hilog.error(DOMAIN_CODE, TAG, 'getUri' + err.message);
  }
}

export { randomString, sleep, listFile, scanFile, prepareTestDir, prepareTestFile, removeTestDir, removeTrashDir, recurListFile,
  getDocumentsUri, getDownloadUri, getDesktopUri, DOCUMENTS_PATH, DOWNLOAD_PATH, DESKTOP_PATH, TESTDIR, TESTFILE, TRASH_PATH, URI_PREFIX }
