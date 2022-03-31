#!/usr/bin/python
# -*- coding: UTF-8 -*-
import json
from openpyxl import load_workbook
packages = {"package":"thread2","classs":"threading2","function":"event","desc":"456789"}


def read_json(filepath):
    with open(filepath, 'r', encoding='gbk')as fp:
        json_data = json.load(fp)
        return json_data


def whites(filepath,packages):
    json_datas = read_json(filepath)
    flag = 0
    for json_data in json_datas:
        if packages["package"] == json_data["package"] and packages["classs"] == json_data["classs"] and packages["function"] == json_data["function"]:
            if packages["desc"]:
                json_data["desc"] = packages["desc"]
                flag = 0
        else:
            flag = 1
    if flag:
        json_datas.append(packages)
    return json_datas


def write_json(filepath, packages):
    datas = whites(filepath, packages)
    json_str = json.dumps(datas)
    with open(filepath, 'w') as json_file:
        json_file.write(json_str)


# def sourcs_parse(source_datas, white_path='./whiteList.json'):
#
#     white_datas = read_json(white_path)
#     for white_data in white_datas:
#         if white_data["package"] == api_module_name(source_datas["api_module_name"]):
#             for api_data in source_datas["api"]:
#                 if api_data["api_class_name"] == white_data["class"] and api_data["api_method_name"] == white_data["function"]:
#                     api_data["api_used_count"] = 1
#     return source_datas


def sourcs_parse(source_datas=None, white_path='./sdk_main/whiteList.xlsx'):
# def sourcs_parse(source_datas=None, white_path='./whiteList.xlsx'):
    white_json_list = []
    wb = load_workbook(white_path)
    sh = wb['WhiteList']
    for item in list(sh.rows)[1:]:
        values = []
        json_one = {"subsystem_ch": "", "subsystem_en": "", "api_module_name": "", "api": []}
        for val in item:
            values.append(val.value)
        json_one['subsystem_ch'] = values[0]
        json_one['subsystem_en'] = values[1]
        json_one['api_module_name'] = values[2]
        api = {}
        api["api_class_name"] = values[3]
        api["api_method_name"] = values[4]
        api["api_type"] = values[5]
        api["api_level"] = values[6]
        api["api_used_count"] = values[7]
        api["since"] = values[8]
        api["api_used"] = values[9]
        api["lines"] = values[10]
        api["files"] = values[11]
        api["is_white"] = values[12]
        api["desc"] = values[13]
        json_one['api'].append(api)
        white_json_list.append(json_one)
    for white_data in white_json_list:
        source_datas["api_module_name"] = source_datas["api_module_name"].split("//")[-1]
        source_datas["api_module_name"] = source_datas["api_module_name"].replace(".d.ts", "")
        if white_data["api_module_name"] == api_module_name(source_datas["api_module_name"]):
            for api_data in source_datas["api"]:
                if api_data["api_class_name"] == white_data['api'][0]["api_class_name"] and api_data["api_method_name"] == white_data['api'][0]["api_method_name"]:
                    api_data["api_used_count"] = 1
                    api_data["api_used"] = "是"
                    api_data["is_white"] = "是"
                    api_data["desc"] = white_data['api'][0]["desc"]
    return source_datas

def api_module_name(data):
    module_name = data.split("\\")[-1]
    return module_name


if __name__ == '__main__':
    # write_json(filepath='./whiteList.json', packages=packages)
    json_str = {
    "subsystem_ch": "元能力子系统",
    "subsystem_en": "aafwk",
    "api_module_name": "@ohos.application.abilityDelegatorRegistry",
    "api": [
        {
            "api_class_name": "abilityDelegatorRegistry",
            "api_method_all": "declare namespace dataUriUtils {\r\n  \r\n  function getId(uri: string): number\r\n\r\n  \r\n  function attachId(uri: string, id: number): string\r\n\r\n  \r\n  function deleteId(uri: string): string\r\n\r\n  \r\n  function updateId(uri: string, id: number): string\r\n\r\n}",
            "api_method_name": "abilityDelegatorRegistry",
            "api_level": 30,
            "api_args_count": 0,
            "api_used_count": 112,
            "since": 7,
            "api_used": "否",
            "lines": [
                "",
                "       console.log('dataUriUtils attachIdSync start2",
                "       console.log('dataUriUtils attachIdSync_test s",
                "       var result = dataUriUtils.attachIdSync(\"com.i",
                "s.getIdSync(\"com.ix.dataUriUtils1221\");\n        cons",
                "s.getIdSync(\"com.ix.dataUriUtils/1221\");\n        con",
                "       console.log('dataUriUtils getIdSync start2 ')",
                "       console.log('dataUriUtils getIdSync start3 ')",
                "assertEqual(\"com.ix.dataUriUtils/123/456789\");\n     ",
                "       var result = dataUriUtils.getIdSync(\"com.ix.d",
                "       console.log('dataUriUtils getIdSync_test star",
                "ttachIdSync(\"com.ix.dataUriUtils/777\",idint);\n      ",
                "s.getIdSync(\"com.ix.dataUriUtils/-777\");\n        con",
                "assertEqual(\"com.ix.dataUriUtils/777/0\");\n        co",
                "assertEqual(\"com.ix.dataUriUtils/1122\");\n        con",
                "ttachIdSync(\"com.ix.dataUriUtils/123\",idint);\n      ",
                "       console.log('dataUriUtils getIdSync start4 ')",
                "       console.log('dataUriUtils getIdSync start1');",
                "       console.log('dataUriUtils attachIdSync start1",
                "       console.log('dataUriUtils getIdSync URI : ' +",
                "       console.log('dataUriUtils attachIdSync URI :'",
                "s.getIdSync(\"com.ix.dataUriUtils\");\n        console.",
                "s.getIdSync(\"com.ix.dataUriUtils/11234567890\");\n    ",
                "from '@ohos.ability.dataUriUtils'\nimport {describe, ",
                "ttachIdSync(\"com.ix.dataUriUtils\",idint);\n        co",
                "       console.log('dataUriUtils getIdSync start5 ')",
                "assertEqual(\"com.ix.dataUriUtils/123456789011\");\n   ",
                "       console.log('dataUriUtils attachIdSync start4",
                "       console.log('dataUriUtils attachIdSync start3"
            ],
            "files": [
                "DataUriUtilsJsSt.test.js"
            ],
            "is_white": " ",
            "desc": " "
        },
        {
            "api_class_name": "dataUriUtils",
            "api_method_name": "getId",
            "api_method_all": "function getId(uri: string",
            "api_args_count": 1,
            "api_level": 30,
            "api_used_count": 20,
            "since": 7,
            "api_used": "否",
            "lines": [
                "e.log('dataUriUtils getIdSync start5 ');\n    ",
                "e.log('dataUriUtils getIdSync_test start2 suc",
                "sult = dataUriUtils.getIdSync(\"com.ix.dataUri",
                "e.log('dataUriUtils getIdSync start2 ');\n    ",
                "e.log('dataUriUtils getIdSync_test start5 suc",
                "e.log('dataUriUtils getIdSync_test start3 suc",
                "e.log('dataUriUtils getIdSync start3 ');\n    ",
                "e.log('dataUriUtils getIdSync_test start4 suc",
                "e.log('dataUriUtils getIdSync start4 ');\n    ",
                "e.log('dataUriUtils getIdSync_test start1 suc",
                "e.log('dataUriUtils getIdSync URI : ' + resul",
                "e.log('dataUriUtils getIdSync start1');\n     "
            ],
            "files": [
                "DataUriUtilsJsSt.test.js"
            ],
            "is_white": " ",
            "desc": " "
        },
        {
            "api_class_name": "dataUriUtils",
            "api_method_name": "attachId",
            "api_method_all": "function attachId(uri: string, id: number",
            "api_args_count": 2,
            "api_level": 30,
            "api_used_count": 20,
            "since": 7,
            "api_used": "否",
            "lines": [
                "e.log('dataUriUtils attachIdSync_test start1 suc",
                "e.log('dataUriUtils attachIdSync start2 ');\n    ",
                "e.log('dataUriUtils attachIdSync URI :' + result",
                "sult = dataUriUtils.attachIdSync(\"com.ix.dataUri",
                "e.log('dataUriUtils attachIdSync start1 ');\n    ",
                "e.log('dataUriUtils attachIdSync start5 ');\n    ",
                "e.log('dataUriUtils attachIdSync_test start3 suc",
                "e.log('dataUriUtils attachIdSync start4 ');\n    ",
                "e.log('dataUriUtils attachIdSync_test start5 suc",
                "e.log('dataUriUtils attachIdSync start3 ');\n    ",
                "e.log('dataUriUtils attachIdSync_test start4 suc",
                "e.log('dataUriUtils attachIdSync_test start2 suc"
            ],
            "files": [
                "DataUriUtilsJsSt.test.js"
            ],
            "is_white": " ",
            "desc": " "
        },
        {
            "api_class_name": "AbilityLifecycleState",
            "api_method_name": "AbilityLifecycleState",
            "api_method_all": "function deleteId(uri: string",
            "api_args_count": 1,
            "api_level": 30,
            "api_used_count": 20,
            "since": 7,
            "api_used": "否",
            "lines": [
                "e.log('dataUriUtils deleteIdSync_test start1 suc",
                "e.log('dataUriUtils deleteIdSync_test start4 suc",
                "e.log('dataUriUtils deleteIdSync_test start3 suc",
                "e.log('dataUriUtils deleteIdSync start5 ');\n    ",
                "sult = dataUriUtils.deleteIdSync(\"com.ix.dataUri",
                "e.log('dataUriUtils deleteIdSync_test start2 suc",
                "e.log('dataUriUtils deleteIdSync start2 ');\n    ",
                "e.log('dataUriUtils deleteIdSync URI : ' + resul",
                "e.log('dataUriUtils deleteIdSync start4 ');\n    ",
                "e.log('dataUriUtils deleteIdSync_test start5 suc",
                "e.log('dataUriUtils deleteIdSync start1 ');\n    ",
                "e.log('dataUriUtils deleteIdSync start3 ');\n    "
            ],
            "files": [
                "DataUriUtilsJsSt.test.js"
            ],
            "is_white": " ",
            "desc": " "
        },
        {
            "api_class_name": "dataUriUtils",
            "api_method_name": "updateId",
            "api_method_all": "function updateId(uri: string, id: number",
            "api_args_count": 2,
            "api_level": 30,
            "api_used_count": 25,
            "since": 0,
            "api_used": "否",
            "lines": [
                "e.log('dataUriUtils updateIdSync start1 ');\n    ",
                "e.log('dataUriUtils updateIdSync_test start2 suc",
                "e.log('dataUriUtils updateIdSync start2 ');\n    ",
                "e.log('dataUriUtils updateIdSync start4 ');\n    ",
                "e.log('dataUriUtils updateIdSync start666 ');\n\n ",
                "e.log('dataUriUtils updateIdSync start3 ');\n    ",
                "       console.log('updateIdSync updateIdSync UR",
                "sult = dataUriUtils.updateIdSync(\"com.ix.dataUri",
                "e.log('dataUriUtils updateIdSync_test start3 suc",
                "e.log('dataUriUtils updateIdSync start5 ');\n\n   ",
                "e.log('dataUriUtils updateIdSync_test start4 suc",
                "e.log('dataUriUtils updateIdSync_test start1 suc",
                "e.log('updateIdSync updateIdSync URI : ' + resul"
            ],
            "files": [
                "DataUriUtilsJsSt.test.js"
            ],
            "is_white": " ",
            "desc": " "
        }
    ]
}
    sourcs_parse(source_datas=json_str)
