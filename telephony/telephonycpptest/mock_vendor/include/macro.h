
/*
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

#ifndef OHOS_TELEPHONY_MACRO_H
#define OHOS_TELEPHONY_MACRO_H

#include <securec.h>
#include "vendor_report.h"

#define CLEAR_AND_COPY_FROM_CLEAN_BUFFER(dst, src) strncpy_s(dst, sizeof(dst), src, strlen(src))

#define CLEAR_AND_COPY_FROM_DIRTY_BUFFER(dst, src, src_len) strncpy_s(dst, sizeof(dst), src, src_len)

#define INIT_STRING_BUFF(dst, ch, size) memset_s(dst, size, ch, size)

#endif // OHOS_TELEPHONY_MACRO_H