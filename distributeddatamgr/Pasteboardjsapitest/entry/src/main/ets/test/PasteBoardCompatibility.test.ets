/*
* Copyright (c) 2024 Huawei Device Co., Ltd.
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from '@ohos/hypium';
import { BusinessError } from '@ohos.base';
import pasteboard from '@ohos.pasteboard';
import unifiedDataChannel from '@ohos.data.unifiedDataChannel';
import image from '@ohos.multimedia.image';
import Want from '@ohos.app.ability.Want';
import uniformTypeDescriptor from '@ohos.data.uniformTypeDescriptor';
import UDC from '@ohos.data.unifiedDataChannel';
import UTD from '@ohos.data.uniformTypeDescriptor'

const ARRAY_BUFFER = new ArrayBuffer(256)
let TAG = "ttt"
let systemPasteboard: pasteboard.SystemPasteboard = pasteboard.getSystemPasteboard()
let data = new UDC.UnifiedData();


export default function PasteBoardCompatibilityTest() {
  describe('PasteBoardCompatibilityTest', () => {
    beforeAll(() => {
    })
    beforeEach(() => {
      systemPasteboard.clearDataSync();
    })
    afterEach(() => {
      systemPasteboard.clearDataSync();
    })
    afterAll(() => {
    })

    /**
     * @tc.name pasteboardCompatibilityTest002
     * @tc.number SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest0200
     * @tc.desc setUnifiedData getData Type is Text
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest0200', 0, async () => {
      let textData = new unifiedDataChannel.UnifiedData();
      let GetDelayTextData = ((dataType:string) => {
        let text = new unifiedDataChannel.Text();
        text.details = {
          Key: 'text',
          Value: 'text'
        };
        textData.addRecord(text);
        return textData;
      })
      textData.properties.shareOptions = unifiedDataChannel.ShareOptions.CROSS_APP;
      textData.properties.getDelayData = GetDelayTextData;
      expect(systemPasteboard.hasDataSync()).assertFalse();
      await systemPasteboard.setUnifiedData(textData).then(() => {
        expect(systemPasteboard.hasDataSync()).assertTrue();
        console.info(TAG + 'Set textData Success');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Set textData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
      let result = systemPasteboard.getData();
      await result.then((data) => {
        console.info(TAG + 'Get Paste Data Success,mimeType:' + data.getPrimaryMimeType() + ',html:' + data.getPrimaryHtml()
          + ',text:' + data.getPrimaryText() + ',uri:' + data.getPrimaryUri());
        expect(data.getPrimaryMimeType()).assertEqual('general.text');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Get textData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
    })


    /**
     * @tc.name pasteboardCompatibilityTest003
     * @tc.number SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest0300
     * @tc.desc setUnifiedData getData Type is HyperLink
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest0300', 0, async () => {
      let hyperLinkData = new unifiedDataChannel.UnifiedData();
      let GetDelayLinkData = ((dataType:string) => {
        let link = new unifiedDataChannel.Hyperlink();
        link.details = {
          Key: 'hyperLink',
          Value: 'hyperLink'
        };
        link.url = 'url';
        link.description = 'description';
        hyperLinkData.addRecord(link);
        return hyperLinkData;
      })
      hyperLinkData.properties.shareOptions = unifiedDataChannel.ShareOptions.CROSS_APP;
      hyperLinkData.properties.getDelayData = GetDelayLinkData;
      expect(systemPasteboard.hasDataSync()).assertFalse();
      await systemPasteboard.setUnifiedData(hyperLinkData).then(() => {
        expect(systemPasteboard.hasDataSync()).assertTrue();
        console.info(TAG + 'Set hyperLinkData Success');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Set hyperLinkData Fail:' + error);
        expect().assertFail();
      })
      let result = systemPasteboard.getData();
      await result.then((data) => {
        console.info(TAG + 'Get Paste Data Success,mimeType:' + data.getPrimaryMimeType() + ',html:' + data.getPrimaryHtml()
          + ',text:' + data.getPrimaryText() + ',uri:' + data.getPrimaryUri());
        expect(data.getPrimaryMimeType()).assertEqual('text/plain');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Get hyperLinkData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
    })


    /**
     * @tc.name pasteboardCompatibilityTest004
     * @tc.number SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest0400
     * @tc.desc setUnifiedData getData Type is Html
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest0400', 0, async () => {
      let htmlData = new unifiedDataChannel.UnifiedData();
      let GetDelayHtmlData = ((dataType:string) => {
        let html = new unifiedDataChannel.HTML();
        html.details = {
          Key: 'html',
          Value: 'html'
        };
        html.htmlContent = 'htmlContent';
        html.plainContent = 'plainContent';
        htmlData.addRecord(html);
        return htmlData;
      })
      htmlData.properties.shareOptions = unifiedDataChannel.ShareOptions.CROSS_APP;
      htmlData.properties.getDelayData = GetDelayHtmlData;
      expect(systemPasteboard.hasDataSync()).assertFalse();
      await systemPasteboard.setUnifiedData(htmlData).then(() => {
        expect(systemPasteboard.hasDataSync()).assertTrue();
        console.info(TAG + 'Set htmlData Success');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Set htmlData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
      let result = systemPasteboard.getData();
      await result.then((data) => {
        console.info(TAG + 'Get Paste Data Success,mimeType:' + data.getPrimaryMimeType() + ',html:' + data.getPrimaryHtml()
          + ',text:' + data.getPrimaryText() + ',uri:' + data.getPrimaryUri());
        expect(data.getPrimaryMimeType()).assertEqual('text/html');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Get htmlData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
    })


    /**
     * @tc.name pasteboardCompatibilityTest005
     * @tc.number SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest0500
     * @tc.desc setUnifiedData getData Type is File
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest0500', 0, async () => {
      let fileData = new unifiedDataChannel.UnifiedData();
      let GetDelayFileData = ((dataType:string) => {
        let file = new unifiedDataChannel.File();
        file.details = {
          Key: 'file',
          Value: 'file'
        };
        file.uri = 'uri';
        fileData.addRecord(file);
        return fileData;
      })
      fileData.properties.shareOptions = unifiedDataChannel.ShareOptions.CROSS_APP;
      fileData.properties.getDelayData = GetDelayFileData;
      expect(systemPasteboard.hasDataSync()).assertFalse();
      await systemPasteboard.setUnifiedData(fileData).then(() => {
        expect(systemPasteboard.hasDataSync()).assertTrue();
        console.info(TAG + 'Set fileData Success');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Set fileData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
      let result = systemPasteboard.getData();
      await result.then((data) => {
        console.info(TAG + 'Get Paste Data Success,mimeType:' + data.getPrimaryMimeType() + ',html:' + data.getPrimaryHtml()
          + ',text:' + data.getPrimaryText() + ',uri:' + data.getPrimaryUri());
        expect(data.getPrimaryMimeType()).assertEqual('text/uri');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Get fileData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
    })


    /**
     * @tc.name pasteboardCompatibilityTest006
     * @tc.number SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest0600
     * @tc.desc setUnifiedData getData Type is Folder
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest0600', 0, async () => {
      let folderData = new unifiedDataChannel.UnifiedData();
      let GetDelayFolderData = ((dataType:string) => {
        let folder = new unifiedDataChannel.File();
        folder.details = {
          Key: 'folder',
          Value: 'folder'
        };
        folder.uri = 'folderUri';
        folderData.addRecord(folder);
        return folderData;
      })
      folderData.properties.shareOptions = unifiedDataChannel.ShareOptions.CROSS_APP;
      folderData.properties.getDelayData = GetDelayFolderData;
      expect(systemPasteboard.hasDataSync()).assertFalse();
      await systemPasteboard.setUnifiedData(folderData).then(() => {
        expect(systemPasteboard.hasDataSync()).assertTrue();
        console.info(TAG + 'Set folderData Success');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Set folderData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
      let result = systemPasteboard.getData();
      await result.then((data) => {
        console.info(TAG + 'Get Paste Data Success,mimeType:' + data.getPrimaryMimeType() + ',html:' + data.getPrimaryHtml()
          + ',text:' + data.getPrimaryText() + ',uri:' + data.getPrimaryUri());
        expect(data.getPrimaryUri()).assertEqual('folderUri');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Get folderData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
    })


    /**
     * @tc.name pasteboardCompatibilityTest007
     * @tc.number SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest0700
     * @tc.desc setUnifiedData getData Type is image
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest0700', 0, async () => {
      let imageData = new unifiedDataChannel.UnifiedData();
      let GetDelayImageData = ((dataType:string) => {
        let image = new unifiedDataChannel.Image();
        image.details = {
          Key: 'image',
          Value: 'image'
        };
        image.uri = 'imageUri';
        imageData.addRecord(image);
        return imageData;
      })
      imageData.properties.shareOptions = unifiedDataChannel.ShareOptions.CROSS_APP;
      imageData.properties.getDelayData = GetDelayImageData;
      expect(systemPasteboard.hasDataSync()).assertFalse();
      await systemPasteboard.setUnifiedData(imageData).then(() => {
        expect(systemPasteboard.hasDataSync()).assertTrue();
        console.info(TAG + 'Set imageData Success');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Set imageData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
      let result = systemPasteboard.getData();
      await result.then((data) => {
        console.info(TAG + 'Get Paste Data Success,mimeType:' + data.getPrimaryMimeType() + ',html:' + data.getPrimaryHtml()
          + ',text:' + data.getPrimaryText() + ',uri:' + data.getPrimaryUri());
        expect(data.getPrimaryUri()).assertEqual('imageUri');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Get imageData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
    })


    /**
     * @tc.name pasteboardCompatibilityTest008
     * @tc.number SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest0800
     * @tc.desc setUnifiedData getData Type is Video
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest0800', 0, async () => {
      let videoData = new unifiedDataChannel.UnifiedData();
      let GetDelayVideoData = ((dataType:string) => {
        let video = new unifiedDataChannel.Video();
        video.details = {
          Key: 'video',
          Value: 'video'
        };
        video.videoUri = 'videoUri';
        videoData.addRecord(video);
        return videoData;
      })
      videoData.properties.shareOptions = unifiedDataChannel.ShareOptions.CROSS_APP;
      videoData.properties.getDelayData = GetDelayVideoData;
      expect(systemPasteboard.hasDataSync()).assertFalse();
      await systemPasteboard.setUnifiedData(videoData).then(() => {
        expect(systemPasteboard.hasDataSync()).assertTrue();
        console.info(TAG + 'Set videoData Success');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Set videoData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
      let result = systemPasteboard.getData();
      await result.then((data) => {
        console.info(TAG + 'Get Paste Data Success,mimeType:' + data.getPrimaryMimeType() + ',html:' + data.getPrimaryHtml()
          + ',text:' + data.getPrimaryText() + ',uri:' + data.getPrimaryUri());
        expect(data.getPrimaryUri()).assertEqual('videoUri');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Get videoData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
    })


    /**
     * @tc.name pasteboardCompatibilityTest009
     * @tc.number SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest0900
     * @tc.desc setUnifiedData getData Type is Audio
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest0900', 0, async () => {
      let audioData = new unifiedDataChannel.UnifiedData();
      let GetDelayAudioData = ((dataType:string) => {
        let audio = new unifiedDataChannel.Audio();
        audio.details = {
          Key: 'audio',
          Value: 'audio'
        };
        audio.audioUri = 'audioUri';
        audioData.addRecord(audio);
        return audioData;
      })
      audioData.properties.shareOptions = unifiedDataChannel.ShareOptions.CROSS_APP;
      audioData.properties.getDelayData = GetDelayAudioData;
      expect(systemPasteboard.hasDataSync()).assertFalse();
      await systemPasteboard.setUnifiedData(audioData).then(() => {
        expect(systemPasteboard.hasDataSync()).assertTrue();
        console.info(TAG + 'Set audioData Success');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Set audioData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
      let result = systemPasteboard.getData();
      await result.then((data) => {
        console.info(TAG + 'Get Paste Data Success,mimeType:' + data.getPrimaryMimeType() + ',html:' + data.getPrimaryHtml()
          + ',text:' + data.getPrimaryText() + ',uri:' + data.getPrimaryUri());
        expect(data.getPrimaryUri()).assertEqual('audioUri');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Get audioData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
    })


    /**
     * @tc.name pasteboardCompatibilityTest010
     * @tc.number SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest1000
     * @tc.desc setUnifiedData getData Type is sysForm
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest1000', 0, async () => {
      let sysFormData = new unifiedDataChannel.UnifiedData();
      let GetDelayFormData = ((dataType:string) => {
        let form = new unifiedDataChannel.SystemDefinedForm();
        form.formId = 0;
        form.formName = 'formName';
        form.bundleName = 'bundleName';
        form.abilityName = 'abilityName';
        form.module = 'module';
        form.details = {
          formKey1: 1,
          formKet2: 'form',
          formKey3: new Uint8Array([1, 2, 3, 4, 5, 6, 7, 8, 9, 10]),
        };
        sysFormData.addRecord(form);
        return sysFormData;
      })
      sysFormData.properties.shareOptions = unifiedDataChannel.ShareOptions.CROSS_APP;
      sysFormData.properties.getDelayData = GetDelayFormData;
      expect(systemPasteboard.hasDataSync()).assertFalse();
      await systemPasteboard.setUnifiedData(sysFormData).then(() => {
        expect(systemPasteboard.hasDataSync()).assertTrue();
        console.info(TAG + 'Set sysFormData Success');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Set sysFormData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
      let result = systemPasteboard.getData();
      await result.then((data) => {
        console.info(TAG + 'Get Paste Data Success,mimeType:' + data.getPrimaryMimeType() + ',html:' + data.getPrimaryHtml()
          + ',text:' + data.getPrimaryText() + ',uri:' + data.getPrimaryUri());
        expect(data.getPrimaryMimeType()).assertEqual('openharmony.form');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Get sysFormData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
    })


    /**
     * @tc.name pasteboardCompatibilityTest011
     * @tc.number SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest1100
     * @tc.desc setUnifiedData getData Type is sysAppItem
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest1100', 0, async () => {
      let sysAppItemData = new unifiedDataChannel.UnifiedData();
      let GetDelayItemData = ((dataType:string) => {
        let appItem = new unifiedDataChannel.SystemDefinedAppItem();
        appItem.appId = 'appId';
        appItem.appName = 'appName';
        appItem.bundleName = 'bundleName';
        appItem.abilityName = 'abilityName';
        appItem.appIconId = 'appIconId';
        appItem.appLabelId = 'appLabelId';
        appItem.details = {
          formKey1: 1,
          formKet2: 'appItem',
          formKey3: new Uint8Array([1, 2, 3, 4, 5, 6, 7, 8, 9, 10]),
        };
        sysAppItemData.addRecord(appItem);
        return sysAppItemData;
      })
      sysAppItemData.properties.shareOptions = unifiedDataChannel.ShareOptions.CROSS_APP;
      sysAppItemData.properties.getDelayData = GetDelayItemData;
      expect(systemPasteboard.hasDataSync()).assertFalse();
      await systemPasteboard.setUnifiedData(sysAppItemData).then(() => {
        expect(systemPasteboard.hasDataSync()).assertTrue();
        console.info(TAG + 'Set sysAppItemData Success');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Set sysAppItemData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
      let result = systemPasteboard.getData();
      await result.then((data) => {
        console.info(TAG + 'Get Paste Data Success,mimeType:' + data.getPrimaryMimeType() + ',html:' + data.getPrimaryHtml()
          + ',text:' + data.getPrimaryText() + ',uri:' + data.getPrimaryUri());
        expect(data.getPrimaryMimeType()).assertEqual('openharmony.app-item');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Get sysAppItemData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
    })


    /**
     * @tc.name pasteboardCompatibilityTest012
     * @tc.number SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest1200
     * @tc.desc setUnifiedData getData Type is appRecord
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest1200', 0, async () => {
      let appRecordData = new unifiedDataChannel.UnifiedData();
      let GetDelayAppRecordData = ((dataType:string) => {
        let appRecord = new unifiedDataChannel.ApplicationDefinedRecord();
        let u8Array = new Uint8Array([1, 2, 3, 4, 5, 6, 7, 8, 9, 10]);
        appRecord.applicationDefinedType = 'ApplicationDefinedType';
        appRecord.rawData = u8Array;
        appRecordData.addRecord(appRecord)
        return appRecordData;
      })
      appRecordData.properties.shareOptions = unifiedDataChannel.ShareOptions.CROSS_APP;
      appRecordData.properties.getDelayData = GetDelayAppRecordData;
      expect(systemPasteboard.hasDataSync()).assertFalse();
      await systemPasteboard.setUnifiedData(appRecordData).then(() => {
        expect(systemPasteboard.hasDataSync()).assertTrue();
        console.info(TAG + 'Set appRecordData Success');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Set appRecordData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
      let result = systemPasteboard.getData();
      await result.then((data) => {
        console.info(TAG + 'Get Paste Data Success,mimeType:' + data.getPrimaryMimeType() + ',html:' + data.getPrimaryHtml()
          + ',text:' + data.getPrimaryText() + ',uri:' + data.getPrimaryUri());
        expect(data.getPrimaryMimeType()).assertEqual('ApplicationDefinedType');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Get appRecordData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
    })


    /**
     * @tc.name pasteboardCompatibilityTest013
     * @tc.number SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest1300
     * @tc.desc setUnifiedData getData Type is Want
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest1300', 0, async () => {
      let wantData = new unifiedDataChannel.UnifiedData();
      let GetDelayWantData = ((dataType:string) => {
        let object:Want = {
          bundleName: 'bundleName',
          abilityName: 'abilityName'
        };
        let wantRecord = new unifiedDataChannel.UnifiedRecord(uniformTypeDescriptor.UniformDataType.OPENHARMONY_WANT, object);
        wantData.addRecord(wantRecord)
        return wantData;
      })
      wantData.properties.shareOptions = unifiedDataChannel.ShareOptions.CROSS_APP;
      wantData.properties.getDelayData = GetDelayWantData;
      expect(systemPasteboard.hasDataSync()).assertFalse();
      await systemPasteboard.setUnifiedData(wantData).then(() => {
        expect(systemPasteboard.hasDataSync()).assertTrue();
        console.info(TAG + 'Set wantData Success');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Set wantData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
      let result = systemPasteboard.getData();
      await result.then((data) => {
        console.info(TAG + 'Get Paste Data Success,mimeType:' + data.getPrimaryMimeType() + ',html:' + data.getPrimaryHtml()
          + ',text:' + data.getPrimaryText() + ',uri:' + data.getPrimaryUri());
        expect(data.getPrimaryMimeType()).assertEqual('text/want');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Get wantData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
    })


    /**
     * @tc.name pasteboardCompatibilityTest014
     * @tc.number SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest1400
     * @tc.desc setUnifiedData getData Type is pixelMap
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest1400', 0, async () => {
      let pixelMapData = new unifiedDataChannel.UnifiedData();
      let GetDelayPixelMapData = ((dataType:string) => {
        let buffer = new ArrayBuffer(128);
        let realSize: image.Size = { height: 3, width: 5}
        let opt: image.InitializationOptions = {
          size: realSize,
          pixelFormat: 3,
          editable: true,
          alphaType: 1,
          scaleMode: 1
        };
        let pixelMap:image.PixelMap = image.createPixelMapSync(buffer, opt);
        let pixelMapRecord = new unifiedDataChannel.UnifiedRecord(uniformTypeDescriptor.UniformDataType.OPENHARMONY_PIXEL_MAP, pixelMap);
        pixelMapData.addRecord(pixelMapRecord)
        return pixelMapData;
      })
      pixelMapData.properties.shareOptions = unifiedDataChannel.ShareOptions.CROSS_APP;
      pixelMapData.properties.getDelayData = GetDelayPixelMapData;
      expect(systemPasteboard.hasDataSync()).assertFalse();
      await systemPasteboard.setUnifiedData(pixelMapData).then(() => {
        expect(systemPasteboard.hasDataSync()).assertTrue();
        console.info(TAG + 'Set pixelMapData Success');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Set pixelMapData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
      let result = systemPasteboard.getData();
      await result.then((data) => {
        console.info(TAG + 'Get Paste Data Success,mimeType:' + data.getPrimaryMimeType() + ',html:' + data.getPrimaryHtml()
          + ',text:' + data.getPrimaryText() + ',uri:' + data.getPrimaryUri());
        expect(data.getPrimaryMimeType()).assertEqual('pixelMap');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Get pixelMapData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
    })

    /**
     * @tc.name pasteboardCompatibilityTest015
     * @tc.number SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest1500
     * @tc.desc setUnifiedData getDataSync Type is delayPlainText
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest1500', 0, async () => {
      let plainTextData = new unifiedDataChannel.UnifiedData();
      let plainText = new unifiedDataChannel.PlainText();
      plainText.details = {
        Key: 'delayPlainText',
        Value: 'delayPlainText'
      };
      let GetDelayPlainTextData = ((dataType:string) => {
        plainText.textContent = 'textContent';
        plainText.abstract = 'delayAbstract';
        plainTextData.addRecord(plainText);
        return plainTextData;
      });
      plainTextData.properties.shareOptions = unifiedDataChannel.ShareOptions.CROSS_APP;
      plainTextData.properties.getDelayData = GetDelayPlainTextData;
      expect(systemPasteboard.hasDataSync()).assertFalse();
      await systemPasteboard.setUnifiedData(plainTextData).then((data: void) => {
        expect(systemPasteboard.hasDataSync()).assertTrue();
        console.info(TAG + 'Succeed in setting unifiedData');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Failed to set unifiedData. Cause:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      });
      try {
        let result = systemPasteboard.getDataSync();
        expect(result != undefined).assertTrue();
        console.info(TAG + 'Get Data Success');
      } catch (error) {
        console.info(TAG + 'Get Data Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      }
    })

    /**
     * @tc.name pasteboardCompatibilityTest016
     * @tc.number SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest1600
     * @tc.desc setUnifiedData getData Type is Text
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest1600', 0, async () => {
      let textData = new unifiedDataChannel.UnifiedData();
      let text = new unifiedDataChannel.Text();
      text.details = {
        Key: 'text',
        Value: 'text'
      };
      textData.addRecord(text);
      let result = systemPasteboard.hasDataSync();
      expect(result).assertFalse();
      await systemPasteboard.setUnifiedData(textData).then((data: void) => {
        expect(systemPasteboard.hasDataSync()).assertTrue();
        console.info(TAG + 'Succeed in setting unifiedData');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Failed to set unifiedData. Cause:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      });

      let getData = systemPasteboard.getData();
      await getData.then((data) => {
        console.info(TAG + 'Get Paste Data Success,mimeType:' + data.getPrimaryMimeType() + '.html:' + data.getPrimaryHtml()
          + ',text:' + data.getPrimaryText() + ',uri:' + data.getPrimaryUri());
        expect(data.getPrimaryMimeType()).assertEqual('general.text');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Get textData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
    })

    /**
     * @tc.name pasteboardCompatibilityTest017
     * @tc.number SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest1700
     * @tc.desc setUnifiedDataSync getData Type is plainText
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest1700', 0, async () => {
      let plainTextData = new unifiedDataChannel.UnifiedData();
      let plainText = new unifiedDataChannel.PlainText();
      plainText.details = {
        Key: 'plainText',
        Value: 'plainText'
      };
      plainText.textContent = 'textContent';
      plainText.abstract = 'abstract';
      plainTextData.addRecord(plainText)
      expect(systemPasteboard.hasDataSync()).assertFalse();
      try {
        await systemPasteboard.setUnifiedDataSync(plainTextData);
        expect(systemPasteboard.hasDataSync()).assertTrue();
        console.info(TAG + 'Succeed in setting unifiedData');
      } catch (error) {
        console.info(TAG + 'Failed to set unifiedData. Cause:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      }

      let getData = systemPasteboard.getData();
      await getData.then((data) => {
        console.info(TAG + 'Get Paste Data Success,mimeType:' + data.getPrimaryMimeType() + '.html:' + data.getPrimaryHtml()
          + ',text:' + data.getPrimaryText() + ',uri:' + data.getPrimaryUri());
        expect(data.getPrimaryMimeType()).assertEqual('text/plain');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Get textData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
    })

    /**
     * @tc.name pasteboardCompatibilityTest018
     * @tc.number SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest1800
     * @tc.desc setUnifiedDataSync getData Type is delayPlainText
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest1800', 0, async () => {
      let plainTextData = new unifiedDataChannel.UnifiedData();
      let GetDelayPlainTextData = ((dataType: string) => {
        let plainText = new unifiedDataChannel.PlainText();
        plainText.details = {
          Key: 'delayPlainText',
          Value: 'delayPlainText'
        };
        plainText.textContent = 'textContent';
        plainText.abstract = 'abstract';
        plainTextData.addRecord(plainText)
        return plainTextData
      })
      plainTextData.properties.shareOptions = unifiedDataChannel.ShareOptions.CROSS_APP;
      plainTextData.properties.getDelayData = GetDelayPlainTextData;
      expect(systemPasteboard.hasDataSync()).assertFalse();
      try {
        await systemPasteboard.setUnifiedDataSync(plainTextData);
        expect(systemPasteboard.hasDataSync()).assertTrue();
        console.info(TAG + 'Succeed in setting unifiedData');
      } catch (error) {
        console.info(TAG + 'Failed to set unifiedData. Cause:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      }

      let getData = systemPasteboard.getData();
      await getData.then((data) => {
        console.info(TAG + 'Get Paste Data Success,mimeType:' + data.getPrimaryMimeType() + '.html:' + data.getPrimaryHtml()
          + ',text:' + data.getPrimaryText() + ',uri:' + data.getPrimaryUri());
        expect(data.getPrimaryMimeType()).assertEqual('text/plain');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Get textData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
    })

    /**
     * @tc.name pasteboardCompatibilityTest019
     * @tc.number SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest1900
     * @tc.desc setUnifiedDataSync getDataSync Type is delayPlainText
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest1900', 0, async () => {
      let plainTextData = new unifiedDataChannel.UnifiedData();
      let GetDelayPlainTextData = ((dataType: string) => {
        let plainText = new unifiedDataChannel.PlainText();
        plainText.details = {
          Key: 'delayPlainText',
          Value: 'delayPlainText'
        };
        plainText.textContent = 'textContent';
        plainText.abstract = 'abstract';
        plainTextData.addRecord(plainText)
        return plainTextData
      })
      plainTextData.properties.shareOptions = unifiedDataChannel.ShareOptions.CROSS_APP;
      plainTextData.properties.getDelayData = GetDelayPlainTextData;
      expect(systemPasteboard.hasDataSync()).assertFalse();
      try {
        await systemPasteboard.setUnifiedDataSync(plainTextData);
        expect(systemPasteboard.hasDataSync()).assertTrue();
        console.info(TAG + 'Succeed in setting unifiedData');
      } catch (error) {
        console.info(TAG + 'Failed to set unifiedData. Cause:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      }

      try {
        let result = systemPasteboard.getDataSync();
        expect(result != undefined).assertTrue();
        console.info(TAG + 'Get Data Success');
      } catch (error) {
        console.info(TAG + 'Get Data Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      }
    })

    /**
     * @tc.name pasteboardCompatibilityTest020
     * @tc.number SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest2000
     * @tc.desc setData getUnifiedData Type is String
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest2000', 0, async () => {
      let pasteData: pasteboard.PasteData = pasteboard.createData('string', ARRAY_BUFFER);
      expect(systemPasteboard.hasDataSync()).assertFalse();
      await systemPasteboard.setData(pasteData).then((data:void) => {
        expect(systemPasteboard.hasDataSync()).assertTrue();
        console.info(TAG + 'Succeed in setting PasteData');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Failed to set PasteData. Cause:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })

      await systemPasteboard.getUnifiedData().then((data) => {
        let outputDataType = data.getTypes().toString();
        console.info(TAG + outputDataType);
        expect(outputDataType).assertEqual('ApplicationDefinedType');
        console.info(TAG + 'Get String Data Success');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Get Data Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
    })

    /**
     * @tc.name pasteboardCompatibilityTest021
     * @tc.number SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest2100
     * @tc.desc setData getUnifiedData Type is pixelMap
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest2100', 0, async () => {
      let buffer = new ArrayBuffer(128);
      let realSize:image.Size = { height: 3, width: 5};
      let opt:image.InitializationOptions = {
        size: realSize,
        pixelFormat: 3,
        editable: true,
        alphaType: 1,
        scaleMode: 1
      };
      let pixelMap:image.PixelMap = image.createPixelMapSync(buffer, opt);
      let pasteData: pasteboard.PasteData = pasteboard.createData(pasteboard.MIMETYPE_PIXELMAP, pixelMap);
      expect(systemPasteboard.hasDataSync()).assertFalse();
      await systemPasteboard.setData(pasteData).then((data:void) => {
        expect(systemPasteboard.hasDataSync()).assertTrue();
        console.info(TAG + 'Succeed in setting PasteData');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Failed to set PasteData.Cause:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })

      await systemPasteboard.getUnifiedData().then((data) => {
        let outputData = data;
        let records = outputData.getRecords();
        if (records[0].getType() == uniformTypeDescriptor.UniformDataType.OPENHARMONY_PIXEL_MAP) {
          console.info(TAG + 'Get PixelMap Data Success, type:' + records[0].getType() + ',object:' + JSON.stringify(records[0].getValue()));
          expect(records[0].getType()).assertEqual('openharmony.pixel-map');
        } else {
          console.info(TAG + 'Get PixelMap Data No Success, type:' + records[0].getType());
          expect().assertFail();
        }
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Get PixelMap Data Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
    })

    /**
     * @tc.name pasteboardCompatibilityTest022
     * @tc.number SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest2200
     * @tc.desc setData getUnifiedData Type is Want
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest2200', 0, async () => {
      let object: Want = {
        bundleName: 'com.example.aafwk.test',
        abilityName: 'com.example.aafwk.test.TwoAbility'
      };
      let pasteData: pasteboard.PasteData = pasteboard.createData(pasteboard.MIMETYPE_TEXT_WANT, object);
      expect(systemPasteboard.hasDataSync()).assertFalse();
      await systemPasteboard.setData(pasteData).then((data:void) => {
        expect(systemPasteboard.hasDataSync()).assertTrue()
        console.info(TAG + 'Succeed in setting PasteData');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Failed to set PasteData. Cause:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      });

      await systemPasteboard.getUnifiedData().then((data) => {
        let outputData = data;
        let records = outputData.getRecords();
        if (records[0].getType() == uniformTypeDescriptor.UniformDataType.OPENHARMONY_WANT) {
          console.info(TAG + 'Get Want Data Success, type:' + records[0].getType() + ',object:' + JSON.stringify(records[0].getValue()));
          expect(records[0].getType()).assertEqual('openharmony.want');
        } else {
          console.info(TAG + 'Get Want Data No Success, type:' + records[0].getType());
          expect().assertFail();
        }
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Get Want Data Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
    })

    /**
     * @tc.name pasteboardCompatibilityTest023
     * @tc.number SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest2300
     * @tc.desc setData getUnifiedData Type is ArrayBuffer
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest2300', 0, async () => {
      let dataXml = new ArrayBuffer(256);
      let pasteData: pasteboard.PasteData = pasteboard.createData('arraybuffer', dataXml);
      expect(systemPasteboard.hasDataSync()).assertFalse();
      await systemPasteboard.setData(pasteData).then((data:void) => {
        expect(systemPasteboard.hasDataSync()).assertTrue()
        console.info(TAG + 'Succeed in setting PasteData');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Failed to set PasteData. Cause:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      });

      await systemPasteboard.getUnifiedData().then((data) => {
        let outputDataType = data.getTypes().toString();
        console.info(TAG + outputDataType);
        expect(outputDataType).assertEqual('ApplicationDefinedType');
        console.info(TAG + 'Get Data Success');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Get Data Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
    })

    /**
     * @tc.name pasteboardCompatibilityTest024
     * @tc.number SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest2400
     * @tc.desc setData getUnifiedData Type is URI
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest2400', 0, async () => {
      let pasteData: pasteboard.PasteData = pasteboard.createData(pasteboard.MIMETYPE_TEXT_URI, 'dataability://com.example.myapplication1/user.txt');
      expect(systemPasteboard.hasDataSync()).assertFalse();
      await systemPasteboard.setData(pasteData).then((data:void) => {
        expect(systemPasteboard.hasDataSync()).assertTrue()
        console.info(TAG + 'Succeed in setting PasteData');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Failed to set PasteData. Cause:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      });

      await systemPasteboard.getUnifiedData().then((data) => {
        let outputDataType = data.getTypes().toString();
        console.info(TAG + outputDataType);
        expect(outputDataType).assertEqual('general.file');
        console.info(TAG + 'Get uriData Success');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Get uriData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
    })

    /**
     * @tc.name pasteboardCompatibilityTest025
     * @tc.number SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest2500
     * @tc.desc setData getUnifiedData Type is HTML
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest2500', 0, async () => {
      let html = "<!DOCTYPE html>\n" + "<html>\n" + "<head>\n" + "<meta charset=\"utf-8\">\n" + "<title>HTML-PASTEBOARD_HTML</title>\n" + "</head>\n" + "<body>\n" + "<h1>HEAD</h1>\n" + "<p></p>\n" + "</body>\n" + "</html>";
      let pasteData: pasteboard.PasteData = pasteboard.createData(pasteboard.MIMETYPE_TEXT_HTML, html);
      expect(systemPasteboard.hasDataSync()).assertFalse();
      await systemPasteboard.setData(pasteData).then((data:void) => {
        expect(systemPasteboard.hasDataSync()).assertTrue()
        console.info(TAG + 'Succeed in setting PasteData');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Failed to set PasteData. Cause:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      });

      await systemPasteboard.getUnifiedData().then((data) => {
        let outputDataType = data.getTypes().toString();
        console.info(TAG + outputDataType);
        expect(outputDataType).assertEqual('general.html');
        console.info(TAG + 'Get htmlData Success');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Get htmlData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
    })

    /**
     * @tc.name pasteboardCompatibilityTest026
     * @tc.number SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest2600
     * @tc.desc setData getUnifiedDataSync Type is String
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest2600', 0, async () => {
      let pasteData: pasteboard.PasteData = pasteboard.createData('string', ARRAY_BUFFER);
      expect(systemPasteboard.hasDataSync()).assertFalse();
      await systemPasteboard.setData(pasteData).then((data:void) => {
        expect(systemPasteboard.hasDataSync()).assertTrue();
        console.info(TAG + 'Succeed in setting PasteData');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Failed to set PasteData. Cause:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })

      try {
        let result: unifiedDataChannel.UnifiedData = systemPasteboard.getUnifiedDataSync();
        let outputDataType = result.getTypes().toString();
        console.info(TAG + outputDataType);
        expect(outputDataType).assertEqual('ApplicationDefinedType');
        console.info(TAG + 'Succeed in getting UnifiedData');
      } catch (error) {
        console.info(TAG + 'Failed to get UnifiedData. Cause:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      }
    })

    /**
     * @tc.name pasteboardCompatibilityTest027
     * @tc.number SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest2700
     * @tc.desc setDataSync getUnifiedData Type is String
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest2700', 0, async () => {
      let pasteData: pasteboard.PasteData = pasteboard.createData('string', ARRAY_BUFFER);
      expect(systemPasteboard.hasDataSync()).assertFalse();
      try {
        systemPasteboard.setDataSync(pasteData);
        expect(systemPasteboard.hasDataSync()).assertTrue();
        console.info(TAG + 'Succeed in setting PasteData')
      } catch (error) {
        console.info(TAG + 'Failed to set PasteData. Cause:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      }

      await systemPasteboard.getUnifiedData().then((data) => {
        let outputDataType = data.getTypes().toString();
        console.info(TAG + outputDataType);
        expect(outputDataType).assertEqual('ApplicationDefinedType');
        console.info(TAG + 'Get htmlData Success');
      }).catch((error:BusinessError) => {
        console.info(TAG + 'Get htmlData Fail:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      })
    })

    /**
     * @tc.name pasteboardCompatibilityTest028
     * @tc.number SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest2800
     * @tc.desc setDataSync getUnifiedDataSync Type is String
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_Pasteboard_Local_SDK_DelayCopy_CompatibilityTest2800', 0, async () => {
      let pasteData: pasteboard.PasteData = pasteboard.createData('string', ARRAY_BUFFER);
      expect(systemPasteboard.hasDataSync()).assertFalse();
      try {
        systemPasteboard.setDataSync(pasteData);
        expect(systemPasteboard.hasDataSync()).assertTrue();
        console.info(TAG + 'Succeed in setting PasteData')
      } catch (error) {
        console.info(TAG + 'Failed to set PasteData. Cause:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      }

      try {
        let result: unifiedDataChannel.UnifiedData = systemPasteboard.getUnifiedDataSync();
        let outputDataType = result.getTypes().toString();
        console.info(TAG + outputDataType);
        expect(outputDataType).assertEqual('ApplicationDefinedType');
        console.info(TAG + 'Succeed in getting UnifiedData');
      } catch (error) {
        console.info(TAG + 'Failed to get UnifiedData. Cause:' + 'code:' + error.code + 'message:' +error.message);
        expect().assertFail();
      }
    })
  })
}