import Intl from '@ohos.intl';
import {describe,beforeAll,beforeEach,afterEach,afterAll,it,expect}from 'deccjsunit/index'
describe('intlDateTimeFormatTest', function () {
    console.log('*******  start IntlLocale_Test ******')

    /* *
    * @tc.number ARK_INTL_JS_DATETIME_001
    * @tc.name  the locale in  en-Latn-GB
    * @tc.desc check the locale in en-Latn-GB
    */
    it('locale_test_001', 0, function () {
        let locale = new Intl.Locale('en-Latn-GB');
        console.log('locale_test_001 ' + locale.language);
        expect(locale.language).assertEqual('en');
    })

})