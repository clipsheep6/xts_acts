/**
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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
import createDragAction from './DragController/createDragAction.test.ets'
import setForegroundColor from './DragController/setForegroundColor.test.ets'

import AboutToAppearTest from './CommonAttribute/Com_Attr_AboutToAppear.test.ets'
import ParentXTest from './CommonAttribute/Com_Attr_ParentX.test.ets'
import blendMode from './commonApi/blendMode.test.ets';
import monopolize from './commonApi/monopolize.test.ets';
import onChildTouch from './commonApi/onChildTouch.test.ets';
import onGestureJudgeBegin from './commonApi/onGestureJudgeBegin.test.ets';
import outline from './commonApi/outline.test.ets';
import setCursor from './commonApi/setCursor.test.ets';
import accessibilityVirtualNode from './commonApi/accessibilityVirtualNode.test.ets';

import GestureClick from './GestureRelatedTest/GestureClick.test.ets'
import GestureContiune from './GestureRelatedTest/GestureContiune.test.ets'
import GestureDrag from './GestureRelatedTest/GestureDrag.test.ets'
import GestureIsSystemGesture from './GestureRelatedTest/GestureIsSystemGesture.test.ets'
import GestureLongPressGesture from './GestureRelatedTest/GestureLongPressGesture.test.ets'
import GesturePanGesture from './GestureRelatedTest/GesturePanGesture.test.ets'
import GesturePinchGesture from './GestureRelatedTest/GesturePinchGesture.test.ets'
import GestureReject from './GestureRelatedTest/GestureReject.test.ets'
import GestureRotationGesture from './GestureRelatedTest/GestureRotationGesture.test.ets'
import GestureSwipeGesture from './GestureRelatedTest/GestureSwipeGesture.test.ets'
import GestureTap from './GestureRelatedTest/GestureTap.test.ets'
import GestureTapGesture from './GestureRelatedTest/GestureTapGesture.test.ets'

import backgroundEffectJsunit from './backgroundEffect.test.ets'
import blendMode1Jsunit from './blendMode1.test.ets'

export default function testsuite() {
  createDragAction()
  setForegroundColor()
  AboutToAppearTest()
  ParentXTest()
  blendMode()
  monopolize()
  onChildTouch()
  onGestureJudgeBegin()
  outline()
  setCursor()
  accessibilityVirtualNode()
  GestureClick();
  GestureContiune();
  GestureDrag();
  GestureIsSystemGesture();
  GestureLongPressGesture();
  GesturePanGesture();
  GesturePinchGesture();
  GestureReject();
  GestureRotationGesture();
  GestureSwipeGesture();
  GestureTap();
  GestureTapGesture();
  backgroundEffectJsunit()
  blendMode1Jsunit()
}