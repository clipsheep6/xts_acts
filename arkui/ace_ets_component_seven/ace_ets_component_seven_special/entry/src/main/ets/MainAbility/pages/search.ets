/**
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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

class SearchModifier1 implements AttributeModifier<SearchAttribute> {
  applyNormalAttribute(instance: SearchAttribute): void {
    instance.height("30px")
  }
}

@Entry
@Component
struct SearchModifier7Example {
  @State searchModifier1: SearchModifier1 = new SearchModifier1()
  @State changeValue: string = ''
  @State submitValue: string = ''
  controller: SearchController = new SearchController()

  build() {
    Column() {
      Search({ value: this.changeValue, placeholder: 'Type to search...', controller: this.controller })
        .key('searchtest')
        .attributeModifier(this.searchModifier1)
    }
    .width('100%')
    .height('100%')
  }
}
