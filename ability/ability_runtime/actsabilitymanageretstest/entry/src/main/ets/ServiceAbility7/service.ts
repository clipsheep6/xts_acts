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

import particleAbility from '@ohos.ability.particleAbility';
import rpc from '@ohos.rpc';
import { BusinessError } from '@ohos.base';

class StubTest7 extends rpc.RemoteObject {
  constructor(des) {
    super(des);
  }

  onRemoteRequest(code, data, reply, option) {
    console.info('ServiceAbility7 onRemoteRequest');
    if (code === 1) {
      let op1 = data.readInt();
      let op2 = data.readInt();
      reply.writeInt(op1 + op2);
      console.info('ServiceAbility7 op1:' + op1 + ' op2:' + op2);
    }
    return true;
  }
}

function getNowTime() {
  return new Date().getTime();
}

function getDurationTime(msg, startTime, endTime) {
  console.info(msg + 'Get Interface startTime: ' + startTime);
  console.info(msg + 'Get Interface endTime: ' + endTime);
  let duration = (endTime - startTime);
  console.info(msg + 'Get Interface Duration: ' + duration);
  return duration;
}

async function sleep(time: number) {
  let now = new Date();
  let exitTime = now.getTime() + time;
  while (true) {
    now = new Date();
    if (now.getTime() > exitTime)
      break;
  }
  console.info(`sleep ${time} over...`);
}

export default {
  onStart() {
    console.info('ServiceAbility7 onStart');
  },
  onStop() {
    console.info('ServiceAbility7 onStop');
  },
  onCommand(want, startId) {
    console.info('ServiceAbility7 onCommand');

    let request = {
      "bundleName": "com.example.myapplication",
      "abilityName": "com.example.myapplication.ServiceAbility_API8",
    }
    let options = {
      onConnect: async function (element: any, proxy: any) {
        console.log('particleAbility_connectAbility_test_0600 ConnectAbility onConnect element.deviceId : ' + JSON.stringify(element.deviceId));
        console.log('particleAbility_connectAbility_test_0600 ConnectAbility onConnect element.bundleName : ' + JSON.stringify(element.bundleName));
        console.log('particleAbility_connectAbility_test_0600 ConnectAbility onConnect element.abilityName : ' + JSON.stringify(element.abilityName));
        console.log('particleAbility_connectAbility_test_0600 ConnectAbility onConnect element.uri : ' + JSON.stringify(element.uri));
        console.log('particleAbility_connectAbility_test_0600 ConnectAbility onConnect element.shortName : ' + JSON.stringify(element.shortName));
        console.log('particleAbility_connectAbility_test_0600 ConnectAbility onConnect proxy : ' + JSON.stringify(proxy));
      },
      onDisconnect: async function (element1: any) {
        console.log('particleAbility_connectAbility_test_0600 ConnectAbility onDisconnect element.deviceId : ' + JSON.stringify(element1.deviceId));
        console.log('particleAbility_connectAbility_test_0600 ConnectAbility onDisconnect element.bundleName: ' + JSON.stringify(element1.bundleName));
        console.log('particleAbility_connectAbility_test_0600 ConnectAbility onDisconnect element.abilityName:' + JSON.stringify(element1.abilityName));
        console.log('particleAbility_connectAbility_test_0600 ConnectAbility onDisconnect element.uri : ' + JSON.stringify(element1.uri));
        console.log('particleAbility_connectAbility_test_0600 ConnectAbility onDisconnect element.shortName : ' + JSON.stringify(element1.shortName));
      },
      onFailed: function (code: any) {
        console.log('particleAbility_connectAbility_test_0600 ConnectAbility onFailed errCode:' + code);
      },
    }

    let connection_succeeded: number;
    console.info('particleAbility_connectAbility_test_0600  start ');
    let timeOldStamp = getNowTime();
    let connection = particleAbility.connectAbility(request, options);
    let timeNewStamp = getNowTime();
    getDurationTime('particleAbility_connectAbility_test_0600 connectability', timeOldStamp, timeNewStamp);
    connection_succeeded = connection;
    console.info('particleAbility_connectAbility_test_0600 service  request is:' + JSON.stringify(request));
    console.info('particleAbility_connectAbility_test_0600 options is:' + JSON.stringify(options));
    console.info('particleAbility_connectAbility_test_0600 data is: ' + JSON.stringify(connection));
    console.info('particleAbility_connectAbility_test_0600 connection=: ' + connection);
    sleep(5000);
    console.info('particleAbility_connectAbility_test_0600  disconnectability start ');
    timeOldStamp = getNowTime();
    particleAbility.disconnectAbility(connection_succeeded)
      .then((data: any) => {
        let timeNewStamp = getNowTime();
        getDurationTime('particleAbility_connectAbility_test_0600 disconnectability', timeOldStamp, timeNewStamp);
        console.info('particleAbility_connectAbility_test_0600 disconnectability succeeded: ' + JSON.stringify(data));
      })
      .catch((error: BusinessError) => {
        console.error('particleAbility_connectAbility_test_0600 disconnectability failed. Cause: ' +
        JSON.stringify(error));
      })
  },
  onConnect(want) {
    console.info('ServiceAbility7 onConnect');
    return new StubTest7("test");
  },
  onDisConnect(want) {
    console.info('ServiceAbility7 onDisConnect');
  }
}