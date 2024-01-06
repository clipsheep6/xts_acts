/**
 * build huffman table from length list.
 * @param {!(Array.<number>|Uint8Array)} lengths length list.
 * @return {!Array} huffman table.
 */
import { replace32NumberCount } from './bitstream';
const Number_16 = 16;

export class Huffman {
  constructor() {}

  public static buildHuffmanTable(lengths: Uint8Array): [Uint32Array, number, number] {
    let listSize: number = lengths.length;
    let maxCodeLength: number = 0;
    let minCodeLength: number = Number.POSITIVE_INFINITY;
    let size: number;
    let table: Uint32Array;
    let bitLength: number = 1;
    let code: number = 0;
    let skip: number = 2;
    let reversed: number;
    let rtemp: number;
    let j: number;
    let value: number;

    for (let i = 0; i < listSize; ++i) {
      if (lengths[i] > maxCodeLength) {
        maxCodeLength = lengths[i];
      }
      if (lengths[i] < minCodeLength) {
        minCodeLength = lengths[i];
      }
    }

    size = 1 << maxCodeLength;
    table = replace32NumberCount(size);
    while (bitLength <= maxCodeLength) {
      let i = 0;
      while (i < listSize) {
        if (lengths[i] === bitLength) {
          reversed = 0;
          rtemp = code;
          j = 0;

          while (j < bitLength) {
            reversed = (reversed << 1) | (rtemp & 1);
            rtemp >>= 1;
            j += 1;
          }

          value = (bitLength << Number_16) | i;
          j = reversed;

          while (j < size) {
            table[j] = value;
            j += skip;
          }

          code += 1;
        }
        i += 1;
      }

      bitLength += 1;
      code <<= 1;
      skip <<= 1;
    }

    return [table, maxCodeLength, minCodeLength];
  }
}
