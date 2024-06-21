/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License")
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
import { afterAll, beforeAll, beforeEach, describe, it } from '@ohos/hypium'
import router from '@ohos.router'
import { colorValuesKey } from '../../MainAbility/pages/index/index';
import { sliderThemeProperty } from '../../MainAbility/pages/components/SliderPage'
import { greenCustomTheme, redCustomTheme } from '../../MainAbility/themes/CustomTheme'
import { checkValue, frameTime, sleep } from '../Utils'
import { Theme, CustomTheme } from '@ohos.arkui.theme'

export default function sliderThemeTest() {
  const SUITE: string = `SliderThemeTest`

  const sliderKeys: string [] = [
    `Slider_Out_Set_System`,
    `Slider_In_Set_System`,
    `Slider_Out_Set_Steps_System`,
    `Slider_In_Set_Steps_System`,
    `Slider_Out_Set_WithTheme`,
    `Slider_In_Set_WithTheme`,
    `Slider_Out_Set_Steps_WithTheme`,
    `Slider_In_Set_Steps_WithTheme`
  ]
  let localTheme: CustomTheme | undefined
  let changeTheme: boolean = false

  describe(SUITE, () => {
    beforeAll(async () => {
      try {
        const options: router.RouterOptions = {
          url: `pages/components/SliderPage`,
        }
        const pages: router.RouterState = router.getState()
        if (pages?.name !== `SliderPage`) {
          await router.pushUrl(options).then(() => {
            localTheme = AppStorage.get<Theme>(sliderThemeProperty)
            console.info(`${SUITE} router.pushUrl success`)
          })
        }
		colorValues = AppStorage.get(colorValuesKey);
      } catch (err) {
        console.error(`${SUITE} beforeAll error:` + JSON.stringify(err))
      }
    })

    beforeEach(() => {
      if (!changeTheme) return
      if ((AppStorage.get(sliderThemeProperty) as Theme)?.colors?.fontEmphasize
        == redCustomTheme?.colors?.fontEmphasize) {
        AppStorage.setOrCreate(sliderThemeProperty, greenCustomTheme)
      } else {
        AppStorage.setOrCreate(sliderThemeProperty, redCustomTheme)
      }
      localTheme = AppStorage.get<Theme>(sliderThemeProperty)
      changeTheme = false
    })

    afterAll(() => {
      try {
        router.back()
      } catch (err) {
        console.error(`${SUITE} afterAll error:` + JSON.stringify(err))
      }
    })
    /**
     * check system colors values of the Slider
     */
    it(`ActsSliderThemeColors_0100`, 0, () => {
      const CASE: string = `ActsSliderThemeColors_0100`
      console.info(`${SUITE} ${CASE} START`)
      sliderKeys.forEach((key) => {
        if (key.search(`WithTheme`) > 0) return
        const sliderJSON = getInspectorByKey(key)
        const attrsSlider: SliderAttribute = JSON.parse(sliderJSON)?.$attrs
        const trackColor: string = attrsSlider?.trackColor.toString()
        checkValue(trackColor, colorValues?.get(`compBackgroundSecondary`))
        const selectedColor: ResourceColor = attrsSlider?.selectedColor.toString()
        checkValue(selectedColor, colorValues?.get(`backgroundEmphasize`))
        const blockColor: string = attrsSlider?.blockColor.toString()
        checkValue(blockColor, colorValues?.get(`compBackgroundPrimaryContrary`))
        const stepColor: string = attrsSlider?.stepColor.toString()
        checkValue(stepColor, colorValues?.get(`compBackgroundSecondary`))
      })
      console.info(`${SUITE} ${CASE} END`)
    })
    /**
     * check custom colors values of the Slider
     */
    it(`ActsSliderThemeColors_0200`, 0, () => {
      const CASE: string = `ActsSliderThemeColors_0200`
      console.info(`${SUITE} ${CASE} START`)
      checkWithTheme(checkValue, localTheme, sliderKeys)
      changeTheme = true
      console.info(`${SUITE} ${CASE} END`)
    })
    /**
     * check system colors values of the Slider
     * after change theme
     */
    it(`ActsSliderThemeColors_0300`, 0, async () => {
      const CASE: string = `ActsSliderThemeColors_0300`
      console.info(`${SUITE} ${CASE} START`)
      await sleep(frameTime)
      checkWithTheme(checkValue, localTheme, sliderKeys)
      changeTheme = true
      console.info(`${SUITE} ${CASE} END`)
    })
  })
}

function checkWithTheme(checkValue: Function, localTheme: CustomTheme | undefined, sliderKeys: string[]) {
  sliderKeys.forEach((key) => {
    if (key.search(`System`) > 0) return
    const sliderJSON = getInspectorByKey(key)
    const attrsSlider: SliderAttribute = JSON.parse(sliderJSON)?.$attrs
    const trackColor: string = attrsSlider?.trackColor.toString()
    checkValue(trackColor, localTheme?.colors?.compBackgroundSecondary)
    const selectedColor: ResourceColor = attrsSlider?.selectedColor.toString()
    checkValue(selectedColor, localTheme?.colors?.backgroundEmphasize)
    const blockColor: string = attrsSlider?.blockColor.toString()
    checkValue(blockColor, localTheme?.colors?.compBackgroundPrimaryContrary)
    const stepColor: string = attrsSlider?.stepColor.toString()
    checkValue(stepColor, localTheme?.colors?.compBackgroundSecondary)
  })
}