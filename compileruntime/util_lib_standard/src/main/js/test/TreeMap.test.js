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
import {TreeMap} from '@ohos.treemap'

describe('TreeMapTest', function () {
    /*
        *@tc.name:testConstructor001
         */
    it('SR000GGR3H_testConstructor001', 0, function () {
        try{
            let treemap = new TreeMap();
        }catch(err){
            expect(err).assertEqual("Error:Cannot create new TreeMap")
        }
    })

    it('SR000GGR3H_testSet002', 0, function () {
        console.log("set-----001");
        let treemap = new TreeMap();
        treemap.set(0,"四");
        let res = treemap.get(0);
        console.log(res)
        expect(res).assertEqual("四")
    })

    it('SR000GGR3H_testSet003', 0, function () {
        console.log("set-----002");
        let treemap  = new TreeMap();
        treemap.set(0,8);
        let res = treemap.get(0)
        console.log(res)
        expect(res).assertEqual(8)
    })
    it('SR000GGR3H_testSet004', 0, function () {
        console.log("set-----003");
        let treemap  = new TreeMap();
        let a=[1,2,3,4]
        treemap.set(0,a);
        let res = treemap.get(0)
        console.log(res)
        expect(res).assertEqual(a)
    })
    it('SR000GGR3H_testSet005', 0, function () {
        console.log("set-----004");
        let treemap  = new TreeMap();
        let a={name:"lala",age:"13"}
        treemap.set(0,a);
        let res = treemap.get(0)
        console.log(res)
        expect(res).assertEqual(a)
    })
    it('SR000GGR3H_testHasKey006', 0, function () {
        console.log("hasKey-----001");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        treemap.set(1,"b");
        let res = treemap.hasKey(1);
        console.log(res)
        expect(res).assertEqual(true);
        let res1 = treemap.hasKey(6);
        expect(res1).assertEqual(false);
    })
    it('SR000GGR3H_testHasValue007', 0, function () {
        console.log("hasValue-----001");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        treemap.set(1,"b");
        treemap.set(2,"c");
        let res = treemap.hasValue("a");
        console.log(res)
        expect(res).assertEqual(true);
        let res1 = treemap.hasValue("d");
        expect(res1).assertEqual(false);
    })
    it('SR000GGR3H_testGet008', 0, function () {
        console.log("get-----001");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        treemap.set(1,"b");
        treemap.set(2,"c");
        let res = treemap.get(1);
        console.log(res)
        expect(res).assertEqual("b");
    })
    it('SR000GGR3H_testGetFirstKey009', 0, function () {
        console.log("getFirstKey-----001");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        treemap.set(1,"b");
        treemap.set(2,"c");
        let res = treemap.getFirstKey();
        console.log(res)
        expect(res).assertEqual(0);
    })

    it('SR000GGR3H_testGetLastKey010', 0, function () {
        console.log("getLastKey-----001");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        treemap.set(1,"b");
        treemap.set(2,"c");
        let res = treemap.getLastKey();
        console.log(res)
        expect(res).assertEqual(2);
    })
    it('SR000GGR3H_testSetAll011', 0, function () {
        console.log("setAll-----003");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        treemap.set(1,"b");
        treemap.set(2,"c");
        let treemap1 = new TreeMap();
        treemap1.set(0,"a");
        treemap1.set(1,"b");
        treemap.setAll(treemap1);
        let res=treemap1.get(0);
        expect(res).assertEqual("a");
        let res1=treemap1.get(1);
        expect(res1).assertEqual("b");
        let res2=treemap1.get(2);
        expect(res2).assertEqual("c");
    })
    it('SR000GGR3H_testRemove012', 0, function () {
        console.log("remove-----003");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        treemap.set(1,"b");
        treemap.set(2,"c");
        let res = treemap.remove(1);
        expect(res).assertEqual("b");
    })
    it('SR000GGR3H_testClear013', 0, function () {
        console.log("clear-----001");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        treemap.set(1,"b");
        treemap.set(2,"c");
        treemap.clear();
        let res = treemap.length;
        expect(res).assertEqual(0)
    })

    it('SR000GGR3H_testGetLowerKey014', 0, function () {
        console.log("getLowerKey-----001");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        treemap.set(1,"b");
        treemap.set(2,"c");
        treemap.set(3,"d");
        treemap.set(4,"g");
        let res = treemap.getLowerKey(2);
        expect(res).assertEqual(1)

    })
    it('SR000GGR3H_testGetHigherKey015', 0, function () {
        console.log("getHigherKey-----001");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        treemap.set(1,"b");
        treemap.set(2,"c");
        treemap.set(3,"d");
        treemap.set(4,"g");
        let res = treemap.getHigherKey(2);
        expect(res).assertEqual(3)

    })
    it('SR000GGR3H_testKeys016', 0, function () {
        console.log("keys-----003");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        treemap.set(1,"b");
        treemap.set(2,"c");
        treemap.set(3,"d");
        treemap.set(4,"g");
        console.log("keys-----003=========");
        let res = treemap.keys();
        console.log("keys-----003========= end");
        for(let i = 0; i < treemap.length; i++){
            console.log(JSON.stringify(res.next()));
        }
    })
    it('SR000GGR3H_testValues016', 0, function () {
        console.log("values-----003");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        treemap.set(1,"b");
        treemap.set(2,"c");
        treemap.set(3,"d");
        treemap.set(4,"g");
        let res = treemap.values();

        for(let i = 0; i < treemap.length; i++){
            console.log(JSON.stringify(res.next()));
        }
    })
    it('SR000GGR3H_testReplace017', 0, function () {
        console.log("replace-----003");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        treemap.set(1,"b");
        treemap.set(2,"c");
        treemap.set(3,"d");
        treemap.set(4,"g");
        let res = treemap.replace(2,"B");
        let res1 = treemap.get(2);
        expect(res1).assertEqual("B");
    })
    it('SR000GGR3H_testLength018', 0, function () {
        console.log("length-----001");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        treemap.set(1,"b");
        treemap.set(2,"c");
        treemap.set(3,"d");
        treemap.set(4,"g");
        let res = treemap.length;
        console.log(res);
        expect(res).assertEqual(5)

    })
    it('SR000GGR3H_testForEach019', 0, function () {
        console.log("forEach-----001");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        treemap.set(1,"b");
        treemap.set(2,"c");
        treemap.set(3,"d");
        treemap.set(4,"g");
        let arr1=[];
        let arr2 = [];
        treemap.forEach((value,key)=>{
            arr1.push(value);
        })
        treemap.forEach((value,key)=>{
            arr2.push(key);
        })
        let arr=["a","b","c","d","g"];
        for(let i=0;i<arr1.length;i++){
            expect(arr[i]).assertEqual(arr1[i]);
        }
        let arr3=[0,1,2,3,4]
        for(let i=0;i<arr3.length;i++){
            expect(arr3[i]).assertEqual(arr2[i]);
        }
    })
    it('SR000GGR3H_testEntries020', 0, function () {
        console.log("entries-----001");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        treemap.set(1,"b");
        treemap.set(2,"c");
        treemap.set(3,"d");
        treemap.set(4,"g");
        let res = treemap.entries();
        for(let i = 0; i < treemap.length; i++){
            console.log(JSON.stringify(res.next()));
        }
    })
    it('SR000GGR3H_testIterator021', 0, function () {
        console.log("Iterator-----001");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        treemap.set(1,"b");
        treemap.set(2,"c");
        treemap.set(3,"d");
        treemap.set(4,"g");
        let arr =[]
        for(let item of treemap) {
            console.log("11111");
            arr.push(item);
            console.log("2222222"+ item);
        }
        console.log(arr);
    })

})