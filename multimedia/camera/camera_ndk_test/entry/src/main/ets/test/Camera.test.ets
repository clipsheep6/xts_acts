/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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
import cameraJSUnitOutput from './CameraJSUnitOutput.test'
import CameraFunctionTest from './CameraFunctionTest.tset'
import cameraSessionFlashTest from './CameraSessionFlashTest.test'
import cameraSessionExposureTest from './CameraSessionExposureTest.test'
import cameraSessionFocusTest from './CameraSessionFocusTest.test'
import cameraSessionZoomRatioTest from './CameraSessionZoomRatioTest.test'
import cameraSessionVideoStabilizationTest from './CameraSessionVideoStabilizationTest.test'
import cameraSessionBaseTest from './CameraSessionBaseTest.test'
import cameraInputTest from './CameraInputTest.test'
import CameraErrorCodeUsecaseTest from './CameraErrorCodeUsecaseTest.test'

let TAG = 'CameraModuleTest: '

export default function cameraKit() {
  console.info(TAG + 'Entering cameraKit')
  CameraFunctionTest()
  cameraInputTest()
  cameraJSUnitOutput()
  cameraSessionFlashTest()
  cameraSessionExposureTest()
  cameraSessionFocusTest()
  cameraSessionZoomRatioTest()
  cameraSessionVideoStabilizationTest()
  cameraSessionBaseTest()
  CameraErrorCodeUsecaseTest()
}