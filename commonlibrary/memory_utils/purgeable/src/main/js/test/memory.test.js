/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License')
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
import app from '@system.app';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import memory from '@ohos.memory';

function TestDataBuilder(dv, size, argv) {
    let start = argv.start.charCodeAt();
    let end = argv.end.charCodeAt();
    let len = 0;
    for (let ch = start; ch <= end && len < size; ch++) {
        dv.setInt8(len++,ch);
    }
    dv.setInt8(size - 1, 0);
    return true;
}

function TestDataModifier(dv, size, argv) {
    let from = argv.from.charCodeAt();
    let to = argv.to.charCodeAt();;
    for (let i = 0; i < size && dv.getInt8(i) != 0; i++) {
        if (dv.getInt8(i) == from) {
            dv.setInt8(i, to);
        }
    }
    return true;
}

function TestBigDataBuilder(dv, size, argv) {
    let len = 0;
    let target = argv.charCodeAt();
    for (let ch = target; len < size;) {
        dv.setInt8(len++, ch);
    }
    dv.setInt8(size - 1, 0);
    return true;
}

function ModifyPurgMemByBuilder(pobj, modifer, mod) {
    if (!pobj.beginWrite()) {
        console.log(": ERROR! BeginWrite failed.")
        return;
    }

    let res = pobj.modifyContentByBuilder(modifer, mod);
    pobj.endWrite();
}

function Strncmp(alphabet, bf){
    let str = String.fromCharCode.apply(null, new Int8Array(bf));
    return str == alphabet;
}

function CompareStrAndArrayBuffer(strArr, buffer){
    var int8Arr = new Int8Array(buffer);
    if(strArr.length != buffer.byteLength) {
        return false;
    }
    var length = strArr.length;
    for (var index = 0; index < length; index++) {
        var ch = strArr[index].charCodeAt();
        var x = int8Arr[index];
        if( ch != x){
            return false;
        }

    }
    console.log("CompareStrAndArrayBuffer true");
    return true;
}

export default function PurgeableTest() {
describe('PurgeableTest', function () {
    let pobj;
    let pobj1;
    let pobj2;
    
    beforeAll(function () {
        console.info('TestLog: Start Testing PurgeableMemory Interfaces');
    })

    beforeEach(async function () {
        console.info('TestLog: Init the PurgeableMemory');
        
    })

    afterEach(async function (done) {
        console.info('TestLog: Destroy the PurgeableMemory');
        if(pobj != undefined) {
            pobj.destroy();
            console.info('TestLog: Destroy the PurgeableMemory pobj');
        }
        if(pobj1 != undefined) {
            pobj1.destroy();
            console.info('TestLog: Destroy the PurgeableMemory pobj1');
        }
        if(pobj2 != undefined) {
            pobj2.destroy();
            console.info('TestLog: Destroy the PurgeableMemory pobj2');
        }
        done();
    })

    afterAll(function () {
        console.info('TestLog: End Testing PurgeableMemory Interfaces');
    })

    it('testPurgeableMemory001', 0, async function (done) {
        let pobj = memory.createPurgeableMemory(10, null, {});
        expect(pobj == undefined).assertTrue();
        done();
    })

    it('testCreatePurgeable002', 0, async function (done) {
        let pobj = memory.createPurgeableMemory(10, TestDataBuilder, {});
        expect(pobj != undefined).assertTrue();
        done();
    })

    it('testPurgeableMemory003', 0, async function (done) {
        let pobj = memory.createPurgeableMemory(0, TestDataBuilder, {});
        expect(pobj != undefined).assertTrue();
        let isRead = pobj.beginRead();
        if(isRead){
            pobj.endRead();
        }
        expect(isRead ==  false).assertTrue();
        done();
    })

    it('multiObjCreateTest', 0, async function (done) {
        let alphabetFinal = "BBCDEFGHIJKLMNOPQRSTUVWXYZ\0";
        let paramObj = {};
        let mod = {};

        paramObj.start = 'A';
        paramObj.end = 'Z';

        mod.from = 'A';
        mod.to = 'B';

        let pobj1 = memory.createPurgeableMemory(27, TestDataBuilder, paramObj);
        ModifyPurgMemByBuilder(pobj1, TestDataModifier, mod);

        let pobj2 = memory.createPurgeableMemory(27, TestDataBuilder, paramObj);
        ModifyPurgMemByBuilder(pobj2, TestDataModifier, mod);

        let ret1 = false;
        let ret2 = false;
        let times1 = 0;
        let times2 = 0;
        while (times1++ < 10) {
            if (pobj1.beginRead()) {
                ret1 = Strncmp(alphabetFinal, pobj1.getContent());
                pobj1.endRead();
                break;
            } else {
                console.log(": ERROR! BeginRead failed.");
            }
        }

        while (times2++ < 10) {
            if (pobj2.beginRead()) {
                ret2 = Strncmp(alphabetFinal, pobj2.getContent());
                pobj2.endRead();
                break;
            } else {
                console.log(": ERROR! BeginRead failed.");
            }
        }

        expect(ret1).assertTrue();
        expect(ret2).assertTrue();
        done();
    })

    it('readTest', 0, async function (done) {
        let alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\0";
        let paramObj = {};
        paramObj.start = 'A';
        paramObj.end = 'Z';

        let pobj = memory.createPurgeableMemory(27, TestDataBuilder, paramObj);

        let times = 0;
        let ret = false;
        while (times++ < 10) {
            if (pobj.beginRead()) {
                ret = Strncmp(alphabet, pobj.getContent());
                pobj.endRead();
                break;
            } else {
                console.log(": ERROR! BeginRead failed.");
            }
        }
        expect(ret).assertTrue();
        done();
    })

    it('writeTest', 0, async function (done) {
        let alphabet = "CCCDEFGHIJKLMNOPQRSTUVWXYZ\0";
        let paramObj = {};
        paramObj.start = 'A';
        paramObj.end = 'Z';

        let pobj = memory.createPurgeableMemory(27, TestDataBuilder, paramObj);

        let paramObjA2B = {};
        paramObjA2B.from = 'A';
        paramObjA2B.to = 'B';
        ModifyPurgMemByBuilder(pobj, TestDataModifier, paramObjA2B);

        let paramObjB2C = {};
        paramObjB2C.from = 'B';
        paramObjB2C.to = 'C';
        ModifyPurgMemByBuilder(pobj, TestDataModifier, paramObjB2C);

        let times = 0;
        let ret = false;
        while (times++ < 10) {
            if (pobj.beginRead()) {
                ret = Strncmp(alphabet, pobj.getContent());
                pobj.endRead();
                break;
            } else {
                console.log(": ERROR! BeginRead failed.");
            }
        }
        expect(ret).assertTrue();
        done();
    })

    it('readWriteTest', 0, async function (done) {
        let alphabet = "DDDDEFGHIJKLMNOPQRSTUVWXYZ\0";
        let paramObj = {};
        paramObj.start = 'A';
        paramObj.end = 'Z';
        let pobj = memory.createPurgeableMemory(27, TestDataBuilder, paramObj);

        let paramObjA2B = {};
        paramObjA2B.from = 'A';
        paramObjA2B.to = 'B';
        ModifyPurgMemByBuilder(pobj, TestDataModifier, paramObjA2B);

        let paramObjB2C = {};
        paramObjB2C.from = 'B';
        paramObjB2C.to = 'C';
        ModifyPurgMemByBuilder(pobj, TestDataModifier, paramObjB2C);

        let paramObjC2D = {};
        paramObjC2D.from = 'C';
        paramObjC2D.to = 'D';
        ModifyPurgMemByBuilder(pobj, TestDataModifier, paramObjC2D);

        let times = 0;
        let ret = false;
        while (times++ < 10) {
            if (pobj.beginRead()) {
                ret = Strncmp(alphabet, pobj.getContent());
                pobj.endRead();
                break;
            } else {
                console.log(": ERROR! BeginRead failed." );
            }
        }

        expect(ret).assertTrue();
        done();
    })

    it('mutiPageReadTest', 0, async function (done) {
        let alphabet = [];
        let len = 0;
        let ch = 'A';
        for (ch; len < 4098;) {
            alphabet[len++] = ch;
        }
        alphabet[4097] = String.fromCharCode(0);
        let pobj = memory.createPurgeableMemory(4098, TestBigDataBuilder, 'A');

        let times = 0;
        let ret = false;
        while (times++ < 10) {
            if (pobj.beginRead()) {
                ret = Strncmp(alphabet.join(""), pobj.getContent());
                pobj.endRead();
                break;
            } else {
                console.log(": ERROR! BeginRead failed.");
            }
        }
        expect(ret).assertTrue();
        done();
    })

    it('mutiPageWriteTest', 0, async function (done) {
        let alphabet = [];
        let len = 0;
        for (let ch = 'C'; len < 4098;) {
            alphabet[len++] = ch;
        }
        alphabet[4097] = String.fromCharCode(0);
        let pobj = memory.createPurgeableMemory(4098, TestBigDataBuilder, 'A');

        let modA2B = {};
        modA2B.from = 'A';
        modA2B.to = 'B';
        ModifyPurgMemByBuilder(pobj, TestDataModifier, modA2B);

        let modB2C = {};
        modB2C.from = 'B';
        modB2C.to = 'C';
        ModifyPurgMemByBuilder(pobj, TestDataModifier, modB2C);

        let times = 0;
        let ret = false;
        while (times++ < 10) {
            if (pobj.beginRead()) {
                ret = Strncmp(alphabet.join(""), pobj.getContent());
                pobj.endRead();
                break;
            } else {
                console.log(": ERROR! BeginRead failed." );
            }
        }

        expect(ret).assertTrue();
        done();
    })

    it('mutiPageReadWriteTest', 0, async function (done) {
        let alphabet = [];
        let len = 0;
        for (let ch = 'D'; len < 4098;) {
            alphabet[len++] = ch;
        }
        alphabet[4097] = String.fromCharCode(0);
        let pobj = memory.createPurgeableMemory(4098, TestBigDataBuilder, 'A');


        let modA2B = {};
        modA2B.from = 'A';
        modA2B.to = 'B';
        ModifyPurgMemByBuilder(pobj, TestDataModifier, modA2B);

        let modB2C = {};
        modB2C.from = 'B';
        modB2C.to = 'C';
        ModifyPurgMemByBuilder(pobj, TestDataModifier, modB2C);

        let modC2D = {};
        modC2D.from = 'C';
        modC2D.to = 'D';
        ModifyPurgMemByBuilder(pobj, TestDataModifier, modC2D);


        let times = 0;
        let ret = false;
        while (times++ < 10) {
            if (pobj.beginRead()) {
                ret = Strncmp(alphabet.join(""), pobj.getContent());
                pobj.endRead();
                break;
            } else {
                console.log(": ERROR! BeginRead failed." );
            }
        }
        expect(ret).assertTrue();
        done();
    })

    it('mutiMorePageReadWriteTest', 0, async function (done) {
        let size = 5 * 1024 * 1024;
        let alphabet = [];
        let len = 0;
        for (let ch = 'D'; len < size;) {
            alphabet[len++] = ch;
        }

        alphabet[size - 1] = String.fromCharCode(0);
        let pobj = memory.createPurgeableMemory(size, TestBigDataBuilder, 'A');

        let modA2B = {};
        modA2B.from = 'A';
        modA2B.to = 'B';
        ModifyPurgMemByBuilder(pobj, TestDataModifier, modA2B);

        let modB2C = {};
        modB2C.from = 'B';
        modB2C.to = 'C';
        ModifyPurgMemByBuilder(pobj, TestDataModifier, modB2C);

        let modC2D = {};
        modC2D.from = 'C';
        modC2D.to = 'D';
        ModifyPurgMemByBuilder(pobj, TestDataModifier, modC2D);

        let times = 0;
        let ret = false;
        while (times++ < 10) {
            if (pobj.beginRead()) {
                ret = CompareStrAndArrayBuffer(alphabet, pobj.getContent());
                pobj.endRead();
                break;
            } else {
                console.log(": ERROR! BeginRead failed." );
            }
        }
        expect(ret).assertTrue();
        done();
    })
})
}