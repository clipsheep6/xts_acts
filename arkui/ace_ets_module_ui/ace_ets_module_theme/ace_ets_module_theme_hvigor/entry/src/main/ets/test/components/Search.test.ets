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
import { SearchKeys, searchThemeProperty } from '../../MainAbility/pages/components/SearchPage'
import { greenCustomTheme, redCustomTheme } from '../../MainAbility/themes/CustomTheme';
import { checkValue, frameTime, sleep } from '../Utils'
import { Theme, CustomTheme } from '@ohos.arkui.theme'

export default function SearchThemeTest() {
  const SUITE: string = `SearchThemeTest`

  let localTheme: CustomTheme | undefined
  let changeTheme: boolean = false

  describe(SUITE, () => {
    beforeAll(async () => {
      try {
        const options: router.RouterOptions = {
          url: `pages/components/SearchPage`,
        }
        const pages: router.RouterState = router.getState()
        if (pages?.name !== `SearchPage`) {
          await router.pushUrl(options).then(() => {
            localTheme = AppStorage.get<Theme>(searchThemeProperty)
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
      if ((AppStorage.get(searchThemeProperty) as Theme)?.colors?.fontEmphasize
        == redCustomTheme?.colors?.fontEmphasize) {
        AppStorage.setOrCreate(searchThemeProperty, greenCustomTheme)
      } else {
        AppStorage.setOrCreate(searchThemeProperty, redCustomTheme)
      }
      localTheme = AppStorage.get<Theme>(searchThemeProperty)
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
     * check system colors values of the Search
     */
    it(`ActsSearchThemeColors_0100`, 0, () => {
      const CASE: string = `ActsSearchThemeColors_0100`
      console.info(`${SUITE} ${CASE} START`)
      const SearchJSON = getInspectorByKey(SearchKeys.searchSystem)
      const attrsSearch: SearchAttribute = JSON.parse(SearchJSON)?.$attrs
      const backgroundColor: string = attrsSearch?.backgroundColor.toString()
      checkValue(backgroundColor, colorValues?.get(`compBackgroundTertiary`))
      const fontColor: ResourceColor = attrsSearch?.fontColor.toString()
      checkValue(fontColor, colorValues?.get(`fontPrimary`))
      const placeholderColor : string = attrsSearch?.placeholderColor.toString()
      checkValue(placeholderColor, colorValues?.get(`fontSecondary`))
      const iconOption : IconOptions = (attrsSearch?.searchIcon as IconOptions)
      checkValue(iconOption?.color, colorValues?.get(`iconSecondary`))
      console.info(`${SUITE} ${CASE} END`)
    })
    /**
     * check custom colors values of the Search
     */
    it(`ActsSearchThemeColors_0200`, 0, () => {
      const CASE: string = `ActsSearchThemeColors_0200`
      console.info(`${SUITE} ${CASE} START`)
      checkWithTheme(checkValue, localTheme)
      changeTheme = true
      console.info(`${SUITE} ${CASE} END`)
    })
    /**
     * check system colors values of the Search
     * after change theme
     */
    it(`ActsSearchThemeColors_0300`, 0, async () => {
      const CASE: string = `ActsSearchThemeColors_0300`
      console.info(`${SUITE} ${CASE} START`)
      await sleep(frameTime)
      checkWithTheme(checkValue, localTheme)
      changeTheme = true
      console.info(`${SUITE} ${CASE} END`)
    })
  })
}

function checkWithTheme(checkValue: Function, localTheme: CustomTheme | undefined) {
  const SearchJSON = getInspectorByKey(SearchKeys.searchWithTheme)
  const attrsSearch: SearchAttribute = JSON.parse(SearchJSON)?.$attrs
  const backgroundColor: string = attrsSearch?.backgroundColor.toString()
  checkValue(backgroundColor, localTheme?.colors?.compBackgroundTertiary)
  const fontColor: ResourceColor = attrsSearch?.fontColor.toString()
  checkValue(fontColor, localTheme?.colors?.fontPrimary)
  const placeholderColor: string = attrsSearch?.placeholderColor.toString()
  checkValue(placeholderColor, localTheme?.colors?.fontSecondary)
  const iconOption: IconOptions = (attrsSearch?.searchIcon as IconOptions)
  checkValue(iconOption?.color, localTheme?.colors?.iconSecondary)
}