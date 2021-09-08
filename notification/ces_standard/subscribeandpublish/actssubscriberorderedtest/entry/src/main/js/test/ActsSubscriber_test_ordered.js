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
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
import Subscriber from '@ohos.commonevent'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

describe('ActsSubscriberTestOrder', function () {
    console.info("===========ActsSubscriberTestOrder start====================>");
    var num = 0, num2 = 0;
    var CommonEventSubscriber0100;
    var CommonEventSubscriber0101;
    var CommonEventSubscriber0200_1;
    var CommonEventSubscriber0200_2;
    var CommonEventSubscriber0300_1;
    var CommonEventSubscriber0300_2;
    var CommonEventSubscriber0400_1;
    var CommonEventSubscriber0400_2;

    async function Unsubscriber2_()
    {
        await Subscriber.unsubscribe(CommonEventSubscriber0200_1,unsubscribeCallback);
    }

    function PublishCallback(err) {
        console.info("==========================>PublishCallback=======================>");
    }

    function unsubscribeCallback(err) {
        console.info("==========================>unsubscribeCallback=======================>");
    }

    async function SubscriberCallBack0100(err, data) {
        console.info("==========================>SubscriberCallBack0100========event===============>" + data.event);
        console.info("==========================>SubscriberCallBack0100========bundleName===============>" + data.bundleName);
        console.info("==========================>SubscriberCallBack0100=========code==============>" + data.code);
        console.info("==========================>SubscriberCallBack0100=========data==============>" + data.data);
        expect(data.event).assertEqual("publish_event0100");
        console.info("==========================>SubscriberCallBack0100=========1==============>");
        expect(data.code).assertEqual(1);
        console.info("==========================>SubscriberCallBack0100=========2==============>");
        expect(data.data).assertEqual("publish_event1001_init");
        console.info("==========================>SubscriberCallBack0100=========3==============>");
        expect(data.bundleName).assertEqual("publish_event0100_bundleName");
        console.info("==========================>SubscriberCallBack0100=========4==============>");
        console.info("==========================>SubscriberCallBack0100=========CommonEventSubscriber0100==============>" + CommonEventSubscriber0100);
        console.info("===============SubscriberCallBack0100=======>before AbmonEventCallback===ortCom=========");
        console.info("===============SubscriberCallBack0100=======>after AbortCommonEventCallback============");

        CommonEventSubscriber0100.setCode(2).then(()=>{
            console.info("==========================>SubscriberCallBack0100 setCodeCallBack promise=======================>");
        })

        CommonEventSubscriber0100.setData("publish_event1001_change").then(()=>{
            console.info("==========================>SubscriberCallBack0100 setDataCallBack promise=======================>");
        })

        CommonEventSubscriber0100.setCodeAndData(2, "publish_event1001_change").then(()=>{
            console.info("==========================>SubscriberCallBack0100 setCodeAndDataCallback promise=======================>");
        })

        CommonEventSubscriber0100.getAbortCommonEvent().then((data)=>{
            console.info("==========================>SubscriberCallBack0100 getAbortCommonEventCallback1 promise=======================> abort = " + data);
        })

        CommonEventSubscriber0100.clearAbortCommonEvent().then(()=>{
            console.info("==========================>SubscriberCallBack0100 clearAbortCommonEventCallback promise=======================>");
        })

        CommonEventSubscriber0100.getAbortCommonEvent().then((data)=>{
            console.info("==========================>SubscriberCallBack0100 getAbortCommonEventCallback2 promise=======================> abort = " + data);
        })

        await CommonEventSubscriber0100.finishCommonEvent().then(()=>{
            console.info("==========================>SubscriberCallBack0100 finishCommonEvent promise=======================>");
        })
        console.info("==========================>SubscriberCallBack0100=========end ==============>");
    }

    async function SubscriberCallBack0101(err, data) {
        console.info("==========================>SubscriberCallBack0101========code===============>" + err.code);
        console.info("==========================>SubscriberCallBack0101========event===============>" + data.event);
        console.info("==========================>SubscriberCallBack0101========bundleName===============>" + data.bundleName);
        console.info("==========================>SubscriberCallBack0101=========code==============>" + data.code);
        console.info("==========================>SubscriberCallBack0101=========data==============>" + data.data);
        expect(data.event).assertEqual("publish_event0100");
        console.info("==========================>SubscriberCallBack0101=========1 code:==============>"+ data.code);
        expect(data.code).assertEqual(2);
        CommonEventSubscriber0101.getCode().then((data)=>{
            console.info("==========================>SubscriberCallBack0101 getCodeCallBack promise code:=======================>"+ data);
        })
        expect(data.data).assertEqual("publish_event1001_change");
        CommonEventSubscriber0100.getData().then((data)=>{
            console.info("==========================>SubscriberCallBack0100 getDataCallBack promise data=======================>"+ data);
        })
        expect(data.bundleName).assertEqual("publish_event0100_bundleName");
        await CommonEventSubscriber0101.finishCommonEvent().then(()=>{
            console.info("==========================>SubscriberCallBack0101 finishCommonEvent promise=======================>");
        })
    }

    async function SubscriberCallBack0200_1(err, data) {
        console.info("==========================>SubscriberCallBack0200_1========event===============>" + data.event);
        console.info("==========================>SubscriberCallBack0200_1========bundleName===============>" + data.bundleName);
        console.info("==========================>SubscriberCallBack0200_1=========code==============>" + data.code);
        console.info("==========================>SubscriberCallBack0200_1=========data==============>" + data.data);
        console.info("==========================>SubscriberCallBack0200_1=========num2==============>" + num2);
        if (num2 == 0) {
            num2++;
            expect(data.event).assertEqual("publish_event0200");
            console.info("==========================>SubscriberCallBack0200_1=====num2:0====code==============>" + data.code);
            expect(data.code).assertEqual(1);
            expect(data.data).assertEqual("publish_event0200_init");
            expect(data.bundleName).assertEqual("publish_event0200_bundleName");
        }else {
            num2 = 0;
            expect(data.event).assertEqual("publish_event0201");
            console.info("==========================>SubscriberCallBack0200_1=====num2:1====code==============>" + data.code);
            expect(data.code).assertEqual(1);
            expect(data.data).assertEqual("publish_event0201_init");
            expect(data.bundleName).assertEqual("publish_event0201_bundleName");
            await CommonEventSubscriber0200_1.finishCommonEvent().then(()=>{
                console.info("==========================>SubscriberCallBack0200_1:num:1:finishCommonEventCallBack=======================>");
            })
        }
    }

    async function SubscriberCallBack0200_2(err, data) {
        console.info("==========================>SubscriberCallBack0200_2========event===============>" + data.event);
        console.info("==========================>SubscriberCallBack0200_2========bundleName===============>" + data.bundleName);
        console.info("==========================>SubscriberCallBack0200_2=========code==============>" + data.code);
        console.info("==========================>SubscriberCallBack0200_2=========data==============>" + data.data);

        expect(data.event).assertEqual("publish_event0201");
        console.info("==========================>SubscriberCallBack0200_2=========code==============>" + data.code);
        expect(data.code).assertEqual(1);
        expect(data.data).assertEqual("publish_event0201_init");
        expect(data.bundleName).assertEqual("publish_event0201_bundleName");
        await CommonEventSubscriber0200_2.finishCommonEvent().then(()=>{
            console.info("==========================>SubscriberCallBack0200_2:finishCommonEventCallBack=======================>");
        })
    }

    async function SubscriberCallBack0300_1(err, data) {
        console.info("==========================>SubscriberCallBack0300_1========event===============>" + data.event);
        console.info("==========================>SubscriberCallBack0300_1========bundleName===============>" + data.bundleName);
        console.info("==========================>SubscriberCallBack0300_1=========code==============>" + data.code);
        console.info("==========================>SubscriberCallBack0300_1=========data==============>" + data.data);

        expect(data.event).assertEqual("publish_event0301");
        expect(data.code).assertEqual(1);
        expect(data.data).assertEqual("publish_event0301_init");
        expect(data.bundleName).assertEqual("publish_event0301_bundleName");
        await CommonEventSubscriber0300_1.isOrderedCommonEvent().then((data)=>{
            console.info("==========================>SubscriberCallBack0300_1 publish_event0301 isOrderedCommonEvent promise======================= >" + data);
            expect(data).assertEqual(1);
        })
        await CommonEventSubscriber0300_1.finishCommonEvent().then(()=>{
            console.info("==========================>SubscriberCallBack0300_1 publish_event0301 finishCommonEventCallBack=======================>");
        })
    }

    async function SubscriberCallBack0300_2(err, data) {
        console.info("==========================>SubscriberCallBack0300_2========event===============>" + data.event);
        console.info("==========================>SubscriberCallBack0300_2========bundleName===============>" + data.bundleName);
        console.info("==========================>SubscriberCallBack0300_2=========code==============>" + data.code);
        console.info("==========================>SubscriberCallBack0300_2=========data==============>" + data.data);

        expect(data.event).assertEqual("publish_event0301");
        expect(data.code).assertEqual(1);
        expect(data.data).assertEqual("publish_event0301_init");
        expect(data.bundleName).assertEqual("publish_event0301_bundleName");
        await CommonEventSubscriber0300_2.isOrderedCommonEvent().then((data)=>{
            console.info("==========================>SubscriberCallBack0300_2 isOrderedCommonEvent promise======================= >" + data);
            expect(data).assertEqual(1);
        })
        await CommonEventSubscriber0300_2.finishCommonEvent().then(()=>{
            console.info("==========================>SubscriberCallBack0300_2 publish_event0301 finishCommonEventCallBack=======================>");
        })
    }

    async function SubscriberCallBack0400_1(err, data) {
        console.info("==========================>SubscriberPromise0400_1========event===============>" + data.event);
        console.info("==========================>SubscriberPromise0400_1========bundleName===============>" + data.bundleName);
        console.info("==========================>SubscriberPromise0400_1=========code==============>" + data.code);
        console.info("==========================>SubscriberPromise0400_1=========data==============>" + data.data);
        expect(data.event).assertEqual("publish_event0400");
        expect(data.code).assertEqual(1);
        expect(data.data).assertEqual("publish_event0400_init");
        expect(data.bundleName).assertEqual("publish_event0400_bundleName");
        console.info("==========================>SubscriberPromise0400_1=========CommonEventSubscriber0400_1==============>" + CommonEventSubscriber0400_1);
        CommonEventSubscriber0400_1.getAbortCommonEvent().then((data) => {
            console.info("====================SubscriberPromise0400_1======>getAbortCommonEventPromise0400_1:1=======================> abort2 = " + data);
        });
        await CommonEventSubscriber0400_1.isOrderedCommonEvent().then((data) => {
            console.info("===================SubscriberPromise0400_1=======>isOrderedCommonEventPromise0400_1=======================> isordered = " + data);
            expect(data).assertEqual(1);
        });
        await CommonEventSubscriber0400_1.isStickyCommonEvent().then((data) => {
            console.info("=================SubscriberPromise0400_1=========>isStickyCommonEventPromise0400_1=======================> isSticky = " + data);
            expect(data).assertEqual(1);
        });
        CommonEventSubscriber0400_1.abortCommonEvent().then(() => {
            console.info("=================SubscriberPromise0400_1=========>AbortCommonEventPromise0400_1=======================>");
        });
        CommonEventSubscriber0400_1.getAbortCommonEvent().then((data) => {
            console.info("===============SubscriberPromise0400_1===========>getAbortCommonEventPromise0400_1:2=======================> abort2 = " + data);
        });
        CommonEventSubscriber0400_1.finishCommonEvent().then(() => {
            console.info("================SubscriberPromise0400_1==========>finishCommonEventPromise0400_1=======================>");
        });
    }

    async function SubscriberCallBack0400_2(err, data) {
        console.info("==========================>SubscriberPromise0400_2========event===============>" + data.event);
    }

    async function GetSubscribeInfoCallBack(data) {
        console.info("==========================>GetSubscribeInfoCallBack event = " + data.events[0]);
        switch (data.events[0]) {
            case "publish_event0100":
                console.info("=====ActsSubscriberTestOrder_0100====GetSubscribeInfoCallBack===========");
                expect(data.events[0]).assertEqual("publish_event0100");
                if (num == 0) {
                    num = 1;
                    console.info("======GetSubscribeInfoCallBack=====num " + num);
                    console.info("======test_0100====GetSubscribeInfoCallBack=====num " + num);
                    await Subscriber.subscribe(CommonEventSubscriber0100, SubscriberCallBack0100);
                    console.info("======test_0100====GetSubscribeInfoCallBack=====after call subscribe");
                } else {
                    console.info("======test_0101====GetSubscribeInfoCallBack=====num " + num);
                    await Subscriber.subscribe(CommonEventSubscriber0101, SubscriberCallBack0101);
                    console.info("======test_0101====GetSubscribeInfoCallBack2=====after call subscribe");
                    num = 0;
                }
                break;

            default:
                break;
        }
    }

    async function GetSubscribeInfoCallBack0200_1(data) {
        console.info("==========================>GetSubscribeInfoCallBack0200_1 data.events[0] = " + data.events[0]);
        console.info("==========================>GetSubscribeInfoCallBack0200_1 data.events[1] = " + data.events[1]);
        expect(data.events[0]).assertEqual("publish_event0200");
        expect(data.events[1]).assertEqual("publish_event0201");
        await Subscriber.subscribe(CommonEventSubscriber0200_1, SubscriberCallBack0200_1);
        console.info("==========================>GetSubscribeInfoCallBack0200_1 end=========================");
    }

    async function GetSubscribeInfoCallBack0200_2(data) {
        console.info("==========================>GetSubscribeInfoCallBack0200_2 data.events[0] = " + data.events[0]);
        expect(data.events[0]).assertEqual("publish_event0201");
        await Subscriber.subscribe(CommonEventSubscriber0200_2, SubscriberCallBack0200_2);
        console.info("==========================>GetSubscribeInfoCallBack0200_2 end=========================");
    }

    async function GetSubscribeInfoCallBack0300_1(data) {
        console.info("==========================>GetSubscribeInfoCallBack0300_1 data.events[0] = " + data.events[0]);
        expect(data.events[0]).assertEqual("publish_event0301");
        await Subscriber.subscribe(CommonEventSubscriber0300_1, SubscriberCallBack0300_1);
        console.info("==========================>GetSubscribeInfoCallBack0300_1 end=========================");
    }

    async function GetSubscribeInfoCallBack0300_2(data) {
        console.info("==========================>GetSubscribeInfoCallBack0300_2 data.events[0] = " + data.events[0]);
        expect(data.events[0]).assertEqual("publish_event0301");
        await Subscriber.subscribe(CommonEventSubscriber0300_2, SubscriberCallBack0300_2);
        console.info("==========================>GetSubscribeInfoCallBack0300_2 end=========================");
    }

    /*
     * @tc.number    : ActsSubscriberTestOrder_0100
     * @tc.name      : verify subscribe and publish : Check subscribe same event and publish common ordered event
     * @tc.desc      : Check the subscriber can receive event "publish_event0100" type of the interface (by Promise)
     */
    it('ActsSubscriberTestOrder_0100', 0, async function (done) {
        console.info("===============ActsSubscriberTestOrder_0100==========================>");

        var CommonEventSubscribeInfo_1 = {
            events: ["publish_event0100"],
            priority: 10
        };

        var CommonEventSubscribeInfo_2 = {
            events: ["publish_event0100"],
            priority: 9
        };

        await Subscriber.createSubscriber(
            CommonEventSubscribeInfo_1
        ).then(async (data)=>{
            console.info("===============ActsSubscriberTestOrder_0100==========createSubscriber promise1================>");
            CommonEventSubscriber0100 = data;
            await CommonEventSubscriber0100.getSubscribeInfo().then(async (data)=>{
                console.info("===============ActsSubscriberTestOrder_0100=========getSubscribeInfo promise1==========================>");
                await GetSubscribeInfoCallBack(data);
            });
        })


        console.info("===============ActsSubscriberTestOrder_0100=======middle=================>");
        await Subscriber.createSubscriber(
            CommonEventSubscribeInfo_2
        ).then(async (data)=>{
            console.info("===============ActsSubscriberTestOrder_0100==========createSubscriber promise2================>");
            CommonEventSubscriber0101 = data;
            await CommonEventSubscriber0100.getSubscribeInfo().then(async (data)=>{
                console.info("===============ActsSubscriberTestOrder_0100=========getSubscribeInfo promise2==========================>");
                await GetSubscribeInfoCallBack(data);
            });
        })

        var CommonEventPublishData = {
            bundleName: "publish_event0100_bundleName",
            code: 1,
            data: "publish_event1001_init",
            isOrdered: true,
            isSticky: false,
        }

        Subscriber.publish("publish_event0100", CommonEventPublishData, PublishCallback);
        done();
    })

    /*
     * @tc.number    : ActsSubscriberTestOrder_0200
     * @tc.name      : verify subscribe and publish : Check subscribe different event and twice publish common ordered event and check unsubscribe event
     * @tc.desc      : Check the subscriber can receive event "publish_event0200" type of the interface (by Promise)
     */
    it ('ActsSubscriberTestOrder_0200', 0, async function (done) {
        console.info("===============ActsSubscriberTestOrder_0200==========================>");

        var CommonEventSubscribeInfo_1 = {
            events: ["publish_event0200",
                "publish_event0201"],
            priority: 10
        };

        var CommonEventSubscribeInfo_2 = {
            events: ["publish_event0201"],
            priority: 9
        };

        await Subscriber.createSubscriber(
            CommonEventSubscribeInfo_1,
        ).then(async (data)=>{
            console.info("===============ActsSubscriberTestOrder_0200==========createSubscriber promise1================>");
            CommonEventSubscriber0200_1 = data;
            await data.getSubscribeInfo().then(async (data)=>{
                console.info("===============ActsSubscriberTestOrder_0200=========getSubscribeInfo promise1==========================>");
                await GetSubscribeInfoCallBack0200_1(data);
            });
        })

        await Subscriber.createSubscriber(
            CommonEventSubscribeInfo_2,
        ).then(async (data)=>{
            console.info("===============ActsSubscriberTestOrder_0200==========createSubscriber promise2================>");
            CommonEventSubscriber0200_2 = data;
            await data.getSubscribeInfo().then(async (data)=>{
                console.info("===============ActsSubscriberTestOrder_0200=========getSubscribeInfo promise2==========================>");
                await GetSubscribeInfoCallBack0200_2(data);
            });
        })

        var CommonEventPublishData1 = {
            bundleName: "publish_event0200_bundleName",
            code: 1,
            data: "publish_event0200_init",
            isOrdered: false,
            isSticky: false,
        }

        var CommonEventPublishData2 = {
            bundleName: "publish_event0201_bundleName",
            code: 1,
            data: "publish_event0201_init",
            isOrdered: true,
            isSticky: false,
        }

        await Unsubscriber2_();

        Subscriber.publish("publish_event0200", CommonEventPublishData1, PublishCallback);
        Subscriber.publish("publish_event0201", CommonEventPublishData2, PublishCallback);
        done();
    })

    /*
     * @tc.number    : ActsSubscriberTestOrder_0300
     * @tc.name      : verify subscribe and publish : Check subscribe different events and some publish common ordered events
     * @tc.desc      : Check the subscriber can receive event "publish_event0301" type of the interface (by Promise)
     */
    it ('ActsSubscriberTestOrder_0300', 0, async function (done) {
        console.info("===============ActsSubscriberTestOrder_0300==========================>");

        var CommonEventSubscribeInfo_1 = {
            events: ["publish_event0301"],
            priority: 9
        };

        var CommonEventSubscribeInfo_2 = {
            events: ["publish_event0301"],
            priority: 10
        };

        await Subscriber.createSubscriber(
            CommonEventSubscribeInfo_1,
        ).then(async (data)=>{
            console.info("===============ActsSubscriberTestOrder_0300==========createSubscriber promise1================>");
            CommonEventSubscriber0300_1 = data;
            await data.getSubscribeInfo().then(async (data)=>{
                console.info("===============ActsSubscriberTestOrder_0300=========getSubscribeInfo promise1==========================>");
                await GetSubscribeInfoCallBack0300_1(data);
            });
        })

        await Subscriber.createSubscriber(
            CommonEventSubscribeInfo_2,
        ).then(async (data)=>{
            console.info("===============ActsSubscriberTestOrder_0300==========createSubscriber promise2================>");
            CommonEventSubscriber0300_2 = data;
            await data.getSubscribeInfo().then(async (data)=>{
                console.info("===============ActsSubscriberTestOrder_0300=========getSubscribeInfo promise2==========================>");
                await GetSubscribeInfoCallBack0300_2(data);
            });
        })

        var CommonEventPublishData2 = {
            bundleName: "publish_event0301_bundleName",
            code: 1,
            data: "publish_event0301_init",
            isOrdered: true,
            isSticky: false,
        }
        var numindex = 0;
        for (; numindex < 3; ++numindex) {
            Subscriber.publish("publish_event0301", CommonEventPublishData2, PublishCallback);
        }
        done();

    })

    /*
     * @tc.number    : ActsSubscriberTestOrder_0400
     * @tc.name      : verify subscribe and publish : Check subscribe same events and publish common sticky ordered events and check abort event
     * @tc.desc      : Check the subscriber can receive event "publish_event0400" type of the interface (by promise)
     */
    it ('ActsSubscriberTestOrder_0400', 0, async function (done) {
        console.info("===============ActsSubscriberTestOrder_0400==========================>");

        var CommonEventSubscribeInfo_1 = {
            events: ["publish_event0400"],
            priority: 10
        };

        var CommonEventSubscribeInfo_2 = {
            events: ["publish_event0400"],
            priority: 9
        };

        await Subscriber.createSubscriber(
            CommonEventSubscribeInfo_1
        ).then(async (data) => {
            console.info("===============ActsSubscriberTestOrder_0400===========>createSubscriberPromise0400_1:1=======================>");
            CommonEventSubscriber0400_1 = data;
            await data.getSubscribeInfo().then(async (data)=>{
                console.info("=============ActsSubscriberTestOrder_0400=============>GetSubscribeInfoPromisek0400_1 data.events[0] = " + data.events[0]);
                expect(data.events[0]).assertEqual("publish_event0400");
                await Subscriber.subscribe(CommonEventSubscriber0400_1, SubscriberCallBack0400_1);
            })
        })

        await Subscriber.createSubscriber(
            CommonEventSubscribeInfo_2
        ).then(async (data) => {
            console.info("==================ActsSubscriberTestOrder_0400========>createSubscriberPromise0400_1:2=======================>");
            CommonEventSubscriber0400_2 = data;
            await data.getSubscribeInfo().then(async (data)=>{
                console.info("==============ActsSubscriberTestOrder_0400============>GetSubscribeInfoPromisek0400_1 data.events[0] = " + data.events[0]);
                expect(data.events[0]).assertEqual("publish_event0400");
                await Subscriber.subscribe(CommonEventSubscriber0400_2, SubscriberCallBack0400_2);
            })
        })

        var CommonEventPublishData = {
            bundleName: "publish_event0400_bundleName",
            code: 1,
            data: "publish_event0400_init",
            isOrdered: true,
            isSticky: true,
        }
        Subscriber.publish("publish_event0400", CommonEventPublishData, PublishCallback);
        done();
    })
})
