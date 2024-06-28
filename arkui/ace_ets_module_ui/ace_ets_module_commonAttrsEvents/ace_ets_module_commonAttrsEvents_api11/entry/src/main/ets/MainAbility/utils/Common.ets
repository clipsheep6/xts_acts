/**
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
import screen from '@ohos.screen';
import { BusinessError } from '@ohos.base';
import RectValue from '../common/Rect';

export default class CommonFunc {
  static rect_left: number = 0;
  static rect_top: number = 0;
  static rect_right: number = 0;
  static rect_bottom: number = 0;
  static rect_value: RectValue = new RectValue();

  static sleep(time: number): Promise<void> {
    return new Promise<void>((resolve) => {
      setTimeout(() => {
        resolve();
      }, time);
    }).then(() => {
      console.info(`sleep ${time} over...`);
    });
  }

  static getComponentRect(key: string): RectValue {
    let strJson: string = getInspectorByKey(key);
    console.info("[getInspectorByKey] current component obj is: " + JSON.stringify(JSON.parse(strJson)));
    let rectInfo: number[][] = JSON.parse('[' + JSON.parse(strJson).$rect + ']');
    CommonFunc.rect_left = rectInfo[0][0];
    CommonFunc.rect_top = rectInfo[0][1];
    CommonFunc.rect_right = rectInfo[1][0];
    CommonFunc.rect_bottom = rectInfo[1][1];
    return CommonFunc.rect_value = {
      left: CommonFunc.rect_left, top: CommonFunc.rect_top, right: CommonFunc.rect_right, bottom: CommonFunc.rect_bottom
    };
  }

  static getComponentRectOnScreen(key: string): RectValue {
    let strJson: string = getInspectorByKey(key);
    console.info("[getInspectorByKey] current component obj is: " + JSON.stringify(JSON.parse(strJson)));
    let rectInfo: number[][] = JSON.parse('[' + JSON.parse(strJson).$rect + ']');
    console.info("[getInspectorByKey] rectInfo is: " + rectInfo);
    console.info("windowRect Left: " + globalThis.winLeft + ',' + "windowRect Top: " + globalThis.winTop );
    CommonFunc.rect_left = rectInfo[0][0] + globalThis.winLeft;
    CommonFunc.rect_top = rectInfo[0][1] + globalThis.winTop;
    CommonFunc.rect_right = rectInfo[1][0] + globalThis.winLeft;
    CommonFunc.rect_bottom = rectInfo[1][1] + globalThis.winTop;
    return CommonFunc.rect_value = {
      left: CommonFunc.rect_left, top: CommonFunc.rect_top, right: CommonFunc.rect_right, bottom: CommonFunc.rect_bottom
    };
  }

  static setScreenOrientation(orientation: number): void {
    // 1 -- 2 |
    screen.getAllScreens().then((data: screen.Screen[]) => {
      let screenClass: screen.Screen | null = data[0];
      console.log('Succeeded in getting all screens. Data:' + JSON.stringify(data));
      try {
        if (screenClass) {
          screenClass.setOrientation(orientation, (err: BusinessError | null) => {
            if (err) {
              console.error('Failed to set the vertical orientation. Code: ' + JSON.stringify(err));
              return;
            }
            console.info('Succeeded in setting the vertical orientation.');
          });
        }
      } catch (exception) {
        console.error('Failed to set the vertical orientation. Code: ' + JSON.stringify(exception));
      }
    }).catch((err: BusinessError) => {
      console.log('Failed to get all screens. Cause: ' + JSON.stringify(err));
    });
  }
}
