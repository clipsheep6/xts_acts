import { SingletonTest } from 'har'

export function hspDispatchStaticMethodHar(): number {
  return SingletonTest.staticAdd1();
}

export function hspDispatchInstanceMethodHar(): number {
  let obj: SingletonTest = new SingletonTest();
  return obj.instanceAdd1();
}
