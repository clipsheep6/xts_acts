// Copyright (C) 2021 Huawei Device Co., Ltd.
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

export const OTHER_ABNORMAL = -2;
export const OPERATOR_NUM_LENGTH = 5;
export const OTHER_ERRORS = -2;
export const GET_SIM_STATATE_CHANGE = 'simStateChange';
export const CARD_NAME_ZERO = 'Card0';

export const GET_SIM_TELEPHONE_Number = 14;
export const timesValue = {
  TIME_SPAN : 5,
  TEST_RUN_TIME : 10
};

export const simSlotId = {
  SLOT_ID_0 : 0,
  SLOT_ID_1 : 1,
  SLOT_ID_2 : 2,
  SLOT_ID_3 : 3,
  SLOT_ID_4 : 4
};
export const typeAndIndex = {
  TYPE_0 : 0,
  TYPE_1 : 1,
  TYPE_2 : 2,
  TYPE_4 : 4,
  INDEX_0 : 0,
  INDEX_1 : 1
};
export const cardName = {
  CARDNAMENULL : '',
  CARDNAME : '1234',
  CARDNUMBER : '1234',
  inputName : '012345678901234567890123456789qQ@',
  inputNULLName : null,
  pinNUMBER : '123',
  pinNUMBERFOUR : '4321',
  pinNUMBERNINE:'123456789',
  NEWPIN:'1234',
  NEWPINTHREE:'123',
  NEWPINNINE:'123456789',
  PUK:'123',
  PUKNINE:'123456789',
  PUKERR:'12345678',
  PUKRESERVE:'87654321',
  OLDPIN:'1234',
  OLDPINNINE:'123456789'
};

export const lockSwitch = {
  CLOSE : 0,
  OPEN : 1
};

export const remainValue = {
  REMAIN_0 : 0,
  REMAIN_1 : 1,
  REMAIN_2 : 2,
  REMAIN_3 : 3,
  REMAIN_4 : 4,
  REMAIN_5 : 5,
  REMAIN_6 : 6,
  REMAIN_7 : 7,
  REMAIN_8 : 8,
  REMAIN_9 : 9,
  REMAIN_10 : 10
};

export const SIM_SET_STATE = 20000003;
export const HRIL_SIM_NOT_READY = -1; // 状态设置为未准备
export const HRIL_SIM_NOT_INSERTED = 0; // 状态为未插卡
export const HRIL_SIM_READY = 1; // 状态为准备好了
