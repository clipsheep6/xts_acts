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
#include <cstdarg>
#include <ctime>
#include <gtest/gtest.h>
#include <pthread.h>

#include "hitrace/hitrace.h"
#include "hitrace/hitraceid.h"
#include "hitrace/trace.h"
#include "hilog/log_c.h"
#include "hilog/log_cpp.h"
#include "hisysevent.h"
#include "file_utils.h"

using namespace OHOS;
using namespace HiviewDFX;
using namespace testing;
using namespace testing::ext;
using namespace std;

namespace {
long g_serchainId;
long g_serspanId;
static HiLogLabel LABEL = {LOG_CORE, 0xD002D00, "HITRACETEST"};
string g_key = "key";
string g_reDiRectTimeout = "5";
string g_hiLogRedirect = "/data/local/tmp/hilogredirect.log";
}

class HitraceCPPtest : public testing::Test {
public:

    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();

private:
};
void HitraceCPPtest::SetUp()
{
    std::vector<std::string> cmdret;
    string cmd = "hilog -r";
    ExecCmdWithRet(cmd, cmdret);
}
void HitraceCPPtest::TearDown()
{
}
void HitraceCPPtest::SetUpTestCase()
{
}
void HitraceCPPtest::TearDownTestCase()
{
}
void *Thread1(void *ptr) {
    HiLog::Debug(LABEL, "new thread come!");
    HiTraceId threadId = HiTrace::GetId();
    g_serchainId  = threadId.GetChainId();
    g_serspanId = threadId.GetSpanId();
    HiLog::Debug(LABEL, "g_serchainId:%{public}ld", g_serchainId);
    HiLog::Debug(LABEL, "g_serspanId:%{public}ld", g_serspanId);

    HiLog::Debug(LABEL, "new thread end!");
    return nullptr;
}
/**
 * @tc.name HiTrace C++ interface test
 * @tc.number DFX_DFT_HiTrace_0001
 * @tc.desc HiTrace C++ interface test
 */
HWTEST_F(HitraceCPPtest, Hitrace_interface, Function|MediumTest|Level1)
{
    GTEST_LOG_(INFO) << "Hitrace_interface start" << endl;
    HiTraceFlag hitraceflag = HITRACE_FLAG_INCLUDE_ASYNC;
    HiTraceId hiTraceId = HiTrace::Begin("test", HITRACE_FLAG_INCLUDE_ASYNC);
    HiTrace::SetId(hiTraceId);
    hiTraceId = HiTrace::GetId();
    ASSERT_TRUE(hiTraceId.IsValid());

    hiTraceId.EnableFlag(hitraceflag);
    ASSERT_TRUE(hiTraceId.IsFlagEnabled(hitraceflag));

    int hitraceflags = HITRACE_FLAG_FAULT_TRIGGER;
    hiTraceId.SetFlags(hitraceflags);
    hitraceflags = hiTraceId.GetFlags();
    ASSERT_TRUE(hitraceflags == HITRACE_FLAG_FAULT_TRIGGER);

    uint64_t chainId = 10000;
    hiTraceId.SetChainId(chainId);
    chainId = hiTraceId.GetChainId();
    ASSERT_TRUE(chainId == 10000);

    uint64_t spanId = 12345678;
    hiTraceId.SetSpanId(spanId);
    spanId = hiTraceId.GetSpanId();
    ASSERT_TRUE(spanId == 12345678);

    HiTraceId childId = HiTrace::CreateSpan();
    EXPECT_EQ(1, childId.IsValid());

    /* set child id to thread id */
    HiTrace::SetId(childId);
    /* continue to create child span */
    HiTraceId grandChildId = HiTrace::CreateSpan();
    EXPECT_EQ(1, grandChildId.IsValid());
    EXPECT_EQ(grandChildId.GetFlags(), childId.GetFlags());
    EXPECT_EQ(grandChildId.GetChainId(), childId.GetChainId());
    EXPECT_EQ(grandChildId.GetParentSpanId(), childId.GetSpanId());

    grandChildId.SetChainId(chainId);
    chainId = grandChildId.GetChainId();
    ASSERT_TRUE(chainId == 10000);

    grandChildId.SetSpanId(spanId);
    spanId = grandChildId.GetSpanId();
    ASSERT_TRUE(spanId == 12345678);
    HiTrace::ClearId();
    HiTraceId clearId = HiTrace::GetId();
    EXPECT_EQ(0, clearId.IsValid());
    HiTrace::End(hiTraceId);
    GTEST_LOG_(INFO) << "Hitrace_interface end" << endl;
}

/**
 * @tc.name HiTrace C++ Begin interface, invalid flag
 * @tc.number DFX_DFT_HiTrace_0001
 * @tc.desc HiTrace C++ interface test
 */
HWTEST_F(HitraceCPPtest, Hitrace_interface1, Function|MediumTest|Level1)
{
    GTEST_LOG_(INFO) << "Hitrace_interface1 start" << endl;
    /* begin with invalid flag */
    HiTraceId invalidFlagId = HiTrace::Begin("invalid param", HITRACE_FLAG_MAX+1);
    EXPECT_EQ(0, invalidFlagId.IsValid());
    HiTrace::End(invalidFlagId);

    invalidFlagId = HiTrace::Begin("invalid param", -1);
    EXPECT_EQ(0, invalidFlagId.IsValid());
    HiTrace::End(invalidFlagId);
    GTEST_LOG_(INFO) << "Hitrace_interface1 end" << endl;
}
/**
 * @tc.name HiTrace C++ Begin interface, invalid name
 * @tc.number DFX_DFT_HiTrace_0001
 * @tc.desc HiTrace C++ interface test
 */
HWTEST_F(HitraceCPPtest, Hitrace_interface2, Function|MediumTest|Level1)
{
    GTEST_LOG_(INFO) << "Hitrace_interface2 start" << endl;
    /* begin with invalid name */
    HiTraceId invalidNameId = HiTrace::Begin("", HITRACE_FLAG_TP_INFO);
    EXPECT_EQ(1, invalidNameId.IsValid());
    HiTrace::End(invalidNameId);
    GTEST_LOG_(INFO) << "Hitrace_interface2 end" << endl;
}
/**
 * @tc.name HiTrace C++ Begin interface, long name
 * @tc.number DFX_DFT_HiTrace_0001
 * @tc.desc HiTrace C++ interface test
 */
HWTEST_F(HitraceCPPtest, Hitrace_interface3, Function|MediumTest|Level1)
{
    GTEST_LOG_(INFO) << "Hitrace_interface3 start" << endl;
    std::string name = "test";
    for (int i = 0; i < 1000; i++) {
        name += "test";
    }
    HiTraceId traceId = HiTrace::Begin(name, HITRACE_FLAG_TP_INFO);
    EXPECT_EQ(1, traceId.IsValid());
    HiTrace::End(traceId);
    GTEST_LOG_(INFO) << "Hitrace_interface3 end" << endl;
}
/**
 * @tc.name 重复调用Begin interface
 * @tc.number DFX_DFT_HiTrace_0001
 * @tc.desc HiTrace C++ interface test
 */
HWTEST_F(HitraceCPPtest, Hitrace_interface4, Function|MediumTest|Level1)
{
    GTEST_LOG_(INFO) << "Hitrace_interface4 start" << endl;
    HiTraceId traceId = HiTrace::Begin("test", HITRACE_FLAG_TP_INFO);
    HiTraceId traceId1 = HiTrace::Begin("test1", HITRACE_FLAG_TP_INFO);
    EXPECT_EQ(1, traceId.IsValid());
    EXPECT_EQ(0, traceId1.IsValid());
    HiTrace::End(traceId);
    HiTrace::End(traceId1);
    GTEST_LOG_(INFO) << "Hitrace_interface4 end" << endl;
}
/**
 * @tc.name End invalid traceid
 * @tc.number DFX_DFT_HiTrace_0001
 * @tc.desc HiTrace C++ interface test
 */
HWTEST_F(HitraceCPPtest, Hitrace_interface5, Function|MediumTest|Level1)
{
    GTEST_LOG_(INFO) << "Hitrace_interface5 start" << endl;
    HiTraceId traceId = HiTrace::Begin("test", HITRACE_FLAG_TP_INFO);
    EXPECT_EQ(1, traceId.IsValid());
    HiTraceId invalidId;
    invalidId.SetChainId(1000);
    invalidId.SetSpanId(1000);
    HiTrace::End(invalidId);
    HiTraceId wrongEndId = HiTrace::GetId();
    EXPECT_EQ(1, wrongEndId.IsValid());
    ASSERT_TRUE(wrongEndId.GetChainId() == traceId.GetChainId());
    EXPECT_EQ(1, wrongEndId.IsFlagEnabled(HITRACE_FLAG_TP_INFO));
    HiTrace::End(traceId);
    GTEST_LOG_(INFO) << "Hitrace_interface5 end" << endl;
}
/**s
 * @tc.name 结束一个已经结束的id
 * @tc.number DFX_DFT_HiTrace_0001
 * @tc.desc HiTrace C++ interface test
 */
HWTEST_F(HitraceCPPtest, Hitrace_interface6, Function|MediumTest|Level1)
{
    GTEST_LOG_(INFO) << "Hitrace_interface6 start" << endl;
    HiTraceId traceId = HiTrace::Begin("invalid param1", HITRACE_FLAG_TP_INFO);
    EXPECT_EQ(1, traceId.IsValid());
    HiTrace::End(traceId);
    traceId = HiTrace::GetId();
    EXPECT_EQ(0, traceId.IsValid());
    HiTrace::End(traceId);
    traceId = HiTrace::GetId();
    EXPECT_EQ(0, traceId.IsValid());
    GTEST_LOG_(INFO) << "Hitrace_interface6 end" << endl;
}
/*
 * @tc.name Hitrace start new process test
 * @tc.number DFX_DFT_HiTrace_0002
 * @tc.desc Hitrace start new process test, The traceid of the process is the same
 */
HWTEST_F(HitraceCPPtest, Hitrace_cpptest, Function|MediumTest|Level1)
{
    GTEST_LOG_(INFO) << "Hitrace_cpptest start" << endl;
    HiTraceId traceId = HiTrace::Begin("test2", HITRACE_FLAG_TP_INFO);
    ASSERT_TRUE(traceId.IsValid());
    long clichainId  = traceId.GetChainId();
    long clispanId = traceId.GetSpanId();
    pid_t pid;
    pid = fork();
    switch (pid) {
        case -1:
            std::cout<<"fork pid failed"<<std::endl;
            break;
        case 0:
            std::cout<<"new process come!"<<std::endl;
            HiLog::Debug(LABEL, "new process come!");
            HiTraceId processId = HiTrace::GetId();
            g_serchainId  = processId.GetChainId();
            g_serspanId = processId.GetSpanId();
            HiLog::Debug(LABEL, "g_serchainId:%{public}ld", g_serchainId);
            HiLog::Debug(LABEL, "g_serspanId:%{public}ld", g_serspanId);
            break;
    }
    HiLog::Debug(LABEL, "clichainId:%{public}ld",clichainId);
    HiLog::Debug(LABEL, "clispanId:%{public}ld",clispanId);
    sleep(1);
    HiTrace::End(traceId);
    EXPECT_EQ(clichainId, g_serchainId);
    EXPECT_EQ(clispanId, g_serspanId);
    GTEST_LOG_(INFO) << "Hitrace_cpptest end" << endl;
}
/*
 * @tc.name Hitrace start new thread test
 * @tc.number DFX_DFT_HiTrace_0003
 * @tc.desc Hitrace start new thread test
 */
HWTEST_F(HitraceCPPtest, Hitrace_cpptest1, Function|MediumTest|Level1)
{
    GTEST_LOG_(INFO) << "Hitrace_cpptest1 start" << endl;
    HiTraceId traceId = HiTrace::Begin("test3", HITRACE_FLAG_TP_INFO);
    ASSERT_TRUE(traceId.IsValid());
    long clichainId  = traceId.GetChainId();
    long clispanId = traceId.GetSpanId();
    HiLog::Debug(LABEL, "clichainId:%{public}ld",clichainId);
    HiLog::Debug(LABEL, "clispanId:%{public}ld",clispanId);
    pthread_t thread;
    int ret;
    ret = pthread_create(&thread, nullptr, Thread1, nullptr);
    if (ret != 0) {
        printf("thread creat fail");
        ASSERT_TRUE(false);
    }
    sleep(2);
    HiTrace::End(traceId);
    EXPECT_EQ(clichainId, g_serchainId);
    EXPECT_EQ(clispanId, g_serspanId);
    GTEST_LOG_(INFO) << "Hitrace_cpptest1 end" << endl;
}

/**
 * @tc.name HiTrace C++ interface test
 * @tc.number DFX_DFT_HiTrace_0004
 * @tc.desc HiTrace C++ interface test
 */
HWTEST_F(HitraceCPPtest, Hitrace_report, Function|MediumTest|Level1)
{
    GTEST_LOG_(INFO) << "Hitrace_report start" << endl;
    bool result = false;
    HiTraceId hiTraceId = HiTrace::Begin("test4", HITRACE_FLAG_TP_INFO);
    HiTrace::SetId(hiTraceId);
    hiTraceId = HiTrace::GetId();
    ASSERT_TRUE(hiTraceId.IsValid());
    if (hiTraceId.IsValid())
    {
        int param = 100;
        string domain = OHOS::HiviewDFX::HiSysEvent::Domain::STARTUP;
        OHOS::HiviewDFX::HiSysEvent::EventType eventtype = OHOS::HiviewDFX::HiSysEvent::EventType::FAULT;
        OHOS::HiviewDFX::HiSysEvent::Write(domain, "eventNameDemo", eventtype, g_key, param);

        RedirecthiLog(g_hiLogRedirect, g_reDiRectTimeout);
        string fileinfo = "";
        fileinfo = ReadFile(g_hiLogRedirect);
        std::vector<std::string> para = {"STARTUP", "eventNameDemo", "\"event_type_\":1", "\"key\":100","HiTraceID"};
        if (fileinfo != "") {
            result = CheckInfo(para, fileinfo);
        } else {
            std::cout << "DFX_DFT_HiTrace_0004 file error" << std::endl;
        }
        ASSERT_TRUE(result);
    } else {
        printf("hiTraceId invalid");
        ASSERT_TRUE(false);
    }
    HiTrace::End(hiTraceId);
    GTEST_LOG_(INFO) << "Hitrace_report end" << endl;
}

/**
 * @tc.name HiTrace C++ interface test
 * @tc.number DFX_DFT_HiTrace_0005
 * @tc.desc HiTrace C++ interface test
 */
HWTEST_F(HitraceCPPtest, Hitrace_report1, Function|MediumTest|Level1)
{
    GTEST_LOG_(INFO) << "Hitrace_report1 start" << endl;
    bool result = false;
    HiTraceId hiTraceId = HiTrace::Begin("test5", HITRACE_FLAG_TP_INFO);
    HiTrace::SetId(hiTraceId);
    hiTraceId = HiTrace::GetId();
    ASSERT_TRUE(hiTraceId.IsValid());
    if (hiTraceId.IsValid())
    {
        int param = 100;
        string domain = "test";
        OHOS::HiviewDFX::HiSysEvent::EventType eventtype = OHOS::HiviewDFX::HiSysEvent::EventType::FAULT;
        OHOS::HiviewDFX::HiSysEvent::Write(domain, "eventNameDemo1", eventtype, g_key, param);

        RedirecthiLog(g_hiLogRedirect, g_reDiRectTimeout);
        string fileinfo = "";
        fileinfo = ReadFile(g_hiLogRedirect);
        std::vector<std::string> para = {"STARTUP", "eventNameDemo1", "\"event_type_\":1", "\"key\":100","HiTraceID"};
        if (fileinfo != "") {
            result = CheckInfo(para, fileinfo);
        } else {
            std::cout << "Hitrace_report1 file error" << std::endl;
        }
        ASSERT_TRUE(result == false);
    } else {
        printf("hiTraceId invalid");
        ASSERT_TRUE(false);
    }
    HiTrace::End(hiTraceId);
    GTEST_LOG_(INFO) << "Hitrace_report1 end" << endl;
}
/**
 * @tc.name HiTrace C++ interface test
 * @tc.number DFX_DFT_HiTrace_0006
 * @tc.desc HiTrace C++ interface test
 */
HWTEST_F(HitraceCPPtest, Hitrace_report2, Function|MediumTest|Level1)
{
    GTEST_LOG_(INFO) << "Hitrace_report2 start" << endl;
    bool result = false;
    HiTraceId hiTraceId = HiTrace::Begin("test6", HITRACE_FLAG_TP_INFO);
    HiTrace::SetId(hiTraceId);
    hiTraceId = HiTrace::GetId();
    ASSERT_TRUE(hiTraceId.IsValid());
    if (hiTraceId.IsValid())
    {
        string domain = OHOS::HiviewDFX::HiSysEvent::Domain::STARTUP;
        OHOS::HiviewDFX::HiSysEvent::EventType eventtype = OHOS::HiviewDFX::HiSysEvent::EventType::FAULT;
        OHOS::HiviewDFX::HiSysEvent::Write(domain, "eventNameDemo2", eventtype);
        RedirecthiLog(g_hiLogRedirect, g_reDiRectTimeout);
        string fileinfo = "";
        fileinfo = ReadFile(g_hiLogRedirect);
        std::vector<std::string> para = {"STARTUP", "eventNameDemo2", "\"event_type_\":1","HiTraceID"};
        if (fileinfo != "") {
            result = CheckInfo(para, fileinfo);
        } else {
            std::cout << "Hitrace_report2 file error" << std::endl;
        }
        ASSERT_TRUE(result);
    } else {
        printf("hiTraceId invalid");
        ASSERT_TRUE(false);
    }
    HiTrace::End(hiTraceId);
    GTEST_LOG_(INFO) << "Hitrace_report2 end" << endl;
}