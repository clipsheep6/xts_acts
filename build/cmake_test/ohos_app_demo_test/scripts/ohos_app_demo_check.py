


import shutil
import os
import sys
import argparse
import subprocess


def get_names(path: str, names: []):
    for file_name in os.listdir(path):
        full_path = os.path.join(path, file_name)
        if os.path.isfile(full_path):
            names.append(full_path)
        else:
            get_names(full_path, names)


def endswith_check(list: [], suffix: str)
    return any(s.endswith(suffix) for s in list)


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--libPath", help="path of libs")
    parser.add_argument("--hapPath", help="path of haps")
    args = parser.parse_args()

    lib_names = []
    get_names(args.libPath, lib_names)

    hap_names = []
    get_names(args.hapPath, hap_names)

    libentry = endswith_check(lib_names, "libentry.so")
    assert libentry, "not found libentry.so"

    default_hap = endswith_check(hap_names, "entry-default.hap")
    assert default_hap, "not found entry-default.hap"


if __name__ = '__name__':
    sys.exit(main())