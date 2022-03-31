import os
import re

file_path2 = r'F:\work\NDK\API_Coverage_NDK_0221\xts_acts\appexecfwk'


def search_Usecase_file(file_path2, file_suffix_1):
    cpp_target = []
    for root, dirs, files in os.walk(file_path2):
        for filename in files:
            # 拼接文件完整路径
            filepath = os.path.join(root, filename)
            # filepath = os.path.normcase(filepath)
            # 拼接文件后缀名
            if file_suffix_1 in filename:
                cpp_target.append(filepath)

    for i in range(0,len(cpp_target)):
        cpp_target[i].replace(file_path2,'')
    return cpp_target

def change(cpp_paths):
    tmp_list = []
    partten_readCPP = re.compile('(Acts).*?(Test).*?\.cpp')
    # partten_readCPP = re.compile('.cpp')
    for i in range(0, len(cpp_paths)):
        FlagNum = len(partten_readCPP.findall(cpp_paths[i]))
        # print(FlagNum)
        if FlagNum > 0 :
            tmp_list.append(cpp_paths[i])
    return tmp_list

def get_package_name(file_path):
    cpp_target = search_Usecase_file(file_path, ".cpp")
    list_one = (change(cpp_target))
    package_name = list_one[0].replace(file_path + "\\", "").split("\\")
    return package_name[0]

list_one = []

if __name__ == '__main__':
    # cpp_target = search_Usecase_file(file_path2, ".cpp")
    # list_one = (change(cpp_target))
    pass