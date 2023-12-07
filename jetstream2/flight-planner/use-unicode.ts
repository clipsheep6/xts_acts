const useUnicode = false;
class StringUtils {
  static toTitleCase(str: string): string {
    return str.charAt(0).toUpperCase() + str.substr(1).toLowerCase();
  }
}

class UnicodeStrings {
  static table: Map<string,string>;
  static instance: UnicodeStrings | null;

  constructor() {
    UnicodeStrings.table = new Map();
    UnicodeStrings.instance = null;
  }

  static get(str: string): string {
    if (!UnicodeStrings.instance) {
      UnicodeStrings.instance = new UnicodeStrings();
      UnicodeStrings.table.forEach((v,k,m)=>{
        let keyStrLower = k.toLowerCase();
        if (v) {
        let valueStrLower = v.toLowerCase();
        UnicodeStrings.table.set(keyStrLower,valueStrLower);
        let keyStrTitle = StringUtils.toTitleCase(k);
        let valueStrTitle = StringUtils.toTitleCase(v);
        UnicodeStrings.table.set(keyStrTitle,valueStrTitle);
        }
      })
    }
    let value = UnicodeStrings.table.get(str)
    return value ? value : str;
  }
}


UnicodeStrings.instance = null;

let mp = new Map<string,string>()
mp.set("START","\u{041d}\u{0410}\u{0427}\u{0410}\u{0422}\u{042c}");// НАЧАТЕЛЬ
mp.set("TIMING","\u{0425}\u{0420}\u{041e}\u{041d}\u{0418}\u{0415}\u{0422}\u{0415}\u{041b}\u{042c}-\u{041d}\u{0410}\u{041a}\u{0410}\u{0422}\u{0410}")// ДВИГАТЕЛЬ НАКАТА
mp.set("TAKEOFF","\u{0412}\u{0417}\u{041b}\u{0415}\u{0422}")// ВЗЛЕТ
mp.set("CLIMB","\u{041f}\u{041e}\u{0414}\u{041d}\u{042f}\u{0422}\u{042c}\u{0421}\u{042f}")// ПОДНЯТЬС�
mp.set("PATTERN","\u{041a}\u{0420}\u{0423}\u{0413}")// КРУГ
mp.set("LEFT","\u{041b}\u{0415}\u{0412}\u{042b}\u{0419}")// ЛЕВЫЙ
mp.set("RIGHT","\u{041f}\u{0420}\u{0410}\u{0412}\u{042b}\u{0419}")// ПРAВЯE: to be a number, you must have the absolute value (or else an undefined symbol)
UnicodeStrings.table=mp;

export {UnicodeStrings,useUnicode,StringUtils};