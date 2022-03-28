// @ts-nocheck
/*
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
 * See the License for the specific language governing permisrsions and
 * limitations under the License.
 */

import {describe, it, expect} from "deccjsunit/index"

export default function SecondExtensionTest(abilityContext) {
  describe('SecondExtensionTest', function () {

    /**
     * @tc.number: SUB_AA_Extension_ServiceExtensionContext_4500
     * @tc.name: Test connectAbility
     * @tc.desc: Serviceextension calls connectability. The parameter options are undefined
     * @tc.level   0
     */
    it('SUB_AA_Extension_ServiceExtensionContext_4500', 0, async function (done) {
      var TAG = "SUB_AA_Extension_ServiceExtensionContext_4500";
      console.log(TAG + " --- start");
      globalThis.lifeCycleList = [];
      console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));

      abilityContext.startAbility({
        bundleName: "com.example.serviceextension",
        abilityName: "com.example.serviceextension.ServiceAbility"
      }, (error, data) => {
        console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });
      setTimeout(async function () {
        let request = {
          "bundleName": "com.example.serviceextension",
          "abilityName": "com.example.serviceextension.ServiceAbility2",
        }
        let options = undefined
        let connection = await globalThis.extensionContext.connectAbility(request, options);
        console.log(TAG + " connection = " + connection);
        expect(true).assertTrue();
        done();
        abilityContext.terminateSelf((error, data) => {
          if (error) {
            console.error('Operation failed. Cause: ' + error);
            return;
          }
          console.info('Operation succeeded: ' + data);
        });
      }, 2000);
    });

    /**
     * @tc.number: SUB_AA_Extension_ServiceExtensionContext_4600
     * @tc.name: Test connectAbility
     * @tc.desc: Serviceextension calls connectability. The input parameter want is undefined verification
     * @tc.level   0
     */
    it('SUB_AA_Extension_ServiceExtensionContext_4600', 0, async function (done) {
      var TAG = "SUB_AA_Extension_ServiceExtensionContext_4600";
      console.log(TAG + " --- start");

      abilityContext.startAbility({
        bundleName: "com.example.serviceextension",
        abilityName: "com.example.serviceextension.ServiceAbility"
      }, (error, data) => {
        console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });
      setTimeout(async function () {
        let request = undefined
        let options = {
          onConnect: function (elementName, proxy) {
          },
          onDisconnect: function (elementName) {
          },
          onFailed: function (code) {
            console.log(TAG + "onFailed code: " + code);
            expect(code).assertEqual(1);
            done();
          }
        }
        let connection = globalThis.extensionContext.connectAbility(request, options);
        console.log(TAG + "connection: " + connection);
      }, 2000);
    });

    /**
     * @tc.number: SUB_AA_Extension_ServiceExtensionContext_4700
     * @tc.name: Test connectAbility
     * @tc.desc: Serviceextension call connectability input parameter want is null string verification
     * @tc.level   0
     */
    it('SUB_AA_Extension_ServiceExtensionContext_4700', 0, async function (done) {
      var TAG = "SUB_AA_Extension_ServiceExtensionContext_4700";
      console.log(TAG + " --- start");

      abilityContext.startAbility({
        bundleName: "com.example.serviceextension",
        abilityName: "com.example.serviceextension.ServiceAbility"
      }, (error, data) => {
        console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });
      setTimeout(async function () {
        let request = ""
        let options = {
          onConnect: function (elementName, proxy) {
          },
          onDisconnect: function (elementName) {
          },
          onFailed: function (code) {
            console.log(TAG + "onFailed code: " + code);
            expect(code).assertEqual(1);
            done();
          }
        }
        let connection = globalThis.extensionContext.connectAbility(request, options);
        console.log(TAG + "connection: " + connection);
      }, 2000);
    });

    /**
     * @tc.number: SUB_AA_Extension_ServiceExtensionContext_4800
     * @tc.name: Test connectAbility
     * @tc.desc: Serviceextension call connectability input parameter bundlename is a package name verification
     * that does not exist
     * @tc.level   0
     */
    it('SUB_AA_Extension_ServiceExtensionContext_4800', 0, async function (done) {
      var TAG = "SUB_AA_Extension_ServiceExtensionContext_4800";
      console.log(TAG + " --- start");

      abilityContext.startAbility({
        bundleName: "com.example.serviceextension",
        abilityName: "com.example.serviceextension.ServiceAbility"
      }, (error, data) => {
        console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });
      setTimeout(async function () {
        let request = {
          "bundleName": "com.nonexistent.serviceextension",
          "abilityName": "com.example.serviceextension.ServiceAbility2",
        }
        let options = {
          onConnect: function (elementName, proxy) {
          },
          onDisconnect: function (elementName) {
          },
          onFailed: function (code) {
            console.log(TAG + "onFailed code: " + code);
            expect(code).assertEqual(1);
            done();
          }
        }
        let connection = globalThis.extensionContext.connectAbility(request, options);
        console.log(TAG + "connection: " + connection);
      }, 2000);
    });

    /**
     * @tc.number: SUB_AA_Extension_ServiceExtensionContext_4900
     * @tc.name: Test connectAbility
     * @tc.desc: The serviceextension call connectability input parameter does not carry bundlename validation
     * @tc.level   0
     */
    it('SUB_AA_Extension_ServiceExtensionContext_4900', 0, async function (done) {
      var TAG = "SUB_AA_Extension_ServiceExtensionContext_4900";
      console.log(TAG + " --- start");

      abilityContext.startAbility({
        bundleName: "com.example.serviceextension",
        abilityName: "com.example.serviceextension.ServiceAbility"
      }, (error, data) => {
        console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });
      setTimeout(async function () {
        let request = {
          "abilityName": "com.example.serviceextension.ServiceAbility2",
        }
        let options = {
          onConnect: function (elementName, proxy) {
          },
          onDisconnect: function (elementName) {
          },
          onFailed: function (code) {
            console.log(TAG + "onFailed code: " + code);
            expect(code).assertEqual(1);
            done();
          }
        }
        let connection = globalThis.extensionContext.connectAbility(request, options);
        console.log(TAG + "connection: " + connection);
      }, 2000);
    });

    /**
     * @tc.number: SUB_AA_Extension_ServiceExtensionContext_5000
     * @tc.name: Test connectAbility
     * @tc.desc: Serviceextension calls connectability. The parameter bundlename is defined as undefined validation
     * @tc.level   0
     */
    it('SUB_AA_Extension_ServiceExtensionContext_5000', 0, async function (done) {
      var TAG = "SUB_AA_Extension_ServiceExtensionContext_5000";
      console.log(TAG + " --- start");

      abilityContext.startAbility({
        bundleName: "com.example.serviceextension",
        abilityName: "com.example.serviceextension.ServiceAbility"
      }, (error, data) => {
        console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });
      setTimeout(async function () {
        let request = {
          "bundleName": undefined,
          "abilityName": "com.example.serviceextension.ServiceAbility2",
        }
        let options = {
          onConnect: function (elementName, proxy) {
          },
          onDisconnect: function (elementName) {
          },
          onFailed: function (code) {
            console.log(TAG + "onFailed code: " + code);
            expect(code).assertEqual(1);
            done();
          }
        }
        let connection = globalThis.extensionContext.connectAbility(request, options);
        console.log(TAG + "connection: " + connection);
      }, 2000);
    });

    /**
     * @tc.number: SUB_AA_Extension_ServiceExtensionContext_5100
     * @tc.name: Test connectAbility
     * @tc.desc: Serviceextension call connectability input parameter bundlename is null string verification
     * @tc.level   0
     */
    it('SUB_AA_Extension_ServiceExtensionContext_5100', 0, async function (done) {
      var TAG = "SUB_AA_Extension_ServiceExtensionContext_5100";
      console.log(TAG + " --- start");

      abilityContext.startAbility({
        bundleName: "com.example.serviceextension",
        abilityName: "com.example.serviceextension.ServiceAbility"
      }, (error, data) => {
        console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });
      setTimeout(async function () {
        let request = {
          "bundleName": "",
          "abilityName": "com.example.serviceextension.ServiceAbility2",
        }
        let options = {
          onConnect: function (elementName, proxy) {
          },
          onDisconnect: function (elementName) {
          },
          onFailed: function (code) {
            console.log(TAG + "onFailed code: " + code);
            expect(code).assertEqual(1);
            done();
          }
        }
        let connection = globalThis.extensionContext.connectAbility(request, options);
        console.log(TAG + "connection: " + connection);
      }, 2000);
    });

    /**
     * @tc.number: SUB_AA_Extension_ServiceExtensionContext_5200
     * @tc.name: Test connectAbility
     * @tc.desc: Serviceextension calls connectability, and the input parameter abilityname is a non-existent
     * abilityname validation
     * @tc.level   0
     */
    it('SUB_AA_Extension_ServiceExtensionContext_5200', 0, async function (done) {
      var TAG = "SUB_AA_Extension_ServiceExtensionContext_5200";
      console.log(TAG + " --- start");

      abilityContext.startAbility({
        bundleName: "com.example.serviceextension",
        abilityName: "com.example.serviceextension.ServiceAbility"
      }, (error, data) => {
        console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });
      setTimeout(async function () {
        let request = {
          "bundleName": "com.example.serviceextension",
          "abilityName": "com.nonexistent.serviceextension.ServiceAbility2",
        }
        let options = {
          onConnect: function (elementName, proxy) {
          },
          onDisconnect: function (elementName) {
          },
          onFailed: function (code) {
            console.log(TAG + "onFailed code: " + code);
            expect(code).assertEqual(1);
            done();
          }
        }
        let connection = globalThis.extensionContext.connectAbility(request, options);
        console.log(TAG + "connection: " + connection);
      }, 2000);
    });

    /**
     * @tc.number: SUB_AA_Extension_ServiceExtensionContext_5300
     * @tc.name: Test connectAbility
     * @tc.desc: The serviceextension call connectability input parameter does not carry the abilityname validation
     * @tc.level   0
     */
    it('SUB_AA_Extension_ServiceExtensionContext_5300', 0, async function (done) {
      var TAG = "SUB_AA_Extension_ServiceExtensionContext_5300";
      console.log(TAG + " --- start");

      abilityContext.startAbility({
        bundleName: "com.example.serviceextension",
        abilityName: "com.example.serviceextension.ServiceAbility"
      }, (error, data) => {
        console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });
      setTimeout(async function () {
        let request = {
          "bundleName": "com.example.serviceextension",
        }
        let options = {
          onConnect: function (elementName, proxy) {
          },
          onDisconnect: function (elementName) {
          },
          onFailed: function (code) {
            console.log(TAG + "onFailed code: " + code);
            expect(code).assertEqual(1);
            done();
          }
        }
        let connection = globalThis.extensionContext.connectAbility(request, options);
        console.log(TAG + "connection: " + connection);
      }, 2000);
    });

    /**
     * @tc.number: SUB_AA_Extension_ServiceExtensionContext_5400
     * @tc.name: Test connectAbility
     * @tc.desc: Serviceextension calls connectability, and the input parameter abilityname is defined as undefined
     * authentication
     * @tc.level   0
     */
    it('SUB_AA_Extension_ServiceExtensionContext_5400', 0, async function (done) {
      var TAG = "SUB_AA_Extension_ServiceExtensionContext_5400";
      console.log(TAG + " --- start");

      abilityContext.startAbility({
        bundleName: "com.example.serviceextension",
        abilityName: "com.example.serviceextension.ServiceAbility"
      }, (error, data) => {
        console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });
      setTimeout(async function () {
        let request = {
          "bundleName": "com.example.serviceextension",
          "abilityName": undefined
        }
        let options = {
          onConnect: function (elementName, proxy) {
          },
          onDisconnect: function (elementName) {
          },
          onFailed: function (code) {
            console.log(TAG + "onFailed code: " + code);
            expect(code).assertEqual(1);
            done();
          }
        }
        let connection = globalThis.extensionContext.connectAbility(request, options);
        console.log(TAG + "connection: " + connection);
      }, 2000);
    });

    /**
     * @tc.number: SUB_AA_Extension_ServiceExtensionContext_5500
     * @tc.name: Test connectAbility
     * @tc.desc: Serviceextension calls connectability, and the input parameter abilityname is an empty string
     * validation
     * @tc.level   0
     */
    it('SUB_AA_Extension_ServiceExtensionContext_5500', 0, async function (done) {
      var TAG = "SUB_AA_Extension_ServiceExtensionContext_5500";
      console.log(TAG + " --- start");

      abilityContext.startAbility({
        bundleName: "com.example.serviceextension",
        abilityName: "com.example.serviceextension.ServiceAbility"
      }, (error, data) => {
        console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });
      setTimeout(async function () {
        let request = {
          "bundleName": "com.example.serviceextension",
          "abilityName": ""
        }
        let options = {
          onConnect: function (elementName, proxy) {
          },
          onDisconnect: function (elementName) {
          },
          onFailed: function (code) {
            console.log(TAG + "onFailed code: " + code);
            expect(code).assertEqual(1);
            done();
          }
        }
        let connection = globalThis.extensionContext.connectAbility(request, options);
        console.log(TAG + "connection: " + connection);
      }, 2000);
    });

    /**
     * @tc.number: SUB_AA_Extension_ServiceExtensionContext_5600
     * @tc.name: Test disconnectability
     * @tc.desc: Serviceextension calls disconnectability, and the input parameter connectid is undefined
     * @tc.level   0
     */
    it('SUB_AA_Extension_ServiceExtensionContext_5600', 0, async function (done) {
      var TAG = "SUB_AA_Extension_ServiceExtensionContext_5600";
      console.log(TAG + " --- start");

      abilityContext.startAbility({
        bundleName: "com.example.serviceextension",
        abilityName: "com.example.serviceextension.ServiceAbility"
      }, (error, data) => {
        console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });
      setTimeout(async function () {
        globalThis.extensionContext.disconnectAbility(undefined, (error, data) => {
          if (error) {
            console.error(TAG + 'Operation failed. Cause: ' + JSON.stringify(error));
            expect(error.code).assertEqual(2);
            done();
            return;
          }
          console.info(TAG + 'Operation succeeded: ' + data);
        })
      }, 2000);
    });

    /**
     * @tc.number: SUB_AA_Extension_ServiceExtensionContext_5700
     * @tc.name: Test disconnectability
     * @tc.desc: Serviceextension calls disconnectability. The input parameter connectid is string verification
     * @tc.level   0
     */
    it('SUB_AA_Extension_ServiceExtensionContext_5700', 0, async function (done) {
      var TAG = "SUB_AA_Extension_ServiceExtensionContext_5700";
      console.log(TAG + " --- start");

      abilityContext.startAbility({
        bundleName: "com.example.serviceextension",
        abilityName: "com.example.serviceextension.ServiceAbility"
      }, (error, data) => {
        console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });
      setTimeout(async function () {
        globalThis.extensionContext.disconnectAbility("a", (error, data) => {
          if (error) {
            console.error(TAG + 'Operation failed. Cause: ' + error);
            expect(error.code).assertEqual(2);
            done();
            return;
          }
          console.info(TAG + 'Operation succeeded: ' + data);
        })
      }, 2000);
    });

    /**
     * @tc.number: SUB_AA_Extension_ServiceExtensionContext_5800
     * @tc.name: Test disconnectability
     * @tc.desc: Serviceextension calls disconnectability, and the input parameter connectid is - 1
     * @tc.level   0
     */
    it('SUB_AA_Extension_ServiceExtensionContext_5800', 0, async function (done) {
      var TAG = "SUB_AA_Extension_ServiceExtensionContext_5800";
      console.log(TAG + " --- start");

      abilityContext.startAbility({
        bundleName: "com.example.serviceextension",
        abilityName: "com.example.serviceextension.ServiceAbility"
      }, (error, data) => {
        console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });
      setTimeout(async function () {
        globalThis.extensionContext.disconnectAbility(-1, (error, data) => {
          if (error) {
            console.error(TAG + 'Operation failed. Cause: ' + error);
            expect(error.code).assertEqual(2);
            done();
            return;
          }
          console.info(TAG + 'Operation succeeded: ' + data);
        })
      }, 2000);
    });

    /**
     * @tc.number: SUB_AA_Extension_ServiceExtensionContext_5900
     * @tc.name: Test disconnectability
     * @tc.desc: Serviceextension call disconnectability input parameter does not exist connectid validation
     * @tc.level   0
     */
    it('SUB_AA_Extension_ServiceExtensionContext_5900', 0, async function (done) {
      var TAG = "SUB_AA_Extension_ServiceExtensionContext_5900";
      console.log(TAG + " --- start");

      abilityContext.startAbility({
        bundleName: "com.example.serviceextension",
        abilityName: "com.example.serviceextension.ServiceAbility"
      }, (error, data) => {
        console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });
      setTimeout(async function () {
        globalThis.extensionContext.disconnectAbility(1000, (error, data) => {
          if (error) {
            console.error(TAG + 'Operation failed. Cause: ' + error);
            expect(error.code).assertEqual(2);
            done();
            return;
          }
          console.info(TAG + 'Operation succeeded: ' + data);
        })
      }, 2000);
    });

    /**
     * @tc.number: SUB_AA_Extension_ServiceExtensionContext_6000
     * @tc.name: Test startability
     * @tc.desc: Serviceextension calls startability parameter {} validation
     * @tc.level   0
     */
    it('SUB_AA_Extension_ServiceExtensionContext_6000', 0, async function (done) {
      var TAG = "SUB_AA_Extension_ServiceExtensionContext_6000";
      console.log(TAG + " --- start");

      abilityContext.startAbility({
        bundleName: "com.example.serviceextension",
        abilityName: "com.example.serviceextension.ServiceAbility"
      }, (error, data) => {
        console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });
      setTimeout(async function () {
        let str = {
          "want": {},
          "abilityStartSetting": {}
        };
        await globalThis.extensionContext.startAbility(str, (err, data) => {
          if (err) {
            console.error(TAG + ' err: ' + err);
            expect(err.code).assertEqual(2097152);
            done();
            return;
          }
          console.log(TAG + '-- startAbility(ServiceAbility2): ' + JSON.stringify(err) + ", " + JSON.stringify(data));
        });
      }, 2000);
    });

    /**
     * @tc.number: SUB_AA_Extension_ServiceExtensionContext_6100
     * @tc.name: Test startability
     * @tc.desc: Serviceextension calls startability to enter parameter undefined validation
     * @tc.level   0
     */
    it('SUB_AA_Extension_ServiceExtensionContext_6100', 0, async function (done) {
      var TAG = "SUB_AA_Extension_ServiceExtensionContext_6100";
      console.log(TAG + " --- start");

      abilityContext.startAbility({
        bundleName: "com.example.serviceextension",
        abilityName: "com.example.serviceextension.ServiceAbility"
      }, (error, data) => {
        console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });
      setTimeout(async function () {
        let str = {
          "want": undefined,
          "abilityStartSetting": {}
        };
        await globalThis.extensionContext.startAbility(str, (err, data) => {
          if (err) {
            console.error(TAG + ' err: ' + err);
            expect(err.code).assertEqual(2097152);
            done();
            return;
          }
          console.log(TAG + '-- startAbility(ServiceAbility2): ' + JSON.stringify(err) + ", " + JSON.stringify(data));
        });
      }, 2000);
    });

    /**
     * @tc.number: SUB_AA_Extension_ServiceExtensionContext_6200
     * @tc.name: Test startability
     * @tc.desc: Serviceextension calls startability. The parameter bundlename is undefined
     * @tc.level   0
     */
    it('SUB_AA_Extension_ServiceExtensionContext_6200', 0, async function (done) {
      var TAG = "SUB_AA_Extension_ServiceExtensionContext_6200";
      console.log(TAG + " --- start");

      abilityContext.startAbility({
        bundleName: "com.example.serviceextension",
        abilityName: "com.example.serviceextension.ServiceAbility"
      }, (error, data) => {
        console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });
      setTimeout(async function () {
        let str = {
          "want": {
            bundleName: undefined,
            abilityName: "com.example.serviceextension.ServiceAbility2"
          },
          "abilityStartSetting": {}
        };
        await globalThis.extensionContext.startAbility(str, (err, data) => {
          if (err) {
            console.error(TAG + ' err: ' + err);
            expect(err.code).assertEqual(2097152);
            done();
            return;
          }
          console.log(TAG + '-- startAbility(ServiceAbility2): ' + JSON.stringify(err) + ", " + JSON.stringify(data));
        });
      }, 2000);
    });

    /**
     * @tc.number: SUB_AA_Extension_ServiceExtensionContext_6300
     * @tc.name: Test startability
     * @tc.desc: Serviceextension calls bundlename validation where the startability input parameter does not exist
     * @tc.level   0
     */
    it('SUB_AA_Extension_ServiceExtensionContext_6300', 0, async function (done) {
      var TAG = "SUB_AA_Extension_ServiceExtensionContext_6300";
      console.log(TAG + " --- start");

      abilityContext.startAbility({
        bundleName: "com.example.serviceextension",
        abilityName: "com.example.serviceextension.ServiceAbility"
      }, (error, data) => {
        console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });
      setTimeout(async function () {
        let str = {
          "want": {
            bundleName: "com.nonexistent.serviceextension",
            abilityName: "com.example.serviceextension.ServiceAbility2"
          },
          "abilityStartSetting": {}
        };
        await globalThis.extensionContext.startAbility(str, (err, data) => {
          if (err) {
            console.error(TAG + ' err: ' + err);
            expect(err.code).assertEqual(2097152);
            done();
            return;
          }
          console.log(TAG + '-- startAbility(ServiceAbility2): ' + JSON.stringify(err) + ", " + JSON.stringify(data));
        });
      }, 2000);
    });

    /**
     * @tc.number: SUB_AA_Extension_ServiceExtensionContext_6400
     * @tc.name: Test startability
     * @tc.desc: Serviceextension calls startability, and the input parameter is undefined
     * @tc.level   0
     */
    it('SUB_AA_Extension_ServiceExtensionContext_6400', 0, async function (done) {
      var TAG = "SUB_AA_Extension_ServiceExtensionContext_6400";
      console.log(TAG + " --- start");

      abilityContext.startAbility({
        bundleName: "com.example.serviceextension",
        abilityName: "com.example.serviceextension.ServiceAbility"
      }, (error, data) => {
        console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });
      setTimeout(async function () {
        let str = {
          "want": {
            bundleName: "com.example.serviceextension",
            abilityName: undefined
          },
          "abilityStartSetting": {}
        };
        await globalThis.extensionContext.startAbility(str, (err, data) => {
          if (err) {
            console.error(TAG + ' err: ' + err);
            expect(err.code).assertEqual(2097152)
            done()
            return;
          }
          console.log(TAG + '-- startAbility(ServiceAbility2): ' + JSON.stringify(err) + ", " + JSON.stringify(data));
        });
      }, 2000);
    });

    /**
     * @tc.number: SUB_AA_Extension_ServiceExtensionContext_6500
     * @tc.name: Test startability
     * @tc.desc: Serviceextension call startability input parameter does not exist for abilityname validation
     * @tc.level   0
     */
    it('SUB_AA_Extension_ServiceExtensionContext_6500', 0, async function (done) {
      var TAG = "SUB_AA_Extension_ServiceExtensionContext_6500";
      console.log(TAG + " --- start");

      abilityContext.startAbility({
        bundleName: "com.example.serviceextension",
        abilityName: "com.example.serviceextension.ServiceAbility"
      }, (error, data) => {
        console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });
      setTimeout(async function () {
        let str = {
          "want": {
            bundleName: "com.example.serviceextension",
            abilityName: "com.nonexistent.serviceextension.ServiceAbility2"
          },
          "abilityStartSetting": {}
        };
        await globalThis.extensionContext.startAbility(str, (err, data) => {
          if (err) {
            console.error(TAG + ' err: ' + err);
            expect(err.code).assertEqual(2097152);
            done();
            return;
          }
          console.log(TAG + '-- startAbility(ServiceAbility2): ' + JSON.stringify(err) + ", " + JSON.stringify(data));
        });
      }, 2000);
    });

    function checkLifeCycle(lifeCycle, findTarget, TAG) {
      var a = 0;
      console.log(TAG + " findTarget.length = " + findTarget.length);
      for (var i = 0; i < findTarget.length; i++) {
        var targetValue = findTarget[i];
        for (var j = 0; j < lifeCycle.length; j++) {
          if (lifeCycle[j] == targetValue) {
            a++;
          }
        }
      }
      console.log(TAG + " a = " + a.toString());
      expect(a == findTarget.length).assertTrue();
    }

  })
}