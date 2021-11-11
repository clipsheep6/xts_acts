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
import account from '@ohos.account.appAccount'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

const timeOut = 3000;
describe('ActsAccountCredential', function () {

    /*
     * @tc.number    : ActsAccountCredential_0100
     * @tc.name      : The correct calls setAssociatedData and getAccountCredential get the credential
     * @tc.desc      : The setAccountCredential setting credential is called when the forwarding parameters
     *                 are correct, and then getAccountCredential is called for the credential(callback)
     */
    it('ActsAccountCredential_0100', 0, async function (done) {
        console.debug("====>ActsAccountCredential_0100 start====>");
        var appAccountManager = account.createAppAccountManager();
        console.debug("====>creat finish====>");
        appAccountManager.addAccount("account_name_0100",(err)=>{
            console.debug("====>ActsAccountCredential_0100 addAccount:" + JSON.stringify(err));
            expect(err.code).assertEqual(0);
            appAccountManager.setAccountCredential("account_name_0100","credentialType1","credential1",(err)=>{
                console.debug("====>ActsAccountCredential_0100 setAccountCredential:" + JSON.stringify(err));
                expect(err.code).assertEqual(0);
                appAccountManager.getAccountCredential("account_name_0100","credentialType1",(err,data)=>{
                    console.debug("====>getAccountCredential 0100 err:" + JSON.stringify(err));
                    console.debug("====>getAccountCredential 0100 data:" + JSON.stringify(data));
                    expect(err.code).assertEqual(0);
                    expect(data).assertEqual("credential1");
                    appAccountManager.deleteAccount("account_name_0100", (err)=>{
                        console.debug("====>delete Account 0100 err:" + JSON.stringify(err));
                    });
                    console.debug("====>ActsAccountCredential_0100 end====>");
                    done();
                });
            });
        });
        setTimeout(function(){
            console.debug("====>time out ActsAccountCredential_0100====>");
        },timeOut);
    });



    /*
     * @tc.number    : ActsAccountCredential_0200
     * @tc.name      : The correct calls setAccountCredential and getAccountCredential get the credential
     * @tc.desc      : The setAssociatedData setting credential is called when the forwarding parameters
     *                 are correct, and then getAccountCredential is called for the credential(promise)
     */
    it('ActsAccountCredential_0200', 0, async function (done) {
        console.debug("====>ActsAccountCredential_0200 start====>");
        var appAccountManager = account.createAppAccountManager();
        console.debug("====>creat finish====>");
        console.debug("====>ActsAccountCredential_0200 addAccount start====>");
        try{
            await appAccountManager.addAccount("account_name_0200");
        }
        catch(err){
            console.error("add account ActsAccountCredential_0200 err:" + JSON.stringify(err));
            expect().assertFail();
            done();
        }
        console.debug("====>ActsAccountCredential_0200 setAccountCredential start====>");
        try{
            await appAccountManager.setAccountCredential("account_name_0200","credentialType2","credential2");
        }
        catch(err){
            console.error("setAccountCredential ActsAccountCredential_0200 err:" + JSON.stringify(err));
            expect().assertFail();
            done();
        }
        console.debug("====>ActsAccountCredential_0200 getAccountCredential start====>");
        try{
            var data = await appAccountManager.getAccountCredential("account_name_0200","credentialType2");
        }
        catch(err){
            console.error("getAccountCredential ActsAccountCredential_0200 err:" + JSON.stringify(err));
            expect().assertFail();
            done();
        }
        console.debug("====>ActsAccountCredential_0200 getAccountCredential data:" + JSON.stringify(data));
        expect(data).assertEqual("credential2");
        appAccountManager.deleteAccount("account_name_0200", (err)=>{
            console.debug("====>delete Account ActsAccountCredential_0200 err:" + JSON.stringify(err));
        });
        console.debug("====>ActsAccountCredential_0200 end====>");
        done();
        setTimeout(function(){
            console.debug("====>time out ActsAccountCredential_0200====>");
        },timeOut);
    });

    /*
     * @tc.number    : ActsAccountCredential_0300
     * @tc.name      : Whether getAssociatedData can get the correct value when calling setAccountCredential two times
     * @tc.desc      : When the first setAccountCredential is called and the second setAccountCredential
     *                 is called,the setting of the credential is different if the call getAccountCredential
     *                 can get the second credential(callback)
     */
    it('ActsAccountCredential_0300', 0, async function (done) {
        console.debug("====>ActsAccountCredential_0300 start====>");
        var appAccountManager = account.createAppAccountManager();
        console.debug("====>creat finish====>");
        appAccountManager.addAccount("account_name_0300",(err)=>{
            console.debug("====>ActsAccountCredential_0300 addAccount:" + JSON.stringify(err));
            expect(err.code).assertEqual(0);
            appAccountManager.setAccountCredential("account_name_0300","credentialType3","credential3",(err)=>{
                console.debug("====>0300 setAccountCredential first time err:" + JSON.stringify(err));
                expect(err.code).assertEqual(0);
                appAccountManager.setAccountCredential("account_name_0300","credentialType3","newcredential3",(err)=>{
                    console.debug("====>0300 setAccountCredential second time err:" + JSON.stringify(err));
                    expect(err.code).assertEqual(0);
                    appAccountManager.getAccountCredential("account_name_0300","credentialType3",(err,data)=>{
                        console.debug("====>getAccountCredential 0300 err:" + JSON.stringify(err));
                        console.debug("====>getAccountCredential 0300 data:" + JSON.stringify(data));
                        expect(err.code).assertEqual(0);
                        expect(data).assertEqual("newcredential3");
                        appAccountManager.deleteAccount("account_name_0300", (err)=>{
                            console.debug("====>delete Account 0300 err:" + JSON.stringify(err));
                        });
                        console.debug("====>ActsAccountCredential_0300 end====>");
                        done();
                    });
                });
            });
        });
        setTimeout(function(){
            console.debug("====>time out ActsAccountCredential_0300====>");
        },timeOut);
    });

    /*
     * @tc.number    : ActsAccountCredential_0400
     * @tc.name      : Whether getAssociatedData can get the correct value when calling setAccountCredential two times
     * @tc.desc      : When the first setAccountCredential is called and the second setAccountCredential
     *                 is called,the setting of the credential is different if the call getAccountCredential
     *                 can get the second credential(promise)
     */
    it('ActsAccountCredential_0400', 0, async function (done) {
        console.debug("====>ActsAccountCredential_0400 start====>");
        var appAccountManager = account.createAppAccountManager();
        console.debug("====>creat finish====>");
        console.debug("====>ActsAccountCredential_0400 addAccount start====>");
        try{
            await appAccountManager.addAccount("account_name_0400");
        }
        catch(err){
            console.error("addAccount ActsAccountCredential_0400 err:" + JSON.stringify(err));
            expect().assertFail();
            done();
        }
        try{
            await appAccountManager.setAccountCredential("account_name_0400", "credentialType4", "credential4");
            await appAccountManager.setAccountCredential("account_name_0400", "credentialType4", "newcredential4")
        }
        catch(err){
            console.error("setAccountCredential ActsAccountCredential_0400 err:" + JSON.stringify(err));
            expect().assertFail();
            done();
        }
        try{
            var data = await appAccountManager.getAccountCredential("account_name_0400", "credentialType4");
        }
        catch(err){
            console.error("getAccountCredential ActsAccountCredential_0400 err:" + JSON.stringify(err));
            expect().assertFail();
            done();
        }
        console.debug("====>ActsAccountCredential_0400 getAccountCredential data:" + JSON.stringify(data));
        expect(data).assertEqual("newcredential4");
        appAccountManager.deleteAccount("account_name_0400", (err)=>{
            console.debug("====>delete Account ActsAccountCredential_0400 err:" + JSON.stringify(err));
        });
        console.debug("====>ActsAccountCredential_0400 end====>");
        done();
        setTimeout(function(){
            console.debug("====>time out ActsAccountCredential_0400====>");
        },timeOut);
    });

    /*
     * @tc.number    : ActsAccountCredential_0500
     * @tc.name      : setAssociatedData and getAssociatedData are called when the argument is null
     * @tc.desc      : Call setAssociatedData and then getAssociatedData when the incoming credential is null(callback)
     */
    it('ActsAccountCredential_0500', 0, async function (done) {
        console.debug("====>ActsAccountCredential_0500 start====>");
        var appAccountManager = account.createAppAccountManager();
        console.debug("====>creat finish====>");
        appAccountManager.addAccount("account_name_0500",(err)=>{
            console.debug("====>ActsAccountCredential_0500 addAccount:" + JSON.stringify(err));
            expect(err.code).assertEqual(0);
            appAccountManager.setAccountCredential("account_name_0500","credentialType5","",(err)=>{
                console.debug("====>ActsAccountCredential_0500 setAccountCredential:" + JSON.stringify(err));
                expect(err.code).assertEqual(0);
                appAccountManager.getAccountCredential("account_name_0500","credentialType5",(err,data)=>{
                    console.debug("====>ActsAccountCredential_0500 getAccountCredential err:" + JSON.stringify(err));
                    console.debug("====>ActsAccountCredential_0500 getAccountCredential data:" + JSON.stringify(data));
                    expect(err.code).assertEqual(0);
                    expect(data).assertEqual("");
                    appAccountManager.deleteAccount("account_name_0500", (err)=>{
                        console.debug("====>delete Account ActsAccountCredential_0500 err:" + JSON.stringify(err));
                    });
                    console.debug("====>ActsAccountCredential_0500 end====>");
                    done();
                });
            });
        });
        setTimeout(function(){
            console.debug("====>time out ActsAccountCredential_0500====>");
        },timeOut);
    });

    /*
     * @tc.number    : ActsAccountCredential_0600
     * @tc.name      : setAssociatedData and getAssociatedData are called when the argument is null
     * @tc.desc      : Call setAssociatedData and then getAssociatedData when the incoming credential is null(promise)
     */
    it('ActsAccountCredential_0600', 0, async function (done) {
        console.debug("====>ActsAccountCredential_0600 start====>");
        var appAccountManager = account.createAppAccountManager();
        console.debug("====>creat finish====>");
        console.debug("====>ActsAccountCredential_0600 addAccount start====>");
        try{
            await appAccountManager.addAccount("account_name_0600");
        }
        catch(err){
            console.error("addAccount ActsAccountCredential_0600 err:" + JSON.stringify(err));
            expect().assertFail();
            done();
        }
        appAccountManager.setAccountCredential("account_name_0600","credentialType6","").then(()=>{
            appAccountManager.getAccountCredential("account_name_0600","credentialType6").then((data)=>{
                console.debug("====>ActsAccountCredential_0600 setAccountCredential" + JSON.stringify(data));
                expect(data).assertEqual("");
                appAccountManager.deleteAccount("account_name_0600", (err)=>{
                    console.debug("====>delete Account ActsAccountCredential_0600 err:" + JSON.stringify(err));
                });
                console.debug("====>ActsAccountCredential_0600 end====>");
                done();
            }).catch((err)=>{
                console.error("====>getAccountCredential ActsAccountCredential_0600:" + JSON.stringify(err));
                expect().assertFail();
                done();
            });
        }).catch((err)=>{
            console.error("====>setAccountCredential ActsAccountCredential_0600 err:" + JSON.stringify(err));
            expect().assertFail();
            done();
        });
        setTimeout(function(){
            console.debug("====>time out ActsAccountCredential_0600====>");
        },timeOut);
    });

    /*
     * @tc.number    : ActsAccountCredential_0700
     * @tc.name      : setAssociatedData setting value is called when the argument is wrong
     * @tc.desc      : Call setAssociatedData setting credential when the incoming parameter type is null(callback)
     */
    it('ActsAccountCredential_0700', 0, async function (done) {
        console.debug("====>ActsAccountCredential_0700 start====>");
        var appAccountManager = account.createAppAccountManager();
        console.debug("====>creat finish====>");
        appAccountManager.addAccount("account_name_0700",(err)=>{
            console.debug("====>ActsAccountCredential_0700 addAccount:" + JSON.stringify(err));
            expect(err.code).assertEqual(0);
            appAccountManager.setAccountCredential("account_name_0700","","credential7",(err)=>{
                console.debug("====>ActsAccountCredential_0700 setAccountCredential:" + JSON.stringify(err));
                expect(err.code != 0).assertEqual(true);
                appAccountManager.deleteAccount("account_name_0700", (err)=>{
                    console.debug("====>delete Account ActsAccountCredential_0700 err:" + JSON.stringify(err));
                });
                console.debug("====>ActsAccountCredential_0700 end====>");
                done();
            });
        });
        setTimeout(function(){
            console.debug("====>time out ActsAccountCredential_0700====>");
        },timeOut);
    });

    /*
     * @tc.number    : ActsAccountCredential_0800
     * @tc.name      : setAssociatedData setting value is called when the argument is wrong
     * @tc.desc      : Call setAssociatedData setting credential when the incoming parameter type is null(promise)
     */
    it('ActsAccountCredential_0800', 0, async function (done) {
        console.debug("====>ActsAccountCredential_0800 start====>");
        var appAccountManager = account.createAppAccountManager();
        console.debug("====>creat finish====>");
        console.debug("====>ActsAccountCredential_0800 addAccount start====>");
        try{
            await appAccountManager.addAccount("account_name_0800");
        }
        catch(err){
            console.error("addAccount ActsAccountCredential_0800 err:" + JSON.stringify(err));
            expect().assertFail();
            done();
        }
        appAccountManager.setAccountCredential("account_name_0800", "", "credential8").then(()=>{
            console.error("setAccountCredential ActsAccountCredential_0800 enter====>");
            expect().assertFail();
            done();
        }).catch((err)=>{
            console.debug("====>setAccountCredential ActsAccountCredential_0800 err:" + JSON.stringify(err));
            expect(err.code != 0).assertEqual(true);
            appAccountManager.deleteAccount("account_name_0800", (err)=>{
                console.debug("====>delete Account ActsAccountCredential_0800 err:" + JSON.stringify(err));
            });
            console.debug("====>ActsAccountCredential_0800 end====>");
            done();
        });
        setTimeout(function(){
            console.debug("====>time out ActsAccountCredential_0800====>");
        },timeOut);
    });

    /*
     * @tc.number    : ActsAccountCredential_0900
     * @tc.name      : getAccountCredential getting value is called when the argument is wrong
     * @tc.desc      : Call getAccountCredential getting credential when the incoming parameter type is wrong(callback)
     */
    it('ActsAccountCredential_0900', 0, async function (done) {
        console.debug("====>ActsAccountCredential_0900 start====>");
        var appAccountManager = account.createAppAccountManager();
        console.debug("====>creat finish====>");
        appAccountManager.addAccount("account_name_0900",(err)=>{
            console.debug("====>ActsAccountCredential_0900 addAccount:" + JSON.stringify(err));
            expect(err.code).assertEqual(0);
            appAccountManager.getAccountCredential("account_name_0900","",(err)=>{
                console.debug("====>ActsAccountCredential_0900 getAccountCredential:" + JSON.stringify(err));
                expect(err.code!=0).assertEqual(true);
                appAccountManager.deleteAccount("account_name_0900", (err)=>{
                    console.debug("====>delete Account ActsAccountCredential_0900 err:" + JSON.stringify(err));
                });
                console.debug("====>ActsAccountCredential_0900 end====>");
                done();
            });
        });
        setTimeout(function(){
            console.debug("====>time out ActsAccountCredential_0900====>");
        },timeOut);
    });

    /*
     * @tc.number    : ActsAccountCredential_1000
     * @tc.name      : getAccountCredential getting value is called when the argument is wrong
     * @tc.desc      : Call getAccountCredential getting credential when the incoming parameter type is wrong(promise)
     */
    it('ActsAccountCredential_1000', 0, async function (done) {
        console.debug("====>ActsAccountCredential_1000 start====>");
        var appAccountManager = account.createAppAccountManager();
        console.debug("====>creat finish====>");
        console.debug("====>ActsAccountCredential_1000 addAccount start====>");
        try{
            await appAccountManager.addAccount("account_name_1000");
        }
        catch(err){
            console.error("addAccount ActsAccountCredential_1000 err:" + JSON.stringify(err));
            expect().assertFail();
            done();
        }
        appAccountManager.getAccountCredential("account_name_1000","").then(()=>{
            console.error("setAccountCredential ActsAccountCredential_1000 enter====>");
            expect().assertFail();
            done();
        }).catch((err)=>{
            console.debug("====>getAccountCredential ActsAccountCredential_1000 err:" + JSON.stringify(err));
            expect(err.code != 0).assertEqual(true);
            appAccountManager.deleteAccount("account_name_1000", (err)=>{
                console.debug("====>delete Account ActsAccountCredential_1000 err:" + JSON.stringify(err));
            });
            console.debug("====>ActsAccountCredential_1000 end====>");
            done();
        });
        setTimeout(function(){
            console.debug("====>time out ActsAccountCredential_1000====>");
        },timeOut);
    });

    /*
     * @tc.number    : ActsAccountCredential_1100
     * @tc.name      : setAssociatedData setting credential is called when the argument is sapce
     * @tc.desc      : Call setAssociatedData setting credential when the incoming parameter type is space
     *                 then use getAccountCredential getting the credential(callback)
     */
    it('ActsAccountCredential_1100', 0, async function (done) {
        console.debug("====>ActsAccountCredential_1100 start====>");
        var appAccountManager = account.createAppAccountManager();
        console.debug("====>creat finish====>");
        appAccountManager.addAccount("account_name_1100",(err)=>{
            console.debug("====>ActsAccountCredential_1100 addAccount:" + JSON.stringify(err));
            expect(err.code).assertEqual(0);
            appAccountManager.setAccountCredential("account_name_1100", " ", "credential11",(err)=>{
                console.debug("====>ActsAccountCredential_1100 setAccountCredential err:" + JSON.stringify(err));
                expect(err.code).assertEqual(0);
                appAccountManager.getAccountCredential("account_name_1100"," ",(err,data)=>{
                    console.debug("====>getAccountCredential 1100 err:" + JSON.stringify(err));
                    console.debug("====>getAccountCredential 1100 data:" + JSON.stringify(data));
                    expect(err.code).assertEqual(0);
                    expect(data).assertEqual("credential11");
                    appAccountManager.deleteAccount("account_name_1100", (err)=>{
                        console.debug("====>delete Account 1100 err:" + JSON.stringify(err));
                    });
                    console.debug("====>ActsAccountCredential_1100 end====>");
                    done();
                });
            });
        });
        setTimeout(function(){
            console.debug("====>time out ActsAccountCredential_1100====>");
        },timeOut);
    });

    /*
     * @tc.number    : ActsAccountCredential_1200
     * @tc.name      : setAssociatedData setting credential is called when the argument is sapce
     * @tc.desc      : Call setAssociatedData setting credential when the incoming parameter type is space
     *                 then use getAccountCredential getting the credential(promise)
     */
    it('ActsAccountCredential_1200', 0, async function (done) {
        console.debug("====>ActsAccountCredential_1200 start====>");
        var appAccountManager = account.createAppAccountManager();
        console.debug("====>creat finish====>");
        console.debug("====>ActsAccountCredential_1200 addAccount start====>");
        try{
            await appAccountManager.addAccount("account_name_1200");
        }
        catch(err){
            console.error("addAccount ActsAccountCredential_1200 err:" + JSON.stringify(err));
            expect().assertFail();
            done();
        }
        appAccountManager.setAccountCredential("account_name_1200", " ","credential12").then(()=>{
            appAccountManager.getAccountCredential("account_name_1200", " ").then((data)=>{
                console.debug("====>ActsAccountCredential_1200 getAccountCredential" + JSON.stringify(data));
                expect(data).assertEqual("credential12");
                appAccountManager.deleteAccount("account_name_1200", (err)=>{
                    console.debug("====>delete Account ActsAccountCredential_1200 err:" + JSON.stringify(err));
                });
                console.debug("====>ActsAccountCredential_1200 end====>");
                done();
            }).catch((err)=>{
                console.error("====>getAccountCredential ActsAccountCredential_1200 err:" + JSON.stringify(err));
                expect().assertFail();
                done();
            });
        }).catch((err)=>{
            console.error("====>setAccountCredential ActsAccountCredential_1200 err:" + JSON.stringify(err));
            expect().assertFail();
            done();
        });
        setTimeout(function(){
            console.debug("====>time out ActsAccountCredential_1200====>");
        },timeOut);
    });

    /*
     * @tc.number    : ActsAccountCredential_1300
     * @tc.name      : setAssociatedData setting credential is called when the argument is wrong
     * @tc.desc      : Call setAssociatedData setting credential when the incoming parameter name is null(callback)
     */
    it('ActsAccountCredential_1300', 0, async function (done) {
        console.debug("====>ActsAccountCredential_1300 start====>");
        var appAccountManager = account.createAppAccountManager();
        console.debug("====>creat finish====>");
        appAccountManager.addAccount("account_name_1300",(err)=>{
            console.debug("====>ActsAccountCredential_1300 addAccount:" + JSON.stringify(err));
            expect(err.code).assertEqual(0);
            appAccountManager.setAccountCredential("","credentialType13","credential13",(err)=>{
                console.debug("====>ActsAccountCredential_1300 setAccountCredential:" + JSON.stringify(err));
                expect(err.code!=0).assertEqual(true);
                appAccountManager.deleteAccount("account_name_1300", (err)=>{
                    console.debug("====>delete Account ActsAccountCredential_1300 err:" + JSON.stringify(err));
                    console.debug("====>ActsAccountCredential_1300 end====>");
                    expect(err.code).assertEqual(0);
                    done();
                });
            });
        });
        setTimeout(function(){
            console.debug("====>time out ActsAccountCredential_1300====>");
        },timeOut);
    });

    /*
     * @tc.number    : ActsAccountCredential_1400
     * @tc.name      : setAssociatedData setting credential is called when the argument is wrong
     * @tc.desc      : Call setAssociatedData setting credential when the incoming parameter name is null(promise)
     */
    it('ActsAccountCredential_1400', 0, async function (done) {
        console.debug("====>ActsAccountCredential_1400 start====>");
        var appAccountManager = account.createAppAccountManager();
        console.debug("====>creat finish====>");
        console.debug("====>ActsAccountCredential_1400 addAccount start====>");
        try{
            await appAccountManager.addAccount("account_name_1400");
        }
        catch(err){
            console.error("addAccount ActsAccountCredential_1400 err:" + JSON.stringify(err))
            expect().assertFail();
            done();
        }
        appAccountManager.setAccountCredential("","credentialType14","credential14").then(()=>{
            console.error("====>setAccountCredential ActsAccountCredential_1400 enter====>");
            expect().assertFail();
            done();
        }).catch((err)=>{
            console.debug("====>setAccountCredential ActsAccountCredential_1400 err:" + JSON.stringify(err));
            expect(err.code != 0).assertEqual(true);
            appAccountManager.deleteAccount("account_name_1400", (err)=>{
                console.debug("====>delete Account ActsAccountCredential_1400 err:" + JSON.stringify(err));
            });
            console.debug("====>ActsAccountCredential_1400 end====>");
            done();
        });
        setTimeout(function(){
            console.debug("====>time out ActsAccountCredential_1400====>");
        },timeOut);
    });

    /*
     * @tc.number    : ActsAccountCredential_1500
     * @tc.name      : Get it directly without setting credential
     * @tc.desc      : Call getAccountCredential directly to get credential without calling setAccountCredential(callback)
     */
    it('ActsAccountCredential_1500', 0, async function (done) {
        console.debug("====>ActsAccountCredential_1500 start====>");
        var appAccountManager = account.createAppAccountManager();
        console.debug("====>creat finish====>");
        appAccountManager.addAccount("account_name_1500", (err)=>{
            console.debug("====>ActsAccountCredential_1500 addAccount err:" + JSON.stringify(err));
            expect(err.code).assertEqual(0);
            appAccountManager.getAccountCredential("account_name_1500","credentialType15", (err)=>{
                console.debug("====>ActsAccountCredential_1500 getAccountCredential err:" + JSON.stringify(err));
                expect(err.code != 0).assertEqual(true);
                appAccountManager.deleteAccount("account_name_1500", (err)=>{
                    console.debug("====>delete Account ActsAccountCredential_1500 err:" + JSON.stringify(err));
                    console.debug("====>ActsAccountCredential_1500 end====>");
                    expect(err.code).assertEqual(0);
                    done();
                });
            });
        });
        setTimeout(function(){
            console.debug("====>time out ActsAccountCredential_1500====>");
        },timeOut);
    });

    /*
     * @tc.number    : ActsAccountCredential_1600
     * @tc.name      : Get it directly without setting credential
     * @tc.desc      : Call getAccountCredential directly to get credential without calling setAccountCredential(promise)
     */
    it('ActsAccountCredential_1600', 0, async function (done) {
        console.debug("====>ActsAccountCredential_1600 start====>");
        var appAccountManager = account.createAppAccountManager();
        console.debug("====>creat finish====>");
        appAccountManager.addAccount("account_name_1600", (err)=>{
            console.debug("====>ActsAccountCredential_1600 addAccount err:" + JSON.stringify(err));
            expect(err.code).assertEqual(0);
            appAccountManager.getAccountCredential("account_name_1600","credentialType16").then(()=>{
                console.error("====>getAccountCredential ActsAccountCredential_1600 enter====>");
                expect().assertFail();
                done();
            }).catch((err)=>{
                console.error("====>getAccountCredential ActsAccountCredential_1600 err:" + JSON.stringify(err));
                expect(err.code != 0).assertEqual(true);
                appAccountManager.deleteAccount("account_name_1600", (err)=>{
                    console.debug("====>delete Account ActsAccountCredential_1600 err:" + JSON.stringify(err));
                });
                console.debug("====>ActsAccountCredential_1600 end====>");
                done();
            });
        });
        setTimeout(function(){
            console.debug("====>time out ActsAccountCredential_1600====>");
        },timeOut);
    });

    /*
     * @tc.number    : ActsAccountCredential_1700
     * @tc.name      : setAccountCredential setting credential is called when the argument is wrong
     * @tc.desc      : Call setAccountCredential setting credential when the incoming parameter credential is wrong(callback)
     */
    it('ActsAccountCredential_1700', 0, async function (done) {
        console.debug("====>ActsAccountCredential_1700 start====>");
        var CREDENTIALOVERSIZE = "K"
        for(var i=0;i<256;i++)
        CREDENTIALOVERSIZE=CREDENTIALOVERSIZE+"K!@#";
        var appAccountManager = account.createAppAccountManager();
        console.debug("====>creat finish====>");
        appAccountManager.addAccount("account_name_1700",(err)=>{
            console.debug("====>ActsAccountCredential_1700 addAccount:" + JSON.stringify(err));
            expect(err.code).assertEqual(0);
            appAccountManager.setAccountCredential("account_name_1700", "credentialType17", CREDENTIALOVERSIZE, (err)=>{
                console.debug("====>CREDENTIALOVERSIZE.length:" + JSON.stringify(CREDENTIALOVERSIZE.length));
                expect(CREDENTIALOVERSIZE.length).assertEqual(1025);
                console.debug("====>ActsAccountCredential_1700 setAccountCredential err:" + JSON.stringify(err));
                expect(err.code != 0).assertEqual(true);
                appAccountManager.deleteAccount("account_name_1700", (err)=>{
                    console.debug("====>delete Account ActsAccountCredential_1700 err:" + JSON.stringify(err));
                    console.debug("====>ActsAccountCredential_1700 end====>");
                    expect(err.code).assertEqual(0);
                    done();
                });
            });
        });
        setTimeout(function(){
            console.debug("====>time out ActsAccountCredential_1700====>");
        },timeOut);
    });

    /*
     * @tc.number    : ActsAccountCredential_1800
     * @tc.name      : setAccountCredential setting credential is called when the argument is wrong
     * @tc.desc      : Call setAccountCredential setting credential when the incoming parameter credential is wrong(promise)
     */
    it('ActsAccountCredential_1800', 0, async function (done) {
        console.debug("====>ActsAccountCredential_1800 start====>");
        var bigStr = "K"
        for(var i=0;i<256;i++)
        bigStr = bigStr + "K!@#";
        var appAccountManager = account.createAppAccountManager();
        console.debug("====>creat finish====>");
        console.debug("====>ActsAccountCredential_1800 addAccount start====>");
        try{
            await appAccountManager.addAccount("account_name_1800");
        }
        catch(err){
            console.error("====>ActsAccountCredential_1800 addAccount err:" + JSON.stringify(err));
            expect().assertFail();
            done();
        }
        appAccountManager.setAccountCredential("account_name_1800", "credentialType18", bigStr).then(()=>{
            console.error("====>setAccountCredential ActsAccountCredential_1800 enter====>");
            expect().assertFail();
            done();
        }).catch((err)=>{
            console.debug("====>bigStr.length:" + JSON.stringify(bigStr.length));
            expect(bigStr.length).assertEqual(1025);
            console.error("====>setAccountCredential ActsAccountCredential_1800 err:" + JSON.stringify(err));
            expect(err.code != 0).assertEqual(true);
            appAccountManager.deleteAccount("account_name_1800", (err)=>{
                console.debug("====>delete Account ActsAccountCredential_1800 err:" + JSON.stringify(err));
            });
            console.debug("====>ActsAccountCredential_1800 end====>");
            done();
        });
        setTimeout(function(){
            console.debug("====>time out ActsAccountCredential_1800====>");
        },timeOut);
    });

    /*
     * @tc.number    : ActsAccountCredential_1900
     * @tc.name      : setAccountCredential setting credential is called when the argument is wrong
     * @tc.desc      : Call setAccountCredential setting type when the incoming parameter credential is wrong(callback)
     */
    it('ActsAccountCredential_1900', 0, async function (done) {
        console.debug("====>ActsAccountCredential_1900 start====>");
        var CREDENTIALTYPEOVERSIZE = "K"
        for(var i=0;i<256;i++)
        CREDENTIALTYPEOVERSIZE = CREDENTIALTYPEOVERSIZE + "K!@#";
        var appAccountManager = account.createAppAccountManager();
        console.debug("====>creat finish====>");
        appAccountManager.addAccount("account_name_1900", (err)=>{
            console.debug("====>ActsAccountCredential_1900 addAccount err:" + JSON.stringify(err));
            expect(err.code).assertEqual(0);
            appAccountManager.setAccountCredential("account_name_1900", CREDENTIALTYPEOVERSIZE, "credential19", (err)=>{
                console.debug("====>CREDENTIALTYPEOVERSIZE.length:" + JSON.stringify(CREDENTIALTYPEOVERSIZE.length));
                expect(CREDENTIALTYPEOVERSIZE.length).assertEqual(1025);
                console.debug("====>ActsAccountCredential_1900 setAccountCredential err:" + JSON.stringify(err));
                expect(err.code != 0).assertEqual(true);
                appAccountManager.deleteAccount("account_name_1900", (err)=>{
                    console.debug("====>delete Account ActsAccountCredential_1900 err:" + JSON.stringify(err));
                    console.debug("====>ActsAccountCredential_1900 end====>");
                    expect(err.code).assertEqual(0);
                    done();
                });
            });
        });
        setTimeout(function(){
            console.debug("====>time out ActsAccountCredential_1900====>");
        },timeOut);
    });

    /*
     * @tc.number    : ActsAccountCredential_2000
     * @tc.name      : setAccountCredential setting credential is called when the argument is wrong
     * @tc.desc      : Call setAccountCredential setting type when the incoming parameter credential is wrong(promise)
     */
    it('ActsAccountCredential_2000', 0, async function (done) {
        console.debug("====>ActsAccountCredential_2000 start====>");
        var CREDENTIALTYPEOVERSIZE = "K"
        for(var i=0;i<256;i++)
        CREDENTIALTYPEOVERSIZE=CREDENTIALTYPEOVERSIZE+"K!@#";
        var appAccountManager = account.createAppAccountManager();
        console.debug("====>creat finish====>");
        console.debug("====>ActsAccountCredential_2000 addAccount start====>");
        try{
            await appAccountManager.addAccount("account_name_2000");
        }
        catch(err){
            console.error("====>ActsAccountCredential_2000 addAccount err:" + JSON.stringify(err));
            expect().assertFail();
            done();
        }
        appAccountManager.setAccountCredential("account_name_2000", CREDENTIALTYPEOVERSIZE ,"credential20").then(()=>{
            console.error("====>setAccountCredential ActsAccountCredential_2000 enter====>");
            expect().assertFail();
            done();
        }).catch((err)=>{
            console.debug("====>CREDENTIALTYPEOVERSIZE.length:" + JSON.stringify(CREDENTIALTYPEOVERSIZE.length));
            expect(CREDENTIALTYPEOVERSIZE.length).assertEqual(1025);
            console.error("====>setAccountCredential ActsAccountCredential_2000 err:" + JSON.stringify(err));
            expect(err.code != 0).assertEqual(true);
            appAccountManager.deleteAccount("account_name_2000", (err)=>{
                console.debug("====>delete Account ActsAccountCredential_2000 err:" + JSON.stringify(err));
            });
            console.debug("====>ActsAccountCredential_2000 end====>");
            done();
        });
        setTimeout(function(){
            console.debug("====>time out ActsAccountCredential_2000====>");
        },timeOut);
    });

    /*
     * @tc.number    : ActsAccountCredential_2100
     * @tc.name      : setAccountCredential setting credential is called when the argument is wrong
     * @tc.desc      : Call setAccountCredential setting name when the incoming parameter name is wrong(callback)
     */
    it('ActsAccountCredential_2100', 0, async function (done) {
        console.debug("====>ActsAccountCredential_2100 start====>");
        var NAMEOVERSIZE = "n"
        for(var i=0;i<256;i++)
        NAMEOVERSIZE = NAMEOVERSIZE + "name";
        var appAccountManager = account.createAppAccountManager();
        console.debug("====>creat finish====>");
        appAccountManager.addAccount("account_name_2100", (err)=>{
            console.debug("====>ActsAccountCredential_2100 addAccount err:" + JSON.stringify(err));
            expect(err.code).assertEqual(0);
            appAccountManager.setAccountCredential(NAMEOVERSIZE, "credentialType21", "credential21",(err)=>{
                console.debug("====>ActsAccountCredential_2100 setAccountCredential err:" + JSON.stringify(err));
                expect(err.code != 0).assertEqual(true);
                appAccountManager.deleteAccount("account_name_2100", (err)=>{
                    console.debug("====>delete Account ActsAccountCredential_2100 err:" + JSON.stringify(err));
                    console.debug("====>ActsAccountCredential_2100 end====>");
                    expect(err.code).assertEqual(0);
                    done();
                });
            });
        });
        setTimeout(function(){
            console.debug("====>time out ActsAccountCredential_2100====>");
        },timeOut);
    });

    /*
     * @tc.number    : ActsAccountCredential_2200
     * @tc.name      : setAccountCredential setting credential is called when the argument is wrong
     * @tc.desc      : Call setAccountCredential setting name when the incoming parameter name is wrong(promise)
     */
    it('ActsAccountCredential_2200', 0, async function (done) {
        console.debug("====>ActsAccountCredential_2200 start====>");
        var NAMEOVERSIZE ="n"
        for(var i=0;i<256;i++)
        NAMEOVERSIZE=NAMEOVERSIZE+"name";
        var appAccountManager = account.createAppAccountManager();
        console.debug("====>creat finish====>");
        console.debug("====>ActsAccountCredential_2200 addAccount start====>");
        try{
            await appAccountManager.addAccount("account_name_2200");
        }
        catch(err){
            console.error("====>ActsAccountCredential_2200 addAccount err:" + JSON.stringify(err));
            expect().assertFail();
            done();
        }
        appAccountManager.setAccountCredential(NAMEOVERSIZE, "credentialType22", "credential22").then(()=>{
            console.error("====>setAccountCredential ActsAccountCredential_2200 enter====>");
            expect().assertFail();
            done();
        }).catch((err)=>{
            console.error("====>setAccountCredential ActsAccountCredential_2200 err:" + JSON.stringify(err));
            expect(err.code != 0).assertEqual(true);
            appAccountManager.deleteAccount("account_name_2200", (err)=>{
                console.debug("====>delete Account ActsAccountCredential_2200 err:" + JSON.stringify(err));
            });
            console.debug("====>ActsAccountCredential_2200 end====>");
            done();
        });
        setTimeout(function(){
            console.debug("====>time out ActsAccountCredential_2200====>");
        },timeOut);
    });
})