#!/usr/bin/python
# -*- coding: UTF-8 -*-
import json, os
from typing import Optional
from fastapi import FastAPI
from pydantic import BaseModel
from fastapi.middleware.cors import CORSMiddleware


def read_json(filepath):
    with open(filepath, 'r', encoding='gbk')as fp:
        json_data = json.load(fp)
        return json_data


def whites(filepath,packages):
    json_datas = read_json(filepath)
    flag = 0
    for json_data in json_datas:
        if packages["package"] == json_data["package"] and packages["classs"] == json_data["classs"] and packages["function"] == json_data["function"]:
            if packages["desc"]:
                json_data["desc"] = packages["desc"]
                flag = 0
        else:
            flag = 1
    if flag:
        json_datas.append(packages)
    return json_datas


def write_json(filepath, packages):
    datas = whites(filepath,packages)
    json_str = json.dumps(datas)
    with open(filepath, 'w') as json_file:
        json_file.write(json_str)


class Item(BaseModel):
    package: str
    classs: str
    function: str
    desc: str


app = FastAPI()

origins = [
    "*",
]
app.add_middleware(
    CORSMiddleware,
    allow_origins=origins,
    allow_credentials=True,
    allow_methods=["*"],
    allow_headers=["*"],
)


@app.post("/configuration/")
async def create_item(item: Item):
    item = dict(item)
    try:
        try:
            write_json(filepath='./whiteList.json',packages=item)
        except Exception as e:
            print(e)
            return {"msg": "更新配置文件失败", "code": 1}
        return {"msg": "白名单更新成功", "code": 0}
    except Exception as e:
        print(e)
        return {"msg": "白名单更新失败", "code": 1}

if __name__ == "__main__":
    os.system('uvicorn main:app --host 127.0.0.1 --port 53669 --reload')

