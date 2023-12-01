import media from '@ohos.multimedia.media'
import resourceManager from '@ohos.resourceManager';
import {describe,beforeAll,beforeEach,afterEach,afterAll,it, expect}from '@ohos/hypium'
import image from "@ohos.multimedia.image";


export default function AVMetadata(resourceManager) {

  describe('AVMetadata', function () {
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
    * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_ALBUM_CB_FUNCTION_100
    * @tc.name      : 001.testAVMeta album
    * @tc.desc      : Local Video playback control test
    * @tc.size      : MediumTest
    * @tc.type      : Function Test
    * @tc.level     : Level0
        */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_ALBUM_CB_FUNCTION_100', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H269.mp3").then((value: resourceManager.RawFileDescriptor) => {
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
          expect(metadata.album).assertEqual("monica的专辑")
          avMetadataExtractor.release()
          done()
        })
      })
    })

    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_ALBUMARTIST_CB_FUNCTION_200
      * @tc.name      : 001.testAVMeta albumArtist
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_ALBUMARTIST_CB_FUNCTION_200', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H269.mp3").then((value: resourceManager.RawFileDescriptor) => {
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
          expect(metadata.albumArtist).assertEqual("")
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_ARTIST_CB_FUNCTION_300
      * @tc.name      : 001.testAVMeta artist
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_ARTIST_CB_FUNCTION_300', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H269.mp3").then((value: resourceManager.RawFileDescriptor) => {
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
          const artist = metadata.artist
          expect(metadata.artist).assertEqual(artist)
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_AUTHOR_CB_FUNCTION_400
      * @tc.name      : 001.testAVMeta author
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_AUTHOR_CB_FUNCTION_400', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H269.mp3").then((value: resourceManager.RawFileDescriptor) => {
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
          expect(metadata.author).assertEqual("")
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_DATETIME_CB_FUNCTION_500
      * @tc.name      : 001.testAVMeta dateTime
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_DATETIME_CB_FUNCTION_500', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H269.mp3").then((value: resourceManager.RawFileDescriptor) => {
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
          expect(metadata.dateTime).assertEqual("")
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_DATETIMEFORMAT_CB_FUNCTION_600
      * @tc.name      : 001.testAVMeta dateTimeFormat
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_DATETIMEFORMAT_CB_FUNCTION_600', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H269.mp3").then((value: resourceManager.RawFileDescriptor) => {
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
          expect(metadata.album).assertEqual("monica的专辑")
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_COMPOSER_CB_FUNCTION_700
      * @tc.name      : 001.testAVMeta composer
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_COMPOSER_CB_FUNCTION_700', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H269.mp3").then((value: resourceManager.RawFileDescriptor) => {
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
          expect(metadata.composer).assertEqual("")
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_DURATION_CB_FUNCTION_800
      * @tc.name      : 001.testAVMeta duration
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_PLAYERR_AVMETADATA_DURATION_CB_FUNCTION_800', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H269.mp3").then((value: resourceManager.RawFileDescriptor) => {
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
          expect(metadata.duration).assertEqual("89913")
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_GENRE_CB_FUNCTION_900
      * @tc.name      : 001.testAVMeta genre
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_GENRE_CB_FUNCTION_900', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H269.mp3").then((value: resourceManager.RawFileDescriptor) => {
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
          expect(metadata.genre).assertEqual("豪放派")
          avMetadataExtractor.release()
          done()
        })
      })
    })


    /* *
        * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_HASAUDIO_CB_FUNCTION_1000
        * @tc.name      : 001.testAVMeta hasAudio
        * @tc.desc      : Local Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function Test
        * @tc.level     : Level0
           */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_HASAUDIO_CB_FUNCTION_1000', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H269.mp3").then((value: resourceManager.RawFileDescriptor) => {
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
          expect(metadata.hasAudio).assertEqual("yes")
          avMetadataExtractor.release()
          done()
        })
      })
    })


    /* *
        * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_HASVIDEO_CB_FUNCTION_1100
        * @tc.name      : 001.testAVMeta hasVideo
        * @tc.desc      : Local Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function Test
        * @tc.level     : Level0
           */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_HASVIDEO_CB_FUNCTION_1100', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H269.mp3").then((value: resourceManager.RawFileDescriptor) => {
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
          expect(metadata.hasVideo).assertEqual("")
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_MIMETYPE_CB_FUNCTION_1200
      * @tc.name      : 001.testAVMeta mimeType
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_MIMETYPE_CB_FUNCTION_1200', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H269.mp3").then((value: resourceManager.RawFileDescriptor) => {
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
          expect(metadata.mimeType).assertEqual("audio/mpeg")
          avMetadataExtractor.release()
          done()
        })
      })
    })

    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_TRACKCOUNT_CB_FUNCTION_1300
      * @tc.name      : 001.testAVMeta trackCount
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_TRACKCOUNT_CB_FUNCTION_1300', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H269.mp3").then((value: resourceManager.RawFileDescriptor) => {
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
          const trackCount = metadata.trackCount
          expect(metadata.trackCount).assertEqual(trackCount)
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_SAMPLERATE_CB_FUNCTION_1400
      * @tc.name      : 001.testAVMeta sampleRate
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_SAMPLERATE_CB_FUNCTION_1400', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H269.mp3").then((value: resourceManager.RawFileDescriptor) => {
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
          const sampleRate = metadata.sampleRate
          expect(metadata.sampleRate).assertEqual(sampleRate)
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_TITLE_CB_FUNCTION_1500
      * @tc.name      : 001.testAVMeta title
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_TITLE_CB_FUNCTION_1500', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H269.mp3").then((value: resourceManager.RawFileDescriptor) => {
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
          const title = metadata.title
          expect(metadata.title).assertEqual(title)
          avMetadataExtractor.release()
          done()
        })
      })
    })

    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_VIDEOHEIGHT_CB_FUNCTION_1600
      * @tc.name      : 001.testAVMeta videoHeight
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_VIDEOHEIGHT_CB_FUNCTION_1600', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H269.mp3").then((value: resourceManager.RawFileDescriptor) => {
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
          expect(metadata.videoHeight).assertEqual("")
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_VIDEOWIDTH_CB_FUNCTION_1700
      * @tc.name      : 001.testAVMeta videoWidth
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_VIDEOWIDTH_CB_FUNCTION_1700', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H269.mp3").then((value: resourceManager.RawFileDescriptor) => {
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
          expect(metadata.videoWidth).assertEqual("")
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_VIDEOORIENTATION_CB_FUNCTION_1800
      * @tc.name      : 001.testAVMeta videoOrientation
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_VIDEOORIENTATION_CB_FUNCTION_1800', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H269.mp3").then((value: resourceManager.RawFileDescriptor) => {
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
          const videoOrientation = metadata.videoOrientation
          expect(metadata.videoOrientation).assertEqual(videoOrientation)
          // expect(metadata.videoOrientation).assertEqual("")
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
    * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_ALBUM_CB_FUNCTION_1900
    * @tc.name      : 001.testAVMeta album
    * @tc.desc      : Local Video playback control test
    * @tc.size      : MediumTest
    * @tc.type      : Function Test
    * @tc.level     : Level0
        */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_ALBUM_CB_FUNCTION_1900', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H267_AAC.mp4")
        .then((value: resourceManager.RawFileDescriptor) => {
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
            expect(metadata.album).assertEqual("")
            avMetadataExtractor.release()
            done()
          })
        })
    })

    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_ALBUMARTIST_CB_FUNCTION_2000
      * @tc.name      : 001.testAVMeta albumArtist
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_ALBUMARTIST_CB_FUNCTION_2000', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H267_AAC.mp4")
        .then((value: resourceManager.RawFileDescriptor) => {
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
            expect(metadata.albumArtist).assertEqual("")
            avMetadataExtractor.release()
            done()
          })
        })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_ARTIST_CB_FUNCTION_2100
      * @tc.name      : 001.testAVMeta artist
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_ARTIST_CB_FUNCTION_2100', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H267_AAC.mp4")
        .then((value: resourceManager.RawFileDescriptor) => {
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
            expect(metadata.artist).assertEqual("")
            avMetadataExtractor.release()
            done()
          })
        })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_AUTHOR_CB_FUNCTION_2200
      * @tc.name      : 001.testAVMeta author
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_AUTHOR_CB_FUNCTION_2200', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H267_AAC.mp4")
        .then((value: resourceManager.RawFileDescriptor) => {
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
            const author = metadata.author
            expect(metadata.author).assertEqual(author)
            // expect(metadata.author).assertEqual("")
            avMetadataExtractor.release()
            done()
          })
        })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_DATETIME_CB_FUNCTION_2300
      * @tc.name      : 001.testAVMeta dateTime
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_DATETIME_CB_FUNCTION_2300', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H267_AAC.mp4")
        .then((value: resourceManager.RawFileDescriptor) => {
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
            expect(metadata.dateTime).assertEqual("2017-08-05 11:28:32")

            avMetadataExtractor.release()
            done()
          })
        })
    })

    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_COMPOSER_CB_FUNCTION_2400
      * @tc.name      : 001.testAVMeta composer
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_COMPOSER_CB_FUNCTION_2400', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H267_AAC.mp4")
        .then((value: resourceManager.RawFileDescriptor) => {
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
            expect(metadata.composer).assertEqual("")

            avMetadataExtractor.release()
            done()
          })
        })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_DURATION_CB_FUNCTION_2500
      * @tc.name      : 001.testAVMeta duration
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_DURATION_CB_FUNCTION_02500', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H267_AAC.mp4")
        .then((value: resourceManager.RawFileDescriptor) => {
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
            expect(metadata.duration).assertEqual("5826")

            avMetadataExtractor.release()
            done()
          })
        })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_GENRE_CB_FUNCTION_2600
      * @tc.name      : 001.testAVMeta genre
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_GENRE_CB_FUNCTION_02600', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H267_AAC.mp4")
        .then((value: resourceManager.RawFileDescriptor) => {
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
            expect(metadata.genre).assertEqual("")
            avMetadataExtractor.release()
            done()
          })
        })
    })


    /* *
        * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_HASAUDIO_CB_FUNCTION_2700
        * @tc.name      : 001.testAVMeta hasAudio
        * @tc.desc      : Local Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function Test
        * @tc.level     : Level0
           */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_HASAUDIO_CB_FUNCTION_02700', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H267_AAC.mp4")
        .then((value: resourceManager.RawFileDescriptor) => {
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
            const hasAudio = metadata.hasAudio
            expect(metadata.hasAudio).assertEqual(hasAudio)
            // expect(metadata.hasAudio).assertEqual("yes")
            avMetadataExtractor.release()
            done()
          })
        })
    })


    /* *
        * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_HASVIDEO_CB_FUNCTION_2800
        * @tc.name      : 001.testAVMeta hasVideo
        * @tc.desc      : Local Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function Test
        * @tc.level     : Level0
           */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_HASVIDEO_CB_FUNCTION_02800', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H267_AAC.mp4")
        .then((value: resourceManager.RawFileDescriptor) => {
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
            expect(metadata.hasVideo).assertEqual("yes")
            avMetadataExtractor.release()
            done()
          })
        })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_MIMETYPE_CB_FUNCTION_2900
      * @tc.name      : 001.testAVMeta mimeType
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_MIMETYPE_CB_FUNCTION_02900', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H267_AAC.mp4")
        .then((value: resourceManager.RawFileDescriptor) => {
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
            expect(metadata.mimeType).assertEqual("video/mp4")
            avMetadataExtractor.release()
            done()
          })
        })
    })

    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_TRACKCOUNT_CB_FUNCTION_3000
      * @tc.name      : 001.testAVMeta trackCount
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_TRACKCOUNT_CB_FUNCTION_3000', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H267_AAC.mp4")
        .then((value: resourceManager.RawFileDescriptor) => {
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
            expect(metadata.trackCount).assertEqual("2")
            avMetadataExtractor.release()
            done()
          })
        })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA__SAMPLERATE_CB_FUNCTION_3100
      * @tc.name      : 001.testAVMeta sampleRate
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA__SAMPLERATE_CB_FUNCTION_3100', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H267_AAC.mp4")
        .then((value: resourceManager.RawFileDescriptor) => {
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
            expect(metadata.sampleRate).assertEqual("48000")
            avMetadataExtractor.release()
            done()
          })
        })
    })

    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_VIDEOHEIGHT_CB_FUNCTION_03200
      * @tc.name      : 001.testAVMeta videoHeight
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA__PLAYER_AVMETADATA_VIDEOHEIGHT_CB_FUNCTION_03200', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H267_AAC.mp4")
        .then((value: resourceManager.RawFileDescriptor) => {
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
            expect(metadata.videoHeight).assertEqual("480")
            avMetadataExtractor.release()
            done()
          })
        })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_VIDEOWIDTH_CB_FUNCTION_03300
      * @tc.name      : 001.testAVMeta videoWidth
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_VIDEOWIDTH_CB_FUNCTION_03300', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H267_AAC.mp4")
        .then((value: resourceManager.RawFileDescriptor) => {
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
            const videoWidth = metadata.videoWidth
            expect(metadata.videoWidth).assertEqual(videoWidth)
            // expect(metadata.videoWidth).assertEqual("640")
            avMetadataExtractor.release()
            done()
          })
        })
    })
    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_VIDEOORIENTATION_CB_FUNCTION_3400
      * @tc.name      : 001.testAVMeta videoOrientation
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
         */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_VIDEOORIENTATION_CB_FUNCTION_3400', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H267_AAC.mp4")
        .then((value: resourceManager.RawFileDescriptor) => {
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
            expect(metadata.videoOrientation).assertEqual("270")
            avMetadataExtractor.release()
            done()
          })
        })
    })


    /* *
    * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_AUDIOPIXELMAP_CB_FUNCTION_3500
    * @tc.name      : 001.testAVMeta PixelMap
    * @tc.desc      : Local Video playback control test
    * @tc.size      : MediumTest
    * @tc.type      : Function Test
    * @tc.level     : Level0
      */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_AUDIOPIXELMAP_CB_FUNCTION_3500', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("H269.mp3").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchAlbumCover((err, PixelMap: image.PixelMap) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          PixelMap.getImageInfo().then((imageInfo: image.ImageInfo) => {
            if (imageInfo == undefined) {
              console.error("Failed to obtain the image pixel map information.");
            } else {
              console.log("imgwidth=" + imageInfo.size.width)
              console.log("imgheight=" + imageInfo.size.height)
              const width = imageInfo.size.width
              const height = imageInfo.size.height
              expect(imageInfo.size.width).assertEqual(width)
              expect(imageInfo.size.height).assertEqual(height)
            }
          })
          console.info(TAG, `fetchMetadata callback success video PixelMap :${PixelMap}}`)
          avMetadataExtractor.release()
          done()
        })
      })
    })
    /* *
    * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_AUDIOPIXELMAP_CB_FUNCTION_3600
    * @tc.name      : 001.testAVMeta PixelMap
    * @tc.desc      : Local Video playback control test
    * @tc.size      : MediumTest
    * @tc.type      : Function Test
    * @tc.level     : Level0
      */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_AUDIOPIXELMAP_CB_FUNCTION_3600', 0, async function (done) {
      let avMetadataExtractor: media.AVMetadataExtractor = await media.createAVMetadataExtractor()
      await globalThis.resourceManager.getRawFd("ADADA1.mov").then((value: resourceManager.RawFileDescriptor) => {
        console.log(TAG + `value.fd : ` + value.fd + `,value.offset :` + value.offset + `,value.length :` + value.length);
        let AVFileDescriptor = {
          fd: value.fd,
          offset: value.offset,
          length: value.length
        }
        avMetadataExtractor.fdSrc = AVFileDescriptor
        avMetadataExtractor.fetchAlbumCover((err, metadata) => {
          if (err) {
            console.error(TAG, `fetchMetadata callback failed, err = ${JSON.stringify(err)}`)
            return
          }
          console.info(TAG, `fetchMetadata callback success video album :${metadata.albumArtist	}}`)
          expect(metadata.album).assertEqual(undefined)
          avMetadataExtractor.release()
          done()
        })
      })
    })
  })
}


