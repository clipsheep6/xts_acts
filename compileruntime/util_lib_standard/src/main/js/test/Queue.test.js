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
import {Queue} from '@ohos.queue'

describe('QueueTest', function () {
    /*
        *@tc.name:testConstructor001
         */
    it('SR000GGR48_testConstructor001', 0, function () {
         try{
             let queue = new Queue();
         }catch(err){
             expect(err).assertEqual("Error:Cannot create new queue")
         }
    })

    it('SR000GGR48_testAdd002', 0, function () {
        console.log("add-----001");
        let queue = new Queue();
         queue.add("四");
        let res = queue.getFirst()
        console.log(res)
        expect(res).assertEqual("四")
    })
    it('SR000GGR48_testAdd003', 0, function () {
        console.log("add-----002");
        let queue = new Queue();
         queue.add(8);
        let res = queue.getFirst()
        console.log(res)
        expect(res).assertEqual(8)
    })
    it('SR000GGR48_testAdd004', 0, function () {
        console.log("add-----003");
        let queue = new Queue();
        let a = ['a','b','c']
        queue.add(a);
        let res = queue.getFirst()
        console.log(res);
        expect(res).assertEqual(a)
    })

    it('SR000GGR48_testGetFirst005', 0, function () {
        console.log("getFirst-----001");
        let queue = new Queue();
        queue.add(6);
        queue.add('四')
        let res = queue.getFirst()
        console.log(res);
        expect(res).assertEqual(6)
    })
    it('SR000GGR48_testPop006', 0, function () {
        console.log("pop-----006");
        let queue = new Queue();
        queue.add(6);
        queue.add('四')
        let res = queue.pop();
        let res1 = queue.getFirst();
        console.log(res,res1);
        expect(res).assertEqual(6)
        expect(res1).assertEqual('四')
    })

    it('SR000GGR48_testForEach007', 0, function () {
        console.log("forEach-----007");
        let queue = new Queue();
        queue.add(8);
        queue.add("一")
        queue.add("二")
        queue.add(1);
        queue.add(2);
        queue.add(3);
        queue.add(4);
        queue.add(5);
        queue.add(6);
        let c =['a','b','c','d'];
        queue.add(c)
        let arr = []
        queue.forEach((item,index)=>{
            arr.push(item);
        })
        console.log(arr);
        let a=[8,"一","二",1,2,3,4,5,6,c]
        for(let i=0;i<a.length;i++){
            console.log(arr[i])
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR48_testIterator008', 0, function () {
        console.log("iterator-----001");
        let queue= new Queue();
        queue.add(8);
        queue.add("一")
        queue.add("二")
        queue.add(5);
        queue.add(6);
        queue.add("三")
        queue.add("四")
        let arr =[]
       for(let item of queue) {
          arr.push(item);
       }
        console.log(arr)
        let a = [8,"一","二",5,6,"三","四"]
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })

    it('SR000GGR48_testLength009', 0, function () {
        console.log("length-----001");
        let queue = new Queue();
        queue.add(8);
        queue.add("一")
        queue.add("二")
        queue.add(1);
        queue.add(2);
        queue.add(3);
        queue.add(4);
        queue.add(5);
        queue.add(6);
        let res = queue.length;
        expect(9).assertEqual(res)
    })

}) 