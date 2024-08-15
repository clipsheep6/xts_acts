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
import Base from '@ohos.base';
import shortcutManager from '@ohos.bundle.shortcutManager';
import launcherBundleManager from '@ohos.bundle.launcherBundleManager';
import hilog from '@ohos.hilog';

let iconBaseStr: string = 'data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAACkAAAApCAYAAACoYAD2AAAAGXRFWHRTb2Z0d2FyZQB' +
  'BZG9iZSBJbWFnZVJlYWR5ccllPAAAAyVpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2Vo' +
  'aUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDYuMC1jM' +
  'DA2IDc5LjE2NDc1MywgMjAyMS8wMi8xNS0xMTo1MjoxMyAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOT' +
  'k5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29' +
  'tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9i' +
  'ZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIDIyLjMgKE1hY2ludG9zaCkiI' +
  'HhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6ODQxMEIzN0QyRjQ1MTFFRUJFNUNFRTAwRjBCQTg0NkYiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaW' +
  'Q6ODQxMEIzN0UyRjQ1MTFFRUJFNUNFRTAwRjBCQTg0NkYiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDo4NDE' +
  'wQjM3QjJGNDUxMUVFQkU1Q0VFMDBGMEJBODQ2RiIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDo4NDEwQjM3QzJGNDUxMUVFQkU1Q0VFMDBGMEJB' +
  'ODQ2RiIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/PjnaUHsAAARqSURBVHjaz' +
  'FlNbFVFFP7u7Xul4ceYtkANBCUYFkQCttUFC8WkpIKEgMqqtZgILmRTMLIwwZgYWWCsbGRTSUi1KyT8pAoGE4kLN20KpmICIWk1EmgpBFtLsK/t9T' +
  'sz0+a919uZeT/Fd5KZc++8me98M2/mnDPvBfg4ghKjEJjnCNtZ72Cp5fNq6gSKLxO010/dy3Kez10z9qe5KJVNEtiMKRylfgGPX7oR4hD15XSSYUa' +
  'XCAdJ8Kf/iSCUXbEvPNIknWQrP/wcpSCaR2smyQj1nMEXKCURPsJrhuQUOlGKYniFZNtAvTbHryP9oM3fGOFFfglWLc6ugSmjLGMsZaZ9kmURy2Jk' +
  'e4iZk4l/5hizxJM4+Ynvq3MSnGAZBqpWAW+8DDz/lG6+egc4/Rtwd4Av1SxJ9RXpTZTSY5Y+wzGbgY01ms+V2xzTB9z704xJOIhGqAtwOLrHx8o5C' +
  'crM7wLvbAHa6N6fqMjsMjYOHPoOOP4DX6qMUZkUUd9rBI6+xoUrzxwz8gg42AWcuMSXpWaV5yZ6XyDLrStJgi3ctV+9Gf+xEPhyFxeOE2r/ng0r9J' +
  'h929i+M36MTFTwUiTW8SMbaqwMymUl/5ZxsR9zL1U+yUU57LfLlx8BhhjkljGIDn7oN6bqEy7VA7NP42UktCLwoDTV+x/FtyVODRrtKQp/1N4ntLo' +
  'MbobaGn+D65exqjDaUxS+4/CETu8T+BtMlmmDyTL/MT74ocv1XB30Nzg5lal9ROFPpPnVnFeSDvebnvmNfAp/Sb4rCR1Jhv8A9p7xMxgGmdolgiv4' +
  'MxEr3z0pzvYEHfV+Aj5M2btWL2T1r9EWERzBE1zlzB2ScCYFSR1Jjl8Ezl0Hdm/QIS77cEjXzl917Gr7hZ5obPY2S03qUHqK/W71Z4VSa2S2OfP0Q' +
  'yRr/pcOdypGhTETkq/tWZabJrEIZqVewLgJnyvNuzszGkl4nX+TLKxYw5V83b6SF34Gtr5EJ72heCuZcK5gyiQLrwKfMcFYmLSERYa2C2eZPGwCGt' +
  'bE99nD8ilzgQ+6spKSQpy5yoAadRJhIygy/JDVAqMtIjiCJ7iCn78zNwlr9dPMWHZ5ZvtRpnaJ4Aq+2r95k2Tgb67HvEpzMRKMjcv9DZaFmdpHFH6' +
  'hezLK4fIkp1fisNK+97OokD1pEozeO/4G+4ZYPTLaUxR+oQlGZw4Jxslu8UNGe0qnZ4IR2hKM+4wye065jb1L/zg0oCOJaHl3ieAKviPBCEMTqKwJ' +
  'hlyW9n6rb3mzrkHjOllov2iShSmt5V3ax2LQBUfw1CXMnWCMB/gousaTtc773r0+j3v3cwXcu4HfhWQHO71Vsr9gBPg6wcpNchpskSlZv8TGGppum' +
  '2uM7xWD/EJWsjNu5BQmArvLKNoY4UV+oTnjTSX505/hFZpZ9vDpQIkRPKB4ZfnIY2x8vyQIah7H4iNOgDa2vAL5FwDe6X0xpVvZFx7WzDzAZXZ8kQ' +
  'S38y6zgyRr6SdXs/3x/49j5D8BBgDvR27YO5AMoAAAAABJRU5ErkJggg==';
let shortcutInfo: launcherBundleManager.ShortcutInfo = {
  id: 'shortcutInfoid',
  bundleName: 'com.acts.createdesktopshortcutbynormalapp',
  moduleName: 'moduleName',
  hostAbility: 'hostAbility',
  icon: iconBaseStr,
  iconId: 1,
  label: 'label',
  labelId: 1,
  wants: [],
  appIndex: 0,
  sourceType: 0
};
let userId: number = 100;

export default function abilityTest() {
  describe('ActsAbilityTest', function () {

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0100
     * @tc.name: Add desktop shortcut by normal app.
     * @tc.desc: Desktop shortcut is not allowed to be added by normal app, return 202.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0100', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0100 start');
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfo, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0100 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0100 err:%{public}s',
            JSON.stringify(err));
          expect(err.code).assertEqual(202);
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0100 errCode:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0200
     * @tc.name: Delete desktop shortcut by normal app.
     * @tc.desc: Desktop shortcut is not allowed to be deleted by normal app, return 202.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0200', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0200 start');
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfo, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0200 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0200 err:%{public}s',
            JSON.stringify(err));
          expect(err.code).assertEqual(202);
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0200 errCode:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0300
     * @tc.name: Query desktop shortcut by normal app.
     * @tc.desc: Desktop shortcut is not allowed to be queried by normal app, return 202.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0300', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0300 start');
      try {
        await shortcutManager.getAllDesktopShortcutInfo(userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0300 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0300 err:%{public}s',
            JSON.stringify(err));
          expect(err.code).assertEqual(202);
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0300 errCode:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
    })
  })
}