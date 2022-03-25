import ServiceExtension from "@ohos.application.ServiceExtension"

export default class ServiceAbility extends ServiceExtension {

    onCreate(want){
        console.log('MyApplication.ServiceAbility onCreate' + JSON.stringify(want));
        globalThis.extensionContext = this.context;
    }

    onDestroy(){
        console.log('[MyApplication] ServiceAbility onDestroy');
    }

    onRequest(want,startId){
        console.log('[MyApplication] ServiceAbility onRequest' + JSON.stringify(want) + JSON.stringify(startId));
    }

    onConnect(want){
        console.log('[MyApplication] ServiceAbility onConnect' + JSON.stringify(want));
    }

    onDisconnect(want){
        console.log('[MyApplication] ServiceAbility onConnect' + JSON.stringify(want));
    }

    onReconnect(want){
        console.log('[MyApplication] ServiceAbility onConnect' + JSON.stringify(want));
    }
}
