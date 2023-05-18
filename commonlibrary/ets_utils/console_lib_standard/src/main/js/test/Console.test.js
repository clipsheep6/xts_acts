/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from '@ohos/hypium'
export default function ConsoleTest() {
describe('ConsoleTest', function () {

  /**
   * @tc.name: testConsole10
   * @tc.desc: test API warning print
   */

  it("testConsole10", 0, function () {
    console.countReset('noLabel'); // Counter noLabel doesn't exists, please check Counter Name.
    console.timeLog('noLabel');  // Timer noLabel doesn't exists, please check Timer Name.
    console.timeEnd('noLabel');  // Timer noLabel doesn't exists, please check Timer Name.
    console.time('label');
    console.timeEnd('label');
  });
  
  /**
   * @tc.name: testConsole20
   * @tc.desc: Test using the default label
   * For example: on console.time(), console.countReset(), console.timeLog(), console.timeEnd()
   */

  it("testConsole20", 0, function () {
    console.countReset(); // Counter default doesn't exists, please check Counter Name.
    console.timeLog(); // Timer default doesn't exists, please check Timer Name.
    console.timeEnd(); // Timer default doesn't exists, please check Timer Name.
    console.time(); // Timer default already exists,  please check Timer Name.
    console.timeLog();
    console.timeEnd();
  });

  /**
   * @tc.name: testConsole30
   * @tc.desc: Test console.log()
   * For example: on console.log()
   */

  it("testConsole30", 0, function () {
    console.log('foo'); // foo
    console.log('foo', 'bar'); // foo bar
    console.log('%s %s', 'foo', 'bar', 'hop'); // foo bar hop
    console.log('logger: Expecting new state {"CameraInitReducer":{"platformCapability":{"TAG":"[CameraPlatformCapability]:","mZoomRatioRangeMap":{},"mPhotoPreviewSizeMap":{},"mVideoPreviewSizeMap":{},"mImageSizeMap":{},"mVideoFrameSizeMap":{},"mCameraCount":1,"mPhotoPreviewSize":[{"width":640,"height":480},{"width":720,"height":720},{"width":1920,"height":1080}],"mVideoPreviewSize":[{"width":1280,"height":720},{"width":1920,"height":1080},{"width":1920,"height":1080}],"mImageSize":[{"width":1280,"height":960},{"width":3120,"height":3120},{"width":1920,"height":1080}],"mVideoFrameSize";[{"width":1280,"height":720},{"width":1920,"height":1080},{"width":3840,"height":2160}]}"resourceUri":"","videoUri":""},"ContextReducer":{"uiEnable":true,"uiStateMode":0,"deviceHeight":0,"footBarWidth":0,"footBarHeight":480,"isThirdPartyCall":false,"isFaCall":false,"permissionFlag":true,"action":"","isKeepScreenOn":false,"initShowFlag":false},"CameraReducer":{"cameraPosition":"BACK","curCameraPosition":"BACK","cameraId":"","curCameraNamelength"}}')
  });

 /**
   * @tc.name: testConsole40
   * @tc.desc: Test console.debug()
   * For example: on console.debug()
   */

 it("testConsole40", 0, function () {
  console.debug('foo'); // foo
  console.debug('foo', 'bar'); // foo bar
  console.debug('%s %s', 'foo', 'bar', 'hop'); // foo bar hop
  console.debug('logger: Expecting new state {"CameraInitReducer":{"platformCapability":{"TAG":"[CameraPlatformCapability]:","mZoomRatioRangeMap":{},"mPhotoPreviewSizeMap":{},"mVideoPreviewSizeMap":{},"mImageSizeMap":{},"mVideoFrameSizeMap":{},"mCameraCount":1,"mPhotoPreviewSize":[{"width":640,"height":480},{"width":720,"height":720},{"width":1920,"height":1080}],"mVideoPreviewSize":[{"width":1280,"height":720},{"width":1920,"height":1080},{"width":1920,"height":1080}],"mImageSize":[{"width":1280,"height":960},{"width":3120,"height":3120},{"width":1920,"height":1080}],"mVideoFrameSize";[{"width":1280,"height":720},{"width":1920,"height":1080},{"width":3840,"height":2160}]}"resourceUri":"","videoUri":""},"ContextReducer":{"uiEnable":true,"uiStateMode":0,"deviceHeight":0,"footBarWidth":0,"footBarHeight":480,"isThirdPartyCall":false,"isFaCall":false,"permissionFlag":true,"action":"","isKeepScreenOn":false,"initShowFlag":false},"CameraReducer":{"cameraPosition":"BACK","curCameraPosition":"BACK","cameraId":"","curCameraNamelength"}}')
});

 /**
   * @tc.name: testConsole50
   * @tc.desc: Test console.info()
   * For example: on console.info()
   */

 it("testConsole50", 0, function () {
  console.info('foo'); // foo
  console.info('foo', 'bar'); // foo bar
  console.info('%s %s', 'foo', 'bar', 'hop'); // foo bar hop
  console.info('logger: Expecting new state {"CameraInitReducer":{"platformCapability":{"TAG":"[CameraPlatformCapability]:","mZoomRatioRangeMap":{},"mPhotoPreviewSizeMap":{},"mVideoPreviewSizeMap":{},"mImageSizeMap":{},"mVideoFrameSizeMap":{},"mCameraCount":1,"mPhotoPreviewSize":[{"width":640,"height":480},{"width":720,"height":720},{"width":1920,"height":1080}],"mVideoPreviewSize":[{"width":1280,"height":720},{"width":1920,"height":1080},{"width":1920,"height":1080}],"mImageSize":[{"width":1280,"height":960},{"width":3120,"height":3120},{"width":1920,"height":1080}],"mVideoFrameSize";[{"width":1280,"height":720},{"width":1920,"height":1080},{"width":3840,"height":2160}]}"resourceUri":"","videoUri":""},"ContextReducer":{"uiEnable":true,"uiStateMode":0,"deviceHeight":0,"footBarWidth":0,"footBarHeight":480,"isThirdPartyCall":false,"isFaCall":false,"permissionFlag":true,"action":"","isKeepScreenOn":false,"initShowFlag":false},"CameraReducer":{"cameraPosition":"BACK","curCameraPosition":"BACK","cameraId":"","curCameraNamelength"}}')
});

 /**
   * @tc.name: testConsole60
   * @tc.desc: Test console.error()
   * For example: on console.error()
   */

 it("testConsole60", 0, function () {
  console.error('foo'); // foo
  console.error('foo', 'bar'); // foo bar
  console.error('%s %s', 'foo', 'bar', 'hop'); // foo bar hop
  console.error('logger: Expecting new state {"CameraInitReducer":{"platformCapability":{"TAG":"[CameraPlatformCapability]:","mZoomRatioRangeMap":{},"mPhotoPreviewSizeMap":{},"mVideoPreviewSizeMap":{},"mImageSizeMap":{},"mVideoFrameSizeMap":{},"mCameraCount":1,"mPhotoPreviewSize":[{"width":640,"height":480},{"width":720,"height":720},{"width":1920,"height":1080}],"mVideoPreviewSize":[{"width":1280,"height":720},{"width":1920,"height":1080},{"width":1920,"height":1080}],"mImageSize":[{"width":1280,"height":960},{"width":3120,"height":3120},{"width":1920,"height":1080}],"mVideoFrameSize";[{"width":1280,"height":720},{"width":1920,"height":1080},{"width":3840,"height":2160}]}"resourceUri":"","videoUri":""},"ContextReducer":{"uiEnable":true,"uiStateMode":0,"deviceHeight":0,"footBarWidth":0,"footBarHeight":480,"isThirdPartyCall":false,"isFaCall":false,"permissionFlag":true,"action":"","isKeepScreenOn":false,"initShowFlag":false},"CameraReducer":{"cameraPosition":"BACK","curCameraPosition":"BACK","cameraId":"","curCameraNamelength"}}')
});

 /**
   * @tc.name: testConsole70
   * @tc.desc: Test console.warn()
   * For example: on console.warn()
   */

it("testConsole70", 0, function () {
  console.warn('foo'); // foo
  console.warn('foo', 'bar'); // foo bar
  console.warn('%s %s', 'foo', 'bar', 'hop'); // foo bar hop
  console.warn('logger: Expecting new state {"CameraInitReducer":{"platformCapability":{"TAG":"[CameraPlatformCapability]:","mZoomRatioRangeMap":{},"mPhotoPreviewSizeMap":{},"mVideoPreviewSizeMap":{},"mImageSizeMap":{},"mVideoFrameSizeMap":{},"mCameraCount":1,"mPhotoPreviewSize":[{"width":640,"height":480},{"width":720,"height":720},{"width":1920,"height":1080}],"mVideoPreviewSize":[{"width":1280,"height":720},{"width":1920,"height":1080},{"width":1920,"height":1080}],"mImageSize":[{"width":1280,"height":960},{"width":3120,"height":3120},{"width":1920,"height":1080}],"mVideoFrameSize";[{"width":1280,"height":720},{"width":1920,"height":1080},{"width":3840,"height":2160}]}"resourceUri":"","videoUri":""},"ContextReducer":{"uiEnable":true,"uiStateMode":0,"deviceHeight":0,"footBarWidth":0,"footBarHeight":480,"isThirdPartyCall":false,"isFaCall":false,"permissionFlag":true,"action":"","isKeepScreenOn":false,"initShowFlag":false},"CameraReducer":{"cameraPosition":"BACK","curCameraPosition":"BACK","cameraId":"","curCameraNamelength"}}')
});

 /**
   * @tc.name: testConsole80
   * @tc.desc: Test console.dir(), console.dirxml() 
   * For example: on console.dir(), console.dirxml() 
   */

 it("testConsole80", 0, function () {
  console.dir({ foo: { bar: { baz: true } } });
  function cat(name, age, score){
  this.name = name;
  this.age = age;
  this.score = score;
  }
  var c = new cat("test", 2, [6,8,7]);
  console.dir(c);
    
  console.dirxml("console.dirxml");
});

 /**
   * @tc.name: testConsole90
   * @tc.desc: Test console.trace()
   * For example: on console.trace()
   */

 it("testConsole90", 0, function () {
  console.trace('This is a %j %d', 10, 'foo');
});

   /**
   * @tc.name: testConsole100
   * @tc.desc: Test console.time() and console.timeEnd() output
   * For example: on console.time() and console.timeEnd() 
   */

 it("testConsole100", 0, function () {
  console.time('label');
  console.timeEnd('label');
});

   /**
   * @tc.name: testConsole110
   * @tc.desc: Verify that Object.prototype properties can be used as labels
   * For example: on console.time() and console.timeEnd() 
   */

   it("testConsole110", 0, function () {
    console.time('__proto__');
    console.timeEnd('__proto__');
    console.time('constructor');
    console.timeEnd('constructor');
    console.time('hasOwnProperty');
    console.timeEnd('hasOwnProperty');
  
    console.time(null);
    console.timeEnd(null);
    console.time(undefined);
    console.timeEnd('default');
    console.time('default');
    console.timeEnd();

    console.time('log1');
    console.timeLog('log1');
    console.timeLog('log1', 'test');
    console.timeLog('log1', {}, [1, 2, 3]);
    console.timeEnd('log1');
  });
  
/**
   * @tc.name: testConsole120
   * @tc.desc: Test console.assert()
   * For example: on console.assert()
   */

it("testConsole120", 0, function () {
  console.assert(false, '%s should', 'console.assert', 'not throw'); // Assertion failed:console.assert should not throw
  console.assert(false); // Assertion failed
  console.assert(true, 'this should not throw');
  console.assert(true);
});

/**
   * @tc.name: testConsole130
   * @tc.desc: Test console.count(), console.countReset()
   * For example: on console.count(), console.countReset()
   */

it("testConsole130", 0, function () {
  console.count()             // default: 1
  console.count('default')    // default: 2
  console.count('a')          // a: 1
  console.count('b')          // b: 1
  console.count('a')          // a: 2
  console.count()             // default: 3
  console.countReset();
  console.count()             // default: 1
  console.countReset('a');
  console.count('a')          // a: 1
  console.count()             // default: 2
});
  
/**
   * @tc.name: testConsole140
   * @tc.desc: Test console.group(), console.groupEnd()
   * For example: on console.group(), console.groupEnd()
   */

it("testConsole140", 0, function () {
  console.log('This is the outer level');  //  This is the outer level
  console.group();
  console.log('Level 2')                   //   Level 2
  console.group();
  console.log('Level 3')                   //     Level 2
  console.groupEnd();
  console.log('Back to level 2')           //   Back to level 2
  console.groupEnd();
  console.log('Back to the outer level')   // Back to the outer level
  console.groupEnd();
  console.log('Still at the outer level')  // Still at the outer level
  console.groupCollapsed('Label')          // Label
  console.log('Level 2')                   //   Level 2
  console.groupCollapsed();
  console.log('Level 3')                   //     Level 3
});

/**
   * @tc.name: testConsole150
   * @tc.desc: Test console.table()
   * For example: on console.table()
   */

it("testConsole150", 0, function () {
  console.table([1, 2, 3]);
  // ┌─────────┬────────┐
  // │ (index) │ Values │
  // ├─────────┼────────┤
  // │    0    │   1    │
  // │    1    │   2    │
  // │    2    │   3    │ 
  // └─────────┴────────┘
  console.table({ a: { a: { a: 1, b: 2, c: 3 } } });
  // ┌─────────┬─────────────────┐
  // │ (index) │        a        │
  // ├─────────┼─────────────────┤
  // │    a    │ [object Object] │
  // └─────────┴─────────────────┘
  console.table({ a: [1, 2, 3, 4, 5], b: 5, c: { e: 5 } });
  // ┌─────────┬───┬───┬───┬───┬───┬───┬────────┐
  // │ (index) │ 0 │ 1 │ 2 │ 3 │ 4 │ e │ Values │
  // ├─────────┼───┼───┼───┼───┼───┼───┼────────┤
  // │    a    │ 1 │ 2 │ 3 │ 4 │ 5 │   │        │
  // │    b    │   │   │   │   │   │   │   5    │
  // │    c    │   │   │   │   │   │ 5 │        │
  // └─────────┴───┴───┴───┴───┴───┴───┴────────┘
});
})}