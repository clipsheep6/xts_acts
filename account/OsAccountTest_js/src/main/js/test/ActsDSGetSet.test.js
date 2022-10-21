/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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

// @ts-nocheck
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'

import account from '@ohos.account.distributedAccount'
export default function ActsDAGetSetTest() {
    describe('ActsDAGetSetTest', function () {
        beforeEach(function () {
        })
        afterEach(function () {
        })

        /**
        * @tc.number     ActsDistributedAccountDeviceId_0100
        * @tc.name       Test query the distribruted id by callback.
        * @tc.desc       Test distributedAccount.getOsAccountDistributedInfo API functionality by callback.
        */
        it('ActsDistributedAccountDeviceId_0100', 0, async function(done){
            console.log("====>test query distribtued id start");
            const distributedId = '5994471ABB01112AFCC18159F6CC74B4F511B99806DA59B3CAF5A9C173CACFC5';
            const accountAbility = account.getDistributedAccountAbility();
            accountAbility.setOsAccountDistributedInfo(
            {
                name: 'ZhangSan',
                id: '12345',
                event: "Ohos.account.event.LOGIN"
            }, (err)=>{
                console.log("====>update distributedInfo err:" + JSON.stringify(err));
                accountAbility.getOsAccountDistributedInfo((err, distributedInfo)=>{
                    console.log("====>query distributedInfo err:" + JSON.stringify(err));
                    console.log("====>query distributedInfo:" + JSON.stringify(distributedInfo));
                    expect(distributedInfo.name).assertEqual('ZhangSan');
                    expect(distributedInfo.id).assertEqual(distributedId);
                    console.log("====>test query distribtued id end");
                    done();
                })
            })
        })

        /**
        * @tc.number     SUB_Account_distributedAccount_JS_API_0100
        * @tc.name       Test distributedAccount.getDistributedAccountAbility.
        * @tc.desc      Test distributedAccount.getDistributedAccountAbility API functionality.
        */
        it('account_getDistributedAccountAbility_0100', 0, function () {
            var ret = false;
            const accountAbility = account.getDistributedAccountAbility()
            if(accountAbility !== null){
                ret = true;
            }
            expect(ret).assertTrue()
            done();
        })

        /**
        * @tc.number     SUB_Account_distributedAccount_JS_API_0200
        * @tc.name       Test distributedAccount.getOsAccountDistributedInfo.
        * @tc.desc       Test distributedAccount.getOsAccountDistributedInfo API functionality.
        */
        it('account_getOsAccountDistributedInfo_0100', 0, function () {
            const accountAbility = account.getDistributedAccountAbility()
            console.debug('====>account_getOsAccountDistributedInfo_0100 start')
            accountAbility.getOsAccountDistributedInfo().then((data)=>{
                console.debug('====>account_getOsAccountDistributedInfo_0100 data:' + JSON.stringify(data))
                expect(data.name).assertEqual('anonymous')
                done();
            }).catch((err)=>{
                console.debug('====>account_getOsAccountDistributedInfo_0100 err:' + JSON.stringify(err))
                expect().assertFail()
                done();
            });
        })

        /**
        * @tc.number     SUB_Account_distributedAccount_JS_API_0300
        * @tc.name       Test distributedAccount.getOsAccountDistributedInfo by callback.
        * @tc.desc       Test distributedAccount.getOsAccountDistributedInfo API functionality by callback.
        */
        it('account_getOsAccountDistributedInfo_0200', 0, function () {
            const accountAbility = account.getDistributedAccountAbility()
            console.debug('====>account_getOsAccountDistributedInfo_0200 start')
            accountAbility.getOsAccountDistributedInfo((err, data) =>{
                console.debug('====>account_getOsAccountDistributedInfo_0200 err:' + JSON.stringify(err))
                except(err).assertEqual(null)
                console.debug('====>account_getOsAccountDistributedInfo_0200 data:' + JSON.stringify(data))
                done();
            })
        })

        /**
        * @tc.number     SUB_Account_distributedAccount_JS_API_0400
        * @tc.name       Test distributedAccount.setOsAccountDistributedInfo.
        * @tc.desc       Test distributedAccount.setOsAccountDistributedInfo API functionality.
        */
        it('account_setOsAccountDistributedInfo_0100', 0, function () {
            const accountAbility = account.getDistributedAccountAbility()
            let data = null
            let obj = {
                id: '12345',
                name: 'ZhangSan',
                event: 'Ohos.account.event.LOGIN',
                scalableData:data
            };
            accountAbility.setOsAccountDistributedInfo(obj).then((data) => {
                console.debug('====>account_setOsAccountDistributedInfo_0100 data:' + JSON.stringify(data))
                accountAbility.getOsAccountDistributedInfo().then((data) =>{
                    expect(data.name).assertEqual('ZhangSan')
                    expect(data.id).assertEqual('12345')
                    done();
                }).carch((err) => {
                    console.debug('====>account_setOsAccountDistributedInfo_0100 getOsAccountDistributedInfo err:' + JSON.stringify(err))
                    expect().assertFail();
                    done();
                })
            }).catch((err) => {
                console.debug('====>account_setOsAccountDistributedInfo_0100 err:' + JSON.stringify(err))
                expect().assertFail()
                done();
            })
        })

        /**
        * @tc.number     SUB_Account_distributedAccount_JS_API_0500
        * @tc.name       Test distributedAccount.setOsAccountDistributedInfo by callback.
        * @tc.desc       Test distributedAccount.setOsAccountDistributedInfo API functionality by callback.
        */
        it('account_setOsAccountDistributedInfo_0200', 0, function () {
        let data = null
            const accountAbility = account.getDistributedAccountAbility()
            let obj = {
                id: '12345',
                name: 'ZhangSan',
                event: 'Ohos.account.event.LOGIN',
                scalableData:data
            };
            accountAbility.setOsAccountDistributedInfo(obj, (err) => {
                console.debug('====>account_setOsAccountDistributedInfo_0200 err:' + JSON.stringify(err))
                expect(err).assertTrue(null)
                accountAbility.getOsAccountDistributedInfo((err, data) => {
                    console.debug('====>account_setOsAccountDistributedInfo_0200 getOsAccountDistributedInfo err:' + JSON.stringify(err))
                    console.debug('====>account_setOsAccountDistributedInfo_0200 getOsAccountDistributedInfo data:' + JSON.stringify(data))
                    except(err).assertTrue(null)
                    expect(data.name).assertEqual('ZhangSan')
                    expect(data.id).assertEqual('12345')
                });
            });
        })
        
        /**
        * @tc.number     SUB_Account_distributedAccount_JS_API_0300
        * @tc.name       Test distributedAccount.setOsAccountDistributedInfo by callback.
        * @tc.desc       Test distributedAccount.setOsAccountDistributedInfo API functionality by callback.
        */
        it('account_setOsAccountDistributedInfo_0300', 0, function () {
            const accountAbility = account.getDistributedAccountAbility()
        let data = null
            let obj = {
                id: '12345',
                name: 'ZhangSan',
                event: 'Ohos.account.event.TOKEN_INVALID',
                scalableData:data
            };
            accountAbility.setOsAccountDistributedInfo(obj, function (result) {
                expect(result).assertTrue()
                accountAbility.getOsAccountDistributedInfo(obj).then(function (data) {
                    except(data.name).assertNull()
                    done();
                })
            });
        })
        
        /**
        * @tc.number     SUB_Account_distributedAccount_JS_API_0400
        * @tc.name       Test distributedAccount.setOsAccountDistributedInfo by callback.
        * @tc.desc       Test distributedAccount.setOsAccountDistributedInfo API functionality by callback.
        */
        it('account_setOsAccountDistributedInfo_0400', 0, function () {
            const accountAbility = account.getDistributedAccountAbility()
            let data = null
            let obj = {
                id: '12345',
                name: 'ZhangSan',
                event: 'Ohos.account.event.LOGIN',
                scalableData:data
            };
            accountAbility.setOsAccountDistributedInfo(obj, function (result) {
                expect(result).assertTrue()
                accountAbility.getOsAccountDistributedInfo(function (data) {
                    expect(data.name).assertEqual('ZhangSan')
                    expect(data.id).assertEqual('12345')
                    const accountAbility = account.getDistributedAccountAbility()
                    let obj = {
                        id: '12345',
                        name: 'ZhangSan',
                        event: 'Ohos.account.event.LOGOFF'
                        
                    };
                    accountAbility.setOsAccountDistributedInfo(obj).then(function (result) {
                        expect(result).assertNull()
                        done();
                    });
                });
            });
        })
    })
}
