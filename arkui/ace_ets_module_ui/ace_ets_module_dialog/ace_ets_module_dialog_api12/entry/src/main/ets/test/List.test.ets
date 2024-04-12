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
import TextPickerDialog from './TextPickerDialogTest/TextPickerDialog.test'
import DatePickerDialog from './DatePickerDialogTest/DatePickerDialog.test'
import TimePickerDialog from './TimePickerDialogTest/TimePickerDialog.test'
import CalendarPickerDialog from './CalendarPickerDialogTest/CalendarPickerDialog.test'
import ActionSheet1 from './ActionSheetTest/ActionSheet1.test'
import ActionSheet2 from './ActionSheetTest/ActionSheet2.test'
import ActionSheet3 from './ActionSheetTest/ActionSheet3.test'
import AlertDialog1 from './AlertDialogTest/AlertDialog1.test'
import AlertDialog2 from './AlertDialogTest/AlertDialog2.test'
import AlertDialog3 from './AlertDialogTest/AlertDialog3.test'
import CustomDialog1 from './CustomDialogTest/CustomDialog1.test'
import CustomDialog2 from './CustomDialogTest/CustomDialog2.test'
import CustomDialog3 from './CustomDialogTest/CustomDialog3.test'
import openCustomDialog1 from './openCustomDialogTest/openCustomDialog1.test'
import openCustomDialog2 from './openCustomDialogTest/openCustomDialog2.test'
import openCustomDialog3 from './openCustomDialogTest/openCustomDialog3.test'

export default function testsuite() {
  TextPickerDialog()
  DatePickerDialog()
  TimePickerDialog()
  CalendarPickerDialog()
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