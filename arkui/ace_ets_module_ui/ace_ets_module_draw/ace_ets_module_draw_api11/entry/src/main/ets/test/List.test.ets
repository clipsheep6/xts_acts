/**
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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
import ellipseJsunit from './EllipseTest/EllipseJsunit.test';
import CanvasAPIUnitTest from './CanvasTest/CanvasAPIUnit.test'
import CanvasAPICanvasRenderTest from './CanvasTest/CanvasAPICanvasRender.test'
import CanvasAPITest from './CanvasTest/CanvasAPI.test'
import CanvasShaderTest from './CanvasTest/CanvasShader.test'
import CanvasColorTest from './CanvasTest/CanvasColor.test'
import OffScreenCanvasTest from './OffScreenCanvasTest/OffScreenCanvas.test'
import curvesJsunit from './CanvasTest/CurvesJsunit.test';

import drawCanvas from './CanvasText/drawCanvas.test'

export default function testsuite() {
  ellipseJsunit();
  CanvasAPIUnitTest();
  CanvasAPICanvasRenderTest();
  CanvasAPITest();
  CanvasShaderTest();
  CanvasColorTest();
  OffScreenCanvasTest();
  curvesJsunit()
  drawCanvas()
}