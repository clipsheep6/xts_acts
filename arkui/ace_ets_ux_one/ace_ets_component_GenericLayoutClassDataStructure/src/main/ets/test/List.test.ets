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

import border_width from './border_width.test'
import border_color from './border_color.test'
import border_radius from './border_radius.test'
import borderWidth from './borderWidth.test'
import borderRadius from './borderRadius.test'
import borderColor from './borderColor.test'
import margin from './margin.test'
import outlineColor from './outlineColor.test'
import outline_color from './outline_color.test'
import padding from './padding.test'

export default function testsuite() {
  borderWidth()
  borderColor()
  borderRadius()
  outlineColor()
  margin()
  padding()
  border_width()
  border_color()
  border_radius()
  outline_color()
}