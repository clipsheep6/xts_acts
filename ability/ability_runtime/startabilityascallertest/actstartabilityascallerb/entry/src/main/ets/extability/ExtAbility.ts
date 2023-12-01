// @ts-ignore
import UIExtensionAbility from '@ohos.app.ability.UIExtensionAbility'
import UIExtensionContentSession from '@ohos.app.ability.UIExtensionContentSession'
// @ts-ignore
import Want from '@ohos.app.ability.Want'

const TAG: string = '[UIExtAbility]'

export default class ExtAbility extends UIExtensionAbility {
  private session: UIExtensionContentSession = storage.get<UIExtensionContentSession>('session');

  onCreate() {
    console.log(`StartAbilityAsCaller_0100 UIExtAbility onCreate`)
    let newWant = {
      bundleName: 'com.example.abilityC',
      abilityName: 'EntryAbility',
    }
    console.error("StartAbilityAsCaller_0100 startAbilityAsCaller begin");
    this.session.startAbilityAsCaller(newWant, (err)=>{
      if (err && err.code != 0) {
        console.error('StartAbilityAsCaller_0100 err:' + JSON.stringify(err));
      } else {
        console.info('StartAbilityAsCaller_0100 success');
      }
    })

  }

  onForeground() {
    // Logger.log(TAG, `UIExtAbility onForeground`)
  }

  onBackground() {
    // Logger.log(TAG, `UIExtAbility onBackground`)
  }

  onDestroy() {
    // Logger.log(TAG, `UIExtAbility onDestroy`)
  }

  onSessionCreate(want, session) {
    // Logger.log(TAG, `UIExtAbility onSessionCreate, want: ${JSON.stringify(want)}`)
    let storage: LocalStorage = new LocalStorage({
      'session': session
    });
    console.error("[zhaolei] onSeesionCreate")
    session.loadContent('pages/Index', storage);
    this.context.startAbility(want, ()=>{
      this.com
    });
    this.context.terminateSelf();
  }

  onSessionDestroy(session) {

  }
};