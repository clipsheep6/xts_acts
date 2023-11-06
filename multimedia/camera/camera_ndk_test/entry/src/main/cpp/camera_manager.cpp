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

#include "camera_manager_ndk.h"
#include <unistd.h>

#include <cinttypes>
#include <queue>
#include <utility>

#define LOG(fmt, ...)           \
        (void)printf(fmt, ##__VA_ARGS__);           \

NDKCamera* NDKCamera::ndkCamera_ = nullptr;
CameraCallbackCode NDKCamera::cameraCallbackCode_ = NoReceived;
std::mutex NDKCamera::mtx_;

NDKCamera::NDKCamera(char* str)
    : cameras_(nullptr), cameraOutputCapability_(nullptr),
      captureSession_(nullptr), size_(0),
      profile_(nullptr), previewOutput_(nullptr), photoOutput_(nullptr),
      metaDataObjectType_(nullptr), metadataOutput_(nullptr), cameraInput_(nullptr),
      isCameraMuted_(nullptr), previewSurfaceId_(str),
      ret_(CAMERA_OK)
{
    valid_ = false;
    Camera_ErrorCode ret = OH_Camera_GetCameraMananger(&cameraManager_);
    if (cameraManager_ == nullptr || ret != CAMERA_OK) {
        LOG("ndkXTS Get CameraManager failed.");
    }

    valid_ = true;
}


NDKCamera::~NDKCamera() {
    valid_ = false;

    Camera_ErrorCode ret = OH_CaptureSession_Release(captureSession_);
    if (ret != CAMERA_OK) {
        LOG("ndkXTS Release failed.");
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
        LOG("ndkXTS Create captureSession failed.");
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
        LOG("ndkXTS OH_CaptureSession_HasFlash failed.");
    }
    if (hasFlash){
        LOG("ndkXTS hasFlash success-----");
    } else {
        LOG("ndkXTS hasFlash fail-----");
    }

    // 检测闪光灯模式是否支持
    bool isSupported = false;
    ret = OH_CaptureSession_IsFlashModeSupported(captureSession_, flashMode, &isSupported);
    if (ret != CAMERA_OK) {
        LOG("ndkXTS OH_CaptureSession_IsFlashModeSupported failed.");
    }
    if (isSupported){
        LOG("ndkXTS isFlashModeSupported success-----");
    } else {
        LOG("ndkXTS isFlashModeSupported fail-----");
    }

    // 设置闪光灯模式
    ret = OH_CaptureSession_SetFlashMode(captureSession_, flashMode);
    if (ret == CAMERA_OK) {
        LOG("ndkXTS OH_CaptureSession_SetFlashMode success.");
    } else {
        LOG("ndkXTS OH_CaptureSession_SetFlashMode failed. %d ", ret);
    }

    // 获取当前设备的闪光灯模式
    ret = OH_CaptureSession_GetFlashMode(captureSession_, &flashMode);
    if (ret == CAMERA_OK) {
        LOG("ndkXTS OH_CaptureSession_GetFlashMode success. flashMode: %d ", flashMode);
    } else {
        LOG("ndkXTS OH_CaptureSession_GetFlashMode failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::setZoomRatioFn(uint32_t zoomRatio)
{
    float zoom = float(zoomRatio);
    // 获取支持的变焦范围
    float minZoom;
    float maxZoom;
    Camera_ErrorCode ret = OH_CaptureSession_GetZoomRatioRange(captureSession_, &minZoom, &maxZoom);
    if (captureSession_ == nullptr || ret != CAMERA_OK) {
        LOG("ndkXTS OH_CaptureSession_GetZoomRatioRange failed.");
    } else {
        LOG("ndkXTS OH_CaptureSession_GetZoomRatioRange success. minZoom: %f, maxZoom: %f", minZoom, maxZoom);
    }

    // 设置变焦
    ret = OH_CaptureSession_SetZoomRatio(captureSession_, zoom);
    if (ret == CAMERA_OK) {
        LOG("ndkXTS OH_CaptureSession_SetZoomRatio success.");
    } else {
        LOG("ndkXTS OH_CaptureSession_SetZoomRatio failed. %d ", ret);
    }

    // 获取当前设备的变焦值
    ret = OH_CaptureSession_GetZoomRatio(captureSession_, &zoom);
    if (ret == CAMERA_OK) {
        LOG("ndkXTS OH_CaptureSession_GetZoomRatio success. zoom：%f ", zoom);
    } else {
        LOG("ndkXTS OH_CaptureSession_GetZoomRatio failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionBegin(){
    Camera_ErrorCode ret =  OH_CaptureSession_BeginConfig(captureSession_);
    if (ret == CAMERA_OK) {
        LOG("ndkXTS OH_CaptureSession_BeginConfig success.");
    } else {
        LOG("ndkXTS OH_CaptureSession_BeginConfig failed. %d and captureSession_ addr = %p", ret, captureSession_);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionCommitConfig(){
    Camera_ErrorCode ret =  OH_CaptureSession_CommitConfig(captureSession_);
    if (ret == CAMERA_OK) {
        LOG("ndkXTS OH_CaptureSession_CommitConfig success.");
    } else {
        LOG("ndkXTS OH_CaptureSession_CommitConfig failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionStart(){
    Camera_ErrorCode ret =  OH_CaptureSession_Start(captureSession_);
    if (ret == CAMERA_OK) {
        LOG("ndkXTS OH_CaptureSession_Start success.");
    } else {
        LOG("ndkXTS OH_CaptureSession_Start failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionStop(){
    Camera_ErrorCode ret =  OH_CaptureSession_Stop(captureSession_);
    if (ret == CAMERA_OK) {
        LOG("ndkXTS OH_CaptureSession_Stop success.");
    } else {
        LOG("ndkXTS OH_CaptureSession_Stop failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::CreateCameraInput(void) {
    LOG("ndkXTS CreateCameraInput start.");
    if (cameraManager_ == nullptr) {
        LOG("ndkXTS cameraManager_ is NULL.");
    } else if (cameras_ == nullptr) {
        LOG("ndkXTS cameras_ is NULL.");
    }
    ret_ = OH_CameraManager_CreateCameraInput(cameraManager_, cameras_, &cameraInput_);
    if (cameraInput_ == nullptr || ret_ != CAMERA_OK) {
        LOG("ndkXTS CreateCameraInput failed = %d. cameraInput_ = %p", ret_, cameraInput_);
        return CAMERA_INVALID_ARGUMENT;
    }
    LOG("ndkXTS CreateCameraInput end.");
    return ret_;
}

Camera_ErrorCode NDKCamera::CameraInputOpen(void) {
    ret_ = OH_CameraInput_Open(cameraInput_);
    if (ret_ != CAMERA_OK) {
        LOG("ndkXTS CameraInput_Open failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    return ret_;
}

Camera_ErrorCode NDKCamera::CameraInputClose(void) {
    ret_ = OH_CameraInput_Close(cameraInput_);
    if (ret_ != CAMERA_OK) {
        LOG("ndkXTS CameraInput_Close failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    return ret_;
}

Camera_ErrorCode NDKCamera::CameraInputRelease(void) {
    ret_ = OH_CameraInput_Release(cameraInput_);
    if (ret_ != CAMERA_OK) {
      LOG("ndkXTS CameraInput_Release failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    return ret_;
}

Camera_ErrorCode NDKCamera::GetSupportedCameras(void) {

    ret_ = OH_CameraManager_GetSupportedCameras(cameraManager_, &cameras_, &size_);
    if (cameras_ == nullptr || ret_ != CAMERA_OK) {
        return CAMERA_INVALID_ARGUMENT;
    }
    return ret_;
}

Camera_ErrorCode NDKCamera::GetSupportedOutputCapability(void) {
    if (cameraManager_ == nullptr) {
        LOG("ndkXTS cameraManager_ is null.");
    } else if (cameras_ == nullptr) {
        LOG("ndkXTS cameras_ is null.");
    }
    ret_ = OH_CameraManager_GetSupportedCameraOutputCapability(cameraManager_, cameras_, &cameraOutputCapability_);
    if (cameraOutputCapability_ == nullptr || ret_ != CAMERA_OK) {
        LOG("ndkXTS GetSupportedCameraOutputCapability failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    return ret_;
}

Camera_ErrorCode NDKCamera::CreatePreviewOutput(void) {
    profile_ = cameraOutputCapability_->previewProfiles[0];
    if (profile_ == nullptr) {
        LOG("ndkXTS Get previewProfiles failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    ret_ = OH_CameraManager_CreatePreviewOutput(cameraManager_, profile_, previewSurfaceId_, &previewOutput_);
    if (previewSurfaceId_ == nullptr || previewOutput_ == nullptr || ret_ != CAMERA_OK) {
        LOG("ndkXTS CreatePreviewOutput failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    return ret_;
}

Camera_ErrorCode NDKCamera::CreatePhotoOutput(char* photoSurfaceId)
{
    profile_ = cameraOutputCapability_->photoProfiles[0];
    if (profile_ == nullptr) {
        LOG("ndkXTS Get photoProfiles failed.");
        return CAMERA_INVALID_ARGUMENT;
    }

    if (photoSurfaceId == nullptr) {
        LOG("ndkXTS CreatePhotoOutput failed.");
        return CAMERA_INVALID_ARGUMENT;
    }

    ret_ = OH_CameraManager_CreatePhotoOutput(cameraManager_, profile_, photoSurfaceId, &photoOutput_);
    PhotoOutputRegisterCallback();

    return ret_;
}

Camera_ErrorCode NDKCamera::CreateVideoOutput(char* videoId) {
    videoProfile_ = cameraOutputCapability_->videoProfiles[0];

    if (videoProfile_ == nullptr) {
        LOG("ndkXTS Get videoProfiles failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    ret_ = OH_CameraManager_CreateVideoOutput(cameraManager_, videoProfile_, videoId, &videoOutput_);
    if (videoId == nullptr || videoOutput_ == nullptr || ret_ != CAMERA_OK) {
        LOG("ndkXTS CreateVideoOutput failed.");
        return CAMERA_INVALID_ARGUMENT;
    }

    return ret_;
}

Camera_ErrorCode NDKCamera::AddVideoOutput(){
    Camera_ErrorCode ret = OH_CaptureSession_AddVideoOutput(captureSession_, videoOutput_);
    if (ret == CAMERA_OK) {
        LOG("ndkXTS OH_CaptureSession_AddVideoOutput success.");
    } else {
        LOG("ndkXTS OH_CaptureSession_AddVideoOutput failed. %d ", ret);
    }
    return ret;
}
Camera_ErrorCode NDKCamera::CreateMetadataOutput(void) {
//    uint32_t metaSize = cameraOutputCapability_->metadataProfilesSize;
    metaDataObjectType_ = cameraOutputCapability_->supportedMetadataObjectTypes[2];
    if (metaDataObjectType_ == nullptr) {
        LOG("ndkXTS Get metaDataObjectType failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    ret_ = OH_CameraManager_CreateMetadataOutput(cameraManager_, metaDataObjectType_, &metadataOutput_);
    if (metadataOutput_ == nullptr || ret_ != CAMERA_OK) {
        LOG("ndkXTS CreateMetadataOutput failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    return ret_;
}

Camera_ErrorCode NDKCamera::IsCameraMuted(void) {
    ret_ = OH_CameraManager_IsCameraMuted(cameraManager_, isCameraMuted_);
    if (isCameraMuted_ == nullptr || ret_ != CAMERA_OK) {
        LOG("ndkXTS IsCameraMuted failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    return ret_;
}

Camera_ErrorCode NDKCamera::PreviewOutputStop(void) {
    ret_ = OH_PreviewOutput_Stop(previewOutput_);
    if (ret_ != CAMERA_OK) {
        LOG("ndkXTS PreviewOutputStop failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    return ret_;
}

Camera_ErrorCode NDKCamera::PreviewOutputRelease(void) {
    ret_ = OH_PreviewOutput_Release(previewOutput_);
    if (ret_ != CAMERA_OK) {
        LOG("ndkXTS PreviewOutputRelease failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    return ret_;
}

Camera_ErrorCode NDKCamera::PhotoOutputRelease(void) {
    ret_ = OH_PhotoOutput_Release(photoOutput_);
    if (ret_ != CAMERA_OK) {
        LOG("ndkXTS PhotoOutputRelease failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    return ret_;
}

Camera_ErrorCode NDKCamera::startVideo(char* videoId){
    LOG("ndkXTS startVideo begin.");

    Camera_ErrorCode ret = SessionStop();

    if (ret == CAMERA_OK) {
        LOG("ndkXTS SessionStop success.");
    } else {
        LOG("ndkXTS SessionStop failed. %d ", ret);
    }
    ret = SessionBegin();
    if (ret == CAMERA_OK) {
        LOG("ndkXTS SessionBegin success.");
    } else {
        LOG("ndkXTS SessionBegin failed. %d ", ret);
    }
    CreateVideoOutput(videoId);
    AddVideoOutput();
    SessionCommitConfig();
    SessionStart();
    return ret;
}

Camera_ErrorCode NDKCamera::VideoOutputStart(){
    LOG("ndkXTS VideoOutputStart begin.");
    Camera_ErrorCode ret = OH_VideoOutput_Start(videoOutput_);
    if (ret == CAMERA_OK) {
        LOG("ndkXTS OH_VideoOutput_Start success.");
    } else {
        LOG("ndkXTS OH_VideoOutput_Start failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::PreviewOutputStart(){
    LOG("ndkXTS PreviewOutputStart begin.");
    Camera_ErrorCode ret = OH_PreviewOutput_Start(previewOutput_);
    if (ret == CAMERA_OK) {
        LOG("ndkXTS OH_PreviewOutput_Start success.");
    } else {
        LOG("ndkXTS OH_PreviewOutput_Start failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::PhotoOutputCapture(){
    LOG("ndkXTS Capture begin.");
    Camera_ErrorCode ret = OH_PhotoOutput_Capture(photoOutput_);
    if (ret == CAMERA_OK) {
        LOG("ndkXTS OH_PhotoOutput_Capture success.");
    } else {
        LOG("ndkXTS OH_PhotoOutput_Capture failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::TakePictureWithPhotoSettings(Camera_PhotoCaptureSetting photoSetting)
{
    Camera_ErrorCode ret = CAMERA_OK;
    ret = OH_PhotoOutput_Capture_WithCaptureSetting(photoOutput_, photoSetting);

    LOG("ndkXTS takePicture TakePictureWithPhotoSettings ret = %d.", ret);
    if (ret != CAMERA_OK) {
        LOG("ndkXTS startPhoto failed.");
        return CAMERA_INVALID_ARGUMENT;
    }
    return ret;
}

Camera_ErrorCode NDKCamera::IsMirrorSupported(){
    LOG("ndkXTS IsMirrorSupported begin.");
    Camera_ErrorCode ret = OH_PhotoOutput_IsMirrorSupported(photoOutput_, &IsMirror_);
    if (ret == CAMERA_OK) {
        LOG("ndkXTS OH_PhotoOutput_IsMirrorSupported success.");
    } else {
        LOG("ndkXTS OH_PhotoOutput_IsMirrorSupported failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::VideoOutputStop(){
    LOG("ndkXTS VideoOutputStop begin.");
    Camera_ErrorCode ret = OH_VideoOutput_Stop(videoOutput_);
    if (ret == CAMERA_OK) {
        LOG("ndkXTS OH_VideoOutput_Stop success.");
    } else {
        LOG("ndkXTS OH_VideoOutput_Stop failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::VideoOutputRelease(){
    LOG("ndkXTS VideoOutputRelease begin.");
    Camera_ErrorCode ret = OH_VideoOutput_Release(videoOutput_);
    if (ret == CAMERA_OK) {
        LOG("ndkXTS OH_VideoOutput_Release success.");
    } else {
        LOG("ndkXTS OH_VideoOutput_Release failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::MetadataOutputStart(){
    LOG("ndkXTS MetadataOutputStart begin.");
    Camera_ErrorCode ret = OH_MetadataOutput_Start(metadataOutput_);
    if (ret == CAMERA_OK) {
        LOG("ndkXTS OH_MetadataOutput_Start success.");
    } else {
        LOG("ndkXTS OH_MetadataOutput_Start failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::MetadataOutputStop(){
    LOG("ndkXTS MetadataOutputStop begin.");
    Camera_ErrorCode ret = OH_MetadataOutput_Stop(metadataOutput_);
    if (ret == CAMERA_OK) {
        LOG("ndkXTS OH_MetadataOutput_Stop success.");
    } else {
        LOG("ndkXTS OH_MetadataOutput_Stop failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::MetadataOutputRelease(){
    LOG("ndkXTS MetadataOutputRelease begin.");
    Camera_ErrorCode ret = OH_MetadataOutput_Release(metadataOutput_);
    if (ret == CAMERA_OK) {
        LOG("ndkXTS OH_MetadataOutput_Release success.");
    } else {
        LOG("ndkXTS OH_MetadataOutput_Release failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionAddInput(){
    LOG("ndkXTS CaptureSessionAddInput begin.");
    Camera_ErrorCode ret = OH_CaptureSession_AddInput(captureSession_, cameraInput_);
    if (ret == CAMERA_OK) {
        LOG("ndkXTS OH_CaptureSession_AddInput success.");
    } else {
        LOG("ndkXTS OH_CaptureSession_AddInput failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionRemoveInput(){
    LOG("ndkXTS CaptureSessionRemoveInput begin.");
    Camera_ErrorCode ret = OH_CaptureSession_RemoveInput(captureSession_, cameraInput_);
    if (ret == CAMERA_OK) {
        LOG("ndkXTS OH_CaptureSession_RemoveInput success.");
    } else {
        LOG("ndkXTS OH_CaptureSession_RemoveInput failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionAddPreviewOutput(){
    LOG("ndkXTS CaptureSessionAddPreviewOutput begin.");
    Camera_ErrorCode ret = OH_CaptureSession_AddPreviewOutput(captureSession_, previewOutput_);
    if (ret == CAMERA_OK) {
        LOG("ndkXTS OH_CaptureSession_AddPreviewOutput success.");
    } else {
        LOG("ndkXTS OH_CaptureSession_AddPreviewOutput failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionAddPhotoOutput(){
    LOG("ndkXTS CaptureSessionAddPhotoOutput begin.");
    Camera_ErrorCode ret = OH_CaptureSession_AddPhotoOutput(captureSession_, photoOutput_);
    if (ret == CAMERA_OK) {
        LOG("ndkXTS OH_CaptureSession_AddPhotoOutput success.");
    } else {
        LOG("ndkXTS OH_CaptureSession_AddPhotoOutput failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionAddVideoOutput(){
    LOG("ndkXTS CaptureSessionAddVideoOutput begin.");
    Camera_ErrorCode ret = OH_CaptureSession_AddVideoOutput(captureSession_, videoOutput_);
    if (ret == CAMERA_OK) {
        LOG("ndkXTS OH_CaptureSession_AddVideoOutput success.");
    } else {
        LOG("ndkXTS OH_CaptureSession_AddVideoOutput failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionAddMetadataOutput(){
    LOG("ndkXTS CaptureSessionAddMetadataOutput begin.");
    Camera_ErrorCode ret = OH_CaptureSession_AddMetadataOutput(captureSession_, metadataOutput_);
    if (ret == CAMERA_OK) {
        LOG("ndkXTS OH_CaptureSession_AddMetadataOutput success.");
    } else {
        LOG("ndkXTS OH_CaptureSession_AddMetadataOutput failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionRemovePreviewOutput(){
    LOG("RemovePreviewOutput begin.");
    Camera_ErrorCode ret = OH_CaptureSession_RemovePreviewOutput(captureSession_, previewOutput_);
    if (ret == CAMERA_OK) {
        LOG("OH_CaptureSession_RemovePreviewOutput success.");
    } else {
        LOG("OH_CaptureSession_RemovePreviewOutput failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionRemovePhotoOutput(){
    LOG("RemovePhotoOutput begin.");
    Camera_ErrorCode ret = OH_CaptureSession_RemovePhotoOutput(captureSession_, photoOutput_);
    if (ret == CAMERA_OK) {
        LOG("OH_CaptureSession_RemovePhotoOutput success.");
    } else {
        LOG("OH_CaptureSession_RemovePhotoOutput failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionRemoveVideoOutput(){
    LOG("RemoveVideoOutput begin.");
    Camera_ErrorCode ret = OH_CaptureSession_RemoveVideoOutput(captureSession_, videoOutput_);
    if (ret == CAMERA_OK) {
        LOG("OH_CaptureSession_RemoveVideoOutput success.");
    } else {
        LOG("OH_CaptureSession_RemoveVideoOutput failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionRemoveMetadataOutput(){
    LOG("RemoveMetadataOutput begin.");
    Camera_ErrorCode ret = OH_CaptureSession_RemoveMetadataOutput(captureSession_, metadataOutput_);
    if (ret == CAMERA_OK) {
        LOG("OH_CaptureSession_RemoveMetadataOutput success.");
    } else {
        LOG("OH_CaptureSession_RemoveMetadataOutput failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionRelease(){
    LOG("SessionRelease begin.");
    Camera_ErrorCode ret = OH_CaptureSession_Release(captureSession_);
    if (ret == CAMERA_OK) {
        LOG("OH_CaptureSession_Release success.");
    } else {
        LOG("OH_CaptureSession_Release failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionHasFlash(){
    LOG("HasFlash begin.");
    Camera_ErrorCode ret = OH_CaptureSession_HasFlash(captureSession_, &HasFlash_);
    if (ret == CAMERA_OK) {
        LOG("OH_CaptureSession_HasFlash success.");
    } else {
        LOG("OH_CaptureSession_HasFlash failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionIsFlashModeSupported(uint32_t mode){
    LOG("HasFlash begin.");
    Camera_FlashMode flashMode = static_cast<Camera_FlashMode>(mode);
    Camera_ErrorCode ret = OH_CaptureSession_IsFlashModeSupported(captureSession_, flashMode, &IsFlashMode_);
    if (ret == CAMERA_OK) {
        LOG("OH_CaptureSession_HasFlash success.");
    } else {
        LOG("OH_CaptureSession_HasFlash failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionGetFlashMode(){
    LOG("GetFlashMode begin.");
    Camera_ErrorCode ret = OH_CaptureSession_GetFlashMode(captureSession_, &flashMode_);
    if (ret == CAMERA_OK) {
        LOG("OH_CaptureSession_GetFlashMode success.");
    } else {
        LOG("OH_CaptureSession_GetFlashMode failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionSetFlashMode(uint32_t mode){
    LOG("SetFlashMode begin.");
    Camera_FlashMode flashMode = static_cast<Camera_FlashMode>(mode);
    Camera_ErrorCode ret = OH_CaptureSession_SetFlashMode(captureSession_, flashMode);
    if (ret == CAMERA_OK) {
        LOG("OH_CaptureSession_SetFlashMode success.");
    } else {
        LOG("OH_CaptureSession_SetFlashMode failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionIsExposureModeSupported(uint32_t mode){
    LOG("SetFlashMode begin.");
    Camera_ExposureMode exposureMode = static_cast<Camera_ExposureMode>(mode);
    Camera_ErrorCode ret = OH_CaptureSession_IsExposureModeSupported(captureSession_, exposureMode, &IsExposureMode_);
    if (ret == CAMERA_OK) {
        LOG("OH_CaptureSession_SetFlashMode success.");
    } else {
        LOG("OH_CaptureSession_SetFlashMode failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionGetExposureMode(){
    LOG("GetExposureMode begin.");
    Camera_ErrorCode ret = OH_CaptureSession_GetExposureMode(captureSession_, &exposureMode_);
    if (ret == CAMERA_OK) {
        LOG("OH_CaptureSession_GetExposureMode success.");
    } else {
        LOG("OH_CaptureSession_GetExposureMode failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionSetExposureMode(uint32_t mode){
    LOG("SetExposureMode begin.");
    Camera_ExposureMode exposureMode = static_cast<Camera_ExposureMode>(mode);
    Camera_ErrorCode ret = OH_CaptureSession_SetExposureMode(captureSession_, exposureMode);
    if (ret == CAMERA_OK) {
        LOG("OH_CaptureSession_SetExposureMode success.");
    } else {
        LOG("OH_CaptureSession_SetExposureMode failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionGetMeteringPoint(){
    LOG("OH_CaptureSession_GetMeteringPoint begin.");
    Camera_ErrorCode ret = OH_CaptureSession_GetMeteringPoint(captureSession_, &point_);
    if (ret == CAMERA_OK) {
        LOG("OH_CaptureSession_GetMeteringPoint success [%f, %f].", point_.x, point_.y);
    } else {
        LOG("OH_CaptureSession_GetMeteringPoint failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionSetMeteringPoint(double point_x, double point_y){
    LOG("SetMeteringPoint begin.");
    Camera_Point point;
    point.x = point_x;
    point.y = point_y;
    LOG("SetMeteringPoint begin. [%f, %f]", point_x, point_y);
    Camera_ErrorCode ret = OH_CaptureSession_SetMeteringPoint(captureSession_, point);
    if (ret == CAMERA_OK) {
        LOG("OH_CaptureSession_SetMeteringPoint success.");
    } else {
        LOG("OH_CaptureSession_SetMeteringPoint failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionGetExposureBiasRange(){
    LOG("GetExposureBiasRange begin.");
    Camera_ErrorCode ret = OH_CaptureSession_GetExposureBiasRange(captureSession_, &minExposureBias_, &maxExposureBias_, &step_);
    if (ret == CAMERA_OK) {
        LOG("OH_CaptureSession_GetExposureBiasRange success[%f, %f].", minExposureBias_, maxExposureBias_);
    } else {
        LOG("OH_CaptureSession_GetExposureBiasRange failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionSetExposureBias(float exposureBias){
    LOG("SetExposureBias begin.");
    Camera_ErrorCode ret = OH_CaptureSession_SetExposureBias(captureSession_, exposureBias);
    if (ret == CAMERA_OK) {
        LOG("OH_CaptureSession_SetExposureBias success.");
    } else {
        LOG("OH_CaptureSession_SetExposureBias failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionGetExposureBias(){
    LOG("GetExposureBias begin.");
    Camera_ErrorCode ret = OH_CaptureSession_GetExposureBias(captureSession_, &exposureBias_);
    if (ret == CAMERA_OK) {
        LOG("OH_CaptureSession_GetExposureBias success.");
    } else {
        LOG("OH_CaptureSession_GetExposureBias failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionIsFocusModeSupported(uint32_t mode){
    LOG("isFocusModeSupported begin.");
    Camera_FocusMode focusMode = static_cast<Camera_FocusMode>(mode);
    Camera_ErrorCode ret = OH_CaptureSession_IsFocusModeSupported(captureSession_, focusMode, &isFocusSupported_);
    if (ret == CAMERA_OK) {
        LOG("OH_CaptureSession_isFocusModeSupported success.");
    } else {
        LOG("OH_CaptureSession_isFocusModeSupported failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionGetFocusMode(){
    LOG("GetFocusMode begin.");
    Camera_ErrorCode ret = OH_CaptureSession_GetFocusMode(captureSession_, &focusMode_);
    if (ret == CAMERA_OK) {
        LOG("OH_CaptureSession_GetFocusMode success.");
    } else {
        LOG("OH_CaptureSession_GetFocusMode failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionSetFocusMode(uint32_t mode){
    LOG("SetFocusMode begin.");
    Camera_FocusMode focusMode = static_cast<Camera_FocusMode>(mode);
    Camera_ErrorCode ret = OH_CaptureSession_SetFocusMode(captureSession_, focusMode);
    if (ret == CAMERA_OK) {
        LOG("OH_CaptureSession_SetFocusMode success.");
    } else {
        LOG("OH_CaptureSession_SetFocusMode failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionSetFocusPoint(double point_x, double point_y){
    LOG("SetFocusPoint begin.");
    Camera_Point point;
    point.x = point_x;
    point.y = point_y;
    Camera_ErrorCode ret = OH_CaptureSession_SetFocusPoint(captureSession_, point);
    if (ret == CAMERA_OK) {
        LOG("OH_CaptureSession_SetFocusPoint success.");
    } else {
        LOG("OH_CaptureSession_SetFocusPoint failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionGetFocusPoint(){
    LOG("GetFocusMode begin.");
    Camera_ErrorCode ret = OH_CaptureSession_GetFocusPoint(captureSession_, &focusPoint_);
    if (ret == CAMERA_OK) {
        LOG("OH_CaptureSession_GetFocusMode success.");
    } else {
        LOG("OH_CaptureSession_GetFocusMode failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionGetZoomRatioRange(){
    LOG("GetZoomRatioRange begin.");
    Camera_ErrorCode ret = OH_CaptureSession_GetZoomRatioRange(captureSession_, &minZoom_, &maxZoom_);
    if (ret == CAMERA_OK) {
        LOG("OH_CaptureSession_GetZoomRatioRange success.");
    } else {
        LOG("OH_CaptureSession_GetZoomRatioRange failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionGetZoomRatio(){
    LOG("GetZoomRatio begin.");
    Camera_ErrorCode ret = OH_CaptureSession_GetZoomRatio(captureSession_, &zoom_);
    if (ret == CAMERA_OK) {
        LOG("OH_CaptureSession_GetZoomRatio success.");
    } else {
        LOG("OH_CaptureSession_GetZoomRatio failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionSetZoomRatio(float zoom){
    LOG("SetZoomRatio begin.");
    Camera_ErrorCode ret = OH_CaptureSession_SetZoomRatio(captureSession_, zoom);
    if (ret == CAMERA_OK) {
        LOG("OH_CaptureSession_SetZoomRatio success.");
    } else {
        LOG("OH_CaptureSession_SetZoomRatio failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionIsVideoStabilizationModeSupported(uint32_t mode){
    LOG("isVideoStabilizationModeSupported begin.");
    Camera_VideoStabilizationMode videoMode = static_cast<Camera_VideoStabilizationMode>(mode);
    Camera_ErrorCode ret = OH_CaptureSession_IsVideoStabilizationModeSupported(captureSession_, videoMode, &isVideoSupported_);
    if (ret == CAMERA_OK) {
        LOG("OH_CaptureSession_isVideoStabilizationModeSupported success.");
    } else {
        LOG("OH_CaptureSession_isVideoStabilizationModeSupported failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionGetVideoStabilizationMode(){
    LOG("GetVideoStabilizationMode begin.");
    Camera_ErrorCode ret = OH_CaptureSession_GetVideoStabilizationMode(captureSession_, &videoMode_);
    if (ret == CAMERA_OK) {
        LOG("OH_CaptureSession_GetVideoStabilizationMode success = %d.", videoMode_);
    } else {
        LOG("OH_CaptureSession_GetVideoStabilizationMode failed. %d ", ret);
    }
    return ret;
}

Camera_ErrorCode NDKCamera::SessionSetVideoStabilizationMode(uint32_t mode){
    LOG("SetVideoStabilizationMode begin.");
    Camera_VideoStabilizationMode videoMode = static_cast<Camera_VideoStabilizationMode>(mode);
    Camera_ErrorCode ret = OH_CaptureSession_SetVideoStabilizationMode(captureSession_, videoMode);
    if (ret == CAMERA_OK) {
        LOG("OH_CaptureSession_SetVideoStabilizationMode success.");
    } else {
        LOG("OH_CaptureSession_SetVideoStabilizationMode failed. %d ", ret);
    }
    return ret;
}

// CameraManager Callback
void CameraManagerStatusCallback(Camera_Manager* cameraManager, Camera_StatusInfo* status)
{
    NDKCamera::cameraCallbackCode_ = CameraManagerStatus;
    LOG("CameraManagerStatusCallback");
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
        LOG("OH_CameraManager_RegisterCallback failed.");
    }
    return ret_;
}

// CameraInput Callback
void OnCameraInputError(const Camera_Input* cameraInput, Camera_ErrorCode errorCode)
{
    NDKCamera::cameraCallbackCode_ = CameraInputStatus;
    LOG("OnCameraInput errorCode = %d", errorCode);
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
        LOG("OH_CameraInput_RegisterCallback failed.");
    }
    return ret_;
}

// PreviewOutput Callback
void PreviewOutputOnFrameStart(Camera_PreviewOutput *previewOutput)
{
    NDKCamera::cameraCallbackCode_ = Preview_OnFrameStart;
    LOG("PreviewOutputOnFrameStart");
}

void PreviewOutputOnFrameEnd(Camera_PreviewOutput* previewOutput, int32_t frameCount)
{
    NDKCamera::cameraCallbackCode_ = Preview_OnFrameEnd;
    LOG("PreviewOutput frameCount = %d", frameCount);
}

void PreviewOutputOnError(Camera_PreviewOutput* previewOutput, Camera_ErrorCode errorCode)
{
    NDKCamera::cameraCallbackCode_ = Preview_OnError;
    LOG("PreviewOutput errorCode = %d", errorCode);
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
        LOG("OH_PreviewOutput_RegisterCallback failed.");
    }
    return ret_;
}

// PhotoOutput Callback
void PhotoOutputOnFrameStart(Camera_PhotoOutput* photoOutput)
{
    NDKCamera::cameraCallbackCode_ = Photo_OnFrameStart;
    LOG("PhotoOutputOnFrameStart");
}

void PhotoOutputOnFrameShutter(Camera_PhotoOutput* photoOutput, Camera_FrameShutterInfo* info)
{
    NDKCamera::cameraCallbackCode_ = Photo_OnFrameShutter;
    LOG("PhotoOutputOnFrameShutter");
}

void PhotoOutputOnFrameEnd(Camera_PhotoOutput* photoOutput, int32_t frameCount)
{
    NDKCamera::cameraCallbackCode_ = Photo_OnFrameEnd;
    LOG("PhotoOutput frameCount = %d", frameCount);
}

void PhotoOutputOnError(Camera_PhotoOutput* photoOutput, Camera_ErrorCode errorCode)
{
    NDKCamera::cameraCallbackCode_ = Photo_OnError;
    LOG("PhotoOutput errorCode = %d", errorCode);
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
        LOG("OH_PhotoOutput_RegisterCallback failed.");
    }
    return ret_;
}

// VideoOutput Callback
void VideoOutputOnFrameStart(Camera_VideoOutput* videoOutput)
{
    NDKCamera::cameraCallbackCode_ = Video_OnFrameStart;
    LOG("VideoOutputOnFrameStart");
}

void VideoOutputOnFrameEnd(Camera_VideoOutput* videoOutput, int32_t frameCount)
{
    NDKCamera::cameraCallbackCode_ = Video_OnFrameEnd;
    LOG("VideoOutput frameCount = %d", frameCount);
}

void VideoOutputOnError(Camera_VideoOutput* videoOutput, Camera_ErrorCode errorCode)
{
    NDKCamera::cameraCallbackCode_ = Video_OnError;
    LOG("VideoOutput errorCode = %d", errorCode);
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
        LOG("OH_VideoOutput_RegisterCallback failed.");
    }
    return ret_;
}

// Metadata Callback
void OnMetadataObjectAvailable(Camera_MetadataOutput* metadataOutput,
    Camera_MetadataObject* metadataObject, uint32_t size)
{
    NDKCamera::cameraCallbackCode_ = MetadataObjectAvailable;
    LOG("size = %d", size);
}

void OnMetadataOutputError(Camera_MetadataOutput* metadataOutput, Camera_ErrorCode errorCode)
{
    NDKCamera::cameraCallbackCode_ = MetadataOutputError;
    LOG("OnMetadataOutput errorCode = %d", errorCode);
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
        LOG("OH_MetadataOutput_RegisterCallback failed.");
    }
    return ret_;
}

// Session Callback
void CaptureSessionOnFocusStateChange(Camera_CaptureSession* session, Camera_FocusState focusState)
{
     NDKCamera::cameraCallbackCode_ = SessionOnFocusStateChange;
    LOG("CaptureSessionOnFocusStateChange");
}

void CaptureSessionOnError(Camera_CaptureSession* session, Camera_ErrorCode errorCode)
{
    NDKCamera::cameraCallbackCode_ = SessionOnError;
    LOG("CaptureSession errorCode = %d", errorCode);
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
        LOG("OH_CaptureSession_RegisterCallback failed.");
    }
    return ret_;
}