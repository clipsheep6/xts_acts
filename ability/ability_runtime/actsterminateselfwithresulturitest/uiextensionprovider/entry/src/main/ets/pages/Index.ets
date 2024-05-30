import abilityAccessCtrl from '@ohos.abilityAccessCtrl';
import common from '@ohos.app.ability.common';

@Entry
@Component
struct Index {
  @State message: string = 'Hello, UIExtensionProvider!';
  aboutToAppear() {
    let context = getContext(this) as common.UIAbilityContext;
    let atManager: abilityAccessCtrl.AtManager = abilityAccessCtrl.createAtManager();
    atManager.requestPermissionsFromUser(context, ['ohos.permission.READ_AUDIO',
      "ohos.permission.WRITE_AUDIO",
      "ohos.permission.WRITE_IMAGEVIDEO",
      "ohos.permission.READ_IMAGEVIDEO"], (err, data)=>{
      if (err) {
        console.error(`DSZ:: requestPermissionsFromUser fail, err->${JSON.stringify(err)}`);
      }
    });
  }

  build() {
    Row() {
      Column({space: 40}) {
        Text(this.message)
          .fontSize(50)
          .fontWeight(FontWeight.Bold)
      }
      .width('100%')
    }
    .height('100%')
  }
}