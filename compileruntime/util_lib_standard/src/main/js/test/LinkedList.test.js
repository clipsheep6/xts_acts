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
import {LinkedList} from '@ohos.linkedlist'

describe('LinkedListTest', function () {
    /*
        *@tc.name:SR000GGR46_testConstructor001
         */
    it('SR000GGR46_testConstructor001', 0, function () {
        try{
            let linkedlist = new LinkedList();
        }catch(err){
            expect(err).assertEqual("Error:Cannot create new linkedlist")
        }
    })
    it('SR000GGR46_testAdd002', 0, function () {
        console.log("get-----001");
        let linkedlist = new LinkedList();
        linkedlist.add("四");
        let res = linkedlist.get(0)
        console.log(res)
        expect(res).assertEqual("四")
    })

    it('SR000GGR46_testAdd003', 0, function () {
        console.log("add-----001");
        let linkedlist  = new LinkedList();
        linkedlist .add(8);
        let res = linkedlist .get(0)
        console.log(res)
        expect(res).assertEqual(8)
    })
    it('SR000GGR46_testAdd004', 0, function () {
        console.log("add-----002");
        let linkedlist = new LinkedList();
        let a=[1,2,3,4]
        linkedlist .add(a);
        let res = linkedlist.get(0)
        console.log(res)
        expect(res).assertEqual(a)
    })
    it('SR000GGR46_testAdd005', 0, function () {
        console.log("add-----003");
        let linkedlist = new LinkedList();
        let a={name:"lala",age:"13"}
        linkedlist .add(a);
        let res = linkedlist.get(0)
        console.log(res)
        expect(res).assertEqual(a)
    })
    it('SR000GGR46_testHas006', 0, function () {
        console.log("has-----003");
        let linkedlist = new LinkedList();
        linkedlist.add("a");
        linkedlist .add("b");
        linkedlist .add("c");
        let res = linkedlist.has("a");
        console.log(res)
        expect(res).assertEqual(true);
        let res1 = linkedlist.has("d");
        expect(res1).assertEqual(false);
    })
    it('SR000GGR46_testClone007', 0, function () {
        console.log("clone-----001");
        let list= new LinkedList();
        list.add("a");
        list.add("b");
        list.add("c");
        let list1 = list.clone();
        list1.addFirst("e");
        let res = list1.removeLast();
        expect(res).assertEqual("c");
        let arr = []
        list1.forEach((item,index)=>{
            arr.push(item);
        })
        let a=["e","a","b"]
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR46_testAddFirst008', 0, function () {
        console.log("addFirst-----001");
        let linkedlist= new LinkedList();
        linkedlist.add("a");
        linkedlist.add("b");
        linkedlist.add("c");
        linkedlist.addFirst("e");
        let res = linkedlist.get(0);
        expect(res).assertEqual("e");
    })
    it('SR000GGR46_testAddFirst009', 0, function () {
        console.log("removeFirst-----001");
        let linkedlist= new LinkedList();
        linkedlist.add("a");
        linkedlist.add("b");
        linkedlist.add("c");
        let res = linkedlist.removeFirst();
        console.log(res)
        expect(res).assertEqual("a");
        let arr = []
        linkedlist.forEach((item,index)=>{
            arr.push(item);
        })
        console.log(res)
        let a=["b","c"]
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })

    it('SR000GGR46_testPopLast010', 0, function () {
        console.log("popLast-----001");
        let list= new LinkedList();
        list.add("a");
        list.add("b");
        list.add("c");
        list.addFirst("e");
        let res = list.popLast();
        expect(res).assertEqual("c");
        let arr = []
        list.forEach((item,index)=>{
            arr.push(item);
        })
        let a=["e","a","b"]
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR46_testGetLastIndexOf011', 0, function () {
        console.log("getLastIndexOf-----003");
        let list= new LinkedList();
        list.add("a");
        list.add("b");
        list.add("c");
        list.add("a");
        list.add("b");
        list.add('b')
        let res = list.getLastIndexOf("a");
        expect(res).assertEqual(3);
    })

    it('SR000GGR46_testGetIndexOf012', 0, function () {
        console.log("getIndexOf-----003");
        let list= new LinkedList();
        list.add("a");
        list.add("b");
        list.add("c");
        list.add("a");
        list.add("b");
        list.add('b')
        let res = list.getIndexOf("b");
        expect(res).assertEqual(1);
    })
    it('SR000GGR46_testRemoveByIndex013', 0, function () {
        console.log("removeByIndex-----001");
        let list= new LinkedList();
        list.add("a");
        list.add("b");
        list.add("c");
        list.add("a");
        list.add("b");
        let res = list.removeByIndex(2);
        console.log(res)
        let arr=[];
        list.forEach((item,index)=>{
            arr.push(item);
        })
        let a=["a","b","a","b"]
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR46_testRemove0014', 0, function () {
        console.log("remove-----003");
        let list= new LinkedList();
        list.add("a");
        list.add("b");
        list.add("c");
        list.add("a");
        list.add("b");
        let res = list.remove("a");
        let arr=[];
        console.log(res)
        list.forEach((item,index)=>{
            arr.push(item);
        })
        let a=["b","c","a","b"];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR46_testRemove015', 0, function () {
        console.log("remove-----003");
        let list= new LinkedList();
        list.add("a");
        list.add("b");
        list.add("c");
        list.add("a");
        list.add("b");
        let res = list.remove("d");
        expect(res).assertEqual(false)

    })
    it('SR000GGR46_testRemoveFirstFound016', 0, function () {
        console.log("removeFirstFound-----003");
        let list= new LinkedList();
        list.add("a");
        list.add("b");
        list.add("c");
        list.add("a");
        list.add("b");
        let res = list.removeFirstFound("b");
        let arr=[];
        list.forEach((item,index)=>{
            arr.push(item);
        })
        let a=["a","c","a","b"];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR46_testRemoveLastFound017', 0, function () {
        console.log("removeLastFound-----003");
        let list= new LinkedList();
        list.add("a");
        list.add("b");
        list.add("c");
        list.add("a");
        list.add("b");
        let res = list.removeLastFound("b");
        let arr=[];
        list.forEach((item,index)=>{
            arr.push(item);
        })
        let a=["a","b","c","a"];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })

    it('SR000GGR46_testGetFirst018', 0, function () {
        console.log("getFirst-----003");
        let list= new LinkedList();
        list.add("a");
        list.add("b");
        list.add("c");
        list.add("a");
        list.add("b");
        let res = list.getFirst();
        expect(res).assertEqual("a")
    })
    it('SR000GGR46_testGetLast019', 0, function () {
        console.log("getLast-----003");
        let list= new LinkedList();
        list.add("a");
        list.add("b");
        list.add("c");
        list.add("a");
        list.add("b");
        let res = list.getLast();
        expect(res).assertEqual("b")
    })
    it('SR000GGR46_testInsert020', 0, function () {
        console.log("insert-----001");
        let list= new LinkedList();
        list.add("a");
        list.add("b");
        list.add("c");
        list.add("a");
        list.add("b");
        let res = list.insert(3,"d");
        console.log(res);
        let arr=[];
        list.forEach((item,index)=>{
            arr.push(item);
        })
        let a=["a","b","c","d","a","b"];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR46_testInsert021', 0, function () {
        console.log("insert-----002");
        let list= new LinkedList();
        list.add("a");
        list.add("b");
        list.add("c");
        list.add("a");
        list.add("b");
        let res = list.insert(0,"d");
        let arr=[];
        list.forEach((item,index)=>{
            arr.push(item);
        })
        let a=["d","a","b","c","a","b"];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR46_testInsert022', 0, function () {
        console.log("insert-----003");
        let list= new LinkedList();
        list.add("a");
        list.add("b");
        list.add("c");
        list.add("a");
        list.add("b");
        let res = list.insert(5,"d");
        let arr=[];
        list.forEach((item,index)=>{
            arr.push(item);
        })
        let a=["a","b","c","a","b","d"];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR46_testSet023', 0, function () {
        console.log("set-----001");
        let list= new LinkedList();
        list.add("a");
        list.add("b");
        list.add("c");
        list.add("a");
        let res = list.set(2,"d");
        let res1 = list.get(2);
        expect(res1).assertEqual("d")
    })

    it('SR000GGR46_testConvertToArray024', 0, function () {
        console.log("convertToArray-----002");
        let list= new LinkedList();
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
    it('SR000GGR46_testLength025', 0, function () {
        console.log("length-----002");
        let list= new LinkedList();
        list.add(4);
        list.add(3);
        list.add(1);
        list.add(2);
        list.add(14);
        let res = list.length;
        expect(res).assertEqual(5);
    })
    it('SR000GGR46_testClear026', 0, function () {
        console.log("clear-----001");
        let list= new LinkedList();
        list.add(4);
        list.add(3);
        list.add(1);
        list.add(2);
        list.add(14);
        list.clear()
        let res = list.length;
        expect(res).assertEqual(0);
    })
    it('SR000GGR46_testIterator027', 0, function () {
        console.log("iterator-----008");
        let list = new LinkedList();
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
    it('SR000GGR46_testForEach028', 0, function () {
        console.log("forEach-----001");
        let list = new LinkedList();
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
    it('SR000GGR46_testPopFirst029', 0, function () {
        console.log("popFirst-----001");
        let list= new LinkedList();
        list.add("a");
        list.add("b");
        list.add("c");
        list.addFirst("e");
        let res = list.popFirst();
        expect(res).assertEqual("e");
        let arr = []
        list.forEach((item,index)=>{
            arr.push(item);
        })
        let a=["a","b","c"]
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR46_testRemoveLast030', 0, function () {
        console.log("removeLast-----001");
        let list= new LinkedList();
        list.add("a");
        list.add("b");
        list.add("c");
        list.addFirst("e");
        let res = list.removeLast();
        expect(res).assertEqual("c");
        let arr = []
        list.forEach((item,index)=>{
            arr.push(item);
        })
        let a=["e","a","b"]
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })

    it('SR000GGR46_testGet031', 0, function () {
        console.log("get-----001");
        let list= new LinkedList();
        list.add("a");
        list.add("b");
        list.add("c");
        list.add("a");
        list.add("b");
        let res = list.get(1);
        expect(res).assertEqual("b")
    })
})