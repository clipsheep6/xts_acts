/*
 * Copyright (c) 2023 iSoftStone Information Technology (Group) Co.,Ltd.
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


 import Column_Space from './Column/spaceChanged/Column_Space.test';
 import Column_Space_String from './Column/spaceChanged/Column_Space_String.test';
 import Column_Space_Default from './Column/spaceChanged/Column_Space_Default.test';
 import layoutWeight_Part from './Column/layoutWeight/layoutWeight_Part.test';
 import layoutWeight_All from './Column/layoutWeight/layoutWeight_All.test';
 import layoutWeight_Default from './Column/layoutWeight/layoutWeight_Default.test';
 import layoutWeight_flexGrow from './Column/layoutWeight/layoutWeight_flexGrow.test';
 import layoutWeight_flexShrink from './Column/layoutWeight/layoutWeight_flexShrink.test';
 import flexGrow_Part from './Column/flexGrow/flexGrow_Part.test';
 import flexGrow_Default from './Column/flexGrow/flexGrow_Default.test';
 import flexShrink_Part from './Column/flexShrink/flexShrink_Part.test';
 import flexBasis_Type from './Column/flexBasis/flexBasis_Type.test';
 import flexBasis_Default from './Column/flexBasis/flexBasis_Default.test';
 import columnNesting_Space from './Column/columnNesting/columnNesting_Space.test';
 import columnNesting_alignItems from './Column/columnNesting/columnNesting_alignItems.test';
 import columnNesting_justifyContent from './Column/columnNesting/columnNesting_justifyContent.test';
import column_WidthHeight_ChangeParent from './Column/ParentComponentChanged/Column_WidthHeight_ChangeParent.test';
import column_Padding_ChangeParent from './Column/ParentComponentChanged/Column_Padding_ChangeParent.test';
import column_Margin_ChangeParent from './Column/ParentComponentChanged/Column_Margin_ChangeParent.test';
import column_MarPad_ChangeParent from './Column/ParentComponentChanged/Column_MarPad_ChangeParent.test';
import column_AlignItems_ChangeParent from './Column/ParentComponentChanged/Column_AlignItems_ChangeParent.test';
import column_JustifyContent_ChangeParent from './Column/ParentComponentChanged/Column_JustifyContent_ChangeParent.test';
import ColumnWidthHeight_SubChange from './Column/subComponentChanged/ColumnWidthHeight_SubChange.test';
import ColumnSetPadding_SubChange from './Column/subComponentChanged/ColumnSetPadding_SubChange.test';
import ColumnSetPadding_SubChangeMar from './Column/subComponentChanged/ColumnSetPadding_SubChangeMar.test';
import ColumnSetPadding_SubChangePad from './Column/subComponentChanged/ColumnSetPadding_SubChangePad.test';
import ColumnSetMargin_SubChange from './Column/subComponentChanged/ColumnSetMargin_SubChange.test';
import ColumnSetMargin_SubChangeMar from './Column/subComponentChanged/ColumnSetMargin_SubChangeMar.test';
import ColumnSetMargin_SubChangePad from './Column/subComponentChanged/ColumnSetMargin_SubChangePad.test';
import ColumnSetPaddingMargin_SubChange from './Column/subComponentChanged/ColumnSetPaddingMargin_SubChange.test';
import ColumnSetPaddingMargin_SubChangeMar from './Column/subComponentChanged/ColumnSetPaddingMargin_SubChangeMar.test';
import ColumnSetPaddingMargin_SubChangePad from './Column/subComponentChanged/ColumnSetPaddingMargin_SubChangePad.test';
import ColumnSetPosition_SubChange from './Column/subComponentChanged/ColumnSetPosition_SubChange.test';
import ColumnSetOffset_SubChange from './Column/subComponentChanged/ColumnSetOffset_SubChange.test';
import ColumnSetDisplayPriority_SubChange from './Column/subComponentChanged/ColumnSetDisplayPriority_SubChange.test';
import ColumnSetLayoutWeight_SubChange from './Column/subComponentChanged/ColumnSetLayoutWeight_SubChange.test';
import ColumnSetLayoutWeightNone_SubChange from './Column/subComponentChanged/ColumnSetLayoutWeightNone_SubChange.test';
import ColumnSetFlexShink_SubChange from './Column/subComponentChanged/ColumnSetFlexShink_SubChange.test';
import ColumnSetFlexShinkNone_SubChange from './Column/subComponentChanged/ColumnSetFlexShinkNone_SubChange.test';
import ColumnSetVisibility_SubChange from './Column/subComponentChanged/ColumnSetVisibility_SubChange.test';

export default function testsuite() {
  Column_Space()
  Column_Space_String()
  Column_Space_Default()
  layoutWeight_Part()
  layoutWeight_All()
  layoutWeight_Default()
  layoutWeight_flexGrow()
  layoutWeight_flexShrink()
  flexGrow_Part()
  flexGrow_Default()
  flexShrink_Part()
  flexBasis_Type()
  flexBasis_Default()
  columnNesting_Space()
  columnNesting_alignItems()
  columnNesting_justifyContent()
  column_WidthHeight_ChangeParent()
  column_Padding_ChangeParent()
  column_Margin_ChangeParent()
  column_MarPad_ChangeParent()
  column_AlignItems_ChangeParent()
  column_JustifyContent_ChangeParent()
  ColumnWidthHeight_SubChange()
  ColumnSetPadding_SubChange()
  ColumnSetPadding_SubChangeMar()
  ColumnSetPadding_SubChangePad()
  ColumnSetMargin_SubChange()
  ColumnSetMargin_SubChangeMar()
  ColumnSetMargin_SubChangePad()
  ColumnSetPaddingMargin_SubChange()
  ColumnSetPaddingMargin_SubChangeMar()
  ColumnSetPaddingMargin_SubChangePad()
  ColumnSetPosition_SubChange()
  ColumnSetOffset_SubChange()
  ColumnSetDisplayPriority_SubChange()
  ColumnSetLayoutWeight_SubChange()
  ColumnSetLayoutWeightNone_SubChange()
  ColumnSetFlexShink_SubChange()
  ColumnSetFlexShinkNone_SubChange()
  ColumnSetVisibility_SubChange()
}