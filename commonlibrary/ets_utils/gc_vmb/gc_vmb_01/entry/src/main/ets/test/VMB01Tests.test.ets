/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'

class Ring {
    buffer1: string = "Twas brillig, and the slithy toves. Did gyre and gimble in the wabe: All mimsy were the borogoves, And the mome raths outgrabe.";
    buffer2: string = "Beware the Jabberwock, my son! The jaws that bite, the claws that catch! Beware the Jubjub bird, and shun The frumious Bandersnatch!";

    link: Ring|null;

    constructor (val: Ring|null = null) {
        this.link = val;
    }


}

class Holder {
    public readonly f: number;

    constructor(val: number) {
        this.f = val;
    }
}


const chains = 500;
const rings = 2000;

class LocalObjects {
    public func2(v1: Holder, v2: Holder, v3: Holder, v4: Holder, v5: Holder, v6: Holder, v7: Holder, v8: Holder, v9: Holder, v10: Holder, v11: Holder, v12: Holder, v13: Holder, v14: Holder, v15: Holder, v16: Holder, v17: Holder, v18: Holder, v19: Holder, v20: Holder, v21: Holder, v22: Holder, v23: Holder, v24: Holder, v25: Holder, v26: Holder, v27: Holder, v28: Holder, v29: Holder, v30: Holder, v31: Holder, v32: Holder, v33: Holder, v34: Holder, v35: Holder, v36: Holder, v37: Holder, v38: Holder, v39: Holder, v40: Holder, v41: Holder, v42: Holder, v43: Holder, v44: Holder, v45: Holder, v46: Holder, v47: Holder, v48: Holder, v49: Holder, v50: Holder, v51: Holder, v52: Holder, v53: Holder, v54: Holder, v55: Holder, v56: Holder, v57: Holder, v58: Holder, v59: Holder, v60: Holder, v61: Holder, v62: Holder, v63: Holder, v64: Holder, v65: Holder, v66: Holder, v67: Holder, v68: Holder, v69: Holder, v70: Holder): number {
        if(v1.f - v2.f + v3.f - v4.f + v5.f - v6.f + v7.f - v8.f + v9.f - v10.f + v11.f - v12.f + v13.f - v14.f + v15.f - v16.f + v17.f - v18.f + v19.f - v20.f + v21.f - v22.f + v23.f - v24.f + v25.f - v26.f + v27.f - v28.f + v29.f - v30.f + v31.f - v32.f + v33.f - v34.f + v35.f - v36.f + v37.f - v38.f + v39.f - v40.f + v41.f - v42.f + v43.f - v44.f + v45.f - v46.f + v47.f - v48.f + v49.f - v50.f + v51.f - v52.f + v53.f - v54.f + v55.f - v56.f) {
            return v56.f - v57.f + v58.f - v59.f + v60.f - v61.f + v62.f - v63.f;
        } else {
            return v64.f - v65.f + v66.f - v67.f + v68.f - v69.f + v70.f;
        }
    }
    public test(): number {

        let val1: Holder = new Holder(1)
        let val2: Holder = new Holder(2)
        let val3: Holder = new Holder(3)
        let val4: Holder = new Holder(4)
        let val5: Holder = new Holder(5)
        let val6: Holder = new Holder(6)
        let val7: Holder = new Holder(7)
        let val8: Holder = new Holder(8)
        let val9: Holder = new Holder(9)
        let val10: Holder = new Holder(10)
        let val11: Holder = new Holder(11)
        let val12: Holder = new Holder(12)
        let val13: Holder = new Holder(13)
        let val14: Holder = new Holder(14)
        let val15: Holder = new Holder(15)
        let val16: Holder = new Holder(16)
        let val17: Holder = new Holder(17)
        let val18: Holder = new Holder(18)
        let val19: Holder = new Holder(19)
        let val20: Holder = new Holder(20)
        let val21: Holder = new Holder(21)
        let val22: Holder = new Holder(22)
        let val23: Holder = new Holder(23)
        let val24: Holder = new Holder(24)
        let val25: Holder = new Holder(25)
        let val26: Holder = new Holder(26)
        let val27: Holder = new Holder(27)
        let val28: Holder = new Holder(28)
        let val29: Holder = new Holder(29)
        let val30: Holder = new Holder(30)
        let val31: Holder = new Holder(31)
        let val32: Holder = new Holder(32)
        let val33: Holder = new Holder(33)
        let val34: Holder = new Holder(34)
        let val35: Holder = new Holder(35)
        let val36: Holder = new Holder(36)
        let val37: Holder = new Holder(37)
        let val38: Holder = new Holder(38)
        let val39: Holder = new Holder(39)
        let val40: Holder = new Holder(40)
        let val41: Holder = new Holder(41)
        let val42: Holder = new Holder(42)
        let val43: Holder = new Holder(43)
        let val44: Holder = new Holder(44)
        let val45: Holder = new Holder(45)
        let val46: Holder = new Holder(46)
        let val47: Holder = new Holder(47)
        let val48: Holder = new Holder(48)
        let val49: Holder = new Holder(49)
        let val50: Holder = new Holder(50)
        let val51: Holder = new Holder(51)
        let val52: Holder = new Holder(52)
        let val53: Holder = new Holder(53)
        let val54: Holder = new Holder(54)
        let val55: Holder = new Holder(55)
        let val56: Holder = new Holder(56)
        let val57: Holder = new Holder(57)
        let val58: Holder = new Holder(58)
        let val59: Holder = new Holder(59)
        let val60: Holder = new Holder(60)
        let val61: Holder = new Holder(61)
        let val62: Holder = new Holder(62)
        let val63: Holder = new Holder(63)
        let val64: Holder = new Holder(64)
        let val65: Holder = new Holder(65)
        let val66: Holder = new Holder(66)
        let val67: Holder = new Holder(67)
        let val68: Holder = new Holder(68)
        let val69: Holder = new Holder(69)
        let val70: Holder = new Holder(70)

        return this.func2(val1,val2,val3,val4,val5,val6,val7,val8,val9,val10,val11,val12,val13,val14,val15,val16,val17,val18,val19,val20,val21,val22,val23,val24,val25,val26,val27,val28,val29,val30,val31,val32,val33,val34,val35,val36,val37,val38,val39,val40,val41,val42,val43,val44,val45,val46,val47,val48,val49,val50,val51,val52,val53,val54,val55,val56,val57,val58,val59,val60,val61,val62,val63,val64,val65,val66,val67,val68,val69,val70);
    }    
}
 
class ExplosionTest {

    test() {
        for(let ring = 0; ring < rings; ring++) {
            let res = this.allocate();
        }
    }

    allocate(): number {

        let v1 = new Holder(1);
        let v2 = new Holder(2);
        let v3 = new Holder(3);
        let v4 = new Holder(4);
        let v5 = new Holder(5);
        let v6 = new Holder(6);
        let v7 = new Holder(7);
        let v8 = new Holder(8);
        let v9 = new Holder(9);
        let v10 = new Holder(10);

        return v1.f + v2.f + v3.f + v4.f + v5.f + v6.f + v7.f + v8.f + v9.f + v10.f
    }
}

class ObjectRingCreate {
    test() {
        for(let ring = 0; ring < rings; ring++) {
            this.allocate();
        }
    }

    allocate() {

        let first: Ring = new Ring();
        let current: Ring = first;
        for(let chain = 0; chain < chains; chain++) {
            current = new Ring(current);
        }
        first.link = current;
    }
}


export default function VMB01Tests() {
    let printLog = 'VMB01Test:';

    describe('VMB01Test', () => {

        afterAll(() => {
            console.info(printLog + 'total case over');
        })

        /**
         * @tc.name: ObjectExplosion
         * @tc.desc: VMB ObjectExplosion Test port
         * @tc.author: maksim-khramov
         */
        it('ObjectExplosionTest', 0, async (done: Function) => {
            new ExplosionTest().test();
            done();
        })
        
        /**
         * @tc.name: LocalObjects
         * @tc.desc: VMB LocalObjects Test port
         * @tc.author: maksim-khramov
         */
        it('LocalObjectsTest', 0, async (done: Function) => {
            let test = new LocalObjects();
            for(let ring = 0; ring < rings; ring++) {
                let res = test.test();
            }
            done();
        })

        /**
         * @tc.name: ObjectRingCreate
         * @tc.desc: VMB ObjectRingCreate Test port
         * @tc.author: maksim-khramov
         */
        it('ObjectRingCreateTest', 0, async (done: Function) => {
            new ObjectRingCreate().test();
            done();
        })
    })
}
