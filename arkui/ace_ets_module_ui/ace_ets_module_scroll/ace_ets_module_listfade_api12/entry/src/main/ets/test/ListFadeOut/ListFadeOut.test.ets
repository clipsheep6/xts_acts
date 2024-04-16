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
import { describe, beforeEach, afterEach, it, expect } from "@ohos/hypium"
import router from '@ohos.router';
import { BusinessError } from '@ohos.base'

export default function ListFadeOut() {
  const SUITE: string = 'ListFadeOut'

  describe('ListFadeOut', () => {
    console.info("1111111111111111start---");
    beforeEach(async (done: Function) => {
      console.info("11111111111112222start");
      let options: router.RouterOptions = {
        // url: 'MainAbility/pages/ListFadeOut/ListFadeOut',
        url: 'MainAbility/pages/ListFadeOut/ListFadeOut',
      }
      try {
        router.clear();
        let pages: router.RouterState = router.getState();
        if (pages == null || !("ListFadeOut" == pages.name)) {

          await router.pushUrl(options).then(() => {
            console.info(`${SUITE} router.pushUrl success`);
          }).catch((err: BusinessError) => {
            console.error(`${SUITE} router.pushUrl failed, code is ${err.code}, message is ${err.message}`);
          })
        }
      } catch (err) {
        console.error("push ListFadeOut page error: " + err);
      }
      done()
    });

    afterEach(async () => {
      console.info("ListFadeOut after each called");
    });

    it('hore_race_test_001', 0, async (done: Function) => {
      console.info("hore_race_test_001 START");
      let strJson: string = getInspectorByKey('list');
      // console.log("---------------", strJson)
      // for (let i=0;i<strJson.length;i=i+200){
      //   console.info("---:"+strJson.substring(i,Math.min(i+200,strJson.length)))
      // }
      expect(JSON.parse(strJson).$attrs.fadingEdge).assertTrue();
      console.info('hore_race_test_001 END');
      console.info('---',JSON.parse(strJson).$attrs.fadingEdge);
      done()
    });

    // it('hore_race_test_002', 0, async (done: Function) => {
    //   console.info('hore_race_test_002 START');
    //   let strJson: string = getInspectorByKey('step');
    //   expect(JSON.parse(strJson).$attrs.step).assertEqual(4);
    //   console.info('hore_race_test_002 END');
    //   done()
    // });


  })
}