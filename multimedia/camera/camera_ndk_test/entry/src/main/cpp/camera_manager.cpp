/*
 * Copyright (c) 2023-2023 Huawei Device Co., Ltd.
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

#include "./camera_manager.h"
#include <multimedia/camera_framework/video_output.h>
#include <unistd.h>

#include <cinttypes>
#include <queue>
#include <utility>

#define LOG_TAG "CAIHF ndkXTS"
#define LOG_DOMAIN 0x3200

NDKCamera* NDKCamera::ndkCamera_ = nullptr;
CameraCallbackCode NDKCamera::cameraCallbackCode_ = NoReceived;
std::mutex NDKCamera::mtx_;

NDKCamera::NDKCamera(char* str)
    : previewSurfaceId_(str), cameras_(nullptr), 
      cameraOutputCapability_(nullptr), cameraInput_(nullptr),
      captureSession_(nullptr),size_(0),
      isCameraMuted_(nullptr), profile_(nullptr),
      photoSurfaceId_(nullptr),
      previewOutput_(nullptr), photoOutput_(nullptr),
      metaDataObjectType_(nullptr), metadataOutput_(nullptr),
      ret_(CAMERA_OK)
{
    valid_ = false;
    Camera_ErrorCode ret = OH_Camera_GetCameraMananger(&cameraManager_);
    if (cameraManager_ == nullptr || ret != CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "Get CameraManager failed.");
    }
    
    valid_ = true;
}


NDKCamera::~NDKCamera() {
    valid_ = false;

    Camera_ErrorCode ret = OH_CaptureSession_Release(captureSession_);
    if (ret != CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "Release failed.");
    }

    if (cameraManager_) {
      cameraManager_ = nullptr;
    }
    
    PreviewOutputStop();
    PreviewOutputRelease();
    PhotoOutputRelease();
}

Camera_ErrorCode NDKCamera::CreateSession(void)
{
    if (!cameraManager_) {
          return Camera_ErrorCode::CAMERA_INVALID_ARGUMENT;
    }
    Camera_ErrorCode ret =  OH_CameraManager_CreateCaptureSession(cameraManager_, &captureSession_);
    if (captureSession_ == nullptr || ret != CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "Create captureSession failed.");
    }
    return ret;
}

Camera_ErrorCode NDKCamera::HasFlashFn(uint32_t mode)
{
    Camera_FlashMode flashMode = static_cast<Camera_FlashMode>(mode);
    // 检测是否有闪关灯
    bool hasFlash = false;
    Camera_ErrorCode ret = OH_CaptureSession_HasFlash(captureSession_, &hasFlash);
    if (captureSession_ == nullptr || ret != CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_HasFlash failed.");
    }
    if (hasFlash){
        OH_LOG_ERROR(LOG_APP, "hasFlash success-----");
    } else {
        OH_LOG_ERROR(LOG_APP, "hasFlash fail-----");
    }
    
    // 检测闪光灯模式是否支持
    bool isSupported = false;
    ret = OH_CaptureSession_IsFlashModeSupported(captureSession_, flashMode, &isSupported);
    if (ret != CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_IsFlashModeSupported failed.");
    }
    if (isSupported){
        OH_LOG_ERROR(LOG_APP, "isFlashModeSupported success-----");
    } else {
        OH_LOG_ERROR(LOG_APP, "isFlashModeSupported fail-----");
    }

    // 设置闪光灯模式
    ret = OH_CaptureSession_SetFlashMode(captureSession_, flashMode);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_SetFlashMode success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_SetFlashMode failed. %{public}d ", ret);
    }

    // 获取当前设备的闪光灯模式
    ret = OH_CaptureSession_GetFlashMode(captureSession_, &flashMode);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_GetFlashMode success. flashMode：%{public}d ", flashMode);
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_GetFlashMode failed. %{public}d ", ret);
    }
}

Camera_ErrorCode NDKCamera::setZoomRatioFn(uint32_t zoomRatio)
{
    float zoom = float(zoomRatio);
    // 获取支持的变焦范围
    float minZoom;
    float maxZoom;
    Camera_ErrorCode ret = OH_CaptureSession_GetZoomRatioRange(captureSession_, &minZoom, &maxZoom);
    if (captureSession_ == nullptr || ret != CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_GetZoomRatioRange failed.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_GetZoomRatioRange success. minZoom: %{public}f, maxZoom: %{public}f", minZoom, maxZoom);
    }
    
    // 设置变焦
    ret = OH_CaptureSession_SetZoomRatio(captureSession_, zoom);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_SetZoomRatio success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_SetZoomRatio failed. %{public}d ", ret);
    }

    // 获取当前设备的变焦值
    ret = OH_CaptureSession_GetZoomRatio(captureSession_, &zoom);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_GetZoomRatio success. zoom：%{public}f ", zoom);
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_GetZoomRatio failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionBegin(){
    Camera_ErrorCode ret =  OH_CaptureSession_BeginConfig(captureSession_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_BeginConfig success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_BeginConfig failed. %{public}d and captureSession_ addr = %{public}p", ret, captureSession_);
    }    
    return ret;
}

Camera_ErrorCode NDKCamera::SessionCommitConfig(){
    Camera_ErrorCode ret =  OH_CaptureSession_CommitConfig(captureSession_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_CommitConfig success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_CommitConfig failed. %{public}d ", ret);
    }      
    return ret;
}

Camera_ErrorCode NDKCamera::SessionStart(){
    Camera_ErrorCode ret =  OH_CaptureSession_Start(captureSession_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_Start success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_Start failed. %{public}d ", ret);
    }  
    return ret;
}

Camera_ErrorCode NDKCamera::SessionStop(){
    Camera_ErrorCode ret =  OH_CaptureSession_Stop(captureSession_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_Stop success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_Stop failed. %{public}d ", ret);
    } 
    return ret;
}

Camera_ErrorCode NDKCamera::CreateCameraInput(void) {
    OH_LOG_ERROR(LOG_APP, "CreateCameraInput start.");
    if (cameraManager_ == nullptr) {
        OH_LOG_ERROR(LOG_APP, "cameraManager_ is NULL.");
    } else if (cameras_ == nullptr) {
        OH_LOG_ERROR(LOG_APP, "cameras_ is NULL.");
    }
    ret_ = OH_CameraManager_CreateCameraInput(cameraManager_, cameras_, &cameraInput_);
    if (cameraInput_ == nullptr || ret_ != CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "CreateCameraInput failed = %{public}d. cameraInput_ = %{public}p", ret_, cameraInput_);
        return CAMERA_INVALID_ARGUMENT;
    }
    OH_LOG_ERROR(LOG_APP, "CreateCameraInput end.");
    return ret_;
}

Camera_ErrorCode NDKCamera::CameraInputOpen(void) {
    ret_ = OH_CameraInput_Open(cameraInput_);
    if (ret_ != CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "CameraInput_Open failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    return ret_;
}

Camera_ErrorCode NDKCamera::CameraInputClose(void) {
    ret_ = OH_CameraInput_Close(cameraInput_);
    if (ret_ != CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "CameraInput_Close failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    return ret_;
}

Camera_ErrorCode NDKCamera::CameraInputRelease(void) {
    ret_ = OH_CameraInput_Release(cameraInput_);
    if (ret_ != CAMERA_OK) {
      OH_LOG_ERROR(LOG_APP, "CameraInput_Release failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    return ret_;
}

Camera_ErrorCode NDKCamera::GetSupportedCameras(void) {
    
    ret_ = OH_CameraManager_GetSupportedCameras(cameraManager_, &cameras_, &size_);
    if (cameras_ == nullptr || &size_ == nullptr || ret_ != CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "Get supported cameras failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    return ret_;
}

Camera_ErrorCode NDKCamera::GetSupportedOutputCapability(void) {
    if (cameraManager_ == nullptr) {
        OH_LOG_ERROR(LOG_APP, "cameraManager_ is null.");
    } else if (cameras_ == nullptr) {
        OH_LOG_ERROR(LOG_APP, "cameras_ is null.");
    }
    ret_ = OH_CameraManager_GetSupportedCameraOutputCapability(cameraManager_, cameras_, &cameraOutputCapability_);
    if (cameraOutputCapability_ == nullptr || ret_ != CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "GetSupportedCameraOutputCapability failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    return ret_;
}

Camera_ErrorCode NDKCamera::CreatePreviewOutput(void) {
    profile_ = cameraOutputCapability_->previewProfiles[0];
    if (profile_ == nullptr) {
        OH_LOG_ERROR(LOG_APP, "Get previewProfiles failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    ret_ = OH_CameraManager_CreatePreviewOutput(cameraManager_, profile_, previewSurfaceId_, &previewOutput_);
    if (previewSurfaceId_ == nullptr || previewOutput_ == nullptr || ret_ != CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "CreatePreviewOutput failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    return ret_;
}

Camera_ErrorCode NDKCamera::CreatePhotoOutput(char* photoSurfaceId)
{
    profile_ = cameraOutputCapability_->photoProfiles[0];
    if (profile_ == nullptr) {
        OH_LOG_ERROR(LOG_APP, "Get photoProfiles failed.");
        return CAMERA_INVALID_ARGUMENT;
    }

    if (photoSurfaceId == nullptr) {
        OH_LOG_ERROR(LOG_APP, "CreatePhotoOutput failed.");
        return CAMERA_INVALID_ARGUMENT;
    }

    ret_ = OH_CameraManager_CreatePhotoOutput(cameraManager_, profile_, photoSurfaceId, &photoOutput_);
    PhotoOutputRegisterCallback();

    return ret_;
}

Camera_ErrorCode NDKCamera::CreateVideoOutput(char* videoId) {
    videoProfile_ = cameraOutputCapability_->videoProfiles[0];
    
    if (videoProfile_ == nullptr) {
        OH_LOG_ERROR(LOG_APP, "Get videoProfiles failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    ret_ = OH_CameraManager_CreateVideoOutput(cameraManager_, videoProfile_, videoId, &videoOutput_);
    if (videoId == nullptr || videoOutput_ == nullptr || ret_ != CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "CreateVideoOutput failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    
    return ret_;
}

Camera_ErrorCode NDKCamera::AddVideoOutput(){
    Camera_ErrorCode ret = OH_CaptureSession_AddVideoOutput(captureSession_, videoOutput_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_AddVideoOutput success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_AddVideoOutput failed. %{public}d ", ret);
    } 
    return ret;
}
Camera_ErrorCode NDKCamera::CreateMetadataOutput(void) {
//    uint32_t metaSize = cameraOutputCapability_->metadataProfilesSize;
    metaDataObjectType_ = cameraOutputCapability_->supportedMetadataObjectTypes[2];
    if (metaDataObjectType_ == nullptr) {
        OH_LOG_ERROR(LOG_APP, "Get metaDataObjectType failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    ret_ = OH_CameraManager_CreateMetadataOutput(cameraManager_, metaDataObjectType_, &metadataOutput_);
    if (metadataOutput_ == nullptr || ret_ != CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "CreateMetadataOutput failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    return ret_;
}

Camera_ErrorCode NDKCamera::IsCameraMuted(void) {
    ret_ = OH_CameraManager_IsCameraMuted(cameraManager_, isCameraMuted_);
    if (isCameraMuted_ == nullptr || ret_ != CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "IsCameraMuted failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    return ret_;
}

Camera_ErrorCode NDKCamera::PreviewOutputStop(void) {
    ret_ = OH_PreviewOutput_Stop(previewOutput_);
    if (ret_ != CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "PreviewOutputStop failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    return ret_;
}

Camera_ErrorCode NDKCamera::PreviewOutputRelease(void) {
    ret_ = OH_PreviewOutput_Release(previewOutput_);
    if (ret_ != CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "PreviewOutputRelease failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    return ret_;
}

Camera_ErrorCode NDKCamera::PhotoOutputRelease(void) {
    ret_ = OH_PhotoOutput_Release(photoOutput_);
    if (ret_ != CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "PhotoOutputRelease failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    return ret_;
}

Camera_ErrorCode NDKCamera::startVideo(char* videoId){
    OH_LOG_ERROR(LOG_APP, "startVideo begin.");

    Camera_ErrorCode ret = SessionStop();

    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "SessionStop success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "SessionStop failed. %{public}d ", ret);
    }
    ret = SessionBegin();
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "SessionBegin success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "SessionBegin failed. %{public}d ", ret);
    }
    CreateVideoOutput(videoId);
    AddVideoOutput();
    SessionCommitConfig();
    SessionStart();
    return ret;
}

Camera_ErrorCode NDKCamera::VideoOutputStart(){
    OH_LOG_ERROR(LOG_APP, "VideoOutputStart begin.");
    Camera_ErrorCode ret = OH_VideoOutput_Start(videoOutput_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_VideoOutput_Start success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_VideoOutput_Start failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::PreviewOutputStart(){
    OH_LOG_ERROR(LOG_APP, "PreviewOutputStart begin.");
    Camera_ErrorCode ret = OH_PreviewOutput_Start(previewOutput_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_PreviewOutput_Start success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_PreviewOutput_Start failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::PhotoOutputCapture(){
    OH_LOG_ERROR(LOG_APP, "Capture begin.");
    Camera_ErrorCode ret = OH_PhotoOutput_Capture(photoOutput_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_PhotoOutput_Capture success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_PhotoOutput_Capture failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::TakePictureWithPhotoSettings(Camera_PhotoCaptureSetting photoSetting)
{
    Camera_ErrorCode ret = CAMERA_OK;
    ret = OH_PhotoOutput_Capture_WithCaptureSetting(photoOutput_, photoSetting);

    OH_LOG_INFO(LOG_APP, "TakePictureWithPhotoSettings get quality %{public}d, rotation %{public}d, mirror %{public}d, "
        "latitude, %{public}d, longitude %{public}d, altitude %{public}d", photoSetting.quality, photoSetting.rotation,
        photoSetting.mirror, photoSetting.location->latitude, photoSetting.location->longitude,
        photoSetting.location->altitude);

    OH_LOG_ERROR(LOG_APP, "takePicture TakePictureWithPhotoSettings ret = %{public}d.", ret);
    if (ret != CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "startPhoto failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    return ret;
}

Camera_ErrorCode NDKCamera::IsMirrorSupported(){
    OH_LOG_ERROR(LOG_APP, "IsMirrorSupported begin.");
    Camera_ErrorCode ret = OH_PhotoOutput_IsMirrorSupported(photoOutput_, &IsMirror_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_PhotoOutput_IsMirrorSupported success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_PhotoOutput_IsMirrorSupported failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::VideoOutputStop(){
    OH_LOG_ERROR(LOG_APP, "VideoOutputStop begin.");
    Camera_ErrorCode ret = OH_VideoOutput_Stop(videoOutput_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_VideoOutput_Stop success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_VideoOutput_Stop failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::VideoOutputRelease(){
    OH_LOG_ERROR(LOG_APP, "VideoOutputRelease begin.");
    Camera_ErrorCode ret = OH_VideoOutput_Release(videoOutput_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_VideoOutput_Release success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_VideoOutput_Release failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::MetadataOutputStart(){
    OH_LOG_ERROR(LOG_APP, "MetadataOutputStart begin.");
    Camera_ErrorCode ret = OH_MetadataOutput_Start(metadataOutput_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_MetadataOutput_Start success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_MetadataOutput_Start failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::MetadataOutputStop(){
    OH_LOG_ERROR(LOG_APP, "MetadataOutputStop begin.");
    Camera_ErrorCode ret = OH_MetadataOutput_Stop(metadataOutput_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_MetadataOutput_Stop success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_MetadataOutput_Stop failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::MetadataOutputRelease(){
    OH_LOG_ERROR(LOG_APP, "MetadataOutputRelease begin.");
    Camera_ErrorCode ret = OH_MetadataOutput_Release(metadataOutput_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_MetadataOutput_Release success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_MetadataOutput_Release failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionAddInput(){
    OH_LOG_ERROR(LOG_APP, "CaptureSessionAddInput begin.");
    Camera_ErrorCode ret = OH_CaptureSession_AddInput(captureSession_, cameraInput_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_AddInput success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_AddInput failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionRemoveInput(){
    OH_LOG_ERROR(LOG_APP, "CaptureSessionRemoveInput begin.");
    Camera_ErrorCode ret = OH_CaptureSession_RemoveInput(captureSession_, cameraInput_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_RemoveInput success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_RemoveInput failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionAddPreviewOutput(){
    OH_LOG_ERROR(LOG_APP, "CaptureSessionAddPreviewOutput begin.");
    Camera_ErrorCode ret = OH_CaptureSession_AddPreviewOutput(captureSession_, previewOutput_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_AddPreviewOutput success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_AddPreviewOutput failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionAddPhotoOutput(){
    OH_LOG_ERROR(LOG_APP, "CaptureSessionAddPhotoOutput begin.");
    Camera_ErrorCode ret = OH_CaptureSession_AddPhotoOutput(captureSession_, photoOutput_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_AddPhotoOutput success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_AddPhotoOutput failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionAddVideoOutput(){
    OH_LOG_ERROR(LOG_APP, "CaptureSessionAddVideoOutput begin.");
    Camera_ErrorCode ret = OH_CaptureSession_AddVideoOutput(captureSession_, videoOutput_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_AddVideoOutput success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_AddVideoOutput failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionAddMetadataOutput(){
    OH_LOG_ERROR(LOG_APP, "CaptureSessionAddMetadataOutput begin.");
    Camera_ErrorCode ret = OH_CaptureSession_AddMetadataOutput(captureSession_, metadataOutput_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_AddMetadataOutput success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_AddMetadataOutput failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionRemovePreviewOutput(){
    OH_LOG_ERROR(LOG_APP, "RemovePreviewOutput begin.");
    Camera_ErrorCode ret = OH_CaptureSession_RemovePreviewOutput(captureSession_, previewOutput_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_RemovePreviewOutput success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_RemovePreviewOutput failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionRemovePhotoOutput(){
    OH_LOG_ERROR(LOG_APP, "RemovePhotoOutput begin.");
    Camera_ErrorCode ret = OH_CaptureSession_RemovePhotoOutput(captureSession_, photoOutput_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_RemovePhotoOutput success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_RemovePhotoOutput failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionRemoveVideoOutput(){
    OH_LOG_ERROR(LOG_APP, "RemoveVideoOutput begin.");
    Camera_ErrorCode ret = OH_CaptureSession_RemoveVideoOutput(captureSession_, videoOutput_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_RemoveVideoOutput success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_RemoveVideoOutput failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionRemoveMetadataOutput(){
    OH_LOG_ERROR(LOG_APP, "RemoveMetadataOutput begin.");
    Camera_ErrorCode ret = OH_CaptureSession_RemoveMetadataOutput(captureSession_, metadataOutput_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_RemoveMetadataOutput success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_RemoveMetadataOutput failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionRelease(){
    OH_LOG_ERROR(LOG_APP, "SessionRelease begin.");
    Camera_ErrorCode ret = OH_CaptureSession_Release(captureSession_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_Release success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_Release failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionHasFlash(){
    OH_LOG_ERROR(LOG_APP, "HasFlash begin.");
    Camera_ErrorCode ret = OH_CaptureSession_HasFlash(captureSession_, &HasFlash_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_HasFlash success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_HasFlash failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionIsFlashModeSupported(uint32_t mode){
    OH_LOG_ERROR(LOG_APP, "HasFlash begin.");
    Camera_FlashMode flashMode = static_cast<Camera_FlashMode>(mode);
    Camera_ErrorCode ret = OH_CaptureSession_IsFlashModeSupported(captureSession_, flashMode, &IsFlashMode_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_HasFlash success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_HasFlash failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionGetFlashMode(){
    OH_LOG_ERROR(LOG_APP, "GetFlashMode begin.");
    Camera_ErrorCode ret = OH_CaptureSession_GetFlashMode(captureSession_, &flashMode_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_GetFlashMode success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_GetFlashMode failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionSetFlashMode(uint32_t mode){
    OH_LOG_ERROR(LOG_APP, "SetFlashMode begin.");
    Camera_FlashMode flashMode = static_cast<Camera_FlashMode>(mode);
    Camera_ErrorCode ret = OH_CaptureSession_SetFlashMode(captureSession_, flashMode);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_SetFlashMode success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_SetFlashMode failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionIsExposureModeSupported(uint32_t mode){
    OH_LOG_ERROR(LOG_APP, "SetFlashMode begin.");
    Camera_ExposureMode exposureMode = static_cast<Camera_ExposureMode>(mode);
    Camera_ErrorCode ret = OH_CaptureSession_IsExposureModeSupported(captureSession_, exposureMode, &IsExposureMode_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_SetFlashMode success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_SetFlashMode failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionGetExposureMode(){
    OH_LOG_ERROR(LOG_APP, "GetExposureMode begin.");
    Camera_ErrorCode ret = OH_CaptureSession_GetExposureMode(captureSession_, &exposureMode_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_GetExposureMode success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_GetExposureMode failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionSetExposureMode(uint32_t mode){
    OH_LOG_ERROR(LOG_APP, "SetExposureMode begin.");
    Camera_ExposureMode exposureMode = static_cast<Camera_ExposureMode>(mode);
    Camera_ErrorCode ret = OH_CaptureSession_SetExposureMode(captureSession_, exposureMode);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_SetExposureMode success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_SetExposureMode failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionGetMeteringPoint(){
    OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_GetMeteringPoint begin.");
    Camera_ErrorCode ret = OH_CaptureSession_GetMeteringPoint(captureSession_, &point_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_GetMeteringPoint success [%{public}f, %{public}f].", point_.x, point_.y);
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_GetMeteringPoint failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionSetMeteringPoint(double point_x, double point_y){
    OH_LOG_ERROR(LOG_APP, "SetMeteringPoint begin.");
    Camera_Point point;
    point.x = point_x;
    point.y = point_y;
    OH_LOG_ERROR(LOG_APP, "SetMeteringPoint begin. [%{public}f, %{public}f]", point_x, point_y);
    Camera_ErrorCode ret = OH_CaptureSession_SetMeteringPoint(captureSession_, point);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_SetMeteringPoint success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_SetMeteringPoint failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionGetExposureBiasRange(){
    OH_LOG_ERROR(LOG_APP, "GetExposureBiasRange begin.");
    Camera_ErrorCode ret = OH_CaptureSession_GetExposureBiasRange(captureSession_, &minExposureBias_, &maxExposureBias_, &step_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_GetExposureBiasRange success[%{public}f, %{public}f].", minExposureBias_, maxExposureBias_);
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_GetExposureBiasRange failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionSetExposureBias(float exposureBias){
    OH_LOG_ERROR(LOG_APP, "SetExposureBias begin.");
    Camera_ErrorCode ret = OH_CaptureSession_SetExposureBias(captureSession_, exposureBias);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_SetExposureBias success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_SetExposureBias failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionGetExposureBias(){
    OH_LOG_ERROR(LOG_APP, "GetExposureBias begin.");
    Camera_ErrorCode ret = OH_CaptureSession_GetExposureBias(captureSession_, &exposureBias_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_GetExposureBias success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_GetExposureBias failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionIsFocusModeSupported(uint32_t mode){
    OH_LOG_ERROR(LOG_APP, "isFocusModeSupported begin.");
    Camera_FocusMode focusMode = static_cast<Camera_FocusMode>(mode);
    Camera_ErrorCode ret = OH_CaptureSession_IsFocusModeSupported(captureSession_, focusMode, &isFocusSupported_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_isFocusModeSupported success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_isFocusModeSupported failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionGetFocusMode(){
    OH_LOG_ERROR(LOG_APP, "GetFocusMode begin.");
    Camera_ErrorCode ret = OH_CaptureSession_GetFocusMode(captureSession_, &focusMode_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_GetFocusMode success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_GetFocusMode failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionSetFocusMode(uint32_t mode){
    OH_LOG_ERROR(LOG_APP, "SetFocusMode begin.");
    Camera_FocusMode focusMode = static_cast<Camera_FocusMode>(mode);
    Camera_ErrorCode ret = OH_CaptureSession_SetFocusMode(captureSession_, focusMode);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_SetFocusMode success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_SetFocusMode failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionSetFocusPoint(double point_x, double point_y){
    OH_LOG_ERROR(LOG_APP, "SetFocusPoint begin.");
    Camera_Point point;
    point.x = point_x;
    point.y = point_y;
    Camera_ErrorCode ret = OH_CaptureSession_SetFocusPoint(captureSession_, point);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_SetFocusPoint success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_SetFocusPoint failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionGetFocusPoint(){
    OH_LOG_ERROR(LOG_APP, "GetFocusMode begin.");
    Camera_ErrorCode ret = OH_CaptureSession_GetFocusPoint(captureSession_, &focusPoint_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_GetFocusMode success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_GetFocusMode failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionGetZoomRatioRange(){
    OH_LOG_ERROR(LOG_APP, "GetZoomRatioRange begin.");
    Camera_ErrorCode ret = OH_CaptureSession_GetZoomRatioRange(captureSession_, &minZoom_, &maxZoom_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_GetZoomRatioRange success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_GetZoomRatioRange failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionGetZoomRatio(){
    OH_LOG_ERROR(LOG_APP, "GetZoomRatio begin.");
    Camera_ErrorCode ret = OH_CaptureSession_GetZoomRatio(captureSession_, &zoom_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_GetZoomRatio success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_GetZoomRatio failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionSetZoomRatio(float zoom){
    OH_LOG_ERROR(LOG_APP, "SetZoomRatio begin.");
    Camera_ErrorCode ret = OH_CaptureSession_SetZoomRatio(captureSession_, zoom);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_SetZoomRatio success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_SetZoomRatio failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionIsVideoStabilizationModeSupported(uint32_t mode){
    OH_LOG_ERROR(LOG_APP, "isVideoStabilizationModeSupported begin.");
    Camera_VideoStabilizationMode videoMode = static_cast<Camera_VideoStabilizationMode>(mode);
    Camera_ErrorCode ret = OH_CaptureSession_IsVideoStabilizationModeSupported(captureSession_, videoMode, &isVideoSupported_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_isVideoStabilizationModeSupported success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_isVideoStabilizationModeSupported failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionGetVideoStabilizationMode(){
    OH_LOG_ERROR(LOG_APP, "GetVideoStabilizationMode begin.");
    Camera_ErrorCode ret = OH_CaptureSession_GetVideoStabilizationMode(captureSession_, &videoMode_);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_GetVideoStabilizationMode success = %{public}d.", videoMode_);
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_GetVideoStabilizationMode failed. %{public}d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionSetVideoStabilizationMode(uint32_t mode){
    OH_LOG_ERROR(LOG_APP, "SetVideoStabilizationMode begin.");
    Camera_VideoStabilizationMode videoMode = static_cast<Camera_VideoStabilizationMode>(mode);
    Camera_ErrorCode ret = OH_CaptureSession_SetVideoStabilizationMode(captureSession_, videoMode);
    if (ret == CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_SetVideoStabilizationMode success.");
    } else {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_SetVideoStabilizationMode failed. %{public}d ", ret);
    }
    return ret;
}

// CameraManager Callback
void CameraManagerStatusCallback(Camera_Manager* cameraManager, Camera_StatusInfo* status)
{
    NDKCamera::cameraCallbackCode_ = CameraManagerStatus;
    OH_LOG_INFO(LOG_APP, "CameraManagerStatusCallback");
}

CameraManager_Callbacks* NDKCamera::GetCameraManagerListener(void)
{
    static CameraManager_Callbacks cameraManagerListener = {
        .onCameraStatus = CameraManagerStatusCallback
    };
    return &cameraManagerListener;
}

Camera_ErrorCode NDKCamera::CameraManagerRegisterCallback(void)
{
    ret_ = OH_CameraManager_RegisterCallback(cameraManager_, GetCameraManagerListener());
    if (ret_ != CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CameraManager_RegisterCallback failed.");
    }
    return ret_;
}

// CameraInput Callback
void OnCameraInputError(const Camera_Input* cameraInput, Camera_ErrorCode errorCode)
{
    NDKCamera::cameraCallbackCode_ = CameraInputStatus;
    OH_LOG_INFO(LOG_APP, "OnCameraInput errorCode = %{public}d", errorCode);
}

CameraInput_Callbacks* NDKCamera::GetCameraInputListener(void)
{
    static CameraInput_Callbacks cameraInputCallbacks = {
        .onError = OnCameraInputError
    };
    return &cameraInputCallbacks;
}

Camera_ErrorCode NDKCamera::CameraInputRegisterCallback(void)
{
    ret_ = OH_CameraInput_RegisterCallback(cameraInput_, GetCameraInputListener());
    if (ret_ != CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CameraInput_RegisterCallback failed.");
    }
    return ret_;
}

// PreviewOutput Callback
void PreviewOutputOnFrameStart(Camera_PreviewOutput *previewOutput) 
{
    NDKCamera::cameraCallbackCode_ = Preview_OnFrameStart;
    OH_LOG_INFO(LOG_APP, "PreviewOutputOnFrameStart");
}

void PreviewOutputOnFrameEnd(Camera_PreviewOutput* previewOutput, int32_t frameCount)
{
    NDKCamera::cameraCallbackCode_ = Preview_OnFrameEnd;
    OH_LOG_INFO(LOG_APP, "PreviewOutput frameCount = %{public}d", frameCount);
}

void PreviewOutputOnError(Camera_PreviewOutput* previewOutput, Camera_ErrorCode errorCode)
{
    NDKCamera::cameraCallbackCode_ = Preview_OnError;
    OH_LOG_INFO(LOG_APP, "PreviewOutput errorCode = %{public}d", errorCode);
}

PreviewOutput_Callbacks* NDKCamera::GetPreviewOutputListener(void)
{
    static PreviewOutput_Callbacks previewOutputListener = {
        .onFrameStart = PreviewOutputOnFrameStart,
        .onFrameEnd = PreviewOutputOnFrameEnd,
        .onError = PreviewOutputOnError
    };
    return &previewOutputListener;
}

Camera_ErrorCode NDKCamera::PreviewOutputRegisterCallback(void)
{
    ret_ = OH_PreviewOutput_RegisterCallback(previewOutput_, GetPreviewOutputListener());
    if (ret_ != CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_PreviewOutput_RegisterCallback failed.");
    }
    return ret_;
}

// PhotoOutput Callback
void PhotoOutputOnFrameStart(Camera_PhotoOutput* photoOutput)
{
    NDKCamera::cameraCallbackCode_ = Photo_OnFrameStart;
    OH_LOG_INFO(LOG_APP, "PhotoOutputOnFrameStart");
}

void PhotoOutputOnFrameShutter(Camera_PhotoOutput* photoOutput, Camera_FrameShutterInfo* info)
{
    NDKCamera::cameraCallbackCode_ = Photo_OnFrameShutter;
    OH_LOG_INFO(LOG_APP, "PhotoOutputOnFrameShutter");
}

void PhotoOutputOnFrameEnd(Camera_PhotoOutput* photoOutput, int32_t frameCount)
{
    NDKCamera::cameraCallbackCode_ = Photo_OnFrameEnd;
    OH_LOG_INFO(LOG_APP, "PhotoOutput frameCount = %{public}d", frameCount);
}

void PhotoOutputOnError(Camera_PhotoOutput* photoOutput, Camera_ErrorCode errorCode)
{
    NDKCamera::cameraCallbackCode_ = Photo_OnError;
    OH_LOG_INFO(LOG_APP, "PhotoOutput errorCode = %{public}d", errorCode);
}

PhotoOutput_Callbacks* NDKCamera::GetPhotoOutputListener(void)
{
    static PhotoOutput_Callbacks photoOutputListener = {
        .onFrameStart = PhotoOutputOnFrameStart,
        .onFrameShutter = PhotoOutputOnFrameShutter,
        .onFrameEnd = PhotoOutputOnFrameEnd,
        .onError = PhotoOutputOnError
    };
    return &photoOutputListener;
}

Camera_ErrorCode NDKCamera::PhotoOutputRegisterCallback(void)
{
    ret_ = OH_PhotoOutput_RegisterCallback(photoOutput_, GetPhotoOutputListener());
    if (ret_ != CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_PhotoOutput_RegisterCallback failed.");
    }
    return ret_;
}

// VideoOutput Callback
void VideoOutputOnFrameStart(Camera_VideoOutput* videoOutput)
{
    NDKCamera::cameraCallbackCode_ = Video_OnFrameStart;
    OH_LOG_INFO(LOG_APP, "VideoOutputOnFrameStart");
}

void VideoOutputOnFrameEnd(Camera_VideoOutput* videoOutput, int32_t frameCount)
{
    NDKCamera::cameraCallbackCode_ = Video_OnFrameEnd;
    OH_LOG_INFO(LOG_APP, "VideoOutput frameCount = %{public}d", frameCount);
}

void VideoOutputOnError(Camera_VideoOutput* videoOutput, Camera_ErrorCode errorCode)
{
    NDKCamera::cameraCallbackCode_ = Video_OnError;
    OH_LOG_INFO(LOG_APP, "VideoOutput errorCode = %{public}d", errorCode);
}

VideoOutput_Callbacks* NDKCamera::GetVideoOutputListener(void)
{
    static VideoOutput_Callbacks videoOutputListener = {
        .onFrameStart = VideoOutputOnFrameStart,
        .onFrameEnd = VideoOutputOnFrameEnd,
        .onError = VideoOutputOnError
    };
    return &videoOutputListener;
}

Camera_ErrorCode NDKCamera::VideoOutputRegisterCallback(void)
{
    ret_ = OH_VideoOutput_RegisterCallback(videoOutput_, GetVideoOutputListener());
    if (ret_ != CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_VideoOutput_RegisterCallback failed.");
    }
    return ret_;
}

// Metadata Callback
void OnMetadataObjectAvailable(Camera_MetadataOutput* metadataOutput,
    Camera_MetadataObject* metadataObject, uint32_t size)
{
    NDKCamera::cameraCallbackCode_ = MetadataObjectAvailable;
    OH_LOG_INFO(LOG_APP, "size = %{public}d", size);
}

void OnMetadataOutputError(Camera_MetadataOutput* metadataOutput, Camera_ErrorCode errorCode)
{
    NDKCamera::cameraCallbackCode_ = MetadataOutputError;
    OH_LOG_INFO(LOG_APP, "OnMetadataOutput errorCode = %{public}d", errorCode);
}

MetadataOutput_Callbacks* NDKCamera::GetMetadataOutputListener(void)
{
    static MetadataOutput_Callbacks metadataOutputListener = {
        .onMetadataObjectAvailable = OnMetadataObjectAvailable,
        .onError = OnMetadataOutputError
    };
    return &metadataOutputListener;
}

Camera_ErrorCode NDKCamera::MetadataOutputRegisterCallback(void)
{
    ret_ = OH_MetadataOutput_RegisterCallback(metadataOutput_, GetMetadataOutputListener());
    if (ret_ != CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_MetadataOutput_RegisterCallback failed.");
    }
    return ret_;
}

// Session Callback
void CaptureSessionOnFocusStateChange(Camera_CaptureSession* session, Camera_FocusState focusState)
{
     NDKCamera::cameraCallbackCode_ = SessionOnFocusStateChange;
    OH_LOG_INFO(LOG_APP, "CaptureSessionOnFocusStateChange");
}

void CaptureSessionOnError(Camera_CaptureSession* session, Camera_ErrorCode errorCode)
{
    NDKCamera::cameraCallbackCode_ = SessionOnError;
    OH_LOG_INFO(LOG_APP, "CaptureSession errorCode = %{public}d", errorCode);
}

CaptureSession_Callbacks* NDKCamera::GetCaptureSessionRegister(void)
{
    static CaptureSession_Callbacks captureSessionCallbacks = {
        .onFocusStateChange = CaptureSessionOnFocusStateChange,
        .onError = CaptureSessionOnError
    };
    return &captureSessionCallbacks;
}

Camera_ErrorCode NDKCamera::CaptureSessionRegisterCallback(void)
{
    ret_ = OH_CaptureSession_RegisterCallback(captureSession_, GetCaptureSessionRegister());
    if (ret_ != CAMERA_OK) {
        OH_LOG_ERROR(LOG_APP, "OH_CaptureSession_RegisterCallback failed.");
    }
    return ret_;
}