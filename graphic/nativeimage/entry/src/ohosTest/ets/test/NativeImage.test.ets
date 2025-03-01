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
import nativeimage from 'libnativeimage.so'

export default function nativeImageTest() {
    describe('NativeImageTest', () => {
    /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_NATIVE_IMAGE_OH_NATIVEIMAGE_CREATE001
     * @tc.name       : testOHNativeImageCreate001
     * @tc.desc       : test OH_NativeImage_Create
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeImageCreate001', 0, async (done: Function) => {
      let result: number = nativeimage.oHNativeImageCreate();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_NATIVE_IMAGE_OH_NATIVEIMAGE_ACQUIRENATIVEWINDOW001
     * @tc.name       : testOHNativeImageAcquireNativeWindow001
     * @tc.desc       : test OH_NativeImage_AcquireNativeWindow
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeImageAcquireNativeWindow001', 0, async (done: Function) => {
      let result: number = nativeimage.oHNativeImageAcquireNativeWindow();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_NATIVE_IMAGE_OH_NATIVEIMAGE_ACQUIRENATIVEWINDOW002
     * @tc.name       : testOHNativeImageAcquireNativeWindow002
     * @tc.desc       : test OH_NativeImage_AcquireNativeWindow
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeImageAcquireNativeWindow002', 0, async (done: Function) => {
      let result: number = nativeimage.oHNativeImageAcquireNativeWindowAbnormal();
      expect(result).assertEqual(-1);
      done();
    });

    /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_NATIVE_IMAGE_OH_NATIVEIMAGE_ATTACHCONTEXT001
     * @tc.name       : testOHNativeImageAttachContext001
     * @tc.desc       : test OH_NativeImageAttachContext
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeImageAttachContext001', 0, async (done: Function) => {
      let result: number = nativeimage.oHNativeImageAttachContext();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_NATIVE_IMAGE_OH_NATIVEIMAGE_ATTACHCONTEXT002
     * @tc.name       : testOHNativeImageAttachContext002
     * @tc.desc       : test OH_NativeImageAttachContext
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeImageAttachContext002', 0, async (done: Function) => {
      let result: number = nativeimage.oHNativeImageAttachContextAbnormal();
      expect(result).assertEqual(-1);
      done();
    });

    /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_NATIVE_IMAGE_OH_NATIVEIMAGE_DETACHCONTEXT001
     * @tc.name       : testOHNativeImageDetachContext001
     * @tc.desc       : test OH_NativeImage_DetachContext
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeImageDetachContext001', 0, async (done: Function) => {
      let result: number = nativeimage.oHNativeImageDetachContext();
      expect(result).assertEqual(0);
      done();
    });
   /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_NATIVE_IMAGE_OH_NATIVEIMAGE_DETACHCONTEXT002
     * @tc.name       : testOHNativeImageDetachContext002
     * @tc.desc       : test OH_NativeImage_DetachContext
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeImageDetachContext002', 0, async (done: Function) => {
      let result: number = nativeimage.oHNativeImageDetachContextAbnormal();
      expect(result).assertEqual(-1);
      done();
    });

    /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_NATIVE_IMAGE_OH_NATIVEIMAGE_UPDATESURFACEIMAGE001
     * @tc.name       : testOHNativeImageUpdateSurfaceImage001
     * @tc.desc       : test OH_NativeImage_UpdateSurfaceImage
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeImageUpdateSurfaceImage001', 0, async (done: Function) => {
      let result: number = nativeimage.oHNativeImageUpdateSurfaceImage();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_NATIVE_IMAGE_OH_NATIVEIMAGE_UPDATESURFACEIMAGE
     * @tc.name       : testOHNativeImageUpdateSurfaceImageBoundary
     * @tc.desc       : test OH_NativeImage_UpdateSurfaceImageBoundary
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeImageUpdateSurfaceImageBoundary', 0, async (done: Function) => {
      let result: number = nativeimage.oHNativeImageUpdateSurfaceImageBoundary();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_NATIVE_IMAGE_OH_NATIVEIMAGE_UPDATESURFACEIMAGE002
     * @tc.name       : testOHNativeImageUpdateSurfaceImage002
     * @tc.desc       : test OH_NativeImage_UpdateSurfaceImage
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeImageUpdateSurfaceImage002', 0, async (done: Function) => {
      let result: number = nativeimage.oHNativeImageUpdateSurfaceImageAbnormal();
      expect(result).assertEqual(-1);
      done();
    });

    /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_NATIVE_IMAGE_OH_NATIVEIMAGE_GETTIMESTAMP001
     * @tc.name       : testOHNativeImageGetTimestamp001
     * @tc.desc       : test OH_NativeImage_GetTimestamp
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeImageGetTimestamp001', 0, async (done: Function) => {
      let result: number = nativeimage.oHNativeImageGetTimestamp();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_NATIVE_IMAGE_OH_NATIVEIMAGE_GETTRANSFORMMATRIX001
     * @tc.name       : testOHNativeImageGetTransformMatrix001
     * @tc.desc       : test OH_NativeImage_GetTransformMatrix
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeImageGetTransformMatrix001', 0, async (done: Function) => {
      let result: number = nativeimage.oHNativeImageGetTransformMatrix();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_NATIVE_IMAGE_OH_NATIVEIMAGE_GETTRANSFORMMATRIX002
     * @tc.name       : testOHNativeImageGetTransformMatrix002
     * @tc.desc       : test OH_NativeImage_GetTransformMatrix
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeImageGetTransformMatrix002', 0, async (done: Function) => {
      let result: number = nativeimage.oHNativeImageGetTransformMatrixAbnormal();
      expect(result).assertEqual(-1);
      done();
    });

    /**
     * @tc.number     : SUB_GRAPHIC_GRAPHIC_2D_NATIVE_IMAGE_OH_NATIVEIMAGE_DESTROY001
     * @tc.name       : testOHNativeImageDestroy001
     * @tc.desc       : test OH_NativeImage_Destroy
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHNativeImageDestroy001', 0, async (done: Function) => {
      let result: number = nativeimage.oHNativeImageDestroy();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_BASIC_GRAPHICS_SPECIAL_API_C_NATIVE_IMAGE_0100
     * @tc.name       : testNativeImageCreateNormal
     * @tc.desc       : test OH_NativeImage_Create
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testNativeImageCreateNormal', 0, async (done: Function) => {
      let result: number = nativeimage.oHNativeImageCreateNormal();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_BASIC_GRAPHICS_SPECIAL_API_C_NATIVE_IMAGE_0101
     * @tc.name       : testNativeImageCreateAbnormal
     * @tc.desc       : test OH_NativeImage_Create
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testNativeImageCreateAbnormal', 0, async (done: Function) => {
      let result: number = nativeimage.oHNativeImageCreateAbnormal();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_BASIC_GRAPHICS_SPECIAL_API_C_NATIVE_IMAGE_0102
     * @tc.name       : testNativeImageDestroy
     * @tc.desc       : test OH_NativeImage_Create
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testNativeImageDestroy', 0, async (done: Function) => {
      let result: number = nativeimage.oHNativeImageDestroy1();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_BASIC_GRAPHICS_SPECIAL_API_C_NATIVE_IMAGE_0103
     * @tc.name       : testNativeImageCreateMuch
     * @tc.desc       : test OH_NativeImage_Create
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testNativeImageCreateMuch', 0, async (done: Function) => {
      let result: number = nativeimage.oHNativeImageCreateMuch();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_BASIC_GRAPHICS_SPECIAL_API_C_NATIVE_IMAGE_0200
     * @tc.name       : testNativeImageAcquireNativeWindowNullptr
     * @tc.desc       : test OH_NativeImage_AcquireNativeWindow
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testNativeImageAcquireNativeWindowNullptr', 0, async (done: Function) => {
      let result: number = nativeimage.oHNativeImageAcquireNativeWindowNullptr();
      expect(result).assertEqual(-1);
      done();
    });

    /**
     * @tc.number     : SUB_BASIC_GRAPHICS_SPECIAL_API_C_NATIVE_IMAGE_0201
     * @tc.name       : testNativeImageAcquireNativeWindowNormal
     * @tc.desc       : test OH_NativeImage_AcquireNativeWindow
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testNativeImageAcquireNativeWindowNormal', 0, async (done: Function) => {
      let result: number = nativeimage.oHNativeImageAcquireNativeWindowNormal();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_BASIC_GRAPHICS_SPECIAL_API_C_NATIVE_IMAGE_0300
     * @tc.name       : testNativeImageAttachContextNullptr
     * @tc.desc       : test OH_NativeImage_AttachContext
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testNativeImageAttachContextNullptr', 0, async (done: Function) => {
      let result: Array<number> = nativeimage.oHNativeImageAttachContextNullptr();
      console.info("testNativeImageAttachContextNullptr result:" + result)
      expect(result[0]).assertEqual(-1);
      expect(result[1]).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_BASIC_GRAPHICS_SPECIAL_API_C_NATIVE_IMAGE_0301
     * @tc.name       : testNativeImageDetachContextNullptr
     * @tc.desc       : test OH_NativeImage_DetachContext
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testNativeImageDetachContextNullptr', 0, async (done: Function) => {
      let result: number = nativeimage.oHNativeImageDetachContextNullptr();
      expect(result).assertEqual(-1);
      done();
    });

    /**
     * @tc.number     : SUB_BASIC_GRAPHICS_SPECIAL_API_C_NATIVE_IMAGE_0302
     * @tc.name       : testNativeImageAttachContextNormal
     * @tc.desc       : test OH_NativeImage_AcquireNativeWindow
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testNativeImageAttachContextNormal', 0, async (done: Function) => {
      let result: Array<number> = nativeimage.oHNativeImageAttachContextNormal();
      expect(result[0]).assertEqual(0);
      expect(result[1]).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_BASIC_GRAPHICS_SPECIAL_API_C_NATIVE_IMAGE_0303
     * @tc.name       : testNativeImageDetachContextNormal
     * @tc.desc       : test OH_NativeImage_DetachContext
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testNativeImageDetachContextNormal', 0, async (done: Function) => {
      let result: Array<number> = nativeimage.oHNativeImageDetachContextNormal();
      expect(result[0]).assertEqual(0);
      expect(result[1]).assertEqual(0);
      expect(result[2]).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_BASIC_GRAPHICS_SPECIAL_API_C_NATIVE_IMAGE_0400
     * @tc.name       : testNativeImageGetSurfaceIdNullptr
     * @tc.desc       : test OH_NativeImage_GetSurfaceId
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testNativeImageGetSurfaceIdNullptr', 0, async (done: Function) => {
      let result: Array<number> = nativeimage.oHNativeImageGetSurfaceIdNullptr();
      expect(result[0]).assertEqual(-1);
      expect(result[1]).assertEqual(-1);
      done();
    });

    /**
     * @tc.number     : SUB_BASIC_GRAPHICS_SPECIAL_API_C_NATIVE_IMAGE_0401
     * @tc.name       : testNativeGetSurfaceIdNormal
     * @tc.desc       : test OH_NativeImage_GetSurfaceId
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testNativeGetSurfaceIdNormal', 0, async (done: Function) => {
      let result: number = nativeimage.oHNativeGetSurfaceIdNormal();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_BASIC_GRAPHICS_SPECIAL_API_C_NATIVE_IMAGE_0500
     * @tc.name       : testNativeImageUpdateSurfaceImageNullptr
     * @tc.desc       : test OH_NativeImage_UpdateSurfaceImage
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testNativeImageUpdateSurfaceImageNullptr', 0, async (done: Function) => {
      let result: number = nativeimage.oHNativeImageUpdateSurfaceImageNullptr();
      expect(result).assertEqual(-1);
      done();
    });

    /**
     * @tc.number     : SUB_BASIC_GRAPHICS_SPECIAL_API_C_NATIVE_IMAGE_0501
     * @tc.name       : testNativeImageGetTimestampNullptr
     * @tc.desc       : test OH_NativeImage_GetTimestamp
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testNativeImageGetTimestampNullptr', 0, async (done: Function) => {
      let result: number = nativeimage.oHNativeImageGetTimestampNullptr();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_BASIC_GRAPHICS_SPECIAL_API_C_NATIVE_IMAGE_0502
     * @tc.name       : testNativeImageGetTransformMatrixNullptr
     * @tc.desc       : test OH_NativeImage_GetTransformMatrix
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testNativeImageGetTransformMatrixNullptr', 0, async (done: Function) => {
      let result: Array<number> = nativeimage.oHNativeImageGetTransformMatrixNullptr();
      expect(result[0]).assertEqual(-1);
      expect(result[1]).assertEqual(-1);
      done();
    });

    /**
     * @tc.number     : SUB_BASIC_GRAPHICS_SPECIAL_API_C_NATIVE_IMAGE_0503
     * @tc.name       : testNativeImageGetTransformMatrixV2Nullptr
     * @tc.desc       : test OH_NativeImage_GetTransformMatrixV2
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testNativeImageGetTransformMatrixV2Nullptr', 0, async (done: Function) => {
      let result: Array<number> = nativeimage.oHNativeImageGetTransformMatrixV2Nullptr();
      expect(result[0]).assertEqual(-1);
      expect(result[1]).assertEqual(-1);
      done();
    });

    /**
     * @tc.number     : SUB_BASIC_GRAPHICS_SPECIAL_API_C_NATIVE_IMAGE_0504
     * @tc.name       : testNativeImageUpdateSurfaceImageNormal
     * @tc.desc       : test OH_NativeImage_UpdateSurfaceImage
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testNativeImageUpdateSurfaceImageNormal', 0, async (done: Function) => {
      let result: number = nativeimage.oHNativeImageUpdateSurfaceImageNormal();
      expect(result).assertEqual(-1);
      done();
    });

    /**
     * @tc.number     : SUB_BASIC_GRAPHICS_SPECIAL_API_C_NATIVE_IMAGE_0505
     * @tc.name       : testNativeImageGetTimestampNormal
     * @tc.desc       : test OH_NativeImage_UpdateSurfaceImage
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testNativeImageGetTimestampNormal', 0, async (done: Function) => {
      let result: Array<number> = nativeimage.oHNativeImageGetTimestampNormal();
      expect(result[0]).assertEqual(-1);
      expect(result[1]).assertEqual(-1);
      expect(result[2]).assertEqual(-1);
      done();
    });

    /**
     * @tc.number     : SUB_BASIC_GRAPHICS_SPECIAL_API_C_NATIVE_IMAGE_0507
     * @tc.name       : testNativeImageGetTransformMatrixNormal
     * @tc.desc       : test OH_NativeImage_UpdateSurfaceImage
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testNativeImageGetTransformMatrixNormal', 0, async (done: Function) => {
      let result: Array<number> = nativeimage.oHNativeImageGetTransformMatrixNormal();
      expect(result[0]).assertEqual(-1);
      expect(result[1]).assertEqual(-1);
      done();
    });

    /**
     * @tc.number     : SUB_BASIC_GRAPHICS_SPECIAL_API_C_NATIVE_IMAGE_0508
     * @tc.name       : testNativeImageGetTransformMatrixV2Normal
     * @tc.desc       : test OH_NativeImage_UpdateSurfaceImage
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testNativeImageGetTransformMatrixV2Normal', 0, async (done: Function) => {
      let result: Array<number> = nativeimage.oHNativeImageGetTransformMatrixV2Normal();
      expect(result[0]).assertEqual(-1);
      expect(result[1]).assertEqual(-1);
      done();
    });

    /**
     * @tc.number     : SUB_BASIC_GRAPHICS_SPECIAL_API_C_NATIVE_IMAGE_0600
     * @tc.name       : testNativeImageSetOnFrameAvailableListenerNullptr
     * @tc.desc       : test OH_NativeImage_SetOnFrameAvailableListener
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testNativeImageSetOnFrameAvailableListenerNullptr', 0, async (done: Function) => {
      let result: number = nativeimage.oHNativeImageSetOnFrameAvailableListenerNullptr();
      expect(result).assertEqual(-1);
      done();
    });

    /**
     * @tc.number     : SUB_BASIC_GRAPHICS_SPECIAL_API_C_NATIVE_IMAGE_0601
     * @tc.name       : testNativeImageUnSetOnFrameAvailableListenerNullptr
     * @tc.desc       : test OH_NativeImage_UnsetOnFrameAvailableListener
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testNativeImageUnSetOnFrameAvailableListenerNullptr', 0, async (done: Function) => {
      let result: number = nativeimage.oHNativeImageUnSetOnFrameAvailableListenerNullptr();
      expect(result).assertEqual(-1);
      done();
    });

    /**
     * @tc.number     : SUB_BASIC_GRAPHICS_SPECIAL_API_C_NATIVE_IMAGE_0602
     * @tc.name       : testNativeImageSetOnFrameAvailableListenerNormal
     * @tc.desc       : test OH_NativeImage_SetOnFrameAvailableListener
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testNativeImageSetOnFrameAvailableListenerNormal', 0, async (done: Function) => {
      let result: Array<number> = nativeimage.oHNativeImageSetOnFrameAvailableListenerNormal();
      expect(result[0]).assertEqual(0);
      expect(result[1]).assertEqual(0);
      expect(result[2]).assertEqual(0);
      expect(result[3]).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_BASIC_GRAPHICS_SPECIAL_API_C_NATIVE_IMAGE_0603
     * @tc.name       : testNativeImageUnsetOnFrameAvailableListenerNormal
     * @tc.desc       : test OH_NativeImage_UnsetOnFrameAvailableListener
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testNativeImageUnsetOnFrameAvailableListenerNormal', 0, async (done: Function) => {
      let result: Array<number> = nativeimage.oHNativeImageUnsetOnFrameAvailableListenerNormal();
      expect(result[0]).assertEqual(0);
      expect(result[1]).assertEqual(0);
      expect(result[2]).assertEqual(0);
      done();
    });
  })
}
