/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License"),
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

/**
    * @tc.number     wifiStateChange_0001
    * @tc.name       SUB_Communication_WiFi_Sta_wifiStateChange_0001
    * @tc.desc       Test wifiStateChange callback
    */
it('SUB_Communication_WiFi_Sta_wifiStateChange_0001', 0, async function (done) {
    wifi.on('wifiStateChange', async result => {    //这里这个result是Callback<number>吗？
        console.info("wifiStateChange callback, result:" + JSON.stringify(result));
        expect(true).assertEqual(result !=null);
        let promise = new Promise((resolve) => { //这里的promise是promise形式的意思么？
            wifi.off('wifiStateChange', result => {
                console.info("offwifiStateChange callback, result: " + JSON.stringify(result));
                expect(true).assertEqual(result !=null);
                resolve()
            });
        })
        await promise.then(done)
    });
    done();
})