import ServiceExtensionAbility from '@ohos.app.ability.ServiceExtensionAbility'
import rpc from '@ohos.rpc';

class StubTest extends rpc.RemoteObject {
  constructor(des) {
    super(des)
  }

  onRemoteRequest(code, data, reply, option) {
    console.info('ServiceAbility onRemoteRequest');
    if (code === 1) {
      let op1 = data.readInt();
      let op2 = data.readInt();
      reply.writeInt(op1 + op2);
      console.info('ServiceAbility op1:' + op1 + ' op2:' + op2);
    }
    return true;
  }
}

let remoteOBJ = new StubTest("test");

export default class EntryServiceAbility extends ServiceExtensionAbility {
  onCreate(want){
    console.info('ServiceAbility onCreate');

  }
  onDestroy() {
    console.info('ServiceAbility onDestroy');
  }

  onRequest(want, startId) {
    console.info('ServiceAbility onRequest');
  }

  onConnect(want) {
    console.info('ServiceAbility onConnect');
    return remoteOBJ;
  }

  onDisconnect(want) {
    console.info('ServiceAbility onDisconnect');
  }

  onReconnect(want) {
    console.info('ServiceAbility onReconnect');
  }

  onConfigurationUpdate(newConfig) {
    console.info('ServiceAbility onConfigurationUpdate');
  }

  onDump(params) {
    console.info('ServiceAbility onDump');
    return params;
  }
};