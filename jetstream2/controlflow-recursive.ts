// The Computer Language Shootout
// http://shootout.alioth.debian.org/
// contributed by Isaac Gouy

let inDebug = false
function log(str: string) {
  if (inDebug) {
    print(str)
  }
}
function currentTimestamp13():number {
  return ArkTools.timeInUs() / 1000
}


function ack(m: number, n: number): number {
    if (m==0) { return n+1; }
    if (n==0) { return ack(m-1,1); }
    return ack(m-1, ack(m,n-1) );
 }
 
 function fib(n: number): number {
     if (n < 2) { return 1; }
     return fib(n-2) + fib(n-1);
 }
 
 function tak(x: number, y: number, z: number): number {
     if (y >= x) { return z; }
     return tak(tak(x-1,y,z), tak(y-1,z,x), tak(z-1,x,y));
 }
 
 function run() {
     let result = 0;
    
     for ( let i = 3; i <= 5; i++ ) {
         result += ack(3,i)
         result += fib(17.0+i)
         result += tak(3*i+3,2*i+2,i+1)
     }
 
     let expected = 57775;
     if (result != expected) {
         throw new Error(`ERROR: bad result: expected ${expected} but got ${result}`)
     }
 }

 let startTime = currentTimestamp13()
 for (let i=0; i<80; i++) {
   let startTimeInLoop = currentTimestamp13()
   run()
   let endTimeInLoop = currentTimestamp13()
   //log(`controlflow-recursive: ms = ${endTimeInLoop - startTimeInLoop} i = ${i}`)
 }
 let endTime = currentTimestamp13()
 print(`controlflow-recursive: ms = ${endTime - startTime}`)

 declare interface ArkTools {
  timeInUs(args: number): number;
}