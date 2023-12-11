// @ts-ignore
import UIExtensionContentSession from '@ohos.app.ability.UIExtensionContentSession'
import router from '@ohos.router';

let storage = LocalStorage.GetShared()

@Entry(storage)
@Component
struct Index {
  @State message: string = 'B'
  @State color: Color = Color.Yellow
  private session: UIExtensionContentSession = storage.get<UIExtensionContentSession>('session');

  build() {
    Row() {
      Column() {
        Text(this.message)
          .fontSize(50)
          .fontWeight(FontWeight.Bold)
      }
      .width('100%')
    }
    .height('100%')
    .backgroundColor(this.color)
  }
}