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

const chains = 2000;
const rings = 2000;

class ObjectRingCreateAndReturn {
    test() {
        for(let ring = 0; ring < rings; ring++) {
            this.consume(this.allocate());
        }
    }

    allocate(): Ring {

        let first: Ring = new Ring();
        let current: Ring = first;
        for(let chain = 0; chain < chains; chain++) {
            current = new Ring(current);
        }
        first.link = current;
        return first;
    }

    consume(item: Ring) {
        let cc = item;
    }
}


export default function VMB03Tests() {
    let printLog = 'VMB03Test:';

    describe('VMB03Test', () => {

        afterAll(() => {
            console.info(printLog + 'total case over');
        })

        /**
         * @tc.name: ObjectRingCreateAndReturn
         * @tc.desc: VMB ObjectRingCreateAndReturn Test port
         * @tc.author: maksim-khramov
         */
        it('ObjectRingCreateAndReturn', 0, async (done: Function) => {
            new ObjectRingCreateAndReturn().test();
            done();
        })
    })
}
