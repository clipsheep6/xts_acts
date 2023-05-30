// @ts-nocheck
/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
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

import SymmetricCryptographyJsunit from './SymmetricCryptography.test';
import AsymmetricCryptographyJsunit from './AsymmetricCryptography.test';
import DigestAlgorithmJsunit from './DigestAlgorithm.test';
import SecurityRandomJsunit from './SecurityRandom.test';
import SecurityRandomSyncJsunit from './SecurityRandomSync.test';
import SecuritySignAndVerifyJsunit from './SecuritySignAndVerify.test';
import SecurityKeyAgreementJsunit from './SecurityKeyAgreement.test';
import SecurityKeyGenerationAndConversionJsunit from './SecurityKeyGenerationAndConversion.test';

export default function testsuite() {
  SymmetricCryptographyJsunit();
  AsymmetricCryptographyJsunit();
  DigestAlgorithmJsunit();
  SecurityRandomJsunit();
  SecurityRandomSyncJsunit();
  SecuritySignAndVerifyJsunit();
  SecurityKeyAgreementJsunit();
  SecurityKeyGenerationAndConversionJsunit();
}