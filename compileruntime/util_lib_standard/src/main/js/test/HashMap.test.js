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
import {HashMap} from '@ohos.hashmap'

describe('HashMapTest', function () {
    /*
        *@tc.name:testConstructor001
         */
    it('SR000GGR4B_testConstructor001', 0, function () {
        try{
            let hashmap = new HashMap();
        }catch(err){
            expect(err).assertEqual("Error:Cannot create new HashMap")
        }
    })
    it('SR000GGR4B_testSet002', 0, function () {
        console.log("set-----001");
        let hashmap = new HashMap();
        hashmap.set(1,"A");
        let res = hashmap.get(1);
        expect(res).assertEqual("A");
    })
    it('SR000GGR4B_testSet003', 0, function () {
        console.log("set-----002");
        let hashmap = new HashMap();
        hashmap.set(1,2);
        let res = hashmap.get(1);
        expect(res).assertEqual(2);
    })
    it('SR000GGR4B_testSet004', 0, function () {
        console.log("set-----003");
        let hashmap = new HashMap();
        let c = [1,2,3]
        hashmap.set(1,c);
        let res = hashmap.get(1);
        expect(res).assertEqual(c);
    })
    it('SR000GGR4B_testSet005', 0, function () {
        console.log("set-----004");
        let hashmap = new HashMap();
        let c = { name: 'lili', age: '13' }
        hashmap.set(1,c);
        let res = hashmap.get(1);
        expect(res).assertEqual(c);
    })
    it('SR000GGR4B_testSet006', 0, function () {
        console.log("set-----005");
        let hashmap = new HashMap();
        hashmap.set("a","A");
        let res = hashmap.get("a");
        expect(res).assertEqual("A");
    })
    it('SR000GGR4B_testLength007', 0, function () {
        console.log("length-----001");
        let hashmap = new HashMap();
        hashmap.set(1,"A");
        hashmap.set(2,"B");
        hashmap.set(3,"C");
        hashmap.set(4,"D");
        hashmap.set(5,"E");
        let res = hashmap.length;
        console.log(res);
        expect(res).assertEqual(5);
    })
    it('SR000GGR4B_testHasKey008', 0, function () {
        console.log("hasKey-----001");
        let hashmap = new HashMap();
        hashmap.set(1,"A");
        hashmap.set(2,"B");
        hashmap.set(3,"C");
        hashmap.set(4,"D");
        hashmap.set(5,"E");
        let res = hashmap.hasKey(3);
        console.log(res);
        expect(res).assertEqual(true);
        let res1 = hashmap.hasKey(8);
        expect(res1).assertEqual(false);
    })
    it('SR000GGR4B_testHasValue009', 0, function () {
        console.log("hasValue-----001");
        let hashmap = new HashMap();
        hashmap.set(1,"A");
        hashmap.set(2,"B");
        hashmap.set(3,"C");
        hashmap.set(4,"D");
        hashmap.set(5,"E");
        let res = hashmap.hasValue("C");
        console.log(res);
        expect(res).assertEqual(true);
        let res1 = hashmap.hasValue(8);
        expect(res1).assertEqual(false);
    })
    it('SR000GGR4B_testGet010', 0, function () {
        console.log("get-----001");
        let hashmap = new HashMap();
        hashmap.set(1,"A");
        hashmap.set(2,"B");
        hashmap.set(3,"C");
        hashmap.set(4,"D");
        hashmap.set(5,"E");
        let res = hashmap.get(3);
        console.log(res);
        expect(res).assertEqual("C");
    })
    it('SR000GGR4B_testSetAll011', 0, function () {
        console.log("setAll-----001");
        let hashmap = new HashMap();
        hashmap.set(1,"A");
        hashmap.set(2,"B");
        hashmap.set(3,"C");
        hashmap.set(4,"D");
        hashmap.set(5,"E");
        let hashmap1 = new HashMap();
        hashmap1.set(1,1);
        hashmap1.set(2,2);
        hashmap.setAll(hashmap1);
        let arr = [];
        hashmap1.forEach((value,index)=>{
            arr.push(value);
        })
        let arr1=["D", "A", "E", "B", "C"];
        for(let i=0;i<arr.length;i++){
            expect(arr[i]).assertEqual(arr1[i]);
        }
    })
    it('SR000GGR4B_testSetAll012', 0, function () {
        console.log("remove-----001");
        let hashmap = new HashMap();
        hashmap.set(1,"A");
        hashmap.set(2,"B");
        hashmap.set(3,"C");
        hashmap.set(4,"D");
        hashmap.set(5,"E");
        let res= hashmap.remove(3);
        expect(res).assertEqual("C");
        let res1 = hashmap.length;
        expect(res1).assertEqual(4);
    })
    it('SR000GGR4B_testClear013', 0, function () {
        console.log("clear-----001");
        let hashmap = new HashMap();
        hashmap.set(1,"A");
        hashmap.set(2,"B");
        hashmap.set(3,"C");
        hashmap.set(4,"D");
        hashmap.set(5,"E");
        let res = hashmap.length;
        expect(res).assertEqual(5);
        hashmap.clear();
        let res1 = hashmap.length;
        expect(res1).assertEqual(0);
    })
    it('SR000GGR4B_testKeys014', 0, function () {
        console.log("keys-----001");
        let hashmap = new HashMap();
        hashmap.set(1,"A");
        hashmap.set(2,"B");
        hashmap.set(3,"C");
        hashmap.set(4,"D");
        hashmap.set(5,"E");
        let res = hashmap.keys();
        for(let i = 0; i < hashmap.length; i++){
            console.log(res.next());
        }
    })
    it('SR000GGR4B_testValues015', 0, function () {
        console.log("values-----001");
        let hashmap = new HashMap();
        hashmap.set(1,"A");
        hashmap.set(2,"B");
        hashmap.set(3,"C");
        hashmap.set(4,"D");
        hashmap.set(5,"E");
        let res = hashmap.values();
        for(let i = 0; i < hashmap.length; i++){
            console.log(res.next());
        }
    })
    it('SR000GGR4B_testReplace016', 0, function () {
        console.log("replace-----001");
        let hashmap = new HashMap();
        hashmap.set(1,"A");
        hashmap.set(2,"B");
        hashmap.set(3,"C");
        hashmap.set(4,"D");
        hashmap.set(5,"E");
        let res = hashmap.replace(2,"G");
        console.log(res)
        expect(res).assertEqual(true);
        expect(hashmap.get(2)).assertEqual("G");
    })
    it('SR000GGR4B_testForEach017', 0, function () {
        console.log("forEach-----001");
        let hashmap = new HashMap();
        hashmap.set(1,"A");
        hashmap.set(2,"B");
        hashmap.set(3,"C");
        hashmap.set(4,"D");
        hashmap.set(5,"E");
        let arr = []
        hashmap.forEach((value,index)=>{
            arr.push(value);
        })
        for(let i = 0; i < arr.length; i++){
            console.log(arr[i]);
        }
    })
    it('SR000GGR4B_testIterator018', 0, function () {
        console.log("iterator-----001");
        let hashmap = new HashMap();
        hashmap.set(1,"A");
        hashmap.set(2,"B");
        hashmap.set(3,"C");
        hashmap.set(4,"D");
        hashmap.set(5,"E");
        let arr =[]
        console.log("dddssa dffdafaf")
        for(let item of hashmap) {
            console.log("11111");
            arr.push(item);
            console.log("2222222"+ item);
        }
        console.log(arr);
    })
    it('SR000GGR4B_testEntries019', 0, function () {
        console.log("entries-----001");
        let hashmap = new HashMap();
        hashmap.set(1,"A");
        hashmap.set(2,"B");
        hashmap.set(3,"C");
        hashmap.set(4,"D");
        hashmap.set(5,"E");
        let res = hashmap.entries();
        for(let i = 0; i < hashmap.length; i++){
            console.log(JSON.stringify(res.next()));
        }
    })
})