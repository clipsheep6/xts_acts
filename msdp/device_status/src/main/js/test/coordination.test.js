/*
 * Copyright (C) 2022-2023 Huawei Device Co., Ltd.
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
import coordination from '@ohos.device_status.coordination'
import { describe, it, expect } from '@ohos/hypium'

export default function CoordinationTest() {
describe('CoordinationTest', function () {
    console.log("*************Coordination API Test Begin*************");

    const errCode = {
      COMMON_PARAMETER_CODE: 401
    }
    const errMsg = {
      PARAMETER_COUNT_MSG: `Wrong number of parameters`,
      PARAMETER_TYPE_MSG: `Parameter error. The type of type must be string.`,
      PARAMETER_ENABLE_TYPE_MSG: `Parameter error. The type of enable must be boolean.`,
      PARAMETER_SINKDEVICEDESCRIPTOR_MSG: `Parameter error. The type of sinkDeviceDescriptor must be string.`,
      PARAMETER_NON_EMPTY_MSG: `Parameter error. The type of deviceDescriptor must be non-empty string.`,
      PARAMETER_DEVICEDESCRIPTOR_MSG: `Parameter error. The type of deviceDescriptor must be string.`,
      PARAMETER_SRCDEVICEID_TYPE_MSG: `Parameter error. The type of srcDeviceId must be number.`,
      PARAMETER_CALLBACK_TYPE_MSG: `Parameter error. The type of callback must be function.`
    }

    /**
     * @tc.number DeviceStatus_030
     * @tc.name DeviveStatus_Coordination_Enable_Exception_Test_001
     * @tc.desc Coordination interface enable exception test
     */
    it('msdp_test_devices_status_030', 0, async function (done) {
      console.info(`msdp_test_devices_status_030 enter`);
      try {
          await coordination.enable(true, (err, data) => {
          if (err) {
              console.info(`Coordination_Enable_Exception_Test_001 failed`);
              expect(false).assertTrue();
          } else {
              console.info(`Coordination_Enable_Exception_Test_001 success`);
              expect(true).assertTrue();
          }
        });
      } catch (error) {
          console.info(`Coordination_Enable_Exception_Test_001: ${JSON.stringify(error, [`code`, `message`])}`);
          expect(false).assertTrue();
      }
      done();
    })

    /**
     * @tc.number DeviceStatus_031
     * @tc.name DeviveStatus_Coordination_Enable_Exception_Test_002
     * @tc.desc Coordination interface enable exception test
     */
    it('msdp_test_devices_status_031', 0, async function (done) {
      console.info(`msdp_test_devices_status_031 enter`);
      try {
          await coordination.enable(false, (err, data) => {
          if (err) {
              console.info(`Coordination_Enable_Exception_Test_002 failed`);
              expect(true).assertTrue();
          } else {
              console.info(`Coordination_Enable_Exception_Test_002 success`);
              expect(false).assertTrue();
          }
        });
      } catch (error) {
          console.info(`Coordination_Enable_Exception_Test_002: ${JSON.stringify(error, [`code`, `message`])}`);
          expect(false).assertTrue();
      }
      done();
    })

    /**
     * @tc.number DeviceStatus_032
     * @tc.name DeviveStatus_Coordination_Enable_Exception_Test_003
     * @tc.desc Coordination interface enable exception test
     */
    it('msdp_test_devices_status_032', 0, async function (done) {
      console.info(`msdp_test_devices_status_032 enter`);
      try {
          await coordination.enable(10, null);
      } catch (error) {
          console.info(`Coordination_Enable_Exception_Test_003: ${JSON.stringify(error, [`code`, `message`])}`);
          expect(error.code).assertEqual(errCode.COMMON_PARAMETER_CODE);
          expect(error.message).assertEqual(errMsg.PARAMETER_ENABLE_TYPE_MSG);
          done();
      }
    })

    /**
     * @tc.number DeviceStatus_033
     * @tc.name DeviveStatus_Coordination_Enable_Exception_Test_004
     * @tc.desc Coordination interface enable exception test
     */
    it('msdp_test_devices_status_033', 0, async function (done) {
      console.info(`msdp_test_devices_status_033 enter`);
      try {
          await coordination.enable().then((data) => {
          console.info(`Coordination_Enable_Exception_Test_004 success`);
          expect(true).assertTrue();
        }, (error) => {
          console.info(`Coordination_Enable_Exception_Test_004 failed, err=${JSON.stringify(error)}`);
          expect(false).assertTrue();
        });
      } catch (error) {
          console.info(`Coordination_Enable_Exception_Test_004: ${JSON.stringify(error, [`code`, `message`])}`);
          expect(error.code).assertEqual(errCode.COMMON_PARAMETER_CODE);
          expect(error.message).assertEqual(errMsg.PARAMETER_COUNT_MSG);
          done();
      }
    })

    /**
     * @tc.number DeviceStatus_034
     * @tc.name DeviveStatus_Coordination_Start_Exception_Test_001
     * @tc.desc Coordination interface start exception test
     */
    it('msdp_test_devices_status_034', 0, async function (done) {
      console.info(`msdp_test_devices_status_034 enter`);
      try {
          await coordination.start('10', 1, (err, data) => {
          if (error) {
              console.info(`Coordination_Start_Exception_Test_001 failed`);
              expect(false).assertTrue();
          } else {
              console.info(`Coordination_Start_Exception_Test_001 success`);
              expect(true).assertTrue();
          }
        });
      } catch (error) {
          console.info(`Coordination_Start_Exception_Test_001: ${JSON.stringify(error, [`code`, `message`])}`);
          expect(error.code).assertEqual(errCode.COMMON_PARAMETER_CODE);
          expect(error.message).assertEqual(`Input device operation failed`);
          done();
      }
    })

    /**
     * @tc.number DeviceStatus_035
     * @tc.name DeviveStatus_Coordination_Start_Exception_Test_002
     * @tc.desc Coordination interface start exception test
     */
    it('msdp_test_devices_status_035', 0, async function (done) {
      console.info(`msdp_test_devices_status_035 enter`);
      try {
          await coordination.start(10, 10, null);
      } catch (error) {
          console.info(`Coordination_Start_Exception_Test_002: ${JSON.stringify(error, [`code`, `message`])}`);
          expect(error.code).assertEqual(errCode.COMMON_PARAMETER_CODE);
          expect(error.message).assertEqual(errMsg.PARAMETER_SINKDEVICEDESCRIPTOR_MSG);
          done();
      }
    })

    /**
     * @tc.number DeviceStatus_036
     * @tc.name DeviveStatus_Coordination_Start_Exception_Test_003
     * @tc.desc Coordination interface start exception test
     */
    it('msdp_test_devices_status_036', 0, async function (done) {
      console.info(`msdp_test_devices_status_036 enter`);
      try {
          await coordination.start('10', '10').then((data) => {
          console.info(`Coordination_Start_Exception_Test_003 success`);
          expect(true).assertTrue();
        }, (error) => {
          console.info(`Coordination_Start_Exception_Test_003 failed, err=${JSON.stringify(error)}`);
          expect(false).assertTrue();
        });
      } catch (error) {
          console.info(`Coordination_Start_Exception_Test_003: ${JSON.stringify(error, [`code`, `message`])}`);
          expect(error.code).assertEqual(errCode.COMMON_PARAMETER_CODE);
          expect(error.message).assertEqual(errMsg.PARAMETER_SRCDEVICEID_TYPE_MSG);
          done();
      }
    })

    /**
     * @tc.number DeviceStatus_037
     * @tc.name DeviveStatus_Coordination_Start_Exception_Test_004
     * @tc.desc Coordination interface start exception test
     */
    it('msdp_test_devices_status_037', 0, async function (done) {
      console.info(`msdp_test_devices_status_037 enter`);
      try {
          await coordination.start().then((data) => {
          console.info(`Coordination_Start_Exception_Test_004 success`);
          expect(true).assertTrue();
        }, (error) => {
          console.info(`Coordination_Start_Exception_Test_004 failed, err=${JSON.stringify(error)}`);
          expect(false).assertTrue();
        });
      } catch (error) {
          console.info(`Coordination_Start_Exception_Test_004: ${JSON.stringify(error, [`code`, `message`])}`);
          expect(error.code).assertEqual(errCode.COMMON_PARAMETER_CODE);
          expect(error.message).assertEqual(errMsg.PARAMETER_COUNT_MSG);
          done();
      }
    })

    /**
    * @tc.number DeviceStatus_038
    * @tc.name DeviveStatus_Coordination_Stop_Exception_Test_001
    * @tc.desc Coordination interface stop exception test
    */
    it('msdp_test_devices_status_038', 0, async function (done) {
      console.info(`msdp_test_devices_status_038 enter`);
      try {
          await coordination.stop().then((data) => {
          console.info(`Coordination_Stop_Exception_Test_001 success`);
          expect(true).assertTrue();
        }, (error) => {
          console.info(`Coordination_Stop_Exception_Test_001 failed, err=${JSON.stringify(error)}`);
          expect(false).assertTrue();
        });
      } catch (error) {
          console.info(`Coordination_Stop_Exception_Test_001: ${JSON.stringify(error, [`code`, `message`])}`);
          expect(error.code).assertEqual(errCode.COMMON_PARAMETER_CODE);
          expect(error.message).assertEqual(`Input device operation failed`);
          done();
      }
    })

    /**
     * @tc.number DeviceStatus_039
     * @tc.name DeviveStatus_Coordination_Stop_Exception_Test_002
     * @tc.desc Coordination interface stop exception test
     */
    it('msdp_test_devices_status_039', 0, async function (done) {
      console.info(`msdp_test_devices_status_039 enter`);
      try {
          await coordination.stop(10);
      } catch (error) {
          console.info(`Coordination_Stop_Exception_Test_002: ${JSON.stringify(error, [`code`, `message`])}`);
          expect(error.code).assertEqual(errCode.COMMON_PARAMETER_CODE);
          expect(error.message).assertEqual(errMsg.PARAMETER_CALLBACK_TYPE_MSG);
          done();
      }
    })

    /**
     * @tc.number DeviceStatus_040
     * @tc.name DeviveStatus_Coordination_GetState_Exception_Test_001
     * @tc.desc Coordination interface getState exception test
     */
    it('msdp_test_devices_status_040', 0, async function (done) {
      console.info(`msdp_test_devices_status_040 enter`);
      try {
          await coordination.getState("10", (err, data) => {
          if (err) {
              console.info(`Coordination_GetState_Exception_Test_001 success`);
              expect(true).assertTrue();
          } else {
              console.info(`Coordination_GetState_Exception_Test_001 failed`);
              expect(false).assertTrue();
          }
        });
      } catch (error) {
          console.info(`Coordination_GetState_Exception_Test_001: ${JSON.stringify(error, [`code`, `message`])}`);
          expect(false).assertTrue();
      }
      done();
    })

    /**
     * @tc.number DeviceStatus_041
     * @tc.name DeviveStatus_Coordination_GetState_Exception_Test_002
     * @tc.desc Coordination interface getState exception test
     */
    it('msdp_test_devices_status_041', 0, async function (done) {
      console.info(`msdp_test_devices_status_041 enter`);
      try {
          await coordination.getState("", (err, data) => {
          if (err) {
              console.info(`Coordination_GetState_Exception_Test_002 failed`);
              expect(false).assertTrue();
          } else {
              console.info(`Coordination_GetState_Exception_Test_002 success`);
              expect(true).assertTrue();
          }
        });
      } catch (error) {
          console.info(`Coordination_GetState_Exception_Test_002: ${JSON.stringify(error, [`code`, `message`])}`);
          expect(error.code).assertEqual(errCode.COMMON_PARAMETER_CODE);
          expect(error.message).assertEqual(errMsg.PARAMETER_NON_EMPTY_MSG);
      }
      done();
    })

    /**
     * @tc.number DeviceStatus_042
     * @tc.name DeviveStatus_Coordination_GetState_Exception_Test_003
     * @tc.desc Coordination interface getState exception test
     */
    it('msdp_test_devices_status_042', 0, async function (done) {
      console.info(`msdp_test_devices_status_042 enter`);
      try {
          await coordination.getState(10, null);
      } catch (error) {
          console.info(`Coordination_GetState_Exception_Test_003: ${JSON.stringify(error, [`code`, `message`])}`);
          expect(error.code).assertEqual(errCode.COMMON_PARAMETER_CODE);
          expect(error.message).assertEqual(errMsg.PARAMETER_DEVICEDESCRIPTOR_MSG);
          done();
      }
    })

    /**
     * @tc.number DeviceStatus_043
     * @tc.name DeviveStatus_Coordination_GetState_Exception_Test_004
     * @tc.desc Coordination interface getState exception test
     */
    it('msdp_test_devices_status_043', 0, async function (done) {
      console.info(`msdp_test_devices_status_043 enter`);
      try {
          await coordination.getState().then((data) => {
          console.info(`Coordination_GetState_Exception_Test_004 success`);
          expect(true).assertTrue();
        }, (error) => {
          console.info(`Coordination_GetState_Exception_Test_004 failed, err=${JSON.stringify(error)}`);
          expect(false).assertTrue();
        });
      } catch (error) {
          console.info(`Coordination_GetState_Exception_Test_004: ${JSON.stringify(error, [`code`, `message`])}`);
          expect(error.code).assertEqual(errCode.COMMON_PARAMETER_CODE);
          expect(error.message).assertEqual(errMsg.PARAMETER_COUNT_MSG);
          done();
      }
    })

    /**
     * @tc.number DeviceStatus_044
     * @tc.name DeviveStatus_Coordination_On_Exception_Test_001
     * @tc.desc Coordination interface on exception test
     */
    it('msdp_test_devices_status_044', 0, async function (done) {
      console.info(`msdp_test_devices_status_044 enter`);
      try {
          await coordination.on('coordination', (data) => {
          console.info(`Coordination_On_Exception_Test_001 success`+ JSON.stringify(data));
          expect(true).assertTrue();
        });
      } catch (error) {
          console.info(`Coordination_On_Exception_Test_001 error`);
          expect(false).assertTrue();
      }
      done();
    })

    /**
     * @tc.number DeviceStatus_045
     * @tc.name DeviveStatus_Coordination_On_Exception_Test_002
     * @tc.desc Coordination interface on exception test
     */
    it('msdp_test_devices_status_045', 0, async function (done) {
      console.info(`msdp_test_devices_status_045 enter`);
      try {
          await coordination.on(10, null);
      } catch (error) {
          console.info(`Coordination_On_Exception_Test_002: ${JSON.stringify(error, [`code`, `message`])}`);
          expect(error.code).assertEqual(errCode.COMMON_PARAMETER_CODE);
          expect(error.message).assertEqual(errMsg.PARAMETER_TYPE_MSG);
          done();
      }
    })

    /**
     * @tc.number DeviceStatus_046
     * @tc.name DeviveStatus_Coordination_On_Exception_Test_003
     * @tc.desc Coordination interface on exception test
     */
    it('msdp_test_devices_status_046', 0, async function (done) {
      console.info(`msdp_test_devices_status_046 enter`);
      try {
          await coordination.on().then((data) => {
          console.info(`Coordination_On_Exception_Test_003 success`);
          expect(true).assertTrue();
        }, (error) => {
          console.info(`Coordination_On_Exception_Test_003 failed, err=${JSON.stringify(error)}`);
          expect(false).assertTrue();
        });
      } catch (error) {
          console.info(`Coordination_On_Exception_Test_003: ${JSON.stringify(error, [`code`, `message`])}`);
          expect(error.code).assertEqual(errCode.COMMON_PARAMETER_CODE);
          expect(error.message).assertEqual(errMsg.PARAMETER_COUNT_MSG);
          done();
      }
    })

    /**
     * @tc.number DeviceStatus_047
     * @tc.name DeviveStatus_Coordination_Off_Exception_Test_001
     * @tc.desc Coordination interface off exception test
     */
    it('msdp_test_devices_status_047', 0, async function (done) {
      console.info(`msdp_test_devices_status_047 enter`);
      try {
          await coordination.off('coordination', (data) => {
          console.info(`Coordination_Off_Exception_Test_001 success`+ JSON.stringify(data));
          expect(true).assertTrue();
        });
      } catch (error) {
          console.info(`Coordination_Off_Exception_Test_001 error`);
          expect(false).assertTrue();
      }
      done();
    })

    /**
     * @tc.number DeviceStatus_048
     * @tc.name DeviveStatus_Coordination_Off_Exception_Test_002
     * @tc.desc Coordination interface off exception test
     */
    it('msdp_test_devices_status_048', 0, async function (done) {
      console.info(`msdp_test_devices_status_048 enter`);
      try {
          await coordination.off(10, null);
      } catch (error) {
          console.info(`Coordination_Off_Exception_Test_002: ${JSON.stringify(error, [`code`, `message`])}`);
          expect(error.code).assertEqual(errCode.COMMON_PARAMETER_CODE);
          expect(error.message).assertEqual(errMsg.PARAMETER_TYPE_MSG);
          done();
      }
    })

    /**
     * @tc.number DeviceStatus_049
     * @tc.name DeviveStatus_Coordination_Off_Exception_Test_003
     * @tc.desc Coordination interface off exception test
     */
    it('msdp_test_devices_status_049', 0, async function (done) {
      console.info(`msdp_test_devices_status_049 enter`);
      try {
          await coordination.off().then((data) => {
          console.info(`Coordination_Off_Exception_Test_003 success`);
          expect(true).assertTrue();
        }, (error) => {
          console.info(`Coordination_Off_Exception_Test_003 failed, err=${JSON.stringify(error)}`);
          expect(false).assertTrue();
        });
      } catch (error) {
          console.info(`Coordination_Off_Exception_Test_003: ${JSON.stringify(error, [`code`, `message`])}`);
          expect(error.code).assertEqual(errCode.COMMON_PARAMETER_CODE);
          expect(error.message).assertEqual(errMsg.PARAMETER_COUNT_MSG);
          done();
      }
    })
})
}
