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
import osAccount from '@ohos.account.osAccount'
import commonevent from '@ohos.commonevent'
import featureAbility from '@ohos.ability.featureability'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

var commonEventSubscribeInfo = {
    events: ["osaccount_event_create_permission"]
}
var subscriber;
var receiveLocalId = -1;
const TIMEOUT = 2000;
const TIMEOUTSTART = 10000;
const ERR_OSACCOUNT_KIT_CREATE_OS_ACCOUNT_ERROR = 4587523;
const ERR_OSACCOUNT_KIT_IS_OS_ACCOUNT_ACTIVED_ERROR = 4587542;
const ERR_OSACCOUNT_KIT_IS_OS_ACCOUNT_CONSTRAINT_ENABLE_ERROR = 4587543;
const ERR_OSACCOUNT_KIT_IS_OS_ACCOUNT_VERIFIED_ERROR = 4587545;
const ERR_OSACCOUNT_KIT_GET_CREATED_OS_ACCOUNT_COUNT_ERROR = 4587546;
const ERR_OSACCOUNT_KIT_GET_OS_ACCOUNT_ALL_CONSTRAINTS_ERROR = 4587550;
const ERR_OSACCOUNT_KIT_QUERY_CURRENT_OS_ACCOUNT_ERROR = 4587552;
const ERR_OSACCOUNT_KIT_QUERY_OS_ACCOUNT_BY_ID_ERROR = 4587553;
const ERR_OSACCOUNT_KIT_GET_OS_ACCOUNT_PROFILE_PHOTO_ERROR = 4587555;
const ERR_OSACCOUNT_KIT_SET_OS_ACCOUNT_PROFILE_PHOTO_ERROR = 4587563;
const ERR_OSACCOUNT_KIT_SET_OS_ACCOUNT_CONSTRAINTS_ERROR = 4587562;
describe('ActsOsAccountPermissionTest', function () {
    function sleep(delay) {
        var start = (new Date()).getTime();
        while((new Date()).getTime() - start < delay) {
            continue;
        }
    }

    beforeAll(async function (done) {
        console.debug("====>subscriber start====");
        function subscriberCallback(err, data){
            console.debug("====>subscriberCallback data:" + JSON.stringify(data));
            expect(data.event).assertEqual("osaccount_event_create_permission");
            receiveLocalId = data.code;
            commonevent.unsubscribe(subscriber, unSubscriberCallback);
        }
        function unSubscriberCallback(err){
            console.debug("====>unsubscribe err:" + JSON.stringify(err));
        }
        commonevent.createSubscriber(commonEventSubscribeInfo).then(function (data){
            subscriber = data;
            commonevent.subscribe(subscriber, subscriberCallback);
            console.debug("====>subscribe finish====")
        });
        sleep(TIMEOUT);
        console.debug("====>startAbility start====");
        await featureAbility.startAbility(
            {
                want:
                {
                    deviceId: "",
                    bundleName: "com.example.actsosaccountscenepermission",
                    abilityName: "com.example.actsosaccountscenepermission.MainAbility",
                    action: "action1",
                    parameters:
                    {},
                },
            },
        );
        sleep(TIMEOUTSTART);
        done();
    });

    afterAll(async function (done) {
        console.debug("====>afterAll enter====");
        function publishCallback(err){
            console.debug("====>publish call back scene err:" + JSON.stringify(err));
        }
        commonevent.publish("osaccount_event_delete_permission", publishCallback);
        sleep(TIMEOUT);
        console.debug("====>afterAll finish====");
        done();
    });

    /*
     * @tc.number  : ActsOsAccountPermission_0100
     * @tc.name    : setOsAccountConstraints callback
     * @tc.desc    : the application call interface does not meet the permissions
     */
    it('ActsOsAccountPermission_0100', 0, async function(done){
        console.debug("====>ActsOsAccountPermission_0100 start====");
        var AccountManager = osAccount.getAccountManager();
        console.debug("====>get os AccountManager finish====");
        AccountManager.setOsAccountConstraints(100, ["constraint.cell.broadcasts.set"], true, (err)=>{
            console.debug("====>setOsAccountConstraints err:" + JSON.stringify(err));
            expect(err.code).assertEqual(ERR_OSACCOUNT_KIT_SET_OS_ACCOUNT_CONSTRAINTS_ERROR);
            console.debug("====>ActsOsAccountPermission_0100 end====");
            done();
        })
    })

    /*
     * @tc.number  : ActsOsAccountPermission_0200
     * @tc.name    : setOsAccountConstraints promise
     * @tc.desc    : the application call interface does not meet the permissions
     */
    it('ActsOsAccountPermission_0200', 0, async function(done){
        console.debug("====>ActsOsAccountPermission_0200 start====");
        var AccountManager = osAccount.getAccountManager();
        console.debug("====>get os AccountManager finish====");
        try{
            await AccountManager.setOsAccountConstraints(100, ["constraint.cell.broadcasts.set"], true);
        }
        catch(err){
            console.debug("====>setOsAccountConstraints err:" + JSON.stringify(err));
            expect(err.code).assertEqual(ERR_OSACCOUNT_KIT_SET_OS_ACCOUNT_CONSTRAINTS_ERROR);
            console.debug("====>ActsOsAccountPermission_0200 end====");
            done();
        }
    })

    /*
     * @tc.number  : ActsOsAccountPermission_0300
     * @tc.name    : createOsAccount callback
     * @tc.desc    : the application call interface does not meet the permissions
     */
    it('ActsOsAccountPermission_0300', 0, async function(done){
        console.debug("====>ActsOsAccountPermission_0300 start====");
        var AccountManager = osAccount.getAccountManager();
        console.debug("====>get os AccountManager finish====");
        AccountManager.createOsAccount("aaa", osAccount.OsAccountType.NORMAL, (err,info)=>{
            console.debug("====>createOsAccount err:" + JSON.stringify(err));
            console.debug("====>createOsAccount info:" + JSON.stringify(info));
            expect(err.code).assertEqual(ERR_OSACCOUNT_KIT_CREATE_OS_ACCOUNT_ERROR);
            console.debug("====>ActsOsAccountPermission_0300 end====");
            done();
        })
    })

    /*
     * @tc.number  : ActsOsAccountPermission_0400
     * @tc.name    : createOsAccount promise
     * @tc.desc    : the application call interface does not meet the permissions
     */
    it('ActsOsAccountPermission_0400', 0, async function(done){
        console.debug("====>ActsOsAccountPermission_0400 start====");
        var AccountManager = osAccount.getAccountManager();
        console.debug("====>get os AccountManager finish====");
        try{
            await AccountManager.createOsAccount("aaa", osAccount.OsAccountType.NORMAL);
        }
        catch(err){
            console.debug("====>createOsAccount err:" + JSON.stringify(err));
            expect(err.code).assertEqual(ERR_OSACCOUNT_KIT_CREATE_OS_ACCOUNT_ERROR);
            console.debug("====>ActsOsAccountPermission_0400 end====");
            done();
        }
    })

    /*
     * @tc.number  : ActsOsAccountPermission_0500
     * @tc.name    : queryOsAccountById callback
     * @tc.desc    : the application call interface does not meet the permissions
     */
    it('ActsOsAccountPermission_0500', 0, async function(done){
        console.debug("====>ActsOsAccountPermission_0500 start====");
        var AccountManager = osAccount.getAccountManager();
        console.debug("====>get os AccountManager finish====");
        AccountManager.queryOsAccountById(100, (err)=>{
            console.debug("====>queryOsAccountById err:" + JSON.stringify(err));
            expect(err.code).assertEqual(ERR_OSACCOUNT_KIT_QUERY_OS_ACCOUNT_BY_ID_ERROR);
            console.debug("====>ActsOsAccountPermission_0500 end====");
            done();
        })
    })

    /*
     * @tc.number  : ActsOsAccountPermission_0600
     * @tc.name    : queryOsAccountById promise
     * @tc.desc    : the application call interface does not meet the permissions
     */
    it('ActsOsAccountPermission_0600', 0, async function(done){
        console.debug("====>ActsOsAccountPermission_0600 start====");
        var AccountManager = osAccount.getAccountManager();
        console.debug("====>get os AccountManager finish====");
        try{
            await AccountManager.queryOsAccountById(100);
        }
        catch(err){
            console.debug("====>queryOsAccountById err:" + JSON.stringify(err));
            expect(err.code).assertEqual(ERR_OSACCOUNT_KIT_QUERY_OS_ACCOUNT_BY_ID_ERROR);
            console.debug("====>ActsOsAccountPermission_0600 end====");
            done();
        }
    })

    /*
     * @tc.number  : ActsOsAccountPermission_0700
     * @tc.name    : getOsAccountProfilePhoto callback
     * @tc.desc    : get the photo of the specified user does not meet the permission
     */
    it('ActsOsAccountPermission_0700', 0, async function(done){
        console.debug("====>ActsOsAccountPermission_0700 start====");
        var AccountManager = osAccount.getAccountManager();
        console.debug("====>get os AccountManager finish====");
        if(receiveLocalId != -1){
            AccountManager.getOsAccountProfilePhoto(receiveLocalId, (err)=>{
                console.debug("====>getOsAccountProfilePhoto err:" + JSON.stringify(err));
                expect(err.code).assertEqual(ERR_OSACCOUNT_KIT_GET_OS_ACCOUNT_PROFILE_PHOTO_ERROR);
                console.debug("====>ActsOsAccountPermission_0700 end====");
                done();
            })
        }
        else{
            console.debug("====>user creation failed====");
            expect().assertFail();
            done();
        }
    })

    /*
     * @tc.number  : ActsOsAccountPermission_0800
     * @tc.name    : getOsAccountProfilePhoto promise
     * @tc.desc    : get the photo of the specified user does not meet the permission
     */
    it('ActsOsAccountPermission_0800', 0, async function(done){
        console.debug("====>ActsOsAccountPermission_0800 start====");
        var AccountManager = osAccount.getAccountManager();
        console.debug("====>get os AccountManager finish====");
        if(receiveLocalId != -1){
            try{
                await AccountManager.getOsAccountProfilePhoto(receiveLocalId);
            }
            catch(err){
                console.debug("====>getOsAccountProfilePhoto err:" + JSON.stringify(err));
                expect(err.code).assertEqual(ERR_OSACCOUNT_KIT_GET_OS_ACCOUNT_PROFILE_PHOTO_ERROR);
                console.debug("====>ActsOsAccountPermission_0800 end====");
                done();
            }
        }
        else{
            console.debug("====>user creation failed====");
            expect().assertFail();
            done();
        }

    })

    /*
     * @tc.number  : ActsOsAccountPermission_0900
     * @tc.name    : setOsAccountProfilePhoto callback
     * @tc.desc    : the application call interface does not meet the permissions
     */
    it('ActsOsAccountPermission_0900', 0, async function(done){
        console.debug("====>ActsOsAccountPermission_0900 start====");
        var AccountManager = osAccount.getAccountManager();
        var photo = "data:image/jpeg;base64,/9j/4AAQSkZJRgABAQEAYABgAAD/2wBDAAMCAgMCAgMDAwMEAwMEBQgFBQQEBQoHBwYIDAoMD"+
        "AsKCwsNDhIQDQ4RDgsLEBYQERMUFRUVDA8XGBYUGBIUFRT/2wBDAQMEBAUEBQkFBQkUDQsNFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUF"+
        "BQUFBQUFBQUFBQUFBQUFBQUFBQUFBT/wAARCAALAAwDASIAAhEBAxEB/8QAHwAAAQUBAQEBAQEAAAAAAAAAAAECAwQFBgcICQoL/8QAtRAAA"+
        "gEDAwIEAwUFBAQAAAF9AQIDAAQRBRIhMUEGE1FhByJxFDKBkaEII0KxwRVS0fAkM2JyggkKFhcYGRolJicoKSo0NTY3ODk6Q0RFRkdISUpTV"+
        "FVWV1hZWmNkZWZnaGlqc3R1dnd4eXqDhIWGh4iJipKTlJWWl5iZmqKjpKWmp6ipqrKztLW2t7i5usLDxMXGx8jJytLT1NXW19jZ2uHi4+Tl5"+
        "ufo6erx8vP09fb3+Pn6/8QAHwEAAwEBAQEBAQEBAQAAAAAAAAECAwQFBgcICQoL/8QAtREAAgECBAQDBAcFBAQAAQJ3AAECAxEEBSExBhJBU"+
        "QdhcRMiMoEIFEKRobHBCSMzUvAVYnLRChYkNOEl8RcYGRomJygpKjU2Nzg5OkNERUZHSElKU1RVVldYWVpjZGVmZ2hpanN0dXZ3eHl6goOEh"+
        "YaHiImKkpOUlZaXmJmaoqOkpaanqKmqsrO0tba3uLm6wsPExcbHyMnK0tPU1dbX2Nna4uPk5ebn6Onq8vP09fb3+Pn6/9oADAMBAAIRAxEAP"+
        "wD2v4p+OPEXwz+LN3rvivwn4nh0bV9dsP7Oe51nRLOC7EF0kpEkL6psLRLDGsVwFhZkm8ucFljc/R1z8SPiZqBjl0n4SXljb7cPD4g1iwiuA"+
        "+TyBbTzoVxtwd+c5yBwT1/hv4W+F/CupalqVjpSy6rqQaO81PUJpL28niLFvJaednkMKljti3bEzhVArQ8H+CtE+H+iro/h7T49J0mORpIbC"+
        "3ZvIt9xyUiQnbFGO0aAIMnAGaxlTcqPsnJrrdb7Jfpv1vt1eilap7Syfk/n/nt09NF//9k=";
        console.debug("====>get os AccountManager finish====");
        AccountManager.setOsAccountProfilePhoto(100, photo, (err)=>{
            console.debug("====>setOsAccountProfilePhoto err:" + JSON.stringify(err));
            expect(err.code).assertEqual(ERR_OSACCOUNT_KIT_SET_OS_ACCOUNT_PROFILE_PHOTO_ERROR);
            console.debug("====>ActsOsAccountPermission_0900 end====");
            done();
        })
    })

    /*
     * @tc.number  : ActsOsAccountPermission_1000
     * @tc.name    : setOsAccountProfilePhoto promise
     * @tc.desc    : the application call interface does not meet the permissions
     */
    it('ActsOsAccountPermission_1000', 0, async function(done){
        console.debug("====>ActsOsAccountPermission_1000 start====");
        var AccountManager = osAccount.getAccountManager();
        var photo = "data:image/jpeg;base64,/9j/4AAQSkZJRgABAQEAYABgAAD/2wBDAAMCAgMCAgMDAwMEAwMEBQgFBQQEBQoHBwYIDAoMD"+
        "AsKCwsNDhIQDQ4RDgsLEBYQERMUFRUVDA8XGBYUGBIUFRT/2wBDAQMEBAUEBQkFBQkUDQsNFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUF"+
        "BQUFBQUFBQUFBQUFBQUFBQUFBQUFBT/wAARCAALAAwDASIAAhEBAxEB/8QAHwAAAQUBAQEBAQEAAAAAAAAAAAECAwQFBgcICQoL/8QAtRAAA"+
        "gEDAwIEAwUFBAQAAAF9AQIDAAQRBRIhMUEGE1FhByJxFDKBkaEII0KxwRVS0fAkM2JyggkKFhcYGRolJicoKSo0NTY3ODk6Q0RFRkdISUpTV"+
        "FVWV1hZWmNkZWZnaGlqc3R1dnd4eXqDhIWGh4iJipKTlJWWl5iZmqKjpKWmp6ipqrKztLW2t7i5usLDxMXGx8jJytLT1NXW19jZ2uHi4+Tl5"+
        "ufo6erx8vP09fb3+Pn6/8QAHwEAAwEBAQEBAQEBAQAAAAAAAAECAwQFBgcICQoL/8QAtREAAgECBAQDBAcFBAQAAQJ3AAECAxEEBSExBhJBU"+
        "QdhcRMiMoEIFEKRobHBCSMzUvAVYnLRChYkNOEl8RcYGRomJygpKjU2Nzg5OkNERUZHSElKU1RVVldYWVpjZGVmZ2hpanN0dXZ3eHl6goOEh"+
        "YaHiImKkpOUlZaXmJmaoqOkpaanqKmqsrO0tba3uLm6wsPExcbHyMnK0tPU1dbX2Nna4uPk5ebn6Onq8vP09fb3+Pn6/9oADAMBAAIRAxEAP"+
        "wD2v4p+OPEXwz+LN3rvivwn4nh0bV9dsP7Oe51nRLOC7EF0kpEkL6psLRLDGsVwFhZkm8ucFljc/R1z8SPiZqBjl0n4SXljb7cPD4g1iwiuA"+
        "+TyBbTzoVxtwd+c5yBwT1/hv4W+F/CupalqVjpSy6rqQaO81PUJpL28niLFvJaednkMKljti3bEzhVArQ8H+CtE+H+iro/h7T49J0mORpIbC"+
        "3ZvIt9xyUiQnbFGO0aAIMnAGaxlTcqPsnJrrdb7Jfpv1vt1eilap7Syfk/n/nt09NF//9k=";
        console.debug("====>get os AccountManager finish====");
        try{
            await AccountManager.setOsAccountProfilePhoto(100, photo);
        }
        catch(err){
            console.debug("====>setOsAccountProfilePhoto err:" + JSON.stringify(err));
            expect(err.code).assertEqual(ERR_OSACCOUNT_KIT_SET_OS_ACCOUNT_PROFILE_PHOTO_ERROR);
            console.debug("====>ActsOsAccountPermission_1000 end====");
            done();
        }
    })

    /*
     * @tc.number  : ActsOsAccountPermission_1100
     * @tc.name    : isOsAccountActived callback
     * @tc.desc    : the application call interface does not meet the permissions
     */
    it('ActsOsAccountPermission_1100', 0, async function(done){
        console.debug("====>ActsOsAccountPermission_1100 start====");
        var AccountManager = osAccount.getAccountManager();
        console.debug("====>get os AccountManager finish====");
        if(receiveLocalId != -1){
            AccountManager.isOsAccountActived(receiveLocalId, (err)=>{
                console.debug("====>isOsAccountActived err:" + JSON.stringify(err));
                expect(err.code).assertEqual(ERR_OSACCOUNT_KIT_IS_OS_ACCOUNT_ACTIVED_ERROR);
                console.debug("====>ActsOsAccountPermission_1100 end====");
                done();
            })
        }
        else{
            console.debug("====>user creation failed====");
            expect().assertFail();
            done();
        }
    })

    /*
     * @tc.number  : ActsOsAccountPermission_1200
     * @tc.name    : isOsAccountActived promise
     * @tc.desc    : the application call interface does not meet the permissions
     */
    it('ActsOsAccountPermission_1200', 0, async function(done){
        console.debug("====>ActsOsAccountPermission_1200 start====");
        var AccountManager = osAccount.getAccountManager();
        console.debug("====>get os AccountManager finish====");
        if(receiveLocalId != -1){
            try{
                await AccountManager.isOsAccountActived(receiveLocalId);
            }
            catch(err){
                console.debug("====>isOsAccountActived err:" + JSON.stringify(err));
                expect(err.code).assertEqual(ERR_OSACCOUNT_KIT_IS_OS_ACCOUNT_ACTIVED_ERROR);
                console.debug("====>ActsOsAccountPermission_1200 end====");
                done();
            }
        }
        else{
            console.debug("====>user creation failed====");
            expect().assertFail();
            done();
        }
    })

    /*
     * @tc.number  : ActsOsAccountPermission_1300
     * @tc.name    : isOsAccountConstraintEnable callback
     * @tc.desc    : the application call interface does not meet the permissions
     */
    it('ActsOsAccountPermission_1300', 0, async function(done){
        console.debug("====>ActsOsAccountPermission_1300 start====");
        var AccountManager = osAccount.getAccountManager();
        console.debug("====>get os AccountManager finish====");
        AccountManager.isOsAccountConstraintEnable(100, "constraint.bluetooth", (err)=>{
            console.debug("====>isOsAccountConstraintEnable err:" + JSON.stringify(err));
            expect(err.code).assertEqual(ERR_OSACCOUNT_KIT_IS_OS_ACCOUNT_CONSTRAINT_ENABLE_ERROR);
            console.debug("====>ActsOsAccountPermission_1300 end====");
            done();
        })
    })

    /*
     * @tc.number  : ActsOsAccountPermission_1400
     * @tc.name    : isOsAccountConstraintEnable promise
     * @tc.desc    : the application call interface does not meet the permissions
     */
    it('ActsOsAccountPermission_1400', 0, async function(done){
        console.debug("====>ActsOsAccountPermission_1400 start====");
        var AccountManager = osAccount.getAccountManager();
        console.debug("====>get os AccountManager finish====");
        try{
            await AccountManager.isOsAccountConstraintEnable(100, "constraint.bluetooth");
        }
        catch(err){
            console.debug("====>isOsAccountConstraintEnable err:" + JSON.stringify(err));
            expect(err.code).assertEqual(ERR_OSACCOUNT_KIT_IS_OS_ACCOUNT_CONSTRAINT_ENABLE_ERROR);
            console.debug("====>ActsOsAccountPermission_1400 end====");
            done();
        }
    })

    /*
     * @tc.number  : ActsOsAccountPermission_1500
     * @tc.name    : isOsAccountVerified callback
     * @tc.desc    : the application call interface does not meet the permissions
     */
    it('ActsOsAccountPermission_1500', 0, async function(done){
        console.debug("====>ActsOsAccountPermission_1500 start====");
        var AccountManager = osAccount.getAccountManager();
        console.debug("====>get os AccountManager finish====");
        if(receiveLocalId != 0){
            AccountManager.isOsAccountVerified(receiveLocalId, (err)=>{
                console.debug("====>isOsAccountVerified err:" + JSON.stringify(err));
                expect(err.code).assertEqual(ERR_OSACCOUNT_KIT_IS_OS_ACCOUNT_VERIFIED_ERROR);
                console.debug("====>ActsOsAccountPermission_1500 end====");
                done();
            })
        }
        else{
            console.debug("====>user creation failed====");
            expect().assertFail();
            done();
        }
    })

    /*
     * @tc.number  : ActsOsAccountPermission_1600
     * @tc.name    : isOsAccountVerified promise
     * @tc.desc    : the application call interface does not meet the permissions
     */
    it('ActsOsAccountPermission_1600', 0, async function(done){
        console.debug("====>ActsOsAccountPermission_1600 start====");
        var AccountManager = osAccount.getAccountManager();
        console.debug("====>get os AccountManager finish====");
        if(receiveLocalId != -1){
            try{
                await AccountManager.isOsAccountVerified(receiveLocalId);
            }
            catch(err){
                console.debug("====>isOsAccountVerified err:" + JSON.stringify(err));
                expect(err.code).assertEqual(ERR_OSACCOUNT_KIT_IS_OS_ACCOUNT_VERIFIED_ERROR);
                console.debug("====>ActsOsAccountPermission_1600 end====");
                done();
            }
        }
        else{
            console.debug("====>user creation failed====");
            expect().assertFail();
            done();
        }
    })

    /*
     * @tc.number  : ActsOsAccountPermission_1700
     * @tc.name    : getCreatedOsAccountsCount callback
     * @tc.desc    : the application call interface does not meet the permissions
     */
    it('ActsOsAccountPermission_1700', 0, async function(done){
        console.debug("====>ActsOsAccountPermission_1700 start====");
        var AccountManager = osAccount.getAccountManager();
        console.debug("====>get os AccountManager finish====");
        AccountManager.getCreatedOsAccountsCount((err)=>{
            console.debug("====>getCreatedOsAccountsCount err:" + JSON.stringify(err));
            expect(err.code).assertEqual(ERR_OSACCOUNT_KIT_GET_CREATED_OS_ACCOUNT_COUNT_ERROR);
            console.debug("====>ActsOsAccountPermission_1700 end====");
            done();
        })
    })

    /*
     * @tc.number  : ActsOsAccountPermission_1800
     * @tc.name    : getCreatedOsAccountsCount promise
     * @tc.desc    : the application call interface does not meet the permissions
     */
    it('ActsOsAccountPermission_1800', 0, async function(done){
        console.debug("====>ActsOsAccountPermission_1800 start====");
        var AccountManager = osAccount.getAccountManager();
        console.debug("====>get os AccountManager finish====");
        try{
            await AccountManager.getCreatedOsAccountsCount();
        }
        catch(err){
            console.debug("====>getCreatedOsAccountsCount err:" + JSON.stringify(err));
            expect(err.code).assertEqual(ERR_OSACCOUNT_KIT_GET_CREATED_OS_ACCOUNT_COUNT_ERROR);
            console.debug("====>ActsOsAccountPermission_1800 end====");
            done();
        }
    })

    /*
     * @tc.number  : ActsOsAccountPermission_1900
     * @tc.name    : getOsAccountAllConstraints callback
     * @tc.desc    : the application call interface does not meet the permissions
     */
    it('ActsOsAccountPermission_1900', 0, async function(done){
        console.debug("====>ActsOsAccountPermission_1900 start====");
        var AccountManager = osAccount.getAccountManager();
        console.debug("====>get os AccountManager finish====");
        AccountManager.getOsAccountAllConstraints(100, (err)=>{
            console.debug("====>getOsAccountAllConstraints err:" + JSON.stringify(err));
            expect(err.code).assertEqual(ERR_OSACCOUNT_KIT_GET_OS_ACCOUNT_ALL_CONSTRAINTS_ERROR);
            console.debug("====>ActsOsAccountPermission_1900 end====");
            done();
        })
    })

    /*
     * @tc.number  : ActsOsAccountPermission_2000
     * @tc.name    : getOsAccountAllConstraints promise
     * @tc.desc    : the application call interface does not meet the permissions
     */
    it('ActsOsAccountPermission_2000', 0, async function(done){
        console.debug("====>ActsOsAccountPermission_2000 start====");
        var AccountManager = osAccount.getAccountManager();
        console.debug("====>get os AccountManager finish====");
        try{
            await AccountManager.getOsAccountAllConstraints(100);
        }
        catch(err){
            console.debug("====>getOsAccountAllConstraints err:" + JSON.stringify(err));
            expect(err.code).assertEqual(ERR_OSACCOUNT_KIT_GET_OS_ACCOUNT_ALL_CONSTRAINTS_ERROR);
            console.debug("====>ActsOsAccountPermission_2000 end====");
            done();
        }
    })

    /*
     * @tc.number  : ActsOsAccountPermission_2100
     * @tc.name    : queryCurrentOsAccount callback
     * @tc.desc    : the application call interface does not meet the permissions
     */
    it('ActsOsAccountPermission_2100', 0, async function(done){
        console.debug("====>ActsOsAccountPermission_2100 start====");
        var AccountManager = osAccount.getAccountManager();
        console.debug("====>get os AccountManager finish====");
        AccountManager.queryCurrentOsAccount((err)=>{
            console.debug("====>queryCurrentOsAccount err:" + JSON.stringify(err));
            expect(err.code).assertEqual(ERR_OSACCOUNT_KIT_QUERY_CURRENT_OS_ACCOUNT_ERROR);
            console.debug("====>ActsOsAccountPermission_2100 end====");
            done();
        })
    })

    /*
     * @tc.number  : ActsOsAccountPermission_2200
     * @tc.name    : queryCurrentOsAccount promise
     * @tc.desc    : the application call interface does not meet the permissions
     */
    it('ActsOsAccountPermission_2200', 0, async function(done){
        console.debug("====>ActsOsAccountPermission_2200 start====");
        var AccountManager = osAccount.getAccountManager();
        console.debug("====>get os AccountManager finish====");
        try{
            await AccountManager.queryCurrentOsAccount();
        }
        catch(err){
            console.debug("====>queryCurrentOsAccount err:" + JSON.stringify(err));
            expect(err.code).assertEqual(ERR_OSACCOUNT_KIT_QUERY_CURRENT_OS_ACCOUNT_ERROR);
            console.debug("====>ActsOsAccountPermission_2200 end====");
            done();
        }
    })

    /*
     * @tc.number  : ActsOsAccountPermission_2300
     * @tc.name    : getOsAccountProfilePhoto callback
     * @tc.desc    : get current user photo does not meet the permission
     */
    it('ActsOsAccountPermission_2300', 0, async function(done){
        console.debug("====>ActsOsAccountPermission_2300 start====");
        var AccountManager = osAccount.getAccountManager();
        console.debug("====>get os AccountManager finish====");
        AccountManager.getOsAccountProfilePhoto(100, (err, photo)=>{
            console.debug("====>getOsAccountProfilePhoto err:" + JSON.stringify(err));
            console.debug("====>getOsAccountProfilePhoto photo:" + photo);
            expect(err.code).assertEqual(0);
            expect(photo).assertEqual("");
            console.debug("====>ActsOsAccountPermission_2300 end====");
            done();
        })
    })

    /*
     * @tc.number  : ActsOsAccountPermission_2400
     * @tc.name    : getOsAccountProfilePhoto promise
     * @tc.desc    : get current user photo does not meet the permission
     */
    it('ActsOsAccountPermission_2400', 0, async function(done){
        console.debug("====>ActsOsAccountPermission_2400 start====");
        var AccountManager = osAccount.getAccountManager();
        console.debug("====>get os AccountManager finish====");
        try{
            var photo = await AccountManager.getOsAccountProfilePhoto(100);
        }
        catch(err){
            console.debug("====>getOsAccountProfilePhoto err:" + JSON.stringify(err));
            expect().assertFail();
            done();
        }
        console.debug("====>getOsAccountProfilePhoto photo:" + photo);
        expect(photo).assertEqual("");
        console.debug("====>ActsOsAccountPermission_2400 end====");
        done();
    })

    /*
     * @tc.number  : ActsOsAccountPermission_2500
     * @tc.name    : isOsAccountActived callback
     * @tc.desc    : the application call interface does not meet the permissions
     */
    it('ActsOsAccountPermission_2500', 0, async function(done){
        console.debug("====>ActsOsAccountPermission_2500 start====");
        var AccountManager = osAccount.getAccountManager();
        console.debug("====>get os AccountManager finish====");
        AccountManager.isOsAccountActived(100, (err, isActived)=>{
            console.debug("====>isOsAccountActived err:" + JSON.stringify(err));
            console.debug("====>isOsAccountActived isActived:" + isActived);
            expect(err.code).assertEqual(0);
            expect(isActived).assertEqual(true);
            console.debug("====>ActsOsAccountPermission_2500 end====");
            done();
        })
    })

    /*
     * @tc.number  : ActsOsAccountPermission_2600
     * @tc.name    : isOsAccountActived promise
     * @tc.desc    : the application call interface does not meet the permissions
     */
    it('ActsOsAccountPermission_2600', 0, async function(done){
        console.debug("====>ActsOsAccountPermission_2600 start====");
        var AccountManager = osAccount.getAccountManager();
        console.debug("====>get os AccountManager finish====");
        try{
            var isActived = await AccountManager.isOsAccountActived(100);
        }
        catch(err){
            console.debug("====>isOsAccountActived err:" + JSON.stringify(err));
            expect().assertFail();
            done();
        }
        console.debug("====>isOsAccountActived isActived:" + isActived);
        expect(isActived).assertEqual(true);
        console.debug("====>ActsOsAccountPermission_2600 end====");
        done();
    })

    /*
     * @tc.number  : ActsOsAccountPermission_2700
     * @tc.name    : isOsAccountVerified callback
     * @tc.desc    : the application call interface does not meet the permissions
     */
    it('ActsOsAccountPermission_2700', 0, async function(done){
        console.debug("====>ActsOsAccountPermission_2700 start====");
        var AccountManager = osAccount.getAccountManager();
        console.debug("====>get os AccountManager finish====");
        AccountManager.isOsAccountVerified(100, (err, isVerified)=>{
            console.debug("====>isOsAccountVerified err:" + JSON.stringify(err));
            console.debug("====>isOsAccountVerified isVerified:" + isVerified);
            expect(err.code).assertEqual(0);
            expect(isVerified).assertEqual(false);
            console.debug("====>ActsOsAccountPermission_2700 end====");
            done();
        })
    })

    /*
     * @tc.number  : ActsOsAccountPermission_2800
     * @tc.name    : isOsAccountVerified promise
     * @tc.desc    : the application call interface does not meet the permissions
     */
    it('ActsOsAccountPermission_2800', 0, async function(done){
        console.debug("====>ActsOsAccountPermission_2800 start====");
        var AccountManager = osAccount.getAccountManager();
        console.debug("====>get os AccountManager finish====");
        try{
            var isVerified = await AccountManager.isOsAccountVerified(100);
        }
        catch(err){
            console.debug("====>isOsAccountVerified err:" + JSON.stringify(err));
            expect().assertFail();
            done();
        }
        console.debug("====>isOsAccountVerified isVerified:" + isVerified);
        expect(isVerified).assertEqual(false);
        console.debug("====>ActsOsAccountPermission_2800 end====");
        done();
    })
})