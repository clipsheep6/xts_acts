/**
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * slot id
 */
export const DEFAULT_SLOTID = 0;
export const SLOTID3 = 3;
export const SLOTID2 = 2;
export const SLOTID_MINUS1 = -1;

/**
 * Correct network PIN and PIN2 password
 */
export const SIM_PN_PIN_PASSWORD = '1111';
export const SIM_PN_PUK_PASSWORD = '1112';
export const SIM_PU_PIN_PASSWORD = '1113';
export const SIM_PU_PUK_PASSWORD = '1114';
export const SIM_PP_PIN_PASSWORD = '1115';
export const SIM_PP_PUK_PASSWORD = '1116';
export const SIM_PC_PIN_PASSWORD = '1117';
export const SIM_PC_PUK_PASSWORD = '1118';
export const SIM_SIM_PIN_PASSWORD = '1119';
export const SIM_SIM_PUK_PASSWORD = '1120';

/**
 * Incorrect network PIN and PIN2 password
 */
export const INCORRECT_NET_PASSWORD = '8888';
export const INCORRECT_NET_PASSWORD_LEN3 = '123';
export const INCORRECT_NET_PASSWORD_LEN9 = '123@#_ Aq';

/**
 * Lock respone state code
 */
export const LOCK_STATE_CODE = { SUCCESS: 0, FAILURE: -1, EXCEPTION: -2 };

/**
 * Loop run times
 */
export const PIN_LOOP_RUN_TIMES = 4;
export const PUK_LOOP_RUN_TIMES = 10;