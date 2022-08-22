import os, json
import shutil


result_json = {
    "subsystem_ch": "window",
    "subsystem_en": "window",
    "api_module_name": "@ohos.ability.featureAbility",
    "api": [
        {
            "api_class_name": " featureAbility ",
            "api_method_all": "function getWant(callback: AsyncCallback<Want>): void;",
            "api_method_name": " getWant",
            "api_level": "30",
            "api_args_count": 0,
            "api_used_count": 0,
            "api_used": '否',
            "is_white": "",
            "desc": ""
        }]
}


def get_source_json(source_path, TMP_DIR_PATH):
    all_source_json_list = []
    source_files_list = []
    for root, dirs, files in os.walk(source_path):
        for file in files:
            if file.endswith('.json'):
                if 'schema' not in file:
                    file_path = os.path.join(root, file)
                    source_files_list.append(file_path)

    for json_path in source_files_list:
        result_json = {
            "subsystem_ch": "ACE开发框架",
            "subsystem_en": "ace",
            "api_module_name": os.path.basename(json_path).split('.json')[0],
            "api": []
        }

        with open(json_path, 'r', encoding='utf-8') as this_json:
            this_content_dict = json.load(this_json)

        # 情况1 包含properties
        if this_content_dict.get('properties'):
            for this_item in this_content_dict.get('properties'):
                api_dict = {
                    "api_class_name": os.path.basename(json_path).split('.json')[0],
                    "api_method_all": this_item.get('name'),
                    "api_method_name": this_item.get('name'),
                    # "api_method": this_item.get('name'),
                    "api_level": 99,
                    "api_args_count": 0,
                    "api_used_count": 0,
                    "api_used":'否',
                    "is_white":"",
                    "desc":""
                }
                result_json['api'].append(api_dict)

        # 情况2 不包含properties 取attributes
        if this_content_dict.get('attributes'):
            for this_item in this_content_dict.get('attributes'):
                if "options" in this_item:
                    for i,values in enumerate(this_item['options']):
                        api_options = this_item.get('name') + ":" + this_item['options'][i]['name']
                        api_dict = {
                            "api_class_name": os.path.basename(json_path).split('.json')[0],
                            "api_method_all": api_options,
                            "api_method_name": this_item.get('name'),
                            "api_level": 99,
                            "api_args_count": 0,
                            "api_used_count": 0,
                            "api_used": '否',
                            "is_white": "",
                            "desc": ""
                        }
                        result_json['api'].append(api_dict)
                else:
                    api_dict = {
                        "api_class_name": os.path.basename(json_path).split('.json')[0],
                        "api_method_all": this_item.get('name'),
                        "api_method_name": this_item.get('name'),
                        "api_level": 99,
                        "api_args_count": 0,
                        "api_used_count": 0,
                        "api_used": '否',
                        "is_white":"",
                        "desc":""
                    }
                    result_json['api'].append(api_dict)

        source_json_path = os.path.join(TMP_DIR_PATH, os.path.basename(json_path).split('.json')[0])
        with open(source_json_path, 'w') as source_json:
            source_json.write(json.dumps(result_json))
        all_source_json_list.append(os.path.basename(json_path).split('.json')[0])
    return all_source_json_list



if __name__ == '__main__':
    TMP_DIR_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)), 'ace_tmp')
    if os.path.exists(TMP_DIR_PATH):
        shutil.rmtree(TMP_DIR_PATH)
    os.makedirs(TMP_DIR_PATH)

    source_path = r'D:\API_Coverage_package20220206\0301_test\interface_sdk-js-master\api\config'
    get_source_json(source_path, TMP_DIR_PATH)