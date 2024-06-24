import { describe, it, beforeAll, expect } from '@ohos/hypium'
import fs from '@ohos.file.fs';
import image from '@ohos.multimedia.image';
import common from '@ohos.app.ability.common';
import hilog from '@ohos.hilog';
import { BusinessError } from '@ohos.base';

let testContext: common.UIAbilityContext;

export default function abilityTest() {
  describe('ActsImageDecodingTest', () => {
    beforeAll(async () => {
      testContext = AppStorage.get<common.UIAbilityContext>('testContext') as common.UIAbilityContext;
    });

    let fdNumber: number;
    const getFd = async (fileName: string) => {
      let jpepExifUint8Array: Uint8Array = testContext.resourceManager.getRawFileContentSync(fileName);
      let filePath = testContext.cacheDir + '/' + fileName;
      let file = fs.openSync(filePath, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
      fs.writeSync(file.fd, jpepExifUint8Array.buffer);
      fdNumber = file.fd;
    }

    const getResult = async (width: number, height: number, desiredPixelFormat: number,) => {
      const imageSourceApi = image.createImageSource(fdNumber);
      hilog.info(0x0000, 'testTag', '%{public}s', `CPF_1:${JSON.stringify(await imageSourceApi.getImageInfo())}`);
      let decodingOptions: image.DecodingOptions = {
        desiredSize: {
          width: width, height: height
        },
        desiredPixelFormat: desiredPixelFormat,
      }
      let pixelMap = await imageSourceApi.createPixelMap(decodingOptions);
      imageSourceApi.release();
      hilog.info(0x0000, 'testTag', '%{public}s', `CPF_2:${JSON.stringify(await pixelMap.getImageInfo())}`);
      return pixelMap;
    }

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_YUV311_0100
  * @tc.name      : createPixelMap
  * @tc.desc      : createPixelMap
  * @tc.size      : MediumTest
  * @tc.type      : Function
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_YUV311_0100', 0, async (done: Function) => {
      getFd('test-tree-311.jpg')
      try {
        const pixelMap: image.PixelMap = await getResult(480, 360, image.PixelMapFormat.NV12)
        hilog.info(0x0000, 'testTag', '%{public}s', `CPF++_1:${JSON.stringify(await pixelMap.getImageInfo())}`);
      } catch (err) {
        hilog.info(0x0000, 'testTag', '%{public}s', `CPF++_2`);
      }
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_YUV311_0200
  * @tc.name      : createPixelMap
  * @tc.desc      : createPixelMap
  * @tc.size      : MediumTest
  * @tc.type      : Function
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_YUV311_0200', 0, async (done: Function) => {
      getFd('test-tree-311.jpg')
      try {
        const pixelMap: image.PixelMap = await getResult(480, 360, image.PixelMapFormat.NV21)
        hilog.info(0x0000, 'testTag', '%{public}s', `CPF++_1:${JSON.stringify(await pixelMap.getImageInfo())}`);
      } catch (err) {
        hilog.info(0x0000, 'testTag', '%{public}s', `CPF++_2`);
      }
      done();
    })

  })
}