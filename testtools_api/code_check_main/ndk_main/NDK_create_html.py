import json, math, ext
from openpyxl import load_workbook

def outputHtml(json_path, resultName):
    paths = []
    json_list = ext.file_name(json_path)
    for i in range(0, len(json_list)):
        paths.append(json_path + "\\" + json_list[i])


    sys_tr = """
        <tr>
            <td class="son" style="font-weight:bold;font-size:16px">系统</td>
            <td class="son" style="font-weight:bold;font-size:16px">系统API数</td>
            <td class="son" style="font-weight:bold;font-size:16px">调用次数</td>
            <td class="son" style="font-weight:bold;font-size:16px">系统覆盖率</td>
        </tr>
    """
    sys_div = """
        <div id="total_main">
            <table style="width:90%;margin-left:5%" cellspacing="0">
                {0}
            </table>
        </div>
    """
    xls_path = resultName + r"\ndk.xlsx"
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
    for i in range(0, len(sys_list)):
        total_num += sys_total[i]
        total_used += sys_used[i]
        if math.ceil(sys_used[i] / sys_total[i] * 100) < 70:
            sys_tr = sys_tr + "<tr><td class='son' bgcolor='#ececf2'>" + str(sys_list[i]) + "</td>" \
                                  "<td class='son' bgcolor='#F8F8FF'>" + str(sys_total[i]) + "</td>" \
                                  "<td class='son' bgcolor='#ececf2'>" + str(sys_used[i]) +"</td>" \
                                  "<td class='son' bgcolor='#F8F8FF'>" + str(math.ceil(sys_used[i] / sys_total[i] * 100)) + "%</td>" \
                               "</tr>"
        else:
            sys_tr = sys_tr + "<tr><td class='son'>" + str(sys_list[i]) + "</td>" \
                                  "<td class='son'>" + str(sys_total[i]) + "</td>" \
                                  "<td class='son'>" + str(sys_used[i]) + "</td>" \
                                  "<td class='son'>" + str(math.ceil(sys_used[i] / sys_total[i] * 100)) + "%</td>" \
                               "</tr>"
    sys_div = sys_div.format(sys_tr)





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
                background-color:#ececf2;
                height:12px;
            }}
            tr.tr_body {{
                background-color:white;
                height:12px;
            }}
            tr.tr_body1 {{
                background-color:ececf2;
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
            td.son {{
                width:25%;text-align: center;height; height:25px;
            }}
            table.top{{
                text-align:right;position:relative;right:10%;top:1px;margin-left:90%
            }}
            div.line_01{{ 
                height: 3px;margin-bottom:10px;margin-top:10px;border-top: 1px solid #ddd;text-align:center;background-color:#ececf2;
            }}
            .middleBox {{
                width: 98%;
                margin: 15px auto;
                background-color: #ececf2;
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
                API coverage report
            </h3>
            {1}
            <div class="line_01"></div>
            <table class="main">
            <tr class="tr_header">
                    <td>FileName</td>
                    <td>Functions</td>
                </tr>
                {0}
            </table>

        </body>
        </html>'''
    table1_tr = '''
        <tr class="tr_body">
            {}
        </tr>
    '''
    tmp_table = ""
    # 每个json
    flag = 0
    for i in range(0, len(paths)):
        with open(paths[i], 'r', encoding="utf-8") as json_file:
            tmp_json = json.load(json_file)

        num = 0
        # 每个json中的方法
        for k in range(0, len(tmp_json)):
            if tmp_json[k]['Count'] > 0:

                num += 1
        if num == 0:
            td = r"<tr class='tr_body'><td><a href=./html/" + json_list[i] + ".html>{}</a></td>".format(json_list[i]) + "<td>0%</td></tr>"
        else:

            td = "<tr class='tr_body'><td><a href=./html/" + json_list[i] + ".html>{}</a></td>".format(json_list[i]) + "<td>" + str(
                math.ceil(num / len(tmp_json) * 100)) + "%</td></tr>"
        tmp_table = tmp_table + table1_tr.format(td)
    puzz = html_head.format(tmp_table, sys_div)

    with open(resultName + '/main.html', 'w',
              encoding='utf-8') as file:
        file.write(puzz)


def outputsonHtml(json_path, resultName):
    htmlsonhead = '''<!DOCTYPE html>
            <html lang="en">
            <head>
                  <meta charset="UTF-8">
                  <title>api coverage report</title>
                  <style>
                h1 {{text-align:center}} 
                body,ol,ul,h1,h2,h3,h4,h5,h6,p,th,td,dl,dd,form,fieldset,legend,input,textarea,select {{margin:0;padding:0}}
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
                    background-color:#ececf2;
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
                    height: 3px;margin-bottom:10px;margin-top:10px;border-top: 1px solid #ddd;text-align:center;background-color:#ececf2;
                }}  

                  </style>
            </head>
            <body>
                <h1>
                    API coverage report
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
                    <td>api</td>
                    <td>
                        <table>
                            <tr>
                              <td>api_method_name</td>  
                              <td>apiLevel</td>  
                              <td>count</td>  
                            </tr>
                            {0}
                        </table>
                    </td>
                </tr>
                </table>

            </body>
            </html>'''


    json_list = ext.file_name(json_path)

    for i in range(0, len(json_list)):

        # 获取json文件绝对路径
        json_abs_path = json_path + "\\" + json_list[i]
        tr_td = ""

        with open(json_abs_path, 'r', encoding="utf-8") as f:
            tmp_json = json.load(f)

            for j in range(0, len(tmp_json)):
                td = ""
                td = td + "<tr><td>" + tmp_json[j]['name'] + "</td><td>" + tmp_json[j]['ApiLevel'] + "</td><td>" + str(tmp_json[j]['Count']) + "</td><tr>"
                tr_td = tr_td + td
        puzz = htmlsonhead.format(tr_td, tmp_json[j]['subsystem_ch'], tmp_json[j]['subsystem_en'])

        with open(resultName + r'/html/' + json_list[i] + '.html', 'w',
                  encoding='utf-8') as file:
            file.write(puzz)


if __name__ == "__main__":
    pass