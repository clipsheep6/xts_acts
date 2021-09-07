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

describe('ActsSubscriberTestUnorder', function () {
    console.info("===========ActsSubscriberTestUnorder start====================>");
    var num = 0;
    var CommonEventSubscriber;
    var CommonEventSubscriber001;
    var CommonEventSubscriber002;
    var CommonEventSubscriber003;
    var CommonEventSubscriber004;
    var CommonEventSubscriber005;
    var CommonEventSubscriber006;
    var CommonEventSubscriber007;
    var CommonEventSubscriber008;
    var CommonEventSubscriber009;
    var CommonEventSubscriber010;
    var CommonEventSubscriber011;
    var CommonEventSubscriber_1;
    var CommonEventSubscriber_2;
    var CommonEventSubscribeInfo;
    var CommonEventPublishData_1;
    var CommonEventPublishData_2;

    async function Unsubscriber_()
    {
        await Subscriber.unsubscribe(CommonEventSubscriber_1, UnsubscriberCallBack);
    }

    //IsOrderedCommonEventCallback004
    function IsOrderedCommonEventCallback004(err, data) {
        console.info("==========================>IsOrderedCommonEventCallback004=======================>");
        expect(data).assertEqual(false);
    }

    //IsStickyCommonEventCallback005
    function IsStickyCommonEventCallback005(err, data) {
        console.info("==========================>isStickyCommonEventCallback005=======================>isSticky:"+ data);
        expect(data).assertEqual(true);
    }

    //IsOrderedCommonEventCallback009
    function IsOrderedCommonEventCallback009(err, data) {
        console.info("==========================>IsOrderedCommonEventCallback009=======================>");
        expect(data).assertEqual(false);
    }

    //IsStickyCommonEventCallback010
    function IsStickyCommonEventCallback010(err, data) {
        console.info("==========================>isStickyCommonEventCallback010=======================>");
        expect(data).assertEqual(true);
    }

    function PublishCallback(err) {
        console.info("==========================>PublishCallback=======================>");
    }

    function PublishCallback1100_1(err) {
        console.info("==========================>PublishCallback=======================>");
    }

    function PublishCallback1100_2(err) {
        console.info("==========================>PublishCallback=======================>");
    }

    function UnsubscriberCallBack(err) {
        console.info("==========================>UnsubscriberCallBack=======================>");
    }

    function SubscriberCallBack001(err, data) {
        console.info("==========================>SubscriberCallBack0100=======================>");
        expect(data.event).assertEqual("publish_event0100");
        expect(data.bundleName).assertEqual("");
        expect(data.code).assertEqual(0);
        expect(data.data).assertEqual("");
    }

    function SubscriberCallBack002(err, data) {
        console.info("==========================>SubscriberCallBack0200=======================>");
        expect(data.event).assertEqual("@#￥#3243adsafdf_");
        expect(data.bundleName).assertEqual("");
        expect(data.code).assertEqual(0);
        expect(data.data).assertEqual("");
    }

    function SubscriberCallBack003(err, data) {
        console.info("==========================>SubscriberCallBack0300=======================>");
        expect(data.event).assertEqual(Subscriber.Support.COMMON_EVENT_BATTERY_CHANGED);
        expect(data.bundleName).assertEqual("");
        expect(data.code).assertEqual(0);
        expect(data.data).assertEqual("");
    }

    function SubscriberCallBack004(err, data) {
        console.info("==========================>SubscriberCallBack0400=======================>");
        expect(data.event).assertEqual("publish_event0400");
        expect(data.bundleName).assertEqual("PublishBundleName0400");
        expect(data.code).assertEqual(55);
        expect(data.data).assertEqual("PublishData0400");
        CommonEventSubscriber004.isOrderedCommonEvent(IsOrderedCommonEventCallback004);
    }

    function SubscriberCallBack005(err, data) {
        console.info("==========================>SubscriberCallBack0500=======================>");
        expect(data.event).assertEqual("publish_event0500");
        expect(data.bundleName).assertEqual("");
        expect(data.code).assertEqual(0);
        expect(data.data).assertEqual("");
        CommonEventSubscriber005.isStickyCommonEvent(IsStickyCommonEventCallback005);
    }

    function SubscriberCallBack006(err, data) {
        console.info("==========================>SubscriberCallBack0600=======================>");
        expect(data.event).assertEqual("publish_event0600");
        expect(data.bundleName).assertEqual("");
        expect(data.code).assertEqual(0);
        expect(data.data).assertEqual("");
    }

    function SubscriberCallBack007(err, data) {
        console.info("==========================>SubscriberCallBack0700=======================>");
        expect(data.event).assertEqual("publish_event0700");
        expect(data.bundleName).assertEqual("");
        expect(data.code).assertEqual(0);
        expect(data.data).assertEqual("");
    }

    function SubscriberCallBack008(err, data) {
        console.info("==========================>SubscriberCallBack0800=======================>");
        expect(data.event).assertEqual("publish_event0800");
        expect(data.bundleName).assertEqual("");
        expect(data.code).assertEqual(0);
        expect(data.data).assertEqual("");
    }

    function SubscriberCallBack009(err, data) {
        console.info("==========================>SubscriberCallBack0900=======================>");
        expect(data.event).assertEqual("publish_event0900");
        expect(data.bundleName).assertEqual("");
        expect(data.code).assertEqual(0);
        expect(data.data).assertEqual("");
        CommonEventSubscriber009.isOrderedCommonEvent(IsOrderedCommonEventCallback009);
    }

    function SubscriberCallBack010(err, data) {
        console.info("==========================>SubscriberCallBack1000=======================>");
        expect(data.event).assertEqual("publish_event1000");
        expect(data.bundleName).assertEqual("");
        expect(data.code).assertEqual(0);
        expect(data.data).assertEqual("");
        CommonEventSubscriber010.isStickyCommonEvent(IsStickyCommonEventCallback010);
    }

    async function SubscriberCallBack011_1(err, data) {
        console.info("==========================>SubscriberCallBack011_1=======================>");
        console.info("==========================>SubscriberCallBack011_1=======================>event:"+data.event);
        console.info("==========================>SubscriberCallBack011_1=======================>bundleName:"+data.bundleName);
        expect(data.event).assertEqual("publish_event1100_1");
        expect(data.bundleName).assertEqual("publish_event1100_bundleName1");
        expect(data.code).assertEqual(3);
        expect(data.data).assertEqual("publish_event1100_data");
        await CommonEventSubscriber011.FinishCommonEvent();
    }

    function SubscriberCallBack011_2(err, data) {
        console.info("==========================>SubscriberCallBack011_2=======================>");
        console.info("==========================>SubscriberCallBack011_2=======================>event:"+data.event);
        console.info("==========================>SubscriberCallBack011_2=======================>bundleName:"+data.bundleName);
        expect(data.event).assertEqual("publish_event1100_2");
        expect(data.bundleName).assertEqual("publish_event1100_bundleName2");
        expect(data.code).assertEqual(5);
        expect(data.data).assertEqual("publish_event1100_data");
    }

    async function GetSubscribeInfoCallBack(data) {
        console.info("==========================>GetSubscribeInfoCallBack event = " + data.events[0]);
        switch (data.events[0]) {
            case "publish_event0100":
                expect(data.events[0]).assertEqual("publish_event0100");
                CommonEventSubscriber001 = CommonEventSubscriber;
                await Subscriber.subscribe(CommonEventSubscriber001, SubscriberCallBack001);
                break;
            case "@#￥#3243adsafdf_":
                expect(data.events[0]).assertEqual("@#￥#3243adsafdf_");
                CommonEventSubscriber002 = CommonEventSubscriber;
                await Subscriber.subscribe(CommonEventSubscriber002, SubscriberCallBack002);
                break;
            case Subscriber.Support.COMMON_EVENT_BATTERY_CHANGED:
                expect(data.events[0]).assertEqual("usual.event.BATTERY_CHANGED");
                CommonEventSubscriber003 = CommonEventSubscriber;
                await Subscriber.subscribe(CommonEventSubscriber003, SubscriberCallBack003);
                break;
            case "publish_event0400":
                expect(data.events[0]).assertEqual("publish_event0400");
                expect(data.publisherDeviceId).assertEqual("PublishDeviceId0400");
                expect(data.priority).assertEqual(10);
                CommonEventSubscriber004 = CommonEventSubscriber;
                await Subscriber.subscribe(CommonEventSubscriber004, SubscriberCallBack004);
                break;
            case "publish_event0500":
                expect(data.events[0]).assertEqual("publish_event0500");
                CommonEventSubscriber005 = CommonEventSubscriber;
                await Subscriber.subscribe(CommonEventSubscriber005, SubscriberCallBack005);
                break;
            case "publish_event0600":
                console.info("=====ActsSubscriberTestUnorder_0600====GetSubscribeInfoCallBack===========");
                expect(data.events[0]).assertEqual("publish_event0600");
                if (num == 0) {
                    console.info("======test_0600====GetSubscribeInfoCallBack=====num " + num);
                    CommonEventSubscriber_1 = CommonEventSubscriber;
                    CommonEventSubscriber006 = CommonEventSubscriber_1;
                    console.info("======test_0600====GetSubscribeInfoCallBack=====CommonEventSubscriber006 " + CommonEventSubscriber006);
                } else {
                    console.info("======test_0600====GetSubscribeInfoCallBack=====num " + num);
                    CommonEventSubscriber_2 = CommonEventSubscriber;
                    CommonEventSubscriber006 = CommonEventSubscriber_2;
                    console.info("======test_0600====GetSubscribeInfoCallBack=====CommonEventSubscriber0062 " + CommonEventSubscriber006);
                }
                num ++;
                console.info("======test_0600====GetSubscribeInfoCallBack=====begin call subscribe num = "+ num);
                await Subscriber.subscribe(CommonEventSubscriber006, SubscriberCallBack006);
                console.info("======test_0600====GetSubscribeInfoCallBack=====after call subscribe");
                break;
            case "publish_event0700":
                expect(data.events[0]).assertEqual("publish_event0700");
                CommonEventSubscriber007 = CommonEventSubscriber;
                await Subscriber.subscribe(CommonEventSubscriber007, SubscriberCallBack007);
                break;
            case "publish_event0800":
                expect(data.events[0]).assertEqual("publish_event0800");
                CommonEventSubscriber008 = CommonEventSubscriber;
                await Subscriber.subscribe(CommonEventSubscriber008, SubscriberCallBack008);
                break;
            case "publish_event0900":
                expect(data.events[0]).assertEqual("publish_event0900");
                CommonEventSubscriber009 = CommonEventSubscriber;
                await Subscriber.subscribe(CommonEventSubscriber009, SubscriberCallBack009);
                break;
            case "publish_event1000":
                expect(data.events[0]).assertEqual("publish_event1000");
                CommonEventSubscriber010 = CommonEventSubscriber;
                await Subscriber.subscribe(CommonEventSubscriber010, SubscriberCallBack010);
                break;
            case "publish_event1100_1":
                expect(data.events[0]).assertEqual("publish_event1100_1");
                CommonEventSubscriber011 = CommonEventSubscriber;
                await Subscriber.subscribe(CommonEventSubscriber011, SubscriberCallBack011_1);
                break;
            case "publish_event1100_2":
                expect(data.events[0]).assertEqual("publish_event1100_2");
                CommonEventSubscriber011 = CommonEventSubscriber;
                await Subscriber.subscribe(CommonEventSubscriber011, SubscriberCallBack011_2);
                break;
            default:
                break;
        }
    }

    //  @tc.number: ActsSubscriberTestUnorder_0100
    //  @tc.name: verify subscribe and publish : Check subscribe and publish common event data
    //  @tc.desc: Check the subscriber can receive event "publish_event0100" type of the interface (by Promise)
    it('ActsSubscriberTestUnorder_0100', 0, async function (done) {
        console.info("===============ActsSubscriberTestUnorder_0100=========01010101==========================>");
        CommonEventSubscribeInfo = {
            events: ["publish_event0100"],
        };

        await Subscriber.createSubscriber(
            CommonEventSubscribeInfo
        ).then(async (data) =>{
            console.info("===============ActsSubscriberTestUnorder_0100=========createSubscriber promise==========================>");
            CommonEventSubscriber = data;
            await data.getSubscribeInfo().then(async (data)=>{
                console.info("===============ActsSubscriberTestUnorder_0100=========getSubscribeInfo promise==========================>");
                await GetSubscribeInfoCallBack(data);
            });
        })

        console.info("===============ActsSubscriberTestUnorder_0100=========3333333333333333==========================>");
        await Subscriber.publish("publish_event0100", PublishCallback);
        done();
    })

    //  @tc.number: ActsSubscriberTestUnorder_0200
    //  @tc.name: verify subscribe and publish : Check subscribe and publish common event data of containing special characters
    //  @tc.desc: Check the subscriber can receive event "@#￥#3243adsafdf_" type of the interface (by Promise)
    it('ActsSubscriberTestUnorder_0200', 0, async function (done) {
        console.info("===============ActsSubscriberTestUnorder_0200==========================>");

        var CommonEventSubscribeInfo = {
            events: ["@#￥#3243adsafdf_"],
        };

        await Subscriber.createSubscriber(
            CommonEventSubscribeInfo
        ).then(async (data) =>{
            console.info("===============ActsSubscriberTestUnorder_0200=========createSubscriber promise==========================>");
            CommonEventSubscriber = data;
            await data.getSubscribeInfo().then(async (data)=>{
                console.info("===============ActsSubscriberTestUnorder_0200=========getSubscribeInfo promise==========================>");
                await GetSubscribeInfoCallBack(data);
            });
        })

        Subscriber.publish("@#￥#3243adsafdf_", PublishCallback);
        done();
    })

    //  @tc.number: ActsSubscriberTestUnorder_0300
    //  @tc.name: verify subscribe and publish : Check subscribe and publish system event data
    //  @tc.desc: Check the subscriberA and subscriberB both can receive event "usual.event.BATTERY_CHANGED" type of the interface (by Promise)
    it('ActsSubscriberTestUnorder_0300', 0, async function (done) {
        console.info("===============ActsSubscriberTestUnorder_0300==========================>");
        var CommonEventSubscribeInfo = {
            events: [Subscriber.Support.COMMON_EVENT_BATTERY_CHANGED]
        };

        await Subscriber.createSubscriber(
            CommonEventSubscribeInfo
        ).then(async (data) =>{
            console.info("===============ActsSubscriberTestUnorder_0300=========createSubscriber promise==========================>");
            CommonEventSubscriber = data;
            await data.getSubscribeInfo().then(async (data)=>{
                console.info("===============ActsSubscriberTestUnorder_0300=========getSubscribeInfo promise==========================>");
                await GetSubscribeInfoCallBack(data);
            });
        })

        Subscriber.publish(Subscriber.Support.COMMON_EVENT_BATTERY_CHANGED, PublishCallback);
        done();
    })

    //  @tc.number: ActsSubscriberTestUnorder_0400
    //  @tc.name: verify subscribe and publish : Check subscribe and publish common event data with publishInfo data
    //  @tc.desc: Check the subscriber can receive event "publish_event0400" type of the interface (by Promise)
    it('ActsSubscriberTestUnorder_0400', 0, async function (done) {
        console.info("===============ActsSubscriberTestUnorder_0400==========================>");
        var CommonEventSubscribeInfo = {
            events: ["publish_event0400"],
            publisherDeviceId: "PublishDeviceId0400",
            priority: 10,
        };

        await Subscriber.createSubscriber(
            CommonEventSubscribeInfo
        ).then(async (data) =>{
            console.info("===============ActsSubscriberTestUnorder_0400=========createSubscriber promise==========================>");
            CommonEventSubscriber = data;
            await data.getSubscribeInfo().then(async (data)=>{
                console.info("===============ActsSubscriberTestUnorder_0400=========getSubscribeInfo promise==========================>");
                await GetSubscribeInfoCallBack(data);
            });
        })

        var CommonEventPublishData = {
            isOrdered: false,
            bundleName: "PublishBundleName0400",
            code: 55,
            data: "PublishData0400",
        }

        Subscriber.publish("publish_event0400", CommonEventPublishData, PublishCallback);
        done();
    })

    //  @tc.number: ActsSubscriberTestUnorder_0500
    //  @tc.name: verify subscribe and publish : Check subscribe and publish sticky event
    //  @tc.desc: Check the subscriber can receive event "publish_event0500" type of the interface (by Promise)
    it('ActsSubscriberTestUnorder_0500', 0, async function (done) {
        console.info("===============ActsSubscriberTestUnorder_0500==========================>");
        CommonEventSubscribeInfo = {
            events: ["publish_event0500"]
        };

        await Subscriber.createSubscriber(
            CommonEventSubscribeInfo
        ).then(async (data) =>{
            console.info("===============ActsSubscriberTestUnorder_0500=========createSubscriber promise==========================>");
            CommonEventSubscriber = data;
            await data.getSubscribeInfo().then(async (data)=>{
                console.info("===============ActsSubscriberTestUnorder_0500=========getSubscribeInfo promise==========================>");
                await GetSubscribeInfoCallBack(data);
            });
        })

        var CommonEventPublishData = {
            isOrdered: false,
            isSticky: true,
        }

        Subscriber.publish("publish_event0500", CommonEventPublishData, PublishCallback);

        done();
    })


    //  @tc.number: ActsSubscriberTestUnorder_0600
    //  @tc.name: verify subscribe and publish : Check the two different subscribe and one publish, and check unsubscribe event
    //  @tc.desc: Check the subscriber can receive event "publish_event0600" type of the interface (by Promise)
    it('ActsSubscriberTestUnorder_0600', 0, async function (done) {
        console.info("===============ActsSubscriberTestUnorder_0600==========================>");
        var CommonEventSubscribeInfo = {
            events: ["publish_event0600"]
        };

        await Subscriber.createSubscriber(
            CommonEventSubscribeInfo
        ).then(async (data) =>{
            console.info("===============ActsSubscriberTestUnorder_0600_1=========createSubscriber promise==========================>");
            CommonEventSubscriber = data;
            await data.getSubscribeInfo().then(async (data)=>{
                console.info("===============ActsSubscriberTestUnorder_0600_1=========getSubscribeInfo promise==========================>");
                await GetSubscribeInfoCallBack(data);
            });
        })

        await Subscriber.createSubscriber(
            CommonEventSubscribeInfo
        ).then(async (data) =>{
            console.info("===============ActsSubscriberTestUnorder_0600_2=========createSubscriber promise==========================>");
            CommonEventSubscriber = data;
            await data.getSubscribeInfo().then(async (data)=>{
                console.info("===============ActsSubscriberTestUnorder_0600_2=========getSubscribeInfo promise==========================>");
                await GetSubscribeInfoCallBack(data);
            });
        })

        await Unsubscriber_();
        var CommonEventPublishData = {
            isOrdered: false,
            isSticky: false,
        }

        Subscriber.publish("publish_event0600", CommonEventPublishData, PublishCallback);
        console.info("===============ActsSubscriberTestUnorder_0600  22222222=========================>");
        done();
    })

    //  @tc.number: ActsSubscriberTestUnorder_0700
    //  @tc.name: verify subscribe and publish : Check one subscribe and twice publish common events
    //  @tc.desc: Check the subscriber can receive event "publish_event0700" type of the interface (by Promise)
    it('ActsSubscriberTestUnorder_0700', 0, async function (done) {
        console.info("===============ActsSubscriberTestUnorder_0700 1111111111111==========================>");
        var CommonEventSubscribeInfo = {
            events: ["publish_event0700"]
        };

        await Subscriber.createSubscriber(
            CommonEventSubscribeInfo
        ).then(async (data) =>{
            console.info("===============ActsSubscriberTestUnorder_0700=========createSubscriber promise==========================>");
            CommonEventSubscriber = data;
            await data.getSubscribeInfo().then(async (data)=>{
                console.info("===============ActsSubscriberTestUnorder_0700=========getSubscribeInfo promise==========================>");
                await GetSubscribeInfoCallBack(data);
            });
        })

        var CommonEventPublishData = {
            isOrdered: false,
            isSticky: false,
        }

        Subscriber.publish("publish_event0700", CommonEventPublishData, PublishCallback);
        Subscriber.publish("publish_event0700", CommonEventPublishData, PublishCallback);
        done();
    })

    //  @tc.number: ActsSubscriberTestUnorder_0800
    //  @tc.name: verify subscribe and publish : Check subscribe and publish common event with permission
    //  @tc.desc: Check the subscriber can receive event "publish_event0800" type of the interface (by Promise)
    it('ActsSubscriberTestUnorder_0800', 0, async function (done) {
        console.info("===============ActsSubscriberTestUnorder_0800==========================>");
        var CommonEventSubscribeInfo = {
            events: ["publish_event0800"],
            publisherPermission:"publish_event0800_permission"
        };

        await Subscriber.createSubscriber(
            CommonEventSubscribeInfo
        ).then(async (data) => {
            console.info("=================ActsSubscriberTestUnorder_0800=========createSubscriberPromise0800=======================>");
            CommonEventSubscriber = data;
            await data.getSubscribeInfo().then(async (data)=>{
                console.info("===============ActsSubscriberTestUnorder_0800=========getSubscribeInfo promise==========================>");
                await GetSubscribeInfoCallBack(data);
            });
        });

        var CommonEventPublishData = {
            subscriberPermissions:["publish_event0800_permission"],
            isOrdered: false,
            isSticky: false,
        }

        Subscriber.publish("publish_event0800", CommonEventPublishData, PublishCallback);
        done();
    })

    //  @tc.number: ActsSubscriberTestUnorder_0900
    //  @tc.name: verify subscribe and publish : Check subscribe and publish common event with permission and check IsOrderedCommonEvent
    //  @tc.desc: Check the subscriber can receive event "publish_event0900" type of the interface (by Promise)
    it('ActsSubscriberTestUnorder_0900', 0, async function (done) {
        console.info("===============ActsSubscriberTestUnorder_0900==========================>");
        var CommonEventSubscribeInfo = {
            events: ["publish_event0900"],
            publisherPermission:"publish_event0900_publisherPermission"
        };

        await Subscriber.createSubscriber(
            CommonEventSubscribeInfo
        ).then(async (data) => {
            console.info("==========================>createSubscriberPromise0900=======================>");
            CommonEventSubscriber = data;
            await data.getSubscribeInfo().then(async (data)=>{
                console.info("===============ActsSubscriberTestUnorder_0900=========getSubscribeInfo promise==========================>");
                await GetSubscribeInfoCallBack(data);
            });
        });

        var CommonEventPublishData = {
            subscriberPermissions:["publish_event0900_subscriberPermissions"],
            isOrdered: false,
            isSticky: false
        }

        Subscriber.publish("publish_event0900", CommonEventPublishData, PublishCallback);
        done();
    })

    //  @tc.number: ActsSubscriberTestUnorder_1000
    //  @tc.name: verify subscribe and publish : Check subscribe and publish sticky event with publishpermission and check IsStickyCommonEvent
    //  @tc.desc: Check the subscriber can receive event "publish_event1000" type of the interface (by Promise)
    it('ActsSubscriberTestUnorder_1000', 0, async function (done) {
        console.info("===============ActsSubscriberTestUnorder_1000==========================>");
        var CommonEventSubscribeInfo = {
            events: ["publish_event1000"]
        };

        await Subscriber.createSubscriber(
            CommonEventSubscribeInfo
        ).then(async (data) => {
            console.info("==========================>createSubscriberPromise1000=======================>");
            CommonEventSubscriber = data;
            await data.getSubscribeInfo().then(async (data)=>{
                console.info("===============ActsSubscriberTestUnorder_1000=========getSubscribeInfo promise==========================>");
                await GetSubscribeInfoCallBack(data);
            });
        });

        var CommonEventPublishData = {
            subscriberPermissions:["publish_event1000_permission"],
            isOrdered: false,
            isSticky: true
        }

        Subscriber.publish("publish_event1000", CommonEventPublishData, PublishCallback);
        done();

    })

    //  @tc.number: ActsSubscriberTestUnorder_1100
    //  @tc.name: verify subscribe and publish : Check different subscribes and publish different common event
    //  @tc.desc: Check the subscriber can receive event "publish_event1001" type of the interface
    it('ActsSubscriberTestUnorder_1100', 0, async function (done) {
        console.info("===============ActsSubscriberTestUnorder_1100==========================>");

        var CommonEventSubscribeInfo_1 = {
            events: ["publish_event1100_1"],
            priority: 5
        };

        var CommonEventSubscribeInfo_2 = {
            events: ["publish_event1100_2"],
            priority: 10
        };

        await Subscriber.createSubscriber(
            CommonEventSubscribeInfo_1
        ).then(async (data) => {
            console.info("=================ActsSubscriberTestUnorder_1100=========>createSubscriber Promise1100_1=======================>");
            CommonEventSubscriber = data;
            await data.getSubscribeInfo().then(async (data)=>{
                console.info("===============ActsSubscriberTestUnorder_1100=========getSubscribeInfo promise1100_1==========================>");
                await GetSubscribeInfoCallBack(data);
            });
        });

        await Subscriber.createSubscriber(
            CommonEventSubscribeInfo_2
        ).then(async (data) => {
            console.info("=================ActsSubscriberTestUnorder_1100=========>createSubscriber Promise1100_2=======================>");
            CommonEventSubscriber = data;
            await data.getSubscribeInfo().then(async (data)=>{
                console.info("===============ActsSubscriberTestUnorder_1100=========getSubscribeInfo promise1100_2==========================>");
                await GetSubscribeInfoCallBack(data);
            });
        });

        CommonEventPublishData_1 = {
            bundleName: "publish_event1100_bundleName1",
            code: 3,
            data: "publish_event1100_data",
            isOrdered: false,
            isSticky: false,
        }

        CommonEventPublishData_2 = {
            bundleName: "publish_event1100_bundleName2",
            code: 5,
            data: "publish_event1100_data",
            isOrdered: false,
            isSticky: false,
        }

        Subscriber.publish("publish_event1100_1", CommonEventPublishData_1, PublishCallback1100_1);
        Subscriber.publish("publish_event1100_2", CommonEventPublishData_2, PublishCallback1100_2);

        done();
    })
})
