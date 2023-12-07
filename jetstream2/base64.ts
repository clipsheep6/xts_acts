/** ***** BEGIN LICENSE BLOCK *****
 **Version: MPL 1.1/GPL 2.0/LGPL 2.1
 *
 **The contents of this file are subject to the Mozilla Public License Version
 **1.1 (the "License"); you may not use this file except in compliance with
 ** the License. You may obtain a copy of the License at
 ** http://www.mozilla.org/MPL/
 *
 ** Software distributed under the License is distributed on an "AS IS" basis,
 ** WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 ** for the specific language governing rights and limitations under the
 ** License.
 *
 ** The Original Code is Mozilla XML-RPC Client component.
 *
 ** The Initial Developer of the Original Code is
 ** Digital Creations 2, Inc.
 ** Portions created by the Initial Developer are Copyright (C) 2000
 ** the Initial Developer. All Rights Reserved.
 *
 ** Contributor(s):
 **   Martijn Pieters <mj@digicool.com> (original author)
 **   Samuel Sieb <samuel@sieb.net>
 *
 ** Alternatively, the contents of this file may be used under the terms of
 ** either the GNU General Public License Version 2 or later (the "GPL"), or
 ** the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
 ** in which case the provisions of the GPL or the LGPL are applicable instead
 ** of those above. If you wish to allow use of your version of this file only
 ** under the terms of either the GPL or the LGPL, and not to allow others to
 ** use your version of this file under the terms of the MPL, indicate your
 ** decision by deleting the provisions above and replace them with the notice
 ** and other provisions required by the GPL or the LGPL. If you do not delete
 ** the provisions above, a recipient may use your version of this file under
 ** the terms of any one of the MPL, the GPL or the LGPL.
 *
 ** ***** END LICENSE BLOCK ***** */

// From: http://lxr.mozilla.org/mozilla/source/extensions/xml-rpc/src/nsXmlRpcClient.js#956

const TIME_MULTIPLIER = 1000;
const TOBASE64_NUMBER_2 = 2;
const TOBASE64_NUMBER_3 = 3;
const TOBASE64_NUMBER_4 = 4;
const TOBASE64_NUMBER_6 = 6;
const TOBASE64_NUMBER_8 = 8;
const TOBASE64_NUMBER_25 = 25;
const TOBASE64_NUMBER_97 = 97;
const TOBASE64_NUMBER_120 = 120;
const TOBASE64_NUMBER_8192 = 8192;
const TOBASE64_NUMBER_16384 = 16384;

const TOBASE64_NUMBER_0X03 = 0x03;
const TOBASE64_NUMBER_0X0F = 0x0f;
const TOBASE64_NUMBER_0X3F = 0x3f;
const TOBASE64_NUMBER_0X7F = 0x7f;
const TOBASE64_NUMBER_0XFF = 0xff;

let inDebug = false;
function log(str: string): void {
  if (inDebug) {
    print(str);
  }
}
function currentTimestamp13(): number {
  return ArkTools.timeInUs() / TIME_MULTIPLIER;
}

/* Convert data (an array of integers) to a Base64 string. */
let toBase64Table = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/';
let base64Pad = '=';

function toBase64(data: string): string {
  let resultStr = '';
  let length = data.length;
  let i = 0;

  // Convert every three bytes to 4 ascii characters.
  while (i < length - TOBASE64_NUMBER_2) {
    resultStr += toBase64Table[data.charCodeAt(i) >> TOBASE64_NUMBER_2];
    resultStr +=
      toBase64Table[
        ((data.charCodeAt(i) & TOBASE64_NUMBER_0X03) << TOBASE64_NUMBER_4) +
          (data.charCodeAt(i + 1) >> TOBASE64_NUMBER_4)
      ];
    resultStr +=
      toBase64Table[
        ((data.charCodeAt(i + 1) & TOBASE64_NUMBER_0X0F) << TOBASE64_NUMBER_2) +
          (data.charCodeAt(i + TOBASE64_NUMBER_2) >> TOBASE64_NUMBER_6)
      ];
    resultStr += toBase64Table[data.charCodeAt(i + TOBASE64_NUMBER_2) & TOBASE64_NUMBER_0X3F];
    i += TOBASE64_NUMBER_3;
  }

  // Convert the remaining 1 or 2 bytes, pad out to 4 characters.
  if (length % TOBASE64_NUMBER_3) {
    i = length - (length % TOBASE64_NUMBER_3);
    resultStr += toBase64Table[data.charCodeAt(i) >> TOBASE64_NUMBER_2];
    if (length % TOBASE64_NUMBER_3 === TOBASE64_NUMBER_2) {
      resultStr +=
        toBase64Table[
          ((data.charCodeAt(i) & TOBASE64_NUMBER_0X03) << TOBASE64_NUMBER_4) +
            (data.charCodeAt(i + 1) >> TOBASE64_NUMBER_4)
        ];
      resultStr += toBase64Table[(data.charCodeAt(i + 1) & TOBASE64_NUMBER_0X0F) << TOBASE64_NUMBER_2];
      resultStr += base64Pad;
    } else {
      resultStr += toBase64Table[(data.charCodeAt(i) & TOBASE64_NUMBER_0X03) << TOBASE64_NUMBER_4];
      resultStr += base64Pad + base64Pad;
    }
  }

  return resultStr;
}

/* Convert Base64 data to a string */
let toBinaryTable: number[] = [
  -1,-1,-1,-1, -1,-1,-1,-1, -1,-1,-1,-1, -1,-1,-1,-1, //binary1
  -1,-1,-1,-1, -1,-1,-1,-1, -1,-1,-1,-1, -1,-1,-1,-1,
  -1,-1,-1,-1, -1,-1,-1,-1, -1,-1,-1,62, -1,-1,-1,63, //binary2
  52,53,54,55, 56,57,58,59, 60,61,-1,-1, -1, 0,-1,-1,
  -1, 0, 1, 2,  3, 4, 5, 6,  7, 8, 9,10, 11,12,13,14, //binary3
  15,16,17,18, 19,20,21,22, 23,24,25,-1, -1,-1,-1,-1,
  -1,26,27,28, 29,30,31,32, 33,34,35,36, 37,38,39,40, //binary4
  41,42,43,44, 45,46,47,48, 49,50,51,-1, -1,-1,-1,-1
]

function base64ToString(data: string): string {
  let result = '';
  let leftbits = 0; // number of bits decoded, but yet to be appended
  let leftdata = 0; // bits decoded, but yet to be appended

  // Convert one by one.
  for (let i = 0; i < data.length; i++) {
    let c = toBinaryTable[data.charCodeAt(i) & TOBASE64_NUMBER_0X7F];
    let padding = data.charCodeAt(i) === base64Pad.charCodeAt(0);
    // Skip illegal characters and whitespace;
    if (c === -1) {
      continue;
    }

    // Collect data into leftdata, update bitcount;
    leftdata = (leftdata << TOBASE64_NUMBER_6) | c;
    leftbits += TOBASE64_NUMBER_6;

    // If we have 8 or more bits, append 8 bits to the result;
    if (leftbits >= TOBASE64_NUMBER_8) {
      leftbits -= TOBASE64_NUMBER_8;
      // Append if not padding;
      if (!padding) {
        result += String.fromCharCode((leftdata >> leftbits) & TOBASE64_NUMBER_0XFF);
      }
      leftdata &= (1 << leftbits) - 1;
    }
  }

  // If there are any bits left, the base64 string was corrupted;
  if (leftbits > 0) {
    //log("Corrupted base64 string")
  }
  return result;
}

function run():void {
  let str = '';

  for (let i = 0; i < TOBASE64_NUMBER_8192; i++) {
    str += String.fromCharCode(TOBASE64_NUMBER_25 * Math.random() + TOBASE64_NUMBER_97);
  }

  let i = TOBASE64_NUMBER_8192;
  while (i <= TOBASE64_NUMBER_16384) {
    let base64: string;
    base64 = toBase64(str);
    //log(`string-base64: toBase64 ${i} = ${base64}`)
    let encoded = base64ToString(base64);
    //log(`string-base64: toBase64 ${i} = ${encoded}`)
    if (encoded !== str) {
      throw new Error(`bad result: expected ${str} but got ${encoded}`);
    }
    // Double the string
    str += str;
    i *= TOBASE64_NUMBER_2;
  }
}
/*
 * @State
 */
class Benchmark {
  /*
   * @Benchmark
   */
  runIteration():void {
    for (let i = 0; i < TOBASE64_NUMBER_8; i++) {
      let startTimeInLoop = currentTimestamp13();
      run();
      let endTimeInLoop = currentTimestamp13();
      //log(`base64: index= ${i} time= ${endTimeInLoop - startTimeInLoop}`)
    }
  }
}

let startTime = currentTimestamp13();
let benchmark = new Benchmark();
for (let i = 0; i < TOBASE64_NUMBER_120; i++) {
  benchmark.runIteration();
}
let endTime = currentTimestamp13();
print(`base64: ms = ${endTime - startTime}`);

declare interface ArkTools {
  timeInUs(args: number): number;
}
