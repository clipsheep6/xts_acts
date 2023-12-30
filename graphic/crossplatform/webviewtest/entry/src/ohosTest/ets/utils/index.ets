import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry'
import { BusinessError } from '@ohos.base'
import UIAbility from '@ohos.app.ability.UIAbility';

export const waitUiReadyMs: number = 1500;

export function sleep(delay: number = 1000): Promise<void> {
  return new Promise((resolve: Function) => {
    setTimeout(() => {
      resolve()
    }, delay)
  })
}

interface want {
  bundleName: string,
  abilityName: string,
  moduleName: string
}

const delegator: abilityDelegatorRegistry.AbilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();

export async function startAbility(bundleName: string, abilityName: string): Promise<void> {
  let want: want = {
    bundleName: `${bundleName}`,
    abilityName: `${abilityName}`,
    moduleName: "entry"
  };

  await delegator.startAbility(want).then((result: void) => {
    console.info(`WebViewTestCase, start abilityFinished: ${result}`)
  }).catch((err: BusinessError) => {
    console.error(`WebViewTestCase, start abilityFailed: ${err}`)
  })
}

export async function stopAbility(): Promise<void> {
  let topAbility: UIAbility = await delegator.getCurrentTopAbility();
  await topAbility.context.terminateSelf();
}