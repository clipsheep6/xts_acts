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
    * @tc.name      off  FAILED
    * @tc.number    JSAPI_Function_Off_0100
    * @tc.size      MEDIUM
    * @tc.type      FUNC
    * @tc.level     Level2
    */
    it('JSAPI_Function_Off_0100', 0, function (done) {
        console.log("JSAPI_Function_Off_0100 start");
        const auth = userAuth.getAuthenticator();
        auth.off("tip8", function(data) {
            console.log("JSAPI_Function_Off_0100 off:" + data);
            // errorCode=FAILED
            expect(data).assertEqual(1);
            setTimeout(function() {
                done();
            }, 1);
        });
        console.log("JSAPI_Function_Off_0100 end");
    })
    /**
    * @tc.name      off  FAILED
    * @tc.number    JSAPI_Function_Off_0200
    * @tc.size      MEDIUM
    * @tc.type      FUNC
    * @tc.level     Level2
    */
    it('JSAPI_Function_Off_0200', 0, function (done) {
        console.log("JSAPI_Function_Off_0200 start");
        const auth = userAuth.getAuthenticator();
        auth.on("tip1", function(data) {
            console.log("JSAPI_Function_Off_0200 tip1 on CallBack");
        });
        auth.on("tip2", function(data) {
            console.log("JSAPI_Function_Off_0200 tip2 on CallBack");
        });
        auth.off("tip1", function(data) {
            console.log("JSAPI_Function_Off_0200 off:" + data);
            // errorCode=SUCCESS
            expect(data).assertEqual(0);
            setTimeout(function() {
                done();
            }, 1);
        });
        console.log("JSAPI_Function_Off_0200 end");
    })
})