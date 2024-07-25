/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import image from "@ohos.multimedia.image";
import resourceManager from "@ohos.resourceManager";

interface IImageInfo {
  width: number;
  height: number;
  rowStride: number;
  pixelFormat: number;
  alphaType: number
}
// Picture
export const createPicture: (path: string) => number;
export const pictureNative_GetMainPixelmap: () => number;
export const pictureNative_SetAuxiliaryPicture: () => number;
export const pictureNative_GetAuxiliaryPicture: () => number;
export const pictureNative_GetGainmapPixelmap: () => number;
export const pictureNative_Release: () => number;
// auxiliaryPicture
export const auxiliaryPictureNative_Create: () => number;
export const auxiliaryPictureNative_WritePixels: () => number;
export const auxiliaryPictureNative_ReadPixels: () => number;
export const auxiliaryPictureNative_GetType: () => number;
// export const auxiliaryPictureNative_ReadPixels: () => number;
export const auxiliaryPictureNative_SetInfo: () => number;
export const auxiliaryPictureNative_GetInfo: () => number;
export const releaseAuxiliaryPicture: () => number;

//AuxInfo
export const auxiliaryPictureInfo_Create: () => number;
export const auxiliaryPictureInfo_GetPixelFormat: () => number;
export const auxiliaryPictureInfo_SetPixelFormat: () => number;
export const auxiliaryPictureInfo_GetRowStride: () => number;
export const auxiliaryPictureInfo_SetRowStride: () => number;
export const auxiliaryPictureInfo_GetType: () => number;
export const auxiliaryPictureInfo_SetType: () => number;
export const auxiliaryPictureInfo_GetSize: () => number;
export const auxiliaryPictureInfo_SetSize: () => number;
export const auxiliaryPictureInfo_Release: () => number;

export const auxiliaryPictureNative_GetMetadata: () => number;
export const auxiliaryPictureNative_SetMetadata: () => number;
//metadata
export const pictureMetadata_Create: () => number;
export const pictureMetadata_GetProperty: () => number;
export const pictureMetadata_SetProperty: () => number;
export const pictureMetadata_Release: () => number;

//image sourcesForPicture
export const imageSourceNative_CreatePicture: () => number;
export const decodingOptionsForPicture_Create: () => number;
export const decodingOptionsForPicture_GetDesiredAuxiliaryPictures: () => number;
export const decodingOptionsForPicture_SetDesiredAuxiliaryPictures: () => number;
export const decodingOptionsForPicture_Release: () => number;

//image packer
export const imagePackerNative_PackToDataFromPicture: () => number;
export const imagePackerNative_PackToFileFromPicture: () => number;