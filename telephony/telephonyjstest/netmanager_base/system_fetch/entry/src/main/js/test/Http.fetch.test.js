
/**
 * Copyright (C) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License")
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

import NetHttp from '@ohos.net.http';
import fetch from '@system.fetch';
import {describe, afterAll, it, expect, beforeAll, afterEach} from 'deccjsunit/index';

describe("Telephony_NetStack_HttpTest", function () {

    /**
     * @tc.number   Telephony_NetStack_HttpTestBasicGet_0100
     * @tc.name     基本场景，测试能否GET一个网址
     * @tc.desc     function test
     */
    it("Telephony_NetStack_HttpTestBasicGet_0100", 0, function (done) {
        let http = NetHttp.createHttp()
        http.request("https://httpbin.org/anything").then(function(data){
            console.info("NetStack " + JSON.stringify(data));
            expect(data.responseCode === NetHttp.ResponseCode.OK).assertTrue()
            done();
        })
    });

    /**
     * @tc.number   Telephony_NetStack_HttpTestUserAgent_0100
     * @tc.name     返回用户代理
     * @tc.desc     function test
     */
    it("Telephony_NetStack_HttpTestUserAgent_0100", 0, function (done) {
        let http = NetHttp.createHttp()
        http.request("https://httpbin.org/user-agent").then(function(data){
            console.info("NetStack "+ JSON.stringify(data));
            expect(data.responseCode === NetHttp.ResponseCode.OK).assertTrue()
            expect(JSON.parse(data.result)["user-agent"] === "libcurl-agent/1.0").assertTrue()
            done();
        })
    });

    /**
     * @tc.number   Telephony_NetStack_HttpTestHeader_0100
     * @tc.name     返回Header
     * @tc.desc     function test
     */
    it("Telephony_NetStack_HttpTestHeader_0100", 0, function (done) {
        let http = NetHttp.createHttp()
        http.request("https://httpbin.org/headers").then(function(data){
            console.info("NetStack "+ JSON.stringify(data));
            expect(data.responseCode === NetHttp.ResponseCode.OK).assertTrue()
            console.info("NetStack "+JSON.stringify(JSON.parse(data.result)))
            expect(JSON.parse(data.result)["headers"]["Content-Type"] === "application/json").assertTrue()
            done();
        })
    });

    /**
     * @tc.number   Telephony_NetStack_HttpTestPost_0100
     * @tc.name     返回Post内容
     * @tc.desc     function test
     */
    it("Telephony_NetStack_HttpTestPost_0100", 0, function (done) {
        let http = NetHttp.createHttp()
        http.request("https://httpbin.org/post" ,{
            method : NetHttp.RequestMethod.POST,
            extraData : "MineMine"
        }).then(function(data){
            console.info("NetStack "+JSON.stringify(data));
            expect(data.responseCode === NetHttp.ResponseCode.OK).assertTrue()
            expect(JSON.parse(data.result)["data"] === "MineMine").assertTrue()
            done();
        })
    });

    /**
     * @tc.number   Telephony_NetStack_HttpTestPut_0100
     * @tc.name     返回Put内容
     * @tc.desc     function test
     */
    it("Telephony_NetStack_HttpTestPut_0100", 0, function (done) {
        let http = NetHttp.createHttp()
        http.request("https://httpbin.org/put" ,{
            method : NetHttp.RequestMethod.PUT,
            extraData : "MineMine"
        }).then(function(data){
            console.info("NetStack "+JSON.stringify(data));
            expect(data.responseCode === NetHttp.ResponseCode.OK).assertTrue()
            expect(JSON.parse(data.result)["data"] === "MineMine").assertTrue()
            done();
        })
    });

    /**
     * @tc.number   Telephony_NetStack_HttpTestCookies_0100
     * @tc.name     返回Cookies内容
     * @tc.desc     function test
     */
    it("Telephony_NetStack_HttpTestCookies_0100", 0, function (done) {
        let http = NetHttp.createHttp()
        http.request("https://httpbin.org/cookies/set/name/value").then(function(data){
            console.info("NetStack "+JSON.stringify(data))
            expect(data.responseCode === NetHttp.ResponseCode.OK).assertTrue()
            expect(data.cookies !== "").assertTrue()
            done();
        })
    });

    /**
     * @tc.number   Telephony_NetStack_HttpTestUrlEncode_0100
     * @tc.name     返回Cookies内容
     * @tc.desc     function test
     */
    it("Telephony_NetStack_HttpTestUrlEncode_0100", 0, function (done) {
        let http = NetHttp.createHttp()
        http.request("https://httpbin.org/response-headers?key1=val1&key2=val2" ,{
            extraData : {
                "name1" : "mine1",
                "name2" : "mine2",
            }
        }).then(function(data){
            console.info("NetStack "+JSON.stringify(data));
            expect(data.responseCode === NetHttp.ResponseCode.OK).assertTrue()
            expect(JSON.parse(data.result)["key1"] === "val1").assertTrue()
            expect(JSON.parse(data.result)["key2"] === "val2").assertTrue()
            expect(JSON.parse(data.result)["name1"] === "mine1").assertTrue()
            expect(JSON.parse(data.result)["name2"] === "mine2").assertTrue()
            done();
        })
    });

    /**
     * @tc.number   Telephony_NetStack_HttpTestFetchBasicGet_0100
     * @tc.name     基本场景，FETCH方式测试能否GET一个网址
     * @tc.desc     function test
     */
    it("Telephony_NetStack_HttpTestFetchBasicGet_0100", 0, function (done) {
        fetch.fetch({
            url : "https://httpbin.org/anything",
            success : function(data){
                console.info("NetStack fetch success "+JSON.stringify(data))
                expect(data.code === 200).assertTrue()
                done();
            },
            fail : function(){
                console.info("NetStack Fetch Failed")
                expect().assertFail()
                done()
            },
            complete : function(){
                console.info("NetStack Fetch Complete")
            }
        })
    });

    /**
     * @tc.number   Telephony_NetStack_HttpTestFetchUserAgent_0100
     * @tc.name     FETCH方式返回用户代理
     * @tc.desc     function test
     */
    it("Telephony_NetStack_HttpTestFetchUserAgent_0100", 0, function (done) {
        fetch.fetch({
            url : "https://httpbin.org/user-agent",
            success : function(data){
                console.info("NetStack fetch success "+ JSON.stringify(data))
                expect(data.code === 200).assertTrue()
                expect(JSON.parse(data.data)["user-agent"] === "libcurl-agent/1.0").assertTrue()
                done();
            },
            fail : function(){
                console.info("NetStack Fetch Failed")
                expect().assertFail()
                done();
            },
            complete : function(){
                console.info("NetStack fetch complete")
            }
        })
    });

    /**
     * @tc.number   Telephony_NetStack_HttpTestFetchUserAgent_0200
     * @tc.name     FETCH方式返回用户代理
     * @tc.desc     function test
     */
    it("Telephony_NetStack_HttpTestFetchUserAgent_0200", 0, function (done) {
        fetch.fetch({
            url : "https://httpbin.org/user-agent",
            responseType : "JSON",
            success : function(data){
                console.info("NetStack fetch success "+ JSON.stringify(data))
                expect(data.code === 200).assertTrue()
                expect(data.data["user-agent"] === "libcurl-agent/1.0").assertTrue()
                done();
            },
            fail : function(){
                console.info("NetStack Fetch Failed")
                expect().assertFail()
                done();
            },
            complete : function(){
                console.info("NetStack fetch complete")
            }
        })
    });

    /**
     * @tc.number   Telephony_NetStack_HttpTestFetchHeader_0100
     * @tc.name     返回Header
     * @tc.desc     function test
     */
    it("Telephony_NetStack_HttpTestFetchHeader_0100", 0, function (done) {
        fetch.fetch({
            url : "https://httpbin.org/headers",
            success : function(data){
                console.info("NetStack Fetch Success "+ JSON.stringify(data))
                expect(data.code === 200).assertTrue()
                expect(JSON.parse(data.data)["headers"]["Content-Type"] === "application/json").assertTrue()
                done();
            },
            fail : function(){
                console.info("NetStack Fetch Failed")
                expect().assertFail()
                done();
            },
            complete : function(){
                console.info("NetStack Fetch Complete")
            }
        })
    });

    /**
         * @tc.number   Telephony_NetStack_HttpTestFetchHeader_0200
         * @tc.name     返回Header
         * @tc.desc     function test
         */
    it("Telephony_NetStack_HttpTestFetchHeader_0200", 0, function (done) {
        fetch.fetch({
            url : "https://httpbin.org/headers",
            responseType : "JSON",
            success : function(data){
                console.info("NetStack Fetch Success "+ JSON.stringify(data))
                expect(data.code === 200).assertTrue()
                expect(data.data["headers"]["Content-Type"] === "application/json").assertTrue()
                done();
            },
            fail : function(){
                console.info("NetStack Fetch Failed")
                expect().assertFail()
                done();
            },
            complete : function(){
                console.info("NetStack Fetch Complete")
            }
        })
    });

    /**
     * @tc.number   Telephony_NetStack_HttpTestFetchPost_0100
     * @tc.name     返回Post内容
     * @tc.desc     function test
     */
    it("Telephony_NetStack_HttpTestFetchPost_0100", 0, function (done) {
        fetch.fetch({
            url : "https://httpbin.org/post",
            method : "POST",
            data : "MineMine",
            success : function(data){
                console.info("NetStack "+ JSON.stringify(data))
                expect(data.code === 200).assertTrue()
                expect(JSON.parse(data.data)["data"] === "MineMine").assertTrue()
                done();
            },
            fail : function(){
                console.info("NetStack Fetch Failed")
                expect().assertFail()
                done()
            },
            complete : function(){
                console.info("NetStack Fetch Complete")
            }
        })
    });

    /**
     * @tc.number   Telephony_NetStack_HttpTestFetchPost_0200
     * @tc.name     返回Post内容
     * @tc.desc     function test
     */
    it("Telephony_NetStack_HttpTestFetchPost_0200", 0, function (done) {
        fetch.fetch({
            url : "https://httpbin.org/post",
            method : "POST",
            data : "MineMine",
            responseType : "JSON",
            success : function(data){
                console.info("NetStack "+ JSON.stringify(data))
                expect(data.code === 200).assertTrue()
                expect(data.data["data"] === "MineMine").assertTrue()
                done();
            },
            fail : function(){
                console.info("NetStack Fetch Failed")
                expect().assertFail()
                done();
            },
            complete : function(){
                console.info("NetStack Fetch Complete")
            }
        })
    });

    /**
     * @tc.number   Telephony_NetStack_HttpTestFetchPut_0100
     * @tc.name     返回Put内容
     * @tc.desc     function test
     */
    it("Telephony_NetStack_HttpTestFetchPut_0100", 0, function (done) {
        fetch.fetch({
            url : "https://httpbin.org/put",
            method : "PUT",
            data : "MineMine",
            success : function(data){
                console.info("NetStack "+ JSON.stringify(data))
                expect(data.code === 200).assertTrue()
                expect(JSON.parse(data.data)["data"] === "MineMine").assertTrue()
                done();
            },
            fail : function(){
                console.info("NetStack Fetch Failed")
                expect().assertFail()
                done();
            },
            complete : function(){
                console.info("NetStack Fetch Complete")
            }
        })
    });

    /**
     * @tc.number   Telephony_NetStack_HttpTestFetchPut_0200
     * @tc.name     返回Put内容
     * @tc.desc     function test
     */
    it("Telephony_NetStack_HttpTestFetchPut_0200", 0, function (done) {
        fetch.fetch({
            url : "https://httpbin.org/put",
            method : "PUT",
            data : "MineMine",
            responseType : "JSON",
            success : function(data){
                console.info("NetStack "+ JSON.stringify(data))
                expect(data.code === 200).assertTrue()
                expect(data.data["data"] === "MineMine").assertTrue()
                done();
            },
            fail : function(){
                console.info("NetStack Fetch Failed")
                expect().assertFail()
                done();
            },
            complete : function(){
                console.info("NetStack Fetch Complete")
            }
        })
    });

    /**
     * @tc.number   Telephony_NetStack_HttpTestFetchUrlEncode_0100
     * @tc.name     返回Cookies内容
     * @tc.desc     function test
     */
    it("Telephony_NetStack_HttpTestFetchUrlEncode_0100", 0, function (done) {
        fetch.fetch({
            url : "https://httpbin.org/response-headers?key1=val1&key2=val2",
            data : {
                "name1" : "mine1",
                "name2" : "mine2",
            },
            success : function(data){
                console.info("NetStack "+JSON.stringify(data))
                expect(data.code === 200).assertTrue()
                expect(JSON.parse(data.data)["key1"] === "val1").assertTrue()
                expect(JSON.parse(data.data)["key2"] === "val2").assertTrue()
                expect(JSON.parse(data.data)["name1"] === "mine1").assertTrue()
                expect(JSON.parse(data.data)["name2"] === "mine2").assertTrue()
                done();
            },
            fail : function(){
                console.info("NetStack Fetch Failed")
                expect().assertFail()
                done()
            },
            complete : function(){
                console.info("NetStack Fetch Complete")
            }
        })
    });

    /**
     * @tc.number   Telephony_NetStack_HttpTestFetchUrlEncode_0200
     * @tc.name     返回Cookies内容
     * @tc.desc     function test
     */
    it("Telephony_NetStack_HttpTestFetchUrlEncode_0200", 0, function (done) {
        fetch.fetch({
            url : "https://httpbin.org/response-headers?key1=val1&key2=val2",
            data : {
                "name1" : "mine1",
                "name2" : "mine2",
            },
            responseType : "JSON",
            success : function(data){
                console.info("NetStack "+JSON.stringify(data))
                expect(data.code === 200).assertTrue()
                expect(data.data["key1"] === "val1").assertTrue()
                expect(data.data["key2"] === "val2").assertTrue()
                expect(data.data["name1"] === "mine1").assertTrue()
                expect(data.data["name2"] === "mine2").assertTrue()
                done();
            },
            fail : function(){
                console.info("NetStack Fetch Failed")
                expect().assertFail()
                done()
            },
            complete : function(){
                console.info("NetStack Fetch Complete")
            }
        })
    });
});