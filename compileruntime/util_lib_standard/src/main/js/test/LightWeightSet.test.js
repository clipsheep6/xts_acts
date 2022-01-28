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
import {LightWeightSet} from '@ohos.lightweightset'
import {Struct} from "@ohos.struct"

describe('LightWeightSetTest', function () {
    it('SR000GGR43_testNew001', 0, function () {
        try{
            let lightweightset = new LightWeightSet();
            expect(lightweightset != undefined).assertEqual(true);
        }catch(err){
            expect(err).assertEqual("Error:Cannot create new TreeMap");
        }
    })
    it('SR000GGR43_testAdd002', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add(1);
        let res = lightweightset.has(1);
        expect(res).assertEqual(true);
    })
    it('SR000GGR43_testAdd003', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add("a");
        let res = lightweightset.has("a");
        expect(res).assertEqual(true);
    })
    it('SR000GGR43_testAdd004', 0, function () {
        let lightweightset = new LightWeightSet();
        let a =[1,2,3,4]
        lightweightset.add(a);
        let res = lightweightset.has(a);
        expect(res).assertEqual(true);
    })
    it('SR000GGR43_testAdd005', 0, function () {
        let lightweightset = new LightWeightSet();
        let c = { name: 'lili', age: '13' }
        lightweightset.add(c);
        let res = lightweightset.has(c);
        expect(res).assertEqual(true);
    })
    it('SR000GGR43_testAdd006', 0, function () {
        let lightweightset = new LightWeightSet();
        let c = false;
        lightweightset.add(c);
        let res = lightweightset.has(c);
        expect(res).assertEqual(true);
    })
    it('SR000GGR43_testLength007', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add(1);
        lightweightset.add(2);
        lightweightset.add(3);
        lightweightset.add(4);
        lightweightset.add(5);
        let res = lightweightset.length;
        expect(res).assertEqual(5);
    })

    it('SR000GGR43_testAddAll008', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add(1);
        lightweightset.add(2);
        lightweightset.add(3);
        lightweightset.add(4);
        lightweightset.add(5);
        let lightweightset1 = new LightWeightSet();
        lightweightset1.add(6);
        lightweightset1.add(7);
        let res1 = lightweightset.addAll(lightweightset1);
        for(let item of lightweightset) {
        }
        for(let item of lightweightset1) {
        }
        for(let i=1; i < 8; i++) {
            expect(lightweightset.has(i)).assertEqual(true);
        }
        expect(res1).assertEqual(true);
    })
    it('SR000GGR43_testHasAll009', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add("a");
        lightweightset.add("b");
        lightweightset.add("c");
        lightweightset.add("d");
        lightweightset.add("e");
        let lightweightset1 = new LightWeightSet();
        lightweightset1.add("a");
        lightweightset1.add("d");
        let res = lightweightset.hasAll(lightweightset1);
        expect(res).assertEqual(true);
    })
    it('SR000GGR43_testHasAllr010', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add("a");
        lightweightset.add("b");
        lightweightset.add("c");
        lightweightset.add("e");
        let lightweightset1 = new LightWeightSet();
        lightweightset1.add("a");
        lightweightset1.add("d");
        let res = lightweightset.hasAll(lightweightset1);
        expect(res).assertEqual(false);
    })

    it('SR000GGR43_testHas011', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add("a");
        lightweightset.add("b");
        lightweightset.add("c");
        lightweightset.add("d");
        lightweightset.add("e");
        let res = lightweightset.has("a");
        expect(res).assertEqual(true);
        let res1 = lightweightset.has(1);
        expect(res1).assertEqual(false);
    })

    it('SR000GGR43_testEntries012', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add(1);
        lightweightset.add(2);
        lightweightset.add(3);
        lightweightset.add(4);
        lightweightset.add(5);
        let res = lightweightset.entries();
        expect(JSON.stringify(res.next().value)).assertEqual("[1,1]");
        expect(JSON.stringify(res.next().value)).assertEqual("[2,2]");
        expect(JSON.stringify(res.next().value)).assertEqual("[3,3]");
        expect(JSON.stringify(res.next().value)).assertEqual("[4,4]");
        expect(JSON.stringify(res.next().value)).assertEqual("[5,5]");
    })
    it('SR000GGR43_testGetIndexOf013', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add(1);
        lightweightset.add(2);
        lightweightset.add(3);
        lightweightset.add(4);
        lightweightset.add(5);
        let res = lightweightset.getIndexOf(2);
        expect(res).assertEqual(1);
    })
    it('SR000GGR43_testIsEmpty014', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add(1);
        lightweightset.add(2);
        lightweightset.add(3);
        lightweightset.add(4);
        lightweightset.add(5);
        let res = lightweightset.isEmpty();
        expect(res).assertEqual(false);
    })
    it('SR000GGR43_testRemove015', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add(1);
        lightweightset.add(2);
        lightweightset.add(3);
        lightweightset.add(4);
        lightweightset.add(5);
        let res = lightweightset.remove(1);
        expect(res).assertEqual(1);
        let arr=[];
        lightweightset.forEach((value,index)=>{
            arr.push(value);
        })
        let arr1 =[2,3,4,5];
        for(let i=0;i<arr.length;i++){
            expect(arr1[i]).assertEqual(arr[i]);
        }
    })
    it('SR000GGR43_testRemoveAt016', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add(1);
        lightweightset.add(2);
        lightweightset.add(3);
        lightweightset.add(4);
        lightweightset.add(5);
        let res = lightweightset.removeAt(1);
        expect(res).assertEqual(true);
        let arr=[];
        lightweightset.forEach((value,index)=>{
            arr.push(value);
        })
        let arr1 =[1,3,4,5];
        for(let i=0;i<arr.length;i++){
            expect(arr1[i]).assertEqual(arr[i]);
        }
    })
    it('SR000GGR43_testClear017', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add(1);
        lightweightset.add(2);
        lightweightset.add(3);
        lightweightset.add(4);
        lightweightset.add(5);
        lightweightset.clear();
        let res = lightweightset.length;
        expect(res).assertEqual(0);
    })

    it('SR000GGR43_testForEach018', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add(1);
        lightweightset.add(2);
        lightweightset.add(3);
        lightweightset.add(4);
        lightweightset.add(5);
        let arr = []
        lightweightset.forEach((value,index)=>{
            arr.push(value);
        })
        let arr1= [1,2,3,4,5];
        for(let i=0;i<arr1.length;i++){
            expect(arr[i]).assertEqual(arr1[i]);
        }
    })
    it('SR000GGR43_testToString019', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add(1);
        lightweightset.add(2);
        lightweightset.add(3);
        let res = lightweightset.toString();
        expect(res).assertEqual("1,2,3");

    })
    it('SR000GGR43_testToArray020', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add(1);
        lightweightset.add(2);
        lightweightset.add(3);
        lightweightset.add(4);
        lightweightset.add(5);
        let res = lightweightset.toArray();
        let arr1= [1,2,3,4,5];
        for(let i=0;i<arr1.length;i++){
            expect(res[i]).assertEqual(arr1[i]);
        }
    })
    it('SR000GGR43_testGetValueAt021', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add(1);
        lightweightset.add(2);
        lightweightset.add(3);
        lightweightset.add(4);
        lightweightset.add(5);
        let res = lightweightset.getValueAt(1);
        expect(res).assertEqual(2);
    })
    it('SR000GGR43_testIterator022', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add(1);
        lightweightset.add(2);
        lightweightset.add(3);
        lightweightset.add(4);
        lightweightset.add(5);
        let arr=[]
        for(let item of lightweightset) {
            let res = arr.push(item);
        }
        let arr1= [1,2,3,4,5];
        for(let i=0;i<arr1.length;i++){
            expect(arr[i]).assertEqual(arr1[i]);
        }
    })
    it('SR000GGR43_testValues023', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add(1);
        lightweightset.add(2);
        lightweightset.add(3);
        lightweightset.add(4);
        lightweightset.add(5);
        let res = lightweightset.values()
        expect(res.next().value).assertEqual(1);
        expect(res.next().value).assertEqual(2);
        expect(res.next().value).assertEqual(3);
        expect(res.next().value).assertEqual(4);
        expect(res.next().value).assertEqual(5);
    })
    it('SR000GGR43_testAdd024', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add(null);
        let res = lightweightset.has(null);
        expect(res).assertEqual(true);
    })

    it('SR000GGR43_testAdd025', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add(1.23);
        let res1 = lightweightset.has(1.23);
        expect(res1).assertEqual(true);
    })

    it('SR000GGR43_testHasAll026', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add(1);
        lightweightset.add(2);
        lightweightset.add(3);
        lightweightset.add(4);
        lightweightset.add(5);
        let lightweightset1 = new LightWeightSet();
        lightweightset1.add("a1");
        lightweightset1.add("d1");
        let res = lightweightset.hasAll(lightweightset1);
        expect(res).assertEqual(false);
    })

    it('SR000GGR43_testHasAll027', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add(1);
        lightweightset.add(2);
        lightweightset.add(3);
        lightweightset.add(4);
        lightweightset.add(5);
        let lightweightset1 = new LightWeightSet();
        lightweightset1.add(1);
        lightweightset1.add("d");
        let res = lightweightset.hasAll(lightweightset1);
        expect(res).assertEqual(false);
    })

    it('SR000GGR43_testRemove028', 0, function () {
        let lightweightset = new LightWeightSet();
        try{
            let res = lightweightset.remove(3);
        }catch(err){
            expect(err).assertEqual("Error: don't find the key in lightweight")
        }
    })

    it('SR000GGR43_testRemoveAt029', 0, function () {
        let lightweightset = new LightWeightSet();
        let res = lightweightset.removeAt(1);
        expect(res).assertEqual(false);
    })

    it('SR000GGR43_testIncreaseCapacityTo030', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add(1);
        lightweightset.add(2);
        lightweightset.add(3);
        lightweightset.add(4);
        lightweightset.add(5);
        
        try{
            let res = lightweightset.increaseCapacityTo(3);
        }catch(err){
            expect(err).assertEqual("Unable to shrink capacity")
        }
    })

    it('SR000GGR43_testIncreaseCapacityTo031', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add(1);
        lightweightset.add(2);
        lightweightset.add(3);
        lightweightset.add(4);
        lightweightset.add(5);
        try{
            let res = lightweightset.increaseCapacityTo("qwe");
        }catch(err){
            expect(err).assertEqual("lightweightset: index must be int")
        }
    })

    it('SR000GGR43_testRemoveAt032', 0, function () {
        let lightweightset = new LightWeightSet();
        try{
            let res = lightweightset.removeAt("123");
        }catch(err){
            expect(err).assertEqual("lightweightset: index must be int")
        }
    })

    it('SR000GGR43_testIncreaseCapacityTo033', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add(1);
        lightweightset.add(2);
        lightweightset.add(3);
        lightweightset.add(4);
        lightweightset.add(5);
        let res = lightweightset.increaseCapacityTo(20);
        expect(res).assertEqual(undefined);
    })

    it('SR000GGR43_testGetValueAt034', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add(1);
        lightweightset.add(2);
        lightweightset.add(3);
        lightweightset.add(4);
        lightweightset.add(5);
        try{
            let res = lightweightset.getValueAt("123");
        }catch(err){
            expect(err).assertEqual("lightweightset: index must be int")
        }
    })

    it('SR000GGR43_testIsEmpty035', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add(1);
        lightweightset.add(2);
        lightweightset.add(3);
        lightweightset.add(4);
        lightweightset.add(5);
        lightweightset.clear();
        let res = lightweightset.isEmpty();
        expect(res).assertEqual(true);
    })

    it('SR000GGR43_testAdd036', 0, function () {
        let lightweightset = new LightWeightSet();
        for (let i = 0; i < 10000; i++) {
            lightweightset.add(i);
        }
        let res = lightweightset.getValueAt(9999);
        let res1 = lightweightset.length;
        expect(res).assertEqual(9999);
        expect(res1).assertEqual(10000);
    })

    it('SR000GGR43_testAdd037', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add('');
        let res = lightweightset.has('');
        expect(res).assertEqual(true);
    })

    it('SR000GGR43_testAdd038', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add('$');
        let res = lightweightset.has('$');
        expect(res).assertEqual(true);
    })

    it('SR000GGR43_testClear039', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add(1);
        lightweightset.add(2);
        lightweightset.add(3);
        lightweightset.add(4);
        lightweightset.add(5);
        let res = lightweightset.length;
        lightweightset.clear();
        let res1 = lightweightset.length;
        expect(res).assertEqual(5);
        expect(res1).assertEqual(0);
    })

    it('SR000GGR43_testRemove040', 0, function () {
        let lightweightset = new LightWeightSet();
        lightweightset.add(1);
        lightweightset.add(2);
        lightweightset.add(3);
        lightweightset.add(4);
        lightweightset.add(5);
        try{
            let res = lightweightset.remove("A");
        }catch(err){
            expect(err).assertEqual("Error: don't find the key in lightweight")
        }
    })
})
