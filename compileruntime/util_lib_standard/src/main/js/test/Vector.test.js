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
import {Vector} from '@ohos.vector'

describe('VectorTest', function () {
    /*
        *@tc.name:SR000GGR47_testConstructor001
         */
    it('SR000GGR47_testConstructor001', 0, function () {
        try{
            let vector = new Vector();
        }catch(err){
            expect(err).assertEqual("Error:Cannot create new vector")
        }
    })

    it('SR000GGR47_testAdd002', 0, function () {
        console.log("add-----001");
        let vector = new Vector();
        vector.add("四");
        let res = vector.getFirstElement()
        console.log(res)
        expect(res).assertEqual("四")
    })
    it('SR000GGR47_testAdd003 ', 0, function () {
        console.log("add-----002");
        let vector = new Vector();
        vector.add(4);
        let res = vector.getFirstElement()
        console.log(res)
        expect(res).assertEqual(4)
    })
    it('SR000GGR47_testAdd004 ', 0, function () {
        console.log("add-----003");
        let vector = new Vector();
        let a={name:'lala',age:'13岁'}
        vector.add(a);
        let res = vector.getFirstElement()
        console.log(res)
        expect(res).assertEqual(a)
    })
    it('SR000GGR47_testAdd005 ', 0, function () {
        console.log("add-----004");
        let vector = new Vector();
        let a=[1,2,3,4]
        vector.add(a);
        let res = vector.getFirstElement()
        console.log(res)
        expect(res).assertEqual(a)
    })
    it('SR000GGR47_testInsert006', 0, function () {
        console.log("insert-----002");
        let vector = new Vector();
        vector.add("四");
        vector.add("三");
        vector.add(1);
        vector.add('a')
        vector.insert(8,2)
        let res = vector.get(2)
        console.log(res)
        expect(res).assertEqual(8)
    })
    it('SR000GGR47_testLength007', 0, function () {
        console.log("length-----001");
        let vector = new Vector();
        vector.add("四");
        vector.add("三");
        vector.add(1);
        vector.add('a')
        let res = vector.length;
        console.log(res)
        expect(res).assertEqual(4)
    })
    it('SR000GGR47_testHas008', 0, function () {
        console.log("has-----001");
        let vector = new Vector();
        vector.add("四");
        vector.add("三");
        vector.add(1);
        vector.add('a')
        vector.insert(8,2)
        let res = vector.has(8);
        let res1 = vector.has("二")
        console.log(res,res1)
        expect(res).assertEqual(true);
        expect(res1).assertEqual(false);
    })
    it('SR000GGR47_testGet009', 0, function () {
        console.log("get-----001");
        let vector = new Vector();
        vector.add("四");
        vector.add("三");
        vector.add(1);
        vector.add('a')
        vector.insert(8,2)
        let res1 = vector.get(1)
        console.log(res1)
        expect(res1).assertEqual("三");
    })
    it('SR000GGR47_testGetIndexOf010', 0, function () {
        console.log("getIndexOf-----001");
        let vector = new Vector();
        vector.add(1);
        vector.add("三");
        vector.add(1);
        vector.add('a')
        vector.insert(1,2)
        let res1 = vector.getIndexOf(1)
        expect(res1).assertEqual(0);
    })
    it('SR000GGR47_testGetFirstElement011', 0, function () {
        console.log("getFirstElement-----001");
        let vector = new Vector();
        vector.add("四");
        vector.add("三");
        vector.add(1);
        vector.add('a')
        vector.insert(8,2)
        let res = vector.getFirstElement();
        console.log(res)
        expect(res).assertEqual("四");
    })
    it('SR000GGR47_testSet012', 0, function () {
        console.log("set-----001");
        let vector = new Vector();
        vector.add("四");
        vector.add("三");
        vector.add(1);
        vector.add('a')
        vector.insert(8,2)
        vector.set(1,"二");
        let res = vector.get(1)
        console.log(res)
        expect(res).assertEqual("二");
    })
    it('SR000GGR47_testRemoveByIndex013', 0, function () {
        console.log("removeByIndex-----001");
        let vector = new Vector();
        vector.add("四");
        vector.add("三");
        vector.add(1);
        vector.add('a')
        vector.removeByIndex(2);
        let res=vector.has(1);
        console.log(res)
        expect(res).assertEqual(false);
    })
    it('SR000GGR47_testRemove014', 0, function () {
        console.log("remove-----001");
        let vector = new Vector();
        vector.add("四");
        vector.add("三");
        vector.add(1);
        vector.add('a')
        vector.remove("三");
        let res=vector.has("三");
        console.log(res)
        expect(res).assertEqual(false);
    })
    it('SR000GGR47_testGetLastElement015', 0, function () {
        console.log("getLastElement-----001");
        let vector = new Vector();
        vector.add("四");
        vector.add("三");
        vector.add(1);
        vector.add('a');
        let res1 = vector.length;
        let res=vector.getLastElement()
        console.log(res)
        expect(res).assertEqual("a");
    })
    it('SR000GGR47_testGetLastIndexOf016', 0, function () {
        console.log("getLastIndexOf-----001");
        let vector = new Vector();
        vector.add("四");
        vector.add("三");
        vector.add(1);
        vector.add('a');
        vector.add(1);
        vector.add("b");
        let res = vector.getLastIndexOf(1);
        console.log(res)
        expect(res).assertEqual(4);
    })
    it('SR000GGR47_testGetLastIndexFrom017', 0, function () {
        console.log("getLastIndexFrom-----001");
        let vector = new Vector();
        vector.add("四");
        vector.add("三");
        vector.add(1);
        vector.add('a');
        vector.add(1);
        vector.add("b");
        vector.add("c");
        vector.add(1);
        let res = vector.getLastIndexFrom(1,5);
        console.log(res)
        expect(res).assertEqual(4);
    })
    it('SR000GGR47_testGetIndexFrom018', 0, function () {
        console.log("getIndexFrom-----001");
        let vector = new Vector();
        vector.add("四");
        vector.add("三");
        vector.add(1);
        vector.add('a');
        vector.add(1);
        vector.add("b");
        vector.add("c");
        vector.add(1);
        let res = vector.getIndexFrom(1,5);
        console.log(res)
        expect(res).assertEqual(7);
    })
    it('SR000GGR47_testRemoveByRange019', 0, function () {
        console.log("removeByRange-----001");
        let vector = new Vector();
        vector.add("四");
        vector.add("三");
        vector.add(1);
        vector.add('a');
        vector.add(1);
        vector.add("b");
        vector.add("c");
        vector.add(1);
        vector.removeByRange(1,3);
        let arr=[];
        vector.forEach((item,index)=>{
            arr.push(item);

        })
        let a=["四","a",1,"b","c",1];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR47_testSetLength020', 0, function () {
        console.log("setLength-----002");
        let vector = new Vector();
        vector.add("四");
        vector.add("三");
        vector.add(1);
        vector.add('a');
        vector.add(1);
        vector.add("b");
        vector.add("c");
        vector.add(1);
        vector.setLength(5);
        let res1 = vector.length
        expect(res1).assertEqual(5)
    })
    it('SR000GGR47_testReplaceAllElements021', 0, function () {
        console.log("replaceAllElements-----002");
        let vector = new Vector();
        vector.add(4);
        vector.add(3);
        vector.add(1);
        vector.add(2);
        vector.add(14);
        vector.replaceAllElements((item, index) => {
            return (item = 2 * item);
        });
        let arr=[];
        vector.forEach((item,index)=>{
            arr.push(item);
        })
        let a=[8,6,2,4,28];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR47_testForEach022', 0, function () {
        console.log("forEach-----001");
        let vector = new Vector();
        vector.add(4);
        vector.add(3);
        vector.add(1);
        vector.add(2);
        vector.add(14);
        let arr=[];
        vector.forEach((item,index)=>{
            arr.push(item);
        })
        let a=[4,3,1,2,14];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
        it('SR000GGR47_testConstructor023', 0, function () {
            console.log("subVector-----001");
            let vector = new Vector();
            vector.add(4);
            vector.add(3);
            vector.add(1);
            vector.add(2);
            vector.add(14);
            let res = vector.subVector(2,4);
            let arr=[];
            res.forEach((item,index)=>{
                arr.push(item);
            })
            let a=[1,2];
            for(let i=0;i<a.length;i++){
                expect(arr[i]).assertEqual(a[i])
            }
        })
    it('SR000GGR47_testClear024', 0, function () {
        console.log("clear-----001");
        let vector = new Vector();
        vector.add(4);
        vector.add(3);
        vector.add(1);
        vector.add(2);
        vector.add(14);
        vector.clear();
        let res = vector.length;
        expect(res).assertEqual(0)
    })
    it('SR000GGR47_testConvertToArray025', 0, function () {
        console.log("convertToArray-----001");
        let vector = new Vector();
        vector.add(4);
        vector.add(3);
        vector.add(1);
        vector.add(2);
        vector.add(14);
        let arr= vector.convertToArray()
        let a=[4,3,1,2,14];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR47_testCopyToArray026', 0, function () {
        console.log("copyToArray-----001");
        let vector = new Vector();
        vector.add(4);
        vector.add(3);
        vector.add(1);
        vector.add(2);
        vector.add(14);
        let arr1=['a','b','c']
        let res = vector.copyToArray(arr1);
        let a=[4,3,1];
        for(let i=0;i<a.length;i++){
            expect(arr1[i]).assertEqual(a[i])
        }
    })

    it('SR000GGR47_testToString027', 0, function () {
        console.log("toString-----001");
        let vector = new Vector();
        vector.add(4);
        vector.add(3);
        vector.add(1);
        vector.add(2);
        vector.add(14);
        let res = vector.toString();
        expect(res).assertEqual('4,3,1,2,14')

    })
        it('SR000GGR47_testClone028', 0, function () {
            console.log("clone-----001");
            let vector = new Vector();
            vector.add(4);
            vector.add(3);
            vector.add(1);
            vector.add(2);
            vector.add(14);
            let res = vector.clone();
            let arr =[]
            res.forEach((item,index)=>{
                arr.push(item);
            })
            let a=[4,3,1,2,14];
            for(let i=0;i<a.length;i++){
                expect(arr[i]).assertEqual(a[i])
            }
        })
    it('SR000GGR47_testGetCapacity029', 0, function () {
        console.log("getCapacity-----001");
        let vector = new Vector();
        vector.add(4);
        vector.add(3);
        vector.add(1);
        vector.add(2);
        vector.add(14);
        let res = vector.getCapacity();
        expect(res).assertEqual(10)
    })
    it('SR000GGR47_testGetCapacity030', 0, function () {
        console.log("getCapacity-----002");
        let vector = new Vector();
        vector.add(4);
        vector.add(3);
        vector.add(1);
        vector.add(2);
        vector.add(14);
        vector.add('a');
        vector.add('b');
        vector.add('c');
        vector.add('d');
        vector.add('v');
        let a=[1,2,3,4];
        vector.add(a);
        let res = vector.getCapacity();
        expect(res).assertEqual(20)
    })
    it('SR000GGR47_testIncreaseCapacityTo031', 0, function () {
        console.log("increaseCapacityTo-----002");
        let vector = new Vector();
        vector.add(4);
        vector.add(3);
        vector.add(1);
        vector.add(2);
        vector.add(14);
        vector.increaseCapacityTo(30);
        let res = vector.getCapacity();
        expect(res).assertEqual(30);
    })
    it('SR000GGR47_testTrimToCurrentLength032', 0, function () {
        console.log("trimToCurrentLength-----002");
        let vector = new Vector();
        vector.add(4);
        vector.add(3);
        vector.add(1);
        vector.add(2);
        vector.add(14);
        vector.trimToCurrentLength();
        let res = vector.getCapacity();
        expect(res).assertEqual(5)
    })
    it('SR000GGR47_testSetLength033', 0, function () {
        console.log("setLength-----002");
        let vector = new Vector();
        vector.add(4);
        vector.add(3);
        vector.add(1);
        vector.add(2);
        vector.add(14);
        vector.setLength(7);
        let res1 = vector.length;
        expect(res1).assertEqual(7)
    })
    it('SR000GGR47_testIterator034', 0, function () {
        console.log("iterator-----008");
        let vector = new Vector();
        vector.add(8);
        vector.add("一")
        vector.add("二")
        vector.add(5);
        let c=[1,2,3,4];
        vector.add(c);
        vector.add(6);
        vector.add("三")
        vector.add("四")
        let arr =[]
        for(let item of vector) {
            arr.push(item);
        }
        console.log(arr)
        let a = [8,"一","二",5,c,6,"三","四"]
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR47_testSort035', 0, function () {
        console.log("sort-----002");
        let vector = new Vector();
        vector.add(4);
        vector.add(3);
        vector.add(1);
        vector.add(2);
        vector.add(14);
        vector.sort((a,b) => a-b);
        let arr=[];
        vector.forEach((item,index)=>{
            arr.push(item);
        })
        let a=[1,2,3,4,14];
        for(let i=0;i<a.length;i++){
            expect(arr[i]).assertEqual(a[i])
        }
    })
    it('SR000GGR47_testisEmpty036', 0, function () {
        console.log("isEmpty-----001");
        let vector = new Vector();
        vector.add("四");
        let res = vector.isEmpty()
        console.log(res)
        expect(res).assertEqual(false)
    })
})

