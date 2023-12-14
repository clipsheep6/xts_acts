import I18n from '@ohos.i18n'
import intl from '@ohos.intl'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'

export default function I18nTest() {
  describe('I18nTest', () => {
    console.log('*************start I18NTest*************');

    /* *
    * @tc.number  TEST_PHONENUMBERFORMATCONSTRUCTOR_001
    * @tc.name    test PhoneNumberFormat method
    * @tc.desc    create a PhoneNumberFormat object
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatConstructor001', 0, () => {
      let value = new I18n.PhoneNumberFormat("CN", {
        "type": "E164"
      });
      console.log('testPhoneNumberFormatConstructor001 ' + value);
      expect(value != null).assertTrue();
    })

    /* *
    * @tc.number  TEST_PHONENUMBERFORMATCONSTRUCTOR_002
    * @tc.name    test PhoneNumberFormat method
    * @tc.desc    create a PhoneNumberFormat object
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatConstructor002', 0, () => {
      let value = new I18n.PhoneNumberFormat("CN", {
        "type": "INTERNATIONAL"
      });
      console.log('testPhoneNumberFormatConstructor002 ' + value);
      expect(value != null).assertTrue();
    })

    /* *
    * @tc.number  TEST_PHONENUMBERFORMATCONSTRUCTOR_003
    * @tc.name    test PhoneNumberFormat method
    * @tc.desc    create a PhoneNumberFormat object
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatConstructor003', 0, () => {
      let value = new I18n.PhoneNumberFormat("CN", {
        "type": "NATIONAL"
      });
      console.log('testPhoneNumberFormatConstructor003 ' + value);
      expect(value != null).assertTrue();
    })

    /* *
    * @tc.number  TEST_PHONENUMBERFORMATCONSTRUCTOR_004
    * @tc.name    test PhoneNumberFormat method
    * @tc.desc    create a PhoneNumberFormat object
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatConstructor004', 0, () => {
      let value = new I18n.PhoneNumberFormat("CN", {
        "type": "RFC3966"
      });
      console.log('testPhoneNumberFormatConstructor004 ' + value);
      expect(value != null).assertTrue();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_001
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber001', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("CN");
      let value = phonenumberfmt.isValidNumber("15825482312");
      console.log('testPhoneNumberFormatIsValidNumber001 ' + value);
      expect(value).assertTrue();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_002
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber002', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("CN");
      let value = phonenumberfmt.isValidNumber("110");
      console.log('testPhoneNumberFormatIsValidNumber002 ' + value);
      expect(value).assertFalse();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_003
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber003', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("CN");
      let value = phonenumberfmt.isValidNumber("8615825482312");
      console.log('testPhoneNumberFormatIsValidNumber003 ' + value);
      expect(value).assertTrue();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_004
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber004', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("CN");
      let value = phonenumberfmt.isValidNumber("+8615825482312");
      console.log('testPhoneNumberFormatIsValidNumber004 ' + value);
      expect(value).assertTrue();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_005
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber005', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("CN");
      let value = phonenumberfmt.isValidNumber("158-2548-2312");
      console.log('testPhoneNumberFormatIsValidNumber005 ' + value);
      expect(value).assertTrue();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_006
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber006', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("CN");
      let value = phonenumberfmt.isValidNumber("158 2548 2312");
      console.log('testPhoneNumberFormatIsValidNumber006 ' + value);
      expect(value).assertTrue();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_007
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber007', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("CN");
      let value = phonenumberfmt.isValidNumber("+86-158-2548-2312");
      console.log('testPhoneNumberFormatIsValidNumber007 ' + value);
      expect(value).assertTrue();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_008
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber008', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("CN");
      let value = phonenumberfmt.isValidNumber("86-158-2548-2312");
      console.log('testPhoneNumberFormatIsValidNumber008 ' + value);
      expect(value).assertTrue();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_009
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber009', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("CN");
      let value = phonenumberfmt.isValidNumber("86 158 2548 2312");
      console.log('testPhoneNumberFormatIsValidNumber009 ' + value);
      expect(value).assertTrue();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_010
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber010', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("CN");
      let value = phonenumberfmt.isValidNumber("+86 158 2548 2312");
      console.log('testPhoneNumberFormatIsValidNumber010 ' + value);
      expect(value).assertTrue();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_011
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber011', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("CN");
      let value = phonenumberfmt.isValidNumber("tel:+86 158 2548 2312");
      console.log('testPhoneNumberFormatIsValidNumber011 ' + value);
      expect(value).assertTrue();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_012
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber012', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("CN");
      let value = phonenumberfmt.isValidNumber("tel:+86-158-2548-2312");
      console.log('testPhoneNumberFormatIsValidNumber012 ' + value);
      expect(value).assertTrue();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_013
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber013', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("CN");
      let value = phonenumberfmt.isValidNumber("tel:+8615825482312");
      console.log('testPhoneNumberFormatIsValidNumber013 ' + value);
      expect(value).assertTrue();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_014
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber014', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("CN");
      let value = phonenumberfmt.isValidNumber("tel:8615825482312");
      console.log('testPhoneNumberFormatIsValidNumber014 ' + value);
      expect(value).assertTrue();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_015
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber015', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("CN");
      let value = phonenumberfmt.isValidNumber("tel:15825482312");
      console.log('testPhoneNumberFormatIsValidNumber015 ' + value);
      expect(value).assertTrue();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_016
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber016', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("CN");
      let value = phonenumberfmt.isValidNumber("tel:158 2548 2312");
      console.log('testPhoneNumberFormatIsValidNumber016 ' + value);
      expect(value).assertTrue();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_017
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber017', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("CN");
      let value = phonenumberfmt.isValidNumber("tel:158-2548-2312");
      console.log('testPhoneNumberFormatIsValidNumber017 ' + value);
      expect(value).assertTrue();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_018
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber018', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("CN");
      let value = phonenumberfmt.isValidNumber("0755-61000887");
      console.log('testPhoneNumberFormatIsValidNumber018 ' + value);
      expect(value).assertTrue();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_019
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber019', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("CN");
      let value = phonenumberfmt.isValidNumber("075561000887");
      console.log('testPhoneNumberFormatIsValidNumber019 ' + value);
      expect(value).assertTrue();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_020
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber020', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("CN");
      let value = phonenumberfmt.isValidNumber("0755 61000887");
      console.log('testPhoneNumberFormatIsValidNumber020 ' + value);
      expect(value).assertTrue();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_021
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber021', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("CN");
      let value = phonenumberfmt.isValidNumber("61000887");
      console.log('testPhoneNumberFormatIsValidNumber021 ' + value);
      expect(value).assertFalse();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_022
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber022', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("CN");
      let value = phonenumberfmt.isValidNumber("158312");
      console.log('testPhoneNumberFormatIsValidNumber022 ' + value);
      expect(value).assertFalse();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_023
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber023', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("CN");
      let value = phonenumberfmt.isValidNumber("1583125482312");
      console.log('testPhoneNumberFormatIsValidNumber023 ' + value);
      expect(value).assertFalse();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_024
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber024', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("CN");
      let value = phonenumberfmt.isValidNumber("1583125482a");
      console.log('testPhoneNumberFormatIsValidNumber024 ' + value);
      expect(value).assertFalse();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_025
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber025', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("CN");
      let value = phonenumberfmt.isValidNumber("not a number");
      console.log('testPhoneNumberFormatIsValidNumber025 ' + value);
      expect(value).assertFalse();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_026
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber026', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("US");
      let value = phonenumberfmt.isValidNumber("6262023375");
      console.log('testPhoneNumberFormatIsValidNumber026 ' + value);
      expect(value).assertTrue();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_027
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber027', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("US");
      let value = phonenumberfmt.isValidNumber("626202337");
      console.log('testPhoneNumberFormatIsValidNumber027 ' + value);
      expect(value).assertFalse();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_028
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber028', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("US");
      let value = phonenumberfmt.isValidNumber("62620233756");
      console.log('testPhoneNumberFormatIsValidNumber028 ' + value);
      expect(value).assertFalse();
    })

    /* *
    * @tc.number  TEST_ISVALIDNUMBER_029
    * @tc.name    test isValidNumber method
    * @tc.desc    test a phoneNumber is valid or not
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatIsValidNumber029', 0, () => {
      let phonenumberfmt = new I18n.PhoneNumberFormat("US");
      let value = phonenumberfmt.isValidNumber("626202337a");
      console.log('testPhoneNumberFormatIsValidNumber029 ' + value);
      expect(value).assertFalse();
    })

    /* *
    * @tc.number  TEST_FORMAT_001
    * @tc.name    test format method
    * @tc.desc    format phoneNumber
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatFormat001', 0, () => {
      let phonenumberfmt: I18n.PhoneNumberFormat = new I18n.PhoneNumberFormat("CN");
      let value: string = phonenumberfmt.format("15825482312");
      console.log('testPhoneNumberFormatFormat001 ' + value);
      expect(value).assertEqual("158 2548 2312");
    })

    /* *
    * @tc.number  TEST_FORMAT_002
    * @tc.name    test format method
    * @tc.desc    format phoneNumber
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatFormat002', 0, () => {
      let phonenumberfmt: I18n.PhoneNumberFormat = new I18n.PhoneNumberFormat("US");
      let value: string = phonenumberfmt.format("6262023375");
      console.log('testPhoneNumberFormatFormat002 ' + value);
      expect(value).assertEqual("(626) 202-3375");
    })

    /* *
    * @tc.number  TEST_FORMAT_003
    * @tc.name    test format method
    * @tc.desc    format phoneNumber
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatFormat003', 0, () => {
      let phonenumberfmt: I18n.PhoneNumberFormat = new I18n.PhoneNumberFormat("CN", {
        'type': 'NATIONAL'
      });
      let value: string = phonenumberfmt.format("15825482312");
      console.log('testPhoneNumberFormatFormat003 ' + value);
      expect(value).assertEqual("158 2548 2312");
    })

    /* *
    * @tc.number  TEST_FORMAT_004
    * @tc.name    test format method
    * @tc.desc    format phoneNumber
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatFormat004', 0, () => {
      let phonenumberfmt: I18n.PhoneNumberFormat = new I18n.PhoneNumberFormat("CN", {
        'type': 'NATIONAL'
      });
      let value: string = phonenumberfmt.format("1582548231");
      console.log('testPhoneNumberFormatFormat004 ' + value);
      expect(value).assertEqual("1582548231");
    })

    /* *
    * @tc.number  TEST_FORMAT_005
    * @tc.name    test format method
    * @tc.desc    format phoneNumber
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatFormat005', 0, () => {
      let phonenumberfmt: I18n.PhoneNumberFormat = new I18n.PhoneNumberFormat("CN", {
        'type': 'NATIONAL'
      });
      let value: string = phonenumberfmt.format("158254823123");
      console.log('testPhoneNumberFormatFormat005 ' + value);
      expect(value).assertEqual("015 825 482 3123");
    })

    /* *
    * @tc.number  TEST_FORMAT_006
    * @tc.name    test format method
    * @tc.desc    format phoneNumber
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatFormat006', 0, () => {
      let phonenumberfmt: I18n.PhoneNumberFormat = new I18n.PhoneNumberFormat("CN", {
        'type': 'NATIONAL'
      });
      let value: string = phonenumberfmt.format("158 2548 2312");
      console.log('testPhoneNumberFormatFormat006 ' + value);
      expect(value).assertEqual("158 2548 2312");
    })

    /* *
    * @tc.number  TEST_FORMAT_007
    * @tc.name    test format method
    * @tc.desc    format phoneNumber
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatFormat007', 0, () => {
      let phonenumberfmt: I18n.PhoneNumberFormat = new I18n.PhoneNumberFormat("CN", {
        'type': 'INTERNATIONAL'
      });
      let value: string = phonenumberfmt.format("15825482312");
      console.log('testPhoneNumberFormatFormat007 ' + value);
      expect(value).assertEqual("+86 158 2548 2312");
    })

    /* *
    * @tc.number  TEST_FORMAT_008
    * @tc.name    test format method
    * @tc.desc    format phoneNumber
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatFormat008', 0, () => {
      let phonenumberfmt: I18n.PhoneNumberFormat = new I18n.PhoneNumberFormat("CN", {
        'type': 'RFC3966'
      });
      let value: string = phonenumberfmt.format("15825482312");
      console.log('testPhoneNumberFormatFormat008 ' + value);
      expect(value).assertEqual("tel:+86-158-2548-2312");
    })

    /* *
    * @tc.number  TEST_FORMAT_009
    * @tc.name    test format method
    * @tc.desc    format phoneNumber
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatFormat009', 0, () => {
      let phonenumberfmt: I18n.PhoneNumberFormat = new I18n.PhoneNumberFormat("CN", {
        'type': 'E164'
      });
      let value: string = phonenumberfmt.format("15825482312");
      console.log('testPhoneNumberFormatFormat009 ' + value);
      expect(value).assertEqual("+8615825482312");
    })

    /* *
    * @tc.number  TEST_FORMAT_010
    * @tc.name    test format method
    * @tc.desc    format phoneNumber
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatFormat010', 0, () => {
      let phonenumberfmt: I18n.PhoneNumberFormat = new I18n.PhoneNumberFormat("US", {
        'type': 'NATIONAL'
      });
      let value: string = phonenumberfmt.format("6262023376");
      console.log('testPhoneNumberFormatFormat010 ' + value);
      expect(value).assertEqual("(626) 202-3376");
    })

    /* *
    * @tc.number  TEST_FORMAT_011
    * @tc.name    test format method
    * @tc.desc    format phoneNumber
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatFormat011', 0, () => {
      let phonenumberfmt: I18n.PhoneNumberFormat = new I18n.PhoneNumberFormat("US", {
        'type': 'INTERNATIONAL'
      });
      let value: string = phonenumberfmt.format("6262023376");
      console.log('testPhoneNumberFormatFormat011 ' + value);
      expect(value).assertEqual("+1 626-202-3376");
    })

    /* *
    * @tc.number  TEST_FORMAT_012
    * @tc.name    test format method
    * @tc.desc    format phoneNumber
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatFormat012', 0, () => {
      let phonenumberfmt: I18n.PhoneNumberFormat = new I18n.PhoneNumberFormat("US", {
        'type': 'RFC3966'
      });
      let value: string = phonenumberfmt.format("6262023376");
      console.log('testPhoneNumberFormatFormat012 ' + value);
      expect(value).assertEqual("tel:+1-626-202-3376");
    })

    /* *
    * @tc.number  TEST_FORMAT_013
    * @tc.name    test format method
    * @tc.desc    format phoneNumber
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatFormat013', 0, () => {
      let phonenumberfmt: I18n.PhoneNumberFormat = new I18n.PhoneNumberFormat("US", {
        'type': 'E164'
      });
      let value: string = phonenumberfmt.format("6262023376");
      console.log('testPhoneNumberFormatFormat013 ' + value);
      expect(value).assertEqual("+16262023376");
    })

    /* *
    * @tc.number  TEST_FORMAT_014
    * @tc.name    test format method
    * @tc.desc    format phoneNumber
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatFormat014', 0, () => {
      let phonenumberfmt: I18n.PhoneNumberFormat = new I18n.PhoneNumberFormat("CN");
      let value: string = phonenumberfmt.format("158****2312");
      console.log('testPhoneNumberFormatFormat014 ' + value);
      expect(value).assertEqual("158 2312");
    })

    /* *
    * @tc.number  TEST_FORMAT_015
    * @tc.name    test format method 401 throw error code
    * @tc.desc    format phoneNumber
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testPhoneNumberFormatFormat015', 0, () => {
      try {
        let phonenumberfmt: I18n.PhoneNumberFormat = new I18n.PhoneNumberFormat("CN");
        // param number not correct,throw 401 error code
        let value: string = phonenumberfmt.format("not a number");
        console.log('testPhoneNumberFormatFormat015' + value);
      } catch (err) {
        console.log('testPhoneNumberFormatFormat015 err.code ' + err.code)
        console.log('testPhoneNumberFormatFormat015 err.message ' + err.message)
        expect(err.code === 401).assertTrue();
      }
    })

    /* *
    * @tc.number  TEST_GETTIMEINMILLIS_001
    * @tc.name    test getTimeInMillis method
    * @tc.desc    get the timeInMillis
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCalendarGetTimeInMilles001', 0, () => {
      let calendar = I18n.getCalendar("en-US", "gregory");
      calendar.setTime(10540800000);
      let value = calendar.getTimeInMillis()
      console.log('testCalendarGetTimeInMilles001 ' + value);
      expect(value).assertEqual(10540800000);
    })

    /* *
    * @tc.number  TEST_CALENDARADD_001
    * @tc.name    test add method
    * @tc.desc    add calendar
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCalendarAdd001', 0, () => {
      let calendar = I18n.getCalendar('zh-CN');
      calendar.set(2021, 11, 11, 8, 0, 0);
      calendar.add('year', 8);
      let value = calendar.get('year');
      console.log('testCalendarAdd001 ' + value);
      expect(value).assertEqual(2029);
    })

    /* *
    * @tc.number  TEST_CALENDARADD_002
    * @tc.name    test add method
    * @tc.desc    add calendar
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCalendarAdd002', 0, () => {
      let calendar = I18n.getCalendar('zh-CN');
      calendar.set(2021, 11, 11, 8, 0, 0);
      calendar.add('month', 8);
      let value = calendar.get('month');
      console.log('testCalendarAdd002 ' + value);
      expect(value).assertEqual(7);
    })

    /* *
    * @tc.number  TEST_CALENDARADD_003
    * @tc.name    test add method
    * @tc.desc    add calendar
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCalendarAdd003', 0, () => {
      let calendar = I18n.getCalendar('zh-CN');
      calendar.set(2021, 11, 11, 8, 0, 0);
      calendar.add('week_of_year', 8);
      let value = calendar.get('week_of_year');
      console.log('testCalendarAdd003 ' + value);
      expect(value).assertEqual(6);
    })

    /* *
    * @tc.number  TEST_CALENDARADD_004
    * @tc.name    test add method
    * @tc.desc    add calendar
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCalendarAdd004', 0, () => {
      let calendar = I18n.getCalendar('zh-CN');
      calendar.set(2021, 11, 11, 8, 0, 0);
      calendar.add('week_of_month', 8);
      let value = calendar.get('week_of_month');
      console.log('testCalendarAdd004 ' + value);
      expect(value).assertEqual(1);
    })

    /* *
    * @tc.number  TEST_CALENDARADD_005
    * @tc.name    test add method
    * @tc.desc    add calendar
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCalendarAdd005', 0, () => {
      let calendar = I18n.getCalendar('zh-CN');
      calendar.set(2021, 11, 11, 8, 0, 0);
      calendar.add('date', 8);
      let value = calendar.get('date');
      console.log('testCalendarAdd005 ' + value);
      expect(value).assertEqual(19);
    })

    /* *
    * @tc.number  TEST_CALENDARADD_006
    * @tc.name    test add method
    * @tc.desc    add calendar
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCalendarAdd006', 0, () => {
      let calendar = I18n.getCalendar('zh-CN');
      calendar.set(2021, 11, 11, 8, 0, 0);
      calendar.add('day_of_year', 8);
      let value = calendar.get('day_of_year');
      console.log('testCalendarAdd006 ' + value);
      expect(value).assertEqual(353);
    })

    /* *
    * @tc.number  TEST_CALENDARADD_007
    * @tc.name    test add method
    * @tc.desc    add calendar
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCalendarAdd007', 0, () => {
      let calendar = I18n.getCalendar('zh-CN');
      calendar.set(2021, 11, 11, 8, 0, 0);
      calendar.add('day_of_week', 8);
      let value = calendar.get('day_of_week');
      console.log('testCalendarAdd007 ' + value);
      expect(value).assertEqual(1);
    })

    /* *
    * @tc.number  TEST_CALENDARADD_008
    * @tc.name    test add method
    * @tc.desc    add calendar
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCalendarAdd008', 0, () => {
      let calendar = I18n.getCalendar('zh-CN');
      calendar.set(2021, 11, 11, 8, 0, 0);
      calendar.add('day_of_week_in_month', 8);
      let value = calendar.get('day_of_week_in_month');
      console.log('testCalendarAdd008 ' + value);
      expect(value).assertEqual(1);
    })

    /* *
    * @tc.number  TEST_CALENDARADD_009
    * @tc.name    test add method
    * @tc.desc    add calendar
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCalendarAdd009', 0, () => {
      let calendar = I18n.getCalendar('zh-CN');
      calendar.set(2021, 11, 11, 8, 0, 0);
      calendar.add('hour', 8);
      let value = calendar.get('hour');
      console.log('testCalendarAdd009 ' + value);
      expect(value).assertEqual(4);
    })

    /* *
    * @tc.number  TEST_CALENDARADD_010
    * @tc.name    test add method
    * @tc.desc    add calendar
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCalendarAdd010', 0, () => {
      let calendar = I18n.getCalendar('zh-CN');
      calendar.set(2021, 11, 11, 8, 0, 0);
      calendar.add('hour_of_day', 8);
      let value = calendar.get('hour_of_day');
      console.log('testCalendarAdd010 ' + value);
      expect(value).assertEqual(16);
    })

    /* *
    * @tc.number  TEST_CALENDARADD_011
    * @tc.name    test add method
    * @tc.desc    add calendar
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCalendarAdd011', 0, () => {
      let calendar = I18n.getCalendar('zh-CN');
      calendar.set(2021, 11, 11, 8, 0, 0);
      calendar.add('minute', 8);
      let value = calendar.get('minute');
      console.log('testCalendarAdd011 ' + value);
      expect(value).assertEqual(8);
    })

    /* *
    * @tc.number  TEST_CALENDARADD_012
    * @tc.name    test add method
    * @tc.desc    add calendar
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCalendarAdd012', 0, () => {
      let calendar = I18n.getCalendar('zh-CN');
      calendar.set(2021, 11, 11, 8, 0, 0);
      calendar.add('second', 8);
      let value = calendar.get('second');
      console.log('testCalendarAdd012 ' + value);
      expect(value).assertEqual(8);
    })

    /* *
    * @tc.number  TEST_CALENDARADD_013
    * @tc.name    test add method
    * @tc.desc    add calendar
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCalendarAdd013', 0, () => {
      let calendar = I18n.getCalendar('zh-CN');
      calendar.setTime(10540800000);
      calendar.add('millisecond', 8);
      let value = calendar.getTimeInMillis();
      console.log('testCalendarAdd013 ' + value);
      expect(value).assertEqual(10540800008);
    })

    /* *
    * @tc.number  TEST_CALENDARADD_014
    * @tc.name    test add method throw 401 error code
    * @tc.desc    add calendar
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCalendarAdd014', 0, () => {
      try {
        let calendar = I18n.getCalendar("zh-CN");
        // param field not correct,throw 890001 error code
        calendar.add('day', 1)
      } catch (err) {
        console.log('testCalendarAdd014 err.code ' + err.code)
        console.log('testCalendarAdd014 err.message ' + err.message)
        expect(err.code == 890001).assertTrue();
      }
    })


    console.log('*************end I18NTest*************');
  })
}