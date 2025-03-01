/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import Log from '../common/Log';
import web_webview from '@ohos.web.webview';

@Entry
@Component
struct WebComponent {
  @State progress: number = 0;
  @State hideProgress: boolean = true;
  fileAccess: boolean = true;
  // 定义Web组件的控制器controller
  controller: WebController = new WebController();
  controllerTwo: web_webview.WebviewController = new web_webview.WebviewController();
  webResourceResponse: WebResourceResponse = new WebResourceResponse();

  build() {
    Column() {
      Text('Hello world!')
        .fontSize(20)
      Progress({ value: this.progress, total: 100 })
        .color('#0000ff')
        .visibility(this.hideProgress ? Visibility.None : Visibility.Visible)
      // 初始化Web组件，并绑定controller
      Web({ src: "", controller: this.controller })
        .key("getTitleText")
        .fileAccess(this.fileAccess)
        .javaScriptAccess(true)
        .height(500)
        .padding(20)
        .blur(2)
        .userAgent("Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.198 Safari/537.36")// .fileFromUrlAccess(true)
        .initialScale(2)
      Text('End')
        .fontSize(20)
    }
  }
}
