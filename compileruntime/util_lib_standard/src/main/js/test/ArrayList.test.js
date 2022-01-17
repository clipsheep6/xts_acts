// @ts-nocheck
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
import {ArrayList} from '@ohos.arraylist'

describe('ArraylistTest', function () {
    /*
        *@tc.name:testConstructor001
         */
    it('SR000GGR44_testConstructor001', 0, function () {
         try{
             let arraylist = new ArrayList();
         }catch(err){
             expect(err).assertEqual("Error:Cannot create new arraylist")
         }
    })
    it('SR000GGR44_testAdd002', 0, function () {
        console.log("add-----001");
        let arraylist = new ArrayList();
        arraylist.add("四");
        let res = arraylist.has("四")
        console.log(res)
        expect(res).assertEqual(true)
    })
    it('SR000GGR44_testAdd003', 0, function () {
        console.log("add-----002");
        let arraylist = new ArrayList();
        arraylist.add(8);
        let res = arraylist.has(8)
        console.log(res)
        expect(res).assertEqual(true)
    })
    it('SR000GGR44_testAdd004 ', 0, function () {
        console.log("add-----003");
        let arraylist = new ArrayList();
        let a={name:'lala',age:'13岁'}
        arraylist.add(a);
        let res = arraylist.has(a)
        console.log(res)
        expect(res).assertEqual(true)
    })
    it('SR000GGR44_testAdd005 ', 0, function () {
        console.log("add-----004");
        let arraylist = new ArrayList();
        let a=[1,2,3,4]
        arraylist.add(a);
        let res = arraylist.has(a)
        console.log(res)
        expect(res).assertEqual(true)
    })
    it('SR000GGR44_testAdd006 ', 0, function () {
        console.log("add-----005");
        let arraylist = new ArrayList();
        let a = true
        arraylist.add(a);
        let res = arraylist.has(a)
        console.log(res)
        expect(res).assertEqual(true)
    })
    it('SR000GGR44_testInsert007', 0, function () {
        console.log("insert-----001");
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
        console.log(arr);
        let a=["四","三",8,1,"a"];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR44_testIsEmpty008', 0, function () {
        console.log("isEmpty-----001");
        let arraylist = new ArrayList();
        arraylist.add("四");
        arraylist.add("三");
        arraylist.add(1);
        arraylist.add('a')
        arraylist.insert(8,2)
         let res = arraylist.isEmpty();
        expect(res).assertEqual(false)
    })
    it('SR000GGR44_testLength009', 0, function () {
        console.log("length-----001");
        let arraylist= new ArrayList();
        arraylist.add("四");
        arraylist.add("三");
        arraylist.add(1);
        arraylist.add('a')
        arraylist.insert(8,2)
        let res = arraylist.length;
        console.log(res)
        expect(res).assertEqual(5)
    })
    it('SR000GGR44_testHas010', 0, function () {
        console.log("has-----001");
        let arraylist = new ArrayList();
        arraylist.add("四");
        arraylist.add("三");
        arraylist.add(1);
        arraylist.add('a')
        arraylist.insert(8,2)
        let res = arraylist.has(8);
        let res1 = arraylist.has("二")
        console.log(res,res1)
        expect(res).assertEqual(true);
        expect(res1).assertEqual(false);
    })

    it('SR000GGR44_testGetIndexOf011', 0, function () {
        console.log("getIndexOf-----001");
        let arraylist = new ArrayList();
        arraylist.add(1);
        arraylist.add("三");
        arraylist.add(1);
        arraylist.add('a')
        arraylist.insert(1,2)
        let res1 = arraylist.getIndexOf(1)
        expect(res1).assertEqual(0);
    })

    it('SR000GGR44_testRemoveByIndex012', 0, function () {
        console.log("removeByIndex-----001");
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
    it('SR000GGR44_testRemove013', 0, function () {
        console.log("remove-----001");
        let arraylist = new ArrayList();
        arraylist.add("四");
        arraylist.add("三");
        arraylist.add(1);
        arraylist.add('a')
        arraylist.remove("三");
        let res=arraylist.has("三");
        console.log(res)
        expect(res).assertEqual(false);
    })

    it('SR000GGR44_testGetLastIndexOf014', 0, function () {
        console.log("GetLastIndexOf-----001");
        let arraylist = new ArrayList();
        arraylist.add("四");
        arraylist.add("三");
        arraylist.add(1);
        arraylist.add('a');
        arraylist.add(1);
        arraylist.add("b");
        let res = arraylist.getLastIndexOf(1);
        console.log(res)
        expect(res).assertEqual(4);
    })
    it('SR000GGR44_testGetremoveByRange015', 0, function () {
        console.log("removeByRange-----001");
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
        console.log(arr)
        let a=["四","a",1,"b","c",1];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR44_testReplaceAllElements016', 0, function () {
        console.log("replaceAllElements-----001");
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
    it('SR000GGR44_testForEach017', 0, function () {
        console.log("forEach-----001");
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
    it('SR000GGR44_testSubArrayList018', 0, function () {
        console.log("subArrayList-----001");
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
    it('SR000GGR44_testClear019', 0, function () {
        console.log("clear-----001");
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
    it('SR000GGR44_testConvertToArray20', 0, function () {
        console.log("convertToArray-----001");
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
    it('SR000GGR44_testClone021', 0, function () {
        console.log("clone-----001");
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
    it('SR000GGR44_testGetCapacity022', 0, function () {
        console.log("getCapacity-----001");
        let arraylist = new ArrayList();
        arraylist.add(4);
        arraylist.add(3);
        arraylist.add(1);
        arraylist.add(2);
        arraylist.add(14);
        let res = arraylist.getCapacity();
        expect(res).assertEqual(10)
    })
    it('SR000GGR44_testGetCapacity023', 0, function () {
        console.log("getCapacity-----002");
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
    it('SR000GGR44_testIncreaseCapacityTo024', 0, function () {
        console.log("increaseCapacityTo-----001");
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
    it('SR000GGR44_testTrimToCurrentLength025', 0, function () {
        console.log("trimToCurrentLength-----002");
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
    it('SR000GGR44_testIterator026', 0, function () {
        console.log("iterator-----001");
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
        console.log(arr)
        let a = [8,"一","二",5,c,6,"三","四"]
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR44_testSort027', 0, function () {
        console.log("sort-----002");
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
    it('SR000GGR44_testClear028', 0, function () {
        console.log("clear-----001");
        let arraylist = new ArrayList();
        arraylist.add(4);
        arraylist.add(3);
        arraylist.add(1);
        arraylist.add(2);
        arraylist.add(14);
        let res1 = arraylist.isEmpty();
        arraylist.clear();
        let res = arraylist.isEmpty();
        expect(res).assertEqual(true)
        expect(res1).assertEqual(false)
    })
})


