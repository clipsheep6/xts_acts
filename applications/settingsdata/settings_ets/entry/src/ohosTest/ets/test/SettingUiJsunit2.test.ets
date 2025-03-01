
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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "@ohos/hypium";
import settings from '@ohos.settings'
import { BusinessError } from '@ohos.base';

interface myObj {
  aa: string
}

interface myObj2 {
  "code": number
}
export default function settingUiJsunit() {
  describe('appInfoTest', ()=> {
    console.log("************* settings Test start*************");
    it('settings_uri_test_001',  0,(done: Function) =>  {
      let name = 'settings.screen.test';
      let uri = settings.getUriSync(name);
      console.info("[settings_uri_test_001] uri is: " + uri);
      let uri2 = settings.getUriSync(name);
      console.info("[settings_uri_test_001] uri2 is: " + uri2);
      expect(uri).assertEqual(uri2);
      done();
    });

    it('settings_uri_test_002', 0, async (done: Function) => {
      let name = '';
      let uri = settings.getUriSync(name);
      console.info("[settings_uri_test_002] uri is: " + uri);
      expect(uri).assertEqual('datashare:///com.ohos.settingsdata/entry/settingsdata/SETTINGSDATA?Proxy=true&key=')
      done();
    });

    it('settings_uri_test_003', 0, async (done: Function) => {
      let name = '122.00';
      try {
        let uri = settings.getUriSync(name);
        console.info("[settings_uri_test_003] uri is: " + uri);
      } catch (err) {
        let errMsg: string = err;
        console.error("[settings_uri_test_003] error = " + errMsg);
        expect(errMsg == "Error: assertion (valueType == napi_string) failed: Wrong argument type. String expected.")
          .assertTrue();
      }
      done();
    });

    it('settings_uri_test_004', 0, async (done: Function) => {
      let name = 'settings.screen.brightness';
      let uri = settings.getUriSync(name);
      console.info("[settings_uri_test_004] uri is: " + uri);
      expect(uri).assertEqual('datashare:///com.ohos.settingsdata/entry/settingsdata/SETTINGSDATA?Proxy=true&key=settings.screen.brightness')
      done();
    });

    it('settings_get_value_013', 0, async (done: Function) => {
      let name = '1322.00';
      try {
        let uri = settings.getUriSync(name);
        console.info("[settings_get_value_013] uri is: " + uri);
      } catch (err) {
        let errMsg: string = err;
        console.error("[settings_get_value_013] error = " + errMsg);
        expect(errMsg == "Error: assertion (valueType == napi_string) failed: Wrong argument type. String expected.")
          .assertTrue();
      }
      done();
    });

    it('settings_get_value_014', 0, async (done: Function) => {
      let name = null;
      try {
        let uri = settings.getUriSync(name);
        console.info("[settings_get_value_014] uri is: " + uri);
      } catch (err) {
        let errMsg: string = err;
        console.error("[settings_get_value_014] error = " + errMsg);
        expect(errMsg == "Error: assertion (valueType == napi_string) failed: Wrong argument type. String expected.")
          .assertTrue();
      }
      done();
    });

    it('settings_get_value_0015', 0, async (done: Function) => {
      let name = '1332';
      try {
        let uri = settings.getUriSync(name);
        console.info("[settings_get_value_0015] uri is: " + uri);
      } catch (err) {
        let errMsg: string = err;
        console.error("[settings_get_value_0015] error = " + errMsg);
        expect(errMsg == "Error: assertion (valueType == napi_string) failed: Wrong argument type. String expected.")
          .assertTrue();
      }
      done();
    });

    it('settings_get_value_0016', 0, async (done: Function) => {
      let name = '1332';
      try {
        let uri = settings.getUriSync(name);
        console.info("[settings_get_value_0016] uri is: " + uri);
      } catch (err) {
        let errMsg: myObj = err;
        console.error("[settings_get_value_0016] error = " + errMsg);
        expect(String(errMsg) == "Error: assertion (valueType == napi_string) failed: Wrong argument type. String expected.")
          .assertTrue();
      }
      done();
    });

    it('settings_get_value_0017', 0, async (done: Function) => {
      let name = '1332';
      try {
        let uri = settings.getUriSync(name);
        console.info("[settings_get_value_0017] uri is: " + uri);
      } catch (err) {
        let errMsg: string = err;
        console.error("[settings_get_value_0017] error = " + errMsg);
        expect(errMsg == "Error: assertion (valueType == napi_string) failed: Wrong argument type. String expected.")
          .assertTrue();
      }
      done();
    });

    it('settings_set_value_026', 0, async (done: Function) => {
      let name = '1332';
      try {
        let uri = settings.getUriSync(name);
        console.info("[settings_set_value_026] uri is: " + uri);
      } catch (err) {
        let errMsg: string = err;
        console.error("[settings_set_value_026] error = " + errMsg);
        expect(errMsg == "Error: assertion (valueType == napi_string) failed: Wrong argument type. String expected.")
          .assertTrue();
      }
      done();
    });

    it('settings_set_value_027', 0, async (done: Function) => {
      let name = null;
      try {
        let uri = settings.getUriSync(name);
        console.info("[settings_set_value_027] uri is: " + uri);
      } catch (err) {
        let errMsg: string = err;
        console.error("[settings_set_value_027] error = " + errMsg);
        expect(errMsg == "Error: assertion (valueType == napi_string) failed: Wrong argument type. String expected.")
          .assertTrue();
      }
      done();
    });

    it('settings_set_value_028', 0, async (done: Function) => {
      let name = '2323';
      try {
        let uri = settings.getUriSync(name);
        console.info("[settings_set_value_028] uri is: " + uri);
      } catch (err) {
        let errMsg: string = err;
        console.error("[settings_set_value_028] error = " + errMsg);
        expect(errMsg == "Error: assertion (valueType == napi_string) failed: Wrong argument type. String expected.")
          .assertTrue();
      }
      done();
    });

    it('settings_set_value_029', 0, async (done: Function) => {
      let name = '2323';
      try {
        let uri = settings.getUriSync(name);
        console.info("[settings_set_value_029] uri is: " + uri);
      } catch (err) {
        let errMsg: string = err;
        console.error("[settings_set_value_029] error = " + errMsg);
        expect(errMsg == "Error: assertion (valueType == napi_string) failed: Wrong argument type. String expected.")
          .assertTrue();
      }
      done();
    });

    it('settings_set_value_030', 0, async (done: Function) => {
      let name = '2323';
      try {
        let uri = settings.getUriSync(name);
        console.info("[settings_set_value_030] uri is: " + uri);
      } catch (err) {
        let errMsg: string = err;
        console.error("[settings_set_value_030] error = " + errMsg);
        expect(errMsg == "Error: assertion (valueType == napi_string) failed: Wrong argument type. String expected.")
          .assertTrue();
      }
      done();
    });

    it('settings_set_value_031', 0, async (done: Function) => {
      let name = '2323';
      try {
        let uri = settings.getUriSync(name);
        console.info("[settings_set_value_031] uri is: " + uri);
      } catch (err) {
        let errMsg: string = err;
        console.error("[settings_set_value_031] error = " + errMsg);
        expect(errMsg == "Error: assertion (valueType == napi_string) failed: Wrong argument type. String expected.")
          .assertTrue();
      }
      done();
    });

    it('settings_set_value_032', 0, async (done: Function) => {
      let name = '2323';
      try {
        let uri = settings.getUriSync(name);
        console.info("[settings_set_value_032] uri is: " + uri);
      } catch (err) {
        let errMsg: string = err;
        console.error("[settings_set_value_032] error = " + errMsg);
        expect(errMsg == "Error: assertion (valueType == napi_string) failed: Wrong argument type. String expected.")
          .assertTrue();
      }
      done();
    });

    it('settings_get_value_035', 0, async (done: Function) =>{
      let name  = 'settings.screen.brightness35';
      let uriPrefix = 'datashare:///com.ohos.settingsdata/entry/settingsdata/SETTINGSDATA?Proxy=true&key='
      let expectValue = uriPrefix + name;
      try{
        settings.getURI(name).then(data => {
          console.info("[settings_get_uri_035] uri is: " + data);
          expect(data).assertEqual(expectValue);
          done();
        })
      } catch(err){
        console.info("[settings_get_uri_035] error is: " + String(err));
        expect(true).assertTrue();
        done();
        return;
      }
    });

    it('settings_get_value_036', 0, async (done: Function) =>{
      let name  = 'settings.screen.brightness36';
      let uriPrefix = 'datashare:///com.ohos.settingsdata/entry/settingsdata/SETTINGSDATA?Proxy=true&key='
      let expectValue = uriPrefix + name;
      try{
        settings.getURI(name, (data) =>{
          console.info("[settings_get_uri_036] uri is: " + data);
          expect(data).assertEqual(expectValue);
          done();
        })
      }catch(err){
        console.info("[settings_get_uri_036] error is: " + String(err));
        expect(true).assertTrue();
        done();
        return;
      }
    });

    it('settings_get_value_037',0,async (done: Function) => {
      let str ="settings.date.date_format"
      expect(str).assertEqual(settings.date.DATE_FORMAT);
      done();
    });

    it('settings_get_value_038',0,async (done: Function) => {
      let str ="settings.date.time_format"
      expect(str).assertEqual(settings.date.TIME_FORMAT);
      done();
    });

    it('settings_get_value_039',0,async (done: Function) => {
      let str ="settings.date.auto_gain_time"
      expect(str).assertEqual(settings.date.AUTO_GAIN_TIME);
      done();
    });

    it('settings_get_value_040',0,async (done: Function) => {
      let str ="settings.date.auto_gain_time_zone"
      expect(str).assertEqual(settings.date.AUTO_GAIN_TIME_ZONE);
      done();
    });

    it('settings_get_value_041',0,async (done: Function) => {
      let str ="settings.display.font_scale"
      expect(str).assertEqual(settings.display.FONT_SCALE);
      done();
    });

    it('settings_get_value_042',0,async (done: Function) => {
      let str ="settings.display.screen_brightness_status"
      expect(str).assertEqual(settings.display.SCREEN_BRIGHTNESS_STATUS);
      done();
    });

    it('settings_get_value_043',0,async (done: Function) => {
      let str ="settings.display.auto_screen_brightness"
      expect(str).assertEqual(settings.display.AUTO_SCREEN_BRIGHTNESS);
      done();
    });

    it('settings_get_value_044',0,async (done: Function) => {
      let int = 1
      expect(int).assertEqual(settings.display.AUTO_SCREEN_BRIGHTNESS_MODE);
      done();
    });

    it('settings_get_value_045',0,async (done: Function) => {
      let int = 0
      expect(int).assertEqual(settings.display.MANUAL_SCREEN_BRIGHTNESS_MODE);
      done();
    });

    it('settings_get_value_046',0,async (done: Function) => {
      let str ="settings.display.screen_off_timeout"
      expect(str).assertEqual(settings.display.SCREEN_OFF_TIMEOUT);
      done();
    });

    it('settings_get_value_047',0,async (done: Function) => {
      let str ="settings.display.default_screen_rotation"
      expect(str).assertEqual(settings.display.DEFAULT_SCREEN_ROTATION);
      done();
    });

    it('settings_get_value_048',0,async (done: Function) => {
      let str ="settings.display.animator_duration_scale"
      expect(str).assertEqual(settings.display.ANIMATOR_DURATION_SCALE);
      done();
    });

    it('settings_get_value_049',0,async (done: Function) => {
      let str ="settings.display.transition_animation_scale"
      expect(str).assertEqual(settings.display.TRANSITION_ANIMATION_SCALE);
      done();
    });

    it('settings_get_value_050',0,async (done: Function) => {
      let str ="settings.display.window_animation_scale"
      expect(str).assertEqual(settings.display.WINDOW_ANIMATION_SCALE);
      done();
    });

    it('settings_get_value_051',0,async (done: Function) => {
      let str = "settings.display.display_inversion_status"
      expect(str).assertEqual(settings.display.DISPLAY_INVERSION_STATUS);
      done();
    });

    it('settings_get_value_052',0,async (done: Function) => {
      let str = "settings.general.setup_wizard_finished"
      expect(str).assertEqual(settings.general.SETUP_WIZARD_FINISHED);
      done();
    });

    it('settings_get_value_053',0,async (done: Function) => {
      let str = "settings.general.end_button_action"
      expect(str).assertEqual(settings.general.END_BUTTON_ACTION);
      done();
    });

    it('settings_get_value_054',0,async (done: Function) => {
      let str = "settings.general.airplane_mode_status"
      expect(str).assertEqual(settings.general.AIRPLANE_MODE_STATUS);
      done();
    });

    it('settings_get_value_055',0,async (done: Function) => {
      let str = "settings.general.accelerometer_rotation_status"
      expect(str).assertEqual(settings.general.ACCELEROMETER_ROTATION_STATUS);
      done();
    });

    it('settings_get_value_056',0,async (done: Function) => {
      let str = "settings.general.device_provision_status"
      expect(str).assertEqual(settings.general.DEVICE_PROVISION_STATUS);
      done();
    });

    it('settings_get_value_057',0,async (done: Function) => {
      let str = "settings.general.hdc_status"
      expect(str).assertEqual(settings.general.HDC_STATUS);
      done();
    });



    it('settings_get_value_058',0,async (done: Function) => {
      let str = "settings.general.boot_counting"
      expect(str).assertEqual(settings.general.BOOT_COUNTING);
      done();
    });

    it('settings_get_value_059',0,async (done: Function) => {
      let str = "settings.general.contact_metadata_sync_status"
      expect(str).assertEqual(settings.general.CONTACT_METADATA_SYNC_STATUS);
      done();
    });

    it('settings_get_value_060',0,async (done: Function) => {
      let str = "settings.general.development_settings_status"
      expect(str).assertEqual(settings.general.DEVELOPMENT_SETTINGS_STATUS);
      done();
    });

    it('settings_get_value_061',0,async (done: Function) => {
      let str = "settings.general.device_name"
      expect(str).assertEqual(settings.general.DEVICE_NAME);
      done();
    });

    it('settings_get_value_062',0,async (done: Function) => {
      let str = "settings.general.usb_storage_status"
      expect(str).assertEqual(settings.general.USB_STORAGE_STATUS);
      done();
    });

    it('settings_get_value_063',0,async (done: Function) => {
      let str = "settings.general.debugger_waiting"
      expect(str).assertEqual(settings.general.DEBUGGER_WAITING);
      done();
    });

    it('settings_get_value_064',0,async (done: Function) => {
      let str = "settings.general.debug_app_package"
      expect(str).assertEqual(settings.general.DEBUG_APP_PACKAGE);
      done();
    });

    it('settings_get_value_065',0,async (done: Function) => {
      let str = "settings.general.accessibility_status"
      expect(str).assertEqual(settings.general.ACCESSIBILITY_STATUS);
      done();
    });

    it('settings_get_value_066',0,async (done: Function) => {
      let str = "settings.general.activated_accessibility_services"
      expect(str).assertEqual(settings.general.ACTIVATED_ACCESSIBILITY_SERVICES);
      done();
    });

    it('settings_get_value_067',0,async (done: Function) => {
      let str = "settings.general.geolocation_origins_allowed"
      expect(str).assertEqual(settings.general.GEOLOCATION_ORIGINS_ALLOWED);
      done();
    });

    it('settings_get_value_068',0,async (done: Function) => {
      let str = "settings.general.skip_use_hints"
      expect(str).assertEqual(settings.general.SKIP_USE_HINTS);
      done();
    });

    it('settings_get_value_069',0,async (done: Function) => {
      let str = "settings.general.touch_exploration_status"
      expect(str).assertEqual(settings.general.TOUCH_EXPLORATION_STATUS);
      done();
    });

    it('settings_get_value_070',0,async (done: Function) => {
      let str = "settings.input.default_input_method"
      expect(str).assertEqual(settings.input.DEFAULT_INPUT_METHOD);
      done();
    });

    it('settings_get_value_071',0,async (done: Function) =>{
      let str = "settings.input.activated_input_method_submode"
      let expectValue:string=settings.input.ACTIVATED_INPUT_METHOD_SUB_MODE;
      expect(str).assertEqual(expectValue);
      done();
    });


    it('settings_get_value_072',0,async (done: Function) =>{
      let str = "settings.input.activated_input_methods"
      expect(str).assertEqual(settings.input.ACTIVATED_INPUT_METHODS);
      done();
    });


    it('settings_get_value_073',0,async (done: Function) =>{
      let str = "settings.input.selector_visibility_for_input_method"
      expect(str).assertEqual(settings.input.SELECTOR_VISIBILITY_FOR_INPUT_METHOD);
      done();
    });


    it('settings_get_value_074',0,async (done: Function) =>{
      let str = "settings.input.auto_caps_text_input"
      expect(str).assertEqual(settings.input.AUTO_CAPS_TEXT_INPUT);
      done();
    });


    it('settings_get_value_075',0,async (done: Function) =>{
      let str = "settings.input.auto_punctuate_text_input"
      expect(str).assertEqual(settings.input.AUTO_PUNCTUATE_TEXT_INPUT);
      done();
    });


    it('settings_get_value_076',0,async (done: Function) =>{
      let str = "settings.input.auto_replace_text_input"
      expect(str).assertEqual(settings.input.AUTO_REPLACE_TEXT_INPUT);
      done();
    });


    it('settings_get_value_077',0,async (done: Function) =>{
      let str = "settings.input.show_password_text_input"
      expect(str).assertEqual(settings.input.SHOW_PASSWORD_TEXT_INPUT);
      done();
    });


    it('settings_get_value_078',0,async (done: Function) =>{
      let str = "settings.network.data_roaming_status"
      expect(str).assertEqual(settings.network.DATA_ROAMING_STATUS);
      done();
    });


    it('settings_get_value_079',0,async (done: Function) =>{
      let str = "settings.network.http_proxy_cfg"
      expect(str).assertEqual(settings.network.HTTP_PROXY_CFG);
      done();
    });


    it('settings_get_value_080',0,async (done: Function) =>{
      let str = "settings.network.network_preference_usage"
      expect(str).assertEqual(settings.network.NETWORK_PREFERENCE_USAGE);
      done();
    });


    it('settings_get_value_081',0,async (done: Function) =>{
      let str = "settings.phone.rtt_calling_status"
      expect(str).assertEqual(settings.phone.RTT_CALLING_STATUS);
      done();
    });


    it('settings_get_value_082',0,async (done: Function) =>{
      let str = "settings.sound.vibrate_while_ringing"
      expect(str).assertEqual(settings.sound.VIBRATE_WHILE_RINGING);
      done();
    });


    it('settings_get_value_083',0,async (done: Function) =>{
      let str = "settings.sound.default_alarm_alert"
      expect(str).assertEqual(settings.sound.DEFAULT_ALARM_ALERT);
      done();
    });


    it('settings_get_value_084',0,async (done: Function) =>{
      let str = "settings.sound.dtmf_tone_type_while_dialing"
      expect(str).assertEqual(settings.sound.DTMF_TONE_TYPE_WHILE_DIALING);
      done();
    });


    it('settings_get_value_085',0,async (done: Function) =>{
      let str = "settings.sound.dtmf_tone_while_dialing"
      expect(str).assertEqual(settings.sound.DTMF_TONE_WHILE_DIALING);
      done();
    });


    it('settings_get_value_086',0,async (done: Function) =>{
      let str = "settings.sound.haptic_feedback_status"
      expect(str).assertEqual(settings.sound.HAPTIC_FEEDBACK_STATUS);
      done();
    });


    it('settings_get_value_087',0,async (done: Function) =>{
      let str = "settings.sound.affected_mode_ringer_streams"
      expect(str).assertEqual(settings.sound.AFFECTED_MODE_RINGER_STREAMS);
      done();
    });


    it('settings_get_value_088',0,async (done: Function) =>{
      let str = "settings.sound.affected_mute_streams"
      expect(str).assertEqual(settings.sound.AFFECTED_MUTE_STREAMS);
      done();
    });


    it('settings_get_value_089',0,async (done: Function) =>{
      let str = "settings.sound.default_notification_sound"
      expect(str).assertEqual(settings.sound.DEFAULT_NOTIFICATION_SOUND);
      done();
    });


    it('settings_get_value_090',0,async (done: Function) =>{
      let str = "settings.sound.default_ringtone"
      expect(str).assertEqual(settings.sound.DEFAULT_RINGTONE);
      done();
    });

    it('settings_get_value_091',0,async (done: Function) => {
      let str ="settings.sound.sound_effects_status"
      expect(str).assertEqual(settings.sound.SOUND_EFFECTS_STATUS);
      done();
    });

    it('settings_get_value_092',0,async (done: Function) => {
      let str ="settings.sound.vibrate_status"
      expect(str).assertEqual(settings.sound.VIBRATE_STATUS);
      done();
    });

    it('settings_get_value_097',0,async (done: Function) => {
      let str ="settings.wireless.bluetooth_radio"
      expect(str).assertEqual(settings.wireless.BLUETOOTH_RADIO);
      done();
    });

    it('settings_get_value_098',0,async (done: Function) => {
      let str ="settings.wireless.cell_radio"
      expect(str).assertEqual(settings.wireless.CELL_RADIO);
      done();
    });

    it('settings_get_value_099',0,async (done: Function) => {
      let str ="settings.wireless.nfc_radio"
      expect(str).assertEqual(settings.wireless.NFC_RADIO);
      done();
    });

    it('settings_get_value_100',0,async (done: Function) => {
      let str ="settings.wireless.airplane_mode_radios"
      expect(str).assertEqual(settings.wireless.AIRPLANE_MODE_RADIOS);
      done();
    });

    it('settings_get_value_101',0,async (done: Function) => {
      let str ="settings.wireless.bluetooth_status"
      expect(str).assertEqual(settings.wireless.BLUETOOTH_STATUS);
      done();
    });

    it('settings_get_value_102',0,async (done: Function) => {
      let str ="settings.wireless.bluetooth_discoverability_status"
      expect(str).assertEqual(settings.wireless.BLUETOOTH_DISCOVER_ABILITY_STATUS);
      done();
    });

    it('settings_get_value_103',0,async (done: Function) => {
      let str ="settings.wireless.bluetooth_discover_timeout"
      expect(str).assertEqual(settings.wireless.BLUETOOTH_DISCOVER_TIMEOUT);
      done();
    });

    it('settings_get_value_104',0,async (done: Function) => {
      let str ="settings.wireless.wifi_dhcp_max_retry_count"
      expect(str).assertEqual(settings.wireless.WIFI_DHCP_MAX_RETRY_COUNT);
      done();
    });

    it('settings_get_value_105',0,async (done: Function) => {
      let str ="settings.wireless.wifi_to_mobile_data_awake_timeout"
      expect(str).assertEqual(settings.wireless.WIFI_TO_MOBILE_DATA_AWAKE_TIMEOUT);
      done();
    });

    it('settings_get_value_106',0,async (done: Function) => {
      let str ="settings.wireless.wifi_status"
      expect(str).assertEqual(settings.wireless.WIFI_STATUS);
      done();
    });

    it('settings_get_value_107',0,async (done: Function) => {
      let str ="settings.wireless.wifi_watchdog_status"
      expect(str).assertEqual(settings.wireless.WIFI_WATCHDOG_STATUS);
      done();
    });

    it('settings_get_value_108',0,async (done: Function) => {
      let str ="settings.wireless.wifi_radio"
      expect(str).assertEqual(settings.wireless.WIFI_RADIO);
      done();
    });

    it('settings_get_value_109',0,async (done: Function) => {
      let str ="settings.wireless.owner_lockdown_wifi_cfg"
      expect(str).assertEqual(settings.wireless.OWNER_LOCKDOWN_WIFI_CFG);
      done();
    });

    it('settings_get_value_110',0,async (done: Function) => {
      let str ="settings.wireless.owner_lockdown_wifi_cfg"
      expect(str).assertEqual(settings.wireless.OWNER_LOCKDOWN_WIFI_CFG);
      done();
    });

    it('settings_get_value_113',0,async (done: Function)=>{
      try{console.info('test settings_get_value_113 start');
        settings.enableAirplaneMode(false,(err,data)=>{console.info('settings  test enableAirplaneMode callback ssss');
          console.info('settings test enableAirplaneMode callback err'+JSON.stringify(err.code));
          expect(JSON.stringify(err.code)).assertEqual("801");
          done();
        })
      }catch(err){console.info('settings  test enableAirplaneMode try catch err');
        expect(true).assertTrue();
        done();
        return;
      }
    });

    it('settings_get_value_114',0,async (done: Function) =>{
      try{
        settings.enableAirplaneMode(false).then((data)=>{
          console.info('settings test enableAirplaneMode promise data'+JSON.stringify(data));
          expect(false).assertTrue();
          done();
        }).catch((err: BusinessError)=>{
          console.info('settings test enableAirplaneMode promise err'+JSON.stringify(err.code));
          expect(JSON.stringify(err.code)).assertEqual("801");
          done();
          return;
        })
      }catch(err){
        console.info('settings test enableAirplaneMode try catch err'+JSON.stringify(err));
        expect(true).assertTrue();
        done();
        return;
      }
    });

    it('settings_get_value_115',0,async (done: Function) => {
      try{
        settings.canShowFloating((err,data)=>{
          console.info('settings test canShowFloating promise err'+JSON.stringify(err.code));
          expect(JSON.stringify(err.code)).assertEqual("801");
          done();
        })
      }catch(err){
        console.info('settings test canShowFloating promise err'+String(err));
        expect(true).assertTrue();
        done();
        return;
      }
    });

    it('settings_get_value_116',0,async (done: Function) => {
      try{
        let str: myObj2 = {"code":801};
        settings.canShowFloating().then((data)=>{
          console.info('settings test canShowFloating promise err'+String(data));
          // expect(String(err)).assertEqual(str);
          done();
        }).catch((err: BusinessError)=>{
          console.info('settings test canShowFloating promise err'+JSON.stringify(err.code));
          expect(JSON.stringify(err.code)).assertEqual("801");
          done();
          return;
        })
      }catch(err){
        console.info('settings test canShowFloating promise err'+String(err));
        expect(true).assertTrue();
        done();
        return;
      }
    });


  })
}
