
{
    "targets": [
        {
          "target_name": "power",
          "sources": [
              "./power.cpp",
              "./power_middle.cpp",
              "./x_napi_tool.cpp"],
          "include_dirs": ["."],
          "cflags_cc": [ "-frtti","-std=c++17" ]
        }
    ]
}
