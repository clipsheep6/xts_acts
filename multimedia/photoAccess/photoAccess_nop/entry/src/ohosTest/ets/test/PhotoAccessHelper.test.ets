import hilog from '@ohos.hilog';
import photoAccessHelper from '@ohos.file.photoAccessHelper';
import dataSharePredicates from '@ohos.data.dataSharePredicates';
import image from '@ohos.multimedia.image'
import { BusinessError } from '@ohos.base'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import { GlobalContext } from './GlobalContext'

// no permission.
const NOT_PERMISSION = 201;
// Permission denied
const PERMISSION_DENIED = 13900012;
//parameter error
const PARAMETER_ERROR = 401
// System inner fail
const SYSTEM_INNER_ERROR = 14000011
//13900002	No such file
const NO_SUCH_FILE = 13900002

class MediaHandler implements photoAccessHelper.MediaAssetDataHandler<image.ImageSource> {
  onDataPrepared(data: image.ImageSource) {
    console.info('on image data prepared');
  }
}

export default function photoAccessHelperTest() {
  describe('photoAccessHelperTest', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(() => {
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
    })
    beforeEach(() => {
      // Presets an action, which is performed before each unit test case starts.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
    })
    afterEach(() => {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
    })
    afterAll(() => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })

    /*
     * @tc.number:SUB_Multimedia_Media_Library_PhotoAccessHelper_RequestImage_Promise_Nop_100
     * @tc.name: testMultimediaMediaLibraryPhotoAccessHelperRequestImagePromiseNop100
     * @tc.desc:Using the on method without permission
     * @tc.level:Level 3
     * @tc.type:Function
     * @tc.size:MediumTest
     */
    it('testMultimediaMediaLibraryPhotoAccessHelperRequestImagePromiseNop100', 0, async (done: Function) => {
      hilog.info(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperRequestImagePromiseNop100 begin');
      try {
        let context = GlobalContext.getContext().getObject('context');
        let phAccessHelper = photoAccessHelper.getPhotoAccessHelper(context as Context);
        let predicates: dataSharePredicates.DataSharePredicates = new dataSharePredicates.DataSharePredicates();
        let fetchOptions: photoAccessHelper.FetchOptions = {
          fetchColumns: [],
          predicates: predicates
        };
        let requestOptions: photoAccessHelper.RequestOptions = {
          deliveryMode: photoAccessHelper.DeliveryMode.HIGH_QUALITY_MODE,
        }
        const handler = new MediaHandler();
        phAccessHelper.getAssets(fetchOptions, (err: BusinessError, fetchResult) => {
          if (err || fetchResult == undefined) {
            hilog.error(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperRequestImagePromiseNop100 fail ' + JSON.stringify(err));
            expect(Number(err.code)).assertEqual(PERMISSION_DENIED);
            done();
          } else {
            fetchResult.getFirstObject((err: BusinessError, photoAsset: photoAccessHelper.PhotoAsset) => {
              if (err || photoAsset == undefined) {
                hilog.error(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperRequestImagePromiseNop100 fail' + JSON.stringify(err));
                expect(Number(err.code)).assertEqual(PERMISSION_DENIED);
                done();
              } else {
                hilog.info(0x0000, 'photoAccessHelperTag', '%{public}s', 'getAssets success');
                photoAccessHelper.MediaAssetManager.requestImage(context as Context, photoAsset, requestOptions, handler)
                  .then(() => {
                    hilog.info(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperRequestImagePromiseNop100 success');
                    expect().assertFail();
                    done();
                  })
                  .catch((err: BusinessError) => {
                    hilog.error(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperRequestImagePromiseNop100 fail' + JSON.stringify(err));
                    expect(Number(err.code)).assertEqual(PERMISSION_DENIED);
                    done();
                  });
              }
            })
          }
        });
      } catch (error) {
        hilog.error(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperRequestImagePromiseNop100 failed ' + error);
        expect(Number(error.code)).assertEqual(PERMISSION_DENIED);
        done();
      }
    });

    /*
     * @tc.number:SUB_Multimedia_Media_Library_PhotoAccessHelper_RequestImageData_Promise_Nop_200
     * @tc.name: testMultimediaMediaLibraryPhotoAccessHelperRequestImageDataPromiseNop200
     * @tc.desc:Using the on method without permission
     * @tc.level:Level 3
     * @tc.type:Function
     * @tc.size:MediumTest
     */
    it('testMultimediaMediaLibraryPhotoAccessHelperRequestImageDataPromiseNop200', 0, async (done: Function) => {
      hilog.info(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperRequestImageDataPromiseNop200 begin');
      try {
        let context = GlobalContext.getContext().getObject('context');
        let phAccessHelper = photoAccessHelper.getPhotoAccessHelper(context as Context);
        let predicates: dataSharePredicates.DataSharePredicates = new dataSharePredicates.DataSharePredicates();

        class MediaDataHandler implements photoAccessHelper.MediaAssetDataHandler<ArrayBuffer> {
          onDataPrepared(data: ArrayBuffer) {
            console.info('on image data prepared');
          }
        }

        let fetchOptions: photoAccessHelper.FetchOptions = {
          fetchColumns: [],
          predicates: predicates
        };
        let requestOptions: photoAccessHelper.RequestOptions = {
          deliveryMode: photoAccessHelper.DeliveryMode.HIGH_QUALITY_MODE,
        }

        phAccessHelper.getAssets(fetchOptions, (err: BusinessError, fetchResult) => {
          if (err || fetchResult == undefined) {
            hilog.error(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperRequestImageDataPromiseNop200 fail ' + JSON.stringify(err));
            expect(Number(err.code)).assertEqual(PERMISSION_DENIED);
            done();
          } else {
            hilog.info(0x0000, 'photoAccessHelperTag', '%{public}s', 'getAssets success');
            fetchResult.getFirstObject((err: BusinessError, photoAsset: photoAccessHelper.PhotoAsset) => {
              if (err || photoAsset == undefined) {
                hilog.error(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperRequestImageDataPromiseNop200 fail ' + JSON.stringify(err));
                expect(Number(err.code)).assertEqual(PERMISSION_DENIED);
                done();
              } else {
                hilog.info(0x0000, 'photoAccessHelperTag', '%{public}s', 'getFirstObject success');
                const handler = new MediaDataHandler();
                photoAccessHelper.MediaAssetManager.requestImageData(context as Context, photoAsset, requestOptions, handler)
                  .then(() => {
                    hilog.info(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperRequestImageDataPromiseNop200 success');
                    expect().assertFail();
                    done();
                  })
                  .catch((err: BusinessError) => {
                    hilog.error(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperRequestImageDataPromiseNop200 fail ' + JSON.stringify(err));
                    expect(Number(err.code)).assertEqual(NOT_PERMISSION);
                    done();
                  });
              }
            })
          }
        });
      } catch (error) {
        hilog.error(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperRequestImageDataPromiseNop200 failed ' + error);
        expect(Number(error.code)).assertEqual(NOT_PERMISSION);
        done();
      }
    });

    /*
     * @tc.number:SUB_Multimedia_Media_Library_PhotoAccessHelper_GetAssets_FetchOptions_Callback_Nop_300
     * @tc.name: testMultimediaMediaLibraryPhotoAccessHelperGetAssetsFetchOptionsCallbackNop300
     * @tc.desc:Using the on method without permission
     * @tc.level:Level 3
     * @tc.type:Function
     * @tc.size:MediumTest
     */
    it('testMultimediaMediaLibraryPhotoAccessHelperGetAssetsFetchOptionsCallbackNop300', 0, (done: Function) => {
      hilog.info(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperGetAssetsFetchOptionsCallbackNop300 begin');
      try {
        let context = GlobalContext.getContext().getObject('context');
        let phAccessHelper = photoAccessHelper.getPhotoAccessHelper(context as Context);
        let predicates: dataSharePredicates.DataSharePredicates = new dataSharePredicates.DataSharePredicates();
        let fetchOptions: photoAccessHelper.FetchOptions = {
          fetchColumns: [],
          predicates: predicates
        };
        phAccessHelper.getAssets(fetchOptions, (err: BusinessError, fetchResult) => {
          if (err || fetchResult == undefined) {
            hilog.error(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperGetAssetsFetchOptionsCallbackNop300 fail ' + JSON.stringify(err));
            expect(Number(err.code)).assertEqual(PERMISSION_DENIED);
            done();
          } else {
            hilog.info(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperGetAssetsFetchOptionsCallbackNop300 success');
            expect().assertFail();
            done();
          }
        });
      } catch (error) {
        hilog.error(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperGetAssetsFetchOptionsCallbackNop300 failed ' + error);
        expect(Number(error.code)).assertEqual(PERMISSION_DENIED);
        done();
      }
    });

    /*
     * @tc.number:SUB_Multimedia_Media_Library_PhotoAccessHelper_GetAssets_FetchOptions_Promise_Nop_400
     * @tc.name: testMultimediaMediaLibraryPhotoAccessHelperGetAssetsFetchOptionsPromiseNop400
     * @tc.desc:Using the on method without permission
     * @tc.level:Level 3
     * @tc.type:Function
     * @tc.size:MediumTest
     */
    it('testMultimediaMediaLibraryPhotoAccessHelperGetAssetsFetchOptionsPromiseNop400', 0, (done: Function) => {
      hilog.info(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperGetAssetsFetchOptionsPromiseNop400 begin');
      try {
        let context = GlobalContext.getContext().getObject('context');
        let phAccessHelper = photoAccessHelper.getPhotoAccessHelper(context as Context);
        let predicates: dataSharePredicates.DataSharePredicates = new dataSharePredicates.DataSharePredicates();
        let fetchOptions: photoAccessHelper.FetchOptions = {
          fetchColumns: [],
          predicates: predicates
        };
        phAccessHelper.getAssets(fetchOptions).then(() => {
          hilog.info(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperGetAssetsFetchOptionsPromiseNop400 success');
          expect().assertFail();
          done();
        }).catch((err: BusinessError) => {
          hilog.error(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperGetAssetsFetchOptionsPromiseNop400 fail ' + JSON.stringify(err));
          expect(Number(err.code)).assertEqual(PERMISSION_DENIED);
          done();
        })

      } catch (error) {
        hilog.error(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperGetAssetsFetchOptionsPromiseNop400 failed ' + error);
        expect(Number(error.code)).assertEqual(PERMISSION_DENIED);
        done();
      }
    });

    /*
     * @tc.number:SUB_Multimedia_Media_Library_PhotoAccessHelper_GetAlbums_Callback_Nop_500
     * @tc.name: testMultimediaMediaLibraryPhotoAccessHelperGetAlbumsCallbackNop500
     * @tc.desc:Using the on method without permission
     * @tc.level:Level 3
     * @tc.type:Function
     * @tc.size:MediumTest
     */
    it('testMultimediaMediaLibraryPhotoAccessHelperGetAlbumsCallbackNop500', 0, (done: Function) => {
      hilog.info(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperGetAlbumsCallbackNop500 begin');
      try {
        let context = GlobalContext.getContext().getObject('context');
        let phAccessHelper = photoAccessHelper.getPhotoAccessHelper(context as Context);
        let predicates: dataSharePredicates.DataSharePredicates = new dataSharePredicates.DataSharePredicates();
        predicates.equalTo('album_name', 'newAlbumName');
        let fetchOptions: photoAccessHelper.FetchOptions = {
          fetchColumns: [],
          predicates: predicates
        };
        phAccessHelper.getAlbums(photoAccessHelper.AlbumType.USER, photoAccessHelper.AlbumSubtype.USER_GENERIC, fetchOptions, (err, fetchResult) => {
          if (err) {
            hilog.error(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperGetAlbumsCallbackNop500 fail ' + JSON.stringify(err));
            expect(Number(err.code)).assertEqual(SYSTEM_INNER_ERROR);
            done();
          } else {
            hilog.info(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperGetAlbumsCallbackNop500 success');
            expect().assertFail();
            done();
          }
        });

      } catch (error) {
        hilog.error(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperGetAlbumsCallbackNop500 failed ' + error);
        expect(Number(error.code)).assertEqual(PERMISSION_DENIED);
        done();
      }
    });


    /*
     * @tc.number:SUB_Multimedia_Media_Library_PhotoAccessHelper_DeleteAssets_Promise_Nop_600
     * @tc.name: testMultimediaMediaLibraryPhotoAccessHelperDeleteAssetsPromiseNop600
     * @tc.desc:Using the on method without permission
     * @tc.level:Level 3
     * @tc.type:Function
     * @tc.size:MediumTest
     */
    it('testMultimediaMediaLibraryPhotoAccessHelperDeleteAssetsPromiseNop600', 0, async (done: Function) => {
      hilog.info(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperDeleteAssetsPromiseNop600 begin');
      try {
        let context = GlobalContext.getContext().getObject('context');
        let phAccessHelper = photoAccessHelper.getPhotoAccessHelper(context as Context);
        let predicates: dataSharePredicates.DataSharePredicates = new dataSharePredicates.DataSharePredicates();

        let fetchOptions: photoAccessHelper.FetchOptions = {
          fetchColumns: [],
          predicates: predicates
        };

        await phAccessHelper.getAssets(fetchOptions)
          .then((fetchResult: photoAccessHelper.FetchResult<photoAccessHelper.PhotoAsset>) => {
            hilog.info(0x0000, 'photoAccessHelperTag', '%{public}s', 'getAssets success');
            fetchResult.getAllObjects().then((photoAssetList: Array<photoAccessHelper.PhotoAsset>) => {
              hilog.info(0x0000, 'photoAccessHelperTag', '%{public}s', 'getAllObjects success');
              let uriList: Array<string> = new Array<string>();
              photoAccessHelper.MediaAssetChangeRequest.deleteAssets(context as Context, uriList).then(() => {
                hilog.info(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperDeleteAssetsPromiseNop600 success');
                expect().assertFail();
                done();
              }).catch((err: BusinessError) => {
                hilog.error(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperDeleteAssetsPromiseNop600 fail ' + JSON.stringify(err));
                expect(Number(err.code)).assertEqual(PERMISSION_DENIED);
                done();
              })
            }).catch((err: BusinessError) => {
              hilog.error(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperDeleteAssetsPromiseNop600 fail ' + JSON.stringify(err));
              expect(Number(err.code)).assertEqual(PERMISSION_DENIED);
              done();
            })
          })
          .catch((err: BusinessError) => {
            hilog.error(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperDeleteAssetsPromiseNop600 fail ' + JSON.stringify(err));
            expect(Number(err.code)).assertEqual(PERMISSION_DENIED);
            done();
          })
      } catch (error) {
        hilog.error(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperDeleteAssetsPromiseNop600 failed ' + error);
        expect(Number(error.code)).assertEqual(NOT_PERMISSION);
        done();
      }
    });

    /*
     * @tc.number:SUB_Multimedia_Media_Library_PhotoAccessHelper_GetWriteCacheHandler_Promise_Nop_700
     * @tc.name: testMultimediaMediaLibraryPhotoAccessHelperGetWriteCacheHandlerPromiseNop700
     * @tc.desc:Using the on method without permission
     * @tc.level:Level 3
     * @tc.type:Function
     * @tc.size:MediumTest
     */
    it('testMultimediaMediaLibraryPhotoAccessHelperGetWriteCacheHandlerPromiseNop700', 0, async (done: Function) => {
      hilog.info(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperGetWriteCacheHandlerPromiseNop700 begin');
      try {
        let context = GlobalContext.getContext().getObject('context');
        let phAccessHelper = photoAccessHelper.getPhotoAccessHelper(context as Context);
        let photoType: photoAccessHelper.PhotoType = photoAccessHelper.PhotoType.VIDEO;
        let extension: string = 'mp4';
        let assetChangeRequest: photoAccessHelper.MediaAssetChangeRequest = photoAccessHelper.MediaAssetChangeRequest.createAssetRequest(context as Context, photoType, extension);
        phAccessHelper.applyChanges(assetChangeRequest).then(() => {
          hilog.info(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperGetWriteCacheHandlerPromiseNop700 success');
          expect().assertFail();
          done();
        }).catch((err: BusinessError) => {
          hilog.error(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperGetWriteCacheHandlerPromiseNop700 fail ' + JSON.stringify(err));
          expect(Number(err.code)).assertEqual(PERMISSION_DENIED);
          done();
        })
      } catch (error) {
        hilog.error(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperGetWriteCacheHandlerPromiseNop700 failed ' + error);
        expect(Number(error.code)).assertEqual(PARAMETER_ERROR);
        done();
      }
    });

    /*
     * @tc.number:SUB_Multimedia_Media_Library_PhotoAccessHelper_ApplyChanges_Promise_Nop_800
     * @tc.name: testMultimediaMediaLibraryPhotoAccessHelperDeleteAssetsPromiseApplyChangesNop800
     * @tc.desc:Using the on method without permission
     * @tc.level:Level 3
     * @tc.type:Function
     * @tc.size:MediumTest
     */
    it('testMultimediaMediaLibraryPhotoAccessHelperDeleteAssetsPromiseApplyChangesNop800', 0, async (done: Function) => {
      hilog.info(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperDeleteAssetsPromiseApplyChangesNop800 begin');
      try {
        let context = GlobalContext.getContext().getObject('context');
        let phAccessHelper = photoAccessHelper.getPhotoAccessHelper(context as Context);

        let fileUri = 'file://com.example.temptest/data/storage/el2/base/haps/entry/files/test.jpg';
        let assetChangeRequest: photoAccessHelper.MediaAssetChangeRequest = photoAccessHelper.MediaAssetChangeRequest.createImageAssetRequest(context as Context, fileUri);
        await phAccessHelper.applyChanges(assetChangeRequest)
          .then(() => {
            hilog.info(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperDeleteAssetsPromiseApplyChangesNop800 success');
            expect().assertFail();
            done();
          })
          .catch((err: BusinessError) => {
            hilog.error(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperDeleteAssetsPromiseApplyChangesNop800 fail ' + JSON.stringify(err));
            expect(Number(err.code)).assertEqual(PERMISSION_DENIED);
            done();
          })
      } catch (error) {
        hilog.error(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperDeleteAssetsPromiseApplyChangesNop800 failed ' + error);
        expect(Number(error.code)).assertEqual(NO_SUCH_FILE);
        done();
      }
    });

    /*
     * @tc.number:SUB_Multimedia_Media_Library_PhotoAccessHelper_DeleteAssets_Promise_Array_PhotoAsset_Nop_900
     * @tc.name: testMultimediaMediaLibraryPhotoAccessHelperDeleteAssetsPromiseArrayPhotoAssetNop900
     * @tc.desc:Using the on method without permission
     * @tc.level:Level 3
     * @tc.type:Function
     * @tc.size:MediumTest
     */
    it('testMultimediaMediaLibraryPhotoAccessHelperDeleteAssetsPromiseArrayPhotoAssetNop900', 0, async (done: Function) => {
      hilog.info(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperDeleteAssetsPromiseArrayPhotoAssetNop900 begin');
      try {
        let context = GlobalContext.getContext().getObject('context');
        let phAccessHelper = photoAccessHelper.getPhotoAccessHelper(context as Context);
        let predicates: dataSharePredicates.DataSharePredicates = new dataSharePredicates.DataSharePredicates();

        let fetchOptions: photoAccessHelper.FetchOptions = {
          fetchColumns: [],
          predicates: predicates
        };

        await phAccessHelper.getAssets(fetchOptions)
          .then((fetchResult: photoAccessHelper.FetchResult<photoAccessHelper.PhotoAsset>) => {
            hilog.info(0x0000, 'photoAccessHelperTag', '%{public}s', 'getAssets success');
            fetchResult.getAllObjects().then((photoAssetList: Array<photoAccessHelper.PhotoAsset>) => {
              hilog.info(0x0000, 'photoAccessHelperTag', '%{public}s', 'getAllObjects success');
              photoAccessHelper.MediaAssetChangeRequest.deleteAssets(context as Context, photoAssetList).then(() => {
                hilog.info(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperDeleteAssetsPromiseArrayPhotoAssetNop900 success');
                expect().assertFail();
                done();
              }).catch((err: BusinessError) => {
                hilog.error(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperDeleteAssetsPromiseArrayPhotoAssetNop900 fail ' + JSON.stringify(err));
                expect(Number(err.code)).assertEqual(PERMISSION_DENIED);
                done();
              })
            }).catch((err: BusinessError) => {
              hilog.error(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperDeleteAssetsPromiseArrayPhotoAssetNop900 fail ' + JSON.stringify(err));
              expect(Number(err.code)).assertEqual(PERMISSION_DENIED);
              done();
            })
          })
          .catch((err: BusinessError) => {
            hilog.error(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperDeleteAssetsPromiseArrayPhotoAssetNop900 fail ' + JSON.stringify(err));
            expect(Number(err.code)).assertEqual(PERMISSION_DENIED);
            done();
          })
      } catch (error) {
        hilog.error(0x0000, 'photoAccessHelperTag', '%{public}s', 'testMultimediaMediaLibraryPhotoAccessHelperDeleteAssetsPromiseArrayPhotoAssetNop900 failed ' + error);
        expect(Number(error.code)).assertEqual(NOT_PERMISSION);
        done();
      }
    });
  });
}