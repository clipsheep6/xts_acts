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
import systemTime from '@ohos.systemTime';
import { BusinessError } from '@ohos.base';

export default class TimeUtils {
  // 计算播放速度
  static calcCurrentProgressRate(
    startTime: number,
    finishTime: number,
    videoLength: number
  ): number {
    let speedTime = finishTime - startTime;
    console.log("calcCurrentProgressRate,startTime,finishTime,videoLength,speedTime:",
      startTime, finishTime, videoLength, speedTime);
    return parseFloat((videoLength / speedTime).toFixed(2));
  }

  // 柯里化的函数，接受速度值并返回一个新的函数
  static curryCalculateSpeedAdjustedProgressRate(speed: number) {
    return (
      startTime: number,
      finishTime: number,
      videoLength: number
    ): number => {
      const progressRate = TimeUtils.calcCurrentProgressRate(startTime, finishTime, videoLength);
      // 根据速度值决定是否取整数
      return parseFloat(progressRate.toFixed(2)); // 其他速度，取两位小数
      // if (speed === 1 || speed === 2) {
      //   return Math.round(progressRate); // 速度为1或2时，取整数
      // } else {
      //   return parseFloat(progressRate.toFixed(2)); // 其他速度，取两位小数
      // }
    };
  }

  //拿到当前时间
  static async getCurrentTime(): Promise<number> {
    try {
      const time = await new Promise<number>((resolve, reject) => {
        systemTime.getCurrentTime((error: BusinessError | null, time: number) => {
          if (error) {
            console.info(`Failed to getting currentTime. message: ${error.message}, code: ${error.code}`);
            reject(error);
          } else {
            console.info(`Succeeded in getting currentTime : ${time}`);
            resolve(time);
          }
        });
      });
      return time;
    } catch (error) {
      console.info(`Failed to get currentTime. message: ${error.message}, code: ${error.code}`);
      return 0;
    }
  }
}




