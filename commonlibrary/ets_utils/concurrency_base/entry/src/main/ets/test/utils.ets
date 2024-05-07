/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
import hilog from '@ohos.hilog';

export function check<T>(testName: string, p: Promise<T>): Promise<string> {
  hilog.info(0x0000, testName, 'starting check for test');
  return p.then(
    () => {
      hilog.info(0x0000, testName, 'passed check for test');
      return "PASSED";
    }, (e: Error) => {
    hilog.info(0x0000, testName, 'Test failed: ' + "\nError message: " + e.message + "\nStack: \n" + e.stack);
    return "FAILED: " + "\nError message: " + e.message + "\nStack: \n" + e.stack;
  })
}
