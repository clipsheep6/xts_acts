/**
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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

export const CARD_NAME = {
  cardNameNull: '',
  cardName: '1234',
  cardNameYouXiao: '123@#ABCD',
  cardNameYouXiaoLong: '01234567890123456789_测@#$%ABCDE',
  nameYouXiao: '1',
  cardNumber: '1234',
  inputName: '012345678901234567890123456789qQ@',
  inputNullName: null,
  pinNumber: '123',
  pinNumberFour: '4321',
  pinNumberNine: '123456789',
  newPin: '1234',
  newPinThree: '123',
  newPinNine: '123456789',
  puk: '123',
  pukNine: '123456789',
  pukErr: '12345678',
  pukReserve: '87654321',
  oldPin: '1234',
  oldPinNine: '123456789'
};

// slot id
export const SLOTID0 = 0;
export const SLOTID_MINUS1 = -1;

// icc dialling number type
export const NUM_TYPE1 = 1;

// voice mail
export const MAIL_NAME_LEN12 = '123#@%_ABCDE';
export const MAIL_NUMBER_LEN20 = '01234567890123456789';

// sim correct password
export const CORRECT_PIN = '';
export const CORRECT_PIN2 = '';

// lock status response
export const LOCK_RESULT = { SUCCESS: 0, FAILURE: -1, EXCEPTION: -2 };

// stk cmd
export const STK_TERMINAL_CMD = '81030125000202828';
export const STK_ENVELOPE_CMD = 'D30781020181900101';

// Correct network PIN and PIN2 password
export const SIM_PN_PIN_PASSWORD = '1111';