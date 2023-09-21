import hilog from '@ohos.hilog';
import common from '@ohos.app.ability.common';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect, TestType, Size, Level } from '@ohos/hypium';
import advertising from '@ohos.advertising';

const TAG: string = 'AdTestTag';
const Domain: number = 0x0000;
const context = getContext(this) as common.Context;
const adRequest = {
  adId: 'testx9dtjwj8hp',
  adType: 7,
  adCount: 2,
  adWidth: 100,
  adHeight: 100,
  adSearchKeyword: 'test'
};

const adOption = {
  adContentClassification: 'W',
  nonPersonalizedAd: 1,
  tagForChildProtection: 1,
};

export default function adsTest() {
  describe('ActsAdsTest', function () {

    /**
     * @tc.number: SUB_CLOUD_ADS_LOAD_AD_0100
     * @tc.name: testLoadAdByCallback
     * @tc.desc: Load ad by callback is not null.
     * @tc.size: LargeTest
     * @tc.type: Function
     * @tc.level: Level0
     */
    it("testLoadAdByCallback", TestType.FUNCTION | Size.LARGETEST | Level.LEVEL0, async function (done) {
      let adLoaderListener = {
        onAdLoadFailure: (errorCode: number, errorMsg: string) => {
          hilog.error(Domain, TAG, 'Callback load ad error, error code is %{public}d, error message is %{public}s.', errorCode, errorMsg);
          expect(errorCode).assertLarger(0);
          expect(errorMsg).assertInstanceOf('String')
          done();
        },
        onAdLoadSuccess: (ads: Array<advertising.Advertisement>) => {
          hilog.info(Domain, TAG, 'request ad success');
          expect(ads[0] != null).assertEqual(true);
          done();
        }
      };
      let load = new advertising.AdLoader(context);
      load.loadAd(adRequest, adOption, adLoaderListener);
    })

  })
}
