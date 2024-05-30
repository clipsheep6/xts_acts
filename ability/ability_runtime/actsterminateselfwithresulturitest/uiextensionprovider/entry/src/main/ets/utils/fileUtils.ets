import fileAccess from '@ohos.file.fileAccess'
import common from '@ohos.app.ability.common';

import userFileManager from '@ohos.filemanagement.userFileManager';
import fs from '@ohos.file.fs';
import fileUri from '@ohos.file.fileuri';
import {BusinessError} from '@ohos.base'

let SOURCE_URI = "file://docs/storage/Users/currentUser/Download";

function log(info: string) {
  console.error("DSZ:: ", info)
}

export async function CreateFile(context: common.UIExtensionContext) {
  console.info("DSZ:: Create file start!")
  let docsUri:string | undefined = await CreateDocsFile(context);
  console.info(`DSZ:: docsUri = ${docsUri}`);

  let photoUri:string | undefined = await CreatePhotoFile(context);
  console.info(`DSZ:: photoUri = ${photoUri}`);

  let audioUri: string | undefined = await CreateAudioFile(context);
  console.info(`DSZ:: audioUri = ${audioUri}`);

  let bundleUri: string | undefined = CreateBundleFile(context);
  console.info(`DSZ:: bundleUri = ${bundleUri}`);
}

export async function CreateAudioFile(context: common.UIExtensionContext) {
  console.info('DSZ:: CreateAudioFile');
  let uri: string | undefined = AppStorage.get<string>("audioUri");
  if (uri) {
    console.error("DSZ:: No Need to CreateAudioFile!")
    return uri;
  }
  let mgr = userFileManager.getUserFileMgr(context);
  let testFileName: string = 'AUD_20240101_1200.mp3';
  let fileAsset: userFileManager.FileAsset = await mgr.createAudioAsset(testFileName);
  try {
    let fd: number = await fileAsset.open('rw');
    if (fd != undefined) {
      let str: string = "test audio file";
      fs.write(fd, str).then((writeLen: number) => {
        console.info("write data to file succeed and size is:" + writeLen);
      })
      await fileAsset.close(fd);
      console.info('DSZ:: Create Audio file success!');
    } else {
      console.error('DSZ:: open File fail');
      return uri;
    }
  } catch (err) {
    console.error('DSZ:: open Demo err: ' + err);
    return uri;
  }
  uri = fileAsset.uri;
  AppStorage.setOrCreate<string>("audioUri", uri);
  return uri;
}

export async function CreatePhotoFile(context: common.UIExtensionContext) {
  console.info('DSZ:: CreatePhotoFile');
  let uri: string | undefined = AppStorage.get<string>("photoUri");
  let mgr = userFileManager.getUserFileMgr(context);
  if (mgr == null) {
    console.error('DSZ:: mgr is null')
  }
  let testFileName: string = 'IMG_20240101_1200.jpg';
  let fileAsset: userFileManager.FileAsset = await mgr.createPhotoAsset(testFileName);
  console.info('createPhotoAsset file displayName' + fileAsset.displayName);
  try {
    let fd: number = await fileAsset.open('rw');
    if (fd != undefined) {
      let str: string = "test photos file";
      fs.write(fd, str).then((writeLen: number) => {
        console.info("write data to file succeed and size is:" + writeLen);
      })
      await fileAsset.close(fd);
      console.info('DSZ:: Create Photo file success!');
    } else {
      console.error('DSZ:: open File fail');
      return uri;
    }
  } catch (err) {
    console.error('DSZ:: open Demo err' + err);
    return uri;
  }
  uri = fileAsset.uri;
  AppStorage.setOrCreate<string>("photoUri", uri);
  return uri;
}

export async function CreateDocsFile(context: common.UIExtensionContext) {
  console.info('DSZ:: CreateDocsFile');
  let uri: string | undefined = AppStorage.get<string>("docsUri");
  if (uri) {
    console.error("DSZ:: No Need to CreateDocsFile!")
    return uri;
  }
  let fileAccessHelper: fileAccess.FileAccessHelper;
  let wantInfos = await fileAccess.getFileAccessAbilityInfo();
  let sourceUri: string = SOURCE_URI;
  let displayName: string = "upms_test_file.txt";
  let fileUri: string = SOURCE_URI + '/' + displayName;
  try {
    fileAccessHelper = fileAccess.createFileAccessHelper(context, wantInfos);
    if (!fileAccessHelper) {
      console.info("DSZ:: createFileAccessHelper interface returns an undefined object");
      return uri;
    }
    try {
      fileUri = await fileAccessHelper.createFile(sourceUri, displayName);
      if (!fileUri) {
        console.info("DSZ:: createFile return undefined object");
      } else {
        let file = fs.openSync(fileUri, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        if (file.fd) {
          let str: string = "test docs file";
          fs.write(file.fd, str).then((writeLen: number) => {
            console.info("write data to file succeed and size is:" + writeLen);
          }).catch((err: BusinessError) => {
            console.error("write data to file failed with error message: " + err.message + ", error code: " + err.code);
          }).finally(() => {
            fs.closeSync(file);
          });
          AppStorage.setOrCreate<string>("docsUri", fileUri);
          return uri;
        }
        AppStorage.setOrCreate<string>("docsUri", fileUri);
      }
      console.info('DSZ:: Create Docs file success!');
      return fileUri;
    } catch (err) {
      if (err.code == 13900015) {
        console.error("DSZ:: docs uri has created.");
        AppStorage.setOrCreate<string>("docsUri", fileUri);
        return fileUri;
      }
      console.error("DSZ:: createFile failed, err: " + JSON.stringify(err));
      return uri;
    }
  } catch (err) {
    console.error("DSZ:: createFileAccessHelper failed, err: " + JSON.stringify(err));
  }
  return uri;
}

export function CreateBundleFile(context: common.UIExtensionContext) {
  console.info('DSZ:: CreateBundleFile');
  let uri: string | undefined = AppStorage.get<string>("bundleUri");
  if (uri) {
    console.error("DSZ:: No Need to CreateBundleFile!")
    return uri;
  }
  let filesDir = context.filesDir;
  console.info('DSZ:: context.filesDir:', filesDir)
  let file = fs.openSync(filesDir + '/upms_test_file.txt', fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
  if (file.fd) {
    let str: string = "test bundle file";
    fs.write(file.fd, str).then((writeLen: number) => {
      console.info("write data to file succeed and size is:" + writeLen);
      }).catch((err: BusinessError) => {
        console.error("write data to file failed with error message: " + err.message + ", error code: " + err.code);
      }).finally(() => {
      fs.closeSync(file);
    });
    let uri = fileUri.getUriFromPath(filesDir + '/upms_test_file.txt')
    AppStorage.setOrCreate<string>("bundleUri", uri);
    return uri;
  }
  log("CreateBundleFile failed!");
  return "";
}