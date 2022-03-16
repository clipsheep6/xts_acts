/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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
import app from '@system.app'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
import window from '@ohos.window'
import display from '@ohos.display'

describe('display_test', function () {

    beforeAll(function () {
    })
    beforeEach(function () {
    })
    afterEach(function () {
    })
    afterAll(function () {
    })

    /**
     * @tc.number		SUB_WMS_FAMODELGETDEFALUTDISPLAY_JSAPI_001
     * @tc.name			Test getDefaultDisplayTest1.
     * @tc.desc			To test the function of obtaining the default screen.
     */
    it('faModelGetDefaultDisplayTest1', 0, async function (done) {
        console.log('jsunittest faModelGetDefaultDisplayTest1 begin')
        display.getDefaultDisplay().then(dsp => {
            console.log('jsunittest faModelGetDefaultDisplayTest1 getDefaultDisplay id :' + dsp.id)
            console.log('jsunittest faModelGetDefaultDisplayTest1 getDefaultDisplay refreshRate :' + dsp.refreshRate)
            console.log('jsunittest faModelGetDefaultDisplayTest1 getDefaultDisplay width :' + dsp.width)
            console.log('jsunittest faModelGetDefaultDisplayTest1 getDefaultDisplay height :' + dsp.height)
            expect(dsp.id != null).assertTrue();
            expect(dsp.refreshRate != null).assertTrue();
            expect(dsp.width != null).assertTrue();
            expect(dsp.height != null).assertTrue();
            done();
        }).catch((err) => {
            console.log('jsunittest faModelGetDefaultDisplayTest1 getDefaultDisplay failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number    SUB_WMS_FAMODELGETDEFALUTDISPLAY_JSAPI_001
     * @tc.name      Test faModelGetDefaultDisplayTest2.
     * @tc.desc      To test the function if obtaining the default screen.
     */
    it('faModelGetDefaultDisplayTest2', 0, async function (done) {
        console.log('jsunittest faModelGetDefaultDisplayTest2 begin');
        display.getDefaultDisplay((err, data) => {
            if (err.code != 0) {
                console.log('jsunittest faModelGetDefaultDisplayTest2 getDefaultDisplay callback fail' + JSON.stringify(err.code));
                expect().assertFail();
                done();
            }
            console.log('jsunittest faModelGetDefaultDisplayTest2 getDefaultDisplay id :' + JSON.stringify(data));
            console.log('jsunittest faModelGetDefaultDisplayTest2 getDefaultDisplay id :' + data.id);
            console.log('jsunittest faModelGetDefaultDisplayTest2 getDefaultDisplay refreshRate :' + data.refreshRate);
            console.log('jsunittest faModelGetDefaultDisplayTest2 getDefaultDisplay width :' + data.width);
            console.log('jsunittest faModelGetDefaultDisplayTest2 getDefaultDisplay height :' + data.height);
            expect(data.id != null).assertTrue();
            expect(data.refreshRate != null).assertTrue();
            expect(data.width != null).assertTrue();
            expect(data.height != null).assertTrue();
            done();
        }).catch((err) => {
            console.log('jsunittest faModelGetDefaultDisplayTest2 getDefaultDisplay failed,err: ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number		SUB_WMS_FAMODELGETALLDISPLAY_JSAPI_001
     * @tc.name			Test faModeGetAllDisplayTest1.
     * @tc.desc			To verify the function of obtaining all screens.
     */
    it('faModelGetAllDisplayTest1', 0, async function (done) {
        console.log('jsunittest faModelGetAllDisplayTest1 begin')
        display.getAllDisplay().then(dsp => {
            console.log('jsunittest faModelGetAllDisplayTest1 getDefaultDisplay id :' + JSON.stringify(dsp))
            console.log('jsunittest faModelGetAllDisplayTest1 getDefaultDisplay id :' + dsp[0].id)
            console.log('jsunittest faModelGetAllDisplayTest1 getDefaultDisplay refreshRate :' + dsp[0].refreshRate)
            console.log('jsunittest faModelGetAllDisplayTest1 getDefaultDisplay width :' + dsp[0].width)
            console.log('jsunittest faModelGetAllDisplayTest1 getDefaultDisplay height :' + dsp[0].height)
            expect(dsp[0].id != null).assertTrue();
            expect(dsp[0].refreshRate != null).assertTrue();
            expect(dsp[0].width != null).assertTrue();
            expect(dsp[0].height != null).assertTrue();
            done();
        }).catch((err) => {
            console.log('jsunittest faModelGetDefaultDisplayTest1 getDefaultDisplay failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number    SUB_WMS_FAMODELGETALLDISPLAY_JSAPI_002
     * @tc.name      Test faModelGetAllDisplayTest2.
     * @tc.desc      To test the function if obtaining the default screen.
     */
    it('faModelGetAllDisplayTest2', 0, async function (done) {
        console.log('jsunittest faModelGetAllDisplayTest2 begin');
        display.getAllDisplay((err, data) => {
            console.log('jsunittest faModelGetAllDisplayTest2 callback data' + data);
            if (err.code != 0) {
                console.log('jsunittest faModelGetAllDisplayTest2 getAllDisplay callback fail');
                expect().assertFail();
                done();
            }
            console.log('jsunittest faModelGetAllDisplayTest2 getDefaultDisplay id :' + JSON.stringify(data));
            console.log('jsunittest faModelGetAllDisplayTest2 getDefaultDisplay id :' + data[0].id);
            console.log('jsunittest faModelGetAllDisplayTest2 getDefaultDisplay refreshRate :' + data[0].refreshRate);
            console.log('jsunittest faModelGetAllDisplayTest2 getDefaultDisplay width :' + data[0].width);
            console.log('jsunittest faModelGetAllDisplayTest2 getDefaultDisplay height :' + data[0].height);
            expect(data[0].id != null).assertTrue();
            expect(data[0].refreshRate != null).assertTrue();
            expect(data[0].width != null).assertTrue();
            expect(data[0].height != null).assertTrue();
            done();
        })
    })


})
