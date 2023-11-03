import CameraFunctionTest from './CameraFunctionTest.tset'
import cameraJSUnitOutput from './CameraJSUnitOutput.test'
import cameraInputTest from './CameraInputTest.test'
import cameraSessionExposureTest from './CameraSessionExposureTest.test'
import CameraSessionBaseTest from './CameraSessionBaseTest.test'
import cameraSessionFlashTest from './CameraSessionFlashTest.test'
import cameraSessionFocusTest from './CameraSessionFocusTest.test'
import cameraSessionZoomRatioTest from './CameraSessionZoomRatioTest.test'
import cameraSessionVideoStabilizationTest from './CameraSessionVideoStabilizationTest.test'
import CameraErrorCodeUsecaseTest from './CameraErrorCodeUsecaseTest.test'

export default function testsuite() {
  CameraFunctionTest()
  cameraInputTest()
  cameraJSUnitOutput()
  cameraSessionExposureTest()
  CameraSessionBaseTest()
  cameraSessionFlashTest()
  cameraSessionFocusTest()
  cameraSessionZoomRatioTest()
  cameraSessionVideoStabilizationTest()
  CameraErrorCodeUsecaseTest()
}