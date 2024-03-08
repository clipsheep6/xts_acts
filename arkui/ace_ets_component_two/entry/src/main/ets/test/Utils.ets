/**
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

import Rect from './Rect';

export default class Utils {
  static sleep(time: number): Promise<void> {
    return new Promise<void>((resolve) => {
      setTimeout(() => {
        resolve();
      }, time);
    }).then(() => {
      console.info(`sleep ${time} over...`);
    })
  }

  static getComponentRect(key: string): Rect {
    let strJson: string = getInspectorByKey(key);
    let obj: ESObject = JSON.parse(strJson);
    console.info("[getInspectorByKey] current component obj is: " + JSON.stringify(obj));

    let rectInfo: Array<number> = JSON.parse('[' + obj!.$rect + ']');
    console.info("[getInspectorByKey] rectInfo is: " + rectInfo);

    let rect_left: number = JSON.parse('[' + rectInfo[0] + ']')[0];
    let rect_top: number = JSON.parse('[' + rectInfo[0] + ']')[1];
    let rect_right: number = JSON.parse('[' + rectInfo[1] + ']')[0];
    let rect_bottom: number = JSON.parse('[' + rectInfo[1] + ']')[1];

    return new Rect(rect_left, rect_top, rect_right, rect_bottom);
  }

  static async swipe(downX: number, downY: number, upX: number, upY: number, steps: number) {
    console.info('start to swipe');
    Utils.drags(downX, downY, upX, upY, steps, false);
  }

  static async drag(downX: number, downY: number, upX: number, upY: number, steps: number) {
    console.info('start to drag');
    Utils.drags(downX, downY, upX, upY, steps, true);
  }

  static createTouchObject(x: number, y: number, type: TouchType): TouchObject {
    return {
      id: 1,
      x: x,
      y: y,
      type: type,
      displayX: 0,
      displayY: 0,
      screenX: 0,
      screenY: 0,
      windowX: 0,
      windowY: 0
    }
  }

  static async drags(downX: number, downY: number, upX: number, upY: number, steps: number, drag: boolean) {
    let ret: boolean = false;

    let swipeSteps: number = steps;
    if (swipeSteps == 0) {
      swipeSteps = 1;
    }

    let xStep: number = (upX - downX) / swipeSteps;
    let yStep: number = (upY - downY) / swipeSteps;

    console.info('move step is: xStep: ' + xStep + ' yStep: ' + yStep);

    let downPoint: TouchObject = Utils.createTouchObject(downX, downY, TouchType.Down);
    console.info('down touch started: ' + JSON.stringify(downPoint));

    sendTouchEvent(downPoint);
    console.info('start to move');

    if (drag) {
      await Utils.sleep(500);
    }

    for (let i = 1; i <= swipeSteps; i++) {
      let x: number = downX + (xStep * i);
      let y: number = downY + (yStep * i);
      let movePoint: TouchObject = Utils.createTouchObject(x, y, TouchType.Move);
      console.info('move touch started: ' + JSON.stringify(movePoint));
      ret = sendTouchEvent(movePoint);
      if (ret == false) {
        break;
      }
      await Utils.sleep(5);
    }

    console.info('start to up')
    if (drag) {
      await Utils.sleep(100);
    }

    let upPoint: TouchObject = Utils.createTouchObject(upX, upY, TouchType.Up);
    console.info('up touch started: ' + JSON.stringify(upPoint));
    sendTouchEvent(upPoint);

    await Utils.sleep(500);
  }
}
