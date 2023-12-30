import CommonEventManager from '@ohos.commonEventManager'
import { expect } from '@ohos/hypium'
import { BusinessError } from '@ohos.base'

/**
 * 线程睡眠
 */
export function sleep (ms: number = 1000): Promise<void> {
  return new Promise((resolve: Function) => {
    setTimeout(() => {
      resolve()
    }, ms)
  })
}
/**
 * 无参数发布事件
 * @param event
 * @param done
 */
export function publishEventWithoutOpt(event: string,  done: Function):void {
  try {
    CommonEventManager.publish(event, (error: BusinessError) => {
      console.log(`PUBLISH ${event} SUCCESS`);
    })
  } catch (error) {
    console.log(`PUBLISH ${event} FAILED`);
    expect(false).assertTrue()
    done()
  }
}
/**
 * 带参数发布事件
 * @param event
 * @param PUBLISH_OPT_DATA
 * @param done
 */
export function publishEvent(event: string, PUBLISH_OPT_DATA: CommonEventManager.CommonEventPublishData, done: Function):void {
  try {
    CommonEventManager.publish(event, PUBLISH_OPT_DATA, (error: BusinessError) => {
      console.log(`PUBLISH ${event} SUCCESS`);
    })
  } catch (error) {
    console.log(`PUBLISH ${event} FAILED`);
    expect(false).assertTrue()
    done()
  }
}