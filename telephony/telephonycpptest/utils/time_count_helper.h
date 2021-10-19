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

#ifndef TIME_COUNT_HELPER_H
#define TIME_COUNT_HELPER_H

#include <sys/time.h>

class TimeCountHelper {
public:
    TimeCountHelper();
    ~TimeCountHelper() = default;

public:
    void StartCountUs();
    void EndCountUs();
    int GetUseTimeUs();
    void initTime();

private:
    const int USEC_PER_SEC = 1000000;
    struct timeval startTimeStampUs_;
    struct timeval endTimeStampUs_;
};

TimeCountHelper::TimeCountHelper()
{
    initTime();
}

void TimeCountHelper::StartCountUs()
{
    gettimeofday(&startTimeStampUs_, NULL);
}

void TimeCountHelper::EndCountUs()
{
    gettimeofday(&endTimeStampUs_, NULL);
}

int TimeCountHelper::GetUseTimeUs()
{
    if (endTimeStampUs_.tv_sec == 0 && endTimeStampUs_.tv_usec == 0) {
        EndCountUs();
    }
    if (startTimeStampUs_.tv_sec == 0 && startTimeStampUs_.tv_usec == 0) {
        return 0;
    }
    return USEC_PER_SEC * (endTimeStampUs_.tv_sec - startTimeStampUs_.tv_sec) + endTimeStampUs_.tv_usec -
           startTimeStampUs_.tv_usec;
}

void TimeCountHelper::initTime()
{
    startTimeStampUs_.tv_sec = 0;
    startTimeStampUs_.tv_usec = 0;
    endTimeStampUs_.tv_sec = 0;
    endTimeStampUs_.tv_usec = 0;
}

#endif