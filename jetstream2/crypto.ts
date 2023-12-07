
// Bits per digit
let dbits: number;
let BI_DB: number;
let BI_DM: number;
let BI_DV: number;

let BI_FP: number;
let BI_FV: number;
let BI_F1: number;
let BI_F2: number;

let DV: number = 0;

// JavaScript engine analysis
let canary: number = 0xdeadbeefcafe;
let j_lm: boolean = ((canary&0xffffff)==0xefcafe);

let lowprimes = [2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509];
let lplim = (1<<26)/lowprimes[lowprimes.length-1];

// am: Compute w_j += (x*this_i), propagate carries,
// c is initial carry, returns final carry.
// c < 3*dvalue, x < 2*dvalue, this_i < dvalue
// We need to select the fastest one that works in this environment.

// am1: use a single mult and divide to get the high bits,
// max digit bits should be 26 because
// max internal value = 2*dvalue^2-2*dvalue (< 2^53)
let am1 = (array: [number],i: number, x: number, w: BigInteger, j: number, c: number, n: number):  number => {
  let temp_i = i, temp_j = j, temp_c = c, temp_n = n - 1;
  while(temp_n >= 0) {
    let v = x*array[temp_i]+w.array[temp_j]+temp_c;
    temp_c = Math.floor(v/0x4000000);
    w.array[j] = v&0x3ffffff;
    temp_i += 1;
    temp_j += 1;
    temp_n -= 1;
  }
  return temp_c;
}

// am2 avoids a big mult-and-extract completely.
// Max digit bits should be <= 30 because we do bitwise ops
// on values up to 2*hdvalue^2-hdvalue-1 (< 2^31)
let am2 = (array: number[],i: number, x: number, w: BigInteger, j: number, c: number, n: number): number =>  {
  let xl = x&0x7fff, xh = x>>15;
  let temp_i = i, temp_j = j, temp_c = c, temp_n = n - 1;
  while(temp_n >= 0) {
    let l = array[temp_i]&0x7fff;
    let h = array[temp_i]>>15;
    let m = xh*l+h*xl;
    l = xl*l+((m&0x7fff)<<15)+w.array[temp_j]+(temp_c&0x3fffffff);
    temp_c = (l>>>30)+(m>>>15)+xh*h+(temp_c>>>30);
    w.array[temp_j] = l&0x3fffffff;
    temp_i += 1;
    temp_j += 1;
    temp_n -= 1;
  }
  return temp_c;
}

// Alternately, set max digit bits to 28 since some
// browsers slow down when dealing with 32-bit numbers.
let am3 = (array: number[],i: number, x: number, w: BigInteger, j: number, c: number, n: number): number => {
  let xl = x&0x3fff;
  let xh = x>>14;
  let temp_i = i, temp_j = j, temp_c = c, temp_n = n - 1;
  while(temp_n >= 0) {
    let l = array[temp_i]&0x3fff;
    let h = array[temp_i]>>14;
    let m = xh*l+h*xl;
    l = xl*l+((m&0x3fff)<<14)+w.array[temp_j]+temp_c;
    temp_c = (l>>28)+(m>>14)+xh*h;
    w.array[temp_j] = l&0xfffffff;
    temp_i += 1;
    temp_j += 1;
    temp_n -= 1;
  }
  return temp_c;
}

// This is tailored to VMs with 2-bit tagging. It makes sure
// that all the computations stay within the 29 bits available.
let am4 = (array: number[],i: number, x: number, w: BigInteger, j: number, c: number, n: number): number =>  {
  let xl = x&0x1fff;
  let xh = x>>13;
  let temp_i = i, temp_j = j, temp_c = c, temp_n = n - 1;
  while(temp_n >= 0) {
    let l = array[temp_i]&0x1fff;
    let h = array[temp_i]>>13;
    let m = xh*l+h*xl;
    l = xl*l+((m&0x1fff)<<13)+w.array[temp_j]+temp_c;
    temp_c = (l>>26)+(m>>13)+xh*h;
    w.array[temp_j] = l&0x3ffffff;
    temp_i += 1;
    temp_j += 1;
    temp_n -= 1;
  }
  return temp_c;
}

let AM: (array: number[],i: number, x: number, w: BigInteger, j: number, c: number, n: number) => number

// am3/28 is best for SM, Rhino, but am4/26 is best for v8.
// Kestrel (Opera 9.5) gets its best result with am4/26.
// IE7 does 9% better with am3/28 than with am4/26.
// Firefox (SM) gets 10% faster with am3/28 than with am4/26.
function setupEngine(fn: (array: number[],i: number, x: number, w: BigInteger, j: number, c: number, n: number) => number, bits: number)  {
  AM = fn;
  dbits = bits;
  BI_DB = dbits;
  BI_DM = ((1<<dbits)-1);
  BI_DV = (1<<dbits);

  BI_FP = 52;
  BI_FV = Math.pow(2,BI_FP);
  BI_F1 = BI_FP-dbits;
  BI_F2 = 2*dbits-BI_FP;
}

// Digit conversions
let BI_RM = "0123456789abcdefghijklmnopqrstuvwxyz";
let BI_RC: number[] = [];

function initBI_RC() {
  let rr: number;
  rr = "0".charCodeAt(0);
  for(let vv = 0; vv <= 9; ++vv) {
    BI_RC[rr] = vv;
    rr += 1;
  }
  rr = "a".charCodeAt(0);
  for(let vv = 10; vv < 36; ++vv) {
    BI_RC[rr] = vv;
    rr += 1;
  }
  rr = "A".charCodeAt(0);
  for(let vv = 10; vv < 36; ++vv) {
    BI_RC[rr] = vv;
    rr += 1;
  }
}



class BigInteger {
  static ONE: BigInteger = BigInteger.nbv(1);
  static ZERO: BigInteger = BigInteger.nbv(0);
  array: number[] = [];
  t: number = 0;
  s: number = 0;

  // (public) Constructor
  constructor(a?: number|string|number[], b?: SecureRandom|number, c?: SecureRandom|number) {
    if(a != null) {
      if ("number" == typeof a) {
        this.fromNumber(a, b, c);
      } else if (b == null && "string" != typeof a) {
        this.fromString(a as string | number[], 256);
      } else {
        this.fromString(a as string | number[], b as number);
      }
    }
  }

// return new, unset BigInteger
static nbi(): BigInteger {
  return new BigInteger();
}

// return bigint initialized to value
static nbv(i: number): BigInteger {
  let r = BigInteger.nbi();
  r.fromInt(i);
  return r;
}

  int2char(n: number): string {
    return BI_RM.charAt(n);
  }

  intAt(s: string, i: number): number {
    let c = BI_RC[s.charCodeAt(i)];
    return (c==null)?-1:c;
  }

  // (protected) copy this to r
  copyTo(r: BigInteger) {
    let i = this.t-1;
    while (i >= 0) {
      r.array[i] = this.array[i];
      i -= 1;
    }
    r.t = this.t;
    r.s = this.s;
  }

  // (protected) set from integer value x, -DV <= x < DV
  fromInt(x: number) {
    this.t = 1;
    this.s = (x<0)?-1:0;
    if(x > 0) {
      this.array[0] = x;
    } else if(x < -1) {
      this.array[0] = x+DV;
    } else {
      this.t = 0;
    }
  }

  // (protected) set from string and radix
  fromString(s: string|number[],b: number) {
    let k: number;
    if(b == 16) {
      k = 4;
    } else if(b == 8) {
      k = 3;
    } else if(b == 256) {
      k = 8; // byte array
    } else if(b == 2) {
      k = 1;
    } else if(b == 32) {
      k = 5;
    } else if(b == 4) {
      k = 2;
    } else {
      this.fromRadix(s as string,b);
      return;
    }
    this.t = 0;
    this.s = 0;
    let i: number,
      mi: Boolean = false,
      sh: number = 0;
    if (k == 8) {
      let temp_s = s as number[]
      i = temp_s.length;
    }else{
      i = (s as String).length;
    }
    i -= 1
    while(i>= 0) {
      let x: number;
      if (k == 8) {
        x = (s as number[])[i]&0xff;
      }else{
        x = this.intAt(s as string,i);
      }
      if(x < 0) {
        if((s as string)?.charAt(i) == "-") {
          mi = true;
        }
        continue;
      }
      mi = false;
      if(sh == 0) {
        this.array[this.t] = x;
        this.t += 1;
      }else if(sh+k > BI_DB) {
        this.array[this.t-1] |= (x&((1<<(BI_DB-sh))-1))<<sh;
        this.array[this.t] = (x>>(BI_DB-sh));
        this.t += 1;
      } else{
        this.array[this.t-1] |= x<<sh;
      }
      sh += k;
      if(sh >= BI_DB) {
        sh -= BI_DB;
      }
      i -= 1;
    }
    if(k == 8 && ((s as number[])[0]&0x80) != 0) {
      this.s = -1;
      if(sh > 0) {
        this.array[this.t-1] |= ((1<<(BI_DB-sh))-1)<<sh;
      }
    }
    this.clamp();
    if(mi) {
      BigInteger.ZERO.subTo(this,this);
    }
  }

  // (protected) clamp off excess high words
  clamp() {
    let c = this.s&BI_DM;
    while(this.t > 0 && this.array[this.t-1] == c) {
      this.t -= 1;
    }
  }

  // (public) return string representation in given radix
  toString(b: number): string {
    if(this.s < 0){
      return "-"+this.negate().toString(b);
    }
    let k: number;
    if(b == 16){
      k = 4;
    } else if(b == 8) {
      k = 3;
    } else if(b == 2) {
      k = 1;
    } else if(b == 32) {
      k = 5;
    } else if(b == 4) {
      k = 2;
    } else {
      return this.toRadix(b);
    }
    let km = (1<<k)-1;
    let d: number|null;
    let m = false;
    let r = "";
    let i = this.t;
    let p = BI_DB-(i*BI_DB)%k;
    if(i > 0) {
      i -= 1;
      d = this.array[i]>>p;
      if(p < BI_DB && d > 0) {
        m = true;
        r = this.int2char(d);
      }
      while(i >= 0) {
        if(p < k) {
          d = (this.array[i]&((1<<p)-1))<<(k-p);
          i -= 1;
          p += BI_DB-k;
          d |= this.array[i]>>p;
        } else {
          p-=k
          d = (this.array[i]>>p)&km;
          if(p <= 0) {
            p += BI_DB;
            i -= 1;
          }
        }
        if(d > 0) {
          m = true;
        }
        if(m) {
          r += this.int2char(d);
        }
      }
    }
    return m?r:"0";
  }

  // (public) -this
  negate(): BigInteger {
    let r = BigInteger.nbi();
    BigInteger.ZERO.subTo(this,r);
    return r;
  }

  // (public) |this|
  abs(): BigInteger {
    return (this.s<0)?this.negate():this;
  }

  // (public) return + if this > a, - if this < a, 0 if equal
  compareTo(a: BigInteger): number {
    let r = this.s-a.s;
    if(r != 0) {
      return r;
    }
    let i = this.t;
    r = i-a.t;
    if(r != 0) {
      return r;
    }
    i -= 1;
    while(i >= 0) {
      r=this.array[i]-a.array[i]
      if(r != 0) {
        return r;
      }
      i -= 1;
    }
    return 0;
  }

  // returns bit length of the integer x
  nbits(x: number): number {
    let temp_x = x;
    let r = 1;
    let t: number = temp_x>>>16;
    if(t != 0) {
      temp_x = t;
      r += 16;
    }
    t=temp_x>>8;
    if(t != 0) {
      temp_x = t;
      r += 8;
    }
    t=temp_x>>4;
    if(t != 0) {
      temp_x = t;
      r += 4;
    }
    t=temp_x>>2;
    if(t != 0) {
      temp_x = t;
      r += 2;
    }
    t=temp_x>>1;
    if(t != 0) {
      temp_x = t;
      r += 1;
    }
    return r;
  }

  // (public) return the number of bits in "this"
  bitLength(): number {
    if(this.t <= 0) {
      return 0;
    }
    return BI_DB*(this.t-1)+this.nbits(this.array[this.t-1]^(this.s&BI_DM));
  }

  // (protected) r = this << n*DB
  dlShiftTo(n: number,r: BigInteger) {
    let i = this.t-1;
    while (i >= 0) {
      r.array[i+n] = this.array[i];
      i -= 1;
    }
    i = n-1;
    while (i >= 0) {
      r.array[i] = 0;
      i -= 1;
    }
    r.t = this.t+n;
    r.s = this.s;
  }

  // (protected) r = this >> n*DB
  drShiftTo(n: number,r: BigInteger) {
    let i = n;
    while ( i < this.t) {
      r.array[i-n] = this.array[i];
      i += 1;
    }
    r.t = Math.max(this.t-n,0);
    r.s = this.s;
  }

  // (protected) r = this << n
  lShiftTo(n: number,r: BigInteger) {
    let bs = n%BI_DB;
    let cbs = BI_DB-bs;
    let bm = (1<<cbs)-1;
    let ds = Math.floor(n/BI_DB);
    let c = (this.s<<bs)&BI_DM;
    let i = this.t-1;
    while (i >= 0){
      r.array[i+ds+1] = (this.array[i]>>cbs)|c;
      c = (this.array[i]&bm)<<bs;
      i -= 1;
    }
    i = ds-1;
    while (i >= 0) {
      r.array[i] = 0;
      i -= 1;
    }
    r.array[ds] = c;
    r.t = this.t+ds+1;
    r.s = this.s;
    r.clamp();
  }

  // (protected) r = this >> n
  rShiftTo(n: number,r: BigInteger) {
    r.s = this.s;
    let ds = Math.floor(n/BI_DB);
    if(ds >= this.t) {
      r.t = 0;
      return;
    }
    let bs = n%BI_DB;
    let cbs = BI_DB-bs;
    let bm = (1<<bs)-1;
    r.array[0] = this.array[ds]>>bs;
    for(let i = ds+1; i < this.t; ++i) {
      r.array[i-ds-1] |= (this.array[i]&bm)<<cbs;
      r.array[i-ds] = this.array[i]>>bs;
    }
    if(bs > 0) {
      r.array[this.t-ds-1] |= (this.s&bm)<<cbs;
    }
    r.t = this.t-ds;
    r.clamp();
  }

  // (protected) r = this - a
  subTo(a: BigInteger,r: BigInteger) {
    let i = 0,
      c = 0,
      m = Math.min(a.t,this.t);
    while(i < m) {
      c += this.array[i]-a.array[i];
      r.array[i] = c&BI_DM;
      c >>= BI_DB;
      i += 1;
    }
    if(a.t < this.t) {
      c -= a.s;
      while(i < this.t) {
        c += this.array[i];
        r.array[i] = c&BI_DM;
        c >>= BI_DB;
        i += 1;
      }
      c += this.s;
    } else {
      c += this.s;
      while(i < a.t) {
        c -= a.array[i];
        r.array[i] = c&BI_DM;
        c >>= BI_DB;
        i += 1;
      }
      c -= a.s;
    }
    r.s = (c<0)?-1:0;
    if(c < -1) {
      r.array[i] = BI_DV+c;
      i += 1;
    } else if(c > 0) {
      r.array[i] = c;
      i += 1;
    }
    r.t = i;
    r.clamp();
  }

  // (protected) r = this * a, r != this,a (HAC 14.12)
  // "this" should be the larger one if appropriate.
  multiplyTo(a: BigInteger,r: BigInteger) {
    let x = this.abs();
    let y = a.abs();
    let i = x.t;
    r.t = i+y.t;
    i -= 1;
    while(i >= 0) {
      r.array[i] = 0;
      i -= 1;
    }
    for(i = 0; i < y.t; ++i) {
      r.array[i+x.t] = x.am(0,y.array[i],r,i,0,x.t);
    }
    r.s = 0;
    r.clamp();
    if(this.s != a.s) {
      BigInteger.ZERO.subTo(r,r);
    }
  }

  // (protected) r = this^2, r != this (HAC 14.16)
  squareTo(r: BigInteger) {
    let x = this.abs();
    r.t = 2*x.t;
    let i = r.t - 1;
    while(i >= 0) {
      r.array[i] = 0;
      i -= 1;
    }
    i = 0;
    while (i< x.t - 1) {
      let c = x.am(i,x.array[i],r,2*i,0,1);
      r.array[i+x.t] += x.am(i+1,2*x.array[i],r,2*i+1,c,x.t-i-1)
      if(r.array[i+x.t] >= BI_DV) {
        r.array[i+x.t] -= BI_DV;
        r.array[i+x.t+1] = 1;
      }
      i += 1;
    }
    if(r.t > 0) {
      r.array[r.t-1] += x.am(i,x.array[i],r,2*i,0,1);
    }
    r.s = 0;
    r.clamp();
  }

  // (protected) divide this by m, quotient and remainder to q, r (HAC 14.20)
  // r != q, this != m.  q or r may be null.
  divRemTo(m: BigInteger,q: BigInteger|null, r: BigInteger|null) {
    let pm = m.abs();
    if(pm.t <= 0) {
      return;
    }
    let pt = this.abs();
    if(pt.t < pm.t) {
      if(q != null) {
        q.fromInt(0);
      }
      if(r != null) {
        this.copyTo(r);
      }
      return;
    }
    if(r == null) {
      r = BigInteger.nbi();
    }
    let y = BigInteger.nbi(),
      ts = this.s,
      ms = m.s;
    let nsh = BI_DB-this.nbits(pm.array[pm.t-1]);	// normalize modulus
    if(nsh > 0) {
      pm.lShiftTo(nsh,y);
      pt.lShiftTo(nsh,r);
    } else {
      pm.copyTo(y);
      pt.copyTo(r);
    }
    let ys = y.t;
    let y0 = y.array[ys-1];
    if(y0 == 0) {
      return;
    }
    let yt = y0*(1<<BI_F1)+((ys>1)?y.array[ys-2]>>BI_F2:0);
    let d1 = BI_FV/yt,
      d2 = (1<<BI_F1)/yt,
      e = 1<<BI_F2;
    let i = r.t,
      j = i-ys,
      t = (q==null)?BigInteger.nbi():q;
    y.dlShiftTo(j,t);
    if(r.compareTo(t) >= 0) {
      r.array[r.t] = 1;
      r.t += 1;
      r.subTo(t,r);
    }
    BigInteger.ONE.dlShiftTo(ys,t);
    t.subTo(y,y);	// "negative" y so we can replace sub with am later
    while(y.t < ys) {
      y.array[y.t] = 0;
      y.t += 1;
    }
    j -= 1
    while(j >= 0) {
      // Estimate quotient digit
      i -= 1
      let qd = (r.array[i]==y0)?BI_DM:Math.floor(r.array[i]*d1+(r.array[i-1]+e)*d2);
      r.array[i] += y.am(0,qd,r,j,0,ys);
      if(r.array[i] < qd) {	// Try it out
        y.dlShiftTo(j,t);
        r.subTo(t,r);
        qd -= 1;
        while(r.array[i] < qd) {
          r.subTo(t,r);
          qd -= 1;
        }
      }
      j -= 1;
    }
    if(q != null) {
      r.drShiftTo(ys,q);
      if(ts != ms) {
        BigInteger.ZERO.subTo(q,q);
      }
    }
    r.t = ys;
    r.clamp();
    if(nsh > 0) {
      r.rShiftTo(nsh,r);
    }	// Denormalize remainder
    if(ts < 0) {
      BigInteger.ZERO.subTo(r,r);
    }
  }

  // (public) this mod a
  mod(a: BigInteger): BigInteger {
    let r: BigInteger|null = BigInteger.nbi();
    this.abs().divRemTo(a,null,r);
    if(this.s < 0 && r.compareTo(BigInteger.ZERO) > 0) {
      a.subTo(r,r);
    }
    return r;
  }

  // (protected) return "-1/this % 2^DB"; useful for Mont. reduction
  // justification:
  //         xy == 1 (mod m)
  //         xy =  1+km
  //   xy(2-xy) = (1+km)(1-km)
  // x[y(2-xy)] = 1-k^2m^2
  // x[y(2-xy)] == 1 (mod m^2)
  // if y is 1/x mod m, then y(2-xy) is 1/x mod m^2
  // should reduce x and y(2-xy) by m^2 at each step to keep size bounded.
  // JS multiply "overflows" differently from C/C++, so care is needed here.
  invDigit(): number {
    if(this.t < 1) {
      return 0;
    }
    let x = this.array[0];
    if((x&1) == 0) {
      return 0;
    }
    let y = x&3;		// y == 1/x mod 2^2
    y = (y*(2-(x&0xf)*y))&0xf;	// y == 1/x mod 2^4
    y = (y*(2-(x&0xff)*y))&0xff;	// y == 1/x mod 2^8
    y = (y*(2-(((x&0xffff)*y)&0xffff)))&0xffff;	// y == 1/x mod 2^16
    // last step - calculate inverse mod DV directly;
    // assumes 16 < DB <= 32 and assumes ability to handle 48-bit ints
    y = (y*(2-x*y%BI_DV))%BI_DV;		// y == 1/x mod 2^dbits
    // we really want the negative inverse, and -DV < y < DV
    return (y>0)?BI_DV-y:-y;
  }

  // (protected) true iff this is even
  isEven(): boolean {
    return ((this.t>0)?(this.array[0]&1):this.s) == 0;
  }

  // (protected) this^e, e < 2^32, doing sqr and mul with "r" (HAC 14.79)
  exp(e: number,z: ConvertProtocol): BigInteger {
    if(e > 0xffffffff || e < 1) {
      return BigInteger.ONE;
    }
    let r: BigInteger|null = BigInteger.nbi(),
      r2: BigInteger|null = BigInteger.nbi(),
      g = z.convert(this),
      i = this.nbits(e)-1 - 1;
    g.copyTo(r);
    while(i >= 0) {
      z.sqrTo(r as BigInteger,r2);
      if((e&(1<<i)) > 0) {
        z.mulTo(r2 as BigInteger,g,r);
      } else {
        let t: BigInteger|null = r;
        r = r2;
        r2 = t;
      }
      i -= 1;
    }
    return z.revert(r as BigInteger);
  }

  // (public) this^e % m, 0 <= e < 2^32
  modPowInt(e: number,m: BigInteger): BigInteger {
    let z: ConvertProtocol;
    if(e < 256 || m.isEven()) {
      z = new Classic(m);
    } else {
      z = new Montgomery(m);
    }
    return this.exp(e,z);
  }

  // (public)
  clone(): BigInteger {
    let r = BigInteger.nbi();
    this.copyTo(r);
    return r;
  }

  // (public) return value as integer
  intValue(): number {
    if(this.s < 0) {
      if(this.t == 1) {
        return this.array[0]-BI_DV;
      } else if(this.t == 0) {
        return -1;
      }
    } else if(this.t == 1) {
      return this.array[0];
    } else if(this.t == 0) {
      return 0;
    }
    // assumes 16 < DB < 32
    return ((this.array[1]&((1<<(32-BI_DB))-1))<<BI_DB)|this.array[0];
  }

  // (public) return value as byte
  byteValue(): number {
    return (this.t==0)?this.s:(this.array[0]<<24)>>24;
  }

  // (public) return value as short (assumes DB>=16)
  shortValue(): number {
    return (this.t==0)?this.s:(this.array[0]<<16)>>16;
  }

  // (protected) return x s.t. r^x < DV
  chunkSize(r: number): number {
    return Math.floor(Math.LN2*BI_DB/Math.log(r));
  }

  // (public) 0 if this == 0, 1 if this > 0
  signum() {
    if(this.s < 0) {
      return -1;
    } else if(this.t <= 0 || (this.t == 1 && this.array[0] <= 0)) {
      return 0;
    } else {
      return 1;
    }
  }

  // (protected) convert to radix string
  toRadix(b: number|null): string {
    let temp_b = (b == null) ?10 :b
    if(this.signum() == 0 || temp_b < 2 || temp_b > 36) {
      return "0";
    }
    let cs = this.chunkSize(temp_b);
    let a = Math.pow(temp_b,cs);
    let d = BigInteger.nbv(a),
      y = BigInteger.nbi();
    let z: BigInteger|null = BigInteger.nbi();
    let r = "";
    this.divRemTo(d,y,z);
    while(y.signum() > 0) {
      let str = (a+z.intValue()).toString(temp_b);
      r = str.slice(1) + r;
      y.divRemTo(d,y,z);
    }
    return z.intValue().toString(temp_b) + r;
  }

  // (protected) convert from radix string
  fromRadix(s: string,b: number|null) {
    this.fromInt(0);
    let temp_b = (b == null) ?10 :b
    let cs = this.chunkSize(temp_b);
    let d = Math.pow(temp_b,cs);
    let mi = false;
    let j = 0;
    let w = 0;
    for(let i = 0; i < s.length; ++i) {
      let x = this.intAt(s,i);
      if(x < 0) {
        if(s.charAt(i) == "-" && this.signum() == 0) {
          mi = true;
        }
        continue;
      }
      w = temp_b*w+x;
      j += 1;
      if(j >= cs) {
        this.dMultiply(d);
        this.dAddOffset(w,0);
        j = 0;
        w = 0;
      }
    }
    if(j > 0) {
      this.dMultiply(Math.pow(temp_b,j));
      this.dAddOffset(w,0);
    }
    if(mi) {
      BigInteger.ZERO.subTo(this,this);
    }
  }

  // (protected) alternate constructor
  fromNumber(a: number,b?:  SecureRandom|number, c?:  SecureRandom|number) {
    if("number" == typeof b) {
      // new BigInteger(int,int,RNG)
      if(a < 2) {
        this.fromInt(1);
      } else {
        this.fromNumber(a,c);
        if(!this.testBit(a-1)) { // force MSB set
          this.bitwiseTo(BigInteger.ONE.shiftLeft(a - 1), this.op_or, this);
        }
        if(this.isEven()) {
          this.dAddOffset(1,0); // force odd
        }
        while(!this.isProbablePrime(b)) {
          this.dAddOffset(2,0);
          if(this.bitLength() > a) {
            this.subTo(BigInteger.ONE.shiftLeft(a-1),this);
          }
        }
      }
    } else {
      // new BigInteger(int,RNG)
      let x: number[] = [],
        t = a&7;
      x.length = (a>>3)+1;
      (b as SecureRandom).nextBytes(x);
      if(t > 0) {
        x[0] &= ((1<<t)-1);
      } else {
        x[0] = 0;
      }
      this.fromString(x,256);
    }
  }

  // (public) convert to bigendian byte array
  toByteArray(): number[] {
    let i = this.t,
      r: number[] = [];
    r[0] = this.s;
    let p = BI_DB-(i*BI_DB)%8,
      d: number,
      k = 0;
    if(i > 0) {
      i -= 1;
      d = this.array[i]>>p;
      if(p < BI_DB && d != (this.s&BI_DM)>>p){
        r[k] = d|(this.s<<(BI_DB-p));
        k += 1;
      }
      while(i >= 0) {
        if(p < 8) {
          d = (this.array[i]&((1<<p)-1))<<(8-p);
          i -= 1
          p+=BI_DB-8;
          d |= this.array[i]>>p;
        } else {
          p-=8
          d = (this.array[i]>>p)&0xff;
          if(p <= 0) {
            p += BI_DB;
            i -= 1;
          }
        }
        if((d&0x80) != 0) {
          d |= -256;
        }
        if(k == 0 && (this.s&0x80) != (d&0x80)) {
          k += 1;
        }
        if(k > 0 || d != this.s) {
          r[k] = d;
          k += 1;
        }
      }
    }
    return r;
  }

  bnEquals(a: BigInteger): boolean {
    return(this.compareTo(a)==0);
  }

  bnMin(a: BigInteger): BigInteger {
    return(this.compareTo(a)<0)?this:a;
  }

  bnMax(a: BigInteger): BigInteger {
    return(this.compareTo(a)>0)?this:a;
  }

  // (protected) r = this op a (bitwise)
  bitwiseTo(a: BigInteger,op: (x: number, y: number) => number ,r: BigInteger) {
    let f: number,
      m = Math.min(a.t,this.t);
    for(let i = 0; i < m; ++i) {
      r.array[i] = op(this.array[i],a.array[i]);
    }
    if(a.t < this.t) {
      f = a.s&BI_DM;
      for(let i = m; i < this.t; ++i) {
        r.array[i] = op(this.array[i],f);
      }
      r.t = this.t;
    } else {
      f = this.s&BI_DM;
      for(let i = m; i < a.t; ++i) {
        r.array[i] = op(f,a.array[i]);
      }
      r.t = a.t;
    }
    r.s = op(this.s,a.s);
    r.clamp();
  }

  // (public) this & a
  op_and = (x: number,y: number): number => {
    return x&y;
  }
  bnAnd(a: BigInteger): BigInteger {
    let r = BigInteger.nbi();
    this.bitwiseTo(a,this.op_and,r);
    return r;
  }

  // (public) this | a
  op_or = (x: number,y: number): number => {
    return x|y;
  }
  bnOr(a: BigInteger): BigInteger {
    let r = BigInteger.nbi();
    this.bitwiseTo(a,this.op_or,r);
    return r;
  }

  // (public) this ^ a
  op_xor = (x: number,y: number): number => {
    return x^y;
  }
  bnXor(a: BigInteger):BigInteger {
    let r = BigInteger.nbi();
    this.bitwiseTo(a,this.op_xor,r);
    return r;
  }

  // (public) this & ~a
  op_andnot = (x: number,y: number): number => {
    return x&~y;
  }
  bnAndNot(a: BigInteger): BigInteger {
    let r = BigInteger.nbi();
    this.bitwiseTo(a,this.op_andnot,r);
    return r;
  }

  // (public) ~this
  bnNot(): BigInteger {
    let r = BigInteger.nbi();
    for(let i = 0; i < this.t; ++i) {
      r.array[i] = BI_DM&~this.array[i];
    }
    r.t = this.t;
    r.s = ~this.s;
    return r;
  }

  // (public) this << n
  shiftLeft(n: number): BigInteger {
    let r = BigInteger.nbi();
    if(n < 0) {
      this.rShiftTo(-n,r);
    } else {
      this.lShiftTo(n,r);
    }
    return r;
  }

  // (public) this >> n
  shiftRight(n: number): BigInteger {
    let r = BigInteger.nbi();
    if(n < 0) {
      this.lShiftTo(-n,r);
    } else {
      this.rShiftTo(n,r);
    }
    return r;
  }

  // return index of lowest 1-bit in x, x < 2^31
  lbit(x: number): number {
    let temp_x = x;
    if(temp_x == 0) {
      return -1;
    }
    let r = 0;
    if((temp_x&0xffff) == 0) {
      temp_x >>= 16;
      r += 16;
    }
    if((temp_x&0xff) == 0) {
      temp_x >>= 8;
      r += 8;
    }
    if((temp_x&0xf) == 0) {
      temp_x >>= 4;
      r += 4;
    }
    if((temp_x&3) == 0) {
      temp_x >>= 2;
      r += 2;
    }
    if((temp_x&1) == 0) {
      r += 1;
    }
    return r;
  }

  // (public) returns index of lowest 1-bit (or -1 if none)
  getLowestSetBit(): number {
    for(let i = 0; i < this.t; ++i) {
      if (this.array[i] != 0) {
        return i * BI_DB + this.lbit(this.array[i]);
      }
    }
    if(this.s < 0) {
      return this.t*BI_DB;
    }
    return -1;
  }

  // return number of 1 bits in x
  cbit(x: number): number {
    let r = 0;
    let tepm_x = x;
    while(tepm_x != 0) {
      tepm_x &= tepm_x-1;
      r += 1;
    }
    return r;
  }

  // (public) return number of set bits
  bitCount(): number {
    let r = 0,
      x = this.s&BI_DM;
    for(let i = 0; i < this.t; ++i) {
      r += this.cbit(this.array[i]^x);
    }
    return r;
  }

  // (public) true iff nth bit is set
  testBit(n: number): boolean {
    let j = Math.floor(n/BI_DB);
    if(j >= this.t) {
      return(this.s!=0);
    }
    return((this.array[j]&(1<<(n%BI_DB)))!=0);
  }

  // (protected) this op (1<<n)
  changeBit(n: number,op: (x: number, y: number) => number): BigInteger {
    let r = BigInteger.ONE.shiftLeft(n);
    this.bitwiseTo(r,op,r);
    return r;
  }

  // (public) this | (1<<n)
  setBit(n: number): BigInteger {
    return this.changeBit(n,this.op_or);
  }

  // (public) this & ~(1<<n)
  clearBit(n: number): BigInteger {
    return this.changeBit(n,this.op_andnot);
  }

  // (public) this ^ (1<<n)
  flipBit(n: number): BigInteger {
    return this.changeBit(n,this.op_xor);
  }

  // (protected) r = this + a
  addTo(a: BigInteger,r: BigInteger) {
    let i = 0,
      c = 0,
      m = Math.min(a.t,this.t);
    while(i < m) {
      c += this.array[i]+a.array[i];
      r.array[i] = c&BI_DM;
      c >>= BI_DB;
      i += 1;
    }
    if(a.t < this.t) {
      c += a.s;
      while(i < this.t) {
        c += this.array[i];
        r.array[i] = c&BI_DM;
        c >>= BI_DB;
        i += 1;
      }
      c += this.s;
    } else {
      c += this.s;
      while(i < a.t) {
        c += a.array[i];
        r.array[i] = c&BI_DM;
        c >>= BI_DB;
        i += 1;
      }
      c += a.s;
    }
    r.s = (c<0)?-1:0;
    if(c > 0) {
      r.array[i] = c;
      i += 1;
    } else if(c < -1) {
      r.array[i] = BI_DV+c;
      i += 1;
    }
    r.t = i;
    r.clamp();
  }

  // (public) this + a
  add(a: BigInteger): BigInteger {
    let r = BigInteger.nbi();
    this.addTo(a,r);
    return r;
  }

  // (public) this - a
  subtract(a: BigInteger): BigInteger {
    let r = BigInteger.nbi();
    this.subTo(a,r);
    return r;
  }

  // (public) this * a
  multiply(a: BigInteger): BigInteger {
    let r = BigInteger.nbi();
    this.multiplyTo(a,r);
    return r;
  }

  // (public) this / a
  divide(a: BigInteger): BigInteger {
    let r = BigInteger.nbi();
    let temp: BigInteger|null = null;
    this.divRemTo(a,r,temp);
    return r;
  }

  // (public) this % a
  remainder(a: BigInteger): BigInteger {
    let r: BigInteger|null = BigInteger.nbi();
    this.divRemTo(a,null,r);
    return r;
  }

  // (public) [this/a,this%a]
  divideAndRemainder(a: BigInteger): BigInteger[] {
    let q = BigInteger.nbi();
    let r: BigInteger|null = BigInteger.nbi();
    this.divRemTo(a,q,r);
    return new Array(q,r);
  }

  // (protected) this *= n, this >= 0, 1 < n < DV
  dMultiply(n: number) {
    this.array[this.t] = this.am(0,n-1,this,0,0,this.t);
    this.t += 1;
    this.clamp();
  }

  // (protected) this += n << w words, this >= 0
  dAddOffset(n: number,w: number) {
    let temp_w = w;
    while(this.t <= temp_w) {
      this.array[this.t] = 0;
      this.t += 1;
    }
    this.array[temp_w] += n;
    while(this.array[temp_w] >= BI_DV) {
      this.array[temp_w] -= BI_DV;
      temp_w += 1;
      if(temp_w >= this.t) {
        this.array[this.t] = 0;
        this.t += 1
      }
      this.array[temp_w] += 1;
    }
  }

  // (public) this^e
  bnPow(e: number): BigInteger {
    return this.exp(e,new NullExp());
  }

  // (protected) r = lower n words of "this * a", a.t <= n
  // "this" should be the larger one if appropriate.
  multiplyLowerTo(a: BigInteger,n: number,r: BigInteger) {
    let i = Math.min(this.t+a.t,n);
    r.s = 0; // assumes a,this >= 0
    r.t = i;
    while(i > 0) {
      i -= 1;
      r.array[i] = 0;
    }
    while (i < r.t-this.t) {
      r.array[i+this.t] = this.am(0,a.array[i],r,i,0,this.t);
      i += 1;
    }
    for(let j = Math.min(a.t,n); i < j; ++i) {
      this.am(0,a.array[i],r,i,0,n-i);
    }
    r.clamp();
  }

  // (protected) r = "this * a" without lower n words, n > 0
  // "this" should be the larger one if appropriate.
  multiplyUpperTo(a: BigInteger,n: number, r: BigInteger) {
    let temp_n = n - 1;
    r.t = this.t+a.t-temp_n;
    let i = r.t - 1;
    r.s = 0; // assumes a,this >= 0
    while(i >= 0) {
      r.array[i] = 0;
      i -= 1;
    }
    for(i = Math.max(temp_n-this.t,0); i < a.t; ++i) {
      r.array[this.t + i-temp_n] = this.am(temp_n - i, a.array[i], r, 0, 0, this.t + i - temp_n);
    }
    r.clamp();
    r.drShiftTo(1,r);
  }

  // (public) this^e % m (HAC 14.85)
  modPow(e: BigInteger,m: BigInteger): BigInteger {
    let i = e.bitLength();
    let k: number;
    let r: BigInteger|null = BigInteger.nbv(1);
    let z: ConvertProtocol;
    if(i <= 0) {
      return r;
    } else if(i < 18) {
      k = 1;
    } else if(i < 48) {
      k = 3;
    } else if(i < 144){
      k = 4;
    } else if(i < 768){
      k = 5;
    } else {
      k = 6;
    }
    if(i < 8) {
      z = new Classic(m);
    }else if(m.isEven()) {
      z = new Barrett(m);
    }else {
      z = new Montgomery(m);
    }
    // precomputation
    let g: BigInteger[] = [],
      n = 3,
      k1 = k-1,
      km = (1<<k)-1;
    g[1] = z.convert(this);
    if(k > 1) {
      let g2: BigInteger|null = BigInteger.nbi();
      z.sqrTo(g[1],g2);
      while(n <= km) {
        g[n] = BigInteger.nbi();
        z.mulTo(g2,g[n-2],g[n]);
        n += 2;
      }
    }
    let j = e.t-1;
    let w: number;
    let is1: boolean = true;
    let r2: BigInteger|null = BigInteger.nbi();
    let t: BigInteger|null;
    i = this.nbits(e.array[j])-1;
    while(j >= 0) {
      if(i >= k1) {
        w = (e.array[j]>>(i-k1))&km;
      } else {
        w = (e.array[j]&((1<<(i+1))-1))<<(k1-i);
        if(j > 0) {
          w |= e.array[j-1]>>(BI_DB+i-k1);
        }
      }
      n = k;
      while((w&1) == 0) {
        w >>= 1;
        n -= 1;
      }
      i -= n
      if(i < 0) {
        i += BI_DB;
        j -= 1;
      }
      if(is1) {	// ret == 1, don't bother squaring or multiplying it
        g[w].copyTo(r);
        is1 = false;
      } else {
        while(n > 1) {
          z.sqrTo(r,r2);
          z.sqrTo(r2,r);
          n -= 2;
        }
        if(n > 0) {
          z.sqrTo(r,r2);
        } else {
          t = r;
          r = r2;
          r2 = t;
        }
        z.mulTo(r2,g[w],r);
      }
      while(j >= 0 && (e.array[j]&(1<<i)) == 0) {
        z.sqrTo(r,r2);
        t = r;
        r = r2;
        r2 = t;
        i -= 1;
        if(i < 0) {
          i = BI_DB-1;
          j -= 1;
        }
      }
    }
    return z.revert(r);
  }

  // (public) gcd(this,a) (HAC 14.54)
  gcd(a: BigInteger): BigInteger {
    let x = (this.s<0)?this.negate():this.clone();
    let y = (a.s<0)?a.negate():a.clone();
    if(x.compareTo(y) < 0) {
      let t = x;
      x = y;
      y = t;
    }
    let i = x.getLowestSetBit();
    let g = y.getLowestSetBit();
    if(g < 0) {
      return x;
    }
    if(i < g) {
      g = i;
    }
    if(g > 0) {
      x.rShiftTo(g,x);
      y.rShiftTo(g,y);
    }
    while(x.signum() > 0) {
      i = x.getLowestSetBit();
      if(i > 0) {
        x.rShiftTo(i,x);
      }
      i = y.getLowestSetBit();
      if(i > 0) {
        y.rShiftTo(i,y);
      }
      if(x.compareTo(y) >= 0) {
        x.subTo(y,x);
        x.rShiftTo(1,x);
      } else {
        y.subTo(x,y);
        y.rShiftTo(1,y);
      }
    }
    if(g > 0) {
      y.lShiftTo(g,y);
    }
    return y;
  }

  // (protected) this % n, n < 2^26
  modInt(n: number): number {
    if(n <= 0) {
      return 0;
    }
    let d = BI_DV%n,
      r = (this.s<0)?n-1:0;
    if(this.t > 0) {
      if (d == 0) {
        r = this.array[0] % n;
      } else {
        let i = this.t - 1;
        while (i >= 0) {
          r = (d * r + this.array[i]) % n;
          i -= 1;
        }
      }
    }
    return r;
  }

  // (public) 1/this % m (HAC 14.61)
  modInverse(m: BigInteger): BigInteger {
    let ac = m.isEven();
    if((this.isEven() && ac) || m.signum() == 0) {
      return BigInteger.ZERO;
    }
    let u = m.clone();
    let v = this.clone();
    let a = BigInteger.nbv(1),
      b = BigInteger.nbv(0),
      c = BigInteger.nbv(0),
      d = BigInteger.nbv(1);
    while(u.signum() != 0) {
      while(u.isEven()) {
        u.rShiftTo(1,u);
        if(ac) {
          if(!a.isEven() || !b.isEven()) {
            a.addTo(this,a);
            b.subTo(m,b);
          }
          a.rShiftTo(1,a);
        } else if(!b.isEven()) {
          b.subTo(m,b);
        }
        b.rShiftTo(1,b);
      }
      while(v.isEven()) {
        v.rShiftTo(1,v);
        if(ac) {
          if(!c.isEven() || !d.isEven()) {
            c.addTo(this,c);
            d.subTo(m,d);
          }
          c.rShiftTo(1,c);
        } else if(!d.isEven()) {
          d.subTo(m,d);
        }
        d.rShiftTo(1,d);
      }
      if(u.compareTo(v) >= 0) {
        u.subTo(v,u);
        if(ac) {
          a.subTo(c,a);
        }
        b.subTo(d,b);
      } else {
        v.subTo(u,v);
        if(ac) {
          c.subTo(a,c);
        }
        d.subTo(b,d);
      }
    }
    if(v.compareTo(BigInteger.ONE) != 0) {
      return BigInteger.ZERO;
    }
    if(d.compareTo(m) >= 0) {
      return d.subtract(m);
    }
    if(d.signum() < 0) {
      d.addTo(m,d);
    } else {
      return d;
    }
    if(d.signum() < 0) {
      return d.add(m);
    } else {
      return d;
    }
  }

  // (public) test primality with certainty >= 1-.5^t
  isProbablePrime(t: number): boolean {
    let x = this.abs();
    if(x.t == 1 && x.array[0] <= lowprimes[lowprimes.length-1]) {
      for(let i = 0; i < lowprimes.length; ++i) {
        if (x.array[0] == lowprimes[i]) {
          return true;
        }
      }
      return false;
    }
    if(x.isEven()) {
      return false;
    }
    let i = 1;
    while(i < lowprimes.length) {
      let m = lowprimes[i],
        j = i+1;
      while(j < lowprimes.length && m < lplim) {
        m *= lowprimes[j];
        j += 1;
      }
      m = x.modInt(m);
      while(i < j) {
        if(m%lowprimes[i] == 0) {
          return false;
        }
        i += 1;
      }
    }
    return x.millerRabin(t);
  }

  // (protected) true if probably prime (HAC 4.24, Miller-Rabin)
  millerRabin(t: number): boolean {
    let temp_t = t;
    let n1 = this.subtract(BigInteger.ONE);
    let k = n1.getLowestSetBit();
    if(k <= 0) {
      return false;
    }
    let r = n1.shiftRight(k);
    temp_t = (temp_t+1)>>1;
    if(temp_t > lowprimes.length) {
      temp_t = lowprimes.length;
    }
    let a = BigInteger.nbi();
    for(let i = 0; i < temp_t; ++i) {
      a.fromInt(lowprimes[i]);
      let y = a.modPow(r,this);
      if(y.compareTo(BigInteger.ONE) != 0 && y.compareTo(n1) != 0) {
        let j = 1;
        while(j < k && y.compareTo(n1) != 0) {
          j += 1
          y = y.modPowInt(2,this);
          if(y.compareTo(BigInteger.ONE) == 0) {
            return false;
          }
        }
        if(y.compareTo(n1) != 0) {
          return false;
        }
      }
    }
    return true;
  }

  am(i: number, x: number, w: BigInteger, j: number, c: number, n: number): number {
    return AM(this.array,i,x,w,j,c,n);
  }
}

interface  ConvertProtocol {
  convert(x: BigInteger): BigInteger
  revert(x: BigInteger): BigInteger
  reduce(x: BigInteger)
  sqrTo(x: BigInteger,r: BigInteger)
  mulTo(x: BigInteger,y: BigInteger, r: BigInteger)
}

// Modular reduction using "classic" algorithm
class Classic implements  ConvertProtocol {
  m: BigInteger;

  constructor(m: BigInteger) {
    this.m = m;
  }

  convert(x: BigInteger): BigInteger  {
    if(x.s < 0 || x.compareTo(this.m) >= 0) {
      return x.mod(this.m);
    } else {
      return x;
    }
  }

  revert(x: BigInteger): BigInteger {
    return x;
  }

  reduce(x: BigInteger) {
    x.divRemTo(this.m,null,x);
  }

  sqrTo(x: BigInteger,r: BigInteger) {
    x.squareTo(r);
    this.reduce(r);
  }

  mulTo(x: BigInteger,y: BigInteger, r: BigInteger) {
    x.multiplyTo(y,r);
    this.reduce(r);
  }
}

// Montgomery reduction
class Montgomery implements  ConvertProtocol {
  m: BigInteger;
  mp: number;
  mpl: number;
  mph: number;
  um: number;
  mt2: number;

  constructor(m: BigInteger) {
    this.m = m;
    this.mp = m.invDigit();
    this.mpl = this.mp&0x7fff;
    this.mph = this.mp>>15;
    this.um = (1<<(BI_DB-15))-1;
    this.mt2 = 2*m.t;
  }

  // xR mod m
  convert(x: BigInteger): BigInteger {
    let r: BigInteger|null = BigInteger.nbi();
    x.abs().dlShiftTo(this.m.t,r);
    r.divRemTo(this.m,null,r);
    if(x.s < 0 && r.compareTo(BigInteger.ZERO) > 0) {
      this.m.subTo(r,r);
    }
    return r;
  }

  // x/R mod m
  revert(x: BigInteger): BigInteger {
    let r: BigInteger|null = BigInteger.nbi();
    x.copyTo(r);
    this.reduce(r);
    return r;
  }

  // x = x/R mod m (HAC 14.32)
  reduce(x: BigInteger) {
    while(x.t <= this.mt2) { // pad x so am has enough room later
      x.array[x.t] = 0;
      x.t += 1;
    }
    for(let i = 0; i < this.m.t; ++i) {
      // faster way of calculating u0 = x[i]*mp mod DV
      let j = x.array[i]&0x7fff;
      let u0 = (j*this.mpl+(((j*this.mph+(x.array[i]>>15)*this.mpl)&this.um)<<15))&BI_DM;
      // use am to combine the multiply-shift-add into one call
      j = i+this.m.t;
      x.array[j] += this.m.am(0,u0,x,i,0,this.m.t);
      // propagate carry
      while(x.array[j] >= BI_DV) {
        x.array[j] -= BI_DV;
        j += 1
        x.array[j] += 1;
      }
    }
    x.clamp();
    x.drShiftTo(this.m.t,x);
    if(x.compareTo(this.m) >= 0) {
      x.subTo(this.m,x);
    }
  }

  // r = "x^2/R mod m"; x != r
  sqrTo(x: BigInteger,r: BigInteger) {
    x.squareTo(r);
    this.reduce(r);
  }

  // r = "xy/R mod m"; x,y != r
  mulTo(x: BigInteger,y: BigInteger, r: BigInteger) {
    x.multiplyTo(y,r);
    this.reduce(r);
  }
}

class NullExp implements  ConvertProtocol {
  convert(x: BigInteger): BigInteger {
    return x;
  }

  revert(x: BigInteger): BigInteger {
    return x;
  }

  reduce(x: BigInteger) {
    //debugLogLog('Method not implemented.')
  }

  sqrTo(x: BigInteger,r: BigInteger) {
    x.squareTo(r);
  }

  mulTo(x: BigInteger,y: BigInteger, r: BigInteger) {
    x.multiplyTo(y,r);
  }
}

// Barrett modular reduction
class Barrett implements ConvertProtocol {
  r2: BigInteger;
  q3: BigInteger;
  mu: BigInteger;
  m: BigInteger;

  constructor(m: BigInteger) {
    // setup Barrett
    this.r2 = BigInteger.nbi();
    this.q3 = BigInteger.nbi();
    BigInteger.ONE.dlShiftTo(2*m.t,this.r2);
    this.mu = this.r2.divide(m);
    this.m = m;
  }

  convert(x: BigInteger): BigInteger {
    if(x.s < 0 || x.t > 2*this.m.t){
      return x.mod(this.m);
    } else if(x.compareTo(this.m) < 0) {
      return x;
    } else {
      let r: BigInteger|null = BigInteger.nbi();
      x.copyTo(r);
      this.reduce(r);
      return r;
    }
  }

  revert(x: BigInteger): BigInteger {
    return x;
  }

  // x = x mod m (HAC 14.42)
  reduce(x: BigInteger){
    x.drShiftTo(this.m.t-1,this.r2);
    if(x.t > this.m.t+1) {
      x.t = this.m.t+1;
      x.clamp();
    }
    this.mu.multiplyUpperTo(this.r2,this.m.t+1,this.q3);
    this.m.multiplyLowerTo(this.q3,this.m.t+1,this.r2);
    while(x.compareTo(this.r2) < 0) {
      x.dAddOffset(1,this.m.t+1);
    }
    x.subTo(this.r2,x);
    while(x.compareTo(this.m) >= 0) {
      x.subTo(this.m,x);
    }
  }

  // r = x^2 mod m; x != r
  sqrTo(x: BigInteger,r: BigInteger) {
    x.squareTo(r);
    this.reduce(r);
  }

  // r = x*y mod m; x,y != r
  mulTo(x: BigInteger,y: BigInteger, r: BigInteger) {
    x.multiplyTo(y,r);
    this.reduce(r);
  }
}

class Arcfour {
  i: number = 0;
  j: number = 0;
  S: number[] = [];

  // Initialize arcfour context from key, an array of ints, each from [0..255]
  ARC4init(key: number[]) {
    let j: number = 0,
      t = 0;
    for(let i = 0; i < 256; ++i) {
      this.S[i] = i;
    }
    for(let i = 0; i < 256; ++i) {
      j = (j + this.S[i] + key[i % key.length]) & 255;
      t = this.S[i];
      this.S[i] = this.S[j];
      this.S[j] = t;
    }
    this.i = 0;
    this.j = 0;
  }

  next() {
    let t: number;
    this.i = (this.i + 1) & 255;
    this.j = (this.j + this.S[this.i]) & 255;
    t = this.S[this.i];
    this.S[this.i] = this.S[this.j];
    this.S[this.j] = t;
    return this.S[(t + this.S[this.i]) & 255];
  }
}

// Plug in your RNG constructor here
function prng_newstate(): Arcfour {
  return new Arcfour();
}

// Pool size must be a multiple of 4 and greater than 32.
// An array of bytes the size of the pool will be passed to init()
let rng_psize = 256;

// For best results, put code like
// <body onClick='rng_seed_time();' onKeyPress='rng_seed_time();'>
// in your main HTML document.

let rng_state: Arcfour | null;
let rng_pool: number[];
let rng_pptr: number = 0;

// Mix in a 32-bit integer into the pool
function rng_seed_int(x: number) {
  rng_pool[rng_pptr] ^= x & 255;
  rng_pptr += 1;
  rng_pool[rng_pptr] ^= (x >> 8) & 255;
  rng_pptr += 1;
  rng_pool[rng_pptr] ^= (x >> 16) & 255;
  rng_pptr += 1;
  rng_pool[rng_pptr] ^= (x >> 24) & 255;
  rng_pptr += 1;
  if(rng_pptr >= rng_psize) {
    rng_pptr -= rng_psize;
  }
}

// Mix in the current time (w/milliseconds) into the pool
function rng_seed_time() {
  // Use pre-computed date to avoid making the benchmark
  // results dependent on the current date.
  rng_seed_int(1122926989487);
}

// Initialize the pool with junk if needed.
function initRng_pool() {
  if(rng_pool == null) {
    rng_pool = [];
    rng_pptr = 0;
    let t: number;
    while(rng_pptr < rng_psize) {  // extract some randomness from Math.random()
      t = Math.floor(65536 * Math.random());
      rng_pool[rng_pptr] = t >>> 8;
      rng_pptr += 1;
      rng_pool[rng_pptr] = t & 255;
      rng_pptr += 1;
    }
    rng_pptr = 0;
    rng_seed_time();
  }
}

class SecureRandom{
  nextBytes(ba: number[]) {
    for(let i = 0; i < ba.length; ++i) {
      ba[i] = this.rng_get_byte();
    }
  }

  rng_get_byte(): number {
    if(rng_state == null) {
      rng_seed_time();
      rng_state = prng_newstate();
      rng_state.ARC4init(rng_pool);
      rng_pptr = 0;
      while (rng_pptr < rng_pool.length) {
        rng_pool[rng_pptr] = 0;
        rng_pptr += 1;
      }
      rng_pptr = 0;
    }
    // TODO: allow reseeding after first request
    return rng_state.next();
  }
}

// "empty" RSA key constructor
class RSAKey {
  n: BigInteger|null;
  e: number;
  d: BigInteger|null;
  p: BigInteger|null;
  q: BigInteger|null;
  dmp1: BigInteger|null;
  dmq1: BigInteger|null;
  coeff: BigInteger|null;

  constructor() {
    this.n = null;
    this.e = 0;
    this.d = null;
    this.p = null;
    this.q = null;
    this.dmp1 = null;
    this.dmq1 = null;
    this.coeff = null;
  }

  // convert a (hex) string to a bignum object
  parseBigInt(str: string,r: number): BigInteger {
    return new BigInteger(str,r);
  }

  linebrk(s: string,n: number): string {
    let ret = "";
    let i: number = 0;
    while(i + n < s.length) {
      ret += s.substring(i,i+n) + "\n";
      i += n;
    }
    return ret + s.substring(i,s.length);
  }

  byte2Hex(b: number): string {
    if(b < 0x10) {
      return "0" + b.toString(16);
    }else{
      return b.toString(16);
    }
  }

  // PKCS#1 (type 2, random) pad input string s to n bytes, and return a bigint
  pkcs1pad2(s: string,n: number): BigInteger|null {
    if(n < s.length + 11) {
      //debugLogLog('Message too long for RSA');
      return null;
    }
    let temp_n = n;
    let ba: number[] = [];
    let i = s.length - 1;
    while(i >= 0 && temp_n > 0) {
      temp_n -= 1;
      ba[temp_n] = s.charCodeAt(i);
      i -= 1;
    }
    temp_n -= 1;
    ba[temp_n] = 0;
    let rng = new SecureRandom();
    let x: number[] = [];
    while(temp_n > 2) { // random non-zero pad
      x[0] = 0;
      while(x[0] == 0) {
        rng.nextBytes(x);
      }
      temp_n -= 1;
      ba[temp_n] = x[0];
    }
    temp_n -= 1;
    ba[temp_n] = 2;
    temp_n -= 1;
    ba[temp_n] = 0;
    return new BigInteger(ba);
  }

  // Set the public key fields N and e from hex strings
  setPublic(N: string,E: string) {
    if(N.length > 0 && E.length > 0) {
      this.n = this.parseBigInt(N,16);
      this.e = Number.parseInt(E,16);
    } else {
      //debugLogLog("Invalid RSA public key");
    }
  }

  // Perform raw public operation on "x": return x^e (mod n)
  doPublic(x: BigInteger): BigInteger {
    return x.modPowInt(this.e, this.n as BigInteger);
  }

  // Return the PKCS#1 RSA encryption of "text" as an even-length hex string
  encrypt(text: string): string|null {
    let m = this.pkcs1pad2(text,((this.n as BigInteger).bitLength()+7)>>3);
    if(m == null) {
      return null;
    }
    let c = this.doPublic(m);
    if(c == null) {
      return null;
    }
    let h = c.toString(16);
    if((h.length & 1) == 0) {
      return h;
    } else {
      return "0" + h;
    }
  }

  // Undo PKCS#1 (type 2, random) padding and, if valid, return the plaintext
  pkcs1unpad2(d: BigInteger,n: number): string | null {
    let b = d.toByteArray();
    let i = 0;
    while(i < b.length && b[i] == 0) {
      i += 1;
    }
    if(b.length-i != n-1 || b[i] != 2) {
      return null;
    }
    i += 1;
    while(b[i] != 0){
      i += 1;
      if(i >= b.length) {
        return null;
      }
    }
    let ret = "";
    i += 1;
    while(i < b.length){
      ret += String.fromCharCode(b[i]);
      i += 1;
    }
    return ret;
  }

  // Set the private key fields N, e, and d from hex strings
  setPrivate(N: string,E: string,D: string) {
    if(N.length > 0 && E.length > 0) {
      this.n = this.parseBigInt(N,16);
      this.e = Number.parseInt(E,16);
      this.d = this.parseBigInt(D,16);
    } else{
      //debugLogLog("Invalid RSA private key");
    }
  }

  // Set the private key fields N, e, d and CRT params from hex strings
  setPrivateEx(N: string,E: string,D: string,P: string,Q: string,DP: string,DQ: string,C: string) {
    if(N.length > 0 && E.length > 0) {
      this.n = this.parseBigInt(N,16);
      this.e = Number.parseInt(E,16);
      this.d = this.parseBigInt(D,16);
      this.p = this.parseBigInt(P,16);
      this.q = this.parseBigInt(Q,16);
      this.dmp1 = this.parseBigInt(DP,16);
      this.dmq1 = this.parseBigInt(DQ,16);
      this.coeff = this.parseBigInt(C,16);
    } else{
      //debugLogLog("Invalid RSA private key");
    }
  }

  // Generate a new random private key B bits long, using public expt E
  generate(B: number,E: string) {
    let rng = new SecureRandom();
    let qs = B>>1;
    this.e = Number.parseInt(E,16);
    let ee = new BigInteger(E,16);
    while (true) {
      while (true) {
        this.p = new BigInteger(B-qs,1,rng);
        if(this.p.subtract(BigInteger.ONE).gcd(ee).compareTo(BigInteger.ONE) == 0 && this.p.isProbablePrime(10)) {
          break;
        }
      }
      while (true) {
        this.q = new BigInteger(qs,1,rng);
        if(this.q.subtract(BigInteger.ONE).gcd(ee).compareTo(BigInteger.ONE) == 0 && this.q.isProbablePrime(10)) {
          break;
        }
      }
      if(this.p.compareTo(this.q) <= 0) {
        let t = this.p;
        this.p = this.q;
        this.q = t;
      }
      let p1 = this.p.subtract(BigInteger.ONE);
      let q1 = this.q.subtract(BigInteger.ONE);
      let phi = p1.multiply(q1);
      if(phi.gcd(ee).compareTo(BigInteger.ONE) == 0) {
        this.n = this.p.multiply(this.q);
        this.d = ee.modInverse(phi);
        this.dmp1 = this.d.mod(p1);
        this.dmq1 = this.d.mod(q1);
        this.coeff = this.q.modInverse(this.p);
        break;
      }
    }
  }

  // Perform raw private operation on "x": return x^d (mod n)
  doPrivate(x: BigInteger): BigInteger | null {
    if(this.p == null || this.q == null){
      return x.modPow(this.d as BigInteger, this.n as BigInteger);
    }
    // TODO: re-calculate any missing CRT params
    let xp = x.mod(this.p as BigInteger).modPow(this.dmp1 as BigInteger, this.p as BigInteger);
    let xq = x.mod(this.q as BigInteger).modPow(this.dmq1 as BigInteger, this.q as BigInteger);
    while(xp.compareTo(xq) < 0) {
      xp = xp.add(this.p as BigInteger);
    }
    return xp.subtract(xq).multiply(this.coeff as BigInteger).mod(this.p as BigInteger).multiply(this.q as BigInteger).add(xq);
  }

  // Return the PKCS#1 RSA decryption of "ctext".
  // "ctext" is an even-length hex string and the output is a plain string.
  decrypt(ctext: string): string | null {
    let c = this.parseBigInt(ctext, 16);
    let m = this.doPrivate(c);
    if(m == null) {
      return null;
    }
    return this.pkcs1unpad2(m, ((this.n as BigInteger).bitLength()+7)>>3);
  }
}

let nValue="a5261939975948bb7a58dffe5ff54e65f0498f9175f5a09288810b8975871e99af3b5dd94057b0fc07535f5f97444504fa35169d461d0d30cf0192e307727c065168c788771c561a9400fb49175e9e6aa4e23fe11af69e9412dd23b0cb6684c4c2429bce139e848ab26d0829073351f4acd36074eafd036a5eb83359d2a698d3";
let eValue="10001";
let dValue="8e9912f6d3645894e8d38cb58c0db81ff516cf4c7e5a14c7f1eddb1459d2cded4d8d293fc97aee6aefb861859c8b6a3d1dfe710463e1f9ddc72048c09751971c4a580aa51eb523357a3cc48d31cfad1d4a165066ed92d4748fb6571211da5cb14bc11b6e2df7c1a559e6d5ac1cd5c94703a22891464fba23d0d965086277a161";
let pValue="d090ce58a92c75233a6486cb0a9209bf3583b64f540c76f5294bb97d285eed33aec220bde14b2417951178ac152ceab6da7090905b478195498b352048f15e7d";
let qValue="cab575dc652bb66df15a0359609d51d1db184750c00c6698b90ef3465c99655103edbf0d54c56aec0ce3c4d22592338092a126a0cc49f65a4a30d222b411e58f";
let dmp1Value="1a24bca8e273df2f0e47c199bbf678604e7df7215480c77c8db39f49b000ce2cf7500038acfff5433b7d582a01f1826e6f4d42e1c57f5e1fef7b12aabc59fd25";
let dmq1Value="3d06982efbbe47339e1f6d36b1216b8a741d410b0c662f54f7118b27b9a4ec9d914337eb39841d8666f3034408cf94f5b62f11c402fc994fe15a05493150d9fd";
let coeffValue="3a3e731acd8960b7ff9eb81a7ff93bd1cfa74cbd56987db58b4594fb09c09084db1734c8143f98b602b981aaa9243ca28deb69b5b280ee8dcee0fd2625e53250";

let TEXT = "The quick brown fox jumped over the extremely lazy frog! " +
  "Now is the time for all good men to come to the party.";
let encrypted: string|null;

function encrypt() {
  let RSA = new RSAKey();
  RSA.setPublic(nValue, eValue);
  RSA.setPrivateEx(nValue, eValue, dValue, pValue, qValue, dmp1Value, dmq1Value, coeffValue);
  encrypted = RSA.encrypt(TEXT);
}

function decrypt() {
  let RSA = new RSAKey();
  RSA.setPublic(nValue, eValue);
  RSA.setPrivateEx(nValue, eValue, dValue, pValue, qValue, dmp1Value, dmq1Value, coeffValue);
  let decrypted = RSA.decrypt(encrypted as string);
  if (decrypted != TEXT) {
    //debugLogLog("Crypto operation failed");
  }
}


class Benchmark {
  // @Benchmark
  runIteration() {
    encrypt();
    decrypt();
  }
}

// @Setup
function cryptoSetup() {
  initBI_RC();
  initRng_pool();
  setupEngine(am3, 28);
}

function cryptoRunIteration() {
  let setupStart = ArkTools.timeInUs() / 1000;
  cryptoSetup();
  let setupEnd = ArkTools.timeInUs() / 1000;
  //debugLogLog("setupTime: " + String(setupEnd - setupStart) + "ms");
  let runTimes: number[] = [];
  let runStart = ArkTools.timeInUs() / 1000;
  for (let index = 0; index < 120; index++) {
    let start = ArkTools.timeInUs() / 1000;
    new Benchmark().runIteration();
    let end = ArkTools.timeInUs() / 1000;
    let runtime = end - start;
    runTimes.push(runtime);
    //debugLogLog("onceRunTime: " + String(runtime) + "ms");
  }
  let endTime = ArkTools.timeInUs() / 1000;
  //debugLogLog("runTime: " + String(endTime - runStart) + "ms");
  print("crypto: ms = " + String(endTime - setupStart));
}

function debugLogLog(str: string) {
  let isLog = false;
  if (isLog) {
    print(str);
  }
}

class performance {
  static now(): number {
    return Date.now();
  }
}

cryptoRunIteration()