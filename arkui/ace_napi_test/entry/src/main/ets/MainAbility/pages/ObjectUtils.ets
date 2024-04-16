import napitest from 'libnapitest.so'

export function SetTimeout() : Promise<void> {
  return new Promise((resolve) => {
    setTimeout(() => {
      resolve();
    }, 1000)
  })
}

export function SetTimeout1() : Promise<void> {
  return new Promise((resolve) => {
    setTimeout(() => {
      resolve();
    }, 5000)
  })
}

export function Add(a: number, b: number) : void {
  napitest.add(a, b, (result) => {
  })
}

export function Add1(a: number, b: number) : void {
  napitest.add1(a, b, (result) => {
  })
}
