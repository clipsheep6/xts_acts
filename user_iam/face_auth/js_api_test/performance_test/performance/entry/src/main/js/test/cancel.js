import userAuth from '@ohos.userIAM.userAuth'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
/**
 * performance case
 */
describe('userAuthPerformanceTest', function () {
    beforeEach(function(){
    })
    afterEach(function(){
    })
    /**
    * @tc.name      cancel performance
    * @tc.number    JSAPI_Performance_Cancel_0100
    * @tc.size      MEDIUM
    * @tc.type      FUNC
    * @tc.level     Level2
    */
     it('JSAPI_Performance_Cancel_0100', 0, function (done) {
        console.log("JSAPI_Performance_Cancel_0100 start");
        const auth = userAuth.getAuthenticator();
        let allTime = 0;
        let count = 0;
        function callback(){
            if(count<=1000){
                console.log("JSAPI_Performance_Cancel_0100 count"+ ++count);
                auth.execute("FACE_ONLY", "S2").then(callback)
                let startDate = new Date();
                auth.cancel()
                let endDate = new Date();
                allTime += (endDate.getTime() - startDate.getTime());
            }else{
                console.log("JSAPI_Performance_Cancel_0100 performance allTime:" + allTime);
                console.log("JSAPI_Performance_Cancel_0100 performance avg" + (allTime/1000));
                expect((allTime/1000) < 2).assertTrue();
                console.log("JSAPI_Performance_Cancel_0100 end");
                setTimeout(function() {
                    done();
                }, 1);
            }
        }
        auth.execute("FACE_ONLY", "S2").then(callback)
        auth.cancel()
    })
})