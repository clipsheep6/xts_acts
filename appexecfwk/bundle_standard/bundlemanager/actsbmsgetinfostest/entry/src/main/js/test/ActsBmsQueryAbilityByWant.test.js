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
import bundle from '@ohos.bundle'
import account from '@ohos.account.osAccount'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit'

const BUNDLE_NAME1 = 'com.example.third1';
const SYSTEM_NAME = 'com.example.system2';
const ABILITIY_NAME8 = 'com.example.system2.MainAbility';
const ACTION_NAME = 'action.system.home';
const ENTITY_NAME = 'entity.system.home';
let userId = 0;
const USERID = 100;

describe('ActsBmsQueryAbilityByWant', function () {

    beforeAll(async function (done) {
        await account.getAccountManager().getOsAccountLocalIdFromProcess().then(account => {
            console.info("getOsAccountLocalIdFromProcess userid  ==========" + account);
            userId = account;
            done();
        }).catch(err => {
            console.info("getOsAccountLocalIdFromProcess err ==========" + JSON.stringify(err));
            done();
        })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_0100
    * @tc.name:  queryAbilityByWant callback by other callback
    * @tc.desc: 1.queryAbilityByWant callback
    *           2.queryAbilityByWant for third app
    */
    it('bms_queryAbilityByWant_0100', 0, async function (done) {
        await bundle.queryAbilityByWant({
            action: ACTION_NAME,
            entities: [ENTITY_NAME],
            bundleName: BUNDLE_NAME1
        }, bundle.BundleFlag.GET_ABILITY_INFO_WITH_APPLICATION | bundle.BundleFlag.GET_ABILITY_INFO_SYSTEMAPP_ONLY,
            userId).then(data => {
                expect(data).assertFail();
            }).catch(err => {
                expect(err).assertEqual(1);
            });
        bundle.queryAbilityByWant({
            action: ACTION_NAME,
            entities: [ENTITY_NAME],
            bundleName: BUNDLE_NAME1
        }, bundle.BundleFlag.GET_ABILITY_INFO_WITH_APPLICATION | bundle.BundleFlag.GET_ABILITY_INFO_SYSTEMAPP_ONLY,
            userId, (err, data) => {
                expect(err).assertEqual(1);
                expect(data).assertEqual("QueryAbilityInfos failed");
                done();
            });
    });

    /*
    * @tc.number: bms_queryAbilityByWant_0200
    * @tc.name:  queryAbilityByWant callback by other callback
    * @tc.desc: 1.queryAbilityByWant callback
    *           2.queryAbilityByWant for systemapp
    */
    it('bms_queryAbilityByWant_0200', 0, async function (done) {
        await bundle.queryAbilityByWant(
            {
                action: ACTION_NAME,
                entities: [ENTITY_NAME]
            },
            bundle.BundleFlag.GET_ABILITY_INFO_WITH_APPLICATION | bundle.BundleFlag.GET_ABILITY_INFO_SYSTEMAPP_ONLY,
            userId).then(data => {
                expect(data.length).assertLarger(0);
                for (let i = 0; i < data.length; ++i) {
                    expect(data[i].applicationInfo.systemApp).assertEqual(true);
                }
            }
            ).catch(err => {
                expect(err).assertFail();
            });
        bundle.queryAbilityByWant(
            {
                action: ACTION_NAME,
                entities: [ENTITY_NAME]
            },
            bundle.BundleFlag.GET_ABILITY_INFO_WITH_APPLICATION | bundle.BundleFlag.GET_ABILITY_INFO_SYSTEMAPP_ONLY,
            userId, (err, data) => {
                if (err) {
                    expect(err).assertFail();
                }
                expect(data.length).assertLarger(0);
                for (let i = 0; i < data.length; ++i) {
                    expect(data[i].applicationInfo.systemApp).assertEqual(true);
                }
                done();
            });
    });

    /*
    * @tc.number: bms_queryAbilityByEntities_0300
    * @tc.name: Use the implicit query method in queryAbilityByWant to get abilityInfos 
    * @tc.desc: The entities in the parameter want pass in the new field, and use the implicit query to get abilitInfos
    */
    it('bms_queryAbilityByEntities_0300', 0, async function (done) {
        let dataInfos = await bundle.queryAbilityByWant({
            action: ACTION_NAME,
            entities: ["entity.app.music",
                "entity.app.email",
                "entity.app.contacts",
                "entity.app.maps",
                "entity.app.browser",
                "entity.app.calendar",
                "entity.app.messaging",
                "entity.app.files",
                "entity.app.gallery"],
            deviceId: '0',
            bundleName: '',
            abilityName: ''
        }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, userId);
        expect(dataInfos.length).assertEqual(1);
        cheackAbilityInfos(dataInfos[0]);
        bundle.queryAbilityByWant({
            action: ACTION_NAME,
            entities: ["entity.app.music",
                "entity.app.email",
                "entity.app.contacts",
                "entity.app.maps",
                "entity.app.browser",
                "entity.app.calendar",
                "entity.app.messaging",
                "entity.app.files",
                "entity.app.gallery"],
            deviceId: '0',
            bundleName: '',
            abilityName: ''
        }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, userId, (err, data) => {
            expect(data.length).assertEqual(1);
            cheackAbilityInfos(data[0]);
            done();
        });
    });

    async function cheackAbilityInfos(data) {
        expect(data.name).assertEqual(ABILITIY_NAME8);
        expect(data.label).assertEqual('$string:app_name');
        expect(data.description).assertEqual('$string:mainability_description');
        expect(data.icon).assertEqual("$media:icon");
        expect(data.isVisible).assertEqual(false);
        expect(data.permissions.length).assertEqual(0);
        expect(data.deviceCapabilities.length).assertEqual(0);
        expect(data.deviceTypes[0]).assertEqual('phone');
        expect(data.process).assertEqual('');
        expect(data.uri).assertEqual('');
        expect(data.bundleName).assertEqual(SYSTEM_NAME);
        expect(data.moduleName).assertEqual("entry");
        expect(Object.keys(data.applicationInfo).length).assertLarger(0);
        expect(data.type).assertEqual(1);
        expect(data.orientation).assertEqual(0);
        expect(data.launchMode).assertEqual(1);
        expect(data.backgroundModes).assertEqual(0);
        expect(data.descriptionId).assertLarger(0);
        expect(data.formEnabled).assertEqual(false);
        expect(data.iconId).assertLarger(0);
        expect(data.labelId).assertLarger(0);
        expect(data.subType).assertEqual(0);
        expect(data.readPermission).assertEqual("");
        expect(data.writePermission).assertEqual("");
        expect(data.targetAbility).assertEqual("");
        expect(data.metaData.length).assertEqual(0);
        expect(data.metadata.length).assertEqual(0);
        expect(data.enabled).assertEqual(true);
    }

    /*
    * @tc.number: bms_queryAbilityByWant_0400
    * @tc.name: action为空，隐式属性(action entity uri type)全部为空，无匹配
    * @tc.desc: 期望值：1
    */
    it('bms_queryAbilityByWant_0400', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": ""
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.log(JSON.stringify(res))
                done()
            }).catch(err => {
                expect(err).assertEqual(1)
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_0500
    * @tc.name: 全部为空，隐式属性全部为空，无匹配 
    * @tc.desc: 期望值：1
    */
    it('bms_queryAbilityByWant_0500', 0, async function (done) {
        bundle.queryAbilityByWant(
            {}, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.log(JSON.stringify(res))
                done()
            }).catch(err => {
                expect(err).assertEqual(1)
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_0600
    * @tc.name: action配置"action_a"，config配置此字符串的会被匹配
    * @tc.desc: 期望值：匹配 actionSingleString
    */
    it('bms_queryAbilityByWant_0600', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                action: "action_a"
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_0600'+ JSON.stringify(res))
                expect(res[0].name).assertEqual('com.example.third7.actionSingleString')
                expect(res[0].description).assertEqual('actionSingleString')
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_0600' + JSON.stringify(err))
                expect().assertFail()
                done()
            })

    });

    /*
    * @tc.number: bms_queryAbilityByWant_0700
    * @tc.name: action配置"action_b2"，config配置此字符串的会被匹配
    * @tc.desc: 期望值：匹配 actionDoubleString
    */
    it('bms_queryAbilityByWant_0700', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "action_b2"
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_0700'+ JSON.stringify(res))
                expect(res[0].name).assertEqual('com.example.third7.actionDoubleString')
                expect(res[0].description).assertEqual('actionDoubleString')
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_0700' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_0800
    * @tc.name: action配置"action_c1"，config配置此字符串的会被匹配
    * @tc.desc: 期望值：匹配 actionDoubleSkill
    */
    it('bms_queryAbilityByWant_0800', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "action_c1"
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_0800'+ JSON.stringify(res))
                expect(res[0].name).assertEqual('com.example.third7.actionDoubleSkill')
                expect(res[0].description).assertEqual('actionDoubleSkill')
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_0800' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_0900
    * @tc.name: action配置"action_d2"，config配置此字符串的会被匹配 
    * @tc.desc: 期望值：匹配 actionDoubleSkill
    */
    it('bms_queryAbilityByWant_0900', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "action_d2"
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_0900'+ JSON.stringify(res))
                expect(res[0].name).assertEqual('com.example.third7.actionDoubleSkill')
                expect(res[0].description).assertEqual('actionDoubleSkill')
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_0900' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });


    /*
    * @tc.number: bms_queryAbilityByWant_1000
    * @tc.name: action配置config中不存在的字符串，无匹配
    * @tc.desc:  期望值: 1
    */
    it('bms_queryAbilityByWant_1000', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "action_not_exist"
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_1000'+ JSON.stringify(res))
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_1000' + JSON.stringify(err))
                expect(err).assertEqual(1)
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_1100
    * @tc.name: entities为空，config中entities不为空则匹配
    * @tc.desc: 期望值: 匹配 entityEmpty entitySingleString entityDoubleString entityDoubleSkill
    */
    it('bms_queryAbilityByWant_1100', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "entity_reserved",
                "entities": []
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_1100'+ JSON.stringify(res))
                const list = ['entityDoubleSkill','entityDoubleString','entitySingleString','entityEmpty']
                for(let i = 0; i < res.length; i++) {
                    expect(list.includes(res[i].description)).assertEqual(true)
                }
                done()
            }).catch(err => {
                console.error(' fail ' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_1200
    * @tc.name: entities为空字符串
    * @tc.desc:  期望值: 1
    */
    it('bms_queryAbilityByWant_1200', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "entity_reserved",
                "entities": [""]
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_1200'+ JSON.stringify(res))
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_1200' + JSON.stringify(err))
                expect(err).assertEqual(1)
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_1300
    * @tc.name: entities设置entity_a，config中配置entity_a则匹配
    * @tc.desc:  期望值: 匹配 entitySingleString
    */
    it('bms_queryAbilityByWant_1300', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "entity_reserved",
                "entities": ["entity_a"]
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_1300'+ JSON.stringify(res))
                expect(res[0].name).assertEqual('com.example.third7.entitySingleString')
                expect(res[0].description).assertEqual('entitySingleString')
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_1300' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_1400
    * @tc.name: entities设置entity_b2，config中配置entity_b2则匹配 
    * @tc.desc: 期望值: 匹配 entityDoubleString
    */
    it('bms_queryAbilityByWant_1400', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "entity_reserved",
                "entities": ["entity_b2"]
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_1400'+ JSON.stringify(res))
                expect(res[0].name).assertEqual('com.example.third7.entityDoubleString')
                expect(res[0].description).assertEqual('entityDoubleString')
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_1400' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_1500
    * @tc.name: entities设置entity_d1，config中配置entity_d1则匹配 
    * @tc.desc: 期望值: 匹配 entityDoubleSkill
    */
    it('bms_queryAbilityByWant_1500', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "entity_reserved",
                "entities": ["entity_d1"]
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_1500'+ JSON.stringify(res))
                expect(res[0].name).assertEqual('com.example.third7.entityDoubleSkill')
                expect(res[0].description).assertEqual('entityDoubleSkill')
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_1500' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_1600
    * @tc.name: entities设置"entity_c1", "entity_c2"，config中配置"entity_c1", "entity_c2"则匹配  
    * @tc.desc: 期望值: 匹配 entityDoubleSkill
    */
    it('bms_queryAbilityByWant_1600', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "entity_reserved",
                "entities": ["entity_c1", "entity_c2"]
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_1600'+ JSON.stringify(res))
                expect(res[0].name).assertEqual('com.example.third7.entityDoubleSkill')
                expect(res[0].description).assertEqual('entityDoubleSkill')
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_1600' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_1700
    * @tc.name: entities设置"entity_b1", "entity_not_exist"，config中不存在，无匹配 
    * @tc.desc: 期望值: 1
    */
    it('bms_queryAbilityByWant_1700', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "entity_reserved",
                "entities": ["entity_b1", "entity_not_exist"]
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_1700'+ JSON.stringify(res))
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_1700' + JSON.stringify(err))
                expect(err).assertEqual(1)
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_1800
    * @tc.name: entities设置"entity_b1", "entity_b2", "entity_not_exist"，config中不存在，无匹配  
    * @tc.desc: 期望值: 1
    */
    it('bms_queryAbilityByWant_1800', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "entity_reserved",
                "entities": ["entity_b1", "entity_b2", "entity_not_exist"]
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_1800'+ JSON.stringify(res))
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_1800' + JSON.stringify(err))
                expect(err).assertEqual(1)
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_1900
    * @tc.name: entities设置"entity_not_exist"，config中不存在，无匹配
    * @tc.desc: 期望值: 1
    */
    it('bms_queryAbilityByWant_1900', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "entity_reserved",
                "entities": ["entity_not_exist"]
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_1900'+ JSON.stringify(res))
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_1900' + JSON.stringify(err))
                expect(err).assertEqual(1)
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_2000
    * @tc.name: entities为空，config中entities不为空则匹配
    * @tc.desc: 期望值: 匹配 entityEmpty entitySingleString entityDoubleString entityDoubleSkill
    */
    it('bms_queryAbilityByWant_2000', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "entity_reserved",
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_2000 '+ JSON.stringify(res))
                const list = ['entityDoubleSkill','entityDoubleString','entitySingleString','entityEmpty']
                for(let i = 0; i < res.length; i++) {
                    expect(list.includes(res[i].description)).assertEqual(true)
                }
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_2000 ' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_2100
    * @tc.name: uri为空，config中uri为空则匹配
    * @tc.desc:  期望值: 匹配 uriEmpty  uriSchemeEmpty
    */
    it('bms_queryAbilityByWant_2100', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "uri_reserved",
                "uri": ""
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_2100 '+ JSON.stringify(res))
                const list = ['uriEmpty','uriSchemeEmpty']
                for(let i = 0; i < res.length; i++) {
                    expect(list.includes(res[i].description)).assertEqual(true)
                }
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_2100 ' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_2200
    * @tc.name: uri为"content"
    * @tc.desc:  期望值: 匹配 uriScheme  uriHostEmpty
    */
    it('bms_queryAbilityByWant_2200', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "uri_reserved",
                "uri": "content"
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_2200 '+ JSON.stringify(res))
                const list = ['uriHostEmpty','uriScheme']
                for(let i = 0; i < res.length; i++) {
                    expect(list.includes(res[i].description)).assertEqual(true)
                }
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_2200 ' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_2300
    * @tc.name: uri为"content://www.test.com"
    * @tc.desc:  期望值: 匹配 uriSchemeHost
    */
    it('bms_queryAbilityByWant_2300', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "uri_reserved",
                "uri": "content://www.test.com"
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_2300 '+ JSON.stringify(res))
                expect(res[0].description).assertEqual('uriSchemeHost')
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_2300 ' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_2400
    * @tc.name: uri为"content://www.test.com:8080" 
    * @tc.desc: 期望值: 匹配 uriSchemeHostPort
    */
    it('bms_queryAbilityByWant_2400', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "uri_reserved",
                "uri": "content://www.test.com:8080"
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_2400 '+ JSON.stringify(res))
                expect(res[0].description).assertEqual('uriSchemeHostPort')
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_2400 ' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_2500
    * @tc.name: uri为"content://www.test.com:8080/query/student/name" 
    * @tc.desc: 期望值: 匹配 uriSchemeHostPortPath  uriSchemeHostPortPathStartWith  uriSchemeHostPortPathRegx
    */
    it('bms_queryAbilityByWant_2500', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "uri_reserved",
                "uri": "content://www.test.com:8080/query/student/name"
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_2500 '+ JSON.stringify(res))
                const list = ['uriSchemeHostPortPath','uriSchemeHostPortPathStartWith','uriSchemeHostPortPathRegx']
                for(let i = 0; i < res.length; i++) {
                    expect(list.includes(res[i].description)).assertEqual(true)
                }
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_2500 ' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_2600
    * @tc.name: uri为"content://www.test.com/query/student/name"
    * @tc.desc: 期望值: 匹配 uriPortEmptyWithPath uriPortEmptyWithPathStartWith uriPortEmptyWithPathRegx
    */
    it('bms_queryAbilityByWant_2600', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "uri_reserved",
                "uri": "content://www.test.com/query/student/name"
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_2600 '+ JSON.stringify(res))
                const list = ['uriPortEmptyWithPath','uriPortEmptyWithPathStartWith','uriPortEmptyWithPathRegx']
                for(let i = 0; i < res.length; i++) {
                    expect(list.includes(res[i].description)).assertEqual(true)
                }
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_2600 ' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_2700
    * @tc.name: uri为"content://www.test.com:8080/query/teacher/name" 
    * @tc.desc: 期望值: 匹配 uriSchemeHostPortPathRegx
    */
    it('bms_queryAbilityByWant_2700', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "uri_reserved",
                "uri": "content://www.test.com:8080/query/teacher/name"
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_2700 '+ JSON.stringify(res))
                expect(res[0].description).assertEqual('uriSchemeHostPortPathRegx')
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_2700 ' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_2800
    * @tc.name: uri为"content://www.test.com:8080/query/student/jack" 
    * @tc.desc: 期望值: 匹配 uriSchemeHostPortPathStartWith
    */
    it('bms_queryAbilityByWant_2800', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "uri_reserved",
                "uri": "content://www.test.com:8080/query/student/jack"
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_2800 '+ JSON.stringify(res))
                expect(res[0].description).assertEqual('uriSchemeHostPortPathStartWith')
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_2800 ' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_2900
    * @tc.name: uri为"file://www.test.com:8080/query/student/name" 
    * @tc.desc: 期望值: 匹配 uriMultiPath
    */
    it('bms_queryAbilityByWant_2900', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "uri_reserved",
                "uri": "file://www.test.com:8080/query/student/name"
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_2900 '+ JSON.stringify(res))
                expect(res[0].description).assertEqual('uriMultiPath')
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_2900 ' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_3000
    * @tc.name: uri为"file://www.test.com:8080/query/teacher/hello" 
    * @tc.desc: 期望值: 匹配 uriMultiPath
    */
    it('bms_queryAbilityByWant_3000', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "uri_reserved",
                "uri": "file://www.test.com:8080/query/teacher/hello"
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_3000 '+ JSON.stringify(res))
                expect(res[0].description).assertEqual('uriMultiPath')
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_3000 ' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_3100
    * @tc.name: uri为"content://abc" 
    * @tc.desc: 无匹配 期望值: 1
    */
    it('bms_queryAbilityByWant_3100', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "uri_reserved",
                "uri": "content://abc"
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_3100'+ JSON.stringify(res))
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_3100' + JSON.stringify(err))
                expect(err).assertEqual(1)
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_3200
    * @tc.name: 双通配符匹配，只要config配置了type，则type匹配  
    * @tc.desc: 期望值: 匹配 TypeDoubleWildCard TypeSingleWildCard TypeString TypeStringExt
    */
    it('bms_queryAbilityByWant_3200', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "type": "*/*"
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_3200 '+ JSON.stringify(res))
                const list = ['TypeDoubleWildCard','TypeSingleWildCard','TypeString', 'TypeStringExt']
                for(let i = 0; i < res.length; i++) {
                    expect(list.includes(res[i].description)).assertEqual(true)
                }
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_3200' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_3200
    * @tc.name: 单通配符匹配，与config前缀匹配，则type匹配  
    * @tc.desc: 期望值: 匹配 TypeDoubleWildCard TypeSingleWildCard TypeString
    */
    it('bms_queryAbilityByWant_3200', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "type": "prefixType/*"
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success '+ JSON.stringify(res))
                const list = ['TypeDoubleWildCard','TypeSingleWildCard','TypeString']
                for(let i = 0; i < res.length; i++) {
                    expect(list.includes(res[i].description)).assertEqual(true)
                }
                done()
            }).catch(err => {
                console.error(' fail ' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_3300
    * @tc.name: 字符串匹配，与config字符串相同，则type匹配  
    * @tc.desc: 期望值: 匹配 TypeDoubleWildCard TypeSingleWildCard TypeString
    */
    it('bms_queryAbilityByWant_3300', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "type": "prefixType/suffixType"
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_3300 '+ JSON.stringify(res))
                const list = ['TypeDoubleWildCard','TypeSingleWildCard','TypeString']
                for(let i = 0; i < res.length; i++) {
                    expect(list.includes(res[i].description)).assertEqual(true)
                }
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_3300' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_3400
    * @tc.name: 字符串匹配，与config字符串相同，则type匹配  
    * @tc.desc: 期望值: 匹配 TypeDoubleWildCard  TypeStringExt
    */
    it('bms_queryAbilityByWant_3400', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "type": "prefixTypeExt/suffixTypeExt"
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success '+ JSON.stringify(res))
                const list = ['TypeStringExt','TypeDoubleWildCard']
                for(let i = 0; i < res.length; i++) {
                    expect(list.includes(res[i].description)).assertEqual(true)
                }
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_3400' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_3500
    * @tc.name: 不传type参数，config也为空，则type匹配  
    * @tc.desc: 期望值: 匹配 TypeEmpty TypeEmptyExt
    */
    it('bms_queryAbilityByWant_3500', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "type_reserved"
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success '+ JSON.stringify(res))
                const list = ['TypeEmpty','TypeEmptyExt']
                for(let i = 0; i < res.length; i++) {
                    expect(list.includes(res[i].description)).assertEqual(true)
                }
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_3500' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_3600
    * @tc.name: 空串，config也为空，则type匹配  
    * @tc.desc: 期望值: 匹配 TypeEmpty TypeEmptyExt
    */
    it('bms_queryAbilityByWant_3600', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "type_reserved",
                "type": ""
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success '+ JSON.stringify(res))
                const list = ['TypeEmpty','TypeEmptyExt']
                for(let i = 0; i < res.length; i++) {
                    expect(list.includes(res[i].description)).assertEqual(true)
                }
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_3600' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_3700
    * @tc.name: 不存在的type  
    * @tc.desc: 期望值: 匹配 TypeDoubleWildCard
    */
    it('bms_queryAbilityByWant_3700', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "type": "none/none"
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_3700'+ JSON.stringify(res))
                expect(res[0].description).assertEqual('TypeDoubleWildCard')
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_3700' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_3800
    * @tc.name: 设置action和entities  
    * @tc.desc: 期望值: 匹配 allAE
    */
    it('bms_queryAbilityByWant_3800', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "all_action_a",
                "entities":["all_entity_a"]
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_3800'+ JSON.stringify(res))
                expect(res[0].description).assertEqual('allAE')
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_3800' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_3900
    * @tc.name: 设置action和entities  
    * @tc.desc: 期望值: 匹配 allAEs
    */
    it('bms_queryAbilityByWant_3900', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action": "all_action_b",
                "entities":["all_entity_b1", "all_entity_b2"]
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_3900'+ JSON.stringify(res))
                expect(res[0].description).assertEqual('allAEs')
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_3900' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_4000
    * @tc.name: 设置uri和type  
    * @tc.desc: 期望值: 匹配 allUT
    */
    it('bms_queryAbilityByWant_4000', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "uri" :"http://www.test.com:8080/query/student/name",
                "type":"text/plain"
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_4000'+ JSON.stringify(res))
                expect(res[0].description).assertEqual('allUT')
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_4000' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_4100
    * @tc.name: 设置uri和type  
    * @tc.desc: 期望值: 匹配 allUT
    */
    it('bms_queryAbilityByWant_4100', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "uri" :"http://www.test.com:8080/query/student/name",
                "type":"text/*"
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_4100'+ JSON.stringify(res))
                expect(res[0].description).assertEqual('allUT')
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_4100' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_4200
    * @tc.name: 设置uri和type  
    * @tc.desc: 期望值: 匹配 allUT
    */
    it('bms_queryAbilityByWant_4200', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "uri" :"http://www.test.com:8080/query/teacher",
                "type":"text/plain"
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_4200'+ JSON.stringify(res))
                expect(res[0].description).assertEqual('allUT')
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_4200' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_4300
    * @tc.name: 设置uri和type  
    * @tc.desc: 期望值: 匹配 allUT
    */
    it('bms_queryAbilityByWant_4300', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "uri" :"http://www.test.com:8080/query/teacher/hello",
                "type":"text/plain"
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_4300'+ JSON.stringify(res))
                expect(res[0].description).assertEqual('allUT')
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_4300' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_4400
    * @tc.name: 设置uri和type  
    * @tc.desc: 期望值: 匹配 allUT
    */
    it('bms_queryAbilityByWant_4400', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "uri" :"http://www.test.com:8080/update/hello/world/name",
                "type":"text/plain"
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_4400 '+ JSON.stringify(res))
                expect(res[0].description).assertEqual('allUT')
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_4400 ' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_4500
    * @tc.name: 设置action entity uri type  
    * @tc.desc: 期望值: 匹配 allAEUT
    */
    it('bms_queryAbilityByWant_4500', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action":"all_action_c",
                "entities":["all_entity_c1"],
                "uri" :"https://www.test.com:8080/query/student/name",
                "type":"text/plain"
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_4500 '+ JSON.stringify(res))
                expect(res[0].description).assertEqual('allAEUT')
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_4500 ' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });

    /*
    * @tc.number: bms_queryAbilityByWant_4600
    * @tc.name: 设置action entity uri type  
    * @tc.desc: 期望值: 匹配 allAEUT
    */
    it('bms_queryAbilityByWant_4600', 0, async function (done) {
        bundle.queryAbilityByWant(
            {
                "action":"all_action_c",
                "entities":["all_entity_c1", "all_entity_c2"],
                "uri" :"https://www.test.com:8080/query/student/name",
                "type":"text/*"
            }, bundle.BundleFlag.GET_BUNDLE_DEFAULT, USERID).then(res => {
                console.info(' success bms_queryAbilityByWant_4600 '+ JSON.stringify(res))
                expect(res[0].description).assertEqual('allAEUT')
                done()
            }).catch(err => {
                console.error(' fail bms_queryAbilityByWant_4600 ' + JSON.stringify(err))
                expect().assertFail()
                done()
            })
    });
})