#ifndef TOOLCHAIN_RUNTEST_H
#define TOOLCHAIN_RUNTEST_H

#include <iostream>
#include <string>
#include <vector>

int t_setrlim(int r, long lim);
void GetFileNames(std::string path, std::vector<std::string>& filenames);

#endif  // TOOLCHAIN_LIBC_TEST_INCLUDE_RUNTEST_H_
