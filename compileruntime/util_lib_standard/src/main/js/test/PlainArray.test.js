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
console.log("start test-----01")
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
import {PlainArray} from '@ohos.plainarray'

describe('SR000GGR45_PlainArrayTest', function () {
    /*
        *@tc.name:testConstructor001
         */
    it('SR000GGR45_testConstructor001', 0, function () {
        try{
            let plainarray = new PlainArray();
        }catch(err){
            expect(err).assertEqual("Error:Cannot create new PlainArray")
        }
    })
    it('SR000GGR45_testAdd002', 0, function () {
        console.log("add-----001");
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        let res = plainarray.get(1);
        expect(res).assertEqual("A");
    })
    it('SR000GGR45_testAdd003', 0, function () {
        console.log("add-----003");
        let plainarray = new PlainArray();
        let a=[1,2,3,4]
        plainarray.add(2,a);
        let res = plainarray.get(2);
        expect(res).assertEqual(a);
    })
    it('SR000GGR45_testAdd004', 0, function () {
        console.log("add-----005");
        let plainarray = new PlainArray();
        let c = { name: 'lili', age: '13' }
        plainarray.add(1,c);
        let res = plainarray.get(1);
        expect(res).assertEqual(c);
    })
    it('SR000GGR45_testAdd005', 0, function () {
        console.log("add-----005");
        let plainarray = new PlainArray();
        let c = false
        plainarray.add(1,c);
        let res = plainarray.get(1);
        expect(res).assertEqual(false);
    })
    it('SR000GGR45_testAdd006', 0, function () {
        console.log("add-----005");
        let plainarray = new PlainArray();
        plainarray.add(1,3);
        let res = plainarray.get(1);
        expect(res).assertEqual(3);
    })
    it('SR000GGR45_testGet007', 0, function () {
        console.log("get-----005");
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        let res = plainarray.get(4);
        expect(res).assertEqual("D");
    })
    it('SR000GGR45_testLength008', 0, function () {
        console.log("size-----005");
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        let res = plainarray.length;
        console.log("size----- " + res);
        expect(res).assertEqual(5);
    })
    it('SR000GGR45_testClone009', 0, function () {
        console.log("clone-----001");
        let plainarray = new PlainArray();
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
        console.log("clear-----001");
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
    })
    it('SR000GGR45_testHas011', 0, function () {
        console.log("has-----001");
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
        console.log("getIndexOfKey-----001");
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        let res = plainarray.getIndexOfKey(2);
        console.log("getIndexOfKey-----001" + res);
        expect(res).assertEqual(1);
    })
    it('SR000GGR45_testGetIndexOfValue013', 0, function () {
        console.log("getIndexOfValue-----001");
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        let res = plainarray.getIndexOfValue("A");
        console.log("getIndexOfValue-----001" + res);
        expect(res).assertEqual(0);
    })
    it('SR000GGR45_testIsEmpty014', 0, function () {
        console.log("isEmpty--------001");
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        let res = plainarray.isEmpty();
        console.log(res)
        expect(res).assertEqual(false);
    })
    it('SR000GGR45_testGetKeyAt015', 0, function () {
        console.log("getKeyAt--------001");
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        let res = plainarray.getKeyAt(2);
        console.log(res)
        expect(res).assertEqual(3);
    })

    it('SR000GGR45_testReMove016', 0, function () {
        console.log("remove-----001");
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        let res = plainarray.remove(2);
        console.log(res)
        expect(res).assertEqual("B");
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
        console.log("removeAt-----001");
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        let res = plainarray.removeAt(2);
        console.log(res)
        expect(res).assertEqual("C");
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
        console.log("ReMoveRangeFrom-----001");
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
    })
    it('SR000GGR45_testSetValueAt019', 0, function () {
        console.log("setValueAt-----001");
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
    })
    it('SR000GGR45_testToString020', 0, function () {
        console.log("toString-----001");
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        let res = plainarray.toString();
        console.log(res);
        expect(res).assertEqual("1:A,2:B,3:C");
    })

    it('SR000GGR45_testForEach021', 0, function () {
        console.log("forEach-----001");
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        let arr = []
        plainarray.forEach((value,index)=>{
            arr.push(value);
        })
        let arr1= ["A","B","C","D","E"];
        for(let i=0;i<arr1.length;i++){
            expect(arr[i]).assertEqual(arr1[i]);
        }

    })
    it('SR000GGR45_testIterator022', 0, function () {
        console.log("iterator-----001");
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
        console.log("getValueAt-----001");
        let plainarray = new PlainArray();
        plainarray.add(1,"A");
        plainarray.add(2,"B");
        plainarray.add(3,"C");
        plainarray.add(4,"D");
        plainarray.add(5,"E");
        let res = plainarray.getValueAt(2);
        console.log("res-----" + res);
        expect(res).assertEqual("C")
    })
})