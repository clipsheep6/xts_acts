import autoFillManager from '@ohos.app.ability.autoFillManager';
import {nameList, phoneList, addressList} from "../application/ItemListData"

let storage = LocalStorage.getShared();
let fillCallback = storage.get<autoFillManager.FillRequestCallback>('fillCallback')
let viewData: autoFillManager.ViewData | undefined = storage.get<autoFillManager.ViewData>('viewData');
let type: number|undefined = storage.get<number>('autoFillType');

let type_to_data_map:Map<number, Array<string>> = new Map();
type_to_data_map.set(4, addressList);
type_to_data_map.set(10, nameList);
type_to_data_map.set(15, phoneList);

let type_to_index_map:Map<number,number> = new Map();
type_to_index_map.set(4, 2);
type_to_index_map.set(10, 0);
type_to_index_map.set(15, 1);

let ItemList: Array<string> | undefined;

if(type != undefined) {
  if (type_to_data_map.get(type) != undefined) {
    ItemList = type_to_data_map.get(type)
  }
}

function successFunc(index: number) {
  if (viewData) {
    if (index >=0 ) {
      let nodeIndex: number |undefined = type_to_index_map.get(type? type : 0);
      if(nodeIndex != undefined) {
        if (ItemList) {
          viewData.pageNodeInfos[nodeIndex].value = ItemList[index];
        }
      }
    }
    if (fillCallback) {
      let response: autoFillManager.FillResponse = { viewData : viewData };
      fillCallback.onSuccess(response);
    }
  }
}

function cancelFunc() {
  if (fillCallback) {
    fillCallback.onCancel();
  }
}

function failFunc() {
  if (fillCallback) {
    fillCallback.onFailure();
  }
}

@Entry
@Component
struct SelectorList {
  @State message: string = 'AutoFill Page'
  @State backGroundColor: string = '#ffa5a3a3'

  build() {
      Row() {
        Column() {
          List({ space: 10, initialIndex: 0 }) {
            ForEach(ItemList, (item: string, index: number) => {
              ListItem() {
                Text(item ? item : "")
                  .width('100%')
                  .height(40)
                  .fontSize(16)
                  .textAlign(TextAlign.Center)
                  .borderRadius(5)
                  .id(`item_${index}`)
              }
              .onClick(() => {
                console.log("click index: ", index.toString())
                if (viewData != undefined) {
                  successFunc(index)
                }
              })
            })
            ListItem() {
              Text("无可填充内容")
                .width('100%')
                .height(ItemList == undefined? 40 :ItemList.length == 0 ? 40:0 )
                .fontSize(16)
                .textAlign(TextAlign.Center)
                .visibility(ItemList == undefined? Visibility.Visible :
                            ItemList.length == 0? Visibility.Visible :
                            Visibility.Hidden)
            }

            ListItem() {
              Flex({justifyContent: FlexAlign.Center, alignItems: ItemAlign.Center}) {
                Button("取消填充")
                  .onClick(() => {
                    cancelFunc();
                    // return;
                  })
                  .height(20)
                  .margin({right:10})
                Button("模拟失败")
                  .onClick(() => {
                    failFunc();
                  })
                  .height(20)
              }
              .height(40)
            }
          }
          .listDirection(Axis.Vertical)
          .scrollBar(BarState.Off)
          .friction(0.6)
          .divider({ strokeWidth: 1, color: '#fff5eeee', startMargin: 20, endMargin: 20 })
          .edgeEffect(EdgeEffect.Spring)
          .onScrollIndex((firstIndex: number, lastIndex: number, centerIndex: number) => {
            console.info('first' + firstIndex)
            console.info('last' + lastIndex)
            console.info('center' + centerIndex)
          })
          .onScroll((scrollOffset: number, scrollState: ScrollState) => {
            console.info(`onScroll scrollState = ScrollState` + scrollState + `, scrollOffset = ` + scrollOffset)
          })
        }
        .width('100%')
        .shadow(ShadowStyle.OUTER_FLOATING_SM)
      }
      .height('100%')
      .shadow(ShadowStyle.OUTER_FLOATING_SM)
  }
}
