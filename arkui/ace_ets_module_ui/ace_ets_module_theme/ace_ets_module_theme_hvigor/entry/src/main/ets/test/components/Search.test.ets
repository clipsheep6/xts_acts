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
import { afterAll, beforeAll, beforeEach, describe, it, expect } from '@ohos/hypium';
import router from '@ohos.router';
import { colorValuesKey } from '../../MainAbility/pages/index/index';
import { SearchKeys, searchThemeProperty } from '../../MainAbility/pages/components/SearchPage';
import { greenCustomTheme, redCustomTheme } from '../../MainAbility/themes/CustomTheme';
import { frameTime, sleep } from '../Utils';
import { Theme, CustomTheme } from '@ohos.arkui.theme';

export default function SearchThemeTest() {
  const SUITE: string = `SearchThemeTest`;
  const emptyAttr = 'emptyAttr';

  let localTheme: CustomTheme | undefined;
  let changeTheme: boolean = false;
  let colorValues: Map<string, string> | undefined = new Map<string, string>();

  describe(SUITE, () => {
    beforeAll(async () => {
      try {
        const options: router.RouterOptions = {
          url: `pages/components/SearchPage`,
        }
        const pages: router.RouterState = router.getState();
        if (pages?.name !== `SearchPage`) {
          await router.pushUrl(options).then(() => {
            localTheme = AppStorage.get<Theme>(searchThemeProperty);
            console.info(`${SUITE} router.pushUrl success`);
          })
        }
		colorValues = AppStorage.get(colorValuesKey);
      } catch (err) {
        console.error(`${SUITE} beforeAll error:` + JSON.stringify(err));
      }
    })

    beforeEach(() => {
      if (!changeTheme) return
      if ((AppStorage.get(searchThemeProperty) as Theme)?.colors?.fontEmphasize
        == redCustomTheme?.colors?.fontEmphasize) {
        AppStorage.setOrCreate(searchThemeProperty, greenCustomTheme);
      } else {
        AppStorage.setOrCreate(searchThemeProperty, redCustomTheme);
      }
      localTheme = AppStorage.get<Theme>(searchThemeProperty);
      changeTheme = false;
    })

    afterAll(() => {
      try {
        router.back();
      } catch (err) {
        console.error(`${SUITE} afterAll error:` + JSON.stringify(err));
      }
    })
    /**
     * @tc.number    : ActsSearchThemeColors_0100
     * @tc.name      : ActsSearchThemeColors_0100
     * @tc.desc      : Check Search system colors
     * @tc.level     : Level 2
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it(`ActsSearchThemeColors_0100`, 0, () => {
      const CASE: string = `ActsSearchThemeColors_0100`;
      console.info(`${SUITE} ${CASE} START`);
      const SearchJSON: string = getInspectorByKey(SearchKeys.searchSystem);
      const attrsSearch: SearchAttribute = JSON.parse(SearchJSON)?.$attrs;

      const backgroundColor: string = attrsSearch?.backgroundColor.toString().toUpperCase();
      const checkBackgroundColor = colorValues?.get(`compBackgroundTertiary`);
      expect(backgroundColor).assertEqual(checkBackgroundColor);

      const fontColor: string = attrsSearch?.fontColor.toString().toUpperCase();
      const checkFontColor = colorValues?.get(`fontPrimary`);
      expect(fontColor).assertEqual(checkFontColor);

      const placeholderColor : string = attrsSearch?.placeholderColor.toString().toUpperCase();
      const checkPlaceholderColor = colorValues?.get(`fontSecondary`);
      expect(placeholderColor).assertEqual(checkPlaceholderColor);

      const iconOptionColor: string = (attrsSearch?.searchIcon as IconOptions)?.color?.toString().toUpperCase() ?? emptyAttr;
      const checkIconOptionColor = colorValues?.get(`fontSecondary`);
      expect(iconOptionColor).assertEqual(checkIconOptionColor);

      console.info(`${SUITE} ${CASE} END`);
    })
    /**
     * @tc.number    : ActsSearchThemeColors_0200
     * @tc.name      : ActsSearchThemeColors_0200
     * @tc.desc      : Check Search system colors
     * @tc.level     : Level 2
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it(`ActsSearchThemeColors_0200`, 0, () => {
      const CASE: string = `ActsSearchThemeColors_0200`;
      console.info(`${SUITE} ${CASE} START`);

      const SearchJSON: string = getInspectorByKey(SearchKeys.searchSystem);
      const attrsSearch: SearchAttribute = JSON.parse(SearchJSON)?.$attrs;

      const backgroundColor: string = attrsSearch?.backgroundColor.toString().toUpperCase();
      const checkBackgroundColor = localTheme?.colors?.compBackgroundTertiary;
      expect(backgroundColor).assertEqual(checkBackgroundColor);

      const fontColor: string = attrsSearch?.fontColor.toString().toUpperCase();
      const checkFontColor = localTheme?.colors?.fontPrimary;
      expect(fontColor).assertEqual(checkFontColor);

      const placeholderColor : string = attrsSearch?.placeholderColor.toString().toUpperCase();
      const checkPlaceholderColor = localTheme?.colors?.fontSecondary;
      expect(placeholderColor).assertEqual(checkPlaceholderColor);

      const iconOptionColor: string = (attrsSearch?.searchIcon as IconOptions)?.color?.toString().toUpperCase() ?? emptyAttr;
      const checkIconOptionColor = localTheme?.colors?.fontSecondary;
      expect(iconOptionColor).assertEqual(checkIconOptionColor);
      changeTheme = true;

      console.info(`${SUITE} ${CASE} END`);
    })
    /**
     * @tc.number    : ActsSearchThemeColors_0300
     * @tc.name      : ActsSearchThemeColors_0300
     * @tc.desc      : Check Search system colors
     * @tc.level     : Level 2
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it(`ActsSearchThemeColors_0300`, 0, async () => {
      const CASE: string = `ActsSearchThemeColors_0300`;
      console.info(`${SUITE} ${CASE} START`);
      await sleep(frameTime);

      const SearchJSON: string = getInspectorByKey(SearchKeys.searchSystem);
      const attrsSearch: SearchAttribute = JSON.parse(SearchJSON)?.$attrs;

      const backgroundColor: string = attrsSearch?.backgroundColor.toString().toUpperCase();
      const checkBackgroundColor = localTheme?.colors?.compBackgroundTertiary;
      expect(backgroundColor).assertEqual(checkBackgroundColor);

      const fontColor: string = attrsSearch?.fontColor.toString().toUpperCase();
      const checkFontColor = localTheme?.colors?.fontPrimary;
      expect(fontColor).assertEqual(checkFontColor);

      const placeholderColor: string = attrsSearch?.placeholderColor.toString().toUpperCase();
      const checkPlaceholderColor = localTheme?.colors?.fontSecondary;
      expect(placeholderColor).assertEqual(checkPlaceholderColor);

      const iconOptionColor: string = (attrsSearch?.searchIcon as IconOptions)?.color?.toString().toUpperCase() ?? emptyAttr;
      const checkIconOptionColor = localTheme?.colors?.fontSecondary;
      expect(iconOptionColor).assertEqual(checkIconOptionColor);
      changeTheme = true;
    })
  })
}
