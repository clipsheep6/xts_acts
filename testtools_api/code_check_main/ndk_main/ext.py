import os
import json, re, time, ext
from ndkwhiteList import sourcs_parse

def file_name(file_dir):
    for root, dirs, files in os.walk(file_dir):
        return files

def save_json(temp_path, mod_namelist):
    mod_namelist = str(mod_namelist.split('\\')[-1])
    with open(temp_path, 'r', encoding="utf-8") as json_file:
        tmp_json = json.load(json_file)
        for i in range(0, len(tmp_json)):
            tmp_json[i]["is_white"] = ""
            tmp_json[i]["desc"] = ""
            tmp_json[i]["ApiLevel"] = "100"
            tmp_json[i]["Count"] = 0
            tmp_json[i]["Used"] = "否"
            tmp_json[i]["api_module_name"] = mod_namelist
            tmp_json[i]["subsystem_en"] = "appexecfwk"
            tmp_json[i]["subsystem_ch"] = "包管理子系统"
            tmp_json[i]["subsystem_ch"] = "包管理子系统"
        json_file.close()
    with open(temp_path, 'w+', encoding='utf-8') as json_file:
        json_file.write(json.dumps(tmp_json, indent=4, ensure_ascii=False))
        json_file.close()

def get_json_fun(file_path, str2, package_name):
    file_list = file_name(file_path)

    list_index = 0
    for i in range(0, len(file_list)):
        if package_name in file_list[i]:
            list_index = i
    json_abs_path = "" + file_path + "\\" + file_list[list_index]
    with open(json_abs_path, 'r', encoding="utf-8") as f:
        file_json = json.load(f)
        f.close()
        fun_list = []
        # 获取json文件中的方法
        for j in range(0, len(file_json)):
            fun_list.append(file_json[j]["name"])
        # 用方法list去cpp文件中比对
        for j in range(0, len(fun_list)):
            # pattern = re.compile('.*?(' + fun_list[j] + r'\(([^()\r\n]+)?\).*?|' + fun_list[j] + r'\b.*?=|' + fun_list[j] + r'\b.*?;)')
            ppstr = r".*?({0}\(([^()\r\n]+)?\).*?|.*?{0}\b.*?=|.*?{0}\b.*?;)"
            ppstr = ppstr.format(fun_list[j])
            pattern = ''+ppstr+''
            tmp_str = re.findall(pattern, str2)
            # 添加正则规则！！！！！
            # 排除printf
            num = 0
            if "printf" in fun_list[i]:
                pass
            else:
                for i in range(0, len(tmp_str)):
                    if "printf" in str(tmp_str[i]):
                        num = num + 1
            # count = len(pattern.findall(str)) - pattern.findall(str).count("printf") - pattern.findall(str).count("%d") - pattern.findall(str).count("%d")
            count = len(tmp_str) - num
            if count >= 0:
                file_json[j]["Count"] = count
                file_json[j]["Used"] = "是"
        # print(file_json)
        # print("--------------------------------------------------------")
        file_json = sourcs_parse(file_json)
        with open(json_abs_path, 'w', encoding="utf-8") as writef:
            writef.write(json.dumps(file_json, indent=4, ensure_ascii=False))
            writef.close()