

// Calculate Gaussian blur of an image using IIR filter
// The method is taken from Intel's white paper and code example attached to it:
// https://software.intel.com/en-us/articles/iir-gaussian-blur-filter
// -implementation-using-intel-advanced-vector-extensions

const BLUR_NUM_0_5 = 0.5;
const BLUR_NUM_1000 = 1000;
const BLUR_NUM_120 = 120;
const BLUR_NUM_0_726 = 0.726;
const BLUR_NUM_NEGATIVE_2 = -2;
const BLUR_NUM_2 = 2;
const BLUR_NUM_8 = 8;
const BLUR_NUM_16 = 16;
const BLUR_NUM_24 = 24;
const BLUR_NUM_6 = 6;
const BLUR_NUM_4 = 4;
const BLUR_NUM_5 = 5;
const BLUR_NUM_3 = 3;
const BLUR_NUM_7 = 7;
const BLUR_NUM_12 = 12;
const BLUR_NUM_19 = 19;
const BLUR_NUM_9 = 9;
const HEX_FF = 0xff;
const HEX_7ED55D16 = 0x7ed55d16;
const HEX_C761C23C = 0xc761c23c;
const HEX_FFFFFFFF = 0xffffffff;
const HEX_FFFFFFF = 0xfffffff;
const HEX_165667B1 = 0x165667b1;
const HEX_D3A2646C = 0xd3a2646c;
const HEX_FD7046C5 = 0xfd7046c5;
const HEX_B55A4F09 = 0xb55a4f09;
const HEX_10000000 = 0x10000000;
const BLUR_ONE_HUNDRED_TWENTY = 120;

class GaussianBlur {
  // Configuration.
  a0: number = 0;
  a1: number = 0;
  a2: number = 0;
  a3: number = 0;
  b1: number = 0;
  b2: number = 0;
  left_corner: number = 0;
  right_corner: number = 0;

  static gaussCoef(sigma: number): Float32Array {
    //debugLog("gaussCoef=====sigma", sigma)
    if (sigma < BLUR_NUM_0_5) {
      sigma = BLUR_NUM_0_5;
    }

    const a = Math.exp(BLUR_NUM_0_726 * BLUR_NUM_0_726) / sigma;
    const g1 = Math.exp(-a);
    const g2 = Math.exp(BLUR_NUM_NEGATIVE_2 * a);
    const k = ((1 - g1) * (1 - g1)) / (1 + BLUR_NUM_2 * a * g1 - g2);
    let a0 = k;
    let a1 = k * (a - 1) * g1;
    let a2 = k * (a + 1) * g1;
    let a3 = -k * g2;
    let b1 = BLUR_NUM_2 * g1;
    let b2 = -g2;
    let left_corner = (a0 + a1) / (1 - b1 - b2);
    let right_corner = (a2 + a3) / (1 - b1 - b2);
    //debugLog("gaussCoef=====([a0, a1, a2, a3, b1, b2, left_corner, right_corner])",  ([a0, a1, a2, a3, b1, b2, left_corner, right_corner]))
    return new Float32Array([a0, a1, a2, a3, b1, b2, left_corner, right_corner]);
  }

  static convolveRGBA(src: Uint32Array, out: Uint32Array, line: Float32Array, coeff: number[] | Float32Array, width: number, height: number): void {
    // takes src image and writes the blurred and transposed result into out
    //debugLog("convolveRGBA=====src length", src.length)
    //debugLog("convolveRGBA=====out length", out.length)
    //debugLog("convolveRGBA=====line length",line.length)
    //debugLog("convolveRGBA=====coeff", coeff.length)
    //debugLog("convolveRGBA=====width", width)
    //debugLog("convolveRGBA=====height", height)
    let rgb: number;
    let pre_src_r: number;
    let pre_src_g: number;
    let pre_src_b: number;
    let pre_src_a: number;
    let curr_src_r: number;
    let curr_src_g: number;
    let curr_src_b: number;
    let curr_src_a: number;
    let curr_out_r: number;
    let curr_out_g: number;
    let curr_out_b: number;
    let curr_out_a: number;
    let pre_out_r: number;
    let pre_out_g: number;
    let pre_out_b: number;
    let pre_out_a: number;
    let pre_pre_out_r: number;
    let pre_pre_out_g: number;
    let pre_pre_out_b: number;
    let pre_pre_out_a: number;
    let src_index: number;
    let out_index: number;
    let line_index: number;
    let coeff_a0: number;
    let coeff_a1: number;
    let coeff_b1: number;
    let coeff_b2: number;
    let i: number;
    let j: number;
    for (i = 0; i < height; i++) {
      src_index = i * width;
      out_index = i;
      line_index = 0;

      // left to right;
      rgb = src[src_index];

      pre_src_r = rgb & HEX_FF;
      pre_src_g = (rgb >> BLUR_NUM_8) & HEX_FF;
      pre_src_b = (rgb >> BLUR_NUM_16) & HEX_FF;
      pre_src_a = (rgb >> BLUR_NUM_24) & HEX_FF;

      pre_pre_out_r = pre_src_r * coeff[BLUR_NUM_6];
      pre_pre_out_g = pre_src_g * coeff[BLUR_NUM_6];
      pre_pre_out_b = pre_src_b * coeff[BLUR_NUM_6];
      pre_pre_out_a = pre_src_a * coeff[BLUR_NUM_6];

      pre_out_r = pre_pre_out_r;
      pre_out_g = pre_pre_out_g;
      pre_out_b = pre_pre_out_b;
      pre_out_a = pre_pre_out_a;

      coeff_a0 = coeff[0];
      coeff_a1 = coeff[1];
      coeff_b1 = coeff[BLUR_NUM_4];
      coeff_b2 = coeff[BLUR_NUM_5];

      for (j = 0; j < width; j++) {
        rgb = src[src_index];
        curr_src_r = rgb & HEX_FF;
        curr_src_g = (rgb >> BLUR_NUM_8) & HEX_FF;
        curr_src_b = (rgb >> BLUR_NUM_16) & HEX_FF;
        curr_src_a = (rgb >> BLUR_NUM_24) & HEX_FF;

        curr_out_r = curr_src_r * coeff_a0 + pre_src_r * coeff_a1 + pre_out_r * coeff_b1 + pre_pre_out_r * coeff_b2;
        curr_out_g = curr_src_g * coeff_a0 + pre_src_g * coeff_a1 + pre_out_g * coeff_b1 + pre_pre_out_g * coeff_b2;
        curr_out_b = curr_src_b * coeff_a0 + pre_src_b * coeff_a1 + pre_out_b * coeff_b1 + pre_pre_out_b * coeff_b2;
        curr_out_a = curr_src_a * coeff_a0 + pre_src_a * coeff_a1 + pre_out_a * coeff_b1 + pre_pre_out_a * coeff_b2;

        pre_pre_out_r = pre_out_r;
        pre_pre_out_g = pre_out_g;
        pre_pre_out_b = pre_out_b;
        pre_pre_out_a = pre_out_a;

        pre_out_r = curr_out_r;
        pre_out_g = curr_out_g;
        pre_out_b = curr_out_b;
        pre_out_a = curr_out_a;

        pre_src_r = curr_src_r;
        pre_src_g = curr_src_g;
        pre_src_b = curr_src_b;
        pre_src_a = curr_src_a;

        line[line_index] = pre_out_r;
        line[line_index + 1] = pre_out_g;
        line[line_index + BLUR_NUM_2] = pre_out_b;
        line[line_index + BLUR_NUM_3] = pre_out_a;
        line_index += BLUR_NUM_4;
        src_index++;
      }
      src_index--;
      line_index -= BLUR_NUM_4;
      out_index += height * (width - 1);

      // right to left
      rgb = src[src_index];

      pre_src_r = rgb & HEX_FF;
      pre_src_g = (rgb >> BLUR_NUM_8) & HEX_FF;
      pre_src_b = (rgb >> BLUR_NUM_16) & HEX_FF;
      pre_src_a = (rgb >> BLUR_NUM_24) & HEX_FF;

      pre_pre_out_r = pre_src_r * coeff[BLUR_NUM_7];
      pre_pre_out_g = pre_src_g * coeff[BLUR_NUM_7];
      pre_pre_out_b = pre_src_b * coeff[BLUR_NUM_7];
      pre_pre_out_a = pre_src_a * coeff[BLUR_NUM_7];

      pre_out_r = pre_pre_out_r;
      pre_out_g = pre_pre_out_g;
      pre_out_b = pre_pre_out_b;
      pre_out_a = pre_pre_out_a;

      curr_src_r = pre_src_r;
      curr_src_g = pre_src_g;
      curr_src_b = pre_src_b;
      curr_src_a = pre_src_a;

      coeff_a0 = coeff[BLUR_NUM_2];
      coeff_a1 = coeff[BLUR_NUM_3];

      for (j = width - 1; j >= 0; j--) {
        curr_out_r = curr_src_r * coeff_a0 + pre_src_r * coeff_a1 + pre_out_r * coeff_b1 + pre_pre_out_r * coeff_b2;
        curr_out_g = curr_src_g * coeff_a0 + pre_src_g * coeff_a1 + pre_out_g * coeff_b1 + pre_pre_out_g * coeff_b2;
        curr_out_b = curr_src_b * coeff_a0 + pre_src_b * coeff_a1 + pre_out_b * coeff_b1 + pre_pre_out_b * coeff_b2;
        curr_out_a = curr_src_a * coeff_a0 + pre_src_a * coeff_a1 + pre_out_a * coeff_b1 + pre_pre_out_a * coeff_b2;

        pre_pre_out_r = pre_out_r;
        pre_pre_out_g = pre_out_g;
        pre_pre_out_b = pre_out_b;
        pre_pre_out_a = pre_out_a;

        pre_out_r = curr_out_r;
        pre_out_g = curr_out_g;
        pre_out_b = curr_out_b;
        pre_out_a = curr_out_a;

        pre_src_r = curr_src_r;
        pre_src_g = curr_src_g;
        pre_src_b = curr_src_b;
        pre_src_a = curr_src_a;

        rgb = src[src_index];
        curr_src_r = rgb & HEX_FF;
        curr_src_g = (rgb >> BLUR_NUM_8) & HEX_FF;
        curr_src_b = (rgb >> BLUR_NUM_16) & HEX_FF;
        curr_src_a = (rgb >> BLUR_NUM_24) & HEX_FF;

        rgb =
          ((line[line_index] + pre_out_r) << 0) +
          ((line[line_index + 1] + pre_out_g) << BLUR_NUM_8) +
          ((line[line_index + BLUR_NUM_2] + pre_out_b) << BLUR_NUM_16) +
          ((line[line_index + BLUR_NUM_3] + pre_out_a) << BLUR_NUM_24);

        out[out_index] = rgb;

        src_index--;
        line_index -= BLUR_NUM_4;
        out_index -= height;
      }
    }
    //debugLog("out length", out.length)
  }

  static blurRGBA(src: Uint32Array, width: number, height: number, radius: number): void {
    //debugLog("convolveRGBA=====src length",src.length)
    //debugLog("convolveRGBA=====width", width)
    //debugLog("convolveRGBA=====height",height)
    //debugLog("convolveRGBA=====radius",radius)
    // Quick exit on zero radius
    if (!radius) {
      return;
    }

    // Unify input data type, to keep convolver calls isomorphic
    const src32 = new Uint32Array(src.buffer);
    const out = new Uint32Array(src32.length);
    const tmp_line = new Float32Array(Math.max(width, height) * BLUR_NUM_4);
    const coeff = GaussianBlur.gaussCoef(radius);

    GaussianBlur.convolveRGBA(src32, out, tmp_line, coeff, width, height);
    GaussianBlur.convolveRGBA(out, src32, tmp_line, coeff, height, width);
  }
}

class Benchmark {
  width: number;
  height: number;
  radius: number;
  buffer: Uint32Array;
  /*
   * @Setup
   */
  constructor() {
    this.width = 800;
    this.height = 450;
    this.radius = 15;
    const rand = (() => {
      let seedNum: number = 49734321;
      return () => {
        seedNum = (seedNum + HEX_7ED55D16 + (seedNum << BLUR_NUM_12)) & HEX_FFFFFFFF;
        seedNum = (seedNum ^ HEX_C761C23C ^ (seedNum >>> BLUR_NUM_19)) & HEX_FFFFFFFF;
        seedNum = (seedNum + HEX_165667B1 + (seedNum << BLUR_NUM_5)) & HEX_FFFFFFFF;
        seedNum = ((seedNum + HEX_D3A2646C) ^ (seedNum << BLUR_NUM_9)) & HEX_FFFFFFFF;
        seedNum = (seedNum + HEX_FD7046C5 + (seedNum << BLUR_NUM_3)) & HEX_FFFFFFFF;
        seedNum = (seedNum ^ HEX_B55A4F09 ^ (seedNum >>> BLUR_NUM_16)) & HEX_FFFFFFFF;
        return (seedNum & HEX_FFFFFFF) / HEX_10000000;
      };
    })();

    const bufferArry = new Uint32Array(this.width * this.height);
    for (let i = 0; i < bufferArry.length; ++i) {
      bufferArry[i] = rand();
    }
    this.buffer = bufferArry;
  }
  /*
   * @Benchmark
   */
  runIteration(): void {
    let startTime = ArkTools.timeInUs() / BLUR_NUM_1000;
    for (let i = 0; i < BLUR_ONE_HUNDRED_TWENTY; i++) {
      GaussianBlur.blurRGBA(this.buffer, this.width, this.height, this.radius);
    }
    let endTime = ArkTools.timeInUs() / BLUR_NUM_1000;
    print(`gaussian-blur: ms = ${endTime - startTime}`);
  }
}

declare interface ArkTools {
  timeInUs(args: number): number;
}

function debugLog(str: String, object: number | number[]) {
  let isLog = false;
  if (isLog) {
    print(`${str}: ${object}`);
  }
}

new Benchmark().runIteration();
