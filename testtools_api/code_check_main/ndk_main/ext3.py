import os, ext
import xlrd
import pandas as pd

# 需要的列：3，5，8

input_file2 = r'F:\work\NDK\excel\test2.xls'
json_f_path2 = r"F:\work\NDK\ndk"
list = []
alllist = []

def get_list(xls_path,json_f_path):
    df = pd.read_excel(xls_path, header=None)
    files_list = ext.file_name(json_f_path)
    firstindex = 1
    index = 1
    countlist = []

    for i in range(0, len(files_list)):
        list.append(files_list[i].split(".")[0])

    index_list = []
    target_index_List = []
    for i in range(0, len(list)):
        conf = (df[3] == list[i])
        index_list.append(df[conf].index.size)
        index += df[conf].index.size
        target_index_List.append(index)

    # print(target_index_List)
    for i in range(0, len(index_list)):
        # print(index_list[i])
        secondlist = []
        for j in range(firstindex, target_index_List[i]):
            secondlist.append(df[8].loc[j])
            # print("单元格数据：" + str(df[8].loc[j]))
            pass
        firstindex += index_list[i]
        alllist.append(secondlist)
    # files_list.append(alllist)
    newlist = []
    newlist.append(files_list)
    newlist.append(alllist)
    return newlist



# a = get_list(input_file2, json_f_path2)
