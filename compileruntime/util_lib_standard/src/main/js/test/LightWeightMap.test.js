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
import {LightWeightMap} from '@ohos.lightweightmap'

describe('SR00GGR3L_LightWeightMapTest', function () {
    /*
        *@tc.name:testConstructor001
         */
    it('SR00GGR3L_testConstructor001', 0, function () {
        console.log("Constructor-----001 lightweightmap ");
        try{
            let lightweightmap = new LightWeightMap();
        }catch(err){
            expect(err).assertEqual("Error:Cannot create new TreeMap")
        }
    })
    it('SR00GGR3L_testSet002', 0, function () {
        console.log("set-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1,"A");
        let res = lightweightmap.hasValue("A");
        expect(res).assertEqual(true);
        let res1 = lightweightmap.hasKey(1);
        expect(res1).assertEqual(true);
    })
    it('SR00GGR3L_testSet003', 0, function () {
        console.log("set-----002");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set("a","A");
        let res = lightweightmap.hasValue("A");
        expect(res).assertEqual(true);
        let res1 = lightweightmap.hasKey("a");
        expect(res1).assertEqual(true);
    })
    it('SR00GGR3L_testSet004', 0, function () {
        console.log("set-----004");
        let lightweightmap = new LightWeightMap();
        let a =[1,2,3,4]
        lightweightmap.set(1,a);
        let res = lightweightmap.hasValue(a);
        expect(res).assertEqual(true);
        let res1 = lightweightmap.hasKey(1);
        expect(res1).assertEqual(true);
    })
    it('SR00GGR3L_testSet005', 0, function () {
        console.log("set-----005");
        let lightweightmap = new LightWeightMap();
        let c = { name: 'lili', age: '13' }
        lightweightmap.set(1,c);
        let res = lightweightmap.hasValue(c);
        expect(res).assertEqual(true);
        let res1 = lightweightmap.hasKey(1);
        expect(res1).assertEqual(true);
    })
    it('SR00GGR3L_testGet006', 0, function () {
        console.log("get-----005");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1,"A");
        lightweightmap.set(2,"B");
        lightweightmap.set(3,"C");
        lightweightmap.set(4,"D");
        lightweightmap.set(5,"E");
        let res = lightweightmap.get(4);
        console.log(res);
        expect(res).assertEqual("D");
    })
    it('SR00GGR3L_testLength007', 0, function () {
        console.log("size-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1,"A");
        lightweightmap.set(2,"B");
        lightweightmap.set(3,"C");
        lightweightmap.set(4,"D");
        lightweightmap.set(5,"E");
        let res = lightweightmap.length;
        expect(res).assertEqual(5);
    })
    it('SR00GGR3L_testHasAll008', 0, function () {
        console.log("hasAll-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set("a","A");
        lightweightmap.set("b","B");
        lightweightmap.set("c","C");
        lightweightmap.set("d","D");
        lightweightmap.set("e","E");
        let lightweightmap1 = new LightWeightMap();
        console.log("hasAll----- set 1 ");
        lightweightmap1.set("a","A");
        lightweightmap1.set("d","D");
        console.log("hasAll----- set 2 ");
        let res = lightweightmap.hasAll(lightweightmap1);
        console.log("hasAll-----001  " + res);
        expect(res).assertEqual(true);
    })
    it('SR00GGR3L_testHasKey009', 0, function () {
        console.log("hasKey-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set("a", "A");
        lightweightmap.set("b", "B");
        lightweightmap.set("c", "C");
        lightweightmap.set("d", "D");
        lightweightmap.set("e", "E");
        let res = lightweightmap.hasKey("a");
        expect(res).assertEqual(true);
        let res1 = lightweightmap.hasKey(1);
        expect(res1).assertEqual(false);
    })
    it('SR00GGR3L_testHasValue010', 0, function () {
        console.log("hasValue-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set("a", "A");
        lightweightmap.set("b", "B");
        lightweightmap.set("c", "C");
        lightweightmap.set("d", "D");
        lightweightmap.set("e", "E");
        let res = lightweightmap.hasValue("A");
        expect(res).assertEqual(true);
        let res1 = lightweightmap.hasValue(1);
        expect(res1).assertEqual(false);
    })
    it('SR00GGR3L_testIncreaseCapacityTo011', 0, function () {
        console.log("increaseCapacityTo-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set("a", "A");
        lightweightmap.set("b", "B");
        lightweightmap.set("c", "C");
        lightweightmap.set("d", "D");
        lightweightmap.set("e", "E");
        lightweightmap.increaseCapacityTo(6);
        //expect(res).assertEqual(6);
        lightweightmap.forEach((value,index)=>{
            console.log(value);
        })
    })
    it('SR00GGR3L_testEntries012', 0, function () {
        console.log("Entries-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        let res = lightweightmap.entries();
        expect(JSON.stringify(res.next().value)).assertEqual("[1,\"A\"]");
        expect(JSON.stringify(res.next().value)).assertEqual("[2,\"B\"]");
        expect(JSON.stringify(res.next().value)).assertEqual("[3,\"C\"]");
        expect(JSON.stringify(res.next().value)).assertEqual("[4,\"D\"]");
        expect(JSON.stringify(res.next().value)).assertEqual("[5,\"E\"]");
    })
    it('SR00GGR3L_testGetIndexOfKey013', 0, function () {
        console.log("getIndexOfKey-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        let res = lightweightmap.getIndexOfKey(2);
        console.log(res);
        expect(res).assertEqual(1);
    })
    it('SR00GGR3L_testGetIndexOfValue014', 0, function () {
        console.log("getIndexOfValue-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        lightweightmap.setValueAt(4, "F");
        let res = lightweightmap.getIndexOfValue("F");
        console.log("getIndexOfValue-------------------------" + res);
        expect(res).assertEqual(4);
    })
    it('SR00GGR3L_testIsEmpty015', 0, function () {
        console.log("isEmpty-----001");
        let lightweightmap = new LightWeightMap();
        let res1 = lightweightmap.isEmpty();
        console.log(res1);
        expect(res1).assertEqual(true);
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        let res2 = lightweightmap.isEmpty();
        console.log(res2);
        expect(res2).assertEqual(false);
    })
    it('SR00GGR3L_testGetKeyAt016', 0, function () {
        console.log("getKeyAt-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        let res = lightweightmap.getKeyAt(1);
        console.log(res);
        expect(res).assertEqual(2);
    })
    it('SR00GGR3L_testKeys017', 0, function () {
        console.log("keys-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        let res = lightweightmap.keys();
        //        for(let i = 0; i < lightweightmap.length; i++){
        //            console.log(JSON.stringify(res.next()));
        //        }
        expect(res.next().value).assertEqual(1);
        expect(res.next().value).assertEqual(2);
        expect(res.next().value).assertEqual(3);
        expect(res.next().value).assertEqual(4);
        expect(res.next().value).assertEqual(5);
    })
    it('SR00GGR3L_testSetAll018', 0, function () {
        console.log("setAll-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        let lightweightmap1 = new LightWeightMap();
        lightweightmap1.set("a", "A");
        lightweightmap1.set("b", "B");
        let res = lightweightmap.setAll(lightweightmap1);
        let arr=[]
        for(let item of lightweightmap1){
            arr.push(item)
        }
        let arr1= ["1,A","2,B","3,C","4,D","5,E"];
        for(let i=0;i<arr1.length;i++){
            expect(arr[i]).assertEqual(arr1[i]);
        }

    })

    it('SR00GGR3L_testRemove019', 0, function () {
        console.log("Remove-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        let res = lightweightmap.remove(3);
        expect(res).assertEqual("C");
        let res1 = lightweightmap.hasValue("C");
        expect(res1).assertEqual(false);
    })

    it('SR00GGR3L_testRemoveAt020', 0, function () {
        console.log("removeAt-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        let res = lightweightmap.removeAt(1);
        console.log("res-----" + res);
        expect(res).assertEqual(true);
        let res1 = lightweightmap.hasValue("A");
        console.log("res1-----" + res1);
        expect(res1).assertEqual(true);
        let res2 = lightweightmap.hasValue("B");
        console.log("res2-----" + res2);
        expect(res2).assertEqual(false);
        let res3 = lightweightmap.removeAt(10);
        console.log("res3-----" + res3);
        expect(res3).assertEqual(false);
    })

    it('SR00GGR3L_testClear021', 0, function () {
        console.log("clear-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        lightweightmap.clear();
        let res = lightweightmap.length;
        expect(res).assertEqual(0);
        let isEmpty = lightweightmap.isEmpty();
        expect(isEmpty).assertEqual(true);
    })
    it('SR00GGR3L_testSetValueAt022', 0, function () {
        console.log("setValueAt-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        lightweightmap.setValueAt(0,"a");
        let res = lightweightmap.get(1);
        expect(res).assertEqual("a");
    })
    it('SR00GGR3L_testForEach023', 0, function () {
        console.log("forEach-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        let arr = []
        lightweightmap.forEach((value,index)=>{
            arr.push(value);
        })
        let arr1= ["A","B","C","D","E"];
        for(let i=0;i<arr1.length;i++){
            expect(arr[i]).assertEqual(arr1[i]);
        }

    })
    it('SR00GGR3L_testToString024', 0, function () {
        console.log("toString-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        let res = lightweightmap.toString();
        expect(res).assertEqual("1:A,2:B,3:C");

    })
    it('SR00GGR3L_testValues025', 0, function () {
        console.log("values-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        let res = lightweightmap.values();
        //        for(let i = 0; i < lightweightmap.length; i++){
        //            console.log(JSON.stringify(res.next()));
        //        }
        expect(res.next().value).assertEqual("A");
        expect(res.next().value).assertEqual("B");
        expect(res.next().value).assertEqual("C");
        expect(res.next().value).assertEqual("D");
        expect(res.next().value).assertEqual("E");
    })
    it('SR00GGR3L_testGetValueAt026', 0, function () {
        console.log("getValueAt-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        let res = lightweightmap.getValueAt(1);
        expect(res).assertEqual("B");
    })
    it('SR00GGR3L_testIterator027', 0, function () {
        console.log("iterator-----001");
        let lightweightmap = new LightWeightMap();
        lightweightmap.set(1, "A");
        lightweightmap.set(2, "B");
        lightweightmap.set(3, "C");
        lightweightmap.set(4, "D");
        lightweightmap.set(5, "E");
        let arr=[]
        for(let item of lightweightmap){
            arr.push(item)
        }
        let arr1= ["1,A","2,B","3,C","4,D","5,E"];
        for(let i=0;i<arr1.length;i++){
            expect(arr[i]).assertEqual(arr1[i]);
        }
    })

})