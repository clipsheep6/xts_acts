/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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

import { describe, expect, it } from '@ohos/hypium'
import native from 'libnativewindow.so'

export default function nativeWindowTest() {

  describe('ExternalWindowNativeTest', () => {
    /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_EXTERNAL_WINDOW_OH_NATIVEWINDOW_DESTROYNATIVEWINDOW_0100
     * @tc.name       : testOHNativeWindowDestroyNativeWindow001
     * @tc.desc       : test OH_NativeWindow_DestroyNativeWindow
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeWindowDestroyNativeWindow001', 0, async (done: Function) => {
      let result: number = native.oHNativeWindowDestroyNativeWindow();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_EXTERNAL_WINDOW_OH_NATIVEWINDOW_DESTROYNATIVEWINDOWBUFFER_0100
     * @tc.name       : testOHNativeWindowDestroyNativeWindowBuffer001
     * @tc.desc       : test OH_NativeWindow_DestroyNativeWindowBuffer
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeWindowDestroyNativeWindowBuffer001', 0, async (done: Function) => {
      let result: number = native.oHNativeWindowDestroyNativeWindowBuffer();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_EXTERNAL_WINDOW_OH_NATIVEWINDOW_NATIVEWINDOWREQUESTBUFFER_0100
     * @tc.name       : testOHNativeWindowNativeWindowRequestBuffer001
     * @tc.desc       : test OH_NativeWindow_NativeWindowRequestBuffer
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeWindowNativeWindowRequestBuffer001', 0, async (done: Function) => {
      let result: number = native.oHNativeWindowNativeWindowRequestBuffer();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_EXTERNAL_WINDOW_OH_NATIVEWINDOW_NATIVEWINDOWFLUSHBUFFER_0100
     * @tc.name       : testOHNativeWindowNativeWindowFlushBuffer001
     * @tc.desc       : test OH_NativeWindow_NativeWindowFlushBuffer
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeWindowNativeWindowFlushBuffer001', 0, async (done: Function) => {
      let result: number = native.oHNativeWindowNativeWindowFlushBuffer();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_EXTERNAL_WINDOW_OH_NATIVEWINDOW_NATIVEWINDOWABORTBUFFER_0100
     * @tc.name       : testOHNativeWindowNativeWindowAbortBuffer001
     * @tc.desc       : test OH_NativeWindow_NativeWindowAbortBuffer
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeWindowNativeWindowAbortBuffer001', 0, async (done: Function) => {
      let result: number = native.oHNativeWindowNativeWindowAbortBuffer();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_EXTERNAL_WINDOW_OH_NATIVEWINDOW_NATIVEWINDOWHANDLEOPT_0100
     * @tc.name       : testOHNativeWindowNativeWindowHandleOpt001
     * @tc.desc       : test OH_NativeWindow_NativeWindowHandleOpt
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeWindowNativeWindowHandleOpt001', 0, async (done: Function) => {
      let result: number = native.oHNativeWindowNativeWindowHandleOpt();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_EXTERNAL_WINDOW_OH_NATIVEWINDOW_GETBUFFERHANDLEFROMNATIVE_0100
     * @tc.name       : testOHNativeWindowGetBufferHandleFromNative001
     * @tc.desc       : test OH_NativeWindow_GetBufferHandleFromNative
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeWindowGetBufferHandleFromNative001', 0, async (done: Function) => {
      let result: number = native.oHNativeWindowGetBufferHandleFromNative();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_EXTERNAL_WINDOW_OH_NATIVEWINDOW_NATIVEOBJECTREFERENCE_0100
     * @tc.name       : testOHNativeWindowNativeObjectReference001
     * @tc.desc       : test OH_NativeWindow_NativeObjectReference
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeWindowNativeObjectReference001', 0, async (done: Function) => {
      let result: number = native.oHNativeWindowNativeObjectReference();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_EXTERNAL_WINDOW_OH_NATIVEWINDOW_NATIVEOBJECTUNREFERENCE_0100
     * @tc.name       : testOHNativeWindowNativeObjectUnreference001
     * @tc.desc       : test OH_NativeWindow_NativeObjectUnreference
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeWindowNativeObjectUnreference001', 0, async (done: Function) => {
      let result: number = native.oHNativeWindowNativeObjectUnreference();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_EXTERNAL_WINDOW_OH_NATIVEWINDOW_GETNATIVEOBJECTMAGIC_0100
     * @tc.name       : testOHNativeWindowGetNativeObjectMagic001
     * @tc.desc       : test OH_NativeWindow_GetNativeObjectMagic
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeWindowGetNativeObjectMagic001', 0, async (done: Function) => {
      let result: number = native.oHNativeWindowGetNativeObjectMagic();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_EXTERNAL_WINDOW_OH_NATIVEWINDOW_NATIVEWINDOWSETSCALINGMODE_0100
     * @tc.name       : testOHNativeWindowNativeWindowSetScalingMode001
     * @tc.desc       : test OH_NativeWindow_NativeWindowSetScalingMode
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeWindowNativeWindowSetScalingMode001', 0, async (done: Function) => {
      let result: number = native.oHNativeWindowNativeWindowSetScalingMode();
      expect(result).assertEqual(0);
      done();
    });

   /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_EXTERNAL_WINDOW_OH_NATIVEWINDOW_NATIVEWINDOWREQUESTBUFFER_0200
     * @tc.name       : testOHNativeWindowNativeWindowRequestBuffer002
     * @tc.desc       : test OH_NativeWindow_NativeWindowRequestBuffer
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeWindowNativeWindowRequestBuffer002', 0, async (done: Function) => {
      let result: number = native.oHNativeWindowNativeWindowRequestBufferAbnormal();
      expect(result).assertEqual(-1);
      done();
    });

   /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_EXTERNAL_WINDOW_OH_NATIVEWINDOW_NATIVEWINDOWFLUSHBUFFER_0200
     * @tc.name       : testOHNativeWindowNativeWindowFlushBuffer002
     * @tc.desc       : test OH_NativeWindow_NativeWindowFlushBuffer
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeWindowNativeWindowFlushBuffer002', 0, async (done: Function) => {
      let result: number = native.oHNativeWindowNativeWindowFlushBufferAbnormal();
      expect(result).assertEqual(-1);
      done();
    });

   /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_EXTERNAL_WINDOW_OH_NATIVEWINDOW_NATIVEWINDOWABORTBUFFER_0200
     * @tc.name       : testOHNativeWindowNativeWindowAbortBuffer002
     * @tc.desc       : test OH_NativeWindow_NativeWindowAbortBuffer
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeWindowNativeWindowAbortBuffer002', 0, async (done: Function) => {
      let result: number = native.oHNativeWindowNativeWindowAbortBufferAbnormal();
      expect(result).assertEqual(-1);
      done();
    });

   /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_EXTERNAL_WINDOW_OH_NATIVEWINDOW_NATIVEWINDOWHANDLEOPT_0200
     * @tc.name       : testOHNativeWindowNativeWindowHandleOpt002
     * @tc.desc       : test OH_NativeWindow_NativeWindowHandleOpt
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeWindowNativeWindowHandleOpt002', 0, async (done: Function) => {
      let result: number = native.oHNativeWindowNativeWindowHandleOptAbnormal();
      expect(result).assertEqual(-1);
      done();
    });

   /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_EXTERNAL_WINDOW_OH_NATIVEWINDOW_GETBUFFERHANDLEFROMNATIVE_0200
     * @tc.name       : testOHNativeWindowGetBufferHandleFromNative002
     * @tc.desc       : test OH_NativeWindow_GetBufferHandleFromNative
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeWindowGetBufferHandleFromNative002', 0, async (done: Function) => {
      let result: number = native.oHNativeWindowGetBufferHandleFromNativeAbnormal();
      expect(result).assertEqual(-1);
      done();
    });

   /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_EXTERNAL_WINDOW_OH_NATIVEWINDOW_NATIVEOBJECTREFERENCE_0200
     * @tc.name       : testOHNativeWindowNativeObjectReference002
     * @tc.desc       : test OH_NativeWindow_NativeObjectReference
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeWindowNativeObjectReference002', 0, async (done: Function) => {
      let result: number = native.oHNativeWindowNativeObjectReferenceAbnormal();
      expect(result).assertEqual(-1);
      done();
    });

   /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_EXTERNAL_WINDOW_OH_NATIVEWINDOW_NATIVEOBJECTUNREFERENCE_0200
     * @tc.name       : testOHNativeWindowNativeObjectUnreference002
     * @tc.desc       : test OH_NativeWindow_NativeObjectUnreference
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeWindowNativeObjectUnreference002', 0, async (done: Function) => {
      let result: number = native.oHNativeWindowNativeObjectUnreferenceAbnormal();
      expect(result).assertEqual(-1);
      done();
    });

   /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_EXTERNAL_WINDOW_OH_NATIVEWINDOW_GETNATIVEOBJECTMAGIC_0200
     * @tc.name       : testOHNativeWindowGetNativeObjectMagic002
     * @tc.desc       : test OH_NativeWindow_GetNativeObjectMagic
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeWindowGetNativeObjectMagic002', 0, async (done: Function) => {
      let result: number = native.oHNativeWindowGetNativeObjectMagicAbnormal();
      expect(result).assertEqual(-1);
      done();
    });

   /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_EXTERNAL_WINDOW_OH_NATIVEWINDOW_NATIVEWINDOWSETSCALINGMODE_0200
     * @tc.name       : testOHNativeWindowNativeWindowSetScalingMode002
     * @tc.desc       : test OH_NativeWindow_NativeWindowSetScalingMode
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeWindowNativeWindowSetScalingMode002', 0, async (done: Function) => {
      let result: number = native.oHNativeWindowNativeWindowSetScalingModeAbnormal();
      expect(result).assertEqual(-1);
      done();
    });

   /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_EXTERNAL_WINDOW_OH_NATIVEWINDOW_NATIVEWINDOWSETMETADATA_0200
     * @tc.name       : testOHNativeWindowNativeWindowSetMetaData002
     * @tc.desc       : test OH_NativeWindow_NativeWindowSetMetaData
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeWindowNativeWindowSetMetaData002', 0, async (done: Function) => {
      let result: number = native.oHNativeWindowNativeWindowSetMetaDataAbnormal();
      expect(result).assertEqual(-1);
      done();
    });

   /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_EXTERNAL_WINDOW_OH_NATIVEWINDOW_NATIVEWINDOWSETMETADATASET_0200
     * @tc.name       : testOHNativeWindowNativeWindowSetMetaDataSet002
     * @tc.desc       : test OH_NativeWindow_NativeWindowSetMetaDataSet
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeWindowNativeWindowSetMetaDataSet002', 0, async (done: Function) => {
      let result: number = native.oHNativeWindowNativeWindowSetMetaDataSetAbnormal();
      expect(result).assertEqual(-1);
      done();
    });

   /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_EXTERNAL_WINDOW_OH_NATIVEWINDOW_NATIVEWINDOWSETTUNNELHANDLE_0200
     * @tc.name       : testOHNativeWindowNativeWindowSetTunnelHandle002
     * @tc.desc       : test OH_NativeWindow_NativeWindowSetTunnelHandle
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeWindowNativeWindowSetTunnelHandle002', 0, async (done: Function) => {
      let result: number = native.oHNativeWindowNativeWindowSetTunnelHandleAbnormal();
      expect(result).assertEqual(-1);
      done();
    });
  })
}
