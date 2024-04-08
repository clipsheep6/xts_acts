import autoFillManager from '@ohos.app.ability.autoFillManager';
import router from '@ohos.router';
import hilog from '@ohos.hilog';
import abilityManager from '@ohos.app.ability.abilityManager';
import common from '@ohos.app.ability.common';
import Want from '@ohos.app.ability.Want';

@Entry
@Component
struct Index {
  @State message: string = 'Hello World'
  build() {
    Column() {
      Text(this.message)
        .fontSize(20)
        .fontStyle(FontStyle.Normal)
        .margin({ top: 10 })

      Row() {
        Text('姓  名')
          .margin(10)
          .fontSize(18)
          .width('22%')
          .margin({ left: 30 })

        TextInput({ placeholder: '请输入姓名'})
          .contentType(ContentType.PERSON_FULL_NAME)
          .id('personFullName')
          .height('7%')
          .width('60%')
          .fontSize(16)
          .borderStyle(BorderStyle.Solid)
          .enableAutoFill(true)
          .onChange((value) => {
            console.info('value of name change to', value)
          })
      }
      .margin({ top: 50 })
    }
  }
}
