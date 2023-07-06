#include "hctest.h"

#include "securec.h"
#include "cmsis_os2.h"
#include "ohos_types.h"

#include <unistd.h>

#define TEST_TASK_STACK_SIZE      0x2000
#define WAIT_TO_TEST_DONE         4

static void TestOsThread(void const *argument)
{
    LiteTestPrint("TestOsThread");
    osThreadExit();
}

LITE_TEST_SUIT(security, test_hc_test_framework, TestHcTestFramework);
static BOOL TestHcTestFrameworkSetUp()
{
    LiteTestPrint("TestHcTestFrameworkSetUp");
    osThreadAttr_t attr;
    attr.name = "TestHcTestFramework";
    attr.attr_bits = 0U;
    attr.cb_mem = NULL;
    attr.cb_size = 0U;
    attr.stack_mem = NULL;
    attr.stack_size = TEST_TASK_STACK_SIZE;
    attr.priority = osPriorityAboveNormal6;
    osThreadId_t id = osThreadNew(TestOsThread, NULL, &attr);
    sleep(WAIT_TO_TEST_DONE);
    LiteTestPrint("TestHcTestFrameworkSetUp");

    return TRUE;
}
static BOOL TestHcTestFrameworkTearDown()
{
    LiteTestPrint("TestHcTestFrameworkTearDown");
    return TRUE;
}
LITE_TEST_CASE(TestHcTestFramework, TestHcTestFramework001, Level1)
{
    LiteTestPrint("TestHcTestFramework001");
    osThreadAttr_t attr;
    attr.name = "TestHcTestFramework";
    attr.attr_bits = 0U;
    attr.cb_mem = NULL;
    attr.cb_size = 0U;
    attr.stack_mem = NULL;
    attr.stack_size = TEST_TASK_STACK_SIZE;
    attr.priority = osPriorityAboveNormal6;
    osThreadId_t id = osThreadNew(TestOsThread, NULL, &attr);
    sleep(WAIT_TO_TEST_DONE);
    LiteTestPrint("TestHcTestFramework001");
}
RUN_TEST_SUITE(TestHcTestFramework);
