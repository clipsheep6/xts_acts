/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index';
import ArrayList from "@ohos.util.ArrayList";

describe("ArraylistTest", function () {

  /**
   * @tc.name: testConstructor001
   * @tc.desc: Create an ArrayList instance. For example: let arrayList = new ArrayList().
   * @tc.author: wangyong
   */
  it("testConstructor001", 0, function () {
    try {
      let arrayList = new ArrayList();
      expect(arrayList != undefined).assertEqual(true);
    } catch (err) {
      expect(err.name).assertEqual("TypeError");
      expect(err.message).assertEqual("Cannot create new arrayList");
    }
  });

  /**
   * @tc.name: testAdd002
   * @tc.desc: Add a string type element to the end of the ArrayList instance. For example: arrayList.add("四").
   * @tc.author: wangyong
   */
  it("testAdd002", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add("四");
    let res = arrayList.has("四");
    expect(res).assertEqual(true);
  });

  /**
   * @tc.name: testAdd003
   * @tc.desc: Add a number type element to the end of the ArrayList instance. For example: arrayList.add(8).
   * @tc.author: wangyong
   */ 
  it("testAdd003", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add(8);
    let res = arrayList.has(8);
    expect(res).assertEqual(true);
  });

  /**
   * @tc.name: testAdd004
   * @tc.desc: Add a object type element to the end of the ArrayList instance. 
   * For example: let a = {name: "lala", age: "13岁"}; arrayList.add(a).
   * @tc.author: wangyong
   */
  it("testAdd004 ", 0, function () {
    let arrayList = new ArrayList();
    let a = {name: "lala", age: "13岁"};
    arrayList.add(a);
    let res = arrayList.has(a);
    expect(res).assertEqual(true);
  });

  /**
   * @tc.name: testAdd005
   * @tc.desc: Add a array type element to the end of the ArrayList instance. 
   * For example: let a = [1, 2, 3, 4]; arrayList.add(a).
   * @tc.author: wangyong
   */
  it("testAdd005 ", 0, function () {
    let arrayList = new ArrayList();
    let a = [1, 2, 3, 4];
    arrayList.add(a);
    let res = arrayList.has(a);
    expect(res).assertEqual(true);
  });

  /**
   * @tc.name: testAdd006
   * @tc.desc: Add a boolean type element to the end of the ArrayList instance. 
   * For example: let a = true; arrayList.add(a).
   * @tc.author: wangyong
   */
  it("testAdd006 ", 0, function () {
    let arrayList = new ArrayList();
    let a = true;
    arrayList.add(a);
    let res = arrayList.has(a);
    expect(res).assertEqual(true);
  });

  /**
   * @tc.name: testInsert007
   * @tc.desc: Insert an element into the middle of the ArrayList instance. For example: arrayList.insert(8, 2).
   * @tc.author: wangyong
   */
  it("testInsert007", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add("四");
    arrayList.add("三");
    arrayList.add(1);
    arrayList.add("a");
    arrayList.insert(8, 2);
    let arr = [];
    arrayList.forEach((item, index) => {
      arr.push(item);
    });
    let a = ["四", "三", 8, 1, "a"];
    for (let i = 0; i < a.length; i++) {
      expect(arr[i]).assertEqual(a[i]);
    }
  });

  /**
   * @tc.name: testLength008
   * @tc.desc: Get the number of elements contained in the ArrayList instance. For example: arrayList.length.
   * @tc.author: wangyong
   */
  it("testLength008", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add("四");
    arrayList.add("三");
    arrayList.add(1);
    arrayList.add("a");
    arrayList.insert(8, 2);
    let res = arrayList.length;
    expect(res).assertEqual(5);
  });

  /**
   * @tc.name: testHas009
   * @tc.desc: Check whether the ArrayList contains a specified element. For example: arrayList.has(8).
   * @tc.author: wangyong
   */
  it("testHas009", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add("四");
    arrayList.add("三");
    arrayList.add(1);
    arrayList.add("a");
    arrayList.insert(8, 2);
    let res = arrayList.has(8);
    expect(res).assertEqual(true);
  });

  /**
   * @tc.name: testGetIndexOf010
   * @tc.desc: In the ArrayList instance, find the index of a specified element from front to back, 
   * and return the index found for the first time. If not found, return -1. For example: arrayList.getIndexOf(1).
   * @tc.author: wangyong
   */
  it("testGetIndexOf010", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add(1);
    arrayList.add("三");
    arrayList.add(1);
    arrayList.add("a");
    arrayList.insert(1, 2);
    let res1 = arrayList.getIndexOf(1);
    expect(res1).assertEqual(0);
  });

  /**
   * @tc.name: testRemoveByIndex011
   * @tc.desc: In the ArrayList instance, delete the element based on its index. 
   * For example: arrayList.removeByIndex(2).
   * @tc.author: wangyong
   */
  it("testRemoveByIndex011", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add("四");
    arrayList.add("三");
    arrayList.add(1);
    arrayList.add("a");
    arrayList.removeByIndex(2);
    let arr = [];
    arrayList.forEach((item, index) => {
      arr.push(item);
    });
    let a = ["四", "三", "a"];
    for (let i = 0; i < a.length; i++) {
      expect(arr[i]).assertEqual(a[i]);
    }
  });

  /**
   * @tc.name: testRemove012
   * @tc.desc: Delete the specified element . For example: arrayList.remove("三").
   * @tc.author: wangyong
   */
  it("testRemove012", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add("四");
    arrayList.add("三");
    arrayList.add(1);
    arrayList.add("a");
    arrayList.remove("三");
    let res = arrayList.has("三");
    expect(res).assertEqual(false);
  });

  /**
   * @tc.name: testGetLastIndexOf013
   * @tc.desc:  In the ArrayList instance, find the index of a specified element from brack to front, 
   * and return the index found for the first time. If not found, return -1. For example: arrayList.add("四").
   * @tc.author: wangyong
   */
  it("testGetLastIndexOf013", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add("四");
    arrayList.add("三");
    arrayList.add(1);
    arrayList.add("a");
    arrayList.add(1);
    arrayList.add("b");
    let res = arrayList.getLastIndexOf(1);
    expect(res).assertEqual(4);
  });

  /**
   * @tc.name: testRemoveByRange014
   * @tc.desc: Deletes elements from a specified range, including elements at the start position and 
   * elements at the end position. For example: arrayList.removeByRange(1, 3).
   * @tc.author: wangyong
   */
  it("testRemoveByRange014", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add("四");
    arrayList.add("三");
    arrayList.add(1);
    arrayList.add("a");
    arrayList.add(1);
    arrayList.add("b");
    arrayList.add("c");
    arrayList.add(1);
    arrayList.removeByRange(1, 3);
    let arr = [];
    arrayList.forEach((item, index) => {
      arr.push(item);
    });
    let a = ["四", "a", 1, "b", "c", 1];
    for (let i = 0; i < a.length; i++) {
      expect(arr[i]).assertEqual(a[i]);
    }
  });

  /**
   * @tc.name: testReplaceAllElements015
   * @tc.desc: Perform some operation on the elements in the ArrayList instance and return the ArrayList instance 
   * after the operation. For example: arrayList.replaceAllElements((item, index) => {return (item = 2 * item);}).
   * @tc.author: wangyong
   */
  it("testReplaceAllElements015", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add(4);
    arrayList.add(3);
    arrayList.add(1);
    arrayList.add(2);
    arrayList.add(14);
    arrayList.replaceAllElements((item, index) => {
      return (item = 2 * item);
    });
    let arr = [];
    arrayList.forEach((item, index) => {
      arr.push(item);
    });
    let a = [8, 6, 2, 4, 28];
    for (let i = 0; i < a.length; i++) {
      expect(arr[i]).assertEqual(a[i]);
    }
  });

  /**
   * @tc.name: testForEach016
   * @tc.desc: Traversing elements in an ArrayList instance. 
   * For example: arrayList.forEach((item, index) => {arr.push(item);}).
   * @tc.author: wangyong
   */
  it("testForEach016", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add(4);
    arrayList.add(3);
    arrayList.add(1);
    arrayList.add(2);
    arrayList.add(14);
    let arr = [];
    arrayList.forEach((item, index) => {
      arr.push(item);
    });
    let a = [4, 3, 1, 2, 14];
    for (let i = 0; i < a.length; i++) {
      expect(arr[i]).assertEqual(a[i]);
    }
  });

  /**
   * @tc.name: testSubArrayList017
   * @tc.desc: Intercepts an element within the specified range, including the element with the 
   * starting index but not the element with the ending index. For example: arrayList.subArrayList(2, 4).
   * @tc.author: wangyong
   */
  it("testSubArrayList017", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add(4);
    arrayList.add(3);
    arrayList.add(1);
    arrayList.add(2);
    arrayList.add(14);
    let subArr = arrayList.subArrayList(2, 4);
    let arr = [];
    subArr.forEach((item, index) => {
      arr.push(item);
    });
    let a = [1, 2];
    for (let i = 0; i < a.length; i++) {
      expect(arr[i]).assertEqual(a[i]);
    }
  });

  /**
   * @tc.name: testClear018
   * @tc.desc: Clear all elements in the ArrayList instance. For example: arrayList.clear().
   * @tc.author: wangyong
   */
  it("testClear018", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add(4);
    arrayList.add(3);
    arrayList.add(1);
    arrayList.add(2);
    arrayList.add(14);
    arrayList.clear();
    let res = arrayList.length;
    expect(res).assertEqual(0);
  });

  /**
   * @tc.name: testConvertToArray19
   * @tc.desc: Convert an ArrayList instance to an array. For example: arrayList.convertToArray().
   * @tc.author: wangyong
   */
  it("testConvertToArray19", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add(4);
    arrayList.add(3);
    arrayList.add(1);
    arrayList.add(2);
    arrayList.add(14);
    let arr = arrayList.convertToArray();
    let a = [4, 3, 1, 2, 14];
    for (let i = 0; i < a.length; i++) {
      expect(arr[i]).assertEqual(a[i]);
    }
  });

  /**
   * @tc.name: testClone020
   * @tc.desc: Clone an ArrayList instance. For example: arrayList.clone().
   * @tc.author: wangyong
   */
  it("testClone020", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add(4);
    arrayList.add(3);
    arrayList.add(1);
    arrayList.add(2);
    arrayList.add(14);
    let res = arrayList.clone();
    let arr = [];
    res.forEach((item, index) => {
      arr.push(item);
    });
    let a = [4, 3, 1, 2, 14];
    for (let i = 0; i < a.length; i++) {
      expect(arr[i]).assertEqual(a[i]);
    }
  });

  /**
   * @tc.name: testGetCapacity021
   * @tc.desc: Get the capacity of ArrayList instance. For example: arrayList.getCapacity().
   * @tc.author: wangyong
   */
  it("testGetCapacity021", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add(4);
    arrayList.add(3);
    arrayList.add(1);
    arrayList.add(2);
    arrayList.add(14);
    let res = arrayList.getCapacity();
    expect(res).assertEqual(10);
  });

  /**
   * @tc.name: testGetCapacity022
   * @tc.desc: Get the capacity of the ArrayList instance after capacity expansion. 
   * For example: arrayList.getCapacity().
   * @tc.author: wangyong
   */
  it("testGetCapacity022", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add(4);
    arrayList.add(3);
    arrayList.add(1);
    arrayList.add(2);
    arrayList.add(14);
    arrayList.add("a");
    arrayList.add("b");
    arrayList.add("c");
    arrayList.add("d");
    arrayList.add("v");
    let a = [1, 2, 3, 4];
    arrayList.add(a);
    let res = arrayList.getCapacity();
    expect(res).assertEqual(15);
  });

  /**
   * @tc.name: testIncreaseCapacityTo023
   * @tc.desc: Expand the ArrayList instance capacity to the specified value. 
   * For example: arrayList.increaseCapacityTo(8).
   * @tc.author: wangyong
   */
  it("testIncreaseCapacityTo023", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add(4);
    arrayList.add(3);
    arrayList.add(1);
    arrayList.add(2);
    arrayList.add(14);
    arrayList.increaseCapacityTo(8);
    let res = arrayList.getCapacity();
    expect(res).assertEqual(8);
  });

  /**
   * @tc.name: testTrimToCurrentLength024
   * @tc.desc: Limit the ArrayList instance capacity to the length of the ArrayList instance. 
   * For example: arrayList.trimToCurrentLength().
   * @tc.author: wangyong
   */
  it("testTrimToCurrentLength024", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add(4);
    arrayList.add(3);
    arrayList.add(1);
    arrayList.add(2);
    arrayList.add(14);
    arrayList.trimToCurrentLength();
    let res = arrayList.getCapacity();
    expect(res).assertEqual(5);
  });

  /**
   * @tc.name: testIterator025
   * @tc.desc: Iterates over all elements in an ArrayList instance. 
   * For example: for (let item of arrayList) {arr.push(item);}.
   * @tc.author: wangyong
   */
  it("testIterator025", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add(8);
    arrayList.add("一");
    arrayList.add("二");
    arrayList.add(5);
    let c = [1, 2, 3, 4];
    arrayList.add(c);
    arrayList.add(6);
    arrayList.add("三");
    arrayList.add("四");
    let arr = [];
    for (let item of arrayList) {
      arr.push(item);
    }
    let a = [8, "一", "二", 5, c, 6, "三", "四"];
    for (let i = 0; i < a.length; i++) {
      expect(arr[i]).assertEqual(a[i]);
    }
  });

  /**
   * @tc.name: testSort026
   * @tc.desc: Arrange the elements in the ArrayList instance in descending order.
   * For example: arrayList.sort((a, b) => a - b).
   * @tc.author: wangyong
   */
  it("testSort026", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add(4);
    arrayList.add(3);
    arrayList.add(1);
    arrayList.add(2);
    arrayList.add(14);
    arrayList.sort((a, b) => a - b);
    let arr = [];
    arrayList.forEach((item, index) => {
      arr.push(item);
    });
    let a = [1, 2, 3, 4, 14];
    for (let i = 0; i < a.length; i++) {
      expect(arr[i]).assertEqual(a[i]);
    }
  });

  /**
   * @tc.name: testInsert0027
   * @tc.desc: Inserting an element with an index less than 0 will throw an exception. 
   * For example: arrayList.insert(8, -1).
   * @tc.author: wangyong
   */
  it("testInsert0027", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add("四");
    arrayList.add("三");
    arrayList.add(1);
    arrayList.add("a");
    try {
      let res = arrayList.insert(8, -1);
    } catch (err) {
      expect(err.name).assertEqual("RangeError");
      if (err.message != "the index is out-of-bounds") {
        expect(err.message).assertEqual("ArrayList: set out-of-bounds");
      } else {
        expect(err.message).assertEqual("the index is out-of-bounds");
      }
    }
  });

  /**
   * @tc.name: testInsert028
   * @tc.desc: Inserting an element with an index greater than or equal to the length of
   * the ArrayList instance will throw an exception. For example: arrayList.insert(8, 10).
   * @tc.author: wangyong
   */
  it("testInsert028", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add("四");
    arrayList.add("三");
    arrayList.add(1);
    arrayList.add("a");
    try {
      let res = arrayList.insert(8, 10);
    } catch (err) {
      expect(err.name).assertEqual("RangeError");
      if (err.message != "the index is out-of-bounds") {
        expect(err.message).assertEqual("ArrayList: set out-of-bounds");
      } else {
        expect(err.message).assertEqual("the index is out-of-bounds");
      }
    }
  });

  /**
   * @tc.name: testInsert029
   * @tc.desc: Inserting an element with an index greater than or equal to the length of
   * the ArrayList instance will throw an exception. For example: arrayList.insert(8, 11).
   * @tc.author: wangyong
   */
  it("testInsert029", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add("四");
    arrayList.add("三");
    arrayList.add(1);
    arrayList.add("a");
    try {
      let res = arrayList.insert(8, 11);
    } catch (err) {
      expect(err.name).assertEqual("RangeError");
      if (err.message != "the index is out-of-bounds") {
        expect(err.message).assertEqual("ArrayList: set out-of-bounds");
      } else {
        expect(err.message).assertEqual("the index is out-of-bounds");
      }
    }
  });

  /**
   * @tc.name: testIsEmpty030
   * @tc.desc: Determine whether the ArrayList instance is empty. For example: arrayList.isEmpty().
   * @tc.author: wangyong
   */
  it("testIsEmpty030", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add(4);
    arrayList.add(3);
    arrayList.add(1);
    arrayList.add(2);
    arrayList.add(14);
    arrayList.clear();
    let res = arrayList.isEmpty();
    expect(res).assertEqual(true);
  });

  /**
   * @tc.name: testIsEmpty031
   * @tc.desc: Determine whether the ArrayList instance is empty. For example: arrayList.isEmpty().
   * @tc.author: wangyong
   */
  it("testIsEmpty031", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add(4);
    arrayList.add(3);
    arrayList.add(1);
    arrayList.add(2);
    arrayList.add(14);
    let res = arrayList.isEmpty();
    expect(res).assertEqual(false);
  });

  /**
   * @tc.name: testHas032
   * @tc.desc: Check whether the ArrayList contains a specified element. For example: arrayList.has("二").
   * @tc.author: wangyong
   */
  it("testHas032", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add("四");
    arrayList.add("三");
    arrayList.add(1);
    arrayList.add("a");
    arrayList.insert(8, 2);
    let res = arrayList.has("二");
    expect(res).assertEqual(false);
  });

  /**
   * @tc.name: testGetIndexOf033
   * @tc.desc: In the ArrayList instance, find the index of a specified element from front to back,
   * and return the index found for the first time. If not found, return -1. For example: arrayList.getIndexOf("A").
   * @tc.author: wangyong
   */
  it("testGetIndexOf033", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add(1);
    arrayList.add("三");
    arrayList.add(1);
    arrayList.add("a");
    arrayList.insert(1, 2);
    let res = arrayList.getIndexOf("A");
    expect(res).assertEqual(-1);
  });

  /**
   * @tc.name: testRemove034
   * @tc.desc: Delete the specified element.For example: arrayList.remove("A").
   * @tc.author: wangyong
   */
  it("testRemove034", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add("四");
    arrayList.add("三");
    arrayList.add(1);
    arrayList.add("a");
    let res = arrayList.remove("A");
    expect(res).assertEqual(false);
  });

  /**
   * @tc.name: testRemove035
   * @tc.desc: Delete the specified element.
   * For example: arrayList.forEach((item, index) => {if (item == 1) {arrayList.remove(item);}}).
   * @tc.author: wangyong
   */
  it("testRemove035", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add(0);
    arrayList.add(1);
    arrayList.add(2);
    arrayList.add(1);
    arrayList.add(3);
    arrayList.add(1);
    arrayList.forEach((item, index) => {
      if (item == 1) {
        arrayList.remove(item);
      }
    });
    let arr = [];
    arrayList.forEach((item, index) => {
      arr.push(item);
    });
    let a = [0, 2, 3];
    for (let i = 0; i < a.length; i++) {
      expect(arr[i]).assertEqual(a[i]);
    }
  });

  /**
   * @tc.name: testRemoveByIndex036
   * @tc.desc: In the ArrayList instance, delete the element based on its index index. 
   * For example: arrayList.removeByIndex(5).
   * @tc.author: wangyong
   */
  it("testRemoveByIndex036", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add("a");
    arrayList.add("b");
    arrayList.add("c");
    arrayList.add("a");
    arrayList.add("b");
    try {
      let res = arrayList.removeByIndex(5);
    } catch (err) {
      expect(err.name).assertEqual("RangeError");
      if (err.message != "the index is out-of-bounds") {
        expect(err.message).assertEqual("removeByIndex is out-of-bounds");
      } else {
        expect(err.message).assertEqual("the index is out-of-bounds");
      }
    }
  });

  /**
   * @tc.name: testRemoveByRange037
   * @tc.desc: Add a string element to the end of the ArrayList instance. For example: arrayList.add("四").
   * @tc.author: wangyong
   */
  it("testRemoveByRange037", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add("四");
    arrayList.add("三");
    arrayList.add(1);
    arrayList.add("a");
    arrayList.add(1);
    arrayList.add("b");
    arrayList.add("c");
    arrayList.add(1);
    try {
      let res = arrayList.removeByRange(3, 1);
    } catch (err) {
      expect(err.name).assertEqual("RangeError");
      if (err.message != "the fromIndex cannot be less than or equal to toIndex") {
        expect(err.message).assertEqual("fromIndex cannot be less than or equal to toIndex");
      } else {
        expect(err.message).assertEqual("the fromIndex cannot be less than or equal to toIndex");
      }
    }
  });

  /**
   * @tc.name: testRemoveByRange038
   * @tc.desc: Deletes elements from a specified range, including elements at the start position and 
   * elements at the end position. For example: removeByRange(6, 8).
   * @tc.author: wangyong
   */
  it("testRemoveByRange038", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add("四");
    arrayList.add("三");
    arrayList.add(1);
    arrayList.add("a");
    arrayList.add(1);
    try {
      let res = arrayList.removeByRange(6, 8);
    } catch (err) {
      expect(err.name).assertEqual("RangeError");
      if (err.message != "the fromIndex or the toIndex is out-of-bounds") {
        expect(err.message).assertEqual("ArrayList: set out-of-bounds");
      } else {
        expect(err.message).assertEqual("the fromIndex or the toIndex is out-of-bounds");
      }
    }
  });

  /**
   * @tc.name: testRemoveByRange039
   * @tc.desc: Deletes elements from a specified range, including elements at the start position and 
   * elements at the end position. For example: removeByRange(0, 9).
   * @tc.author: wangyong
   */
  it("testRemoveByRange039", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add("四");
    arrayList.add("三");
    arrayList.add(1);
    arrayList.add("a");
    arrayList.add(1);
    arrayList.add("b");
    arrayList.add("c");
    arrayList.add(1);
    arrayList.removeByRange(0, 9);
    let res = arrayList.length;
    let res1 = arrayList.getLastIndexOf(1);
    expect(res).assertEqual(0);
    expect(res1).assertEqual(-1);
  });

  /**
   * @tc.name: testSubArrayList040
   * @tc.desc: Intercepts an element within the specified range, including the element with the 
   * starting index but not the element with the ending index. For example: arrayList.subArrayList(4, 2).
   * @tc.author: wangyong
   */
  it("testSubArrayList040", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add(4);
    arrayList.add(3);
    arrayList.add(1);
    arrayList.add(2);
    arrayList.add(14);
    try {
      let subArr = arrayList.subArrayList(4, 2);
    } catch (err) {
      expect(err.name).assertEqual("RangeError");
      if (err.message != "the fromIndex cannot be less than or equal to toIndex") {
        expect(err.message).assertEqual("fromIndex cannot be less than or equal to toIndex");
      } else {
        expect(err.message).assertEqual("the fromIndex cannot be less than or equal to toIndex");
      }
    }
  });

  /**
   * @tc.name: testSubArrayList041
   * @tc.desc: Intercepts an element within the specified range, including the element with the 
   * starting index but not the element with the ending index. For example: arrayList.subArrayList(0 ,6).
   * @tc.author: wangyong
   */
  it("testSubArrayList041", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add(4);
    arrayList.add(3);
    arrayList.add(1);
    arrayList.add(2);
    arrayList.add(14);
    let subArr = arrayList.subArrayList(0, 6);
    let arr = [];
    arrayList.forEach((item, index) => {
      arr.push(item);
    });
    let a = [4, 3, 1, 2, 14];
    for (let i = 0; i < a.length; i++) {
      expect(a[i]).assertEqual(arr[i]);
    }
  });

  /**
   * @tc.name: testSubArrayList042
   * @tc.desc: Intercepts an element within the specified range, including the element with the 
   * starting index but not the element with the ending index. For example: arrayList.subArrayList(6, 9).
   * @tc.author: wangyong
   */
  it("testSubArrayList042", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add(4);
    arrayList.add(3);
    arrayList.add(1);
    arrayList.add(2);
    arrayList.add(14);
    try {
      let subArr = arrayList.subArrayList(6, 9);
    } catch (err) {
      expect(err.name).assertEqual("RangeError");
      if (err.message != "the fromIndex or the toIndex is out-of-bounds") {
        expect(err.message).assertEqual("fromIndex or toIndex is out-of-bounds");
      } else {
        expect(err.message).assertEqual("the fromIndex or the toIndex is out-of-bounds");
      }
    }
  });

  /**
   * @tc.name: testIncreaseCapacityTo043
   * @tc.desc: Expand the ArrayList instance capacity to the specified value. 
   * For example: arrayList.increaseCapacityTo(-1).
   * @tc.author: wangyong
   */
  it("testIncreaseCapacityTo043", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add(4);
    arrayList.add(3);
    arrayList.add(1);
    arrayList.add(2);
    arrayList.add(14);
    arrayList.increaseCapacityTo(-1);
    let res = arrayList.getCapacity();
    expect(res).assertEqual(10);
  });

  /**
   * @tc.name: testIncreaseCapacityTo044
   * @tc.desc: Expand the ArrayList instance capacity to the specified value. 
   * For example: arrayList.increaseCapacityTo().
   * @tc.author: wangyong
   */
  it("testIncreaseCapacityTo044", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add(4);
    arrayList.add(3);
    arrayList.add(1);
    arrayList.add(2);
    arrayList.add(14);
    try {
      let res = arrayList.increaseCapacityTo();
    } catch (err) {
      expect(err.name).assertEqual("TypeError");
      if (err.message != "index is not integer") {
        expect(err.message).assertEqual("newCapacity is not Integer");
      } else {
        expect(err.message).assertEqual("index is not integer");
      }
    }
  });

  /**
   * @tc.name: testAdd045
   * @tc.desc: Add a string element to the end of the ArrayList instance. 
   * For example: for (let i = 0; i < 100; i++) {arrayList.add(i);}.
   * @tc.author: wangyong
   */
  it("testAdd045", 0, function () {
    let arrayList = new ArrayList();
    for (let i = 0; i < 100; i++) {
      arrayList.add(i);
    }
    let res = arrayList.getIndexOf(99);
    let res1 = arrayList.length;
    expect(res).assertEqual(99);
    expect(res1).assertEqual(100);
  });

  /**
   * @tc.name: testAdd046
   * @tc.desc: Add a symbol type element to the end of the ArrayList instance. 
   * For example: let a = "*";arrayList.add(a).
   * @tc.author: wangyong
   */
  it("testAdd046", 0, function () {
    let arrayList = new ArrayList();
    let a = "*";
    arrayList.add(a);
    let res = arrayList.has(a);
    expect(res).assertEqual(true);
  });

  /**
   * @tc.name: testAdd047
   * @tc.desc: Add a decimal type to the end of the ArrayList instance. For example: let a = "3.14";arrayList.add(a).
   * @tc.author: wangyong
   */
  it("testAdd047", 0, function () {
    let arrayList = new ArrayList();
    let a = "3.14";
    arrayList.add(a);
    let res = arrayList.has(a);
    expect(res).assertEqual(true);
  });

  /**
   * @tc.name: testAdd048
   * @tc.desc: Add a null character element to the end of the ArrayList instance. 
   * For example: let a = "";arrayList.add(a).
   * @tc.author: wangyong
   */
  it("testAdd048", 0, function () {
    let arrayList = new ArrayList();
    let a = "";
    arrayList.add(a);
    let res = arrayList.has(a);
    expect(res).assertEqual(true);
  });

  /**
   * @tc.name: testSort049
   * @tc.desc: Arrange the elements in the ArrayList instance in descending order. 
   * For example: arrayList.sort((a, b) => a - b).
   * @tc.author: wangyong
   */
  it("testSort049", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add("刘");
    arrayList.add("张三");
    arrayList.add(1);
    arrayList.add(2);
    arrayList.add("李四");
    arrayList.sort((a, b) => a - b);
    let arr = [];
    arrayList.forEach((item, index) => {
      arr.push(item);
    });
    let a = ["刘", "张三", 1, 2, "李四"];
    for (let i = 0; i < a.length; i++) {
      expect(arr[i]).assertEqual(a[i]);
    }
  });

  /**
   * @tc.name: testSort050
   * @tc.desc: Arrange the elements in the ArrayList instance in descending order. 
   * For example: arrayList.sort((a, b) => a - b).
   * @tc.author: wangyong
   */
  it("testSort050", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add("c");
    arrayList.add("a");
    arrayList.add("b");
    arrayList.add("e");
    arrayList.add("d");
    arrayList.sort((a, b) => a - b);
    let arr = [];
    arrayList.forEach((item, index) => {
      arr.push(item);
    });
    let a = ["c", "a", "b", "e", "d"];
    for (let i = 0; i < a.length; i++) {
      expect(arr[i]).assertEqual(a[i]);
    }
  });

  /**
   * @tc.name: testIterator051
   * @tc.desc: Iterates over all elements in an ArrayList instance. For example: arrayList[Symbol.iterator]().
   * @tc.author: wangyong
   */
  it("testIterator051", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add("刘");
    arrayList.add("张三");
    arrayList.add(1);
    arrayList.add(2);
    arrayList.add("李四");
    let arr = [];
    let itr = arrayList[Symbol.iterator]();
    let tmp = undefined;
    do {
      tmp = itr.next().value;
      arr.push(tmp);
    } while (tmp != undefined);
    let a = ["刘", "张三", 1, 2, "李四"];
    for (let i = 0; i < a.length; i++) {
      expect(arr[i]).assertEqual(a[i]);
    }
  });

  /**
   * @tc.name: testRemoveByRange052
   * @tc.desc: Deletes elements from a specified range, including elements at the start position and 
   * elements at the end position. For example: removeByRange(0, 8).
   * @tc.author: wangyong
   */
  it("testRemoveByRange052", 0, function () {
    let arrayList = new ArrayList();
    arrayList.add("四");
    arrayList.add("三");
    arrayList.add(1);
    arrayList.add("a");
    arrayList.add(1);
    arrayList.add("b");
    arrayList.add("c");
    arrayList.add(1);
    arrayList.removeByRange(0, 9);
    let res = arrayList.length;
    expect(res).assertEqual(0);
  });
});
