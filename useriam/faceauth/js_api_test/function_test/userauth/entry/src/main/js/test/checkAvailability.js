import userAuth from '@ohos.userIAM.userAuth'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
var index = require('../default/pages/index/index.js');
/**
 * test case
 */
describe('userAuthTest', function () {
    beforeEach(function(done) {
        let wait_time = 1000;
        setTimeout(function() {
            done();
        }, wait_time);
    })
    afterEach(function() {
    })

    /**
    * @tc.name      checkAvailability type=FACE_ONLY
    * @tc.number    JSAPI_Function_CheckAvailability_0100
    * @tc.size      MEDIUM
    * @tc.type      FUNC
    * @tc.level     Level2
    */
    it('JSAPI_Function_CheckAvailability_0100', 0, function () {
        console.log("JSAPI_Function_CheckAvailability_0100 start");
        const auth = userAuth.getAuthenticator();
        let result = auth.checkAvailability("FACE_ONLY", "S2");
        console.log("JSAPI_Function_CheckAvailability_0100 result:" + result);
        expect(result).assertEqual(0);
        console.log("JSAPI_Function_CheckAvailability_0100 end");
    })
    /**
    * @tc.name      checkAvailability type=ALL
    * @tc.number    JSAPI_Function_CheckAvailability_0200
    * @tc.size      MEDIUM
    * @tc.type      FUNC
    * @tc.level     Level2
    */
    it('JSAPI_Function_CheckAvailability_0200', 0, function () {
        console.log("JSAPI_Function_CheckAvailability_0200 start");
        const auth = userAuth.getAuthenticator();
        let result = auth.checkAvailability("ALL", "S2");
        console.log("JSAPI_Function_CheckAvailability_0200 result:" + result);
        expect(result).assertEqual(0);
        console.log("JSAPI_Function_CheckAvailability_0200 end");
    })
    /**
    * @tc.name      checkAvailability type=null
    * @tc.number    JSAPI_Function_CheckAvailability_0300
    * @tc.size      MEDIUM
    * @tc.type      FUNC
    * @tc.level     Level2
    */
    it('JSAPI_Function_CheckAvailability_0300', 0, function () {
        console.log("JSAPI_Function_CheckAvailability_0300 start");
        const auth = userAuth.getAuthenticator();
        let result = auth.checkAvailability("", "S2");
        console.log("JSAPI_Function_CheckAvailability_0300 result:" + result);
        // AUTH_TYPE_NOT_SUPPORT
        expect(result).assertEqual(1);
        console.log("JSAPI_Function_CheckAvailability_0300 end");
    })
    /**
    * @tc.name      checkAvailability level=S1
    * @tc.number    JSAPI_Function_CheckAvailability_0400
    * @tc.size      MEDIUM
    * @tc.type      FUNC
    * @tc.level     Level2
    */
    it('JSAPI_Function_CheckAvailability_0400', 0, function () {
        console.log("JSAPI_Function_CheckAvailability_0400 start");
        const auth = userAuth.getAuthenticator();
        let result = auth.checkAvailability("FACE_ONLY", "S1");
        console.log("JSAPI_Function_CheckAvailability_0400 result:" + result);
        expect(result).assertEqual(0);
        console.log("JSAPI_Function_CheckAvailability_0400 end");
    })
    /**
    * @tc.name      checkAvailability level=S2
    * @tc.number    JSAPI_Function_CheckAvailability_0500
    * @tc.size      MEDIUM
    * @tc.type      FUNC
    * @tc.level     Level2
    */
    it('JSAPI_Function_CheckAvailability_0500', 0, function () {
        console.log("JSAPI_Function_CheckAvailability_0500 start");
        const auth = userAuth.getAuthenticator();
        let result = auth.checkAvailability("FACE_ONLY", "S2");
        console.log("JSAPI_Function_CheckAvailability_0500 result:" + result);
        expect(result).assertEqual(0);
        console.log("JSAPI_Function_CheckAvailability_0500 end");
    })
    /**
    * @tc.name      checkAvailability level=S3
    * @tc.number    JSAPI_Function_CheckAvailability_0600
    * @tc.size      MEDIUM
    * @tc.type      FUNC
    * @tc.level     Level2
    */
    it('JSAPI_Function_CheckAvailability_0600', 0, function () {
        console.log("JSAPI_Function_CheckAvailability_0600 start");
        const auth = userAuth.getAuthenticator();
        let result = auth.checkAvailability("FACE_ONLY", "S3");
        console.log("JSAPI_Function_CheckAvailability_0600 result:" + result);
        expect(result).assertEqual(0);
        console.log("JSAPI_Function_CheckAvailability_0600 end");
    })
    /**
    * @tc.name      checkAvailability level=S4
    * @tc.number    JSAPI_Function_CheckAvailability_0700
    * @tc.size      MEDIUM
    * @tc.type      FUNC
    * @tc.level     Level2
    */
    it('JSAPI_Function_CheckAvailability_0700', 0, function () {
        console.log("JSAPI_Function_CheckAvailability_0700 start");
        const auth = userAuth.getAuthenticator();
        let result = auth.checkAvailability("FACE_ONLY", "S4");
        console.log("JSAPI_Function_CheckAvailability_0700 result:" + result);
        expect(result).assertEqual(0);
        console.log("JSAPI_Function_CheckAvailability_0700 end");
    })
    /**
    * @tc.name      checkAvailability level=null
    * @tc.number    JSAPI_Function_CheckAvailability_0800
    * @tc.size      MEDIUM
    * @tc.type      FUNC
    * @tc.level     Level2
    */
    it('JSAPI_Function_CheckAvailability_0800', 0, function () {
        console.log("JSAPI_Function_CheckAvailability_0800 start");
        const auth = userAuth.getAuthenticator();
        let result = auth.checkAvailability("FACE_ONLY", "");
        console.log("JSAPI_Function_CheckAvailability_0800 result:" + result);
        // SECURE_LEVEL_NOT_SUPPORT
        expect(result).assertEqual(2);
        console.log("JSAPI_Function_CheckAvailability_0800 end");
    })
})