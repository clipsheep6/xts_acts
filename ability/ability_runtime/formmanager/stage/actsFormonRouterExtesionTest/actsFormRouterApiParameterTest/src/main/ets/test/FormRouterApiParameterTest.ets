/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import formHost from '@ohos.app.form.formHost';
import Want from '@ohos.app.ability.Want';
import Base from '@ohos.base';

export default function formRouterApiParameterTest() {
  describe('ActsFormRouterApiParameterTest', function () {

    /**
     * @tc.number: Acts_Form_OnRouterExtension_0100
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: AsyncCallback method set empty formID array Return 401 error code.
     */
    it('Acts_Form_OnRouterExtension_0100', 0, async function (done) {
      console.info('Acts_Form_OnRouterExtension_0100 Start');
      try {
        formHost.setRouterProxy([], (want: Want) => {
          console.info(`formHost recv router event, want: ${JSON.stringify(want)}`);
        }, (err: Base.BusinessError) => {
          console.error(`set router proxy error, code: ${err.code}`);
        })
        done();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      console.info('Acts_Form_OnRouterExtension_0100 End');
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_0200
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: AsyncCallback method set empty formID array Return 401 error code.
     */
    it('Acts_Form_OnRouterExtension_0200', 0, async function (done) {
      console.info('Acts_Form_OnRouterExtension_0200 Start');
      let formIds = '';
      try {
        formHost.setRouterProxy([formIds], (want: Want) => {
          console.info(`formHost recv router event, want: ${JSON.stringify(want)}`);
        }, (err: Base.BusinessError) => {
          console.error(`set router proxy error, code: ${err.code}`);
        })
        done();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      console.info('Acts_Form_OnRouterExtension_0200 End');
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_0300
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: AsyncCallback method set error formID array Return 401 error code.
     */
    it('Acts_Form_OnRouterExtension_0300', 0, async function (done) {
      console.info('Acts_Form_OnRouterExtension_0300 Start');
      let formIds = '123456';
      try {
        formHost.setRouterProxy([formIds], (want: Want) => {
          console.info(`formHost recv router event, want: ${JSON.stringify(want)}`);
        }, (err: Base.BusinessError) => {
          console.error(`set router proxy error, code: ${err.code}`);
        })
        done();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      console.info('Acts_Form_OnRouterExtension_0300 End');
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_0400
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: Promise method set empty formID array Return 401 error code.
     */
    it('Acts_Form_OnRouterExtension_0400', 0, async function (done) {
      console.info('Acts_Form_OnRouterExtension_0400 Start');
      formHost.setRouterProxy([], (want: Want) => {
        console.info(`formHost recv router event, want: ${JSON.stringify(want)}`);
      }).then(() => {
        console.info('formHost set router proxy succes');
      }).catch((err: Base.BusinessError) => {
        console.error(`set router proxy error, code: ${err.code}`);
        expect(err.code).assertEqual(401);
        done();
      })
      console.info('Acts_Form_OnRouterExtension_0400 End');
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_0500
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: Promise method set empty formID array Return 401 error code.
     */
    it('Acts_Form_OnRouterExtension_0500', 0, async function (done) {
      console.info('Acts_Form_OnRouterExtension_0500 Start');
      let formIds = '';
      formHost.setRouterProxy([formIds], (want: Want) => {
        console.info(`formHost recv router event, want: ${JSON.stringify(want)}`);
      }).then(() => {
        console.info('formHost set router proxy succes');
      }).catch((err: Base.BusinessError) => {
        expect(err.code).assertEqual(401);
        done();
      })
      console.info('Acts_Form_OnRouterExtension_0500 End');
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_0600
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: Promise method set error formID array Return 401 error code.
     */
    it('Acts_Form_OnRouterExtension_0600', 0, async function (done) {
      console.info('Acts_Form_OnRouterExtension_0600 Start');
      let formIds = '123456';
      formHost.setRouterProxy([formIds], (want: Want) => {
        console.info(`formHost recv router event, want: ${JSON.stringify(want)}`);
      }).then(() => {
        console.info('formHost set router proxy succes');
      }).catch((err: Base.BusinessError) => {
        expect(err.code).assertEqual(401);
        done();
      })
      console.info('Acts_Form_OnRouterExtension_0600 End');
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_0700
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: AsyncCallback method set empty formID array Return 401 error code.
     */
    it('Acts_Form_OnRouterExtension_0700', 0, async function (done) {
      console.info('Acts_Form_OnRouterExtension_0700 Start');
      try {
        formHost.clearRouterProxy([], (err: Base.BusinessError) => {
          console.error(`set router proxy error, code: ${err.code}`);
        });
        done();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      console.info('Acts_Form_OnRouterExtension_0700 End');
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_0800
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: AsyncCallback method set empty formID array Return 401 error code.
     */
    it('Acts_Form_OnRouterExtension_0800', 0, async function (done) {
      console.info('Acts_Form_OnRouterExtension_0800 Start');
      let formIds = '';
      try {
        formHost.clearRouterProxy([formIds], (err: Base.BusinessError) => {
          console.error(`set router proxy error, code: ${err.code}`);
        });
        done();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      console.info('Acts_Form_OnRouterExtension_0800 End');
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_0900
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: AsyncCallback method set error formID array Return 401 error code.
     */
    it('Acts_Form_OnRouterExtension_0900', 0, async function (done) {
      console.info('Acts_Form_OnRouterExtension_0900 Start');
      let formIds = '123456';
      try {
        formHost.clearRouterProxy([formIds], (err: Base.BusinessError) => {
          console.error(`set router proxy error, code: ${err.code}`);
        });
        done();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      console.info('Acts_Form_OnRouterExtension_0900 End');
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_1000
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: Promise method set empty formID array Return 401 error code.
     */
    it('Acts_Form_OnRouterExtension_1000', 0, async function (done) {
      console.info('Acts_Form_OnRouterExtension_1000 Start');
      formHost.clearRouterProxy([])
        .then(() => {
          console.info('formHost clear router proxy succes');
        })
        .catch((err: Base.BusinessError) => {
          expect(err.code).assertEqual(401);
          done();
        });
      console.info('Acts_Form_OnRouterExtension_1000 End');
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_1100
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: Promise method set empty formID array Return 401 error code.
     */
    it('Acts_Form_OnRouterExtension_1100', 0, async function (done) {
      console.info('Acts_Form_OnRouterExtension_1100 Start');
      let formIds = '';
      formHost.clearRouterProxy([formIds])
        .then(() => {
          console.info('formHost clear router proxy succes');
        })
        .catch((err: Base.BusinessError) => {
          expect(err.code).assertEqual(401);
          done();
        });
      console.info('Acts_Form_OnRouterExtension_1100 End');
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_1200
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: Promise method set error formID array Return 401 error code.
     */
    it('Acts_Form_OnRouterExtension_1200', 0, async function (done) {
      console.info('Acts_Form_OnRouterExtension_1200 Start');
      let formIds = '123456';
      formHost.clearRouterProxy([formIds])
        .then(() => {
          console.info('formHost clear router proxy succes');
        })
        .catch((err: Base.BusinessError) => {
          expect(err.code).assertEqual(401);
          done();
        });
      console.info('Acts_Form_OnRouterExtension_1200 End');
    })
  })
}