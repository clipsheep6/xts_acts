#!/usr/bin/env python
# -*- coding: utf-8 -*-

import os
import argparse
import tarfile
import shutil

copyFileCounts = 0

def copyFiles(sourceDir, targetDir):
    global copyFileCounts
    for f in os.listdir(sourceDir):
        sourceF = os.path.join(sourceDir, f)
        targetF = os.path.join(targetDir, f)
        if os.path.isfile(sourceF):
            if not os.path.exists(targetDir):
                os.makedirs(targetDir)
            copyFileCounts += 1
            if not os.path.exists(targetF) or (os.path.exists(targetF) and (os.path.getsize(targetF) != os.path.getsize(sourceF))):
                open(targetF, "wb").write(open(sourceF, "rb").read())
        if os.path.isdir(sourceF):
            copyFiles(sourceF, targetF)

def make_targz_one_by_one(output_filename, source_dir):
    tar = tarfile.open(output_filename,"w")
    for root,dir,files in os.walk(source_dir):
      for file in files:
          pathfile = os.path.join(root, file)
          tar.add(pathfile)
    tar.close()

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description='manual to this script')
    parser.add_argument("--input_path", type=str, default="0")
    parser.add_argument("--output_path", type=str, default="0")
    parser.add_argument("--temp_path", type=str, default="0")
    args = parser.parse_args()

    copyFiles(args.input_path, args.temp_path)
    make_targz_one_by_one(args.output_path, args.temp_path)

    shutil.rmtree(args.temp_path) #delete middle files
