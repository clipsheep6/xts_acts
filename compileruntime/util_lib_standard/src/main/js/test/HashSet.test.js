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
import {HashSet} from '@ohos.hashset'
describe('HashSetTest', function () {

    /**
     *@tc.name:testConstructor001
     */
    it('SR000GGR3J_testNew001', 0, function () {
        try{
            let hashset = new HashSet();
        }catch(err){
            expect(err).assertEqual("Error: Cannot create new HashSet")
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

        let i = 0;
        for(; i < arr.length; i++){
            console.log(arr[i]);
            let has = hashset.has(arr[i]);
            expect(has).assertEqual(true);
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
        let i = 0;
        for(; i < hashset.length; i++){
            let has = hashset.has(res.next().value);
            expect(has).assertEqual(true);
        }
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
        for(let i = 0; i < arr.length; i++){
            console.log(arr[i]);
            let has = hashset.has(arr[i]);
            expect(has).assertEqual(true);
        }

    })
    it('SR000GGR3J_testIterator013', 0, function () {
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
        for(let i = 0; i < arr.length; i++){
            console.log(arr[i]);
            let has = hashset.has(arr[i]);
            expect(has).assertEqual(true);
        }
    })
    it('SR000GGR3J_testIterator014', 0, function () {
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
        for(let i = 0; i < arr.length; i++){
            console.log(arr[i]);
            let has = hashset.has(arr[i]);
            expect(has).assertEqual(true);
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
        let i = 0;
        for(; i < hashset.length; i++){
            let has = hashset.has(res.next().value[1]);
            expect(has).assertEqual(true);
        }
    })
    it('SR000GGR3J_testAdd016',0, function () {
        console.log("add-----005");
        let hashset = new HashSet();
        hashset.add('');
        let res = hashset.has('');
        console.log(res);
        expect(res).assertEqual(true);
    })
    it('SR000GGR3J_testAdd017',0, function () {
        console.log("add-----006");
        let hashset = new HashSet();
        hashset.add('$');
        let res = hashset.has('$');
        console.log(res);
        expect(res).assertEqual(true);
    })
    it('SR000GGR3J_testAdd017',0, function () {
        console.log("add-----007");
        let hashset = new HashSet();
        hashset.add(1.34);
        let res = hashset.has(1.34);
        console.log(res);
        expect(res).assertEqual(true);
    })
    it('SR000GGR3J_testAdd018',0, function () {
        console.log("add-----008");
        let hashset = new HashSet();
        hashset.add(-1);
        let res = hashset.has(-1);
        console.log(res);
        expect(res).assertEqual(true);
    })
    it('SR000GGR3J_testAdd019',0, function () {
        console.log("add-----009");
        let hashset = new HashSet();
        let a = {};
        hashset.add(a);
        let res = hashset.has(a);
        console.log(res);
        expect(res).assertEqual(true);
    })
    it('SR000GGR3J_testAdd020',0, function () {
        console.log("add-----010");
        let hashset = new HashSet();
        let i = 0;
        for (; i < 100; i++) {
            hashset.add(i);
        }
        let res = hashset.has(i - 1);
        let res1 = hashset.length;
        console.log(res);
        console.log(res1);
        expect(res).assertEqual(true);
        expect(res1).assertEqual(100);
    })
    it('SR000GGR3J_testIterator021', 0, function () {
        console.log("iterator-----004");
        let hashset = new HashSet();
        let i = 0;
        for(let item of hashset){
            expect(item).assertEqual(i);
            i++;
        }
    })
    it('SR000GGR3J_testForEach022', 0, function () {
        console.log("forEach-----002");
        let hashset = new HashSet();
        let arr = [];
        hashset.forEach((value,index)=>{
            arr.push(value);
        })
        expect(arr.length).assertEqual(0);
    })
    it('SR000GGR3J_testIsEmpty023', 0, function () {
        console.log("isEmpty-----002");
        let hashset = new HashSet();
        hashset.add(4);
        hashset.add(1);
        hashset.add(3);
        hashset.add(2);
        hashset.add(5);
        hashset.clear();
        let res = hashset.isEmpty();
        expect(res).assertEqual(true);
    })
    it('SR000GGR3J_testHas024', 0, function () {
        console.log("has-----002");
        let hashset = new HashSet();
        let res = hashset.has(1);
        console.log(res);
        expect(res).assertEqual(false);
    })
    it('SR000GGR3J_testRemove025', 0, function () {
        console.log("remove-----002");
        let hashset = new HashSet();
        let res = hashset.remove(1);
        console.log(res);
        expect(res).assertEqual(false);
    })
    it('SR000GGR3J_testClear026', 0, function () {
        console.log("clear-----002");
        let hashset = new HashSet();
        let res = hashset.clear();
        console.log("res-----" + res);
        expect(res).assertEqual(undefined);

    })
    it('SR000GGR3J_testEntries027', 0, function () {
        console.log("entries-----002");
        let hashset = new HashSet();
        let res = hashset.entries();
        expect(res.next().value).assertEqual(undefined);

    })
    it('SR000GGR3J_testIterator028', 0, function () {
        console.log("iterator-----003");
        let hashset = new HashSet();
        let i = 0;
        for (; i < 100; i++) {
            let text = hashset.add(i);
            console.log("text-----" + i + "-------" + text);
        }
        let arr = [];
        for(let item of hashset){
            //console.log("item-----" + JSON.stringify((item)));
            arr.push(Number.parseInt(item));
            console.log("Number-----" + Number.parseInt(item));
        }
        for (i = 0; i < 100; i++) {
            let a = arr[i];
            let res = hashset.has(a);
            expect(res).assertEqual(true);
        }
    })
    it('SR000GGR3J_testForEach029', 0, function () {
        console.log("forEach-----003");
        let hashset = new HashSet();
        let i = 0;
        for (; i < 100; i++) {
            hashset.add(i);
        }
        let arr = [];
        hashset.forEach((value,index)=>{
            arr.push(value);
            console.log("value-----" + JSON.stringify((value)));
        })
        for (i = 0; i < 100; i++) {
            let a = arr[i];
            let res = hashset.has(a);
            console.log("arr[i]-----" + arr[i]);
            expect(res).assertEqual(true);
        }
    })
    it('SR000GGR3J_testAdd030', 0, function () {
        console.log("add-----011");
        let hashset = new HashSet();
        hashset.add(1);
        hashset.add(1);
        let has = hashset.has(1);
        let size = hashset.length;
        expect(has).assertEqual(true);
        expect(size).assertEqual(1);
    })
})