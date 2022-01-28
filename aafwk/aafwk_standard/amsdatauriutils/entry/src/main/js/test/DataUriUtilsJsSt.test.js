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
import dataUriUtils from '@ohos.ability.datauriutils'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

describe('ActsDataUriUtilsTest', function () {

/*
* @tc.number: ACTS_GetId_0100
* @tc.name: GetId : Obtains the ID attached to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_GetId_0100', 0, function (done) {
        console.log('dataUriUtils getId start1');
        var result = dataUriUtils.getId("datauriutils:///com.ix.dataUriUtils/1221");
        console.log('dataUriUtils getId URI : ' + result);

        expect(typeof(result)).assertEqual("number");
        expect(result).assertEqual(1221);
        console.log('dataUriUtils getId_test start1 successful');
        done();
    })

/*
* @tc.number: ACTS_GetId_0200
* @tc.name: GetId : Obtains the ID attached to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_GetId_0200', 0, function (done) {
        console.log('dataUriUtils getId start2 ');
        var result = dataUriUtils.getId("datauriutils:///com.ix.dataUriUtils1221");
        console.log('dataUriUtils getId URI : ' + result);

        expect(typeof(result)).assertEqual("number");
        expect(result).assertEqual(-1);
        console.log('dataUriUtils getId_test start2 successful ');

        done();
    })

/*
* @tc.number: ACTS_GetId_0300
* @tc.name: GetId : Obtains the ID attached to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_GetId_0300', 0, function (done) {
        console.log('dataUriUtils getId start3 ');
        var result = dataUriUtils.getId("datauriutils:///com.ix.dataUriUtils/11234567890");
        console.log('dataUriUtils getId URI : ' + result);

        expect(typeof(result)).assertEqual("number");
        expect(result).assertEqual(11234567890);
        console.log('dataUriUtils getId_test start3 successful ');

        done();
    })

/*
* @tc.number: ACTS_GetId_0400
* @tc.name: GetId : Obtains the ID attached to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_GetId_0400', 0, function (done) {
        console.log('dataUriUtils getId start4 ');
        var result = dataUriUtils.getId("datauriutils:///com.ix.dataUriUtils");
        console.log('dataUriUtils getId URI : ' + result);

        expect(typeof(result)).assertEqual("number");
        expect(result).assertEqual(-1);
        console.log('dataUriUtils getId_test start4 successful ');

        done();
    })

/*
* @tc.number: ACTS_GetId_0500
* @tc.name: GetId : Obtains the ID attached to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_GetId_0500', 0, function (done) {
        console.log('dataUriUtils getId start5 ');
        var result = dataUriUtils.getId("datauriutils:///com.ix.dataUriUtils/-777");
        console.log('dataUriUtils getId URI : ' + result);//-777

        expect(typeof(result)).assertEqual("number");
        expect(result).assertEqual(-777);
        console.log('dataUriUtils getId_test start5 successful ');

        done();
    })

/*
* @tc.number: ACTS_GetId_0600
* @tc.name: GetId : Obtains the ID attached to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_GetId_0600', 0, function (done) {
        console.log('dataUriUtils getId start6');
        try {
            var result = dataUriUtils.getId(123456);
            console.log('dataUriUtils getId URI : ' + result);
            expect(result).assertEqual(-1);
        } catch (error) {
            console.log('dataUriUtils getId start6 catch error : ' + error);
        }
        console.log('dataUriUtils getId_test start6 successful');
        done();
    })

/*
* @tc.number: ACTS_GetId_0700
* @tc.name: GetId : Obtains the ID attached to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_GetId_0700', 0, function (done) {
        console.log('dataUriUtils getId start7');
        var result = dataUriUtils.getId("datauriutils:///com.ix.dataUriUtils/abcd");
        console.log('dataUriUtils getId URI : ' + result);

        expect(result).assertEqual(-1);
        console.log('dataUriUtils getId_test start7 successful');
        done();
    })

/*
* @tc.number: ACTS_GetId_0800
* @tc.name: GetId : Obtains the ID attached to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_GetId_0800', 0, function (done) {
        console.log('dataUriUtils getId start8');
        var result = dataUriUtils.getId("datauriutils:///com.ix.dataUriUtils/");
        console.log('dataUriUtils getId URI : ' + result);

        expect(result).assertEqual(-1);
        console.log('dataUriUtils getId_test start8 successful');
        done();
    })

/*
* @tc.number: ACTS_GetId_0900
* @tc.name: GetId : Obtains the ID attached to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_GetId_0900', 0, function (done) {
        console.log('dataUriUtils getId start9 2034');
        try {
            var result = dataUriUtils.getId(undefined);
            console.log('dataUriUtils getId URI : ' + result);
            expect(result).assertEqual(-1);
        } catch (error) {
            console.log('dataUriUtils getId start9 catch error : ' + error);
        }
        console.log('dataUriUtils getId_test start9 successful');
        done();
    })

/*
* @tc.number: ACTS_GetId_1000
* @tc.name: GetId : Obtains the ID attached to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_GetId_1000', 0, function (done) {
        console.log('dataUriUtils getId start10');
        var result = dataUriUtils.getId("com.ix.dataUriUtils1221");
        console.log('dataUriUtils getId URI : ' + result);

        expect(result).assertEqual(-1);
        console.log('dataUriUtils getId_test start10 successful');
        done();
    })

/*
* @tc.number: ACTS_AttachId_0100
* @tc.name: Attaches the given ID to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_AttachId_0100',0, function (done) {
        console.log('dataUriUtils attachId start1 ');
        var idint = 1122;
        var result = dataUriUtils.attachId("datauriutils:///com.ix.dataUriUtils",idint);
        console.log('dataUriUtils attachId URI :' + result)

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils/1122");
        console.log('dataUriUtils attachId_test start1 successful ');

        done();
    })

/*
* @tc.number: ACTS_AttachId_0200
* @tc.name: Attaches the given ID to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_AttachId_0200',0, function (done) {
        console.log('dataUriUtils attachId start2 ');
        var idint = 0;
        var result = dataUriUtils.attachId("datauriutils:///com.ix.dataUriUtils/777",idint);
        console.log('dataUriUtils attachId URI :' + result)

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils/777/0");
        console.log('dataUriUtils attachId_test start2 successful ');

        done();
    })

/*
* @tc.number: ACTS_AttachId_0300
* @tc.name: Attaches the given ID to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_AttachId_0300',0, function (done) {
        console.log('dataUriUtils attachId start3 ');
        var idint = 456789;
        var result = dataUriUtils.attachId("datauriutils:///com.ix.dataUriUtils/123",idint);
        console.log('dataUriUtils attachId URI :' + result)

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils/123/456789");
        console.log('dataUriUtils attachId_test start3 successful ');

        done();
    })

/*
* @tc.number: ACTS_AttachId_0400
* @tc.name: Attaches the given ID to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_AttachId_0400',0, function (done) {
        console.log('dataUriUtils attachId start4 ');
        var idint = 123456789011;
        var result = dataUriUtils.attachId("datauriutils:///com.ix.dataUriUtils",idint);
        console.log('dataUriUtils attachId URI :' + result)

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils/123456789011");
        console.log('dataUriUtils attachId_test start4 successful ');

        done();
    })

/*
* @tc.number: ACTS_AttachId_0500
* @tc.name: Attaches the given ID to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_AttachId_0500',0, function (done) {
        console.log('dataUriUtils attachId start5 ');
        var idint = -1;
        var result = dataUriUtils.attachId("datauriutils:///com.ix.dataUriUtils",idint);
        console.log('dataUriUtils attachId URI :' + result)

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils/-1");
        console.log('dataUriUtils attachId_test start5 successful ');

        done();
    })

/*
* @tc.number: ACTS_AttachId_0600
* @tc.name: Attaches the given ID to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_AttachId_0600',0, function (done) {
        console.log('dataUriUtils attachId start6 ');
        try {
            var idint = "1122";
            var result = dataUriUtils.attachId("datauriutils:///com.ix.dataUriUtils",idint);
            console.log('dataUriUtils attachId URI :' + result)  
            expect(result).assertEqual(-1);      
        } catch (error) {
            console.log('dataUriUtils attachId start6 catch error :' + error)
        }
        console.log('dataUriUtils attachId_test start6 successful ');

        done();
    })

/*
* @tc.number: ACTS_AttachId_0700
* @tc.name: Attaches the given ID to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_AttachId_0700',0, function (done) {
        console.log('dataUriUtils attachId start7 ');
        try {
            var idint = 1122;
            var result = dataUriUtils.attachId(123456,idint);
            console.log('dataUriUtils attachId URI :' + result)
            expect(result).assertEqual(-1);
        } catch (error) {
            console.log('dataUriUtils attachId start7 catch error :' + error)
        }
        console.log('dataUriUtils attachId_test start7 successful ');

        done();
    })

/*
* @tc.number: ACTS_AttachId_0800
* @tc.name: Attaches the given ID to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_AttachId_0800',0, function (done) {
        console.log('dataUriUtils attachId start8 ');
        try {
            var idint = 1122;
            var result = dataUriUtils.attachId("datauriutils:///com.ix.dataUriUtils/",idint);
            console.log('dataUriUtils attachId URI :' + result)
    
            expect(typeof(result)).assertEqual("string");
            expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils/1122/");            
        } catch (error) {
            console.log('dataUriUtils attachId start8 catch error :' + error)
        }
        console.log('dataUriUtils attachId_test start8 successful ');

        done();
    })

/*
* @tc.number: ACTS_AttachId_0900
* @tc.name: Attaches the given ID to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_AttachId_0900',0, function (done) {
        console.log('dataUriUtils attachId start9 ');
        try {
            var idint = 1122;
            var result = dataUriUtils.attachId(undefined,idint);
            console.log('dataUriUtils attachId URI :' + result)
            expect(result).assertEqual(-1);            
        } catch (error) {
            console.log('dataUriUtils attachId catch error :' + error)
        }
        console.log('dataUriUtils attachId_test start9 successful ');

        done();
    })

/*
* @tc.number: ACTS_AttachId_1000
* @tc.name: Attaches the given ID to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_AttachId_1000',0, function (done) {
        console.log('dataUriUtils attachId start10 ');
        try {
            var result = dataUriUtils.attachId("datauriutils:///com.ix.dataUriUtils",undefined);
            console.log('dataUriUtils attachId URI start10:' + result)
            expect(result).assertEqual(-1);
        } catch (error) {
            console.log('dataUriUtils attachId start10 catch error :' + error)
        }
        console.log('dataUriUtils attachId_test start10 successful ');

        done();
    })

/*
* @tc.number: ACTS_AttachId_1100
* @tc.name: Attaches the given ID to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_AttachId_1100',0, function (done) {
        console.log('dataUriUtils attachId start11 ');
        var idint = 1122;
        var result = dataUriUtils.attachId("com.ix.dataUriUtils",idint);
        console.log('dataUriUtils attachId URI :' + result)

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("com.ix.dataUriUtils/1122");
        console.log('dataUriUtils attachId_test start11 successful ');

        done();
    })


/*
* @tc.number: ACTS_DeleteId_0100
* @tc.name: Deletes the ID from the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_DeleteId_0100',0, function (done) {
        console.log('dataUriUtils deleteId start1 ');
        var result = dataUriUtils.deleteId("datauriutils:///com.ix.dataUriUtils");
        console.log('dataUriUtils deleteId URI : ' + result);

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///");
        console.log('dataUriUtils deleteId_test start1 successful ');

        done();
    })

/*
* @tc.number: ACTS_DeleteId_0200
* @tc.name: Deletes the ID from the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_DeleteId_0200',0, function (done) {
        console.log('dataUriUtils deleteId start2 ');
        var result = dataUriUtils.deleteId("datauriutils:///com.ix.dataUriUtils/1122");
        console.log('dataUriUtils deleteId URI : ' + result);

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///");
        console.log('dataUriUtils deleteId_test start2 successful ');

        done();
    })

/*
* @tc.number: ACTS_DeleteId_0300
* @tc.name: Deletes the ID from the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_DeleteId_0300',0, function (done) {
        console.log('dataUriUtils deleteId start3 ');
        var result = dataUriUtils.deleteId("datauriutils:///com.ix.dataUriUtils1122");
        console.log('dataUriUtils deleteId URI : ' + result);

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:");
        console.log('dataUriUtils deleteId_test start3 successful ');

        done();
    })

/*
* @tc.number: ACTS_DeleteId_0400
* @tc.name: Deletes the ID from the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_DeleteId_0400',0, function (done) {
        console.log('dataUriUtils deleteId start4 ');
        var result = dataUriUtils.deleteId("datauriutils:///com.ix.dataUriUtils/-1");
        console.log('dataUriUtils deleteId URI : ' + result);

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils");
        console.log('dataUriUtils deleteId_test start4 successful ');

        done();
    })

/*
* @tc.number: ACTS_DeleteId_0500
* @tc.name: Deletes the ID from the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_DeleteId_0500',0, function (done) {
        console.log('dataUriUtils deleteId start5 ');
        var result = dataUriUtils.deleteId("datauriutils:///com.ix.dataUriUtils/1122/2211");
        console.log('dataUriUtils deleteId URI : ' + result);

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils/1122");
        console.log('dataUriUtils deleteId_test start5 successful ');

        done();
    })

/*
* @tc.number: ACTS_DeleteId_0600
* @tc.name: Deletes the ID from the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_DeleteId_0600',0, function (done) {
        console.log('dataUriUtils deleteId start6 ');
        try {
            var result = dataUriUtils.deleteId(123456);
            console.log('dataUriUtils deleteId URI : ' + result);
            expect(result).assertEqual(-1);
        } catch (error) {
            console.log('dataUriUtils deleteId start6 catch error : ' + error);
        }
        console.log('dataUriUtils deleteId_test start6 successful ');
        done();
    })

/*
* @tc.number: ACTS_DeleteId_0700
* @tc.name: Deletes the ID from the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_DeleteId_0700',0, function (done) {
        console.log('dataUriUtils deleteId start7 ');
        var result = dataUriUtils.deleteId("datauriutils:///com.ix.dataUriUtils/abcd");
        console.log('dataUriUtils deleteId URI : ' + result);

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils");
        console.log('dataUriUtils deleteId_test start7 successful ');

        done();
    })

/*
* @tc.number: ACTS_DeleteId_0800
* @tc.name: Deletes the ID from the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_DeleteId_0800',0, function (done) {
        console.log('dataUriUtils deleteId start8 ');
        try {
            var result = dataUriUtils.deleteId(undefined);
            console.log('dataUriUtils deleteId URI : ' + result);
            expect(result).assertEqual(-1);
        } catch (error) {
            console.log('dataUriUtils deleteId start8 catch error : ' + error);
        }
        console.log('dataUriUtils deleteId_test start8 successful ');
        done();
    })

/*
* @tc.number: ACTS_DeleteId_0900
* @tc.name: Deletes the ID from the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_DeleteId_0900',0, function (done) {
        console.log('dataUriUtils deleteId start9 ');
        var result = dataUriUtils.deleteId("datauriutils:///com.ix.dataUriUtils/");
        console.log('dataUriUtils deleteId URI : ' + result);

        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils");
        console.log('dataUriUtils deleteId_test start9 successful ');

        done();
    })

/*
* @tc.number: ACTS_DeleteId_1000
* @tc.name: Deletes the ID from the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_DeleteId_1000',0, function (done) {
        console.log('dataUriUtils deleteId start10 ');
        var result = dataUriUtils.deleteId("com.ix.dataUriUtils");
        console.log('dataUriUtils deleteId URI : ' + result);

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual(-1);
        console.log('dataUriUtils deleteId_test start10 successful ');

        done();
    })

/*
* @tc.number: ACTS_UpdateId_0100
* @tc.name: Updates the ID in the specified dataUri.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_UpdateId_0100',0, function (done) {
        console.log('dataUriUtils updateId start1 ');
        var idint = 1122;
        var result = dataUriUtils.updateId("datauriutils:///com.ix.dataUriUtils",idint);
        console.log('updateId updateId URI : ' + result);

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual(-1);
        console.log('dataUriUtils updateId_test start1 successful ');

        done();
    })

/*
* @tc.number: ACTS_UpdateId_0200
* @tc.name: Updates the ID in the specified dataUri.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_UpdateId_0200',0, function (done) {
        console.log('dataUriUtils updateId start2 ');
        var idint = 1122;
        var result = dataUriUtils.updateId("datauriutils:///com.ix.dataUriUtils/",idint)
        console.log('updateId updateId URI : ' + result);

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils/1122");
        console.log('dataUriUtils updateId_test start2 successful ');

        done();
    })

/*
* @tc.number: ACTS_UpdateId_0300
* @tc.name: Updates the ID in the specified dataUri.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_UpdateId_0300',0, function (done) {
        console.log('dataUriUtils updateId start3 ');
        var idint = 3344;
        var result = dataUriUtils.updateId("datauriutils:///com.ix.dataUriUtils/-1",idint)
        console.log('updateId updateId URI : ' + result);

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils/3344");
        console.log('dataUriUtils updateId_test start3 successful ');

        done();
    })

/*
* @tc.number: ACTS_UpdateId_0400
* @tc.name: Updates the ID in the specified dataUri.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_UpdateId_0400',0, function (done) {
        console.log('dataUriUtils updateId start4 ');
        var idint = 5566;
        var result = dataUriUtils.updateId("datauriutils:///com.ix.dataUriUtils/123456789011",idint)
        console.log('updateId updateId URI : ' + result);

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils/5566");
        console.log('dataUriUtils updateId_test start4 successful ');

        done();
    })

/*
* @tc.number: ACTS_UpdateId_0500
* @tc.name: Updates the ID in the specified dataUri.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_UpdateId_0500',0, function (done) {
        console.log('dataUriUtils updateId start5 ');

        var idint = 0;
        expect(typeof(idint)).assertEqual("number");
        console.log('dataUriUtils updateId start666 ');

        var result = dataUriUtils.updateId("datauriutils:///com.ix.dataUriUtils/1122",idint)
        console.log('updateId updateId URI : ' + result);
        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils/0");
        done();
    })

/*
* @tc.number: ACTS_UpdateId_0600
* @tc.name: Updates the ID in the specified dataUri.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_UpdateId_0600',0, function (done) {
        console.log('dataUriUtils updateId start6 ');
        try {
            var idint = "3344";
            var result = dataUriUtils.updateId("datauriutils:///com.ix.dataUriUtils/1122",idint)
            console.log('updateId updateId URI : ' + result);
            expect(result).assertEqual(-1);
        } catch (error) {
            console.log('updateId updateId catch error : ' + error);
        }
        console.log('dataUriUtils updateId_test start6 successful ');

        done();
    })

/*
* @tc.number: ACTS_UpdateId_0700
* @tc.name: Updates the ID in the specified dataUri.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_UpdateId_0700',0, function (done) {
        console.log('dataUriUtils updateId start7 ');
        try {
            var idint = 3344;
            var result = dataUriUtils.updateId(123456,idint)
            console.log('updateId updateId URI : ' + result);
            expect(result).assertEqual(-1);
        } catch (error) {
            console.log('dataUriUtils updateId_test start7 catch error: ' + error);
        }
        console.log('dataUriUtils updateId_test start7 successful '); 
        done();
    })

/*
* @tc.number: ACTS_UpdateId_0800
* @tc.name: Updates the ID in the specified dataUri.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_UpdateId_0800',0, function (done) {
        console.log('dataUriUtils updateId start8 ');
        var idint = 3344;
        var result = dataUriUtils.updateId("datauriutils:///com.ix.dataUriUtils/abcd",idint)
        console.log('updateId updateId URI : ' + result);

        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils/3344");
        console.log('dataUriUtils updateId_test start8 successful ');

        done();
    })

/*
* @tc.number: ACTS_UpdateId_0900
* @tc.name: Updates the ID in the specified dataUri.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_UpdateId_0900',0, function (done) {
        console.log('dataUriUtils updateId start9 ');
        try {
            var idint = 3344;
            var result = dataUriUtils.updateId(undefined,idint)
            console.log('updateId updateId URI : ' + result);
            expect(result).assertEqual(-1);
        } catch (error) {
            console.log('dataUriUtils updateId_test start9 catch error: ' + error); 
        }
        console.log('dataUriUtils updateId_test start9 successful ');
        done();
    })

/*
* @tc.number: ACTS_UpdateId_1000
* @tc.name: Updates the ID in the specified dataUri.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_UpdateId_1000',0, function (done) {
        console.log('dataUriUtils updateId start10 ');
        try {
            var idint = undefined;
            var result = dataUriUtils.updateId("datauriutils:///com.ix.dataUriUtils/1122",idint)
            console.log('updateId updateId URI : ' + result);
            expect(result).assertEqual(-1);
        } catch (error) {
            console.log('dataUriUtils updateId_test start10 catch error: ' + error);  
        }
        console.log('dataUriUtils updateId_test start10 successful '); 
        done();
    })

/*
* @tc.number: ACTS_UpdateId_1100
* @tc.name: Updates the ID in the specified dataUri.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_UpdateId_1100',0, function (done) {
        console.log('dataUriUtils updateId start11 ');
        var idint = 1122;
        var result = dataUriUtils.updateId("com.ix.dataUriUtils",idint);
        console.log('updateId updateId URI : ' + result);

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual(-1);
        console.log('dataUriUtils updateId_test start11 successful ');

        done();
    })
})
