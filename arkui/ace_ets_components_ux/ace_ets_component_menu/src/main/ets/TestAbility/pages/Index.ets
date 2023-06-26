/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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
import events_emitter from '@ohos.events.emitter';
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry';
import { Hypium } from '@ohos/hypium';
import hilog from '@ohos.hilog';
import testsuite from '../../test/List.test'

@Entry
@Component
struct MenuTest {
    @State onActionCalled: boolean = true
    @State menuFontSizeStr: string = '16fp'
    @State menuFontColorStr: string  = '#ffa500'
    @State menuFontWeightStr: string = '700'
    @State startIconStr: string = 'app.media.icon'
    @State endIconStr: string = 'app.media.icon'
    @State selectIconStr: string = 'app.media.icon'
    @State nullFlag: boolean = false
    @State fontColor: Color = Color.Blue
    @State menuFontWeightRes: FontWeight = FontWeight.Bolder
    @State menuFontSizeNum: number = 16
    @State menuFontColorNum: number = 0x808080
    @State menuFontWeightNum: number = 700
    @State menuFontSizeRes: Resource = $r('app.string.Divider_fontSize')
    @State menuFontColorRes: Resource = $r('app.color.Menu_Divider_color')
    @State startIconRes: Resource = $r('app.media.icon')
    @State endIconRes: Resource = $r('app.media.icon')
    @State selectIconRes: Resource = $r('app.media.icon')

    private stateChangCallBack = (eventData) => {
        console.info("menu page state change called:" + JSON.stringify(eventData));
        if (eventData != null) {
            if (eventData.data.menuFontSizeStr != null) {
                this.menuFontSizeStr = eventData.data.menuFontSizeStr;
            }
            if (eventData.data.menuFontColorStr != null) {
                this.menuFontColorStr = eventData.data.menuFontColorStr;
            }
            if (eventData.data.menuFontWeightStr != null) {
                this.menuFontWeightStr = eventData.data.menuFontWeightStr;
            }
            if (eventData.data.nullFlag != null) {
                this.nullFlag = eventData.data.nullFlag;
            }
            if (eventData.data.fontColor != null) {
                this.fontColor = eventData.data.fontColor;
            }
            if (eventData.data.menuFontSizeNum != null) {
                this.menuFontSizeNum = eventData.data.menuFontSizeNum;
            }
            if (eventData.data.menuFontColorNum != null) {
                this.menuFontColorNum = eventData.data.menuFontColorNum;
            }
            if (eventData.data.menuFontWeightNum != null) {
                this.menuFontWeightNum = eventData.data.menuFontWeightNum;
            }
            if (eventData.data.menuFontSizeRes != null) {
                this.menuFontSizeRes = eventData.data.menuFontSizeRes;
            }
            if (eventData.data.menuFontColorRes != null) {
                this.menuFontColorRes = eventData.data.menuFontColorRes;
            }
            if (eventData.data.menuFontWeightRes != null) {
                this.menuFontWeightRes = eventData.data.menuFontWeightRes;
            }
            if (eventData.data.startIconStr != null) {
                this.startIconStr = eventData.data.startIconStr
            }
            if (eventData.data.startIconRes != null) {
                this.startIconRes = eventData.data.startIconRes
            }
            if (eventData.data.endIconStr != null) {
                this.endIconStr = eventData.data.endIconStr
            }
            if (eventData.data.endIconRes != null) {
                this.endIconRes = eventData.data.endIconRes
            }
            if (eventData.data.selectIconStr != null) {
                this.selectIconStr = eventData.data.selectIconStr
            }
            if (eventData.data.selectIconRes != null) {
                this.selectIconRes = eventData.data.selectIconRes
            }
        }
    }

    aboutToAppear(){
        var stateChangeEvent = {
            eventId: 183,
            priority: events_emitter.EventPriority.LOW
        }
        events_emitter.on(stateChangeEvent, this.stateChangCallBack);
        var abilityDelegator: any
        abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
        var abilityDelegatorArguments: any
        abilityDelegatorArguments = AbilityDelegatorRegistry.getArguments()
        hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
        hilog.info(0x0000, 'testTag', '%{public}s', 'start run testcase!!!');
        Hypium.hypiumTest(abilityDelegator, abilityDelegatorArguments, testsuite)
    }

    @Builder
    DefaultMenu() {
        Menu() {
            MenuItem({ content: 'DefaultMenu' })
            .key('menuItemFontTest')
            MenuItem({ content: 'DefaultMenu' })
            .key('menuLabelFontTest')
            MenuItem({ content: 'DefaultMenu' })
            .key('menuStartIconTest')
            MenuItem({ content: 'DefaultMenu' })
            .key('menuEndIconTest')
            MenuItem({ content: 'DefaultMenu' })
            .key('menuSelectIconTest')
        }
        .key('menuFontTest')
    }

    @Builder
    MenuFontStr() {
        Menu() {
            MenuItem({ content: 'MenuFontStr' })
            .key('menuItemFontStrTest')
            .contentFont({ size: this.nullFlag ? '' : this.menuFontSizeStr, weight: this.nullFlag ? '' : this.menuFontWeightStr })
            .contentFontColor(this.nullFlag ? '' : this.menuFontColorStr)
            MenuItem({ content: 'MenuFontStr', labelInfo: 'labelInfo' })
            .key('menuLabelFontStrTest')
            .labelFont({ size: this.nullFlag ? '' : this.menuFontSizeStr, weight: this.nullFlag ? '' : this.menuFontWeightStr })
            .labelFontColor(this.nullFlag ? '' : this.menuFontColorStr)
            MenuItem({ content: 'MenuFontStr' })
            MenuItem({ content: 'MenuFontStr' })
        }
        .key('menuFontStrTest')
        .font({ size: this.nullFlag ? '' : this.menuFontSizeStr, weight: this.nullFlag ? '' : this.menuFontWeightStr })
        .fontColor(this.nullFlag ? '' : this.menuFontColorStr)
    }

    @Builder
    MenuFontNum() {
        Menu() {
            MenuItem({ content: 'MenuFontNum' })
            .key('menuItemFontNumTest')
            .contentFont({ size: this.menuFontSizeNum, weight: this.menuFontWeightNum })
            .contentFontColor(this.menuFontColorNum)
            MenuItem({ content: 'MenuFontNum', labelInfo: 'labelInfo' })
            .key('menuLabelFontNumTest')
            .labelFont({ size: this.menuFontSizeNum, weight: this.menuFontWeightNum })
            .labelFontColor(this.menuFontColorNum)
            MenuItem({ content: 'MenuFontNum' })
            MenuItem({ content: 'MenuFontNum' })
        }
        .key('menuFontNumTest')
        .font({ size: this.menuFontSizeNum, weight: this.menuFontWeightNum })
        .fontColor(this.menuFontColorNum)
    }

    @Builder
    MenuFontRes() {
        Menu() {
            MenuItem({ content: 'MenuFontRes' })
            .key('menuItemFontResTest')
            .contentFont({ size: this.menuFontSizeRes, weight: this.menuFontWeightRes })
            .contentFontColor(this.menuFontColorRes)
            MenuItem({ content: 'MenuFontRes', labelInfo: 'labelInfo' })
            .key('menuLabelFontResTest')
            .labelFont({ size: this.menuFontSizeRes, weight: this.menuFontWeightRes })
            .labelFontColor(this.menuFontColorRes)
            MenuItem({ content: 'MenuFontRes' })
            MenuItem({ content: 'MenuFontRes' })
        }
        .key('menuFontResTest')
        .font({ size: this.menuFontSizeRes, weight: this.menuFontWeightRes })
        .fontColor(this.menuFontColorRes)
    }

    @Builder
    MenuFontColor() {
        Menu() {
            MenuItem({ content: 'MenuFontColor' })
            .key('menuItemFontColorTest')
            .contentFont({ size: this.menuFontSizeNum, weight: this.menuFontWeightNum })
            .contentFontColor(this.fontColor)
            MenuItem({ content: 'MenuFontColor', labelInfo: 'labelInfo' })
            .key('menuLabelFontColorTest')
            .labelFont({ size: this.menuFontSizeNum, weight: this.menuFontWeightNum })
            .labelFontColor(this.fontColor)
            MenuItem({ content: 'MenuFontColor' })
            MenuItem({ content: 'MenuFontColor' })
        }
        .key('menuFontColorTest')
        .font({ size: this.menuFontSizeNum, weight: this.menuFontWeightNum })
        .fontColor(this.fontColor)
    }

    @Builder
    MenuIconStr() {
        Menu() {
            MenuItem({ startIcon: this.startIconStr, content: 'contentInfo' })
            .key('menuStartIconStrTest')
            MenuItem({ startIcon: this.startIconStr, content: 'contentInfo', endIcon:this.endIconStr })
            .key('menuEndIconStrTest')
            MenuItem({ startIcon: this.startIconStr, content: 'contentInfo' })
            .key('menuSelectIconStrTest')
            .selectIcon(this.selectIconStr)
            .selected(true)
            MenuItem({ startIcon: this.startIconStr, content: 'contentInfo' })
        }
    }

    @Builder
    MenuIconRes() {
        Menu() {
            MenuItem({ startIcon: this.nullFlag ? null : this.startIconRes, content: 'contentInfo' })
            .key('menuStartIconResTest')
            MenuItem({ content: 'contentInfo', endIcon: this.nullFlag ? null : this.endIconRes })
            .key('menuEndIconResTest')
            MenuItem({ startIcon: this.startIconRes, content: 'contentInfo' })
            .key('menuSelectIconResTest')
            .selectIcon(this.nullFlag ? true : this.selectIconRes)
            .selected(true)
            MenuItem({ startIcon: this.startIconRes, content: 'contentInfo' })
        }
    }

    build() {
        Column() {
            Button() {
                Text('Cancel')
                .fontSize(20)
                .fontWeight(FontWeight.Bold)
            }
            .key('cancelShowMenu')
            .width(150)
            .height(50)
            .margin({ bottom: 100, top: 20 })
            .onClick(() => {
                console.info("Cancel button START")
                try {
                    var backData = {
                        data: {
                            "ACTION": this.onActionCalled,
                        }
                    }
                    var backEvent = {
                        eventId: 64,
                        priority: events_emitter.EventPriority.LOW
                    }
                    console.info("Cancel button start to emit action state")
                    events_emitter.emit(backEvent, backData)
                } catch (err) {
                    console.info("Cancel button emit action state err: " + JSON.stringify(err.message))
                }
            })
            Text('Default Menu')
            .key('defaultMenu')
            .fontSize(20)
            .fontWeight(FontWeight.Bold)
            .bindMenu(this.DefaultMenu)
            Text('Menu FontStr')
            .key('menuFontStr')
            .fontSize(20)
            .fontWeight(FontWeight.Bold)
            .margin({ top: 20 })
            .bindMenu(this.MenuFontStr)
            Text('Menu FontNum')
            .key('menuFontNum')
            .fontSize(20)
            .fontWeight(FontWeight.Bold)
            .margin({ top: 20 })
            .bindMenu(this.MenuFontNum)
            Text('Menu FontRes')
            .key('menuFontRes')
            .fontSize(20)
            .fontWeight(FontWeight.Bold)
            .margin({ top: 20 })
            .bindMenu(this.MenuFontRes)
            Text('Menu FontColor')
            .key('menuFontColor')
            .fontSize(20)
            .fontWeight(FontWeight.Bold)
            .margin({ top: 20 })
            .bindMenu(this.MenuFontColor)
            Text('Menu IconStr')
            .key('menuIconStr')
            .fontSize(20)
            .fontWeight(FontWeight.Bold)
            .margin({ top: 20 })
            .bindMenu(this.MenuIconStr)
            Text('Menu IconRes')
            .key('menuIconRes')
            .fontSize(20)
            .fontWeight(FontWeight.Bold)
            .margin({ top: 20 })
            .bindMenu(this.MenuIconRes)
        }
        .width('100%')
    }
}
