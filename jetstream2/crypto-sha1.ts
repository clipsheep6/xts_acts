/**
 ** A JavaScript implementation of the Secure Hash Algorithm, SHA-1, as defined
 ** in FIPS PUB 180-1
 ** Version 2.1a Copyright Paul Johnston 2000 - 2002.
 ** Other contributors: Greg Holt, Andrew Kepert, Ydnar, Lostinet
 ** Distributed under the BSD License
 ** See http://pajhome.org.uk/crypt/md5 for details.
 **/

 const TIME_MULTIPLIER = 1000;
 const SHA1_NUM_2 = 2;
 const SHA1_NUM_3 = 3;
 const SHA1_NUM_4 = 4;
 const SHA1_NUM_5 = 5;
 const SHA1_NUM_8 = 8;
 const SHA1_NUM_9 = 9;
 const SHA1_NUM_14 = 14;
 const SHA1_NUM_15 = 15;
 const SHA1_NUM_16 = 16;
 const SHA1_NUM_20 = 20;
 const SHA1_NUM_24 = 24;
 const SHA1_NUM_25 = 25;
 const SHA1_NUM_30 = 30;
 const SHA1_NUM_32 = 32;
 const SHA1_NUM_40 = 40;
 const SHA1_NUM_60 = 60;
 const SHA1_NUM_64 = 64;
 const SHA1_NUM_80 = 80;
 const SHA1_NUM_120 = 120;
 
 const SHA1_NUM_1518500249 = 1518500249;
 const SHA1_NUM_1859775393 = 1859775393;
 const SHA1_NUM_NEGATIVE_1894007588 = -1894007588;
 const SHA1_NUM_NEGATIVE_899497514 = -899497514;
 
 const SHA1_NUM_0X80 = 0x80;
 const SHA1_NUM_0XF = 0xf;
 const SHA1_NUM_0XFFFF = 0xffff;
 
 const SHA1_NUM_INT32_MAX = 2147483647;
 const SHA1_NUM_INT32_MIN = -2147483648;
 const SHA1_NUM_UINT32_MAX = 4294967295;
 
 let inDebug = false;
 function log(str: string): void {
   if (inDebug) {
     print(str);
   }
 }
 function currentTimestamp13(): number {
   return ArkTools.timeInUs() / TIME_MULTIPLIER;
 }
 /*
  * Configurable variables. You may need to tweak these to be compatible with
  * the server-side, but the defaults work in most cases.
  */
 const hexcase: number = 0; /* hex output format. 0 - lowercase; 1 - uppercase       */
 const b64pad: string = ''; /* base-64 pad character. "=" for strict RFC compliance   */
 const chrsz: number = 8; /* bits per input character. 8 - ASCII; 16 - Unicode     */
 
 /*
  * These are the functions you'll usually want to call
  * They take string arguments and return either hex or base-64 encoded strings
  */
 function hexSha1(s: string): string {
   return binb2hex(coreSha1(str2binb(s), s.length * chrsz));
 }
 
 /*
  * Calculate the SHA-1 of an array of big-endian words, and a bit length
  */
 function coreSha1(x1: number[], len: number): number[] {
   let x = x1;
   let toMax = Math.max(len >> SHA1_NUM_5, (((len + SHA1_NUM_64) >> SHA1_NUM_9) << SHA1_NUM_4) + SHA1_NUM_15) - x.length;
   if (toMax >= 0) {
     x = x.concat(Array.from({ length: toMax + 1 }, () => 0));
   }
   /* append padding */
   x[len >> SHA1_NUM_5] |= SHA1_NUM_0X80 << (SHA1_NUM_24 - (len % SHA1_NUM_32));
   x[(((len + SHA1_NUM_64) >> SHA1_NUM_9) << SHA1_NUM_4) + SHA1_NUM_15] = len;
 
   let w: number[] = Array.from({ length: 80 }, () => 0);
   let a1 = 1732584193;
   let b1 = -271733879;
   let c1 = -1732584194;
   let d1 = 271733878;
   let e1 = -1009589776;
   let i = 0;
   while (i < x.length) {
     const olda = a1;
     const oldb = b1;
     const oldc = c1;
     const oldd = d1;
     const olde = e1;
 
     for (let j = 0; j < SHA1_NUM_80; j++) {
       if (j < SHA1_NUM_16) {
         w[j] = x[i + j];
       } else {
         w[j] = rol(w[j - SHA1_NUM_3] ^ w[j - SHA1_NUM_8] ^ w[j - SHA1_NUM_14] ^ w[j - SHA1_NUM_16], 1);
       }
       let t = safeAdd(safeAdd(rol(a1, SHA1_NUM_5), sha1Ft(j, b1, c1, d1)), safeAdd(safeAdd(e1, w[j]), sha1Kt(j)));
       e1 = d1;
       d1 = c1;
       c1 = rol(b1, SHA1_NUM_30);
       b1 = a1;
       a1 = t;
     }
 
     a1 = safeAdd(a1, olda);
     b1 = safeAdd(b1, oldb);
     c1 = safeAdd(c1, oldc);
     d1 = safeAdd(d1, oldd);
     e1 = safeAdd(e1, olde);
 
     i += SHA1_NUM_16;
   }
   return [a1, b1, c1, d1, e1];
 }
 
 /*
  * Perform the appropriate triplet combination function for the current
  * iteration
  */
 function sha1Ft(t: number, b: number, c: number, d: number): number {
   if (t < SHA1_NUM_20) {
     return (b & c) | (~b & d);
   }
   if (t < SHA1_NUM_40) {
     return b ^ c ^ d;
   }
   if (t < SHA1_NUM_60) {
     return (b & c) | (b & d) | (c & d);
   }
   return b ^ c ^ d;
 }
 
 /*
  * Determine the appropriate additive constant for the current iteration
  */
 function sha1Kt(t: number): number {
   return t < SHA1_NUM_20
     ? SHA1_NUM_1518500249
     : t < SHA1_NUM_40
     ? SHA1_NUM_1859775393
     : t < SHA1_NUM_60
     ? SHA1_NUM_NEGATIVE_1894007588
     : SHA1_NUM_NEGATIVE_899497514;
 }
 
 /*
  * Add integers, wrapping at 2^32. This uses 16-bit operations internally
  * to work around bugs in some JS interpreters.
  */
 function safeAdd(x: number, y: number): number {
   const lsw = (x & SHA1_NUM_0XFFFF) + (y & SHA1_NUM_0XFFFF);
   const msw = (x >> SHA1_NUM_16) + (y >> SHA1_NUM_16) + (lsw >> SHA1_NUM_16);
   return (msw << SHA1_NUM_16) | (lsw & SHA1_NUM_0XFFFF);
 }
 
 /*
  * Bitwise rotate a 32-bit number to the left.
  */
 function rol(num: number, cnt: number): number {
   return transBigInt32(num << cnt) | (transBigInt32(num) >>> (SHA1_NUM_32 - cnt));
 }
 
 /*
  * Convert an 8-bit or 16-bit string to an array of big-endian words
  * In 8-bit function, characters >255 have their hi-byte silently ignored.
  */
 function str2binb(str: string): Array<number> {
   let bin = Array<number>();
   const mask = (1 << chrsz) - 1;
   const toMax = ((str.length * chrsz - 1) >> SHA1_NUM_5) - bin.length;
   if (toMax >= 0) {
     bin = bin.concat(Array<number>(toMax + 1));
   }
 
   for (let i = 0; i < str.length * chrsz; i += chrsz) {
     bin[i >> SHA1_NUM_5] |= (str.charCodeAt(i / chrsz) & mask) << (SHA1_NUM_32 - chrsz - (i % SHA1_NUM_32));
   }
   return bin;
 }
 
 /*
  * Convert an array of big-endian words to a hex string.
  */
 function binb2hex(binarray: number[]): string {
   const hex_tab = hexcase !== 0 ? '0123456789ABCDEF' : '0123456789abcdef';
   let str = '';
 
   for (let i = 0; i < binarray.length * SHA1_NUM_4; i++) {
     str +=
       hex_tab.charAt(
         (binarray[i >> SHA1_NUM_2] >> ((SHA1_NUM_3 - (i % SHA1_NUM_4)) * SHA1_NUM_8 + SHA1_NUM_4)) & SHA1_NUM_0XF
       ) + hex_tab.charAt((binarray[i >> SHA1_NUM_2] >> ((SHA1_NUM_3 - (i % SHA1_NUM_4)) * SHA1_NUM_8)) & SHA1_NUM_0XF);
   }
   return str;
 }
 
 function run(): void {
  let plainText: string =
  "Two households, both alike in dignity,\n\
In fair Verona, where we lay our scene,\n\
From ancient grudge break to new mutiny,\n\
Where civil blood makes civil hands unclean.\n\
From forth the fatal loins of these two foes\n\
A pair of star-cross'd lovers take their life;\n\
Whole misadventured piteous overthrows\n\
Do with their death bury their parents' strife.\n\
The fearful passage of their death-mark'd love,\n\
And the continuance of their parents' rage,\n\
Which, but their children's end, nought could remove,\n\
Is now the two hours' traffic of our stage;\n\
The which if you with patient ears attend,\n\
What here shall miss, our toil shall strive to mend.";
 
   for (let i = 0; i < SHA1_NUM_4; i++) {
     plainText += plainText;
   }
 
   let sha1Output = hexSha1(plainText);
   //log(`crypto-sha1 - sha1Output: ${sha1Output}`)
   let expected = '2524d264def74cce2498bf112bedf00e6c0b796d';
   if (sha1Output !== expected) {
     throw new Error('ERROR: bad result: expected ' + expected + ' but got ' + sha1Output);
   }
 }
 /*
  * @State
  */
 export default class Benchmark {
   /*
    * @Benchmark
    */
   runIteration(): void {
     let startTime = currentTimestamp13();
     for (let i = 0; i < SHA1_NUM_25; ++i) {
       run();
     }
     let endTime = currentTimestamp13();
     //log(`crypto-sha1: ms = ${endTime - startTime} inloop`);
   }
 }
 
 declare interface ArkTools {
   timeInUs(args: number): number;
 }
 
 function transBigInt32(bigInt32Num: number): number {
   let tmp = bigInt32Num;
   if (tmp > SHA1_NUM_INT32_MAX) {
     let max = SHA1_NUM_UINT32_MAX;
     tmp = tmp % (max + 1);
     if (tmp > SHA1_NUM_INT32_MAX) {
       tmp = tmp - max - 1;
     }
   } else if (tmp < SHA1_NUM_INT32_MIN) {
     let max = SHA1_NUM_UINT32_MAX;
     tmp = tmp % (max + 1);
     if (tmp < SHA1_NUM_INT32_MIN) {
       tmp = tmp + max + 1;
     }
   }
   return tmp;
 }
 
 let startTime = currentTimestamp13();
 let benchmark = new Benchmark();
 for (let i = 0; i < SHA1_NUM_120; i++) {
   let startTimeInLoop = currentTimestamp13();
   benchmark.runIteration();
   let endTimeInLoop = currentTimestamp13();
   //log(`crypto-sha1: ms = ${endTimeInLoop - startTimeInLoop} i = ${i}`)
 }
 let endTime = currentTimestamp13();
 print(`crypto-sha1: ms = ${endTime - startTime}`);
 