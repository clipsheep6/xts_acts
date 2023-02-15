/**
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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

import arcJsunit from './arcJsunit.test.ets';
import arcToJsunit from './arcToJsunit.test.ets';
import beginPathJsunit from './beginPathJsunit.test.ets';
import clip2Jsunit from './clip2Jsunit.test.ets';
import clipJsunit from './clipJsunit.test.ets';
import closePathJsunit from './closePathJsunit.test.ets';
import drawImageJsunit from './drawImageJsunit.test.ets';
import ellipseJsunit from './ellipseJsunit.test.ets';
import fill2Jsunit from './fill2Jsunit.test.ets';
import fillJsunit from './fillJsunit.test.ets';
import fillRectJsunit from './fillRectJsunit.test.ets';
import fillStyleJsunit from './fillStyleJsunit.test.ets';
import getImageDataJsunit from './getImageDataJsunit.test.ets';
import getPixeMapJsunit from './getPixeMapJsunit.test.ets';
import globalAlphaJsunit from './globalAlphaJsunit.test.ets';
import lineToJsunit from './lineToJsunit.test.ets';
import lineWidthJsunit from './lineWidthJsunit.test.ets';
import moveToJsunit from './moveToJsunit.test.ets';
import putImageDataJsunit from './putImageDataJsunit.test.ets';
import rectJsunit from './rectJsunit.test.ets';
import scaleJsunit from './scaleJsunit.test.ets';
import shadowColorJsunit from './shadowColorJsunit.test.ets';
import shadowOffsetXJsunit from './shadowOffsetXJsunit.test.ets';
import shadowOffsetYJsunit from './shadowOffsetYJsunit.test.ets';
import strokeJsunit from './strokeJsunit.test.ets';
import strokeRectJsunit from './strokeRectJsunit.test.ets';
import strokeStyleJsunit from './strokeStyleJsunit.test.ets';
import shadowBlurJsunit from './shadowBlurJsunit.test.ets';
export default function testsuite() {
  arcJsunit();
  arcToJsunit();
  beginPathJsunit();
  clip2Jsunit();
  clipJsunit();
  closePathJsunit();
  drawImageJsunit();
  ellipseJsunit();
  fill2Jsunit();
  fillJsunit();
  fillRectJsunit();  
  fillStyleJsunit();
  getImageDataJsunit();
  getPixeMapJsunit();
  globalAlphaJsunit();
  lineToJsunit();
  lineWidthJsunit();
  moveToJsunit();
  putImageDataJsunit();
  rectJsunit();
  scaleJsunit();
  shadowColorJsunit();
  shadowOffsetXJsunit();
  shadowOffsetYJsunit();
  strokeJsunit();
  strokeRectJsunit();
  strokeStyleJsunit();
  shadowBlurJsunit();
}