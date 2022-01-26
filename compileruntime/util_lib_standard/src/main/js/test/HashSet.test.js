/*
*Copyright(C)2021 Huawei Device Co.,Ltd.
*Licensed under the Apache License,Version 2.0(the 'License')
*you may not use this file except in compliance with the License.
*You may obtain a copy  of the License at
*http://www.apache.org/licenses/LICENSE-2.0
*Unless required by applicable law or agreed to in writing,software
*distributed under the License is distributed on an 'AS IS' BASIS ,
*WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,either express or implied.
*See the License for the specific language governing permissions and
*limitations under the License.
 */
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
import {HashSet} from '@ohos.hashset'
describe('HashSetTest', function () {
    /*
        *@tc.name:testConstructor001
         */
    it('SR000GGR3J_testNew001', 0, function () {
        try{
            let hashset = new HashSet();
        }catch(err){
            expect(err).assertEqual("Error:Cannot create new HashSet")
        }
    })
    it('SR000GGR3J_testAdd001', 0, function () {
        console.log("add-----001");
        let hashset = new HashSet();
        hashset.add(1);
        let res = hashset.has(1);
        console.log(res);
        expect(res).assertEqual(true);
    })
    it('SR000GGR3J_testAdd002', 0, function () {
        console.log("add-----002");
        let hashset = new HashSet();
        hashset.add("b");
        hashset.add("c");
        hashset.add("d");
        hashset.add("a");
        hashset.add("g");
        let res = hashset.has("a");
        console.log(res);
        expect(res).assertEqual(true);
    })
    it('SR000GGR3J_testAdd004',0, function () {
        console.log("add-----003");
        let hashset = new HashSet();
        let c = [1,2,3]
        hashset.add(c);
        let res = hashset.has(c);
        console.log(res);
        expect(res).assertEqual(true);
    })
    it('SR000GGR3J_testAdd005', 0, function () {
        console.log("add-----004");
        let hashset = new HashSet();
        let c = { name: 'lili', age: '13' }
        hashset.add(c);
        let res = hashset.has(c);
        console.log(res);
        expect(res).assertEqual(true);
    })
    it('SR000GGR3J_testLength006', 0, function () {
        console.log("length-----001");
        let hashset = new HashSet();
        hashset.add(1);
        hashset.add(2);
        hashset.add(3);
        hashset.add(4);
        hashset.add(5);
        let res = hashset.length;
        console.log(res);
        expect(res).assertEqual(5);
    })
    it('SR000GGR3J_testHas007', 0, function () {
        console.log("has-----001");
        let hashset = new HashSet();
        hashset.add(4);
        hashset.add(1);
        hashset.add(3);
        hashset.add(2);
        hashset.add(5);
        let res = hashset.has(1);
        console.log(res);
        expect(res).assertEqual(true);
        let res1 = hashset.has("A");
        expect(res1).assertEqual(false);
    })
    it('SR000GGR3J_testIsEmpty008', 0, function () {
        console.log("isEmpty-----001");
        let hashset = new HashSet();
        hashset.add(4);
        hashset.add(1);
        hashset.add(3);
        hashset.add(2);
        hashset.add(5);
        let res = hashset.isEmpty();
        expect(res).assertEqual(false);
    })
    it('SR000GGR3J_testRemove009', 0, function () {
        console.log("remove-----001");
        let hashset = new HashSet();
        hashset.add(4);
        hashset.add(1);
        hashset.add(3);
        hashset.add(2);
        hashset.add(5);
        let res = hashset.remove(1);
        console.log(res);
        expect(res).assertEqual(true);
        let arr = []
        hashset.forEach((value,index)=>{
            arr.push(value);
        })
        let arr1= [4,1,5,2];
        for(let i=0;i<arr1.length;i++){
            expect(arr[i]).assertEqual(arr1[i]);
        }
    })
    it('SR000GGR3J_testClear010', 0, function () {
        console.log("clear-----001");
        let hashset = new HashSet();
        hashset.add(4);
        hashset.add(1);
        hashset.add(3);
        hashset.add(2);
        hashset.add(5);
        let res = hashset.length;
        expect(res).assertEqual(5);
        hashset.clear();
        let res1 = hashset.length;
        expect(res1).assertEqual(0);
    })
    it('SR000GGR3J_testValues011', 0, function () {
        console.log("values-----001");
        let hashset = new HashSet();
        hashset.add("A");
        hashset.add("B");
        hashset.add("C");
        hashset.add("D");
        hashset.add("E");
        let res = hashset.values();
        expect(JSON.stringify(res.next().value)).assertEqual("\"D\"");
        expect(JSON.stringify(res.next().value)).assertEqual("\"A\"");
        expect(JSON.stringify(res.next().value)).assertEqual("\"E\"");
        expect(JSON.stringify(res.next().value)).assertEqual("\"B\"");
        expect(JSON.stringify(res.next().value)).assertEqual("\"C\"");
    })
    it('SR000GGR3J_testForEach012', 0, function () {
        console.log("forEach-----001");
        let hashset = new HashSet();
        hashset.add(1);
        hashset.add(2);
        hashset.add(3);
        hashset.add(4);
        hashset.add(5);
        let arr = []
        hashset.forEach((value,index)=>{
            arr.push(value);
        })
        let arr1= [4,1,5,2,3];
        for(let i=0;i<arr1.length;i++){
            expect(arr[i]).assertEqual(arr1[i]);
        }

    })
    it('SR000GGR3J_testPush013', 0, function () {
        console.log("iterator-----001");
        let hashset = new HashSet();
        hashset.add(1);
        hashset.add(2);
        hashset.add(3);
        hashset.add(4);
        hashset.add(5);
        let arr=[]
        for(let item of hashset){
            arr.push(item)
        }
        let arr1= [4,1,5,2,3];
        for(let i=0;i<arr1.length;i++){
            expect(arr[i]).assertEqual(arr1[i]);
        }
    })
    it('SR000GGR3J_testPush014', 0, function () {
        console.log("iterator-----001");
        let hashset = new HashSet();
        hashset.add("A");
        hashset.add("B");
        hashset.add("C");
        hashset.add("D");
        hashset.add("E");
        let arr=[]
        for(let item of hashset){
            arr.push(item)
        }
        let arr1= ["D","A","E","B","C"];
        for(let i=0;i<arr1.length;i++){
            expect(arr[i]).assertEqual(arr1[i]);
        }
    })
    it('SR000GGR3J_testEntries015', 0, function () {
        console.log("entries-----001");
        let hashset = new HashSet();
        hashset.add(1);
        hashset.add(2);
        hashset.add(3);
        hashset.add(4);
        hashset.add(5);
        let res = hashset.entries();
        expect(JSON.stringify(res.next().value)).assertEqual("[4,4]");
        expect(JSON.stringify(res.next().value)).assertEqual("[1,1]");
        expect(JSON.stringify(res.next().value)).assertEqual("[5,5]");
        expect(JSON.stringify(res.next().value)).assertEqual("[2,2]");
        expect(JSON.stringify(res.next().value)).assertEqual("[3,3]");
    })
})