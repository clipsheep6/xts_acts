import app from '@system.app'
import Context from '@ohos.napi_context'
import wifi_native_js from '@ohos.wifi_native_js'

import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

// delay x ms
function sleep(delay) {
    var start = (new Date()).getTime();
    while ((new Date()).getTime() - start < delay) {
        continue;
    }
}

var wifiConfig = {
    "ssid":"HUAWEI P30",
    "bssid":"",
    "preSharedKey":"12345678",
    "isHiddenSsid":false,
    "securityType":3,
}

describe('appInfoTest', function () {
    console.log("*************[wifi_test]start wifi js unit test[ver:10]*************");
    it('wifi_js_unit_test_001', 0, function () {
        console.info("[wifi_test] wifi enable | active | disable test.");
        expect(wifi_native_js.enableWifi()).assertTrue();
        sleep(3000);
        expect(wifi_native_js.isWifiActive()).assertTrue();
        expect(wifi_native_js.disableWifi()).assertTrue();
        sleep(3000);
        expect(wifi_native_js.isWifiActive()).assertFalse();
    })

    it('wifi_js_unit_test_002', 0, async function (done) {
        console.info("[wifi_test] wifi scan test.");
        expect(wifi_native_js.enableWifi()).assertTrue();
        sleep(3000);

        expect(wifi_native_js.scan()).assertTrue();
        sleep(3000);

        wifi_native_js.getScanInfos(result => {
            console.info("[wifi_test] wifi scan result call back.");
            expect(Object.keys(result).length).assertLarger(0);
        })

        sleep(3000);
        expect(wifi_native_js.scan()).assertTrue();
        sleep(3000);

        wifi_native_js.getScanInfos().then(result => {
            console.info("[wifi_test] wifi scan result call promise.");
            expect(Object.keys(result).length).assertLarger(0);
        });

        expect(wifi_native_js.disableWifi()).assertTrue();
        sleep(3000);
        done();
    })

    it('wifi_js_unit_test_003', 0, function () {
        console.info("[wifi_test] wifi get signal level test.");
        expect(wifi_native_js.enableWifi()).assertTrue();
        sleep(3000);
        expect(wifi_native_js.getSignalLevel(1, 1)).assertEqual(4);
        expect(wifi_native_js.disableWifi()).assertTrue();
        sleep(3000);
    })

    it('wifi_js_unit_test_004', 0, function () {
        console.info("[wifi_test] wifi connect to device test.");

        expect(wifi_native_js.enableWifi()).assertTrue();
        sleep(3000);

        expect(wifi_native_js.connectToDevice(wifiConfig)).assertTrue();

        sleep(5000);
        expect(wifi_native_js.disConnect()).assertTrue();
        sleep(2000);

        expect(wifi_native_js.disableWifi()).assertTrue();
        sleep(3000);
    })

    it('wifi_js_unit_test_005', 0, async function (done) {
        console.info("[wifi_test] wifi add device config | connect to | disconnect test[1].");

        expect(wifi_native_js.enableWifi()).assertTrue();
        sleep(3000);
        wifi_native_js.addDeviceConfig(wifiConfig, (result) => {
            expect(result).assertLarger(0);
            console.info("[wifi_test] add device config callback: " + result);
            expect(wifi_native_js.connectToNetwork(result)).assertTrue();

            sleep(5000);
            console.info("[wifi_test] test_005 call back-> start disconnect wifi: " + result);
            expect(wifi_native_js.disConnect()).assertTrue();
            sleep(3000);
            expect(wifi_native_js.disableWifi()).assertTrue();
        });
        done();
    })

    // Separate the test cases 003 and 004
    sleep(20000);

    it('wifi_js_unit_test_006', 0, async function (done) {
        console.info("[wifi_test] wifi add device config | connect to | disconnect test[2].");

        expect(wifi_native_js.enableWifi()).assertTrue();
        sleep(3000);
        wifi_native_js.addDeviceConfig(wifiConfig).then(
            result => {
                console.info("[wifi_test] add device config promise result: " + result);
                expect(result).assertLarger(0);
                console.info("[wifi_test] wifi addDeviceConfig promise result: " + result);
                expect(wifi_native_js.connectToNetwork(result)).assertTrue();

                sleep(5000);
                console.info("[wifi_test] test_006 promise-> start disconnect wifi: " + result);
                expect(wifi_native_js.disConnect()).assertTrue();
                sleep(3000);
                expect(wifi_native_js.disableWifi()).assertTrue();
                sleep(3000);
            }
        );
        done();
    })

    console.log("*************[wifi_test] start wifi js unit test end*************");
})

