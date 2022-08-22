import json, copy, re, os, time,openpyxl,shutil
import whitelist
from whitelist import *

def split_str_by_num(str ,num):
    mylist=[]
    for i in range(len(str)):
        if i % num == 0:
            mylist.append( str[i:i + num])
    return mylist

def search_all(string, target):
    """
    寻找所有target字符串, 为了先大致筛选api content
    :param string:
    :param target:
    :return:
    """
    result_list = []
    while target in string:
        r = string.find(target)
        result_list.append(r)
        string = string.replace(target, len(target) * ' ', 1)
    return result_list

def begin_check(value,target_dir_path,source_json_dict,save_result_xlsx_path,source_file_path):

    ets_path_father = target_dir_path +"\\"+ value
    print("\nets_path_father:",ets_path_father)
    ets_list = []
    new_result_dict = copy.deepcopy(source_json_dict)

    for root,dirs,files in os.walk(ets_path_father):
        for file in files:
            if file.endswith('.ets'):
                ets_path_son = os.path.join(root,file)
                ets_list.append(ets_path_son)
            elif file.endswith('.js'):
                ets_path_son = os.path.join(root, file)
                ets_list.append(ets_path_son)
            else:
                continue


    for i in range(0, len(source_json_dict['api'])):
        api_name = source_json_dict['api'][i]['api_method_name']
        code_snippet = []
        files_list = []
        callback_counts = 0
        Promise_counts = 0
        counts = 0
        if "(" in api_name or "{" in api_name or "}" in api_name or ")" in api_name or "[" in api_name or "]" in api_name:
            api_name = api_name.replace("(", "")
            api_name = api_name.replace(")", "")
            api_name = api_name.replace("{", "")
            api_name = api_name.replace("}", "")
            api_name = api_name.replace("]", "")
            api_name = api_name.replace("[", "")
        if not (source_json_dict['api'][i]["api_type"]=="Promise" or source_json_dict['api'][i]["api_type"]=="callback"):
            for file_index in ets_list:
                with open(file_index, 'r', encoding='utf-8') as f:
                    file_content = f.read()
                file_content = re.sub(r'\/\*[\s\S]*?\*\/', "", file_content, re.S)

                regex = re.compile(api_name)
                file_content_counts = [(i.start(), i.end()) for i in re.finditer(regex, file_content)]
                count = len(file_content_counts)
                counts += count
                if count > 0:
                    files_list.append(file_index.split("\\")[-1])
                    new_result_dict['api'][i]['api_used'] = "是"
                for file_content_count in file_content_counts:
                    if len(code_snippet) < 50:
                        code_snippet.append(file_content[file_content_count[0] - 20:file_content_count[1] + 20])
                    else:
                        break
        else:
            if source_json_dict['api'][i]["api_type"] == "Promise":
                for file_index in ets_list:
                    with open(file_index, 'r', encoding='utf-8') as f:
                        file_content = f.read()
                    file_content = re.sub(r'\/\*[\s\S]*?\*\/', "", file_content, re.S)
                    regex = re.compile(api_name)
                    file_content_counts = [(i.start(), i.end()) for i in re.finditer(regex, file_content)]
                    count = len(file_content_counts)
                    if count > 0:
                        for file_content_count in file_content_counts:
                            snippet = file_content[file_content_count[0] - 20:file_content_count[1] + 40]
                            if "then" in snippet:
                                Promise_counts +=1
                                files_list.append(file_index.split("\\")[-1])
                                new_result_dict['api'][i]['api_used'] = "是"
                                if len(code_snippet) <50:
                                    code_snippet.append(snippet)
                                    continue
            elif source_json_dict['api'][i]["api_type"] == "callback":
                for file_index in ets_list:
                    with open(file_index, 'r', encoding='utf-8') as f:
                        file_content = f.read()
                    file_content = re.sub(r'\/\*[\s\S]*?\*\/', "", file_content, re.S)
                    regex = re.compile(api_name)
                    file_content_counts = [(i.start(), i.end()) for i in re.finditer(regex, file_content)]
                    count = len(file_content_counts)
                    if count > 0:
                        for file_content_count in file_content_counts:
                            snippet = file_content[file_content_count[0] - 20:file_content_count[1] + 40]
                            if "then" not in snippet:
                                callback_counts +=1
                                files_list.append(file_index.split("\\")[-1])
                                new_result_dict['api'][i]['api_used'] = "是"
                                if len(code_snippet) <50:
                                    code_snippet.append(snippet)
                                    continue
        if Promise_counts !=0:
            new_result_dict['api'][i]['api_used_count'] = Promise_counts
        elif callback_counts !=0:
            new_result_dict['api'][i]['api_used_count'] = callback_counts
        else:
            new_result_dict['api'][i]['api_used_count'] = counts
        new_result_dict['api'][i]['lines'] = list(set(code_snippet))
        new_result_dict['api'][i]['files'] = list(set(files_list))

    sourcs_dict = new_result_dict
    sourcs_dict_full = whitelist.sourcs_parse(sourcs_dict)
    to_excel = total_api_list(sourcs_dict_full, source_file_path)
    write_excel_xlsx_append(save_result_xlsx_path, value_list=to_excel)

    return sourcs_dict_full




def total_api_list(result_findal,source_file_path):
    dict_list = []
    jsonFileNameIndex1 = source_file_path.rfind("\\")
    jsonFileNameIndex12 = source_file_path.rfind(".d.ts")
    jsonFileName_str = source_file_path[jsonFileNameIndex1 + 1:jsonFileNameIndex12]
    for api in result_findal['api']:
        totalapi_dict = {'subsystem_ch': result_findal['subsystem_ch'],
                         'subsystem_en': result_findal['subsystem_en'],
                         'api_module_name': jsonFileName_str.replace("@",""),
                         'api_class_name': api['api_class_name'],
                         'api_method_name': api['api_method_name'],
                         'api_type':  api['api_type'],
                         'api_level': api['api_level'],
                         'api_used_count': api['api_used_count'],
                         'since': api['since'],
                         'api_used': api['api_used'],
                         'lines': str(api['lines']),
                         'files': str(api['files']),
                         "is_white": str(api['is_white']),
                         "desc": str(api['desc']),
                         }
        dict_list.append(totalapi_dict)
    data_dict = dict_list
    all_data = []
    for i in range(0, len(data_dict)):
        single_data = []
        single_data.append(data_dict[i]['subsystem_ch'])
        single_data.append(data_dict[i]['subsystem_en'])
        single_data.append(data_dict[i]['api_module_name'])
        single_data.append(data_dict[i]['api_class_name'])
        single_data.append(data_dict[i]['api_method_name'])
        single_data.append(data_dict[i]['api_type'])
        single_data.append(data_dict[i]['api_level'])
        single_data.append(data_dict[i]['api_used_count'])
        single_data.append(data_dict[i]['since'])
        single_data.append(data_dict[i]['api_used'])
        single_data.append(data_dict[i]['lines'])
        single_data.append(data_dict[i]['files'])
        single_data.append(data_dict[i]['is_white'])
        single_data.append(data_dict[i]['desc'])
        all_data.append(single_data)

    return all_data

# xlsx追加写入内
# value_list=[[],[],[]]会更快，减少了excel文件的打开保存
def write_excel_xlsx_append(path, sheet_name='summary', value_list=[[]]):
    # 判断文件是否存在
    if not os.path.exists(path):
        # 创建一个workbook 设置编码
        workbook = openpyxl.Workbook()
        workbook.create_sheet("summary", 0)
        workbook.remove(workbook['Sheet'])
        # 创建表summary
        summary = workbook['summary']
        # title = ['subsystem_ch', 'subsystem_en', 'api_module_name', 'api_class_name','api_method_name','api_used_count','since','lines','files']
        title = ['归属子系统', '英文子系统', '模块名*', '类名*', '方法名*','类型','API级别',
                 '出现次数','支持起始版本', '是否存在', '代码片段', '出现文件位置','是否误报','误报原因']
        summary.append(title)
        # 保存文件
        workbook.save(path)
        # (f'文件{path}不存在，创建新表格')
    if len(value_list) != 0:
        workbook = openpyxl.load_workbook(path)
        for line in value_list:
            sheet = workbook[sheet_name]
            sheet.append(line)
        workbook.save(path)  # 保存工作簿

if __name__ == '__main__':
    pass