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
import commonAttrsAlignTest from './commonattrs/CommonAttrsAlignTest.test'
import commonEventOnClickTest from './commonevent/CommonEventOnClickTest.test'
import commonEventOnFocusTest from './commonevent/CommonEventOnFocusTest.test'
import commonEventOnBlurTest from './commonevent/CommonEventOnBlurTest.test'
import commonEventOnAppearTest from './commonevent/CommonEventOnAppearTest.test'
import commonEventOnAreaChangeTest from './commonevent/CommonEventOnAreaChangeTest.test'
import commonEventOnTouchTest from './commonevent/CommonEventOnTouchTest.test'
import commonAttrsEnabledTest from './commonattrs/CommonAttrsEnabledTest.test'
import commonAttrsFocusableTest from './commonattrs/CommonAttrsFocusableTest.test'
import commonAttrsHitTestBehaviorTest from './commonattrs/CommonAttrsHitTestBehaviorTest.test'
import commonAttrsIdTest from './commonattrs/CommonAttrsIdTest.test'
import imageHitTestBehaviorTest from './image/ImageHitTestBehaviorTest.test'
import imageIdTest from './image/ImageIdTest.test'
import imageOnCompleteTest from './image/ImageOnCompleteTest.test'
import imageOnErrorTest from './image/ImageOnErrorTest.test'
import listHitTestBehaviorTest from './list/ListHitTestBehaviorTest.test'
import listItemHitTestBehaviorTest from './listitem/ListItemHitTestBehaviorTest.test'
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
import stackHitTestBehaviorTest from './stack/StackHitTestBehaviorTest.test'
import stackOnAreaChangeTest from './stack/StackOnAreaChangeTest.test'
import stackOnTouchTest from './stack/StackOnTouchTest.test'
import textEnabledTest from './text/TextEnabledTest.test'
import commonAttrsDirectionTest from './commonattrs/CommonAttrsDirectionTest.test'

export default function testsuite() {
  commonAttrsAlignTest()
  commonAttrsDirectionTest()
  commonAttrsEnabledTest()
  commonAttrsFocusableTest()
  commonEventOnAppearTest()
  commonEventOnAreaChangeTest()
  commonEventOnBlurTest()
  commonEventOnFocusTest()
  commonEventOnTouchTest()
  commonEventOnClickTest()
  commonAttrsHitTestBehaviorTest()
  commonAttrsIdTest()
  imageHitTestBehaviorTest()
  imageIdTest()
  imageOnCompleteTest()
  imageOnErrorTest()
  listHitTestBehaviorTest()
  listItemHitTestBehaviorTest()
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
  stackHitTestBehaviorTest()
  stackOnAreaChangeTest()
  stackOnTouchTest()
  textEnabledTest()
}