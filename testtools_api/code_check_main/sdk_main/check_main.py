import os,json,re, time, shutil

import excel_count
from source_scan import source_main
# from re_target_1 import check_all, write_excel_xlsx_append
from target_scan import begin_check
from ex import produce_html_main
from whitelist import *

def check_sdk_main(source_dir_path,target_dir_path):
    result_dir = f'./SDKresult_{time.time()}'
    save_result_xlsx_path = os.path.join(result_dir, 'sdk_result.xlsx')
    save_result_path = os.path.join(result_dir, 'source_json')
    if os.path.exists(result_dir):
        shutil.rmtree(result_dir)
    os.makedirs(save_result_path)
    # 生成source文件
    source_main(source_dir_path)

    # system_index_null存放没有提供路径的文件名称
    system_index_null = []

    check_index = 0

    for root, dirs,files in os.walk(source_dir_path):
        for file in files:
            try:
                if '_source.json' in file:
                    source_file_path = os.path.join(root, file)
                    with open(source_file_path, 'r') as source_file:
                        source_json_dict = json.loads(source_file.read())
                        check_index += 1
                        print(f'now check {source_file_path}, index: ', check_index)

                        if not source_json_dict:
                            continue

                        for key,value in source_json_dict.items():
                            if 'subsystem_en' in key:
                                print("\n",value)
                                if value:
                                    new_result_dict = begin_check(value,target_dir_path,source_json_dict,save_result_xlsx_path,source_file_path)

                                    if os.path.exists(os.path.join(save_result_path, file)):
                                        with open(os.path.join(save_result_path, file), 'r') as tmp:
                                            tmp_json = json.load(tmp)
                                            tmp_list = new_result_dict['api']
                                            for i in tmp_list:
                                                tmp_json['api'].append(i)
                                        with open(os.path.join(save_result_path, file), 'w') as source_file:
                                            source_file.write(json.dumps(tmp_json))
                                    else:
                                        with open(os.path.join(save_result_path, file), 'w') as source_file:
                                            source_file.write(json.dumps(new_result_dict))
                                else:
                                    system_index_null.append(source_json_dict['api_module_name'])
                                    continue
                            else:
                                continue
            except Exception as e:
                print("本次生成文件跳过")
                print("代码报错信息:", e)
    try:
        excel_count.write_total(path=save_result_xlsx_path)
    except Exception as e:
        print("execl 统计报错：",e)
    time.sleep(5)
    print("正在生成页面信息")

    try:
        produce_html_main(dir_path=save_result_path, result_path=result_dir)
        time.sleep(2)
    except Exception as e:
        print("生成html报告页面出错",e)
    print("生成完毕")

    print("以下文件没有模块名！！！\n{0}\n请提供一下给system_index.json中写入".format(system_index_null))


if __name__ == '__main__':
    # source_dir_path = r'C:\Users\ts\Downloads\NEW_0322_package'
    source_dir_path = r'D:\WORK\NEW_0322_package\dts'
    target_dir_path = r'D:\WORK\NEW_0322_package\xts_acts-master'
    time_start = time.time()
    check_sdk_main(source_dir_path, target_dir_path)
    print('检查耗时：' + str(time.time() - time_start))

