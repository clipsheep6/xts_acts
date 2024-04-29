/*
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
import toggleOnChangeTest from './toggle/ToggleOnChangeTest.test'
import toggleEnabledTest from './toggle/ToggleEnabledTest.test'
import scrollNestedScrollTest from './scroll/ScrollNestedScrollTest.test'
import scrollHitTestBehaviorTest from './scroll/ScrollHitTestBehaviorTest.test'
import scrollOnAppearTest from './scroll/ScrollOnAppearTest.test'
import scrollOnScrollEdgeTest from './scroll/ScrollOnScrollEdgeTest.test'
import scrollOnScrollFrameBeginTest from './scroll/ScrollOnScrollFrameBeginTest.test'
import scrollOnScrollStartTest from './scroll/ScrollOnScrollStartTest.test'
import scrollOnScrollStopTest from './scroll/ScrollOnScrollStopTest.test'
import scrollOnScrollTest from './scroll/ScrollOnScrollTest.test'
import scrollScrollEdgeTest from './scroll/ScrollScrollEdgeTest.test'

export default function testsuite() {
  toggleOnChangeTest()
  toggleEnabledTest()
  scrollNestedScrollTest()
  scrollOnScrollTest()
  scrollOnScrollFrameBeginTest()
  scrollOnScrollStartTest()
  scrollOnScrollStopTest()
  scrollOnAppearTest()
  scrollOnScrollEdgeTest()
  scrollScrollEdgeTest()
  scrollHitTestBehaviorTest()
}