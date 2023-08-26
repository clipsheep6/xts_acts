/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from '@ohos/hypium'
export default function TimerTest() {
describe('TimerTest', function () {
  /**
   * @tc.name: testTimer10
   * @tc.desc: test SetTimeout()
   * For example: on SetTimeout()
   */

  it("testTimer10", 0, function () {
    function aaa() {
      console.info("testTimer10");
    }
    setTimeout(aaa, 1000);
    setTimeout(aaa, -1);
  });
  
  /**
   * @tc.name: testTimer20
   * @tc.desc: test SetInterval()
   * For example: on SetInterval()
   */

  it("testTimer20", 0, function () {
    function aaa() {
      console.info("testTimer20");
    }
    setInterval(aaa, 1000);
  });

  /**
   * @tc.name: testTimer30
   * @tc.desc: Test ClearTimer()
   * For example: on ClearTimer()
   */

  it("testTimer30", 0, function () {
    function aaa() {
      console.info("testTimer30");
    }
    let id1 = setTimeout(aaa, 1000);
    let id2 = setInterval(aaa, 2000);
    clearTimeout(id1);
    clearInterval(id2);
    clearTimeout();
    clearInterval();
  });
})}