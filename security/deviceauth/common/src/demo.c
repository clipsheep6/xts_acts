#include "json_utils.h"
const char *g_tmpStr;
const int g_typeSymmetric = 1;
const int g_authCodeId1 = 102;
const int g_authCodeId2 = 103;
const char *authCode = "1234123412341234123412341234123412341234123412341234123412341234";
const char *SymmetricCredential(int credentialType, int authCodeId, const char *authCode)
{
    CJson *json = CreateJson();
    AddIntToJson(json, "credentialType", credentialType);
    AddIntToJson(json, "authCodeId", authCodeId);
    AddStringToJson(json, "authCode", authCode);
    g_tmpStr = PackJsonToString(json);
    FreeJson(json);
    return g_tmpStr;
}

"{\"deviceList\":["
    "{\"udid\":devB,\"deviceId\":\"devB\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
    "\"credential\":{\"credentialType\":1,\"authCodeId\":102,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}},"
    "{\"udid\":devC,\"deviceId\":\"devC\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
    "\"credential\":{\"credentialType\":1,\"authCodeId\":103,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}"
    "]}";

CJson *json = CreateJson();
CJson *deviceList = CreateJsonArray();
CJson *device1 = CreateJsonFromString(SymmetricCredential(g_typeSymmetric, g_authCodeId1, authCode));
CJson *device2 = CreateJsonFromString(SymmetricCredential(g_typeSymmetric, g_authCodeId2, authCode));
AddObjToArray(deviceList, device1);
AddObjToArray(deviceList, device2);


