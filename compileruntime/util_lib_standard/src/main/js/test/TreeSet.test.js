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
import {TreeSet} from '@ohos.treeset'

describe('SR000GGR3I_TreeSetTest', function () {
    /*
        *@tc.name:testConstructor001
         */
    it('SR000GGR3I_testConstructor001', 0, function () {
        try{
            let treeset = new TreeSet();
        }catch(err){
            expect(err).assertEqual("Error:Cannot create new TreeSet")
        }
    })

    it('SR000GGR3I_testAdd002', 0, function () {
        console.log("add-----001");
        let treeset = new TreeSet()
        treeset.add("四");
        let res = treeset.has("四");
        console.log(res)
        expect(res).assertEqual(true)
    })

    it('SR000GGR3I_testAdd003', 0, function () {
        console.log("add-----002");
        let treeset = new TreeSet()
        treeset.add(8);
        let res = treeset.has(8)
        console.log(res)
        expect(res).assertEqual(true)
    })
    it('SR000GGR3I_testAdd004', 0, function () {
        console.log("add-----003");
        let treeset = new TreeSet()
        let a=[1,2,3,4]
        treeset.add(a);
        let res = treeset.has(a)
        console.log(res)
        expect(res).assertEqual(true)
    })
    it('SR000GGR3I_testAdd005', 0, function () {
        console.log("add-----004");
        let treeset = new TreeSet();
        console.log("add-----005");
        treeset.add(0);
        console.log("add-----006");
        let res = treeset.has(0)
        console.log("add-----007");
        console.log(res)
        expect(res).assertEqual(true)
    })
    it('SR000GGR3I_testLength006', 0, function () {
        console.log("size-----001");
        let treeset = new TreeSet()
        treeset.add(0);
        treeset.add(1);
        treeset.add(2);
        let res = treeset.length;
        console.log(res)
        expect(res).assertEqual(3);
    })
    it('SR000GGR3I_testHas007', 0, function () {
        console.log("has-----001");
        let treeset = new TreeSet()
        treeset.add(0);
        treeset.add(1);
        treeset.add(2);
        let res = treeset.has(2);
        console.log(res)
        expect(res).assertEqual(true);
        let res1 = treeset.has(3);
        expect(res1).assertEqual(false);
    })
    it('SR000GGR3I_testGetFirstValue008', 0, function () {
        console.log("getFirstValue-----001");
        let treeset = new TreeSet()
        treeset.add(0);
        treeset.add(1);
        treeset.add(2);
        treeset.add(3);
        treeset.add(4);
        let res = treeset.getFirstValue();
        console.log(res)
        expect(res).assertEqual(0);
    })
    it('SR000GGR3I_testGetLastValue009', 0, function () {
        console.log("getLastValue-----001");
        let treeset = new TreeSet()
        treeset.add(0);
        treeset.add(1);
        treeset.add(2);
        let res = treeset.getLastValue();
        console.log(res)
        expect(res).assertEqual(2);
    })

    it('SR000GGR3I_testGetLowerValue010', 0, function () {
        console.log("getLowerValue-----001");
        let treeset = new TreeSet()
        treeset.add(0);
        treeset.add(1);
        treeset.add(2);
        treeset.add(3);
        treeset.add(4);
        let res = treeset.getLowerValue(2);
        console.log(res)
        expect(res).assertEqual(1);
    })
    it('SR000GGR3I_testGetHigherValue011', 0, function () {
        console.log("getHigherValue-----001");
        let treeset = new TreeSet()
        treeset.add(0);
        treeset.add(1);
        treeset.add(2);
        treeset.add(3);
        treeset.add(4);
        let res = treeset.getHigherValue(3);
        console.log(res)
        expect(res).assertEqual(4);
    })
    it('SR000GGR3I_testPopFirst012', 0, function () {
        console.log("popFirst-----003");
        let treeset = new TreeSet()
        treeset.add("a");
        treeset.add("b");
        treeset.add("c");
        treeset.add("d");
        treeset.add("e");
        let res = treeset.popFirst();
        expect(res).assertEqual("a");
    })
    it('SR000GGR3I_testPopLast013', 0, function () {
        console.log("popLast-----003");
        let treeset = new TreeSet()
        treeset.add("a");
        treeset.add("b");
        treeset.add("c");
        treeset.add("d");
        treeset.add("e");
        let res = treeset.popLast();
        expect(res).assertEqual("e");
    })
    it('SR000GGR3I_testClear014', 0, function () {
        console.log("clear-----001");
        let treeset = new TreeSet()
        treeset.add(0);
        treeset.add(1);
        treeset.add(2);
        treeset.clear();
        let res = treeset.length;
        expect(res).assertEqual(0)
    })
    it('SR000GGR3I_testIsEmpty015', 0, function () {
        console.log("isEmpty-----001");
        let treeset = new TreeSet()
        treeset.add("a");
        treeset.add("b");
        treeset.add("c");
        treeset.clear();
        let res = treeset.isEmpty();
        expect(res).assertEqual(true)
    })

    it('SR000GGR3I_testRemove016', 0, function () {
        console.log("remove-----003");
        let str1 = "a";
        let str2 = "b";
        console.log(str1.charCodeAt(0));
        console.log(str2.charCodeAt(0));
        let treeset = new TreeSet()
        treeset.add("a");
        treeset.add("b");
        treeset.add("c");
        treeset.add("d");
        treeset.add("g");
        let res = treeset.remove("c");
        expect(res).assertEqual(true)
    })

    it('SR000GGR3I_testValues017', 0, function () {
        console.log("values-----001");
        let treeset = new TreeSet()
        treeset.add("a");
        treeset.add("b");
        treeset.add("c");
        treeset.add("d");
        treeset.add("g");
        let res = treeset.values();
        expect(res.next().value).assertEqual("a");
        expect(res.next().value).assertEqual("b");
        expect(res.next().value).assertEqual("c");
        expect(res.next().value).assertEqual("d");
        expect(res.next().value).assertEqual("g");
    })
    it('SR000GGR3I_testForEach018', 0, function () {
        console.log("forEach-----001");
        let treeset = new TreeSet()
        treeset.add(0);
        treeset.add(1);
        treeset.add(2);
        treeset.add(3);
        treeset.add(4);
        let arr1=[];
        treeset.forEach((value,key)=>{
            arr1.push(value);
        })
        let arr=[0,1,2,3,4];
        for(let i=0;i<arr1.length;i++){
            expect(arr[i]).assertEqual(arr1[i]);
        }
    })
    it('SR000GGR3I_testEntries019', 0, function () {
        console.log("entries-----001");
        let treeset = new TreeSet()
        treeset.add("a");
        treeset.add("b");
        treeset.add("c");
        treeset.add("d");
        treeset.add("g");
        let res = treeset.entries();
        expect(JSON.stringify(res.next().value)).assertEqual("[\"a\",\"a\"]");
        expect(JSON.stringify(res.next().value)).assertEqual("[\"b\",\"b\"]");
        expect(JSON.stringify(res.next().value)).assertEqual("[\"c\",\"c\"]");
        expect(JSON.stringify(res.next().value)).assertEqual("[\"d\",\"d\"]");
        expect(JSON.stringify(res.next().value)).assertEqual("[\"g\",\"g\"]");
    })
    it('SR000GGR3I_testIterator020', 0, function () {
        console.log("iterator-----001");
        let treeset = new TreeSet()
        treeset.add(0);
        treeset.add(1);
        treeset.add(2);
        treeset.add(3);
        treeset.add(4);
        let arr =[];
        for(let item of treeset){
            arr.push(item)
        }
        let arr1 = [0,1,2,3,4]
        for(let i=0;i<arr1.length;i++){
            expect(arr[i]).assertEqual(arr1[i]);
        }
    })
})