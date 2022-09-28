/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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
 
import featureAbility from '@ohos.ability.featureAbility'
export default {
  async onCreate() {
    console.info('Application onCreate')
    AppStorage.SetOrCreate('action',false);
    var want = await featureAbility.getWant();
    console.info("ACTS_InAppLoadCard ====> want.action:"+ want.action)
    if(want.action == "MainAbility1"){
      AppStorage.SetOrCreate('action',true);
    }
  },
  onDestroy() {
    console.info('Application onDestroy')
  },
}