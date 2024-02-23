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
} from '@ohos.arkui.advanced.GridObjectSortComponent'

@Entry
@Component
struct ImageText {
  @State dataList: GridObjectSortComponentItem[] = [{
    id: 0,
    url: $r('app.media.vk'),
    text: "热门",
    selected: true,
    order: 3
  },
    {
      id: 1,
      url: $r('app.media.vk'),
      text: '美食',
      selected: true,
      order: 9
    },
    {
      id: 2,
      url: $r('app.media.vk'),
      text: '动漫',
      selected: false,
      order: 1
    }, {
      id: 3,
      url: $r('app.media.vk'),
      text: '军事',
      selected: true,
      order: 4
    }, {
      id: 4,
      url: $r('app.media,vk'),
      text: "影视",
      selected: false,
      order: 5
    },


    {
      id: 5,
      url: $r('app.media.vk'),
      text: "鬼畜",
      selected: true,
      order: 6
    }, {
      id: 6,
      url: $r('app.media.vk'),
      text: '油管',
      selected: true,
      order: 17
    }, {
      id: 7,
      url: $r('app.media.vk'),
      text: "通讯",
      selected: true,
      order: 8
    }, {
      id: 8,
      url: $r('app.media.vk'),
      text: "推荐",
      selected: false,
      order: 9
    }

  ]
  @State option: GridObjectSortComponentOptions = {
    type: GridObjectSortComponentType.IMAGE_TEXT,
    imageSize: 56,
    normalTitle: '频道',
    editTitle: '编辑',
    showAreaTitle: '长按拖动排序',
    addAreaTitle: "点击添加",
  }

  build() {
    Column() {
      GridObjectSortComponent({
        dataList: this.dataList,
        options: this.option,
        onSave: (select: GridObjectSortComponentItem[], unselect: GridObjectSortComponentItem[]) => {
        },
        onCancel: () => {
        },
      })
    }.width('100%')
  }
}



