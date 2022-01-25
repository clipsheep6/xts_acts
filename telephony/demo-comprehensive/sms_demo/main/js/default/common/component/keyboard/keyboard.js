/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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

// @ts-ignore
import importChartKeyboard from '../../../common/data/keyboard_chart.json'
// @ts-ignore
import importNumberKeyboard from '../../../common/data/keyboard_number.json'

/**
 * 输入值变化
 * on-input-change(value);
 */
var instance;
var position = 0;
const DEBUG = false;
var lastInputValue = "";
export default {
    props: {
        input: {
            default: ''
        },
        isMinMode: {
            default: false
        }
    },
    data: {
        numberInput: false,
        chartKeyboard: [{
                            "icon": false,
                            "lowerCaseValue": "HD",
                            "styleClass": "none",
                            "type": "holder",
                            "value": "HD"
                        }],
        numberKeyboard: {
            "fun": [{
                        "icon": false,
                        "lowerCaseValue": "?",
                        "styleClass": "input",
                        "type": "inputPunctuation",
                        "value": "?"
                    }],
            "number": [{
                           "icon": false,
                           "lowerCaseValue": "?",
                           "styleClass": "input",
                           "type": "inputPunctuation",
                           "value": "?"
                       }],
            "punctuation": [{
                                "icon": false,
                                "lowerCaseValue": "?",
                                "styleClass": "input",
                                "type": "inputPunctuation",
                                "value": "?"
                            }]
        },
        toUpperCase: true,
    },
    onInit() {
        instance = this;
        let screenWidth = 360;
        let outMargin = 2 * 5;
        let count = 10;
        let eachMargin = 2 * 3;
        let eachWidth = ((screenWidth - outMargin) / count) - eachMargin;
        this.chartKeyboard = importChartKeyboard;
        this.numberKeyboard = importNumberKeyboard;
        position = this.input.length;
        this.$watch('input', 'onInputSetChange')
    },
    switchVisibility() {
        this.isMinMode = !this.isMinMode;
    },
    onInputSetChange() {
        if (DEBUG) {
            console.log('onInputSetChange-------->:' + this.input);
        }
        let changeLength = Math.abs(lastInputValue.length - this.input.length);
        if (changeLength != 1) {
            position = this.input.length + 1;
            if (DEBUG) {
                console.log("输入法内容变化, 来自外部:" + changeLength)
            }
        } else if (DEBUG) {
            console.log("输入法内容变化, 来自输入:" + changeLength)
        }
        lastInputValue = this.input;
        this.drawShowText();
    },
    onStartMultiInput(clickKey) {
        if ('switchInput' != clickKey.key) {
            this.forClickKeyID = setInterval(function () {
                instance.onKeyClick(clickKey);
            }, 50);
        }
    },
    onStopMultiInput() {
        clearTimeout(this.forClickKeyID);
    },
    onKeyClick(clickKey) {
        if (DEBUG) {
            console.log("onKeyClick" + JSON.stringify(clickKey));
        }
        switch (clickKey.type) {
            case 'fun':
            this.handleFunKey(clickKey);
            break
            case 'inputPunctuation': // 标点符号
            if ('space' === clickKey.key) {
                this.appendInput(" ");
            } else {
                this.appendInput(clickKey);
            }
            break
            case 'inputNumber': // 数字
            case 'inputChar': // 字母
            this.appendInput(clickKey);
            break
        }
    },
    appendInput(key) {
        let stringInput;
        if (typeof key === 'string') {
            stringInput = key;
        } else {
            stringInput = this.toUpperCase ? key.value : key.lowerCaseValue;
        }

        let startText = this.input.substring(0, position);
        let endText = this.input.substring(position, this.input.length);
        startText += stringInput;
        position = position + 1;
        this.input = startText + endText;
        this.notifyChange(true);
    },
    notifyChange(notify) {
        if (DEBUG) {
            console.log("position: " + position);
        }
        if (notify) {
            this.$emit('onInputChange', this.input)
        }
    },
    drawShowText() {
        const inputRef = this.$refs.showText;
        const inputContext = inputRef.getContext('2d');
        inputContext.clearRect(0, 0, 360, 200);
        inputContext.font = '18px';
        let startText = this.input.substring(0, position);
        let endText = this.input.substring(position, this.input.length);
        let paddingLeft = 8;
        inputContext.fillText(startText, paddingLeft, 18);
        let startTextMetrics = inputContext.measureText(startText);
        inputContext.fillText(endText, startTextMetrics.width + paddingLeft, 18);

        if (this.flashFocusTask != null) {
            clearTimeout(this.flashFocusTask);
        }
        inputContext.lineWidth = 2;
        this.flashFocusTask = setInterval(function () {
            let flashFocusWidth = 2;
            if (this.showFocus) {
                inputContext.clearRect(startTextMetrics.width + paddingLeft - 1, 0, flashFocusWidth, 30);
            } else {
                instance.drawFocusFlash(inputContext, startTextMetrics.width + paddingLeft);
            }
            this.showFocus = !this.showFocus;
        }, 450);
        this.drawFocusFlash(inputContext, startTextMetrics.width + paddingLeft);
    },
    drawFocusFlash(canvas, startX) {
        canvas.beginPath();
        canvas.lineCap = 'round';
        canvas.strokeStyle = '#FF0000';
        canvas.moveTo(startX, 2);
        canvas.lineTo(startX, 20);
        canvas.stroke();
    },
    handleFunKey(funKey) {
        switch (funKey.key) {
            case 'case':
            this.toUpperCase = !this.toUpperCase;
            break
            case 'delete':
            if (this.input != null) {
                let startText = this.input.substring(0, position);
                let endText = this.input.substring(position, this.input.length);
                position = Math.max(0, position - 1);
                this.input = startText.substring(0, startText.length - 1) + endText;
                this.notifyChange(true);
            }
            break
            case 'enter':
            break
            case 'lastFocus':
            position = Math.max(0, position - 1);
            this.drawShowText();
            break
            case 'nextFocus':
            position = Math.min(this.input.length, position + 1);
            this.drawShowText();
            break
            case 'switchInput':
            this.numberInput = !this.numberInput;
        }
    },
    done() {
        console.log("done")
    }
}
