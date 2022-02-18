
/*创建排序对象
 * */
import Intl from '@ohos.intl';
import {describe,beforeAll,beforeEach,afterEach,afterAll,it,expect}from 'deccjsunit/index'
describe('intlDateTimeFormatTest', function () {
    console.log("*******test start*******")

    /* *
    * @tc.number ARK_INTL_JS_DATETIME_004
    * @tc.name  the locale in  de
    * @tc.desc check the sort in de
    */
    it('collator_info_test_004', 0, function () {
       var collator1= new Intl.Collator('de').compare('ä', 'z');
       console.log(collator1);
       expect(collator1).assertEqual(-1);

       var collator2= new Intl.Collator('sv').compare('ä', 'z');
       console.log(collator2);
       expect(collator2).assertEqual(1);
    })

    /* *
    * @tc.number ARK_INTL_JS_DATETIME_005
    * @tc.name  the locale in  de and sv
    * @tc.desc check the sort in de and sv
    */
    it('collator_info_test_005', 0, function () {
        var collator1= new Intl.Collator('de',{sensitivity:'base'}).compare('ä', 'a');
        console.log(collator1);

        var collator2= new Intl.Collator('sv',{sensitivity:'base'}).compare('ä', 'a');
        console.log(collator2);
        expect(collator1).assertEqual(0);
        expect(collator2).assertEqual(1);
    })

    /* *
    * @tc.number ARK_INTL_JS_DATETIME_006
    * @tc.name  the locale in  zh-Hans
    * @tc.desc check the resolvedOptions of collator
    */
    it('collator_info_test_006', 0, function () {
        var collator = new Intl.Collator("zh-Hans",{sensitivity:'base',caseFirst:'upper',ignorePunctuation:'true'});
        var options = collator.resolvedOptions();
        console.log("collator_info_test_006:",options.caseFirst);
        expect(options.caseFirst).assertEqual('upper');
    })
    /* *
    * @tc.number ARK_INTL_JS_DATETIME_007
    * @tc.name  the locale in  zh-Hans
    * @tc.desc check the resolvedOptions of collator
    */
    it('collator_info_test_007', 0, function () {
        var collator = new Intl.Collator("zh-Hans",{sensitivity:'base',caseFirst:'upper',ignorePunctuation:'true'});
        var options = collator.resolvedOptions();
        console.log("collator_info_test_007:",options.sensitivity);
        expect(options.sensitivity).assertEqual('base');
    })

})
