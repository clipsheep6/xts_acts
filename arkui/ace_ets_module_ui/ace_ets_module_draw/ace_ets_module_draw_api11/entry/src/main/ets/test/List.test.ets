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
import drawCanvas from './CanvasTest/drawCanvas.test'
import ParticlePropertyJsunit from './ParticleTest/ParticlePropertyJsunit.test.ets'
import canvasJsunit from './CanvasTest/CanvasJsunit.test';
import canvas2Jsunit from './CanvasTest/Canvas2Jsunit.test';
import shapeJsunit from './ShapeTest/ShapeJsunit.test';
import circleJsunit from './CircleTest/CircleJsunit.test';
import lineJsunit from './lineTest/LineJsunit.test';

import pathJsunit from './pathTest/PathJsunit.test';
import polygonJsunit from './polygonTest/PolygonJsunit.test';
import polylineJsunit from './polylineTest/PolylineJsunit.test';
import canvasActualBoundingBoxAscentJsunit from './CanvasTest/canvas.test';

import circleNewJsunit from './CircleTest/circle.test';
import curvesStepsJsunit from './CanvasTest/curves.test';
import ellipseNeJsunit from './EllipseTest/ellipse1.test';
import lineNeJsunit from './lineTest/line.test';
import panelBackgroundMaskJsunit from './panelTest/panel.test';
import pathNewTest from './pathTest/path.test';
import polygonNewJsunit from './polygonTest/polygon.test';
import polyLineNeJsunit from './polylineTest/polyLine.test';
import rectNeJsunit from './RectTest/rect.test';

import NavigationTest from './NavigationTest/Navigation.test';
import NavRouterTest from './NavRouterTest/NavRouter.test';
import Panel002Test from './panelTest/panel002.test';
import Path002Test from './pathTest/path002.test';
import Polygon002Test from './polygonTest/polygon002.test';
import Polyline002Test from './polylineTest/polyline002.test';
import QRCodeTest from './QRCodeTest/QRCode.test';
import Rect002Test from './RectTest/rect002.test';
import RadioTest from './RadioTest/Radio.test';
import RefreshTest from './RefreshTest/Refresh.test';
import RichEditorTest from './RichEditorTest/RichEditor.test';
import RichTextTest from './RichTextTest/RichText.test';
import SideBarContainerTest from './SideBarContainerTest/SideBarContainer.test';
import ScrollTest from './ScrollTest/Scroll.test';
import SearchTest from './SearchTest/Search.test';
import SelectTest from './SelectTest/Select.test';
import Shape002Test from './ShapeTest/Shape002.test';
import SliderTest from './SliderTest/Slider.test';
import SpanTest from './SpanTest/Span.test';
import StackTest from './StackTest/Stack.test';
import StepperTest from './StepperTest/Stepper.test';

export default function testsuite() {
  NavigationTest();
  NavRouterTest();
  Panel002Test();
  Path002Test();
  Polygon002Test();
  Polyline002Test();
  QRCodeTest();
  Rect002Test();
  RadioTest();
  RefreshTest();
  RichEditorTest();

  RichTextTest();
  ScrollTest();
  SearchTest();
  SelectTest();
  Shape002Test();
  SideBarContainerTest();
  SliderTest();
  SpanTest();
  StackTest();
  StepperTest();

  ellipseJsunit();
  CanvasAPIUnitTest();
  CanvasAPICanvasRenderTest();
  CanvasAPITest();
  CanvasShaderTest();
  CanvasColorTest();
  OffScreenCanvasTest();
  drawCanvas();
  ParticlePropertyJsunit();
  canvasJsunit();
  canvas2Jsunit();
  shapeJsunit();
  circleJsunit();
  lineJsunit();
  pathJsunit()
  polygonJsunit()
  polylineJsunit()
  canvasActualBoundingBoxAscentJsunit()
  curvesStepsJsunit()
  ellipseNeJsunit()
  lineNeJsunit()
  panelBackgroundMaskJsunit()
  pathNewTest()
  polygonNewJsunit()
  polyLineNeJsunit()
  rectNeJsunit()
  circleNewJsunit()
}