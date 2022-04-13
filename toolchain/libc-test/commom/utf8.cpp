#include <locale.h>
#include <string.h>
#include <langinfo.h>
#include "test.h"
#include "gtest/gtest.h"
using namespace std;

int t_setutf8()
{
    (void)(
    setlocale(LC_CTYPE, "C.UTF-8") ||
    setlocale(LC_CTYPE, "POSIX.UTF-8") ||
    setlocale(LC_CTYPE, "en_US.UTF-8") ||
    setlocale(LC_CTYPE, "en_GB.UTF-8") ||
    setlocale(LC_CTYPE, "en.UTF-8") ||
    setlocale(LC_CTYPE, "UTF-8") ||
    setlocale(LC_CTYPE, "") );
    
    EXPECT_FALSE(strcmp(nl_langinfo(CODESET), "UTF-8")) << "cannot set UTF-8 locale for test (codeset=" 
																	<< nl_langinfo(CODESET) << ")" << endl;
    
    return 0;
}
