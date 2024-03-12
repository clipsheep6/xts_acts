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
import ActionSheet1 from './onWillDismissTest/ActionSheet1.test.ets'
import ActionSheet2 from './onWillDismissTest/ActionSheet2.test.ets'
import ActionSheet3 from './onWillDismissTest/ActionSheet3.test.ets'
import AlertDialog1 from './onWillDismissTest/AlertDialog1.test.ets'
import AlertDialog2 from './onWillDismissTest/AlertDialog2.test.ets'
import AlertDialog3 from './onWillDismissTest/AlertDialog3.test.ets'
import CustomDialog1 from './onWillDismissTest/CustomDialog1.test.ets'
import CustomDialog2 from './onWillDismissTest/CustomDialog2.test.ets'
import CustomDialog3 from './onWillDismissTest/CustomDialog3.test.ets'
import openCustomDialog1 from './onWillDismissTest/openCustomDialog1.test.ets'
import openCustomDialog2 from './onWillDismissTest/openCustomDialog2.test.ets'
import openCustomDialog3 from './onWillDismissTest/openCustomDialog3.test.ets'

export default function testsuite() {
  ActionSheet1();
  ActionSheet2();
  ActionSheet3();
  AlertDialog1();
  AlertDialog2();
  AlertDialog3();
  CustomDialog1();
  CustomDialog2();
  CustomDialog3();
  openCustomDialog1();
  openCustomDialog2();
  openCustomDialog3();
}