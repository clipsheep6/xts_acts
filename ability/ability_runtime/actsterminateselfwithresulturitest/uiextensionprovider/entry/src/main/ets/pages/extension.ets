/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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
// 扩展Ability入口页面文件extension.ets
import UIExtensionContentSession from '@ohos.app.ability.UIExtensionContentSession'
import web_webview from '@ohos.web.webview'
import common from '@ohos.app.ability.common';
import { BusinessError } from '@ohos.base';
import { CreateFile } from "../utils/fileUtils"
import Want from '@ohos.app.ability.Want';
import wantConstant from '@ohos.app.ability.wantConstant';
import abilityAccessCtrl from '@ohos.abilityAccessCtrl';


let storage = LocalStorage.GetShared()

@Entry(storage)
@Component
struct Index {
  @State message: string = 'UIExtension'
  @State message2: string = 'message from comp'
  private session: UIExtensionContentSession | undefined = storage.get<UIExtensionContentSession>('session');
  controller: TextInputController = new TextInputController()
  webController: web_webview.WebviewController = new web_webview.WebviewController()

  onPageShow() {
    console.log("#####zhawei##### start uiextension");
    if (this.session != undefined) {
      this.session.setReceiveDataCallback((data: Object) => {
        this.message2 = "data come from comp"
        this.message = JSON.stringify(data)
      })
    }
  }

  build() {
    Column() {
      Row() {
        Button("创建文件").margin(5).height(60).onClick(async () => {
          let context = getContext(this) as common.UIExtensionContext;
          await CreateFile(context)
        })
        Button("发送路径数据").margin(5).height(60).onClick(() => {
          if (this.session != undefined) {
            let audioUri: string | undefined = AppStorage.get<string>("audioUri");
            let photoUri: string | undefined = AppStorage.get<string>("photoUri");
            let docsUri: string | undefined = AppStorage.get<string>("docsUri");
            let data: Record<string, string | undefined> = {
              "audioUri": audioUri,
              "photoUri": photoUri, "docsUri": docsUri
            };
            this.session.sendData(data)
          }
        })
      }

      Text("TerminateSelf With UIExtensionContext").fontColor(Color.Red)
      Column({ space: 10 }) {
        Row() {
          Button("Terminate with DocsFile").onClick(() => {
            let uri: string | undefined = AppStorage.get<string>("docsUri");
            console.info("DSZ:: Terminate with docsUri:" + uri)
            let want: Want = {
              bundleName: 'com.example.uiextensionprovider',
              flags: wantConstant.Flags.FLAG_AUTH_WRITE_URI_PERMISSION | wantConstant.Flags.FLAG_AUTH_READ_URI_PERMISSION,
              abilityName: 'EntryAbility',
              uri: uri
            };
            let resultCode = 0;
            // 返回给接口调用方AbilityResult信息
            let abilityResult: common.AbilityResult = {
              want,
              resultCode
            };
            let context = getContext(this) as common.UIExtensionContext;
            try {
              context.terminateSelfWithResult(abilityResult, (err: BusinessError) => {
                if (err.code) {
                  // 处理业务逻辑错误DS
                  console.error(`terminateSelfWithResult failed, code is ${err.code}, message is ${err.message}`);
                  return;
                }
                // 执行正常业务
                console.info('terminateSelfWithResult succeed');
              });
            } catch (e) {
              console.info('terminateSelfWithResult failed');
            }
          }).margin(5).height(45).id('ContextDocs')
          Button("Terminate with AudioFile").onClick(() => {
            let uri: string | undefined = AppStorage.get<string>("audioUri");
            console.info("DSZ:: Terminate with  audioUri:" + uri)
            let want: Want = {
              bundleName: 'com.example.user',
              flags: wantConstant.Flags.FLAG_AUTH_WRITE_URI_PERMISSION | wantConstant.Flags.FLAG_AUTH_READ_URI_PERMISSION,
              abilityName: 'EntryAbility',
              uri: uri
            };
            let resultCode = 0;
            // 返回给接口调用方AbilityResult信息
            let abilityResult: common.AbilityResult = {
              want,
              resultCode
            };
            let context = getContext(this) as common.UIExtensionContext;
            try {
              context.terminateSelfWithResult(abilityResult, (err: BusinessError) => {
                if (err.code) {
                  // 处理业务逻辑错误DS
                  console.error(`terminateSelfWithResult failed, code is ${err.code}, message is ${err.message}`);
                  return;
                }
                // 执行正常业务
                console.info('terminateSelfWithResult succeed');
              });
            } catch (e) {
              console.info('terminateSelfWithResult failed');
            }
          }).margin(5).height(45).id('ContextAudio')
        }

        Row() {
          Button("Terminate With PhotoFile").onClick(() => {
            let uri: string | undefined = AppStorage.get<string>("photoUri");
            console.info("DSZ: Terminate with photoUri:" + uri)
            let want: Want = {
              bundleName: 'com.example.user',
              flags: wantConstant.Flags.FLAG_AUTH_WRITE_URI_PERMISSION | wantConstant.Flags.FLAG_AUTH_READ_URI_PERMISSION,
              abilityName: 'EntryAbility',
              uri: uri
            };
            let resultCode = 0;
            // 返回给接口调用方AbilityResult信息
            let abilityResult: common.AbilityResult = {
              want,
              resultCode
            };
            let context = getContext(this) as common.UIExtensionContext;
            try {
              context.terminateSelfWithResult(abilityResult, (err: BusinessError) => {
                if (err.code) {
                  // 处理业务逻辑错误DS
                  console.error(`terminateSelfWithResult failed, code is ${err.code}, message is ${err.message}`);
                  return;
                }
                // 执行正常业务
                console.info('terminateSelfWithResult succeed');
              });
            } catch (e) {
              console.info('terminateSelfWithResult failed');
            }
          }).margin(5).height(45).id('ContextPhoto')
          Button("Terminate With BundleFile").onClick(() => {
            let path_dir = '/data/storage/el2/base/'
            let file_dir = path_dir + 'haps/entry/files/upms_test_file.txt'
            let uri = 'file://com.example.uiextensionprovider' + file_dir
            let want: Want = {
              bundleName: 'com.example.user',
              flags: wantConstant.Flags.FLAG_AUTH_WRITE_URI_PERMISSION | wantConstant.Flags.FLAG_AUTH_READ_URI_PERMISSION,
              abilityName: 'EntryAbility',
              uri: uri
            };
            let resultCode = 0;
            // 返回给接口调用方AbilityResult信息
            let abilityResult: common.AbilityResult = {
              want,
              resultCode
            };
            let context = getContext(this) as common.UIExtensionContext;
            try {
              context.terminateSelfWithResult(abilityResult, (err: BusinessError) => {
                if (err.code) {
                  // 处理业务逻辑错误DS
                  console.error(`terminateSelfWithResult failed, code is ${err.code}, message is ${err.message}`);
                  return;
                }
                // 执行正常业务
                console.info('terminateSelfWithResult succeed');
              });
            } catch (e) {
              console.info('terminateSelfWithResult failed');
            }
          }).margin(5).height(45).id('ContextBundle')
        }

        Row() {
          Button("Terminate With BundleFile ReadOnly").onClick(() => {
            let path_dir = '/data/storage/el2/base/'
            let file_dir = path_dir + 'haps/entry/files/upms_test_file.txt'
            let uri = 'file://com.example.uiextensionprovider' + file_dir
            let want: Want = {
              bundleName: 'com.example.user',
              flags: wantConstant.Flags.FLAG_AUTH_READ_URI_PERMISSION,
              abilityName: 'EntryAbility',
              uri: uri
            };
            let resultCode = 0;
            // 返回给接口调用方AbilityResult信息
            let abilityResult: common.AbilityResult = {
              want,
              resultCode
            };
            let context = getContext(this) as common.UIExtensionContext;
            try {
              context.terminateSelfWithResult(abilityResult, (err: BusinessError) => {
                if (err.code) {
                  // 处理业务逻辑错误DS
                  console.error(`terminateSelfWithResult failed, code is ${err.code}, message is ${err.message}`);
                  return;
                }
                // 执行正常业务
                console.info('terminateSelfWithResult succeed');
              });
            } catch (e) {
              console.info('terminateSelfWithResult failed');
            }
          }).margin(5).height(45).id('ContextBundleOnly')
        }
      }.width('100%')

      Text("TerminateSelf With UIExtensionContentSession").fontColor(Color.Red)
      Column({ space: 10 }) {
        Row() {
          Button("Terminate with DocsFile").onClick(() => {
            let uri: string | undefined = AppStorage.get<string>("docsUri");
            console.info("DSZ:: Terminate with docsUri:" + uri)
            let want: Want = {
              bundleName: 'com.example.user',
              flags: wantConstant.Flags.FLAG_AUTH_WRITE_URI_PERMISSION | wantConstant.Flags.FLAG_AUTH_READ_URI_PERMISSION,
              abilityName: 'EntryAbility',
              uri: uri
            };
            let resultCode = 0;
            // 返回给接口调用方AbilityResult信息
            let abilityResult: common.AbilityResult = {
              want,
              resultCode
            };
            try {
              if (this.session != undefined) {
                this.session.terminateSelfWithResult(abilityResult, (err: BusinessError) => {
                  if (err.code) {
                    // 处理业务逻辑错误DS
                    console.error(`terminateSelfWithResult failed, code is ${err.code}, message is ${err.message}`);
                    return;
                  }
                  // 执行正常业务
                  console.info('terminateSelfWithResult succeed');
                });
              } else {
                console.info('terminateSelfWithResult failed')
              }
            } catch (e) {
              console.info('terminateSelfWithResult failed');
            }
          }).margin(5).height(45).id('SessionDocs')
          Button("Terminate with AudioFile").onClick(() => {
            let uri: string | undefined = AppStorage.get<string>("audioUri");
            console.info("DSZ:: Terminate with  audioUri:" + uri)
            let want: Want = {
              bundleName: 'com.example.user',
              flags: wantConstant.Flags.FLAG_AUTH_WRITE_URI_PERMISSION | wantConstant.Flags.FLAG_AUTH_READ_URI_PERMISSION,
              abilityName: 'EntryAbility',
              uri: uri
            };
            let resultCode = 0;
            // 返回给接口调用方AbilityResult信息
            let abilityResult: common.AbilityResult = {
              want,
              resultCode
            };
            try {
              if (this.session != undefined) {
                this.session.terminateSelfWithResult(abilityResult, (err: BusinessError) => {
                  if (err.code) {
                    // 处理业务逻辑错误DS
                    console.error(`terminateSelfWithResult failed, code is ${err.code}, message is ${err.message}`);
                    return;
                  }
                  // 执行正常业务
                  console.info('terminateSelfWithResult succeed');
                });
              } else {
                console.info('terminateSelfWithResult failed');
              }
            } catch (e) {
              console.info('terminateSelfWithResult failed');
            }
          }).margin(5).height(45).id('SessionAudio')
        }

        Row() {
          Button("Terminate With PhotoFile").onClick(() => {
            let uri: string | undefined = AppStorage.get<string>("photoUri");
            console.info("DSZ: Terminate with photoUri:" + uri)
            let want: Want = {
              bundleName: 'com.example.user',
              flags: wantConstant.Flags.FLAG_AUTH_WRITE_URI_PERMISSION | wantConstant.Flags.FLAG_AUTH_READ_URI_PERMISSION,
              abilityName: 'EntryAbility',
              uri: uri
            };
            let resultCode = 0;
            // 返回给接口调用方AbilityResult信息
            let abilityResult: common.AbilityResult = {
              want,
              resultCode
            };

            try {
              if (this.session != undefined) {
                this.session.terminateSelfWithResult(abilityResult, (err: BusinessError) => {
                  if (err.code) {
                    // 处理业务逻辑错误DS
                    console.error(`terminateSelfWithResult failed, code is ${err.code}, message is ${err.message}`);
                    return;
                  }
                  // 执行正常业务
                  console.info('terminateSelfWithResult succeed');
                });
              } else {
                console.info('terminateSelfWithResult failed for session is undefined')
              }
            } catch (e) {
              console.info('terminateSelfWithResult failed');
            }
          }).margin(5).height(45).id('SessionPhoto')
          Button("Terminate With BundleFile").onClick(() => {
            let path_dir = '/data/storage/el2/base/'
            let file_dir = path_dir + 'haps/entry/files/upms_test_file.txt'
            let uri = 'file://com.example.uiextensionprovider' + file_dir
            let want: Want = {
              bundleName: 'com.example.user',
              flags: wantConstant.Flags.FLAG_AUTH_WRITE_URI_PERMISSION | wantConstant.Flags.FLAG_AUTH_READ_URI_PERMISSION,
              abilityName: 'EntryAbility',
              uri: uri
            };
            let resultCode = 0;
            // 返回给接口调用方AbilityResult信息
            let abilityResult: common.AbilityResult = {
              want,
              resultCode
            };

            try {
              if (this.session != undefined) {
                this.session.terminateSelfWithResult(abilityResult, (err: BusinessError) => {
                  if (err.code) {
                    // 处理业务逻辑错误DS
                    console.error(`terminateSelfWithResult failed, code is ${err.code}, message is ${err.message}`);
                    return;
                  }
                  // 执行正常业务
                  console.info('terminateSelfWithResult succeed');
                });
              } else {
                console.info("terminateSelfWithResult failed for session is undefined")
              }
            } catch (e) {
              console.info('terminateSelfWithResult failed');
            }
          }).margin(5).height(45).id('SessionBundle')
        }
      }
    }
    .height('100%')
  }
}