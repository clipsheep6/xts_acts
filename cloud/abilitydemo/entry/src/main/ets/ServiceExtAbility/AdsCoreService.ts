import rpc from '@ohos.rpc';
import ServiceExtensionAbility from '@ohos.app.ability.ServiceExtensionAbility';

const REQUEST_CODE = 0;
const TAG = "AdsCoreService";
let remoteObject;

class StubTest extends rpc.RemoteObject {
    constructor(des) {
        super(des);
    }

    // 接收客户端传递过来的消息处理，以及将处理的结果返回给客户端
    onRemoteMessageRequest(code, data, reply, option) {
        if (code === REQUEST_CODE) {
            // 接收客户端传递过来的数据
            // 客户端使用多次调用data.writeInt()写入多个数据时，服务端可以通过多次调用data.readInt()方法接收对应的数据
            let interfaceToken = data.readInterfaceToken();
            let adConfigStrJson = data.readString();
            remoteObject = data.readRemoteObject();
            console.log(TAG, `ServiceExtAbility, get msg, interfaceToken : ${interfaceToken}, adConfigStrJson: ${adConfigStrJson}`);
            // 服务端将数据的处理结果返回给客户端
            // 示例中为接收了两个数据，并将两个数据的求和返回给客户端
            reply.writeInt(110);
            if (remoteObject === null) {
                console.log(TAG, "remoteObject === null");
            } else {
                console.log(TAG, "remoteObject !== null");
            }
            let option = new rpc.MessageOption();
            let d = new rpc.MessageParcel();
            let r = new rpc.MessageParcel();
            let c = 200;
            this.sendRequest(c, d, r, option);
        } else if (code === 1) {
            let callingUid = data.readInt();
            console.log(TAG, `ad request adrequest callinguid is : ${callingUid}`);
            let remoteObject = data.readRemoteObject();
            let adrequest = data.readString();
            console.log(TAG, `ad request adrequest is : ${adrequest}`);
            let adoptions = data.readString();
            console.log(TAG, `ad request adoptions is : ${adoptions}`);
            let collect = data.readString();
            console.log(TAG, `ad request collect is : ${collect}`);
            let option1 = new rpc.MessageOption();
            let data1 = new rpc.MessageParcel();
            let reply1 = new rpc.MessageParcel();
            let code1 = 1;
            let ad = [{
                adType: 123,
                rewardVerifyConfig: {
                    "key1": "value1",
                    "key2": "value2",
                    "key3": "value3"
                },
                uniqueId: '45678',
                rewarded: true,
                shown: true,
                clicked: false
            },
                {
                    adType: 456,
                    rewardVerifyConfig: {
                        "key1": "value1",
                        "key2": "value2",
                        "key3": "value3"
                    },
                    uniqueId: '996',
                    rewarded: true,
                    shown: true,
                    clicked: false
                }];
            data1.writeInt(200);
            data1.writeString(JSON.stringify(ad));
            remoteObject.sendRequest(code1, data1, reply1, option1);
        } else if (code === 2) {
            let callingUid = data.readInt();
            console.log(TAG, `ad request adrequest callinguid is : ${callingUid}`);
            let remoteObject = data.readRemoteObject();
            let adrequest = data.readString();
            console.log(TAG, `ad request adrequest is : ${adrequest}`);
            let adoptions = data.readString();
            console.log(TAG, `ad request adoptions is : ${adoptions}`);
            let collect = data.readString();
            console.log(TAG, `ad request collect is : ${collect}`);
            let option1 = new rpc.MessageOption();
            let data1 = new rpc.MessageParcel();
            let reply1 = new rpc.MessageParcel();
            let code1 = 2;
            let ad = {
                'abcd': [{
                    adType: 123,
                    rewardVerifyConfig: {
                        "key1": "value1",
                        "key2": "value2",
                        "key3": "value3"
                    },
                    uniqueId: '45678',
                    rewarded: true,
                    shown: true,
                    clicked: false
                },
                    {
                        adType: 456,
                        rewardVerifyConfig: {
                            "key1": "value1",
                            "key2": "value2",
                            "key3": "value3"
                        },
                        uniqueId: '996',
                        rewarded: true,
                        shown: true,
                        clicked: false
                    }],
                'efgh': [{
                    adType: 123,
                    rewardVerifyConfig: {
                        "key1": "value1",
                        "key2": "value2",
                        "key3": "value3"
                    },
                    uniqueId: '45678',
                    rewarded: true,
                    shown: true,
                    clicked: false
                },
                    {
                        adType: 456,
                        rewardVerifyConfig: {
                            "key1": "value1",
                            "key2": "value2",
                            "key3": "value3"
                        },
                        uniqueId: '996',
                        rewarded: true,
                        shown: true,
                        clicked: false
                    }]
            }
            data1.writeInt(200);
            data1.writeString(JSON.stringify(ad));
            remoteObject.sendRequest(code1, data1, reply1, option1);
        }
        return true;
    }

    // 以同步或异步方式向客户端发送消息
    sendRequest(code, data, reply, options) {
        let success = 9999;
        data.writeInt(success);
        data.writeString("i am SEA");
        remoteObject.sendRequest(code, data, reply, options).the((result: rpc.SendRequestResult) => {
            if (result.errCode !== 0) {
                console.log(TAG, 'sendRequest failed, result = ' + JSON.stringify(result));
            }
            console.log(TAG, 'sendRequest success');
        });
        return null;
    }
}

export default class ServiceExtAbility extends ServiceExtensionAbility {
    onCreate(want) {
        console.log(TAG, `onCreate, want: ${want.abilityName}`);
    }

    onRequest(want, startId) {
        console.log(TAG, `onRequest, want: ${want.abilityName}`);
    }

    onConnect(want) {
        console.log(TAG, `onConnect, want: ${want.abilityName}`);
        return new StubTest("test");
    }

    onDisconnect(want) {
        console.log(TAG, `onDisconnect, want: ${want.abilityName}`);
    }

    onDestroy() {
        console.log(TAG, `onDestroy`);
    }
}
