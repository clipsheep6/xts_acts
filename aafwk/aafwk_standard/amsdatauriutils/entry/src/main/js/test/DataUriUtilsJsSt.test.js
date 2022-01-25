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
* @tc.number: ACTS_GetIdSync_0100
* @tc.name: GetIdSync : Obtains the ID attached to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_GetIdSync_0100', 0, function (done) {
        console.log('dataUriUtils getIdSync start1');
        var result = dataUriUtils.getIdSync("datauriutils:///com.ix.dataUriUtils/1221");
        console.log('dataUriUtils getIdSync URI : ' + result);

        expect(typeof(result)).assertEqual("number");
        expect(result).assertEqual(1221);
        console.log('dataUriUtils getIdSync_test start1 successful');
        done();
    })

/*
* @tc.number: ACTS_GetIdSync_0200
* @tc.name: GetIdSync : Obtains the ID attached to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_GetIdSync_0200', 0, function (done) {
        console.log('dataUriUtils getIdSync start2 ');
        var result = dataUriUtils.getIdSync("datauriutils:///com.ix.dataUriUtils1221");
        console.log('dataUriUtils getIdSync URI : ' + result);

        expect(typeof(result)).assertEqual("number");
        expect(result).assertEqual(-1);
        console.log('dataUriUtils getIdSync_test start2 successful ');

        done();
    })

/*
* @tc.number: ACTS_GetIdSync_0300
* @tc.name: GetIdSync : Obtains the ID attached to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_GetIdSync_0300', 0, function (done) {
        console.log('dataUriUtils getIdSync start3 ');
        var result = dataUriUtils.getIdSync("datauriutils:///com.ix.dataUriUtils/11234567890");
        console.log('dataUriUtils getIdSync URI : ' + result);

        expect(typeof(result)).assertEqual("number");
        expect(result).assertEqual(11234567890);
        console.log('dataUriUtils getIdSync_test start3 successful ');

        done();
    })

/*
* @tc.number: ACTS_GetIdSync_0400
* @tc.name: GetIdSync : Obtains the ID attached to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_GetIdSync_0400', 0, function (done) {
        console.log('dataUriUtils getIdSync start4 ');
        var result = dataUriUtils.getIdSync("datauriutils:///com.ix.dataUriUtils");
        console.log('dataUriUtils getIdSync URI : ' + result);

        expect(typeof(result)).assertEqual("number");
        expect(result).assertEqual(-1);
        console.log('dataUriUtils getIdSync_test start4 successful ');

        done();
    })

/*
* @tc.number: ACTS_GetIdSync_0500
* @tc.name: GetIdSync : Obtains the ID attached to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_GetIdSync_0500', 0, function (done) {
        console.log('dataUriUtils getIdSync start5 ');
        var result = dataUriUtils.getIdSync("datauriutils:///com.ix.dataUriUtils/-777");
        console.log('dataUriUtils getIdSync URI : ' + result);//-777

        expect(typeof(result)).assertEqual("number");
        expect(result).assertEqual(-777);
        console.log('dataUriUtils getIdSync_test start5 successful ');

        done();
    })

/*
* @tc.number: ACTS_GetIdSync_0600
* @tc.name: GetIdSync : Obtains the ID attached to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_GetIdSync_0600', 0, function (done) {
        console.log('dataUriUtils getIdSync start6');
        try {
            var result = dataUriUtils.getIdSync(123456);
            console.log('dataUriUtils getIdSync URI : ' + result);
            expect(result).assertEqual(-1);
        } catch (error) {
            console.log('dataUriUtils getIdSync start6 catch error : ' + error);
        }
        console.log('dataUriUtils getIdSync_test start6 successful');
        done();
    })

/*
* @tc.number: ACTS_GetIdSync_0700
* @tc.name: GetIdSync : Obtains the ID attached to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_GetIdSync_0700', 0, function (done) {
        console.log('dataUriUtils getIdSync start7');
        var result = dataUriUtils.getIdSync("datauriutils:///com.ix.dataUriUtils/abcd");
        console.log('dataUriUtils getIdSync URI : ' + result);

        expect(result).assertEqual(-1);
        console.log('dataUriUtils getIdSync_test start7 successful');
        done();
    })

/*
* @tc.number: ACTS_GetIdSync_0800
* @tc.name: GetIdSync : Obtains the ID attached to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_GetIdSync_0800', 0, function (done) {
        console.log('dataUriUtils getIdSync start8');
        var result = dataUriUtils.getIdSync("datauriutils:///com.ix.dataUriUtils/");
        console.log('dataUriUtils getIdSync URI : ' + result);

        expect(result).assertEqual(-1);
        console.log('dataUriUtils getIdSync_test start8 successful');
        done();
    })

/*
* @tc.number: ACTS_GetIdSync_0900
* @tc.name: GetIdSync : Obtains the ID attached to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_GetIdSync_0900', 0, function (done) {
        console.log('dataUriUtils getIdSync start9 2034');
        try {
            var result = dataUriUtils.getIdSync(undefined);
            console.log('dataUriUtils getIdSync URI : ' + result);
            expect(result).assertEqual(-1);
        } catch (error) {
            console.log('dataUriUtils getIdSync start9 catch error : ' + error);
        }
        console.log('dataUriUtils getIdSync_test start9 successful');
        done();
    })

/*
* @tc.number: ACTS_AttachIdSync_0100
* @tc.name: Attaches the given ID to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_AttachIdSync_0100',0, function (done) {
        console.log('dataUriUtils attachIdSync start1 ');
        var idint = 1122;
        var result = dataUriUtils.attachIdSync("datauriutils:///com.ix.dataUriUtils",idint);
        console.log('dataUriUtils attachIdSync URI :' + result)

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils/1122");
        console.log('dataUriUtils attachIdSync_test start1 successful ');

        done();
    })

/*
* @tc.number: ACTS_AttachIdSync_0200
* @tc.name: Attaches the given ID to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_AttachIdSync_0200',0, function (done) {
        console.log('dataUriUtils attachIdSync start2 ');
        var idint = 0;
        var result = dataUriUtils.attachIdSync("datauriutils:///com.ix.dataUriUtils/777",idint);
        console.log('dataUriUtils attachIdSync URI :' + result)

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils/777/0");
        console.log('dataUriUtils attachIdSync_test start2 successful ');

        done();
    })

/*
* @tc.number: ACTS_AttachIdSync_0300
* @tc.name: Attaches the given ID to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_AttachIdSync_0300',0, function (done) {
        console.log('dataUriUtils attachIdSync start3 ');
        var idint = 456789;
        var result = dataUriUtils.attachIdSync("datauriutils:///com.ix.dataUriUtils/123",idint);
        console.log('dataUriUtils attachIdSync URI :' + result)

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils/123/456789");
        console.log('dataUriUtils attachIdSync_test start3 successful ');

        done();
    })

/*
* @tc.number: ACTS_AttachIdSync_0400
* @tc.name: Attaches the given ID to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_AttachIdSync_0400',0, function (done) {
        console.log('dataUriUtils attachIdSync start4 ');
        var idint = 123456789011;
        var result = dataUriUtils.attachIdSync("datauriutils:///com.ix.dataUriUtils",idint);
        console.log('dataUriUtils attachIdSync URI :' + result)

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils/123456789011");
        console.log('dataUriUtils attachIdSync_test start4 successful ');

        done();
    })

/*
* @tc.number: ACTS_AttachIdSync_0500
* @tc.name: Attaches the given ID to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_AttachIdSync_0500',0, function (done) {
        console.log('dataUriUtils attachIdSync start5 ');
        var idint = -1;
        var result = dataUriUtils.attachIdSync("datauriutils:///com.ix.dataUriUtils",idint);
        console.log('dataUriUtils attachIdSync URI :' + result)

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils/-1");
        console.log('dataUriUtils attachIdSync_test start5 successful ');

        done();
    })

/*
* @tc.number: ACTS_AttachIdSync_0600
* @tc.name: Attaches the given ID to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_AttachIdSync_0600',0, function (done) {
        console.log('dataUriUtils attachIdSync start6 ');
        try {
            var idint = "1122";
            var result = dataUriUtils.attachIdSync("datauriutils:///com.ix.dataUriUtils",idint);
            console.log('dataUriUtils attachIdSync URI :' + result)  
            expect(result).assertEqual(-1);      
        } catch (error) {
            console.log('dataUriUtils attachIdSync start6 catch error :' + error)
        }
        console.log('dataUriUtils attachIdSync_test start6 successful ');

        done();
    })

/*
* @tc.number: ACTS_AttachIdSync_0700
* @tc.name: Attaches the given ID to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_AttachIdSync_0700',0, function (done) {
        console.log('dataUriUtils attachIdSync start7 ');
        try {
            var idint = 1122;
            var result = dataUriUtils.attachIdSync(123456,idint);
            console.log('dataUriUtils attachIdSync URI :' + result)
            expect(result).assertEqual(-1);
        } catch (error) {
            console.log('dataUriUtils attachIdSync start7 catch error :' + error)
        }
        console.log('dataUriUtils attachIdSync_test start7 successful ');

        done();
    })

/*
* @tc.number: ACTS_AttachIdSync_0800
* @tc.name: Attaches the given ID to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_AttachIdSync_0800',0, function (done) {
        console.log('dataUriUtils attachIdSync start8 ');
        try {
            var idint = 1122;
            var result = dataUriUtils.attachIdSync("datauriutils:///com.ix.dataUriUtils/",idint);
            console.log('dataUriUtils attachIdSync URI :' + result)
    
            expect(typeof(result)).assertEqual("string");
            expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils/1122/");            
        } catch (error) {
            console.log('dataUriUtils attachIdSync start8 catch error :' + error)
        }
        console.log('dataUriUtils attachIdSync_test start8 successful ');

        done();
    })

/*
* @tc.number: ACTS_AttachIdSync_0900
* @tc.name: Attaches the given ID to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_AttachIdSync_0900',0, function (done) {
        console.log('dataUriUtils attachIdSync start9 ');
        try {
            var idint = 1122;
            var result = dataUriUtils.attachIdSync(undefined,idint);
            console.log('dataUriUtils attachIdSync URI :' + result)
            expect(result).assertEqual(-1);            
        } catch (error) {
            console.log('dataUriUtils attachIdSync catch error :' + error)
        }
        console.log('dataUriUtils attachIdSync_test start9 successful ');

        done();
    })

/*
* @tc.number: ACTS_AttachIdSync_1000
* @tc.name: Attaches the given ID to the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_AttachIdSync_1000',0, function (done) {
        console.log('dataUriUtils attachIdSync start10 ');
        try {
            var result = dataUriUtils.attachIdSync("datauriutils:///com.ix.dataUriUtils",undefined);
            console.log('dataUriUtils attachIdSync URI start10:' + result)
            expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils");
        } catch (error) {
            console.log('dataUriUtils attachIdSync start10 catch error :' + error)
        }
        console.log('dataUriUtils attachIdSync_test start10 successful ');

        done();
    })

/*
* @tc.number: ACTS_DeleteIdSync_0100
* @tc.name: Deletes the ID from the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_DeleteIdSync_0100',0, function (done) {
        console.log('dataUriUtils deleteIdSync start1 ');
        var result = dataUriUtils.deleteIdSync("datauriutils:///com.ix.dataUriUtils");
        console.log('dataUriUtils deleteIdSync URI : ' + result);

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils");
        console.log('dataUriUtils deleteIdSync_test start1 successful ');

        done();
    })

/*
* @tc.number: ACTS_DeleteIdSync_0200
* @tc.name: Deletes the ID from the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_DeleteIdSync_0200',0, function (done) {
        console.log('dataUriUtils deleteIdSync start2 ');
        var result = dataUriUtils.deleteIdSync("datauriutils:///com.ix.dataUriUtils/1122");
        console.log('dataUriUtils deleteIdSync URI : ' + result);

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils");
        console.log('dataUriUtils deleteIdSync_test start2 successful ');

        done();
    })

/*
* @tc.number: ACTS_DeleteIdSync_0300
* @tc.name: Deletes the ID from the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_DeleteIdSync_0300',0, function (done) {
        console.log('dataUriUtils deleteIdSync start3 ');
        var result = dataUriUtils.deleteIdSync("datauriutils:///com.ix.dataUriUtils1122");
        console.log('dataUriUtils deleteIdSync URI : ' + result);

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils1122");
        console.log('dataUriUtils deleteIdSync_test start3 successful ');

        done();
    })

/*
* @tc.number: ACTS_DeleteIdSync_0400
* @tc.name: Deletes the ID from the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_DeleteIdSync_0400',0, function (done) {
        console.log('dataUriUtils deleteIdSync start4 ');
        var result = dataUriUtils.deleteIdSync("datauriutils:///com.ix.dataUriUtils/-1");
        console.log('dataUriUtils deleteIdSync URI : ' + result);

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils");
        console.log('dataUriUtils deleteIdSync_test start4 successful ');

        done();
    })

/*
* @tc.number: ACTS_DeleteIdSync_0500
* @tc.name: Deletes the ID from the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_DeleteIdSync_0500',0, function (done) {
        console.log('dataUriUtils deleteIdSync start5 ');
        var result = dataUriUtils.deleteIdSync("datauriutils:///com.ix.dataUriUtils/1122/2211");
        console.log('dataUriUtils deleteIdSync URI : ' + result);

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils/1122");
        console.log('dataUriUtils deleteIdSync_test start5 successful ');

        done();
    })

/*
* @tc.number: ACTS_DeleteIdSync_0600
* @tc.name: Deletes the ID from the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_DeleteIdSync_0600',0, function (done) {
        console.log('dataUriUtils deleteIdSync start6 ');
        try {
            var result = dataUriUtils.deleteIdSync(123456);
            console.log('dataUriUtils deleteIdSync URI : ' + result);
            expect(result).assertEqual(-1);
        } catch (error) {
            console.log('dataUriUtils deleteIdSync start6 catch error : ' + error);
        }
        console.log('dataUriUtils deleteIdSync_test start6 successful ');
        done();
    })

/*
* @tc.number: ACTS_DeleteIdSync_0700
* @tc.name: Deletes the ID from the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_DeleteIdSync_0700',0, function (done) {
        console.log('dataUriUtils deleteIdSync start7 ');
        var result = dataUriUtils.deleteIdSync("datauriutils:///com.ix.dataUriUtils/abcd");
        console.log('dataUriUtils deleteIdSync URI : ' + result);

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils/abcd");
        console.log('dataUriUtils deleteIdSync_test start7 successful ');

        done();
    })

/*
* @tc.number: ACTS_DeleteIdSync_0800
* @tc.name: Deletes the ID from the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_DeleteIdSync_0800',0, function (done) {
        console.log('dataUriUtils deleteIdSync start8 ');
        try {
            var result = dataUriUtils.deleteIdSync(undefined);
            console.log('dataUriUtils deleteIdSync URI : ' + result);
            expect(result).assertEqual(-1);
        } catch (error) {
            console.log('dataUriUtils deleteIdSync start8 catch error : ' + error);
        }
        console.log('dataUriUtils deleteIdSync_test start8 successful ');
        done();
    })

/*
* @tc.number: ACTS_DeleteIdSync_0900
* @tc.name: Deletes the ID from the end of the path component of the given URI.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_DeleteIdSync_0900',0, function (done) {
        console.log('dataUriUtils deleteIdSync start9 ');
        var result = dataUriUtils.deleteIdSync("datauriutils:///com.ix.dataUriUtils/");
        console.log('dataUriUtils deleteIdSync URI : ' + result);

        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils/");
        console.log('dataUriUtils deleteIdSync_test start9 successful ');

        done();
    })

/*
* @tc.number: ACTS_UpdateIdSync_0100
* @tc.name: Updates the ID in the specified dataUri.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_UpdateIdSync_0100',0, function (done) {
        console.log('dataUriUtils updateIdSync start1 ');
        var idint = 1122;
        var result = dataUriUtils.updateIdSync("datauriutils:///com.ix.dataUriUtils",idint);
        console.log('updateIdSync updateIdSync URI : ' + result);

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils");
        console.log('dataUriUtils updateIdSync_test start1 successful ');

        done();
    })

/*
* @tc.number: ACTS_UpdateIdSync_0200
* @tc.name: Updates the ID in the specified dataUri.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_UpdateIdSync_0200',0, function (done) {
        console.log('dataUriUtils updateIdSync start2 ');
        var idint = 1122;
        var result = dataUriUtils.updateIdSync("datauriutils:///com.ix.dataUriUtils/",idint)
        console.log('updateIdSync updateIdSync URI : ' + result);

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils/");
        console.log('dataUriUtils updateIdSync_test start2 successful ');

        done();
    })

/*
* @tc.number: ACTS_UpdateIdSync_0300
* @tc.name: Updates the ID in the specified dataUri.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_UpdateIdSync_0300',0, function (done) {
        console.log('dataUriUtils updateIdSync start3 ');
        var idint = 3344;
        var result = dataUriUtils.updateIdSync("datauriutils:///com.ix.dataUriUtils/-1",idint)
        console.log('updateIdSync updateIdSync URI : ' + result);

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils/3344");
        console.log('dataUriUtils updateIdSync_test start3 successful ');

        done();
    })

/*
* @tc.number: ACTS_UpdateIdSync_0400
* @tc.name: Updates the ID in the specified dataUri.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_UpdateIdSync_0400',0, function (done) {
        console.log('dataUriUtils updateIdSync start4 ');
        var idint = 5566;
        var result = dataUriUtils.updateIdSync("datauriutils:///com.ix.dataUriUtils/123456789011",idint)
        console.log('updateIdSync updateIdSync URI : ' + result);

        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils/5566");
        console.log('dataUriUtils updateIdSync_test start4 successful ');

        done();
    })

/*
* @tc.number: ACTS_UpdateIdSync_0500
* @tc.name: Updates the ID in the specified dataUri.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_UpdateIdSync_0500',0, function (done) {
        console.log('dataUriUtils updateIdSync start5 ');

        var idint = 0;
        expect(typeof(idint)).assertEqual("number");
        console.log('dataUriUtils updateIdSync start666 ');

        var result = dataUriUtils.updateIdSync("datauriutils:///com.ix.dataUriUtils/1122",idint)
        console.log('updateIdSync updateIdSync URI : ' + result);
        expect(typeof(result)).assertEqual("string");
        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils/0");
        done();
    })

/*
* @tc.number: ACTS_UpdateIdSync_0600
* @tc.name: Updates the ID in the specified dataUri.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_UpdateIdSync_0600',0, function (done) {
        console.log('dataUriUtils updateIdSync start6 ');
        try {
            var idint = "3344";
            var result = dataUriUtils.updateIdSync("datauriutils:///com.ix.dataUriUtils/1122",idint)
            console.log('updateIdSync updateIdSync URI : ' + result);
            expect(result).assertEqual(-1);
        } catch (error) {
            console.log('updateIdSync updateIdSync catch error : ' + error);
        }
        console.log('dataUriUtils updateIdSync_test start6 successful ');

        done();
    })

/*
* @tc.number: ACTS_UpdateIdSync_0700
* @tc.name: Updates the ID in the specified dataUri.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_UpdateIdSync_0700',0, function (done) {
        console.log('dataUriUtils updateIdSync start7 ');
        try {
            var idint = 3344;
            var result = dataUriUtils.updateIdSync(123456,idint)
            console.log('updateIdSync updateIdSync URI : ' + result);
            expect(result).assertEqual(-1);
        } catch (error) {
            console.log('dataUriUtils updateIdSync_test start7 catch error: ' + error);
        }
        console.log('dataUriUtils updateIdSync_test start7 successful '); 
        done();
    })

/*
* @tc.number: ACTS_UpdateIdSync_0800
* @tc.name: Updates the ID in the specified dataUri.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_UpdateIdSync_0800',0, function (done) {
        console.log('dataUriUtils updateIdSync start8 ');
        var idint = 3344;
        var result = dataUriUtils.updateIdSync("datauriutils:///com.ix.dataUriUtils/abcd",idint)
        console.log('updateIdSync updateIdSync URI : ' + result);

        expect(result).assertEqual("datauriutils:///com.ix.dataUriUtils/abcd");
        console.log('dataUriUtils updateIdSync_test start8 successful ');

        done();
    })

/*
* @tc.number: ACTS_UpdateIdSync_0900
* @tc.name: Updates the ID in the specified dataUri.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_UpdateIdSync_0900',0, function (done) {
        console.log('dataUriUtils updateIdSync start9 ');
        try {
            var idint = 3344;
            var result = dataUriUtils.updateIdSync(undefined,idint)
            console.log('updateIdSync updateIdSync URI : ' + result);
            expect(result).assertEqual(-1);
        } catch (error) {
            console.log('dataUriUtils updateIdSync_test start9 catch error: ' + error); 
        }
        console.log('dataUriUtils updateIdSync_test start9 successful ');
        done();
    })

/*
* @tc.number: ACTS_UpdateIdSync_1000
* @tc.name: Updates the ID in the specified dataUri.
* @tc.desc: Check the return value of the interface
*/
    it('ACTS_UpdateIdSync_1000',0, function (done) {
        console.log('dataUriUtils updateIdSync start10 ');
        try {
            var idint = undefined;
            var result = dataUriUtils.updateIdSync("datauriutils:///com.ix.dataUriUtils/1122",idint)
            console.log('updateIdSync updateIdSync URI : ' + result);
            expect(result).assertEqual(-1);
        } catch (error) {
            console.log('dataUriUtils updateIdSync_test start10 catch error: ' + error);  
        }
        console.log('dataUriUtils updateIdSync_test start10 successful '); 
        done();
    })

})
