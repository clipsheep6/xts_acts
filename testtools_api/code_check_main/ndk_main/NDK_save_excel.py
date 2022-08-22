import json, ext
from openpyxl.workbook import Workbook
from openpyxl.writer.excel import ExcelWriter

import ndk_main.NDK_Main



def get_list(path):
    # xls_list = [
    #     ['subsystem_ch', 'subsystem_en', 'api_module_name', 'api_class_name', 'api_method_name',
    #      'api_level', 'api_used_count', 'api_used_utid']]
    xls_list = [
        ['归属子系统', '英文子系统', '模块名', '类名', '方法名',
         'API级别', '使用次数', '是否使用','是否误报','误报原因']]
    files_list = ext.file_name(path)
    print(files_list)
    for i in range(0, len(files_list)):
        paths = path + "\\" + files_list[i]
        with open(paths, 'r', encoding="utf-8") as json_file:
            tmp_json = json.load(json_file)
            json_file.close()
        for j in range(0, len(tmp_json)):
            json_list = []
            # tmp_list = get_all_json()
            json_list.append('包管理子系统')
            json_list.append('appexecfwk')
            json_list.append(tmp_json[j]['api_module_name'])
            json_list.append(files_list[i].split(".")[0])
            json_list.append(tmp_json[j]['name'])
            json_list.append(tmp_json[j]['ApiLevel'])
            json_list.append(tmp_json[j]['Count'])
            json_list.append(tmp_json[j]['Used'])
            json_list.append(tmp_json[j]['is_white'])
            json_list.append(tmp_json[j]['desc'])
            xls_list.append(json_list)
    return xls_list


def import_excel(total_list, resultName):
    wb = Workbook()
    ws = wb.active
    ws.title = r'summary'
    i = 1
    r = 1
    for line in total_list:
        for col in range(1, len(line) + 1):
            ColNum = r
            ws.cell(row=r, column=col).value = line[col - 1]
        i += 1
        r += 1
    wb.save(resultName + r"/ndk.xlsx")


if __name__ == '__main__':
    pass
