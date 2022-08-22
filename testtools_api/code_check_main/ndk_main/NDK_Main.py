import os, json, re, time, ext, ext2, NDK_create_html, NDK_save_excel
from NDKshell import write_total



class NDK():
    # 接收
    # 父级目录
    jsonpath = r"./json"
    # 接收参数 + 拼接
    real_route_jsonPath = []

    # ！！！！！描述文件！！！！！
    def search_Description_file(location_1, file_suffix_1):
        source_files = []
        for root, dirs, files in os.walk(location_1):
            for filename in files:
                filepath = os.path.join(root, filename)
                if file_suffix_1 in filename:
                    source_files.append(filepath)
        return source_files


    def readship1(source_files, file_path):

        readshipDict_list = []

        with open(source_files, 'r+', encoding='utf-8') as fp:
            text = fp.read()
            text = re.findall("\[(.*?)\]+", str(text), re.S)[0].split(",")
            fp.close()

        for i in range(len(text)):
            if "_ndk" in text[i]:
                if ":" in text[i]:
                    str_startIndex = text[i].find(":")
                    str_endIndex = text[i].rfind('"')
                    strfilename1 = text[i][1:str_startIndex]
                    strfilename2 = text[i][str_startIndex + 1:str_endIndex]
                    strfilename1_s = NDK.get_path(strfilename1)
                    readshipDict = {'strfilename1': strfilename1_s,  # ：前的路径
                                    'strfilename2': strfilename2  # ：后的路径
                                    }
                    readshipDict_list.append(readshipDict)
            else:
                pass

        a = []
        for i in range(0, len(readshipDict_list)):
            Partialpath = readshipDict_list[i]['strfilename1']
            b = Partialpath
            a.append(b)
        for i in range(len(a)):
            with open(file_path + a[i]+"\\BUILD.gn",'r',encoding = 'utf-8') as fs:
                file_gn_str = ''.join(fs.readlines())
                # 给前面的大路径
                file_gn_front = file_path + a[i]
                # 获得后面的路径
                NDK.get_file_route(file_gn_str, readshipDict_list[i]['strfilename2'], file_gn_front)
                fs.close()

        return a

    # "//third_party/openSLES
    def get_path(putr):
        newstr = putr.replace('#','').replace('/','\\').replace('"','').strip()
        newstr = newstr.replace('\\\\','\\')
        return newstr


    get_target_need = []
    get_target_need_nid = []
    partten_cache = re.compile("\".*?\.json")

    def get_file_route(self, target, front):
        # find_one # 寄存匹配到的的位置
        find_one = re.search(target, self, flags=0).span()
        find_one = list(find_one)
        get_content = []  # 获得gn文件中参数对应的函数的{}中的内容
        get_content_flag = False  # 定义标志位，用于{}的存取

        if find_one != None:
            # 开始存取{}
            for i in range(find_one[1], len(self) - 1):
                if self[i] == '{':
                    get_content_flag = True
                if self[i] == '}':
                    get_content_flag = False
                    get_content_str = ''.join(get_content + list(self[i]))
                    # get_content_str 为参数的函数的{}中的内容
                    break
                if get_content_flag and self[i] in self:
                    get_content.append(self[i])

            # 寻找后缀文件
            get_target_behind = NDK.partten_cache.findall(get_content_str)
            get_target_behind[0] = get_target_behind[0].replace('"./', "")

            route_behind = get_target_behind[0].replace('"./', "")

            NDK.real_route_jsonPath.append(front  +"\\"+route_behind)

            # 将描述文件的冒号后的路径存到了列表get_target_need中，一共26个元素
            NDK.get_target_need.append(get_target_behind)
            # 将描述文件的冒号前的路径存到了列表get_target_need_nid中，一共26个元素
            NDK.get_target_need_nid.append(front)
        else:
            print("没有找到参数target!")
            print("!end!")
            print("\n")

    # ！！！！！用例文件！！！！！

    def search_Usecase_file(file_all_path, name_cpp):
        source_files = []
        for root, dirs, files in os.walk(file_all_path):
            if 'xts_acts' in root:
                root_b = root
                if 'appexecfwk' in root_b:
                    root_c = root_b
                    for filename in files:
                        filepath = os.path.join(root_c, filename)
                        if name_cpp in filename:
                            source_files.append(filepath)
                else:
                    pass
            else:
                pass
        return source_files


def create_report(ndk_path):
    resultName = f'./NDKresult_{time.time()}'
    os.makedirs(resultName + r"/json")
    os.makedirs(resultName + r"/html")
    # json存放位置
    json_tmp_path = resultName + "/json"
    # ndk_path = r'D:\NEW_NDK_package_0329'
    # target目录
    file_path2 = ndk_path + r'\xts_acts-master\appexecfwk'


    source_files = NDK.search_Description_file(ndk_path, "ndk_targets.gni")

    source_files_ndkgni = ''.join(source_files)

    mod_namelist = NDK.readship1(source_files_ndkgni, ndk_path)
    tmp_list = NDK.real_route_jsonPath
    for i in range(0, len(tmp_list)):
        jsonname = str.split(tmp_list[i], "\\")[-1]

        with open(tmp_list[i], 'r', encoding="utf-8")as f1:
            tmp_json = json.load(f1)
            f1.close()
        with open(resultName + '/json/{}'.format(jsonname), 'w', encoding="utf-8") as f2:
            json_abs_path = resultName + '/json/{}'.format(jsonname)
            f2.write(str(json.dumps(tmp_json)))
            f2.close()
        ext.save_json(json_abs_path, mod_namelist[i])


    # files_list = ext.file_name(json_tmp_path)
    # for i in range(0, len(files_list)):
    #     json_file_name = files_list[i]
    #     temp_path = (json_tmp_path + "\\" + json_file_name)
    #     # tmep_path json文件的绝对路径
    #     ext.save_json(temp_path, mod_namelist.pop(-1))


    # 获取cpp相关信息
    cpp_target = NDK.search_Usecase_file(file_path2, ".cpp")

    list_one = (ext2.change(cpp_target))  # cpp_path_list

    for i in range(0, len(list_one)):
        print("开始处理正则")
        package_name = list_one[i].replace(file_path2 + "\\", "").split("\\")[0]
        with open(list_one[i], 'r', encoding="utf-8", newline=None) as f:
            cpp = f.read()
            f.close()
            ext.get_json_fun(json_tmp_path, cpp, package_name)
            pass

    # 生成excel
    excel_list = NDK_save_excel.get_list(json_tmp_path)
    NDK_save_excel.import_excel(excel_list, resultName)
    xls_path = resultName + r"/ndk.xlsx"
    write_total(xls_path)
    print("正在生成页面信息")
    time.sleep(2)
    print("页面生成完毕")
    # 生成html
    NDK_create_html.outputHtml(json_tmp_path, resultName)
    NDK_create_html.outputsonHtml(json_tmp_path, resultName)



if __name__ == '__main__':
    create_report(r'D:\WORK\NEW_NDK_package_0329')