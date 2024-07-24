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

import router from '@ohos.router';
import PhotoModeComponent from "./PhotoModeComponent";
import { initCamera } from "../../../../../../../common";

@Entry
@Component
struct CameraIndex {

    @StorageLink("isShow")
    isShow: boolean = true;
    private surfaceId: string = ''
    private mXComponentController: XComponentController = new XComponentController();
    private defaultCameraDeviceIndex = 0;
    
    build() {
        Stack() {
            if (this.isShow) {
                XComponent({
                    id: 'xcomponent',
                    type: XComponentType.SURFACE,
                    controller: this.mXComponentController
                })
                .onLoad(async () => {
                    const params = router.getParams();
                    let savePhoto = params['savePhotoFlag'];
                    let testNum = params['testNum'];
                    console.log(`onLoad :: savePhoto is ${savePhoto}, testNum is ${testNum}`);
                    this.surfaceId = this.mXComponentController.getXComponentSurfaceId();
                    this.mXComponentController.setXComponentSurfaceSize({surfaceWidth: 1920, surfaceHeight: 1080});
                    console.log(`onLoad surfaceId: ${this.surfaceId}`);
                    // 初始化相机
                    await initCamera(testNum, this.surfaceId, savePhoto);
                })
                .border({
                    width: {
                        top: 0.5,
                        bottom: 0.5
                    },
                    color: Color.Black
                })
                .width(px2vp(1080))
                .height(px2vp(1920))
                PhotoModeComponent(); 
            }
        }
        .size({ width: "100%", height: "100%"})
        .backgroundColor(Color.Black)
    }
}