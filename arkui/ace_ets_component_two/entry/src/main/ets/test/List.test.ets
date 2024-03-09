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

import bindMenuJsunit from './BindMenuJsunit.test';
import bindPopupJsunit from './BindPopupJsunit.test';
import directionJsunit from './DirectionJsunit.test';
import listItemJsunit from './ListItemJsunit.test';
import navigatorCodeJsunit from './NavigatorCodeJsunit.test';
// import pieceJsunit from './PieceJsunit.test';
import dividerJsunit from './DividerJsunit.test';
import systempromptJsunit from './SystempromptJsunit.test';
import configurationJsunit from './ConfigurationJsunit.test';
import sourceTypeJsunit from './SourceTypeJsunit.test';
import pageTransitionJsunit from './PageTransitionJsunit.test';
import navigationJsunit from './NavigationJsunit.test';
import loadingProgressJsunit from './LoadingProgressJsunit.test';
import radioJsunit from './RadioJsunit.test';
import rowJsunit from './RowJsunit.test';
import scrollBarJsunit from './ScrollBarJsunit.test';
import searchJsunit from './SearchJsunit.test';
import placementJsunit from './PlacementJsunit.test';
import imageAnimatorJsunit from './ImageAnimatorJsunit.test'
import animationStatusJsunit from './AnimationStatusJsunit.test';
import curvesJsunit from './CurvesJsunit.test';
import gradientDirectionJsunit from './GradientDirectionJsunit.test';
import ohosRouterJsunit from './OhosRouterJsnuit.test';
import flexDirectionJsunit from './FlexDirectionJsunit.test';
import flexWrapJsunit from './FlexWrapJsunit.test';
import datePickerJsunit from './DatePickerJsunit.test';
import direction2Jsunit from './Direction2Jsunit.test';
import waterFlowDemoJsunit from './waterFlowDemo.test';


export default function testsuite() {
  navigationJsunit();
  ohosRouterJsunit();
  pageTransitionJsunit();
  datePickerJsunit();
  flexWrapJsunit();
  flexDirectionJsunit();
  gradientDirectionJsunit();
  dividerJsunit();
  directionJsunit();
  direction2Jsunit();
  animationStatusJsunit();
  searchJsunit();
  scrollBarJsunit();
  bindMenuJsunit();
  bindPopupJsunit();
  configurationJsunit();
  curvesJsunit();
  imageAnimatorJsunit();
  loadingProgressJsunit();
  listItemJsunit();
  navigatorCodeJsunit();
  // pieceJsunit();
  placementJsunit();
  radioJsunit();
  rowJsunit();
  systempromptJsunit();
  sourceTypeJsunit();
  waterFlowDemoJsunit();
}