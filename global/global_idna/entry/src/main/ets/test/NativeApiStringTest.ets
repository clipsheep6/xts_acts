// @ts-nocheck
/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import hilog from '@ohos.hilog';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'hypium/index'
import testNapi from 'libentry.so'

export default function abilityTest() {
  describe('ActsAbilityTest', function () {


    it('testuidna_openUTS46',0,() =>{
      expect(testNapi.testuidna_openUTS46()).assertTrue()
    })


    it('testuidna_close',0,() =>{
      expect(testNapi.testuidna_close()).assertTrue()
    })



    it('testuidna_labelToASCII',0,() =>{
      expect(testNapi.testuidna_labelToASCII()).assertTrue()
    })



    it('testuidna_labelToUnicode',0,() =>{
      expect(testNapi.testuidna_labelToUnicode()).assertTrue()
    })



    it('testuidna_nameToASCII',0,() =>{
      expect(testNapi.testuidna_nameToASCII()).assertTrue()
    })



    it('testuidna_nameToUnicode',0,() =>{
      expect(testNapi.testuidna_nameToUnicode()).assertTrue()
    })



    it('testuidna_labelToASCLL_UTF8',0,() =>{
      expect(testNapi.testuidna_labelToASCLL_UTF8()).assertTrue()
    })



    it('testuidna_labelToUnicodeUTF8',0,() =>{
      expect(testNapi.testuidna_labelToUnicodeUTF8()).assertTrue()
    })



    it('testuidna_nameToASCII_UTF8',0,() =>{
      expect(testNapi.testuidna_nameToASCII_UTF8()).assertTrue()
    })



    it('testuidna_nameToUnicodeUTF8',0,() =>{
      expect(testNapi.testuidna_nameToUnicodeUTF8()).assertTrue()
    })

  })
}