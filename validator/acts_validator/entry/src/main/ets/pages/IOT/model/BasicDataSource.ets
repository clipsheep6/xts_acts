/*
* Copyright (c) 2023 Hunan OpenValley Digital Industry Development Co., Ltd.
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

import Logger from '../../model/Logger'
import IotDevice from './IotDevice'

export default class ProductDataSource implements IDataSource {
  private listeners: DataChangeListener[] = []
  private dataArray: IotDevice[] = []

  constructor() {
  }

  public totalCount(): number {
    return this.dataArray.length
  }

  public getData(index: number): IotDevice {
    return this.dataArray[index]
  }

  public pushData(data: IotDevice): void {
    let index = this.dataArray.findIndex(item => item.getUnionCode() == data.getUnionCode());
    if (index >= 0) {
      return;
    }
    this.dataArray.push(data);
    this.notifyDataAdd(this.dataArray.length - 1)
  }

  public deleteData(data: IotDevice): void {
    let array = this.dataArray.filter((item) => item.getUnionCode() != data.getUnionCode())
    this.dataArray = [...array];
    this.notifyDataReload();
  }

  public reset(): void {
    this.dataArray = [];
    this.notifyDataReload()
  }

  registerDataChangeListener(listener: DataChangeListener): void {
    if (this.listeners.indexOf(listener) < 0) {
      Logger.info('add listener')
      this.listeners.push(listener)
    }
  }

  unregisterDataChangeListener(listener: DataChangeListener): void {
    const POS = this.listeners.indexOf(listener)
    if (POS >= 0) {
      Logger.info('remove listener')
      this.listeners.splice(POS, 1)
    }
  }

  notifyDataReload(): void {
    this.listeners.forEach(listener => {
      listener.onDataReloaded()
    })
  }

  notifyDataAdd(index: number): void {
    this.listeners.forEach(listener => {
      listener.onDataAdd(index)
    })
  }

  notifyDataChange(index: number): void {
    this.listeners.forEach(listener => {
      listener.onDataChange(index)
    })
  }

  notifyDataDelete(index: number): void {
    this.listeners.forEach(listener => {
      listener.onDataDelete(index)
    })
  }

  notifyDataMove(from: number, to: number): void {
    this.listeners.forEach(listener => {
      listener.onDataMove(from, to)
    })
  }
}