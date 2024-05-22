#ifndef IMAGE_SOURCE_MODULE_TEST_H
#define IMAGE_SOURCE_MODULE_TEST_H

#include <memory>
#include <string>
#include <vector>
#include "napi/native_api.h"
#include "napi/native_node_api.h"
#include "image/image_source_native.h"
#include "image/image_common.h"

class ImageSourceModuleTest {
public:
    ImageSourceModuleTest();
    ~ImageSourceModuleTest();

    Image_ErrorCode GetImageProperty(int32_t fd, std::string *value);

private:
};
#endif // IMAGE_SOURCE_MODULE_TEST_H