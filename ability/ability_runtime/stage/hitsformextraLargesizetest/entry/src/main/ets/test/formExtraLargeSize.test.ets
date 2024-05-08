/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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
import { describe, it, expect } from '@ohos/hypium';
import formInfo from '@ohos.app.form.formInfo';
import formManagerAbility from '@ohos.app.form.formHost';

export default function formExtraLargeSizeTest() {
  describe('FormExtraLargeSizeTest', () => {

    /**
     * @tc.number: sub_ArkTSCard_FormDeepLink_0100
     * @tc.name: FormDeepLink_0100
     * @tc.desc: Normal provision of static 1*2 cards
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 3
     */
    it('SUB_AA_Extra_large_size_6x4_card_test_0100', 0, async (done:Function) => {
      let filter: formInfo.FormInfoFilter = {
        bundleName: 'com.hits.formExtraLargeSize',
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          hilog.info(0x0000, 'testTag1', '%{public}s', `testTag1==>start`)
          let isDynamic=value[0].isDynamic
          expect(isDynamic==false).assertTrue()
          let supportDimensions=value[0].supportDimensions[0]
          hilog.info(0x0000, 'testTag1', '%{public}s', `testTag1==>isDynamic:${isDynamic}；supportDimensions:${supportDimensions}`)
          expect(supportDimensions==1).assertTrue()
          done()
          hilog.info(0x0000, 'testTag1', '%{public}s', `testTag1==>end`)
        }).catch(() => {
          expect().assertFail();
          done()
          hilog.info(0x0000, 'testTag1', '%{public}s', `testTag1==>false`)
        })
      } catch (err) {
        expect().assertFail();
        done()
        hilog.info(0x0000, 'testTag1', '%{public}s', `testTag1==>false`)
      }
    })

    /**
     * @tc.number: sub_ArkTSCard_FormDeepLink_0200
     * @tc.name: FormDeepLink_0200
     * @tc.desc: Normal provision of static 2*2 cards
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 3
     */
    it('SUB_AA_Extra_large_size_6x4_card_test_0200', 0, async (done:Function) => {
      let filter: formInfo.FormInfoFilter = {
        bundleName: 'com.hits.formExtraLargeSize',
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          hilog.info(0x0000, 'testTag2', '%{public}s', `testTag2==>start`)
          let isDynamic=value[0].isDynamic
          expect(isDynamic==false).assertTrue()
          let supportDimensions=value[0].supportDimensions[1]
          hilog.info(0x0000, 'testTag2', '%{public}s', `testTag2==>isDynamic:${isDynamic}；supportDimensions:${supportDimensions}`)
          expect(supportDimensions==2).assertTrue()
          done()
          hilog.info(0x0000, 'testTag2', '%{public}s', `testTag2==>end`)
        }).catch(() => {
          expect().assertFail();
          done()
          hilog.info(0x0000, 'testTag2', '%{public}s', `testTag2==>false`)
        })
      } catch (err) {
        expect().assertFail();
        done()
        hilog.info(0x0000, 'testTag2', '%{public}s', `testTag2==>false`)
      }
    })

    /**
     * @tc.number: sub_ArkTSCard_FormDeepLink_0300
     * @tc.name: FormDeepLink_0300
     * @tc.desc: Normal provision of static 2*4 cards
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 3
     */
    it('SUB_AA_Extra_large_size_6x4_card_test_0300', 0, async (done:Function) => {
      let filter: formInfo.FormInfoFilter = {
        bundleName: 'com.hits.formExtraLargeSize',
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          hilog.info(0x0000, 'testTag3', '%{public}s', `testTag3==>start`)
          let isDynamic=value[0].isDynamic
          expect(isDynamic==false).assertTrue()
          let supportDimensions=value[0].supportDimensions[2]
          hilog.info(0x0000, 'testTag3', '%{public}s', `testTag3==>isDynamic:${isDynamic}；supportDimensions:${supportDimensions}`)
          expect(supportDimensions==3).assertTrue()
          done()
          hilog.info(0x0000, 'testTag3', '%{public}s', `testTag3==>end`)
        }).catch(() => {
          expect().assertFail();
          done()
          hilog.info(0x0000, 'testTag3', '%{public}s', `testTag3==>false`)
        })
      } catch (err) {
        expect().assertFail();
        done()
        hilog.info(0x0000, 'testTag3', '%{public}s', `testTag3==>false`)
      }
    })

    /**
     * @tc.number: sub_ArkTSCard_FormDeepLink_0400
     * @tc.name: FormDeepLink_0400
     * @tc.desc: Normal provision of static 4*4 cards
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 3
     */
    it('SUB_AA_Extra_large_size_6x4_card_test_0400', 0, async (done:Function) => {
      let filter: formInfo.FormInfoFilter = {
        bundleName: 'com.hits.formExtraLargeSize',
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          hilog.info(0x0000, 'testTag4', '%{public}s', `testTag4==>start`)
          let isDynamic=value[0].isDynamic
          expect(isDynamic==false).assertTrue()
          let supportDimensions=value[0].supportDimensions[3]
          hilog.info(0x0000, 'testTag4', '%{public}s', `testTag4==>isDynamic:${isDynamic}；supportDimensions:${supportDimensions}`)
          expect(supportDimensions==4).assertTrue()
          done()
          hilog.info(0x0000, 'testTag4', '%{public}s', `testTag4==>end`)
        }).catch(() => {
          expect().assertFail();
          done()
          hilog.info(0x0000, 'testTag4', '%{public}s', `testTag4==>false`)
        })
      } catch (err) {
        expect().assertFail();
        done()
        hilog.info(0x0000, 'testTag4', '%{public}s', `testTag4==>false`)
      }
    })

    /**
     * @tc.number: sub_ArkTSCard_FormDeepLink_0500
     * @tc.name: FormDeepLink_0500
     * @tc.desc: Normal provision of static 6*4 cards
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 3
     */
    it('SUB_AA_Extra_large_size_6x4_card_test_0500', 0, async (done:Function) => {
      let filter: formInfo.FormInfoFilter = {
        bundleName: 'com.hits.formExtraLargeSize',
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          hilog.info(0x0000, 'testTag5', '%{public}s', `testTag5==>start`)
          let isDynamic=value[0].isDynamic
          expect(isDynamic==false).assertTrue()
          let supportDimensions=value[0].supportDimensions[4]
          hilog.info(0x0000, 'testTag5', '%{public}s', `testTag5==>isDynamic:${isDynamic}；supportDimensions:${supportDimensions}`)
          expect(supportDimensions==7).assertTrue()
          done()
          hilog.info(0x0000, 'testTag5', '%{public}s', `testTag5==>end`)
        }).catch(() => {
          expect().assertFail();
          done()
          hilog.info(0x0000, 'testTag5', '%{public}s', `testTag5==>false`)
        })
      } catch (err) {
        expect().assertFail();
        done()
        hilog.info(0x0000, 'testTag5', '%{public}s', `testTag5==>false`)
      }
    })

    /**
     * @tc.number: sub_ArkTSCard_FormDeepLink_0600
     * @tc.name: FormDeepLink_0600
     * @tc.desc: Normal provision of dynamic 1*2 cards
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 3
     */
    it('SUB_AA_Extra_large_size_6x4_card_test_0600', 0, async (done:Function) => {
      let filter: formInfo.FormInfoFilter = {
        bundleName: 'com.hits.formExtraLargeSize',
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          hilog.info(0x0000, 'testTag6', '%{public}s', `testTag6==>start`)
          let isDynamic=value[1].isDynamic
          expect(isDynamic==true).assertTrue()
          let supportDimensions=value[1].supportDimensions[0]
          hilog.info(0x0000, 'testTag6', '%{public}s', `testTag6==>isDynamic:${isDynamic}；supportDimensions:${supportDimensions}`)
          expect(supportDimensions==1).assertTrue()
          done()
          hilog.info(0x0000, 'testTag6', '%{public}s', `testTag6==>end`)
        }).catch(() => {
          expect().assertFail();
          done()
          hilog.info(0x0000, 'testTag6', '%{public}s', `testTag6==>false`)
        })
      } catch (err) {
        expect().assertFail();
        done()
        hilog.info(0x0000, 'testTag6', '%{public}s', `testTag6==>false`)
      }
    })

    /**
     * @tc.number: sub_ArkTSCard_FormDeepLink_0700
     * @tc.name: FormDeepLink_0700
     * @tc.desc: Normal provision of dynamic 2*2 cards
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 3
     */
    it('SUB_AA_Extra_large_size_6x4_card_test_0700', 0, async (done:Function) => {
      let filter: formInfo.FormInfoFilter = {
        bundleName: 'com.hits.formExtraLargeSize',
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          hilog.info(0x0000, 'testTag7', '%{public}s', `testTag7==>start`)
          let isDynamic=value[1].isDynamic
          expect(isDynamic==true).assertTrue()
          let supportDimensions=value[1].supportDimensions[1]
          hilog.info(0x0000, 'testTag7', '%{public}s', `testTag7==>isDynamic:${isDynamic}；supportDimensions:${supportDimensions}`)
          expect(supportDimensions==2).assertTrue()
          done()
          hilog.info(0x0000, 'testTag7', '%{public}s', `testTag7==>end`)
        }).catch(() => {
          expect().assertFail();
          done()
          hilog.info(0x0000, 'testTag7', '%{public}s', `testTag7==>false`)
        })
      } catch (err) {
        expect().assertFail();
        done()
        hilog.info(0x0000, 'testTag7', '%{public}s', `testTag7==>false`)
      }
    })

    /**
     * @tc.number: sub_ArkTSCard_FormDeepLink_0800
     * @tc.name: FormDeepLink_0800
     * @tc.desc: Normal provision of dynamic 2*4 cards
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 3
     */
    it('SUB_AA_Extra_large_size_6x4_card_test_0800', 0, async (done:Function) => {
      let filter: formInfo.FormInfoFilter = {
        bundleName: 'com.hits.formExtraLargeSize',
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          hilog.info(0x0000, 'testTag8', '%{public}s', `testTag8==>start`)
          let isDynamic=value[1].isDynamic
          expect(isDynamic==true).assertTrue()
          let supportDimensions=value[1].supportDimensions[2]
          hilog.info(0x0000, 'testTag8', '%{public}s', `testTag8==>isDynamic:${isDynamic}；supportDimensions:${supportDimensions}`)
          expect(supportDimensions==3).assertTrue()
          done()
          hilog.info(0x0000, 'testTag8', '%{public}s', `testTag8==>end`)
        }).catch(() => {
          expect().assertFail();
          done()
          hilog.info(0x0000, 'testTag8', '%{public}s', `testTag8==>false`)
        })
      } catch (err) {
        expect().assertFail();
        done()
        hilog.info(0x0000, 'testTag8', '%{public}s', `testTag8==>false`)
      }
    })

    /**
     * @tc.number: sub_ArkTSCard_FormDeepLink_0900
     * @tc.name: FormDeepLink_0900
     * @tc.desc: Normal provision of dynamic 4*4 cards
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 3
     */
    it('SUB_AA_Extra_large_size_6x4_card_test_0900', 0, async (done:Function) => {
      let filter: formInfo.FormInfoFilter = {
        bundleName: 'com.hits.formExtraLargeSize',
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          hilog.info(0x0000, 'testTag9', '%{public}s', `testTag9==>start`)
          let isDynamic=value[1].isDynamic
          expect(isDynamic==true).assertTrue()
          let supportDimensions=value[1].supportDimensions[3]
          hilog.info(0x0000, 'testTag9', '%{public}s', `testTag9==>isDynamic:${isDynamic}；supportDimensions:${supportDimensions}`)
          expect(supportDimensions==4).assertTrue()
          done()
          hilog.info(0x0000, 'testTag9', '%{public}s', `testTag9==>end`)
        }).catch(() => {
          expect().assertFail();
          done()
          hilog.info(0x0000, 'testTag9', '%{public}s', `testTag9==>false`)
        })
      } catch (err) {
        expect().assertFail();
        done()
        hilog.info(0x0000, 'testTag9', '%{public}s', `testTag9==>false`)
      }
    })

    /**
     * @tc.number: sub_ArkTSCard_FormDeepLink_1000
     * @tc.name: FormDeepLink_1000
     * @tc.desc: Normal provision of dynamic 6*4 cards
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 3
     */
    it('SUB_AA_Extra_large_size_6x4_card_test_1000', 0, async (done:Function) => {
      let filter: formInfo.FormInfoFilter = {
        bundleName: 'com.hits.formExtraLargeSize',
      };
      try {
        await formManagerAbility.getFormsInfo(filter).then((value) => {
          hilog.info(0x0000, 'testTag10', '%{public}s', `testTag10==>start`)
          let isDynamic=value[1].isDynamic
          expect(isDynamic==true).assertTrue()
          let supportDimensions=value[1].supportDimensions[4]
          hilog.info(0x0000, 'testTag10', '%{public}s', `testTag10==>isDynamic:${isDynamic}；supportDimensions:${supportDimensions}`)
          expect(supportDimensions==7).assertTrue()
          done()
          hilog.info(0x0000, 'testTag10', '%{public}s', `testTag10==>end`)
        }).catch(() => {
          expect().assertFail();
          done()
          hilog.info(0x0000, 'testTag10', '%{public}s', `testTag10==>false`)
        })
      } catch (err) {
        expect().assertFail();
        done()
        hilog.info(0x0000, 'testTag10', '%{public}s', `testTag10==>false`)
      }
    })
  })
}