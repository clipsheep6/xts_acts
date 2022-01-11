import userAuth from '@ohos.userIAM.userAuth'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
var index = require('../default/pages/index/index.js');
/**
 * test case
 */
describe('userAuthPermissionTest', function () {
    beforeEach(function() {
    })
    afterEach(function() {
    })
    /**
    * @tc.name      execute_authentication_promise_no_permission
    * @tc.number    JSAPI_Function_Execute_1500
    * @tc.size      MEDIUM
    * @tc.type      FUNC
    * @tc.level     Level2
    */
    it('JSAPI_Function_Execute_1500', 0, function () {
        console.log("JSAPI_Function_Execute_1500 start");
        const auth = userAuth.getAuthenticator();
        var result = auth.execute("FACE_ONLY", "S2", function(data) {
            console.log("JSAPI_Function_Execute_1500 auth.execute:" + data);
        })
        expect(result).assertEqual(1);
        console.log("JSAPI_Function_Execute_1500 end");
    })
})