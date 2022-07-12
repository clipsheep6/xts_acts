/*
 * Copyright (c) 2022 Shenzhen Kaihong Digital Industry Development Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _ACTSAPP_HPP
#define _ACTSAPP_HPP

#include "tcuDefs.hpp"
#include "qpWatchDog.h"
#include "qpCrashHandler.h"
#include "deMutex.hpp"

namespace tcu {
class Archive;
class Platform;
class TestContext;
class TestSessionExecutor;
class CommandLine;
class TestLog;
class TestPackageRoot;
class TestRunStatus;

enum EWATCHDOG {
    WATCHDOG_TOTAL_TIME_LIMIT_SECS    = 300,
    WATCHDOG_INTERVAL_TIME_LIMIT_SECS    = 30
};

class ActsApp {
public:
    ActsApp (Platform& platform, Archive& archive, TestLog& log, const CommandLine& cmdLine);
    virtual ~ActsApp (void);

    bool iterate (void);
    const TestRunStatus& getResult (void) const;

protected:
    void cleanup (void);

    void onWatchdogTimeout (qpTimeoutReason reason);
    void onCrash (void);

    static void onWatchdogTimeout (qpWatchDog* watchDog, void* userPtr, qpTimeoutReason reason);
    static void onCrash (qpCrashHandler* crashHandler, void* userPtr);

    Platform& m_platform;
    qpWatchDog* m_watchDog;
    qpCrashHandler* m_crashHandler;
    de::Mutex m_crashLock;
    bool m_crashed;

    TestContext* m_testCtx;
    TestPackageRoot* m_testRoot;
    TestSessionExecutor* m_testExecutor;
};
} // tcu
#endif // _ACTSAPP_HPP