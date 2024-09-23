import cameraVideoOutputTest from './cameraVideoOutput.test'
import cameraSecureSessionTest from './cameraSecureSession.test'
import cameraPreviewOutputTest from './cameraPreviewOutput.test'
import cameraMetaDataTest from './cameraMetaData.test'
import cameraZoomTest from './cameraZoom.test'
import cameraSessionTest from './cameraSession.test'
import cameraColorTest from './cameraColor.test'
import cameraStabiliTest from './cameraStabili.test'
import cameraExposureTest from './cameraExposure.test'
import cameraFocusTest from './cameraFocus.test'
import cameraFlashTest from './cameraFlash.test'
import cameraInputTest from './cameraInput.test'
import cameraManagerTest from './cameraManager.test'
import cameraPhotoOutput from './cameraPhotoOutput.test'

import camera from '@ohos.multimedia.camera';

let cameraManger: camera.CameraManager = camera.getCameraManager(getContext());
let cameras: camera.CameraDevice[] = cameraManger.getSupportedCameras();
let TAG: string = 'CameraModuleTest';

export default function testsuite() {
  if (cameras.length > 0) {
    console.log(`${TAG} cameras.length ${cameras.length}`)
    cameraManagerTest()
    cameraInputTest()
    cameraVideoOutputTest()
    cameraFlashTest()
    cameraFocusTest()
    cameraExposureTest()
    cameraStabiliTest()
    cameraColorTest()
    cameraSessionTest()
    cameraZoomTest()
    cameraMetaDataTest()
    cameraPreviewOutputTest()
    cameraSecureSessionTest()
    cameraPhotoOutput()
  } else {
    console.log(`${TAG} not have camera ${cameras.length}`)
  }
}