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
import {TreeMap} from '@ohos.treemap'

describe('TreeMapTest', function () {

    /**
     *@tc.name:testConstructor001
     */
    it('SR000GGR3H_testConstructor001', 0, function () {
        try{
            let treemap = new TreeMap();
            expect(treemap != undefined).assertEqual(true)
        }catch(err){
            expect(err).assertEqual("Error: Cannot create new TreeMap")
        }
    })

    it('SR000GGR3H_testSet002_1', 0, function () {
        console.log("set-----001");
        let treemap = new TreeMap();
        treemap.set(0,"四");
        let res = treemap.get(0);
        console.log(res)
        expect(res).assertEqual("四")
    })

    it('SR000GGR3H_testSet002_2', 0, function () {
        console.log("set-----002");
        let treemap  = new TreeMap();
        treemap.set(0,8);
        let res = treemap.get(0)
        console.log(res)
        expect(res).assertEqual(8)
    })

    it('SR000GGR3H_testSet002_3', 0, function () {
        console.log("set-----003");
        let treemap  = new TreeMap();
        let a=[1,2,3,4]
        treemap.set(0,a);
        let res = treemap.get(0)
        console.log(res)
        expect(res).assertEqual(a)
    })

    it('SR000GGR3H_testSet002_4', 0, function () {
        console.log("set-----004");
        let treemap  = new TreeMap();
        let a={name:"lala",age:"13"}
        treemap.set(0,a);
        let res = treemap.get(0)
        console.log(res)
        expect(res).assertEqual(a)
    })

    it('SR000GGR3H_testSet002_5', 0, function () {
        console.log("set-----005");
        let treemap  = new TreeMap();
        treemap.set(2,"*");
        let res = treemap.get(2)
        console.log(res)
        expect(res).assertEqual("*")
    })

    it('SR000GGR3H_testSet002_6', 0, function () {
        console.log("set-----006");
        let treemap  = new TreeMap();
        treemap.set(-2,3.14);
        let res = treemap.get(-2)
        console.log(res)
        expect(res).assertEqual(3.14)
    })

    it('SR000GGR3H_testSet002_7', 0, function () {
        console.log("set-----007");
        let treemap  = new TreeMap();
        treemap.set(100,true);
        let res = treemap.get(100)
        console.log(res)
        expect(res).assertEqual(true)
    })

    it('SR000GGR3H_testSet002_8', 0, function () {
        console.log("set-----008");
        let treemap  = new TreeMap();
        treemap.set(100,"");
        let res = treemap.get(100)
        console.log(res)
        expect(res).assertEqual("")
    })

    it('SR000GGR3H_testSet002_9', 0, function () {
        console.log("set-----009");
        let treemap  = new TreeMap();
        treemap.set("a","四");
        let res = treemap.get("a")
        console.log(res)
        expect(res).assertEqual("四")
    })

    it('SR000GGR3H_testSet002_10', 0, function () {
        console.log("set-----0010");
        let treemap  = new TreeMap();
        for(let i = 0; i < 10000; i++){
            treemap.set(0,8);
        }
        let res = treemap.get(0)
        console.log(res)
        expect(res).assertEqual(8)
        expect(treemap.length).assertEqual(1)
    })

    it('SR000GGR3H_testHasKey003', 0, function () {
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

    it('SR000GGR3H_testHasValue004', 0, function () {
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

    it('SR000GGR3H_testGet005_1', 0, function () {
        console.log("get-----001");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        treemap.set(1,"b");
        treemap.set(2,"c");
        let res = treemap.get(1);
        console.log(res)
        expect(res).assertEqual("b");
    })

    it('SR000GGR3H_testGet005_2', 0, function () {
        console.log("get-----002");
        let treemap  = new TreeMap();
        let res = treemap.get(1);
        console.log(res)
        expect(res).assertEqual(null);
    })

    it('SR000GGR3H_testGet005_3', 0, function () {
        console.log("get-----003");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        treemap.clear();
        expect(treemap.length).assertEqual(0)
        let res = treemap.get(0);
        console.log(res)
        expect(res).assertEqual(null);
    })

    it('SR000GGR3H_testGetFirstKey006_1', 0, function () {
        console.log("getFirstKey-----001");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        treemap.set(1,"b");
        treemap.set(2,"c");
        let res = treemap.getFirstKey();
        console.log(res)
        expect(res).assertEqual(0);
    })

    it('SR000GGR3H_testGetFirstKey006_2', 0, function () {
        console.log("getFirstKey-----002");
        let treemap  = new TreeMap();
        try{
            let res = treemap.getFirstKey();
        }catch(err){
            expect(err).assertEqual("Error: don't find this key,this tree is null");
        }
    })

    it('SR000GGR3H_testGetLastKey007_1', 0, function () {
        console.log("getLastKey-----001");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        treemap.set(1,"b");
        treemap.set(2,"c");
        let res = treemap.getLastKey();
        console.log(res)
        expect(res).assertEqual(2);
    })

    it('SR000GGR3H_testGetLastKey007_2', 0, function () {
        console.log("getLastKey-----002");
        let treemap  = new TreeMap();
        try{
            let res = treemap.getLastKey();
        }catch(err){
            expect(err).assertEqual("Error: don't find this key,this tree is null");
        }
    })

    it('SR000GGR3H_testSetAll008', 0, function () {
        console.log("setAll-----001");
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

    it('SR000GGR3H_testRemove009_1', 0, function () {
        console.log("remove-----001");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        treemap.set(1,"b");
        treemap.set(2,"c");
        let res = treemap.remove(1);
        expect(res).assertEqual("b");
    })

    it('SR000GGR3H_testRemove009_2', 0, function () {
        console.log("remove-----002");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        let res = treemap.remove(1);
        expect(res).assertEqual(null);
    })

    it('SR000GGR3H_testClear010_1', 0, function () {
        console.log("clear-----001");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        treemap.set(1,"b");
        treemap.set(2,"c");
        treemap.clear();
        let res = treemap.length;
        expect(res).assertEqual(0)
    })

    it('SR000GGR3H_testClear010_2', 0, function () {
        console.log("clear-----002");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        treemap.set(1,"b");
        treemap.set(2,"c");
        treemap.clear();
        let res = treemap.length;
        expect(res).assertEqual(0)
        treemap.set(3,"d");
        let va = treemap.get(3);
        expect(va).assertEqual("d")
    })

    it('SR000GGR3H_testGetLowerKey011_1', 0, function () {
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

    it('SR000GGR3H_testGetLowerKey011_2', 0, function () {
        console.log("getLowerKey-----002");
        let treemap  = new TreeMap();
        try{
            let res = treemap.getLowerKey(2);
        }catch(err){
            expect(err).assertEqual("Error: don't find this key,this node is undefine")
        }
    })

    it('SR000GGR3H_testGetHigherKey012_1', 0, function () {
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

    it('SR000GGR3H_testGetHigherKey012_2', 0, function () {
        console.log("getHigherKey-----002");
        let treemap  = new TreeMap();
        try{
            let res = treemap.getHigherKey(2);
        }catch(err){
            expect(err).assertEqual("Error: don't find this key,this node is undefine")
        }
    })

    it('SR000GGR3H_testKeys013', 0, function () {
        console.log("keys-----001");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        treemap.set(1,"b");
        treemap.set(2,"c");
        treemap.set(3,"d");
        treemap.set(4,"g");
        console.log("keys-----001=========");
        let res = treemap.keys();
        console.log("keys-----001========= end");
        expect(res.next().value).assertEqual(0);
        expect(res.next().value).assertEqual(1);
        expect(res.next().value).assertEqual(2);
        expect(res.next().value).assertEqual(3);
        expect(res.next().value).assertEqual(4);
    })

    it('SR000GGR3H_testValues014', 0, function () {
        console.log("values-----001");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        treemap.set(1,"b");
        treemap.set(2,"c");
        treemap.set(3,"d");
        treemap.set(4,"g");
        let res = treemap.values();
        expect(res.next().value).assertEqual("a");
        expect(res.next().value).assertEqual("b");
        expect(res.next().value).assertEqual("c");
        expect(res.next().value).assertEqual("d");
        expect(res.next().value).assertEqual("g");
    })

    it('SR000GGR3H_testReplace015_1', 0, function () {
        console.log("replace-----001");
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

    it('SR000GGR3H_testReplace015_2', 0, function () {
        console.log("replace-----002");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        let res = treemap.replace(2,"B");
        expect(res).assertEqual(false);
        let res1 = treemap.get(2);
        expect(res1).assertEqual(null);
    })

    it('SR000GGR3H_testLength016_1', 0, function () {
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

    it('SR000GGR3H_testLength016_2', 0, function () {
        console.log("length-----002");
        let treemap  = new TreeMap();
        let res = treemap.length;
        console.log(res);
        expect(res).assertEqual(0)

    })

    it('SR000GGR3H_testForEach017', 0, function () {
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

    it('SR000GGR3H_testEntries018', 0, function () {
        console.log("entries-----001");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        treemap.set(1,"b");
        treemap.set(2,"c");
        treemap.set(3,"d");
        treemap.set(4,"g");
        let res = treemap.entries();
        let arr = ["0,a","1,b","2,c","3,d","4,g"];
        for(let i = 0; i < treemap.length; i++){
            expect(arr[i]).assertEqual(res.next().value);
        }
    })

    it('SR000GGR3H_testIterator019', 0, function () {
        console.log("Iterator-----001");
        let treemap  = new TreeMap();
        treemap.set(0,"a");
        treemap.set(1,"b");
        treemap.set(2,"c");
        treemap.set(3,"d");
        treemap.set(4,"g");
        let arr = ["0,a","1,b","2,c","3,d","4,g"];
        let iterArr = [];
        for(let [key,value] of treemap) {
            iterArr.push(key + "," + value);
        }
        console.log("arr-----" + arr);
        for(let i=0;i<arr.length;i++){
            expect(arr[i]).assertEqual(iterArr[i]);
        }
    })
})