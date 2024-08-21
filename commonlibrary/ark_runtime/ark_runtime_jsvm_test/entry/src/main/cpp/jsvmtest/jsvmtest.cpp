#ifndef OHOS_JSVM_HAP
#include "jsvmtest.h"
std::vector<TestRunner *> TestRunner::testVec;
std::unordered_map<std::string, TestRunner *> TestRunner::testMap;
#ifdef OHOS_JSVM_XTS
bool TestRunner::g_init = true;
#else
 bool TestRunner::g_init = false;
#endif

JSVM_Env jsvm_env = nullptr;

void RunAllTests() {
  auto &testVec = TestRunner::testVec;
  for (size_t i = 0; i < testVec.size(); ++i) {
    testVec[i]->Run(i);
  }
}

void RunTestsWithPrefix(const char *prefix) {
  auto &testVec = TestRunner::testVec;
  for (size_t i = 0; i < testVec.size(); ++i) {
    const std::string name = testVec[i]->GetName();
    if (name.find(prefix) != 0) {
      continue;
    }
    testVec[i]->Run(i);
  }
}

void RunTest(const char *name) {
  auto &testMap = TestRunner::testMap;
  auto it = testMap.find(name);
  if (it == testMap.end()) {
    std::cout << "There is no test named " << name << std::endl;
    return;
  }
  it->second->Run();
}

int main(int argc, char **argv) {
  if (argc >= 2) {
    std::string name = argv[1];
    if (name.find("/") != std::string::npos) {
      RunTest(name.c_str());
    } else {
      RunTestsWithPrefix(name.c_str());
    }
    return 0;
  }
  RunAllTests();
}
#else
void RunTestsWithPrefix(const char *prefix) {
  (void)prefix;
}
#endif  // OHOS_JSVM_HAP

