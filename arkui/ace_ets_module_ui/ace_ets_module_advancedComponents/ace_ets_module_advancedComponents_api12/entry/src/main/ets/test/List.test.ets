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

import composeListItemIconType from './composeListItem/composeListItemIconType.test';
import composeListItemOperateItemArrow from './composeListItem/composeListItemOperateItemArrow.test';
import composeListItemOperateItemButton from './composeListItem/composeListItemOperateItemButton.test';
import composeListItemOperateItemCheckbox from './composeListItem/composeListItemOperateItemCheckbox.test';
import composeListItemOperateItemImage from './composeListItem/composeListItemOperateItemImage.test';
import composeListItemOperateItemRadio from './composeListItem/composeListItemOperateItemRadio.test';
import composeListItemOperateItemSubIcon from './composeListItem/composeListItemOperateItemSubIcon.test';
import composeListItemOperateItemSwitch from './composeListItem/composeListItemOperateItemSwitch.test';
import composeListItemPageTest from './composeListItem/composeListItemPageTest.test';
import composeTitleBarTest from './composeTitleBar/composeTitleBarTest.test';
import exceptionPromptTest from './exceptionPrompt/exceptionPromptTest.test';
import exceptionPromptTestTwo from './exceptionPrompt/exceptionPromptTestTwo.test';
import filterTest from './filter/filterTest.test';
import filterTestTwo from './filter/filterTestTwo.test';
import gridObjectSortComponentTest from './gridObjectSortComponent/gridObjectSortComponentTest.test';
import progressButtonTest from './progressButton/progressButtonTest.test';
import splitLayoutTest from './splitLayout/splitLayoutTest.test';
import selectTitleBarTest from './selectTitleBar/selectTitleBarTest.test';
import swipeRefresherPageTest from './swipeRefresher/swipeRefresherPageTest.test';
import tabTitleBarPageTest from './tabTitleBar/tabTitleBarPageTest.test';
import toolBarItemState from './toolBar/toolBarItemState.test';
import toolBarModifierPage from './toolBar/toolBarModifierPage.test';
import toolBarPageTest from './toolBar/toolBarPageTest.test';
import treeViewNodeParamContainer from './treeView/treeViewNodeParamContainer.test';
import alertDialogTest from './dialog/alertDialogTest.test';
import confirmDialogTest from './dialog/confirmDialogTest.test';
import customContentDialogTest from './dialog/customContentDialogTest.test';
import selectDialogTest from './dialog/selectDialogTest.test';
import tipsDialogTest from './dialog/tipsDialogTest.test';
import editableTitleBarSafeAreaEdges from './editableTitleBar/editableTitleBarSafeAreaEdges.test';
import editableTitleBarSafeAreaTypes from './editableTitleBar/editableTitleBarSafeAreaTypes.test';
import subHeaderButton from './subHeader/subHeaderButton.test';
import subHeaderIconGroup from './subHeader/subHeaderIconGroup.test';
import subHeaderTextArrow from './subHeader/subHeaderTextArrow.test';
import chipDirectionTest from './chip/chipDirection.test';
import counterDirectionTest from './counter/counterDirection.test';
import popupDirectionTest from './popup/popupDirectionTest.test';
import segmentButtonDirectionTest from './segmenButton/segmentbuttonDirection.test';

import FileButtonContinueToReceiveTest from './downloadFileButton/FileButtonContinueToReceiveTest.test';
import FileButtonDownloadTest from './downloadFileButton/FileButtonDownloadTest.test';
import FileButtonDownloadAndShareTest from './downloadFileButton/FileButtonDownloadAndShareTest.test';
import FileButtonDownloadFileTest from './downloadFileButton/FileButtonDownloadFileTest.test';
import FileButtonReceiveTest from './downloadFileButton/FileButtonReceiveTest.test';
import FileButtonSaveTest from './downloadFileButton/FileButtonSaveTest.test';
import FileButtonSaveFileTest from './downloadFileButton/FileButtonSaveFileTest.test';
import FileButtonSaveImageTest from './downloadFileButton/FileButtonSaveImageTest.test';


export default function testsuite() {
  chipDirectionTest();
  counterDirectionTest();
  popupDirectionTest();
  segmentButtonDirectionTest();
  composeTitleBarTest();
  composeListItemIconType();
  composeListItemOperateItemArrow();
  composeListItemOperateItemButton();
  composeListItemOperateItemCheckbox();
  composeListItemOperateItemImage();
  composeListItemOperateItemRadio();
  composeListItemOperateItemSubIcon();
  composeListItemOperateItemSwitch();
  composeListItemPageTest();
  exceptionPromptTest();
  exceptionPromptTestTwo();
  filterTest();
  filterTestTwo();
  gridObjectSortComponentTest();
  progressButtonTest();
  splitLayoutTest();
  selectTitleBarTest();
  swipeRefresherPageTest();
  tabTitleBarPageTest();
  toolBarItemState();
  toolBarModifierPage();
  toolBarPageTest();
  treeViewNodeParamContainer();
  alertDialogTest();
  confirmDialogTest();
  customContentDialogTest();
  selectDialogTest();
  tipsDialogTest();
  editableTitleBarSafeAreaEdges();
  editableTitleBarSafeAreaTypes();
  subHeaderButton();
  subHeaderIconGroup();
  subHeaderTextArrow();

  FileButtonContinueToReceiveTest();
  FileButtonDownloadTest();
  FileButtonDownloadAndShareTest();
  FileButtonDownloadFileTest();
  FileButtonReceiveTest();
  FileButtonSaveTest();
  FileButtonSaveFileTest();
  FileButtonSaveImageTest();
}