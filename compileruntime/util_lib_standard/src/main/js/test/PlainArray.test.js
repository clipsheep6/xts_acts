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
import {PlainArray} from '@ohos.plainarray'

describe('SR000GGR45_PlainArrayTest', function () {
    it('SR000GGR45_testConstructor001', 0, function () {
        try{
            let plainarray = new PlainArray();
        }catch(err){
            expect(err).assertEqual("Error:Cannot create new PlainArray")
        }
    })
    it('SR000GGR45_testAdd002', 0, function () {
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        let res = plainarray.get(1);
        expect(res).assertEqual("A");
    })
    it('SR000GGR45_testAdd003', 0, function () {
        let plainarray = new PlainArray();
        let a=[1,2,3,4]
        plainarray.add(2,a);
        let res = plainarray.get(2);
        expect(res).assertEqual(a);
    })
    it('SR000GGR45_testAdd004', 0, function () {
        let plainarray = new PlainArray();
        let c = { name: 'lili', age: '13' }
        plainarray.add(1,c);
        let res = plainarray.get(1);
        expect(res).assertEqual(c);
    })
    it('SR000GGR45_testAdd005', 0, function () {
        let plainarray = new PlainArray();
        let c = false
        plainarray.add(1,c);
        let res = plainarray.get(1);
        expect(res).assertEqual(false);
    })
    it('SR000GGR45_testAdd006', 0, function () {
        let plainarray = new PlainArray();
        plainarray.add(1,3);
        let res = plainarray.get(1);
        expect(res).assertEqual(3);
    })
    it('SR000GGR45_testGet007', 0, function () {
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        let res = plainarray.get(4);
        expect(res).assertEqual("D");
        try{
            res = plainarray.get(10);
        }catch(err){
            expect(err).assertEqual("Error: Key error found");
        }
    })
    it('SR000GGR45_testLength008', 0, function () {
        let plainarray = new PlainArray();
        let res = plainarray.length;
        expect(res).assertEqual(0);
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        res = plainarray.length;
        expect(res).assertEqual(5);
    })
    it('SR000GGR45_testClone009', 0, function () {
        let plainarray = new PlainArray();
        let clonePlainarray = plainarray.clone();
        let cloneLength = clonePlainarray.length;  // 克隆空集
        expect(cloneLength).assertEqual(0);
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        let res = plainarray.clone();
        let arr=[];
        res.forEach((value,index)=>{
            arr.push(value);
        })
        let arr1=["A","B","C","D","E"];
        for(let i=0;i<arr.length;i++){
            expect(arr[i]).assertEqual(arr1[i]);
        }
    })
    it('SR000GGR45_testClear010', 0, function () {
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        let res = plainarray.length;
        expect(res).assertEqual(5);
        plainarray.clear();
        let res1 = plainarray.length;
        expect(res1).assertEqual(0);
        plainarray.clear();
        let res2 = plainarray.length;
        expect(res2).assertEqual(0);
    })
    it('SR000GGR45_testHas011', 0, function () {
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        let res = plainarray.has("a");
        expect(res).assertEqual(false);
        let res1 = plainarray.has(1);
        expect(res1).assertEqual(true);
    })
    it('SR000GGR45_testGetIndexOfKey012', 0, function () {
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        let res = plainarray.getIndexOfKey(2);
        expect(res).assertEqual(1);
        res = plainarray.getIndexOfKey(12);
        expect(res).assertEqual(-1);
    })
    it('SR000GGR45_testGetIndexOfValue013', 0, function () {
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        let res = plainarray.getIndexOfValue("A");
        expect(res).assertEqual(0);
        res = plainarray.getIndexOfValue("Z");
        expect(res).assertEqual(-1);
    })
    it('SR000GGR45_testIsEmpty014', 0, function () {
        let plainarray = new PlainArray();
        let result = plainarray.length;
        expect(result).assertEqual(0);
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        let res = plainarray.isEmpty();
        expect(res).assertEqual(false);
    })
    it('SR000GGR45_testGetKeyAt015', 0, function () {
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        let res = plainarray.getKeyAt(2);
        expect(res).assertEqual(3);
        res = plainarray.getKeyAt(10);
        expect(res).assertEqual(undefined);
    })

    it('SR000GGR45_testReMove016', 0, function () {
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        let res = plainarray.remove(2);
        expect(res).assertEqual("B");
        try{
            res = plainarray.remove(12);
        }catch(err){
            expect(err).assertEqual("Error:  element not in this plainarray");
        }
        let arr=[];
        for(let item of plainarray){
            arr.push(item);
        }
        let arr1=["1,A","3,C","4,D","5,E"];
        for(let i=0;i<arr.length;i++){
            expect(arr[i]).assertEqual(arr1[i]);
        }
    })
    it('SR000GGR45_testReMoveAt017', 0, function () {
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        let res = plainarray.removeAt(2);
        expect(res).assertEqual("C");
        try{
            res = plainarray.removeAt(12);
        }catch(err){
            expect(err).assertEqual("Error: index not in this plainarray range");
        }
        let arr=[];
        for(let item of plainarray){
            arr.push(item);
        }
        let arr1=["1,A","2,B","4,D","5,E"];
        for(let i=0;i<arr.length;i++){
            expect(arr[i]).assertEqual(arr1[i]);
        }
    })
    it('SR000GGR45_testReMoveRangeFrom018', 0, function () {
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        plainarray.removeRangeFrom(2,2);
        let arr=[];
        for(let item of plainarray){
            arr.push(item);
        }
        let arr1=["1,A","2,B","5,E"];
        for(let i=0;i<arr.length;i++){
            expect(arr[i]).assertEqual(arr1[i]);
        }
        try{
            plainarray.removeRangeFrom(15, 5);
        }catch(err){
            expect(err).assertEqual("Error: index not in this plainarray range");
        }
        try{
            plainarray.removeRangeFrom(1, -1);
        }catch(err){
            expect(err).assertEqual("index not in this plainarray range");
        }
    })
    it('SR000GGR45_testSetValueAt019', 0, function () {
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        plainarray.setValueAt(2,"V");
        let arr=[];
        for(let item of plainarray){
            arr.push(item);
        }
        let arr1=["1,A","2,B","3,V","4,D","5,E"];
        for(let i=0;i<arr.length;i++){
            expect(arr[i]).assertEqual(arr1[i]);
        }
        try{
            plainarray.setValueAt(-1, "X");
        }catch(err){
            expect(err).assertEqual("Error: index Out Of Bounds");
        }
    })
    it('SR000GGR45_testToString020', 0, function () {
        let plainarray = new PlainArray();
        let res1 = plainarray.toString();
        expect(res1).assertEqual("");
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        let res = plainarray.toString();
        expect(res).assertEqual("1:A,2:B,3:C");
    })

    it('SR000GGR45_testForEach021', 0, function () {
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        let arr = []
        let keyArr = []
        plainarray.forEach((key,index)=>{
            keyArr.push(key);
        })
        plainarray.forEach((value,index)=>{
            arr.push(value);
        })
        let arr1= ["A","B","C","D","E"];
        for(let i=0;i<arr1.length;i++){
            expect(arr[i]).assertEqual(arr1[i]);
        }
        let keyArr1= [1,2,3,4,5];
        for(let i=0;i<keyArr1.length;i++){
            expect(keyArr[i]).assertEqual(keyArr[i]);
        }
    })
    it('SR000GGR45_testIterator022', 0, function () {
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        let arr=[]
        for(let item of plainarray){
            arr.push(item)
        }
        let arr1= ["1,A","2,B","3,C","4,D","5,E"];
        for(let i=0;i<arr1.length;i++){
            expect(arr[i]).assertEqual(arr1[i]);
        }
    })
    it('SR000GGR45_testGetValueAt023', 0, function () {
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        let res = plainarray.getValueAt(2);
        expect(res).assertEqual("C")

        res = plainarray.getValueAt(12);
        expect(res).assertEqual(undefined)
    })

    it('SR000GGR45_testAdd024', 0, function () {
        let plainarray = new PlainArray();
        plainarray.add(1, 3.1);
        let res = plainarray.get(1);
        expect(res).assertEqual(3.1);
    })

    it('SR000GGR45_testAdd024', 0, function () {
        let plainarray = new PlainArray();
        plainarray.add(1, null);
        let res = plainarray.get(1);
        expect(res).assertEqual(null);
    })

    it('SR000GGR45_testAdd025', 0, function () {
        let plainarray = new PlainArray();
        try{
            let res = plainarray.add("123", null);
        }catch(err){
            expect(err).assertEqual("Error: PlainArray's only number is allowed")
        }
    })

    it('SR000GGR45_testGet026', 0, function () {
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        try{
            let res = plainarray.get(8);
        }catch(err){
            expect(err).assertEqual("Error: Key error found")
        }
    })

    it('SR000GGR45_testGetIndexOfKey027', 0, function () {
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        let res = plainarray.getIndexOfKey(9);
        expect(res).assertEqual(-1);
    })
    it('SR000GGR45_testGetIndexOfValue028', 0, function () {
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        let res = plainarray.getIndexOfValue("Asad");
        expect(res).assertEqual(-1);
    })
    it('SR000GGR45_testGetKeyAt029', 0, function () {
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        let res = plainarray.getKeyAt(50);
        expect(res).assertEqual(null);
    })
    it('SR000GGR45_testGetValueAt030', 0, function () {
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        let res = plainarray.getValueAt(50);
        expect(res).assertEqual(null);
    })
    it('SR000GGR45_testRemove031', 0, function () {
        let plainarray = new PlainArray();
        try{
            let res = plainarray.remove(2);
        }catch(err){
            expect(err).assertEqual("Error:  element not in this plainarray")
        }
    })
    it('SR000GGR45_testRemoveAt032', 0, function () {
        let plainarray = new PlainArray();
        try{
            let res = plainarray.removeAt(2);
        }catch(err){
            expect(err).assertEqual("Error: index not in this plainarray range")
        }
    })
    it('SR000GGR45_testReMoveRangeFrom033', 0, function () {
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        plainarray.removeRangeFrom(0, 5);
        let res = plainarray.length;
        expect(res).assertEqual(0);
    })

    it('SR000GGR45_testSetValueAt034', 0, function () {
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        try{
            plainarray.setValueAt(8,"V");
        }catch(err){
            expect(err).assertEqual("Error: index Out Of Bounds")
        }
    })

    it('SR000GGR45_testAdd035', 0, function () {
        let plainarray = new PlainArray();
        for (let i = 0; i < 100; i++) {
            plainarray.add(i, i+1);
        }
        let res = plainarray.get(1);
        let res1 = plainarray.length;
        expect(res).assertEqual(2);
        expect(res1).assertEqual(100);
    })

    it('SR000GGR45_testAdd036', 0, function () {
        let plainarray = new PlainArray();
        for (let i = 0; i < 1000; i++) {
            plainarray.add(i, i+1);
        }
        let res = plainarray.get(99);
        let res1 = plainarray.length;
        expect(res).assertEqual(100);
        expect(res1).assertEqual(1000);
    })
    it('SR000GGR45_testAdd037', 0, function () {
        let plainarray = new PlainArray();
        plainarray.add(3,"a");
        plainarray.add(1,"b");
        plainarray.add(2,"c");
        plainarray.add(5,"d");
        plainarray.add(4,"e");
        let res = plainarray.get(2);
        expect(res).assertEqual("c");
    })
    it('SR000GGR45_testAdd038', 0, function () {
        let plainarray = new PlainArray();
        plainarray.add(1,"ABCd");
        plainarray.add(2,"~!@#$^&*()_+-*/=.?<>:;\|{}[]");
        plainarray.add(3,null);
        plainarray.add(4,undefined);
        plainarray.add(5,[]);
        plainarray.add(6,{});
        plainarray.add(7,true);
        plainarray.add(8,1234);
        plainarray.add(9,1.234);
        plainarray.add(10,-1234);
        let res = plainarray.get(2);
        expect(res).assertEqual("~!@#$^&*()_+-*/=.?<>:;\|{}[]");
    })
    it('SR000GGR45_testAdd039', 0, function () {
        let plainarray = new PlainArray();
        plainarray.add(1.23,"a");
        plainarray.add(-2,"b");
        try{
            plainarray.add("a","c");
        }catch(err){
            expect(err).assertEqual("Error: PlainArray's only number is allowed")
        }
        let res = plainarray.get(-2);
        expect(res).assertEqual("b");
    })
    it('SR000GGR45_testAdd040', 0, function () {
        let plainarray = new PlainArray();
        plainarray.add(1,1);
        plainarray.add(2,"b");
        plainarray.add(3,true);
        plainarray.add(4,[1,2,3,4]);
        plainarray.add(5,{ name: 'lili', age: '13' });
        plainarray.add(6,undefined);
        plainarray.add(7,null);
        let res = plainarray.get(2);
        expect(res).assertEqual("b");
    })
})