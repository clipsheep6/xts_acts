/**
 * Copyright (c) 2023-2030 iSoftStone Information Technology (Group) Co.,Ltd.
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

import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium";
import router from '@system.router';
import CommonFunc from "../../../MainAbility/common/Common";
import {MessageManager,Callback} from '../../../MainAbility/common/MessageManager';
export default function stackAlignChange() {
  describe('stackAlignChangeTest', function () {
    beforeEach(async function (done) {
      let options = {
        uri: 'MainAbility/pages/Stack/Stack_change/stackAlignChange',
      }
      try {
        router.clear();
        await CommonFunc.sleep(1000);
        let pages = router.getState();
        console.info("get stackAlignChange state success " + JSON.stringify(pages));
        if (!("stackAlignChange" == pages.name)) {
          console.info("get stackAlignChange state success " + JSON.stringify(pages.name));
          let result = await router.push(options)
          console.info("push stackAlignChange page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push stackAlignChange page error " + JSON.stringify(err));
      }
      await CommonFunc.sleep(2000);
      done()
    });
    afterEach(async function () {
      await CommonFunc.sleep(1000);
      console.info("stackAlignChangeTop after each called");
    });


    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_0100
     * @tc.name      Stack_AlignChanged_TopStart
     * @tc.desc      Parent component set align 'Alignment.TopStart' and alignContent 'Alignment.TopStart'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_0100', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_0100 START');
      globalThis.value.message.notify({name:'align', value:Alignment.TopStart});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.TopStart});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.top).assertEqual(stackTopStartKey01.top)
      expect(stackTopStartKey01.top).assertEqual(stackTopStartKey02.top)
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(100))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(100))

      expect(stackTopStartKey.left).assertEqual(stackTopStartKey01.left)
      expect(stackTopStartKey01.left).assertEqual(stackTopStartKey02.left)
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(100))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(100))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.TopStart")
     expect(obj.$attrs.alignContent).assertEqual('Alignment.TopStart')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_0100 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_0200
     * @tc.name      Stack_AlignChanged_TopStart
     * @tc.desc      Parent component set align 'Alignment.TopStart' and alignContent 'Alignment.Top'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_0200', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_0200 START');
      globalThis.value.message.notify({name:'align', value:Alignment.TopStart});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Top});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.top).assertEqual(stackTopStartKey01.top)
      expect(stackTopStartKey01.top).assertEqual(stackTopStartKey02.top)
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(100))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(100))

      expect(stackTopStartKey.left).assertEqual(stackTopStartKey01.left)
      expect(stackTopStartKey01.left).assertEqual(stackTopStartKey02.left)
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(100))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(100))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.TopStart")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Top')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_0200 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_0300
     * @tc.name      Stack_AlignChanged_TopStart
     * @tc.desc      Parent component set align 'Alignment.TopStart' and alignContent 'Alignment.TopEnd'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_0300', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_0300 START');
      globalThis.value.message.notify({name:'align', value:Alignment.TopStart});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.TopEnd});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.top).assertEqual(stackTopStartKey01.top)
      expect(stackTopStartKey01.top).assertEqual(stackTopStartKey02.top)
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(100))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(100))

      expect(stackTopStartKey.left).assertEqual(stackTopStartKey01.left)
      expect(stackTopStartKey01.left).assertEqual(stackTopStartKey02.left)
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(100))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(100))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.TopStart")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.TopEnd')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_0300 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_0400
     * @tc.name      Stack_AlignChanged_TopStart
     * @tc.desc      Parent component set align 'Alignment.TopStart' and alignContent 'Alignment.Start'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_0400', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_0400 START');
      globalThis.value.message.notify({name:'align', value:Alignment.TopStart});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Start});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.top).assertEqual(stackTopStartKey01.top)
      expect(stackTopStartKey01.top).assertEqual(stackTopStartKey02.top)
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(100))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(100))

      expect(stackTopStartKey.left).assertEqual(stackTopStartKey01.left)
      expect(stackTopStartKey01.left).assertEqual(stackTopStartKey02.left)
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(100))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(100))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.TopStart")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Start')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_0400 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_0500
     * @tc.name      Stack_AlignChanged_TopStart
     * @tc.desc      Parent component set align 'Alignment.TopStart' and alignContent 'Alignment.Center'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_0500', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_0500 START');
      globalThis.value.message.notify({name:'align', value:Alignment.TopStart});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Center});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.top).assertEqual(stackTopStartKey01.top)
      expect(stackTopStartKey01.top).assertEqual(stackTopStartKey02.top)
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(100))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(100))

      expect(stackTopStartKey.left).assertEqual(stackTopStartKey01.left)
      expect(stackTopStartKey01.left).assertEqual(stackTopStartKey02.left)
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(100))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(100))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.TopStart")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Center')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_0500 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_0600
     * @tc.name      Stack_AlignChanged_TopStart
     * @tc.desc      Parent component set align 'Alignment.TopStart' and alignContent 'Alignment.End'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_0600', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_0600 START');
      globalThis.value.message.notify({name:'align', value:Alignment.TopStart});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.End});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.top).assertEqual(stackTopStartKey01.top)
      expect(stackTopStartKey01.top).assertEqual(stackTopStartKey02.top)
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(100))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(100))

      expect(stackTopStartKey.left).assertEqual(stackTopStartKey01.left)
      expect(stackTopStartKey01.left).assertEqual(stackTopStartKey02.left)
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(100))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(100))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.TopStart")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.End')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_0600 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_0700
     * @tc.name      Stack_AlignChanged_TopStart
     * @tc.desc      Parent component set align 'Alignment.TopStart' and alignContent 'Alignment.BottomStart'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_0700', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_0700 START');
      globalThis.value.message.notify({name:'align', value:Alignment.TopStart});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.BottomStart});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.top).assertEqual(stackTopStartKey01.top)
      expect(stackTopStartKey01.top).assertEqual(stackTopStartKey02.top)
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(100))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(100))

      expect(stackTopStartKey.left).assertEqual(stackTopStartKey01.left)
      expect(stackTopStartKey01.left).assertEqual(stackTopStartKey02.left)
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(100))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(100))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.TopStart")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.BottomStart')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_0700 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_0800
     * @tc.name      Stack_AlignChanged_TopStart
     * @tc.desc      Parent component set align 'Alignment.TopStart' and alignContent 'Alignment.Bottom'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_0800', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_0800 START');
      globalThis.value.message.notify({name:'align', value:Alignment.TopStart});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Bottom});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.top).assertEqual(stackTopStartKey01.top)
      expect(stackTopStartKey01.top).assertEqual(stackTopStartKey02.top)
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(100))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(100))

      expect(stackTopStartKey.left).assertEqual(stackTopStartKey01.left)
      expect(stackTopStartKey01.left).assertEqual(stackTopStartKey02.left)
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(100))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(100))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.TopStart")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Bottom')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_0800 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_0900
     * @tc.name      Stack_AlignChanged_TopStart
     * @tc.desc      Parent component set align 'Alignment.TopStart' and alignContent 'Alignment.BottomEnd'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_0900', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_0900 START');
      globalThis.value.message.notify({name:'align', value:Alignment.TopStart});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.BottomEnd});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.top).assertEqual(stackTopStartKey01.top)
      expect(stackTopStartKey01.top).assertEqual(stackTopStartKey02.top)
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(100))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(100))

      expect(stackTopStartKey.left).assertEqual(stackTopStartKey01.left)
      expect(stackTopStartKey01.left).assertEqual(stackTopStartKey02.left)
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(100))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(100))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.TopStart")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.BottomEnd')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_0900 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_1000
     * @tc.name      Stack_AlignChanged_AlignTop
     * @tc.desc      Parent component set align 'Alignment.Top' and alignContent 'Alignment.TopStart'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_1000', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_1000 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Top});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.TopStart});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.top).assertEqual(stackTopStartKey01.top)
      expect(stackTopStartKey01.top).assertEqual(stackTopStartKey02.top)
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(100))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(100))

      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(50))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(50))
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(50))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(50))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$attrs.align).assertEqual("Alignment.Top")
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.alignContent).assertEqual('Alignment.TopStart')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_1000 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_1100
     * @tc.name      Stack_AlignChanged_AlignTop
     * @tc.desc      Parent component set align 'Alignment.Top' and alignContent 'Alignment.Top'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_1100', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_1100 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Top});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Top});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.top).assertEqual(stackTopStartKey01.top)
      expect(stackTopStartKey01.top).assertEqual(stackTopStartKey02.top)
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(100))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(100))

      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(50))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(50))
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(50))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(50))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Top")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Top')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_1100 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_1200
     * @tc.name      Stack_AlignChanged_AlignTop
     * @tc.desc      Parent component set align 'Alignment.Top' and alignContent 'Alignment.TopEnd'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_1200', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_1200 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Top});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.TopEnd});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.top).assertEqual(stackTopStartKey01.top)
      expect(stackTopStartKey01.top).assertEqual(stackTopStartKey02.top)
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(100))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(100))

      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(50))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(50))
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(50))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(50))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Top")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.TopEnd')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_1200 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_1300
     * @tc.name      Stack_AlignChanged_AlignTop
     * @tc.desc      Parent component set align 'Alignment.Top' and alignContent 'Alignment.Start'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_1300', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_1300 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Top});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Start});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.top).assertEqual(stackTopStartKey01.top)
      expect(stackTopStartKey01.top).assertEqual(stackTopStartKey02.top)
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(100))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(100))

      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(50))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(50))
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(50))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(50))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Top")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Start')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_1300 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_1400
     * @tc.name      Stack_AlignChanged_AlignTop
     * @tc.desc      Parent component set align 'Alignment.Top' and alignContent 'Alignment.Center'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_1400', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_1400 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Top});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Center});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.top).assertEqual(stackTopStartKey01.top)
      expect(stackTopStartKey01.top).assertEqual(stackTopStartKey02.top)
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(100))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(100))

      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(50))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(50))
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(50))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(50))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Top")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Center')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_1400 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_1500
     * @tc.name      Stack_AlignChanged_AlignTop
     * @tc.desc      Parent component set align 'Alignment.Top' and alignContent 'Alignment.End'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_1500', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_1500 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Top});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.End});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.top).assertEqual(stackTopStartKey01.top)
      expect(stackTopStartKey01.top).assertEqual(stackTopStartKey02.top)
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(100))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(100))

      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(50))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(50))
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(50))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(50))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Top")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.End')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_1500 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_1600
     * @tc.name      Stack_AlignChanged_AlignTop
     * @tc.desc      Parent component set align 'Alignment.Top' and alignContent 'Alignment.BottomStart'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_1600', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_1600 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Top});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.BottomStart});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.top).assertEqual(stackTopStartKey01.top)
      expect(stackTopStartKey01.top).assertEqual(stackTopStartKey02.top)
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(100))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(100))

      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(50))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(50))
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(50))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(50))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Top")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.BottomStart')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_1600 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_1700
     * @tc.name      Stack_AlignChanged_AlignTop
     * @tc.desc      Parent component set align 'Alignment.Top' and alignContent 'Alignment.Bottom'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_1700', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_1700 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Top});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Bottom});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.top).assertEqual(stackTopStartKey01.top)
      expect(stackTopStartKey01.top).assertEqual(stackTopStartKey02.top)
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(100))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(100))

      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(50))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(50))
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(50))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(50))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Top")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Bottom')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_1700 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_1800
     * @tc.name      Stack_AlignChanged_AlignTop
     * @tc.desc      Parent component set align 'Alignment.Top' and alignContent 'Alignment.BottomEnd'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_1800', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_1800 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Top});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.BottomEnd});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.top).assertEqual(stackTopStartKey01.top)
      expect(stackTopStartKey01.top).assertEqual(stackTopStartKey02.top)
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(100))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(100))

      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(50))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(50))
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(50))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(50))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Top")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.BottomEnd')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_1800 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_1900
     * @tc.name      Stack_AlignChanged_AlignTopEnd
     * @tc.desc      Parent component set align 'Alignment.TopEnd' and alignContent 'Alignment.TopStart'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_1900', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_1900 START');
      globalThis.value.message.notify({name:'align', value:Alignment.TopEnd});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.TopStart});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.top).assertEqual(stackTopStartKey01.top)
      expect(stackTopStartKey01.top).assertEqual(stackTopStartKey02.top)
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(100))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(100))

      expect(stackTopStartKey.right).assertEqual(stackTopStartKey01.right)
      expect(stackTopStartKey01.right).assertEqual(stackTopStartKey02.right)
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(100))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.TopEnd")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.TopStart')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_1900 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_2000
     * @tc.name      Stack_AlignChanged_AlignTopEnd
     * @tc.desc      Parent component set align 'Alignment.TopEnd' and alignContent 'Alignment.Top'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_2000', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_2000 START');
      globalThis.value.message.notify({name:'align', value:Alignment.TopEnd});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Top});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.top).assertEqual(stackTopStartKey01.top)
      expect(stackTopStartKey01.top).assertEqual(stackTopStartKey02.top)
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(100))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(100))

      expect(stackTopStartKey.right).assertEqual(stackTopStartKey01.right)
      expect(stackTopStartKey01.right).assertEqual(stackTopStartKey02.right)
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(100))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.TopEnd")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Top')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_2000 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_2100
     * @tc.name      Stack_AlignChanged_AlignTopEnd
     * @tc.desc      Parent component set align 'Alignment.TopEnd' and alignContent 'Alignment.TopEnd'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_2100', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_2100 START');
      globalThis.value.message.notify({name:'align', value:Alignment.TopEnd});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.TopEnd});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.top).assertEqual(stackTopStartKey01.top)
      expect(stackTopStartKey01.top).assertEqual(stackTopStartKey02.top)
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(100))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(100))

      expect(stackTopStartKey.right).assertEqual(stackTopStartKey01.right)
      expect(stackTopStartKey01.right).assertEqual(stackTopStartKey02.right)
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(100))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.TopEnd")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.TopEnd')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_2100 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_2200
     * @tc.name      Stack_AlignChanged_AlignTopEnd
     * @tc.desc      Parent component set align 'Alignment.TopEnd' and alignContent 'Alignment.Start'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_2200', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_2200 START');
      globalThis.value.message.notify({name:'align', value:Alignment.TopEnd});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Start});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.top).assertEqual(stackTopStartKey01.top)
      expect(stackTopStartKey01.top).assertEqual(stackTopStartKey02.top)
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(100))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(100))

      expect(stackTopStartKey.right).assertEqual(stackTopStartKey01.right)
      expect(stackTopStartKey01.right).assertEqual(stackTopStartKey02.right)
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(100))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.TopEnd")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Start')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_2200 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_2300
     * @tc.name      Stack_AlignChanged_AlignTopEnd
     * @tc.desc      Parent component set align 'Alignment.TopEnd' and alignContent 'Alignment.Center'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_2300', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_2300 START');
      globalThis.value.message.notify({name:'align', value:Alignment.TopEnd});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Center});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.top).assertEqual(stackTopStartKey01.top)
      expect(stackTopStartKey01.top).assertEqual(stackTopStartKey02.top)
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(100))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(100))

      expect(stackTopStartKey.right).assertEqual(stackTopStartKey01.right)
      expect(stackTopStartKey01.right).assertEqual(stackTopStartKey02.right)
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(100))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.TopEnd")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Center')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_2300 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_2400
     * @tc.name      Stack_AlignChanged_AlignTopEnd
     * @tc.desc      Parent component set align 'Alignment.TopEnd' and alignContent 'Alignment.End'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_2400', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_2400 START');
      globalThis.value.message.notify({name:'align', value:Alignment.TopEnd});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.End});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.top).assertEqual(stackTopStartKey01.top)
      expect(stackTopStartKey01.top).assertEqual(stackTopStartKey02.top)
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(100))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(100))

      expect(stackTopStartKey.right).assertEqual(stackTopStartKey01.right)
      expect(stackTopStartKey01.right).assertEqual(stackTopStartKey02.right)
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(100))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.TopEnd")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.End')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_2400 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_2500
     * @tc.name      Stack_AlignChanged_AlignTopEnd
     * @tc.desc      Parent component set align 'Alignment.TopEnd' and alignContent 'Alignment.BottomStart'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_2500', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_2500 START');
      globalThis.value.message.notify({name:'align', value:Alignment.TopEnd});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.BottomStart});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.top).assertEqual(stackTopStartKey01.top)
      expect(stackTopStartKey01.top).assertEqual(stackTopStartKey02.top)
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(100))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(100))

      expect(stackTopStartKey.right).assertEqual(stackTopStartKey01.right)
      expect(stackTopStartKey01.right).assertEqual(stackTopStartKey02.right)
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(100))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.TopEnd")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.BottomStart')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_2500 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_2600
     * @tc.name      Stack_AlignChanged_AlignTopEnd
     * @tc.desc      Parent component set align 'Alignment.TopEnd' and alignContent 'Alignment.Bottom'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_2600', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_2600 START');
      globalThis.value.message.notify({name:'align', value:Alignment.TopEnd});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Bottom});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.top).assertEqual(stackTopStartKey01.top)
      expect(stackTopStartKey01.top).assertEqual(stackTopStartKey02.top)
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(100))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(100))

      expect(stackTopStartKey.right).assertEqual(stackTopStartKey01.right)
      expect(stackTopStartKey01.right).assertEqual(stackTopStartKey02.right)
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(100))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.TopEnd")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Bottom')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_2600 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_2700
     * @tc.name      Stack_AlignChanged_AlignTopEnd
     * @tc.desc      Parent component set align 'Alignment.TopEnd' and alignContent 'Alignment.BottomEnd'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_2700', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_2700 START');
      globalThis.value.message.notify({name:'align', value:Alignment.TopEnd});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.BottomEnd});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.top).assertEqual(stackTopStartKey01.top)
      expect(stackTopStartKey01.top).assertEqual(stackTopStartKey02.top)
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(100))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(100))

      expect(stackTopStartKey.right).assertEqual(stackTopStartKey01.right)
      expect(stackTopStartKey01.right).assertEqual(stackTopStartKey02.right)
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(100))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.TopEnd")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.BottomEnd')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_2700 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_2800
     * @tc.name      Stack_AlignChanged_AlignStart
     * @tc.desc      Parent component set align 'Alignment.Start' and alignContent 'Alignment.TopStart'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_2800', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_2800 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Start});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.TopStart});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(50))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(50))
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(50))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(50))

      expect(stackTopStartKey.left).assertEqual(stackTopStartKey01.left)
      expect(stackTopStartKey01.left).assertEqual(stackTopStartKey02.left)
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(100))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(100))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Start")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.TopStart')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_2800 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_2900
     * @tc.name      Stack_AlignChanged_AlignStart
     * @tc.desc      Parent component set align 'Alignment.Start' and alignContent 'Alignment.Top'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_2900', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_2900 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Start});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Top});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(50))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(50))
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(50))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(50))

      expect(stackTopStartKey.left).assertEqual(stackTopStartKey01.left)
      expect(stackTopStartKey01.left).assertEqual(stackTopStartKey02.left)
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(100))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(100))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Start")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Top')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_2900 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_3000
     * @tc.name      Stack_AlignChanged_AlignStart
     * @tc.desc      Parent component set align 'Alignment.Start' and alignContent 'Alignment.TopEnd'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_3000', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_3000 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Start});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.TopEnd});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(50))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(50))
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(50))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(50))

      expect(stackTopStartKey.left).assertEqual(stackTopStartKey01.left)
      expect(stackTopStartKey01.left).assertEqual(stackTopStartKey02.left)
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(100))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(100))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Start")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.TopEnd')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_3000 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_3100
     * @tc.name      Stack_AlignChanged_AlignStart
     * @tc.desc      Parent component set align 'Alignment.Start' and alignContent 'Alignment.Start'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_3100', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_3100 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Start});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Start});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(50))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(50))
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(50))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(50))

      expect(stackTopStartKey.left).assertEqual(stackTopStartKey01.left)
      expect(stackTopStartKey01.left).assertEqual(stackTopStartKey02.left)
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(100))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(100))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Start")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Start')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_3100 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_3200
     * @tc.name      Stack_AlignChanged_AlignStart
     * @tc.desc      Parent component set align 'Alignment.Start' and alignContent 'Alignment.Center'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_3200', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_3200 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Start});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Center});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(50))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(50))
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(50))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(50))

      expect(stackTopStartKey.left).assertEqual(stackTopStartKey01.left)
      expect(stackTopStartKey01.left).assertEqual(stackTopStartKey02.left)
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(100))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(100))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Start")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Center')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_3200 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_3300
     * @tc.name      Stack_AlignChanged_AlignStart
     * @tc.desc      Parent component set align 'Alignment.Start' and alignContent 'Alignment.End'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_3300', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_3300 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Start});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.End});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(50))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(50))
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(50))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(50))

      expect(stackTopStartKey.left).assertEqual(stackTopStartKey01.left)
      expect(stackTopStartKey01.left).assertEqual(stackTopStartKey02.left)
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(100))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(100))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Start")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.End')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_3300 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_3400
     * @tc.name      Stack_AlignChanged_AlignStart
     * @tc.desc      Parent component set align 'Alignment.Start' and alignContent 'Alignment.BottomStart'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_3400', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_3400 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Start});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.BottomStart});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(50))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(50))
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(50))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(50))

      expect(stackTopStartKey.left).assertEqual(stackTopStartKey01.left)
      expect(stackTopStartKey01.left).assertEqual(stackTopStartKey02.left)
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(100))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(100))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Start")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.BottomStart')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_3400 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_3500
     * @tc.name      Stack_AlignChanged_AlignStart
     * @tc.desc      Parent component set align 'Alignment.Start' and alignContent 'Alignment.Bottom'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_3500', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_3500 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Start});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Bottom});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(50))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(50))
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(50))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(50))

      expect(stackTopStartKey.left).assertEqual(stackTopStartKey01.left)
      expect(stackTopStartKey01.left).assertEqual(stackTopStartKey02.left)
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(100))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(100))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Start")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Bottom')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_3500 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_3600
     * @tc.name      Stack_AlignChanged_AlignStart
     * @tc.desc      Parent component set align 'Alignment.Start' and alignContent 'Alignment.BottomEnd'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_3600', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_3600 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Start});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.BottomEnd});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(50))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(50))
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(50))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(50))

      expect(stackTopStartKey.left).assertEqual(stackTopStartKey01.left)
      expect(stackTopStartKey01.left).assertEqual(stackTopStartKey02.left)
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(100))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(100))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Start")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.BottomEnd')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_3600 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_3700
     * @tc.name      Stack_AlignChanged_AlignCenter
     * @tc.desc      Parent component set align 'Alignment.Center' and alignContent 'Alignment.TopStart'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_3700', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_3700 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Center});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.TopStart});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(50))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(50))
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(50))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(50))

      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(50))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(50))
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(50))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(50))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Center")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.TopStart')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_3700 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_3800
     * @tc.name      Stack_AlignChanged_AlignCenter
     * @tc.desc      Parent component set align 'Alignment.Center' and alignContent 'Alignment.Top'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_3800', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_3800 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Center});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Top});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(50))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(50))
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(50))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(50))

      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(50))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(50))
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(50))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(50))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Center")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Top')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_3800 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_3900
     * @tc.name      Stack_AlignChanged_AlignCenter
     * @tc.desc      Parent component set align 'Alignment.Center' and alignContent 'Alignment.TopEnd'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_3900', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_3900 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Center});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.TopEnd});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(50))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(50))
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(50))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(50))

      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(50))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(50))
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(50))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(50))
      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Center")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.TopEnd')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_3900 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_4000
     * @tc.name      Stack_AlignChanged_AlignCenter
     * @tc.desc      Parent component set align 'Alignment.Center' and alignContent 'Alignment.Start'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_4000', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_4000 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Center});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Start});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(50))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(50))
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(50))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(50))

      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(50))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(50))
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(50))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(50))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Center")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Start')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_4000 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_4100
     * @tc.name      Stack_AlignChanged_AlignCenter
     * @tc.desc      Parent component set align 'Alignment.Center' and alignContent 'Alignment.Center'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_4100', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_4100 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Center});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Center});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(50))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(50))
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(50))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(50))

      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(50))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(50))
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(50))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(50))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Center")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Center')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_4100 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_4200
     * @tc.name      Stack_AlignChanged_AlignCenter
     * @tc.desc      Parent component set align 'Alignment.Center' and alignContent 'Alignment.End'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_4200', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_4200 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Center});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.End});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(50))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(50))
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(50))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(50))

      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(50))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(50))
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(50))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(50))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Center")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.End')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_4200 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_4300
     * @tc.name      Stack_AlignChanged_AlignCenter
     * @tc.desc      Parent component set align 'Alignment.Center' and alignContent 'Alignment.BottomStart'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_4300', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_4300 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Center});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.BottomStart});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(50))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(50))
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(50))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(50))

      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(50))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(50))
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(50))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(50))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Center")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.BottomStart')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_4300 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_4400
     * @tc.name      Stack_AlignChanged_AlignCenter
     * @tc.desc      Parent component set align 'Alignment.Center' and alignContent 'Alignment.Bottom'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_4400', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_4400 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Center});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Bottom});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(50))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(50))
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(50))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(50))

      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(50))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(50))
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(50))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(50))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Center")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Bottom')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_4400 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_4500
     * @tc.name      Stack_AlignChanged_AlignCenter
     * @tc.desc      Parent component set align 'Alignment.Center' and alignContent 'Alignment.BottomEnd'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_4500', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_4500 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Center});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.BottomEnd});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(50))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(50))
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(50))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(50))

      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(50))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(50))
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(50))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(50))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Center")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.BottomEnd')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_4500 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_4600
     * @tc.name      Stack_AlignChanged_AlignEnd
     * @tc.desc      Parent component set align 'Alignment.End' and alignContent 'Alignment.TopStart'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_4600', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_4600 START');
      globalThis.value.message.notify({name:'align', value:Alignment.End});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.TopStart});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.right).assertEqual(stackTopStartKey01.right)
      expect(stackTopStartKey01.right).assertEqual(stackTopStartKey02.right)
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(100))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(50))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(50))
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(50))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(50))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.End")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.TopStart')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_4600 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_4700
     * @tc.name      Stack_AlignChanged_AlignEnd
     * @tc.desc      Parent component set align 'Alignment.End' and alignContent 'Alignment.Top'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_4700', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_4700 START');
      globalThis.value.message.notify({name:'align', value:Alignment.End});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Top});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.right).assertEqual(stackTopStartKey01.right)
      expect(stackTopStartKey01.right).assertEqual(stackTopStartKey02.right)
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(100))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(50))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(50))
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(50))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(50))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.End")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Top')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_4700 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_4800
     * @tc.name      Stack_AlignChanged_AlignEnd
     * @tc.desc      Parent component set align 'Alignment.End' and alignContent 'Alignment.TopEnd'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_4800', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_4800 START');
      globalThis.value.message.notify({name:'align', value:Alignment.End});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.TopEnd});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.right).assertEqual(stackTopStartKey01.right)
      expect(stackTopStartKey01.right).assertEqual(stackTopStartKey02.right)
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(100))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(50))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(50))
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(50))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(50))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.End")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.TopEnd')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_4800 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_4900
     * @tc.name      Stack_AlignChanged_AlignEnd
     * @tc.desc      Parent component set align 'Alignment.End' and alignContent 'Alignment.Start'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_4900', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_4900 START');
      globalThis.value.message.notify({name:'align', value:Alignment.End});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Start});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.right).assertEqual(stackTopStartKey01.right)
      expect(stackTopStartKey01.right).assertEqual(stackTopStartKey02.right)
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(100))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(50))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(50))
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(50))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(50))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.End")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Start')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_4900 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_5000
     * @tc.name      Stack_AlignChanged_AlignEnd
     * @tc.desc      Parent component set align 'Alignment.End' and alignContent 'Alignment.Center'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_5000', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_5000 START');
      globalThis.value.message.notify({name:'align', value:Alignment.End});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Center});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.right).assertEqual(stackTopStartKey01.right)
      expect(stackTopStartKey01.right).assertEqual(stackTopStartKey02.right)
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(100))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(50))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(50))
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(50))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(50))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.End")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Center')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_5000 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_5100
     * @tc.name      Stack_AlignChanged_AlignEnd
     * @tc.desc      Parent component set align 'Alignment.End' and alignContent 'Alignment.End'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_5100', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_5100 START');
      globalThis.value.message.notify({name:'align', value:Alignment.End});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.End});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.right).assertEqual(stackTopStartKey01.right)
      expect(stackTopStartKey01.right).assertEqual(stackTopStartKey02.right)
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(100))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(50))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(50))
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(50))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(50))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.End")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.End')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_5100 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_5200
     * @tc.name      Stack_AlignChanged_AlignEnd
     * @tc.desc      Parent component set align 'Alignment.End' and alignContent 'Alignment.BottomStart'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_5200', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_5200 START');
      globalThis.value.message.notify({name:'align', value:Alignment.End});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.BottomStart});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.right).assertEqual(stackTopStartKey01.right)
      expect(stackTopStartKey01.right).assertEqual(stackTopStartKey02.right)
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(100))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(50))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(50))
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(50))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(50))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.End")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.BottomStart')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_5200 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_5300
     * @tc.name      Stack_AlignChanged_AlignEnd
     * @tc.desc      Parent component set align 'Alignment.End' and alignContent 'Alignment.Bottom'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_5300', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_5300 START');
      globalThis.value.message.notify({name:'align', value:Alignment.End});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Bottom});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.right).assertEqual(stackTopStartKey01.right)
      expect(stackTopStartKey01.right).assertEqual(stackTopStartKey02.right)
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(100))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(50))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(50))
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(50))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(50))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.End")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Bottom')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_5300 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_5400
     * @tc.name      Stack_AlignChanged_AlignEnd
     * @tc.desc      Parent component set align 'Alignment.End' and alignContent 'Alignment.BottomEnd'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_5400', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_5400 START');
      globalThis.value.message.notify({name:'align', value:Alignment.End});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.BottomEnd});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.right).assertEqual(stackTopStartKey01.right)
      expect(stackTopStartKey01.right).assertEqual(stackTopStartKey02.right)
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(100))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(50))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(50))
      expect(stackTopStartKey.bottom - stackTopStartKey01.bottom).assertEqual(vp2px(50))
      expect(stackTopStartKey01.bottom - stackTopStartKey02.bottom).assertEqual(vp2px(50))

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.End")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.BottomEnd')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_5400 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_5500
     * @tc.name      Stack_AlignChanged_AlignBottomStart
     * @tc.desc      Parent component set align 'Alignment.BottomStart' and alignContent 'Alignment.TopStart'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_5500', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_5500 START');
      globalThis.value.message.notify({name:'align', value:Alignment.BottomStart});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.TopStart});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.left).assertEqual(stackTopStartKey01.left)
      expect(stackTopStartKey01.left).assertEqual(stackTopStartKey02.left)
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(100))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(100))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(100))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(100))
      expect(stackTopStartKey.bottom).assertEqual(stackTopStartKey01.bottom)
      expect(stackTopStartKey01.bottom).assertEqual(stackTopStartKey02.bottom)

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.BottomStart")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.TopStart')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_5500 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_5600
     * @tc.name      Stack_AlignChanged_AlignBottomStart
     * @tc.desc      Parent component set align 'Alignment.BottomStart' and alignContent 'Alignment.Top'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_5600', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_5600 START');
      globalThis.value.message.notify({name:'align', value:Alignment.BottomStart});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Top});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.left).assertEqual(stackTopStartKey01.left)
      expect(stackTopStartKey01.left).assertEqual(stackTopStartKey02.left)
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(100))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(100))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(100))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(100))
      expect(stackTopStartKey.bottom).assertEqual(stackTopStartKey01.bottom)
      expect(stackTopStartKey01.bottom).assertEqual(stackTopStartKey02.bottom)

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.BottomStart")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Top')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_5600 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_5700
     * @tc.name      Stack_AlignChanged_AlignBottomStart
     * @tc.desc      Parent component set align 'Alignment.BottomStart' and alignContent 'Alignment.TopEnd'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_5700', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_5700 START');
      globalThis.value.message.notify({name:'align', value:Alignment.BottomStart});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.TopEnd});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.left).assertEqual(stackTopStartKey01.left)
      expect(stackTopStartKey01.left).assertEqual(stackTopStartKey02.left)
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(100))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(100))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(100))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(100))
      expect(stackTopStartKey.bottom).assertEqual(stackTopStartKey01.bottom)
      expect(stackTopStartKey01.bottom).assertEqual(stackTopStartKey02.bottom)

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.BottomStart")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.TopEnd')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_5700 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_5800
     * @tc.name      Stack_AlignChanged_AlignBottomStart
     * @tc.desc      Parent component set align 'Alignment.BottomStart' and alignContent 'Alignment.Start'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_5800', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_5800 START');
      globalThis.value.message.notify({name:'align', value:Alignment.BottomStart});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Start});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.left).assertEqual(stackTopStartKey01.left)
      expect(stackTopStartKey01.left).assertEqual(stackTopStartKey02.left)
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(100))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(100))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(100))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(100))
      expect(stackTopStartKey.bottom).assertEqual(stackTopStartKey01.bottom)
      expect(stackTopStartKey01.bottom).assertEqual(stackTopStartKey02.bottom)

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.BottomStart")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Start')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_5800 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_5900
     * @tc.name      Stack_AlignChanged_AlignBottomStart
     * @tc.desc      Parent component set align 'Alignment.BottomStart' and alignContent 'Alignment.Center'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_5900', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_5900 START');
      globalThis.value.message.notify({name:'align', value:Alignment.BottomStart});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Center});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.left).assertEqual(stackTopStartKey01.left)
      expect(stackTopStartKey01.left).assertEqual(stackTopStartKey02.left)
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(100))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(100))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(100))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(100))
      expect(stackTopStartKey.bottom).assertEqual(stackTopStartKey01.bottom)
      expect(stackTopStartKey01.bottom).assertEqual(stackTopStartKey02.bottom)

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.BottomStart")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Center')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_5900 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_6000
     * @tc.name      Stack_AlignChanged_AlignBottomStart
     * @tc.desc      Parent component set align 'Alignment.BottomStart' and alignContent 'Alignment.End'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_6000', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_6000 START');
      globalThis.value.message.notify({name:'align', value:Alignment.BottomStart});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.End});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.left).assertEqual(stackTopStartKey01.left)
      expect(stackTopStartKey01.left).assertEqual(stackTopStartKey02.left)
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(100))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(100))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(100))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(100))
      expect(stackTopStartKey.bottom).assertEqual(stackTopStartKey01.bottom)
      expect(stackTopStartKey01.bottom).assertEqual(stackTopStartKey02.bottom)

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.BottomStart")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.End')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_6000 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_6100
     * @tc.name      Stack_AlignChanged_AlignBottomStart
     * @tc.desc      Parent component set align 'Alignment.BottomStart' and alignContent 'Alignment.BottomStart'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_6100', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_6100 START');
      globalThis.value.message.notify({name:'align', value:Alignment.BottomStart});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.BottomStart});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.left).assertEqual(stackTopStartKey01.left)
      expect(stackTopStartKey01.left).assertEqual(stackTopStartKey02.left)
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(100))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(100))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(100))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(100))
      expect(stackTopStartKey.bottom).assertEqual(stackTopStartKey01.bottom)
      expect(stackTopStartKey01.bottom).assertEqual(stackTopStartKey02.bottom)

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.BottomStart")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.BottomStart')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_6100 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_6200
     * @tc.name      Stack_AlignChanged_AlignBottomStart
     * @tc.desc      Parent component set align 'Alignment.BottomStart' and alignContent 'Alignment.Bottom'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_6200', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_6200 START');
      globalThis.value.message.notify({name:'align', value:Alignment.BottomStart});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Bottom});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.left).assertEqual(stackTopStartKey01.left)
      expect(stackTopStartKey01.left).assertEqual(stackTopStartKey02.left)
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(100))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(100))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(100))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(100))
      expect(stackTopStartKey.bottom).assertEqual(stackTopStartKey01.bottom)
      expect(stackTopStartKey01.bottom).assertEqual(stackTopStartKey02.bottom)

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.BottomStart")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Bottom')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_6200 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_6300
     * @tc.name      Stack_AlignChanged_AlignBottomStart
     * @tc.desc      Parent component set align 'Alignment.BottomStart' and alignContent 'Alignment.BottomEnd'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_6300', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_6300 START');
      globalThis.value.message.notify({name:'align', value:Alignment.BottomStart});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.BottomEnd});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.left).assertEqual(stackTopStartKey01.left)
      expect(stackTopStartKey01.left).assertEqual(stackTopStartKey02.left)
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(100))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(100))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(100))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(100))
      expect(stackTopStartKey.bottom).assertEqual(stackTopStartKey01.bottom)
      expect(stackTopStartKey01.bottom).assertEqual(stackTopStartKey02.bottom)

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.BottomStart")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.BottomEnd')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_6300 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_6400
     * @tc.name     Stack_AlignChanged_AlignBottom
     * @tc.desc      Parent component set align 'Alignment.Bottom' and alignContent 'Alignment.TopStart'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_6400', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_6400 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Bottom});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.TopStart});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(50))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(50))
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(50))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(50))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(100))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(100))
      expect(stackTopStartKey.bottom).assertEqual(stackTopStartKey01.bottom)
      expect(stackTopStartKey01.bottom).assertEqual(stackTopStartKey02.bottom)

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Bottom")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.TopStart')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_6400 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_6500
     * @tc.name     Stack_AlignChanged_AlignBottom
     * @tc.desc      Parent component set align 'Alignment.Bottom' and alignContent 'Alignment.Top'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_6500', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_6500 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Bottom});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Top});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(50))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(50))
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(50))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(50))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(100))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(100))
      expect(stackTopStartKey.bottom).assertEqual(stackTopStartKey01.bottom)
      expect(stackTopStartKey01.bottom).assertEqual(stackTopStartKey02.bottom)

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Bottom")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Top')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_6500 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_6600
     * @tc.name     Stack_AlignChanged_AlignBottom
     * @tc.desc      Parent component set align 'Alignment.Bottom' and alignContent 'Alignment.TopEnd'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_6600', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_6600 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Bottom});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.TopEnd});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(50))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(50))
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(50))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(50))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(100))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(100))
      expect(stackTopStartKey.bottom).assertEqual(stackTopStartKey01.bottom)
      expect(stackTopStartKey01.bottom).assertEqual(stackTopStartKey02.bottom)

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Bottom")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.TopEnd')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_6600 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_6700
     * @tc.name     Stack_AlignChanged_AlignBottom
     * @tc.desc      Parent component set align 'Alignment.Bottom' and alignContent 'Alignment.Start'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_6700', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_6700 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Bottom});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Start});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(50))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(50))
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(50))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(50))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(100))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(100))
      expect(stackTopStartKey.bottom).assertEqual(stackTopStartKey01.bottom)
      expect(stackTopStartKey01.bottom).assertEqual(stackTopStartKey02.bottom)

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Bottom")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Start')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_6700 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_6800
     * @tc.name     Stack_AlignChanged_AlignBottom
     * @tc.desc      Parent component set align 'Alignment.Bottom' and alignContent 'Alignment.Center'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_6800', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_6800 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Bottom});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Center});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(50))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(50))
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(50))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(50))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(100))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(100))
      expect(stackTopStartKey.bottom).assertEqual(stackTopStartKey01.bottom)
      expect(stackTopStartKey01.bottom).assertEqual(stackTopStartKey02.bottom)

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Bottom")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Center')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_6800 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_6900
     * @tc.name     Stack_AlignChanged_AlignBottom
     * @tc.desc      Parent component set align 'Alignment.Bottom' and alignContent 'Alignment.End'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_6900', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_6900 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Bottom});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.End});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(50))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(50))
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(50))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(50))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(100))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(100))
      expect(stackTopStartKey.bottom).assertEqual(stackTopStartKey01.bottom)
      expect(stackTopStartKey01.bottom).assertEqual(stackTopStartKey02.bottom)

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Bottom")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.End')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_6900 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_7000
     * @tc.name     Stack_AlignChanged_AlignBottom
     * @tc.desc      Parent component set align 'Alignment.Bottom' and alignContent 'Alignment.BottomStart'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_7000', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_7000 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Bottom});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.BottomStart});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(50))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(50))
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(50))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(50))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(100))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(100))
      expect(stackTopStartKey.bottom).assertEqual(stackTopStartKey01.bottom)
      expect(stackTopStartKey01.bottom).assertEqual(stackTopStartKey02.bottom)

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Bottom")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.BottomStart')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_7000 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_7100
     * @tc.name     Stack_AlignChanged_AlignBottom
     * @tc.desc      Parent component set align 'Alignment.Bottom' and alignContent 'Alignment.Bottom'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_7100', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_7100 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Bottom});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Bottom});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(50))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(50))
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(50))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(50))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(100))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(100))
      expect(stackTopStartKey.bottom).assertEqual(stackTopStartKey01.bottom)
      expect(stackTopStartKey01.bottom).assertEqual(stackTopStartKey02.bottom)

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Bottom")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Bottom')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_7100 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_7200
     * @tc.name     Stack_AlignChanged_AlignBottom
     * @tc.desc      Parent component set align 'Alignment.Bottom' and alignContent 'Alignment.BottomEnd'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_7200', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_7200 START');
      globalThis.value.message.notify({name:'align', value:Alignment.Bottom});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.BottomEnd});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(50))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(50))
      expect(stackTopStartKey.right - stackTopStartKey01.right).assertEqual(vp2px(50))
      expect(stackTopStartKey01.right - stackTopStartKey02.right).assertEqual(vp2px(50))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(100))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(100))
      expect(stackTopStartKey.bottom).assertEqual(stackTopStartKey01.bottom)
      expect(stackTopStartKey01.bottom).assertEqual(stackTopStartKey02.bottom)

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.Bottom")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.BottomEnd')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_7200 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_7300
     * @tc.name      Stack_AlignChanged_AlignBottomEnd
     * @tc.desc      Parent component set align 'Alignment.BottomEnd' and alignContent 'Alignment.TopStart'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_7300', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_7300 START');
      globalThis.value.message.notify({name:'align', value:Alignment.BottomEnd});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.TopStart});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.right).assertEqual(stackTopStartKey01.right)
      expect(stackTopStartKey01.right).assertEqual(stackTopStartKey02.right)
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(100))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(100))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(100))
      expect(stackTopStartKey.bottom).assertEqual(stackTopStartKey01.bottom)
      expect(stackTopStartKey01.bottom).assertEqual(stackTopStartKey02.bottom)

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.BottomEnd")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.TopStart')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_7300 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_7400
     * @tc.name      Stack_AlignChanged_AlignBottomEnd
     * @tc.desc      Parent component set align 'Alignment.BottomEnd' and alignContent 'Alignment.Top'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_7400', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_7400 START');
      globalThis.value.message.notify({name:'align', value:Alignment.BottomEnd});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Top});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.right).assertEqual(stackTopStartKey01.right)
      expect(stackTopStartKey01.right).assertEqual(stackTopStartKey02.right)
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(100))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(100))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(100))
      expect(stackTopStartKey.bottom).assertEqual(stackTopStartKey01.bottom)
      expect(stackTopStartKey01.bottom).assertEqual(stackTopStartKey02.bottom)

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.BottomEnd")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Top')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_7400 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_7500
     * @tc.name      Stack_AlignChanged_AlignBottomEnd
     * @tc.desc      Parent component set align 'Alignment.BottomEnd' and alignContent 'Alignment.TopEnd'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_7500', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_7500 START');
      globalThis.value.message.notify({name:'align', value:Alignment.BottomEnd});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.TopEnd});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.right).assertEqual(stackTopStartKey01.right)
      expect(stackTopStartKey01.right).assertEqual(stackTopStartKey02.right)
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(100))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(100))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(100))
      expect(stackTopStartKey.bottom).assertEqual(stackTopStartKey01.bottom)
      expect(stackTopStartKey01.bottom).assertEqual(stackTopStartKey02.bottom)

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.BottomEnd")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.TopEnd')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_7500 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_7600
     * @tc.name      Stack_AlignChanged_AlignBottomEnd
     * @tc.desc      Parent component set align 'Alignment.BottomEnd' and alignContent 'Alignment.Start'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_7600', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_7600 START');
      globalThis.value.message.notify({name:'align', value:Alignment.BottomEnd});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Start});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.right).assertEqual(stackTopStartKey01.right)
      expect(stackTopStartKey01.right).assertEqual(stackTopStartKey02.right)
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(100))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(100))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(100))
      expect(stackTopStartKey.bottom).assertEqual(stackTopStartKey01.bottom)
      expect(stackTopStartKey01.bottom).assertEqual(stackTopStartKey02.bottom)

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.BottomEnd")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Start')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_7600 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_7700
     * @tc.name      Stack_AlignChanged_AlignBottomEnd
     * @tc.desc      Parent component set align 'Alignment.BottomEnd' and alignContent 'Alignment.Center'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_7700', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_7700 START');
      globalThis.value.message.notify({name:'align', value:Alignment.BottomEnd});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Center});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.right).assertEqual(stackTopStartKey01.right)
      expect(stackTopStartKey01.right).assertEqual(stackTopStartKey02.right)
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(100))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(100))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(100))
      expect(stackTopStartKey.bottom).assertEqual(stackTopStartKey01.bottom)
      expect(stackTopStartKey01.bottom).assertEqual(stackTopStartKey02.bottom)

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.BottomEnd")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Center')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_7700 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_7800
     * @tc.name      Stack_AlignChanged_AlignBottomEnd
     * @tc.desc      Parent component set align 'Alignment.BottomEnd' and alignContent 'Alignment.End'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_7800', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_7800 START');
      globalThis.value.message.notify({name:'align', value:Alignment.BottomEnd});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.End});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.right).assertEqual(stackTopStartKey01.right)
      expect(stackTopStartKey01.right).assertEqual(stackTopStartKey02.right)
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(100))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(100))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(100))
      expect(stackTopStartKey.bottom).assertEqual(stackTopStartKey01.bottom)
      expect(stackTopStartKey01.bottom).assertEqual(stackTopStartKey02.bottom)

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.BottomEnd")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.End')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_7800 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_7900
     * @tc.name      Stack_AlignChanged_AlignBottomEnd
     * @tc.desc      Parent component set align 'Alignment.BottomEnd' and alignContent 'Alignment.BottomStart'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_7900', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_7900 START');
      globalThis.value.message.notify({name:'align', value:Alignment.BottomEnd});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.BottomStart});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.right).assertEqual(stackTopStartKey01.right)
      expect(stackTopStartKey01.right).assertEqual(stackTopStartKey02.right)
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(100))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(100))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(100))
      expect(stackTopStartKey.bottom).assertEqual(stackTopStartKey01.bottom)
      expect(stackTopStartKey01.bottom).assertEqual(stackTopStartKey02.bottom)

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.BottomEnd")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.BottomStart')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_7900 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_8000
     * @tc.name      Stack_AlignChanged_AlignBottomEnd
     * @tc.desc      Parent component set align 'Alignment.BottomEnd' and alignContent 'Alignment.Bottom'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_8000', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_8000 START');
      globalThis.value.message.notify({name:'align', value:Alignment.BottomEnd});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.Bottom});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');
      expect(stackTopStartKey.right).assertEqual(stackTopStartKey01.right)
      expect(stackTopStartKey01.right).assertEqual(stackTopStartKey02.right)
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(100))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(100))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(100))
      expect(stackTopStartKey.bottom).assertEqual(stackTopStartKey01.bottom)
      expect(stackTopStartKey01.bottom).assertEqual(stackTopStartKey02.bottom)

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.BottomEnd")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.Bottom')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_8000 END');
      done();
    });

    /**
     * @tc.number    SUB_ACE_STACK_ALIGNCHANGED_8100
     * @tc.name      Stack_AlignChanged_AlignBottomEnd
     * @tc.desc      Parent component set align 'Alignment.BottomEnd' and alignContent 'Alignment.BottomEnd'.
     */
    it('SUB_ACE_STACK_ALIGNCHANGED_8100', 0, async function (done) {
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_8100 START');
      globalThis.value.message.notify({name:'align', value:Alignment.BottomEnd});
      globalThis.value.message.notify({name:'alignContent', value:Alignment.BottomEnd});
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('stackTopStartKey');
      let obj = JSON.parse(strJson);
      let stackTopStartKey = CommonFunc.getComponentRect('stackTopStartKey');
      let stackTopStartKey01 = CommonFunc.getComponentRect('stackTopStartKey01');
      let stackTopStartKey02 = CommonFunc.getComponentRect('stackTopStartKey02');

      expect(stackTopStartKey.right).assertEqual(stackTopStartKey01.right)
      expect(stackTopStartKey01.right).assertEqual(stackTopStartKey02.right)
      expect(stackTopStartKey01.left - stackTopStartKey.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.left - stackTopStartKey01.left).assertEqual(vp2px(100))

      expect(stackTopStartKey01.top - stackTopStartKey.top).assertEqual(vp2px(100))
      expect(stackTopStartKey02.top - stackTopStartKey01.top).assertEqual(vp2px(100))
      expect(stackTopStartKey.bottom).assertEqual(stackTopStartKey01.bottom)
      expect(stackTopStartKey01.bottom).assertEqual(stackTopStartKey02.bottom)

      expect(stackTopStartKey01.right - stackTopStartKey01.left).assertEqual(vp2px(200))
      expect(stackTopStartKey01.bottom - stackTopStartKey01.top).assertEqual(vp2px(200))
      expect(stackTopStartKey02.right - stackTopStartKey02.left).assertEqual(vp2px(100))
      expect(stackTopStartKey02.bottom - stackTopStartKey02.top).assertEqual(vp2px(100))
      expect(obj.$type).assertEqual('Stack')
      expect(obj.$attrs.align).assertEqual("Alignment.BottomEnd")
      expect(obj.$attrs.alignContent).assertEqual('Alignment.BottomEnd')
      console.info('new SUB_ACE_STACK_ALIGNCHANGED_8100 END');
      done();
    });
  })
}