/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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
import errorManager from "@ohos.app.ability.errorManager";
import worker, { MessageEvents } from '@ohos.worker';

let sleep = (time: number) => {
  return new Promise<number>((resolve) => setTimeout(resolve, time));
}

export default function unhandledRejectionTest() {
  describe('ActsUnhandledRejectionTest', () => {
    beforeEach(async () => {
      errorManager.off("error", null);
      await sleep(1000);
    })
    afterEach(async () => {
      errorManager.off("error", null);
      await sleep(1000);
    })

    /*
     * @tc.number: ACTS_Register_JsErrorCallback_UnhandledRejection_0100
     * @tc.name: JsError unhandled rejection callback enhancement
     * @tc.desc: When an error is thrown during the resolve process the error would be caught as an unhandled rejection.
     */
    it('ACTS_Register_JsErrorCallback_UnhandledRejection_0100', 0, async (done: Function) => {
      let flag = false;
      let observer: errorManager.ErrorObserver = {
        onUnhandledException(errorMsg) {
          console.log("=====>ACTS_Register_JsErrorCallback_UnhandledRejection_0100<===== onUnhandledException errorMsg: " + errorMsg);
        },
        onException(reason) {
          console.log("=====>ACTS_Register_JsErrorCallback_UnhandledRejection_0100<===== onException, reason:" + reason);
          flag = true;
          expect(reason.message).assertContain("ACTS_Register_JsErrorCallback_UnhandledRejection_0100_error");
        }
      };

      errorManager.on('error', observer);
      new Promise<string>((res) => {
        res("resolved");
      })
        .then(() => {
          throw new Error("ACTS_Register_JsErrorCallback_UnhandledRejection_0100_error");
        });

      setTimeout(() => {
        if (!flag) {
          expect().assertFail();
        }
        done();
      }, 1000);
      await sleep(1000);
    })

    /*
     * @tc.number: ACTS_Register_JsErrorCallback_UnhandledRejection_0200
     * @tc.name: JsError unhandled rejection callback enhancement
     * @tc.desc: When a promise is rejected but does not get caught the promise would be caught as an unhandled rejection.
     */
    it('ACTS_Register_JsErrorCallback_UnhandledRejection_0200', 0, async (done: Function) => {
      let flag = false;

      let observer: errorManager.ErrorObserver = {
        onUnhandledException(errorMsg) {
          console.log("=====>ACTS_Register_JsErrorCallback_UnhandledRejection_0200<===== onUnhandledException errorMsg: " + errorMsg);
        },
        onException(reason) {
          console.log("=====>ACTS_Register_JsErrorCallback_UnhandledRejection_0200<===== onException, reason:" + reason);
          flag = true;
          expect(reason).assertContain("ACTS_Register_JsErrorCallback_UnhandledRejection_0200_rejection");
        }
      };

      errorManager.on('error', observer);
      new Promise<string>((res, rej) => {
        rej("ACTS_Register_JsErrorCallback_UnhandledRejection_0200_rejection");
      })
        .then(() => {
          throw new Error("ACTS_Register_JsErrorCallback_UnhandledRejection_0200_error");
        });

      setTimeout(() => {
        if (!flag) {
          expect().assertFail();
        }
        done();
      }, 1000);
      await sleep(1000);
    })

    /*
     * @tc.number: ACTS_Register_JsErrorCallback_UnhandledRejection_0300
     * @tc.name: JsError unhandled rejection callback enhancement
     * @tc.desc: When an error is thrown during the catch process the error would be caught as an unhandled rejection.
     */
    it('ACTS_Register_JsErrorCallback_UnhandledRejection_0300', 0, async (done: Function) => {
      let flag = false;
      let observer: errorManager.ErrorObserver = {
        onUnhandledException(errorMsg) {
          console.log("=====>ACTS_Register_JsErrorCallback_UnhandledRejection_0300<===== onUnhandledException errorMsg: " + errorMsg);
        },
        onException(reason) {
          console.log("=====>ACTS_Register_JsErrorCallback_UnhandledRejection_0300<===== onException, reason:" + reason);
          flag = true;
          expect(reason.message).assertContain("ACTS_Register_JsErrorCallback_UnhandledRejection_0300_unhandled_error");
        }
      };

      errorManager.on('error', observer);
      new Promise<string>((res, rej) => {
        res("ACTS_Register_JsErrorCallback_UnhandledRejection_0300_resolved");
      })
        .then((s: string) => {
          expect(s).assertEqual("ACTS_Register_JsErrorCallback_UnhandledRejection_0300_resolved");
          throw new Error("ACTS_Register_JsErrorCallback_UnhandledRejection_0300_error");
        })
        .catch((e: Error) => {
          expect(e.message).assertContain("ACTS_Register_JsErrorCallback_UnhandledRejection_0300_error");
          throw new Error("ACTS_Register_JsErrorCallback_UnhandledRejection_0300_unhandled_error");
        });

      setTimeout(() => {
        if (!flag) {
          expect().assertFail();
        }
        done();
      }, 1000);
      await sleep(1000);
    })

    /*
     * @tc.number: ACTS_Register_JsErrorCallback_UnhandledRejection_0400
     * @tc.name: JsError unhandled rejection callback enhancement
     * @tc.desc: When an error is thrown during the catch process the error would be caught as an unhandled rejection.
     */
    it('ACTS_Register_JsErrorCallback_UnhandledRejection_0400', 0, async (done: Function) => {
      let flag = false;

      let observer: errorManager.ErrorObserver = {
        onUnhandledException(errorMsg) {
          console.log("=====>ACTS_Register_JsErrorCallback_UnhandledRejection_0400<===== onUnhandledException errorMsg: " + errorMsg);
        },
        onException(reason) {
          console.log("=====>ACTS_Register_JsErrorCallback_UnhandledRejection_0400<===== onException, reason:" + reason);
          flag = true;
          expect(reason.message).assertContain("ACTS_Register_JsErrorCallback_UnhandledRejection_0400_unhandled_error");
        }
      };

      errorManager.on('error', observer);
      new Promise<string>((res, rej) => {
        rej("ACTS_Register_JsErrorCallback_UnhandledRejection_0400_rejected");
      })
        .then((s: string) => {
          throw new Error("ACTS_Register_JsErrorCallback_UnhandledRejection_0400_error");
        })
        .catch((s: string) => {
          expect(s).assertContain("ACTS_Register_JsErrorCallback_UnhandledRejection_0400_rejected");
          throw new Error("ACTS_Register_JsErrorCallback_UnhandledRejection_0400_unhandled_error");
        });

      setTimeout(() => {
        if (!flag) {
          expect().assertFail();
        }
        done();
      }, 1000);
      await sleep(1000);
    })

    /*
     * @tc.number: ACTS_Register_JsErrorCallback_UnhandledRejection_0500
     * @tc.name: JsError unhandled rejection callback enhancement
     * @tc.desc: When a promise is unresolved it would be caught as an unhandled rejection.
     */
    it('ACTS_Register_JsErrorCallback_UnhandledRejection_0500', 0, async (done: Function) => {
      let flag = false;

      let observer: errorManager.ErrorObserver = {
        onUnhandledException(errorMsg) {
          console.log("=====>ACTS_Register_JsErrorCallback_UnhandledRejection_0500<===== onUnhandledException errorMsg: " + errorMsg);
        },
        onException(reason) {
          console.log("=====>ACTS_Register_JsErrorCallback_UnhandledRejection_0500<===== onException, reason:" + reason);
          flag = true;
          expect(reason.message).assertContain("ACTS_Register_JsErrorCallback_UnhandledRejection_0500_error");
        }
      };

      errorManager.on('error', observer);
      new Promise<string>(() => {
        throw new Error("ACTS_Register_JsErrorCallback_UnhandledRejection_0500_error");
      });

      setTimeout(() => {
        if (!flag) {
          expect().assertFail();
        }
        done();
      }, 1000);
      await sleep(1000);
    })

    /*
     * @tc.number: ACTS_Register_JsErrorCallback_UnhandledRejection_0600
     * @tc.name: JsError unhandled rejection callback enhancement
     * @tc.desc: When trying to register UnhandledRejectionObserver in worker thread a 16200001 will occur.
     */
    it('ACTS_Register_JsErrorCallback_UnhandledRejection_0600', 0, async (done: Function) => {
      let flag = false;
      console.log("=====>ACTS_Register_JsErrorCallback_UnhandledRejection_0600<=====");
      let threadWorker: worker.ThreadWorker;
      threadWorker = new worker.ThreadWorker('entry_test/ets/workers/workerTestRegisterObservers.ts');
      threadWorker.postMessage("InTest host to worker");
      threadWorker.onmessage = (evt: MessageEvents) => {
        console.log('Received event from WorkerTestRegisterObservers');
        expect(Number(evt.data)).assertEqual(16200001);
        flag = !flag;
      }

      setTimeout(() => {
        if (!flag) {
          expect().assertFail();
        }
        done();
      }, 1000);
      await sleep(1000);
    })

    /*
     * @tc.number: ACTS_Register_JsErrorCallback_UnhandledRejection_0800
     * @tc.name: JsError unhandled rejection callback enhancement
     * @tc.desc: Trying to register a null UnhandledRejectionObserver will end up with a 401 error.
     */
    it('ACTS_Register_JsErrorCallback_UnhandledRejection_0800', 0, async (done: Function) => {
      console.log("=====>ACTS_Register_JsErrorCallback_UnhandledRejection_0800<=====");
      try {
        errorManager.on('error', null);
        expect().assertFail();
        done();
      } catch (e) {
        console.info("====>ACTS_Register_JsErrorCallback_UnhandledRejection_0800 catch " + JSON.stringify(e));
        expect(e.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number: ACTS_Register_JsErrorCallback_UnhandledRejection_0900
     * @tc.name: JsError unhandled rejection callback enhancement
     * @tc.desc: When an error is thrown during the parsing process in try catch, it will be captured as an unhandled rejection.
     */
    it('ACTS_Register_JsErrorCallback_UnhandledRejection_0900', 0, async (done) => {
      console.log("=====>ACTS_Register_JsErrorCallback_UnhandledRejection_0900<=====");

      let flag = false;

      let errorObserver: errorManager.ErrorObserver = {
        onUnhandledException(errMsg: string) {
          expect().assertFail();
          done();
        },
        onException(err: Error) {
          expect().assertFail();
          done();
        }
      };

      let unhandledRejectionObserver: errorManager.UnhandledRejectionObserver = (reason: Error) => {
        flag = true;
        expect(reason.message).assertContain("ACTS_Register_JsErrorCallback_UnhandledRejection_0900_Error");
      };

      errorManager.on('unhandledRejection', unhandledRejectionObserver);
      errorManager.on('error', errorObserver);

      try {
        new Promise<void>((res) => {
          res();
        }).then(() => {
          throw new Error("ACTS_Register_JsErrorCallback_UnhandledRejection_0900_Error")
        });
      } catch (e) {
        expect().assertFail();
        done();
      }

      setTimeout(() => {
        expect(flag).assertTrue();
        done();
      }, 1000);

      await sleep(1000);
    })

    /*
     * @tc.number: ACTS_Register_JsErrorCallback_UnhandledRejection_1000
     * @tc.name: JsError unhandled rejection callback enhancement
     * @tc.desc: Construct promise nested promise 
     */
    it('ACTS_Register_JsErrorCallback_UnhandledRejection_1000', 0, async (done) => {
      console.log("=====>ACTS_Register_JsErrorCallback_UnhandledRejection_1000<=====");

      let flag = false;

      let errorObserver: errorManager.ErrorObserver = {
        onUnhandledException(errMsg: string) {
          expect().assertFail();
          done();
        },
        onException(err: Error) {
          expect().assertFail();
          done();
        }
      };

      let unhandledRejectionObserver: errorManager.UnhandledRejectionObserver = (reason: Error) => {
        flag = true;
        expect(reason.message).assertContain("ACTS_Register_JsErrorCallback_UnhandledRejection_1000_Error");
      };

      errorManager.on('unhandledRejection', unhandledRejectionObserver);
      errorManager.on('error', errorObserver);

      try {
        new Promise<void>((res) => {
          res();
        }).then(() => {
          new Promise<void>((res) => {
            res();
          }).then(() => {
            throw new Error("ACTS_Register_JsErrorCallback_UnhandledRejection_1000_Error");
          })
        });
      } catch (e) {
        expect().assertFail();
        done();
      }

      setTimeout(() => {
        expect(flag).assertTrue();
        done();
      }, 1000);

      await sleep(1000);
    })

    /*
     * @tc.number: ACTS_Unregister_JsErrorCallback_UnhandledRejection_0100
     * @tc.name: JsError unhandled rejection callback enhancement
     * @tc.desc: Trying to unregister a registered UnhandledRejectionObserver will succeed.
     */
    it('ACTS_Unregister_JsErrorCallback_UnhandledRejection_0100', 0, async (done: Function) => {

      let oldObserver: errorManager.ErrorObserver = {
        onUnhandledException(errorMsg) {
          console.log("ACTS_Unregister_JsErrorCallback_UnhandledRejection_0100 onUnhandledException errorMsg: " + errorMsg);
        },
        onException(reason) {
          console.log("ACTS_Unregister_JsErrorCallback_UnhandledRejection_0100 onException, reason:" + reason);
          expect().assertFail();
        }
      };

      let id = errorManager.on('error', oldObserver);

      setTimeout(() => {
        errorManager.off("error", id, () => {
          done();
        });
      }, 1000);
      await sleep(1000);

      let flag = false;
      let newObserver: errorManager.ErrorObserver = {
        onUnhandledException(errorMsg) {
          console.log("=====>ACTS_Unregister_JsErrorCallback_UnhandledRejection_0100<===== onUnhandledException errorMsg: " + errorMsg);
        },
        onException(reason) {
          console.log("=====>ACTS_Unregister_JsErrorCallback_UnhandledRejection_0100<===== onException reason:" + reason);
          flag = true;
          expect(reason.message).assertContain("ACTS_Unregister_JsErrorCallback_UnhandledRejection_0100_error");
        }
      };

      errorManager.on("error", newObserver);
      new Promise<string>((res, rej) => {
        res("ACTS_Unregister_JsErrorCallback_UnhandledRejection_0100_resolved");
      })
        .then((s: string) => {
          expect(s).assertContain("ACTS_Unregister_JsErrorCallback_UnhandledRejection_0100_resolved");
          throw new Error("ACTS_Unregister_JsErrorCallback_UnhandledRejection_0100_error");
        });

      setTimeout(() => {
        if (!flag) {
          expect().assertFail();
        }
        done();
      }, 1000);
      await sleep(1000);
    })

    /*
     * @tc.number: ACTS_Unregister_JsErrorCallback_UnhandledRejection_0200
     * @tc.name: JsError unhandled rejection callback enhancement
     * @tc.desc: Trying to unregister all registered UnhandledRejectionObservers will succeed.
     */
    it('ACTS_Unregister_JsErrorCallback_UnhandledRejection_0200', 0, async (done: Function) => {
      let observer1: errorManager.ErrorObserver = {
        onUnhandledException(errorMsg) {
          expect().assertFail();
        },
        onException(reason) {
          expect().assertFail();
        }
      };
      let observer2: errorManager.ErrorObserver = {
        onUnhandledException(errorMsg) {
          expect().assertFail();
        },
        onException(reason) {
          expect().assertFail();
        }
      };
      let observer3: errorManager.ErrorObserver = {
        onUnhandledException(errorMsg) {
          expect().assertFail();
        },
        onException(reason) {
          expect().assertFail();
        }
      };

      let num1 = errorManager.on('error', observer1);
      let num2 = errorManager.on('error', observer2);
      let num3 = errorManager.on('error', observer3);

      setTimeout(() => {
        errorManager.off("error", num1);
        errorManager.off("error", num2);
        errorManager.off("error", num3);
      }, 1000);
      await sleep(1000);

      let flag = false;

      let newObserver: errorManager.ErrorObserver = {
        onUnhandledException(errorMsg) {
          console.log("=====>ACTS_Unregister_JsErrorCallback_UnhandledRejection_0200<===== onUnhandledException errorMsg: " + errorMsg);
        },
        onException(reason) {
          console.log("=====>ACTS_Unregister_JsErrorCallback_UnhandledRejection_0200<===== onException reason:" + reason);
          flag = true;
          expect(reason.message).assertContain("ACTS_Unregister_JsErrorCallback_UnhandledRejection_0200_error");
        }
      };

      errorManager.on("error", newObserver);
      new Promise<string>((res, rej) => {
        res("ACTS_Unregister_JsErrorCallback_UnhandledRejection_0200_resolved");
      })
        .then((s: string) => {
          expect(s).assertContain("ACTS_Unregister_JsErrorCallback_UnhandledRejection_0200_resolved");
          throw new Error("ACTS_Unregister_JsErrorCallback_UnhandledRejection_0200_error");
        });

      setTimeout(() => {
        if (!flag) {
          expect().assertFail();
        }
        done();
      }, 1000);
      await sleep(1000);
    })

    /*
     * @tc.number: ACTS_Unregister_JsErrorCallback_UnhandledRejection_0300
     * @tc.name: JsError unhandled rejection callback enhancement
     * @tc.desc: Trying to unregister an unregistered UnhandledRejectionObserver will end up with a 16300004 error.
     */
    it('ACTS_Unregister_JsErrorCallback_UnhandledRejection_0300', 0, async (done: Function) => {
      try {
        errorManager.off('error', -1);
        expect().assertFail();
      } catch (e) {
        expect(e.code).assertEqual(16000003);
      }

      setTimeout(() => {
        done();
      }, 1000);
      await sleep(1000);
    })

    /*
     * @tc.number: ACTS_Unregister_JsErrorCallback_UnhandledRejection_0400
     * @tc.name: JsError unhandled rejection callback enhancement
     * @tc.desc: Trying to unregister a null UnhandledRejectionObserver will end up with a 401 error.
     */
    it('ACTS_Unregister_JsErrorCallback_UnhandledRejection_0400', 0, async (done: Function) => {
      console.log("=====>ACTS_Unregister_JsErrorCallback_UnhandledRejection_0400<=====");
      try {
        errorManager.off('error', null);
        expect().assertFail();
        done();
      } catch (e) {
        console.info("====>ACTS_Unregister_JsErrorCallback_UnhandledRejection_0400 catch " + JSON.stringify(e));
        expect(e.code).assertEqual(401);
        done();
      }

      setTimeout(() => {
        done();
      }, 1000);
      await sleep(1000);
    })

    /*
     * @tc.number: ACTS_Unregister_JsErrorCallback_UnhandledRejection_0500
     * @tc.name: JsError unhandled rejection callback enhancement
     * @tc.desc: Trying to unregister UnhandledRejectionObserver in worker will end up with a 16200001 error.
     */
    it('ACTS_Unregister_JsErrorCallback_UnhandledRejection_0500', 0, async (done: Function) => {
      let flag = false;
      console.log("=====>ACTS_Unregister_JsErrorCallback_UnhandledRejection_0500<=====");

      let observer: errorManager.ErrorObserver = {
        onUnhandledException(errorMsg) {
          console.log("THIS SHOULD NEVER SHOW UP");
        },
        onException(reason) {
          console.log("THIS SHOULD NEVER SHOW UP");
        }
      };

      errorManager.on('error', observer);

      let threadWorker: worker.ThreadWorker;
      threadWorker = new worker.ThreadWorker('entry_test/ets/workers/workerTestUnregisterObservers.ts');
      threadWorker.postMessage("from main thread");
      threadWorker.onmessage = (evt: MessageEvents) => {
        console.log('Received event from WorkerTestUnregisterObservers');
        expect(Number(evt.data)).assertEqual(16200001);
        flag = !flag;
      }
      await sleep(1000);

      setTimeout(() => {
        if (!flag) {
          expect().assertFail();
        }
        done();
      }, 2000);
      await sleep(1000);
    })
  })
}
