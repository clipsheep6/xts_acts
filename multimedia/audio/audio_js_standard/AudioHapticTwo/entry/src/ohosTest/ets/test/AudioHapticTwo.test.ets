/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
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
import { afterAll, afterEach, beforeAll, beforeEach, describe, expect, it } from '@ohos/hypium';
import audioHaptic from '@ohos.multimedia.audioHaptic';
import fileIo from '@ohos.file.fs';
import hilog from '@ohos.hilog';
import { BusinessError } from '@ohos.base';
import { common } from '@kit.AbilityKit';

const TAG = "AudioHapticTwoTest";
const DOMAIN: number = 0x0001;

export default function AudioHapticTwo() {
  describe('AudioHapticTwoTest', () => {

    let audioHapticManager: audioHaptic.AudioHapticManager;
    let notificationAudioUri: string = '';
    let notificationHapticUri: string = '';
    let notificationSourceId: number = -1;

    let copyAndCreateSandboxFile = async (resourcePath: string) => {
      let context = AppStorage.get<common.UIAbilityContext>('TestAbilityContext') as common.UIAbilityContext;
      hilog.info(DOMAIN, TAG, 'copyAndCreateSandboxFile context: %{public}s', JSON.stringify(context!.abilityInfo));

      let resMgr = context!.resourceManager;
      // 1.读取文件
      let uint8Array: Uint8Array = resMgr.getRawFileContentSync(resourcePath);

      let fileName = resourcePath.substring(resourcePath.lastIndexOf('/') + 1);
      hilog.info(DOMAIN, TAG, 'fileName: %{public}s', fileName);

      // 2.创建沙箱文件
      let filePath = context!.filesDir + '/' + fileName;
      hilog.info(DOMAIN, TAG, 'filePath: %{public}s', filePath);

      if (fileIo.accessSync(filePath)) {
        fileIo.unlinkSync(filePath);
      }

      let file: fileIo.File | null = null;
      try {
        // 3.resource下文件写入沙箱文件
        file = fileIo.openSync(filePath, fileIo.OpenMode.READ_WRITE | fileIo.OpenMode.CREATE);
        let count: number = fileIo.writeSync(file.fd, uint8Array.buffer);
        hilog.info(DOMAIN, TAG, 'write buffer result size: %{public}d', count);
      } catch (error) {
        hilog.error(DOMAIN, TAG, 'filePath: %{public}s', filePath);
      } finally {
        if (file != null) {
          fileIo.closeSync(file);
        }
      }

      return filePath;
    }


    beforeAll(async () => {
      hilog.info(DOMAIN, TAG, 'beforeAll function come in');
      audioHapticManager = audioHaptic.getAudioHapticManager();
      try {
        notificationAudioUri = await copyAndCreateSandboxFile('notification.ogg');
        notificationHapticUri = await copyAndCreateSandboxFile('notification.json');

        hilog.info(DOMAIN, TAG, 'notificationAudioUri: %{public}s', notificationAudioUri);
        hilog.info(DOMAIN, TAG, 'notificationHapticUri: %{public}s', notificationHapticUri);

      } catch (error) {
        hilog.error(DOMAIN, TAG, 'registerSource fail: %{public}s', JSON.stringify(error));
      }
      notificationSourceId = await audioHapticManager.registerSource(notificationAudioUri, notificationHapticUri);
      hilog.info(DOMAIN, TAG, 'notificationSourceId: %{public}d', notificationSourceId);
    })

    beforeEach(() => {
      hilog.info(DOMAIN, TAG, 'beforeEach function come in');
    })

    afterEach(() => {
      hilog.info(DOMAIN, TAG, 'afterEach function come in');
    })

    afterAll(() => {
      hilog.info(DOMAIN, TAG, 'afterAll function come in');
      audioHapticManager.unregisterSource(notificationSourceId);
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_AUDIO_AUDIOHAPTIC_CREATEPLAYER_0100
     * @tc.name      : Notification_createPlayer_release
     * @tc.desc      : Notification_createPlayer_release
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it("SUB_MULTIMEDIA_AUDIO_AUDIOHAPTIC_CREATEPLAYER_0100", 2, (done: Function) => {
      hilog.info(DOMAIN, TAG, '---SUB_MULTIMEDIA_AUDIO_AUDIOHAPTIC_CREATEPLAYER_0100 begin---');

      let audioHapticPlayerOptions: audioHaptic.AudioHapticPlayerOptions = {
        muteAudio: true,
        muteHaptics: true
      }

      try {
        audioHapticManager.createPlayer(notificationSourceId, audioHapticPlayerOptions)
          .then(async (data: audioHaptic.AudioHapticPlayer) => {
            hilog.info(DOMAIN, TAG, 'createPlayer success.');

            if (data != null) {
              await data.release();
              hilog.info(DOMAIN, TAG, 'AudioHapticPlayer release success');
              expect(true).assertTrue();
            } else {
              expect(false).assertTrue();
            }
            done();
          })
          .catch((err: BusinessError) => {
            hilog.info(DOMAIN, TAG, 'createPlayer fail: %{public}s', JSON.stringify(err));
            expect(false).assertTrue();
            done();
          });
      } catch (err) {
        hilog.info(DOMAIN, TAG, 'createPlayer fail: %{public}s', JSON.stringify(err));
        expect(false).assertTrue();
        done();
      }

      hilog.info(DOMAIN, TAG, '---SUB_MULTIMEDIA_AUDIO_AUDIOHAPTIC_CREATEPLAYER_0100 end---');
    })

  })
}