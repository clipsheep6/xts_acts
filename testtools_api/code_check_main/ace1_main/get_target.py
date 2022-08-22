import os, json

source_path = r'D:\API_Coverage_package20220206\0301_test\interface_sdk-js-master\api\config'
target_path = r'D:\API_Coverage_package20220206\0301_test\xts_acts-master\ace\ace_standard\src\main\js\default\pages'



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


# hml文件检索







if __name__ == '__main__':
    # get_target_json(target_path)
    pass