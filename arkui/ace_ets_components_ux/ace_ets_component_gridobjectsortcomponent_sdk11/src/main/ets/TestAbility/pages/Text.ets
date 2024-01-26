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

import {
  GridObjectSortComponent,
  GridObjectSortComponentItem,
  GridObjectSortComponentOptions,
  GridObjectSortComponentType
} from "@ohos.arkui.advanced.GridObjectSortComponent"

@Entry
@Component
struct Index {
  @State dataList: GridObjectSortComponentItem[] = [
    {
      id: 0,
      text: '科技',
      selected: true,
      order: 3
    },
    {
      id: 1,
      text: "教育",
      selected: true,
      order: 9
    },
    {
      id: 2,
      text: "影视",
      selected: true,
      order: 1
    },
    {
      id: 3,
      text: "动漫",
      selected: true,
      order: 4
    },
    {
      id: 4,
      text: '宇宙',
      selected: false,
      order: 5
    },
    { id: 5,
      text: '军事',
      selected: true,
      order: 6
    },
    { id: 6,
      text: "科教",
      selected: false,
      order: 7
    },
    { id: 7,
      text: '游戏',
      selected: false,
      order: 8
    },
    { id: 8,
      text: "课程",
      selected: false,
      order: 9
    },
    { id: 9,
      text: "付费",
      selected: false,
      order: 10
    }]
  @State option: GridObjectSortComponentOptions = {
    type: GridObjectSortComponentType.TEXT,
    imageSize: 56,
    normalTitle: "频道",
    editTitle: "编辑",
    showAreaTitle: "长按拖动排序",
    addAreaTitle: "点击添加",
  }

  build() {
    Column() {
      GridObjectSortComponent({
        options: this.option,
        dataList: this.dataList,
        onSave: (
          select: Array<GridObjectSortComponentItem>,
          unselect: Array<GridObjectSortComponentItem>
        ) => {
          // save ToDo
        },
        onCancel: () => {
          // cancel ToDo
        }
      })
    }
  }
}




