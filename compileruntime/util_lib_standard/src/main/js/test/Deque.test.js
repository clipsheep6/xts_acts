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
import {Deque} from '@ohos.deque'

describe('DequeTest', function () {
    /*
        *@tc.name:testConstructor001
         */
    it('SR000GGR3K_testConstructor001', 0, function () {
         try{
             let deque = new Deque();
         }catch(err){
             expect(err).assertEqual("Error:Cannot create new deque")
         }
    })
    it('SR000GGR3K_testInsertFront001', 0, function () {
      console.log("insertFront-----001");
        let deque = new Deque();
        deque.insertFront("一");
        let res = deque.getFirst();
         console.log(res);
        expect(res).assertEqual("一");
    })
    it('SR000GGR3K_testInsertFront001', 0, function () {
        console.log("insertFront-----001");
        let deque = new Deque();
        deque.insertFront(8);
        let res = deque.getFirst();
        expect(res).assertEqual(8)
    })

    it('SR000GGR3K_testInsertFront002', 0, function () {
        console.log("insertFront-----002");
        let deque = new Deque();
        let a ={name:'lala',age:'15'}
       deque.insertFront(a);
        let res = deque.getFirst();
        console.log(JSON.stringify(res))
        expect(res).assertEqual(a)
    })
    it('SR000GGR3K_testInsertFront003', 0, function () {
        console.log("insertFront-----003");
        let deque = new Deque();
        let a =[1,2,3,4]
        deque.insertFront(a);
        let res = deque.getFirst();
        console.log(JSON.stringify(res))
        expect(res).assertEqual(a)
    })
    it('SR000GGR3K_testInsertFront004', 0, function () {
        console.log("insertFront-----004");
        let deque = new Deque();
         deque.insertEnd("四");
        let res = deque.getLast()
        expect(res).assertEqual("四")
    })
    it('SR000GGR3K_testInsertEnd005', 0, function () {
        console.log("insertEnd-----001");
        let deque = new Deque();
         deque.insertEnd(8);
        let res = deque.getLast()
        expect(res).assertEqual(8)
    })
    it('SR000GGR3K_testInsertEnd006', 0, function () {
        console.log("insertEnd-----002");
        let deque = new Deque();
        let a = ['a','b','c']
        deque.insertEnd(a);
        let res = deque.getLast()
        expect(res).assertEqual(a)
    })
    it('SR000GGR3K_testInsertEnd007', 0, function () {
        console.log("insertEnd-----3");
        let deque = new Deque();
        let a = { class:'6班',say:'we'}
        deque.insertEnd(a);
        let res = deque.getLast()
        expect(res).assertEqual(a)
    })
    it('SR000GGR3K_testGetFirst007', 0, function () {
        console.log("getFirst-----004");
        let deque = new Deque();
        deque.insertEnd("四");
        deque.insertEnd("三");
        let res = deque.getFirst()
        expect(res).assertEqual("四")
    })
    it('SR000GGR3K_testGetLast008', 0, function () {
        console.log("getLast-----001");
        let deque = new Deque();
        deque.insertEnd(8);
        deque.insertEnd("三");
        let res = deque.getLast()
        expect(res).assertEqual("三")
    })
    it('SR000GGR3K_testHas009', 0, function () {
        console.log("has-----001");
        let deque = new Deque();
        deque.insertEnd(6);
        let res = deque.has(6)
        expect(res).assertEqual(true)
    })
    it('SR000GGR3K_testHas010', 0, function () {
        console.log("has-----002");
        let deque = new Deque();
        deque.insertEnd(8);
        let res = deque.has(6)
        expect(res).assertEqual(false)
    })
    it('SR000GGR3K_testPopFirst011', 0, function () {
        console.log("popFirst-----001");
        let deque = new Deque();
        deque.insertEnd(8);
        deque.insertFront("一")
        let res = deque.popFirst()
        expect(res).assertEqual("一")
    })
    it('SR000GGR3K_testPopLast012', 0, function () {
        console.log("popLast-----001");
        let deque = new Deque();
        deque.insertEnd(8);
        deque.insertFront("一")
        deque.insertFront("二")
        let res = deque.popLast()
        expect(res).assertEqual(8)
    })
    it('SR000GGR3K_testForEach013', 0, function () {
        console.log("forEach-----001");
        let deque = new Deque();
        deque.insertEnd(8);
        deque.insertFront("一")
        deque.insertFront("二")
        deque.insertEnd(1);
        deque.insertEnd(2);
        deque.insertEnd(3);
        deque.insertEnd(4);
        deque.insertEnd(5);
        deque.insertEnd(6);
        deque.insertFront("三")
        deque.insertFront("四")
        let arr = []
        deque.forEach((item,index)=>{
            arr.push(item);
        })
        console.log(arr);
        let a=["四","三","二","一",8,1,2,3,4,5,6]
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR3K_testIterator014', 0, function () {
        console.log("iterator-----016");
        let deque = new Deque();
        deque.insertEnd(8);
        deque.insertFront("一")
        deque.insertFront("二")
        deque.insertEnd(5);
        deque.insertEnd(6);
        deque.insertFront("三")
        deque.insertFront("四")
        let arr =[]
       for(let item of deque) {
          arr.push(item);
       }
        console.log(arr)
        let a = ["四","三","二","一",8,5,6]
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }

    })

}) 