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
import {Stack} from '@ohos.stack'

describe('StackTest', function () {
    it('SR000GGR49_test_Constructor001', 0, function () {
        try {
            let stack = new Stack();
            expect(stack != undefined).assertEqual(true)
        } catch (err) {
            expect(err).assertEqual("Error: Cannot create new stack")
        }
    })

    it('SR000GGR49_test_push002', 0, function () {
        let stack = new Stack();
        stack.push("四");
        let res = stack.peek()
        expect(res).assertEqual("四")
    })

    it('SR000GGR49_test_push003', 0, function () {
        let stack = new Stack();
        stack.push(8);
        let res = stack.peek()
        expect(res).assertEqual(8)
    })

    it('SR000GGR49_test_push004', 0, function () {
        let stack = new Stack();
        let a = { name: 'lala', age: '13岁' }
        stack.push(a);
        let res = stack.peek()
        expect(res).assertEqual(a)
    })

    it('SR000GGR49_test_push005', 0, function () {
        let stack = new Stack();
        let a = [1, 2, 3, 4]
        stack.push(a);
        let res = stack.peek()
        expect(res).assertEqual(a)
    })

    it('SR000GGR49_test_peek006', 0, function () {
        let stack = new Stack();
        let a = [1, 2, 3, 4]
        stack.push(a);
        stack.push("A");
        stack.push("B");
        stack.push(1);
        let res = stack.peek()
        expect(res).assertEqual(1)
    })

    it('SR000GGR49_test_locate007', 0, function () {
        let stack = new Stack();
        let a = [1, 2, 3, 4];
        stack.push(8);
        stack.push(a);
        stack.push("A");
        stack.push("B");
        stack.push(1);
        let res = stack.locate("A");
        let res1 = stack.locate("C");
        expect(res).assertEqual(2);
        expect(res1).assertEqual(-1);
    })

    it('SR000GGR49_test_pop008', 0, function () {
        let stack = new Stack();
        stack.push("B");
        stack.push(1);
        let res = stack.pop();
        let res1 = stack.peek();
        expect(res).assertEqual(1);
        expect(res1).assertEqual("B");
    })

    it('SR000GGR49_test_forEach009', 0, function () {
        let stack = new Stack();
        stack.push(8);
        stack.push("三")
        stack.push(5);
        let c = { name: 'lili', age: '13' };
        stack.push(c);
        stack.push(6);
        stack.push("四");
        let arr = [];
        stack.forEach((item, index) => {
            arr.push(item);
        })
        let a = [8, "三", 5,c, 6, "四"]
        for (let i = 0;i < a.length; i++) {
            expect(arr[i]).assertEqual(a[i])
        }
    })

    it('SR000GGR49_test_iterator010', 0, function () {
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
        for (let item of stack) {
            arr.push(item);
        }
        let a = [8, "一", "二", 5, c,6, "三", "四"]
        for (let i = 0;i < a.length; i++) {
            expect(arr[i]).assertEqual(a[i])
        }
    })

    it('SR000GGR49_test_length011_1', 0, function () {
        let stack = new Stack();
        stack.push(8);
        stack.push("一")
        stack.push("二")
        stack.push(5);
        let res = stack.length;
        expect(4).assertEqual(res)
    })

    it('SR000GGR49_test_length011_2', 0, function () {
        let stack = new Stack();
        let res = stack.length;
        expect(0).assertEqual(res)
    })

    it('SR000GGR49_test_isEmpty012_1', 0, function () {
        let stack = new Stack();
        stack.push(8);
        stack.push("一")
        stack.push("二")
        stack.push(5);
        let res = stack.isEmpty();
        expect(res).assertEqual(false)
    })

    it('SR000GGR49_test_isEmpty012_2', 0, function () {
        let stack = new Stack();
        let res = stack.isEmpty();
        expect(res).assertEqual(true)
    })

    it('SR000GGR49_test_push013', 0, function () {
        let stack = new Stack();
        stack.push("你好世界");
        let res = stack.peek()
        expect(res).assertEqual("你好世界")
    })

    it('SR000GGR49_test_push014', 0, function () {
        let stack = new Stack();
        stack.push(1234);
        let res = stack.peek()
        expect(res).assertEqual(1234)
    })

    it('SR000GGR49_test_push015', 0, function () {
        let stack = new Stack();
        stack.push(1.234);
        let res = stack.peek()
        expect(res).assertEqual(1.234)
    })

    it('SR000GGR49_test_push016', 0, function () {
        let stack = new Stack();
        stack.push(-1234);
        let res = stack.peek()
        expect(res).assertEqual(-1234)
    })

    it('SR000GGR49_test_push017', 0, function () {
        let stack = new Stack();
        stack.push(0);
        let res = stack.peek()
        expect(res).assertEqual(0)
    })

    it('SR000GGR49_test_push018', 0, function () {
        let stack = new Stack();
        stack.push(10);
        stack.push(3.14);
        stack.push(-2);
        stack.push("AB");
        stack.push("*");
        let res = stack.peek()
        expect(res).assertEqual("*")
    })

    it('SR000GGR49_test_push019', 0, function () {
        let stack = new Stack();
        let arr = {};
        stack.push(arr);
        let res = stack.peek()
        expect(res).assertEqual(arr)
    })

    it('SR000GGR49_test_push020', 0, function () {
        let stack = new Stack();
        let arr = [];
        stack.push(arr);
        let res = stack.peek()
        expect(res).assertEqual(arr)
    })

    it('SR000GGR49_test_push021', 0, function () {
        let stack = new Stack();
        stack.push("hello world");
        let res = stack.peek()
        expect(res).assertEqual("hello world")
    })

    it('SR000GGR49_test_push022', 0, function () {
        let stack = new Stack();
        stack.push("~!@#$^&*()_+-*/=.?<>:;\|{}[]");
        let res = stack.peek();
        expect(res).assertEqual("~!@#$^&*()_+-*/=.?<>:;\|{}[]");
    })

    it('SR000GGR49_test_push023', 0, function () {
        let stack = new Stack();
        stack.push("");
        let res = stack.peek();
        expect(res).assertEqual("");
    })

    it('SR000GGR49_test_push024', 0, function () {
        let stack = new Stack();
        stack.push(true);
        let res = stack.peek();
        expect(res).assertEqual(true);
    })

    it('SR000GGR49_test_push025', 0, function () {
        let stack = new Stack();
        stack.push(false);
        let res = stack.peek();
        expect(res).assertEqual(false);
    })

    it('SR000GGR49_test_push026', 0, function () {
        let stack = new Stack();
        stack.push(null);
        let res = stack.peek();
        expect(res).assertEqual(null);
    })

    it('SR000GGR49_test_push027', 0, function () {
        let stack = new Stack();
        stack.push(undefined);
        let res = stack.peek();
        expect(res).assertEqual(undefined);
    })

    it('SR000GGR49_test_peek028', 0, function () {
        let stack = new Stack();
        try {
            let res = stack.peek();
        } catch (err) {
            expect(err).assertEqual("Error: Stack: get out-of-bounds")
        }
    })

    it('SR000GGR49_test_pop029', 0, function () {
        let stack = new Stack();
        try {
            let res = stack.pop();
        } catch (err) {
            expect(err).assertEqual("Error: Stack: get out-of-bounds")
        }
    })

    it('SR000GGR49_test_forEach030', 0, function () {
        let stack = new Stack();
        let arr = [];
        try {
            stack.forEach((item, index) => {
                arr.push(item);
            })
        } catch (err) {
            expect(err).assertEqual("Error:Cannot create new stack")
        }
        expect(arr.length).assertEqual(0);
    })

    it('SR000GGR49_test_iterator031', 0, function () {
        let stack = new Stack();
        let arr = [];
        try {
            for (let item of stack) {
                arr.push(item);
            }
        } catch (err) {
            expect(err).assertEqual("Error:Cannot create new stack")
        }
        expect(arr.length).assertEqual(0);
    })

    it('SR000GGR49_test_push032', 0, function () {
        let stack = new Stack();
        for (let i = 0; i < 1000; i++) {
            stack.push(i);
        }
        let res = stack.length;
        expect(res).assertEqual(1000);
        let res1 = stack.peek();
        expect(res1).assertEqual(999);
    })
})