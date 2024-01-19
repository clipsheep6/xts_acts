/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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

#include "opencv_native_test.h"

#include <cstdlib>

#include "hilog/log.h"
#include "hilog/log_cpp.h"
#include "napi_value_utils.h"
#include "node_api.h"

namespace {
    constexpr size_t SIZE_ZERO = 0;
    constexpr size_t SIZE_ONE = 1;
    constexpr uint32_t ARGS_FIRST = 0;
    constexpr int32_t NUM_0 = 0;
    // constexpr uint32_t TYPE_MASK = 0xFFF;
    constexpr uint32_t LOG_ID = 0xD002B05;
}

namespace OHOS {
namespace Media {
constexpr OHOS::HiviewDFX::HiLogLabel LABEL = {LOG_CORE, LOG_ID, "ImageSourceNDKTest"};
#define MY_HILOG(op, fmt, args...) \
    do {                                  \
        op(LABEL, "{%{public}s:%{public}d} " fmt, __FUNCTION__, __LINE__, ##args);  \
    } while (0)
#define DEBUG_LOG(fmt, ...) MY_HILOG(OHOS::HiviewDFX::HiLog::Info, fmt, ##__VA_ARGS__)
#define DEBUG_ERR(fmt, ...) MY_HILOG(OHOS::HiviewDFX::HiLog::Error, fmt, ##__VA_ARGS__)
#define DEBUG_PTR(p) (((p) == nullptr)?"nullptr":"not nullptr")

template<typename T>
static bool ParseNamedType(NapiValue &val, const std::string name, T &type)
{
    if (!val.isValid()) {
        DEBUG_ERR("Parse named type is not a value napi value");
        return false;
    }
    int32_t tmp = NUM_0;
    if (!val.GetPropInt32(name, tmp)) {
        DEBUG_ERR("Parse named type failed");
        return false;
    }
    type = static_cast<T>(tmp);
    return true;
}

struct MatDataHolder {
    std::vector<uint8_t> data;
    // std::vector<float> dataF32;
    // std::vector<double> dataF64;
};


static bool ParseMatInfo(NapiValue &matVal, CV_Mat &cvMat)
{
    if (!matVal.isValid()) {
        DEBUG_ERR("Parse mat is not a value napi value");
        return false;
    }
    if (!ParseNamedType(matVal, "type", cvMat.type)) {
        return false;
    }
    if (!matVal.GetPropInt32("rows", cvMat.rows)) {
        DEBUG_ERR("Parse mat rows failed");
        return false;
    }
    if (!matVal.GetPropInt32("cols", cvMat.cols)) {
        DEBUG_ERR("Parse mat rows failed");
        return false;
    }
    return true;
}
static bool ParseMatData(NapiValue &matVal, CV_Mat &cvMat, MatDataHolder &holder)
{
    if (!matVal.isValid()) {
        DEBUG_ERR("Parse mat is not a value napi value");
        return false;
    }

    // We allow no data in mat for get mat infomation only
    if (!matVal.HasProp("data")) {
        DEBUG_LOG("no mat data");
        return true;
    }

    if (matVal.GetPropByteArray("data", holder.data)) {
        cvMat.data = holder.data.data();
        cvMat.dataSize = holder.data.size();
    } else {
        DEBUG_LOG("parse mat data failed");
    }

    // auto cvMatType = cvMat.type & TYPE_MASK;
    // if (cvMatType == CV_MAT_TYPE_32F) {
    //     if (matVal.GetPropFloatArray("data", holder.dataF32)) {
    //         cvMat.data = holder.dataF32.data();
    //         cvMat.dataSize = holder.dataF32.size() * sizeof(float);
    //     } else {
    //         DEBUG_LOG("parse f32 mat data failed");
    //     }
    // } else if  (cvMatType == CV_MAT_TYPE_64F) {
    //     if (matVal.GetPropDoubleArray("data", holder.dataF64)) {
    //         cvMat.data = holder.dataF64.data();
    //         cvMat.dataSize = holder.dataF64.size() * sizeof(double);
    //     } else {
    //         DEBUG_LOG("parse f64 mat data failed");
    //     }
    // } else {
        
    // }
    return true;
}

static bool ParseMat(NapiValue &matVal, CV_Mat &cvMat, MatDataHolder &holder)
{
    if (!ParseMatInfo(matVal, cvMat)) {
        DEBUG_ERR("Parse mat info failed");
        return false;
    }
    return ParseMatData(matVal, cvMat, holder);
}

static void ReleaseMat(CV_Mat &cvMat)
{
    if (cvMat.data != nullptr) {
        free(cvMat.data);
        cvMat.data = nullptr;
    }
}

static bool ParseMat(NapiValue &rootValue, const std::string name, CV_Mat &cvMat, MatDataHolder &holder)
{
    if (!rootValue.isValid()) {
        DEBUG_ERR("Parse mat root is not a value napi value");
        return false;
    }
    NapiValue matVal = rootValue.GetProp(name);
    return ParseMat(matVal, cvMat, holder);
}

static bool ParsePoint(NapiValue &rootValue, const std::string name, CV_Point &cvPoint)
{
    if (!rootValue.isValid()) {
        DEBUG_ERR("Parse point root is not a value napi value");
        return false;
    }
    NapiValue pointVal = rootValue.GetProp(name);
    return pointVal.GetPropInt32("x", cvPoint.x) && pointVal.GetPropInt32("y", cvPoint.y);
}

static bool ParsePoint2f(NapiValue &rootValue, const std::string name, CV_Point2f &cvPoint)
{
    if (!rootValue.isValid()) {
        DEBUG_ERR("Parse point root is not a value napi value");
        return false;
    }
    NapiValue pointVal = rootValue.GetProp(name);
    return pointVal.GetPropFloat("x", cvPoint.x) && pointVal.GetPropFloat("y", cvPoint.y);
}

static bool ParseSize(NapiValue &rootValue, const std::string name, CV_Size &cvSize)
{
    if (!rootValue.isValid()) {
        DEBUG_ERR("Parse size root is not a value napi value");
        return false;
    }
    NapiValue sizeVal = rootValue.GetProp(name);
    return sizeVal.GetPropInt32("width", cvSize.width) && sizeVal.GetPropInt32("height", cvSize.height);
}

static bool ParseScalar(NapiValue &rootValue, const std::string name, CV_Scalar &cvScalar)
{
    if (!rootValue.isValid()) {
        DEBUG_ERR("Parse scalar root is not a value napi value");
        return false;
    }
    NapiValue scalarVal = rootValue.GetProp(name);
    return scalarVal.GetPropDouble("scalarX", cvScalar.scalarX) &&
        scalarVal.GetPropDouble("scalarY", cvScalar.scalarY) &&
        scalarVal.GetPropDouble("scalarZ", cvScalar.scalarZ);
}

static bool ParsePosition(NapiValue &rootValue, const std::string name, CV_Position &cvPosition)
{
    if (!rootValue.isValid()) {
        DEBUG_ERR("Parse scalar root is not a value napi value");
        return false;
    }
    NapiValue positionVal = rootValue.GetProp(name);
    return positionVal.GetPropInt32("left", cvPosition.left) &&
        positionVal.GetPropInt32("top", cvPosition.top) &&
        positionVal.GetPropInt32("right", cvPosition.right) &&
        positionVal.GetPropInt32("bottom", cvPosition.bottom);
}

static bool CreateMat(NapiValue &rootValue, CV_Mat &cvMat)
{
    if (!rootValue.SetPropInt32("type", cvMat.type)) {
        DEBUG_ERR("CreateMat set type failed");
        return false;
    }
    if (!rootValue.SetPropInt32("rows", cvMat.rows)) {
        DEBUG_ERR("CreateMat set rows failed");
        return false;
    }
    if (!rootValue.SetPropInt32("cols", cvMat.cols)) {
        DEBUG_ERR("CreateMat set cols failed");
        return false;
    }
    if (cvMat.data == nullptr && cvMat.dataSize <= SIZE_ZERO) {
        DEBUG_ERR("CreateMat source data is %{public}d, %{public}u", cvMat.data == nullptr, cvMat.dataSize);
        return false;
    }
    if (!rootValue.SetPropByteArray("data", cvMat.data, cvMat.dataSize)) {
        DEBUG_ERR("CreateMat set data failed");
        return false;
    }
    return true;
}

static bool CreateContoursArray(napi_env env, CV_Contours &cvContours,
    std::vector<NapiValue> &vPointsArray)
{
    if (cvContours.size == SIZE_ZERO || cvContours.contours == nullptr) {
        DEBUG_ERR("input cvContours is empty %{public}d | %{public}p",
            cvContours.size, cvContours.contours);
        return false;
    }
    for (size_t i = SIZE_ZERO; i < cvContours.size; i++ ) {
        auto points = cvContours.contours[i];
        if (points.size == SIZE_ZERO || points.points == nullptr) {
            DEBUG_ERR("input contours[%{public}d] is empty %{public}d | %{public}p", i,
                cvContours.size, cvContours.contours);
            return false;
        }
        std::vector<NapiValue> vnPoints;
        for (size_t j = SIZE_ZERO; j < points.size; j++ ) {
            NapiValue nPoint(env);
            if (!nPoint.SetPropInt32("x", points.points[j].x)) {
                DEBUG_ERR("input contours[%{public}d][%{public}d] x failed", i, j);
                return false;
            }
            if (!nPoint.SetPropInt32("y", points.points[j].y)) {
                DEBUG_ERR("input contours[%{public}d][%{public}d] y failed", i, j);
                return false;
            }
            vnPoints.push_back(nPoint);
        }
        NapiValue nPoints(env);
        if (!nPoints.FromNapiArray(vnPoints)) {
            DEBUG_ERR("input contours[%{public}d] to array failed", i);
            return false;
        }
        vPointsArray.push_back(nPoints);
    }
    return true;
}

static bool CreateHierarchysArray(napi_env env, CV_Hierarchys &cvHierarchys,
    std::vector<NapiValue> &vHierarchysArray)
{
    if (cvHierarchys.size == SIZE_ZERO || cvHierarchys.hierarchys == nullptr) {
        DEBUG_ERR("input cvHierarchys is empty %{public}d | %{public}p",
            cvHierarchys.size, cvHierarchys.hierarchys);
        return false;
    }
    for (size_t i = SIZE_ZERO; i < cvHierarchys.size; i++ ) {
        auto hierarchy = cvHierarchys.hierarchys[i];
        NapiValue nHhierarchys(env);
        if (!nHhierarchys.SetPropInt32("v0", hierarchy.v0)) {
            DEBUG_ERR("input cvHierarchys[%{public}d] v0 failed", i);
            return false;
        }
        if (!nHhierarchys.SetPropInt32("v1", hierarchy.v1)) {
            DEBUG_ERR("input cvHierarchys[%{public}d] v1 failed", i);
            return false;
        }
        if (!nHhierarchys.SetPropInt32("v2", hierarchy.v2)) {
            DEBUG_ERR("input cvHierarchys[%{public}d] v2 failed", i);
            return false;
        }
        if (!nHhierarchys.SetPropInt32("v3", hierarchy.v3)) {
            DEBUG_ERR("input cvHierarchys[%{public}d] v3 failed", i);
            return false;
        }
        vHierarchysArray.push_back(nHhierarchys);
    }
    return true;
}

static bool CreateContours(NapiValue &rootValue, CV_Contours &cvContours, CV_Hierarchys &cvHierarchys)
{
    if (cvContours.size == SIZE_ZERO || cvContours.contours == nullptr) {
        DEBUG_ERR("input cvContours is empty %{public}d | %{public}p", cvContours.size, cvContours.contours);
        return false;
    }

    std::vector<NapiValue> vContours;
    if (!CreateContoursArray(rootValue.env_, cvContours, vContours)) {
        return false;
    }
    if (!rootValue.SetPropNapiArray("contours", vContours)) {
        DEBUG_ERR("CreateContours set contours failed");
        return false;
    }

    std::vector<NapiValue> vHierarchys;
    if (!CreateHierarchysArray(rootValue.env_, cvHierarchys, vHierarchys)) {
        return false;
    }
    if (!rootValue.SetPropNapiArray("hierarchys", vHierarchys)) {
        DEBUG_ERR("CreateContours set hierarchys failed");
        return false;
    }
    return true;
}

struct MorphDataHolder {
    MatDataHolder srcData;
    MatDataHolder kernel;
    CV_Scalar borderValue;
};

static bool ParseMorphOpts(napi_env env, napi_value value,
    CV_Morph_Opts &opts, MorphDataHolder &holder)
{
    NapiValue arg(env, value);
    if (!ParseMat(arg, "src", opts.src, holder.srcData)) {
        DEBUG_ERR("Parse src mat failed");
        return false;
    }
    if (!ParseMat(arg, "kernel", opts.kernel, holder.kernel)) {
        DEBUG_ERR("Parse kernel mat failed");
    }
    if (!ParsePoint(arg, "anchor", opts.anchor)) {
        DEBUG_ERR("Parse anchor failed");
    }
    if (!arg.GetPropInt32("iterations", opts.iterations)) {
        DEBUG_ERR("Parse iterations failed");
    }
    if (!ParseNamedType(arg, "morphType", opts.morphType)) {
        DEBUG_ERR("Parse morphType failed");
    }
    if (!ParseNamedType(arg, "borderType", opts.borderType)) {
        DEBUG_ERR("Parse borderType failed");
    }
    if (ParseScalar(arg, "borderValue", holder.borderValue)) {
        opts.borderValue = &holder.borderValue;
    } else {
        DEBUG_ERR("Parse borderType failed");
    }
    return true;
}

napi_value OpenCVNDKTest::Erode(napi_env env, napi_callback_info info)
{
    NapiValue result(env);
    NapiInfo napiInfo(env, info, SIZE_ONE);
    if (!napiInfo.init()) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }
    CV_Morph_Opts opts;
    MorphDataHolder dataHolder;
    if (!ParseMorphOpts(env, napiInfo.args_[ARGS_FIRST], opts, dataHolder)) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }
    CV_Mat dst;
    opts.dst = &dst;
    auto res = OH_CV_Erode(opts);
    if (res != IMAGE_RESULT_SUCCESS) {
        return result.GetResult(res);
    }

    uint8_t* dstData = (uint8_t*) dst.data;
    for (size_t i = SIZE_ZERO; i < dst.dataSize; i += 7) {
        size_t j = i;
        DEBUG_LOG("%{public}02x %{public}02x %{public}02x %{public}02x %{public}02x %{public}02x %{public}02x",
            dstData[j], dstData[j + 1], dstData[j + 2], dstData[j + 3], dstData[j + 4], dstData[j + 5], dstData[j + 6]);
    }
    NapiValue dstMat(env);
    if (!CreateMat(dstMat, dst)) {
        return result.GetResult(IMAGE_RESULT_DATA_ABNORMAL);
    }
    ReleaseMat(dst);
    return result.GetResult(res, dstMat);
}

napi_value OpenCVNDKTest::Dilate(napi_env env, napi_callback_info info)
{
    NapiValue result(env);
    NapiInfo napiInfo(env, info, SIZE_ONE);
    if (!napiInfo.init()) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }
    CV_Morph_Opts opts;
    MorphDataHolder dataHolder;
    if (!ParseMorphOpts(env, napiInfo.args_[ARGS_FIRST], opts, dataHolder)) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }
    CV_Mat dst;
    opts.dst = &dst;
    auto res = OH_CV_Dilate(opts);
    if (res != IMAGE_RESULT_SUCCESS) {
        return result.GetResult(res);
    }

    NapiValue dstMat(env);
    if (!CreateMat(dstMat, dst)) {
        return result.GetResult(IMAGE_RESULT_DATA_ABNORMAL);
    }
    ReleaseMat(dst);
    return result.GetResult(res, dstMat);
}

napi_value OpenCVNDKTest::MorphologyEx(napi_env env, napi_callback_info info)
{
    NapiValue result(env);
    NapiInfo napiInfo(env, info, SIZE_ONE);
    if (!napiInfo.init()) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }
    CV_Morph_Opts opts;
    MorphDataHolder dataHolder;
    if (!ParseMorphOpts(env, napiInfo.args_[ARGS_FIRST], opts, dataHolder)) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }
    CV_Mat dst;
    opts.dst = &dst;
    auto res = OH_CV_MorphologyEx(opts);
    if (res != IMAGE_RESULT_SUCCESS) {
        return result.GetResult(res);
    }

    NapiValue dstMat(env);
    if (!CreateMat(dstMat, dst)) {
        return result.GetResult(IMAGE_RESULT_DATA_ABNORMAL);
    }
    ReleaseMat(dst);
    return result.GetResult(res, dstMat);
}

struct ResizeDataHolder {
    MatDataHolder srcData;
};

static bool ParseResizeOpts(napi_env env, napi_value value,
    CV_Resize_Opts &opts, ResizeDataHolder &holder)
{
    NapiValue arg(env, value);
    if (!ParseMat(arg, "src", opts.src, holder.srcData)) {
        DEBUG_ERR("Parse src mat failed");
        return false;
    }
    if (!ParseSize(arg, "dstSize", opts.dstSize)) {
        DEBUG_ERR("Parse dstSize failed");
    }
    if (!arg.GetPropDouble("fx", opts.fx)) {
        DEBUG_ERR("Parse fx failed");
    }
    if (!arg.GetPropDouble("fy", opts.fy)) {
        DEBUG_ERR("Parse fy failed");
    }
    if (!ParseNamedType(arg, "interpolation", opts.interpolation)) {
        DEBUG_ERR("Parse interpolation failed");
    }
    return true;
}

napi_value OpenCVNDKTest::Resize(napi_env env, napi_callback_info info)
{
    NapiValue result(env);
    NapiInfo napiInfo(env, info, SIZE_ONE);
    if (!napiInfo.init()) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }
    CV_Resize_Opts opts;
    ResizeDataHolder dataHolder;
    if (!ParseResizeOpts(env, napiInfo.args_[ARGS_FIRST], opts, dataHolder)) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }
    CV_Mat dst;
    opts.dst = &dst;
    auto res = OH_CV_Resize(opts);
    if (res != IMAGE_RESULT_SUCCESS) {
        return result.GetResult(res);
    }

    NapiValue dstMat(env);
    if (!CreateMat(dstMat, dst)) {
        return result.GetResult(IMAGE_RESULT_DATA_ABNORMAL);
    }
    ReleaseMat(dst);
    return result.GetResult(res, dstMat);
}

struct WarpDataHolder {
    MatDataHolder srcData;
    MatDataHolder mData;
    CV_Scalar borderValue;
};

static bool ParseWarpOpts(napi_env env, napi_value value,
    CV_Warp_Opts &opts, WarpDataHolder &holder)
{
    NapiValue arg(env, value);
    if (!ParseMat(arg, "src", opts.src, holder.srcData)) {
        DEBUG_ERR("Parse src mat failed");
        return false;
    }
    if (!ParseMat(arg, "m", opts.m, holder.mData)) {
        DEBUG_ERR("Parse m mat failed");
    }
    if (!ParseSize(arg, "dstSize", opts.dstSize)) {
        DEBUG_ERR("Parse dstSize failed");
    }
    if (!ParseNamedType(arg, "interpolation", opts.interpolation)) {
        DEBUG_ERR("Parse interpolation failed");
    }
    if (!ParseNamedType(arg, "borderType", opts.borderType)) {
        DEBUG_ERR("Parse borderType failed");
    }
    if (ParseScalar(arg, "borderValue", holder.borderValue)) {
        opts.borderValue = &holder.borderValue;
    } else {
        DEBUG_ERR("Parse borderType failed");
    }
    return true;
}

napi_value OpenCVNDKTest::WarpAffine(napi_env env, napi_callback_info info)
{
    NapiValue result(env);
    NapiInfo napiInfo(env, info, SIZE_ONE);
    if (!napiInfo.init()) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }

    CV_Warp_Opts opts;
    WarpDataHolder dataHolder;
    if (!ParseWarpOpts(env, napiInfo.args_[ARGS_FIRST], opts, dataHolder)) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }
    CV_Mat dst;
    opts.dst = &dst;
    auto res = OH_CV_WarpAffine(opts);
    if (res != IMAGE_RESULT_SUCCESS) {
        return result.GetResult(res);
    }

    NapiValue dstMat(env);
    if (!CreateMat(dstMat, dst)) {
        return result.GetResult(IMAGE_RESULT_DATA_ABNORMAL);
    }
    ReleaseMat(dst);
    return result.GetResult(res, dstMat);
}

napi_value OpenCVNDKTest::WarpPerspective(napi_env env, napi_callback_info info)
{
    NapiValue result(env);
    NapiInfo napiInfo(env, info, SIZE_ONE);
    if (!napiInfo.init()) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }

    CV_Warp_Opts opts;
    WarpDataHolder dataHolder;
    if (!ParseWarpOpts(env, napiInfo.args_[ARGS_FIRST], opts, dataHolder)) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }
    CV_Mat dst;
    opts.dst = &dst;
    auto res = OH_CV_WarpPerspective(opts);
    if (res != IMAGE_RESULT_SUCCESS) {
        return result.GetResult(res);
    }

    NapiValue dstMat(env);
    if (!CreateMat(dstMat, dst)) {
        return result.GetResult(IMAGE_RESULT_DATA_ABNORMAL);
    }
    ReleaseMat(dst);
    return result.GetResult(res, dstMat);
}

struct RemapDataHolder {
    MatDataHolder srcData;
    MatDataHolder map1Data;
    MatDataHolder map2Data;
    CV_Scalar borderValue;
};

static bool ParseRemapOpts(napi_env env, napi_value value,
    CV_Remap_Opts &opts, RemapDataHolder &holder)
{
    NapiValue arg(env, value);
    if (!ParseMat(arg, "src", opts.src, holder.srcData)) {
        DEBUG_ERR("Parse src mat failed");
        return false;
    }

    if (!ParseMat(arg, "map1", opts.map1, holder.map1Data)) {
        DEBUG_ERR("Parse map1 mat failed");
    }

    if (!ParseMat(arg, "map2", opts.map2, holder.map2Data)) {
        DEBUG_ERR("Parse map2 mat failed");
    }
    if (!ParseNamedType(arg, "interpolation", opts.interpolation)) {
        DEBUG_ERR("Parse interpolation failed");
    }
    if (!ParseNamedType(arg, "borderType", opts.borderType)) {
        DEBUG_ERR("Parse borderType failed");
    }
    if (ParseScalar(arg, "borderValue", holder.borderValue)) {
        opts.borderValue = &holder.borderValue;
    } else {
        DEBUG_ERR("Parse borderType failed");
    }
    return true;
}

napi_value OpenCVNDKTest::Remap(napi_env env, napi_callback_info info)
{
    NapiValue result(env);
    NapiInfo napiInfo(env, info, SIZE_ONE);
    if (!napiInfo.init()) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }

    CV_Remap_Opts opts;
    RemapDataHolder dataHolder;
    if (!ParseRemapOpts(env, napiInfo.args_[ARGS_FIRST], opts, dataHolder)) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }
    CV_Mat dst;
    opts.dst = &dst;
    auto res = OH_CV_Remap(opts);
    if (res != IMAGE_RESULT_SUCCESS) {
        return result.GetResult(res);
    }

    NapiValue dstMat(env);
    if (!CreateMat(dstMat, dst)) {
        return result.GetResult(IMAGE_RESULT_DATA_ABNORMAL);
    }
    ReleaseMat(dst);
    return result.GetResult(res, dstMat);
}

static bool ParseGetRotationMatrix2DOpts(napi_env env, napi_value value, CV_GetRotationMatrix2D_Opts &opts)
{
    NapiValue arg(env, value);
    if (!ParsePoint2f(arg, "center", opts.center)) {
        DEBUG_ERR("Parse center point2f failed");
        return false;
    }
    if (!arg.GetPropDouble("angle", opts.angle)) {
        DEBUG_ERR("Parse angle failed");
    }
    if (!arg.GetPropDouble("scale", opts.scale)) {
        DEBUG_ERR("Parse scale failed");
    }
    return true;
}

napi_value OpenCVNDKTest::GetRotationMatrix2D(napi_env env, napi_callback_info info)
{
    NapiValue result(env);
    NapiInfo napiInfo(env, info, SIZE_ONE);
    if (!napiInfo.init()) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }

    CV_GetRotationMatrix2D_Opts opts;
    if (!ParseGetRotationMatrix2DOpts(env, napiInfo.args_[ARGS_FIRST], opts)) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }
    CV_Mat dst;
    opts.dst = &dst;
    auto res = OH_CV_GetRotationMatrix2D(opts);
    if (res != IMAGE_RESULT_SUCCESS) {
        return result.GetResult(res);
    }

    NapiValue dstMat(env);
    if (!CreateMat(dstMat, dst)) {
        return result.GetResult(IMAGE_RESULT_DATA_ABNORMAL);
    }
    ReleaseMat(dst);
    return result.GetResult(res, dstMat);
}

struct GetPerspectiveTransformDataHolder {
    MatDataHolder src1Data;
    MatDataHolder src2Data;
};

static bool ParseGetPerspectiveTransformOpts(napi_env env, napi_value value,
    CV_GetPerspectiveTransform_Opts &opts, GetPerspectiveTransformDataHolder &holder)
{
    NapiValue arg(env, value);
    if (!ParseMat(arg, "src1", opts.src1, holder.src1Data)) {
        DEBUG_ERR("Parse src1 mat failed");
        return false;
    }

    if (!ParseMat(arg, "src2", opts.src2, holder.src2Data)) {
        DEBUG_ERR("Parse src2 mat failed");
        return false;
    }

    if (!ParseNamedType(arg, "solve", opts.solve)) {
        DEBUG_ERR("Parse solve failed");
    }
    return true;
}
napi_value OpenCVNDKTest::GetPerspectiveTransform(napi_env env, napi_callback_info info)
{
    NapiValue result(env);
    NapiInfo napiInfo(env, info, SIZE_ONE);
    if (!napiInfo.init()) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }

    CV_GetPerspectiveTransform_Opts opts;
    GetPerspectiveTransformDataHolder dataHolder;
    if (!ParseGetPerspectiveTransformOpts(env, napiInfo.args_[ARGS_FIRST], opts, dataHolder)) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }
    CV_Mat dst;
    opts.dst = &dst;
    auto res = OH_CV_GetPerspectiveTransform(opts);
    if (res != IMAGE_RESULT_SUCCESS) {
        return result.GetResult(res);
    }

    NapiValue dstMat(env);
    if (!CreateMat(dstMat, dst)) {
        return result.GetResult(IMAGE_RESULT_DATA_ABNORMAL);
    }
    ReleaseMat(dst);
    return result.GetResult(res, dstMat);
}

struct SobelDataHolder {
    MatDataHolder srcData;
};

static bool ParseSobelOpts(napi_env env, napi_value value,
    CV_Sobel_Opts &opts, SobelDataHolder &holder)
{
    NapiValue arg(env, value);
    if (!ParseMat(arg, "src", opts.src, holder.srcData)) {
        DEBUG_ERR("Parse src mat failed");
        return false;
    }

    if (arg.GetPropInt32("dDepth", opts.dDepth)) {
        DEBUG_ERR("Parse dDepth failed");
    }

    if (arg.GetPropInt32("dx", opts.dx)) {
        DEBUG_ERR("Parse dx failed");
    }


    if (arg.GetPropInt32("dy", opts.dy)) {
        DEBUG_ERR("Parse dy failed");
    }


    if (arg.GetPropInt32("kSize", opts.kSize)) {
        DEBUG_ERR("Parse kSize failed");
    }


    if (arg.GetPropDouble("scale", opts.scale)) {
        DEBUG_ERR("Parse scale failed");
    }


    if (arg.GetPropDouble("delta", opts.delta)) {
        DEBUG_ERR("Parse delta failed");
    }

    if (!ParseNamedType(arg, "borderType", opts.borderType)) {
        DEBUG_ERR("Parse borderType failed");
    }
    return true;
}

napi_value OpenCVNDKTest::Sobel(napi_env env, napi_callback_info info)
{
    NapiValue result(env);
    NapiInfo napiInfo(env, info, SIZE_ONE);
    if (!napiInfo.init()) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }

    CV_Sobel_Opts opts;
    SobelDataHolder dataHolder;
    if (!ParseSobelOpts(env, napiInfo.args_[ARGS_FIRST], opts, dataHolder)) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }
    CV_Mat dst;
    opts.dst = &dst;
    auto res = OH_CV_Sobel(opts);
    if (res != IMAGE_RESULT_SUCCESS) {
        return result.GetResult(res);
    }

    NapiValue dstMat(env);
    if (!CreateMat(dstMat, dst)) {
        return result.GetResult(IMAGE_RESULT_DATA_ABNORMAL);
    }
    ReleaseMat(dst);
    return result.GetResult(res, dstMat);
}

struct ThresholdDataHolder {
    MatDataHolder srcData;
};

static bool ParseThresholdOpts(napi_env env, napi_value value,
    CV_Threshold_Opts &opts, ThresholdDataHolder &holder)
{
    NapiValue arg(env, value);
    if (!ParseMat(arg, "src", opts.src, holder.srcData)) {
        DEBUG_ERR("Parse src mat failed");
        return false;
    }

    if (arg.GetPropDouble("thresh", opts.thresh)) {
        DEBUG_ERR("Parse thresh failed");
    }

    if (arg.GetPropDouble("maxval", opts.maxval)) {
        DEBUG_ERR("Parse maxval failed");
    }

    if (!ParseNamedType(arg, "type", opts.type)) {
        DEBUG_ERR("Parse type failed");
    }
    return true;
}

napi_value OpenCVNDKTest::Threshold(napi_env env, napi_callback_info info)
{
    NapiValue result(env);
    NapiInfo napiInfo(env, info, SIZE_ONE);
    if (!napiInfo.init()) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }

    CV_Threshold_Opts opts;
    ThresholdDataHolder dataHolder;
    if (!ParseThresholdOpts(env, napiInfo.args_[ARGS_FIRST], opts, dataHolder)) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }
    CV_Mat dst;
    opts.dst = &dst;
    auto res = OH_CV_Threshold(opts);
    if (res != IMAGE_RESULT_SUCCESS) {
        return result.GetResult(res);
    }

    NapiValue dstMat(env);
    if (!CreateMat(dstMat, dst)) {
        return result.GetResult(IMAGE_RESULT_DATA_ABNORMAL);
    }
    ReleaseMat(dst);
    return result.GetResult(res, dstMat);
}

struct CvtColorDataHolder {
    MatDataHolder srcData;
};

static bool ParseCvtColorOpts(napi_env env, napi_value value,
    CV_CvtColor_Opts &opts, CvtColorDataHolder &holder)
{
    NapiValue arg(env, value);
    if (!ParseMat(arg, "src", opts.src, holder.srcData)) {
        DEBUG_ERR("Parse src mat failed");
        return false;
    }

    if (arg.GetPropInt32("dstChannel", opts.dstChannel)) {
        DEBUG_ERR("Parse dstChannel failed");
    }

    if (!ParseNamedType(arg, "code", opts.code)) {
        DEBUG_ERR("Parse code failed");
    }
    return true;
}

napi_value OpenCVNDKTest::CvtColor(napi_env env, napi_callback_info info)
{
    NapiValue result(env);
    NapiInfo napiInfo(env, info, SIZE_ONE);
    if (!napiInfo.init()) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }

    CV_CvtColor_Opts opts;
    CvtColorDataHolder dataHolder;
    if (!ParseCvtColorOpts(env, napiInfo.args_[ARGS_FIRST], opts, dataHolder)) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }
    CV_Mat dst;
    opts.dst = &dst;
    auto res = OH_CV_CvtColor(opts);
    if (res != IMAGE_RESULT_SUCCESS) {
        return result.GetResult(res);
    }

    NapiValue dstMat(env);
    if (!CreateMat(dstMat, dst)) {
        return result.GetResult(IMAGE_RESULT_DATA_ABNORMAL);
    }
    ReleaseMat(dst);
    return result.GetResult(res, dstMat);
}

struct BlurDataHolder {
    MatDataHolder srcData;
};

static bool ParseBlurOpts(napi_env env, napi_value value,
    CV_Blur_Opts &opts, BlurDataHolder &holder)
{
    NapiValue arg(env, value);
    if (!ParseMat(arg, "src", opts.src, holder.srcData)) {
        DEBUG_ERR("Parse src mat failed");
        return false;
    }

    if (!ParseSize(arg, "kSize", opts.kSize)) {
        DEBUG_ERR("Parse kSize failed");
    }

    if (!ParsePoint(arg, "anchor", opts.anchor)) {
        DEBUG_ERR("Parse anchor failed");
    }

    if (!ParseNamedType(arg, "borderType", opts.borderType)) {
        DEBUG_ERR("Parse borderType failed");
    }
    return true;
}

napi_value OpenCVNDKTest::Blur(napi_env env, napi_callback_info info)
{
    NapiValue result(env);
    NapiInfo napiInfo(env, info, SIZE_ONE);
    if (!napiInfo.init()) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }

    CV_Blur_Opts opts;
    BlurDataHolder dataHolder;
    if (!ParseBlurOpts(env, napiInfo.args_[ARGS_FIRST], opts, dataHolder)) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }
    CV_Mat dst;
    opts.dst = &dst;
    auto res = OH_CV_Blur(opts);
    if (res != IMAGE_RESULT_SUCCESS) {
        return result.GetResult(res);
    }

    NapiValue dstMat(env);
    if (!CreateMat(dstMat, dst)) {
        return result.GetResult(IMAGE_RESULT_DATA_ABNORMAL);
    }
    ReleaseMat(dst);
    return result.GetResult(res, dstMat);
}

struct FillPolyDataHolder {
    MatDataHolder srcData;
    MatDataHolder ptsData;
    CV_Point offsetData;
};

static bool ParseFillPolyOpts(napi_env env, napi_value value,
    CV_FillPoly_Opts &opts, FillPolyDataHolder &holder)
{
    NapiValue arg(env, value);
    if (!ParseMat(arg, "src", opts.src, holder.srcData)) {
        DEBUG_ERR("Parse src mat failed");
        return false;
    }

    if (!ParseMat(arg, "pts", opts.pts, holder.ptsData)) {
        DEBUG_ERR("Parse pts mat failed");
    }

    if (!ParseScalar(arg, "color", opts.color)) {
        DEBUG_ERR("Parse color scalar failed");
    }

    if (!ParseNamedType(arg, "lintType", opts.lintType)) {
        DEBUG_ERR("Parse lintType failed");
    }

    if (arg.GetPropInt32("shift", opts.shift)) {
        DEBUG_ERR("Parse shift failed");
    }

    if (ParsePoint(arg, "offset", holder.offsetData)) {
        opts.offset = &holder.offsetData;
    } else {
        DEBUG_ERR("Parse offset failed");
    }
    return true;
}

napi_value OpenCVNDKTest::FillPoly(napi_env env, napi_callback_info info)
{
    NapiValue result(env);
    NapiInfo napiInfo(env, info, SIZE_ONE);
    if (!napiInfo.init()) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }

    CV_FillPoly_Opts opts;
    FillPolyDataHolder dataHolder;
    if (!ParseFillPolyOpts(env, napiInfo.args_[ARGS_FIRST], opts, dataHolder)) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }
    CV_Mat dst;
    opts.dst = &dst;
    auto res = OH_CV_FillPoly(opts);
    if (res != IMAGE_RESULT_SUCCESS) {
        return result.GetResult(res);
    }

    NapiValue dstMat(env);
    if (!CreateMat(dstMat, dst)) {
        return result.GetResult(IMAGE_RESULT_DATA_ABNORMAL);
    }
    ReleaseMat(dst);
    return result.GetResult(res, dstMat);
}

struct AdaptiveThresholdDataHolder {
    MatDataHolder srcData;
};

static bool ParseAdaptiveThresholdOpts(napi_env env, napi_value value,
    CV_AdaptiveThreshold_Opts &opts, AdaptiveThresholdDataHolder &holder)
{
    NapiValue arg(env, value);
    if (!ParseMat(arg, "src", opts.src, holder.srcData)) {
        DEBUG_ERR("Parse src mat failed");
        return false;
    }

    if (!arg.GetPropDouble("maxValue", opts.maxValue)) {
        DEBUG_ERR("Parse maxValue failed");
    }

    if (!ParseNamedType(arg, "adaptiveMethod", opts.adaptiveMethod)) {
        DEBUG_ERR("Parse adaptiveMethod failed");
    }

    if (!ParseNamedType(arg, "thresholdType", opts.thresholdType)) {
        DEBUG_ERR("Parse thresholdType failed");
    }

    if (!arg.GetPropInt32("blockSize", opts.blockSize)) {
        DEBUG_ERR("Parse blockSize failed");
    }

    if (!arg.GetPropDouble("delta", opts.delta)) {
        DEBUG_ERR("Parse delta failed");
    }
    return true;
}

napi_value OpenCVNDKTest::AdaptiveThreshold(napi_env env, napi_callback_info info)
{
    NapiValue result(env);
    NapiInfo napiInfo(env, info, SIZE_ONE);
    if (!napiInfo.init()) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }

    CV_AdaptiveThreshold_Opts opts;
    AdaptiveThresholdDataHolder dataHolder;
    if (!ParseAdaptiveThresholdOpts(env, napiInfo.args_[ARGS_FIRST], opts, dataHolder)) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }
    CV_Mat dst;
    opts.dst = &dst;
    auto res = OH_CV_AdaptiveThreshold(opts);
    if (res != IMAGE_RESULT_SUCCESS) {
        return result.GetResult(res);
    }

    NapiValue dstMat(env);
    if (!CreateMat(dstMat, dst)) {
        return result.GetResult(IMAGE_RESULT_DATA_ABNORMAL);
    }
    ReleaseMat(dst);
    return result.GetResult(res, dstMat);
}

struct FindContoursDataHolder {
    MatDataHolder srcData;
    CV_Point offsetData;
};

static bool ParseFindContoursOpts(napi_env env, napi_value value,
    CV_FindContours_Opts &opts, FindContoursDataHolder &holder)
{
    NapiValue arg(env, value);
    if (!ParseMat(arg, "src", opts.src, holder.srcData)) {
        DEBUG_ERR("Parse src mat failed");
        return false;
    }

    if (!ParseNamedType(arg, "mode", opts.mode)) {
        DEBUG_ERR("Parse mode failed");
    }

    if (!ParseNamedType(arg, "method", opts.method)) {
        DEBUG_ERR("Parse method failed");
    }

    if (ParsePoint(arg, "offset", holder.offsetData)) {
        opts.offset = &holder.offsetData;
    } else {
        DEBUG_ERR("Parse offset failed");
    }
    return true;
}

napi_value OpenCVNDKTest::FindContours(napi_env env, napi_callback_info info)
{
    NapiValue result(env);
    NapiInfo napiInfo(env, info, SIZE_ONE);
    if (!napiInfo.init()) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }

    CV_FindContours_Opts opts;
    FindContoursDataHolder dataHolder;
    if (!ParseFindContoursOpts(env, napiInfo.args_[ARGS_FIRST], opts, dataHolder)) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }

    CV_Contours contours;
    CV_Hierarchys hierarchys;
    opts.contours = &contours;
    opts.hierarchys = &hierarchys;

    auto res = OH_CV_FindContours(opts);
    if (res != IMAGE_RESULT_SUCCESS) {
        return result.GetResult(res);
    }
    NapiValue dstObject(env);
    if (!CreateContours(dstObject, contours, hierarchys)) {
        return result.GetResult(IMAGE_RESULT_DATA_ABNORMAL);
    }
    return result.GetResult(res, dstObject);
}

struct BoxFilterDataHolder {
    MatDataHolder srcData;
};

static bool ParseBoxFilterOpts(napi_env env, napi_value value,
    CV_BoxFilter_Opts &opts, BoxFilterDataHolder &holder)
{
    NapiValue arg(env, value);
    if (!ParseMat(arg, "src", opts.src, holder.srcData)) {
        DEBUG_ERR("Parse src mat failed");
        return false;
    }
    if (arg.GetPropInt32("dDepth", opts.dDepth)) {
        DEBUG_ERR("Parse dDepth failed");
    }

    if (!ParseSize(arg, "kSize", opts.kSize)) {
        DEBUG_ERR("Parse kSize failed");
    }

    if (!ParsePoint(arg, "anchor", opts.anchor)) {
        DEBUG_ERR("Parse anchor failed");
    }

    if (!ParseNamedType(arg, "normalize", opts.normalize)) {
        DEBUG_ERR("Parse normalize failed");
    }

    if (!ParseNamedType(arg, "borderType", opts.borderType)) {
        DEBUG_ERR("Parse borderType failed");
    }
    return true;
}

napi_value OpenCVNDKTest::BoxFilter(napi_env env, napi_callback_info info)
{
    NapiValue result(env);
    NapiInfo napiInfo(env, info, SIZE_ONE);
    if (!napiInfo.init()) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }

    CV_BoxFilter_Opts opts;
    BoxFilterDataHolder dataHolder;
    if (!ParseBoxFilterOpts(env, napiInfo.args_[ARGS_FIRST], opts, dataHolder)) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }
    CV_Mat dst;
    opts.dst = &dst;
    auto res = OH_CV_BoxFilter(opts);
    if (res != IMAGE_RESULT_SUCCESS) {
        return result.GetResult(res);
    }

    NapiValue dstMat(env);
    if (!CreateMat(dstMat, dst)) {
        return result.GetResult(IMAGE_RESULT_DATA_ABNORMAL);
    }
    ReleaseMat(dst);
    return result.GetResult(res, dstMat);
}

static bool ParseBorderInterpolateOpts(napi_env env, napi_value value, CV_BorderInterpolate_Opts &opts)
{
    NapiValue arg(env, value);

    if (!arg.GetPropInt32("p", opts.p)) {
        DEBUG_ERR("Parse p failed");
    }

    if (!arg.GetPropInt32("len", opts.len)) {
        DEBUG_ERR("Parse len failed");
    }

    if (!ParseNamedType(arg, "borderType", opts.borderType)) {
        DEBUG_ERR("Parse borderType failed");
    }
    return true;
}

napi_value OpenCVNDKTest::BorderInterpolate(napi_env env, napi_callback_info info)
{
    NapiValue result(env);
    NapiInfo napiInfo(env, info, SIZE_ONE);
    if (!napiInfo.init()) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }

    CV_BorderInterpolate_Opts opts;
    if (!ParseBorderInterpolateOpts(env, napiInfo.args_[ARGS_FIRST], opts)) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }

    int BorderInterpolateRes = 0;
    opts.res = &BorderInterpolateRes;
    auto res = OH_CV_BorderInterpolate(opts);
    if (res != IMAGE_RESULT_SUCCESS) {
        return result.GetResult(res);
    }

    NapiValue nRes(env);
    nRes.FromInt32(BorderInterpolateRes);
    return result.GetResult(res, nRes);
}

napi_value OpenCVNDKTest::CountNonZero(napi_env env, napi_callback_info info)
{
    NapiValue result(env);
    NapiInfo napiInfo(env, info, SIZE_ONE);
    if (!napiInfo.init()) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }

    NapiValue arg(env, napiInfo.args_[ARGS_FIRST]);
    MatDataHolder srcData;
    CV_CountNonZero_Opts opts;

    if (!ParseMat(arg, "src", opts.src, srcData)) {
        DEBUG_ERR("Parse src mat failed");
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }

    int CountNonZeroRes = 0;
    opts.res = &CountNonZeroRes;
    auto res = OH_CV_CountNonZero(opts);
    if (res != IMAGE_RESULT_SUCCESS) {
        return result.GetResult(res);
    }

    NapiValue nRes(env);
    nRes.FromInt32(CountNonZeroRes);
    return result.GetResult(res, nRes);
}

struct CopyMakeBorderDataHolder {
    MatDataHolder srcData;
    CV_Scalar borderValue;
};

static bool ParseCopyMakeBorderOpts(napi_env env, napi_value value,
    CV_CopyMakeBorder_Opts &opts, CopyMakeBorderDataHolder &holder)
{
    NapiValue arg(env, value);
    if (!ParseMat(arg, "src", opts.src, holder.srcData)) {
        DEBUG_ERR("Parse src mat failed");
        return false;
    }
    if (!ParsePosition(arg, "position", opts.position)) {
        DEBUG_ERR("Parse position failed");
    }
    if (!ParseNamedType(arg, "borderType", opts.borderType)) {
        DEBUG_ERR("Parse borderType failed");
    }
    if (ParseScalar(arg, "borderValue", holder.borderValue)) {
        opts.borderValue = &holder.borderValue;
    } else {
        DEBUG_ERR("Parse borderType failed");
    }
    return true;
}

napi_value OpenCVNDKTest::CopyMakeBorder(napi_env env, napi_callback_info info)
{
    NapiValue result(env);
    NapiInfo napiInfo(env, info, SIZE_ONE);
    if (!napiInfo.init()) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }
    CV_CopyMakeBorder_Opts opts;
    CopyMakeBorderDataHolder dataHolder;
    if (!ParseCopyMakeBorderOpts(env, napiInfo.args_[ARGS_FIRST], opts, dataHolder)) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }
    CV_Mat dst;
    opts.dst = &dst;
    auto res = OH_CV_CopyMakeBorder(opts);
    if (res != IMAGE_RESULT_SUCCESS) {
        return result.GetResult(res);
    }

    NapiValue dstMat(env);
    if (!CreateMat(dstMat, dst)) {
        return result.GetResult(IMAGE_RESULT_DATA_ABNORMAL);
    }
    ReleaseMat(dst);
    return result.GetResult(res, dstMat);
}

napi_value OpenCVNDKTest::Split(napi_env env, napi_callback_info info)
{
    NapiValue result(env);
    NapiInfo napiInfo(env, info, SIZE_ONE);
    if (!napiInfo.init()) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }

    NapiValue arg(env, napiInfo.args_[ARGS_FIRST]);
    MatDataHolder srcData;
    CV_Split_Opts opts;

    if (!ParseMat(arg, "src", opts.src, srcData)) {
        DEBUG_ERR("Parse src mat failed");
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }

    CV_Mat* dstMats = nullptr;
    uint32_t dstSize = SIZE_ZERO;
    opts.dst = &dstMats;
    opts.dstSize = &dstSize;
    auto res = OH_CV_Split(opts);
    if (res != IMAGE_RESULT_SUCCESS) {
        return result.GetResult(res);
    }
    if (dstMats == nullptr || dstSize == SIZE_ZERO) {
        DEBUG_ERR("Empty result %{public}d %{public}p", dstSize, dstMats);
        return result.GetResult(IMAGE_RESULT_DATA_ABNORMAL);
    }
    std::vector<NapiValue> nMats;
    for (size_t i = SIZE_ZERO; i < dstSize; i++ ) {
        NapiValue nMat(env);
        if (!CreateMat(nMat, dstMats[i])) {
            DEBUG_ERR("Create mat failed %{public}d", i);
            return result.GetResult(IMAGE_RESULT_DATA_ABNORMAL);
        }
        nMats.push_back(nMat);
        ReleaseMat(dstMats[i]);
    }

    NapiValue nRes(env);
    nRes.FromNapiArray(nMats);
    return result.GetResult(res, nRes);
}

napi_value OpenCVNDKTest::Merge(napi_env env, napi_callback_info info)
{
    NapiValue result(env);
    NapiInfo napiInfo(env, info, SIZE_ONE);
    if (!napiInfo.init()) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }

    NapiValue arg(env, napiInfo.args_[ARGS_FIRST]);
    std::vector<NapiValue> nMats;
    if (!arg.ToNapiArray(nMats) || nMats.empty()) {
        DEBUG_ERR("Parse src napi mats failed");
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }

    std::vector<MatDataHolder> datas;
    std::vector<CV_Mat> mats;
    datas.resize(nMats.size());
    mats.resize(nMats.size());
    for (size_t i = SIZE_ZERO; i < nMats.size(); i++ ) {
        if (!ParseMat(nMats[i], mats[i], datas[i])) {
            DEBUG_ERR("Parse src mat %{public}d failed", i);
            return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
        }
    }

    CV_Merge_Opts opts;
    CV_Mat dst;
    opts.src = mats.data();
    opts.srcSize = mats.size();
    opts.dst = &dst;

    auto res = OH_CV_Merge(opts);
    if (res != IMAGE_RESULT_SUCCESS) {
        return result.GetResult(res);
    }

    NapiValue dstMat(env);
    if (!CreateMat(dstMat, dst)) {
        return result.GetResult(IMAGE_RESULT_DATA_ABNORMAL);
    }
    ReleaseMat(dst);
    return result.GetResult(res, dstMat);
}


struct MinMaxLocDataHolder {
    MatDataHolder srcData;
    MatDataHolder srcMask;
    CV_Mat mask;
    double minValue;
    double maxValue;
    CV_Point minIndex;
    CV_Point maxIndex;
};

static bool ParseMinMaxLocOpts(napi_env env, napi_value value,
    CV_MinMaxLoc_Opts &opts, MinMaxLocDataHolder &holder)
{
    NapiValue arg(env, value);
    if (!ParseMat(arg, "src", opts.src, holder.srcData)) {
        DEBUG_ERR("Parse src mat failed");
        return false;
    }
    if (ParseMat(arg, "mask", holder.mask, holder.srcMask)) {
        opts.mask = &holder.mask;
    } else {
        DEBUG_ERR("Parse mask mat failed");
    }
    return true;
}

static bool CreateMinMaxLocResult(napi_env env, MinMaxLocDataHolder &holder, NapiValue &res)
{
    NapiValue nMinIndex(env);
    if (!nMinIndex.SetPropInt32("x", holder.minIndex.x)) {
        DEBUG_ERR("Set min index x failed");
        return false;
    }
    if (!nMinIndex.SetPropInt32("y", holder.minIndex.y)) {
        DEBUG_ERR("Set min index y failed");
        return false;
    }

    NapiValue nMaxIndex(env);
    if (!nMaxIndex.SetPropInt32("x", holder.maxIndex.x)) {
        DEBUG_ERR("Set max index x failed");
        return false;
    }
    if (!nMaxIndex.SetPropInt32("y", holder.maxIndex.y)) {
        DEBUG_ERR("Set max index y failed");
        return false;
    }

    if (!res.SetPropDouble("minValue", holder.minValue)) {
        DEBUG_ERR("Set minValue failed");
        return false;
    }
    if (!res.SetPropDouble("maxValue", holder.maxValue)) {
        DEBUG_ERR("Set maxValue failed");
        return false;
    }
    if (!res.SetProp("minIndex", nMinIndex)) {
        DEBUG_ERR("Set minIndex failed");
        return false;
    }
    if (!res.SetProp("maxIndex", nMaxIndex)) {
        DEBUG_ERR("Set maxIndex failed");
        return false;
    }
    return true;
}

napi_value OpenCVNDKTest::MinMaxLoc(napi_env env, napi_callback_info info)
{
    NapiValue result(env);
    NapiInfo napiInfo(env, info, SIZE_ONE);
    if (!napiInfo.init()) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }
    CV_MinMaxLoc_Opts opts;
    MinMaxLocDataHolder holder;
    if (!ParseMinMaxLocOpts(env, napiInfo.args_[ARGS_FIRST], opts, holder)) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }
    opts.minValue = &(holder.minValue);
    opts.maxValue = &(holder.maxValue);
    opts.minIndex = &(holder.minIndex);
    opts.maxIndex = &(holder.maxIndex);

    auto res = OH_CV_MinMaxLoc(opts);
    if (res != IMAGE_RESULT_SUCCESS) {
        return result.GetResult(res);
    }
    NapiValue nRes(env);
    if (!CreateMinMaxLocResult(env, holder, nRes)) {
        DEBUG_ERR("Create MinMaxLoc result failed");
        return result.GetResult(IMAGE_RESULT_DATA_ABNORMAL);
    }
    return result.GetResult(res, nRes);
}

struct NormalizeDataHolder {
    MatDataHolder srcData;
    CV_Mat mask;
    MatDataHolder maskData;
};

static bool ParseNormalizeOpts(napi_env env, napi_value value,
    CV_Normalize_Opts &opts, NormalizeDataHolder &holder)
{
    NapiValue arg(env, value);
    if (!ParseMat(arg, "src", opts.src, holder.srcData)) {
        DEBUG_ERR("Parse src mat failed");
        return false;
    }
    if (!arg.GetPropDouble("alpha", opts.alpha)) {
        DEBUG_ERR("Parse alpha failed");
    }

    if (!arg.GetPropDouble("beta", opts.beta)) {
        DEBUG_ERR("Parse beta failed");
    }

    if (!ParseNamedType(arg, "normType", opts.normType)) {
        DEBUG_ERR("Parse normType failed");
    }

    if (!arg.GetPropInt32("dType", opts.dType)) {
        DEBUG_ERR("Parse dType failed");
    }

    if (ParseMat(arg, "mask", holder.mask, holder.maskData)) {
        opts.mask = &holder.mask;
    } else {
        DEBUG_ERR("Parse mask failed");
    }
    return true;
}

napi_value OpenCVNDKTest::Normalize(napi_env env, napi_callback_info info)
{
    NapiValue result(env);
    NapiInfo napiInfo(env, info, SIZE_ONE);
    if (!napiInfo.init()) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }
    CV_Normalize_Opts opts;
    NormalizeDataHolder dataHolder;
    if (!ParseNormalizeOpts(env, napiInfo.args_[ARGS_FIRST], opts, dataHolder)) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }
    CV_Mat dst;
    opts.dst = &dst;
    auto res = OH_CV_Normalize(opts);
    if (res != IMAGE_RESULT_SUCCESS) {
        return result.GetResult(res);
    }

    NapiValue dstMat(env);
    if (!CreateMat(dstMat, dst)) {
        return result.GetResult(IMAGE_RESULT_DATA_ABNORMAL);
    }
    ReleaseMat(dst);
    return result.GetResult(res, dstMat);
}

struct MixChannelsDataHolder {
    std::vector<CV_Mat> srcs;
    std::vector<MatDataHolder> srcDatas;
    std::vector<CV_Mat> dsts;
    std::vector<MatDataHolder> dstDatas;
    std::vector<int32_t> formTo;
};

static bool ParseMatListOpts(NapiValue &arg, const std::string name, std::vector<CV_Mat> &mats,
    std::vector<MatDataHolder> &matDatas)
{
    std::vector<NapiValue> nVals;
    if (!arg.GetPropNapiArray(name, nVals) || nVals.empty()) {
        DEBUG_ERR("Parse napi %{public}s mats failed", name.c_str());
        return false;
    }
    mats.resize(nVals.size());
    matDatas.resize(nVals.size());
    for (size_t i = SIZE_ZERO; i < nVals.size(); i++ ) {
        if (!ParseMat(nVals[i], mats[i], matDatas[i])) {
            DEBUG_ERR("Parse %{public}s mat %{public}d failed", name.c_str(), i);
            return false;
        }
    }
    return true;
}

static bool ParseMixChannelsOpts(napi_env env, napi_value value,
    CV_MixChannels_Opts &opts, MixChannelsDataHolder &holder)
{
    NapiValue arg(env, value);

    if (!ParseMatListOpts(arg, "src", holder.srcs, holder.srcDatas)) {
        DEBUG_ERR("Parse src mat list failed");
        return false;
    }
    opts.src = holder.srcs.data();
    opts.srcSize = holder.srcs.size();

    if (!ParseMatListOpts(arg, "dst", holder.dsts, holder.dstDatas)) {
        DEBUG_ERR("Parse src mat list failed");
        return false;
    }
    opts.dst = holder.dsts.data();
    opts.dstSize = holder.dsts.size();

    std::vector<NapiValue> nFormTo;
    if (!arg.GetPropNapiArray("formTo", nFormTo) || nFormTo.empty()) {
        DEBUG_ERR("Parse napi nFormTo list failed");
        return false;
    }
    holder.formTo.resize(nFormTo.size());
    for (size_t i = SIZE_ZERO; i < nFormTo.size(); i++ ) {
        if (!nFormTo[i].ToInt32(holder.formTo[i])) {
            DEBUG_ERR("Parse formTo %{public}d failed", i);
            return false;
        }
    }
    opts.formTo = holder.formTo.data();
    opts.formToSize = holder.formTo.size();

    if (!arg.GetPropUInt32("parisCount", opts.parisCount)) {
        DEBUG_ERR("Parse parisCount failed");
        return false;
    }
    return true;
}

napi_value OpenCVNDKTest::MixChannels(napi_env env, napi_callback_info info)
{
    NapiValue result(env);
    NapiInfo napiInfo(env, info, SIZE_ONE);
    if (!napiInfo.init()) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }
    CV_MixChannels_Opts opts;
    MixChannelsDataHolder dataHolder;
    if (!ParseMixChannelsOpts(env, napiInfo.args_[ARGS_FIRST], opts, dataHolder)) {
        return result.GetResult(IMAGE_RESULT_INVALID_PARAMETER);
    }
    auto res = OH_CV_MixChannels(opts);
    if (res != IMAGE_RESULT_SUCCESS) {
        return result.GetResult(res);
    }

    std::vector<NapiValue> nMats;
    for (size_t i = SIZE_ZERO; i < opts.dstSize; i++ ) {
        NapiValue nMat(env);
        if (!CreateMat(nMat, opts.dst[i])) {
            DEBUG_ERR("Create mat failed %{public}d", i);
            return result.GetResult(IMAGE_RESULT_DATA_ABNORMAL);
        }
        nMats.push_back(nMat);
        ReleaseMat(opts.dst[i]);
    }

    NapiValue nRes(env);
    nRes.FromNapiArray(nMats);
    return result.GetResult(res, nRes);
}


#define STATIC_FUNCTION(n, f) { (n), nullptr, (f), nullptr, nullptr, nullptr, napi_static, nullptr }
napi_value OpenCVNDKTest::Init(napi_env env, napi_value exports)
{
    napi_property_descriptor props[] = {
        STATIC_FUNCTION("erode",Erode),
        STATIC_FUNCTION("dilate",Dilate),
        STATIC_FUNCTION("morphologyEx",MorphologyEx),
        STATIC_FUNCTION("resize",Resize),
        STATIC_FUNCTION("warpAffine",WarpAffine),
        STATIC_FUNCTION("warpPerspective",WarpPerspective),
        STATIC_FUNCTION("remap",Remap),
        STATIC_FUNCTION("getRotationMatrix2D",GetRotationMatrix2D),
        STATIC_FUNCTION("getPerspectiveTransform",GetPerspectiveTransform),
        STATIC_FUNCTION("sobel",Sobel),
        STATIC_FUNCTION("threshold",Threshold),
        STATIC_FUNCTION("cvtColor",CvtColor),
        STATIC_FUNCTION("blur",Blur),
        STATIC_FUNCTION("fillPoly",FillPoly),
        STATIC_FUNCTION("adaptiveThreshold",AdaptiveThreshold),
        STATIC_FUNCTION("findContours",FindContours),
        STATIC_FUNCTION("boxFilter",BoxFilter),
        STATIC_FUNCTION("borderInterpolate",BorderInterpolate),
        STATIC_FUNCTION("countNonZero",CountNonZero),
        STATIC_FUNCTION("copyMakeBorder",CopyMakeBorder),
        STATIC_FUNCTION("split",Split),
        STATIC_FUNCTION("merge",Merge),
        STATIC_FUNCTION("minMaxLoc",MinMaxLoc),
        STATIC_FUNCTION("normalize",Normalize),
        STATIC_FUNCTION("mixChannels",MixChannels),
    };
    napi_define_properties(env, exports, sizeof(props) / sizeof(props[ARGS_FIRST]), props);
    return exports;
}

EXTERN_C_START
static napi_value ModuleRegister(napi_env env, napi_value exports)
{
    OpenCVNDKTest::Init(env, exports);
    return exports;
}

static napi_module demoModule = {
    .nm_version =1,
    .nm_flags = 0,
    .nm_filename = nullptr,
    .nm_register_func = ModuleRegister,
    .nm_modname = "OpenCVNativeTest",
    .nm_priv = nullptr,
    .reserved = { 0 },
};

__attribute__((constructor)) void RegisterModule(void)
{
    napi_module_register(&demoModule);
}
EXTERN_C_END
}
}