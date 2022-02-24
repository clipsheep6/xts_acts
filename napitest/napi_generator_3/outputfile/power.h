#ifndef IMPL_POWER_H
#define IMPL_POWER_H

#include <cstring>
#include <string>
#include <memory>
#include <vector>
#include <math.h>



namespace power {
bool shutdownDevice(std::string &reason);
bool rebootDevice(std::string &reason);
bool isScreenOn(bool &out);}

#endif // IMPL_POWER_H
