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
    it('SR000GGR4B_testConstructor001', 0, function () {
        try{
            let hashmap = new HashMap();
            expect(hashmap != undefined).assertEqual(true);
        }catch(err){
            expect(err).assertEqual("Error: Cannot create new HashMap")
        }
    })
    it('SR000GGR4B_testSet002', 0, function () {
        let hashmap = new HashMap();
        hashmap.set(1,"A");
        let res = hashmap.get(1);
        expect(res).assertEqual("A");
    })
    it('SR000GGR4B_testSet003', 0, function () {
        let hashmap = new HashMap();
        hashmap.set(1,2);
        let res = hashmap.get(1);
        expect(res).assertEqual(2);
    })
    it('SR000GGR4B_testSet004', 0, function () {
        let hashmap = new HashMap();
        let c = [1,2,3]
        hashmap.set(1,c);
        let res = hashmap.get(1);
        expect(res).assertEqual(c);
    })
    it('SR000GGR4B_testSet005', 0, function () {
        let hashmap = new HashMap();
        let c = { name: 'lili', age: '13' }
        hashmap.set(1,c);
        let res = hashmap.get(1);
        expect(res).assertEqual(c);
    })
    it('SR000GGR4B_testSet006', 0, function () {
        let hashmap = new HashMap();
        hashmap.set("a","A");
        let res = hashmap.get("a");
        expect(res).assertEqual("A");
    })
    it('SR000GGR4B_testLength007', 0, function () {
        let hashmap = new HashMap();
        hashmap.set(1,"A");
        hashmap.set(2,"B");
        hashmap.set(3,"C");
        hashmap.set(4,"D");
        hashmap.set(5,"E");
        let res = hashmap.length;
        expect(res).assertEqual(5);
    })
    it('SR000GGR4B_testHasKey008', 0, function () {
        let hashmap = new HashMap();
        hashmap.set(1,"A");
        hashmap.set(2,"B");
        hashmap.set(3,"C");
        hashmap.set(4,"D");
        hashmap.set(5,"E");
        let res = hashmap.hasKey(3);
        expect(res).assertEqual(true);
        let res1 = hashmap.hasKey(8);
        expect(res1).assertEqual(false);
    })
    it('SR000GGR4B_testHasValue009', 0, function () {
        let hashmap = new HashMap();
        hashmap.set(1,"A");
        hashmap.set(2,"B");
        hashmap.set(3,"C");
        hashmap.set(4,"D");
        hashmap.set(5,"E");
        let res = hashmap.hasValue("C");
        expect(res).assertEqual(true);
        let res1 = hashmap.hasValue(8);
        expect(res1).assertEqual(false);
    })
    it('SR000GGR4B_testGet010', 0, function () {
        let hashmap = new HashMap();
        hashmap.set(1,"A");
        hashmap.set(2,"B");
        hashmap.set(3,"C");
        hashmap.set(4,"D");
        hashmap.set(5,"E");
        let res = hashmap.get(3);
        expect(res).assertEqual("C");
    })
    it('SR000GGR4B_testSetAll011', 0, function () {
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
    it('SR000GGR4B_testRemove012', 0, function () {
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
        let hashmap = new HashMap();
        hashmap.set(1,"A");
        hashmap.set(2,"B");
        hashmap.set(3,"C");
        hashmap.set(4,"D");
        hashmap.set(5,"E");
        let res = hashmap.keys();
        for(let i = 0; i < hashmap.length; i++){
        }
    })
    it('SR000GGR4B_testValues015', 0, function () {
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
    it('SR000GGR4B_testReplace016', 0, function () {
        let hashmap = new HashMap();
        hashmap.set(1,"A");
        hashmap.set(2,"B");
        hashmap.set(3,"C");
        hashmap.set(4,"D");
        hashmap.set(5,"E");
        let res = hashmap.replace(2,"G");
        expect(res).assertEqual(true);
        expect(hashmap.get(2)).assertEqual("G");
    })
    it('SR000GGR4B_testForEach017', 0, function () {
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
            let has = hashmap.hasKey(keys[i]);
            expect(has).assertEqual(true);
        }
        for(let i = 0; i < vals.length; i++){
            let has = hashmap.hasValue(vals[i]);
            expect(has).assertEqual(true);
        }
    })
    it('SR000GGR4B_testIterator018', 0, function () {
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
    it('SR000GGR4B_testEntries019', 0, function () {
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
    it('SR000GGR4B_testSet020', 0, function () {
        let hashmap = new HashMap();
        hashmap.set('',"A");
        let res = hashmap.get('');
        expect(res).assertEqual("A");
    })
    it('SR000GGR4B_testSet021', 0, function () {
        let hashmap = new HashMap();
        hashmap.set('$',"A");
        let res = hashmap.get('$');
        expect(res).assertEqual("A");
    })
    it('SR000GGR4B_testSet022', 0, function () {
        let hashmap = new HashMap();
        hashmap.set(3.14,"A");
        let res = hashmap.get(3.14);
        expect(res).assertEqual("A");
    })
    it('SR000GGR4B_testSet007', 0, function () {
        let hashmap = new HashMap();
        hashmap.set(0.3,"A");//key值为浮点数
        let res = hashmap.get(0.3);
        expect(res).assertEqual("A");
    })
    it('SR000GGR4B_testSet023', 0, function () {
        let hashmap = new HashMap();
        hashmap.set(-1,"A");
        let res = hashmap.get(-1);
        expect(res).assertEqual("A");
    })
    it('SR000GGR4B_testSet024', 0, function () {
        let hashmap = new HashMap();
        let a = {};
        hashmap.set(a,"A");
        let res = hashmap.get(a);
        expect(res).assertEqual("A");
    })
    it('SR000GGR4B_testSet025', 0, function () {
        let hashmap = new HashMap();
        hashmap.set(1,null);
        try{
            let res = hashmap.get(1);
            expect(res).assertEqual(null);
        }catch(err){
            expect(err).assertEqual("Error: this hashmap don't find the key")
        }
    })
    it('SR000GGR4B_testSet026', 0, function () {
        let hashmap = new HashMap();
        hashmap.set(1, '$');
        let res = hashmap.get(1);
        expect(res).assertEqual('$');
    })
    it('SR000GGR4B_testSet027', 0, function () {
        let hashmap = new HashMap();
        hashmap.set(1, 3.14);
        let res = hashmap.get(1);
        expect(res).assertEqual(3.14);
    })
    it('SR000GGR4B_testSet028', 0, function () {
        let hashmap = new HashMap();
        hashmap.set(1, -1);
        let res = hashmap.get(1);
        expect(res).assertEqual(-1);
    })
    it('SR000GGR4B_testSet029', 0, function () {
        let hashmap = new HashMap();
        let a = {};
        hashmap.set(1,a);
        let res = hashmap.get(1);
        expect(res).assertEqual(a);
    })
    it('SR000GGR4B_testSet030', 0, function () {
        let hashmap = new HashMap();
        let i = 0;
        for (; i < 100; i++) {
            hashmap.set(1, i);
        }
        let res = hashmap.get(1);
        let res1 = hashmap.length;
        expect(res).assertEqual(99);
        expect(res1).assertEqual(1);
    })
    it('SR000GGR4B_testSet031', 0, function () {
        let hashmap = new HashMap();
        let i = 0;
        for (; i < 100; i++) {
            hashmap.set(i, 1);
        }
        let res = hashmap.get(i - 1);
        let res1 = hashmap.length;
        expect(res).assertEqual(1);
        expect(res1).assertEqual(100);
    })
    it('SR000GGR4B_testIterator032', 0, function () {
        let hashmap = new HashMap();
        let arr = [];
        try {
            for (let item of hashmap) {
                arr.push(item);
            }
        } catch (err) {
            expect(err).assertEqual("Error: Cannot create new HashMap")
        }
        expect(arr.length).assertEqual(0);
    })
    it('SR000GGR4B_testForEach033', 0, function () {
        let hashmap = new HashMap();
        let arr = [];
        try {
            hashmap.forEach((item, index) => {
                arr.push(item);
            })
        } catch (err) {
            expect(err).assertEqual("Error:Cannot create new stack")
        }
        expect(arr.length).assertEqual(0);
    })
    it('SR000GGR4B_testIsEmpty034', 0, function () {
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
    it('SR000GGR4B_testIsEmpty035', 0, function () {
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
    it('SR000GGR4B_testHasKey036', 0, function () {
        let hashmap = new HashMap();
        let res = hashmap.hasKey(8);
        expect(res).assertEqual(false);
    })
    it('SR000GGR4B_testHasValue037', 0, function () {
        let hashmap = new HashMap();
        let res = hashmap.hasValue(8);
        expect(res).assertEqual(false);
    })
    it('SR000GGR4B_testRemove038', 0, function () {
        let hashmap = new HashMap();
        try{
            let res= hashmap.remove(3);
        }catch(err){
            expect(err).assertEqual("Error: The removed element does not exist in this container")
        }
    })
    it('SR000GGR4B_testReplace039', 0, function () {
        let hashmap = new HashMap();
        let res = hashmap.replace(2,"G");
        expect(res).assertEqual(false);
    })
    it('SR000GGR4B_testGet040', 0, function () {
        let hashmap = new HashMap();
        try{
            let res = hashmap.get(3);
        }catch(err){
            expect(err).assertEqual("Error: this hashmap don't find the key")
        }
    })
    it('SR000GGR4B_testSetAll041', 0, function () {
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
    it('SR000GGR4B_testClear042', 0, function () {
        let hashmap = new HashMap();
        hashmap.clear();
        let res = hashmap.length;
        expect(res).assertEqual(0);
    })
    it('SR000GGR4B_testEntries043', 0, function () {
        let hashmap = new HashMap();
        let res = hashmap.entries();
        expect(undefined).assertEqual(res.next().value);
    })
})