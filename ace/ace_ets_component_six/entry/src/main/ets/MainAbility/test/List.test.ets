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
import badgeJsunit from './BadgeJsunit.test.ets';
import shapeJsunit from './ShapeJsunit.test.ets';
import motionPathJsunit from './MotionPathJsunit.test.ets';
import scrollCodeJsunit from './ScrollCodeJsunit.test.ets';
import transitionJsunit from './TransitionJsunit.test.ets';
import priorityGestureJsunit from './PriorityGestureJsunit.test.ets';
import parallelGestureJsunit from './ParallelGestureJsunit.test.ets';
import blankJsunit from './BlankJsunit.test.ets';
import aboutToDisappearJsunit from './AboutToDisappearJsunit.test.ets';
import timeStampJsunit from './TimeStampJsunit.test.ets';

export default function testsuite() {
  badgeJsunit();
  shapeJsunit();
  motionPathJsunit();
  scrollCodeJsunit();
  transitionJsunit();
  priorityGestureJsunit();
  parallelGestureJsunit();
  blankJsunit();
  aboutToDisappearJsunit();
  timeStampJsunit();
}