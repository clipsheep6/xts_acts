// @ts-nocheck
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "deccjsunit/index.ets"

export default function HelloWorldTestJsunit() {
  describe('HelloWorldTest', function () {
    async function sleep(time) {
      return new Promise((resolve, reject) => {
        setTimeout(() => {
          resolve()
        }, time)
      }).then(() => {
        console.info( `sleep ${time} over...`)
      })
    }

    it('HelloWorldTest001', 0, async function (done) {
      console.info('dyhlog HelloWorldTest001 START');
      var result = true;
      expect(result).assertEqual(true);
      done();
    })
  })
}