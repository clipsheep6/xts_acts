/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
import {HashMap} from '@ohos.hashmap'

describe('HashMapTest', function () {

    /**
     *@tc.name:testConstructor001
     */
    it('SR000GGR4B_testConstructor001', 0, function () {
        console.log("constructor-----001");
        try{
            let hashmap = new HashMap();
            expect(hashmap != undefined).assertEqual(true);
        }catch(err){
            expect(err).assertEqual("Error: Cannot create new HashMap")
        }
    })
    it('SR000GGR4B_testSet002_1', 0, function () {
        console.log("set-----001");
        let hashmap = new HashMap();
        hashmap.set(1,"A");
        let res = hashmap.get(1);
        expect(res).assertEqual("A");
    })
    it('SR000GGR4B_testSet002_2', 0, function () {
        console.log("set-----002");
        let hashmap = new HashMap();
        hashmap.set(1,2);
        let res = hashmap.get(1);
        expect(res).assertEqual(2);
    })
    it('SR000GGR4B_testSet002_3', 0, function () {
        console.log("set-----003");
        let hashmap = new HashMap();
        let c = [1,2,3]
        hashmap.set(1,c);
        let res = hashmap.get(1);
        expect(res).assertEqual(c);
    })
    it('SR000GGR4B_testSet002_4', 0, function () {
        console.log("set-----004");
        let hashmap = new HashMap();
        let c = { name: 'lili', age: '13' }
        hashmap.set(1,c);
        let res = hashmap.get(1);
        expect(res).assertEqual(c);
    })
    it('SR000GGR4B_testSet002_5', 0, function () {
        console.log("set-----005");
        let hashmap = new HashMap();
        hashmap.set("a","A");
        let res = hashmap.get("a");
        expect(res).assertEqual("A");
    })
    it('SR000GGR4B_testSet002_6', 0, function () {
        console.log("set-----006");
        let hashmap = new HashMap();
        hashmap.set('',"A");
        let res = hashmap.get('');
        expect(res).assertEqual("A");
    })
    it('SR000GGR4B_testSet002_7', 0, function () {
        console.log("set-----007");
        let hashmap = new HashMap();
        hashmap.set('$',"A");
        let res = hashmap.get('$');
        expect(res).assertEqual("A");
    })
    it('SR000GGR4B_testSet002_8', 0, function () {
        console.log("set-----008");
        let hashmap = new HashMap();
        hashmap.set(3.14,"A");
        let res = hashmap.get(3.14);
        expect(res).assertEqual("A");
    })
    it('SR000GGR4B_testSet002_9', 0, function () {
        console.log("set-----009");
        let hashmap = new HashMap();
        hashmap.set(0.3,"A");//key值为浮点数
        let res = hashmap.get(0.3);
        expect(res).assertEqual("A");
    })
    it('SR000GGR4B_testSet002_10', 0, function () {
        console.log("set-----010");
        let hashmap = new HashMap();
        hashmap.set(-1,"A");
        let res = hashmap.get(-1);
        expect(res).assertEqual("A");
    })
    it('SR000GGR4B_testSet002_11', 0, function () {
        console.log("set-----011");
        let hashmap = new HashMap();
        let a = {};
        hashmap.set(a,"A");
        let res = hashmap.get(a);
        expect(res).assertEqual("A");
    })
    it('SR000GGR4B_testSet002_12', 0, function () {
        console.log("set-----012");
        let hashmap = new HashMap();
        hashmap.set(1,null);
        let res = hashmap.get(1);
        expect(res).assertEqual(null);
    })
    it('SR000GGR4B_testSet002_13', 0, function () {
        console.log("set-----013");
        let hashmap = new HashMap();
        hashmap.set(1, '$');
        let res = hashmap.get(1);
        expect(res).assertEqual('$');
    })
    it('SR000GGR4B_testSet002_14', 0, function () {
        console.log("set-----014");
        let hashmap = new HashMap();
        hashmap.set(1, 3.14);
        let res = hashmap.get(1);
        expect(res).assertEqual(3.14);
    })
    it('SR000GGR4B_testSet002_15', 0, function () {
        console.log("set-----015");
        let hashmap = new HashMap();
        hashmap.set(1, -1);
        let res = hashmap.get(1);
        expect(res).assertEqual(-1);
    })
    it('SR000GGR4B_testSet002_16', 0, function () {
        console.log("set-----016");
        let hashmap = new HashMap();
        let a = {};
        hashmap.set(1,a);
        let res = hashmap.get(1);
        expect(res).assertEqual(a);
    })
    it('SR000GGR4B_testSet002_17', 0, function () {
        console.log("set-----017");
        let hashmap = new HashMap();
        let i = 0;
        for (; i < 100; i++) {
            hashmap.set(1, i);
            console.log("value-----" + hashmap.get(1));
        }
        let res = hashmap.get(1);
        let res1 = hashmap.length;
        console.log("res-----" + res);
        console.log("res1-----" + res1);
        expect(res).assertEqual(99);
        expect(res1).assertEqual(1);
    })
    it('SR000GGR4B_testSet002_18', 0, function () {
        console.log("set-----018");
        let hashmap = new HashMap();
        let i = 0;
        for (; i < 100; i++) {
            hashmap.set(i, 1);
            console.log("length-----" + hashmap.length);
        }
        let res = hashmap.get(i - 1);
        let res1 = hashmap.length;
        console.log("res-----" + res);
        console.log("res1-----" + res1);
        expect(res).assertEqual(1);
        expect(res1).assertEqual(100);
    })
    it('SR000GGR4B_testLength003', 0, function () {
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
    it('SR000GGR4B_testHasKey004_1', 0, function () {
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
    it('SR000GGR4B_testHasKey004_2', 0, function () {
        console.log("hasKey-----002");
        let hashmap = new HashMap();
        let res = hashmap.hasKey(8);
        expect(res).assertEqual(false);
    })
    it('SR000GGR4B_testHasValue005_1', 0, function () {
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
    it('SR000GGR4B_testHasValue005_2', 0, function () {
        console.log("hasValue-----002");
        let hashmap = new HashMap();
        let res = hashmap.hasValue(8);
        expect(res).assertEqual(false);
    })
    it('SR000GGR4B_testGet006_1', 0, function () {
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
    it('SR000GGR4B_testGet006_2', 0, function () {
        console.log("get-----002");
        let hashmap = new HashMap();
        try{
            let res = hashmap.get(3);
            console.log("res-----" + res)
        }catch(err){
            console.log("get002Error-----" + err);
            expect(err).assertEqual("Error: The removed element does not exist in this container")
        }
    })
    it('SR000GGR4B_testSetAll007_1', 0, function () {
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
        for(let [key,value] of hashmap) {
            arr.push([key,value]);
        }
        arr.sort(function(a, b){return a[0] - b[0]});

        for(let i = 0; i < arr.length; i++){
            expect(arr[i][0]).assertEqual(i + 1);
            expect(arr[i][1]).assertEqual(hashmap.get(i + 1));
        }
    })
    it('SR000GGR4B_testSetAll007_2', 0, function () {
        console.log("setAll-----002");
        let hashmap = new HashMap();
        let hashmap1 = new HashMap();
        hashmap1.set(1,1);
        hashmap1.set(2,2);
        hashmap.setAll(hashmap1);
        let arr = [];
        for(let [key,value] of hashmap) {
            arr.push([key,value]);
        }
        arr.sort(function(a, b){return a[0] - b[0]});

        for(let i = 0; i < arr.length; i++){
            expect(arr[i]).assertEqual([i + 1,hashmap.get(i + 1)]);
        }
    })
    it('SR000GGR4B_testRemove008_1', 0, function () {
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
    it('SR000GGR4B_testRemove008_2', 0, function () {
        console.log("remove-----002");
        let hashmap = new HashMap();
        try{
            let res= hashmap.remove(3);
            console.log("res-----" + res)
        }catch(err){
            console.log("remove002Error-----" + err);
            expect(err).assertEqual("Error: The removed element does not exist in this container")
        }
    })
    it('SR000GGR4B_testClear009', 0, function () {
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
    it('SR000GGR4B_testClear010', 0, function () {
        console.log("clear-----002");
        let hashmap = new HashMap();
        hashmap.clear();
        let res = hashmap.length;
        expect(res).assertEqual(0);
    })
    it('SR000GGR4B_testKeys010', 0, function () {
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
    it('SR000GGR4B_testValues011', 0, function () {
        console.log("values-----001");
        let hashmap = new HashMap();
        hashmap.set(1,"A");
        hashmap.set(2,"B");
        hashmap.set(3,"C");
        hashmap.set(4,"D");
        hashmap.set(5,"E");
        let res = hashmap.values();
        let i = 0;
        for(; i < hashmap.length; i++){
            let has = hashmap.hasValue(res.next().value);
            expect(has).assertEqual(true);
        }
    })
    it('SR000GGR4B_testReplace012_1', 0, function () {
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
    it('SR000GGR4B_testReplace012_2', 0, function () {
        console.log("replace-----002");
        let hashmap = new HashMap();
        let res = hashmap.replace(2,"G");
        console.log(res)
        expect(res).assertEqual(false);
    })
    it('SR000GGR4B_testForEach013_1', 0, function () {
        console.log("forEach-----001");
        let hashmap = new HashMap();
        hashmap.set(1,"A");
        hashmap.set(2,"B");
        hashmap.set(3,"C");
        hashmap.set(4,"D");
        hashmap.set(5,"E");
        let vals = [];
        let keys = [];
        hashmap.forEach((value,key)=>{
            keys.push(key);
            vals.push(value);
        })
        for(let i = 0; i < keys.length; i++){
            console.log(keys[i]);
            let has = hashmap.hasKey(keys[i]);
            expect(has).assertEqual(true);
        }
        for(let i = 0; i < vals.length; i++){
            console.log(vals[i]);
            let has = hashmap.hasValue(vals[i]);
            expect(has).assertEqual(true);
        }
    })
    it('SR000GGR4B_testForEach013_2', 0, function () {
        console.log("forEach-----002");
        let hashmap = new HashMap();
        let arr = [];
        try {
            hashmap.forEach((item, index) => {
                arr.push(item);
            })
        } catch (err) {
            console.log("forEach002-----" + err);
            expect(err).assertEqual("Error:Cannot create new stack")
        }
        expect(arr.length).assertEqual(0);
    })
    it('SR000GGR4B_testIterator014_1', 0, function () {
        console.log("iterator-----001");
        let hashmap = new HashMap();
        hashmap.set(1,"A");
        hashmap.set(2,"B");
        hashmap.set(3,"C");
        hashmap.set(4,"D");
        hashmap.set(5,"E");
        let arr = [];
        for(let [key,value] of hashmap) {
            arr.push([key,value]);
        }
        arr.sort(function(a, b){return a[0] - b[0]});

        for(let i = 0; i < arr.length; i++){
            expect(arr[i][0]).assertEqual(i + 1);
            expect(arr[i][1]).assertEqual(hashmap.get(i + 1));
        }
    })
    it('SR000GGR4B_testIterator014_2', 0, function () {
        console.log("iterator-----002");
        let hashmap = new HashMap();
        let arr = [];
        try {
            for (let item of hashmap) {
                arr.push(item);
            }
        } catch (err) {
            console.log("iterator002-----" + err);
            expect(err).assertEqual("Error: Cannot create new HashMap")
        }
        expect(arr.length).assertEqual(0);
    })
    it('SR000GGR4B_testEntries015_1', 0, function () {
        console.log("entries-----001");
        let hashmap = new HashMap();
        hashmap.set(1,"A");
        hashmap.set(2,"B");
        hashmap.set(3,"C");
        hashmap.set(4,"D");
        hashmap.set(5,"E");
        let res = hashmap.entries();
        let arr = [];
        for(let i = 0; i < hashmap.length; i++){
            let obj = res.next();
            arr.push([obj.value[0], obj.value[1]]);
        }
        arr.sort(function(a, b){return a[0] - b[0]});
        for(let i = 0; i < arr.length; i++){
            expect(arr[i][0]).assertEqual(i + 1);
            expect(arr[i][1]).assertEqual(hashmap.get(i + 1));
        }
    })
    it('SR000GGR4B_testEntries015_2', 0, function () {
        console.log("entries-----002");
        let hashmap = new HashMap();
        let res = hashmap.entries();
        expect(undefined).assertEqual(res.next().value);
    })
    it('SR000GGR4B_testIsEmpty016_1', 0, function () {
        console.log("IsEmpty-----001");
        let hashmap = new HashMap();
        hashmap.set(1,"A");
        hashmap.set(2,"B");
        hashmap.set(3,"C");
        hashmap.set(4,"D");
        hashmap.set(5,"E");
        let res = hashmap.length;
        let res1 = hashmap.isEmpty();
        expect(res).assertEqual(5);
        expect(res1).assertEqual(false);
    })
    it('SR000GGR4B_testIsEmpty016_2', 0, function () {
        console.log("IsEmpty-----002");
        let hashmap = new HashMap();
        hashmap.set(1,"A");
        hashmap.set(2,"B");
        hashmap.set(3,"C");
        hashmap.set(4,"D");
        hashmap.set(5,"E");
        hashmap.clear();
        let res = hashmap.length;
        let res1 = hashmap.isEmpty();
        expect(res).assertEqual(0);
        expect(res1).assertEqual(true);
    })
})