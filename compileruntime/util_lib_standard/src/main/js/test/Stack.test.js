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
import {Stack} from '@ohos.stack'

describe('StackTest', function () {
    /*
        *@tc.name:testConstructor001
         */
    it('SR000GGR49_testConstructor001', 0, function () {
        try {
            let stack = new Stack();
        } catch (err) {
            expect(err).assertEqual("Error:Cannot create new stack")
        }
    })
    it('SR000GGR49_testPush002', 0, function () {
        console.log("push-----002");
        let stack = new Stack();
        stack.push("四");
        let res = stack.peek()
        console.log(res)
        expect(res).assertEqual("四")
    })
    it('SR000GGR49_testPush003', 0, function () {
        console.log("push-----003");
        let stack = new Stack();
        stack.push(8);
        let res = stack.peek()
        console.log(res)
        expect(res).assertEqual(8)
    })
    it('SR000GGR49_testPush004', 0, function () {
        console.log("push-----004");
        let stack = new Stack();
        let a = { name: 'lala', age: '13岁' }
        stack.push(a);
        let res = stack.peek()
        console.log(res)
        expect(res).assertEqual(a)
    })
    it('SR000GGR49_testPush005', 0, function () {
        console.log("push-----005");
        let stack = new Stack();
        let a = [1, 2, 3, 4]
        stack.push(a);
        let res = stack.peek()
        console.log(res)
        expect(res).assertEqual(a)
    })
    it('SR000GGR49_testPeek006', 0, function () {
        console.log("peek-----006");
        let stack = new Stack();
        let a = [1, 2, 3, 4]
        stack.push(a);
        stack.push("A");
        stack.push("B");
        stack.push(1);
        let res = stack.peek()
        console.log(res)
        expect(res).assertEqual(1)
    })

    it('SR000GGR49_testLocate007', 0, function () {
        console.log("locate-----007");
        let stack = new Stack();
        let a = [1, 2, 3, 4];
        stack.push(8);
        stack.push(a);
        stack.push("A");
        stack.push("B");
        stack.push(1);
        let res = stack.locate("A");
        let res1 = stack.locate("C");
        console.log(res, res1)
        expect(res).assertEqual(2);
        expect(res1).assertEqual(-1);
    })
    it('SR000GGR49_testPop008', 0, function () {
        console.log("pop-----008");
        let stack = new Stack();
        stack.push("B");
        stack.push(1);
        let res = stack.pop();
        let res1 = stack.peek();
        console.log(res, res1)
        expect(res).assertEqual(1);
        expect(res1).assertEqual("B");
    })
    it('SR000GGR49_testForEach009', 0, function () {
        console.log("forEach-----009");
        let stack = new Stack();
        stack.push(8);
        stack.push("三")
        stack.push(5);
        let c = { name: 'lili', age: '13' };
        stack.push(c);
        stack.push(6);
        stack.push("四");
        let arr = [];
        console.log(arr);
        stack.forEach((item, index) => {
            arr.push(item);
        })
        console.log(arr)
        let a = [8, "三", 5,c, 6, "四"]
        for (let i = 0;i < a.length; i++) {
            expect(arr[i]).assertEqual(a[i])
        }
    })

    it('SR000GGR49_testIterator010', 0, function () {
        console.log("iterator-----010");
        let stack = new Stack();
        stack.push(8);
        stack.push("一")
        stack.push("二")
        stack.push(5);
        let c = [1, 2, 3, 4];
        stack.push(c);
        stack.push(6);
        stack.push("三")
        stack.push("四")
        let arr = []
        console.log(arr);
        for (let item of stack) {
            arr.push(item);
        }
        console.log(arr)
        let a = [8, "一", "二", 5, c,6, "三", "四"]
        for (let i = 0;i < a.length; i++) {
            expect(arr[i]).assertEqual(a[i])
        }
    })

    it('SR000GGR49_test_length011', 0, function () {
        console.log("length-----011");
        let stack = new Stack();
        stack.push(8);
        stack.push("一")
        stack.push("二")
        stack.push(5);
        let res = stack.length;
        expect(4).assertEqual(res)
    })

    it('SR000GGR49_test_isEmpty012', 0, function () {
        console.log("isEmpty-----012");
        let stack = new Stack();
        stack.push(8);
        stack.push("一")
        stack.push("二")
        stack.push(5);
        let res = stack.isEmpty();
        expect(res).assertEqual(false)
    })

})