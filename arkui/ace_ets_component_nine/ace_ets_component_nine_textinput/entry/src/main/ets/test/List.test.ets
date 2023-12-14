/*
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

import textInputCopyOptionTest from './component/textInputCopyOption.test'; 
import textInputMaxLinesTest from './component/textInputMaxLines.test'; 
import textInputFontFamilyTest from './component/textInputFontFamily.test'; 
import textInputPlaceholderFontTest from './component/textInputPlaceholderFont.test'; 
import textInputBarStateTest from './component/textInputBarState.test'; 
import textInputShowUnderlineTest from './component/textInputShowUnderline.test';
import textInputShowErrorTest from './component/textInputShowError.test';
import textInputCaretPositionTest from './component/textInputCaretPosition.test';
import textInputCaretStyleTest from './component/textInputCaretStyle.test';
import textInputFontColorTest from './component/textInputFontColor.test';
import textInputFontSizeTest from './component/textInputFontSize.test';
import textInputStyleTest from './component/textInputStyle.test';
import textInputFontWeightTest from './component/textInputFontWeight.test';
import textInputTypeTest from './component/textInputType.test';
import textInputPlaceholderColorTest from './component/textInputPlaceholderColor.test';
import textInputSelectedBackgroundColorTest from './component/textInputSelectedBackgroundColor.test';
import textInputTextAlignTest from './component/textInputTextAlign.test';
import textInputShowPasswordIconTest from './component/textInputShowPasswordIcon.test';
import textInputFontStyleTest from './component/textInputFontStyle.test';
import textInputEnterKeyTypeTest from './component/textInputEnterKeyType.test';
import textInputMaxLengthTest from './component/textInputMaxLength.test';
import textInputCaretColorTest from './component/textInputCaretColor.test';
import textInputPasswordIconTest from './component/textInputPasswordIcon.test';
export default function testsuite() {
  textInputCopyOptionTest();  
  textInputMaxLinesTest();  
  textInputFontFamilyTest(); 
  textInputPlaceholderFontTest(); 
  textInputBarStateTest();  
  textInputShowUnderlineTest();
  textInputShowErrorTest();
  textInputCaretPositionTest();
  textInputCaretStyleTest();
  textInputFontColorTest();
  textInputFontSizeTest();
  textInputStyleTest();
  textInputFontWeightTest();
  textInputTypeTest();
  textInputPlaceholderColorTest();
  textInputSelectedBackgroundColorTest() ;
  textInputTextAlignTest();
  textInputShowPasswordIconTest();
  textInputFontStyleTest();
  textInputEnterKeyTypeTest();
  textInputMaxLengthTest();
  textInputCaretColorTest();
  textInputPasswordIconTest();
}