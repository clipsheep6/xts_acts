import { describe, it, expect } from '@ohos/hypium';
import {
  hapDispatchStaticMethodHarTest,
  hapDispatchInstanceMethodHarTest,
  hapDynamicDispatchHarTest,
  hspDispatchStaticMethodHarTest,
  hspDispatchInstanceMethodHarTest,
  hspDynamicDispatchHarTest
} from '../../../main/ets/pages/Index';

export default function singletonObjectHarTest() {
  describe('ActSingletonObjectHarTest', async () => {
    let res = 0;
    it('hapDispatchStaticMethodHarTest', 0, async () => {
      res += 1;
      expect(hapDispatchStaticMethodHarTest()).assertContain(res);
    })

    it('hapDispatchInstanceMethodHarTest', 0, async () => {
      res += 1;
      expect(hapDispatchInstanceMethodHarTest()).assertContain(res);
    })

    it('hapDynamicDispatchHarTest', 0, async () => {
      hapDynamicDispatchHarTest().then((num)=>{
        res += 1;
        expect(num).assertContain(res);
      })
    })

    it('hspDispatchStaticMethodHarTest', 0, async () => {
      res += 1;
      expect(hspDispatchStaticMethodHarTest()).assertContain(res);
    })

    it('hspDispatchInstanceMethodHarTest', 0, async () => {
      res += 1;
      expect(hspDispatchInstanceMethodHarTest()).assertContain(res);
    })

    it('hspDynamicDispatchHarTest', 0, async () => {
      hspDynamicDispatchHarTest().then((num) => {
        res += 1;
        expect(num).assertContain(res);
      })
    })
  })
}