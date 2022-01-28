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
import {ArrayList} from '@ohos.arraylist'

describe('ArraylistTest', function () {
    it('SR000GGR44_testConstructor001', 0, function () {
         try{
             let arraylist = new ArrayList();
             expect(arraylist != undefined).assertEqual(true)
         }catch(err){
             expect(err).assertEqual("Error: Cannot create new arraylist")
         }
    })
    it('SR000GGR44_testAdd002', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add("四");
        let res = arraylist.has("四")
        expect(res).assertEqual(true)
    })
    it('SR000GGR44_testAdd003', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add(8);
        let res = arraylist.has(8)
        expect(res).assertEqual(true)
    })
    it('SR000GGR44_testAdd004 ', 0, function () {
        let arraylist = new ArrayList();
        let a={name:'lala',age:'13岁'}
        arraylist.add(a);
        let res = arraylist.has(a)
        expect(res).assertEqual(true)
    })
    it('SR000GGR44_testAdd005 ', 0, function () {
        let arraylist = new ArrayList();
        let a=[1,2,3,4]
        arraylist.add(a);
        let res = arraylist.has(a)
        expect(res).assertEqual(true)
    })
    it('SR000GGR44_testAdd006 ', 0, function () {
        let arraylist = new ArrayList();
        let a = true
        arraylist.add(a);
        let res = arraylist.has(a)
        expect(res).assertEqual(true)
    })
    it('SR000GGR44_testInsert007', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add("四");
        arraylist.add("三");
        arraylist.add(1);
        arraylist.add('a')
        arraylist.insert(8,2)
        let arr=[];
        arraylist.forEach((item,index)=>{
            arr.push(item);
        })
        let a=["四","三",8,1,"a"];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR44_testLength008', 0, function () {
        let arraylist= new ArrayList();
        arraylist.add("四");
        arraylist.add("三");
        arraylist.add(1);
        arraylist.add('a')
        arraylist.insert(8,2)
        let res = arraylist.length;
        expect(res).assertEqual(5)
    })
    it('SR000GGR44_testHas009', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add("四");
        arraylist.add("三");
        arraylist.add(1);
        arraylist.add('a')
        arraylist.insert(8,2)
        let res = arraylist.has(8);
        expect(res).assertEqual(true);
    })

    it('SR000GGR44_testGetIndexOf010', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add(1);
        arraylist.add("三");
        arraylist.add(1);
        arraylist.add('a')
        arraylist.insert(1,2)
        let res1 = arraylist.getIndexOf(1)
        expect(res1).assertEqual(0);
    })

    it('SR000GGR44_testRemoveByIndex011', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add("四");
        arraylist.add("三");
        arraylist.add(1);
        arraylist.add("a")
        arraylist.removeByIndex(2);
        let arr=[];
        arraylist.forEach((item,index)=>{
            arr.push(item);
        })
        let a=["四","三","a"];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR44_testRemove012', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add("四");
        arraylist.add("三");
        arraylist.add(1);
        arraylist.add('a')
        arraylist.remove("三");
        let res=arraylist.has("三");
        expect(res).assertEqual(false);
    })

    it('SR000GGR44_testGetLastIndexOf013', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add("四");
        arraylist.add("三");
        arraylist.add(1);
        arraylist.add('a');
        arraylist.add(1);
        arraylist.add("b");
        let res = arraylist.getLastIndexOf(1);
        expect(res).assertEqual(4);
    })

    it('SR000GGR44_testRemoveByRange014', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add("四");
        arraylist.add("三");
        arraylist.add(1);
        arraylist.add("a");
        arraylist.add(1);
        arraylist.add("b");
        arraylist.add("c");
        arraylist.add(1);
        arraylist.removeByRange(1,3);
        let arr=[];
        arraylist.forEach((item,index)=>{
            arr.push(item);
        })
        let a=["四","a",1,"b","c",1];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })

    it('SR000GGR44_testReplaceAllElements015', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add(4);
        arraylist.add(3);
        arraylist.add(1);
        arraylist.add(2);
        arraylist.add(14);
        arraylist.replaceAllElements((item, index) => {
           return (item = 2 * item);
         });
        let arr=[];
        arraylist.forEach((item,index)=>{
            arr.push(item);
        })
        let a=[8,6,2,4,28];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })

    it('SR000GGR44_testForEach016', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add(4);
        arraylist.add(3);
        arraylist.add(1);
        arraylist.add(2);
        arraylist.add(14);
        let arr=[];
        arraylist.forEach((item,index)=>{
            arr.push(item);
        })
        let a=[4,3,1,2,14];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })

    it('SR000GGR44_testSubArrayList017', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add(4);
        arraylist.add(3);
        arraylist.add(1);
        arraylist.add(2);
        arraylist.add(14);
        let subArr = arraylist.subArrayList(2,4);
        let arr=[];
        subArr.forEach((item,index)=>{
            arr.push(item);
        })
        let a=[1,2];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })

    it('SR000GGR44_testClear018', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add(4);
        arraylist.add(3);
        arraylist.add(1);
        arraylist.add(2);
        arraylist.add(14);
        arraylist.clear();
        let res = arraylist.length;
        expect(res).assertEqual(0)
    })

    it('SR000GGR44_testConvertToArray19', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add(4);
        arraylist.add(3);
        arraylist.add(1);
        arraylist.add(2);
        arraylist.add(14);
       let arr= arraylist.convertToArray()
        let a=[4,3,1,2,14];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })

    it('SR000GGR44_testClone020', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add(4);
        arraylist.add(3);
        arraylist.add(1);
        arraylist.add(2);
        arraylist.add(14);
        let res = arraylist.clone();
        let arr =[]
        res.forEach((item,index)=>{
            arr.push(item);
        })
        let a=[4,3,1,2,14];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })

    it('SR000GGR44_testGetCapacity021', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add(4);
        arraylist.add(3);
        arraylist.add(1);
        arraylist.add(2);
        arraylist.add(14);
        let res = arraylist.getCapacity();
        expect(res).assertEqual(10)
    })

    it('SR000GGR44_testGetCapacity022', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add(4);
        arraylist.add(3);
        arraylist.add(1);
        arraylist.add(2);
        arraylist.add(14);
        arraylist.add('a');
        arraylist.add('b');
        arraylist.add('c');
        arraylist.add('d');
        arraylist.add('v');
        let a=[1,2,3,4];
        arraylist.add(a);
        let res = arraylist.getCapacity();
        expect(res).assertEqual(15)
    })

    it('SR000GGR44_testIncreaseCapacityTo023', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add(4);
        arraylist.add(3);
        arraylist.add(1);
        arraylist.add(2);
        arraylist.add(14);
        arraylist.increaseCapacityTo(8);
        let res = arraylist.getCapacity();
        expect(res).assertEqual(8)
    })

    it('SR000GGR44_testTrimToCurrentLength024', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add(4);
        arraylist.add(3);
        arraylist.add(1);
        arraylist.add(2);
        arraylist.add(14);
        arraylist.trimToCurrentLength();
        let res = arraylist.getCapacity();
        expect(res).assertEqual(5)
    })

    it('SR000GGR44_testIterator025', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add(8);
        arraylist.add("一")
        arraylist.add("二")
        arraylist.add(5);
        let c=[1,2,3,4];
        arraylist.add(c);
        arraylist.add(6);
        arraylist.add("三")
        arraylist.add("四")
        let arr =[]
        for(let item of arraylist) {
            arr.push(item);
        }
        let a = [8,"一","二",5,c,6,"三","四"]
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })

    it('SR000GGR44_testSort026', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add(4);
        arraylist.add(3);
        arraylist.add(1);
        arraylist.add(2);
        arraylist.add(14);
        arraylist.sort((a,b) => a-b);
        let arr=[];
        arraylist.forEach((item,index)=>{
            arr.push(item);
        })
        let a=[1,2,3,4,14];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })

    it('SR000GGR44_testInsert0027', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add("四");
        arraylist.add("三");
        arraylist.add(1);
        arraylist.add('a')
        try{
            let res = arraylist.insert(8,-1);
        }catch(err){
            expect(err).assertEqual("Error: ArrayList: get out-of-bounds")
        }
    })

    it('SR000GGR44_testInsert0028', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add("四");
        arraylist.add("三");
        arraylist.add(1);
        arraylist.add('a')
        try{
            let res = arraylist.insert(8,10);
        }catch(err){
            expect(err).assertEqual("Error: ArrayList: set out-of-bounds")
        }
    })

    it('SR000GGR44_testInsert029', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add("四");
        arraylist.add("三");
        arraylist.add(1);
        arraylist.add('a')
        try{
            let res = arraylist.insert(8,11);
        }catch(err){
            expect(err).assertEqual("Error: ArrayList: set out-of-bounds")
        }
    })

    it('SR000GGR44_testisEmpty030', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add(4);
        arraylist.add(3);
        arraylist.add(1);
        arraylist.add(2);
        arraylist.add(14);
        arraylist.clear();
        let res = arraylist.isEmpty();
        expect(res).assertEqual(true)
    })

    it('SR000GGR44_testisEmpty031', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add(4);
        arraylist.add(3);
        arraylist.add(1);
        arraylist.add(2);
        arraylist.add(14);
        let res = arraylist.isEmpty();
        expect(res).assertEqual(false)
    })

    it('SR000GGR44_testHas032', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add("四");
        arraylist.add("三");
        arraylist.add(1);
        arraylist.add('a')
        arraylist.insert(8,2)
        let res = arraylist.has("二")
        expect(res).assertEqual(false);
    })

    it('SR000GGR44_testGetIndexOf033', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add(1);
        arraylist.add("三");
        arraylist.add(1);
        arraylist.add('a')
        arraylist.insert(1,2)
        let res = arraylist.getIndexOf("A")
        expect(res).assertEqual(-1);
    })

    it('SR000GGR44_testRemove034', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add("四");
        arraylist.add("三");
        arraylist.add(1);
        arraylist.add('a');
        let res = arraylist.remove("A");
        expect(res).assertEqual(false);
    })

    it('SR000GGR44_testRemoveByIndex035', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add(0);
        arraylist.add(1);
        arraylist.add(2);
        arraylist.add(1);
        arraylist.add(3);
        arraylist.add(1);
        arraylist.forEach((item,index)=>{
        if(item == 1){
            arraylist.remove(item);
        }
        })
        let arr=[];
        arraylist.forEach((item,index)=>{
            arr.push(item);
        })
        let a = [0,2,3];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })

    it('SR000GGR44_testRemoveByIndex036', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add("a");
        arraylist.add("b");
        arraylist.add("c");
        arraylist.add("a");
        arraylist.add("b");
        try {
            let res = arraylist.removeByIndex(5);
        } catch (err) {
            expect(err).assertEqual("Error: removeByIndex is out-of-bounds")
        }
    })

    it('SR000GGR44_testRemoveByRange037', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add("四");
        arraylist.add("三");
        arraylist.add(1);
        arraylist.add("a");
        arraylist.add(1);
        arraylist.add("b");
        arraylist.add("c");
        arraylist.add(1);
        try{
            let res = arraylist.removeByRange(3,1);
        }catch(err){
            expect(err).assertEqual("Error: fromIndex cannot be less than or equal to toIndex")
        }
    })

    it('SR000GGR44_testRemoveByRange038', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add("四");
        arraylist.add("三");
        arraylist.add(1);
        arraylist.add("a");
        arraylist.add(1);
        try{
            let res = arraylist.removeByRange(6,8);
        }catch(err){
            expect(err).assertEqual("Error: ArrayList: set out-of-bounds")
        }
    })

    it('SR000GGR44_testRemoveByRange039', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add("四");
        arraylist.add("三");
        arraylist.add(1);
        arraylist.add("a");
        arraylist.add(1);
        arraylist.add("b");
        arraylist.add("c");
        arraylist.add(1);
        arraylist.removeByRange(0,9);
        let res = arraylist.length;
        let res1 = arraylist.getLastIndexOf(1);
        expect(res).assertEqual(1);
        expect(res1).assertEqual(0);
    })

    it('SR000GGR44_testSubArrayList040', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add(4);
        arraylist.add(3);
        arraylist.add(1);
        arraylist.add(2);
        arraylist.add(14);
        try{
            let subArr = arraylist.subArrayList(4,2);
        }catch(err){
            expect(err).assertEqual("Error: fromIndex cannot be less than or equal to toIndex")
        }
    })

    it('SR000GGR44_testSubArrayList041', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add(4);
        arraylist.add(3);
        arraylist.add(1);
        arraylist.add(2);
        arraylist.add(14);
        let subArr = arraylist.subArrayList(0,6);
        let arr=[];
        arraylist.forEach((item,index)=>{
            arr.push(item);
        })
        let a=[4,3,1,2,14];
        for(let i=0;i<a.length;i++){
            expect(a[i]).assertEqual(arr[i])
        }
    })

    it('SR000GGR44_testSubArrayList042', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add(4);
        arraylist.add(3);
        arraylist.add(1);
        arraylist.add(2);
        arraylist.add(14);
        try{
            let subArr = arraylist.subArrayList(6,9);
        }catch(err){
            expect(err).assertEqual("Error: fromIndex or toIndex is out-of-bounds")
        }
    })

    it('SR000GGR44_testIncreaseCapacityTo043', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add(4);
        arraylist.add(3);
        arraylist.add(1);
        arraylist.add(2);
        arraylist.add(14);
        arraylist.increaseCapacityTo(-1);
        let res = arraylist.getCapacity();
        expect(res).assertEqual(10)
    })

    it('SR000GGR44_testIncreaseCapacityTo044', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add(4);
        arraylist.add(3);
        arraylist.add(1);
        arraylist.add(2);
        arraylist.add(14);
        try{
            let res = arraylist.increaseCapacityTo();
        }catch(err){
            expect(err).assertEqual("ArrayList: set out-of-bounds")
        }
    })

    it('SR000GGR44_testAdd045', 0, function () {
        let arraylist = new ArrayList();
        for (let i = 0; i < 100; i++) {
            arraylist.add(i);
        }
        let res = arraylist.getIndexOf(99);
        let res1 = arraylist.length;
        expect(res).assertEqual(99);
        expect(res1).assertEqual(100);
    })
    it('SR000GGR44_testAdd046', 0, function () {
        let arraylist = new ArrayList();
        let a = "*"
        arraylist.add(a);
        let res = arraylist.has(a)
        expect(res).assertEqual(true);
    })
    it('SR000GGR44_testAdd047', 0, function () {
        let arraylist = new ArrayList();
        let a = "3.14"
        arraylist.add(a);
        let res = arraylist.has(a)
        expect(res).assertEqual(true);
    })
    it('SR000GGR44_testAdd048', 0, function () {
        let arraylist = new ArrayList();
        let a = ""
        arraylist.add(a);
        let res = arraylist.has(a)
        expect(res).assertEqual(true);
    })

    it('SR000GGR44_testSort049', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add("刘");
        arraylist.add("张三");
        arraylist.add(1);
        arraylist.add(2);
        arraylist.add("李四");
        arraylist.sort((a,b) => a-b);
        let arr=[];
        arraylist.forEach((item,index)=>{
            arr.push(item);
        })
        let a=["刘","张三",1,2,"李四"];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR44_testSort050', 0, function () {
        let arraylist = new ArrayList();
        arraylist.add("c");
        arraylist.add("a");
        arraylist.add("b");
        arraylist.add("e");
        arraylist.add("d");
        arraylist.sort((a,b) => a-b);
        let arr=[];
        arraylist.forEach((item,index)=>{
            arr.push(item);
        })
        let a=["c","a","b","e","d"];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
})
