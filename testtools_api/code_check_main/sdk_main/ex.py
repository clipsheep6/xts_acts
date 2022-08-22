import json, math, os, re
from openpyxl import load_workbook


def get_file_name(file_dir):
    for root, dirs, files in os.walk(file_dir):
        return root, files


def get_json_abs_path(root, files):
    json_abs_path = []
    for i in range(0, len(files)):
        json_abs_path.append(root + "\\" + files[i])
    return json_abs_path


def output_f_html(paths, result_path):
    sys_tr = """
        <tr>
            <td class="son0" style="font-weight:bold;font-size:16px">系统</td>
            <td class="son0" style="font-weight:bold;font-size:16px">系统API数</td>
            <td class="son0" style="font-weight:bold;font-size:16px">调用次数</td>
            <td class="son0" style="font-weight:bold;font-size:16px">系统覆盖率</td>
        </tr>
    """
    xls_path = result_path + r"\sdk_result.xlsx"
    wb = load_workbook(xls_path)
    sh = wb['total']
    sys_list, sys_total, sys_used = [], [], []
    for item in list(sh.rows)[1:-1]:
        values = []
        for val in item:
            values.append(val.value)
        sys_list.append(values[0])
        sys_total.append(values[1])
        sys_used.append(values[2])
    total_num = 0
    total_used = 0
    flag = 1
    for i in range(0, len(sys_list)):
        total_num += sys_total[i]
        total_used += sys_used[i]
        if flag == 1:
            if math.ceil(sys_used[i] / sys_total[i] * 100) < 70:
                sys_tr = sys_tr + "<tr><td class='son0' style='color:red'>" + str(sys_list[i]) + "</td>" \
                                      "<td class='son0' style='color:red'>" + str(sys_total[i]) + "</td>" \
                                      "<td class='son0' style='color:red'>" + str(sys_used[i]) +"</td>" \
                                      "<td class='son0' style='color:red'>" + str(math.ceil(sys_used[i] / sys_total[i] * 100)) + "%</td>" \
                                   "</tr>"
            else:
                sys_tr = sys_tr + "<tr><td class='son0'>" + str(sys_list[i]) + "</td>" \
                                      "<td class='son0'>" + str(sys_total[i]) + "</td>" \
                                      "<td class='son0'>" + str(sys_used[i]) + "</td>" \
                                      "<td class='son0'>" + str(math.ceil(sys_used[i] / sys_total[i] * 100)) + "%</td>" \
                                   "</tr>"
            flag = 0
        elif flag == 0:
            if math.ceil(sys_used[i] / sys_total[i] * 100) < 70:
                sys_tr = sys_tr + "<tr><td class='son1' style='color:red' bgcolor='#ececf2';>" + str(sys_list[i]) + "</td>" \
                                      "<td class='son1' style='color:red' bgcolor='#ececf2';>" + str(sys_total[i]) + "</td>" \
                                      "<td class='son1' style='color:red' bgcolor='#ececf2';>" + str(sys_used[i]) +"</td>" \
                                      "<td class='son1' style='color:red' bgcolor='#ececf2';>" + str(math.ceil(sys_used[i] / sys_total[i] * 100)) + "%</td>" \
                                   "</tr>"
            else:
                sys_tr = sys_tr + "<tr><td class='son1' bgcolor='#ececf2';>" + str(sys_list[i]) + "</td>" \
                                      "<td class='son1' bgcolor='#ececf2';>" + str(sys_total[i]) + "</td>" \
                                      "<td class='son1' bgcolor='#ececf2';>" + str(sys_used[i]) + "</td>" \
                                      "<td class='son1' bgcolor='#ececf2';>" + str(math.ceil(sys_used[i] / sys_total[i] * 100)) + "%</td>" \
                                   "</tr>"
            flag = 1

    html_head = '''<!DOCTYPE html>
        <html lang="en">
        <head>
              <meta charset="UTF-8">
              <title>api coverage report</title>
              <style>
            h1 {{text-align:center}} 
            body,ol,ul,h1,h2,h3,h4,h5,h6,p,th,td,dl,dd,form,fieldset,legend,input,textarea,select {{margin:0;padding:0}}
            h3{{
                margin-top:5px;font-size:25px;margin-left:5px
            }}
            body {{
                font:16px"宋体","Arial Narrow",HELVETICA;background:#fff;-webkit-text-size-adjust:100%;
            }}
            a {{
                color:#2d374b;text-decoration:none
            }}
            a:hover {{
                color:#cd0200;text-decoration:underline
            }}
            em {{
                font-style:normal
            }}
            li {{
                list-style:none
            }}
            img {{
                border:0;vertical-align:middle
            }}
            table {{
                border-collapse:collapse;border-spacing:0;
            }}
            p {{
                word-wrap:break-word
            }}
            tr.tr_header {{
                background-color:#F9F9FC;
                height:12px;
            }}
            tr.tr_body {{
                background-color:white;
                height:12px;
            }}
            td.td_font_style:{{
                padding-left:3px;
            }}
            table.main {{
                width:90%;margin-left:5%
            }}
            div.right_bottom{{
                display: block;position: fixed; height: 50px; width: 50px; right: 10px; bottom: 10px;
            }}
            div.total {{
                width:90%;margin-left:5%;margin-right:5%;background-color:#f2f2f2
            }}
            td.son0 {{
                width:25%;text-align: center;height; height:25px;bgcolor='#ececf2';
            }}
            td.son1 {{
                width:25%;text-align: center;height; height:25px; bgcolor='white';
            }}
            table.top{{
                text-align:right;position:relative;right:10%;top:1px;margin-left:90%
            }}
            div.line_01{{ 
                height: 3px;margin-bottom:10px;margin-top:10px;border-top: 1px solid #ddd;text-align:center;background-color:#F9F9FC;
            }}
            .middleBox {{
                width: 98%;
                margin: 15px auto;
                background-color: #F9F9FC;
                display: flex;
                flex-direction: row;
                justify-content: space-around;
            }}
            .numberBox {{
            text-align: center;
            margin: 3vh;
            }}
            .number {{
                font-size: 23px;
                font-weight: bolder;
            }}
            .text {{
                font-size: 13px;
                color: #74767B;
            }}
              </style>
              
        </head>
        <body>
            <h3>
                api coverage report
            </h3>
            {1}
            <div class="line_01"></div>
            <table class="main">
            <div class="right_bottom">
                <button id="btn" value="隐藏">
                    隐藏
                </botton>
            </div>
            <tr class="tr_header">
                    <td>FileName</td>
                    <td>Functions</td>
                </tr>
                {0}
            </table>

        </body>
            <script>
                var btn = document.getElementById("btn")
                var total_main = document.getElementById("total_main")
                btn.onclick=function(){{
                    if (this.value == '隐藏'){{
                        total_main.style.display="none";
                        this.innerHTML="显示";
                        this.value = '显示';
                    }}else if(this.value == '显示'){{
                        total_main.style.display="block";
                        this.innerHTML="隐藏";
                        this.value = '隐藏';
                    }}
                }}
            </script>
        </html>'''
    table1_tr = '''
        <tr class="tr_body">
            {}
        </tr>
    '''
    tmp_table = ""
    total_div = """
        <div class="middleBox">
            <div class="numberBox">
                <div class="number">{0}</div>
                <div class="text">总模块数</div>
            </div>
            <div class="numberBox">
                <div class="number">{1}</div>
                <div class="text">总API数</div>
            </div>
            <div class="numberBox">
                <div class="number">{2}</div>
                <div class="text">总调用次数</div>
            </div>
            <div class="numberBox">
                <div class="number">{3}</div>
                <div class="text">覆盖率</div>
            </div>
        </div>
        <div id="total_main">
            <table style="width:90%;margin-left:5%" cellspacing="0">
                {4}
            </table>
        </div>
    """

    # 外层控制tr 循环3次
    flag2 = 1
    for i in range(0, len(paths)):
        with open(paths[i], 'r', encoding="utf-8") as json_file:
            tmp_json = json.load(json_file)
            jsonFileNameIndex1 = paths[i].rfind("\\")
            jsonFileNameIndex12 = paths[i].rfind(".d.ts")
            jsonFileName_str = paths[i][jsonFileNameIndex1 + 1:jsonFileNameIndex12]
            tmp_json['api_module_name'] = jsonFileName_str.replace('@', '')
        num = 0
        for k in tmp_json['api']:
            if k['api_used_count'] > 0:
                num += 1
        if flag2 == 1:
            if num == 0:
                td = rf"<td><a href=./html_src/" + tmp_json['api_module_name'] + ".html>{}</a></td>".format(
                    tmp_json['api_module_name']) + "<td>0%</td>"
            elif math.ceil(num / len(tmp_json['api']) * 100)<70:
                td = f"<td style='color:red'><a href=./html_src/" + tmp_json['api_module_name'] + ".html>{}</a></td>".format(
                    tmp_json['api_module_name']) + "<td style='color:red'>" + str(
                    math.ceil(num / len(tmp_json['api']) * 100)) + "%</td>"
            else:
                td = f"<td><a href=./html_src/" + tmp_json['api_module_name'] + ".html>{}</a></td>".format(
                    tmp_json['api_module_name']) + "<td>" + str(
                    math.ceil(num / len(tmp_json['api']) * 100)) + "%</td>"
            flag2 = 0
        elif flag2 == 0:
            if num == 0:
                td = rf"<td bgcolor='#ececf2'><a href=./html_src/" + tmp_json['api_module_name'] + ".html>{}</a></td>".format(
                    tmp_json['api_module_name']) + "<td bgcolor='#ececf2'>0%</td>"
            elif math.ceil(num / len(tmp_json['api']) * 100)<70:
                td = f"<td style='color:red' bgcolor='#ececf2'><a href=./html_src/" + tmp_json['api_module_name'] + ".html>{}</a></td>".format(
                    tmp_json['api_module_name']) + "<td style='color:red' bgcolor='#ececf2'>" + str(
                    math.ceil(num / len(tmp_json['api']) * 100)) + "%</td>"
            else:
                td = f"<td bgcolor='#ececf2'><a href=./html_src/" + tmp_json['api_module_name'] + ".html>{}</a></td>".format(
                    tmp_json['api_module_name']) + "<td bgcolor='#ececf2'>" + str(
                    math.ceil(num / len(tmp_json['api']) * 100)) + "%</td>"
            flag2 = 1
        tmp_table = tmp_table + table1_tr.format(td)
    total_avg = str(math.ceil(total_used / total_num * 100)) + "%"
    total_div = total_div.format(str(len(sys_list)), str(total_num), str(total_used), total_avg, sys_tr)
    puzz = html_head.format(tmp_table, total_div)

    with open(os.path.join(result_path, 'sdk_result.html'), 'w',
              encoding='utf-8') as file:
        file.write(puzz)

def output_s_html(paths, result_path):
    html_src_path = os.path.join(result_path, 'html_src')
    os.makedirs(html_src_path)
    htmlsonhead = '''<!DOCTYPE html>
            <html lang="en">
            <head>
                  <meta charset="UTF-8">
                  <title>api coverage report</title>
                  <style>
                h1 {{text-align:center}} 
                body,ol,ul,h1,h2,h4,h5,h6,p,th,td,dl,dd,form,fieldset,legend,input,textarea,select {{margin:0;padding:0}}
                body {{
                    font:16px"宋体","Arial Narrow",HELVETICA;background:#fff;-webkit-text-size-adjust:100%;
                }}
                a {{
                    color:#2d374b;text-decoration:none
                }}
                a:hover {{
                    color:#cd0200;text-decoration:underline
                }}
                em {{
                    font-style:normal
                }}
                li {{
                    list-style:none
                }}
                img {{
                    border:0;vertical-align:middle
                }}
                table {{
                    border-collapse:separate;border-spacing:3;
                }}
                p {{
                    word-wrap:break-word
                }}
                tr.tr_header {{
                    background-color:#F9F9FC;
                    height:12px;
                }}
                tr.tr_body {{
                    background-color:lightblue;
                    height:12px;
                }}
                td.td_font_style:{{
                    padding-left:3px;
                }}
                table.main {{
                    width:90%;margin-left:5%
                }}
                table.top{{
                    text-align:right;position:relative;right:10%;top:1px;margin-left:90%
                }}
                div.line_01{{ 
                    height: 3px;margin-bottom:10px;margin-top:10px;border-top: 1px solid #ddd;text-align:center;background-color:#F9F9FC;
                }}
        #desc {{
            /* float: left; */
            /* display: ; */
            position: absolute;
            top: 100px;
            left: 700px;
            width: 700px;
            height: 200px;
            display: none;
            /* text-align: center; */
        }}

        #desc #textar {{
            width: 400px;
            height: 100px;
        }}

                  </style>
            </head>

            <body>
            <meta http-equiv="Access-Control-Allow-Origin" content="*">
                <h1>
                    api coverage report
                </h1>

                <div class="line_01"></div>
                <table class="main">
                <tr class="">
                        <td>subsystem_ch</td>
                        <td>{1}</td>
                    </tr>
                <tr>
                   <td>subsystem_en</td>
                    <td>{2}</td>
                </tr>
                <tr>
                    <td>api_module_name</td>
                    <td>{3}</td>
                </tr>
                <tr>
                    <td>api</td>
                    <td>
                        <table>
                            <tr>
                              <td>api_class_name</td>  
                              <td>api_method_all</td>  
                              <td>api_method_name</td>
                              <td>api_level</td>
                              <td>api_args_count</td>
                              <td>api_used_count</td>
                            </tr>
                            {0}
                        </table>
                    </td>
                </tr>
                </table>

                <div id="desc">
                    <div class="desc-body">
                        <input type="textareas" value="" id="textar">
                    </div>
                        <div class="desc-footer">
                            <button id="submit">确认</button>
                            <button id="cancel">取消</button>
                        </div>
                </div>
            <script>
        var btn = document.querySelectorAll("#btn")
        var desc = document.getElementById("desc")
        var submit = document.getElementById("submit")
        var cancel = document.getElementById("cancel")
        console.log(btn)
        for (var i = 0; i < btn.length; i++) {{
            btn[i].onclick = function() {{
                btnValues = this.value
                desc.style.display = 'block';
            }}
            submit.onclick = function() {{
                var text = document.getElementById("textar")
                var xmlHttp = new XMLHttpRequest
                xmlHttp.open('POST', 'http://127.0.0.1:53669/configuration/')
                xmlHttp.setRequestHeader('Content-Type', 'application/json')
                console.log(text.value)
                desc.style.display = 'none';
                let obj = {{package: btnValues.split('|')[0],classs: btnValues.split('|')[1],function: btnValues.split('|')[2],desc:text.value}}
                var stringData = JSON.stringify(obj);
                xmlHttp.send(stringData);
                alert("xmlHttp.responseText");
                text.value = ""
            }}
            cancel.onclick = function() {{
                desc.style.display = 'none';
            }}
        }}
        </script>
            </body>
            </html>'''

    # 读取所有的json文件
    for i in range(0, len(paths)):
        tr_td = ""

        with open(paths[i], 'r', encoding="utf-8") as f:
            tmp_json = json.load(f)
            jsonFileNameIndex1 = paths[i].rfind("\\")
            jsonFileNameIndex12 = paths[i].rfind(".d.ts")
            jsonFileName_str = paths[i][jsonFileNameIndex1 + 1:jsonFileNameIndex12]
            tmp_json['api_module_name'] = jsonFileName_str

            for j in range(0, len(tmp_json['api'])):
                tmp_json['api'][j]['api_method_name'] = str(tmp_json['api'][j]['api_method_name']).replace("<T>", "")
                tmp_json['api'][j]['api_method_name'] = str(tmp_json['api'][j]['api_method_name']).replace("(", "")
                tmp_json['api'][j]['api_method_name'] = str(tmp_json['api'][j]['api_method_name']).replace("callbackfn",
                                                                                                           "")
                tmp_json['api'][j]['api_method_name'] = str(tmp_json['api'][j]['api_method_name']).replace("declare",
                                                                                                           "")
                tmp_json['api'][j]['api_method_name'] = re.sub("<.*>", "", tmp_json['api'][j]['api_method_name'])
                tmp_json['api'][j]['api_method_name'] = str(tmp_json['api'][j]['api_method_name']).replace(
                    "AlphabetIndexer", "")
                tmp_json['api'][j]['api_method_name'] = str(tmp_json['api'][j]['api_method_name']).replace("@", "")
                tmp_json['api'][j]['api_method_name'] = str(tmp_json['api'][j]['api_method_name']).replace(" ", "")
                td = "" + "<tr>" \
                          "<td>" + tmp_json['api'][j]['api_class_name'] + "</td>" \
                          "<td>" + tmp_json['api'][j]['api_method_all'] + "</td>" \
                          "<td>" + tmp_json['api'][j]['api_method_name'] + "</td>" \
                          "<td>" + str(tmp_json['api'][j]['api_level']) + "</td>" \
                          "<td>" + str(tmp_json['api'][j]['api_args_count']) + "</td>" \
                          "<td>" + str(tmp_json['api'][j]['api_used_count']) + "</td>" \
                          "<tr>"
                tr_td = tr_td + td
        puzz = htmlsonhead.format(tr_td, tmp_json['subsystem_ch'], tmp_json['subsystem_en'],
                                  tmp_json['api_module_name'])


        with open(os.path.join(html_src_path, str(tmp_json['api_module_name']) + '.html'), 'w',
                  encoding='utf-8') as file:
            file.write(puzz)


def produce_html_main(dir_path, result_path):
    source_files_list = []
    for root, dirs, files in os.walk(dir_path):
        for file in files:
            file_path = os.path.join(root, file)
            source_files_list.append(file_path)
    output_f_html(source_files_list, result_path)
    output_s_html(source_files_list, result_path)


if __name__ == "__main__":
    # source_path = r'F:\work\code_check\sdk_main3 - 副本\SDKresult_1648110760.3364139\source_json'
    # result_path = '../result'
    # xls_path = r'C:\Users\ts\Downloads\0328_all\SDKresult_1648523013.868675\sdk_result.xlsx'
    # os.makedirs(result_path)
    # produce_html_main(source_path, result_path)
    pass
