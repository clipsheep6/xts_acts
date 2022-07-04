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
import commonEvent from '@ohos.commonEvent';
import display from '@ohos.display'
import accessibility from '@ohos.accessibility'

export class GestureEventTest {
    private context = undefined;
    private subScriber = undefined;

    constructor(context) {
        this.context = context;
    }

    async init() {
        this.subScriber = await commonEvent.createSubscriber({events: ['caseExecute']});
        commonEvent.subscribe(this.subScriber, (err, data) => {
            console.info('GestureEventTest subscribe callback data:' + JSON.stringify(data));
            this.processCase(data.data);
        });
    }

    clear() {
        commonEvent.unsubscribe(this.subScriber);
        this.subScriber = undefined;
        this.context = undefined;
    }

    private async processCase(caseName) {
        console.info('GestureEventTest processCase start');
        let eventType = [];
        let bundleName = [];
        let windowId = -1;
        let displayId = -1;
        let gesturePath = {};
        let gesturePos1 = {};
        let gesturePos2 = {};
        let gesturePos3 = {};
        let gesturePos4 = {};
        let gesturePos5 = {};
        let gesturePos6 = {};
        let gesturePos7 = {};
        let gesturePos8 = {};
        let gesturePos9 = {};
        let gesturePos10 = {};
        let gesturePos11 = {};

        switch (caseName) {
            case 'AccessibilityGestureEventTest_0100'://'left'
                console.info('GestureEventTest processCase left');
                gesturePos1 = {posX: 676, poxY: 735};
                gesturePos2 = {posX: 567, poxY: 729};
                gesturePos3 = {posX: 444, poxY: 719};
                gesturePos4 = {posX: 255, poxY: 714};
                gesturePos5 = {posX: 153, poxY: 715};
                gesturePos6 = {posX: 15, poxY: 729};
                gesturePath = {positions: [gesturePos1, gesturePos2, gesturePos3, gesturePos4, gesturePos5, gesturePos6], durationTime: 100};
                this.gestureInject(caseName, gesturePath);
                break;
            case 'AccessibilityGestureEventTest_0200'://'leftThenRight'
                console.info('GestureEventTest processCase leftThenRight');
                gesturePos1 = {posX: 685, poxY: 798};
                gesturePos2 = {posX: 575, poxY: 792};
                gesturePos3 = {posX: 446, poxY: 785};
                gesturePos4 = {posX: 285, poxY: 784};
                gesturePos5 = {posX: 206, poxY: 785};
                gesturePos6 = {posX: 87, poxY: 787};
                gesturePos7 = {posX: 401, poxY: 772};
                gesturePos8 = {posX: 535, poxY: 786};
                gesturePos9 = {posX: 714, poxY: 806};
                gesturePath = {positions: [gesturePos1, gesturePos2, gesturePos3, gesturePos4, gesturePos5,
                                           gesturePos6, gesturePos7, gesturePos8, gesturePos9], durationTime: 100};
                this.gestureInject(caseName, gesturePath);
                break;
            case 'AccessibilityGestureEventTest_0300'://'leftThenUp'
            console.info('GestureEventTest processCase leftThenUp');
                gesturePos1 = {posX: 652, poxY: 903};
                gesturePos2 = {posX: 570, poxY: 905};
                gesturePos3 = {posX: 460, poxY: 920};
                gesturePos4 = {posX: 280, poxY: 737};
                gesturePos5 = {posX: 281, poxY: 555};
                gesturePos6 = {posX: 285, poxY: 333};
                gesturePos7 = {posX: 284, poxY: 116};
                gesturePath = {positions: [gesturePos1, gesturePos2, gesturePos3, gesturePos4, gesturePos5,
                                           gesturePos6, gesturePos7], durationTime: 100};
                this.gestureInject(caseName, gesturePath);
                break;
            case 'AccessibilityGestureEventTest_0400'://'leftThenDown'
            console.info('GestureEventTest processCase leftThenDown');
                gesturePos1 = {posX: 583, poxY: 520};
                gesturePos2 = {posX: 468, poxY: 485};
                gesturePos3 = {posX: 377, poxY: 456};
                gesturePos4 = {posX: 289, poxY: 435};
                gesturePos5 = {posX: 283, poxY: 626};
                gesturePos6 = {posX: 308, poxY: 836};
                gesturePos7 = {posX: 335, poxY: 1108};
                gesturePath = {positions: [gesturePos1, gesturePos2, gesturePos3, gesturePos4, gesturePos5,
                                           gesturePos6, gesturePos7], durationTime: 100};
                this.gestureInject(caseName, gesturePath);
                break;
            case 'AccessibilityGestureEventTest_0500'://'right'
            console.info('GestureEventTest processCase right');
                gesturePos1 = {posX: 77, poxY: 589};
                gesturePos2 = {posX: 185, poxY: 589};
                gesturePos3 = {posX: 318, poxY: 589};
                gesturePos4 = {posX: 499, poxY: 589};
                gesturePos5 = {posX: 630, poxY: 588};
                gesturePath = {positions: [gesturePos1, gesturePos2, gesturePos3, gesturePos4, gesturePos5], durationTime: 100};
                this.gestureInject(caseName, gesturePath);
                break;
            case 'AccessibilityGestureEventTest_0600'://'rightThenLeft'
            console.info('GestureEventTest processCase rightThenLeft');
                gesturePos1 = {posX: 174, poxY: 731};
                gesturePos2 = {posX: 251, poxY: 743};
                gesturePos3 = {posX: 393, poxY: 772};
                gesturePos4 = {posX: 673, poxY: 817};
                gesturePos5 = {posX: 591, poxY: 805};
                gesturePos6 = {posX: 511, poxY: 791};
                gesturePos7 = {posX: 423, poxY: 779};
                gesturePos8 = {posX: 333, poxY: 768};
                gesturePos9 = {posX: 244, poxY: 764};
                gesturePos10 = {posX: 167, poxY: 759};
                gesturePos11 = {posX: 71, poxY: 755};
                gesturePath = {positions: [gesturePos1, gesturePos2, gesturePos3, gesturePos4, gesturePos5,
                                           gesturePos6, gesturePos7, gesturePos8, gesturePos9, gesturePos10,
                                           gesturePos11], durationTime: 100};
                this.gestureInject(caseName, gesturePath);
                break;
            case 'AccessibilityGestureEventTest_0700'://'rightThenUp'
            console.info('GestureEventTest processCase rightThenUp');
                gesturePos1 = {posX: 117, poxY: 950};
                gesturePos2 = {posX: 216, poxY: 950};
                gesturePos3 = {posX: 311, poxY: 950};
                gesturePos4 = {posX: 438, poxY: 933};
                gesturePos5 = {posX: 491, poxY: 791};
                gesturePos6 = {posX: 478, poxY: 622};
                gesturePos7 = {posX: 471, poxY: 473};
                gesturePos8 = {posX: 464, poxY: 320};
                gesturePos9 = {posX: 458, poxY: 186};
                gesturePath = {positions: [gesturePos1, gesturePos2, gesturePos3, gesturePos4, gesturePos5,
                                           gesturePos6, gesturePos7, gesturePos8, gesturePos9], durationTime: 100};
                this.gestureInject(caseName, gesturePath);
                break;
            case 'AccessibilityGestureEventTest_0800'://'rightThenDown'
            console.info('GestureEventTest processCase rightThenDown');
                gesturePos1 = {posX: 204, poxY: 501};
                gesturePos2 = {posX: 307, poxY: 486};
                gesturePos3 = {posX: 422, poxY: 478};
                gesturePos4 = {posX: 547, poxY: 604};
                gesturePos5 = {posX: 440, poxY: 771};
                gesturePos6 = {posX: 348, poxY: 906};
                gesturePath = {positions: [gesturePos1, gesturePos2, gesturePos3, gesturePos4, gesturePos5,
                                           gesturePos6], durationTime: 100};
                this.gestureInject(caseName, gesturePath);
                break;
            case 'AccessibilityGestureEventTest_0900'://'up'
            console.info('GestureEventTest processCase up');
                gesturePos1 = {posX: 3720, poxY: 1053};
                gesturePos2 = {posX: 355, poxY: 873};
                gesturePos3 = {posX: 320, poxY: 558};
                gesturePos4 = {posX: 296, poxY: 314};
                gesturePos5 = {posX: 285, poxY: 163};
                gesturePath = {positions: [gesturePos1, gesturePos2, gesturePos3, gesturePos4, gesturePos5], durationTime: 100};
                this.gestureInject(caseName, gesturePath);
                break;
            case 'AccessibilityGestureEventTest_1000'://'upThenLeft'
            console.info('GestureEventTest processCase upThenLeft');
                gesturePos1 = {posX: 437, poxY: 1139};
                gesturePos2 = {posX: 437, poxY: 985};
                gesturePos3 = {posX: 453, poxY: 739};
                gesturePos4 = {posX: 466, poxY: 591};
                gesturePos5 = {posX: 483, poxY: 455};
                gesturePos6 = {posX: 489, poxY: 321};
                gesturePos7 = {posX: 383, poxY: 274};
                gesturePos8 = {posX: 258, poxY: 273};
                gesturePos9 = {posX: 179, poxY: 276};
                gesturePos10 = {posX: 102, poxY: 286};
                gesturePos11 = {posX: 3, poxY: 298};
                gesturePath = {positions: [gesturePos1, gesturePos2, gesturePos3, gesturePos4, gesturePos5,
                                           gesturePos6, gesturePos7, gesturePos8, gesturePos9, gesturePos10,
                                           gesturePos11], durationTime: 100};
                this.gestureInject(caseName, gesturePath);
                break;
            case 'AccessibilityGestureEventTest_1100'://'upThenRight'
            console.info('GestureEventTest processCase upThenRight');
                gesturePos1 = {posX: 332, poxY: 1143};
                gesturePos2 = {posX: 322, poxY: 973};
                gesturePos3 = {posX: 300, poxY: 779};
                gesturePos4 = {posX: 276, poxY: 627};
                gesturePos5 = {posX: 259, poxY: 496};
                gesturePos6 = {posX: 375, poxY: 406};
                gesturePos7 = {posX: 468, poxY: 409};
                gesturePos8 = {posX: 704, poxY: 436};
                gesturePath = {positions: [gesturePos1, gesturePos2, gesturePos3, gesturePos4, gesturePos5,
                                           gesturePos6, gesturePos7, gesturePos8], durationTime: 100};
                this.gestureInject(caseName, gesturePath);
                break;
            case 'AccessibilityGestureEventTest_1200'://'upThenDown' 
            console.info('GestureEventTest processCase upThenDown');
                gesturePos1 = {posX: 377, poxY: 1047};
                gesturePos2 = {posX: 368, poxY: 863};
                gesturePos3 = {posX: 355, poxY: 564};
                gesturePos4 = {posX: 339, poxY: 353};
                gesturePos5 = {posX: 331, poxY: 210};
                gesturePos6 = {posX: 361, poxY: 409};
                gesturePos7 = {posX: 375, poxY: 665};
                gesturePos8 = {posX: 380, poxY: 824};
                gesturePos9 = {posX: 386, poxY: 977};
                gesturePos10 = {posX: 393, poxY: 1177};
                gesturePath = {positions: [gesturePos1, gesturePos2, gesturePos3, gesturePos4, gesturePos5,
                                           gesturePos6, gesturePos7, gesturePos8, gesturePos9, gesturePos10],
                               durationTime: 100};
                this.gestureInject(caseName, gesturePath);
                break;
            case 'AccessibilityGestureEventTest_1300'://'down'
            console.info('GestureEventTest processCase down');
                gesturePos1 = {posX: 352, poxY: 250};
                gesturePos2 = {posX: 371, poxY: 462};
                gesturePos3 = {posX: 377, poxY: 828};
                gesturePos4 = {posX: 378, poxY: 956};
                gesturePos5 = {posX: 385, poxY: 1121};
                gesturePath = {positions: [gesturePos1, gesturePos2, gesturePos3, gesturePos4, gesturePos5], durationTime: 100};
                this.gestureInject(caseName, gesturePath);
                break;
            case 'AccessibilityGestureEventTest_1400'://'downThenLeft'
            console.info('GestureEventTest processCase downThenLeft');
                gesturePos1 = {posX: 404, poxY: 177};
                gesturePos2 = {posX: 406, poxY: 318};
                gesturePos3 = {posX: 405, poxY: 459};
                gesturePos4 = {posX: 415, poxY: 764};
                gesturePos5 = {posX: 432, poxY: 910};
                gesturePos6 = {posX: 335, poxY: 935};
                gesturePos7 = {posX: 262, poxY: 934};
                gesturePos8 = {posX: 182, poxY: 933};
                gesturePos9 = {posX: 24, poxY: 929};
                gesturePath = {positions: [gesturePos1, gesturePos2, gesturePos3, gesturePos4, gesturePos5,
                                           gesturePos6, gesturePos7, gesturePos8, gesturePos9], durationTime: 100};
                this.gestureInject(caseName, gesturePath);
                break;
            case 'AccessibilityGestureEventTest_1500'://'downThenRight'
            console.info('GestureEventTest processCase downThenRight');
                gesturePos1 = {posX: 317, poxY: 247};
                gesturePos2 = {posX: 318, poxY: 393};
                gesturePos3 = {posX: 299, poxY: 614};
                gesturePos4 = {posX: 280, poxY: 766};
                gesturePos5 = {posX: 278, poxY: 919};
                gesturePos6 = {posX: 419, poxY: 961};
                gesturePos7 = {posX: 502, poxY: 957};
                gesturePos8 = {posX: 627, poxY: 939};
                gesturePath = {positions: [gesturePos1, gesturePos2, gesturePos3, gesturePos4, gesturePos5,
                                           gesturePos6, gesturePos7, gesturePos8], durationTime: 100};
                this.gestureInject(caseName, gesturePath);
                break;
            case 'AccessibilityGestureEventTest_1600'://'downThenUp'
            console.info('GestureEventTest processCase downThenUp');
                gesturePos1 = {posX: 321, poxY: 213};
                gesturePos2 = {posX: 346, poxY: 407};
                gesturePos3 = {posX: 354, poxY: 664};
                gesturePos4 = {posX: 356, poxY: 833};
                gesturePos5 = {posX: 358, poxY: 970};
                gesturePos6 = {posX: 357, poxY: 738};
                gesturePos7 = {posX: 349, poxY: 603};
                gesturePos8 = {posX: 344, poxY: 450};
                gesturePos9 = {posX: 342, poxY: 304};
                gesturePos10 = {posX: 340, poxY: 115};
                gesturePath = {positions: [gesturePos1, gesturePos2, gesturePos3, gesturePos4, gesturePos5,
                                           gesturePos6, gesturePos7, gesturePos8, gesturePos9, gesturePos10],
                               durationTime: 100};
                this.gestureInject(caseName, gesturePath);
                break;
            default:
                console.warn('GestureEventTest processCase unknown!!!!!!!!!!');
                break;
        }
    }

    private async gestureInject(caseName: string, gesturePath: object) {
        let ret = await this.context?.gestureInject(gesturePath, () => {});
        console.info('GestureEventTest processCase: ' + caseName + ' ret: ' + ret);
    }
}