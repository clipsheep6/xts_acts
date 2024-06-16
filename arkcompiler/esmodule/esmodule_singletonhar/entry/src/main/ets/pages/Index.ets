import { hspDispatchStaticMethodHar, hspDispatchInstanceMethodHar } from 'hsp';
import { SingletonTest } from 'har';

export function hapDispatchStaticMethodHarTest(): number {
  return SingletonTest.staticAdd1();
}

export function hapDispatchInstanceMethodHarTest(): number {
  let obj: SingletonTest = new SingletonTest();
  return obj.instanceAdd1();
}

export async function hapDynamicDispatchHarTest(): Promise<number> {
  let har: string = 'har';
  let res: number = -1;
  await import(har).then( (obj: ESObject) => {
    res = obj.SingletonTest.staticAdd1();
  });
  return res;
}

export function hspDispatchStaticMethodHarTest(): number {
  return hspDispatchStaticMethodHar();
}

export function hspDispatchInstanceMethodHarTest(): number {
  let obj: SingletonTest = new SingletonTest();
  return hspDispatchInstanceMethodHar();
}

export async function hspDynamicDispatchHarTest(): Promise<number> {
  let hsp: string = 'hsp';
  let res: number = -1;
  await import(hsp).then( (obj: ESObject) => {
    res = obj.hspDispatchStaticMethodHar();
  });
  return res;
}

@Entry
@Component
struct Index {
  @State message: string = 'Hello World';

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
  }
}