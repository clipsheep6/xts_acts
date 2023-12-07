const TIME_STAMP_SECONDS_CONST = 1167585071;
const TIME_STAMP_MILLISECONDS_CONST = 1167585071000;
const TIME_ADD_CONST = 84266956;
const TIME_ZONE_OFFSET_CONST = -480;
const TIME_CONVERT_CONST = 60;
const TIME_TOTAL_CONST = 3600;
const TIME_BETA_CONST = 86.4;
const TIME_HOUR_12_CONST = 12;
const TIME_HOUR_24_CONST = 24;
const YEAR_4_CONST = 4;
const YEAR_STARD_CONST = 100;
const YEAR_LEEP_CONST = 400;
const YEAR_TOTAL_DAY_CONST = 364;
const YEAR_1900_CONST = 1900;
const YEAR_2000_CONST = 2000;
const YEAR_2001_CONST = 2001;
const YEAR_CONST = 2007;
const NUM_1_CONST = 1;
const NUM_2_CONST = 2;
const NUM_3_CONST = 3;
const NUM_6_CONST = 6;
const NUM_7_CONST = 7;
const NUM_9_CONST = 9;
const NUM_11_CONST = 11;
const NUM_28_CONST = 28;
const NUM_29_CONST = 29;
const NUM_30_CONST = 30;
const NUM_31_CONST = 31;
const NUM_38_CONST = 38;
const NUM_500_CONST = 500;
const NUM_TIME_CONST = 1000;
const NUM_LOOPCOUNT_CONST = 80;

class MyDate {
  public timeIntervalSince1970(): number {
    return TIME_STAMP_SECONDS_CONST;
  }

  public timeStamp(): number {
    return TIME_STAMP_SECONDS_CONST;
  }

  public milliStamp(): number {
    return TIME_STAMP_MILLISECONDS_CONST;
  }

  constructor(str?: string) {}

  public getDate(): number {
    //Returns a day of the month
    return NUM_1_CONST;
  }

  public getTimezoneOffset(): number {
    //Returns the time difference between Greenwich Mean Time and local time:
    return TIME_ZONE_OFFSET_CONST;
  }

  public getYear(): number {
    return YEAR_CONST;
  }

  public getFullYear(): number {
    //return a year
    return YEAR_CONST;
  }

  public getMonth(): number {
    //return a month
    return NUM_1_CONST;
  }

  public getHours(): number {
    //Returns the hour field of the time based on the specified time:
    return NUM_1_CONST;
  }

  public getMinutes(): number {
    //Returns the minute field of the time based on the specified time:
    return NUM_11_CONST;
  }

  public getSeconds(): number {
    //Returns the second field of the time based on the specified time:
    return NUM_11_CONST;
  }

  public getDay(): number {
    //Returns the number of a day of the week.
    return NUM_1_CONST;
  }

  public getTime(): number {
    //Returns the number of milliseconds between January 1, 1970:
    let timeInterval: number = this.timeIntervalSince1970();
    return timeInterval * NUM_TIME_CONST;
  }

  public setTime(millisedcond: number): void {
    //Method to set the Date object in milliseconds.
  }
}

class DateFormatter {
  public dateFormat: string | null;
  public timeZone: TimeZone | null;

  constructor() {
    this.dateFormat = null;
    this.timeZone = null;
  }

  public newDate(from: string): MyDate {
    return new MyDate(from);
  }
}

class TimeZone {
  identifier: string;

  constructor(identifier: string) {
    this.identifier = identifier;
  }
}

function arrayExists(array: [string], x: string): boolean {
  for (let i = 0; i < array.length; i++) {
    if (array[i] === x) {
      return true;
    }
  }
  return false;
}

class DateClass extends MyDate {
  switches = [
    'a',
    'A',
    'B',
    'd',
    'D',
    'F',
    'g',
    'G',
    'h',
    'H',
    'i',
    'j',
    'l',
    'L',
    'm',
    'M',
    'n',
    'O',
    'r',
    's',
    'S',
    't',
    'U',
    'w',
    'W',
    'y',
    'Y',
    'z'
  ];
  daysLong = ['Sunday', 'Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday'];
  daysShort = ['Sun', 'Mon', 'Tue', 'Wed', 'Thu', 'Fri', 'Sat'];
  monthsShort = ['Jan', 'Feb', 'Mar', 'Apr', 'May', 'Jun', 'Jul', 'Aug', 'Sep', 'Oct', 'Nov', 'Dec'];
  monthsLong = [
    'January',
    'February',
    'March',
    'April',
    'May',
    'June',
    'July',
    'August',
    'September',
    'October',
    'November',
    'December'
  ];
  daysSuffix = [
    'st',
    'nd',
    'rd',
    'th',
    'th',
    'th',
    'th', // 1st - 7th
    'th',
    'th',
    'th',
    'th',
    'th',
    'th',
    'th', // 8th - 14th
    'th',
    'th',
    'th',
    'th',
    'th',
    'th',
    'st', // 15th - 21st
    'nd',
    'rd',
    'th',
    'th',
    'th',
    'th',
    'th', // 22nd - 28th
    'th',
    'th',
    'st'
  ]; // 29th - 31st

  constructor(str?: string) {
    super(str);
  }

  formatDate(input: string, time?: number): string {
    // formatDate :
    // a PHP date like function, for formatting date strings
    // See: http://www.php.net/date
    //
    // input : format string
    // time : epoch time (seconds, and optional)
    //
    // if time is not passed, formatting is based on
    // the current "this" date object's set time.
    //
    // supported:
    // a, A, B, d, D, F, g, G, h, H, i, j, l (lowercase L), L,
    // m, M, n, O, r, s, S, t, U, w, W, y, Y, z
    //
    // unsupported:
    // I (capital i), T, Z
    let prevTime = 0;
    if (time != null) {
      // save time
      prevTime = this.getTime();
      this.setTime(time);
    }
    let arr = this.stringToArray(input);
    for (let index = 0; index < arr.length; index++) {
      if (this.arrayExists(this.switches, arr[index])) {
        let value = arr[index];
        switch (arr[index]) {
          case 'a':
            value = this.a();
          case 'A':
            value = this.A();
            break;
          case 'B':
            value = this.B();
            break;
          case 'd':
            value = this.d();
            break;
          case 'D':
            value = this.D();
            break;
          case 'F':
            value = this.F();
            break;
          case 'g':
            value = this.g();
            break;
          case 'G':
            value = `${this.G()}`;
            break;
          case 'h':
            value = this.h();
            break;
          case 'H':
            value = this.H();
            break;
          case 'i':
            value = this.i();
            break;
          case 'j':
            value = `${this.j()}`;
            break;
          case 'l':
            value = this.l();
            break;
          case 'L':
            value = `${this.L()}`;
            break;
          case 'm':
            value = this.m();
            break;
          case 'M':
            value = this.M();
            break;
          case 'n':
            value = `${this.n()}`;
            break;
          case 'O':
            value = this.O();
            break;
          case 'r':
            value = this.r();
            break;
          case 's':
            value = this.s();
            break;
          case 'S':
            value = this.S();
            break;
          case 't':
            value = `${this.t()}`;
            break;
          case 'U':
            value = `${this.U()}`;
            break;
          case 'w':
            value = `${this.w()}`;
            break;
          case 'W':
            value = this.W();
            break;
          case 'y':
            value = this.y();
            break;
          case 'Y':
            value = `${this.Y()}`;
            break;
          case 'z':
            value = `${this.z()}`;
            break;
          default:
            break;
        }
        arr[index] = value;
      }
    }
    //reset time, back to what it was
    if (prevTime != 0) {
      this.setTime(prevTime);
    }
    return arr.join('');
  }

  a(): string {
    // Lowercase Ante meridiem and Post meridiem
    return this.getHours() > NUM_11_CONST ? 'pm' : 'am';
  }

  A(): string {
    // Uppercase Ante meridiem and Post meridiem
    return this.getHours() > NUM_11_CONST ? 'PM' : 'AM';
  }

  B(): string {
    // Swatch internet time. code simply grabbed from ppk,
    // since I was feeling lazy:
    // http://www.xs4all.nl/~ppk/js/beat.html
    let off = (this.getTimezoneOffset() + TIME_CONVERT_CONST) * TIME_CONVERT_CONST;
    let theSeconds =
      this.getHours() * TIME_TOTAL_CONST + this.getMinutes() * TIME_CONVERT_CONST + this.getSeconds() + off;
    let beat: number | string = Math.floor(theSeconds / TIME_BETA_CONST);
    if (beat > NUM_TIME_CONST) {
      beat -= NUM_TIME_CONST;
    }
    if (beat < 0) {
      beat += NUM_TIME_CONST;
    }
    if (`${beat}`.length == 1) {
      beat = `00${beat}`;
    }
    if (`${beat}`.length == NUM_2_CONST) {
      beat = `0${beat}`;
    }
    return beat;
  }

  d(): string {
    // Day of the month, 2 digits with leading zeros
    return new String(this.getDate()).length == 1 ? `0${this.getDate()}` : `${this.getDate()}`;
  }

  D(): string {
    // A textual representation of a day, three letters
    return this.daysShort[this.getDay()];
  }

  F(): string {
    // A full textual representation of a month
    return this.monthsLong[this.getMonth() - 1];
  }

  g(): string {
    // 12-hour format of an hour without leading zeros
    return this.getHours() > TIME_HOUR_12_CONST ? `${this.getHours() - TIME_HOUR_12_CONST}}` : `${this.getHours()}}`;
  }

  G(): number {
    // 24-hour format of an hour without leading zeros
    return this.getHours();
  }

  h(): string {
    // 12-hour format of an hour with leading zeros
    if (this.getHours() > TIME_HOUR_12_CONST) {
      let s = new String(this.getHours() - TIME_HOUR_12_CONST);
      return s.length == 1 ? `0${this.getHours() - TIME_HOUR_12_CONST}` : `${this.getHours() - TIME_HOUR_12_CONST}`;
    } else {
      let s = new String(this.getHours());
      return s.length == 1 ? `0${this.getHours()}` : `${this.getHours()}`;
    }
  }

  H(): string {
    // 24-hour format of an hour with leading zeros
    return `${this.getHours()}`.length == 1 ? `${this.getHours()}` : `${this.getHours()}`;
  }

  i(): string {
    // Minutes with leading zeros
    return `${this.getMinutes()}`.length == 1 ? `${this.getMinutes()}` : `${this.getMinutes()}`;
  }

  j(): number {
    // Day of the month without leading zeros
    return this.getDate();
  }

  l(): string {
    // A full textual representation of the day of the week
    return this.daysLong[this.getDay() - 1];
  }

  L(): number {
    // leap year or not. 1 if leap year, 0 if not.
    // the logic should match iso's 8601 standard.
    let y_ = this.Y();
    if (
      (y_ % YEAR_4_CONST == 0 && y_ % YEAR_STARD_CONST != 0) ||
      (y_ % YEAR_4_CONST == 0 && y_ % YEAR_STARD_CONST == 0 && y_ % YEAR_LEEP_CONST == 0)
    ) {
      return 1;
    } else {
      return 0;
    }
  }

  m(): string {
    // Numeric representation of a month, with leading zeros
    return this.getMonth() < NUM_9_CONST ? `0${this.getMonth() + 1}` : `${this.getMonth() + 1}`;
  }

  M(): string {
    // A short textual representation of a month, three letters
    return this.monthsShort[this.getMonth()];
  }

  n(): number {
    // Numeric representation of a month, without leading zeros
    return this.getMonth() + 1;
  }

  O(): string {
    // Difference to Greenwich time (GMT) in hours
    let os = Math.abs(this.getTimezoneOffset());
    let h = `${Math.floor(os / TIME_CONVERT_CONST)}`;
    let m = `${os % TIME_CONVERT_CONST}`;
    h.length == 1 ? (h = `0${h}`) : 1;
    m.length == 1 ? (m = `0${m}`) : 1;
    return this.getTimezoneOffset() < 0 ? `+${h}${m}` : `-${h}${m}`;
  }

  r(): string {
    // RFC 822 formatted date
    let r: string;
    r = `${this.D()},${this.j()} ${this.M()} ${this.Y()} ${this.H()}:${this.i()}:${this.s()} ${this.O()}`;
    return r;
  }

  S(): string {
    // English ordinal suffix for the day of the month, 2 characters
    return this.daysSuffix[this.getDate() - 1];
  }

  s(): string {
    // Seconds, with leading zeros
    return `${this.getSeconds()}`.length == 1 ? `0${this.getSeconds()}` : `${this.getSeconds()}`;
  }

  t(): number {
    // thanks to Matt Bannon for some much needed code-fixes here!
    let daysinmonths = [
      null,
      NUM_31_CONST,
      NUM_28_CONST,
      NUM_31_CONST,
      NUM_30_CONST,
      NUM_31_CONST,
      NUM_30_CONST,
      NUM_31_CONST,
      NUM_31_CONST,
      NUM_30_CONST,
      NUM_31_CONST,
      NUM_30_CONST,
      NUM_31_CONST
    ];
    if (this.L() == 1 && this.n() == NUM_2_CONST) {
      return NUM_29_CONST; // leap day
    }
    return daysinmonths[this.n()];
  }

  U(): number {
    // Seconds since the Unix Epoch (January 1 1970 00:00:00 GMT)
    return Math.round(this.getTime() / NUM_TIME_CONST);
  }

  W(): string {
    // Weeknumber, as per ISO specification:
    // http://www.cl.cam.ac.uk/~mgk25/iso-time.html

    // if the day is three days before newyears eve,
    // there's a chance it's "week 1" of next year.
    // here we check for that.
    let beforeNY = YEAR_TOTAL_DAY_CONST + this.L() - this.z();
    let afterNY = this.z();
    let weekday = this.w() != 0 ? this.w() - 1 : NUM_6_CONST; // makes sunday (0), into 6.
    if (beforeNY <= NUM_2_CONST && weekday <= NUM_2_CONST - beforeNY) {
      return '1';
    }
    // similarly, if the day is within threedays of newyears
    // there's a chance it belongs in the old year.
    let ny = this.stringToDate('1/1/(Y()) 00:00:00');
    let nyDay = ny.getDay() != 0 ? ny.getDay() - 1 : NUM_6_CONST;
    if (afterNY <= NUM_2_CONST && nyDay >= YEAR_4_CONST && afterNY >= NUM_6_CONST - nyDay) {
      // Since I'm not sure we can just always return 53,
      // i call the function here again, using the last day
      // of the previous year, as the date, and then just
      // return that week.
      let prevNY = new DateClass('December 31 ' + (this.Y() - 1) + ' 00:00:00');
      return prevNY.formatDate('W');
    }
    // week 1, is the week that has the first thursday in it.
    // note that this value is not zero index.
    if (nyDay <= NUM_3_CONST) {
      // first day of the year fell on a thursday, or earlier.
      return `${1 + Math.floor((this.z() + nyDay) / NUM_7_CONST)}`;
    } else {
      // first day of the year fell on a friday, or later.
      return `${1 + Math.floor((this.z() - (NUM_7_CONST - nyDay)) / NUM_7_CONST)}`;
    }
  }

  w(): number {
    // Numeric representation of the day of the week
    return this.getDay();
  }

  Y(): number {
    // A full numeric representation of a year, 4 digits
    // we first check, if getFullYear is supported. if it
    // is, we just use that. ppks code is nice, but wont
    // work with dates outside 1900-2038, or something like that
    if (this.getFullYear) {
      let newDate = new DateClass(`January 1 ${YEAR_2001_CONST} 00:00:00 +0000`);
      let x: number = newDate.getFullYear();
      if (x == YEAR_2001_CONST) {
        // i trust the method now
        return this.getFullYear();
      }
    }
    // else, do this:
    // codes thanks to ppk:
    // http://www.xs4all.nl/~ppk/js/introdate.html
    let x = this.getFullYear();
    let y = x % YEAR_STARD_CONST;
    y += y < NUM_38_CONST ? YEAR_2000_CONST : YEAR_1900_CONST;
    return y;
  }

  y(): string {
    // A two-digit representation of a year
    let y = `${this.Y()}`;
    return y.substring(y.length - NUM_2_CONST, y.length);
  }

  z(): number {
    // The day of the year, zero indexed! 0 through 366
    let t = new DateClass('January 1 ' + this.Y() + ' 00:00:00');
    let diff = this.getTime() - t.getTime();
    return Math.floor(diff / NUM_TIME_CONST / TIME_CONVERT_CONST / TIME_CONVERT_CONST / TIME_HOUR_24_CONST);
  }

  stringToArray(str: String): string[] {
    const arr: string[] = [];
    for (let i = 0; i < str.length; i++) {
      arr.push(str[i]);
    }
    return arr;
  }

  stringToDate(str: string): MyDate {
    let dateFormatter = new DateFormatter();
    dateFormatter.dateFormat = 'dd-MM-yyyy HH:mm:ss';
    dateFormatter.timeZone = new TimeZone('Asia/Shanghai');
    let dateObject = dateFormatter.newDate(str);
    return dateObject;
  }

  arrayExists(array: string[], x: string): boolean {
    for (let i = 0; i < array.length; i++) {
      if (array[i] === x) {
        return true;
      }
    }
    return false;
  }
}

declare interface ArkTools {
  timeInUs(args: number): number;
}

/**
 * @State
 */
class Benchmark {
  run(): void {
    let date = new DateClass('1/1/2007 01:11:11');
    for (let i = 0; i < NUM_500_CONST; ++i) {
      let shortFormat: string = date.formatDate('Y-m-d');
      let longFormat: string = date.formatDate('l, F d, Y g:i:s A');
      date.setTime(date.getTime() + TIME_ADD_CONST);
    }
  }
  /**
   * @Benchmark
   */
  runIterationTime(): void {
    let start = ArkTools.timeInUs();
    for (let i = 0; i < NUM_LOOPCOUNT_CONST; i++) {
      this.run();
    }
    let end = ArkTools.timeInUs();
    let duration = (end - start) / NUM_TIME_CONST;
    print(`date-format-tofte ms = ${duration}`);
  }
}

new Benchmark().runIterationTime();
