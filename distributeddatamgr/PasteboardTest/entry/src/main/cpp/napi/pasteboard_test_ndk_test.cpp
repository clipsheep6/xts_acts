#include "napi/native_api.h"
#include <iostream>
#include <string>
#include "udmf_meta.h"
#include "uds.h"
#include "utd.h"
#include "oh_pasteboard.h "
#include "oh_pasteboard.h"
#include "oh_pasteboard_err_code.h"




static napi_value OH_PasteboardSubscriber_Create0100(napi_env env, napi_callback_info info)
{
    OH_PasteboardObserver* Observer = OH_PasteboardObserver_Create();
    napi_value result = nullptr;
    napi_create_int32(env, observer != nullptr, &result);
    OH_PasteboardObserver_Destroy(observer);
    OH_PasteboardObserver_Destroy(nullptr);
    return result;
}


static napi_value OH_PasteboardObserver_SetData0100(napi_env env, napi_callback_info info)
{

    OH_Pasteboard* pasteboard = OH_Pasteboard_Create();
    void* context = static_cast<void*>(pasteboard);
    OH_PasteboardObserver* observer = OH_PasteboardObserver_Create();
    int setRes1 = OH_PasteboardObserver_SetData(observer, context, CallbackFunc, ContextFinalizeFunc);
    napi_create_int32(env, setRes1 == ERR_OK, &setRes1);
    OH_PasteboardObserver_Destroy(observer);
    OH_Pasteboard_Destroy(pasteboard);
    return setRes1;
}



static napi_value OH_PasteboardObserver_SetData0200(napi_env env, napi_callback_info info)
{
    OH_Pasteboard* pasteboard = OH_Pasteboard_Create();
    void* context = static_cast<void*>(pasteboard);
    OH_PasteboardObserver* observer = OH_PasteboardObserver_Create();

    int setRes1 = OH_PasteboardObserver_SetData(nullptr, context, CallbackFunc, ContextFinalizeFunc);

    napi_create_int32(env, setRes1 == ERR_INVALID_PARAMETER, &setRes1);
   
    OH_PasteboardObserver_Destroy(observer);
    OH_Pasteboard_Destroy(pasteboard);
    return setRes1;

}

static napi_value OH_PasteboardObserver_SetData0300(napi_env env, napi_callback_info info)
{
    OH_Pasteboard* pasteboard = OH_Pasteboard_Create();
    void* context = static_cast<void*>(pasteboard);
    OH_PasteboardObserver* observer = OH_PasteboardObserver_Create();
    int setRes2 = OH_PasteboardObserver_SetData(observer, context, nullptr, ContextFinalizeFunc);
    napi_create_int32(env, setRes2 == ERR_INVALID_PARAMETER, &setRes2);
    OH_PasteboardObserver_Destroy(observer);
    OH_Pasteboard_Destroy(pasteboard);
    return setRes2;
}


static napi_value OH_PasteboardObserver_SetData0400(napi_env env, napi_callback_info info)
{

    OH_Pasteboard* pasteboard = OH_Pasteboard_Create();
    void* context = static_cast<void*>(pasteboard);
    OH_PasteboardObserver* observer = OH_PasteboardObserver_Create();
    int setRes3 = OH_PasteboardObserver_SetData(observer, context, CallbackFunc, nullptr);
    napi_create_int32(env, setRes2 == ERR_INVALID_PARAMETER, &setRes3);
    OH_PasteboardObserver_Destroy(observer);
    OH_Pasteboard_Destroy(pasteboard);
    return setRes3;

}



static napi_value OH_Pasteboard_Create001(napi_env env, napi_callback_info info)
{
    OH_Pasteboard* pasteboard = OH_Pasteboard_Create();
    napi_value result = nullptr;
    napi_create_int32(env, pasteboard != nullptr, &result);
    OH_Pasteboard_Destroy(pasteboard);
    return result;
}



static napi_value OH_Pasteboard_Subscribe0100(napi_env env, napi_callback_info info)
{
    OH_Pasteboard* pasteboard = OH_Pasteboard_Create();
    OH_PasteboardObserver* observer = OH_PasteboardObserver_Create();
    OH_PasteboardObserver_SetData(observer, nullptr, CallbackFunc, ContextFinalizeFunc);
    int res = OH_Pasteboard_Subscribe(pasteboard, NOTIFY_LOCAL_DATA_CHANGE, observer);
    napi_create_int32(env, res == ERR_OK, &res);
    OH_Pasteboard_Destroy(pasteboard);
    OH_PasteboardObserver_Destroy(observer);
    return res;

}


static napi_value OH_Pasteboard_Subscribe0200(napi_env env, napi_callback_info info)
{
    OH_Pasteboard* pasteboard = OH_Pasteboard_Create();
    OH_PasteboardObserver* observer = OH_PasteboardObserver_Create();
    OH_PasteboardObserver_SetData(observer, nullptr, CallbackFunc, ContextFinalizeFunc);
    int resRepeat = OH_Pasteboard_Subscribe(pasteboard, NOTIFY_LOCAL_DATA_CHANGE, observer);
    napi_create_int32(env, resRepeat == ERR_OK, &resRepeat);
    OH_Pasteboard_Destroy(pasteboard);
    OH_PasteboardObserver_Destroy(observer);
    return resRepeat;
}


static napi_value OH_Pasteboard_Subscribe0300(napi_env env, napi_callback_info info)
{
    OH_Pasteboard* pasteboard = OH_Pasteboard_Create();
    OH_PasteboardObserver* observer = OH_PasteboardObserver_Create();
    OH_PasteboardObserver_SetData(observer, nullptr, CallbackFunc, ContextFinalizeFunc);

    int result = OH_Pasteboard_Subscribe(nullptr, NOTIFY_LOCAL_DATA_CHANGE, observer);
    napi_create_int32(env, resRepeat == ERR_INVALID_PARAMETER, &result);

    OH_Pasteboard_Destroy(pasteboard);
    OH_PasteboardObserver_Destroy(observer);
    return result;
}

static napi_value OH_Pasteboard_Subscribe0400(napi_env env, napi_callback_info info)
{
    OH_Pasteboard* pasteboard = OH_Pasteboard_Create();
    OH_PasteboardObserver* observer = OH_PasteboardObserver_Create();
    OH_PasteboardObserver_SetData(observer, nullptr, CallbackFunc, ContextFinalizeFunc);
    int result = OH_Pasteboard_Subscribe(pasteboard, 10, observer);
    napi_create_int32(env, result == ERR_INVALID_PARAMETER, &result);
    OH_Pasteboard_Destroy(pasteboard);
    OH_PasteboardObserver_Destroy(observer);
    return result;
}


static napi_value OH_Pasteboard_Subscribe0500(napi_env env, napi_callback_info info)

{
    OH_Pasteboard* pasteboard = OH_Pasteboard_Create();
    OH_PasteboardObserver* observer = OH_PasteboardObserver_Create();
    OH_PasteboardObserver_SetData(observer, nullptr, CallbackFunc, ContextFinalizeFunc);
    int resule = OH_Pasteboard_Subscribe(pasteboard, -1, observer);
    napi_create_int32(env, result == ERR_INVALID_PARAMETER, &result);
    OH_Pasteboard_Destroy(pasteboard);
    OH_PasteboardObserver_Destroy(observer);
    return result;

}



static napi_value OH_Pasteboard_Subscribe0600(napi_env env, napi_callback_info info)

{
    OH_Pasteboard* pasteboard = OH_Pasteboard_Create();
    OH_PasteboardObserver* observer = OH_PasteboardObserver_Create();
    OH_PasteboardObserver_SetData(observer, nullptr, CallbackFunc, ContextFinalizeFunc);
    int result = OH_Pasteboard_Subscribe(pasteboard, NOTIFY_LOCAL_DATA_CHANGE, nullptr);
    napi_create_int32(env, result == ERR_INVALID_PARAMETER, &result);
    OH_Pasteboard_Destroy(pasteboard);
    OH_PasteboardObserver_Destroy(observer);
    return result;
}


static napi_value OH_Pasteboard_Unsubcribe0100(napi_env env, napi_callback_info info)
{
    OH_Pasteboard* pasteboard = OH_Pasteboard_Create();
    OH_PasteboardObserver* observer = OH_PasteboardObserver_Create();
    OH_PasteboardObserver_SetData(observer, nullptr, CallbackFunc, ContextFinalizeFunc);
    OH_Pasteboard_Subscribe(pasteboard, NOTIFY_LOCAL_DATA_CHANGE, observer);

    int result = OH_Pasteboard_Unsubscribe(pasteboard, NOTIFY_LOCAL_DATA_CHANGE, observer);
    napi_create_int32(env, result == ERR_INVALID_PARAMETER, &result);

    OH_Pasteboard_Destroy(pasteboard);
    OH_PasteboardObserver_Destroy(observer);
    return result;
}



static napi_value OH_Pasteboard_Unsubcribe0200(napi_env env, napi_callback_info info)
{
    OH_Pasteboard* pasteboard = OH_Pasteboard_Create();
    OH_PasteboardObserver* observer = OH_PasteboardObserver_Create();
    OH_PasteboardObserver_SetData(observer, nullptr, CallbackFunc, ContextFinalizeFunc);

    int result = OH_Pasteboard_Unsubscribe(nullptr, NOTIFY_LOCAL_DATA_CHANGE, observer);
    napi_create_int32(env, result == ERR_INVALID_PARAMETER, &result);
    OH_Pasteboard_Destroy(pasteboard);
    OH_PasteboardObserver_Destroy(observer);
    return result;
}


static napi_value OH_Pasteboard_Unsubcribe0300(napi_env env, napi_callback_info info)
{
    OH_Pasteboard* pasteboard = OH_Pasteboard_Create();
    OH_PasteboardObserver* observer = OH_PasteboardObserver_Create();
    OH_PasteboardObserver_SetData(observer, nullptr, CallbackFunc, ContextFinalizeFunc);
    int result = OH_Pasteboard_Unsubscribe(pasteboard, 10, observer);
    napi_create_int32(env, result == ERR_INVALID_PARAMETER, &result);

    OH_Pasteboard_Destroy(pasteboard);
    OH_PasteboardObserver_Destroy(observer);
    return result;
}

static napi_value OH_Pasteboard_Unsubcribe0400(napi_env env, napi_callback_info info)
{
    OH_Pasteboard* pasteboard = OH_Pasteboard_Create();
    OH_PasteboardObserver* observer = OH_PasteboardObserver_Create();
    OH_PasteboardObserver_SetData(observer, nullptr, CallbackFunc, ContextFinalizeFunc);
    int result = OH_Pasteboard_Unsubscribe(pasteboard, -1, observer);
    napi_create_int32(env, result == ERR_INVALID_PARAMETER, &result);

    OH_Pasteboard_Destroy(pasteboard);
    OH_PasteboardObserver_Destroy(observer);
    return result;
}


    

static napi_value OH_Pasteboard_Unsubcribe0500(napi_env env, napi_callback_info info)
{
    OH_Pasteboard* pasteboard = OH_Pasteboard_Create();
    OH_PasteboardObserver* observer = OH_PasteboardObserver_Create();
    OH_PasteboardObserver_SetData(observer, nullptr, CallbackFunc, ContextFinalizeFunc);
    int result = OH_Pasteboard_Unsubscribe(pasteboard, NOTIFY_LOCAL_DATA_CHANGE, nullptr);
    napi_create_int32(env, result == ERR_INVALID_PARAMETER, &result);

    OH_Pasteboard_Destroy(pasteboard);
    OH_PasteboardObserver_Destroy(observer);
    return result;
}


static napi_value OH_Pasteboard_IsRemoteData001(napi_env env, napi_callback_info info)
{
    OH_Pasteboard* pasteboard = OH_Pasteboard_Create();

    bool result = OH_Pasteboard_IsRemoteData(pasteboard);
    EXPECT_FALSE(res);

    OH_Pasteboard_Destroy(pasteboard);
}



static napi_value OH_Pasteboard_GetDataSrouce001(napi_env env, napi_callback_info info)
{
    OH_Pasteboard* pasteboard = OH_Pasteboard_Create();
    OH_UdmfData* setData = OH_UdmfData_Create();
    OH_UdmfRecord* record = OH_UdmfRecord_Create();
    OH_UdsPlainText* plainText = OH_UdsPlainText_Create();
    char content[] = "hello world";
    OH_UdsPlainText_SetContent(plainText, content);
    OH_UdmfRecord_AddPlainText(record, plainText);
    OH_UdmfData_AddRecord(setData, record);

    OH_Pasteboard_SetData(pasteboard, setData);

    int len = 100;
    char source[100];
    int result = OH_Pasteboard_GetDataSource(pasteboard, source, len);
    napi_create_int32(env, result == ERR_INVALID_PARAMETER, &result);  
    OH_Pasteboard_Destroy(pasteboard);
    return result;
}



static napi_value OH_Pasteboard_HasType001(napi_env env, napi_callback_info info)
{
    OH_Pasteboard* pasteboard = OH_Pasteboard_Create();
    OH_UdmfData* setData = OH_UdmfData_Create();
    OH_UdmfRecord* record = OH_UdmfRecord_Create();
    OH_UdsPlainText* plainText = OH_UdsPlainText_Create();
    char content[] = "hello world";
    OH_UdsPlainText_SetContent(plainText, content);
    OH_UdmfRecord_AddPlainText(record, plainText);
    OH_UdmfData_AddRecord(setData, record);

    OH_Pasteboard_SetData(pasteboard, setData);
    char type[] = "general.plain-text";
    bool result = OH_Pasteboard_HasType(pasteboard, type);

    napi_create_int32(env, result == false, &result);
    
    OH_Pasteboard_Destroy(pasteboard);
    return result;

}


static napi_value OH_Pasteboard_HasType001(napi_env env, napi_callback_info info)
{
    OH_Pasteboard* pasteboard = OH_Pasteboard_Create();
    OH_Pasteboard_ClearData(pasteboard);
    bool res = OH_Pasteboard_HasData(pasteboard);
    NAPI_ASSERT(env, res == false, "createTable is fail.");
    OH_UdmfData* setData = OH_UdmfData_Create();
    OH_UdmfRecord* record = OH_UdmfRecord_Create();
    OH_UdsPlainText* plainText = OH_UdsPlainText_Create();
    char content[] = "hello world";
    OH_UdsPlainText_SetContent(plainText, content);
    OH_UdmfRecord_AddPlainText(record, plainText);
    OH_UdmfData_AddRecord(setData, record);

    OH_Pasteboard_SetData(pasteboard, setData);

    res = OH_Pasteboard_HasData(pasteboard);
    NAPI_ASSERT(env, res == true, "createTable is fail.");

    
    OH_Pasteboard_Destroy(pasteboard);

}


static napi_value OH_Pasteboard_HasData001(napi_env env, napi_callback_info info)
HWTEST_F(PasteboardCapiTest, OH_Pasteboard_HasData001, TestSize.Level1)
{
    OH_Pasteboard* pasteboard = OH_Pasteboard_Create();
    OH_Pasteboard_ClearData(pasteboard);
    bool res = OH_Pasteboard_HasData(pasteboard);
    
    EXPECT_FALSE(res);

    NAPI_ASSERT(env, errCode == 0, "createTable is fail.");

    OH_UdmfData* setData = OH_UdmfData_Create();
    OH_UdmfRecord* record = OH_UdmfRecord_Create();
    OH_UdsPlainText* plainText = OH_UdsPlainText_Create();
    char content[] = "hello world";
    OH_UdsPlainText_SetContent(plainText, content);
    OH_UdmfRecord_AddPlainText(record, plainText);
    OH_UdmfData_AddRecord(setData, record);

    OH_Pasteboard_SetData(pasteboard, setData);

    res = OH_Pasteboard_HasData(pasteboard);
    EXPECT_TRUE(res);
    
    OH_Pasteboard_Destroy(pasteboard);
}




HWTEST_F(PasteboardCapiTest, OH_Pasteboard_ClearData001, TestSize.Level1)
{
    OH_Pasteboard* pasteboard = OH_Pasteboard_Create();
    bool res = OH_Pasteboard_ClearData(pasteboard);
    EXPECT_EQ(res, ERR_OK);
    
    OH_Pasteboard_Destroy(pasteboard);
}



HWTEST_F(PasteboardCapiTest, OH_Pasteboard_SetData001, TestSize.Level1)
{
    OH_Pasteboard* pasteboard = OH_Pasteboard_Create();
    OH_UdmfData *setData = OH_UdmfData_Create();
    OH_UdmfRecord *record = OH_UdmfRecord_Create();
    OH_UdsPlainText *plainText = OH_UdsPlainText_Create();
    char content[] = "hello world";
    OH_UdsPlainText_SetContent(plainText, content);
    OH_UdmfRecord_AddPlainText(record, plainText);
    OH_UdmfData_AddRecord(setData, record);

    bool res = OH_Pasteboard_SetData(pasteboard, setData);
    EXPECT_EQ(res, ERR_OK);
    
    OH_Pasteboard_Destroy(pasteboard);
    OH_UdsPlainText_Destroy(plainText);
    OH_UdmfRecord_Destroy(record);
    OH_UdmfData_Destroy(setData);
}






HWTEST_F(PasteboardCapiTest, OH_Pasteboard_GetData001, TestSize.Level1)
{
    OH_Pasteboard* pasteboard = OH_Pasteboard_Create();
    OH_UdmfData* setData = OH_UdmfData_Create();
    OH_UdmfRecord* record = OH_UdmfRecord_Create();
    OH_UdsPlainText* plainText = OH_UdsPlainText_Create();
    char content[] = "hello world";
    OH_UdsPlainText_SetContent(plainText, content);
    OH_UdmfRecord_AddPlainText(record, plainText);
    OH_UdmfData_AddRecord(setData, record);

    int res = OH_Pasteboard_SetData(pasteboard, setData);
    EXPECT_EQ(res, ERR_OK);

    int status = -1;
    OH_UdmfData* getData = OH_Pasteboard_GetData(pasteboard, &status);
    EXPECT_EQ(status, ERR_OK);
    EXPECT_NE(getData, nullptr);

    unsigned int count = 0;
    OH_UdmfRecord **getRecords = OH_UdmfData_GetRecords(getData, &count);
    EXPECT_EQ(count, 1);
    OH_UdsPlainText *getPlainText = OH_UdsPlainText_Create();
    OH_UdmfRecord_GetPlainText(getRecords[0], getPlainText);
    const char *getContent = OH_UdsPlainText_GetContent(getPlainText);
    PASTEBOARD_HILOGI(PASTEBOARD_MODULE_SERVICE, "content is %{public}s", getContent);
    EXPECT_EQ(strcmp(getContent, content), 0);

    OH_Pasteboard_Destroy(pasteboard);
    OH_UdsPlainText_Destroy(plainText);
    OH_UdsPlainText_Destroy(getPlainText);
    OH_UdmfRecord_Destroy(record);
    OH_UdmfData_Destroy(setData);
    OH_UdmfData_Destroy(getData);
}




HWTEST_F(PasteboardCapiTest, OH_Pasteboard_GetData002, TestSize.Level1)
{
    OH_Pasteboard* pasteboard = OH_Pasteboard_Create();
    OH_UdmfData* setData = OH_UdmfData_Create();
    OH_UdmfRecord* record = OH_UdmfRecord_Create();
    OH_UdmfRecordProvider* provider = OH_UdmfRecordProvider_Create();
    EXPECT_NE(provider, nullptr);
    OH_UdmfRecordProvider_SetData(provider, static_cast<void *>(record), GetDataCallback, ContextFinalizeFunc);
    OH_UdmfData_AddRecord(setData, record);

    const char* types[3] = { "general.plain-text", "general.hyperlink", "general.html" };
    OH_UdmfRecord_SetProvider(record, types, 3, provider);
    int res = OH_Pasteboard_SetData(pasteboard, setData);
    EXPECT_EQ(res, ERR_OK);

    int status = -1;
    OH_UdmfData* getData = OH_Pasteboard_GetData(pasteboard, &status);
    EXPECT_EQ(status, ERR_OK);
    EXPECT_NE(getData, nullptr);

    unsigned int count = 0;
    OH_UdmfRecord **getRecords = OH_UdmfData_GetRecords(getData, &count);
    EXPECT_EQ(count, 1);
    OH_UdsPlainText *getPlainText = OH_UdsPlainText_Create();
    OH_UdmfRecord_GetPlainText(getRecords[0], getPlainText);
    const char *getContent = OH_UdsPlainText_GetContent(getPlainText);
    EXPECT_EQ(strcmp(getContent, PLAINTEXT_CONTENT), 0);

    OH_UdsHyperlink *getHyperLink = OH_UdsHyperlink_Create();
    OH_UdmfRecord_GetHyperlink(getRecords[0], getHyperLink);
    const char *getUrl = OH_UdsHyperlink_GetUrl(getHyperLink);
    EXPECT_EQ(strcmp(getUrl, HYPERLINK_URL), 0);
    OH_Pasteboard_Destroy(pasteboard);
    OH_UdsPlainText_Destroy(getPlainText);
    OH_UdsHyperlink_Destroy(getHyperLink);
    OH_UdmfRecord_Destroy(record);
    OH_UdmfData_Destroy(setData);
    OH_UdmfData_Destroy(getData);
}





HWTEST_F(PasteboardCapiTest, OH_Pasteboard_GetData003, TestSize.Level1)
{
    char typeId[] = "ApplicationDefined-myType";
    unsigned char entry[] = "CreateGeneralRecord1";
    unsigned int count = sizeof(entry);
    OH_UdmfRecord *record = OH_UdmfRecord_Create();
    int addRes1 = OH_UdmfRecord_AddGeneralEntry(record, typeId, entry, count);
    EXPECT_EQ(addRes1, ERR_OK);

    OH_UdmfData* setData = OH_UdmfData_Create();
    OH_UdmfData_AddRecord(setData, record);
    OH_Pasteboard* pasteboard = OH_Pasteboard_Create();
    int res = OH_Pasteboard_SetData(pasteboard, setData);
    EXPECT_EQ(res, ERR_OK);

    int status = -1;
    OH_UdmfData* getData = OH_Pasteboard_GetData(pasteboard, &status);
    EXPECT_EQ(status, ERR_OK);
    EXPECT_NE(getData, nullptr);

    unsigned int getrecordCount = 0;
    OH_UdmfRecord **getRecords = OH_UdmfData_GetRecords(getData, &getrecordCount);
    EXPECT_EQ(getrecordCount, 1);

    unsigned int getCount = 0;
    unsigned char *getEntry;
    int getRes = OH_UdmfRecord_GetGeneralEntry(getRecords[0], typeId, &getEntry, &getCount);
    EXPECT_EQ(getRes, ERR_OK);
    EXPECT_EQ(getCount, count);
    EXPECT_EQ(memcmp(entry, getEntry, getCount), 0);

    OH_Pasteboard_Destroy(pasteboard);
    OH_UdmfRecord_Destroy(record);
    OH_UdmfData_Destroy(setData);
    OH_UdmfData_Destroy(getData);
}

