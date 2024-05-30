// 扩展入口文件UIExtensionProvider.ts
import UIExtensionAbility from '@ohos.app.ability.UIExtensionAbility'
import UIExtensionContentSession from '@ohos.app.ability.UIExtensionContentSession'
import Want from '@ohos.app.ability.Want';
const TAG: string = '[UIExtensionProvider]'
export default class UIExtensionProvider extends UIExtensionAbility {
  onCreate() {
    console.log(TAG, `UIExtensionProvider onCreate`)
  }

  onForeground() {
    console.log(TAG, `UIExtensionProvider onForeground`)
  }

  onBackground() {
    console.log(TAG, `UIExtensionProvider onBackground`)
  }

  onDestroy() {
    console.log(TAG, `UIExtensionProvider onDestroy`)
  }

  onSessionCreate(want: Want, session: UIExtensionContentSession) {
    console.log(TAG, `UIExtensionProvider onSessionCreate, want: ${JSON.stringify(want)}`)
    let param: Record<string, UIExtensionContentSession> = {
      'session': session
    }
    let storage: LocalStorage = new LocalStorage(param);
    session.loadContent('pages/extension', storage);
  }

  onSessionDestroy(session: UIExtensionContentSession) {
    console.log(TAG, `UIExtensionProvider onSessionDestroy`)
  }
}
