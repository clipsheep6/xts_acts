import json
import os
import re
import time
import whitelist
import copy

result_json = {
    "subsystem_ch": "window",
    "subsystem_en": "window",
    "api_module_name": "@ohos.ability.featureAbility",
    "api": [
        {
            "api_class_name": " featureAbility ",
            "api_method_all": "function getWant(callback: AsyncCallback<Want>): void;",
            "api_method_name": " getWant",
            "api_type":"",
            "api_level": "30",
            "api_args_count": 0,
            "api_used_count": 0,
            "since": 0,
            "api_used":"否",
            "lines": [],
            "files": [],
            "is_white": " ",
            "desc": " ",
        }]
}


# 根据json文件，找到对应的子系统名称
def get_system_index_item(file_name):
    real_path = os.path.join(os.path.dirname(os.path.abspath(__file__)), 'system_index.json')
    with open(real_path, 'r', encoding='utf-8') as system_json:
        system_dict = json.loads(system_json.read())
    file_name = file_name.strip('@').strip()
    system_index_dict_item = system_dict.get(file_name)
    return system_index_dict_item

# 根据json文件，找到对应的version
def get_start_version(source_json):
    new_json = copy.deepcopy(source_json)
    dts_path = new_json['api_module_name']
    with open(dts_path, 'r', encoding='utf-8') as dts:
        content = dts.read().encode('utf-8')
        for i in range(0, len(new_json['api'])):
            re_zhushi = re.findall('(@since \d.*?/\*\*)', str(content), re.S)
            if re_zhushi:
                api_method_name = new_json['api'][i]['api_method_name']
                for k in range(0, len(re_zhushi)):
                    if api_method_name in re_zhushi[k]:
                        since = re.findall('@since (\d)', re_zhushi[k], re.S)
                        new_json['api'][i]['since'] = int(since[0])
                        break
                    else:
                        new_json['api'][i]['since'] = 0
            else:
                new_json['api'][i]['since'] = 0
                continue
    return new_json


def search_n(string, target, n):
    """
    寻找第n个target字符
    :param string:
    :param target:
    :param n:
    :return: r
    """
    r = string.find(target)
    while n > 1 and r >= 0:
        r = string.find(target, r + 1)
        n -= 1
    return r


def search_all(string, target):
    """
    寻找所有target字符串, 为了先大致筛选api content
    :param string:
    :param target:
    :return:result_list
    """
    result_list = []
    while target in string:
        r = string.find(target)
        result_list.append(r)
        string = string.replace(target, len(target) * ' ', 1)
    return result_list


def replace_char(string, char, index, index_end=None):
    string = list(string)
    if not index_end:
        string[index] = char
    else:
        for i in range(index, index_end+1):
            string[i] = char
    return ''.join(string)


def find_all_hua(string_cp, content):
    hua_index = 0
    all_hua_dict = {}
    while '{' in string_cp:
        right = 0
        left = search_n(string_cp, '{', 1)
        string_cp = string_cp.replace('{', ' ', 1)

        left_hua_num = 1
        right_hua_num = 0
        for index, str in enumerate(string_cp):
            if str == '{':
                left_hua_num += 1
            if str == '}':
                right_hua_num += 1
            if left_hua_num == right_hua_num and left_hua_num >= 1:
                right = index
                break
        if right:
            # 找到花括号前的一整行位置
            left_n = left
            # 额外情况：该段前面没有换行符，即直接是第一行开始
            huanhang_flag = False
            for str_index, str in enumerate(string_cp[:left]):
                if str == '\n':
                    huanhang_flag = True
                    left_n = str_index
            if not huanhang_flag:
                left_n = -1

            hua_index = hua_index + 1

            hua_name = re.findall('(.*?)\{', content[left_n+1:right+1])[0].strip()
            if ':' not in hua_name[-2:] and '<' not in hua_name[-2:]:
                all_hua_dict[hua_name] = (left_n + 1, right+1)
            string_cp = replace_char(string_cp, ' ', right)

    return all_hua_dict


def find_all_xiao(string_cp, all_api_dict, class_name, parent_level, key_name=None):
    string_cp_cache = string_cp
    string_cp_cache_shuxing = string_cp

    hua_index = 0
    all_xiao_dict = all_api_dict
    while '(' in string_cp:
        right = 0
        left = search_n(string_cp, '(', 1)
        string_cp = string_cp.replace('(', ' ', 1)

        left_hua_num = 1
        right_hua_num = 0
        for index, str in enumerate(string_cp):
            if str == '(':
                left_hua_num += 1
            if str == ')':
                right_hua_num += 1
            if left_hua_num == right_hua_num and left_hua_num >= 1:
                right = index
                break
        if right:
            # 找到小括号括号前的一整行位置
            left_n = left

            for str_index, str in enumerate(string_cp[:left]):
                if str == '\n':
                    left_n = str_index
            hua_index = hua_index + 1


            hua_name = ''.join(re.findall('(.*?)\(', string_cp_cache[left_n+1:right+1])).strip()
            types = ""
            # regex = re.compile(hua_name)
            # hua_name_counts = [(i.start(), i.end()) for i in re.finditer(regex, hua_name)]
            hua_type = ''.join(re.findall('.+', string_cp_cache[left_n+1:right+20])).strip()
            if "Promise" in hua_type:
                types = "Promise"
            elif "callback" in hua_type:
                types = "callback"

            if not hua_name:
                continue

            api_args_content = re.findall('\((.*)\)', string_cp_cache[left_n+1:right+1], re.S)[0]
            string_xiao_cache = api_args_content


            # 去除小括号内的花括号内容
            this_replace_hua_list = []
            while '{' in string_xiao_cache:
                this_right = 0
                left = search_n(string_xiao_cache, '{', 1)
                string_xiao_cache = string_xiao_cache.replace('{', ' ', 1)

                left_hua_num = 1
                right_hua_num = 0
                for index, str in enumerate(string_xiao_cache):
                    if str == '{':
                        left_hua_num += 1
                    if str == '}':
                        right_hua_num += 1
                    if left_hua_num == right_hua_num and left_hua_num >= 1:
                        this_right = index
                        break
                if this_right:
                    this_replace_hua_list.append(api_args_content[left-1:this_right+1])
                    string_xiao_cache = string_xiao_cache.replace(string_xiao_cache[left:this_right + 1], '')

            for item_str in this_replace_hua_list:
                api_args_content = api_args_content.replace(item_str, '{}', 1)

            if ':' not in api_args_content:
                api_args_count = 0
            else:
                api_args_count = len(search_all(api_args_content, ':'))

            # 目的是找到函数体后面的； 因为函数通常是以分号结束的
            right_all = right
            if 'constructor' not in string_cp_cache[left_n + 1:]:
                # 找到第一个)后的分号的位置才能确定
                # 第一个右小括号后的第一个分号
                xiaokuohao_flag = search_n(string_cp_cache[left_n + 1:], ')', 1) + left_n
                right_all = xiaokuohao_flag + search_n(string_cp_cache[xiaokuohao_flag + 1:], ';', 1) + 1

            api_method_name = hua_name
            api_type = types


            for item in ['class', 'enum', 'interface', 'function', 'declare namespace', 'namespace', 'declare', 'static']:
                api_method_name = api_method_name.replace(item, '')
            if ':' in api_method_name[-3:]:
                api_method_name = api_method_name.replace(':', '')
            if '?' in api_method_name[-3:]:
                api_method_name = api_method_name.replace('?', '')

            # api level
            if parent_level == 10 or parent_level == 20:
                this_level = parent_level+1
            else:
                this_level = parent_level

            all_xiao_dict['api'].append({
                "api_class_name": class_name,
                'api_method_name': api_method_name.replace("readonly",'').strip(),
                # 'api_method_name': api_method_name.strip(),
                'api_method_all': string_cp_cache[left_n + 1: right_all+1].strip(),
                'api_type':types,
                'api_args_count': api_args_count,
                "api_level": this_level,
                "api_used_count": 0,
                "since": 0,
                "api_used": "否",
                "lines": [],
                "files": [],
                "is_white": " ",
                "desc": " "
            })
            string_cp = replace_char(string_cp, ' ', right)
            string_cp_cache_shuxing = string_cp_cache_shuxing.replace(string_cp_cache[left_n + 1: right_all+1], '', 1)

    # 提取属性
    # 判断是否是enum，enum的属性不统计，且拿逗号分割，其他的是冒号，用分号分割
    if 'enum' in key_name:
        shuxing_all = re.findall('((.*)[=,].*?)[,\n\r)]+', string_cp_cache_shuxing)
        shuxing_api_level = 42
    else:
        shuxing_api_level = None
        shuxing_all = re.findall('((.*?)\?*:.*?);', string_cp_cache_shuxing)
        if 'class' in key_name:
            shuxing_api_level = 12
        elif 'interface' in key_name:
            shuxing_api_level = 22
        elif 'declare namespace' in key_name:
            shuxing_api_level = 31
        elif 'namespace' in key_name and 'declare' not in key_name:
            shuxing_api_level = 36

    for shuxing_item in shuxing_all:
        # print(shuxing_item)
        all_xiao_dict['api'].append({
            "api_class_name": class_name,
            'api_method_name': shuxing_item[1].replace("readonly",'').strip(),
            # 'api_method_name': shuxing_item[1].strip(),
            'api_method_all': shuxing_item[0].strip(),
            'api_type': "",
            'api_args_count': 1,
            "api_level": shuxing_api_level,
            "api_used_count": 0,
            "since": 0,
            "api_used":"否",
            "lines": [],
            "files": [],
            "is_white": " ",
            "desc": " "
        })

    return all_xiao_dict


def source_main(dir_path):
    source_files_list = []
    for root, dirs, files in os.walk(dir_path):
        for file in files:
            if file.endswith('.d.ts'):
                file_path = os.path.join(root, file)
                source_files_list.append(file_path)

    for source_file in source_files_list:
        all_file_api = []
        system_index_item = get_system_index_item(os.path.basename(source_file.split('.d.ts')[0]))
        all_api_dict = {
            'subsystem_ch': system_index_item.get('subsystem_ch') if system_index_item else None,
            'subsystem_en': system_index_item.get('subsystem_en') if system_index_item else None,
            'api_module_name': os.path.abspath(source_file),
            'api': [],
        }
        with open(source_file, 'rb') as ts:
            content = ts.read().decode('utf-8')
            # 去除注释
            re_zhushi = re.findall('(/\*.*?\*/)', content, re.S)
            # print(re_zhushi)
            if re_zhushi:
                for item in re_zhushi:
                    content = content.replace(item, '', 1)
            # content = re.sub(r'\/\*[\s\S]*?\*\/', "", content, re.S)
            content = re.sub('(import.*?\n)', "", content, re.S)
            # 去除import
            # re_import = re.findall('(import.*?\n)', content, re.S)
            # if re_import:
            #     for item in re_import:
            #         content = content.replace(item, '')
            string_cp = content
            all_hua_dict = find_all_hua(string_cp, content)
            # k是花括号前的内容 v是花括号整内容的索引
            for k, v in all_hua_dict.items():
                content_cp = content
                # print(content_cp)

                if 'type' in k:
                    continue
                else:
                    api_level = None
                    class_name = k
                    for item in ['class', 'enum', 'interface', 'function', 'declare namespace', 'namespace']:
                        class_name = class_name.replace('export', '')
                        class_name = class_name.replace('static', '')
                        class_name = class_name.replace('default', '')
                        class_name = class_name.replace(' ','')
                        # 待确认
                        if 'interface' in class_name and 'extends' in class_name:
                            if '>' in class_name:
                                extends = search_all(class_name, 'extends')
                                jiankuohao = search_all(class_name, '>')
                                if jiankuohao[-1] > extends[-1]:
                                    class_name = re.findall('.*interface(.*)', class_name)[0]
                                else:
                                    class_name = re.findall('interface(.*)extends', class_name)[0]
                            else:
                                class_name = re.findall('interface(.*?)extends', class_name)[0]
                            class_name = class_name.strip()
                        if 'class' in class_name and 'extends' in class_name:
                            if '>' in class_name:
                                extends = search_all(class_name, 'extends')
                                jiankuohao = search_all(class_name, '>')
                                if jiankuohao[-1] > extends[-1]:
                                    class_name = re.findall('.*class(.*)', class_name)[0]
                                else:
                                    class_name = re.findall('class(.*)extends', class_name)[0]
                            else:
                                class_name = re.findall('class(.*?)extends', class_name)[0]
                            class_name = class_name.strip()
                        elif item in class_name:
                            class_name = class_name.replace(item, '').strip()
                            if item == 'class':
                                api_level = 10
                                class_name = class_name.replace('declare', '').strip()
                                break
                            elif item == 'interface':
                                api_level = 20
                                class_name = class_name.replace('declare', '').strip()
                                break
                            elif item == 'declare namespace':
                                api_level = 30
                                break
                            elif item == 'namespace' and 'declare' not in class_name:
                                api_level = 35
                                break
                            elif item == 'enum':
                                api_level = 40
                                class_name = class_name.replace('declare', '').strip()
                                break

                    this_k_item = {
                        "api_class_name": class_name,
                        "api_method_all": content_cp[v[0]:v[1]].strip(),
                        "api_method_name": class_name,
                        "api_type": "",
                        "api_level": api_level,
                        "api_args_count": 0,
                        "api_used_count": 0,
                        "since": 0,
                        "api_used": "否",
                        "lines": [],
                        "files": [],
                        "is_white": " ",
                        "desc": " "
                    }

                    # ('____________xiao____________')
                    # (content_cp[v[0]:v[1]])
                    # ('____________xiao____________')

                    all_api_dict['api'].append(this_k_item)

                    this_content = content_cp[v[0]:v[1]]

                    for item in all_hua_dict.values():
                        if item[0] > v[0] and item[1] < v[1]:
                            content_cp = replace_char(content_cp, ' ', item[0], item[1])
                            this_content = content_cp[v[0]:v[1]]

                    string_cp_r = this_content

                    all_file_api = find_all_xiao(string_cp_r, all_api_dict, class_name=class_name, parent_level=api_level, key_name=k)

        # 找since
        try:
            pop_index = []
            all_file_api_since = get_start_version(all_file_api)

            for keys in all_file_api_since.keys():
                if keys == "api":
                    for index in range(len(all_file_api_since[keys])):
                        all_file_api_since[keys][index]["api_class_name"] = str(all_file_api_since[keys][index]["api_class_name"]).replace("declare", "").replace("<T>", "").replace("(", "").replace("callbackfn", "").replace("AlphabetIndexer", "").replace("extendsCommonMethod", "").replace("export ", "").replace("[", "").replace("]", "").replace("{ ", "").replace("$", "").replace(" callback", "").replace("const ", "").replace("extendsCommonShapeMethod ", "").replace("extendsCommonTransition ", "")
                        all_file_api_since[keys][index]["api_method_name"] = str(all_file_api_since[keys][index]["api_method_name"]).replace("declare", "").replace("<T>", "").replace("(", "").replace("callbackfn", "").replace("AlphabetIndexer", "").replace("extendsCommonMethod", "").replace("export ", "").replace("[", "").replace("]", "").replace("{ ", "").replace("$", "").replace(" callback", "").replace("const ", "").replace("extendsCommonShapeMethod ", "").replace("extendsCommonTransition ", "")
                        all_file_api_since[keys][index]["api_class_name"] = re.sub("<.*>", "", all_file_api_since[keys][index]["api_class_name"])
                        all_file_api_since[keys][index]["api_method_name"] = re.sub("<.*>", "", all_file_api_since[keys][index]["api_method_name"])
                        all_file_api_since[keys][index]["api_class_name"] = re.sub(":.+","", all_file_api_since[keys][index]["api_class_name"])
                        all_file_api_since[keys][index]["api_method_name"] = re.sub(":.+","",all_file_api_since[keys][index]["api_method_name"])
                        all_file_api_since[keys][index]["api_class_name"] = re.sub(",.+","", all_file_api_since[keys][index]["api_class_name"])
                        all_file_api_since[keys][index]["api_method_name"] = re.sub(",.+","",all_file_api_since[keys][index]["api_method_name"])
                        all_file_api_since[keys][index]["api_method_name"] = re.sub("( ^=\s\S.*)?","",all_file_api_since[keys][index]["api_method_name"])
                        all_file_api_since[keys][index]["api_method_name"] = re.sub("(type)\s\S+","",all_file_api_since[keys][index]["api_method_name"])
                        all_file_api_since[keys][index]["api_method_name"] = re.sub("( |)\s\S+","",all_file_api_since[keys][index]["api_method_name"])

                        all_file_api_since[keys][index]["api_method_name"] = all_file_api_since[keys][index]["api_method_name"].split("=")[0]
                        if "." in all_file_api_since[keys][index]["api_method_name"]\
                                or all_file_api_since[keys][index]["api_class_name"] == ")" or \
                            all_file_api_since[keys][index]["api_class_name"] == "})" or "?" in \
                            all_file_api_since[keys][index]["api_class_name"] or \
                            all_file_api_since[keys][index]["api_class_name"] == "|" or \
                            all_file_api_since[keys][index]["api_class_name"] == "" or \
                            all_file_api_since[keys][index]["api_method_name"] == ")" or \
                            all_file_api_since[keys][index]["api_method_name"] == "})" or "?" in \
                            all_file_api_since[keys][index]["api_method_name"] or \
                            all_file_api_since[keys][index]["api_method_name"] == "|" or \
                            all_file_api_since[keys][index]["api_method_name"] == "":
                            pop_index.append(index)
                for pindex in pop_index[::-1]:
                    all_file_api_since[keys].pop(pindex)

        # 最终生成的source_json
            with open(f'{source_file}_source.json', 'w+') as source_json:
                source_json.write(json.dumps(all_file_api_since))
        except:
            with open(f'{source_file}_source.json', 'w+') as source_json:
                source_json.write(json.dumps(all_file_api))


if __name__ == '__main__':
    source_main(r'C:\Users\ts\Desktop\NEW_0310_package\dts')


