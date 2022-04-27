/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\ohosPrompt.ets?entry ***!
  \*********************************************************************************************************/
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
var prompt = globalThis.requireNapi('prompt') || (isSystemplugin('prompt', 'ohos') ? globalThis.ohosplugin.prompt : isSystemplugin('prompt', 'system') ? globalThis.systemplugin.prompt : undefined);
class OhosPrompt extends View {
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
        Column.debugLine("pages/ohosPrompt.ets(22:5)");
        Column.width('100%');
        Column.height('100%');
        Button.createWithLabel("get Point");
        Button.debugLine("pages/ohosPrompt.ets(23:7)");
        Button.padding(40);
        Button.onClick(() => {
            prompt.showToast({ message: "sucessful", duration: 200 });
            this.onClickValue = true;
            try {
                var backData = {
                    data: {
                        "matrix1": "[100, 10]",
                        "ACTION": this.onClickValue
                    }
                };
                var backEvent = {
                    eventId: 142,
                };
                console.info("click to emit action state");
            }
            catch (err) {
                console.info("click action state err: " + JSON.stringify(err.message));
            }
            prompt.showActionMenu({
                title: 'Title Info',
                buttons: [
                    {
                        text: 'item1',
                        color: '#666666',
                    }
                ],
                success: function (data) {
                    console.info('dialog success callback，click button : ' + data.tapIndex);
                },
                fail: function (data) {
                    console.info('dialog fail callback' + data.errMsg);
                },
            });
            prompt.showDialog({
                title: 'Title Info',
                message: 'Message Info',
                buttons: [
                    {
                        text: 'showDialog',
                        color: '#666666',
                    },
                ],
                success: function (data) {
                    console.info('dialog success callback，click button : ' + data.index);
                },
                cancel: function () {
                    console.info('dialog cancel callback');
                },
            });
        });
        Button.backgroundColor(0x2788D9);
        Button.key('rotate5');
        Button.pop();
        Column.pop();
    }
}
loadDocument(new OhosPrompt("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=ohosPrompt.js.map