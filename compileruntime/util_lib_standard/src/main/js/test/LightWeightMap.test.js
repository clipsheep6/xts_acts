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
import {LightWeightMap} from '@ohos.lightweightmap'

describe('SR00GGR3L_LightWeightMapTest', function () {

    /**
     *@tc.name:testConstructor001
     */
    it('SR00GGR3L_testConstructor001', 0, function () {
        console.log("Constructor-----001 lightweightmap ");
        try{
            let lightweightmap = new LightWeightMap();
            expect(lightweightmap != undefined).assertEqual(true);
        }catch(err){
            expect(err).assertEqual("Error:Cannot create new TreeMap")
        }
    })
    it('SR00GGR3L_testSet002', 0, function () {
        console.log("set key type is int and value is string");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1,"A");
        let res = lightweightmap.hasValue("A");
        expect(res).assertEqual(true);
        let res1 = lightweightmap.hasKey(1);
        expect(res1).assertEqual(true);
    })
    it('SR00GGR3L_testSet003', 0, function () {
        console.log("set key type is string and value is string");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set("a","A");
        let res = lightweightmap.hasValue("A");
        expect(res).assertEqual(true);
        let res1 = lightweightmap.hasKey("a");
        expect(res1).assertEqual(true);
    })
    it('SR00GGR3L_testSet004', 0, function () {
        console.log("set key type is int and value is array");
        let lightweightmap = new LightWeightMap();
        let a =[1,2,3,4]
        lightweightmap.set(1,a);
        let res = lightweightmap.hasValue(a);
        expect(res).assertEqual(true);
        let res1 = lightweightmap.hasKey(1);
        expect(res1).assertEqual(true);
    })
    it('SR00GGR3L_testSet005', 0, function () {
        console.log("set key type is int and value is object");
        let lightweightmap = new LightWeightMap();
        let c = { name: 'lili', age: '13' }
        lightweightmap.set(1,c);
        let res = lightweightmap.hasValue(c);
        expect(res).assertEqual(true);
        let res1 = lightweightmap.hasKey(1);
        expect(res1).assertEqual(true);
    })
    it('SR00GGR3L_testGet006', 0, function () {
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1,"A");
        lightweightmap.set(2,"B");
        lightweightmap.set(3,"C");
        lightweightmap.set(4,"D");
        lightweightmap.set(5,"E");
        let res = lightweightmap.get(4);
        expect(res).assertEqual("D");
    })
    it('SR00GGR3L_testLength007', 0, function () {
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1,"A");
        lightweightmap.set(2,"B");
        lightweightmap.set(3,"C");
        lightweightmap.set(4,"D");
        lightweightmap.set(5,"E");
        let res = lightweightmap.length;
        expect(res).assertEqual(5);
    })
    it('SR00GGR3L_testHasAll008', 0, function () {
        console.log("hasAll-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set("a","A");
        lightweightmap.set("b","B");
        lightweightmap.set("c","C");
        lightweightmap.set("d","D");
        lightweightmap.set("e","E");
        let lightweightmap1 = new LightWeightMap();
        console.log("hasAll----- set 1 ");
        lightweightmap1.set("a","A");
        lightweightmap1.set("d","D");
        console.log("hasAll----- set 2 ");
        let res = lightweightmap.hasAll(lightweightmap1);
        console.log("hasAll-----001  " + res);
        expect(res).assertEqual(true);
    })
    it('SR00GGR3L_testHasKey009', 0, function () {
        console.log("hasKey-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set("a", "A");
        lightweightmap.set("b", "B");
        lightweightmap.set("c", "C");
        lightweightmap.set("d", "D");
        lightweightmap.set("e", "E");
        let res = lightweightmap.hasKey("a");
        expect(res).assertEqual(true);
        let res1 = lightweightmap.hasKey(1);
        expect(res1).assertEqual(false);
    })
    it('SR00GGR3L_testHasValue010', 0, function () {
        console.log("hasValue-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set("a", "A");
        lightweightmap.set("b", "B");
        lightweightmap.set("c", "C");
        lightweightmap.set("d", "D");
        lightweightmap.set("e", "E");
        let res = lightweightmap.hasValue("A");
        expect(res).assertEqual(true);
        let res1 = lightweightmap.hasValue(1);
        expect(res1).assertEqual(false);
    })
    it('SR00GGR3L_testIncreaseCapacityTo011', 0, function () {
        console.log("when there is 5 elements int lightweightmap, then change Capacity to 3 ");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set("a", "A");
        lightweightmap.set("b", "B");
        lightweightmap.set("c", "C");
        lightweightmap.set("d", "D");
        lightweightmap.set("e", "E");
        let res = lightweightmap.increaseCapacityTo(3);
        expect(res).assertEqual(undefined);
    })
    it('SR00GGR3L_testEntries012', 0, function () {
        console.log("Entries-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        let res = lightweightmap.entries();
        expect(JSON.stringify(res.next().value)).assertEqual("[1,\"A\"]");
        expect(JSON.stringify(res.next().value)).assertEqual("[2,\"B\"]");
        expect(JSON.stringify(res.next().value)).assertEqual("[3,\"C\"]");
        expect(JSON.stringify(res.next().value)).assertEqual("[4,\"D\"]");
        expect(JSON.stringify(res.next().value)).assertEqual("[5,\"E\"]");
    })
    it('SR00GGR3L_testGetIndexOfKey013', 0, function () {
        console.log("getIndexOfKey-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        let res = lightweightmap.getIndexOfKey(2);
        console.log(res);
        expect(res).assertEqual(1);
    })
    it('SR00GGR3L_testGetIndexOfValue014', 0, function () {
        console.log("getIndexOfValue-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        lightweightmap.setValueAt(4, "F");
        let res = lightweightmap.getIndexOfValue("F");
        console.log("getIndexOfValue-------------------------" + res);
        expect(res).assertEqual(4);
    })
    it('SR00GGR3L_testIsEmpty015', 0, function () {
        let lightweightmap = new LightWeightMap();
        let res1 = lightweightmap.isEmpty();
        expect(res1).assertEqual(true);
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        let res2 = lightweightmap.isEmpty();
        expect(res2).assertEqual(false);
    })
    it('SR00GGR3L_testGetKeyAt016', 0, function () {
        console.log("getKeyAt-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        let res = lightweightmap.getKeyAt(1);
        console.log(res);
        expect(res).assertEqual(2);
    })
    it('SR00GGR3L_testKeys017', 0, function () {
        console.log("keys-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        let res = lightweightmap.keys();
        expect(res.next().value).assertEqual(1);
        expect(res.next().value).assertEqual(2);
        expect(res.next().value).assertEqual(3);
        expect(res.next().value).assertEqual(4);
        expect(res.next().value).assertEqual(5);
    })
    it('SR00GGR3L_testSetAll018', 0, function () {
        console.log("setAll-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        let lightweightmap1 = new LightWeightMap();
        lightweightmap1.set(6, "A");
        lightweightmap1.set(7, "B");
        lightweightmap.setAll(lightweightmap1);
        for(let i=1; i < 8; i++) {
            console.log("HashKey-----" + lightweightmap1.hasKey(i));
            expect(lightweightmap1.hasKey(i)).assertEqual(true);
        }
    })

    it('SR00GGR3L_testRemove019', 0, function () {
        console.log("Remove-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        let res = lightweightmap.remove(3);
        expect(res).assertEqual("C");
        let res1 = lightweightmap.hasValue("C");
        expect(res1).assertEqual(false);
    })

    it('SR00GGR3L_testRemoveAt020', 0, function () {
        console.log("removeAt-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        let res = lightweightmap.removeAt(1);
        console.log("res-----" + res);
        expect(res).assertEqual(true);
        let res1 = lightweightmap.hasValue("A");
        console.log("res1-----" + res1);
        expect(res1).assertEqual(true);
        let res2 = lightweightmap.hasValue("B");
        console.log("res2-----" + res2);
        expect(res2).assertEqual(false);
        let res3 = lightweightmap.removeAt(10);
        console.log("res3-----" + res3);
        expect(res3).assertEqual(false);
    })

    it('SR00GGR3L_testClear021', 0, function () {
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        lightweightmap.clear();
        let res = lightweightmap.length;
        expect(res).assertEqual(0);
        let isEmpty = lightweightmap.isEmpty();
        expect(isEmpty).assertEqual(true);
    })
    it('SR00GGR3L_testSetValueAt022', 0, function () {
        console.log("setValueAt-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        lightweightmap.setValueAt(0,"a");
        let res = lightweightmap.get(1);
        expect(res).assertEqual("a");
    })
    it('SR00GGR3L_testForEach023', 0, function () {
        console.log("forEach-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        let arr = []
        lightweightmap.forEach((value,index)=>{
            arr.push(value);
        })
        let arr1= ["A","B","C","D","E"];
        for(let i=0;i<arr1.length;i++){
            expect(arr[i]).assertEqual(arr1[i]);
        }

    })
    it('SR00GGR3L_testToString024', 0, function () {
        console.log("toString-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        let res = lightweightmap.toString();
        expect(res).assertEqual("1:A,2:B,3:C");

    })
    it('SR00GGR3L_testValues025', 0, function () {
        console.log("values-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        let res = lightweightmap.values();
        //        for(let i = 0; i < lightweightmap.length; i++){
        //            console.log(JSON.stringify(res.next()));
        //        }
        expect(res.next().value).assertEqual("A");
        expect(res.next().value).assertEqual("B");
        expect(res.next().value).assertEqual("C");
        expect(res.next().value).assertEqual("D");
        expect(res.next().value).assertEqual("E");
    })
    it('SR00GGR3L_testGetValueAt026', 0, function () {
        console.log("getValueAt-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        let res = lightweightmap.getValueAt(1);
        expect(res).assertEqual("B");
    })
    it('SR00GGR3L_testIterator027', 0, function () {
        console.log("iterator-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        let arr=[]
        for(let item of lightweightmap){
            arr.push(item)
        }
        let arr1= ["1,A","2,B","3,C","4,D","5,E"];
        for(let i=0;i<arr1.length;i++){
            expect(arr[i]).assertEqual(arr1[i]);
        }
    })
    it('SR00GGR3L_testSet028', 0, function () {
        console.log("set key type is int and value is null");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, null);
        let res = lightweightmap.hasValue(null);
        expect(res).assertEqual(true);
        let res1 = lightweightmap.hasKey(1);
        expect(res1).assertEqual(true);
    })
    it('SR00GGR3L_testSet029', 0, function () {
        console.log("set key type is null and value is null");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(null, null);
        let res = lightweightmap.hasValue(null);
        expect(res).assertEqual(true);
        let res1 = lightweightmap.hasKey(null);
        expect(res1).assertEqual(true);
    })

    it('SR00GGR3L_testSet030', 0, function () {
        console.log("set key type is boolean and value is boolean");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(true, false);
        let res = lightweightmap.hasValue(false);
        expect(res).assertEqual(true);
        let res1 = lightweightmap.hasKey(true);
        expect(res1).assertEqual(true);
    })

    it('SR00GGR3L_testSet031', 0, function () {
        console.log("set key type is double and value is double");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1.23, 321);
        let res = lightweightmap.hasValue(321);
        expect(res).assertEqual(true);
        let res1 = lightweightmap.hasKey(1.23);
        expect(res1).assertEqual(true);
    })

    it('SR00GGR3L_testHasAll032', 0, function () {
        console.log("lightweightmap1 has dif value and key with lightweightmap");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set("a","A");
        lightweightmap.set("b","B");
        lightweightmap.set("c","C");
        lightweightmap.set("d","D");
        lightweightmap.set("e","E");
        let lightweightmap1 = new LightWeightMap();
        lightweightmap1.set("a1","A1");
        lightweightmap1.set("d1","D1");
        let res = lightweightmap.hasAll(lightweightmap1);
        expect(res).assertEqual(false);
    })

    it('SR00GGR3L_testHasAll033', 0, function () {
        console.log("lightweightmap1 has dif value with lightweightmap");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set("a","A");
        lightweightmap.set("b","B");
        lightweightmap.set("c","C");
        lightweightmap.set("d","D");
        lightweightmap.set("e","E");
        let lightweightmap1 = new LightWeightMap();
        lightweightmap1.set("a","A1");
        lightweightmap1.set("d","D1");
        let res = lightweightmap.hasAll(lightweightmap1);
        expect(res).assertEqual(false);
    })

    it('SR00GGR3L_testRemove034', 0, function () {
        console.log("when lightweightmap is empty");
        let lightweightmap = new LightWeightMap();
        try{
            let res = lightweightmap.remove(3);
            console.log(res)
        }catch(err){
            console.log("RemoveError-----" + err);
            expect(err).assertEqual("Error: don't find the key in lightweight")
        }
    })

    it('SR00GGR3L_testRemoveAt035', 0, function () {
        console.log("when lightweightmap is empty");
        let lightweightmap = new LightWeightMap();
        let res = lightweightmap.removeAt(1);
        expect(res).assertEqual(false);
    })

    it('SR00GGR3L_testIncreaseCapacityTo036', 0, function () {
        console.log("when there is 5 elements int lightweightmap, then change Capacity to 10 ");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set("a", "A");
        lightweightmap.set("b", "B");
        lightweightmap.set("c", "C");
        lightweightmap.set("d", "D");
        lightweightmap.set("e", "E");
        let res = lightweightmap.increaseCapacityTo(10);
        expect(res).assertEqual(undefined);
    })

    it('SR00GGR3L_testIncreaseCapacityTo037', 0, function () {
        console.log("when there is 5 elements int lightweightmap, then set index like string ");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set("a", "A");
        lightweightmap.set("b", "B");
        lightweightmap.set("c", "C");
        lightweightmap.set("d", "D");
        lightweightmap.set("e", "E");
        try{
            let res = lightweightmap.increaseCapacityTo("qwe");
        }catch(err){
            expect(err).assertEqual("lightweightmap: index must be int")
        }
    })

    it('SR00GGR3L_testRemoveAt038', 0, function () {
        console.log("when index is string");
        let lightweightmap = new LightWeightMap();
        try{
            let res = lightweightmap.removeAt("123");
        }catch(err){
            expect(err).assertEqual("lightweightmap: index must be int")
        }
    })

    it('SR00GGR3L_testGetValueAt040', 0, function () {
        console.log("when index is string");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        try{
            let res = lightweightmap.getValueAt("123");
        }catch(err){
            expect(err).assertEqual("lightweightmap: index must be int")
        }
    })

    it('SR00GGR3L_testGetKeyAt041', 0, function () {
        console.log("when index is string");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        try{
            let res = lightweightmap.getKeyAt("123");
        }catch(err){
            expect(err).assertEqual("lightweightmap: index must be int")
        }
    })

    it('SR00GGR3L_testHasAll042', 0, function () {
        console.log("lightweightmap1 and lightweightmap are both empty");
        let lightweightmap = new LightWeightMap();
        let lightweightmap1 = new LightWeightMap();
        let res = lightweightmap.hasAll(lightweightmap1);
        expect(res).assertEqual(true);
    })

    it('SR00GGR3L_testSet043', 0, function () {
        console.log("Add 100 elements with the same value");
        let lightweightmap = new LightWeightMap();
        for (let i = 0; i < 100; i++) {
            lightweightmap.set(i,"A");
            console.log("length-----" + lightweightmap.length);
        }
        let res = lightweightmap.get(99);
        expect(res).assertEqual("A");
        let res1 = lightweightmap.length;
        expect(res1).assertEqual(100);
    })

    it('SR00GGR3L_testSet044', 0, function () {
        console.log("Add 100 elements with the same key and value is int");
        let lightweightmap = new LightWeightMap();
        for (let i = 0; i < 100; i++) {
            lightweightmap.set(1,i);
            console.log("length-----" + lightweightmap.length);
        }
        let res = lightweightmap.get(1);
        expect(res).assertEqual(99);
        let res1 = lightweightmap.length;
        expect(res1).assertEqual(1);
    })

    it('SR00GGR3L_testSet045', 0, function () {
        console.log("Add 10000 elements and key/value is int");
        let lightweightmap = new LightWeightMap();
        for (let i = 0; i < 10000; i++) {
            lightweightmap.set(i, i);
            console.log("length-----" + lightweightmap.length);
        }
        let res1 = lightweightmap.length;
        expect(res1).assertEqual(10000);

        for (let index = 0; index < 10000; index++) {
            let resKey = lightweightmap.hasKey(index);
            expect(resKey).assertEqual(true);
            let resValue = lightweightmap.hasValue(index);
            expect(resValue).assertEqual(true);
        }
    })

    it('SR00GGR3L_testSet046', 0, function () {
        console.log("Add 10000 elements and key/value is positive number and negative number");
        let lightweightmap = new LightWeightMap();
        for (let i = 0; i < 5000; i++) {
            lightweightmap.set(i, i);
            console.log("length-----" + lightweightmap.length);
        }

        for (let i = -1; i > -5001; i--) {
            lightweightmap.set(i, i);
            console.log("length-----" + lightweightmap.length);
        }

        let res1 = lightweightmap.length;
        expect(res1).assertEqual(10000);

        for (let index = 0; index < 5000; index++) {
            let resKey = lightweightmap.hasKey(index);
            expect(resKey).assertEqual(true);
            let resValue = lightweightmap.hasValue(index);
            expect(resValue).assertEqual(true);
        }

        for (let i = -1; i > -5001; i--) {
            let resKey = lightweightmap.hasKey(i);
            expect(resKey).assertEqual(true);
            let resValue = lightweightmap.hasValue(i);
            expect(resValue).assertEqual(true);
        }
    })

    it('SR00GGR3L_testSet047', 0, function () {
        console.log("set key type is bool and value is double");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(true, 0.001);
        let res = lightweightmap.hasValue(0.001);
        expect(res).assertEqual(true);
        let res1 = lightweightmap.hasKey(true);
        expect(res1).assertEqual(true);
    })

    it('SR00GGR3L_testSet048', 0, function () {
        console.log("set key type is array and value is boolean");
        let lightweightmap = new LightWeightMap();
        let a =[1,2,3,4]
        lightweightmap.set(a, 1);
        let res = lightweightmap.hasValue(1);
        expect(res).assertEqual(true);
        let res1 = lightweightmap.hasKey(a);
        expect(res1).assertEqual(true);
    })

    it('SR00GGR3L_testSet049', 0, function () {
        console.log("set key type is object and value is null string");
        let lightweightmap = new LightWeightMap();
        let a = { abc: 1 }
        lightweightmap.set(a, '');
        let res = lightweightmap.hasValue('');
        expect(res).assertEqual(true);
        let res1 = lightweightmap.hasKey(a);
        expect(res1).assertEqual(true);
    })

    it('SR00GGR3L_testGet050', 0, function () {
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1,"A");
        lightweightmap.set(2,"B");
        lightweightmap.set(3,"C");
        lightweightmap.set(4,"D");
        lightweightmap.set(5,"E");
        let res = lightweightmap.get(10);
        expect(res).assertEqual(null);
    })

    it('SR00GGR3L_testHasAll051', 0, function () {
        console.log("lightweightmap1 has dif with lightweightmap");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set("a","A");
        lightweightmap.set("b","B");
        lightweightmap.set("c","C");
        lightweightmap.set("d","D");
        lightweightmap.set("e","E");
        let lightweightmap1 = new LightWeightMap();
        lightweightmap1.set("a","A");
        lightweightmap1.set("d","D1");
        let res = lightweightmap.hasAll(lightweightmap1);
        expect(res).assertEqual(false);
    })
    
})