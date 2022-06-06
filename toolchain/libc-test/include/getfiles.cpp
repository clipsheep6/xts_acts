#include <iostream>
#include <vector>
#include <cstring>
#include <dirent.h>

#include "runtest.h"

void GetFileNames(std::string path, std::vector<std::string>& filenames)
{
    DIR *pDir;
    struct dirent* ptr;
    std::string  p;
    if (!(pDir = opendir(path.c_str()))) {
        std::cout << "Folder doesn't Exist!" << std::endl;
        return;
    }
    while ((ptr = readdir(pDir)) != nullptr) {
        if (ptr->d_type == DT_DIR) {
            if (strcmp(ptr->d_name, ".") != 0 && strcmp(ptr->d_name, "..") != 0) {
                GetFileNames(path + "/" + ptr->d_name, filenames);
            }
        } else {
            if (strcmp(ptr->d_name, ".") != 0 && strcmp(ptr->d_name, "..") != 0) {
                filenames.push_back(path + "/" + ptr->d_name);
            }
        }
    }
    closedir(pDir);
}