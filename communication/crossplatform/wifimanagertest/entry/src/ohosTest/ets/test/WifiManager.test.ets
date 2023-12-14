import wifiManager from '@ohos.wifiManager';
import { describe, it, expect } from '@ohos/hypium';
import { Driver } from '@ohos.UiTest';

const DRIVER = Driver.create();

export default function abilityTest() {
  describe('WifiManegerTest', () => {
    console.log('*************start wifiManegerTest*************');

    /* *
    * @tc.number  TEST_STARTSCAN_001
    * @tc.name    test startScan method
    * @tc.desc    start scan
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testStartScan001', 0, async () => {
      try {
        wifiManager.startScan();
        console.log('testStartScan001 success')
        expect(true).assertTrue();
      } catch (err) {
        console.log('testStartScan001 e.code' + err.code);
        console.log('testStartScan001 e.message' + err.message);
        expect(false).assertTrue();
      }
    })

    /* *
    * @tc.number  TEST_GETSCANINFOLIST_001
    * @tc.name    test getScanInfoList method
    * @tc.desc    start scan
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetScanInfoList001', 0, () => {
      let scanInfoList = wifiManager.getScanInfoList();
      expect(scanInfoList !== null).assertTrue();
      let len = scanInfoList.length;
      console.log("wifi received scan info: " + len);
      console.log('testGetScanInfoList001 ' + JSON.stringify(scanInfoList))
    })

    /* *
    * @tc.number  TEST_SETSCANALWAYSALLOWED_001
    * @tc.name    test setScanAlwaysAllowed method
    * @tc.desc    set scanAlwaysAllowed
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testSetScanAlwaysAllowed001', 0, () => {
      try {
        let isScanAlwaysAllowed = true;
        wifiManager.setScanAlwaysAllowed(isScanAlwaysAllowed);
        let value = wifiManager.getScanAlwaysAllowed();
        console.log('testSetScanAlwaysAllowed001 ', value)
        expect(value).assertTrue()
      } catch (error) {
        console.log('testSetScanAlwaysAllowed001 e.code' + error.code);
        console.log('testSetScanAlwaysAllowed001 e.message' + error.message);
      }
    })

    /* *
    * @tc.number  TEST_SETSCANALWAYSALLOWED_002
    * @tc.name    test setScanAlwaysAllowed method
    * @tc.desc    set scanAlwaysAllowed
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testSetScanAlwaysAllowed002', 0, () => {
      try {
        let isScanAlwaysAllowed = false;
        wifiManager.setScanAlwaysAllowed(isScanAlwaysAllowed);
        let value = wifiManager.getScanAlwaysAllowed();
        console.log('testSetScanAlwaysAllowed002 ', value)
        expect(value).assertFalse()
      } catch (error) {
        console.log('testSetScanAlwaysAllowed002 e.code' + error.code);
        console.log('testSetScanAlwaysAllowed002 e.message' + error.message);
      }
    })

    /* *
    * @tc.number  TEST_GETSCANALWAYSALLOWED_001
    * @tc.name    test getScanAlwaysAllowed method
    * @tc.desc    get scanAlwaysAllowed
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetScanAlwaysAllowed001', 0, () => {
      wifiManager.setScanAlwaysAllowed(true);
      let value = wifiManager.getScanAlwaysAllowed();
      expect(value).assertTrue()
      console.log('testGetScanAlwaysAllowed001 ' + value)
    })


    /* *
    * @tc.number  TEST_GETSCANALWAYSALLOWED_002
    * @tc.name    test getScanAlwaysAllowed method
    * @tc.desc    get scanAlwaysAllowed
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetScanAlwaysAllowed002', 0, () => {
      wifiManager.setScanAlwaysAllowed(false);
      let value = wifiManager.getScanAlwaysAllowed();
      expect(value).assertFalse()
      console.log('testGetScanAlwaysAllowed002 ' + value)
    })

    /* *
    * @tc.number  TEST_GETIPV6INFO_001
    * @tc.name    test getIpv6Info method
    * @tc.desc    get Ipv6Info
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetIpv6Info001', 0, () => {
      let value = wifiManager.getIpv6Info();
      expect(value !== null).assertTrue()
      console.log('testGetIpv6Info001 ' + JSON.stringify(value))
    })

    /* *
    * @tc.number  TEST_ISBANDTYPESUPPORTED_001
    * @tc.name    test isBandTypeSupported method throw 401 error code
    * @tc.desc    get the value of isBandTypeSupported
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testIsBandTypeSupported001', 0, () => {
      try {
        // param not correct,throw 401 error code
        let value = wifiManager.isBandTypeSupported(0);
        console.log('testIsBandTypeSupported001 ' + value)
      } catch (err) {
        console.log('testIsBandTypeSupported001 e.code ' + err.code)
        console.log('testIsBandTypeSupported001 e.message ' + err.message)
        expect(err.code == 401).assertTrue()
      }
    })

    /* *
    * @tc.number  TEST_ISBANDTYPESUPPORTED_002
    * @tc.name    test isBandTypeSupported method
    * @tc.desc    get the value of isBandTypeSupported
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testIsBandTypeSupported002', 0, () => {
      let value = wifiManager.isBandTypeSupported(1);
      expect(value).assertInstanceOf("Boolean");
      console.log('testIsBandTypeSupported002 ' + value)
    })

    /* *
    * @tc.number  TEST_ISBANDTYPESUPPORTED_003
    * @tc.name    test isBandTypeSupported method
    * @tc.desc    get the value of isBandTypeSupported
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testIsBandTypeSupported03', 0, () => {
      let value = wifiManager.isBandTypeSupported(2);
      expect(value).assertInstanceOf("Boolean");
      console.log('testIsBandTypeSupported03 ' + value)
    })

    /* *
    * @tc.number  TEST_ISBANDTYPESUPPORTED_004
    * @tc.name    test isBandTypeSupported method
    * @tc.desc    get the value of isBandTypeSupported
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testIsBandTypeSupported004', 0, () => {
      let value = wifiManager.isBandTypeSupported(3);
      expect(value).assertInstanceOf("Boolean");
      console.log('testIsBandTypeSupported004 ' + value)
    })

    /* *
    * @tc.number  TEST_ISBANDTYPESUPPORTED_005
    * @tc.name    test isBandTypeSupported method
    * @tc.desc    get the value of isBandTypeSupported
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testIsBandTypeSupported005', 0, () => {
      let value = wifiManager.isBandTypeSupported(4);
      expect(value).assertInstanceOf("Boolean");
      console.log('testIsBandTypeSupported005 ' + value)
    })

    /* *
    * @tc.number  TEST_GET5GCHANNELLIST_001
    * @tc.name    test get5GChannelList method
    * @tc.desc    get the 5GChannelList
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGet5GChannelList001', 0, () => {
      let value = wifiManager.get5GChannelList();
      expect(value !== null).assertTrue()
      console.log('testGet5GChannelList001 ' + value)
    })

    /* *
    * @tc.number  TEST_GETDISCONNECTEDREASON_001
    * @tc.name    test getDisconnectedReason method
    * @tc.desc    get the DisconnectedReason
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetDisconnectedReason001', 0, async () => {
      // 如果没有打开wifi，就打开wifi,再断开，然后打开
      if (!wifiManager.isWifiActive()) {
        try {
          wifiManager.enableWifi();
        } catch (err) {
          console.log('enableWifi failed', `${JSON.stringify(err)}`);
        }
        await DRIVER.delayMs(5000);
        try {
          wifiManager.disableWifi();
        } catch (err) {
          console.log('disableWifi failed', `${JSON.stringify(err)}`);
        }
        await DRIVER.delayMs(5000);
        try {
          wifiManager.enableWifi();
        } catch (err) {
          console.log('enableWifi failed', `${JSON.stringify(err)}`);
        }
      } else {
        // 如果已经打开wifi了，就直接断开，再打开
        try {
          wifiManager.disableWifi();
        } catch (err) {
          console.log('disableWifi failed', `${JSON.stringify(err)}`);
        }
        await DRIVER.delayMs(5000);
        try {
          wifiManager.enableWifi();
        } catch (err) {
          console.log('enableWifi failed', `${JSON.stringify(err)}`);
        }
      }
      await DRIVER.delayMs(5000);
      console.log('isWifiActive---', JSON.stringify(wifiManager.isWifiActive()))
      try {
        let value = wifiManager.getDisconnectedReason();
        expect(value).assertEqual(0)
        console.log('testGetDisconnectedReason001 ' + value)
      } catch (err) {
        console.log('getReason failed', `${JSON.stringify(err)}`);
      }
    })

    /* *
    * @tc.number  TEST_DEVICEADDRESSTYPE_001
    * @tc.name    test DeviceAddressType
    * @tc.desc    get the value of RANDOM_DEVICE_ADDRESS
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 0
    */
    it('testDeviceAddressType001', 0, () => {
      console.log('testDeviceAddressType001 0')
      expect(wifiManager.DeviceAddressType.RANDOM_DEVICE_ADDRESS).assertEqual(0);
      console.log('testDeviceAddressType001 1')
    })

    /* *
    * @tc.number  TEST_DEVICEADDRESSTYPE_002
    * @tc.name    test DeviceAddressType
    * @tc.desc    get the value of REAL_DEVICE_ADDRESS
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 0
    */
    it('testDeviceAddressType001', 0, () => {
      console.log('testDeviceAddressType002 0')
      expect(wifiManager.DeviceAddressType.REAL_DEVICE_ADDRESS).assertEqual(1);
      console.log('testDeviceAddressType002 1')
    })

    /* *
    * @tc.number  TEST_WIFIBANDTYPE_001
    * @tc.name    test WifiBandType
    * @tc.desc    get the value of WIFI_BAND_NONE
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 0
    */
    it('testWifiBandType001', 0, () => {
      console.log('testWifiBandType001 0')
      expect(wifiManager.WifiBandType.WIFI_BAND_NONE).assertEqual(0);
      console.log('testWifiBandType001 1')
    })

    /* *
    * @tc.number  TEST_WIFIBANDTYPE_002
    * @tc.name    test WifiBandType
    * @tc.desc    get the value of WIFI_BAND_2G
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 0
    */
    it('testWifiBandType002', 0, () => {
      console.log('testWifiBandType002 0')
      expect(wifiManager.WifiBandType.WIFI_BAND_2G).assertEqual(1);
      console.log('testWifiBandType002 1')
    })

    /* *
    * @tc.number  TEST_WIFIBANDTYPE_003
    * @tc.name    test WifiBandType
    * @tc.desc    get the value of WIFI_BAND_5G
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 0
    */
    it('testWifiBandType003', 0, () => {
      console.log('testWifiBandType003 0')
      expect(wifiManager.WifiBandType.WIFI_BAND_5G).assertEqual(2);
      console.log('testWifiBandType003 1')
    })

    /* *
    * @tc.number  TEST_WIFIBANDTYPE_004
    * @tc.name    test WifiBandType
    * @tc.desc    get the value of WIFI_BAND_6G
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 0
    */
    it('testWifiBandType004', 0, () => {
      console.log('testWifiBandType004 0')
      expect(wifiManager.WifiBandType.WIFI_BAND_6G).assertEqual(3);
      console.log('testWifiBandType004 1')
    })

    /* *
    * @tc.number  TEST_WIFIBANDTYPE_005
    * @tc.name    test WifiBandType
    * @tc.desc    get the value of WIFI_BAND_60G
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 0
    */
    it('testWifiBandType005', 0, () => {
      console.log('testWifiBandType005 0')
      expect(wifiManager.WifiBandType.WIFI_BAND_60G).assertEqual(4);
      console.log('testWifiBandType005 1')
    })

    /* *
    * @tc.number  TEST_WIFISTANDARD_001
    * @tc.name    test WifiStandard
    * @tc.desc    get the value of WIFI_STANDARD_UNDEFINED
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 0
    */
    it('testWifiStandard001', 0, () => {
      console.log('testWifiStandard001 0')
      expect(wifiManager.WifiStandard.WIFI_STANDARD_UNDEFINED).assertEqual(0);
      console.log('testWifiStandard001 1')
    })

    /* *
    * @tc.number  TEST_WIFISTANDARD_002
    * @tc.name    test WifiStandard
    * @tc.desc    get the value of WIFI_STANDARD_11A
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 0
    */
    it('testWifiStandard002', 0, () => {
      console.log('testWifiStandard002 0')
      expect(wifiManager.WifiStandard.WIFI_STANDARD_11A).assertEqual(1);
      console.log('testWifiStandard002 1')
    })

    /* *
    * @tc.number  TEST_WIFISTANDARD_003
    * @tc.name    test WifiStandard
    * @tc.desc    get the value of WIFI_STANDARD_11B
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 0
    */
    it('testWifiStandard003', 0, () => {
      console.log('testWifiStandard003 0')
      expect(wifiManager.WifiStandard.WIFI_STANDARD_11B).assertEqual(2);
      console.log('testWifiStandard003 1')
    })

    /* *
    * @tc.number  TEST_WIFISTANDARD_004
    * @tc.name    test WifiStandard
    * @tc.desc    get the value of WIFI_STANDARD_11G
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 0
    */
    it('testWifiStandard004', 0, () => {
      console.log('testWifiStandard004 0')
      expect(wifiManager.WifiStandard.WIFI_STANDARD_11G).assertEqual(3);
      console.log('testWifiStandard004 1')
    })

    /* *
    * @tc.number  TEST_WIFISTANDARD_005
    * @tc.name    test WifiStandard
    * @tc.desc    get the value of WIFI_STANDARD_11N
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 0
    */
    it('testWifiStandard005', 0, () => {
      console.log('testWifiStandard005 0')
      expect(wifiManager.WifiStandard.WIFI_STANDARD_11N).assertEqual(4);
      console.log('testWifiStandard005 1')
    })

    /* *
    * @tc.number  TEST_WIFISTANDARD_006
    * @tc.name    test WifiStandard
    * @tc.desc    get the value of WIFI_STANDARD_11AC
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 0
    */
    it('testWifiStandard006', 0, () => {
      console.log('testWifiStandard006 0')
      expect(wifiManager.WifiStandard.WIFI_STANDARD_11AC).assertEqual(5);
      console.log('testWifiStandard006 1')
    })

    /* *
    * @tc.number  TEST_WIFISTANDARD_007
    * @tc.name    test WifiStandard
    * @tc.desc    get the value of WIFI_STANDARD_11AX
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 0
    */
    it('testWifiStandard007', 0, () => {
      console.log('testWifiStandard007 0')
      expect(wifiManager.WifiStandard.WIFI_STANDARD_11AX).assertEqual(6);
      console.log('testWifiStandard007 1')
    })

    /* *
    * @tc.number  TEST_WIFISTANDARD_008
    * @tc.name    test WifiStandard
    * @tc.desc    get the value of WIFI_STANDARD_11AD
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 0
    */
    it('testWifiStandard008', 0, () => {
      console.log('testWifiStandard008 0')
      expect(wifiManager.WifiStandard.WIFI_STANDARD_11AD).assertEqual(7);
      console.log('testWifiStandard008 1')
    })

    console.log('*************end wifiManegerTest*************');
  })
}