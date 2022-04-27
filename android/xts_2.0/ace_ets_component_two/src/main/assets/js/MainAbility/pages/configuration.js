/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\configuration.ets?entry ***!
  \************************************************************************************************************/
// @ts-nocheck
/**
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
var Configuration = isSystemplugin('configuration', 'system') ? globalThis.systemplugin.configuration : globalThis.requireNapi('configuration');
class promptExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
    }
    aboutToBeDeleted() {
        SubscriberManager.Get().delete(this.id());
    }
    render() {
        Column.create();
        Button.createWithLabel('click');
        Button.key('button');
        Button.backgroundColor('#FF0B8FE2');
        Button.fontSize(20);
        Button.margin({ top: 20 });
        Button.onClick(() => {
            console.info('button is start');
            let localeInfo = Configuration.getLocale();
            console.info('localeInfo result is' + JSON.stringify(localeInfo));
            try {
                var backData = {
                    data: {
                        "COUNTRY": localeInfo.countryOrRegion,
                        "DIR": localeInfo.dir
                    }
                };
                console.log("backData is" + JSON.stringify(backData.data));
                var backEvent = {
                    eventId: 78,
                };
                console.info("confituration start to emit action state");
            }
            catch (_a) {
                console.info("confituration emit action state err: " + JSON.stringify(err.message));
            }
        });
        Button.pop();
        Column.pop();
    }
}
loadDocument(new promptExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=configuration.js.map