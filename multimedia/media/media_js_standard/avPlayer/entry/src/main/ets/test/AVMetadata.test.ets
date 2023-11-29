import media from '@ohos.multimedia.media'
import resourceManager from '@ohos.resourceManager';
import {describe,beforeAll,beforeEach,afterEach,afterAll,it, expect}from '@ohos/hypium'


export default function abilityTest(resourceManager) {
  describe('abilityTest', function () {
    let TAG = "MetadataDemo"
    beforeAll(function () {
      console.info('beforeAll case');
    });
    beforeEach(function () {
      console.info('beforeEach case');
    });
    afterEach(function () {
      console.info('afterEach case');
    });
    afterAll(function () {
      console.info('afterAll case');
    })


    /* *
    * @tc.number    : SUB_MULTIMEDIA_AUDIO_PLAYER_AVMETADATA_ALBUM_CB_FUNCTION_0100
    * @tc.name      : 001.testAVMeta album
    * @tc.desc      : Local Video playback control test
    * @tc.size      : MediumTest
    * @tc.type      : Function Test
    * @tc.level     : Level0
        */
    it('SUB_MULTIMEDIA_AUDIO_PLAYER_AVMETADATA_ALBUM_CB_FUNCTION_0100', 0, async function (done) {
      console.info(TAG + "0100 is success")
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("cover.mp3").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video album :${metadata.album}}`)
          expect(metadata.album == "monica的专辑").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })

    /* *
      * @tc.number    : SUB_MULTIMEDIA_AUDIO_PLAYER_AVMETADATA_ALBUMARTIST_CB_FUNCTION_0200
      * @tc.name      : 001.testAVMeta albumArtist
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_AUDIO_PLAYER_AVMETADATA_ALBUMARTIST_CB_FUNCTION_0200', 0, async function (done) {
      console.info(TAG + "0200 is success")
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("cover.mp3").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video albumArtist :${metadata.albumArtist}}`)
          expect(metadata.albumArtist == "").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_AUDIO_PLAYER_AVMETADATA_ARTIST_CB_FUNCTION_0300
      * @tc.name      : 001.testAVMeta artist
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_AUDIO_PLAYER_AVMETADATA_ARTIST_CB_FUNCTION_0300', 0, async function (done) {
      console.info(TAG + "0300 is success")
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("cover.mp3").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video artist :}`+(metadata.artist).toString())
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_AUDIO_PLAYER_AVMETADATA_AUTHOR_CB_FUNCTION_0400
      * @tc.name      : 001.testAVMeta author
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_AUDIO_PLAYER_AVMETADATA_AUTHOR_CB_FUNCTION_0400', 0, async function (done) {
      console.info(TAG + "0400 is success")
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("cover.mp3").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video author :${metadata.author}}`)
          expect(metadata.author == "").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_AUDIO_PLAYER_AVMETADATA_DATETIME_CB_FUNCTION_0500
      * @tc.name      : 001.testAVMeta dateTime
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_AUDIO_PLAYER_AVMETADATA_DATETIME_CB_FUNCTION_0500', 0, async function (done) {
      console.info(TAG + "0500 is success")
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("cover.mp3").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video dateTime :${metadata.dateTime}}`)
          expect(metadata.dateTime == "").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_AUDIO_PLAYER_AVMETADATA_DATETIMEFORMAT_CB_FUNCTION_0600
      * @tc.name      : 001.testAVMeta dateTimeFormat
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_AUDIO_PLAYER_AVMETADATA_DATETIMEFORMAT_CB_FUNCTION_0600', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("cover.mp3").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video album :${metadata.album}}`)
          expect(metadata.album == "monica的专辑").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_AUDIO_PLAYER_AVMETADATA_COMPOSER_CB_FUNCTION_0700
      * @tc.name      : 001.testAVMeta composer
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_AUDIO_PLAYER_AVMETADATA_COMPOSER_CB_FUNCTION_0700', 0, async function (done) {
      console.info(TAG + "0700 is success")
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("cover.mp3").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video composer :${metadata.composer}}`)
          expect(metadata.composer == "").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_AUDIO_PLAYER_AVMETADATA_DURATION_CB_FUNCTION_0800
      * @tc.name      : 001.testAVMeta duration
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_AUDIO_PLAYER_AVMETADATA_DURATION_CB_FUNCTION_0800', 0, async function (done) {
      console.info(TAG + "0800 is success")
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("cover.mp3").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video duration :${metadata.duration}}`)
          expect(metadata.duration == "89913").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_AUDIO_PLAYER_AVMETADATA_GENRE_CB_FUNCTION_0900
      * @tc.name      : 001.testAVMeta genre
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_AUDIO_PLAYER_AVMETADATA_GENRE_CB_FUNCTION_0900', 0, async function (done) {
      console.info(TAG + "01000 is success")
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()

      await globalThis.resourceManager.getRawFd("cover.mp3").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video genre :${metadata.genre}}`)
          expect(metadata.genre == "豪放派").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })


    /* *
        * @tc.number    : SUB_MULTIMEDIA_AUDIO_PLAYER_AVMETADATA_HASAUDIO_CB_FUNCTION_01000
        * @tc.name      : 001.testAVMeta hasAudio
        * @tc.desc      : Local Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function Test
        * @tc.level     : Level0
           */
    it('SUB_MULTIMEDIA_AUDIO_PLAYER_AVMETADATA_HASAUDIO_CB_FUNCTION_01000', 0, async function (done) {
      console.info(TAG + "01100 is success")
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("cover.mp3").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video hasAudio :${metadata.hasAudio}}`)
          expect(metadata.hasAudio == "yes").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })


    /* *
        * @tc.number    : SUB_MULTIMEDIA_AUDIO_PLAYER_AVMETADATA_HASVIDEO_CB_FUNCTION_01100
        * @tc.name      : 001.testAVMeta hasVideo
        * @tc.desc      : Local Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function Test
        * @tc.level     : Level0
           */
    it('SUB_MULTIMEDIA_AUDIO_PLAYER_AVMETADATA_HASVIDEO_CB_FUNCTION_01100', 0, async function (done) {
      console.info(TAG + "01100 is success")
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("cover.mp3").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video hasVideo :${metadata.hasVideo}}`)
          expect(metadata.hasVideo == "").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_AUDIO_PLAYER_AVMETADATA_MIMETYPE_CB_FUNCTION_01200
      * @tc.name      : 001.testAVMeta mimeType
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_AUDIO_PLAYER_AVMETADATA_MIMETYPE_CB_FUNCTION_01200', 0, async function (done) {
      console.info(TAG + "01200 is success")
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("cover.mp3").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video mimeType :${metadata.mimeType}}`)
          expect(metadata.mimeType == "audio/mpeg").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })

    /* *
      * @tc.number    : SUB_MULTIMEDIA_AUDIO_PLAYER_TRACKCOUNT_MIMETYPE_CB_FUNCTION_01300
      * @tc.name      : 001.testAVMeta trackCount
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_AUDIO_PLAYER_TRACKCOUNT_MIMETYPE_CB_FUNCTION_01300', 0, async function (done) {
      console.info(TAG + "01300 is success")
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("cover.mp3").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video trackCount :${metadata.trackCount}}`)
          expect(metadata.trackCount == "1").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_AUDIO_PLAYER_TRACKCOUNT_SAMPLERATE_CB_FUNCTION_01400
      * @tc.name      : 001.testAVMeta sampleRate
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_AUDIO_PLAYER_TRACKCOUNT_SAMPLERATE_CB_FUNCTION_01400', 0, async function (done) {
      console.info(TAG + "01400 is success")
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("cover.mp3").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video sampleRate :${metadata.sampleRate}}`)
          expect(metadata.sampleRate == "44100").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_AUDIO_PLAYER_TITLE_CB_FUNCTION_01500
      * @tc.name      : 001.testAVMeta title
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_AUDIO_PLAYER_TITLE_CB_FUNCTION_01500', 0, async function (done) {
      console.info(TAG + "01500 is success")
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("cover.mp3").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video title :${metadata.title}}`)
          avMetadataExtractor.release()
          done()
        })
      })
    })

    /* *
      * @tc.number    : SUB_MULTIMEDIA_AUDIO_PLAYER_VIDEOHEIGHT_CB_FUNCTION_01600
      * @tc.name      : 001.testAVMeta videoHeight
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_AUDIO_PLAYER_VIDEOHEIGHT_CB_FUNCTION_01600', 0, async function (done) {
      console.info(TAG + "01600 is success")
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("cover.mp3").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video videoHeight :${metadata.videoHeight}}`)
          expect(metadata.videoHeight == "").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_AUDIO_PLAYER_VIDEOHEIGHT_VIDEOWIDTH_CB_FUNCTION_01700
      * @tc.name      : 001.testAVMeta videoWidth
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_AUDIO_PLAYER_VIDEOHEIGHT_VIDEOWIDTH_CB_FUNCTION_01700', 0, async function (done) {
      console.info(TAG + "01700 is success")
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("cover.mp3").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video videoWidth :${metadata.videoWidth}}`)
          expect(metadata.videoWidth == "").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_AUDIO_PLAYER_VIDEOHEIGHT_VIDEOORIENTATION_CB_FUNCTION_01800
      * @tc.name      : 001.testAVMeta videoOrientation
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_AUDIO_PLAYER_VIDEOHEIGHT_VIDEOORIENTATION_CB_FUNCTION_01800', 0, async function (done) {
      console.info(TAG + "01800 is success")
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("cover.mp3").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video videoOrientation :${metadata.videoOrientation}}`)
          expect(metadata.videoOrientation == "").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
    * @tc.number    : SUB_MULTIMEDIA_VIDEO_PLAYER_AVMETADATA_ALBUM_CB_FUNCTION_01900
    * @tc.name      : 001.testAVMeta album
    * @tc.desc      : Local Video playback control test
    * @tc.size      : MediumTest
    * @tc.type      : Function Test
    * @tc.level     : Level0
        */
    it('SUB_MULTIMEDIA_VIDEO_PLAYER_AVMETADATA_ALBUM_CB_FUNCTION_01900', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("37dfffc6-7e5c-461e-946d-a9fc060f05b5.mp4").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video album :${metadata.album}}`)
          expect(metadata.album == "").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })

    /* *
      * @tc.number    : SUB_MULTIMEDIA_VIDEO_PLAYER_AVMETADATA_ALBUMARTIST_CB_FUNCTION_02000
      * @tc.name      : 001.testAVMeta albumArtist
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_VIDEO_PLAYER_AVMETADATA_ALBUMARTIST_CB_FUNCTION_02000', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("37dfffc6-7e5c-461e-946d-a9fc060f05b5.mp4").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video albumArtist :${metadata.albumArtist}}`)
          expect(metadata.albumArtist == "").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_VIDEO_PLAYER_AVMETADATA_ARTIST_CB_FUNCTION_02100
      * @tc.name      : 001.testAVMeta artist
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_VIDEO_PLAYER_AVMETADATA_ARTIST_CB_FUNCTION_02100', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("37dfffc6-7e5c-461e-946d-a9fc060f05b5.mp4").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video artist :${metadata.artist}}`)
          expect(metadata.artist == "").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_VIDEO_PLAYER_AVMETADATA_AUTHOR_CB_FUNCTION_02200
      * @tc.name      : 001.testAVMeta author
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_VIDEO_PLAYER_AVMETADATA_AUTHOR_CB_FUNCTION_02200', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("37dfffc6-7e5c-461e-946d-a9fc060f05b5.mp4").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video author :${metadata.author}}`)
          expect(metadata.author == "").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_VIDEO_PLAYER_AVMETADATA_DATETIME_CB_FUNCTION_02300
      * @tc.name      : 001.testAVMeta dateTime
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_VIDEO_PLAYER_AVMETADATA_DATETIME_CB_FUNCTION_02300', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("37dfffc6-7e5c-461e-946d-a9fc060f05b5.mp4").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video dateTime :${metadata.dateTime}}`)
          expect(metadata.dateTime == "2017-08-05 11:28:32").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_VIDEO_PLAYER_AVMETADATA_DATETIMEFORMAT_CB_FUNCTION_02400
      * @tc.name      : 001.testAVMeta dateTimeFormat
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_VIDEO_PLAYER_AVMETADATA_DATETIMEFORMAT_CB_FUNCTION_02400', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("37dfffc6-7e5c-461e-946d-a9fc060f05b5.mp4").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video album :${metadata.album}}`)
          expect(metadata.album == "").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_VIDEO_PLAYER_AVMETADATA_COMPOSER_CB_FUNCTION_02500
      * @tc.name      : 001.testAVMeta composer
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_VIDEO_PLAYER_AVMETADATA_COMPOSER_CB_FUNCTION_02500', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("37dfffc6-7e5c-461e-946d-a9fc060f05b5.mp4").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video composer :${metadata.composer}}`)
          expect(metadata.composer == "").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_VIDEO_PLAYER_AVMETADATA_DURATION_CB_FUNCTION_02600
      * @tc.name      : 001.testAVMeta duration
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_VIDEO_PLAYER_AVMETADATA_DURATION_CB_FUNCTION_02600', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("37dfffc6-7e5c-461e-946d-a9fc060f05b5.mp4").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video duration :${metadata.duration}}`)
          expect(metadata.duration == "5826").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_VIDEO_PLAYER_AVMETADATA_GENRE_CB_FUNCTION_02700
      * @tc.name      : 001.testAVMeta genre
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_VIDEO_PLAYER_AVMETADATA_GENRE_CB_FUNCTION_02700', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("37dfffc6-7e5c-461e-946d-a9fc060f05b5.mp4").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video genre :${metadata.genre}}`)
          expect(metadata.genre == "").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })


    /* *
        * @tc.number    : SUB_MULTIMEDIA_VIDEO_PLAYER_AVMETADATA_HASAUDIO_CB_FUNCTION_02800
        * @tc.name      : 001.testAVMeta hasAudio
        * @tc.desc      : Local Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function Test
        * @tc.level     : Level0
           */
    it('SUB_MULTIMEDIA_VIDEO_PLAYER_AVMETADATA_HASAUDIO_CB_FUNCTION_02800', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("37dfffc6-7e5c-461e-946d-a9fc060f05b5.mp4").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video hasAudio :${metadata.hasAudio}}`)
          expect(metadata.hasAudio == "yes").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })


    /* *
        * @tc.number    : SUB_MULTIMEDIA_VIDEO_PLAYER_AVMETADATA_HASVIDEO_CB_FUNCTION_02900
        * @tc.name      : 001.testAVMeta hasVideo
        * @tc.desc      : Local Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function Test
        * @tc.level     : Level0
           */
    it('SUB_MULTIMEDIA_VIDEO_PLAYER_AVMETADATA_HASVIDEO_CB_FUNCTION_02900', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("37dfffc6-7e5c-461e-946d-a9fc060f05b5.mp4").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video hasVideo :${metadata.hasVideo}}`)
          expect(metadata.hasVideo == "yes").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_VIDEO_PLAYER_AVMETADATA_MIMETYPE_CB_FUNCTION_03000
      * @tc.name      : 001.testAVMeta mimeType
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_VIDEO_PLAYER_AVMETADATA_MIMETYPE_CB_FUNCTION_03000', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("37dfffc6-7e5c-461e-946d-a9fc060f05b5.mp4").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video mimeType :${metadata.mimeType}}`)
          expect(metadata.mimeType == "video/mp4").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })

    /* *
      * @tc.number    : SUB_MULTIMEDIA_VIDEO_PLAYER_TRACKCOUNT_MIMETYPE_CB_FUNCTION_03100
      * @tc.name      : 001.testAVMeta trackCount
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_VIDEO_PLAYER_TRACKCOUNT_MIMETYPE_CB_FUNCTION_03100', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("37dfffc6-7e5c-461e-946d-a9fc060f05b5.mp4").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video trackCount :${metadata.trackCount}}`)
          expect(metadata.trackCount == "2").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_VIDEO_PLAYER_TRACKCOUNT_SAMPLERATE_CB_FUNCTION_03200
      * @tc.name      : 001.testAVMeta sampleRate
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_VIDEO_PLAYER_TRACKCOUNT_SAMPLERATE_CB_FUNCTION_03200', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("37dfffc6-7e5c-461e-946d-a9fc060f05b5.mp4").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video sampleRate :${metadata.sampleRate}}`)
          avMetadataExtractor.release()
          done()
        })
      })
    })

    /* *
      * @tc.number    : SUB_MULTIMEDIA_VIDEO_PLAYER_VIDEOHEIGHT_CB_FUNCTION_03300
      * @tc.name      : 001.testAVMeta videoHeight
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_VIDEO_PLAYER_VIDEOHEIGHT_CB_FUNCTION_03400', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("37dfffc6-7e5c-461e-946d-a9fc060f05b5.mp4").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video videoHeight :${metadata.videoHeight}}`)
          expect(metadata.videoHeight == "480").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_VIDEO_PLAYER_VIDEOHEIGHT_VIDEOWIDTH_CB_FUNCTION_03400
      * @tc.name      : 001.testAVMeta videoWidth
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_VIDEO_PLAYER_VIDEOHEIGHT_VIDEOWIDTH_CB_FUNCTION_03400', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("37dfffc6-7e5c-461e-946d-a9fc060f05b5.mp4").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video videoWidth :${metadata.videoWidth}}`)
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_VIDEO_PLAYER_VIDEOHEIGHT_VIDEOORIENTATION_CB_FUNCTION_03500
      * @tc.name      : 001.testAVMeta videoOrientation
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_VIDEO_PLAYER_VIDEOHEIGHT_VIDEOORIENTATION_CB_FUNCTION_03600', 0, async function (done) {
      console.info(TAG + "01800 is success")
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("37dfffc6-7e5c-461e-946d-a9fc060f05b5.mp4").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchMetadata((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video videoOrientation :${metadata.videoOrientation}}`)
          expect(metadata.videoOrientation == "270").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })


    /* *
    * @tc.number    : SUB_MULTIMEDIA_AUDIO_PLAYER_VIDEOHEIGHT_PIXELMAP_CB_FUNCTION_03600
    * @tc.name      : 001.testAVMeta PixelMap
    * @tc.desc      : Local Video playback control test
    * @tc.size      : MediumTest
    * @tc.type      : Function Test
    * @tc.level     : Level0
      */
    it('SUB_MULTIMEDIA_AUDIO_PLAYER_VIDEOHEIGHT_PIXELMAP_CB_FUNCTION_03600', 0, async function (done) {
      console.info(TAG + "01900 is success")
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("cover.mp3").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchAlbumCover((err, PixelMap) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video PixelMap :${PixelMap}}`)
          expect(PixelMap == "[object Object]").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
    * @tc.number    : SUB_MULTIMEDIA_VIDEO_PLAYER_VIDEOHEIGHT_PIXELMAP_CB_FUNCTION_03700
    * @tc.name      : 001.testAVMeta PixelMap
    * @tc.desc      : Local Video playback control test
    * @tc.size      : MediumTest
    * @tc.type      : Function Test
    * @tc.level     : Level0
      */
    it('SUB_MULTIMEDIA_VIDEO_PLAYER_VIDEOHEIGHT_PIXELMAP_CB_FUNCTION_03700', 0, async function (done) {
      console.info(TAG + "01900 is success")
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("37dfffc6-7e5c-461e-946d-a9fc060f05b5.mp4").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchAlbumCover((err, PixelMap) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video PixelMap :${PixelMap}}`)
          expect(PixelMap == "[object Object]").assertTrue()
          avMetadataExtractor.release()
          done()
        })
      })
    })
  })
}




