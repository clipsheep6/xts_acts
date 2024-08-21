#ifndef TEST_UTIL_H
#define TEST_UTIL_H
#include <cstdarg>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>

#if defined(OHOS_JSVM_HAP) && !defined(OHOS_JSVM_XTS)

#include <hilog/log.h>

#ifndef LOG_DOMAIN
#define LOG_DOMAIN 0x3200
#define LOG_TAG "JSVMTEST_TAG"
#endif

static void print(const char* str) {
  OH_LOG_INFO(LOG_APP, "%{public}s", str);
}

#else  // OHOS_JSVM_HAP

static void print(const char* str) {
  printf("%s\n", str);
}

#endif  // OHOS_JSVM_HAP

static void PrintErrorMessage(const std::string &cond, const std::string &file, unsigned int line, const char *fmt,
                              ...) {
  constexpr uint32_t kMaxLogLen = 10000;
  char buf[kMaxLogLen];
  int len =
      snprintf(buf, kMaxLogLen - 1, "CHECK/CHECK_FATAL failure: %s at [%s:%u] ", cond.c_str(), file.c_str(), line);
  if (len == -1) {
    return;
  }
  va_list l;
  va_start(l, fmt);
  int eNum = vsnprintf(buf + len, static_cast<size_t>(kMaxLogLen - len - 1), fmt, l);
  if (eNum == -1) {
    va_end(l);
    return;
  }
  va_end(l);
  print(buf);
}

#define CHECK_FATAL(cond, fmt, ...)                                          \
  do {                                                                       \
    if (!(cond)) {                                                           \
      PrintErrorMessage(#cond, __FILE__, __LINE__, fmt "\n", ##__VA_ARGS__); \
      abort();                                                               \
    }                                                                        \
  } while (0)

#define CHECK(cond) CHECK_FATAL(cond, "must be")
#endif
