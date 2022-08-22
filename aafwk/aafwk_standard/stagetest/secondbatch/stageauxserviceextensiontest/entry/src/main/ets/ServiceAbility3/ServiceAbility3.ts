import ServiceExtension from "@ohos.application.ServiceExtension"
import commonEvent from '@ohos.commonevent'


export default class MyServiceAbility extends ServiceExtension {
    onCreate(want) {
        globalThis.extensionContext = this.context;
        console.log('[MyApplication2] MyServiceExtension3 onCreate' + JSON.stringify(want));
        commonEvent.publish('MyApplication2_ServiceExtension3_onCreate', () => {
            console.log('[MyApplication2] MyServiceExtension3-- onCreate publish event: MyApplication2_onCreate ');
        })
    }

    onDestroy() {
        console.log('[MyApplication2] MyServiceExtension3 onDestroy');
        globalThis.lifecycleList.push(['MyApplication2.MyServiceExtension3', 'onDestroy']);
    }

    onRequest(want, startId) {
        console.log('MyServiceExtension3-- onRequest' + JSON.stringify(want) + JSON.stringify(startId));
        globalThis.startId = startId
        commonEvent.publish('MyApplication2_ServiceExtension3_onRequest', () => {
            console.log('[MyApplication2] MyServiceExtension3-- onRequest  publish event: MyApplication2_OnRequest ');
        })

    }
}
