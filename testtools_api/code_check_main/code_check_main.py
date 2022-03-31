import sys, os
import traceback
sys.path.append('./sdk_main')
sys.path.append('./ndk_main')
sys.path.append('./ace1_main')
from sdk_main import check_main
from ndk_main import NDK_Main
from ace1_main import check_ace1_main


if __name__ == '__main__':
    try:
        mode_flag = int(input('请选择检查模式：\n1.NDK检查\n2.SDK检查\n3.ace1.0框架检查\n'))
        if mode_flag == 1:
            source_dir_path = input('请输入source文件夹地址\n')
            if os.path.exists(source_dir_path):
                NDK_Main.create_report(source_dir_path)
            else:
                raise AssertionError('请输入正确地址')

        elif mode_flag == 2:
            source_dir_path = input('请输入source文件夹地址\n')
            target_dir_path = input('请输入target文件夹地址\n')
            if os.path.exists(source_dir_path) and os.path.exists(target_dir_path):
                check_main.check_sdk_main(source_dir_path, target_dir_path)
            else:
                raise AssertionError('请输入正确地址')

        elif mode_flag == 3:
            source_dir_path = input('请输入ACE1.0 source文件夹地址\n')
            target_dir_path = input('请输入ACE1.0 target文件夹地址\n')
            check_ace1_main.check_ace(source_dir_path, target_dir_path)
        else:
            print('请输入正确选项')
            os.system('pause')
    except:
        print(traceback.format_exc())
    finally:
        os.system('pause')
