export default class IotConstants {
  static readonly IOT_TAG = "IOT_LOG";
  static readonly IOT_NAME = "IOT";
  static readonly SID_NOT_SUPPORT: number = -1;
  static readonly RETRY_COUNT = 1;
  static readonly SCAN_DURATION = 20 * 1000;
  static readonly CONNECT_TIMERS = 20 * 1000;
  static readonly RESPONSE_TIMERS = 10 * 1000;
  static readonly IOT_NOT_INIT = 1000;
  static readonly IOT_CALL_TIME_OUT = 1004;
  static readonly IOT_NOT_INIT_MSG = "iot-kit not init";
  static readonly IOT_CONNECT_ERROR_MSG = "iot-kit not connect";
  static readonly IOT_CALL_TIME_OUT_MSG = "iot-kit time out";
  static readonly IOT_PARAMS_ERROR_MSG = "parameter verification failed";
  static readonly ON_CONNECT_STATE_CHANGED: string = 'onConnectStateChanged';
  static readonly ON_DEVICE_DATA_CHANGED: string = 'onDeviceDataChanged';
  static readonly ON_CONNECT_STATE_CHANGED_TYPE: string = 'newStatus';
  static readonly SID_ALL_SERVICES: string = 'allservices';
  static readonly CUSTOM_SEC_DATA: string = 'customSecData';
}

export enum ConnectType {
  OFFLINE = 0, // 离线
  ONLINE = 1, // 在线
  CONNECTING = 2, // 连接中
}

/**
 * 设备状态
 */
export interface InfDeviceState {
  data: Record<string, string | number>
  sid: string,
}

export interface ServicesResponse {
  seq: number,
  services: InfDeviceState[],
  vendor: InfDeviceState[],
}

function hasProperty(key: string, obj: Object) {
  let keys = Object.keys(obj);
  for (let i = 0; i < keys.length; i++) {
    if (key == keys[i]) {
      return true;
    }
  }
  return false;
}

export function analysisPayload(payloadStr: string) {
  let messageResponse = JSON.parse(payloadStr) as ServicesResponse;
  let isVendor = hasProperty("vendor", messageResponse);
  let responseArray = isVendor ? messageResponse?.vendor : messageResponse?.services;
  return responseArray;
}

export function analysisProtocol(pageName: string) {
  // 1-wifi,2-ble
  if (pageName.indexOf("WIFI") >= 0) {
    return 1;
  }
  return 2;
}

export interface PageCase {
  title: string,
  uri: string,
}

export const TestCaseList: PageCase[] = [
  { title: 'SUB_IOT_DISCOVERY_WIFI_0100', uri: 'pages/IOT/IOTDiscovery' },
  { title: 'SUB_IOT_DISCOVERY_BLE_0100', uri: 'pages/IOT/IOTDiscovery' },
  { title: 'SUB_IOT_CONNECT_WIFI_0100', uri: 'pages/IOT/IOTConnect' },
  { title: 'SUB_IOT_CONNECT_BLE_0100', uri: 'pages/IOT/IOTConnect' },
  { title: 'SUB_IOT_RETRY_CONNECT_WIFI_0100', uri: 'pages/IOT/IOTReConnect' },
  { title: 'SUB_IOT_RETRY_CONNECT_BLE_0100', uri: 'pages/IOT/IOTReConnect' },
  { title: 'SUB_IOT_PIN_CONNECT_WIFI_0100', uri: 'pages/IOT/IOTPinConnect' },
  { title: 'SUB_IOT_PIN_CONNECT_BLE_0100', uri: 'pages/IOT/IOTPinConnect' },
  { title: 'SUB_IOT_CONNECT_STATE_BLE_0100', uri: 'pages/IOT/IOTConnectState' },
  { title: 'SUB_IOT_CONNECT_STATE_WIFI_0100', uri: 'pages/IOT/IOTConnectState' },
  { title: 'SUB_IOT_CONNECT_STATE_BLE_0200', uri: 'pages/IOT/IOTConnectState' },
  { title: 'SUB_IOT_QUERY_SERVICE_BLE_0100', uri: 'pages/IOT/IOTControl' },
  { title: 'SUB_IOT_QUERY_SWITCH_SERVICE_WIFI_0100', uri: 'pages/IOT/IOTControl' },
  { title: 'SUB_IOT_QUERY_SWITCH_SERVICE_BLE_0100', uri: 'pages/IOT/IOTControl' },
  { title: 'SUB_IOT_CONTROL_SWITCH_SERVICE_WIFI_0100', uri: 'pages/IOT/IOTControl' },
  { title: 'SUB_IOT_CONTROL_SWITCH_SERVICE_BLE_0100', uri: 'pages/IOT/IOTControl' },
  { title: 'SUB_IOT_CONTROL_SWITCH_SERVICE_WIFI_0200', uri: 'pages/IOT/IOTControl' },
  { title: 'SUB_IOT_CONTROL_SWITCH_SERVICE_BLE_0200', uri: 'pages/IOT/IOTControl' },
]