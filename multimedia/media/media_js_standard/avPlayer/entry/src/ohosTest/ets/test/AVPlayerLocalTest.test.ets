/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import MediaTestBase from './MediaTestBase';
import media from '@ohos.multimedia.media'
import audio from '@ohos.multimedia.audio';
import { testAVPlayerFun, setSource, setSubtitle, PlayTest } from './AVPlayerTestBase';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import { BusinessError } from '@kit.BasicServicesKit';
import { resourceManager } from '@kit.LocalizationKit';

const VIDEO_SOURCE = 'H264_AAC.mp4';
const AUDIO_SOURCE = '01.mp3';
const VIDEO_NOAUDIO = 'H264_NONE.mp4'
const SUBTITLE = 'srt_2800.srt'
const PLAY_TIME = 3000;
const TAG = 'AVPlayerLocalTest:';
const IDLE = 'idle';
const INITIALIZED = 'initialized';
const PREPARED = 'prepared';
const PLAYING = 'playing';
const PAUSED = 'paused';
const COMPLETED = 'completed';
const STOPPED = 'stopped';
const RELEASED = 'released';
const ERROR = 'error';
const PAGE_PATH = "testability/pages/Surface"
let fileDescriptor: media.AVFileDescriptor;
let fileDescriptor2: media.AVFileDescriptor;
let fileDescriptor3: media.AVFileDescriptor;
let avPlayer: media.AVPlayer | null = null;
let fdPath = '';
let fdNumber = 0;
let subtitleFdSrc: media.AVFileDescriptor;
let mediaTestBase = new MediaTestBase()

function setAVPlayerTrackCb(avPlayer: media.AVPlayer | null, descriptionKey: Array<Array<string>>,
  descriptionValue: Array<Array<number>>, done: Function) {
  let arrayDescription: Array<media.MediaDescription> | undefined = undefined;
  let surfaceID: string = globalThis.value;
  avPlayer?.on('stateChange', async (state, reason) => {
    switch (state) {
      case INITIALIZED:
        if (!avPlayer) {
          console.info(`avPlayer is null`);
          break;
        }
        console.info(`case INITIALIZED`);
        avPlayer.surfaceId = surfaceID;
        expect(avPlayer.state).assertEqual(INITIALIZED);
        avPlayer.prepare((err) => {
          console.info('case prepare called' + err);
          if (err != null) {
            console.error(`case prepare error, errMessage is ${err.message}`);
            expect().assertFail();
            done();
          } else if (avPlayer) {
            console.info('case avPlayer.duration: ' + avPlayer.duration);
          }
        });
        break;
      case PREPARED:
        await avPlayer?.getTrackDescription().then((arrayList) => {
          console.info('case getTrackDescription called!!');
          if (typeof (arrayList) != 'undefined') {
            arrayDescription = arrayList;
          } else {
            console.info('case getTrackDescription is failed');
            expect().assertFail();
          }
        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
        expect(descriptionKey.length).assertEqual(arrayDescription?.length);
        if (arrayDescription) {
          for (let i = 0; i < arrayDescription.length; i++) {
            mediaTestBase.checkDescription(arrayDescription[i], descriptionKey[i], descriptionValue[i]);
          }
        }
        avPlayer?.getTrackDescription((error, arrayList) => {
          if (error == null) {
            for (let i = 0; i < arrayList.length; i++) {
              mediaTestBase.checkDescription(arrayList[i], descriptionKey[i], descriptionValue[i]);
            }
          } else {
            console.info('getTrackDescription failed, message is:' + error.message);
          }
          avPlayer?.release();
        })
        break;
      case RELEASED:
        avPlayer = null;
        done();
        break;
      case ERROR:
        expect().assertFail();
        avPlayer?.release().then(() => {
        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
        avPlayer = null;
        break;
      default:
        break;
    }
  })
}

async function testCheckTrackDescription(src: string | media.AVFileDescriptor, avPlayer: media.AVPlayer | null,
  descriptionKey: Array<Array<string>>, descriptionValue: Array<Array<number>>, done: Function) {
  console.info(`case media source: ${src}`)
  media.createAVPlayer((err, video) => {
    console.info(`case media err: ${err}`)
    if (typeof (video) != 'undefined') {
      console.info('case createAVPlayer success');
      avPlayer = video;
      setAVPlayerTrackCb(avPlayer, descriptionKey, descriptionValue, done)
      setSource(avPlayer, src);
    }
    if (err != null) {
      console.error(`case createAVPlayer error, errMessage is ${err.message}`);
      expect().assertFail();
      done();
    }
  });
}

function setPlaybackInfoCb(avPlayer: media.AVPlayer | null, descriptionKey: Array<string>,
  descriptionValue: Array<string>, done: Function) {
  let arrayDescription: media.PlaybackInfo | undefined = undefined;
  ;
  let surfaceID: string = globalThis.value;
  avPlayer?.on('stateChange', async (state, reason) => {
    switch (state) {
      case INITIALIZED:
        if (!avPlayer) {
          console.info(`avPlayer is null`);
          break;
        }
        console.info(`case INITIALIZED`);
        avPlayer.surfaceId = surfaceID;
        expect(avPlayer.state).assertEqual(INITIALIZED);
        avPlayer?.prepare((err) => {
          console.info('case prepare called' + err);
          if (err != null) {
            console.error(`case prepare error, errMessage is ${err.message}`);
            expect().assertFail();
            done();
          } else if (avPlayer) {
            console.info('case avPlayer.duration: ' + avPlayer.duration);
          }
        });
        break;
      case PREPARED:
        await avPlayer?.getPlaybackInfo().then(res => {
          console.info('case getPlaybackInfo called!!');
          if (typeof (res) != 'undefined') {
            arrayDescription = res;
          } else {
            console.info('case getPlaybackInfo is failed');
            expect().assertFail();
          }
        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
        if (arrayDescription) {
          mediaTestBase.checkPlaybackInfo(arrayDescription, descriptionKey, descriptionValue);
        }
        avPlayer?.release();
        break;
      case RELEASED:
        avPlayer = null;
        done();
        break;
      case ERROR:
        expect().assertFail();
        avPlayer?.release().then(() => {
        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
        avPlayer = null;
        break;
      default:
        break;
    }
  })
}

async function testCheckPlaybackInfo(src: string | media.AVFileDescriptor, avPlayer: media.AVPlayer | null,
  descriptionKey: Array<string>, descriptionValue: Array<string>, done: Function) {
  console.info(`case media source: ${src}`)
  media.createAVPlayer((err, video) => {
    if (err != null) {
      console.error(`case createAVPlayer error, errMessage is ${err.message}`);
      expect().assertFail();
      done();
    } else {
      console.info(`case media err: ${err}`)
      if (typeof (video) != 'undefined') {
        console.info('case createAVPlayer success');
        avPlayer = video;
        setPlaybackInfoCb(avPlayer, descriptionKey, descriptionValue, done)
        setSource(avPlayer, src);
      } else {
        console.error(`case createAVPlayer failed`);
        expect().assertFail();
        done();
      }
    }
  });
}

async function setAVPlayerScaleCb(avPlayer: media.AVPlayer | null, done: Function) {
  let surfaceID: string = globalThis.value;
  let count = 0;
  avPlayer?.on('stateChange', async (state, reason) => {
    switch (state) {
      case INITIALIZED:
        if (!avPlayer) {
          console.info(`avPlayer is null`);
          break;
        }
        console.info(`case INITIALIZED`);
        expect(avPlayer.state).assertEqual(INITIALIZED);
        avPlayer.surfaceId = surfaceID;
        avPlayer.prepare((err) => {
          console.info('case prepare called' + err);
          if (avPlayer) {
            avPlayer.loop = true;
          }

          if (err != null) {
            console.error(`case prepare error, errMessage is ${err.message}`);
            expect().assertFail();
            done();
          } else if (avPlayer) {
            console.info('case avPlayer.duration: ' + avPlayer.duration);
          }
        });
        break;
      case PREPARED:
        console.info('case prepare called');
        avPlayer?.play((err) => {
          console.info('case play called' + err);
          if (err != null) {
            console.error(`case play error, errMessage is ${err.message}`);
            expect().assertFail();
            done();
          } else if (avPlayer) {
            console.info('case avPlayer.duration: ' + avPlayer.duration);
          }
        });
        break;
      case PLAYING:
        if (!avPlayer) {
          console.info(`avPlayer is null`);
          break;
        }
        console.info('case playing called');
        for (let i = 0; i < 20; i++) {
          if (count == 0) {
            console.info('case set  videoScaleType : 1');
            avPlayer.videoScaleType = media.VideoScaleType.VIDEO_SCALE_TYPE_FIT_CROP;
            count = 1;
          } else {
            console.info('case set  videoScaleType : 0');
            avPlayer.videoScaleType = media.VideoScaleType.VIDEO_SCALE_TYPE_FIT;
            count = 0;
          }
          await mediaTestBase.msleepAsync(500);
        }
        avPlayer.loop = false;
        break;
      case COMPLETED:
        expect(avPlayer?.state).assertEqual(COMPLETED);
        expect(avPlayer?.currentTime).assertEqual(avPlayer?.duration);
        avPlayer?.release();
        break;
      case RELEASED:
        avPlayer = null;
        done();
        break;
      case ERROR:
        expect().assertFail();
        avPlayer?.release().then(() => {
        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
        avPlayer = null;
        break;
      default:
        break;
    }
  })
}

async function testVideoScaleType(src: string | media.AVFileDescriptor, avPlayer: media.AVPlayer | null,
  done: Function) {
  console.info(`case media source: ${src}`)
  media.createAVPlayer((err, video) => {
    console.info(`case media err: ${err}`)
    if (typeof (video) != 'undefined') {
      console.info('case createAVPlayer success');
      avPlayer = video;
      setAVPlayerScaleCb(avPlayer, done)
      setSource(avPlayer, src);
    }
    if (err != null) {
      console.error(`case createAVPlayer error, errMessage is ${err.message}`);
      expect().assertFail();
      done();
    }
  });
}

async function setOnCallback(avPlayer: media.AVPlayer | null, done: Function) {
  let surfaceID: string = globalThis.value;
  let count = 0;
  let playCount = 0;
  avPlayer?.on('endOfStream', () => {
    count++;
    console.info(TAG + 'endOfStream success')
    avPlayer?.off('endOfStream')
  })
  avPlayer?.on('stateChange', async (state, reason) => {
    switch (state) {
      case INITIALIZED:
        if (!avPlayer) {
          console.info(`avPlayer is null`);
          break;
        }
        console.info(`case INITIALIZED`);
        expect(avPlayer.state).assertEqual(INITIALIZED);
        avPlayer.surfaceId = surfaceID;
        avPlayer.prepare((err) => {
          console.info('case prepare called' + err);
          if (err != null) {
            console.error(`case prepare error, errMessage is ${err.message}`);
            expect().assertFail();
            done();
          } else if (avPlayer) {
            console.info('case avPlayer.duration: ' + avPlayer.duration);
          }
        });
        break;
      case PREPARED:
        console.info('case prepare called');
        avPlayer?.play().then(() => {
          console.info('play called success')
        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
        break;
      case PLAYING:
        if (playCount == 0) {
          playCount++;
          avPlayer?.pause().then(() => {
            console.info('play called success')
          }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
        }
        console.info('case playing called');
        break;
      case PAUSED:
        avPlayer?.play((err) => {
          console.info('case play called');
          if (err != null) {
            console.error(`case play error, errMessage is ${err.message}`);
            expect().assertFail();
            done();
          } else if (avPlayer) {
            console.info('case avPlayer.duration: ' + avPlayer.duration);
          }
        });
        console.info('case pause called');
        break;
      case STOPPED:
        expect(count).assertEqual(1);
        console.info('case stop called');
        avPlayer?.release().then(() => {
          console.info('play stop success')
        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
        break;
      case COMPLETED:
        if (!avPlayer) {
          console.info(`avPlayer is null`);
          break;
        }
        expect(avPlayer.state).assertEqual(COMPLETED);
        expect(avPlayer.currentTime).assertEqual(avPlayer.duration);
        if (playCount == 1) {
          playCount++
          avPlayer?.play().then(() => {
            console.info('play called success')
          }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
        } else {
          avPlayer?.stop().then(() => {
            console.info('play stop success')
          }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
        }
        break;
      case RELEASED:
        avPlayer = null;
        done();
        break;
      case ERROR:
        expect().assertFail();
        avPlayer?.release().then(() => {
        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
        avPlayer = null;
        break;
      default:
        break;
    }
  })
}

function setPlayerPlaybackStrategy(avPlayer: media.AVPlayer | null, playbackStrategy: media.PlaybackStrategy) {
  avPlayer?.setPlaybackStrategy(playbackStrategy).catch((error: BusinessError) => {
    console.error(`setPlaybackStrategy failed, err code ${error.code} msg ${error.message}`)
    expect().assertFail();
  })
}

async function setPlaybackStrategy(avPlayer: media.AVPlayer | null, done: Function) {
  let surfaceID: string = globalThis.value;
  let playbackStrategy: media.PlaybackStrategy = { mutedMediaType: media.MediaType.MEDIA_TYPE_AUD }
  let pauseCount = 0
  let stateChangeCallback = async (state: media.AVPlayerState) => {
    switch (state) {
      case INITIALIZED:
        if (!avPlayer) {
          console.info(`avPlayer is null`);
          break;
        }
        avPlayer.surfaceId = surfaceID;
        setPlayerPlaybackStrategy(avPlayer, playbackStrategy)
        avPlayer.prepare()
        break;
      case PREPARED:
        avPlayer?.play()
        break;
      case PLAYING:
        if (pauseCount++ == 0) {
          avPlayer?.pause()
        }
        break;
      case PAUSED:
        avPlayer?.play()
        break;
      case COMPLETED:
        avPlayer?.release()
        break;
      case RELEASED:
        avPlayer = null;
        done();
        break;
      case ERROR:
        avPlayer?.release().then(() => {
        },
          mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
        avPlayer = null;
        expect().assertFail();
        break;
      default:
        break;
    }
  }
  avPlayer?.on('stateChange', stateChangeCallback)
}

function setPlayerMediaMuted(avPlayer: media.AVPlayer | null) {
  avPlayer?.setMediaMuted(media.MediaType.MEDIA_TYPE_AUD, true).catch((error: BusinessError) => {
    console.error(`setMediaMuted failed, err code ${error.code} msg ${error.message}`)
    expect().assertFail();
  })
}

async function setMediaMuted(avPlayer: media.AVPlayer | null, done: Function) {
  let surfaceID: string = globalThis.value;
  let pauseCount = 0
  let stateChangeCallback = async (state: media.AVPlayerState) => {
    switch (state) {
      case INITIALIZED:
        if (!avPlayer) {
          console.info(`avPlayer is null`);
          break;
        }
        avPlayer.surfaceId = surfaceID;
        avPlayer.prepare()
        break;
      case PREPARED:
        setPlayerMediaMuted(avPlayer)
        avPlayer?.play()
        break;
      case PLAYING:
        setPlayerMediaMuted(avPlayer)
        if (pauseCount++ > 0) {
          break
        }
        avPlayer?.pause()
        break;
      case PAUSED:
        setPlayerMediaMuted(avPlayer)
        avPlayer?.play()
        break;
      case COMPLETED:
        setPlayerMediaMuted(avPlayer)
        avPlayer?.release()
        break;
      case RELEASED:
        avPlayer = null;
        done();
        break;
      case ERROR:
        expect().assertFail();
        avPlayer?.release().then(() => {
        },
          mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
        avPlayer = null;
        break;
      default:
        break;
    }
  }
  avPlayer?.on('stateChange', stateChangeCallback)
}

async function testOffCallback(src: string | media.AVFileDescriptor, avPlayer: media.AVPlayer | null, done: Function) {
  console.info(`case media source: ${src}`)
  media.createAVPlayer((err, video) => {
    console.info(`case media err: ${err}`)
    if (typeof (video) != 'undefined') {
      console.info('case createAVPlayer success');
      avPlayer = video;
      setOnCallback(avPlayer, done)
      setSource(avPlayer, src);
    }
    if (err != null) {
      console.error(`case createAVPlayer error, errMessage is ${err.message}`);
      expect().assertFail();
      done();
    }
  });
}

async function testSubtitle(src: string | media.AVFileDescriptor, subtitleSrc: string | media.AVFileDescriptor,
  avPlayer: media.AVPlayer | null, done: Function) {
  console.info(`case media source: ${src}`)
  media.createAVPlayer((err, video) => {
    console.info(`case media err: ${err}`)
    if (typeof (video) !== 'undefined') {
      console.info('case createAVPlayer success');
      avPlayer = video;
      setOnCallback(avPlayer, done)
      setSource(avPlayer, src);
      setSubtitle(avPlayer, subtitleSrc)
    }
    if (err != null) {
      console.error(`case createAVPlayer error, errMessage is ${err.message}`);
      expect().assertFail();
      done();
    }
  });
}

async function testSetPlaybackStrategy(src: string | media.AVFileDescriptor, avPlayer: media.AVPlayer | null,
  done: Function) {
  console.info(`case media source: ${src}`)
  media.createAVPlayer((err, video) => {
    console.info(`case media err: ${err}`)
    if (typeof (video) !== 'undefined') {
      console.info('case createAVPlayer success');
      avPlayer = video;
      setPlaybackStrategy(avPlayer, done)
      setSource(avPlayer, src);
    }
    if (err != null) {
      console.error(`case createAVPlayer error, errMessage is ${err.message}`);
      expect().assertFail();
      done();
    }
  });
}

async function testSetMediaMuted(src: string | media.AVFileDescriptor, avPlayer: media.AVPlayer | null,
  done: Function) {
  console.info(`case media source: ${src}`)
  media.createAVPlayer((err, video) => {
    console.info(`case media err: ${err}`)
    if (typeof (video) !== 'undefined') {
      console.info('case createAVPlayer success');
      avPlayer = video;
      setMediaMuted(avPlayer, done)
      setSource(avPlayer, src);
    }
    if (err != null) {
      console.error(`case createAVPlayer error, errMessage is ${err.message}`);
      expect().assertFail();
      done();
    }
  });
}

function openFileFailed() {
  console.info('case file fail');
}

export default function AVPlayerLocalTest() {
  describe('AVPlayerLocalTest', () => {
    beforeAll(async () => {
      console.info('beforeAll case');
      // await mediaTestBase.toNewPage(PAGE_PATH, PAGE_PATH, 0)
      await mediaTestBase.getFileDescriptorFromFileDir(VIDEO_SOURCE, openFileFailed).then((res) => {
        fileDescriptor = res;
      });
      await mediaTestBase.getFileDescriptorFromFileDir(AUDIO_SOURCE, openFileFailed).then((res) => {
        fileDescriptor2 = res;
      });
      await mediaTestBase.getFileDescriptorFromFileDir(VIDEO_NOAUDIO, openFileFailed).then((res) => {
        fileDescriptor3 = res;
      });
      await mediaTestBase.getFileDescriptorFromFileDir(SUBTITLE, openFileFailed).then((res) => {
        subtitleFdSrc = res;
      });
    });
    beforeEach(async () => {
      console.info('beforeEach case');
    });
    afterEach(async () => {
      if (avPlayer != null) {
        avPlayer.release().then(() => {
        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
      }
      console.info('afterEach case');
    });
    afterAll(async () => {
      console.info('afterAll case');
      if (fileDescriptor) {

      }
      await mediaTestBase.closeFdNumber(fileDescriptor.fd);
      await mediaTestBase.closeFdNumber(fileDescriptor2.fd);
      await mediaTestBase.closeFdNumber(fileDescriptor3.fd);
      await mediaTestBase.closeFdNumber(subtitleFdSrc.fd);
      await mediaTestBase.clearRouter()
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_FDSRC_0100
        * @tc.name      : 001.test fdsrc
        * @tc.desc      : Local Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_FDSRC_0100', 0, async (done: Function) => {
      let avPlayTest: PlayTest = {
        width: 720, height: 480, duration: 10100
      };
      if (fileDescriptor) {
        testAVPlayerFun(fileDescriptor, avPlayer, avPlayTest, PLAY_TIME, done);
      }
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_GETTRECKDESCRIPTION_0100
        * @tc.name      : 001.test getTrackDescription
        * @tc.desc      : Local Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_GETTRECKDESCRIPTION_0100', 0, async (done: Function) => {
      let videoTrackKey =
        new Array('bitrate', 'codec_mime', 'frame_rate', 'height', 'track_index', 'track_type', 'width');
      let audioTrackKey =
        new Array('bitrate', 'channel_count', 'codec_mime', 'sample_rate', 'track_index', 'track_type');
      let videoTrackValue = new Array(1366541, 0, 6000, 480, 0, 1, 720);
      let audioTrackValue = new Array(129207, 2, 1, 44100, 1, 0);
      let descriptionKey = new Array(videoTrackKey, audioTrackKey);
      let descriptionValue = new Array(videoTrackValue, audioTrackValue);
      if (fileDescriptor) {
        testCheckTrackDescription(fileDescriptor, avPlayer, descriptionKey, descriptionValue, done);
      }
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_GETTRECKDESCRIPTION_0200
        * @tc.name      : 002.test getTrackDescription
        * @tc.desc      : Local Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_GETTRECKDESCRIPTION_0200', 0, async (done: Function) => {
      let audioTrackKey = new Array('channel_count', 'codec_mime', 'sample_rate', 'track_index', 'track_type');
      let audioTrackValue = new Array(1, 2, 48000, 0, 0);
      let descriptionKey = new Array(audioTrackKey);
      let descriptionValue = new Array(audioTrackValue);
      if (fileDescriptor2) {
        testCheckTrackDescription(fileDescriptor2, avPlayer, descriptionKey, descriptionValue, done);
      }
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_GETTRECKDESCRIPTION_0300
        * @tc.name      : 003.test getTrackDescription
        * @tc.desc      : Local Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_GETTRECKDESCRIPTION_0300', 0, async (done: Function) => {
      let videoTrackKey =
        new Array('bitrate', 'codec_mime', 'frame_rate', 'height', 'track_index', 'track_type', 'width');
      let videoTrackValue = new Array(1506121, 0, 6000, 480, 0, 1, 720);
      let descriptionKey = new Array(videoTrackKey);
      let descriptionValue = new Array(videoTrackValue);
      if (fileDescriptor3) {
        testCheckTrackDescription(fileDescriptor3, avPlayer, descriptionKey, descriptionValue, done);
      }

    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_GETPLAYBACKINFO_0100
        * @tc.name      : 003.test getPlaybackInfo
        * @tc.desc      : Local Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_GETPLAYBACKINFO_0100', 0, async (done: Function) => {
      let descriptionKey =
        new Array('server_ip_address', 'average_download_rate', 'download_rate', 'is_downloading', 'buffer_duration');
      let descriptionValue = new Array('', '0', '0', '0', '0');
      if (fileDescriptor) {
        testCheckPlaybackInfo(fileDescriptor, avPlayer, descriptionKey, descriptionValue, done);
      }
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_VIDEOSCALETYPE_0100
        * @tc.name      : 001.test video player videoScaleTpe
        * @tc.desc      : Local Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_VIDEOSCALETYPE_0100', 0, async (done: Function) => {
      if (fileDescriptor) {
        testVideoScaleType(fileDescriptor, avPlayer, done);
      }
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_OFF_CALLBACK_0100
        * @tc.name      : 001.test off callback Function
        * @tc.desc      : Local Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_OFF_CALLBACK_0100', 0, async (done: Function) => {
      if (fileDescriptor) {
        testOffCallback(fileDescriptor, avPlayer, done);
      }
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_MEDIA_VIDEO_SUBTILE_0100
        * @tc.name      : 001.test subtitle Function
        * @tc.desc      : Local Video subtitle control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MULTIMEDIA_MEDIA_VIDEO_SUBTILE_0100', 0, async (done: Function) => {
      if (fileDescriptor && subtitleFdSrc) {
        testSubtitle(fileDescriptor, subtitleFdSrc, avPlayer, done);
      }
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_MEDIA_VIDEO_SUBTILE_0200
        * @tc.name      : 002.test subtitle Function
        * @tc.desc      : Local Video subtitle control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MULTIMEDIA_MEDIA_VIDEO_SUBTILE_0200', 0, async (done: Function) => {
      if (fileDescriptor && subtitleFdSrc) {
        testSubtitle(fileDescriptor, `fd://${subtitleFdSrc.fd}`, avPlayer, done);
      }
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_MEDIA_VIDEO_SET_PLAYBACK_STRATEGY_0100
        * @tc.name      : 001.test setPlaybackStrategy Function
        * @tc.desc      : Local Video subtitle control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MULTIMEDIA_MEDIA_VIDEO_SET_PLAYBACK_STRATEGY_0100', 0, async (done: Function) => {
      if (fileDescriptor) {
        testSetPlaybackStrategy(fileDescriptor, avPlayer, done);
      }
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_MEDIA_VIDEO_MUTE_0100
        * @tc.name      : 001.test setMediaMuted Function
        * @tc.desc      : Local Video subtitle control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MULTIMEDIA_MEDIA_VIDEO_MUTE_0100', 0, async (done: Function) => {
      if (fileDescriptor) {
        testSetMediaMuted(fileDescriptor, avPlayer, done);
      }
    });
  })
}
