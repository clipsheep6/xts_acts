/**
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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

import VideoRateTestComponent2 from '../../common/VideoRateTestComponent2';

@Entry
@Component
struct VideoOperate8NotSet {
  // Video构造入参
  @State videoSrc: Resource = $r('app.media.sucai1Media')
  @State previewUri: Resource = $r('app.media.img1')
  @State curRateNumber: number = 1;

  build() {
    Column({ space: 2 }) {
      VideoRateTestComponent2({
        curRateNumber: this.curRateNumber,
        videoSrc: this.videoSrc,
        previewUri: this.previewUri,
        errorValue: 0.1
      })
    }
  }

}