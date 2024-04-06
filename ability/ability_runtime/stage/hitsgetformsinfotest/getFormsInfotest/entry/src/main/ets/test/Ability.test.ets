/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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

import { describe, expect, it } from '@ohos/hypium';
import formManagerAbility from '@ohos.app.form.formHost';
import formInfo from '@ohos.app.form.formInfo';

interface ValueItem {
  name: string;
}

let checkResult = (value: ValueItem[], arr: string[], startName?: string): boolean => {
  let filteredValue = value.filter(v => v.name.startsWith(startName ? startName : "getFormsInfoProvider"));
  let sortedValue = filteredValue.map(v => v.name).sort();
  let sortedArr = arr.slice().sort();
  if (sortedValue.length !== sortedArr.length) {
    return false;
  }
  for (let i = 0; i < sortedValue.length; i++) {
    if (sortedValue[i] !== sortedArr[i]) {
      return false;
    }
  }
  return true;
}

export default function abilityTest() {
  describe('ActsAbilityTest', () => {

    /**
     * @tc.name getFormsInfotest
     * @tc.number SUB_AA_Form_FormHost_GetFormsInfo_01
     * @tc.desc Dimensions parameter range single full match
     */
    it('SUB_AA_Form_FormHost_GetFormsInfo_01', 0, async (done: Function) => {
      let expectProviders = ['getFormsInfoProvider1', 'getFormsInfoProvider2', 'getFormsInfoProvider5', 'getFormsInfoProvider6']
      let filter: formInfo.FormInfoFilter = {
        supportedDimensions: [FormDimension.Dimension_1_2]
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          let result = checkResult(value, expectProviders)
          expect(result).assertTrue()
          done()
        }).catch(() => {
          expect(true).assertFalse()
          done()
        })
      } catch (err) {
        expect(false).assertTrue()
        done()
      }
    })

    /**
     * @tc.name getFormsInfotest
     * @tc.number SUB_AA_Form_FormHost_GetFormsInfo_02
     * @tc.desc Multiple partial matching of dimensions parameter range
     */
    it('SUB_AA_Form_FormHost_GetFormsInfo_02', 0, async (done: Function) => {
      let expectProviders = [
        'getFormsInfoProvider1',
        'getFormsInfoProvider2',
        'getFormsInfoProvider3',
        'getFormsInfoProvider5',
        'getFormsInfoProvider6'
      ]
      let filter: formInfo.FormInfoFilter = {
        supportedDimensions: [FormDimension.Dimension_1_2, FormDimension.Dimension_2_4]
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          let result = checkResult(value, expectProviders)
          expect(result).assertTrue()
          done()
        }).catch(() => {
          expect(true).assertFalse()
          done()
        })
      } catch (err) {
        expect(false).assertTrue()
        done()
      }
    })

    /**
     * @tc.name getFormsInfotest
     * @tc.number SUB_AA_Form_FormHost_GetFormsInfo_03
     * @tc.desc Multiple full matches of dimensions parameter range
     */
    it('SUB_AA_Form_FormHost_GetFormsInfo_03', 0, async (done: Function) => {
      let expectProviders = ['getFormsInfoProvider2', 'getFormsInfoProvider3', 'getFormsInfoProvider4', 'getFormsInfoProvider5']
      let filter: formInfo.FormInfoFilter = {
        supportedDimensions: [FormDimension.Dimension_2_4, FormDimension.Dimension_4_4]
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          let result = checkResult(value, expectProviders)
          expect(result).assertTrue()
          done()
        }).catch(() => {
          expect(true).assertFalse()
          done()
        })
      } catch (err) {
        expect(false).assertTrue()
        done()
      }
    })

    /**
     * @tc.name getFormsInfotest
     * @tc.number SUB_AA_Form_FormHost_GetFormsInfo_04
     * @tc.desc The query result for a single parameter is 0
     */
    it('SUB_AA_Form_FormHost_GetFormsInfo_04', 0, async (done: Function) => {
      let expectProviders = []
      let filter: formInfo.FormInfoFilter = {
        supportedDimensions: [FormDimension.DIMENSION_1_1]
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          let result = checkResult(value, expectProviders)
          expect(result).assertTrue()
          done()
        }).catch(() => {
          expect(true).assertFalse()
          done()
        })
      } catch (err) {
        expect(false).assertTrue()
        done()
      }
    })

    /**
     * @tc.name getFormsInfotest
     * @tc.number SUB_AA_Form_FormHost_GetFormsInfo_05
     * @tc.desc BundleName single parameter query
     */
    it('SUB_AA_Form_FormHost_GetFormsInfo_05', 0, async (done: Function) => {
      let expectProviders = ['getFormsInfoProvider5']
      let filter: formInfo.FormInfoFilter = {
        bundleName: "com.example.getformsinfotestproviderb",
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          let result = checkResult(value, expectProviders)
          expect(result).assertTrue()
          done()
        }).catch(() => {
          expect(true).assertFalse()
          done()
        })
      } catch (err) {
        expect(false).assertTrue()
        done()
      }
    })

    /**
     * @tc.name getFormsInfotest
     * @tc.number SUB_AA_Form_FormHost_GetFormsInfo_06
     * @tc.desc BundleName single parameter query result is 0
     */
    it('SUB_AA_Form_FormHost_GetFormsInfo_06', 0, async (done: Function) => {
      let expectProviders = []
      let filter: formInfo.FormInfoFilter = {
        bundleName: "does not existed bundleName",
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          let result = checkResult(value, expectProviders)
          expect(result).assertTrue()
          done()
        }).catch(() => {
          expect(true).assertFalse()
          done()
        })
      } catch (err) {
        expect(false).assertTrue()
        done()
      }
    })

    /**
     * @tc.name getFormsInfotest
     * @tc.number SUB_AA_Form_FormHost_GetFormsInfo_07
     * @tc.desc ModuleName single parameter query
     */
    it('SUB_AA_Form_FormHost_GetFormsInfo_07', 0, async (done: Function) => {
      let expectProviders = ['getFormsInfoProvider1']
      let filter: formInfo.FormInfoFilter = {
        moduleName: 'getFormsInfoProvider_a',
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          let result = checkResult(value, expectProviders)
          expect(result).assertTrue()
          done()
        }).catch(() => {
          expect(true).assertFalse()
          done()
        })
      } catch (err) {
        expect(false).assertTrue()
        done()
      }
    })

    /**
     * @tc.name getFormsInfotest
     * @tc.number SUB_AA_Form_FormHost_GetFormsInfo_08
     * @tc.desc ModuleName single parameter query result is 0
     */
    it('SUB_AA_Form_FormHost_GetFormsInfo_08', 0, async (done: Function) => {
      let expectProviders = []
      let filter: formInfo.FormInfoFilter = {
        moduleName: 'does not existed moduleName',
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          let result = checkResult(value, expectProviders)
          expect(result).assertTrue()
          done()
        }).catch(() => {
          expect(true).assertFalse()
          done()
        })
      } catch (err) {
        expect(false).assertTrue()
        done()
      }
    })

    /**
     * @tc.name getFormsInfotest
     * @tc.number SUB_AA_Form_FormHost_GetFormsInfo_09
     * @tc.desc Combination of dimensions and bundleName query
     */
    it('SUB_AA_Form_FormHost_GetFormsInfo_09', 0, async (done: Function) => {
      let expectProviders = ['getFormsInfoProvider6']
      let filter: formInfo.FormInfoFilter = {
        bundleName: "com.example.getformsinfotestprovidera",
        supportedDimensions: [FormDimension.Dimension_2_2]
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          let result = checkResult(value, expectProviders)
          expect(result).assertTrue()
          done()
        }).catch(() => {
          expect(true).assertFalse()
          done()
        })
      } catch (err) {
        expect(false).assertTrue()
        done()
      }
    })

    /**
     * @tc.name getFormsInfotest
     * @tc.number SUB_AA_Form_FormHost_GetFormsInfo_10
     * @tc.desc Dimensions and bundleName combine queries and dimensions partially matches
     */
    it('SUB_AA_Form_FormHost_GetFormsInfo_10', 0, async (done: Function) => {
      let expectProviders = ['getFormsInfoProvider1', 'getFormsInfoProvider2', 'getFormsInfoProvider6']
      let filter: formInfo.FormInfoFilter = {
        bundleName: "com.example.getformsinfotestprovidera", supportedDimensions: [FormDimension.Dimension_1_2]
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          let result = checkResult(value, expectProviders)
          expect(result).assertTrue()
          done()
        }).catch(() => {
          expect(true).assertFalse()
          done()
        })
      } catch (err) {
        expect(false).assertTrue()
        done()
      }
    })

    /**
     * @tc.name getFormsInfotest
     * @tc.number SUB_AA_Form_FormHost_GetFormsInfo_11
     * @tc.desc The query result for a single parameter is 0
     */
    it('SUB_AA_Form_FormHost_GetFormsInfo_11', 0, async (done: Function) => {
      let expectProviders = []
      let filter: formInfo.FormInfoFilter = {
        bundleName: "com.example.getformsinfotestproviderb", supportedDimensions: [FormDimension.Dimension_2_2],
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          let result = checkResult(value, expectProviders)
          expect(result).assertTrue()
          done()
        }).catch(() => {
          expect(true).assertFalse()
          done()
        })
      } catch (err) {
        expect(false).assertTrue()
        done()
      }
    })

    /**
     * @tc.name getFormsInfotest
     * @tc.number SUB_AA_Form_FormHost_GetFormsInfo_12
     * @tc.desc BundleName parameter + moduleName parameter
     */
    it('SUB_AA_Form_FormHost_GetFormsInfo_12', 0, async (done: Function) => {
      let expectProviders = ['getFormsInfoProvider2']
      let filter: formInfo.FormInfoFilter = {
        bundleName: "com.example.getformsinfotestprovidera", moduleName: 'getFormsInfoProvider_b',
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          let result = checkResult(value, expectProviders)
          expect(result).assertTrue()
          done()
        }).catch(() => {
          expect(true).assertFalse()
          done()
        })
      } catch (err) {
        expect(false).assertTrue()
        done()
      }
    })

    /**
     * @tc.name getFormsInfotest
     * @tc.number SUB_AA_Form_FormHost_GetFormsInfo_13
     * @tc.desc Dimensions parameter + moduleName parameter
     */
    it('SUB_AA_Form_FormHost_GetFormsInfo_13', 0, async (done: Function) => {
      let expectProviders = ['getFormsInfoProvider3']
      let filter: formInfo.FormInfoFilter = {
        moduleName: 'getFormsInfoProvider_c', supportedDimensions: [FormDimension.Dimension_2_4]
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          let result = checkResult(value, expectProviders)
          expect(result).assertTrue()
          done()
        }).catch(() => {
          expect(true).assertFalse()
          done()
        })
      } catch (err) {
        expect(false).assertTrue()
        done()
      }
    })

    /**
     * @tc.name getFormsInfotest
     * @tc.number SUB_AA_Form_FormHost_GetFormsInfo_14
     * @tc.desc Dimensions parameter + bundleName parameter
     */
    it('SUB_AA_Form_FormHost_GetFormsInfo_14', 0, async (done: Function) => {
      let expectProviders = ['getFormsInfoProvider2', 'getFormsInfoProvider3']
      let filter: formInfo.FormInfoFilter = {
        bundleName: "com.example.getformsinfotestprovidera", supportedDimensions: [FormDimension.Dimension_2_4]
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          let result = checkResult(value, expectProviders)
          expect(result).assertTrue()
          done()
        }).catch(() => {
          expect(true).assertFalse()
          done()
        })
      } catch (err) {
        expect(false).assertTrue()
        done()
      }
    })

    /**
     * @tc.name getFormsInfotest
     * @tc.number SUB_AA_Form_FormHost_GetFormsInfo_15
     * @tc.desc Query three parameters at the same time
     */
    it('SUB_AA_Form_FormHost_GetFormsInfo_15', 0, async (done: Function) => {
      let expectProviders = ['getFormsInfoProvider2']
      let filter: formInfo.FormInfoFilter = {
        bundleName: "com.example.getformsinfotestprovidera",
        moduleName: 'getFormsInfoProvider_b',
        supportedDimensions: [FormDimension.Dimension_1_2, FormDimension.Dimension_2_4]
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          let result = checkResult(value, expectProviders)
          expect(result).assertTrue()
          done()
        }).catch(() => {
          expect(true).assertFalse()
          done()
        })
      } catch (err) {
        expect(false).assertTrue()
        done()
      }
    })

    /**
     * @tc.name getFormsInfotest
     * @tc.number SUB_AA_Form_FormHost_GetFormsInfo_16
     * @tc.desc Three parameters are empty
     */
    it('SUB_AA_Form_FormHost_GetFormsInfo_16', 0, async (done: Function) => {
      let expectProviders = [
        'getFormsInfoProvider1',
        'getFormsInfoProvider2',
        'getFormsInfoProvider3',
        'getFormsInfoProvider4',
        'getFormsInfoProvider5',
        'getFormsInfoProvider6'
      ]
      let filter: formInfo.FormInfoFilter = {};
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          let result = checkResult(value, expectProviders)
          expect(result).assertTrue()
          done()
        }).catch(() => {
          expect(true).assertFalse()
          done()
        })
      } catch (err) {
        expect(false).assertTrue()
        done()
      }
    })

    /**
     * @tc.name getFormsInfotest
     * @tc.number SUB_AA_Form_FormHost_GetFormsInfo_17
     * @tc.desc Three parameters are queried at the same time and the dimensions partially matches
     */
    it('SUB_AA_Form_FormHost_GetFormsInfo_17', 0, async (done: Function) => {
      let expectProviders = ['getFormsInfoProvider2']
      let filter: formInfo.FormInfoFilter = {
        bundleName: "com.example.getformsinfotestprovidera",
        moduleName: 'getFormsInfoProvider_b',
        supportedDimensions: [FormDimension.Dimension_1_2]
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          let result = checkResult(value, expectProviders)
          expect(result).assertTrue()
          done()
        }).catch(() => {
          expect(true).assertFalse()
          done()
        })
      } catch (err) {
        expect(false).assertTrue()
        done()
      }
    })

    /**
     * @tc.name getFormsInfotest
     * @tc.number SUB_AA_Form_FormHost_GetFormsInfo_18
     * @tc.desc The query result for a single parameter is 0
     */
    it('SUB_AA_Form_FormHost_GetFormsInfo_18', 0, async (done: Function) => {
      let expectProviders = []
      let filter: formInfo.FormInfoFilter = {
        bundleName: "com.example.getformsinfotestprovidera",
        moduleName: 'getFormsInfoProvider_a',
        supportedDimensions: [FormDimension.Dimension_2_2]
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          let result = checkResult(value, expectProviders)
          expect(result).assertTrue()
          done()
        }).catch(() => {
          expect(true).assertFalse()
          done()
        })
      } catch (err) {
        expect(false).assertTrue()
        done()
      }
    })

    /**
     * @tc.name getFormsInfotest
     * @tc.number SUB_AA_Form_FormHost_GetFormsInfo_19
     * @tc.desc Dimensions is abnormal size
     */
    it('SUB_AA_Form_FormHost_GetFormsInfo_19', 0, async (done: Function) => {
      let expectProviders = []
      let filter: formInfo.FormInfoFilter = {
        supportedDimensions: [9]
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          let result = checkResult(value, expectProviders)
          expect(result).assertTrue()
          done()
        }).catch(() => {
          expect(true).assertFalse()
          done()
        })
      } catch (err) {
        expect(false).assertTrue()
        done()
      }
    })

    /**
     * @tc.name getFormsInfotest
     * @tc.number SUB_AA_Form_FormHost_GetFormsInfo_20
     * @tc.desc Left value of exception module name length range
     */
    it('SUB_AA_Form_FormHost_GetFormsInfo_20', 0, async (done: Function) => {
      let expectProviders = ['cardAbnormalNameProvider1']
      let filter: formInfo.FormInfoFilter = {
        moduleName: 'a'
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          let result = checkResult(value, expectProviders, 'cardAbnormalNameProvider')
          expect(result).assertTrue()
          done()
        }).catch(() => {
          expect(true).assertFalse()
          done()
        })
      } catch (err) {
        expect(false).assertTrue()
        done()
      }
    })

    /**
     * @tc.name getFormsInfotest
     * @tc.number SUB_AA_Form_FormHost_GetFormsInfo_21
     * @tc.desc The right value of the exception module name length range
     */
    it('SUB_AA_Form_FormHost_GetFormsInfo_21', 0, async (done: Function) => {
      let expectProviders = ['cardAbnormalNameProvider2']
      let filter: formInfo.FormInfoFilter = {
        moduleName: 'cardAbnormalNameTestaaaaaaaaaaa'
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          let result = checkResult(value, expectProviders, 'cardAbnormalNameProvider')
          expect(result).assertTrue()
          done()
        }).catch(() => {
          expect(true).assertFalse()
          done()
        })
      } catch (err) {
        expect(false).assertTrue()
        done()
      }
    })

    /**
     * @tc.name getFormsInfotest
     * @tc.number SUB_AA_Form_FormHost_GetFormsInfo_22
     * @tc.desc Left value of exception package name length range
     */
    it('SUB_AA_Form_FormHost_GetFormsInfo_22', 0, async (done: Function) => {
      let expectProviders = ['cardAbnormalNameProvider3']
      let filter: formInfo.FormInfoFilter = {
        bundleName: 'com.aaa'
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          let result = checkResult(value, expectProviders, 'cardAbnormalNameProvider')
          expect(result).assertTrue()
          done()
        }).catch(() => {
          expect(true).assertFalse()
          done()
        })
      } catch (err) {
        expect(false).assertTrue()
        done()
      }
    })

    /**
     * @tc.name getFormsInfotest
     * @tc.number SUB_AA_Form_FormHost_GetFormsInfo_23
     * @tc.desc The right value of the length range of exception package name
     */
    it('SUB_AA_Form_FormHost_GetFormsInfo_23', 0, async (done: Function) => {
      let expectProviders = ['cardAbnormalNameProvider4']
      let filter: formInfo.FormInfoFilter = {
        bundleName: 'com.aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa'
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          let result = checkResult(value, expectProviders, 'cardAbnormalNameProvider')
          expect(result).assertTrue()
          done()
        }).catch(() => {
          expect(true).assertFalse()
          done()
        })
      } catch (err) {
        expect(false).assertTrue()
        done()
      }
    })

    /**
     * @tc.name getFormsInfotest
     * @tc.number SUB_AA_Form_FormHost_GetFormsInfo_24
     * @tc.desc Interface secondary query
     */
    it('SUB_AA_Form_FormHost_GetFormsInfo_24', 0, async (done: Function) => {
      let expectProviders = ['getFormsInfoProvider1', 'getFormsInfoProvider2', 'getFormsInfoProvider5', 'getFormsInfoProvider6']
      let filter: formInfo.FormInfoFilter = {
        supportedDimensions: [FormDimension.Dimension_1_2]
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then(async (value1) => {
          let result1 = checkResult(value1, expectProviders)
          await formManagerAbility.getFormsInfo(filter).then((value2) => {
            let result2 = checkResult(value2, expectProviders)
            expect(result1 && result2).assertTrue()
            done()
          })
            .catch(() => {
              expect(true).assertFalse()
              done()
            })
        }).catch(() => {
          expect(true).assertFalse()
          done()
        })
      } catch (err) {
        expect(true).assertFalse()
        done()
      }
    })
  })
}