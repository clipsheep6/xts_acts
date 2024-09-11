/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
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
import hilog from '@ohos.hilog';
import { addResourceToSandbox, createResource, getPermission, sleep } from '../../util/common'
import { common } from '@kit.AbilityKit';

@Entry
@Component
struct Index {
  async aboutToAppear() {
    let globalContext: common.UIAbilityContext = AppStorage.get('globalContext') as common.UIAbilityContext;
    await getPermission();
    sleep(10);
    addResourceToSandbox(globalContext);
    let fileNameList: Array<string> = [
      "addPro01.jpg", "01.jpg", "getBurstAssetsTest.jpg", "modifyPro01.jpg", "modifyPro02.jpg", "modifyPro03.jpg",
      "modifyPro04.jpg", "modifyPro05.jpg", "modifyPro06.jpg", "modifyPro07.jpg", "convertToPhotoAssetTest.jpg",
      "getTest.jpg", "01.mp4", "modifyPro01.mp4", "modifyPro02.mp4", "modifyPro03.mp4", "modifyPro04.mp4",
      "modifyPro05.mp4", "modifyPro06.mp4", "modifyPro07.mp4"
    ];
    await createResource(globalContext, fileNameList);
    hilog.info(0x0000, 'testTag', '%{public}s', 'TestAbility index aboutToAppear');
  }
 @State message: string = 'Hello World'
   build() {
         Row() {
           Column() {
             Text(this.message)
               .fontSize(50)
               .fontWeight(FontWeight.Bold)
             Button() {
               Text('next page')
                 .fontSize(20)
                 .fontWeight(FontWeight.Bold)
             }.type(ButtonType.Capsule)
             .margin({
               top: 20
             })
             .backgroundColor('#0D9FFB')
             .width('35%')
             .height('5%')
             .onClick(()=>{
             })
           }
             .width('100%')
         }
             .height('100%')
   }
 }