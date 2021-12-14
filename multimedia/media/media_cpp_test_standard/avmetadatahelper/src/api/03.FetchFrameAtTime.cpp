/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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

#include "ActsAVMetadataAPITest.h"
#include "gtest/gtest.h"

using namespace std;
using namespace OHOS;
using namespace OHOS::Media;
using namespace testing::ext;
using namespace TestAVMetadataBasic;

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_0100
    * @tc.name      : 01.FetchFrameAtTime after CreateAVMetadataHelper
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_0100, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    struct PixelMapParams param = {-1, -1, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_EQ(nullptr, frame);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_0200
    * @tc.name      : 02.FetchFrameAtTime after Release
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_0200, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/Aout_640_320.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {-1, -1, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->Release();
    frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_EQ(nullptr, frame);
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_0300
    * @tc.name      : 03.FetchFrameAtTime dstWidth -1
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_0300, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_320.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {-1, 316, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_0400
    * @tc.name      : 04.FetchFrameAtTime dstWidth 0
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_0400, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_320.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {0, 316, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_EQ(nullptr, frame);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_0500
    * @tc.name      : 05.FetchFrameAtTime dstWidth dstWidthMin - 1
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_0500, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_320.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {dstWidthMin - 1, 316, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_EQ(nullptr, frame);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_0600
    * @tc.name      : 06.FetchFrameAtTime dstWidth dstWidthMin
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_0600, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_320.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {dstWidthMin, 316, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_0700
    * @tc.name      : 07.FetchFrameAtTime dstWidth dstWidthMax
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_0700, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_320.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {dstWidthMax, 316, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_0800
    * @tc.name      : 08.FetchFrameAtTime dstWidth dstWidthMax + 1
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_0800, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_320.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {dstWidthMax + 1, 316, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_EQ(nullptr, frame);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_0900
    * @tc.name      : 09.FetchFrameAtTime dstWidth INT32_MAX
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_0900, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_320.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {INT32_MAX, 316, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_EQ(nullptr, frame);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_1000
    * @tc.name      : 10.FetchFrameAtTime dstWidth INT32_MAX + 1
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_1000, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_320.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {INT32_MAX + 1, 316, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_EQ(nullptr, frame);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_1100
    * @tc.name      : 11.FetchFrameAtTime dstHeight -1
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_1100, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_320.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {316, -1, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_1200
    * @tc.name      : 12.FetchFrameAtTime dstHeight 0
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_1200, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_320.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {316, 0, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_EQ(nullptr, frame);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_1300
    * @tc.name      : 13.FetchFrameAtTime dstHeight dstHeightMin - 1
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_1300, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_320.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {316, dstHeightMin - 1, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_EQ(nullptr, frame);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_1400
    * @tc.name      : 14.FetchFrameAtTime dstHeight dstHeightMin
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_1400, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_320.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {316, dstHeightMin, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_1500
    * @tc.name      : 15.FetchFrameAtTime dstHeight dstHeightMax
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_1500, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_320.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {316, dstHeightMax, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_1600
    * @tc.name      : 16.FetchFrameAtTime dstHeight dstHeightMax + 1
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_1600, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_320.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {316, dstHeightMax + 1, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_EQ(nullptr, frame);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_1700
    * @tc.name      : 17.FetchFrameAtTime dstHeight INT32_MAX
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_1700, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_320.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {316, INT32_MAX, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_EQ(nullptr, frame);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_1800
    * @tc.name      : 18.FetchFrameAtTime dstHeight INT32_MAX + 1
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_1800, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_320.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {316, INT32_MAX + 1, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_EQ(nullptr, frame);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_1900
    * @tc.name      : 19.FetchFrameAtTime PixelFormat UNKNOWN
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_1900, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_320.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {316, 316, PixelFormat::UNKNOWN};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_EQ(nullptr, frame);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_2000
    * @tc.name      : 20.FetchFrameAtTime PixelFormat RGB_888
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_2000, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_320.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {316, 316, PixelFormat::RGB_888};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_2100
    * @tc.name      : 21.FetchFrameAtTime PixelFormat RGB_565
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_2100, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_320.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {316, 316, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_2200
    * @tc.name      : 22.FetchFrameAtTime PixelFormat Unsupported Format
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_2200, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_320.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {316, 316, PixelFormat::RGBA_8888};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_EQ(nullptr, frame);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_2300
    * @tc.name      : 23.FetchFrameAtTime timeUs -1
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_2300, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_320.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {316, 316, PixelFormat::RGB_565};
    int64_t timeUs = -1;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_EQ(nullptr, frame);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_2400
    * @tc.name      : 24.FetchFrameAtTime timeUs INT64_MAX
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_2400, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_320.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {316, 316, PixelFormat::RGB_565};
    int64_t timeUs = INT64_MAX;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_EQ(nullptr, frame);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_2500
    * @tc.name      : 25.FetchFrameAtTime timeUs INT64_MAX + 1
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_2500, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_320.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {316, 316, PixelFormat::RGB_565};
    int64_t timeUs = INT64_MAX + 1;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_EQ(nullptr, frame);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_2600
    * @tc.name      : 26.FetchFrameAtTime AVMetadataQueryOption AV_META_QUERY_NEXT_SYNC
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_2600, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_320.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {316, 316, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_NEXT_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    timeUs = 1;
    frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    timeUs = 45000000;
    frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_2700
    * @tc.name      : 27.FetchFrameAtTime AVMetadataQueryOption AV_META_QUERY_PREVIOUS_SYNC
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_2700, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_320.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {316, 316, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_PREVIOUS_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    timeUs = 1;
    frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_2800
    * @tc.name      : 26.FetchFrameAtTime AVMetadataQueryOption AV_META_QUERY_CLOSEST_SYNC
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_2800, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_320.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {316, 316, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_CLOSEST_SYNC;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    timeUs = 1;
    frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    timeUs = 45000000;
    frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    helper->Release();
}

/**
    * @tc.number    : SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_2900
    * @tc.name      : 26.FetchFrameAtTime AVMetadataQueryOption AV_META_QUERY_CLOSEST
    * @tc.desc      : 
*/
HWTEST_F(ActsAVMetadataAPITest, SUB_MEDIA_AVMETADATAHELPER_API_FetchFrameAtTime_2900, Function | MediumTest | Level0)
{
    std::shared_ptr<TestAVMetadataHelper> helper = std::make_shared<TestAVMetadataHelper>();
    ASSERT_NE(nullptr, helper);
    ASSERT_EQ(true, helper->CreateAVMetadataHelper());
    std::string uri = TestParamsConfig::GetInstance().GetMountPath() +
    std::string("/out_640_320.mp4");
    ASSERT_EQ(RET_OK, helper->SetSource(uri, AVMetadataUsage::AV_META_USAGE_PIXEL_MAP));
    struct PixelMapParams param = {316, 316, PixelFormat::RGB_565};
    int64_t timeUs = 0;
    int32_t queryOption = AVMetadataQueryOption::AV_META_QUERY_CLOSEST;
    std::shared_ptr<PixelMap> frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    timeUs = 18000000;
    frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    timeUs = 45000000;
    frame = helper->FetchFrameAtTime(timeUs, queryOption, param);
    ASSERT_NE(nullptr, frame);
    helper->FrameToFile(frame, testInfo_->name(), timeUs, queryOption);
    helper->FrameToJpeg(frame, testInfo_->name(), timeUs, queryOption);
    helper->Release();
}
