/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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

import commonEvent from '@ohos.commonEvent';
import router from '@system.router'

export default {
  data: {
    title: "",
    text: ""
  },
  onInit() {
    this.title = this.$t('strings.world');
    this.text = "This is Aux entry MainAbility2"
  },
  onShow() {
    console.info("AuxEntryAbility2 onShow");
    commonEvent.publish("AuxEntryAbility2_onShow", () => {
      console.log("AuxEntryAbility2 Publish CallBack AuxEntryAbility2_onShow")
    });
  },

  onHide() {
    console.info("AuxEntryAbility2 onHide");
    commonEvent.publish("AuxEntryAbility2_onHide", () => {
      console.log("AuxEntryAbility2 Publish CallBack AuxEntryAbility2_onHide")
    });
  },

  onActive() {
    console.info("AuxEntryAbility2 onActive");
    commonEvent.publish("AuxEntryAbility2_onActive", () => {
      console.log("AuxEntryAbility2 Publish CallBack AuxEntryAbility2_onActive")
    });
  },

  onInactive() {
    console.info("AuxEntryAbility2 onInactive");
    commonEvent.publish("AuxEntryAbility2_onInactive", () => {
      console.log("AuxEntryAbility2 Publish CallBack AuxEntryAbility2_onInactive")
    });
  },
  onclick: function () {
    router.replace({
      uri: "pages/second/second"
    })
  }
}



