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
import stepperJsunit from './stepperTest/StepperJsunit.test';
import NavigationParamTest from './NavigationTest/NavigationParam.test';
import NavigationApi from './NavigationTest/NavigationApi.test';
import NavigationApi2 from './NavigationTest/NavigationApi2.test';
import NavigationApi3 from './NavigationTest/NavigationApi3.test';
import NavPathStackApi1 from './NavigationTest/NavPathStackApi1.test';
import NavPathStackApi2 from './NavigationTest/NavPathStackApi2.test';
import NavPathStackApi3 from './NavigationTest/NavPathStackApi3.test';
import NavDestinationInfoStateJsunit  from './NavDestinationTest/NavDestinationInfoStateJsunit.test'
import QueryNavDestinationInfoNavDestinationJsunit from './NavDestinationTest/QueryNavDestinationInfoNavDestinationJsunit.test';
import NavigationAttr from './NavigationTest/NavigationAttr.test'
import navigationApi1 from './NavigationTest/navigationApi/navigationApi1.test'
import sidebar from './SideBarContainerTest/SideBar.test'

import navigationJsunit from './NavigationTest/NavigationJsunit.test'
import stepperJsunit1 from './stepperTest/StepperJsunit1.test'
import navigatorJsunit from './Navigator/NavigatorJsunit.test'

import navigationJsunit3 from './NavigationTest/NavigationJsunit3.test';
import navigatorCodeJsunit from './NavigationTest/NavigatorCodeJsunit.test';
import navigationTypeTest from './NavigationTest/navigationType.test'
import navigationuxtest from './NavigationTest/navigationux.test'
import SideBarContainer_Attribute from './SideBarContainerTest/SideBarContainer_attribute/SideBarContainer_Attribute.test';
import SideBarContainerType from './SideBarContainerTest/SideBarContainerType/SideBarContainerType.test';
import SideBarContainerType_DefaultValue1 from './SideBarContainerTest/SideBarContainerType/SideBarContainerType_DefaultValue1.test';
import SideBarContainerType_DefaultValue2 from './SideBarContainerTest/SideBarContainerType/SideBarContainerType_DefaultValue2.test';
import SideBarContainerType_DefaultValue3 from './SideBarContainerTest/SideBarContainerType/SideBarContainerType_DefaultValue3.test';
import SideBarContainerDivider from './SideBarContainerTest/SideBarContainerDivider/SideBarContainerDivider.test';
export default function testsuite() {
  navigationTypeTest();

  stepperJsunit();
  NavigationParamTest();
  NavigationApi()
  NavigationApi2()
  NavigationApi3()
  NavPathStackApi1()
  NavPathStackApi2()
  NavPathStackApi3()
  NavDestinationInfoStateJsunit()
  QueryNavDestinationInfoNavDestinationJsunit()
  NavigationAttr()
  navigationApi1()
  sidebar()

  navigationJsunit()
  stepperJsunit1()
  navigatorJsunit()

  navigationJsunit3()
  navigatorCodeJsunit()
  NavigationApi();
  NavigationApi2();
  NavigationApi3();
  NavPathStackApi1();
  NavPathStackApi2();
  NavPathStackApi3();
  NavDestinationInfoStateJsunit();
  QueryNavDestinationInfoNavDestinationJsunit();
  NavigationAttr();
  navigationApi1();
  sidebar();
  navigationJsunit();
  stepperJsunit1();
  navigatorJsunit();
  NavRouterJsunit();
  NavDestinationJsunit();
  NavigationJsunit();
  navigationNavbar02();
  navigationPosition();
  navigationNavbar01();
  NavigationStack01Jsunit();
  NavigationStack10Jsunit();
  NavigationStack11Jsunit();
  NavigationStack12Jsunit();
  NavigationStack13Jsunit();
  NavigationStack14Jsunit();
  NavigationStack15Jsunit();
  NavigationStack16Jsunit();
  NavigationStack17Jsunit();
  NavigationStack18Jsunit();
  NavigationStack19Jsunit();
  NavigationStack20Jsunit();
  NavigationStack21Jsunit();
  NavigationStack23Jsunit();
  NavigationStack24Jsunit();
  NavigationStack25Jsunit();
  NavigationStack26Jsunit();
  NavigationMode01Jsunit();
  NavigationMode02Jsunit();
  NavigationMode03Jsunit();
  NavigationMode04Jsunit();
  NavigationMode05Jsunit();
  NavigationMode06Jsunit();
  NavigationMode07Jsunit();
  NavigationMode08Jsunit();
  NavigationMode09Jsunit();
  NavigationMode10Jsunit();
  NavigationMode11Jsunit();
  NavigationMode12Jsunit();
  NavigationMode13Jsunit();
  NavigationMode14Jsunit();
  NavigationMode15Jsunit();
  NavigationMode16Jsunit();
  NavigationMode17Jsunit();
  NavRouter_onStateChange1();
  NavRouter_onStateChange2();
  NavDestination_onBackPressed();
  navigationuxtest()
  SideBarContainer_Attribute();
  SideBarContainerType();
  SideBarContainerType_DefaultValue1();
  SideBarContainerType_DefaultValue2();
  SideBarContainerType_DefaultValue3();
  SideBarContainerDivider();

}