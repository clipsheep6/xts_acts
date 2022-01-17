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
import {List} from '@ohos.list'

describe('ListTest', function () {
    /*
        *@tc.name:SR000GGR4A_testConstructor001
         */
    it('SR000GGR4A_testConstructor001', 0, function () {
        try{
            let list = new List();
        }catch(err){
            expect(err).assertEqual("Error:Cannot create new list")
        }
    })

    it('SR000GGR4A_testGet002', 0, function () {
        console.log("get-----001");
        let list = new List();
        list.add("四");
        let res = list.get(0);
        console.log(res)
        expect(res).assertEqual("四")
    })

    it('SR000GGR4A_testAdd002', 0, function () {
        console.log("add-----001");
        let list = new List();
        list.add(8);
        let res = list.get(0)
        console.log(res)
        expect(res).assertEqual(8)
    })
    it('SR000GGR4A_testAdd003', 0, function () {
        console.log("add-----002");
        let list = new List();
        let a=[1,2,3,4]
        list.add(a);
        let res = list.get(0)
        console.log(res)
        expect(res).assertEqual(a)
    })
    it('SR000GGR4A_testAdd004', 0, function () {
        console.log("add-----003");
        let list = new List();
        let a={name:"lala",age:"13"}
        list.add(a);
        let res = list.get(0)
        console.log(res)
        expect(res).assertEqual(a)
    })
    it('SR000GGR4A_testHas005', 0, function () {
        console.log("has-----003");
        let list = new List();
        list.add("a");
        list.add("b");
        list.add("c");
        let res = list.has("a");
        console.log(res)
        expect(res).assertEqual(true);
        let res1 = list.has("d");
        expect(res1).assertEqual(false);
    })
    it('SR000GGR4A_testHas006', 0, function () {
        console.log("has-----003");
        let list = new List();
        list.add("a");
        list.add("b");
        list.add("c");
        let res = list.has("a");
        console.log(res)
        expect(res).assertEqual(true);
        let res1 = list.has("d");
        expect(res1).assertEqual(false);
    })
    it('SR000GGR4A_testEqual007', 0, function () {
        console.log("equal-----001");
        let list= new List();
        let list1 = new List();
        list.add("a");
        list.add("b");
        list.add("c");
        list1.add("a");
        list1.add("b");
        list1.add("d");
        let res = list.equal(list1);
        expect(res).assertEqual(false);
    })
    it('SR000GGR4A_testEqual008', 0, function () {
        console.log("equal-----002");
        let list= new List();
        let list1 = new List();
        list.add("a");
        list.add("b");
        list.add("c");
        list1.add("a");
        list1.add("b");
        list1.add("c");
        let res = list.equal(list1);
        expect(res).assertEqual(true);
    })
    it('SR000GGR4A_testEqual009', 0, function () {
        console.log("equal-----003");
        let list= new List();
        let list1 = new List();
        list.add("a");
        list.add("b");
        list.add("c");
        list1.add("a");
        list1.add("b");
        let res = list.equal(list1);
        expect(res).assertEqual(false);
    })
    it('SR000GGR4A_testGet0010', 0, function () {
        console.log("get-----001");
        let list= new List();
        list.add("a");
        list.add("b");
        list.add("c");
        list.add("a");
        list.add("b");
        list.add('b')
        let res = list.get(2);
        expect(res).assertEqual("c");
    })
    it('SR000GGR4A_testGetLastIndexOf0011', 0, function () {
        console.log("getLastIndexOf-----003");
        let list= new List();
        list.add("a");
        list.add("b");
        list.add("c");
        list.add("a");
        list.add("b");
        list.add('b')
        let res = list.getLastIndexOf("a");
        expect(res).assertEqual(3);
    })
    it('SR000GGR4A_testGetIndexOf0012', 0, function () {
        console.log("getIndexOf-----003");
        let list= new List();
        list.add("a");
        list.add("b");
        list.add("c");
        list.add("a");
        list.add("b");
        list.add('b')
        let res = list.getIndexOf("b");
        expect(res).assertEqual(1);
    })
    it('SR000GGR4A_testRemoveByIndex0013', 0, function () {
        console.log("removeByIndex-----003");
        let list= new List();
        list.add("a");
        list.add("b");
        list.add("c");
        list.add("a");
        list.add("b");
        let res = list.removeByIndex(2);
        let arr=[];
        list.forEach((item,index)=>{
            arr.push(item);
        })
        let a=["a","b","a","b"]
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR4A_testRemove0014', 0, function () {
        console.log("remove-----003");
        let list= new List();
        list.add("a");
        list.add("b");
        list.add("c");
        list.add("a");
        list.add("b");
        let res = list.remove("a");
        let arr=[];
        list.forEach((item,index)=>{
            arr.push(item);
        })
        let a=["b","c","a","b"];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR4A_testConstructor0015', 0, function () {
        console.log("replaceAllElements-----003");
        let list= new List();
        list.add(1);
        list.add(2);
        list.add(4);
        list.add(5);
        list.replaceAllElements((item, index) => {
            return (item = 2 * item);
        });
        let arr=[];
        list.forEach((item,index)=>{
            arr.push(item);
        })
        let a=[2,4,8,10];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR4A_testGetFirst0016', 0, function () {
        console.log("getFirst-----003");
        let list= new List();
        list.add("a");
        list.add("b");
        list.add("c");
        list.add("a");
        list.add("b");
        let res = list.getFirst();
        expect(res).assertEqual("a")
    })
    it('SR000GGR4A_testGetLast017', 0, function () {
        console.log("getLast-----003");
        let list= new List();
        list.add("a");
        list.add("b");
        list.add("c");
        list.add("a");
        list.add("b");
        let res = list.getLast();
        expect(res).assertEqual("b")
    })
    it('SR000GGR4A_testInsert018', 0, function () {
        console.log("insert-----003");
        let list= new List();
        list.add("a");
        list.add("b");
        list.add("c");
        list.add("a");
        list.add("b");
        let res = list.insert("d",3);
        let arr=[];
        list.forEach((item,index)=>{
            arr.push(item);
        })
        let a=["a","b","c","d","a","b"];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR4A_testSet019', 0, function () {
        console.log("set-----001");
        let list= new List();
        list.add("a");
        list.add("b");
        list.add("c");
        list.add("a");
        let res = list.set(2,"d");
        let res1 = list.getNode(2).element;
        expect(res1).assertEqual("d")
    })
    it('SR000GGR4A_testSort020', 0, function () {
        console.log("sort-----002");
        let list= new List();
        list.add(4);
        list.add(3);
        list.add(1);
        list.add(2);
        list.add(14);
        list.sort((a,b) => a-b);
        let arr=[];
        list.forEach((item,index)=>{
            arr.push(item);
        })
        let a=[1,2,3,4,14];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR4A_testGetSubList021', 0, function () {
        console.log("getSubList-----002");
        let list= new List();
        list.add(4);
        list.add(3);
        list.add(1);
        list.add(2);
        list.add(14);
        let res = list.getSubList(2,4);
        console.log(res)
        let arr=[];
        res.forEach((item,index)=>{
            arr.push(item);
        })
        let a=[1,2];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR4A_testConvertToArray022', 0, function () {
        console.log("convertToArray-----002");
        let list= new List();
        list.add(4);
        list.add(3);
        list.add(1);
        list.add(2);
        list.add(14);
        let res = list.convertToArray();

        let a=[4,3,1,2,14];
        for(let i=0;i<a.length;i++){
            expect(res[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR4A_testLength023', 0, function () {
        console.log("length-----002");
        let list= new List();
        list.add(4);
        list.add(3);
        list.add(1);
        list.add(2);
        list.add(14);
        let res = list.length;
        expect(res).assertEqual(5);
    })
    it('SR000GGR4A_testConstructor024', 0, function () {
        console.log("iterator-----008");
        let list = new List();
        list.add(8);
        list.add("一")
        list.add("二")
        list.add(5);
        let c=[1,2,3,4];
        list.add(c);
        list.add(6);
        list.add("三")
        list.add("四")
        let arr =[]
        for(let item of list) {
            arr.push(item);
        }
        console.log(arr)
        let a = [8,"一","二",5,c,6,"三","四"]
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR4A_testForEach025', 0, function () {
        console.log("forEach-----008");
        let list = new List();
        list.add(8);
        list.add("一")
        list.add("二")
        list.add(5);
        let c=[1,2,3,4];
        list.add(c);
        list.add(6);
        list.add("三")
        list.add("四")
        let arr =[]
        list.forEach((item,index)=>{
            arr.push(item);
        })
        console.log(arr)
        let a = [8,"一","二",5,c,6,"三","四"]
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR4A_testIsEmpty026', 0, function () {
        console.log("isEmpty-----001");
        let list = new List();
        list.add(8);
        list.add("一")
        list.add("二")
        list.add(5);
        let c=[1,2,3,4];
        list.add(c);
        list.add(6);
        list.add("三")
        list.add("四");
        let res = list.isEmpty();
        expect(res).assertEqual(false)
    })

    it('SR000GGR4A_testClear027', 0, function () {
        console.log("clear-----001");
        let list= new List();
        list.add("a");
        list.add("b");
        list.add("c");
        list.add("a");
        list.clear();
        let res = list.length;
        console.log("res-----" + res);
        expect(res).assertEqual(0)
    })
}) 