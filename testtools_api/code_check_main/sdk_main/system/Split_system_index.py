"""

本文件用于拆分system_index.json，将其分成不同的模块，存放在system文件夹中。
使用时，请修改path和system_index_path。

"""
import json, os

path = r'/sdk_main/system_index.json'
system_index_path = r'/sdk_main/system'

def split_system(path,system_index_path):
    with open(path, 'r', encoding='utf-8') as f:
        tmp_json = json.load(f)

    sys_list = []
    for i in tmp_json:
        if str(tmp_json[i]['subsystem_en']) not in sys_list:
            sys_list.append(str(tmp_json[i]['subsystem_en']))
        else:
            continue

    for i in sys_list:
        tmp = {}
        for j in tmp_json:
            if tmp_json[j]['subsystem_en'] == i:
                tmp[str(j)] = {'subsystem_en': i, 'subsystem_ch':tmp_json[j]['subsystem_ch']}

        with open(system_index_path+i+".json", 'w') as f:
            f.write(json.dumps(tmp,ensure_ascii=False))

if __name__ == '__main__':
    split_system(path,system_index_path)