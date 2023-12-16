import CommonEventManager from '@ohos.commonEventManager'
import { expect } from '@ohos/hypium'

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
    CommonEventManager.publish(event, error => {
      console.log(`PUBLISH ${event} SUCCESS`);
    })
  } catch (error) {
    console.log(`PUBLISH ${event} FAILED`);
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
    CommonEventManager.publish(event, PUBLISH_OPT_DATA, error => {
      console.log(`PUBLISH ${event} SUCCESS`);
    })
  } catch (error) {
    console.log(`PUBLISH ${event} FAILED`);
    done()
  }
}