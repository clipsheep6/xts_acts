import resourceManager from '@ohos.resourceManager'
import { describe, beforeAll, it, expect } from '@ohos/hypium'
import { BusinessError } from '@ohos.base';
import common from '@ohos.app.ability.common';
import AbilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';

let abilityDelegatorRegistry = AbilityDelegatorRegistry.getAbilityDelegator()
let context: common.Context = abilityDelegatorRegistry.getAppContext()
context = context.createModuleContext("entry_test")

export default function resourceManagerTest() {
  describe('resourceManagerTest', () => {

    console.log('*************start resourceManagerTest*************');

    /* *
    * @tc.number  TEST_GETMEDIACONTENTRESIDCALLBACK_001
    * @tc.name    test getMediaContent method in callback mode
    * @tc.desc    get the media in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentResIdCallback001', 0, async (done: Function) => {
      context.resourceManager.getMediaContent($r('app.media.icon').id, 0, (err: BusinessError, value: Uint8Array) => {
        if (!err) {
          console.log('testGetMediaContentResIdCallback001 ' + value);
          console.log('testGetMediaContentResIdCallback001 ' + typeof value);
          expect(value !== undefined).assertTrue()
        } else {
          console.log('testGetMediaContentResIdCallback001 err.code ' + err.code);
          console.log('testGetMediaContentResIdCallback001 err.message ' + err.message);
        }
        done()
      })
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTRESIDCALLBACK_002
    * @tc.name    test getMediaContent method in callback mode
    * @tc.desc    get the media in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentResIdCallback002', 0, async (done: Function) => {
      context.resourceManager.getMediaContent($r('app.media.icon').id, 120, (err: BusinessError, value: Uint8Array) => {
        if (!err) {
          console.log('testGetMediaContentResIdCallback002 ' + value);
          console.log('testGetMediaContentResIdCallback002 ' + typeof value);
          expect(value !== undefined).assertTrue()
          done();
        } else {
          console.log('testGetMediaContentResIdCallback002 err.code ' + err.code);
          console.log('testGetMediaContentResIdCallback002 err.message ' + err.message);
          done()
        }
      })
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTRESIDCALLBACK_003
    * @tc.name    test getMediaContent method in callback mode
    * @tc.desc    get the media in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentResIdCallback003', 0, async (done: Function) => {
      context.resourceManager.getMediaContent($r('app.media.test').id, 0, (err: BusinessError, value: Uint8Array) => {
        if (!err) {
          console.log('testGetMediaContentResIdCallback003 ' + value);
          console.log('testGetMediaContentResIdCallback003 ' + typeof value);
          expect(value !== undefined).assertTrue()
          done();
        } else {
          console.log('testGetMediaContentResIdCallback003 err.code ' + err.code);
          console.log('testGetMediaContentResIdCallback003 err.message ' + err.message);
          done()
        }
      })
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTRESIDCALLBACK_004
    * @tc.name    test getMediaContent method in callback mode throw 9001001 error code
    * @tc.desc    get the media in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentResIdCallback004', 0, async (done: Function) => {
      context.resourceManager.getMediaContent(111, 0, (err: BusinessError, value: Uint8Array) => {
        if (err != null) {
          console.log('testGetMediaContentResIdCallback004 err.code ' + err.code);
          console.log('testGetMediaContentResIdCallback004 err.message ' + err.message);
          expect(err.code == 9001001).assertTrue();
          done();
        } else {
          console.log('testGetMediaContentResIdCallback004 ' + value);
          console.log('testGetMediaContentResIdCallback004 ' + typeof value);
          expect(value !== undefined).assertTrue()
          done();
        }
      })
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTRESIDPROMISE_001
    * @tc.name    test getMediaContent method in promise mode
    * @tc.desc    get the media in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentResIdPromise001', 0, async (done: Function) => {
      context.resourceManager.getMediaContent($r('app.media.icon').id, 0).then((value: Uint8Array) => {
        console.log('testGetMediaContentResIdPromise001 ' + value);
        console.log('testGetMediaContentResIdPromise001 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetMediaContentResIdPromise001 err.code " + err.code);
        console.log("testGetMediaContentResIdPromise001 err.message " + err.message);
        done()
      });
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTRESIDPROMISE_002
    * @tc.name    test getMediaContent method in promise mode
    * @tc.desc    get the media in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentResIdPromise002', 0, async (done: Function) => {
      context.resourceManager.getMediaContent($r('app.media.icon').id, 120).then((value: Uint8Array) => {
        console.log('testGetMediaContentResIdPromise002 ' + value);
        console.log('testGetMediaContentResIdPromise002 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetMediaContentResIdPromise002 err.code " + err.code);
        console.log("testGetMediaContentResIdPromise002 err.message " + err.message);
        done();
      });
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTRESIDPROMISE_003
    * @tc.name    test getMediaContent method in promise mode
    * @tc.desc    get the media in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentResIdPromise003', 0, async (done: Function) => {
      context.resourceManager.getMediaContent($r('app.media.test').id, 0).then((value: Uint8Array) => {
        console.log('testGetMediaContentResIdPromise003 ' + value);
        console.log('testGetMediaContentResIdPromise003 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetMediaContentResIdPromise003 err.code " + err.code);
        console.log("testGetMediaContentResIdPromise003 err.message " + err.message);
        done();
      });
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTRESIDPROMISE_004
    * @tc.name    test getMediaContent method in promise mode throw 9001001 code err
    * @tc.desc    get the media in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentResIdPromise004', 0, async (done: Function) => {
      context.resourceManager.getMediaContent(111, 0).then((value: Uint8Array) => {
        console.log('testGetMediaContentResIdPromise004 ' + value);
        console.log('testGetMediaContentResIdPromise004 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetMediaContentResIdPromise004 err.code " + err.code);
        console.log("testGetMediaContentResIdPromise004 err.message " + err.message);
        expect(err.code == 9001001).assertTrue();
        done();
      });
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTRESOURCECALLBACK_001
    * @tc.name    test getMediaContent method in callback mode
    * @tc.desc    get the media in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentResourceCallback001', 0, async (done: Function) => {
      context.resourceManager.getMediaContent({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.media.icon').id
      }, 0, (err: BusinessError, value: Uint8Array) => {
        console.log('testGetMediaContentResourceCallback001 ' + value);
        console.log('testGetMediaContentResourceCallback001 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      })
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTRESOURCECALLBACK_002
    * @tc.name    test getMediaContent method in callback mode
    * @tc.desc    get the media in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentResourceCallback002', 0, async (done: Function) => {
      context.resourceManager.getMediaContent({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.media.icon').id
      }, 120, (err: BusinessError, value: Uint8Array) => {
        console.log('testGetMediaContentResourceCallback002 ' + value);
        console.log('testGetMediaContentResourceCallback002 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      })
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTRESOURCECALLBACK_003
    * @tc.name    test getMediaContent method in callback mode
    * @tc.desc    get the media in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentResourceCallback003', 0, async (done: Function) => {
      context.resourceManager.getMediaContent({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.media.test').id
      }, 0, (err: BusinessError, value: Uint8Array) => {
        console.log('testGetMediaContentResourceCallback003 ' + value);
        console.log('testGetMediaContentResourceCallback003 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      })
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTRESOURCECALLBACK_004
    * @tc.name    test getMediaContent method in callback mode throw 9001001 error code
    * @tc.desc    get the media in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentResourceCallback004', 0, async (done: Function) => {
      context.resourceManager.getMediaContent({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: 1111
      }, 0, (err: BusinessError, value: Uint8Array) => {
        if (!err) {
          console.log('testGetMediaContentResourceCallback004 ' + value);
          console.log('testGetMediaContentResourceCallback004 ' + typeof value);
          expect(value !== undefined).assertTrue()
          done();
        } else {
          console.log("testGetMediaContentResourceCallback004 err.code " + err.code);
          console.log("testGetMediaContentResourceCallback004 err.message " + err.message);
          expect(err.code == 9001001).assertTrue();
          done();
        }
      })
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTRESOURCEPROMISE_001
    * @tc.name    test getMediaContent method in promise mode
    * @tc.desc    get the media in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentResourcePromise001', 0, async (done: Function) => {
      context.resourceManager.getMediaContent({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.media.icon').id
      }, 0).then((value: Uint8Array) => {
        console.log("testGetMediaContentResourcePromise001 " + value);
        console.log("testGetMediaContentResourcePromise001 " + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetMediaContentResourcePromise001 err.code " + err.code);
        console.log("testGetMediaContentResourcePromise001 err.message " + err.message);
        done();
      });
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTRESOURCEPROMISE_002
    * @tc.name    test getMediaContent method in promise mode
    * @tc.desc    get the media in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentResourcePromise002', 0, async (done: Function) => {
      context.resourceManager.getMediaContent({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.media.icon').id
      }, 120).then((value: Uint8Array) => {
        console.log('testGetMediaContentResourcePromise002 ' + value);
        console.log('testGetMediaContentResourcePromise002 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetMediaContentResourcePromise002 err.code " + err.code);
        console.log("testGetMediaContentResourcePromise002 err.message " + err.message);
        done();
      });
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTRESOURCEPROMISE_003
    * @tc.name    test getMediaContent method in promise mode
    * @tc.desc    get the media in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentResourcePromise003', 0, async (done: Function) => {
      context.resourceManager.getMediaContent({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.media.test').id
      }, 0).then((value: Uint8Array) => {
        console.log('testGetMediaContentResourcePromise003 ' + value);
        console.log('testGetMediaContentResourcePromise003 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetMediaContentResourcePromise003 err.code " + err.code);
        console.log("testGetMediaContentResourcePromise003 err.message " + err.message);
        done();
      });
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTRESOURCEPROMISE_004
    * @tc.name    test getMediaContent method in promise mode throw 9001001 error code
    * @tc.desc    get the media in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentResourcePromise004', 0, async (done: Function) => {
      context.resourceManager.getMediaContent({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: 1111
      }, 0).then((value: Uint8Array) => {
        console.log('testGetMediaContentResourcePromise004 ' + value);
        console.log('testGetMediaContentResourcePromise004 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetMediaContentResourcePromise004 err.code " + err.code);
        console.log("testGetMediaContentResourcePromise004 err.message " + err.message);
        expect(err.code == 9001001).assertTrue();
        done();
      });
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTBASE64RESIDCALLBACK_001
    * @tc.name    test getMediaContentBase64 method in callback mode
    * @tc.desc    get the media base64 in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentBase64ResIdCallback001', 0, async (done: Function) => {
      context.resourceManager.getMediaContentBase64($r('app.media.icon').id, 0, (err: BusinessError, value: string) => {
        console.log('testGetMediaContentBase64ResIdCallback001 ' + value);
        console.log('testGetMediaContentBase64ResIdCallback001 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      })
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTBASE64RESIDCALLBACK_002
    * @tc.name    test getMediaContentBase64 method in callback mode
    * @tc.desc    get the media base64 in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentBase64ResIdCallback002', 0, async (done: Function) => {
      context.resourceManager.getMediaContentBase64($r('app.media.icon')
        .id, 120, (err: BusinessError, value: string) => {
        console.log('testGetMediaContentBase64ResIdCallback002 ' + value);
        console.log('testGetMediaContentBase64ResIdCallback002 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      })
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTBASE64RESIDCALLBACK_003
    * @tc.name    test getMediaContentBase64 method in callback mode
    * @tc.desc    get the media base64 in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentBase64ResIdCallback003', 0, async (done: Function) => {
      context.resourceManager.getMediaContentBase64($r('app.media.test')
        .id, 0, (err: BusinessError, value: string) => {
        console.log('testGetMediaContentBase64ResIdCallback003 ' + value);
        console.log('testGetMediaContentBase64ResIdCallback003 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      })
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTBASE64RESIDCALLBACK_004
    * @tc.name    test getMediaContentBase64 method in callback mode throw 9001001 error code
    * @tc.desc    get the media base64 in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentBase64ResIdCallback004', 0, async (done: Function) => {
      context.resourceManager.getMediaContentBase64(1111, 0, (err: BusinessError, value: string) => {
        if (!err) {
          console.log('testGetMediaContentBase64ResIdCallback004 ' + value);
          console.log('testGetMediaContentBase64ResIdCallback004 ' + typeof value);
          expect(value !== undefined).assertTrue()
          done();
        } else {
          console.log("testGetMediaContentBase64ResIdCallback004 err.code " + err.code);
          console.log("testGetMediaContentBase64ResIdCallback004 err.message " + err.message);
          expect(err.code == 9001001).assertTrue();
          done();
        }
      })
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTBASE64RESIDPROMISE_001
    * @tc.name    test getMediaContentBase64 method in promise mode
    * @tc.desc    get the media base64 in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentBase64ResIdPromise001', 0, async (done: Function) => {
      context.resourceManager.getMediaContentBase64($r('app.media.icon').id, 0).then((value: string) => {
        console.log('testGetMediaContentBase64ResIdPromise001 ' + value);
        console.log('testGetMediaContentBase64ResIdPromise001 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetMediaContentBase64ResIdPromise001 err.code " + err.code);
        console.log("testGetMediaContentBase64ResIdPromise001 err.message " + err.message);
        done();
      });
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTBASE64RESIDPROMISE_002
    * @tc.name    test getMediaContentBase64 method in promise mode
    * @tc.desc    get the media base64 in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentBase64ResIdPromise002', 0, async (done: Function) => {
      context.resourceManager.getMediaContentBase64($r('app.media.icon').id, 120).then((value: string) => {
        console.log('testGetMediaContentBase64ResIdPromise002 ' + value);
        console.log('testGetMediaContentBase64ResIdPromise002 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetMediaContentBase64ResIdPromise002 err.code " + err.code);
        console.log("testGetMediaContentBase64ResIdPromise002 err.message " + err.message);
        done();
      });
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTBASE64RESIDPROMISE_003
    * @tc.name    test getMediaContentBase64 method in promise mode
    * @tc.desc    get the media base64 in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentBase64ResIdPromise003', 0, async (done: Function) => {
      context.resourceManager.getMediaContentBase64($r('app.media.test').id, 0).then((value: string) => {
        console.log('testGetMediaContentBase64ResIdPromise003 ' + value);
        console.log('testGetMediaContentBase64ResIdPromise003 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetMediaContentBase64ResIdPromise003 err.code " + err.code);
        console.log("testGetMediaContentBase64ResIdPromise003 err.message " + err.message);
        done();
      });
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTBASE64RESIDPROMISE_004
    * @tc.name    test getMediaContentBase64 method in promise mode throw 9001001 error code
    * @tc.desc    get the media base64 in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentBase64ResIdPromise004', 0, async (done: Function) => {
      context.resourceManager.getMediaContentBase64(1111, 0).then((value: string) => {
        console.log('testGetMediaContentBase64ResIdPromise004 ' + value);
        console.log('testGetMediaContentBase64ResIdPromise004 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetMediaContentBase64ResIdPromise004 err.code " + err.code);
        console.log("testGetMediaContentBase64ResIdPromise004 err.message " + err.message);
        expect(err.code == 9001001).assertTrue();
        done();
      });
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTBASE64RESOURCECALLBACK_001
    * @tc.name    test getMediaContentBase64 method in callback mode
    * @tc.desc    get the media base64 in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentBase64ResourceCallback001', 0, async (done: Function) => {
      context.resourceManager.getMediaContentBase64({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.media.icon').id
      }, 0, (err: BusinessError, value: string) => {
        console.log('testGetMediaContentBase64ResourceCallback001 ' + value);
        console.log('testGetMediaContentBase64ResourceCallback001 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      })
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTBASE64RESOURCECALLBACK_002
    * @tc.name    test getMediaContentBase64 method in callback mode
    * @tc.desc    get the media base64 in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentBase64ResourceCallback002', 0, async (done: Function) => {
      context.resourceManager.getMediaContentBase64({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.media.icon').id
      }, 120, (err: BusinessError, value: string) => {
        console.log('testGetMediaContentBase64ResourceCallback002 ' + value);
        console.log('testGetMediaContentBase64ResourceCallback002 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      })
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTBASE64RESOURCECALLBACK_003
    * @tc.name    test getMediaContentBase64 method in callback mode
    * @tc.desc    get the media base64 in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentBase64ResourceCallback003', 0, async (done: Function) => {
      context.resourceManager.getMediaContentBase64({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.media.test').id
      }, 0, (err: BusinessError, value: string) => {
        console.log('testGetMediaContentBase64ResourceCallback003 ' + value);
        console.log('testGetMediaContentBase64ResourceCallback003 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      })
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTBASE64RESOURCECALLBACK_004
    * @tc.name    test getMediaContentBase64 method in callback mode throw 9001001 error code
    * @tc.desc    get the media base64 in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentBase64ResourceCallback004', 0, async (done: Function) => {
      context.resourceManager.getMediaContentBase64({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: 1111
      }, 0, (err: BusinessError, value: string) => {
        if (!err) {
          console.log('testGetMediaContentBase64ResourceCallback004 ' + value);
          console.log('testGetMediaContentBase64ResourceCallback004 ' + typeof value);
          expect(value !== undefined).assertTrue()
          done();
        } else {
          console.log("testGetMediaContentBase64ResourceCallback004 err.code " + err.code);
          console.log("testGetMediaContentBase64ResourceCallback004 err.message " + err.message);
          expect(err.code == 9001001).assertTrue();
          done();
        }
      })
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTBASE64RESOURCEPROMISE_001
    * @tc.name    test getMediaContentBase64 method in promise mode
    * @tc.desc    get the media base64 in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentBase64ResourcePromise001', 0, async (done: Function) => {
      context.resourceManager.getMediaContentBase64({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.media.icon').id
      }, 0).then((value: string) => {
        console.log('testGetMediaContentBase64ResourcePromise001 ' + value);
        console.log('testGetMediaContentBase64ResourcePromise001 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetMediaContentBase64ResourcePromise001 err.code " + err.code);
        console.log("testGetMediaContentBase64ResourcePromise001 err.message " + err.message);
        done();
      });
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTBASE64RESOURCEPROMISE_002
    * @tc.name    test getMediaContentBase64 method in promise mode
    * @tc.desc    get the media base64 in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentBase64ResourcePromise002', 0, async (done: Function) => {
      context.resourceManager.getMediaContentBase64({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.media.icon').id
      }, 120).then((value: string) => {
        console.log('testGetMediaContentBase64ResourcePromise002 ' + value);
        console.log('testGetMediaContentBase64ResourcePromise002 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetMediaContentBase64ResourcePromise002 err.code " + err.code);
        console.log("testGetMediaContentBase64ResourcePromise002 err.message " + err.message);
        done();
      });
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTBASE64RESOURCEPROMISE_003
    * @tc.name    test getMediaContentBase64 method in promise mode
    * @tc.desc    get the media base64 in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentBase64ResourcePromise003', 0, async (done: Function) => {
      context.resourceManager.getMediaContentBase64({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.media.test').id
      }, 0).then((value: string) => {
        console.log('testGetMediaContentBase64ResourcePromise003 ' + value);
        console.log('testGetMediaContentBase64ResourcePromise003 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetMediaContentBase64ResourcePromise003 err.code " + err.code);
        console.log("testGetMediaContentBase64ResourcePromise003 err.message " + err.message);
        done();
      });
    })

    /* *
   * @tc.number  TEST_GETMEDIACONTENTBASE64RESOURCEPROMISE_004
   * @tc.name    test getMediaContentBase64 method in promise mode throw 9001001 error code
   * @tc.desc    get the media base64 in promise mode
   * @tc.size:   MediumTest
   * @tc.type    method
   * @tc.level   level 2
   */
    it('testGetMediaContentBase64ResourcePromise004', 0, async (done: Function) => {
      context.resourceManager.getMediaContentBase64({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: 1111
      }, 0).then((value: string) => {
        console.log('testGetMediaContentBase64ResourcePromise004 ' + value);
        console.log('testGetMediaContentBase64ResourcePromise004 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetMediaContentBase64ResourcePromise004 err.code " + err.code);
        console.log("testGetMediaContentBase64ResourcePromise004 err.message " + err.message);
        expect(err.code == 9001001).assertTrue();
        done();
      });
    })

    /* *
    * @tc.number  TEST_GETMEDIABYNAMECALLBACK_001
    * @tc.name    test getMediaByName method in callback mode
    * @tc.desc    get the media in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaByNameCallback001', 0, async (done: Function) => {
      context.resourceManager.getMediaByName('icon', 0, (err: BusinessError, value: Uint8Array) => {
        console.log('testGetMediaByNameCallback001 ' + value)
        console.log('testGetMediaByNameCallback001 ' + typeof value)
        expect(value !== undefined).assertTrue()
        done();
      })
    })

    /* *
    * @tc.number  TEST_GETMEDIABYNAMECALLBACK_002
    * @tc.name    test getMediaByName method in callback mode
    * @tc.desc    get the media in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaByNameCallback002', 0, async (done: Function) => {
      context.resourceManager.getMediaByName('icon', 120, (err: BusinessError, value: Uint8Array) => {
        console.log('testGetMediaByNameCallback002 ' + value)
        console.log('testGetMediaByNameCallback002 ' + typeof value)
        expect(value !== undefined).assertTrue()
        done();
      })
    })

    /* *
    * @tc.number  TEST_GETMEDIABYNAMECALLBACK_003
    * @tc.name    test getMediaByName method in callback mode
    * @tc.desc    get the media in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaByNameCallback003', 0, async (done: Function) => {
      context.resourceManager.getMediaByName('test', 0, (err: BusinessError, value: Uint8Array) => {
        console.log('testGetMediaByNameCallback003 ' + value)
        console.log('testGetMediaByNameCallback003 ' + typeof value)
        expect(value !== undefined).assertTrue()
        done();
      })
    })

    /* *
    * @tc.number  TEST_GETMEDIABYNAMECALLBACK_004
    * @tc.name    test getMediaByName method in callback mode throw 9001003 error code
    * @tc.desc    get the media in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaByNameCallback004', 0, async (done: Function) => {
      context.resourceManager.getMediaByName('notexist', 0, (err: BusinessError, value: Uint8Array) => {
        if (!err) {
          console.log('testGetMediaByNameCallback004 ' + value)
          console.log('testGetMediaByNameCallback004 ' + typeof value)
          expect(value !== undefined).assertTrue()
          done();
        } else {
          console.log("testGetMediaByNameCallback004 err.code " + err.code);
          console.log("testGetMediaByNameCallback004 err.message " + err.message);
          expect(err.code == 9001003).assertTrue();
          done();
        }
      })
    })

    /* *
    * @tc.number  TEST_GETMEDIABYNAMEPROMISE_001
    * @tc.name    test getMediaByName method in promise mode
    * @tc.desc    get the media in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaByNamePromise001', 0, async (done: Function) => {
      context.resourceManager.getMediaByName('icon', 0).then((value: Uint8Array) => {
        console.log('testGetMediaByNamePromise001 ' + value)
        console.log('testGetMediaByNamePromise001 ' + typeof value)
        expect(value !== undefined).assertTrue()
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetMediaByNamePromise001 err.code " + err.code);
        console.log("testGetMediaByNamePromise001 err.message " + err.message);
        done();
      });
    })

    /* *
    * @tc.number  TEST_GETMEDIABYNAMEPROMISE_002
    * @tc.name    test getMediaByName method in promise mode
    * @tc.desc    get the media in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaByNamePromise002', 0, async (done: Function) => {
      context.resourceManager.getMediaByName('icon', 120).then((value: Uint8Array) => {
        console.log('testGetMediaByNamePromise002 ' + value)
        console.log('testGetMediaByNamePromise002 ' + typeof value)
        expect(value !== undefined).assertTrue()
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetMediaByNamePromise002 err.code " + err.code);
        console.log("testGetMediaByNamePromise002 err.message " + err.message);
        done();
      });
    })

    /* *
    * @tc.number  TEST_GETMEDIABYNAMEPROMISE_003
    * @tc.name    test getMediaByName method in promise mode
    * @tc.desc    get the media in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaByNamePromise003', 0, async (done: Function) => {
      context.resourceManager.getMediaByName('test', 0).then((value: Uint8Array) => {
        console.log('testGetMediaByNamePromise003 ' + value)
        console.log('testGetMediaByNamePromise003 ' + typeof value)
        expect(value !== undefined).assertTrue()
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetMediaByNamePromise003 err.code " + err.code);
        console.log("testGetMediaByNamePromise003 err.message " + err.message);
        done();
      });
    })

    /* *
    * @tc.number  TEST_GETMEDIABYNAMEPROMISE_004
    * @tc.name    test getMediaByName method in promise mode throw 9001003 error code
    * @tc.desc    get the media in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaByNamePromise004', 0, async (done: Function) => {
      context.resourceManager.getMediaByName('notexist', 0).then((value: Uint8Array) => {
        console.log('testGetMediaByNamePromise004 ' + value)
        console.log('testGetMediaByNamePromise004 ' + typeof value)
        expect(value !== undefined).assertTrue()
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetMediaByNamePromise004 err.code " + err.code);
        console.log("testGetMediaByNamePromise004 err.message " + err.message);
        expect(err.code == 9001003).assertTrue();
        done();
      });
    })

    /* *
    * @tc.number  TEST_GETMEDIABYNAMESYNC_001
    * @tc.name    test getMediaByNameSync method
    * @tc.desc    get the media in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaByNameSync001', 0, async (done: Function) => {
      let value: Uint8Array = context.resourceManager.getMediaByNameSync('icon', 0)
      console.log('testGetMediaByNameSync001 ' + value)
      console.log('testGetMediaByNameSync001 ' + typeof value)
      expect(value !== undefined).assertTrue()
      done();
    })

    /* *
    * @tc.number  TEST_GETMEDIABYNAMESYNC_002
    * @tc.name    test getMediaByNameSync method
    * @tc.desc    get the media in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaByNameSync002', 0, async (done: Function) => {
      let value: Uint8Array = context.resourceManager.getMediaByNameSync('icon', 120)
      console.log('testGetMediaByNameSync002 ' + value)
      console.log('testGetMediaByNameSync002 ' + typeof value)
      expect(value !== undefined).assertTrue()
      done();
    })

    /* *
    * @tc.number  TEST_GETMEDIABYNAMESYNC_003
    * @tc.name    test getMediaByNameSync method
    * @tc.desc    get the media in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaByNameSync003', 0, async (done: Function) => {
      let value: Uint8Array = context.resourceManager.getMediaByNameSync('test', 0)
      console.log('testGetMediaByNameSync003 ' + value)
      console.log('testGetMediaByNameSync003 ' + typeof value)
      expect(value !== undefined).assertTrue()
      done();
    })

    /* *
    * @tc.number  TEST_GETMEDIABYNAMESYNC_004
    * @tc.name    test getMediaByNameSync method throw 9001003 error code
    * @tc.desc    get the media in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaByNameSync004', 0, async (done: Function) => {
      try {
        let value: Uint8Array = context.resourceManager.getMediaByNameSync('notexist', 0)
        console.log('testGetMediaByNameSync004 ' + value)
        console.log('testGetMediaByNameSync004 ' + typeof value)
        expect(value !== undefined).assertTrue()
        done();

      } catch (err) {
        console.log("testGetMediaByNameSync004 err.code " + err.code);
        console.log("testGetMediaByNameSync004 err.message " + err.message);
        expect(err.code == 9001003).assertTrue();
        done();
      }
    })

    /* *
    * @tc.number  TEST_GETMEDIABASE64BYNAMECALLBACK_001
    * @tc.name    test getMediaBase64ByName method in callback mode
    * @tc.desc    get the media base64 in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaBase64ByNameCallback001', 0, async (done: Function) => {
      context.resourceManager.getMediaBase64ByName('icon', 0, (err: BusinessError, value: string) => {
        console.log('testGetMediaBase64ByNameCallback001 ' + value);
        console.log('testGetMediaBase64ByNameCallback001 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      })
    })

    /* *
    * @tc.number  TEST_GETMEDIABASE64BYNAMECALLBACK_002
    * @tc.name    test getMediaBase64ByName method in callback mode
    * @tc.desc    get the media base64 in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaBase64ByNameCallback002', 0, async (done: Function) => {
      context.resourceManager.getMediaBase64ByName('icon', 120, (err: BusinessError, value: string) => {
        console.log('testGetMediaBase64ByNameCallback002 ' + value);
        console.log('testGetMediaBase64ByNameCallback002 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      })
    })

    /* *
    * @tc.number  TEST_GETMEDIABASE64BYNAMECALLBACK_003
    * @tc.name    test getMediaBase64ByName method in callback mode
    * @tc.desc    get the media base64 in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaBase64ByNameCallback003', 0, async (done: Function) => {
      context.resourceManager.getMediaBase64ByName('test', 0, (err: BusinessError, value: string) => {
        console.log('testGetMediaBase64ByNameCallback003 ' + value);
        console.log('testGetMediaBase64ByNameCallback003 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      })
    })

    /* *
    * @tc.number  TEST_GETMEDIABASE64BYNAMECALLBACK_004
    * @tc.name    test getMediaBase64ByName method in callback mode throw 9001003 error code
    * @tc.desc    get the media base64 in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaBase64ByNameCallback004', 0, async (done: Function) => {
      context.resourceManager.getMediaBase64ByName('notexist', 0, (err: BusinessError, value: string) => {
        if (!err) {
          console.log('testGetMediaBase64ByNameCallback004 ' + value);
          console.log('testGetMediaBase64ByNameCallback004 ' + typeof value);
          expect(value !== undefined).assertTrue()
          done();
        } else {
          console.log("testGetMediaBase64ByNameCallback004 err.code " + err.code);
          console.log("testGetMediaBase64ByNameCallback004 err.message " + err.message);
          expect(err.code == 9001003).assertTrue();
          done();
        }
      })
    })

    /* *
    * @tc.number  TEST_GETMEDIABASE64BYNAMEPROMISE_001
    * @tc.name    test getMediaBase64ByName method in promise mode
    * @tc.desc    get the media base64 in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaBase64ByNamePromise001', 0, async (done: Function) => {
      context.resourceManager.getMediaBase64ByName('icon', 0).then((value: string) => {
        console.log('testGetMediaBase64ByNamePromise001 ' + value);
        console.log('testGetMediaBase64ByNamePromise001 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetMediaBase64ByNamePromise001 err.code " + err.code);
        console.log("testGetMediaBase64ByNamePromise001 err.message " + err.message);
        done();
      });
    })

    /* *
    * @tc.number  TEST_GETMEDIABASE64BYNAMEPROMISE_002
    * @tc.name    test getMediaBase64ByName method in promise mode
    * @tc.desc    get the media base64 in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaBase64ByNamePromise002', 0, async (done: Function) => {
      context.resourceManager.getMediaBase64ByName('icon', 120).then((value: string) => {
        console.log('testGetMediaBase64ByNamePromise002 ' + value);
        console.log('testGetMediaBase64ByNamePromise002 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetMediaBase64ByNamePromise002 err.code " + err.code);
        console.log("testGetMediaBase64ByNamePromise002 err.message " + err.message);
        done();
      });
    })

    /* *
    * @tc.number  TEST_GETMEDIABASE64BYNAMEPROMISE_003
    * @tc.name    test getMediaBase64ByName method in promise mode
    * @tc.desc    get the media base64 in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaBase64ByNamePromise003', 0, async (done: Function) => {
      context.resourceManager.getMediaBase64ByName('test', 0).then((value: string) => {
        console.log('testGetMediaBase64ByNamePromise003 ' + value);
        console.log('testGetMediaBase64ByNamePromise003 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetMediaBase64ByNamePromise003 err.code " + err.code);
        console.log("testGetMediaBase64ByNamePromise003 err.message " + err.message);
        done();
      });
    })

    /* *
    * @tc.number  TEST_GETMEDIABASE64BYNAMEPROMISE_004
    * @tc.name    test getMediaBase64ByName method in promise mode throw 9001003 error code
    * @tc.desc    get the media base64 in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaBase64ByNamePromise004', 0, async (done: Function) => {
      context.resourceManager.getMediaBase64ByName('notexist', 0).then((value: string) => {
        console.log('testGetMediaBase64ByNamePromise004 ' + value);
        console.log('testGetMediaBase64ByNamePromise004 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetMediaBase64ByNamePromise004 err.code " + err.code);
        console.log("testGetMediaBase64ByNamePromise004 err.message " + err.message);
        expect(err.code == 9001003).assertTrue();
        done();
      });
    })

    /* *
    * @tc.number  TEST_GETMEDIABASE64BYNAMESYNC_001
    * @tc.name    test getMediaBase64ByNameSync method in sync mode
    * @tc.desc    get the media base64 in Sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaBase64ByNameSync001', 0, async (done: Function) => {
      let value: string = context.resourceManager.getMediaBase64ByNameSync('icon', 0)
      console.log('testGetMediaBase64ByNameSync001 ' + value);
      console.log('testGetMediaBase64ByNameSync001 ' + typeof value);
      expect(value !== undefined).assertTrue()
      done();
    })

    /* *
    * @tc.number  TEST_GETMEDIABASE64BYNAMESYNC_002
    * @tc.name    test getMediaBase64ByNameSync method in sync mode
    * @tc.desc    get the media base64 in Sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaBase64ByNameSync002', 0, async (done: Function) => {
      let value: string = context.resourceManager.getMediaBase64ByNameSync('icon', 120)
      console.log('testGetMediaBase64ByNameSync002 ' + value);
      console.log('testGetMediaBase64ByNameSync002 ' + typeof value);
      expect(value !== undefined).assertTrue()
      done();
    })

    /* *
    * @tc.number  TEST_GETMEDIABASE64BYNAMESYNC_003
    * @tc.name    test getMediaBase64ByNameSync method in sync mode
    * @tc.desc    get the media base64 in Sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaBase64ByNameSync003', 0, async (done: Function) => {
      let value: string = context.resourceManager.getMediaBase64ByNameSync('test', 0)
      console.log('testGetMediaBase64ByNameSync003 ' + value);
      console.log('testGetMediaBase64ByNameSync003 ' + typeof value);
      expect(value !== undefined).assertTrue()
      done();
    })

    /* *
    * @tc.number  TEST_GETMEDIABASE64BYNAMESYNC_004
    * @tc.name    test getMediaBase64ByNameSync method in sync mode throw 9001003 error code
    * @tc.desc    get the media base64 in Sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaBase64ByNameSync004', 0, async (done: Function) => {
      try {
        let value: string = context.resourceManager.getMediaBase64ByNameSync('notexist', 0)
        console.log('testGetMediaBase64ByNameSync004 ' + value);
        console.log('testGetMediaBase64ByNameSync004 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      } catch (err) {
        console.log("testGetMediaBase64ByNameSync004 err.code " + err.code);
        console.log("testGetMediaBase64ByNameSync004 err.message " + err.message);
        expect(err.code == 9001003).assertTrue();
        done();
      }
    })

    // /* *
    // * @tc.number  TEST_GETDRAWABLEDESCRIPTORRESID_001
    // * @tc.name    test getDrawableDescriptor method
    // * @tc.desc    get the drawable descriptor
    // * @tc.size:   MediumTest
    // * @tc.type    method
    // * @tc.level   level 2
    // */
    // it('testGetDrawableDescriptorResId001', 0, async () => {
    //   let value: DrawableDescriptor = context.resourceManager.getDrawableDescriptor($r('app.media.icon').id, 0)
    //   console.log('testGetDrawableDescriptorResId001 ' + value);
    //   console.log('testGetDrawableDescriptorResId001 ' + typeof value);
    //   expect(value !== undefined).assertTrue()
    // })
    //
    // /* *
    // * @tc.number  TEST_GETDRAWABLEDESCRIPTORRESID_002
    // * @tc.name    test getDrawableDescriptor method
    // * @tc.desc    get the drawable descriptor
    // * @tc.size:   MediumTest
    // * @tc.type    method
    // * @tc.level   level 2
    // */
    // it('testGetDrawableDescriptorResId002', 0, async () => {
    //   let value: DrawableDescriptor = context.resourceManager.getDrawableDescriptor($r('app.media.icon').id, 120)
    //   console.log('testGetDrawableDescriptorResId002 ' + value);
    //   console.log('testGetDrawableDescriptorResId002 ' + typeof value);
    //   expect(value !== undefined).assertTrue()
    // })
    //
    // /* *
    // * @tc.number  TEST_GETDRAWABLEDESCRIPTORRESID_003
    // * @tc.name    test getDrawableDescriptor method
    // * @tc.desc    get the drawable descriptor
    // * @tc.size:   MediumTest
    // * @tc.type    method
    // * @tc.level   level 2
    // */
    // it('testGetDrawableDescriptorResId003', 0, async () => {
    //   let value: DrawableDescriptor = context.resourceManager.getDrawableDescriptor($r('app.media.test').id, 0)
    //   console.log('testGetDrawableDescriptorResId003 ' + value);
    //   console.log('testGetDrawableDescriptorResId003 ' + typeof value);
    //   expect(value !== undefined).assertTrue()
    // })
    //
    // /* *
    // * @tc.number  TEST_GETDRAWABLEDESCRIPTORRESID_004
    // * @tc.name    test getDrawableDescriptor method throw 9001001 error code
    // * @tc.desc    get the drawable descriptor
    // * @tc.size:   MediumTest
    // * @tc.type    method
    // * @tc.level   level 2
    // */
    // it('testGetDrawableDescriptorResId004', 0, async (done: Function) => {
    //   try {
    //     let value: DrawableDescriptor = context.resourceManager.getDrawableDescriptor(1111, 0)
    //     console.log('testGetDrawableDescriptorResId004 ' + value);
    //     console.log('testGetDrawableDescriptorResId004 ' + typeof value);
    //     expect(value !== undefined).assertTrue()
    //   } catch (err) {
    //     console.log("testGetDrawableDescriptorResId004 err.code " + err.code);
    //     console.log("testGetDrawableDescriptorResId004 err.message " + err.message);
    //     expect(err.code == 9001001).assertTrue();
    //     done();
    //   }
    // })
    //
    // /* *
    // * @tc.number  TEST_GETDRAWABLEDESCRIPTORRESOURCE_001
    // * @tc.name    test getDrawableDescriptor method
    // * @tc.desc    get the drawable descriptor
    // * @tc.size:   MediumTest
    // * @tc.type    method
    // * @tc.level   level 2
    // */
    // it('testGetDrawableDescriptorResource001', 0, async () => {
    //   let value: DrawableDescriptor = context.resourceManager.getDrawableDescriptor({
    //     bundleName: "com.example.resourcemanagertest",
    //     moduleName: "entry_test",
    //     id: $r('app.media.icon').id
    //   }, 0)
    //   console.log('testGetDrawableDescriptorResource001 ' + value);
    //   console.log('testGetDrawableDescriptorResource001 ' + typeof value);
    //   expect(value !== undefined).assertTrue()
    // })
    //
    // /* *
    // * @tc.number  TEST_GETDRAWABLEDESCRIPTORRESOURCE_002
    // * @tc.name    test getDrawableDescriptor method
    // * @tc.desc    get the drawable descriptor
    // * @tc.size:   MediumTest
    // * @tc.type    method
    // * @tc.level   level 2
    // */
    // it('testGetDrawableDescriptorResource002', 0, async () => {
    //   let value: DrawableDescriptor = context.resourceManager.getDrawableDescriptor({
    //     bundleName: "com.example.resourcemanagertest",
    //     moduleName: "entry_test",
    //     id: $r('app.media.icon').id
    //   }, 120)
    //   console.log('testGetDrawableDescriptorResource002 ' + value);
    //   console.log('testGetDrawableDescriptorResource002 ' + typeof value);
    //   expect(value !== undefined).assertTrue()
    // })
    //
    // /* *
    // * @tc.number  TEST_GETDRAWABLEDESCRIPTORRESOURCE_003
    // * @tc.name    test getDrawableDescriptor method
    // * @tc.desc    get the drawable descriptor
    // * @tc.size:   MediumTest
    // * @tc.type    method
    // * @tc.level   level 2
    // */
    // it('testGetDrawableDescriptorResource003', 0, async () => {
    //   let value: DrawableDescriptor = context.resourceManager.getDrawableDescriptor({
    //     bundleName: "com.example.resourcemanagertest",
    //     moduleName: "entry_test",
    //     id: $r('app.media.test').id
    //   }, 0)
    //   console.log('testGetDrawableDescriptorResource003 ' + value);
    //   console.log('testGetDrawableDescriptorResource003 ' + typeof value);
    //   expect(value !== undefined).assertTrue()
    // })
    //
    // /* *
    // * @tc.number  TEST_GETDRAWABLEDESCRIPTORRESOURCE_004
    // * @tc.name    test getDrawableDescriptor method throw 9001001 error code
    // * @tc.desc    get the drawable descriptor
    // * @tc.size:   MediumTest
    // * @tc.type    method
    // * @tc.level   level 2
    // */
    // it('testGetDrawableDescriptorResource004', 0, async (done: Function) => {
    //   try {
    //     let value: DrawableDescriptor = context.resourceManager.getDrawableDescriptor({
    //       bundleName: "com.example.resourcemanagertest",
    //       moduleName: "entry_test",
    //       id: 1111
    //     }, 120)
    //     console.log('testGetDrawableDescriptorResource004 ' + value);
    //     console.log('testGetDrawableDescriptorResource004 ' + typeof value);
    //     expect(value !== undefined).assertTrue()
    //   } catch (err) {
    //     console.log("testGetDrawableDescriptorResource004 err.code " + err.code);
    //     console.log("testGetDrawableDescriptorResource004 err.message " + err.message);
    //     expect(err.code == 9001001).assertTrue();
    //     done();
    //   }
    // })
    //
    // /* *
    // * @tc.number  TEST_GETDRAWABLEDESCRIPTORBYNAME_001
    // * @tc.name    test getDrawableDescriptorByName method
    // * @tc.desc    get the drawable descriptor by name
    // * @tc.size:   MediumTest
    // * @tc.type    method
    // * @tc.level   level 2
    // */
    // it('testGetDrawableDescriptorByName001', 0, async () => {
    //   let value: DrawableDescriptor = context.resourceManager.getDrawableDescriptorByName('icon', 0)
    //   console.log('testGetDrawableDescriptorByName001 ' + value);
    //   console.log('testGetDrawableDescriptorByName001 ' + typeof value);
    //   expect(value !== undefined).assertTrue()
    // })
    //
    // /* *
    // * @tc.number  TEST_GETDRAWABLEDESCRIPTORBYNAME_002
    // * @tc.name    test getDrawableDescriptorByName method
    // * @tc.desc    get the drawable descriptor by name
    // * @tc.size:   MediumTest
    // * @tc.type    method
    // * @tc.level   level 2
    // */
    // it('testGetDrawableDescriptorByName002', 0, async () => {
    //   let value: DrawableDescriptor = context.resourceManager.getDrawableDescriptorByName('icon', 120)
    //   console.log('testGetDrawableDescriptorByName002 ' + value);
    //   console.log('testGetDrawableDescriptorByName002 ' + typeof value);
    //   expect(value !== undefined).assertTrue()
    // })
    //
    // /* *
    // * @tc.number  TEST_GETDRAWABLEDESCRIPTORBYNAME_003
    // * @tc.name    test getDrawableDescriptorByName method
    // * @tc.desc    get the drawable descriptor by name
    // * @tc.size:   MediumTest
    // * @tc.type    method
    // * @tc.level   level 2
    // */
    // it('testGetDrawableDescriptorByName003', 0, async () => {
    //   let value: DrawableDescriptor = context.resourceManager.getDrawableDescriptorByName('test', 0)
    //   console.log('testGetDrawableDescriptorByName003 ' + value);
    //   console.log('testGetDrawableDescriptorByName003 ' + typeof value);
    //   expect(value !== undefined).assertTrue()
    // })
    //
    // /* *
    // * @tc.number  TEST_GETDRAWABLEDESCRIPTORBYNAME_004
    // * @tc.name    test getDrawableDescriptorByName method throw 9001003 error code
    // * @tc.desc    get the drawable descriptor by name
    // * @tc.size:   MediumTest
    // * @tc.type    method
    // * @tc.level   level 2
    // */
    // it('testGetDrawableDescriptorByName004', 0, async (done: Function) => {
    //   try {
    //     let value: DrawableDescriptor = context.resourceManager.getDrawableDescriptorByName('notexist', 0)
    //     console.log('testGetDrawableDescriptorByName004 ' + value);
    //     console.log('testGetDrawableDescriptorByName004 ' + typeof value);
    //     expect(value !== undefined).assertTrue()
    //   } catch (err) {
    //     console.log("testGetDrawableDescriptorByName004 err.code " + err.code);
    //     console.log("testGetDrawableDescriptorByName004 err.message " + err.message);
    //     expect(err.code == 9001003).assertTrue();
    //     done();
    //   }
    // })

    /* *
    * @tc.number  TEST-GETRAWFILELISTCALLBACK_001
    * @tc.name    test getRawFileList method in callback mode
    * @tc.desc    get the rawFileList in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetRawFileListCallback001', 0, async (done: Function) => {
      context.resourceManager.getRawFileList('', (err: BusinessError, value: Array<string>) => {
        console.log('testGetRawFileListCallback001 ' + value);
        console.log('testGetRawFileListCallback001 ' + typeof value);
        console.log('testGetRawFileListCallback001 value.length ' + value.length);
        expect(value.length > 0).assertTrue();
        done();
      })
    })

    /* *
    * @tc.number  TEST-GETRAWFILELISTCALLBACK_002
    * @tc.name    test getRawFileList method in callback mode
    * @tc.desc    get the rawFileList in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetRawFileListCallback002', 0, async (done: Function) => {
      context.resourceManager.getRawFileList('test', (err: BusinessError, value: Array<string>) => {
        console.log('testGetRawFileListCallback002 ' + value);
        console.log('testGetRawFileListCallback002 ' + typeof value);
        console.log('testGetRawFileListCallback002 value.length ' + value.length);
        expect(value.length > 0).assertTrue();
        done();
      })
    })

    /* *
    * @tc.number  TEST-GETRAWFILELISTCALLBACK_003
    * @tc.name    test getRawFileList method in callback mode
    * @tc.desc    get the rawFileList in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetRawFileListCallback003', 0, async (done: Function) => {
      context.resourceManager.getRawFileList('test/rawfiletest.xml', (err: BusinessError, value: Array<string>) => {
        if (!err) {
          console.log('testGetRawFileListCallback003 ' + value);
          console.log('testGetRawFileListCallback003 ' + typeof value);
          console.log('testGetRawFileListCallback003 value.length ' + value.length);
          expect(value.length === 0).assertTrue();
          done();
        } else {
          console.log("testGetRawFileListCallback003 err.code " + err.code);
          console.log("testGetRawFileListCallback003 err.message " + err.message);
          expect(err.code === 9001005).assertTrue();
          done();
        }
      })
    })

    /* *
    * @tc.number  TEST-GETRAWFILELISTCALLBACK_004
    * @tc.name    test getRawFileList method in callback mode
    * @tc.desc    get the rawFileList in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetRawFileListCallback004', 0, async (done: Function) => {
      context.resourceManager.getRawFileList('test/null.txt', (err: BusinessError, value: Array<string>) => {
        if (!err) {
          console.log('testGetRawFileListCallback004 ' + value);
          console.log('testGetRawFileListCallback004 ' + typeof value);
          console.log('testGetRawFileListCallback004 value.length ' + value.length);
          expect(value.length === 0).assertTrue();
          done();
        } else {
          console.log("testGetRawFileListCallback004 err.code " + err.code);
          console.log("testGetRawFileListCallback004 err.message " + err.message);
          expect(err.code == 9001005).assertTrue();
          done();
        }
      })
    })

    /* *
    * @tc.number  TEST-GETRAWFILELISTCALLBACK_005
    * @tc.name    test getRawFileList method in callback mode throw 9001005 error code
    * @tc.desc    get the rawFileList in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetRawFileListCallback005', 0, async (done: Function) => {
      context.resourceManager.getRawFileList('nullDir', (err: BusinessError, value: Array<string>) => {
        if (err) {
          console.log("testGetRawFileListCallback005 err.code " + err.code);
          console.log("testGetRawFileListCallback005 err.message " + err.message);
          expect(err.code == 9001005).assertTrue();
          done();
        }
      })
    })

    /* *
    * @tc.number  TEST-GETRAWFILELISTCALLBACK_006
    * @tc.name    test getRawFileList method in callback mode throw 9000605 error code
    * @tc.desc    get the rawFileList in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetRawFileListCallback006', 0, async (done: Function) => {
      context.resourceManager.getRawFileList('notexist', (err: BusinessError, value: Array<string>) => {
        if (!err) {
          console.log('testGetRawFileListCallback006 ' + value);
          console.log('testGetRawFileListCallback006 ' + typeof value);
          expect(value.length > 0).assertTrue();
          done();
        } else {
          console.log("testGetRawFileListCallback006 err.code " + err.code);
          console.log("testGetRawFileListCallback006 err.message " + err.message);
          expect(err.code == 9001005).assertTrue();
          done();
        }
      })
    })

    /* *
    * @tc.number  TEST-GETRAWFILELISTPROMISE_001
    * @tc.name    test getRawFileList method in promise mode
    * @tc.desc    get the rawFileList in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetRawFileListPromise001', 0, async (done: Function) => {
      context.resourceManager.getRawFileList('').then((value: Array<string>) => {
        console.log('testGetRawFileListPromise001' + value);
        console.log('testGetRawFileListPromise001' + typeof value);
        expect(value.length > 0).assertTrue();
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetRawFileListPromise001 err.code " + err.code);
        console.log("testGetRawFileListPromise001 err.message " + err.message);
        done();
      });
    })

    /* *
    * @tc.number  TEST-GETRAWFILELISTPROMISE_002
    * @tc.name    test getRawFileList method in promise mode
    * @tc.desc    get the rawFileList in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetRawFileListPromise002', 0, async (done: Function) => {
      context.resourceManager.getRawFileList('test').then((value: Array<string>) => {
        console.log('testGetRawFileListPromise002' + value);
        console.log('testGetRawFileListPromise002' + typeof value);
        expect(value.length > 0).assertTrue();
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetRawFileListPromise002 err.code " + err.code);
        console.log("testGetRawFileListPromise002 err.message " + err.message);
        done();
      });
    })

    /* *
    * @tc.number  TEST-GETRAWFILELISTPROMISE_003
    * @tc.name    test getRawFileList method in promise mode
    * @tc.desc    get the rawFileList in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetRawFileListPromise003', 0, async (done: Function) => {
      context.resourceManager.getRawFileList('test/rawfiletest.xml').then((value: Array<string>) => {
        console.log('testGetRawFileListPromise003' + value);
        console.log('testGetRawFileListPromise003' + typeof value);
        expect(value.length === 0).assertTrue();
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetRawFileListPromise003 err.code " + err.code);
        console.log("testGetRawFileListPromise003 err.message " + err.message);
        expect(err.code === 9001005).assertTrue();
        done();
      });
    })

    /* *
    * @tc.number  TEST-GETRAWFILELISTPROMISE_004
    * @tc.name    test getRawFileList method in promise mode
    * @tc.desc    get the rawFileList in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetRawFileListPromise004', 0, async (done: Function) => {
      context.resourceManager.getRawFileList('test/null.txt').then((value: Array<string>) => {
        console.log('testGetRawFileListPromise004' + value);
        console.log('testGetRawFileListPromise004' + typeof value);
        expect(value.length === 0).assertTrue();
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetRawFileListPromise004 err.code " + err.code);
        console.log("testGetRawFileListPromise004 err.message " + err.message);
        expect(err.code == 9001005).assertTrue();
        done();
      });
    })

    /* *
    * @tc.number  TEST-GETRAWFILELISTPROMISE_005
    * @tc.name    test getRawFileList method in promise mode throw 9001005 error code
    * @tc.desc    get the rawFileList in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetRawFileListPromise005', 0, async (done: Function) => {
      context.resourceManager.getRawFileList('nullDir').then((value: Array<string>) => {
        console.log('testGetRawFileListPromise005' + value);
        console.log('testGetRawFileListPromise005' + typeof value);
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetRawFileListPromise005 err.code " + err.code);
        console.log("testGetRawFileListPromise005 err.message " + err.message);
        expect(err.code == 9001005).assertTrue();
        done();
      });
    })

    /* *
    * @tc.number  TEST-GETRAWFILELISTPROMISE_006
    * @tc.name    test getRawFileList method in promise mode throw 9001005 error code
    * @tc.desc    get the rawFileList in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetRawFileListPromise006', 0, async (done: Function) => {
      context.resourceManager.getRawFileList('notexist').then((value: Array<string>) => {
        console.log('testGetRawFileListPromise006' + value);
        console.log('testGetRawFileListPromise006' + typeof value);
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetRawFileListPromise006 err.code " + err.code);
        console.log("testGetRawFileListPromise006 err.message " + err.message);
        expect(err.code == 9001005).assertTrue();
        done();
      });
    })

    /* *
    * @tc.number  TEST-GETRAWFILELISTSYNC_001
    * @tc.name    test getRawFileListSync method in sync mode
    * @tc.desc    get the rawFileList in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetRawFileListSync001', 0, async (done: Function) => {
      let value: Array<string> = context.resourceManager.getRawFileListSync('')
      console.log('testGetRawFileListSync001' + value);
      console.log('testGetRawFileListSync001' + typeof value);
      expect(value.length > 0).assertTrue();
      done();
    })

    /* *
    * @tc.number  TEST-GETRAWFILELISTSYNC_002
    * @tc.name    test getRawFileListSync method in sync mode
    * @tc.desc    get the rawFileList in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetRawFileListSync002', 0, async (done: Function) => {
      let value: Array<string> = context.resourceManager.getRawFileListSync('test')
      console.log('testGetRawFileListSync002' + value);
      console.log('testGetRawFileListSync002' + typeof value);
      expect(value.length > 0).assertTrue();
      done();
    })

    /* *
    * @tc.number  TEST-GETRAWFILELISTSYNC_003
    * @tc.name    test getRawFileListSync method in sync mode
    * @tc.desc    get the rawFileList in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetRawFileListSync003', 0, async (done: Function) => {
      try {
        let value: Array<string> = context.resourceManager.getRawFileListSync('test/rawfiletest.xml')
        console.log('testGetRawFileListSync003' + value);
        console.log('testGetRawFileListSync003' + typeof value);
        expect(value.length === 0).assertTrue();
        done();
      } catch (err) {
        console.log("testGetRawFileListSync003 err.code " + err.code);
        console.log("testGetRawFileListSync003 err.message " + err.message);
        expect(err.code == 9001005).assertTrue();
        done();
      }
    })

    /* *
    * @tc.number  TEST-GETRAWFILELISTSYNC_004
    * @tc.name    test getRawFileListSync method in sync mode
    * @tc.desc    get the rawFileList in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetRawFileListSync004', 0, async (done: Function) => {
      try {
        let value: Array<string> = context.resourceManager.getRawFileListSync('test/null.txt')
        console.log('testGetRawFileListSync004' + value);
        console.log('testGetRawFileListSync004' + typeof value);
        expect(value.length > 0).assertTrue();
        done();
      } catch (err) {
        console.log("testGetRawFileListSync004 err.code " + err.code);
        console.log("testGetRawFileListSync004 err.message " + err.message);
        expect(err.code == 9001005).assertTrue();
        done();
      }
    })

    /* *
    * @tc.number  TEST-GETRAWFILELISTSYNC_005
    * @tc.name    test getRawFileListSync method in sync mode throw 9001005 error code
    * @tc.desc    get the rawFileList in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetRawFileListSync005', 0, async (done: Function) => {
      try {
        let value: Array<string> = context.resourceManager.getRawFileListSync('nullDir')
        console.log('testGetRawFileListSync005' + value);
        console.log('testGetRawFileListSync005' + typeof value);
        expect(value.length > 0).assertTrue();
        done();
      } catch (err) {
        console.log("testGetRawFileListSync005 err.code " + err.code);
        console.log("testGetRawFileListSync005 err.message " + err.message);
        expect(err.code == 9001005).assertTrue();
        done();
      }
    })

    /* *
    * @tc.number  TEST-GETRAWFILELISTSYNC_006
    * @tc.name    test getRawFileListSync method in sync mode throw 9001005 error code
    * @tc.desc    get the rawFileList in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetRawFileListSync006', 0, async (done: Function) => {
      try {
        let value: Array<string> = context.resourceManager.getRawFileListSync('notexist')
        console.log('testGetRawFileListSync006' + value);
        console.log('testGetRawFileListSync006' + typeof value);
        expect(value.length > 0).assertTrue();
        done();
      } catch (err) {
        console.log("testGetRawFileListSync006 err.code " + err.code);
        console.log("testGetRawFileListSync006 err.message " + err.message);
        expect(err.code == 9001005).assertTrue();
        done();
      }
    })

    /* *
    * @tc.number  TEST-GETCOLORRESIDCALLBACK_001
    * @tc.name    test getColor method in callback mode
    * @tc.desc    get the color in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetColorResIdCallback001', 0, async (done: Function) => {
      context.resourceManager.getColor($r('app.color.test1').id, (err: BusinessError, value: number) => {
        if (!err) {
          console.log('testGetColorResIdCallback001 ' + JSON.stringify(value));
          expect(value).assertEqual(4283047887);
          done();
        } else {
          console.log("testGetColorResIdCallback001 err.code " + err.code);
          console.log("testGetColorResIdCallback001 err.message " + err.message);
          done();
        }
      })
    })

    /* *
    * @tc.number  TEST-GETCOLORRESIDCALLBACK_002
    * @tc.name    test getColor method in callback mode
    * @tc.desc    get the color in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetColorResIdCallback002', 0, async (done: Function) => {
      context.resourceManager.getColor($r('app.color.test2').id, (err: BusinessError, value: number) => {
        if (!err) {
          console.log('testGetColorResIdCallback002 ' + JSON.stringify(value));
          expect(value).assertEqual(4281309688);
          done();
        } else {
          console.log("testGetColorResIdCallback002 err.code " + err.code);
          console.log("testGetColorResIdCallback002 err.message " + err.message);
          done();
        }
      })
    })

    /* *
    * @tc.number  TEST-GETCOLORRESIDCALLBACK_003
    * @tc.name    test getColor method in callback mode throw 9001001 error code
    * @tc.desc    get the color in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetColorResIdCallback003', 0, async (done: Function) => {
      context.resourceManager.getColor(1111, (err: BusinessError, value: number) => {
        if (!err) {
          console.log('testGetColorResIdCallback003 ' + JSON.stringify(value));
          done();
        } else {
          console.log("testGetColorResIdCallback003 err.code " + err.code);
          console.log("testGetColorResIdCallback003 err.message " + err.message);
          expect(err.code == 9001001).assertTrue();
          done();
        }
      })
    })

    /* *
    * @tc.number  TEST-GETCOLORRESIDPROMISE_001
    * @tc.name    test getColor method in promise mode
    * @tc.desc    get the color in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetColorResIdPromise001', 0, async (done: Function) => {
      context.resourceManager.getColor($r('app.color.test1').id).then((value: number) => {
        console.log('testGetColorResIdPromise001' + value);
        console.log('testGetColorResIdPromise001' + typeof value);
        expect(value).assertEqual(4283047887);
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetColorResIdPromise001 err.code " + err.code);
        console.log("testGetColorResIdPromise001 err.message " + err.message);
        done();
      });
    })

    /* *
    * @tc.number  TEST-GETCOLORRESIDPROMISE_002
    * @tc.name    test getColor method in promise mode
    * @tc.desc    get the color in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetColorResIdPromise002', 0, async (done: Function) => {
      context.resourceManager.getColor($r('app.color.test2').id).then((value: number) => {
        console.log('testGetColorResIdPromise002' + value);
        console.log('testGetColorResIdPromise002' + typeof value);
        expect(value).assertEqual(4281309688);
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetColorResIdPromise002 err.code " + err.code);
        console.log("testGetColorResIdPromise002 err.message " + err.message);
        done();
      });
    })

    /* *
    * @tc.number  TEST-GETCOLORRESIDPROMISE_003
    * @tc.name    test getColor method in promise mode throw 9001001 error code
    * @tc.desc    get the color in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetColorResIdPromise003', 0, async (done: Function) => {
      context.resourceManager.getColor(1111).then((value: number) => {
        console.log('testGetColorResIdPromise003' + value);
        console.log('testGetColorResIdPromise003' + typeof value);
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetColorResIdPromise003 err.code " + err.code);
        console.log("testGetColorResIdPromise003 err.message " + err.message);
        expect(err.code == 9001001).assertTrue();
        done();
      });
    })

    /* *
    * @tc.number  TEST-GETCOLORRESOURCECALLBACK_001
    * @tc.name    test getColor method in callback mode
    * @tc.desc    get the color in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetColorResourceCallback001', 0, async (done: Function) => {
      context.resourceManager.getColor({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.color.test1').id
      }, (err: BusinessError, value: number) => {
        if (!err) {
          console.log('testGetColorResourceCallback001' + value);
          console.log('testGetColorResourceCallback001' + typeof value);
          expect(value).assertEqual(4283047887);
          done();
        } else {
          console.log("testGetColorResourceCallback001 err.code " + err.code);
          console.log("testGetColorResourceCallback001 err.message " + err.message);
          done();
        }
      })
    })

    /* *
    * @tc.number  TEST-GETCOLORRESOURCECALLBACK_002
    * @tc.name    test getColor method in callback mode
    * @tc.desc    get the color in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetColorResourceCallback002', 0, async (done: Function) => {
      context.resourceManager.getColor({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.color.test2').id
      }, (err: BusinessError, value: number) => {
        if (!err) {
          console.log('testGetColorResourceCallback002' + value);
          console.log('testGetColorResourceCallback002' + typeof value);
          expect(value).assertEqual(4281309688);
          done();
        } else {
          console.log("testGetColorResourceCallback002 err.code " + err.code);
          console.log("testGetColorResourceCallback002 err.message " + err.message);
          done();
        }
      })
    })

    /* *
    * @tc.number  TEST-GETCOLORRESOURCECALLBACK_003
    * @tc.name    test getColor method in callback mode throw 9001001 error code
    * @tc.desc    get the color in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetColorResourceCallback003', 0, async (done: Function) => {
      context.resourceManager.getColor({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: 1111
      }, (err: BusinessError, value: number) => {
        if (!err) {
          console.log('testGetColorResourceCallback003' + value);
          console.log('testGetColorResourceCallback003' + typeof value);
          done();
        } else {
          console.log("testGetColorResourceCallback003 err.code " + err.code);
          console.log("testGetColorResourceCallback003 err.message " + err.message);
          expect(err.code == 9001001).assertTrue();
          done();
        }
      })
    })

    /* *
    * @tc.number  TEST-GETCOLORRESOURCEPROMISE_001
    * @tc.name    test getColor method in promise mode
    * @tc.desc    get the color in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetColorResourcePromise001', 0, async (done: Function) => {
      context.resourceManager.getColor({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.color.test1').id
      }).then((value: number) => {
        console.log('testGetColorResourcePromise001' + value);
        console.log('testGetColorResourcePromise001' + typeof value);
        expect(value).assertEqual(4283047887);
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetColorResourcePromise001 err.code " + err.code);
        console.log("testGetColorResourcePromise001 err.message " + err.message);
        done();
      });
    })

    /* *
    * @tc.number  TEST-GETCOLORRESOURCEPROMISE_002
    * @tc.name    test getColor method in promise mode
    * @tc.desc    get the color in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetColorResourcePromise002', 0, async (done: Function) => {
      context.resourceManager.getColor({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.color.test2').id
      }).then((value: number) => {
        console.log('testGetColorResourcePromise002' + value);
        console.log('testGetColorResourcePromise002' + typeof value);
        expect(value).assertEqual(4281309688);
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetColorResourcePromise002 err.code " + err.code);
        console.log("testGetColorResourcePromise002 err.message " + err.message);
        done();
      });
    })

    /* *
    * @tc.number  TEST-GETCOLORRESOURCEPROMISE_003
    * @tc.name    test getColor method in promise mode throw 9001001 error code
    * @tc.desc    get the color in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetColorResourcePromise003', 0, async (done: Function) => {
      context.resourceManager.getColor({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: 1111
      }).then((value: number) => {
        console.log('testGetColorResourcePromise003' + value);
        console.log('testGetColorResourcePromise003' + typeof value);
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetColorResourcePromise003 err.code " + err.code);
        console.log("testGetColorResourcePromise003 err.message " + err.message);
        expect(err.code == 9001001).assertTrue();
        done();
      });
    })

    /* *
    * @tc.number  TEST-GETCOLORBYNAMECALLBACK_001
    * @tc.name    test getColorByName method in callback mode
    * @tc.desc    get the color in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetColorByNameCallback001', 0, async (done: Function) => {
      context.resourceManager.getColorByName("test1", (err: BusinessError, value: number) => {
        if (!err) {
          console.log('testGetColorByNameCallback001 ' + value);
          console.log('testGetColorByNameCallback001 ' + typeof value);
          expect(value).assertEqual(4283047887);
          done();
        } else {
          console.log('testGetColorByNameCallback001 err.code ' + err.code)
          console.log('testGetColorByNameCallback001 err.message ' + err.message)
          done();
        }
      })
    })

    /* *
    * @tc.number  TEST-GETCOLORBYNAMECALLBACK_002
    * @tc.name    test getColorByName method in callback mode
    * @tc.desc    get the color in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetColorByNameCallback002', 0, async (done: Function) => {
      context.resourceManager.getColorByName("test2", (err: BusinessError, value: number) => {
        if (!err) {
          console.log('testGetColorByNameCallback002' + value);
          console.log('testGetColorByNameCallback002' + typeof value);
          expect(value).assertEqual(4281309688);
          done();
        } else {
          console.log('testGetColorByNameCallback002 err.code ' + err.code)
          console.log('testGetColorByNameCallback002 err.message ' + err.message)
          done();
        }
      })
    })

    /* *
    * @tc.number  TEST-GETCOLORBYNAMECALLBACK_003
    * @tc.name    test getColorByName method in callback mode throw 9001003 error code
    * @tc.desc    get the color in callback mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetColorByNameCallback003', 0, async (done: Function) => {
      context.resourceManager.getColorByName("notexist", (err: BusinessError, value: number) => {
        if (!err) {
          console.log('testGetColorByNameCallback003' + value);
          console.log('testGetColorByNameCallback003' + typeof value);
          done();
        } else {
          console.log("testGetColorByNameCallback003 err.code " + err.code);
          console.log("testGetColorByNameCallback003 err.message " + err.message);
          expect(err.code == 9001003).assertTrue();
          done();
        }
      })
    })

    /* *
    * @tc.number  TEST-GETCOLORBYNAMEPROMISE_001
    * @tc.name    test getColorByName method in promise mode
    * @tc.desc    get the color in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetColorByNamePromise001', 0, async (done: Function) => {
      context.resourceManager.getColorByName("test1").then((value: number) => {
        console.log('testGetColorByNamePromise001' + value);
        console.log('testGetColorByNamePromise001' + typeof value);
        expect(value).assertEqual(4283047887);
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetColorByNamePromise001 err.code " + err.code);
        console.log("testGetColorByNamePromise001 err.message " + err.message);
        done();
      });
    })

    /* *
    * @tc.number  TEST-GETCOLORBYNAMEPROMISE_002
    * @tc.name    test getColorByName method in promise mode
    * @tc.desc    get the color in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetColorByNamePromise002', 0, async (done: Function) => {
      context.resourceManager.getColorByName("test2").then((value: number) => {
        console.log('testGetColorByNamePromise002' + value);
        console.log('testGetColorByNamePromise002' + typeof value);
        expect(value).assertEqual(4281309688);
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetColorByNamePromise002 err.code " + err.code);
        console.log("testGetColorByNamePromise002 err.message " + err.message);
        done();
      });
    })

    /* *
    * @tc.number  TEST-GETCOLORBYNAMEPROMISE_003
    * @tc.name    test getColorByName method in promise mode throw 9001003 error code
    * @tc.desc    get the color in promise mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetColorByNamePromise003', 0, async (done: Function) => {
      context.resourceManager.getColorByName("notexist").then((value: number) => {
        console.log('testGetColorByNamePromise003' + value);
        console.log('testGetColorByNamePromise003' + typeof value);
        done();
      }).catch((err: BusinessError) => {
        console.log("testGetColorByNamePromise003 err.code " + err.code);
        console.log("testGetColorByNamePromise003 err.message " + err.message);
        expect(err.code == 9001003).assertTrue();
        done();
      });
    })

    /* *
    * @tc.number  TEST-GETCOLORSYNCRESID_001
    * @tc.name    test getColorSync method in sync mode
    * @tc.desc    get the color in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetColorSyncResId001', 0, async (done: Function) => {
      let value: number = context.resourceManager.getColorSync($r('app.color.test1').id)
      console.log('testGetColorSyncResId001' + value);
      console.log('testGetColorSyncResId001' + typeof value);
      expect(value).assertEqual(4283047887);
      done()
    })

    /* *
    * @tc.number  TEST-GETCOLORSYNCRESID_002
    * @tc.name    test getColorSync method in sync mode
    * @tc.desc    get the color in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetColorSyncResId002', 0, async (done: Function) => {
      let value: number = context.resourceManager.getColorSync($r('app.color.test2').id)
      console.log('testGetColorSyncResId002' + value);
      console.log('testGetColorSyncResId002' + typeof value);
      expect(value).assertEqual(4281309688);
      done()
    })

    /* *
    * @tc.number  TEST-GETCOLORSYNCRESID_003
    * @tc.name    test getColorSync method in sync mode throw 9001001 error code
    * @tc.desc    get the color in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetColorSyncResId003', 0, async (done: Function) => {
      try {
        let value: number = context.resourceManager.getColorSync(1111)
        console.log('testGetColorSyncResId003' + value);
        console.log('testGetColorSyncResId003' + typeof value);
        done()
      } catch (err) {
        console.log("testGetColorSyncResId003 err.code " + err.code);
        console.log("testGetColorSyncResId003 err.message " + err.message);
        expect(err.code == 9001001).assertTrue();
        done();
      }
    })

    /* *
    * @tc.number  TEST-GETCOLORSYNCRESOURCE_001
    * @tc.name    test getColorSync method in sync mode
    * @tc.desc    get the color in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetColorSyncResource001', 0, async (done: Function) => {
      let value: number = context.resourceManager.getColorSync({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.color.test1').id
      })
      console.log('testGetColorSyncResource001' + value);
      console.log('testGetColorSyncResource001' + typeof value);
      expect(value).assertEqual(4283047887);
      done()
    })

    /* *
    * @tc.number  TEST-GETCOLORSYNCRESOURCE_002
    * @tc.name    test getColorSync method in sync mode
    * @tc.desc    get the color in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetColorSyncResource002', 0, async (done: Function) => {
      let value: number = context.resourceManager.getColorSync({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.color.test2').id
      })
      console.log('testGetColorSyncResource002' + value);
      console.log('testGetColorSyncResource002' + typeof value);
      expect(value).assertEqual(4281309688);
      done()
    })

    /* *
    * @tc.number  TEST-GETCOLORSYNCRESOURCE_003
    * @tc.name    test getColorSync method in sync mode throw 9001001 error code
    * @tc.desc    get the color in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetColorSyncResource003', 0, async (done: Function) => {
      try {

        let value: number = context.resourceManager.getColorSync({
          bundleName: "com.example.resourcemanagertest",
          moduleName: "entry_test",
          id: 1111
        })
        console.log('testGetColorSyncResource003' + value);
        console.log('testGetColorSyncResource003' + typeof value);
        done()
      } catch (err) {
        console.log("testGetColorSyncResource003 err.code " + err.code);
        console.log("testGetColorSyncResource003 err.message " + err.message);
        expect(err.code == 9001001).assertTrue();
        done();
      }
    })

    /* *
    * @tc.number  TEST-GETCOLORBYNAMESYNC_001
    * @tc.name    test getColorByNameSync method in sync mode
    * @tc.desc    get the color in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetColorByNameSync001', 0, async (done: Function) => {
      let value: number = context.resourceManager.getColorByNameSync("test1")
      console.log('testGetColorByNameSync001' + value);
      console.log('testGetColorByNameSync001' + typeof value);
      expect(value).assertEqual(4283047887);
      done()
    })

    /* *
    * @tc.number  TEST-GETCOLORBYNAMESYNC_002
    * @tc.name    test getColorByNameSync method in sync mode
    * @tc.desc    get the color in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetColorByNameSync002', 0, async (done: Function) => {
      let value: number = context.resourceManager.getColorByNameSync("test2")
      console.log('testGetColorByNameSync002' + value);
      console.log('testGetColorByNameSync002' + typeof value);
      expect(value).assertEqual(4281309688);
      done()
    })

    /* *
    * @tc.number  TEST-GETCOLORBYNAMESYNC_003
    * @tc.name    test getColorByNameSync method in sync mode throw 9001003 error code
    * @tc.desc    get the color in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetColorByNameSync003', 0, async (done: Function) => {
      try {
        let value: number = context.resourceManager.getColorByNameSync("notexist")
        console.log('testGetColorByNameSync003' + value);
        console.log('testGetColorByNameSync003' + typeof value);
        done()
      } catch (err) {
        console.log("testGetColorByNameSync003 err.code " + err.code);
        console.log("testGetColorByNameSync003 err.message " + err.message);
        expect(err.code == 9001003).assertTrue();
        done();
      }
    })

    /* *
    * @tc.number  TEST-GETRAWFDSYNC_001
    * @tc.name    test getRawFdSync method
    * @tc.desc    get the RawFileDescriptor in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetRawFdSync001', 0, async (done: Function) => {
      let rawfile: resourceManager.RawFileDescriptor = context.resourceManager.getRawFdSync('rawfiletest.xml')
      let fdValue: number = rawfile.fd;
      let offsetValue: number = rawfile.offset;
      let lengthValue: number = rawfile.length;
      expect(rawfile !== null).assertTrue();
      console.log('testGetRawFdSync001--'
        + 'fd:' + fdValue
        + ' offset:' + offsetValue
        + ' length:' + lengthValue);
      done();
    })


    /* *
    * @tc.number  TEST-GETRAWFDSYNC_002
    * @tc.name    test getRawFdSync method
    * @tc.desc    get the RawFileDescriptor in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetRawFdSync002', 0, async (done: Function) => {
      let rawfile: resourceManager.RawFileDescriptor = context.resourceManager.getRawFdSync('test/test.png')
      let fdValue: number = rawfile.fd;
      let offsetValue: number = rawfile.offset;
      let lengthValue: number = rawfile.length;
      expect(rawfile !== null).assertTrue();
      console.log('testGetRawFdSync002--'
        + 'fd:' + fdValue
        + ' offset:' + offsetValue
        + ' length:' + lengthValue);
      done();
    })

    /* *
    * @tc.number  TEST-GETRAWFDSYNC_003
    * @tc.name    test getRawFdSync method throw 9001005 error code
    * @tc.desc    get the RawFileDescriptor in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetRawFdSync003', 0, async (done: Function) => {
      try {
        let rawfile: resourceManager.RawFileDescriptor = context.resourceManager.getRawFdSync('notexist.txt')
        let fdValue: number = rawfile.fd;
        let offsetValue: number = rawfile.offset;
        let lengthValue: number = rawfile.length;
        expect(rawfile !== null).assertTrue();
        console.log('testGetRawFdSync003--'
          + 'fd:' + fdValue
          + ' offset:' + offsetValue
          + ' length:' + lengthValue);
        done()
      } catch (err) {
        console.log("testGetRawFdSync003 err.code " + err.code);
        console.log("testGetRawFdSync003 err.message " + err.message);
        expect(err.code == 9001005).assertTrue();
        done()
      }
    })

    /* *
    * @tc.number  TEST_GETRAWFILECONTENTSYNC_001
    * @tc.name    test getRawFileContentSync method in sync mode
    * @tc.desc    get the rawFileContent in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetRawFileContentSync001', 0, async (done: Function) => {
      let value: Uint8Array = context.resourceManager.getRawFileContentSync('rawfiletest.xml')
      console.log('testGetRawFileContentSync001 ' + value);
      console.log('testGetRawFileContentSync001 ' + typeof value);
      expect(value !== undefined).assertTrue()
      done();
    })

    /* *
    * @tc.number  TEST_GETRAWFILECONTENTSYNC_002
    * @tc.name    test getRawFileContentSync method in sync mode
    * @tc.desc    get the rawFileContent in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetRawFileContentSync002', 0, async (done: Function) => {
      let value: Uint8Array = context.resourceManager.getRawFileContentSync('test/test.png')
      console.log('testGetRawFileContentSync002 ' + JSON.stringify(value));
      console.log('testGetRawFileContentSync001 ' + typeof value);
      expect(value !== undefined).assertTrue()
      done();
    })

    /* *
    * @tc.number  TEST_GETRAWFILECONTENTSYNC_003
    * @tc.name    test getRawFileContentSync method throw 9001005 error code
    * @tc.desc    get the rawFileContent in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetRawFileContentSync003', 0, async (done: Function) => {
      try {
        let value: Uint8Array = context.resourceManager.getRawFileContentSync('notexist.txt')
        console.log('testGetRawFileContentSync003 ' + value);
        console.log('testGetRawFileContentSync003 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      } catch (err) {
        console.log("testGetRawFileContentSync003 err.code " + err.code);
        console.log("testGetRawFileContentSync003 err.message " + err.message);
        expect(err.code == 9001005).assertTrue();
        done()
      }
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTSYNCRESID_001
    * @tc.name    test getMediaContentSync method
    * @tc.desc    get the media in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentSyncResId001', 0, async (done: Function) => {
      let value: Uint8Array = context.resourceManager.getMediaContentSync($r('app.media.icon').id, 0)
      console.log('testGetMediaContentSyncResId001 ' + value);
      console.log('testGetMediaContentSyncResId001 ' + typeof value);
      expect(value !== undefined).assertTrue()
      done();
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTSYNCRESID_002
    * @tc.name    test getMediaContentSync method
    * @tc.desc    get the media in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentSyncResId002', 0, async (done: Function) => {
      let value: Uint8Array = context.resourceManager.getMediaContentSync($r('app.media.icon').id, 120)
      console.log('testGetMediaContentSyncResId002 ' + value);
      console.log('testGetMediaContentSyncResId002 ' + typeof value);
      expect(value !== undefined).assertTrue()
      done();
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTSYNCRESID_003
    * @tc.name    test getMediaContentSync method
    * @tc.desc    get the media in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentSyncResId003', 0, async (done: Function) => {
      let value: Uint8Array = context.resourceManager.getMediaContentSync($r('app.media.test').id, 0)
      console.log('testGetMediaContentSyncResId003 ' + value);
      console.log('testGetMediaContentSyncResId003 ' + typeof value);
      expect(value !== undefined).assertTrue()
      done();
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTSYNCRESID_004
    * @tc.name    test getMediaContentSync method throw 9001001 error code
    * @tc.desc    get the media in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentSyncResId004', 0, async (done: Function) => {
      try {
        let value: Uint8Array = context.resourceManager.getMediaContentSync(1111, 0)
        console.log('testGetMediaContentSyncResId004 ' + value);
        console.log('testGetMediaContentSyncResId004 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      } catch (err) {
        console.log("testGetMediaContentSyncResId004 err.code " + err.code);
        console.log("testGetMediaContentSyncResId004 err.message " + err.message);
        expect(err.code == 9001001).assertTrue();
        done()
      }
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTSYNCRESOURCE_001
    * @tc.name    test getMediaContentSync method
    * @tc.desc    get the media in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentSyncResource001', 0, async (done: Function) => {
      let value: Uint8Array = context.resourceManager.getMediaContentSync({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.media.icon').id
      }, 0)
      console.log('testGetMediaContentSyncResource001 ' + value);
      console.log('testGetMediaContentSyncResource001 ' + typeof value);
      expect(value !== undefined).assertTrue()
      done();
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTSYNCRESOURCE_002
    * @tc.name    test getMediaContentSync method
    * @tc.desc    get the media in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentSyncResource002', 0, async (done: Function) => {
      let value: Uint8Array = context.resourceManager.getMediaContentSync({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.media.icon').id
      }, 120)
      console.log('testGetMediaContentSyncResource002 ' + value);
      console.log('testGetMediaContentSyncResource002 ' + typeof value);
      expect(value !== undefined).assertTrue()
      done();
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTSYNCRESOURCE_003
    * @tc.name    test getMediaContentSync method
    * @tc.desc    get the media in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentSyncResource003', 0, async (done: Function) => {
      let value: Uint8Array = context.resourceManager.getMediaContentSync({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.media.test').id
      }, 0)
      console.log('testGetMediaContentSyncResource003 ' + value);
      console.log('testGetMediaContentSyncResource003 ' + typeof value);
      expect(value !== undefined).assertTrue()
      done();
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTSYNCRESOURCE_004
    * @tc.name    test getMediaContentSync method throw 9001001 error code
    * @tc.desc    get the media in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentSyncResource004', 0, async (done: Function) => {
      try {
        let value: Uint8Array = context.resourceManager.getMediaContentSync({
          bundleName: "com.example.resourcemanagertest",
          moduleName: "entry_test",
          id: 1111
        }, 0)
        console.log('testGetMediaContentSyncResource004 ' + value);
        console.log('testGetMediaContentSyncResource004 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      } catch (err) {
        console.log("testGetMediaContentSyncResource004 err.code " + err.code);
        console.log("testGetMediaContentSyncResource004 err.message " + err.message);
        expect(err.code == 9001001).assertTrue();
        done()
      }
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTBASE64SYNCRESID_001
    * @tc.name    test getMediaContentBase64Sync method
    * @tc.desc    get the mediaBase64 in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentBase64SyncResId001', 0, async (done: Function) => {
      let value: string = context.resourceManager.getMediaContentBase64Sync($r('app.media.icon').id, 0)
      console.log('testGetMediaContentBase64SyncResId001 ' + value);
      console.log('testGetMediaContentBase64SyncResId001 ' + typeof value);
      expect(value !== undefined).assertTrue()
      done();
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTBASE64SYNCRESID_002
    * @tc.name    test getMediaContentBase64Sync method
    * @tc.desc    get the mediaBase64 in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentBase64SyncResId002', 0, async (done: Function) => {
      let value: string = context.resourceManager.getMediaContentBase64Sync($r('app.media.icon').id, 120)
      console.log('testGetMediaContentBase64SyncResId002 ' + value);
      console.log('testGetMediaContentBase64SyncResId002 ' + typeof value);
      expect(value !== undefined).assertTrue()
      done();
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTBASE64SYNCRESID_003
    * @tc.name    test getMediaContentBase64Sync method
    * @tc.desc    get the mediaBase64 in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentBase64SyncResId003', 0, async (done: Function) => {
      let value: string = context.resourceManager.getMediaContentBase64Sync($r('app.media.test').id, 0)
      console.log('testGetMediaContentBase64SyncResId003 ' + value);
      console.log('testGetMediaContentBase64SyncResId003 ' + typeof value);
      expect(value !== undefined).assertTrue()
      done();
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTBASE64SYNCRESID_004
    * @tc.name    test getMediaContentBase64Sync method throw 9001001 error code
    * @tc.desc    get the mediaBase64 in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentBase64SyncResId004', 0, async (done: Function) => {
      try {
        let value: string = context.resourceManager.getMediaContentBase64Sync(1111, 0)
        console.log('testGetMediaContentBase64SyncResId004 ' + value);
        console.log('testGetMediaContentBase64SyncResId004 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      } catch (err) {
        console.log("testGetMediaContentBase64SyncResId004 err.code " + err.code);
        console.log("testGetMediaContentBase64SyncResId004 err.message " + err.message);
        expect(err.code == 9001001).assertTrue();
        done()
      }
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTBASE64SYNCRESOURCE_001
    * @tc.name    test getMediaContentBase64Sync method
    * @tc.desc    get the mediaBase64 in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentBase64SyncResource001', 0, async (done: Function) => {
      let value: string = context.resourceManager.getMediaContentBase64Sync({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.media.icon').id
      }, 0)
      console.log('testGetMediaContentBase64SyncResource001 ' + value);
      console.log('testGetMediaContentBase64SyncResource001 ' + typeof value);
      expect(value !== undefined).assertTrue()
      done();
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTBASE64SYNCRESOURCE_002
    * @tc.name    test getMediaContentBase64Sync method
    * @tc.desc    get the mediaBase64 in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentBase64SyncResource002', 0, async (done: Function) => {
      let value: string = context.resourceManager.getMediaContentBase64Sync({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.media.icon').id
      }, 120)
      console.log('testGetMediaContentBase64SyncResource002 ' + value);
      console.log('testGetMediaContentBase64SyncResource002 ' + typeof value);
      expect(value !== undefined).assertTrue()
      done();
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTBASE64SYNCRESOURCE_003
    * @tc.name    test getMediaContentBase64Sync method
    * @tc.desc    get the mediaBase64 in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentBase64SyncResource003', 0, async (done: Function) => {
      let value: string = context.resourceManager.getMediaContentBase64Sync({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.media.test').id
      }, 0)
      console.log('testGetMediaContentBase64SyncResource003 ' + value);
      console.log('testGetMediaContentBase64SyncResource003 ' + typeof value);
      expect(value !== undefined).assertTrue()
      done();
    })

    /* *
    * @tc.number  TEST_GETMEDIACONTENTBASE64SYNCRESOURCE_004
    * @tc.name    test getMediaContentBase64Sync method throw 9001001 error code
    * @tc.desc    get the mediaBase64 in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetMediaContentBase64SyncResource004', 0, async (done: Function) => {
      try {
        let value: string = context.resourceManager.getMediaContentBase64Sync({
          bundleName: "com.example.resourcemanagertest",
          moduleName: "entry_test",
          id: 1111
        }, 0)
        expect(value !== undefined).assertTrue()
        done();
      } catch (err) {
        console.log("testGetMediaContentBase64SyncResource004 err.code " + err.code);
        console.log("testGetMediaContentBase64SyncResource004 err.message " + err.message);
        expect(err.code == 9001001).assertTrue();
        done()
      }
    })

    /* *
    * @tc.number  TEST_GETPLURALSTRINGVALUESYNCRESIDP_001
    * @tc.name    test getPluralStringValueSync method in sync mode
    * @tc.desc    get the plural string in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetPluralStringValueSyncResId001', 0, async (done: Function) => {
      let value: string = context.resourceManager.getPluralStringValueSync($r('app.plural.plural_name').id, 1)
      expect(value !== undefined).assertTrue()
      console.log('testGetPluralStringValueSyncResId001 ' + value);
      console.log('testGetPluralStringValueSyncResId001 ' + typeof value);
      expect(value).assertEqual('1 test other');
      done();
    })

    /* *
    * @tc.number  TEST_GETPLURALSTRINGVALUESYNCRESIDP_002
    * @tc.name    test getPluralStringValueSync method in sync mode
    * @tc.desc    get the plural string in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetPluralStringValueSyncResId002', 0, async (done: Function) => {
      let value: string = context.resourceManager.getPluralStringValueSync($r('app.plural.plural_name').id, 2)
      expect(value !== undefined).assertTrue()
      console.log('testGetPluralStringValueSyncResId002 ' + value);
      console.log('testGetPluralStringValueSyncResId002 ' + typeof value);
      expect(value).assertEqual('2 test other');
      done();
    })

    /* *
    * @tc.number  TEST_GETPLURALSTRINGVALUESYNCRESIDP_003
    * @tc.name    test getPluralStringValueSync method in sync mode
    * @tc.desc    get the plural string in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetPluralStringValueSyncResId003', 0, async (done: Function) => {
      let value: string = context.resourceManager.getPluralStringValueSync($r('app.plural.plural_name2').id, 1)
      expect(value !== undefined).assertTrue()
      console.log('testGetPluralStringValueSyncResId003 ' + value);
      console.log('testGetPluralStringValueSyncResId003 ' + typeof value);
      expect(value).assertEqual('1 test2 other');
      done();
    })

    /* *
    * @tc.number  TEST_GETPLURALSTRINGVALUESYNCRESIDP_004
    * @tc.name    test getPluralStringValueSync method in sync mode throw 9001001 error code
    * @tc.desc    get the plural string in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetPluralStringValueSyncResId004', 0, async (done: Function) => {
      try {
        let value: string = context.resourceManager.getPluralStringValueSync(1111, 1)
        expect(value !== undefined).assertTrue()
        console.log('testGetPluralStringValueSyncResId004 ' + value);
        console.log('testGetPluralStringValueSyncResId004 ' + typeof value);
        expect(value).assertEqual('1 test other');
        done();
      } catch (err) {
        console.log("testGetPluralStringValueSyncResId004 err.code " + err.code);
        console.log("testGetPluralStringValueSyncResId004 err.message " + err.message);
        expect(err.code == 9001001).assertTrue();
        done()
      }
    })

    /* *
    * @tc.number  TEST_GETPLURALSTRINGVALUESYNCRESOURCE_001
    * @tc.name    test getPluralStringValueSync method in sync mode
    * @tc.desc    get the plural string in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetPluralStringValueSyncResource001', 0, async (done: Function) => {
      let value: string = context.resourceManager.getPluralStringValueSync({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.plural.plural_name').id
      }, 1)
      console.log('testGetPluralStringValueSyncResource001 ' + value);
      console.log('testGetPluralStringValueSyncResource001 ' + typeof value);
      expect(value !== undefined).assertTrue()
      expect(value).assertEqual('1 test other');
      done();
    })

    /* *
    * @tc.number  TEST_GETPLURALSTRINGVALUESYNCRESOURCE_002
    * @tc.name    test getPluralStringValueSync method in sync mode
    * @tc.desc    get the plural string in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetPluralStringValueSyncResource002', 0, async (done: Function) => {
      let value: string = context.resourceManager.getPluralStringValueSync({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.plural.plural_name').id
      }, 2)
      console.log('testGetPluralStringValueSyncResource002 ' + value);
      console.log('testGetPluralStringValueSyncResource002 ' + typeof value);
      expect(value !== undefined).assertTrue()
      expect(value).assertEqual('2 test other');
      done();
    })

    /* *
    * @tc.number  TEST_GETPLURALSTRINGVALUESYNCRESOURCE_003
    * @tc.name    test getPluralStringValueSync method in sync mode
    * @tc.desc    get the plural string in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetPluralStringValueSyncResource003', 0, async (done: Function) => {
      let value: string = context.resourceManager.getPluralStringValueSync({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.plural.plural_name2').id
      }, 1)
      console.log('testGetPluralStringValueSyncResource003 ' + value);
      console.log('testGetPluralStringValueSyncResource003 ' + typeof value);
      expect(value !== undefined).assertTrue()
      expect(value).assertEqual('1 test2 other');
      done();
    })

    /* *
    * @tc.number  TEST_GETPLURALSTRINGVALUESYNCRESOURCE_004
    * @tc.name    test getPluralStringValueSync method in sync mode throw 9001001 error code
    * @tc.desc    get the plural string in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetPluralStringValueSyncResource004', 0, async (done: Function) => {
      try {
        let value: string = context.resourceManager.getPluralStringValueSync({
          bundleName: "com.example.resourcemanagertest",
          moduleName: "entry_test",
          id: 1111
        }, 1)
        console.log('testGetPluralStringValueSyncResource004 ' + value);
        console.log('testGetPluralStringValueSyncResource004 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      } catch (err) {
        console.log("testGetPluralStringValueSyncResource004 err.code " + err.code);
        console.log("testGetPluralStringValueSyncResource004 err.message " + err.message);
        expect(err.code == 9001001).assertTrue();
        done()
      }
    })

    /* *
    * @tc.number  TEST_GETSTRINGARRAYVALUESYNCRESID_001
    * @tc.name    test getStringArrayValueSync method
    * @tc.desc    get the string array in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetStringArrayValueSyncResId001', 0, async (done: Function) => {
      let value: Array<string> = context.resourceManager.getStringArrayValueSync($r('app.strarray.sizeList').id)
      expect(value !== undefined).assertTrue()
      console.log('testGetStringArrayValueSyncResId001 ' + value);
      console.log('testGetStringArrayValueSyncResId001 ' + typeof value);
      console.log('testGetStringArrayValueSyncResId001 ' + value.length);
      expect(value.length).assertEqual(4);
      expect(value[0]).assertEqual('small');
      expect(value[1]).assertEqual('middle');
      expect(value[2]).assertEqual('large');
      expect(value[3]).assertEqual('extra large');
      done();
    })

    /* *
    * @tc.number  TEST_GETSTRINGARRAYVALUESYNCRESID_002
    * @tc.name    test getStringArrayValueSync method
    * @tc.desc    get the string array in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetStringArrayValueSyncResId002', 0, async (done: Function) => {
      let value: Array<string> = context.resourceManager.getStringArrayValueSync($r('app.strarray.sizeList2').id)
      expect(value !== undefined).assertTrue()
      console.log('testGetStringArrayValueSyncResId002 ' + value);
      console.log('testGetStringArrayValueSyncResId002 ' + typeof value);
      console.log('testGetStringArrayValueSyncResId002 ' + value.length);
      expect(value.length).assertEqual(2);
      expect(value[0]).assertEqual('little');
      expect(value[1]).assertEqual('much');
      done();
    })

    /* *
    * @tc.number  TEST_GETSTRINGARRAYVALUESYNCRESID_003
    * @tc.name    test getStringArrayValueSync method throw 9001001 error code
    * @tc.desc    get the string array in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetStringArrayValueSyncResId003', 0, async (done: Function) => {
      try {
        let value: Array<string> = context.resourceManager.getStringArrayValueSync(1111)
        expect(value !== undefined).assertTrue()
        console.log('testGetStringArrayValueSyncResId003 ' + value);
        console.log('testGetStringArrayValueSyncResId003 ' + typeof value);
        console.log('testGetStringArrayValueSyncResId003 ' + value.length);
        expect(value.length).assertEqual(2);
        expect(value[0]).assertEqual('little');
        expect(value[1]).assertEqual('much');
        done();
      } catch (err) {
        console.log("testGetStringArrayValueSyncResId003 err.code " + err.code);
        console.log("testGetStringArrayValueSyncResId003 err.message " + err.message);
        expect(err.code == 9001001).assertTrue();
        done()
      }
    })

    /* *
    * @tc.number  TEST_GETSTRINGARRAYVALUESYNCRESOURCE_001
    * @tc.name    test getStringArrayValueSync method
    * @tc.desc    get the string array in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetStringArrayValueSyncResource001', 0, async (done: Function) => {
      let value: Array<string> = context.resourceManager.getStringArrayValueSync({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.strarray.sizeList').id
      })
      console.log('testGetStringArrayValueSyncResource001 ' + value);
      console.log('testGetStringArrayValueSyncResource001 ' + typeof value);
      console.log('testGetStringArrayValueSyncResource001 ' + value.length);
      expect(value !== undefined).assertTrue()
      expect(value.length).assertEqual(4);
      expect(value[0]).assertEqual('small');
      expect(value[1]).assertEqual('middle');
      expect(value[2]).assertEqual('large');
      expect(value[3]).assertEqual('extra large');
      done();
    })

    /* *
    * @tc.number  TEST_GETSTRINGARRAYVALUESYNCRESOURCE_002
    * @tc.name    test getStringArrayValueSync method
    * @tc.desc    get the string array in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetStringArrayValueSyncResource002', 0, async (done: Function) => {
      let value: Array<string> = context.resourceManager.getStringArrayValueSync({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.strarray.sizeList2').id
      })
      console.log('testGetStringArrayValueSyncResource002 ' + value);
      console.log('testGetStringArrayValueSyncResource002 ' + typeof value);
      console.log('testGetStringArrayValueSyncResource002 ' + value.length);
      expect(value !== undefined).assertTrue()
      expect(value.length).assertEqual(2);
      expect(value[0]).assertEqual('little');
      expect(value[1]).assertEqual('much');
      done();
    })

    /* *
    * @tc.number  TEST_GETSTRINGARRAYVALUESYNCRESOURCE_003
    * @tc.name    test getStringArrayValueSync method throw 9001001 error code
    * @tc.desc    get the string array in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetStringArrayValueSyncResource003', 0, async (done: Function) => {
      try {
        let value: Array<string> = context.resourceManager.getStringArrayValueSync({
          bundleName: "com.example.resourcemanagertest",
          moduleName: "entry_test",
          id: 1111
        })
        console.log('testGetStringArrayValueSyncResource003 ' + value);
        console.log('testGetStringArrayValueSyncResource003 ' + typeof value);
        expect(value !== undefined).assertTrue()
        done();
      } catch (err) {
        console.log("testGetStringArrayValueSyncResource003 err.code " + err.code);
        console.log("testGetStringArrayValueSyncResource003 err.message " + err.message);
        expect(err.code == 9001001).assertTrue();
        done()
      }
    })

    /* *
    * @tc.number  TEST_GETPLURALSTRINGBYNAMESYNC_001
    * @tc.name    test getPluralStringByNameSync
    * @tc.desc    get the plural string in Sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetPluralStringByNameSync001', 0, async (done: Function) => {
      let value: string = context.resourceManager.getPluralStringByNameSync('plural_name', 1)
      expect(value !== undefined).assertTrue()
      console.log('testGetPluralStringByNameSync001 ' + value);
      console.log('testGetPluralStringByNameSync001 ' + typeof value);
      expect(value).assertEqual('1 test other');
      done();
    })

    /* *
    * @tc.number  TEST_GETPLURALSTRINGBYNAMESYNC_002
    * @tc.name    test getPluralStringByNameSync
    * @tc.desc    get the plural string in Sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetPluralStringByNameSync002', 0, async (done: Function) => {
      let value: string = context.resourceManager.getPluralStringByNameSync('plural_name', 2)
      expect(value !== undefined).assertTrue()
      console.log('testGetPluralStringByNameSync002 ' + value);
      console.log('testGetPluralStringByNameSync002 ' + typeof value);
      expect(value).assertEqual('2 test other');
      done();
    })

    /* *
    * @tc.number  TEST_GETPLURALSTRINGBYNAMESYNC_003
    * @tc.name    test getPluralStringByNameSync
    * @tc.desc    get the plural string in Sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetPluralStringByNameSync003', 0, async (done: Function) => {
      let value: string = context.resourceManager.getPluralStringByNameSync('plural_name2', 1)
      expect(value !== undefined).assertTrue()
      console.log('testGetPluralStringByNameSync003 ' + value);
      console.log('testGetPluralStringByNameSync003 ' + typeof value);
      expect(value).assertEqual('1 test2 other');
      done();
    })

    /* *
    * @tc.number  TEST_GETPLURALSTRINGBYNAMESYNC_004
    * @tc.name    test getPluralStringByNameSync method throw 9001003 error code
    * @tc.desc    get the plural string in Sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetPluralStringByNameSync004', 0, async (done: Function) => {
      try {
        let value: string = context.resourceManager.getPluralStringByNameSync('notexist', 1)
        expect(value !== undefined).assertTrue()
        console.log('testGetPluralStringByNameSync004 ' + value);
        console.log('testGetPluralStringByNameSync004 ' + typeof value);
        expect(value).assertEqual('1 test other');
        done();
      } catch (err) {
        console.log("testGetPluralStringByNameSync004 err.code " + err.code);
        console.log("testGetPluralStringByNameSync004 err.message " + err.message);
        expect(err.code == 9001003).assertTrue();
        done()
      }
    })

    /* *
    * @tc.number  TEST_GETSTRINGARRAYBYNAMESYNC_001
    * @tc.name    test getStringArrayByNameSync method
    * @tc.desc    get the string array in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetStringArrayByNameSync001', 0, async (done: Function) => {
      let value: Array<string> = context.resourceManager.getStringArrayByNameSync('sizeList')
      expect(value !== undefined).assertTrue()
      console.log('testGetStringArrayByNameSync001 ' + value);
      console.log('testGetStringArrayByNameSync001 ' + typeof value);
      console.log('testGetStringArrayByNameSync001 ' + value.length);
      expect(value.length).assertEqual(4);
      expect(value[0]).assertEqual('small');
      expect(value[1]).assertEqual('middle');
      expect(value[2]).assertEqual('large');
      expect(value[3]).assertEqual('extra large');
      done();
    })

    /* *
    * @tc.number  TEST_GETSTRINGARRAYBYNAMESYNC_002
    * @tc.name    test getStringArrayByNameSync method
    * @tc.desc    get the string array in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetStringArrayByNameSync002', 0, async (done: Function) => {
      let value: Array<string> = context.resourceManager.getStringArrayByNameSync('sizeList2')
      expect(value !== undefined).assertTrue()
      console.log('testGetStringArrayByNameSync002 ' + value);
      console.log('testGetStringArrayByNameSync002 ' + typeof value);
      console.log('testGetStringArrayByNameSync002 ' + value.length);
      expect(value.length).assertEqual(2);
      expect(value[0]).assertEqual('little');
      expect(value[1]).assertEqual('much');
      done();
    })

    /* *
    * @tc.number  TEST_GETSTRINGARRAYBYNAMESYNC_003
    * @tc.name    test getStringArrayByNameSync method throw 9001003 error code
    * @tc.desc    get the string array in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetStringArrayByNameSync003', 0, async (done: Function) => {
      try {
        let value: Array<string> = context.resourceManager.getStringArrayByNameSync('notexist')
        expect(value !== undefined).assertTrue()
        console.log('testGetStringArrayByNameSync003 ' + value);
        console.log('testGetStringArrayByNameSync003 ' + typeof value);
        console.log('testGetStringArrayByNameSync003 ' + value.length);
        expect(value.length).assertEqual(2);
        expect(value[0]).assertEqual('little');
        expect(value[1]).assertEqual('much');
        done();
      } catch (err) {
        console.log("testGetStringArrayByNameSync003 err.code " + err.code);
        console.log("testGetStringArrayByNameSync003 err.message " + err.message);
        expect(err.code == 9001003).assertTrue();
        done()
      }
    })

    /* *
    * @tc.number  TEST_GETCONFIGURATIONSYNC_001
    * @tc.name    test getConfigurationSync method
    * @tc.desc    get the configuration in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetConfigurationSync001', 0, async (done: Function) => {
      let cfg: resourceManager.Configuration = context.resourceManager.getConfigurationSync()
      console.log('testGetConfigurationSync001 ' + JSON.stringify(cfg));
      expect(cfg !== undefined).assertTrue()
      expect(cfg.direction !== null).assertTrue();
      expect(cfg.locale !== null).assertTrue();
      done();
    })

    /* *
    * @tc.number  TEST_GETDEVICECAPABILITYSYNC_001
    * @tc.name    test getDeviceCapabilitySync method
    * @tc.desc    get the device capability in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetDeviceCapabilitySync001', 0, async (done: Function) => {
      let dc: resourceManager.DeviceCapability = context.resourceManager.getDeviceCapabilitySync()
      console.log('testGetDeviceCapabilitySync001 ' + JSON.stringify(dc));
      expect(dc !== undefined).assertTrue()
      expect(dc.screenDensity !== null).assertTrue();
      expect(dc.deviceType !== null).assertTrue();
      done();
    })

    /* *
    * @tc.number  TEST_ADDRESOURCE_001
    * @tc.name    test addResource method throw 9001010 error code
    * @tc.desc    add resource
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testAddResource001', 0, async (done: Function) => {
      try {
        // param not exist throw 9001010 error code
        context.resourceManager.addResource("notexist.xml")
        done()
      } catch (err) {
        console.log('testAddResource001 e.code' + err.code);
        console.log('testAddResource001 e.message' + err.message);
        expect(err.code == 9001010).assertTrue();
        done()
      }
    })

    /* *
    * @tc.number  TEST_ADDRESOURCE_002
    * @tc.name    test addResource method throw 401 error code
    * @tc.desc    add resource
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testAddResource002', 0, async (done: Function) => {
      try {
        let path = (1111 as string | number) as string
        // param type not correct,throw 401 error code
        context.resourceManager.addResource(path)
        done()
      } catch (err) {
        console.log('testAddResource002 e.code' + err.code);
        console.log('testAddResource002 e.message' + err.message);
        expect(err.code == 401).assertTrue();
        done()
      }
    })

    /* *
    * @tc.number  TEST_REMOVERESOURCE_001
    * @tc.name    test removeResource method throw 9001010 error code
    * @tc.desc    remove resource
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testRemoveResource001', 0, async (done: Function) => {
      try {
        // param not exist throw 9001010 error code
        context.resourceManager.removeResource("notexist.xml")
        done()
      } catch (err) {
        console.log('testRemoveResource001 e.code' + err.code);
        console.log('testRemoveResource001 e.message' + err.message);
        expect(err.code == 9001010).assertTrue();
        done()
      }
    })

    /* *
    * @tc.number  TEST_REMOVERESOURCE_002
    * @tc.name    test removeResource method throw 401 error code
    * @tc.desc    remove resource
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testRemoveResource002', 0, async (done: Function) => {
      try {
        let path = (1111 as string | number) as string
        // param type not correct,throw 401 error code
        context.resourceManager.removeResource(path)
        done()
      } catch (err) {
        console.log('testRemoveResource002 e.code' + err.code);
        console.log('testRemoveResource002 e.message' + err.message);
        expect(err.code == 401).assertTrue();
        done()
      }
    })

    /* *
    * @tc.number  TEST_CLOSERAWFDSYNC_001
    * @tc.name    test closeRawFdSync method throw 9001005 error code
    * @tc.desc    get the closeRawFd in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCloseRawFdSync001', 0, async (done: Function) => {
      try {
        // param not exist throw 9001005 error code
        context.resourceManager.closeRawFdSync('notexist.xml')
        done();
      } catch (err) {
        console.log('testCloseRawFdSync001 err.code' + err.code);
        console.log('testCloseRawFdSync001 err.message' + err.message);
        expect(err.code == 9001005).assertTrue();
        done();
      }
    })

    /* *
    * @tc.number  TEST_CLOSERAWFDSYNC_002
    * @tc.name    test closeRawFdSync method throw 401 error code throw 401 error code
    * @tc.desc    get the closeRawFd in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCloseRawFdSync002', 0, async (done: Function) => {
      try {
        let path = (1111 as string | number) as string
        // param path not correct,throw 401 error code
        context.resourceManager.closeRawFdSync(path)
        done();
      } catch (err) {
        console.log('testCloseRawFdSync002 err.code' + err.code);
        console.log('testCloseRawFdSync002 err.message' + err.message);
        expect(err.code == 401).assertTrue();
        done();
      }
    })

    /* *
    * @tc.number  TEST_DEVICE_TYPE_TABLET_001
    * @tc.name    test DEVICE_TYPE_TABLET
    * @tc.desc    get the value of DEVICE_TYPE_TABLET
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 0
    */
    it('testDeviceTypeTable001', 0, async (done: Function) => {
      console.log('testDeviceTypeTable001 0');
      expect(resourceManager.DeviceType.DEVICE_TYPE_TABLET).assertEqual(0x01);
      console.log('testDeviceTypeTable001 1');
      done();
    })

    /* *
    * @tc.number  TEST_DEVICE_TYPE_CAR_001
    * @tc.name    test DEVICE_TYPE_CAR
    * @tc.desc    get the value of DEVICE_TYPE_CAR
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 0
    */
    it('testDeviceTypeCar001', 0, async (done: Function) => {
      console.log('testDeviceTypeCar001 0');
      expect(resourceManager.DeviceType.DEVICE_TYPE_CAR).assertEqual(0x02);
      console.log('testDeviceTypeCar001 1');
      done();
    })

    /* *
    * @tc.number  TEST_DEVICE_TYPE_PC_001
    * @tc.name    test DEVICE_TYPE_PC
    * @tc.desc    get the value of DEVICE_TYPE_PC
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 0
    */
    it('testDeviceTypePC001', 0, async (done: Function) => {
      console.log('testDeviceTypePC001 0');
      expect(resourceManager.DeviceType.DEVICE_TYPE_PC).assertEqual(0x03);
      console.log('testDeviceTypePC001 1');
      done();
    })

    /* *
    * @tc.number  TEST_DEVICE_TYPE_TV_001
    * @tc.name    test DEVICE_TYPE_TV
    * @tc.desc    get the value of DEVICE_TYPE_TV
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 0
    */
    it('testDeviceTypeTV001', 0, async (done: Function) => {
      console.log('testDeviceTypeTV001 0');
      expect(resourceManager.DeviceType.DEVICE_TYPE_TV).assertEqual(0x04);
      console.log('testDeviceTypeTV001 1');
      done();
    })

    /* *
    * @tc.number  TEST_DEVICE_TYPE_WEARABLE_001
    * @tc.name    test DEVICE_TYPE_WEARABLE
    * @tc.desc    get the value of DEVICE_TYPE_WEARABLE
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 0
    */
    it('testDeviceTypeWearable001', 0, async (done: Function) => {
      console.log('testDeviceTypeWearable001 0');
      expect(resourceManager.DeviceType.DEVICE_TYPE_WEARABLE).assertEqual(0x06);
      console.log('testDeviceTypeWearable001 1');
      done();
    })

    /* *
    * @tc.number  TEST_GETSTRINGSYNCRESID_001
    * @tc.name    test getStringSync method
    * @tc.desc    get the string in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetStringSyncResId001', 0, async (done: Function) => {
      let value = context.resourceManager.getStringSync($r('app.string.test_1').id)
      console.log('testGetStringSyncResId001 ' + value);
      expect(value).assertEqual('Test1');
      done();
    })

    /* *
    * @tc.number  TEST_GETSTRINGSYNCRESID_002
    * @tc.name    test getStringSync method
    * @tc.desc    get the string in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetStringSyncResId002', 0, async (done: Function) => {
      let value = context.resourceManager.getStringSync($r('app.string.test_2').id, 3)
      console.log('testGetStringSyncResId002 ' + value);
      expect(value).assertEqual('Test3');
      done();
    })

    /* *
    * @tc.number  TEST_GETSTRINGSYNCRESOURCE_001
    * @tc.name    test getStringSync method
    * @tc.desc    get the string in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetStringSyncResource001', 0, async (done: Function) => {
      let value = context.resourceManager.getStringSync({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.string.test_1').id
      })
      console.log('testGetStringSyncResource001 ' + value);
      expect(value).assertEqual('Test1');
      done();
    })

    /* *
    * @tc.number  TEST_GETSTRINGSYNCRESOURCE_002
    * @tc.name    test getStringSync method
    * @tc.desc    get the string in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetStringSyncResource002', 0, async (done: Function) => {
      let value = context.resourceManager.getStringSync({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: $r('app.string.test_2').id
      }, 3)
      console.log('testGetStringSyncResource002 ' + value);
      expect(value).assertEqual('Test3');
      done();
    })

    /* *
    * @tc.number  TEST_getStringByNameSync_001
    * @tc.name    test getStringByNameSync method
    * @tc.desc    get the string by name in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetStringByNameSync001', 0, async (done: Function) => {
      let value = context.resourceManager.getStringByNameSync('test_1')
      console.log('testGetStringByNameSync001 ' + value);
      expect(value).assertEqual('Test1');
      done();
    })

    /* *
    * @tc.number  TEST_GETSTRINGSYNCRESOURCE_002
    * @tc.name    test getStringSync method
    * @tc.desc    get the string by name in sync mode
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetStringByNameSync002', 0, async (done: Function) => {
      let value = context.resourceManager.getStringByNameSync('test_2', 3)
      console.log('testGetStringByNameSync002 ' + value);
      expect(value).assertEqual('Test3');
      done();
    })

    /* *
    * @tc.number  TEST_getLocales_001
    * @tc.name    test getLocales method
    * @tc.desc    get the locales
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetLocales001', 0, async (done: Function) => {
      let value = context.resourceManager.getLocales(false)
      console.log('testGetLocales001 ' + value);
      expect(value).assertInstanceOf('Array')
      done();
    })

    /* *
    * @tc.number  TEST_getLocales_002
    * @tc.name    test getLocales method
    * @tc.desc    get the locales
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetLocales002', 0, async (done: Function) => {
      let value = context.resourceManager.getLocales(true)
      console.log('testGetLocales002 ' + value);
      expect(value).assertInstanceOf('Array')
      done();
    })

    /* *
    * @tc.number  TEST_getSymbolResId_001
    * @tc.name    test getSymbol method
    * @tc.desc    get the symbol
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetSymbolResId001', 0, async (done: Function) => {
      let value = context.resourceManager.getSymbol(0x02000018)
      console.log('testGetSymbolResId001 ' + value);
      expect(value == 983041).assertTrue()
      done();
    })

    /* *
    * @tc.number  TEST_getSymbolResId_002
    * @tc.name    test getSymbol method  throw 9001006 error code
    * @tc.desc    get the symbol
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetSymbolResId002', 0, async (done: Function) => {
      try {
        let value = context.resourceManager.getSymbol(0x02000016)
        console.log('testGetSymbolResId002 ' + value);
        expect(value !== undefined).assertTrue()
        done();
      } catch (err) {
        console.log('testGetSymbolResId002 errCode ', err.code)
        console.log('testGetSymbolResId002 errMessage ', err.message)
        expect(err.code == 9001006).assertTrue()
        done()
      }
    })

    /* *
    * @tc.number  TEST_getSymbolResId_003
    * @tc.name    test getSymbol method
    * @tc.desc    get the symbol
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetSymbolResId003', 0, async (done: Function) => {
      let value = context.resourceManager.getSymbol(0x02000015)
      console.log('testGetSymbolResId003 ' + value);
      expect(value == 983041).assertTrue()
      done();
    })

    /* *
    * @tc.number  TEST_getSymbolResource_001
    * @tc.name    test getSymbol method
    * @tc.desc    get the symbol
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetSymbolResource001', 0, async (done: Function) => {
      let value = context.resourceManager.getSymbol({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: 0x02000018
      })
      console.log('testGetSymbolResource001 ' + value);
      expect(value == 983041).assertTrue()
      done();
    })

    /* *
    * @tc.number  TEST_getSymbolResId_002
    * @tc.name    test getSymbol method  throw 9001006 error code
    * @tc.desc    get the symbol
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetSymbolResource002', 0, async (done: Function) => {
      try {
        let value = context.resourceManager.getSymbol({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: 0x02000016
      })
        console.log('testGetSymbolResource002 ' + value);
        expect(value !== undefined).assertTrue()
        done();
      } catch (err) {
        console.log('testGetSymbolResource002 errCode ', err.code)
        console.log('testGetSymbolResource002 errMessage ', err.message)
        expect(err.code == 9001006).assertTrue()
        done()
      }
    })

    /* *
    * @tc.number  TEST_getSymbolResId_003
    * @tc.name    test getSymbol method
    * @tc.desc    get the symbol
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetSymbolResource003', 0, async (done: Function) => {
      let value = context.resourceManager.getSymbol({
        bundleName: "com.example.resourcemanagertest",
        moduleName: "entry_test",
        id: 0x02000015
      })
      console.log('testGetSymbolResource003 ' + value);
      expect(value == 983041).assertTrue()
      done();
    })

    /* *
    * @tc.number  TEST_getSymbolByName_001
    * @tc.name    test getSymbolByName method
    * @tc.desc    get the Symbol By Name
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetSymbolByName001', 0, async (done: Function) => {
      let value = context.resourceManager.getSymbolByName('test_1')
      console.log('testGetSymbolByName001 ' + value);
      expect(value == 983041).assertTrue()
      done();
    })

    /* *
    * @tc.number  TEST_getSymbolResId_002
    * @tc.name    test getSymbolByName method throw 9001006 error code
    * @tc.desc    get the Symbol By Name
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetSymbolByName002', 0, async (done: Function) => {
      try {
        let value = context.resourceManager.getSymbolByName('test_2')
        console.log('testGetSymbolByName002 ' + value);
        expect(value !== undefined).assertTrue()
        done();
      } catch (err) {
        console.log('testGetSymbolByName002 errCode ', err.code)
        console.log('testGetSymbolByName002 errMessage ', err.message)
        expect(err.code == 9001006).assertTrue()
        done()
      }
    })

    /* *
    * @tc.number  TEST_getSymbolResId_003
    * @tc.name    test getSymbolByName method
    * @tc.desc    get the Symbol By Name
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testGetSymbolByName003', 0, async (done: Function) => {
      let value = context.resourceManager.getSymbolByName('test_4')
      console.log('testGetSymbolByName003 ' + value);
      expect(value == 983041).assertTrue()
      done();
    })

    console.log('*************end resourceManagerTest*************');
  })
}


